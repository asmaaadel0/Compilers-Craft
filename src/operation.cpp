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

    union
    {
        int intVal;
        float floatVal;
        char *stringVal;
        int boolVal;
    } value;
} nodeType;

nodeType *con(char *value)
{
    nodeType *p;

    if ((p = (nodeType *)malloc(sizeof(nodeType))) == NULL)
    {
        printf("out of memory");
        exit(1);
    }
    p->type = value;
    return p;
}

nodeType *getType(char *type)
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

struct nodeType *unary_operator(struct nodeType *op, char *operand, int number_of_line)
{
    struct nodeType *p = (nodeType *)malloc(sizeof(struct nodeType));
    if (strcmp(op->type, "int") == 0)
    {
        p->type = "int";
        if (strcmp(operand, "++") == 0)
        {
            p->value.intVal = op->value.intVal + 1;
        }
        else if (strcmp(operand, "--") == 0)
        {
            p->value.intVal = op->value.intVal - 1;
        }
        else if (strcmp(operand, "-") == 0)
        {
            p->value.intVal = -op->value.intVal;
        }
        else
        {
            printf("Error at line %d: Invalid operator\n", number_of_line);
            exit(1);
        }
    }
    else if (strcmp(op->type, "float") == 0)
    {
        p->type = "float";
        if (strcmp(operand, "++") == 0)
        {
            p->value.floatVal = op->value.floatVal + 1;
        }
        else if (strcmp(operand, "--") == 0)
        {
            p->value.floatVal = op->value.floatVal - 1;
        }
        else if (strcmp(operand, "-") == 0)
        {
            p->value.floatVal = -op->value.floatVal;
        }
        else
        {
            printf("Error at line %d: Invalid operator\n", number_of_line);
            exit(1);
        }
    }
    else
    {
        printf("Error at line %d: cannot apply this operator to operand with type is '%s'\n", number_of_line, op->type);
        exit(1);
    }
}

struct nodeType *arithmatic(struct nodeType *op1, struct nodeType *op2, char op, int number_of_line)
{
    struct nodeType *p = (nodeType *)malloc(sizeof(struct nodeType));
    if (strcmp(op1->type, "int") == 0 && strcmp(op2->type, "int") == 0)
    {
        p->type = "int";
        switch (op)
        {
        case '+':
            p->value.intVal = op1->value.intVal + op2->value.intVal;
            break;
        case '-':
            p->value.intVal = op1->value.intVal - op2->value.intVal;
            break;
        case '*':
            p->value.intVal = op1->value.intVal * op2->value.intVal;
            break;
        case '/':
            p->value.intVal = op1->value.intVal / op2->value.intVal;
            break;
        case '%':
            p->value.intVal = op1->value.intVal % op2->value.intVal;
            break;
        case '^':
            p->value.intVal = pow(op1->value.intVal, op2->value.intVal);
            break;
        default:
            printf("Error at line %d: Invalid operator\n", number_of_line);
            exit(1);
        }
    }
    else if (strcmp(op1->type, "float") == 0 && strcmp(op2->type, "float") == 0)
    {
        p->type = "float";
        switch (op)
        {
        case '+':
            p->value.floatVal = op1->value.floatVal + op2->value.floatVal;
            break;
        case '-':
            p->value.floatVal = op1->value.floatVal - op2->value.floatVal;
            break;
        case '*':
            p->value.floatVal = op1->value.floatVal * op2->value.floatVal;
            break;
        case '/':
            p->value.floatVal = op1->value.floatVal / op2->value.floatVal;
            break;
        case '^':
            p->value.floatVal = pow(op1->value.floatVal, op2->value.floatVal);
            break;
        default:
            printf("Error at line %d: Invalid operator\n", number_of_line);
            exit(1);
        }
    }
    else if (strcmp(op1->type, "int") == 0 && strcmp(op2->type, "float") == 0)
    {
        p->type = "float";
        switch (op)
        {
        case '+':
            p->value.floatVal = op1->value.intVal + op2->value.floatVal;
            break;
        case '-':
            p->value.floatVal = op1->value.intVal - op2->value.floatVal;
            break;
        case '*':
            p->value.floatVal = op1->value.intVal * op2->value.floatVal;
            break;
        case '/':
            p->value.floatVal = op1->value.intVal / op2->value.floatVal;
            break;
        case '^':
            p->value.floatVal = pow(op1->value.intVal, op2->value.floatVal);
            break;
        default:
            printf("Error at line %d: Invalid operator\n", number_of_line);
            exit(1);
        }
    }
    else if (strcmp(op1->type, "float") == 0 && strcmp(op2->type, "int") == 0)
    {
        p->type = "float";
        switch (op)
        {
        case '+':
            p->value.floatVal = op1->value.floatVal + op2->value.intVal;
            break;
        case '-':
            p->value.floatVal = op1->value.floatVal - op2->value.intVal;
            break;
        case '*':
            p->value.floatVal = op1->value.floatVal * op2->value.intVal;
            break;
        case '/':
            p->value.floatVal = op1->value.floatVal / op2->value.intVal;
            break;
        case '^':
            p->value.floatVal = pow(op1->value.floatVal, op2->value.intVal);
            break;
        default:
            printf("Error at line %d: Invalid operator\n", number_of_line);
            exit(1);
        }
    }
    else
    {
        printf("Error at line %d: Invalid operator\n", number_of_line);
        exit(1);
    }
    return p;
}

