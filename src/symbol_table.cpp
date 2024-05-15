#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

#include "./quadruples.cpp"

#define BUFFER_SIZE 1024
#define TOKEN_SIZE 32

typedef struct symbol
{

    int id, scope;

    int declarationLine;
    bool isArgFunc, isUsed, isInitialized, isScopeEnded;

    char *identifierName;
    // constant, variable, function.
    char *type;
    // int, float, string, char, bool.
    char *datatype;

    int funcArguments[100];
    int funcArgCount;
    bool assignToFunc;

} symbol;

symbol symbolTableArray[500];

int symbolTableArraySize = 0;

int isLoop = 0;
int blockNumber = 0;
int symbolTableArrayIndex = 0;

int returnExist = 0;
int funcIndex = 0;
int funcArgCount = 0;
int calledFuncIndex = 0;
int isParameter = 0;

int insertResult = -1;
int isPrint = 0;

FILE *error_file = NULL;

void enter_new_scope()
{
    blockNumber++;
}

void leave_scope(int line_number)
{
    // if it's a function, haven't return, it's type isn't void
    if (funcIndex != -1 && strcmp(symbolTableArray[funcIndex].type, "function") == 0 && returnExist == 0 && strcmp(symbolTableArray[funcIndex].datatype, "void") != 0)
    {
        printf("Error at line %d: Missing 'return' in Function\n", line_number);
        fprintf(error_file, "Error at line %d: Missing 'return' in Function %s\n", line_number, symbolTableArray[funcIndex].identifierName);
        exit(EXIT_FAILURE);
    }
    // if it's a function, have return, it's type is void
    if (funcIndex != -1 && strcmp(symbolTableArray[funcIndex].type, "function") == 0 && returnExist == 1 && strcmp(symbolTableArray[funcIndex].datatype, "void") == 0)
    {
        printf("Error at line %d: it's a void Function can't have 'return'\n", line_number);
        fprintf(error_file, "Error at line %d: it's a void Function can't have 'return'\n", line_number);
        exit(EXIT_FAILURE);
    }
    insertResult = -1;
    funcIndex = -1;
    returnExist = 0;
    // make all variables in the end scope --> scope ended
    for (int i = 0; i < symbolTableArrayIndex; i++)
    {
        if (symbolTableArray[i].scope == blockNumber)
        {
            symbolTableArray[i].isScopeEnded = true;
        }
    }
    blockNumber--;
}

int is_exist(char *identifierName)
{
    // search for variables for error already declared
    for (int i = 0; i < symbolTableArrayIndex; ++i)
    {
        if (strcmp(symbolTableArray[i].identifierName, identifierName) == 0 && symbolTableArray[i].scope == blockNumber && !symbolTableArray[i].isScopeEnded)
        {
            return symbolTableArray[i].declarationLine;
        }
    }
    return -1;
}

int insert(char *datatype, char *identifier, char *type, int line_number, bool isArgFunc)
{
    int L = is_exist(identifier);
    // check for redeclared error
    if (L != -1 && !isArgFunc)
    {
        printf("Error at line %d: %s is already declared in this scope at line %d\n", line_number, identifier, L);
        fprintf(error_file, "Error at line %d: %s is already declared in this scope at line %d\n", line_number, identifier, L);
        exit(EXIT_FAILURE);
    }

    struct symbol newItem;

    newItem.identifierName = identifier;
    newItem.datatype = datatype;
    newItem.type = type;

    newItem.declarationLine = line_number;
    newItem.id = symbolTableArrayIndex;

    newItem.isArgFunc = isArgFunc;
    newItem.assignToFunc = false;
    newItem.isScopeEnded = false;
    newItem.isInitialized = false;
    newItem.isUsed = false;

    if (newItem.isArgFunc == 1 || isLoop == 1)
    {
        newItem.scope = blockNumber + 1;
    }
    else
    {
        newItem.scope = blockNumber;
    }
    if (strcmp(type, "function") == 0)
    {
        int j = 0;
        for (int i = 0; i < symbolTableArrayIndex; i++)
        {
            if (symbolTableArray[i].isArgFunc && symbolTableArray[i].scope == (blockNumber + 1) && !symbolTableArray[i].assignToFunc)
            {
                newItem.funcArguments[j] = symbolTableArray[i].id;
                symbolTableArray[i].assignToFunc = true;
                j++;
            }
        }
        newItem.funcArgCount = j;
    }
    symbolTableArray[symbolTableArrayIndex] = newItem;
    symbolTableArrayIndex++;
    return newItem.id;
}

