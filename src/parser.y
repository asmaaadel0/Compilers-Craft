%{
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>
    #include <stdbool.h>
    #include "parser.tab.h"
    #include "symbol_table.cpp"
    #include "operation.cpp"
    
    void yyerror(char* );
    extern int yylineno;

    int yylex();
    extern FILE *yyin;    
%}

%union { 
 int int_value;
 char* string_value; 
 float float_value;
 bool bool_value;

 struct nodeType *nodePtr;
}

%code requires
{
#include<stdbool.h>
}

%token INT FLOAT STRING CHAR BOOL

%token PRINT VOID RETURN
%token SWITCH BREAK
%token CASE DEFAULT

%token IF ELSE
%token FOR WHILE DO 

%token BOOL_VALUE LOGICAL_AND LOGICAL_OR LOGICAL_NOT
%token EQUAL NOT_EQUAL
%token GT LT EQ
%token SEMICOLON MOD ADD SUB MUL DIV POW BITWISE_OR BITWISE_AND SHL SHR

%token CONSTANT IDENTIFIER STRING_VALUE CHAR_VALUE
%token INT_VALUE FLOAT_VALUE

%right EQ

%left LOGICAL_AND LOGICAL_OR

%left BITWISE_OR BITWISE_AND

%left EQUAL NOT_EQUAL
%left GT LT

%left SHL SHR

%left ADD SUB
%left MUL DIV MOD

%right POW

%right LOGICAL_NOT

%type <string_value> INT FLOAT BOOL STRING CHAR VOID CONSTANT IDENTIFIER TYPE STRING_VALUE ADD CHAR_VALUE
%type <float_value> FLOAT_VALUE
%type <int_value> INT_VALUE
%type <bool_value> BOOL_VALUE

%type <nodePtr> EXPRESSION FUNC_CALL RETURN_STATEMENT DECLARATION_STATEMENT BREAK LOGICAL_NOT RETURN SUB
%%
PROGRAM:
        PROGRAM STATEMENT  {printf("Parsed Line %d Succesfully\n", yylineno);}        
        |
        ;
//________________________________________________ BLOCK ________________________________________________
BLOCK:
        '{' {enter_new_scope();} PROGRAM '}' {leave_scope(yylineno);}             
        ;

//________________________________________________ STATEMENT ________________________________________________
STATEMENT:
        DECLARATION_STATEMENT
        | ASSIGNMENT_STATEMENT
        | EXPRESSION SEMICOLON
       
        | PRINT_STATEMENT
        
        | {quadPushEndLabel(++endLabelNum);}IF_STATEMENT{quadPopEndLabel();}
        | {quadPushStartLabel(++startLabelNum, "While");}WHILE_STATEMENT{quadPopStartLabel();}         
        | {quadPushStartLabel(++startLabelNum, "DoWhile");}DO_WHILE_STATEMENT{quadPopStartLabel();}      
        | {quadPushEndLabel(++endLabelNum);}SWITCH_STATEMENT{quadPopEndLabel();}
        | FOR_STATEMENT{quadPopStartLabel();}
        
        | BREAK SEMICOLON{quadJumpEndLabel();}
        
        | RETURN_STATEMENT SEMICOLON{quadReturn();}
        | BLOCK
        | FUNC_DECLARATION_STATEMENT
        
        ;

