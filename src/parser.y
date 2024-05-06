%{
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>
    #include <stdbool.h>
    #include "parser.tab.h"
    #include "symbol_table.cpp"
    #include "operation.cpp"
    
    void yyerror(char* );
    int yylex();
    extern FILE *yyin;
    extern int number_of_line;
%}

%union { 
 int num;
 char* str; 
 float float_val;
 bool bool_val;

 struct nodeType *nPtr;
}

%code requires
{
#include<stdbool.h>
}

%token INT FLOAT STRING BOOL CHAR

%token PRINT VOID RETURN
%token SWITCH BREAK CONTINUE
%token CASE DEFAULT

%token IF ELSE
%token FOR WHILE DO 

%token BOOL_LITERAL LOGIC_AND LOGIC_OR LOGIC_NOT
%token EQUALITY NEG_EQUALITY
%token GT LT EQ
%token SEMICOLON MODULO PLUS SUB MUL DIV POW BITWISE_OR BITWISE_AND SHL SHR

%token CONSTANT IDENTIFIER STRING_LITERAL CHAR_LITERAL
%token DIGIT FLOAT_DIGIT

%left LOGIC_AND LOGIC_OR
%right LOGIC_NOT

%left EQUALITY NEG_EQUALITY
%left PLUS SUB MODULO

%right POW

%left MUL DIV 
%left BITWISE_OR BITWISE_AND SHL SHR
%right EQ GT LT


%type <str> INT FLOAT BOOL STRING CHAR VOID CONSTANT IDENTIFIER TYPE STRING_LITERAL PLUS CHAR_LITERAL
%type <float_val> FLOAT_DIGIT
%type <num> DIGIT
%type <bool_val> BOOL_LITERAL

%type <nPtr> STATEMENT EXPRESSION FUNC_CALL RETURN_STATEMENT DECLARATION_STATEMENT BREAK CONTINUE LOGIC_NOT RETURN SUB '(' ')'
%%
PROGRAM:                                                    
                PROGRAM STATEMENT  {printf("Parsed Line %d Succesfully\n\n", number_of_line);}        
                |
                ;
//________________________________________________ BLOCK ________________________________________________
BLOCK:
                '{' {scope_start();} PROGRAM '}' {scope_end(number_of_line);}             
                ;

//________________________________________________ STATEMENT ________________________________________________
STATEMENT:
                DECLARATION_STATEMENT
                | ASSIGNMENT_STATEMENT     {printf("Parsed Assignment statement\n");}
                | EXPRESSION SEMICOLON
               
                | PRINT_STATEMENT            {printf("Parsed print statement\n");}
                
                | {quadPushEndLabel(++endLabelNum);}    IF_STATEMENT      {quadPopEndLabel();printf("Parsed if statement\n");}
                | {quadPushStartLabel(++startLabelNum);}WHILE_STATEMENT   {quadPopStartLabel();printf("Parsed While LOOP\n");}         
                | {quadPushStartLabel(++startLabelNum);}DO_WHILE_STATEMENT{quadPopStartLabel();printf("Parsed Do While LOOP\n");}      
                | {quadPushEndLabel(++endLabelNum);}    SWITCH_STATEMENT  {quadPopEndLabel();printf("Parsed Switch Statement\n");}
                | FOR_STATEMENT {quadPopStartLabel();printf("Parsed For LOOP\n");}
                
                | BREAK SEMICOLON  {quadJumpEndLabel();}
                | CONTINUE SEMICOLON
                
                | RETURN_STATEMENT SEMICOLON   {quadReturn();}
                | BLOCK                        {printf("Parsed Block\n");}
                | FUNC_DECLARATION_STATEMENT   {printf("Parsed Function Declaration\n");}
                
                ;

//________________________________________________ PRINT STATEMENT ________________________________________________
PRINT_STATEMENT:
                PRINT {insertResult=-1;isPrint=1;} '('EXPRESSION')' SEMICOLON {isPrint=0;}
                ;                            
//________________________________________________ TYPE ________________________________________________
TYPE:
                INT         { $$ = "int";   }
                | FLOAT     { $$ = "float"; }
                | BOOL      { $$ = "bool";  }
                | STRING    { $$ = "string";}
                | CHAR      { $$ = "char";}
                | VOID      { $$ = "void";}
                ;

