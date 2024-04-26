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

int lookup(symbol *headRef, const char *identifierName, bool is_assignment)
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
                    printf("Error: %s used before initialized\n", identifierName);
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
    printf("Error: %s undeclared identifier\n", identifierName);
    return -1; // Return -1 to indicate symbol not found
}

void assign_int(symbol *head, int value, const char *name, int number_of_line)
{
    while (head != NULL)
    {
        if (strcmp(head->identifierName, name) == 0)
        {
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