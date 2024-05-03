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
%token EQUALITY NEG_EQUALITY DEC INC 
%token GT LT EQ
%token SEMICOLON MODULO PLUS SUB MUL DIV POW BITWISE_OR BITWISE_AND SHL SHR

%token CONSTANT IDENTIFIER STRING_LITERAL CHAR_LITERAL
%token DIGIT FLOAT_DIGIT

%left LOGIC_AND LOGIC_OR
%right LOGIC_NOT

%left EQUALITY NEG_EQUALITY
%left PLUS SUB INC DEC MODULO

%right POW

%left MUL DIV 
%left BITWISE_OR BITWISE_AND SHL SHR
%right EQ GT LT


%type <str> INT FLOAT BOOL STRING CHAR VOID CONSTANT IDENTIFIER TYPE STRING_LITERAL PLUS CHAR_LITERAL
%type <float_val> FLOAT_DIGIT
%type <num> DIGIT
%type <bool_val> BOOL_LITERAL

%type <nPtr> STATEMENT EXPRESSION FUNC_CALL RETURN_STATEMENT DECLARATION_STATEMENT BREAK CONTINUE LOGIC_NOT RETURN INC DEC SUB '(' ')'
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
                | CHAR      { $$ = "char";}
                ;

//________________________________________________ EXPRESSION ________________________________________________
EXPRESSION:
                IDENTIFIER      {int i = lookup($1, 0, number_of_line);char *type = symbolTable[i].datatype;$$ = getType(type);check_type(i, number_of_line);}                
                | CONSTANT      {int i = lookup($1, 0, number_of_line);char *type = symbolTable[i].datatype;$$ = getType(type);check_type(i, number_of_line);}
                | DIGIT         {$$ = con("int");assign_int(insertResult, $1, number_of_line);}       
                | FLOAT_DIGIT   {$$ = con("float");assign_float(insertResult, $1, number_of_line);}                 
                | BOOL_LITERAL  {$$ = con("bool");assign_bool(insertResult, $1, number_of_line);}   
                | STRING_LITERAL{$$ = con("string");assign_string(insertResult, $1, number_of_line);}                
                | CHAR_LITERAL  {$$ = con("char");assign_char(insertResult, $1, number_of_line);}                

                | EXPRESSION LOGIC_AND EXPRESSION{$$ = logical($1, $3, '&', number_of_line);}    
                | EXPRESSION LOGIC_OR EXPRESSION {$$ = logical($1, $3, '|', number_of_line);} 

                | LOGIC_NOT EXPRESSION           {$$ = not_operator($2, number_of_line);}

                | EXPRESSION EQUALITY EXPRESSION    {comparison($1, $3, "==", number_of_line);}  
                | EXPRESSION NEG_EQUALITY EXPRESSION{comparison($1, $3, "!=", number_of_line);} 

                | EXPRESSION LT EXPRESSION    {$$ = comparison($1, $3, "<", number_of_line);}             
                | EXPRESSION LT EQ EXPRESSION {$$ = comparison($1, $4, "<=", number_of_line);}         
                | EXPRESSION GT EXPRESSION    {$$ = comparison($1, $3, ">", number_of_line);}            
                | EXPRESSION GT EQ EXPRESSION {$$ = comparison($1, $4, ">=", number_of_line);}   

                | INC EXPRESSION  {$$ = unary_operator($2, "++", number_of_line);}                 
                | DEC EXPRESSION  {$$ = unary_operator($2, "--", number_of_line);}  
                | EXPRESSION INC  {$$ = unary_operator($1, "++", number_of_line);}                 
                | EXPRESSION DEC  {$$ = unary_operator($1, "--", number_of_line);}  
                | SUB EXPRESSION  {$$ = unary_operator($2, "-",  number_of_line);}          
    
                | EXPRESSION MODULO EXPRESSION{$$ = arithmatic($1, $3, '%', number_of_line);}         
                | EXPRESSION PLUS EXPRESSION  {$$ = arithmatic($1, $3, '+', number_of_line);}
                | EXPRESSION SUB EXPRESSION   {$$ = arithmatic($1, $3, '+', number_of_line);}           
                | EXPRESSION MUL EXPRESSION   {$$ = arithmatic($1, $3, '*', number_of_line);}          
                | EXPRESSION DIV EXPRESSION   {$$ = arithmatic($1, $3, '/', number_of_line);}           
                | EXPRESSION POW EXPRESSION   {$$ = arithmatic($1, $3, '^', number_of_line);}
                
                | EXPRESSION BITWISE_OR EXPRESSION  {$$ = bitwise($1, $3, '|', number_of_line);}
                | EXPRESSION BITWISE_AND EXPRESSION {$$ = bitwise($1, $3, '&', number_of_line);}
                | EXPRESSION SHL EXPRESSION         {$$ = bitwise($1, $3, '<', number_of_line);}
                | EXPRESSION SHR EXPRESSION         {$$ = bitwise($1, $3, '>', number_of_line);}
                        
                | FUNC_CALL                                
                | '(' EXPRESSION ')'
                ;               