//________________________________________________ EXPRESSION ________________________________________________
EXPRESSION:
                IDENTIFIER      {int i = lookup($1, 0, number_of_line);check_type(i, number_of_line);$$ = setType(symbolTable[i].datatype);if(!isPrint)quadPushIdentifier($1);}                
                | CONSTANT      {int i = lookup($1, 0, number_of_line);check_type(i, number_of_line);$$ = setType(symbolTable[i].datatype);if(!isPrint)quadPushIdentifier($1);}
                | DIGIT         {$$ = setType("int");assign_int(insertResult, $1, number_of_line);}       
                | FLOAT_DIGIT   {$$ = setType("float");assign_float(insertResult, $1, number_of_line);}                 
                | BOOL_LITERAL  {$$ = setType("bool");assign_bool(insertResult, $1, number_of_line);}   
                | STRING_LITERAL{$$ = setType("string");assign_string(insertResult, $1, number_of_line);}                
                | CHAR_LITERAL  {$$ = setType("char");assign_char(insertResult, $1, number_of_line);}                

                | '(' EXPRESSION ')'  {$$ = $2;}
                | FUNC_CALL                                
                
                | SUB EXPRESSION      {$$ = unary_operator($2,  number_of_line);quadInstruction("NEG");}          
                | LOGIC_NOT EXPRESSION{$$ = logical($2, NULL, number_of_line);quadInstruction("LOGICAL_NOT");}

                | EXPRESSION PLUS EXPRESSION  {$$ = arithmatic($1, $3, number_of_line);quadInstruction("ADD");}
                | EXPRESSION SUB EXPRESSION   {$$ = arithmatic($1, $3, number_of_line);quadInstruction("SUB");}           
                | EXPRESSION MUL EXPRESSION   {$$ = arithmatic($1, $3, number_of_line);quadInstruction("MUL");}          
                | EXPRESSION DIV EXPRESSION   {$$ = arithmatic($1, $3, number_of_line);quadInstruction("DIV");}           
                | EXPRESSION POW EXPRESSION   {$$ = arithmatic($1, $3, number_of_line);quadInstruction("POW");}
                | EXPRESSION MODULO EXPRESSION{$$ = arithmatic($1, $3, number_of_line);quadInstruction("MOD");}         
                
                | EXPRESSION BITWISE_OR EXPRESSION  {$$ = bitwise($1, $3, number_of_line);quadInstruction("BITWISE_OR");}
                | EXPRESSION BITWISE_AND EXPRESSION {$$ = bitwise($1, $3, number_of_line);quadInstruction("BITWISE_AND");}
                | EXPRESSION SHL EXPRESSION         {$$ = bitwise($1, $3, number_of_line);quadInstruction("SHL");}
                | EXPRESSION SHR EXPRESSION         {$$ = bitwise($1, $3, number_of_line);quadInstruction("SHR");}
                
                | EXPRESSION LOGIC_AND EXPRESSION{$$ = logical($1, $3, number_of_line);quadInstruction("LOGICAL_AND");}    
                | EXPRESSION LOGIC_OR EXPRESSION {$$ = logical($1, $3, number_of_line);quadInstruction("LOGICAL_OR");} 

                | EXPRESSION EQUALITY EXPRESSION    {$$ = comparison($1, $3, number_of_line);quadInstruction("EQ");}  
                | EXPRESSION NEG_EQUALITY EXPRESSION{$$ = comparison($1, $3, number_of_line);quadInstruction("NEQ");} 

                | EXPRESSION GT EXPRESSION    {$$ = comparison($1, $3, number_of_line);quadInstruction("GT");}            
                | EXPRESSION GT EQ EXPRESSION {$$ = comparison($1, $4, number_of_line);quadInstruction("GEQ");}        
                | EXPRESSION LT EXPRESSION    {$$ = comparison($1, $3, number_of_line);quadInstruction("LT");}             
                | EXPRESSION LT EQ EXPRESSION {$$ = comparison($1, $4, number_of_line);quadInstruction("LEQ");}         
                ;               

//________________________________________________ DECLARATION STATEMENT ________________________________________________
DECLARATION_STATEMENT:                                                            
                TYPE IDENTIFIER {insertResult = insert($1, $2, "var", number_of_line, false);}  EQ EXPRESSION SEMICOLON { insertResult = -1;quadPopIdentifier($2);printf("Parsed Declaration\n");}
                | TYPE IDENTIFIER {insertResult = insert($1, $2, "var", number_of_line, false);} SEMICOLON { insertResult = -1;printf("Parsed Declaration\n");}
                | TYPE CONSTANT {insertResult = insert($1, $2, "const", number_of_line, false);} EQ EXPRESSION SEMICOLON { insertResult = -1;quadPopIdentifier($2);printf("Parsed Const Declaration\n");}
                | TYPE CONSTANT {insertResult = insert($1, $2, "const", number_of_line, false);} SEMICOLON { insertResult = -1;printf("Parsed Const Declaration\n");}
                ;