void check_int_value(int index, int value, int line_number)
{
    // not assignment operator
    if (index == -1)
    {
        if (!isPrint)
            quadPushInt(value);
        return;
    }
    if ((strcmp(symbolTableArray[index].datatype, "string") == 0 ||
         strcmp(symbolTableArray[index].datatype, "char") == 0) &&
        symbolTableArray[index].type == "function")
    {
        printf("Error at line %d: function %s type is'%s' but assigned 'int'\n", line_number, symbolTableArray[index].identifierName, symbolTableArray[index].datatype);
        fprintf(error_file, "Error at line %d: function '%s' type is %s but assigned 'int'\n", line_number, symbolTableArray[index].identifierName, symbolTableArray[index].datatype);
        exit(EXIT_FAILURE);
    }
    symbolTableArray[index].isInitialized = true;
    if (((strcmp(symbolTableArray[index].datatype, "string") != 0 &&
          strcmp(symbolTableArray[index].datatype, "char") != 0 &&
          strcmp(symbolTableArray[index].datatype, "void") != 0) &&
         !symbolTableArray[index].isScopeEnded) ||
        isParameter)
    {
        if (strcmp(symbolTableArray[index].datatype, "float") == 0)
        {
            if (!isPrint)
                quadPushFloat((float)value);
        }
        else if (strcmp(symbolTableArray[index].datatype, "bool") == 0)
        {
            if (!isPrint)
                quadPushInt((bool)value);
        }
        else if (strcmp(symbolTableArray[index].datatype, "int") == 0)
        {
            if (!isPrint)
                quadPushInt(value);
        }
    }
    else
    {
        printf("Error at line %d: %s '%s' variable assigned 'int' value\n", line_number, symbolTableArray[index].identifierName, symbolTableArray[index].datatype);
        fprintf(error_file, "Error at line %d: %s '%s' variable assigned 'int' value\n", line_number, symbolTableArray[index].identifierName, symbolTableArray[index].datatype);
        exit(EXIT_FAILURE);
    }
}

void check_float_value(int index, float value, int line_number)
{
    if (index == -1)
    {
        if (!isPrint)
            quadPushFloat(value);
        return;
    }
    if ((strcmp(symbolTableArray[index].datatype, "string") == 0 ||
         strcmp(symbolTableArray[index].datatype, "char") == 0) &&
        symbolTableArray[index].type == "function")
    {
        printf("Error at line %d: function '%s' type is %s but assigned 'float'\n", line_number, symbolTableArray[index].identifierName, symbolTableArray[index].datatype);
        fprintf(error_file, "Error at line %d: function '%s' type is %s but assigned 'float'\n", line_number, symbolTableArray[index].identifierName, symbolTableArray[index].datatype);
        exit(EXIT_FAILURE);
    }
    symbolTableArray[index].isInitialized = true;
    if (((strcmp(symbolTableArray[index].datatype, "string") != 0 &&
          strcmp(symbolTableArray[index].datatype, "char") != 0 &&
          strcmp(symbolTableArray[index].datatype, "void") != 0) &&
         !symbolTableArray[index].isScopeEnded) ||
        isParameter)
    {
        if (strcmp(symbolTableArray[index].datatype, "float") == 0)
        {
            if (!isPrint)
                quadPushFloat(value);
        }
        else if (strcmp(symbolTableArray[index].datatype, "bool") == 0)
        {
            if (!isPrint)
                quadPushInt((bool)value);
        }
        else if (strcmp(symbolTableArray[index].datatype, "int") == 0)
        {
            if (!isPrint)
                quadPushInt((int)value);
        }
    }
    else
    {
        printf("Error at line %d: %s '%s' variable assigned 'float' value\n", line_number, symbolTableArray[index].identifierName, symbolTableArray[index].datatype);
        fprintf(error_file, "Error at line %d: %s '%s' variable assigned 'float' value\n", line_number, symbolTableArray[index].identifierName, symbolTableArray[index].datatype);
        exit(EXIT_FAILURE);
    }
}

