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
    int intValue;
    float floatValue;
    bool boolValue;
    char *strValue;
    char *charValue;

    int declareLine;
    bool isConst, isArg, isUsed, isInit, outOfScope;

    char *identifierName;
    char *type;     // variable, const, func
    char *datatype; // int, float, bool, string
    int argList[100];
    int argCount;
    bool assignToFunc;

} symbol;

symbol symbolTable[500];

int symbolTableSize = 0;

int scopeStack[500];
int inLoop = 0;
int blockNumber = 0;
int symbolTableIndex = 0;

int returnExist = 0;
int funcIndex = 0;
int argCount = 0;
int calledFuncIndex = 0;
int isParameter = 0;

int insertResult = -1;
int isPrint = 0;

FILE *error_file = NULL;

void scope_start()
{
    blockNumber++;
    scopeStack[blockNumber] = blockNumber;
}

void scope_end(int number_of_line)
{
    if (funcIndex != -1 && strcmp(symbolTable[funcIndex].type, "func") == 0 && returnExist == 0 && strcmp(symbolTable[funcIndex].datatype, "void") != 0)
    {
        printf("Error at line %d: Missing return statement in Function %s\n", number_of_line, symbolTable[funcIndex].identifierName);
        fprintf(error_file, "Error at line %d: Missing return statement in Function %s\n", number_of_line, symbolTable[funcIndex].identifierName);
        exit(1);
    }
    if (funcIndex != -1 && strcmp(symbolTable[funcIndex].type, "func") == 0 && returnExist == 1 && strcmp(symbolTable[funcIndex].datatype, "void") == 0)
    {
        printf("Error at line %d: %s Void Function can't have return statement\n", number_of_line, symbolTable[funcIndex].identifierName);
        fprintf(error_file, "Error at line %d: %s Void Function can't have return statement\n", number_of_line, symbolTable[funcIndex].identifierName);
        exit(1);
    }
    insertResult = -1;
    funcIndex = -1;
    returnExist = 0;
    for (int i = 0; i < symbolTableIndex; i++)
    {
        if (symbolTable[i].scope == scopeStack[blockNumber])
        {
            symbolTable[i].outOfScope = 1;
        }
    }
    blockNumber--;
}

int is_exist(char *identifierName)
{
    for (int i = 0; i < symbolTableIndex; ++i)
    {
        if (strcmp(symbolTable[i].identifierName, identifierName) == 0 && symbolTable[i].scope == blockNumber && !symbolTable[i].outOfScope)
        {
            return symbolTable[i].declareLine;
        }
    }
    return -1;
}

int insert(char *datatype, char *identifier, char *type, int number_of_line, bool isArg)
{
    int L = is_exist(identifier);
    if (L != -1 && !isArg)
    {
        printf("Error at line %d: %s is already declared in this scope at line %d\n", number_of_line, identifier, L);
        fprintf(error_file, "Error at line %d: %s is already declared in this scope at line %d\n", number_of_line, identifier, L);
        exit(1);
    }

    struct symbol newnode;

    newnode.assignToFunc = false;
    newnode.identifierName = identifier;
    newnode.datatype = datatype;
    newnode.type = type;

    newnode.declareLine = number_of_line;
    newnode.id = symbolTableIndex;
    newnode.isArg = isArg;
    newnode.outOfScope = false;
    newnode.isInit = false;
    newnode.isUsed = false;

    if (newnode.isArg == 1 || inLoop == 1)
    {
        newnode.scope = blockNumber + 1;
    }
    else
    {
        newnode.scope = scopeStack[blockNumber];
    }
    if (strcmp(type, "func") == 0)
    {
        int j = 0;
        for (int i = 0; i < symbolTableIndex; i++)
        {
            if (symbolTable[i].isArg && symbolTable[i].scope == (blockNumber + 1) && !symbolTable[i].assignToFunc)
            {
                newnode.argList[j] = symbolTable[i].id;
                symbolTable[i].assignToFunc = true;
                j++;
            }
        }
        newnode.argCount = j;
    }
    symbolTable[symbolTableIndex] = newnode;
    symbolTableIndex++;
    return newnode.id;
}

