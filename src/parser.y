%{
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>
    #include <stdbool.h>
    #include "parser.tab.h"
    #include "symbol_table.cpp"
    
    void yyerror(char* );
    int yylex();
    extern FILE *yyin;
    extern int number_of_line;
    char IdentifierHolder[10];
%}

%union { 
 int num;
 char* str; 
 float float_val;
 bool bool_val;
}

%code requires
{
#include<stdbool.h>
}

%token INT FLOAT STRING ENUM BOOL 

%token PRINT VOID RETURN
%token SWITCH BREAK CONTINUE
%token CASE DEFAULT

%token IF ELSE
%token FOR WHILE DO 

%token BOOL_LITERAL LOGIC_AND LOGIC_OR LOGIC_NOT NOT
%token EQUALITY NEG_EQUALITY DEC INC 
%token GT LT SHR SHL EQ
%token SEMICOLON MODULO PLUS SUB MUL DIV POW

%token CONSTANT IDENTIFIER STRING_LITERAL
%token DIGIT FLOAT_DIGIT

%left LOGIC_AND LOGIC_OR
%right LOGIC_NOT NOT

%left EQUALITY NEG_EQUALITY
%left PLUS SUB INC DEC MODULO

%right POW

%left MUL DIV 
%right EQ GT LT

%left SHR SHL


%type <str> INT FLOAT BOOL STRING VOID CONSTANT IDENTIFIER TYPE STRING_LITERAL ENUM PLUS
%type <float_val> FLOAT_DIGIT
%type <num> DIGIT
%type <bool_val> BOOL_LITERAL

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
                PRINT_STATEMENT               {printf("Parsed print statement\n");}
                | DECLARATION_STATEMENT
                | ASSIGNMENT_STATEMENT         {printf("Parsed Assignment statement\n");}
                | EXPRESSION SEMICOLON
                
                | ENUM_DECLARATION_STATEMENT   {printf("Parsed Enum Declaration\n");}
                | ENUM_CALL_STATEMENT          {printf("Parsed Enum Call\n");}
                
                | IF_STATEMENT                 {printf("Parsed if statement\n");}
                | WHILE_STATEMENT              {printf("Parsed While LOOP\n");}
                | FOR_STATEMENT                {printf("Parsed For LOOP\n");}
                | DO_WHILE_STATEMENT           {printf("Parsed Do While LOOP\n");}
                | SWITCH_STATEMENT             {printf("Parsed Switch Statement\n");}
                | BREAK SEMICOLON
                | CONTINUE SEMICOLON
                
                | RETURN_STATEMENT SEMICOLON
                | BLOCK                        {printf("Parsed Block\n");}
                | FUNC_DECLARATION_STATEMENT   {printf("Parsed Function Declaration\n");}
                
                ;

//________________________________________________ PRINT STATEMENT ________________________________________________
PRINT_STATEMENT:
                PRINT '('EXPRESSION')' SEMICOLON
                | PRINT '('EXPRESSION ',' EXPRESSION')' SEMICOLON
                ;               
//________________________________________________ TYPE ________________________________________________
TYPE:
                INT         { $$ = "int";   }
                | FLOAT     { $$ = "float"; }
                | BOOL      { $$ = "bool";  }
                | STRING    { $$ = "string";}
                ;

//________________________________________________ EXPRESSION ________________________________________________
EXPRESSION:
                IDENTIFIER      {int i = lookup($1, 0, number_of_line);}                
                | CONSTANT      {int i = lookup($1, 0, number_of_line);}
                | DIGIT         {assign_int(insertResult, $1, number_of_line);}       
                | FLOAT_DIGIT   {assign_float(insertResult, $1, number_of_line);}                 
                | BOOL_LITERAL  {assign_bool(insertResult, $1, number_of_line);}   
                | STRING_LITERAL{assign_string(insertResult, $1, number_of_line);}                

                | EXPRESSION LOGIC_AND EXPRESSION     
                | EXPRESSION LOGIC_OR EXPRESSION  

                | LOGIC_NOT EXPRESSION  
                | NOT EXPRESSION

                | EXPRESSION EQUALITY EXPRESSION       
                | EXPRESSION NEG_EQUALITY EXPRESSION  

                | EXPRESSION LT EXPRESSION              
                | EXPRESSION LT EQ EXPRESSION           
                | EXPRESSION GT EXPRESSION                
                | EXPRESSION GT EQ EXPRESSION  

                | EXPRESSION INC               
                | EXPRESSION DEC     

                | INC EXPRESSION                
                | DEC EXPRESSION 

                | EXPRESSION MODULO EXPRESSION         
                | EXPRESSION PLUS EXPRESSION           
                | SUB EXPRESSION             
                | EXPRESSION SUB EXPRESSION             
                | EXPRESSION MUL EXPRESSION             
                | EXPRESSION DIV EXPRESSION              
                | EXPRESSION POW EXPRESSION
                            
                | EXPRESSION SHR EXPRESSION  
                | EXPRESSION SHL EXPRESSION  

                | FUNC_CALL                                
                | '(' EXPRESSION ')'
                ;               

