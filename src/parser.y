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


//leave those as they are please, their absence wont hurt your memory as long as you restart your laptop once every while.
//they are just handlers for the memory leak problem of bison, and I still don't know how to make them work
//%destructor { } <str>
//%destructor { free ($$); } <*>
//%destructor { free ($$); printf ("%d", @$.first_line); } INT FLOAT BOOL STRING VOID IF FOR WHILE BOOL_LITERAL DIV GT LT EQ SEMICOLON PLUS SUB MUL STRING_LITERAL CONSTANT POW ELSE DO ENUM EQUALITY NEG_EQUALITY SWITCH CASE LOGIC_AND LOGIC_OR LOGIC_NOT DIGIT IDENTIFIER FLOAT_DIGIT
//%destructor { printf ("Discarding tagless symbol.\n"); } <>


%%
PROGRAM:                                                    
                PROGRAM STATEMENT                           {printf("Parsing Line %d Succesfully\n\n", number_of_line);}        
                |
                ;

STATEMENT:
                DECLARATION_STT
                | FUNC_DECLARATION_STT                      {printf("Parsed Function Declaration\n");}
                | assignmentSTT
                | RETURN_STT SEMICOLON_MISS
                | EXPRESSION SEMICOLON
                | IF_STT                                    {printf("Parsed if statement\n");}
                | WHILE_STT                                 {printf("Parsed While LOOP\n");}
                | FOR_STT                                   {printf("Parsed For LOOP\n");}
                | DO_WHILE_STT                              {printf("Parsed Do While LOOP\n");}
                | SWITCH_STT                                {printf("Parsed Switch Statement\n");}
                | ENUM_DECLARATION_STT                      {printf("Parsed Enum Declaration\n");}
                | ENUM_CALL_STT                             {printf("Parsed Enum Usage\n");}
                | BLOCK
                | BREAK SEMICOLON_MISS                     
                | error SEMICOLON                           {printf("\nError STATEMENT at line %d\n", yylineno);pErr(yylineno);}
                | error '}'                                 {printf("\nError STATEMENT at line %d\n", yylineno);pErr(yylineno);}
                | error ')'                                 {printf("\nError STATEMENT at line %d\n", yylineno);pErr(yylineno);}
                ;

SEMICOLON_MISS:
                SEMICOLON;

TYPE:
                INT         { $$ = "int";   }
                | FLOAT     { $$ = "float"; }
                | BOOL      { $$ = "bool";  }
                | STRING    { $$ = "string";}
                ;

DECLARATION_STT:                                                            
                TYPE    IDENTIFIER    DECLARATION_TAIL            { printf("Parsed Declaration\n"); }
                | TYPE  CONSTANT      DECLARATION_TAIL            { printf("Parsed Const Declaration\n"); }
                | error IDENTIFIER    SEMICOLON_MISS              {printf("\nError Missing variable type at line %d\n", yylineno);pErr(yylineno);}
                | error CONSTANT      SEMICOLON_MISS              {printf("\nError Missing constant type at line %d\n", yylineno);pErr(yylineno);}
                | TYPE  IDENTIFIER    IDENTIFIER SEMICOLON_MISS   {printf("\nError unexpected identifier %s at line %d\n",$3, yylineno);pErr(yylineno);}
                ;


DECLARATION_TAIL:
                EQ EXPRESSION  SEMICOLON                                
                | error EXPRESSION   SEMICOLON                    {printf("\nError Missing '=' at line %d\n", yylineno);pErr(yylineno);}
                | EQ error SEMICOLON                              {printf("\nError unexpected '=' without second operand at line %d\n", yylineno);pErr(yylineno);}
                | SEMICOLON 
                | EQ EXPRESSION                                   {printf("\nError Missing semicolon ';' at line %d\n", yylineno); pErr(yylineno);} '}'
                | EQ EXPRESSION                                   {printf("\nError Missing semicolon ';' at line %d\n", yylineno); pErr(yylineno);} ')'
                | EQ EXPRESSION                                   {printf("\nError Missing semicolon ';' at line %d\n", yylineno); pErr(yylineno);} RES_WORD
                //|                                                                     {printf("\nError Missing semicolon ';' at line %d\n", yylineno);pErr(yylineno);} '}'
                //| error RES_WORD                                                           {printf("\nError Missing semicolon ';' at line %d\n", yylineno);pErr(yylineno);} 
                ;