void assign_arg_indexes()
{
    if (isParameter == 1)
    {
        if (argCount <= symbolTable[calledFuncIndex].argCount)
        {
            insertResult = symbolTable[calledFuncIndex].argList[argCount];
        }
        else
        {
            insertResult = -1;
        }
    }
}

void assign_int(int index, int value, int number_of_line)
{
    assign_arg_indexes();
    if (isParameter)
    {
        index = insertResult;
    }
    if (index == -1)
    {
        if (!isPrint)
            quadPushInt(value);
        return;
    }
    if (strcmp(symbolTable[index].datatype, "string") == 0 && symbolTable[index].type == "func")
    {
        printf("Type Mismatch Error at line %d: Function %s return type is %s but assigned int\n", number_of_line, symbolTable[index].identifierName, symbolTable[index].datatype);
        fprintf(error_file, "Type Mismatch Error at line %d: Function %s return type is %s but assigned int\n", number_of_line, symbolTable[index].identifierName, symbolTable[index].datatype);
        exit(1);
    }
    symbolTable[index].isInit = 1;
    if (((strcmp(symbolTable[index].datatype, "string") != 0 && strcmp(symbolTable[index].datatype, "char") != 0 && strcmp(symbolTable[index].datatype, "void") != 0) && !symbolTable[index].outOfScope) || isParameter)
    {
        if (strcmp(symbolTable[index].datatype, "float") == 0)
        {
            symbolTable[index].floatValue = (float)value;
            if (!isPrint)
                quadPushFloat(symbolTable[index].floatValue);
        }
        else if (strcmp(symbolTable[index].datatype, "bool") == 0)
        {
            symbolTable[index].boolValue = (bool)value;
            if (!isPrint)
                quadPushInt(symbolTable[index].boolValue);
        }
        else if (strcmp(symbolTable[index].datatype, "int") == 0)
        {
            symbolTable[index].intValue = value;
            if (!isPrint)
                quadPushInt(symbolTable[index].intValue);
        }
    }
    else
    {
        printf("Type Mismatch Error at line %d: %s %s variable assigned int value\n", number_of_line, symbolTable[index].identifierName, symbolTable[index].datatype);
        fprintf(error_file, "Type Mismatch Error at line %d: %s %s variable assigned int value\n", number_of_line, symbolTable[index].identifierName, symbolTable[index].datatype);
        exit(1);
    }
    if (isParameter)
    {
        insertResult = -1;
    }
}

void assign_float(int index, float value, int number_of_line)
{
    assign_arg_indexes();

    if (isParameter)
    {
        index = insertResult;
    }
    if (index == -1)
    {
        if (!isPrint)
            quadPushFloat(value);
        return;
    }
    if (strcmp(symbolTable[index].datatype, "string") == 0 && symbolTable[index].type == "func")
    {
        printf("Type Mismatch Error at line %d: Function %s return type is %s but assigned int\n", number_of_line, symbolTable[index].identifierName, symbolTable[index].datatype);
        fprintf(error_file, "Type Mismatch Error at line %d: Function %s return type is %s but assigned int\n", number_of_line, symbolTable[index].identifierName, symbolTable[index].datatype);
        exit(1);
    }
    symbolTable[index].isInit = 1;
    if (((strcmp(symbolTable[index].datatype, "string") != 0 && strcmp(symbolTable[index].datatype, "char") != 0 && strcmp(symbolTable[index].datatype, "void") != 0) && !symbolTable[index].outOfScope) || isParameter)
    {
        if (strcmp(symbolTable[index].datatype, "float") == 0)
        {
            symbolTable[index].floatValue = value;
            if (!isPrint)
                quadPushFloat(symbolTable[index].floatValue);
        }
        else if (strcmp(symbolTable[index].datatype, "bool") == 0)
        {
            symbolTable[index].boolValue = (bool)value;
            if (!isPrint)
                quadPushInt(symbolTable[index].boolValue);
        }
        else if (strcmp(symbolTable[index].datatype, "int") == 0)
        {
            symbolTable[index].intValue = (int)value;
            if (!isPrint)
                quadPushInt(symbolTable[index].intValue);
        }
    }
    else
    {
        printf("Type Mismatch Error at line %d: %s %s variable assigned int value\n", number_of_line, symbolTable[index].identifierName, symbolTable[index].datatype);
        fprintf(error_file, "Type Mismatch Error at line %d: %s %s variable assigned int value\n", number_of_line, symbolTable[index].identifierName, symbolTable[index].datatype);
        exit(1);
    }
    if (isParameter)
    {
        insertResult = -1;
    }
}

