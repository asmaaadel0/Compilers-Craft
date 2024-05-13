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

FILE* createFile(char* path) {
  FILE* file = fopen(path, "w");
  if (file == NULL) {
    printf("Error: File %s not found\n", path);
    exit(0);
  }
  return file;
}

void setQuadFilePath(char *filePath, FILE *file) {
  quadFile = filePath;
  quadFileP = file;
}

void quadStartFunction(char *function)
{
    fprintf(quadFileP, "%s:\n", function);
}

void quadEndFunction(char *function)
{
    fprintf(quadFileP, "\tEND %s\n", function);
}

void quadCallFunction(char *function)
{
    fprintf(quadFileP, "\tCALL %s\n", function);
}

void quadReturn()
{
    fprintf(quadFileP, "\tRET\n");
}

void quadInstruction(const char *instruction)
{
    fprintf(quadFileP, "\t%s\n", instruction);
}

void quadPushInt(int val)
{
    fprintf(quadFileP, "\tPUSH %d\n", val);
}

void quadPushFloat(float val)
{
    fprintf(quadFileP, "\tPUSH %f\n", val);
}

void quadPushIdent(char *symbol)
{
    fprintf(quadFileP, "\tPUSH %s\n", symbol);
}

void quadPushString(char *str)
{
    fprintf(quadFileP, "\tPUSH %s\n", str);
}

void quadPushChar(char *ch)
{
    fprintf(quadFileP, "\tPUSH %s\n", ch);
}

void quadPopIdent(char *symbol)
{
    fprintf(quadFileP, "\tPOP %s\n", symbol);
}

void quadPushEndLabel(int endLabelNum)
{
    endLabel[++endLabelIndex] = endLabelNum;
}

void quadJumpEndLabel()
{
    int endLabelNum = endLabel[endLabelIndex];
    fprintf(quadFileP, "\tJMP EndLabel_%d\n", endLabelNum);
}

void quadPopEndLabel()
{
    if (endLabelIndex < 0)
    {
        fprintf(quadFileP, "Error: No end label to add. Segmentation Fault\n");
        return;
    }
    int endLabelNum = endLabel[endLabelIndex--];
    fprintf(quadFileP, "EndLabel_%d:\n", endLabelNum);
}

void quadJumpFalseLabel(int labelNum)
{
    fprintf(quadFileP, "\tJF Label_%d\n", labelNum);
    label[labelIndex++] = labelNum;
}

void quadPopLabel()
{
    if (labelIndex < 0)
    {
        fprintf(quadFileP, "Error: No end label to add. Segmentation Fault\n");
        return;
    }
    int labelNum = label[--labelIndex];

    fprintf(quadFileP, "Label_%d:\n", labelNum);
}

void quadPushSwitchIdent(char *identifier)
{
    switchIdent[++switchIdentIndex] = identifier;
}

void quadPeakSwitchIdent()
{
    if (switchIdentIndex < 0)
    {
        fprintf(quadFileP, "Error: No last identifier to peak. Segmentation Fault\n");
        return;
    }

    fprintf(quadFileP, "\tPUSH %s\n", switchIdent[switchIdentIndex]);
}

void quadPopSwitchIdent()
{
    if (switchIdentIndex < 0)
    {
        fprintf(quadFileP, "Error: No last identifier to pop. Segmentation Fault\n");
        return;
    }
    switchIdentIndex--;
}

void quadPushStartLabel(int startLabelNum, char *label)
{
    startLabel[++startLabelIndex] = startLabelNum;
    fprintf(quadFileP, "Start%s_%d:\n", label, startLabelNum);
}

void quadJumpStartLabel(char *label)
{
    int startLabelNum = startLabel[startLabelIndex];
    fprintf(quadFileP, "\tJMP Start%s_%d\n", label, startLabelNum);
}

void quadPopStartLabel()
{
    if (startLabelIndex < 0)
    {
        fprintf(quadFileP, "Error: No start label to add. Segmentation Fault\n");
        return;
    }
    int startLabelNum = startLabel[startLabelIndex--];
}
