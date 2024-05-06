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

nodeType *setType(char *type)
{
    nodeType *p;

    if ((p = (nodeType *)malloc(sizeof(nodeType))) == NULL)
    {
        printf("out of memory");
        exit(1);
    }
    p->type = type;
    return p;
}

void unary_operator(struct nodeType *op, int number_of_line)
{
    if (strcmp(op->type, "int") == 0 || strcmp(op->type, "float") == 0)
    {
    }
    else
    {
        printf("Error at line %d: cannot apply this operator to operand with type is '%s'\n", number_of_line, op->type);
        exit(1);
    }
}

void arithmatic(struct nodeType *op1, struct nodeType *op2, int number_of_line)
{
    if (strcmp(op1->type, "string") == 0 ||
        strcmp(op2->type, "string") == 0 ||
        strcmp(op1->type, "char") == 0 ||
        strcmp(op2->type, "char") == 0)
    {
        printf("Error at line %d: Invalid operator\n", number_of_line);
        exit(1);
    }
}

void logical(struct nodeType *op1, struct nodeType *op2, int number_of_line)
{
    if (strcmp(op1->type, "string") == 0 ||
        strcmp(op2->type, "string") == 0 ||
        strcmp(op1->type, "char") == 0 ||
        strcmp(op2->type, "char") == 0)
    {
        printf("Error at line %d: Invalid operator\n", number_of_line);
        exit(1);
    }
}

void comparison(struct nodeType *op1, struct nodeType *op2, int number_of_line)
{
    struct nodeType *p = (nodeType *)malloc(sizeof(struct nodeType));
    p->type = "bool";
    if (strcmp(op1->type, op2->type) != 0 && (strcmp(op1->type, "string") == 0 ||
                                              strcmp(op2->type, "string") == 0 ||
                                              strcmp(op1->type, "char") == 0 ||
                                              strcmp(op2->type, "char") == 0))
    {
        printf("Error at line %d: Invalid operator\n", number_of_line);
        exit(1);
    }
}

void bitwise(struct nodeType *op1, struct nodeType *op2, int number_of_line)
{
    if (strcmp(op1->type, "int") != 0 || strcmp(op2->type, "int") != 0)
    {
        printf("Error at line %d: Invalid operator\n", number_of_line);
        exit(1);
    }
}