void assign_bool(int index, bool value, int number_of_line)
{
    assign_arg_indexes();
    if (isParameter)
    {
        index = insertResult;
    }
    if (index == -1)
    {
        if (!isPrint)
            quadPushInt(value);
        return;
    }
    if (strcmp(symbolTable[index].datatype, "string") == 0 && symbolTable[index].type == "func")
    {
        printf("Type Mismatch Error at line %d: Function %s return type is %s but assigned int\n", number_of_line, symbolTable[index].identifierName, symbolTable[index].datatype);
        fprintf(error_file, "Type Mismatch Error at line %d: Function %s return type is %s but assigned int\n", number_of_line, symbolTable[index].identifierName, symbolTable[index].datatype);
        exit(1);
    }
    symbolTable[index].isInit = 1;
    if (((strcmp(symbolTable[index].datatype, "string") != 0 && strcmp(symbolTable[index].datatype, "char") != 0 && strcmp(symbolTable[index].datatype, "void") != 0) && !symbolTable[index].outOfScope) || isParameter)
    {
        if (strcmp(symbolTable[index].datatype, "float") == 0)
        {
            symbolTable[index].floatValue = (float)value;
            if (!isPrint)
                quadPushFloat(symbolTable[index].floatValue);
        }
        else if (strcmp(symbolTable[index].datatype, "bool") == 0)
        {
            symbolTable[index].boolValue = value;
            if (!isPrint)
                quadPushInt(symbolTable[index].boolValue);
        }
        else if (strcmp(symbolTable[index].datatype, "int") == 0)
        {
            symbolTable[index].intValue = (int)value;
            if (!isPrint)
                quadPushInt(symbolTable[index].intValue);
        }
    }
    else
    {
        printf("Type Mismatch Error at line %d: %s %s variable assigned bool value\n", number_of_line, symbolTable[index].identifierName, symbolTable[index].datatype);
        fprintf(error_file, "Type Mismatch Error at line %d: %s %s variable assigned bool value\n", number_of_line, symbolTable[index].identifierName, symbolTable[index].datatype);
        exit(1);
    }
    if (isParameter)
    {
        insertResult = -1;
    }
}

void assign_string(int index, char *value, int number_of_line)
{
    assign_arg_indexes();
    if (isParameter)
    {
        index = insertResult;
    }
    if (index == -1)
    {
        if (!isPrint)
            quadPushString(value);
        return;
    }
    if (strcmp(symbolTable[index].datatype, "string") != 0 && symbolTable[index].type == "func")
    {
        printf("Type Mismatch Error at line %d: Function %s return type is %s but assigned string\n", number_of_line, symbolTable[index].identifierName, symbolTable[index].datatype);
        fprintf(error_file, "Type Mismatch Error at line %d: Function %s return type is %s but assigned string\n", number_of_line, symbolTable[index].identifierName, symbolTable[index].datatype);
        exit(1);
    }
    symbolTable[index].isInit = 1;
    if ((strcmp(symbolTable[index].datatype, "string") == 0 && !symbolTable[index].outOfScope) || isParameter)
    {
        symbolTable[index].strValue = value;
        if (!isPrint)
            quadPushString(symbolTable[index].strValue);
    }
    else
    {
        printf("Type Mismatch Error at line %d: %s %s variable assigned string value\n", number_of_line, symbolTable[index].identifierName, symbolTable[index].datatype);
        fprintf(error_file, "Type Mismatch Error at line %d: %s %s variable assigned string value\n", number_of_line, symbolTable[index].identifierName, symbolTable[index].datatype);
        exit(1);
    }
    if (isParameter)
    {
        insertResult = -1;
    }
}