struct nodeType *logical(struct nodeType *op1, struct nodeType *op2, char op, int number_of_line)
{
    struct nodeType *p = (nodeType *)malloc(sizeof(struct nodeType));
    if (strcmp(op1->type, "bool") == 0 && strcmp(op2->type, "bool") == 0)
    {
        p->type = "bool";
        switch (op)
        {
        case '&':
            p->value.boolVal = op1->value.boolVal && op2->value.boolVal;
            break;
        case '|':
            p->value.boolVal = op1->value.boolVal || op2->value.boolVal;
            break;
        default:
            printf("Error at line %d: Invalid operator\n", number_of_line);
            exit(1);
        }
    }
    else
    {
        printf("Error at line %d: Invalid operator\n", number_of_line);
        exit(1);
    }
    return p;
}

struct nodeType *not_operator(struct nodeType *op, int number_of_line)
{
    struct nodeType *p = (nodeType *)malloc(sizeof(struct nodeType));
    if (op->type == "bool")
    {
        p->type == "bool";
        p->value.boolVal = !op->value.boolVal;
    }
    else
    {
        if (op->value.intVal)
        {
            p->type == "bool";
            p->value.boolVal = 0;
        }
        else
        {
            p->type == "bool";
            p->value.boolVal = 1;
        }
    }
}

struct nodeType *comparison(struct nodeType *op1, struct nodeType *op2, char *op, int number_of_line)
{
    struct nodeType *p = (nodeType *)malloc(sizeof(struct nodeType));
    p->type = "bool";
    if (strcmp(op1->type, op2->type) != 0)
    {
        printf("Error at line %d: Invalid operator\n", number_of_line);
        exit(1);
    }

    if (strcmp(op1->type, "float") == 0)
    {
        if (strcmp(op, "==") == 0)
        {
            p->value.boolVal = op1->value.floatVal == op2->value.floatVal;
        }
        else if (strcmp(op, "!=") == 0)
        {
            p->value.boolVal = op1->value.floatVal != op2->value.floatVal;
        }
        else if (strcmp(op, ">") == 0)
        {
            p->value.boolVal = op1->value.floatVal > op2->value.floatVal;
        }
        else if (strcmp(op, ">=") == 0)
        {
            p->value.boolVal = op1->value.floatVal >= op2->value.floatVal;
        }
        else if (strcmp(op, "<") == 0)
        {
            p->value.boolVal = op1->value.floatVal < op2->value.floatVal;
        }
        else if (strcmp(op, "<=") == 0)
        {
            p->value.boolVal = op1->value.floatVal <= op2->value.floatVal;
        }
        else
        {
            printf("Error at line %d: Invalid operator\n", number_of_line);
            exit(1);
        }
    }
    else
    {
        if (strcmp(op, "==") == 0)
        {
            p->value.boolVal = op1->value.intVal == op2->value.intVal;
        }
        else if (strcmp(op, "!=") == 0)
        {
            p->value.boolVal = op1->value.intVal != op2->value.intVal;
        }
        else if (strcmp(op, ">") == 0)
        {
            p->value.boolVal = op1->value.intVal > op2->value.intVal;
        }
        else if (strcmp(op, ">=") == 0)
        {
            p->value.boolVal = op1->value.intVal >= op2->value.intVal;
        }
        else if (strcmp(op, "<") == 0)
        {
            p->value.boolVal = op1->value.intVal < op2->value.intVal;
        }
        else if (strcmp(op, "<=") == 0)
        {
            p->value.boolVal = op1->value.intVal <= op2->value.intVal;
        }
        else
        {
            printf("Error at line %d: Invalid operator\n", number_of_line);
            exit(1);
        }
    }
    return p;
}

struct nodeType *bitwise(struct nodeType *op1, struct nodeType *op2, char op, int number_of_line)
{
    struct nodeType *p = (nodeType *)malloc(sizeof(struct nodeType));
    if (strcmp(op1->type, "int") == 0 && strcmp(op2->type, "int") == 0)
    {
        p->type = "int";
        switch (op)
        {
        case '|':
            p->value.intVal = op1->value.intVal | op2->value.intVal;
            break;
        case '&':
            p->value.intVal = op1->value.intVal & op2->value.intVal;
            break;
        case '<':
            p->value.intVal = op1->value.intVal << op2->value.intVal;
            break;
        case '>':
            p->value.intVal = op1->value.intVal >> op2->value.intVal;
            break;
        default:
            printf("Error at line %d: Invalid operator\n", number_of_line);
            exit(1);
        }
    }
    else
    {
        printf("Error at line %d: Invalid operator\n", number_of_line);
        exit(1);
    }
    return p;
}