void check_bool_value(int index, bool value, int line_number)
{
    if (index == -1)
    {
        if (!isPrint)
            quadPushInt(value);
        return;
    }
    if ((strcmp(symbolTableArray[index].datatype, "string") == 0 ||
         strcmp(symbolTableArray[index].datatype, "char") == 0) &&
        symbolTableArray[index].type == "function")
    {
        printf("Error at line %d: function %s type is '%s' but assigned 'bool'\n", line_number, symbolTableArray[index].identifierName, symbolTableArray[index].datatype);
        fprintf(error_file, "Error at line %d: function %s type is '%s' but assigned 'bool'\n", line_number, symbolTableArray[index].identifierName, symbolTableArray[index].datatype);
        exit(EXIT_FAILURE);
    }
    symbolTableArray[index].isInitialized = true;
    if (((strcmp(symbolTableArray[index].datatype, "string") != 0 && strcmp(symbolTableArray[index].datatype, "char") != 0 && strcmp(symbolTableArray[index].datatype, "void") != 0) && !symbolTableArray[index].isScopeEnded) || isParameter)
    {
        if (strcmp(symbolTableArray[index].datatype, "float") == 0)
        {
            if (!isPrint)
                quadPushFloat((float)value);
        }
        else if (strcmp(symbolTableArray[index].datatype, "bool") == 0)
        {
            if (!isPrint)
                quadPushInt(value);
        }
        else if (strcmp(symbolTableArray[index].datatype, "int") == 0)
        {
            if (!isPrint)
                quadPushInt((int)value);
        }
    }
    else
    {
        printf("Error at line %d: %s '%s' variable assigned 'bool' value\n", line_number, symbolTableArray[index].identifierName, symbolTableArray[index].datatype);
        fprintf(error_file, "Error at line %d: %s '%s' variable assigned 'bool' value\n", line_number, symbolTableArray[index].identifierName, symbolTableArray[index].datatype);
        exit(EXIT_FAILURE);
    }
}

void check_string_value(int index, char *value, int line_number)
{
    if (index == -1)
    {
        if (!isPrint)
            quadPushString(value);
        return;
    }
    if (strcmp(symbolTableArray[index].datatype, "string") != 0 &&
        symbolTableArray[index].type == "function")
    {
        printf("Error at line %d: function %s type is '%s' but assigned 'string'\n", line_number, symbolTableArray[index].identifierName, symbolTableArray[index].datatype);
        fprintf(error_file, "Error at line %d: function %s type is '%s' but assigned string\n", line_number, symbolTableArray[index].identifierName, symbolTableArray[index].datatype);
        exit(EXIT_FAILURE);
    }
    symbolTableArray[index].isInitialized = true;
    if ((strcmp(symbolTableArray[index].datatype, "string") == 0 &&
         !symbolTableArray[index].isScopeEnded) ||
        isParameter)
    {
        if (!isPrint)
            quadPushString(value);
    }
    else
    {
        printf("Error at line %d: %s '%s' variable assigned 'string' value\n", line_number, symbolTableArray[index].identifierName, symbolTableArray[index].datatype);
        fprintf(error_file, "Error at line %d: %s '%s' variable assigned 'string' value\n", line_number, symbolTableArray[index].identifierName, symbolTableArray[index].datatype);
        exit(EXIT_FAILURE);
    }
}

void check_char_value(int index, char *value, int line_number)
{
    if (index == -1)
    {
        if (!isPrint)
            quadPushChar(value);
        return;
    }
    if (strcmp(symbolTableArray[index].datatype, "char") != 0 &&
        symbolTableArray[index].type == "function")
    {
        printf("Error at line %d: function %s type is '%s' but assigned 'char'\n", line_number, symbolTableArray[index].identifierName, symbolTableArray[index].datatype);
        fprintf(error_file, "Error at line %d: function %s type is '%s' but assigned 'char'\n", line_number, symbolTableArray[index].identifierName, symbolTableArray[index].datatype);
        exit(EXIT_FAILURE);
    }
    symbolTableArray[index].isInitialized = true;
    if ((strcmp(symbolTableArray[index].datatype, "char") == 0 && !symbolTableArray[index].isScopeEnded) || isParameter)
    {
        if (!isPrint)
            quadPushChar(value);
    }
    else
    {
        printf("Error at line %d: %s '%s' variable assigned 'char' value\n", line_number, symbolTableArray[index].identifierName, symbolTableArray[index].datatype);
        fprintf(error_file, "Error at line %d: %s '%s' variable assigned 'char' value\n", line_number, symbolTableArray[index].identifierName, symbolTableArray[index].datatype);
        exit(EXIT_FAILURE);
    }
}

