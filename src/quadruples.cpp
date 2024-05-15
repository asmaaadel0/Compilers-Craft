#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int labelNum = 0;
int labelIndex = -1;
int label[100];

int endLabelNum = 0;
int endLabelIndex = -1;
int endLabel[100];

int switchIdentIndex = -1;
char *switchIdent[100];

int startLabelNum = 0;
int startLabelIndex = -1;
int startLabel[100];

char *quadFile = NULL;
FILE *quadFileP = NULL;

FILE *create_file(char *path)
{
    FILE *file = fopen(path, "w");
    if (file == NULL)
    {
        printf("Error: File %s not found\n", path);
        exit(0);
    }
    return file;
}

void set_file_path(char *filePath, FILE *file)
{
    quadFile = filePath;
    quadFileP = file;
}

// ________________________________________________ Function ________________________________________________
void handle_quad_function(char *function, char *type)
{
    if (type == "start")
        fprintf(quadFileP, "%s:\n", function);
    else if (type == "end")
        fprintf(quadFileP, "\tEND %s\n", function);
    else if (type == "call")
        fprintf(quadFileP, "\tCALL %s\n", function);
}

void ret()
{
    fprintf(quadFileP, "\tRET\n");
}

void instruction(const char *instruction)
{
    fprintf(quadFileP, "\t%s\n", instruction);
}

void push_int(int val)
{
    fprintf(quadFileP, "\tPUSH %d\n", val);
}

void push_float(float val)
{
    fprintf(quadFileP, "\tPUSH %f\n", val);
}

void push_string(char *str)
{
    fprintf(quadFileP, "\tPUSH %s\n", str);
}

void push_ident(char *symbol)
{
    fprintf(quadFileP, "\tPUSH %s\n", symbol);
}

void pop_ident(char *symbol)
{
    fprintf(quadFileP, "\tPOP %s\n", symbol);
}

void push_end_label(int endLabelNum)
{
    endLabel[++endLabelIndex] = endLabelNum;
}

void jump_end_label()
{
    int endLabelNum = endLabel[endLabelIndex];
    fprintf(quadFileP, "\tJMP EndLabel_%d\n", endLabelNum);
}

void pop_end_label()
{
    if (endLabelIndex < 0)
    {
        fprintf(quadFileP, "Error: No end label to add. Segmentation Fault\n");
        return;
    }
    int endLabelNum = endLabel[endLabelIndex--];
    fprintf(quadFileP, "EndLabel_%d:\n", endLabelNum);
}

void jump_false_label(int labelNum)
{
    fprintf(quadFileP, "\tJF Label_%d\n", labelNum);
    label[labelIndex++] = labelNum;
}

void pop_label()
{
    if (labelIndex < 0)
    {
        fprintf(quadFileP, "Error: No end label to add. Segmentation Fault\n");
        return;
    }
    int labelNum = label[--labelIndex];

    fprintf(quadFileP, "Label_%d:\n", labelNum);
}

void push_switch_ident(char *identifier)
{
    switchIdent[++switchIdentIndex] = identifier;
}

void peak_switch_ident()
{
    if (switchIdentIndex < 0)
    {
        fprintf(quadFileP, "Error: No last identifier to peak. Segmentation Fault\n");
        return;
    }

    fprintf(quadFileP, "\tPUSH %s\n", switchIdent[switchIdentIndex]);
}

void pop_switch_ident()
{
    if (switchIdentIndex < 0)
    {
        fprintf(quadFileP, "Error: No last identifier to pop. Segmentation Fault\n");
        return;
    }
    switchIdentIndex--;
}

void push_start_label(int startLabelNum, char *label)
{
    startLabel[++startLabelIndex] = startLabelNum;
    fprintf(quadFileP, "Start%s_%d:\n", label, startLabelNum);
}

void jump_start_label(char *label)
{
    int startLabelNum = startLabel[startLabelIndex];
    fprintf(quadFileP, "\tJMP Start%s_%d\n", label, startLabelNum);
}

void pop_start_label()
{
    if (startLabelIndex < 0)
    {
        fprintf(quadFileP, "Error: No start label to add. Segmentation Fault\n");
        return;
    }
    int startLabelNum = startLabel[startLabelIndex--];
}
