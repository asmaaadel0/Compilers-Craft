#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define BUFFER_SIZE 1024
#define TOKEN_SIZE 32

typedef struct enumNode
{
    char *keys[100];
    int values[100];
} enumNode;

typedef struct symbol
{

    int id, scope;
    char *name, value;
    int intValue;
    float floatValue;
    bool boolValue;
    char *strValue;

    int declareLine;
    bool isConst, isArg, isUsed, isInit, outOfScope;

    char *identifierName;
    char *type;     // variable, const, func, enum_arg, var_enum
    char *datatype; // int, float, bool, string
    int argList[100];
    int argEnum[100];
    int argCount;

    struct enumNode enumValue;
} symbol;

symbol symbolTable[500];
int symbolTableSize = 0;

int scopeStack[500];
int scopeIndex = 0;
int inLoop = 0;
int blockNumber = 0;
int symbolTableIndex = 0;

int returnExist = 0;
int funcIndex = 0;
int argCount = 0;
int calledFuncIndex = 0;
int isParameter = 0;

int insertResult = 0;

int enumArgCount = 0;
char *enumKeys[100];
int enumValues[100];
int isEnum = 0;

void scope_start()
{
    blockNumber++;
    scopeIndex++;
    scopeStack[scopeIndex] = blockNumber;
}

void scope_end(int number_of_line)
{
    if (funcIndex != -1 && strcmp(symbolTable[funcIndex].type, "func") == 0 && returnExist == 0 && strcmp(symbolTable[funcIndex].datatype, "void") != 0)
    {
        printf("Error at line %d: Missing return statement in Function %s\n", number_of_line, symbolTable[funcIndex].identifierName);
    }
    if (funcIndex != -1 && strcmp(symbolTable[funcIndex].type, "func") == 0 && returnExist == 1 && strcmp(symbolTable[funcIndex].datatype, "void") == 0)
    {
        printf("Error at line %d: %s Void Function can't have return statement\n", number_of_line, symbolTable[funcIndex].identifierName);
    }
    insertResult = -1;
    funcIndex = -1;
    returnExist = 0;
    for (int i = 0; i < symbolTableIndex; i++)
    {
        if (symbolTable[i].scope == scopeStack[scopeIndex])
        {
            symbolTable[i].outOfScope = 1;
        }
    }
    scopeIndex--;
    // blockNumber--;
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
    if (L != -1)
    {
        printf("Error at line %d: %s is already declared in this scope at line %d\n", number_of_line, identifier, L);
        return -1;
    }
    struct symbol newnode;

    if (newnode.identifierName == NULL || newnode.datatype == NULL || newnode.type == NULL)
    {
        printf("Error: Memory allocation failed\n");
        return -1;
    }

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
        newnode.scope = scopeStack[scopeIndex];
    }
    if (strcmp(type, "func") == 0)
    {
        int j = 0;
        for (int i = 0; i < symbolTableIndex; i++)
        {
            if (symbolTable[i].isArg && symbolTable[i].scope == (blockNumber + 1))
            {
                newnode.argList[j] = symbolTable[i].id;
                j++;
            }
        }
        newnode.argCount = j;
    }
    symbolTable[symbolTableIndex] = newnode;
    if (strcmp(datatype, "enum") == 0)
    {
        symbolTable[symbolTableIndex].isInit = 1;
        struct enumNode newnodeEnum;
        for (int i = 0; i < 100; i++)
        {
            newnodeEnum.keys[i] = "";
            newnodeEnum.values[i] = 0;
        }
        for (int i = 0; i < enumArgCount; i++)
        {
            newnodeEnum.keys[i] = enumKeys[i];
            newnodeEnum.values[i] = enumValues[i];
        }
        symbolTable[symbolTableIndex].enumValue = newnodeEnum;
        enumArgCount = 0;
        for (int i = 0; i < 100; i++)
        {
            enumKeys[i] = "";
            enumValues[i] = 0;
        }
    }
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
    if (index == -1)
    {
        return;
    }
    if (strcmp(symbolTable[index].datatype, "string") == 0 && symbolTable[index].type == "func")
    {
        printf("Type Mismatch Error at line %d: Function %s return type is %s but assigned int\n", number_of_line, symbolTable[index].identifierName, symbolTable[index].datatype);
        return;
    }
    symbolTable[index].isInit = 1;
    if (strcmp(symbolTable[index].datatype, "string") != 0 && !symbolTable[index].outOfScope)
    {
        if (strcmp(symbolTable[index].datatype, "float") == 0)
        {
            symbolTable[index].floatValue = (float)value;
        }
        else if (strcmp(symbolTable[index].datatype, "bool") == 0)
        {
            symbolTable[index].boolValue = (bool)value;
        }
        else if (strcmp(symbolTable[index].datatype, "int") == 0)
        {
            symbolTable[index].intValue = value;
        }
    }
    else
    {
        printf("Type Mismatch Error at line %d: %s %s variable assigned int value\n", number_of_line, symbolTable[index].identifierName, symbolTable[index].datatype);
    }
}