//________________________________________________ PRINT STATEMENT ________________________________________________
PRINT_STATEMENT:
        PRINT{insertResult=-1;isPrint=1;} '('EXPRESSION')' SEMICOLON {isPrint=0;}
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
        IDENTIFIER    {int i = lookup($1, 0, yylineno);check_variable_type(i, yylineno);$$ = set_type(symbolTableArray[i].datatype);if(!isPrint)quadPushIdent($1);}        
        | CONSTANT    {int i = lookup($1, 0, yylineno);check_variable_type(i, yylineno);$$ = set_type(symbolTableArray[i].datatype);if(!isPrint)quadPushIdent($1);}
        | INT_VALUE   {$$ = set_type("int");check_int_value(insertResult, $1, yylineno);}       
        | FLOAT_VALUE {$$ = set_type("float");check_float_value(insertResult, $1, yylineno);}         
        | BOOL_VALUE  {$$ = set_type("bool");check_bool_value(insertResult, $1, yylineno);}   
        | STRING_VALUE{$$ = set_type("string");check_string_value(insertResult, $1, yylineno);}        
        | CHAR_VALUE  {$$ = set_type("char");check_char_value(insertResult, $1, yylineno);} 
        
        | '(' EXPRESSION ')'  {$$ = $2;}
        | FUNC_CALL
        
        | SUB EXPRESSION        {$$ = arithmatic_operator_checker($2, NULL, yylineno);quadInstruction("NEG");}          
        | LOGICAL_NOT EXPRESSION{$$ = boolean_operator_checker($2, NULL, yylineno);quadInstruction("LOGICAL_NOT");}

        | EXPRESSION ADD EXPRESSION{$$ = arithmatic_operator_checker($1, $3, yylineno);quadInstruction("ADD");}
        | EXPRESSION SUB EXPRESSION{$$ = arithmatic_operator_checker($1, $3, yylineno);quadInstruction("SUB");}           
        | EXPRESSION MUL EXPRESSION{$$ = arithmatic_operator_checker($1, $3, yylineno);quadInstruction("MUL");}          
        | EXPRESSION DIV EXPRESSION{$$ = arithmatic_operator_checker($1, $3, yylineno);quadInstruction("DIV");}           
        | EXPRESSION POW EXPRESSION{$$ = arithmatic_operator_checker($1, $3, yylineno);quadInstruction("POW");}
        | EXPRESSION MOD EXPRESSION{$$ = arithmatic_operator_checker($1, $3, yylineno);quadInstruction("MOD");}         
        
        | EXPRESSION BITWISE_OR EXPRESSION  {$$ = bitwise_operator_checker($1, $3, yylineno);quadInstruction("BITWISE_OR");}
        | EXPRESSION BITWISE_AND EXPRESSION {$$ = bitwise_operator_checker($1, $3, yylineno);quadInstruction("BITWISE_AND");}
        | EXPRESSION SHL EXPRESSION         {$$ = bitwise_operator_checker($1, $3, yylineno);quadInstruction("SHL");}
        | EXPRESSION SHR EXPRESSION         {$$ = bitwise_operator_checker($1, $3, yylineno);quadInstruction("SHR");}
        
        | EXPRESSION LOGICAL_AND EXPRESSION{$$ = boolean_operator_checker($1, $3, yylineno);quadInstruction("LOGICAL_AND");}    
        | EXPRESSION LOGICAL_OR EXPRESSION {$$ = boolean_operator_checker($1, $3, yylineno);quadInstruction("LOGICAL_OR");} 

        | EXPRESSION EQUAL EXPRESSION    {$$ = boolean_operator_checker($1, $3, yylineno);quadInstruction("EQ");}  
        | EXPRESSION NOT_EQUAL EXPRESSION{$$ = boolean_operator_checker($1, $3, yylineno);quadInstruction("NEQ");} 

        | EXPRESSION GT EXPRESSION    {$$ = boolean_operator_checker($1, $3, yylineno);quadInstruction("GT");}            
        | EXPRESSION GT EQ EXPRESSION {$$ = boolean_operator_checker($1, $4, yylineno);quadInstruction("GEQ");}        
        | EXPRESSION LT EXPRESSION    {$$ = boolean_operator_checker($1, $3, yylineno);quadInstruction("LT");}             
        | EXPRESSION LT EQ EXPRESSION {$$ = boolean_operator_checker($1, $4, yylineno);quadInstruction("LEQ");}         
        ;               

//________________________________________________ DECLARATION STATEMENT ________________________________________________
DECLARATION_STATEMENT:
        TYPE IDENTIFIER  {insertResult = insert($1, $2, "variable", yylineno, false);} EQ EXPRESSION SEMICOLON { insertResult = -1;quadPopIdent($2);}
        | TYPE IDENTIFIER{insertResult = insert($1, $2, "variable", yylineno, false);} SEMICOLON { insertResult = -1;}
        | TYPE CONSTANT  {insertResult = insert($1, $2, "constant", yylineno, false);}EQ EXPRESSION SEMICOLON { insertResult = -1;quadPopIdent($2);}
        | TYPE CONSTANT  {insertResult = insert($1, $2, "constant", yylineno, false);}SEMICOLON { insertResult = -1;}
        ;


