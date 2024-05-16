#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int falseLabelNum = 0;
int falseLabelIndex = -1;
int falseLabel[100];

int startLoopNum = 0;
int startLoopIndex = -1;
int startLoop[100];

int endLoopNum = 0;
int endLoopIndex = -1;
int endLoop[100];

int switchIdentIndex = -1;
char *switchIdent[100];

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

// ________________________________________________ Operation ________________________________________________
void handle_quad_operation(const char *instruction)
{
    fprintf(quadFileP, "\t%s\n", instruction);
}

// ________________________________________________ Values ________________________________________________
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

// ________________________________________________ Identifier ________________________________________________
void handle_identifier(char *symbol, char *type)
{
    fprintf(quadFileP, "\t%s %s\n", type, symbol);
}

// ________________________________________________ Unconditinal jump ________________________________________________
void push_end_loop(int endLoopNum)
{
    endLoop[++endLoopIndex] = endLoopNum;
}

void jump_end_loop()
{
    int endLoopNum = endLoop[endLoopIndex];
    fprintf(quadFileP, "\tJMP EndLoop_%d\n", endLoopNum);
}

void pop_end_loop()
{
    if (endLoopIndex < 0)
    {
        fprintf(quadFileP, "Error: No end label to add. Segmentation Fault\n");
        return;
    }
    int endLoopNum = endLoop[endLoopIndex--];
    fprintf(quadFileP, "EndLoop_%d:\n", endLoopNum);
}

// ________________________________________________ Start loops ________________________________________________
void push_start_loop(int startLoopNum, char *label)
{
    startLoop[++startLoopIndex] = startLoopNum;
    fprintf(quadFileP, "Start%s_%d:\n", label, startLoopNum);
}

void jump_start_loop(char *label)
{
    fprintf(quadFileP, "\tJMP Start%s_%d\n", label, startLoop[startLoopIndex]);
}

void pop_start_loop()
{
    if (startLoopIndex < 0)
    {
        fprintf(quadFileP, "Error: No start label to add. Segmentation Fault\n");
        return;
    }
    int startLoopNum = startLoop[startLoopIndex--];
}

// ________________________________________________ Conditional jump ________________________________________________
void jump_false_condition(int falseLabelNum)
{
    fprintf(quadFileP, "\tJF FalseLabel_%d\n", falseLabelNum);
    falseLabel[falseLabelIndex++] = falseLabelNum;
}

void pop_false_label()
{
    if (falseLabelIndex < 0)
    {
        fprintf(quadFileP, "Error: No end label to add. Segmentation Fault\n");
        return;
    }

    fprintf(quadFileP, "FalseLabel_%d:\n", falseLabel[--falseLabelIndex]);
}

// ________________________________________________ Switch ________________________________________________
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
