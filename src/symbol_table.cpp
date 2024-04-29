#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

#define BUFFER_SIZE 1024
#define TOKEN_SIZE 32

typedef struct symbol
{

    int id, intValue, scope;
    char *name, value;
    float floatValue;
    bool boolValue;
    char *strValue;

    int declareLine;
    bool isConst, isArg, isUsed, isInit, outOfScope;

    char *identifierName;
    char *type;     // variable, const, func, enum_arg, var_enum
    char *datatype; // int, float, bool, string

    struct symbol *next;
} symbol;

int scopeStack[500];
int scopeIndex = 0;
int inLoop = 0;
int blockNumber = 0;
int symbolTableIndex = 0;
int assignIndex = 0;
int returnExist = 0;
int funcIndex = 0;

int insertResult = 0;

void scope_start()
{
    blockNumber++;
    scopeIndex++;
    scopeStack[scopeIndex] = blockNumber;
}

void scope_end(symbol *head, int number_of_line)
{
    symbol *current = head;
    while (current != NULL)
    {
        // Check for missing return statement in non-void functions
        if (strcmp(current->type, "func") == 0 && !current->outOfScope && strcmp(current->datatype, "void") != 0)
        {
            printf("Error at line %d: Missing return statement in Function %s\n", number_of_line, current->name);
        }
        // Check for return statement in void functions
        if (strcmp(current->type, "func") == 0 && !current->outOfScope && strcmp(current->datatype, "void") == 0)
        {
            printf("Error at line %d: %s Void Function can't have return statement\n", number_of_line, current->name);
        }
        // Mark symbols in the current scope as out of scope
        if (current->scope == scopeStack[scopeIndex])
        {
            current->outOfScope = true;
        }
        current = current->next;
    }
    scopeIndex--;
}

int is_exist(symbol *head, const char *identifierName)
{
    int index = 0;
    while (head != NULL)
    {
        if (strcmp(head->identifierName, identifierName) == 0 && head->scope == blockNumber && !head->outOfScope)
        {
            return head->declareLine;
        }
        head = head->next;
        index++;
    }
    return -1; // Symbol not found
}

int insert(symbol **headRef, const char *datatype, const char *identifier, const char *type, int number_of_line, bool isArg)
{
    symbol *newnode = (symbol *)malloc(sizeof(symbol));
    static symbol *prevnode;
    int L = is_exist(*headRef, identifier);
    if (L != -1)
    {
        printf("Error at line %d: %s is already declared in this scope at line %d\n", number_of_line, identifier, L);
        return -1;
    }

    newnode->identifierName = (char *)malloc((strlen(identifier) + 1) * sizeof(char));
    strcpy(newnode->identifierName, identifier);
    newnode->datatype = (char *)malloc((strlen(datatype) + 1) * sizeof(char));
    strcpy(newnode->datatype, datatype);
    newnode->type = (char *)malloc((strlen(type) + 1) * sizeof(char));
    strcpy(newnode->type, type);

    newnode->declareLine = number_of_line;
    newnode->id = symbolTableIndex;
    newnode->isArg = isArg;
    newnode->outOfScope = false;
    newnode->isInit = false;
    newnode->isUsed = false;

    if (*headRef == NULL)
    {
        prevnode = newnode;
    }

    if (newnode->isArg == 1 || inLoop == 1)
    {
        newnode->scope = blockNumber + 1;
    }
    else
    {
        newnode->scope = scopeStack[scopeIndex];
    }

    prevnode = newnode;
    newnode->next = (*headRef);
    (*headRef) = newnode;
    symbolTableIndex++;
    return 0;
}

int lookup(symbol *headRef, const char *identifierName, bool is_assignment, int number_of_line)
{
    symbol *current = headRef;
    while (current != NULL)
    {
        if (strcmp(current->identifierName, identifierName) == 0 && !current->outOfScope)
        {
            if (!current->isInit && strcmp(current->type, "var") == 0 && !current->isArg)
            {
                if (!is_assignment)
                {
                    printf("Error at line %d: %s used before initialized\n", number_of_line, identifierName);
                }
            }
            if (!is_assignment)
            {
                current->isUsed = true;
            }
            return current->id;
        }
        current = current->next;
    }
    printf("Error at line %d: %s undeclared identifier\n", number_of_line, identifierName);
    return -1;
}

void assign_int(symbol *head, int value, const char *name, int number_of_line)
{
    while (head != NULL)
    {
        if (strcmp(head->identifierName, name) == 0)
        {
            if (insertResult == -1 || (head->isInit && strcmp(head->type, "const") == 0))
            {
                return;
            }
            if (strcmp(head->datatype, "string") == 0 && head->type == "func")
            {
                printf("Type Mismatch Error at line %d: Function %s return type is %s but assigned int\n", number_of_line, head->identifierName, head->datatype);
                return;
            }
            head->isInit = 1;
            if (strcmp(head->datatype, "string") != 0 && !head->outOfScope)
            {
                if (strcmp(head->datatype, "float") == 0)
                {
                    head->floatValue = (float)value;
                }
                else if (strcmp(head->datatype, "bool") == 0)
                {
                    head->boolValue = (bool)value;
                }
                else if (strcmp(head->datatype, "int") == 0)
                {
                    head->intValue = value;
                }
            }
            else
            {
                printf("Type Mismatch Error at line %d: %s %s variable assigned int value\n", number_of_line, head->identifierName, head->datatype);
            }
        }
        head = head->next;
    }
}