int lookup(char *identifierName, bool is_assignment, int line_number)
{
    // handle undeclared identifier, used identifier before initialization
    for (int i = 0; i < symbolTableArrayIndex; ++i)
    {
        if (strcmp(symbolTableArray[i].identifierName, identifierName) == 0 &&
            !symbolTableArray[i].isScopeEnded)
        {
            if (!symbolTableArray[i].isInitialized &&
                strcmp(symbolTableArray[i].type, "variable") == 0 &&
                !symbolTableArray[i].isArgFunc)
            {
                if (!is_assignment)
                {
                    printf("Error at line %d: %s used before initialization\n", line_number, identifierName);
                    fprintf(error_file, "Error at line %d: %s used before initialization\n", line_number, identifierName);
                    exit(EXIT_FAILURE);
                }
            }
            if (!is_assignment)
            {
                symbolTableArray[i].isUsed = true;
            }
            return symbolTableArray[i].id;
        }
    }
    printf("Error at line %d: %s undeclared identifier\n", line_number, identifierName);
    fprintf(error_file, "Error at line %d: %s undeclared identifier\n", line_number, identifierName);
    exit(EXIT_FAILURE);
}

void check_variable_type(int i, int line_number)
{
    if (isParameter == 1)
    {
        if (funcArgCount < symbolTableArray[calledFuncIndex].funcArgCount)
        {
            insertResult = symbolTableArray[calledFuncIndex].funcArguments[funcArgCount];
        }
        else
        {
            insertResult = -1;
        }
    }
    if (i == -1 || insertResult == -1)
    {
        return;
    }
    if (symbolTableArray[i].datatype != symbolTableArray[insertResult].datatype &&
        ((symbolTableArray[insertResult].datatype == "string" ||
          symbolTableArray[i].datatype == "string") ||
         (symbolTableArray[insertResult].datatype == "char" ||
          symbolTableArray[i].datatype == "char")))
    {
        if (strcmp(symbolTableArray[i].type, "function") == 0)
        {
            printf("Error at line %d: %s '%s' variable but %s type is '%s'\n", line_number, symbolTableArray[insertResult].identifierName, symbolTableArray[insertResult].datatype, symbolTableArray[i].identifierName, symbolTableArray[i].datatype);
            fprintf(error_file, "Error at line %d: %s '%s' variable but %s type is '%s'\n", line_number, symbolTableArray[insertResult].identifierName, symbolTableArray[insertResult].datatype, symbolTableArray[i].identifierName, symbolTableArray[i].datatype);
            exit(EXIT_FAILURE);
        }
        else if (strcmp(symbolTableArray[insertResult].type, "function") == 0)
        {
            printf("Error at line %d: %s '%s' variable but %s type is '%s'\n", line_number, symbolTableArray[i].identifierName, symbolTableArray[i].datatype, symbolTableArray[insertResult].identifierName, symbolTableArray[insertResult].datatype);
            fprintf(error_file, "Error at line %d: %s '%s' variable but %s type is '%s'\n", line_number, symbolTableArray[i].identifierName, symbolTableArray[i].datatype, symbolTableArray[insertResult].identifierName, symbolTableArray[insertResult].datatype);
            exit(EXIT_FAILURE);
        }
        else if (isParameter == 1)
        {
            printf("Error at line %d: Incorrect argument type %s is %s variable but %s %s\n", line_number, symbolTableArray[insertResult].identifierName, symbolTableArray[insertResult].datatype, symbolTableArray[i].identifierName, symbolTableArray[i].datatype);
            fprintf(error_file, "Error at line %d: Incorrect argument type %s is %s variable but %s %s\n", line_number, symbolTableArray[insertResult].identifierName, symbolTableArray[insertResult].datatype, symbolTableArray[i].identifierName, symbolTableArray[i].datatype);
            exit(EXIT_FAILURE);
        }
        else
        {
            printf("Error at line %d: %s is %s variable but %s %s\n", line_number, symbolTableArray[insertResult].identifierName, symbolTableArray[insertResult].datatype, symbolTableArray[i].identifierName, symbolTableArray[i].datatype);
            fprintf(error_file, "Error at line %d: %s is %s variable but %s %s\n", line_number, symbolTableArray[insertResult].identifierName, symbolTableArray[insertResult].datatype, symbolTableArray[i].identifierName, symbolTableArray[i].datatype);
            exit(EXIT_FAILURE);
        }
    }
    else if (strcmp(symbolTableArray[insertResult].type, "function") != 0)
    {
        symbolTableArray[insertResult].isInitialized = true;
    }
    if (isParameter == 0)
    {
        insertResult = -1;
    }
}