void assign_char(int index, char *value, int number_of_line)
{
    assign_arg_indexes();
    if (isParameter)
    {
        index = insertResult;
    }
    if (index == -1)
    {
        if (!isPrint)
            quadPushChar(value);
        return;
    }
    if (strcmp(symbolTable[index].datatype, "char") != 0 && symbolTable[index].type == "func")
    {
        printf("Type Mismatch Error at line %d: Function %s return type is %s but assigned char\n", number_of_line, symbolTable[index].identifierName, symbolTable[index].datatype);
        fprintf(error_file, "Type Mismatch Error at line %d: Function %s return type is %s but assigned char\n", number_of_line, symbolTable[index].identifierName, symbolTable[index].datatype);
        exit(1);
    }
    symbolTable[index].isInit = 1;
    if ((strcmp(symbolTable[index].datatype, "char") == 0 && !symbolTable[index].outOfScope) || isParameter)
    {
        symbolTable[index].charValue = value;
        if (!isPrint)
            quadPushChar(symbolTable[index].charValue);
    }
    else
    {
        printf("Type Mismatch Error at line %d: %s %s variable assigned char value\n", number_of_line, symbolTable[index].identifierName, symbolTable[index].datatype);
        fprintf(error_file, "Type Mismatch Error at line %d: %s %s variable assigned char value\n", number_of_line, symbolTable[index].identifierName, symbolTable[index].datatype);
        exit(1);
    }
    if (isParameter)
    {
        insertResult = -1;
    }
}

int lookup(char *identifierName, bool is_assignment, int number_of_line)
{
    for (int i = 0; i < symbolTableIndex; ++i)
    {
        if (strcmp(symbolTable[i].identifierName, identifierName) == 0 && !symbolTable[i].outOfScope)
        {
            if (!symbolTable[i].isInit && strcmp(symbolTable[i].type, "var") == 0 && !symbolTable[i].isArg)
            {
                if (!is_assignment)
                {
                    printf("Error at line %d: %s used before initialization\n", number_of_line, identifierName);
                    fprintf(error_file, "Error at line %d: %s used before initialization\n", number_of_line, identifierName);
                    exit(1);
                }
            }
            if (!is_assignment)
            {
                symbolTable[i].isUsed = true;
            }
            return symbolTable[i].id;
        }
    }
    printf("Error at line %d: %s undeclared identifier\n", number_of_line, identifierName);
    fprintf(error_file, "Error at line %d: %s undeclared identifier\n", number_of_line, identifierName);
    exit(1);
}

