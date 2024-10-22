#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

typedef struct nodeType
{
    char *type;
} nodeType;

void check_memory(nodeType *p)
{
    if (!p)
    {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
}

nodeType *set_type(char *type)
{

    nodeType *p = (nodeType *)malloc(sizeof(nodeType));
    check_memory(p);
    p->type = type;
    return p;
}

nodeType *arithmatic_operator_checker(struct nodeType *op1, struct nodeType *op2, int line_number)
{
    // handle (+, -, *, /, ^, %) operators
    nodeType *p = (nodeType *)malloc(sizeof(nodeType));
    check_memory(p);
    if (!op2)
    {
        // handle (-) negative operator
        // accept only int and float
        if (strcmp(op1->type, "int") != 0 && strcmp(op1->type, "float") != 0)
        {
            printf("Error at line %d: Invalid operator\n", line_number);
            exit(EXIT_FAILURE);
        }
    }
    else if (strcmp(op1->type, "string") == 0 ||
             strcmp(op2->type, "string") == 0 ||
             strcmp(op1->type, "char") == 0 ||
             strcmp(op2->type, "char") == 0 ||
             strcmp(op1->type, "void") == 0 ||
             strcmp(op2->type, "void") == 0)
    {
        // handle (+, -, *, /, ^, %) operators
        // not accept string, char or void types
        printf("Error at line %d: Invalid operator\n", line_number);
        exit(EXIT_FAILURE);
    }
    p->type = op1->type;
    return p;
}

nodeType *boolean_operator_checker(struct nodeType *op1, struct nodeType *op2, int line_number)
{
    // handle (and, or, !)
    // handle (<, <=, >, >=, ==, !=)
    nodeType *p = (nodeType *)malloc(sizeof(nodeType));
    check_memory(p);
    if (!op2)
    {
        // handle (!) operator
        // not accept string, char or void type
        if (strcmp(op1->type, "string") == 0 ||
            strcmp(op1->type, "char") == 0 ||
            strcmp(op1->type, "void") == 0)
        {
            printf("Error at line %d: Invalid operator\n", line_number);
            exit(EXIT_FAILURE);
        }
    }
    else if (strcmp(op1->type, "string") == 0 ||
             strcmp(op2->type, "string") == 0 ||
             strcmp(op1->type, "char") == 0 ||
             strcmp(op2->type, "char") == 0 ||
             strcmp(op1->type, "void") == 0 ||
             strcmp(op2->type, "void") == 0)
    {
        // handle (and, or) operator
        // handle (<, <=, >, >=, ==, !=)
        // not accept string, char or void type
        printf("Error at line %d: Invalid operator\n", line_number);
        exit(EXIT_FAILURE);
    }
    p->type = "bool";
    return p;
}

nodeType *bitwise_operator_checker(struct nodeType *op1, struct nodeType *op2, int line_number)
{
    // handle (|, &, >>, <<)
    nodeType *p = (nodeType *)malloc(sizeof(nodeType));
    check_memory(p);
    if (strcmp(op1->type, "int") != 0 || strcmp(op2->type, "int") != 0)
    {
        printf("Error at line %d: Invalid operator\n", line_number);
        exit(EXIT_FAILURE);
    }
    p->type = "int";
    return p;
}
