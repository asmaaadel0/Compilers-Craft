%{
    #include "parser.tab.h"
    #include <stdio.h>
    #include <string.h>
    int line_number = 1;
    int numchar;
    int numwords;
%}

%option yylineno

%%
"//".*            { /* Ignore comments */ }
"int"             { numwords++; numchar+=yyleng; return INT; }
"float"           { numwords++; numchar+=yyleng; return FLOAT; }
"double"          { numwords++; numchar+=yyleng; return DOUBLE; }
"bool"            { numwords++; numchar+=yyleng; return BOOL; }
"string"          { numwords++; numchar+=yyleng; return STRING; }
"enum"            { numwords++; numchar+=yyleng; return ENUM; }
"const"           { numwords++; numchar+=yyleng; return CONST; }

"print"           { numwords++; numchar+=yyleng; return PRINT;} 
"void"            { numwords++; numchar+=yyleng; return VOID; }
"return"          { numwords++; numchar+=yyleng; return RETURN; }

"for"             { numwords++; numchar+=yyleng; return FOR; }
"while"           { numwords++; numchar+=yyleng; return WHILE; }
"do"              { numwords++; numchar+=yyleng; return DO; }

"if"              { numwords++; numchar+=yyleng; return IF; }
"else"            { numwords++; numchar+=yyleng; return ELSE; }

"switch"          { numwords++; numchar+=yyleng; return SWITCH; }
"case"            { numwords++; numchar+=yyleng; return CASE; }
"default"         { numwords++; numchar+=yyleng; return DEFAULT; }
"break"           { numwords++; numchar+=yyleng; return BREAK; }

"true"            { numwords++; numchar+=yyleng; printf("bool: %s - line %d\n", yytext, line_number); yylval.bool_val = true; return BOOL_LITERAL; }
"false"           { numwords++; numchar+=yyleng; printf("bool: %s - line %d\n", yytext, line_number); yylval.bool_val = false; return BOOL_LITERAL; }

"=="              { numwords++; numchar+=yyleng; return EQUALITY; }
"--"              { numwords++; numchar+=yyleng; return DEC; }
"++"              { numwords++; numchar+=yyleng; return INC; }
"!="              { numwords++; numchar+=yyleng; return NEG_EQUALITY; }

">"               { numwords++; numchar+=yyleng; return GT; }
">="              { numwords++; numchar+=yyleng; return GTE; }
"<"               { numwords++; numchar+=yyleng; return LT; }
"<="              { numwords++; numchar+=yyleng; return LTE; }
"="               { numwords++; numchar+=yyleng; return EQ; }
";"               { numwords++; numchar+=yyleng; return SEMICOLON; }
"%"               { numwords++; numchar+=yyleng; yylval.str = strdup(yytext); return MODULO; }
"+"               { numwords++; numchar+=yyleng; yylval.str = strdup(yytext); return PLUS; }
"-"               { numwords++; numchar+=yyleng; return MINUS; }
"*"               { numwords++; numchar+=yyleng; return MUL; }
"/"               { numwords++; numchar+=yyleng; return DIV; }
"^"               { numwords++; numchar+=yyleng; return POW; }

"!"               { numwords++; numchar+=yyleng; return NOT; }
"&&"              { numwords++; numchar+=yyleng; return AND; }
"||"              { numwords++; numchar+=yyleng; return OR; }

[(){},:]          { numwords++; numchar+=yyleng; yylval.str = strdup(yytext); return *yytext; }

[a-zA-Z_][a-zA-Z0-9_]* { printf("var: %s - line %d\n", yytext, line_number); yylval.str = strdup(yytext); yylval.str = strdup(yytext); return IDENTIFIER; }
\"[^\"]*\"             { printf("string: %s - line %d\n", yytext, line_number); yylval.str = strdup(yytext); yylval.str = strdup(yytext); return STRING_LITERAL; }

[0-9]+                 { printf("int: %s - line %d\n", yytext, line_number); yylval.num = atoi(yytext); yylval.num = atoi(yytext); return DIGIT; }
[0-9]+\.[0-9]*         { printf("foat: %s - line %d\n", yytext, line_number); yylval.float_val= atof(yytext); yylval.float_val= atof(yytext); return FLOAT_DIGIT;}

[ \t]+                 { /* Ignore spaces */ }                    
\n                     {numchar++;    line_number++;}
%%
int yywrap() {
    return 1;
}