void assign_float(symbol *head, float value, const char *name, int number_of_line)
{
    while (head != NULL)
    {
        if (strcmp(head->identifierName, name) == 0)
        {
            if (insertResult == -1 || (head->isInit && strcmp(head->type, "const") == 0))
            {
                return;
            }
            if (strcmp(head->datatype, "string") == 0 && head->type == "func")
            {
                printf("Type Mismatch Error at line %d: Function %s return type is %s but assigned float\n", number_of_line, head->identifierName, head->datatype);
                return;
            }
            head->isInit = 1;
            if (strcmp(head->datatype, "string") != 0 && !head->outOfScope)
            {
                if (strcmp(head->datatype, "float") == 0)
                {
                    head->floatValue = value;
                }
                else if (strcmp(head->datatype, "bool") == 0)
                {
                    head->boolValue = (bool)value;
                }
                else if (strcmp(head->datatype, "int") == 0)
                {
                    head->intValue = (int)value;
                }
            }
            else
            {
                printf("Type Mismatch Error at line %d: %s %s variable assigned float value\n", number_of_line, head->identifierName, head->datatype);
            }
        }
        head = head->next;
    }
}

void assign_bool(symbol *head, bool value, const char *name, int number_of_line)
{
    while (head != NULL)
    {
        if (strcmp(head->identifierName, name) == 0)
        {
            if (insertResult == -1 || (head->isInit && strcmp(head->type, "const") == 0))
            {
                return;
            }
            if (strcmp(head->datatype, "string") == 0 && head->type == "func")
            {
                printf("Type Mismatch Error at line %d: Function %s return type is %s but assigned bool\n", number_of_line, head->identifierName, head->datatype);
                return;
            }
            head->isInit = 1;
            if (strcmp(head->datatype, "string") != 0 && !head->outOfScope)
            {
                if (strcmp(head->datatype, "float") == 0)
                {
                    head->floatValue = (float)value;
                }
                else if (strcmp(head->datatype, "bool") == 0)
                {
                    head->boolValue = value;
                }
                else if (strcmp(head->datatype, "int") == 0)
                {
                    head->intValue = (int)value;
                }
            }
            else
            {
                printf("Type Mismatch Error at line %d: %s %s variable assigned bool value\n", number_of_line, head->identifierName, head->datatype);
            }
        }
        head = head->next;
    }
}

void assign_string(symbol *head, char *value, const char *name, int number_of_line)
{
    while (head != NULL)
    {
        if (strcmp(head->identifierName, name) == 0)
        {
            if (insertResult == -1 || (head->isInit && strcmp(head->type, "const") == 0))
            {
                return;
            }
            if (strcmp(head->datatype, "string") != 0 && head->type == "func")
            {
                printf("Type Mismatch Error at line %d: Function %s return type is %s but assigned string\n", number_of_line, head->identifierName, head->datatype);
                return;
            }
            head->isInit = 1;
            if (strcmp(head->datatype, "string") == 0 && !head->outOfScope)
            {
                // strcpy(head->strValue, value);
                head->strValue = value;
            }
            else
            {
                printf("Type Mismatch Error at line %d: %s %s variable assigned string value\n", number_of_line, head->identifierName, head->datatype);
            }
        }
        head = head->next;
    }
}

void display_to_file(symbol *node, const char *filename)
{
    FILE *fp = fopen(filename, "w");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    fprintf(fp, "ID\tName\tType\tDataType\tLine\tScope\tisInit\tValue\n");
    while (node != NULL)
    {
        fprintf(fp, "%d\t%s\t%s\t%s\t\t%d\t%d\t%d\t", node->id, node->identifierName, node->type, node->datatype, node->declareLine, node->scope, node->isInit);
        if (node->isInit == 1)
        {
            if (strcmp(node->datatype, "int") == 0 || strcmp(node->type, "var_enum") == 0)
            {
                fprintf(fp, "%d", node->intValue);
            }
            else if (strcmp(node->datatype, "float") == 0)
            {
                fprintf(fp, "%f", node->floatValue);
            }
            else if (strcmp(node->datatype, "bool") == 0)
            {
                fprintf(fp, "%s", node->boolValue ? "true" : "false");
            }
            else if (strcmp(node->datatype, "string") == 0)
            {
                fprintf(fp, "%s", node->strValue);
            }
        }
        else
        {
            fprintf(fp, "-");
        }

        fprintf(fp, "\n");
        node = node->next;
    }

    fclose(fp);
}

