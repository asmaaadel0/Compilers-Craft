%{
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>
    #include <stdbool.h>
    #include "parser.tab.h"
    #include <errno.h>
    
    void yyerror(char* );
    int yylex();
    void yyerror();
    extern int yylineno;
    extern FILE *yyin;
    extern FILE *yyout;
    extern int number_of_line;
    extern int yy_flex_debug;




//____________________________________________________________ CODE GEN ____________________________________________________________________
    #include <fcntl.h>             //for creating file
    #include <errno.h>             //for checking for file
    int codeGen = 1;
    char* VirtualStack [1000];
    int VirtualSP = -1;
    int tempNumber = 0;
    int labelNumber = 0;
    int endlabelNumber=0;
    char temp_label[50] = "L";
    char temp_endlabel[50] = "END";
    char temp_var[50] = "t";
    int SMLabel = 0;
    int SMLabel_Else = 0;
    int SMLabel_End = 0;
    int ForHeaderLabel = 0;
    int ForHelperLabel = 0;
    char IdentifierHolder[10];
    char* argumentList[20];
    int argPointer = 0;
    int enumCNT = 1;
    void prepend(char* s, const char* t)    {size_t len = strlen(t);memmove(s + len, s, strlen(s) + 1);memcpy(s, t, len);}
    char switcher[50];
    void pErr(int num);
    int AStack = -1;
//==================================================================================================================================================

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
%token SWITCH BREAK
%token CASE DEFAULT

%token IF ELSE
%token FOR WHILE DO 

%token BOOL_LITERAL LOGIC_AND LOGIC_OR LOGIC_NOT
%token EQUALITY NEG_EQUALITY DEC INC 
%token GT LT EQ
%token SEMICOLON MODULO PLUS SUB MUL DIV POW

%token CONSTANT IDENTIFIER STRING_LITERAL
%token DIGIT FLOAT_DIGIT

%left LOGIC_AND LOGIC_OR
%right LOGIC_NOT

%left EQUALITY NEG_EQUALITY
%left PLUS SUB INC DEC MODULO

%right POW

%left MUL DIV 
%right EQ GT LT



%type <str> INT FLOAT BOOL STRING VOID CONSTANT IDENTIFIER TYPE STRING_LITERAL ENUM PLUS
%type <float_val> FLOAT_DIGIT
%type <num> DIGIT
%type <bool_val> BOOL_LITERAL

%%
PROGRAM:                                                    
                PROGRAM STATEMENT                           {printf("Parsed Line %d Succesfully\n\n", number_of_line);}        
                |
                ;

STATEMENT:
                DECLARATION_STATEMENT
                | FUNC_DECLARATION_STATEMENT                {printf("Parsed Function Declaration\n");}
                | ASSIGNMENT_STATEMENT
                | RETURN_STATEMENT SEMICOLON_MISS
                | EXPRESSION SEMICOLON
                | IF_STATEMENT                              {printf("Parsed if statement\n");}
                | WHILE_STATEMENT                           {printf("Parsed While LOOP\n");}
                | FOR_STATEMENT                             {printf("Parsed For LOOP\n");}
                | DO_WHILE_STATEMENT                        {printf("Parsed Do While LOOP\n");}
                | SWITCH_STATEMENT                          {printf("Parsed Switch Statement\n");}
                | ENUM_DECLARATION_STATEMENT                {printf("Parsed Enum Declaration\n");}
                | ENUM_CALL_STATEMENT                       {printf("Parsed Enum Usage\n");}
                | BLOCK
                | BREAK SEMICOLON_MISS
                | ERROR_STATEMENT
                ;
ERROR_STATEMENT:
                error SEMICOLON                           {printf("\nError STATEMENT at line %d\n", yylineno);pErr(yylineno);}
                | error '}'                               {printf("\nError STATEMENT at line %d\n", yylineno);pErr(yylineno);}
                | error ')'                               {printf("\nError STATEMENT at line %d\n", yylineno);pErr(yylineno);}
                ;
SEMICOLON_MISS:
                SEMICOLON;

TYPE:
                INT         { $$ = "int";   }
                | FLOAT     { $$ = "float"; }
                | BOOL      { $$ = "bool";  }
                | STRING    { $$ = "string";}
                ;

DECLARATION_STATEMENT:                                                            
                TYPE    IDENTIFIER    DECLARATION_TAIL            { printf("Parsed Declaration\n"); }
                | TYPE  CONSTANT      DECLARATION_TAIL            { printf("Parsed Const Declaration\n"); }
                | ERROR_DECLARATION_STATEMENT
                ;

ERROR_DECLARATION_STATEMENT:
                error CONSTANT      SEMICOLON_MISS              {printf("\nError Missing constant type at line %d\n", yylineno);pErr(yylineno);}
                | error IDENTIFIER    SEMICOLON_MISS            {printf("\nError Missing variable type at line %d\n", yylineno);pErr(yylineno);}
                | TYPE  IDENTIFIER    IDENTIFIER SEMICOLON_MISS {printf("\nError unexpected identifier %s at line %d\n",$3, yylineno);pErr(yylineno);}
                ;
DECLARATION_TAIL:
                EQ EXPRESSION SEMICOLON                                
                | SEMICOLON 
                | ERROR_DECLARATION_TAIL
                ;
ERROR_DECLARATION_TAIL:
                error EXPRESSION SEMICOLON        {printf("\nError Missing '=' at line %d\n", yylineno);pErr(yylineno);}
                | EQ error SEMICOLON              {printf("\nError Missing second operand at line %d\n", yylineno);pErr(yylineno);}
                | EQ EXPRESSION                   {printf("\nError Missing semicolon ';' at line %d\n", yylineno); pErr(yylineno);} '}'
                | EQ EXPRESSION                   {printf("\nError Missing semicolon ';' at line %d\n", yylineno); pErr(yylineno);} ')'
                | EQ EXPRESSION                   {printf("\nError Missing semicolon ';' at line %d\n", yylineno); pErr(yylineno);} RES_WORD
                ;

RETURN_STATEMENT:
                RETURN                  
                | RETURN EXPRESSION   
                ;

helperSWITCH:   SWITCH IDENTIFIER ':' '{' {strcpy(switcher, $2);}
                ;
SWITCH_STATEMENT:
                helperSWITCH CASES  '}' 
                | ERROR_SWITCH_STATEMENT
                ;
DEFAULTCASE:
                DEFAULT ':' BLOCK
                | ERROR_DEFAULTCASE
                ;
ERROR_DEFAULTCASE:
                DEFAULT BLOCK {printf("\nError missing colon ':' at DEFAULT CASE of switch, error at line %d\n", yylineno); pErr(yylineno);}
                ;
CASES:
                CASE EXPRESSION ':' BLOCK CASES
                | DEFAULTCASE
                | ERROR_CASES
                ;
ERROR_CASES:
                DEFAULTCASE                 {printf("\nError DEFAULT CASE must be written at the end of the switch statement, error at line %d\n", yylineno); pErr(yylineno);} CASE EXPRESSION BLOCK             
                | DEFAULTCASE DEFAULTCASE   {printf("\nError only 1 DEFAULT CASE is allowed in the switch statement error, at line %d\n", yylineno); pErr(yylineno);}
                ;
ERROR_SWITCH_STATEMENT:
                SWITCH error                    {printf("\nError Missing identifier for switch statement at line %d\n", yylineno);pErr(yylineno);}                            ':' '{' CASES '}'      
                | SWITCH IDENTIFIER error       {printf("\nError unexpected identifier '%s' at switch statement at line %d\n",yylval, yylineno); pErr(yylineno);}             ':'  '{' CASES '}'  
                | SWITCH IDENTIFIER error       {printf("\nError Missing colon ':' for switch statement (switchs must have a colon) at line %d\n", yylineno);pErr(yylineno);} '{' CASES '}'
                | SWITCH IDENTIFIER ':' error   {printf("\nError Missing '{' for switch statement at line %d\n", yylineno);pErr(yylineno);}                                   CASES '}'   
                | helperSWITCH CASES error      {printf("\nError unclosed '}' for switch statement at line %d\n", yylineno);pErr(yylineno);}    
                ;



FUNC_DECLARATION_STATEMENT:
                TYPE IDENTIFIER '('  ARGS ')'      BLOCK                                   
                | VOID IDENTIFIER '('  ARGS ')'    BLOCK 
                | TYPE IDENTIFIER '(' ')'          BLOCK                                   
                | VOID IDENTIFIER '(' ')'          BLOCK 
                | ERROR_FUNC_DECLARATION_STATEMENT BLOCK
                ;

ERROR_FUNC_DECLARATION_STATEMENT:
                TYPE IDENTIFIER   {printf("\nError unhandled function parenthesis at line %d for function %s\n", yylineno, $2);pErr(yylineno);}                    ARGS ')'       
                ;

ARGS:
                ARG_DECL ',' ARGS
                | ARG_DECL
                | ERROR_ARGS
                ;
ERROR_ARGS:
                ',' ARGS   {printf("\nError unexpected ',' in argument list of function declaration at line %d\n", yylineno);pErr(yylineno);}
                ;
ARG_DECL:
                TYPE IDENTIFIER                             
                ;



ENUM_DECLARATION_STATEMENT:
                ENUM IDENTIFIER  '{' ENUM_HELPER '}'          
                | ERROR_ENUM_DECLARATION_STATEMENT
                ;
ERROR_ENUM_DECLARATION_STATEMENT:
                ENUM error '{' ENUM_HELPER '}'             {printf("\nError missing identifier for ENUM statement at line %d\n", yylineno);pErr(yylineno);}
                | ENUM IDENTIFIER ENUM_HELPER '}'          {printf("\nError missing opening curly braces for ENUM statement at line %d\n", yylineno);pErr(yylineno);}
                | ENUM IDENTIFIER '{' error '}'            {printf("\nError missing arguments in the ENUM statement at line %d\n", yylineno);pErr(yylineno);}
                | ENUM IDENTIFIER error '{' ENUM_HELPER '}'{printf("\nError UnExpected IDENTIFIER in the ENUM statement at line %d\n", yylineno);pErr(yylineno);}
                ;                
ENUM_HELPER     : ENUM_ARGS | ENUM_DEFINED_ARGS;
ENUM_ARGS:

                IDENTIFIER   ',' ENUM_ARGS  
                | IDENTIFIER 

                ;
            
ENUM_DEFINED_ARGS:

                IDENTIFIER EQ DIGIT    ',' ENUM_DEFINED_ARGS 
                | IDENTIFIER EQ DIGIT  
                | ERROR_ENUM_DEFINED_ARGS
                ;
ERROR_ENUM_DEFINED_ARGS:
                IDENTIFIER EQ error ','                   {printf("\nError WRONG arguments in the ENUM statement at line %d\n", yylineno);pErr(yylineno);}
                | IDENTIFIER EQ FLOAT_DIGIT               {printf("\nError WRONG arguments in the ENUM statement at line %d\n", yylineno);pErr(yylineno);}
                | IDENTIFIER EQ STRING_LITERAL            {printf("\nError WRONG arguments in the ENUM statement at line %d\n", yylineno);pErr(yylineno);}
                | IDENTIFIER EQ BOOL_LITERAL              {printf("\nError WRONG arguments in the ENUM statement at line %d\n", yylineno);pErr(yylineno);}
                ;

ENUM_CALL_STATEMENT:
                IDENTIFIER  IDENTIFIER EQ IDENTIFIER SEMICOLON 
                | IDENTIFIER IDENTIFIER SEMICOLON
                ;

IF_STATEMENT_HELPER:
                IF EXPRESSION
                ;
IF_STATEMENT_HELPER1:
                ':' BLOCK                                 
                ;

IF_STATEMENT:
                IF_STATEMENT_HELPER IF_STATEMENT_HELPER1                 
                | IF_STATEMENT_HELPER IF_STATEMENT_HELPER1 ELSE BLOCK    
                | ERROR_IF_STATEMENT
                ;
ERROR_IF_STATEMENT:
                IF_STATEMENT_HELPER IF_STATEMENT_HELPER1 ELSE error '}' {printf("\nError Missing '{' for the ELSE statement at line %d\n", yylineno);pErr(yylineno);}
                | IF_STATEMENT_HELPER                               {printf("\nError Missing ':' for the IF statement at line %d\n", yylineno);pErr(yylineno);}        BLOCK
                | IF       ':'                                {printf("\nError Missing expression for the IF statement at line %d\n", yylineno);pErr(yylineno);} BLOCK
                | IF_STATEMENT_HELPER ':' error '}'                 {printf("\nError Missing '{' for the IF statement at line %d\n", yylineno);pErr(yylineno);}
                ;

WHILE_STATEMENT:
                WHILE EXPRESSION WHILEMISS_COLON BLOCK 

                ;
WHILEMISS_COLON:
                ':'
                | ERROR_WHILEMISS_COLON
                ;
ERROR_WHILEMISS_COLON:
                {printf("\nError Missing ':' for the WHILE loop at line %d\n", yylineno);pErr(yylineno);}
                ;
DO_WHILE_STATEMENT:
                DO BLOCK WHILE '(' EXPRESSION ')'
                | ERROR_DO_WHILE
                ;
ERROR_DO_WHILE:
                DO   error                          {printf("\nError Missing DO-Block for the DO-WHILE loop at line %d\n", yylineno);pErr(yylineno);}                              WHILE '(' EXPRESSION ')'
                | DO BLOCK WHILE error              {printf("\nError Missing opening parenthesis '(' for the DO-WHILE loop at line %d\n", yylineno);pErr(yylineno);}               EXPRESSION ')'
                | DO BLOCK error                    {printf("\nError Missing WHILE DO-WHILE loop at line %d\n", yylineno);pErr(yylineno);}                                         '(' EXPRESSION ')'
                | DO error                          {printf("\nError Missing opening curly braces '{' for the DO-Block for DO-WHILE loop at line %d\n", yylineno);pErr(yylineno);} '}' WHILE '(' EXPRESSION ')'
                | DO BLOCK WHILE '{' EXPRESSION '}' {printf("\nError DO-WHILE loop accepts braces () not curly braces {} at line %d\n", yylineno);pErr(yylineno);}
                ;


FOR_STATEMENT:
                FOR '(' STATEMENT STATEMENT STATEMENT ')' BLOCK 
                | ERROR_FOR_LOOP
                ;
ERROR_FOR_LOOP:
                FOR error STATEMENT STATEMENT STATEMENT ')'    {printf("\nError Missing opening braces '(' in the FOR loop at line %d\n", yylineno);pErr(yylineno);}  BLOCK
                | FOR '(' ';' STATEMENT STATEMENT STATEMENT ')'{printf("\nError unexpected semicolon in the FOR loop at line %d\n", yylineno);pErr(yylineno);}        BLOCK

                ;


helperAssignmentRule:
                IDENTIFIER  EQ                                   
                | CONSTANT EQ                                 {printf("\nError CONSTANTS must not be reassigned %d\n", yylineno);pErr(yylineno);}
                ;

ASSIGNMENT_STATEMENT:
                helperAssignmentRule EXPRESSION SEMICOLON   {printf("Parsed Assignment\n");}
                | ERROR_ASSIGNMENT_STATEMENT
                ;
ERROR_ASSIGNMENT_STATEMENT:
                helperAssignmentRule SEMICOLON                { printf("\nError expected expression in assignment statement at line %d\n", yylineno);pErr(yylineno);}
                | IDENTIFIER  error  EXPRESSION SEMICOLON     {printf("\nError expected '=' in assignment statement at line %d\n", yylineno);pErr(yylineno);}
                ;

BLOCK:
                '{' PROGRAM '}'               {printf("Parsed Block\n");}
                ;



FUNC_CALL:
                IDENTIFIER '(' USED_ARGS  ')' { printf("Parsed Funciton Call\n");}
                | ERROR_FUNC_CALL
                ;
ERROR_FUNC_CALL:
                IDENTIFIER error ')'        {printf("\nError unhandled function parenthesis at line %d\n", yylineno);pErr(yylineno);}
                ;
                
USED_ARGS:      
                EXPRESSION ',' USED_ARGS 
                | EXPRESSION 
                | ERROR_USED_ARGS
                ;
ERROR_USED_ARGS:
                |error ',' USED_ARGS                       {printf("\nError Missing first argument in function's argument list or erronous ',' at line %d\n", yylineno);pErr(yylineno);}
                ;

EXPRESSION:
                
                IDENTIFIER                      
                | DIGIT                         
                | FLOAT_DIGIT                   
                | BOOL_LITERAL                  
                | STRING_LITERAL                
                | CONSTANT  

                | COMPARISON

                | EXPRESSION INC               
                | EXPRESSION DEC     

                | EXPRESSION MODULO EXPRESSION         
                | EXPRESSION PLUS EXPRESSION           
                | SUB EXPRESSION             
                | EXPRESSION SUB EXPRESSION             
                | EXPRESSION MUL EXPRESSION             
                | EXPRESSION DIV EXPRESSION              
                | EXPRESSION POW EXPRESSION
                            
                | FUNC_CALL                                
                | '(' EXPRESSION ')'
                | ERROR_EXPRESSION           {printf("\nError Expression error at line %d\n", yylineno);pErr(yylineno);}
                ;

ERROR_EXPRESSION:
                error PLUS EXPRESSION             
                | error MUL EXPRESSION          
                | error DIV EXPRESSION          
                | error POW EXPRESSION          
                ;

COMPARISON:
                EXPRESSION GT EXPRESSION                
                | EXPRESSION LT EXPRESSION              
                | EXPRESSION LT EQ EXPRESSION           
                | EXPRESSION GT EQ EXPRESSION  

                | EXPRESSION EQUALITY EXPRESSION       
                | EXPRESSION NEG_EQUALITY EXPRESSION  

                | EXPRESSION LOGIC_AND EXPRESSION     
                | EXPRESSION LOGIC_OR EXPRESSION        
                | LOGIC_NOT EXPRESSION   
                            
                | ERROR_COMPARISON
                ;

ERROR_COMPARISON:
                error GT EXPRESSION                                 {printf("\nError Missing left operand before '>' at line %d\n", yylineno);pErr(yylineno);}
                | EXPRESSION GT error   %prec GT                    {printf("\nError Missing right operand after '>' at line %d\n", yylineno);pErr(yylineno);}
                | error LT EXPRESSION                               {printf("\nError Missing left operand before '<' at line %d\n", yylineno);pErr(yylineno);}
                | EXPRESSION LT error   %prec LT                    {printf("\nError Missing right operand after '<' at line %d\n", yylineno);pErr(yylineno);}
                | error EQUALITY EXPRESSION                         {printf("\nError Missing left operand before '==' at line %d\n", yylineno);pErr(yylineno);}
                | EXPRESSION EQUALITY error   %prec EQUALITY        {printf("\nError Missing right operand after '==' at line %d\n", yylineno);pErr(yylineno);}
                | error NEG_EQUALITY EXPRESSION                     {printf("\nError Missing left operand before '!=' at line %d\n", yylineno);pErr(yylineno);}
                | EXPRESSION NEG_EQUALITY error   %prec NEG_EQUALITY{printf("\nError Missing right operand after '!=' at line %d\n", yylineno);pErr(yylineno);}
                | LOGIC_NOT error   %prec EQ                        {printf("\nError Missing right operand after the negating operator '!' at line %d\n", yylineno);pErr(yylineno);}
                | error LOGIC_AND EXPRESSION                        {printf("\nError Missing left operand before 'and' operator at line %d\n", yylineno);pErr(yylineno);}
                | EXPRESSION LOGIC_AND error   %prec LOGIC_AND      {printf("\nError Missing right operand after 'and' operator at line %d\n", yylineno);pErr(yylineno);}
                | error LOGIC_OR EXPRESSION                         {printf("\nError Missing left operand before 'or' operator at line %d\n", yylineno);pErr(yylineno);}
                | EXPRESSION LOGIC_OR error   %prec LOGIC_OR        {printf("\nError Missing right operand after 'or' operator at line %d\n", yylineno);pErr(yylineno);}
                | error LT EQ EXPRESSION                            {printf("\nError Missing left operand before '<=' operator at line %d\n", yylineno);pErr(yylineno);}
                | EXPRESSION LT EQ error   %prec LT                 {printf("\nError Missing right operand after '<=' operator at line %d\n", yylineno);pErr(yylineno);}
                | error GT EQ EXPRESSION                            {printf("\nError Missing left operand before '>=' operator at line %d\n", yylineno);pErr(yylineno);}
                | EXPRESSION GT EQ error   %prec GT                 {printf("\nError Missing right operand after '>=' operator at line %d\n", yylineno);pErr(yylineno);}
                ;
                



RES_WORD:
                INT | FLOAT| BOOL| STRING| VOID| IF| FOR| WHILE|  CONSTANT | ELSE | DO| ENUM| SWITCH| CASE;


%%

void yyerror(char *s) { 
 fprintf(stderr, "line %d: %s\n", yylineno, s); 
} 
int yywrap()
{
    return 1;
}


void pErr(int lineNUMM)
{
    FILE *assfile = fopen("ParsingErrors.txt", "a");
    char buf [50];
    itoa(lineNUMM, buf,10);
    fprintf(assfile, "%s ", buf);
    fclose (assfile);
};

int main(int argc, char *argv[])
{ 
    yy_flex_debug = 1;
    yyin = fopen(argv[1], "r");
    yyparse();

    return 0;
}