void assign_float(int index, float value, int number_of_line)
{
    assign_arg_indexes();
    if (index == -1)
    {
        return;
    }
    if (strcmp(symbolTable[index].datatype, "string") == 0 && symbolTable[index].type == "func")
    {
        printf("Type Mismatch Error at line %d: Function %s return type is %s but assigned int\n", number_of_line, symbolTable[index].identifierName, symbolTable[index].datatype);
        return;
    }
    symbolTable[index].isInit = 1;
    if (strcmp(symbolTable[index].datatype, "string") != 0 && !symbolTable[index].outOfScope)
    {
        if (strcmp(symbolTable[index].datatype, "float") == 0)
        {
            symbolTable[index].floatValue = value;
        }
        else if (strcmp(symbolTable[index].datatype, "bool") == 0)
        {
            symbolTable[index].boolValue = (bool)value;
        }
        else if (strcmp(symbolTable[index].datatype, "int") == 0)
        {
            symbolTable[index].intValue = (int)value;
        }
    }
    else
    {
        printf("Type Mismatch Error at line %d: %s %s variable assigned int value\n", number_of_line, symbolTable[index].identifierName, symbolTable[index].datatype);
    }
}

void assign_bool(int index, bool value, int number_of_line)
{
    assign_arg_indexes();
    if (index == -1)
    {
        return;
    }
    if (strcmp(symbolTable[index].datatype, "string") == 0 && symbolTable[index].type == "func")
    {
        printf("Type Mismatch Error at line %d: Function %s return type is %s but assigned int\n", number_of_line, symbolTable[index].identifierName, symbolTable[index].datatype);
        return;
    }
    symbolTable[index].isInit = 1;
    if (strcmp(symbolTable[index].datatype, "string") != 0 && !symbolTable[index].outOfScope)
    {
        if (strcmp(symbolTable[index].datatype, "float") == 0)
        {
            symbolTable[index].floatValue = (float)value;
        }
        else if (strcmp(symbolTable[index].datatype, "bool") == 0)
        {
            symbolTable[index].boolValue = value;
        }
        else if (strcmp(symbolTable[index].datatype, "int") == 0)
        {
            symbolTable[index].intValue = (int)value;
        }
    }
    else
    {
        printf("Type Mismatch Error at line %d: %s %s variable assigned int value\n", number_of_line, symbolTable[index].identifierName, symbolTable[index].datatype);
    }
}

