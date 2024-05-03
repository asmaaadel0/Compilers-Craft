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
    fprintf(quadFileP, "PROC %s\n", function);
}
void quadEndFunction(char *function)
{
    fprintf(quadFileP, "ENDPROC %s\n", function);
}
void quadCallFunction(char *function)
{
    fprintf(quadFileP, "CALL %s\n", function);
}
void quadReturn()
{
    fprintf(quadFileP, "RET\n");
}
void quadInstruction(const char *instruction)
{
    fprintf(quadFileP, "%s\n", instruction);
}
void quadPushInt(int val)
{
    fprintf(quadFileP, "PUSH %d\n", val);
}
void quadPushFloat(float val)
{
    fprintf(quadFileP, "PUSH %f\n", val);
}
void quadPushIdentifier(char *symbol)
{
    fprintf(quadFileP, "PUSH %s\n", symbol);
}
void quadPushString(char *str)
{
    fprintf(quadFileP, "PUSH %s\n", str);
}
void quadPopIdentifier(char *symbol)
{
    fprintf(quadFileP, "POP %s\n\n", symbol);
}
void quadPushEndLabel(int endLabelNum)
{
    /* push the labelNum to the stack */
    endLabelStack[++endLabelstackPointer] = endLabelNum;
}
void quadJumpEndLabel() // jump to the first end label in the stack
{
    /* get last  endLabelNum from the stack*/
    int endLabelNum = endLabelStack[endLabelstackPointer];
    fprintf(quadFileP, "JMP EndLabel_%d\n", endLabelNum);
}
void quadPopEndLabel()
{
    if (endLabelstackPointer < 0)
    {
        fprintf(quadFileP, "Quads(%d) Error: No end label to add. Segmenration Fault\n");
        return;
    }
    /* get the last endLabelNum from the stack */
    int endLabelNum = endLabelStack[endLabelstackPointer--];
    fprintf(quadFileP, "Quads(%d) EndLabel_%d:\n", endLabelNum);
}
void quadJumpFalseLabel(int labelNum)
{

    fprintf(quadFileP, "JF Label_%d\n", labelNum);
    /* push the labelNum to the stack */
    labelStack[labelStackPointer++] = labelNum;
}
void quadPopLabel()
{
    if (labelStackPointer < 0)
    {
        fprintf(quadFileP, "Quads(%d) Error: No end label to add. Segmenration Fault\n");
        return;
    }
    /* get the last labelNum from the stack */
    int labelNum = labelStack[--labelStackPointer];

    fprintf(quadFileP, "Quads(%d) Label_%d:\n", labelNum);
}
void quadPushLastIdentifierStack(char *identifier)
{
    /* add the IDENTIFIER to the stack */
    lastIdentifierStack[++lastIdentifierStackPointer] = identifier;
}
void quadPeakLastIdentifierStack()
{
    if (lastIdentifierStackPointer < 0)
    {
        fprintf(quadFileP, "Quads(%d) Error: No last identifier to peak. Segmenration Fault\n");
        return;
    }
    /* get the last identifier from the stack */
    char *identifier = lastIdentifierStack[lastIdentifierStackPointer];

    fprintf(quadFileP, "PUSH %s\n", identifier);
}
void quadPopLastIdentifierStack()
{
    if (lastIdentifierStackPointer < 0)
    {
        fprintf(quadFileP, "Quads(%d) Error: No last identifier to pop. Segmenration Fault\n");
        return;
    }
    /* get the last IDENTIFIER from the stack */
    char *identifier = lastIdentifierStack[lastIdentifierStackPointer--];
}

void quadPushStartLabel(int startLabelNum)
{
    /* push the labelNum to the stack */
    startLabelStack[++startLabelstackPointer] = startLabelNum;
    fprintf(quadFileP, "Quads(%d) StartLabel_%d:\n", startLabelNum);
}
void quadJumpStartLabel()
{
    /* get last  startLabelNum from the stack*/
    int startLabelNum = startLabelStack[startLabelstackPointer];
    fprintf(quadFileP, "JMP StartLabel_%d\n", startLabelNum);
}
void quadPopStartLabel()
{
    if (startLabelstackPointer < 0)
    {
        fprintf(quadFileP, "Quads(%d) Error: No start label to add. Segmenration Fault\n");
        return;
    }
    /* get the last endLabelNum from the stack */
    int startLabelNum = startLabelStack[startLabelstackPointer--];
}