//________________________________________________ DECLARATION STATEMENT ________________________________________________
DECLARATION_STATEMENT:                                                            
                TYPE IDENTIFIER {insertResult = insert($1, $2, "var", number_of_line, false);}  DECLARATION_TAIL { insertResult = -1;printf("Parsed Declaration\n");}
                | TYPE CONSTANT {insertResult = insert($1, $2, "const", number_of_line, false);}DECLARATION_TAIL { insertResult = -1;printf("Parsed Const Declaration\n"); }
                ;
DECLARATION_TAIL:
                EQ EXPRESSION SEMICOLON                                
                | SEMICOLON 
                ;

RETURN_STATEMENT:
                RETURN                  
                | RETURN {insertResult = funcIndex;} EXPRESSION {returnExist = 1;}  
                ;

//________________________________________________ SWITCH STATEMENT ________________________________________________
SWITCH_STATEMENT:
                SWITCH '(' IDENTIFIER  {lookup($3, 0, number_of_line);} ')' '{' CASES  '}' 
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
                TYPE IDENTIFIER '(' ARGS ')' {funcIndex = insert($1, $2,"func", number_of_line, 0);} BLOCK                                   
                | VOID IDENTIFIER '(' ARGS ')'{funcIndex = insert("void", $2,"func", number_of_line, 0);}BLOCK 
                | TYPE IDENTIFIER '(' ')' {funcIndex = insert($1, $2,"func", number_of_line, 0);} BLOCK                                   
                | VOID IDENTIFIER '(' ')' {funcIndex = insert("void", $2,"func", number_of_line, 0);}BLOCK 
                ;
ARGS:
                ARG_DECL ',' ARGS
                | ARG_DECL
                ;
ARG_DECL:
                TYPE IDENTIFIER {insertResult = insert($1, $2,"var", number_of_line, true);}
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
                FOR '(' {inLoop = 1;} STATEMENT STATEMENT STATEMENT ')' {inLoop = 0;} BLOCK 
                ;

//________________________________________________ ASSIGNMENT STATEMENT ________________________________________________
ASSIGNMENT_STATEMENT:
                IDENTIFIER EQ {insertResult = lookup($1, 1, number_of_line);} EXPRESSION SEMICOLON   
                | CONSTANT EQ {printf("Error at line: %d CONSTANTS must not be reassigned\n", number_of_line);exit(1);insertResult = -1;} EXPRESSION SEMICOLON   
                ;

//________________________________________________ FUNCTION CALL ________________________________________________
FUNC_CALL:
                IDENTIFIER {calledFuncIndex = lookup($1, 0, number_of_line);check_type(calledFuncIndex, number_of_line);} '(' {isParameter=1;} ARGUMENTS {isParameter=0;arg_count_check(calledFuncIndex, number_of_line);} ')' { printf("Parsed Function Call\n");}
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
    yyin = fopen(argv[1], "r");
    yyparse();
    // display();
    // display_unused_variables();
    display_to_file("symbol_table.txt");

    return 0;
}