void assign_string(int index, char *value, int number_of_line)
{
    assign_arg_indexes();
    if (index == -1)
    {
        return;
    }
    if (strcmp(symbolTable[index].datatype, "string") != 0 && symbolTable[index].type == "func")
    {
        printf("Type Mismatch Error at line %d: Function %s return type is %s but assigned string\n", number_of_line, symbolTable[index].identifierName, symbolTable[index].datatype);
        return;
    }
    symbolTable[index].isInit = 1;
    if (strcmp(symbolTable[index].datatype, "string") == 0 && !symbolTable[index].outOfScope)
    {
        symbolTable[index].strValue = value;
    }
    else
    {
        printf("Type Mismatch Error at line %d: %s %s variable assigned string value\n", number_of_line, symbolTable[index].identifierName, symbolTable[index].datatype);
    }
}

void assign_enum(int index, char *value, char *key, int number_of_line)
{
    if (index == -1)
    {
        return;
    }
    if (symbolTable[index].type == "var_enum")
    {
        for (int k = 0; k < symbolTableIndex; k++)
        {
            if (strcmp(symbolTable[k].identifierName, value) == 0)
            {
                for (int j = 0; j < 100; j++)
                {
                    printf("strcmp(symbolTable[k].enumValue.keys[j]: %s, %s\n\n\n", symbolTable[k].enumValue.keys[j], key);
                    if (strcmp(symbolTable[k].enumValue.keys[j], key) == 0)
                    {
                        symbolTable[index].intValue = symbolTable[k].enumValue.values[j];
                        symbolTable[index].isInit = 1;
                        insertResult = -1;
                        return;
                    }
                }
                printf("Error at line %d: %s not exist as key for %s enum \n", number_of_line, key, value);
                insertResult = -1;
                return;
            }
        }
    }
    else
    {
        printf("Type Mismatch Error at line %d: %s %s variable assigned enum value\n", number_of_line, symbolTable[index].identifierName, symbolTable[index].datatype);
    }
    insertResult = -1;
}

