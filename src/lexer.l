%{
    #include "parser.tab.h"
    int number_of_line = 1;
%}

%%
\/\/[\s\t]*.*[\s\t]*        {/* Ignore comments */ }

"int"                    {return INT;}
"float"                  {return FLOAT;}
"string"                 {return STRING;}
"char"                   {return CHAR;}
"bool"                   {return BOOL;}

"print"                  {return PRINT;}
"void"                   {return VOID;}
"return"                 {return RETURN;}

"switch"                 {return SWITCH;}
"break"                  {return BREAK;}
"continue"               {return CONTINUE;}

"case"                   {return CASE;}
"default"                {return DEFAULT;}

"if"                     {return IF;}
"else"                   {return ELSE;}

"for"                    {return FOR;}
"while"                  {return WHILE;}
"do"                     {return DO;}

"true"                   {yylval.bool_val = true; return BOOL_LITERAL;}
"false"                  {yylval.bool_val = false;return BOOL_LITERAL;}     

"and"                    {return LOGIC_AND;}
"or"                     {return LOGIC_OR;}
"!"                      {return LOGIC_NOT;}

"=="                     {return EQUALITY;}
"!="                     {return NEG_EQUALITY;}

">"                      {return GT;}
"<"                      {return LT;}

"="                      {return EQ;}         
";"                      {return SEMICOLON;}

"%"                      {return MODULO;}
"+"                      {return PLUS;}
"-"                      {return SUB;}
"*"                      {return MUL;}
"/"                      {return DIV;}
"^"                      {return POW;}

"|"                      {return BITWISE_OR;}
"&"                      {return BITWISE_AND;}
"<<"                     {return SHL;}
">>"                     {return SHR;}


[){}(:,]               {return *yytext;}
[A-Z]+                 {yylval.str = strdup(yytext); return CONSTANT;}
[a-zA-Z_][a-zA-Z0-9_]* {yylval.str = strdup(yytext); return IDENTIFIER;}

\'.\'         {yylval.str = strdup(yytext); return CHAR_LITERAL;}
\".*\"        {yylval.str = strdup(yytext); return STRING_LITERAL;}

[0-9]+         {yylval.num = atoi(yytext);     return DIGIT;}
[0-9]+\.[0-9]+ {yylval.float_val= atof(yytext);return FLOAT_DIGIT;}

[ \t]+         /* Ignore spaces */                   
\n             {number_of_line++;}
.              {return *yytext;}
%%