RETURN_STATEMENT:
        RETURN               
        | RETURN {insertResult = funcIndex;} EXPRESSION {returnExist = 1;}  
        ;

//________________________________________________ SWITCH STATEMENT ________________________________________________
SWITCH_STATEMENT:
        SWITCH '(' IDENTIFIER {quadPushSwitchIdent($3);lookup($3, 0, yylineno);} ')' '{' CASES  '}' {quadPopSwitchIdent();}
        ;
DEFAULTCASE:
        DEFAULT ':' BLOCK
        ;
CASES:
        CASE EXPRESSION {quadPeakSwitchIdent();quadInstruction("EQ");quadJumpFalseLabel(++labelNum);}':' BLOCK {quadPopLabel();} CASES
        | DEFAULTCASE
        | 
        ;

//________________________________________________ FUNCTION DECLARATION STATEMENT ________________________________________________

FUNC_DECLARATION_STATEMENT:
        TYPE IDENTIFIER {quadStartFunction($2);} '(' ARGS ')'{funcIndex = insert($1, $2,"function", yylineno, 0);} BLOCK {quadEndFunction($2);}
        ;
ARGS:
        ARG_DECL ',' ARGS
        | ARG_DECL
        | 
        ;
ARG_DECL:
        TYPE IDENTIFIER {quadPopIdent($2);insertResult = insert($1, $2,"variable", yylineno, true);}
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
        WHILE EXPRESSION {quadJumpFalseLabel(++labelNum);} BLOCK {quadJumpStartLabel("While");quadPopLabel();}
        ;
//________________________________________________ DO WHILE STATEMENT ________________________________________________
DO_WHILE_STATEMENT:
        DO BLOCK WHILE '(' EXPRESSION ')' SEMICOLON {quadJumpFalseLabel(++labelNum);quadJumpStartLabel("DoWhile");quadPopLabel();}
        ;
//________________________________________________ FOR STATEMENT ________________________________________________
FOR_STATEMENT:
        FOR '(' {isLoop = 1;} STATEMENT {quadPushStartLabel(++startLabelNum, "For");} STATEMENT {quadJumpFalseLabel(++labelNum);} STATEMENT ')' {isLoop = 0;} BLOCK {quadJumpStartLabel("For");quadPopLabel();}
        ;

//________________________________________________ ASSIGNMENT STATEMENT ________________________________________________
ASSIGNMENT_STATEMENT:
        IDENTIFIER EQ {insertResult = lookup($1, 1, yylineno);} EXPRESSION SEMICOLON {quadPopIdent($1);} 
        | CONSTANT EQ {printf("Error at line: %d CONSTANTS must not be reassigned\n", yylineno);exit(EXIT_FAILURE);insertResult = -1;} EXPRESSION SEMICOLON   
        ;

//________________________________________________ FUNCTION CALL ________________________________________________
FUNC_CALL:
        IDENTIFIER {funcArgCount=0;calledFuncIndex = lookup($1, 0, yylineno);check_variable_type(calledFuncIndex, yylineno);} '(' {isParameter=1;} ARGUMENTS {isParameter=0;check_arg_count(calledFuncIndex, yylineno);} ')' {quadCallFunction($1);$$ = set_type(symbolTableArray[calledFuncIndex].datatype);}
        ;       
ARGUMENTS:      
        EXPRESSION { funcArgCount++; } ',' ARGUMENTS 
        | EXPRESSION { funcArgCount++; } 
        |  
        ;
%%

void yyerror(char *s) { 
    printf("line %d: %s\n", yylineno, s); 
    fprintf(error_file, "line %d: %s\n", yylineno, s); 
} 
int yywrap()
{
    return 1;
}

int main(int argc, char *argv[])
{ 
    remove_file();
    setQuadFilePath("./output/quadruples.txt", createFile("./output/quadruples.txt"));
    error_file = fopen("./output/error_file.txt", "w");
    yyin = fopen(argv[1], "r");
    yyparse();
    // display_symbol_table();
    // display_unused_variables();
    display_unused_variables_to_file("./output/unused_variables.txt");
    display_symbol_table_to_file("./output/symbol_table.txt");
    
    return 0;
}