//________________________________________________ DECLARATION STATEMENT ________________________________________________
DECLARATION_STATEMENT:                                                            
                TYPE IDENTIFIER {insertResult = insert($1, $2, "var", number_of_line, false);strcpy(IdentifierHolder, $2);}  DECLARATION_TAIL { printf("Parsed Declaration\n");}
                | TYPE CONSTANT {insertResult = insert($1, $2, "const", number_of_line, false);strcpy(IdentifierHolder, $2);}DECLARATION_TAIL { printf("Parsed Const Declaration\n"); }
                ;
DECLARATION_TAIL:
                EQ EXPRESSION SEMICOLON                                
                | SEMICOLON 
                ;

RETURN_STATEMENT:
                RETURN                  
                | RETURN EXPRESSION   
                ;

//________________________________________________ SWITCH STATEMENT ________________________________________________
SWITCH_STATEMENT:
                SWITCH IDENTIFIER ':' '{' CASES  '}' 
                ;
DEFAULTCASE:
                DEFAULT ':' BLOCK
                ;
CASES:
                CASE EXPRESSION ':' BLOCK CASES
                | DEFAULTCASE
                | 
                ;

//________________________________________________ FUNCTION DECLARATION STATEMENT ________________________________________________
FUNC_DECLARATION_STATEMENT:
                TYPE IDENTIFIER '(' ARGS ')'      BLOCK                                   
                | VOID IDENTIFIER '(' ARGS ')'    BLOCK 
                | TYPE IDENTIFIER '(' ')'         BLOCK                                   
                | VOID IDENTIFIER '(' ')'         BLOCK 
                ;
ARGS:
                ARG_DECL ',' ARGS
                | ARG_DECL
                ;
ARG_DECL:
                TYPE IDENTIFIER {insertResult = insert($1, $2,"var", number_of_line, true);strcpy(IdentifierHolder, $2);}
                ;

//________________________________________________ ENUM DECLARATION STATEMENT ________________________________________________
ENUM_DECLARATION_STATEMENT:
                ENUM IDENTIFIER  '{' ENUM_HELPER '}' SEMICOLON {insertResult = insert("enum" , $2, "var" , number_of_line, false);strcpy(IdentifierHolder, $2);}        
                ;                
ENUM_HELPER     : ENUM_ARGS | ENUM_DEFINED_ARGS;
ENUM_ARGS:

                IDENTIFIER {insertResult = insert("int" , $1, "enum_arg" , number_of_line, false);strcpy(IdentifierHolder, $1);} ',' ENUM_ARGS  
                | IDENTIFIER {insertResult = insert("int" , $1, "enum_arg" , number_of_line, false);strcpy(IdentifierHolder, $1);} 

                ;
            
ENUM_DEFINED_ARGS:

                IDENTIFIER EQ DIGIT {insertResult = insert("int" , $1, "enum_arg" , number_of_line, false);strcpy(IdentifierHolder, $1);} ',' ENUM_DEFINED_ARGS 
                | IDENTIFIER EQ DIGIT {insertResult = insert("int" , $1, "enum_arg" , number_of_line, false);strcpy(IdentifierHolder, $1);}
                ;

ENUM_CALL_STATEMENT:
                IDENTIFIER  IDENTIFIER EQ IDENTIFIER SEMICOLON {insertResult = insert($1 , $2, "var_enum" , number_of_line, false);strcpy(IdentifierHolder, $2);}
                | IDENTIFIER IDENTIFIER SEMICOLON {insertResult = insert($1 , $2, "var_enum" , number_of_line, false);strcpy(IdentifierHolder, $2);}
                ;

//________________________________________________ IF STATEMENT ________________________________________________
IF_STATEMENT:
                IF EXPRESSION BLOCK                 
                | IF EXPRESSION BLOCK ELSE BLOCK    
                ;

//________________________________________________ WHILE STATEMENT ________________________________________________
WHILE_STATEMENT:
                WHILE EXPRESSION BLOCK 
                ;
//________________________________________________ DO WHILE STATEMENT ________________________________________________
DO_WHILE_STATEMENT:
                DO BLOCK WHILE '(' EXPRESSION ')' SEMICOLON
                ;
//________________________________________________ FOR STATEMENT ________________________________________________
FOR_STATEMENT:
                FOR '(' STATEMENT STATEMENT STATEMENT ')' BLOCK 
                ;

//________________________________________________ ASSIGNMENT STATEMENT ________________________________________________
ASSIGNMENT_STATEMENT:
                IDENTIFIER EQ {int i = lookup($1, 1, number_of_line);} EXPRESSION SEMICOLON   
                | CONSTANT EQ {printf("Error at line: %d CONSTANTS must not be reassigned\n", number_of_line);insertResult = -1;} EXPRESSION SEMICOLON   
                ;

//________________________________________________ FUNCTION CALL ________________________________________________
FUNC_CALL:
                IDENTIFIER '(' ARGUMENTS  ')' { printf("Parsed Function Call\n");}
                ;       
ARGUMENTS:      
                EXPRESSION ',' ARGUMENTS 
                | EXPRESSION    
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
    yyin = fopen(argv[1], "r");
    yyparse();
    display();
    display_to_file("symbol_table.txt");
    display_unused_variables();

    return 0;
}