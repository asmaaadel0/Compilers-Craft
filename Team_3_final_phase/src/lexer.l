%{
    #include "parser.tab.h"
%}
%option yylineno

%%
\/\/[\s\t]*.*[\s\t]* 

"int"      {return INT;}
"float"    {return FLOAT;}
"string"   {return STRING;}
"char"     {return CHAR;}
"bool"     {return BOOL;}

"print"    {return PRINT;}
"void"     {return VOID;}
"return"   {return RETURN;}

"switch"   {return SWITCH;}
"break"    {return BREAK;}

"case"     {return CASE;}
"default"  {return DEFAULT;}

"if"       {return IF;}
"else"     {return ELSE;}

"for"      {return FOR;}
"while"    {return WHILE;}
"do"       {return DO;}

"true"     {yylval.bool_value = true; return BOOL_VALUE;}
"false"    {yylval.bool_value = false;return BOOL_VALUE;}     

"and"      {return LOGICAL_AND;}
"or"       {return LOGICAL_OR;}
"!"        {return LOGICAL_NOT;}

"=="       {return EQUAL;}
"!="       {return NOT_EQUAL;}

">"        {return GT;}
"<"        {return LT;}

"="        {return EQ;}         
";"        {return SEMICOLON;}

"%"        {return MOD;}
"+"        {return ADD;}
"-"        {return SUB;}
"*"        {return MUL;}
"/"        {return DIV;}
"^"        {return POW;}

"|"        {return BITWISE_OR;}
"&"        {return BITWISE_AND;}
"<<"       {return SHL;}
">>"       {return SHR;}


[){}(:,]               {return *yytext;}
[A-Z]+                 {yylval.string_value = strdup(yytext); return CONSTANT;}
[a-zA-Z_][a-zA-Z0-9_]* {yylval.string_value = strdup(yytext); return IDENTIFIER;}

\'.\'         {yylval.string_value = strdup(yytext); return CHAR_VALUE;}
\".*\"        {yylval.string_value = strdup(yytext); return STRING_VALUE;}

[0-9]+         {yylval.int_value = atoi(yytext); return INT_VALUE;}
[0-9]+\.[0-9]+ {yylval.float_value= atof(yytext);return FLOAT_VALUE;}

[ \t]+                         
\n             
.              {return *yytext;}
%%

