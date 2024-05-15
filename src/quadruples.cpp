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

FILE* create_file(char* path) {
  FILE* file = fopen(path, "w");
  if (file == NULL) {
    printf("Error: File %s not found\n", path);
    exit(0);
  }
  return file;
}

void set_quad_file_path(char *filePath, FILE *file) {
  quadFile = filePath;
  quadFileP = file;
}

void quad_start_function(char *function)
{
    fprintf(quadFileP, "%s:\n", function);
}

void quad_end_function(char *function)
{
    fprintf(quadFileP, "\tEND %s\n", function);
}

void quad_call_function(char *function)
{
    fprintf(quadFileP, "\tCALL %s\n", function);
}

void quad_return()
{
    fprintf(quadFileP, "\tRET\n");
}

void quad_instruction(const char *instruction)
{
    fprintf(quadFileP, "\t%s\n", instruction);
}

void quad_push_int(int val)
{
    fprintf(quadFileP, "\tPUSH %d\n", val);
}

void quad_push_float(float val)
{
    fprintf(quadFileP, "\tPUSH %f\n", val);
}

void quad_push_string_or_char(char *str)
{
    fprintf(quadFileP, "\tPUSH %s\n", str);
}

void quad_push_ident(char *symbol)
{
    fprintf(quadFileP, "\tPUSH %s\n", symbol);
}

void quad_pop_ident(char *symbol)
{
    fprintf(quadFileP, "\tPOP %s\n", symbol);
}

void quad_push_end_label(int endLabelNum)
{
    endLabel[++endLabelIndex] = endLabelNum;
}

void quad_jump_end_label()
{
    int endLabelNum = endLabel[endLabelIndex];
    fprintf(quadFileP, "\tJMP EndLabel_%d\n", endLabelNum);
}

void quad_pop_end_label()
{
    if (endLabelIndex < 0)
    {
        fprintf(quadFileP, "Error: No end label to add. Segmentation Fault\n");
        return;
    }
    int endLabelNum = endLabel[endLabelIndex--];
    fprintf(quadFileP, "EndLabel_%d:\n", endLabelNum);
}

void quad_jump_false_label(int labelNum)
{
    fprintf(quadFileP, "\tJF Label_%d\n", labelNum);
    label[labelIndex++] = labelNum;
}

void quad_pop_label()
{
    if (labelIndex < 0)
    {
        fprintf(quadFileP, "Error: No end label to add. Segmentation Fault\n");
        return;
    }
    int labelNum = label[--labelIndex];

    fprintf(quadFileP, "Label_%d:\n", labelNum);
}

void quad_push_switch_ident(char *identifier)
{
    switchIdent[++switchIdentIndex] = identifier;
}

void quad_peak_switch_ident()
{
    if (switchIdentIndex < 0)
    {
        fprintf(quadFileP, "Error: No last identifier to peak. Segmentation Fault\n");
        return;
    }

    fprintf(quadFileP, "\tPUSH %s\n", switchIdent[switchIdentIndex]);
}

void quad_pop_switch_ident()
{
    if (switchIdentIndex < 0)
    {
        fprintf(quadFileP, "Error: No last identifier to pop. Segmentation Fault\n");
        return;
    }
    switchIdentIndex--;
}

void quad_push_start_label(int startLabelNum, char *label)
{
    startLabel[++startLabelIndex] = startLabelNum;
    fprintf(quadFileP, "Start%s_%d:\n", label, startLabelNum);
}

void quad_jump_start_label(char *label)
{
    int startLabelNum = startLabel[startLabelIndex];
    fprintf(quadFileP, "\tJMP Start%s_%d\n", label, startLabelNum);
}

void quad_pop_start_label()
{
    if (startLabelIndex < 0)
    {
        fprintf(quadFileP, "Error: No start label to add. Segmentation Fault\n");
        return;
    }
    int startLabelNum = startLabel[startLabelIndex--];
}