RETURN_STT:
                RETURN                  
                | RETURN EXPRESSION   
                ;
helperSWITCH:   SWITCH IDENTIFIER ':' '{' {strcpy(switcher, $2);}
                ;
SWITCH_STT:
                helperSWITCH CASES  '}' 
                | ERRONOUS_SWITCH_STT
                ;
DEFAULTCASE:
                DEFAULT ':' BLOCK
                | DEFAULT BLOCK {printf("\nError missing colon ':' at DEFAULT CASE of switch, error at line %d\n", yylineno); pErr(yylineno);}
                ;
CASES:
                CASE EXPRESSION ':' BLOCK CASES
                | DEFAULTCASE {printf("\nError DEFAULT CASE must be written at the end of the switch statement, error at line %d\n", yylineno); pErr(yylineno);} CASE EXPRESSION BLOCK             
                | DEFAULTCASE DEFAULTCASE                       {printf("\nError only 1 DEFAULT CASE is allowed in the switch statement error, at line %d\n", yylineno); pErr(yylineno);}
                | DEFAULTCASE
                |
                ;

ERRONOUS_SWITCH_STT:
                SWITCH error                    {printf("\nError Missing identifier for switch statement at line %d\n", yylineno);pErr(yylineno);}                            ':' '{' CASES '}'      
                | SWITCH IDENTIFIER error       {printf("\nError unexpected identifier '%s' at switch statement at line %d\n",yylval, yylineno); pErr(yylineno);}             ':'  '{' CASES '}'  
                | SWITCH IDENTIFIER error       {printf("\nError Missing colon ':' for switch statement (switchs must have a colon) at line %d\n", yylineno);pErr(yylineno);} '{' CASES '}'
                | SWITCH IDENTIFIER ':' error   {printf("\nError Missing '{' for switch statement at line %d\n", yylineno);pErr(yylineno);}                                   CASES '}'   
                | helperSWITCH CASES error {printf("\nError unclosed '}' for switch statement at line %d\n", yylineno);pErr(yylineno);}    
                ;









FUNC_DECLARATION_STT:
                ERRONOUS_FUNC_DECLARATION_STT      BLOCK
                | TYPE IDENTIFIER '('  ARGS ')'    BLOCK                                   
                | VOID IDENTIFIER '('  ARGS ')'    BLOCK 
                | TYPE IDENTIFIER '(' ')'          BLOCK                                   
                | VOID IDENTIFIER '(' ')'          BLOCK 
                ;

// AYMOOON  UNCOMMENT THOSE ERROR HANDLERS AND IGNORE THE RED/RED CONFLICTS, they impose zero harm whatsoever.
ERRONOUS_FUNC_DECLARATION_STT:
                TYPE IDENTIFIER                     {printf("\nError unhandled function parenthesis at line %d for function %s\n", yylineno, $2);pErr(yylineno);}                    ARGS ')'       
                ;

ARGS:
                ARG_DECL ',' ARGS
                | ARG_DECL
                | ERRONOUS_ARGS
                ;
ERRONOUS_ARGS:
                ',' ARGS                   {printf("\nError unexpected ',' in argument list of function declaration at line %d\n", yylineno);pErr(yylineno);}
                ;
ARG_DECL:
                TYPE IDENTIFIER                             
                //| error IDENTIFIER              {printf("\nError erronous argument declaration in function declaration at line %d\n", yylineno);pErr(yylineno);}
                ;



ENUM_DECLARATION_STT:
                ENUM IDENTIFIER  '{' ENUM_HELPER '}'          
                | ERRONOUS_ENUM_DECLARATION_STT
                ;