void display(symbol *node)
{
    printf("ID\tName\tType\tDataType\tLine\tScope\tisInit\tValue\n");
    while (node != NULL)
    {
        printf("%d\t%s\t%s\t%s\t\t%d\t%d\t%d\t", node->id, node->identifierName, node->type, node->datatype, node->declareLine, node->scope, node->isInit);
        if (node->isInit == 1)
        {
            if (strcmp(node->datatype, "int") == 0 || strcmp(node->type, "var_enum") == 0)
            {
                printf("%d", node->intValue);
            }
            else if (strcmp(node->datatype, "float") == 0)
            {
                printf("%f", node->floatValue);
            }
            else if (strcmp(node->datatype, "bool") == 0)
            {
                printf("%s", node->boolValue ? "true" : "false");
            }
            else if (strcmp(node->datatype, "string") == 0)
            {
                printf("%s", node->strValue);
            }
        }
        else
        {
            printf("-");
        }

        printf("\n");
        node = node->next;
    }
}

void display_unused_variables(symbol *head)
{
    while (head != NULL)
    {
        if (head->isUsed == 0 && strcmp(head->type, "enum_arg") != 0)
        {
            if (strcmp(head->type, "func") == 0)
            {
                printf("Function %s Declared at line %d but never called\n", head->identifierName, head->declareLine);
            }
            else if (head->isArg == 1)
            {
                printf("Unused Argument %s Declared in Function at line %d\n", head->identifierName, head->declareLine);
            }
            else
            {
                printf("Unused Identifier %s Declared at line %d\n", head->identifierName, head->declareLine);
            }
        }
        head = head->next;
    }
}

// void check_type( int i) {
//     // this functio check type matching between 2 identifiers before assign the value
//     if ( is_param == 1) //to check argument type
//     {
//         if ( arg_count <symbolTable[called_func_index].argCount )
//         {assign_index = symbolTable[called_func_index].argList[arg_count];}
//         else {assign_index=-1;}
//     }
//      if ( i == -1 || assign_index == -1)
//     { return;}
//     if (symbolTable[i].dataType != symbolTable[assign_index].dataType && (symbolTable[assign_index].dataType == "string" ||  symbolTable[i].dataType == "string"))
//     {   /// at calling a function
//         if (strcmp(symbolTable[i].type,"func")== 0){ printf("\n !!!!!!!!!!!! Type Mismatch Error at line %d: %s is %s variable  but %s return %s value  !!!!!!!!!!!\n", line_number,symbolTable[assign_index].name,symbolTable[assign_index].dataType, symbolTable[i].name,symbolTable[i].dataType ); sErr(line_number);}
//         else if (strcmp(symbolTable[assign_index].type,"func")== 0){ printf("\n !!!!!!!!!!!! Type Mismatch Error at line %d: %s is %s variable  but %s return %s value  !!!!!!!!!!!\n", line_number,symbolTable[i].name,symbolTable[i].dataType, symbolTable[assign_index].name,symbolTable[assign_index].dataType ); sErr(line_number);}
//         else if (is_param == 1)
//         {printf("\n !!!!!!!!!!!! Type Mismatch Error at line %d: Incorrect argument type %s is %s variable but %s %s !!!!!!!!!!!\n", line_number,symbolTable[assign_index].name,symbolTable[assign_index].dataType, symbolTable[i].name,symbolTable[i].dataType ); sErr(line_number);}
//         else {printf("\n !!!!!!!!!!!! Type Mismatch Error at line %d: %s is %s variable  but %s %s !!!!!!!!!!!\n", line_number,symbolTable[assign_index].name,symbolTable[assign_index].dataType, symbolTable[i].name,symbolTable[i].dataType );sErr(line_number);}
//     }
//     else if (strcmp(symbolTable[assign_index].type,"func") != 0)
//     {
//         symbolTable[assign_index].isInit=1;
//         // assign value to the variable
//         if ( strcmp(symbolTable[i].dataType,"int") ==0 || strcmp(symbolTable[i].type,"var_enum") ==0  ) {
//             assign_int(symbolTable[i].intValue, assign_index);
//             }
//         else if (symbolTable[i].dataType == "float"){
//             assign_float(symbolTable[i].floatValue, assign_index);
//             }
//         else if ( strcmp(symbolTable[i].dataType, "string")==0){
//             assign_str(symbolTable[i].strValue, assign_index);
//             }
//         else if (symbolTable[i].dataType == "bool"){
//             assign_bool(symbolTable[i].boolValue, assign_index);
//             }
//         st_log();
//     }
//     if(is_param == 0){ assign_index = -1;}
// }
// int main()
// {
//     symbol *head = NULL;
//     scopeStack[0] = 0;
//     insert(&head, "int", "lamiaa", "var", 3, false);
//     insert(&head, "float", "asmaa", "var", 2, false);
//     insert(&head, "bool", "test", "var", 2, false);

//     printf("%d\n", lookup(head, "sama", false));
//     printf("%d\n", is_exist(head, "asmaa"));
//     display(head);

//     display(head);
//     return 0;
// }