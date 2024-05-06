#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int labelNum = 0;
int labelStackPointer = -1;
int labelStack[100];

int endLabelNum = 0;
int endLabelstackPointer = -1;
int endLabelStack[100];

int lastIdentifierStackPointer = -1;
char *lastIdentifierStack[100];

int startLabelNum = 0;
int startLabelstackPointer = -1;
int startLabelStack[100];

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
void quadPushIdentifier(char *symbol)
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
void quadPopIdentifier(char *symbol)
{
    fprintf(quadFileP, "\tPOP %s\n", symbol);
}
void quadPushEndLabel(int endLabelNum)
{
    endLabelStack[++endLabelstackPointer] = endLabelNum;
}
void quadJumpEndLabel()
{
    int endLabelNum = endLabelStack[endLabelstackPointer];
    fprintf(quadFileP, "\tJMP EndLabel_%d\n", endLabelNum);
}
void quadPopEndLabel()
{
    if (endLabelstackPointer < 0)
    {
        fprintf(quadFileP, "Error: No end label to add. Segmenration Fault\n");
        return;
    }
    int endLabelNum = endLabelStack[endLabelstackPointer--];
    fprintf(quadFileP, "EndLabel_%d:\n", endLabelNum);
}
void quadJumpFalseLabel(int labelNum)
{

    fprintf(quadFileP, "\tJF Label_%d\n", labelNum);
    labelStack[labelStackPointer++] = labelNum;
}
void quadPopLabel()
{
    if (labelStackPointer < 0)
    {
        fprintf(quadFileP, "Error: No end label to add. Segmenration Fault\n");
        return;
    }
    int labelNum = labelStack[--labelStackPointer];

    fprintf(quadFileP, "Label_%d:\n", labelNum);
}
void quadPushLastIdentifierStack(char *identifier)
{
    lastIdentifierStack[++lastIdentifierStackPointer] = identifier;
}
void quadPeakLastIdentifierStack()
{
    if (lastIdentifierStackPointer < 0)
    {
        fprintf(quadFileP, "Error: No last identifier to peak. Segmenration Fault\n");
        return;
    }
    char *identifier = lastIdentifierStack[lastIdentifierStackPointer];

    fprintf(quadFileP, "\tPUSH %s\n", identifier);
}
void quadPopLastIdentifierStack()
{
    if (lastIdentifierStackPointer < 0)
    {
        fprintf(quadFileP, "Error: No last identifier to pop. Segmenration Fault\n");
        return;
    }
    char *identifier = lastIdentifierStack[lastIdentifierStackPointer--];
}

void quadPushStartLabel(int startLabelNum)
{
    startLabelStack[++startLabelstackPointer] = startLabelNum;
    fprintf(quadFileP, "StartLabel_%d:\n", startLabelNum);
}
void quadJumpStartLabel()
{
    int startLabelNum = startLabelStack[startLabelstackPointer];
    fprintf(quadFileP, "\tJMP StartLabel_%d\n", startLabelNum);
}
void quadPopStartLabel()
{
    if (startLabelstackPointer < 0)
    {
        fprintf(quadFileP, "Error: No start label to add. Segmenration Fault\n");
        return;
    }
    int startLabelNum = startLabelStack[startLabelstackPointer--];
}