void check_type(int i, int number_of_line)
{
    if (isParameter == 1)
    {
        if (argCount < symbolTable[calledFuncIndex].argCount)
        {
            insertResult = symbolTable[calledFuncIndex].argList[argCount];
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
    if (symbolTable[i].datatype != symbolTable[insertResult].datatype && (symbolTable[insertResult].datatype == "string" || symbolTable[i].datatype == "string"))
    {
        if (strcmp(symbolTable[i].type, "func") == 0)
        {
            printf("Type Mismatch Error at line %d: %s is %s variable but %s return %s value\n", number_of_line, symbolTable[insertResult].identifierName, symbolTable[insertResult].datatype, symbolTable[i].identifierName, symbolTable[i].datatype);
            fprintf(error_file, "Type Mismatch Error at line %d: %s is %s variable but %s return %s value\n", number_of_line, symbolTable[insertResult].identifierName, symbolTable[insertResult].datatype, symbolTable[i].identifierName, symbolTable[i].datatype);
            exit(1);
        }
        else if (strcmp(symbolTable[insertResult].type, "func") == 0)
        {
            printf("Type Mismatch Error at line %d: %s is %s variable but %s return %s value\n", number_of_line, symbolTable[i].identifierName, symbolTable[i].datatype, symbolTable[insertResult].identifierName, symbolTable[insertResult].datatype);
            fprintf(error_file, "Type Mismatch Error at line %d: %s is %s variable but %s return %s value\n", number_of_line, symbolTable[i].identifierName, symbolTable[i].datatype, symbolTable[insertResult].identifierName, symbolTable[insertResult].datatype);
            exit(1);
        }
        else if (isParameter == 1)
        {
            printf("Type Mismatch Error at line %d: Incorrect argument type %s is %s variable but %s %s\n", number_of_line, symbolTable[insertResult].identifierName, symbolTable[insertResult].datatype, symbolTable[i].identifierName, symbolTable[i].datatype);
            fprintf(error_file, "Type Mismatch Error at line %d: Incorrect argument type %s is %s variable but %s %s\n", number_of_line, symbolTable[insertResult].identifierName, symbolTable[insertResult].datatype, symbolTable[i].identifierName, symbolTable[i].datatype);
            exit(1);
        }
        else
        {
            printf("Type Mismatch Error at line %d: %s is %s variable but %s %s\n", number_of_line, symbolTable[insertResult].identifierName, symbolTable[insertResult].datatype, symbolTable[i].identifierName, symbolTable[i].datatype);
            fprintf(error_file, "Type Mismatch Error at line %d: %s is %s variable but %s %s\n", number_of_line, symbolTable[insertResult].identifierName, symbolTable[insertResult].datatype, symbolTable[i].identifierName, symbolTable[i].datatype);
            exit(1);
        }
    }
    else if (strcmp(symbolTable[insertResult].type, "func") != 0)
    {
        symbolTable[insertResult].isInit = 1;
        if (strcmp(symbolTable[i].datatype, "int") == 0)
        {
            // assign_int(insertResult, symbolTable[i].intValue, number_of_line);
        }
        else if (symbolTable[i].datatype == "float")
        {
            // assign_float(insertResult, symbolTable[i].floatValue, number_of_line);
        }
        else if (strcmp(symbolTable[i].datatype, "string") == 0)
        {
            // assign_string(insertResult, symbolTable[i].strValue, number_of_line);
        }
        else if (symbolTable[i].datatype == "bool")
        {
            // assign_bool(insertResult, symbolTable[i].boolValue, number_of_line);
        }
    }
    if (isParameter == 0)
    {
        insertResult = -1;
    }
}

void arg_count_check(int i, int number_of_line)
{
    if (argCount > symbolTable[i].argCount)
    {
        printf("Error at line %d : too many arguments for function call expected %d got %d\n", number_of_line, symbolTable[i].argCount, argCount);
        fprintf(error_file, "Error at line %d : too many arguments for function call expected %d got %d\n", number_of_line, symbolTable[i].argCount, argCount);
        exit(1);
    }
    else if (argCount < symbolTable[i].argCount)
    {
        printf("Error at line %d : too few arguments for function call expected %d got %d\n", number_of_line, symbolTable[i].argCount, argCount);
        fprintf(error_file, "Error at line %d : too few arguments for function call expected %d got %d\n", number_of_line, symbolTable[i].argCount, argCount);
        exit(1);
    }
}

void display_symbol_table_to_file(const char *filename)
{
    FILE *fp = fopen(filename, "w");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        exit(1);
    }
    fprintf(fp, "ID\tName\tType\tDataType\tLine\tScope\tisInit\tValue\t\tArgs\n");
    for (int i = 0; i < symbolTableIndex; i++)
    {
        struct symbol node = symbolTable[i];
        fprintf(fp, "%d\t%s\t%s\t%s\t\t%d\t%d\t%d\t", node.id, node.identifierName, node.type, node.datatype, node.declareLine, node.scope, node.isInit);
        if (node.isInit == 1)
        {
            if (strcmp(node.datatype, "int") == 0)
            {
                fprintf(fp, "%d\t\t", node.intValue);
            }
            else if (strcmp(node.datatype, "float") == 0)
            {
                fprintf(fp, "%f\t\t", node.floatValue);
            }
            else if (strcmp(node.datatype, "bool") == 0)
            {
                fprintf(fp, "%s\t\t", node.boolValue ? "true" : "false");
            }
            else if (strcmp(node.datatype, "string") == 0)
            {
                fprintf(fp, "%s\t\t", node.strValue);
            }
            else if (strcmp(node.datatype, "char") == 0)
            {
                fprintf(fp, "%s\t\t", node.charValue);
            }
        }
        else
        {
            fprintf(fp, "-\t\t");
        }
        if (strcmp(node.type, "func") == 0)
        {
            for (int j = 0; j < node.argCount; j++)
            {
                fprintf(fp, "%d,", node.argList[j]);
            }
        }
        else
        {
            fprintf(fp, "-");
        }

        fprintf(fp, "\n");
    }
    fclose(fp);
}

void display_symbol_table()
{
    printf("ID\tName\tType\tDataType\tLine\tScope\tisInit\tValue\t\tArgs\n");
    for (int i = 0; i < symbolTableIndex; i++)
    {
        struct symbol node = symbolTable[i];
        printf("%d\t%s\t%s\t%s\t\t%d\t%d\t%d\t", node.id, node.identifierName, node.type, node.datatype, node.declareLine, node.scope, node.isInit);
        if (node.isInit == 1)
        {
            if (strcmp(node.datatype, "int") == 0)
            {
                printf("%d\t\t", node.intValue);
            }
            else if (strcmp(node.datatype, "float") == 0)
            {
                printf("%f\t\t", node.floatValue);
            }
            else if (strcmp(node.datatype, "bool") == 0)
            {
                printf("%s\t\t", node.boolValue ? "true" : "false");
            }
            else if (strcmp(node.datatype, "string") == 0)
            {
                printf("%s\t\t", node.strValue);
            }
            else if (strcmp(node.datatype, "char") == 0)
            {
                printf("%s\t\t", node.charValue);
            }
        }
        else
        {
            printf("-\t\t");
        }
        if (strcmp(node.type, "func") == 0)
        {
            for (int j = 0; j < node.argCount; j++)
            {
                printf("%d,", node.argList[j]);
            }
        }
        else
        {
            printf("-");
        }

        printf("\n");
    }
}

void display_unused_variables_to_file(const char *filename)
{
    FILE *fp = fopen(filename, "w");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        exit(1);
    }
    for (int i = 0; i < symbolTableIndex; ++i)
    {
        symbol current = symbolTable[i];
        if (current.isUsed == false)
        {
            if (strcmp(current.type, "func") == 0)
            {
                fprintf(fp, "Function %s Declared at line %d but never called\n", current.identifierName, current.declareLine);
            }
            else if (current.isArg == 1)
            {
                fprintf(fp, "Unused Argument %s Declared in Function at line %d\n", current.identifierName, current.declareLine);
            }
            else
            {
                fprintf(fp, "Unused Identifier %s Declared at line %d\n", current.identifierName, current.declareLine);
            }
        }
    }
}

void display_unused_variables()
{
    for (int i = 0; i < symbolTableIndex; ++i)
    {
        symbol current = symbolTable[i];
        if (current.isUsed == false)
        {
            if (strcmp(current.type, "func") == 0)
            {
                printf("Function %s Declared at line %d but never called\n", current.identifierName, current.declareLine);
            }
            else if (current.isArg == 1)
            {
                printf("Unused Argument %s Declared in Function at line %d\n", current.identifierName, current.declareLine);
            }
            else
            {
                printf("Unused Identifier %s Declared at line %d\n", current.identifierName, current.declareLine);
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