ENUM_HELPER     : ENUM_ARGS | ENUM_DEFINED_ARGS;
ENUM_ARGS:

                IDENTIFIER   ',' ENUM_ARGS  
                | IDENTIFIER 

                ;
            
ENUM_DEFINED_ARGS:

                IDENTIFIER EQ DIGIT    ',' ENUM_DEFINED_ARGS 
                | IDENTIFIER EQ DIGIT  
                | IDENTIFIER EQ error ','                   {printf("\nError WRONG arguments in the ENUM statement at line %d\n", yylineno);pErr(yylineno);}
                | IDENTIFIER EQ FLOAT_DIGIT                 {printf("\nError WRONG arguments in the ENUM statement at line %d\n", yylineno);pErr(yylineno);}
                | IDENTIFIER EQ STRING_LITERAL              {printf("\nError WRONG arguments in the ENUM statement at line %d\n", yylineno);pErr(yylineno);}
                | IDENTIFIER EQ BOOL_LITERAL                {printf("\nError WRONG arguments in the ENUM statement at line %d\n", yylineno);pErr(yylineno);}
                ;

ERRONOUS_ENUM_DECLARATION_STT:
                ENUM error '{' ENUM_HELPER '}'              {printf("\nError missing identifier for ENUM statement at line %d\n", yylineno);pErr(yylineno);}
                | ENUM IDENTIFIER ENUM_HELPER '}'           {printf("\nError missing opening curly braces for ENUM statement at line %d\n", yylineno);pErr(yylineno);}
                //TODO unclosed parenthesis
                | ENUM IDENTIFIER '{' error '}'             {printf("\nError missing arguments in the ENUM statement at line %d\n", yylineno);pErr(yylineno);}
                | ENUM IDENTIFIER error '{' ENUM_HELPER '}' {printf("\nError UnExpected IDENTIFIER in the ENUM statement at line %d\n", yylineno);pErr(yylineno);}
                ;

ENUM_CALL_STT:
                IDENTIFIER  IDENTIFIER EQ IDENTIFIER SEMICOLON 
                | IDENTIFIER IDENTIFIER SEMICOLON
                ;

IF_STT_HELPER:
                IF EXPRESSION
                ;
IF_STT_HELPER1:
                ':' BLOCK                                 
                ;

IF_STT:
                IF_STT_HELPER IF_STT_HELPER1                 
                | IF_STT_HELPER IF_STT_HELPER1 ELSE BLOCK    
                | IF_STT_HELPER IF_STT_HELPER1 ELSE error '}' {printf("\nError Missing '{' for the ELSE statement at line %d\n", yylineno);pErr(yylineno);}
                | IF_STT_HELPER                               {printf("\nError Missing ':' for the IF statement at line %d\n", yylineno);pErr(yylineno);}        BLOCK
                | IF       ':'                                {printf("\nError Missing expression for the IF statement at line %d\n", yylineno);pErr(yylineno);} BLOCK
                | IF_STT_HELPER ':' error '}'                 {printf("\nError Missing '{' for the IF statement at line %d\n", yylineno);pErr(yylineno);}
                
                ;


WHILE_STT:
                WHILE EXPRESSION WHILEMISS_COLON BLOCK 

                ;
WHILEMISS_COLON:
                ':'
                | {printf("\nError Missing ':' for the WHILE loop at line %d\n", yylineno);pErr(yylineno);}
                ;


DO_WHILE_STT:
                DO BLOCK WHILE '(' EXPRESSION ')'
                | ERRONOUS_DO_WHILE
                ;
ERRONOUS_DO_WHILE:
                DO   error                          {printf("\nError Missing DO-Block for the DO-WHILE loop at line %d\n", yylineno);pErr(yylineno);}                              WHILE '(' EXPRESSION ')'
                | DO BLOCK WHILE error              {printf("\nError Missing opening parenthesis '(' for the DO-WHILE loop at line %d\n", yylineno);pErr(yylineno);}               EXPRESSION ')'
                | DO BLOCK error                    {printf("\nError Missing WHILE DO-WHILE loop at line %d\n", yylineno);pErr(yylineno);}                                         '(' EXPRESSION ')'
                | DO error                          {printf("\nError Missing opening curly braces '{' for the DO-Block for DO-WHILE loop at line %d\n", yylineno);pErr(yylineno);} '}' WHILE '(' EXPRESSION ')'
                | DO BLOCK WHILE '{' EXPRESSION '}' {printf("\nError DO-WHILE loop accepts braces () not curly braces {} at line %d\n", yylineno);pErr(yylineno);}
                ;