RETURN_STATEMENT:
                RETURN               
                | RETURN {insertResult = funcIndex;} EXPRESSION {returnExist = 1;}  
                ;

//________________________________________________ SWITCH STATEMENT ________________________________________________
SWITCH_STATEMENT:
                SWITCH '(' IDENTIFIER {quadPushLastIdentifierStack($3);lookup($3, 0, number_of_line);} ')' '{' CASES  '}' {quadPopLastIdentifierStack();}
                ;
DEFAULTCASE:
                DEFAULT ':' BLOCK
                ;
CASES:
                CASE EXPRESSION {quadPeakLastIdentifierStack();quadJumpFalseLabel(++labelNum);}':' BLOCK {quadPopLabel();} CASES
                | DEFAULTCASE
                | 
                ;

//________________________________________________ FUNCTION DECLARATION STATEMENT ________________________________________________

FUNC_DECLARATION_STATEMENT:
                TYPE IDENTIFIER {quadStartFunction($2);} '(' ARGS ')'{funcIndex = insert($1, $2,"func", number_of_line, 0);} BLOCK {quadEndFunction($2);}                                 
                ;
ARGS:
                ARG_DECL ',' ARGS
                | ARG_DECL
                | 
                ;
ARG_DECL:
                TYPE IDENTIFIER {quadPopIdentifier($2);insertResult = insert($1, $2,"var", number_of_line, true);}
                ;

//________________________________________________ IF STATEMENT ________________________________________________
IF_TAIL: 
                ELSE BLOCK
                | ELSE IF_STATEMENT
                | 
                ;
IF_STATEMENT:
                IF EXPRESSION {quadJumpFalseLabel(++labelNum);} BLOCK {quadJumpEndLabel();quadPopLabel();} IF_TAIL         
                ;

//________________________________________________ WHILE STATEMENT ________________________________________________
WHILE_STATEMENT:
                WHILE EXPRESSION {quadJumpFalseLabel(++labelNum);} BLOCK {quadJumpStartLabel();quadPopLabel();}
                ;
//________________________________________________ DO WHILE STATEMENT ________________________________________________
DO_WHILE_STATEMENT:
                DO BLOCK WHILE '(' EXPRESSION ')' SEMICOLON {quadJumpFalseLabel(++labelNum);quadJumpStartLabel();quadPopLabel();}
                ;
//________________________________________________ FOR STATEMENT ________________________________________________
FOR_STATEMENT:
                FOR '(' {inLoop = 1;} STATEMENT {quadPushStartLabel(++startLabelNum);} STATEMENT STATEMENT {quadJumpFalseLabel(++labelNum);} ')' {inLoop = 0;} BLOCK {quadJumpStartLabel();quadPopLabel();}
                ;

//________________________________________________ ASSIGNMENT STATEMENT ________________________________________________
ASSIGNMENT_STATEMENT:
                IDENTIFIER EQ {insertResult = lookup($1, 1, number_of_line);} EXPRESSION SEMICOLON {quadPopIdentifier($1);} 
                | CONSTANT EQ {printf("Error at line: %d CONSTANTS must not be reassigned\n", number_of_line);exit(1);insertResult = -1;} EXPRESSION SEMICOLON   
                ;

//________________________________________________ FUNCTION CALL ________________________________________________
FUNC_CALL:
                IDENTIFIER {argCount=0;calledFuncIndex = lookup($1, 0, number_of_line);check_type(calledFuncIndex, number_of_line);} '(' {isParameter=1;} ARGUMENTS {isParameter=0;arg_count_check(calledFuncIndex, number_of_line);} ')' {quadCallFunction($1);printf("Parsed Function Call\n");}
                ;       
ARGUMENTS:      
                EXPRESSION { argCount++; } ',' ARGUMENTS 
                | EXPRESSION { argCount++; } 
                |  
                ;
%%

void yyerror(char *s) { 
 fprintf(stderr, "line %d: %s\n", number_of_line, s); 
} 
int yywrap()
{
    return 1;
}

int main(int argc, char *argv[])
{ 
    remove_file();
    setQuadFilePath("quadruples.txt", createFile("quadruples.txt"));
    yyin = fopen(argv[1], "r");
    yyparse();
    // display();
    // display_unused_variables();
    display_to_file("symbol_table.txt");

    return 0;
}