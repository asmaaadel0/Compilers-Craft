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

    int declareLine;
    bool isConst, isArg, isUsed, isInit, outOfScope;

    char *identifierName;
    // var, const, func
    char *type;  
    // int, float, bool, string, char   
    char *datatype; 
    
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

void scope_end(int line_number)
{
    if (funcIndex != -1 && strcmp(symbolTable[funcIndex].type, "func") == 0 && returnExist == 0 && strcmp(symbolTable[funcIndex].datatype, "void") != 0)
    {
        printf("Error at line %d: Missing return statement in Function %s\n", line_number, symbolTable[funcIndex].identifierName);
        fprintf(error_file, "Error at line %d: Missing return statement in Function %s\n", line_number, symbolTable[funcIndex].identifierName);
        exit(1);
    }
    if (funcIndex != -1 && strcmp(symbolTable[funcIndex].type, "func") == 0 && returnExist == 1 && strcmp(symbolTable[funcIndex].datatype, "void") == 0)
    {
        printf("Error at line %d: %s Void Function can't have return statement\n", line_number, symbolTable[funcIndex].identifierName);
        fprintf(error_file, "Error at line %d: %s Void Function can't have return statement\n", line_number, symbolTable[funcIndex].identifierName);
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

int insert(char *datatype, char *identifier, char *type, int line_number, bool isArg)
{
    int L = is_exist(identifier);
    if (L != -1 && !isArg)
    {
        printf("Error at line %d: %s is already declared in this scope at line %d\n", line_number, identifier, L);
        fprintf(error_file, "Error at line %d: %s is already declared in this scope at line %d\n", line_number, identifier, L);
        exit(1);
    }

    struct symbol newnode;

    newnode.assignToFunc = false;
    newnode.identifierName = identifier;
    newnode.datatype = datatype;
    newnode.type = type;

    newnode.declareLine = line_number;
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

void assign_int(int index, int value, int line_number)
{
    if (index == -1)
    {
        if (!isPrint)
            quadPushInt(value);
        return;
    }
    if (strcmp(symbolTable[index].datatype, "string") == 0 && symbolTable[index].type == "func")
    {
        printf("Error at line %d: Function %s return type is %s but assigned int\n", line_number, symbolTable[index].identifierName, symbolTable[index].datatype);
        fprintf(error_file, "Error at line %d: Function %s return type is %s but assigned int\n", line_number, symbolTable[index].identifierName, symbolTable[index].datatype);
        exit(1);
    }
    symbolTable[index].isInit = true;
    if (((strcmp(symbolTable[index].datatype, "string") != 0 && strcmp(symbolTable[index].datatype, "char") != 0 && strcmp(symbolTable[index].datatype, "void") != 0) && !symbolTable[index].outOfScope) || isParameter)
    {
        if (strcmp(symbolTable[index].datatype, "float") == 0)
        {
            if (!isPrint)
                quadPushFloat((float)value);
        }
        else if (strcmp(symbolTable[index].datatype, "bool") == 0)
        {
            if (!isPrint)
                quadPushInt((bool)value);
        }
        else if (strcmp(symbolTable[index].datatype, "int") == 0)
        {
            if (!isPrint)
                quadPushInt(value);
        }
    }
    else
    {
        printf("Error at line %d: %s %s variable assigned int value\n", line_number, symbolTable[index].identifierName, symbolTable[index].datatype);
        fprintf(error_file, "Error at line %d: %s %s variable assigned int value\n", line_number, symbolTable[index].identifierName, symbolTable[index].datatype);
        exit(1);
    }
}

void assign_float(int index, float value, int line_number)
{
    if (index == -1)
    {
        if (!isPrint)
            quadPushFloat(value);
        return;
    }
    if (strcmp(symbolTable[index].datatype, "string") == 0 && symbolTable[index].type == "func")
    {
        printf("Error at line %d: Function %s return type is %s but assigned int\n", line_number, symbolTable[index].identifierName, symbolTable[index].datatype);
        fprintf(error_file, "Error at line %d: Function %s return type is %s but assigned int\n", line_number, symbolTable[index].identifierName, symbolTable[index].datatype);
        exit(1);
    }
    symbolTable[index].isInit = true;
    if (((strcmp(symbolTable[index].datatype, "string") != 0 && strcmp(symbolTable[index].datatype, "char") != 0 && strcmp(symbolTable[index].datatype, "void") != 0) && !symbolTable[index].outOfScope) || isParameter)
    {
        if (strcmp(symbolTable[index].datatype, "float") == 0)
        {
            if (!isPrint)
                quadPushFloat(value);
        }
        else if (strcmp(symbolTable[index].datatype, "bool") == 0)
        {
            if (!isPrint)
                quadPushInt((bool)value);
        }
        else if (strcmp(symbolTable[index].datatype, "int") == 0)
        {
            if (!isPrint)
                quadPushInt((int)value);
        }
    }
    else
    {
        printf("Error at line %d: %s %s variable assigned int value\n", line_number, symbolTable[index].identifierName, symbolTable[index].datatype);
        fprintf(error_file, "Error at line %d: %s %s variable assigned int value\n", line_number, symbolTable[index].identifierName, symbolTable[index].datatype);
        exit(1);
    }
}

void assign_bool(int index, bool value, int line_number)
{
    if (index == -1)
    {
        if (!isPrint)
            quadPushInt(value);
        return;
    }
    if (strcmp(symbolTable[index].datatype, "string") == 0 && symbolTable[index].type == "func")
    {
        printf("Error at line %d: Function %s return type is %s but assigned int\n", line_number, symbolTable[index].identifierName, symbolTable[index].datatype);
        fprintf(error_file, "Error at line %d: Function %s return type is %s but assigned int\n", line_number, symbolTable[index].identifierName, symbolTable[index].datatype);
        exit(1);
    }
    symbolTable[index].isInit = true;
    if (((strcmp(symbolTable[index].datatype, "string") != 0 && strcmp(symbolTable[index].datatype, "char") != 0 && strcmp(symbolTable[index].datatype, "void") != 0) && !symbolTable[index].outOfScope) || isParameter)
    {
        if (strcmp(symbolTable[index].datatype, "float") == 0)
        {
            if (!isPrint)
                quadPushFloat((float)value);
        }
        else if (strcmp(symbolTable[index].datatype, "bool") == 0)
        {
            if (!isPrint)
                quadPushInt(value);
        }
        else if (strcmp(symbolTable[index].datatype, "int") == 0)
        {
            if (!isPrint)
                quadPushInt((int)value);
        }
    }
    else
    {
        printf("Error at line %d: %s %s variable assigned bool value\n", line_number, symbolTable[index].identifierName, symbolTable[index].datatype);
        fprintf(error_file, "Error at line %d: %s %s variable assigned bool value\n", line_number, symbolTable[index].identifierName, symbolTable[index].datatype);
        exit(1);
    }
}

void assign_string(int index, char *value, int line_number)
{
    if (index == -1)
    {
        if (!isPrint)
            quadPushString(value);
        return;
    }
    if (strcmp(symbolTable[index].datatype, "string") != 0 && symbolTable[index].type == "func")
    {
        printf("Error at line %d: Function %s return type is %s but assigned string\n", line_number, symbolTable[index].identifierName, symbolTable[index].datatype);
        fprintf(error_file, "Error at line %d: Function %s return type is %s but assigned string\n", line_number, symbolTable[index].identifierName, symbolTable[index].datatype);
        exit(1);
    }
    symbolTable[index].isInit = true;
    if ((strcmp(symbolTable[index].datatype, "string") == 0 && !symbolTable[index].outOfScope) || isParameter)
    {
        if (!isPrint)
            quadPushString(value);
    }
    else
    {
        printf("Error at line %d: %s %s variable assigned string value\n", line_number, symbolTable[index].identifierName, symbolTable[index].datatype);
        fprintf(error_file, "Error at line %d: %s %s variable assigned string value\n", line_number, symbolTable[index].identifierName, symbolTable[index].datatype);
        exit(1);
    }
}

void assign_char(int index, char *value, int line_number)
{
    if (index == -1)
    {
        if (!isPrint)
            quadPushChar(value);
        return;
    }
    if (strcmp(symbolTable[index].datatype, "char") != 0 && symbolTable[index].type == "func")
    {
        printf("Error at line %d: Function %s return type is %s but assigned char\n", line_number, symbolTable[index].identifierName, symbolTable[index].datatype);
        fprintf(error_file, "Error at line %d: Function %s return type is %s but assigned char\n", line_number, symbolTable[index].identifierName, symbolTable[index].datatype);
        exit(1);
    }
    symbolTable[index].isInit = true;
    if ((strcmp(symbolTable[index].datatype, "char") == 0 && !symbolTable[index].outOfScope) || isParameter)
    {
        if (!isPrint)
            quadPushChar(value);
    }
    else
    {
        printf("Error at line %d: %s %s variable assigned char value\n", line_number, symbolTable[index].identifierName, symbolTable[index].datatype);
        fprintf(error_file, "Error at line %d: %s %s variable assigned char value\n", line_number, symbolTable[index].identifierName, symbolTable[index].datatype);
        exit(1);
    }
}

int lookup(char *identifierName, bool is_assignment, int line_number)
{
    for (int i = 0; i < symbolTableIndex; ++i)
    {
        if (strcmp(symbolTable[i].identifierName, identifierName) == 0 && !symbolTable[i].outOfScope)
        {
            if (!symbolTable[i].isInit && strcmp(symbolTable[i].type, "var") == 0 && !symbolTable[i].isArg)
            {
                if (!is_assignment)
                {
                    printf("Error at line %d: %s used before initialization\n", line_number, identifierName);
                    fprintf(error_file, "Error at line %d: %s used before initialization\n", line_number, identifierName);
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
    printf("Error at line %d: %s undeclared identifier\n", line_number, identifierName);
    fprintf(error_file, "Error at line %d: %s undeclared identifier\n", line_number, identifierName);
    exit(1);
}

void check_type(int i, int line_number)
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
            printf("Error at line %d: %s is %s variable but %s return %s value\n", line_number, symbolTable[insertResult].identifierName, symbolTable[insertResult].datatype, symbolTable[i].identifierName, symbolTable[i].datatype);
            fprintf(error_file, "Error at line %d: %s is %s variable but %s return %s value\n", line_number, symbolTable[insertResult].identifierName, symbolTable[insertResult].datatype, symbolTable[i].identifierName, symbolTable[i].datatype);
            exit(1);
        }
        else if (strcmp(symbolTable[insertResult].type, "func") == 0)
        {
            printf("Error at line %d: %s is %s variable but %s return %s value\n", line_number, symbolTable[i].identifierName, symbolTable[i].datatype, symbolTable[insertResult].identifierName, symbolTable[insertResult].datatype);
            fprintf(error_file, "Error at line %d: %s is %s variable but %s return %s value\n", line_number, symbolTable[i].identifierName, symbolTable[i].datatype, symbolTable[insertResult].identifierName, symbolTable[insertResult].datatype);
            exit(1);
        }
        else if (isParameter == 1)
        {
            printf("Error at line %d: Incorrect argument type %s is %s variable but %s %s\n", line_number, symbolTable[insertResult].identifierName, symbolTable[insertResult].datatype, symbolTable[i].identifierName, symbolTable[i].datatype);
            fprintf(error_file, "Error at line %d: Incorrect argument type %s is %s variable but %s %s\n", line_number, symbolTable[insertResult].identifierName, symbolTable[insertResult].datatype, symbolTable[i].identifierName, symbolTable[i].datatype);
            exit(1);
        }
        else
        {
            printf("Error at line %d: %s is %s variable but %s %s\n", line_number, symbolTable[insertResult].identifierName, symbolTable[insertResult].datatype, symbolTable[i].identifierName, symbolTable[i].datatype);
            fprintf(error_file, "Error at line %d: %s is %s variable but %s %s\n", line_number, symbolTable[insertResult].identifierName, symbolTable[insertResult].datatype, symbolTable[i].identifierName, symbolTable[i].datatype);
            exit(1);
        }
    }
    else if (strcmp(symbolTable[insertResult].type, "func") != 0)
    {
        symbolTable[insertResult].isInit = true;
    }
    if (isParameter == 0)
    {
        insertResult = -1;
    }
}

void arg_count_check(int i, int line_number)
{
    if (argCount > symbolTable[i].argCount)
    {
        printf("Error at line %d : too many arguments for function call expected %d got %d\n", line_number, symbolTable[i].argCount, argCount);
        fprintf(error_file, "Error at line %d : too many arguments for function call expected %d got %d\n", line_number, symbolTable[i].argCount, argCount);
        exit(1);
    }
    else if (argCount < symbolTable[i].argCount)
    {
        printf("Error at line %d : too few arguments for function call expected %d got %d\n", line_number, symbolTable[i].argCount, argCount);
        fprintf(error_file, "Error at line %d : too few arguments for function call expected %d got %d\n", line_number, symbolTable[i].argCount, argCount);
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
    fprintf(fp, "ID\tName\tType\tDataType\tLine\tScope\tisInit\tArgs\n");
    for (int i = 0; i < symbolTableIndex; i++)
    {
        struct symbol node = symbolTable[i];
        fprintf(fp, "%d\t%s\t%s\t%s\t\t%d\t%d\t%d\t", node.id, node.identifierName, node.type, node.datatype, node.declareLine, node.scope, node.isInit);
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
    printf("ID\tName\tType\tDataType\tLine\tScope\tisInit\tArgs\n");
    for (int i = 0; i < symbolTableIndex; i++)
    {
        struct symbol node = symbolTable[i];
        printf("%d\t%s\t%s\t%s\t\t%d\t%d\t%d\t", node.id, node.identifierName, node.type, node.datatype, node.declareLine, node.scope, node.isInit);
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