void check_arg_count(int i, int line_number)
{
    if (funcArgCount > symbolTableArray[i].funcArgCount)
    {
        printf("Error at line %d : too many arguments for function call expected %d got %d\n", line_number, symbolTableArray[i].funcArgCount, funcArgCount);
        fprintf(error_file, "Error at line %d : too many arguments for function call expected %d got %d\n", line_number, symbolTableArray[i].funcArgCount, funcArgCount);
        exit(EXIT_FAILURE);
    }
    else if (funcArgCount < symbolTableArray[i].funcArgCount)
    {
        printf("Error at line %d : too few arguments for function call expected %d got %d\n", line_number, symbolTableArray[i].funcArgCount, funcArgCount);
        fprintf(error_file, "Error at line %d : too few arguments for function call expected %d got %d\n", line_number, symbolTableArray[i].funcArgCount, funcArgCount);
        exit(EXIT_FAILURE);
    }
}

void display_symbol_table_to_file(const char *filename)
{
    FILE *fp = fopen(filename, "w");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        exit(EXIT_FAILURE);
    }
    fprintf(fp, "ID\tName\tType\t\tDataType\tLine\tScope\tisInitialized\n");
    for (int i = 0; i < symbolTableArrayIndex; i++)
    {
        struct symbol node = symbolTableArray[i];
        fprintf(fp, "%d\t%s\t%s\t%s\t\t%d\t%d\t%d\t", node.id, node.identifierName, node.type, node.datatype, node.declarationLine, node.scope, node.isInitialized);
        fprintf(fp, "\n");
    }
    fclose(fp);
}

void display_symbol_table()
{
    printf("ID\tName\tType\t\tDataType\tLine\tScope\tisInitialized\n");
    for (int i = 0; i < symbolTableArrayIndex; i++)
    {
        struct symbol node = symbolTableArray[i];
        printf("%d\t%s\t%s\t%s\t\t%d\t%d\t%d\t", node.id, node.identifierName, node.type, node.datatype, node.declarationLine, node.scope, node.isInitialized);
        printf("\n");
    }
}

void display_unused_variables_to_file(const char *filename)
{
    FILE *fp = fopen(filename, "w");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < symbolTableArrayIndex; ++i)
    {
        if (symbolTableArray[i].isUsed == false)
        {
            if (strcmp(symbolTableArray[i].type, "function") == 0)
            {
                fprintf(fp, "function %s Declared at line %d but never used\n", symbolTableArray[i].identifierName, symbolTableArray[i].declarationLine);
            }
            else if (symbolTableArray[i].isArgFunc == 1)
            {
                fprintf(fp, "argument %s Declared in function at line %d but never used\n", symbolTableArray[i].identifierName, symbolTableArray[i].declarationLine);
            }
            else
            {
                fprintf(fp, "identifier %s Declared at line %d but never used\n", symbolTableArray[i].identifierName, symbolTableArray[i].declarationLine);
            }
        }
    }
}

void display_unused_variables()
{
    for (int i = 0; i < symbolTableArrayIndex; ++i)
    {
        if (symbolTableArray[i].isUsed == false)
        {
            if (strcmp(symbolTableArray[i].type, "function") == 0)
            {
                printf("function %s Declared at line %d but never used\n", symbolTableArray[i].identifierName, symbolTableArray[i].declarationLine);
            }
            else if (symbolTableArray[i].isArgFunc == 1)
            {
                printf("argument %s Declared in function at line %d but never used\n", symbolTableArray[i].identifierName, symbolTableArray[i].declarationLine);
            }
            else
            {
                printf("identifier %s Declared at line %d but never used\n", symbolTableArray[i].identifierName, symbolTableArray[i].declarationLine);
            }
        }
    }
}

int remove_file()
{
    remove("./output/symbol_table.txt");
    remove("./output/quadruples.txt");
    remove("./output/unused_variables.txt");
    remove("./output/error_file.txt");
}