FOR_STT:
                FOR '(' STATEMENT STATEMENT STATEMENT ')' BLOCK 
                | ERRONOUS_FOR_LOOP
                ;
ERRONOUS_FOR_LOOP:
                FOR error STATEMENT STATEMENT STATEMENT ')'    {printf("\nError Missing opening braces '(' in the FOR loop at line %d\n", yylineno);pErr(yylineno);}  BLOCK
                | FOR '(' ';' STATEMENT STATEMENT STATEMENT ')'{printf("\nError unexpected semicolon in the FOR loop at line %d\n", yylineno);pErr(yylineno);}        BLOCK

                ;


helperAssignmentRule:
                IDENTIFIER  EQ                                   
                | CONSTANT EQ                                 {printf("\nError CONSTANTS must not be reassigned %d\n", yylineno);pErr(yylineno);}
                ;

assignmentSTT:
                helperAssignmentRule SEMICOLON                { printf("\nError expected expression in assignment statement at line %d\n", yylineno);pErr(yylineno);}
                | helperAssignmentRule EXPRESSION SEMICOLON   {printf("Parsed Assignment\n");}
                | IDENTIFIER  error  EXPRESSION SEMICOLON     {printf("\nError expected '=' in assignment statement at line %d\n", yylineno);pErr(yylineno);}
                ;


BLOCK:
                '{' PROGRAM '}'               {printf("Parsed Block\n");}
                ;



FUNC_CALL:
                IDENTIFIER '(' USED_ARGS  ')' { printf("Parsed Funciton Call\n");}
                | IDENTIFIER error ')'        {printf("\nError unhandled function parenthesis at line %d\n", yylineno);pErr(yylineno);}
                ;

                
USED_ARGS:      
                EXPRESSION ',' USED_ARGS 
                | error ',' USED_ARGS                       {printf("\nError Missing first argument in function's argument list or erronous ',' at line %d\n", yylineno);pErr(yylineno);}
                | EXPRESSION 
                |
                ;


EXPRESSION:
                
                IDENTIFIER                      
                | DIGIT                         
                | FLOAT_DIGIT                   
                | BOOL_LITERAL                  
                | STRING_LITERAL                
                | CONSTANT                     
                | SUB EXPRESSION             
                | EXPRESSION INC               
                | EXPRESSION DEC                
                | EXPRESSION PLUS              
                | EXPRESSION MODULO            
                | EXPRESSION SUB                
                
                | EXPRESSION MUL                
                | EXPRESSION DIV                

                | EXPRESSION POW              
                | COMPARISONSTT
                | FUNC_CALL                                
                | '(' EXPRESSION ')'
                | ERRONOUS_EXPRESSION           {printf("\nError Expression error at line %d\n", yylineno);pErr(yylineno);}
                ;

ERRONOUS_EXPRESSION:
                error PLUS EXPRESSION             
                | error MUL EXPRESSION          
                | error DIV EXPRESSION          
                | error POW EXPRESSION          
                ;




COMPARISONSTT:
                EXPRESSION GT EXPRESSION                
                | EXPRESSION LT EXPRESSION              
                | EXPRESSION LT EQ EXPRESSION           
                | EXPRESSION GT EQ EXPRESSION          
                | EXPRESSION EQUALITY EXPRESSION       
                | EXPRESSION NEG_EQUALITY EXPRESSION    
                | EXPRESSION LOGIC_AND EXPRESSION     
                | EXPRESSION LOGIC_OR EXPRESSION        
                | LOGIC_NOT EXPRESSION               
                | ERRONOUS_COMPARISONSTT
                ;

ERRONOUS_COMPARISONSTT:
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