int lookup(char *identifierName, bool is_assignment, int number_of_line)
{
    if (isEnum == 1)
    {
        return -1;
    }
    if (symbolTable[insertResult].type == "var_enum")
    {
        assign_enum(insertResult, symbolTable[insertResult].datatype, identifierName, number_of_line);
        return -1;
    }
    for (int i = 0; i < symbolTableIndex; ++i)
    {
        if (strcmp(symbolTable[i].identifierName, identifierName) == 0 && !symbolTable[i].outOfScope)
        {
            if (!symbolTable[i].isInit && strcmp(symbolTable[i].type, "var") == 0 && !symbolTable[i].isArg)
            {
                if (!is_assignment)
                {
                    printf("Error at line %d: %s used before initialized\n", number_of_line, identifierName);
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
    return -1;
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
            printf("Type Mismatch Error at line %d: %s is %s variable  but %s return %s value\n", number_of_line, symbolTable[insertResult].identifierName, symbolTable[insertResult].datatype, symbolTable[i].identifierName, symbolTable[i].datatype);
        }
        else if (strcmp(symbolTable[insertResult].type, "func") == 0)
        {
            printf("Type Mismatch Error at line %d: %s is %s variable  but %s return %s value\n", number_of_line, symbolTable[i].identifierName, symbolTable[i].datatype, symbolTable[insertResult].identifierName, symbolTable[insertResult].datatype);
        }
        else if (isParameter == 1)
        {
            printf("Type Mismatch Error at line %d: Incorrect argument type %s is %s variable but %s %s\n", number_of_line, symbolTable[insertResult].identifierName, symbolTable[insertResult].datatype, symbolTable[i].identifierName, symbolTable[i].datatype);
        }
        else
        {
            printf("Type Mismatch Error at line %d: %s is %s variable  but %s %s\n", number_of_line, symbolTable[insertResult].identifierName, symbolTable[insertResult].datatype, symbolTable[i].identifierName, symbolTable[i].datatype);
        }
    }
    else if (strcmp(symbolTable[insertResult].type, "func") != 0)
    {
        symbolTable[insertResult].isInit = 1;
        if (strcmp(symbolTable[i].datatype, "int") == 0 || strcmp(symbolTable[i].type, "var_enum") == 0)
        {
            assign_int(insertResult, symbolTable[i].intValue, number_of_line);
        }
        else if (symbolTable[i].datatype == "float")
        {
            assign_float(insertResult, symbolTable[i].floatValue, number_of_line);
        }
        else if (strcmp(symbolTable[i].datatype, "string") == 0)
        {
            assign_string(insertResult, symbolTable[i].strValue, number_of_line);
        }
        else if (symbolTable[i].datatype == "bool")
        {
            assign_bool(insertResult, symbolTable[i].boolValue, number_of_line);
        }
    }
    if (isParameter == 0)
    {
        insertResult = -1;
    }
}

void display_to_file(const char *filename)
{
    FILE *fp = fopen(filename, "w");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return;
    }
    fprintf(fp, "ID\tName\tType\tDataType\tLine\tScope\tisInit\tValue\n");
    for (int i = 0; i < symbolTableIndex; ++i)
    {
        symbol current = symbolTable[i];
        fprintf(fp, "%d\t%s\t%s\t%s\t\t%d\t%d\t%d\t", current.id, current.identifierName, current.type, current.datatype, current.declareLine, current.scope, current.isInit);
        if (current.isInit == 1)
        {
            if (strcmp(current.datatype, "int") == 0 || strcmp(current.type, "var_enum") == 0)
            {
                fprintf(fp, "%d", current.intValue);
            }
            else if (strcmp(current.datatype, "float") == 0)
            {
                fprintf(fp, "%f", current.floatValue);
            }
            else if (strcmp(current.datatype, "bool") == 0)
            {
                fprintf(fp, "%s", current.boolValue ? "true" : "false");
            }
            else if (strcmp(current.datatype, "string") == 0)
            {
                fprintf(fp, "%s", current.strValue);
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

void display()
{
    printf("ID\tName\tType\tDataType\tLine\tScope\tisInit\toutOfScope\tValue\n");
    for (int i = 0; i < symbolTableIndex; ++i)
    {
        symbol current = symbolTable[i];
        printf("%d\t%s\t%s\t%s\t\t%d\t%d\t%d\t%d\t\t", current.id, current.identifierName, current.type, current.datatype, current.declareLine, current.scope, current.isInit, current.outOfScope);
        if (current.isInit == 1)
        {
            if (strcmp(current.datatype, "int") == 0 || strcmp(current.type, "var_enum") == 0)
            {
                printf("%d", current.intValue);
            }
            else if (strcmp(current.datatype, "float") == 0)
            {
                printf("%f", current.floatValue);
            }
            else if (strcmp(current.datatype, "bool") == 0)
            {
                printf("%s", current.boolValue ? "true" : "false");
            }
            else if (strcmp(current.datatype, "string") == 0)
            {
                printf("%s", current.strValue);
            }
        }
        else
        {
            printf("-");
        }
        printf("\n");
    }
}

void display_unused_variables()
{
    for (int i = 0; i < symbolTableIndex; ++i)
    {
        symbol current = symbolTable[i];
        if (current.isUsed == false && strcmp(current.type, "enum_arg") != 0)
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

// int main()
// {
//     initialize_symbol_table(100);

//     // Example usage
//     scopeStack[0] = 0;
//     insert("int", "lamiaa", "var", 3, false);
//     insert("float", "asmaa", "var", 2, false);
//     insert("bool", "test", "var", 2, false);

//     assign_int(0, 5, 3);
//     assign_float(1, 5.5, 3);
//     assign_bool(2, true, 3);

//     // Display the symbol table
//     display();
//     display_to_file("symbol_table.txt");
//     display_unused_variables();

//     // Free dynamically allocated memory
//     for (int i = 0; i < symbolTableIndex; ++i)
//     {
//         free(symbolTable[i].identifierName);
//         free(symbolTable[i].datatype);
//         free(symbolTable[i].type);
//     }
//     free(symbolTable);

//     return 0;
// }
