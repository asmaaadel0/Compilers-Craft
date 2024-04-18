%{
    #include "parser.tab.h"
    int number_of_line = 1;
    int num_of_char;
    int num_of_words;
%}
%option yylineno

%%
#[\s\t]*.*[\s\t]*#       { /* Ignore comments */ }

"int"                    { printf("Type: %s - line %d\n", yytext, number_of_line); num_of_words++; num_of_char+=yyleng;   return INT;}
"float"                  { printf("Type: %s - line %d\n", yytext, number_of_line); num_of_words++; num_of_char+=yyleng;   return FLOAT;}
"double"                 { printf("Type: %s - line %d\n", yytext, number_of_line);  num_of_words++; num_of_char+=yyleng;  return FLOAT;}
"string"                 { printf("Type: %s - line %d\n", yytext, number_of_line);  num_of_words++; num_of_char+=yyleng;  return STRING;}
"enum"                   { printf("Type: %s - line %d\n", yytext, number_of_line);  num_of_words++; num_of_char+=yyleng;  return ENUM;}
"bool"                   { printf("Type: %s - line %d\n", yytext, number_of_line);  num_of_words++; num_of_char+=yyleng;  return BOOL;}

"print"                  { printf(" %s - line %d\n", yytext, number_of_line); num_of_words++; num_of_char+=yyleng;        return PRINT;}
"void"                   { printf(" %s - line %d\n", yytext, number_of_line); num_of_words++; num_of_char+=yyleng;        return VOID;}
"return"                 { printf(" %s - line %d\n", yytext, number_of_line); num_of_words++; num_of_char+=yyleng;        return RETURN;}

"switch"                 { printf(" %s - line %d\n", yytext, number_of_line); num_of_words++; num_of_char+=yyleng;        return SWITCH;}
"break"                  { printf(" %s - line %d\n", yytext, number_of_line); num_of_words++; num_of_char+=yyleng;        return BREAK;}

"case"                   { printf(" %s - line %d\n", yytext, number_of_line); num_of_words++; num_of_char+=yyleng;        return CASE;}
"default"                { printf(" %s - line %d\n", yytext, number_of_line); num_of_words++; num_of_char+=yyleng;        return DEFAULT;}

"if"                     { printf(" %s - line %d\n", yytext, number_of_line); num_of_words++; num_of_char+=yyleng;        return IF;}
"else"                   { printf(" %s - line %d\n", yytext, number_of_line); num_of_words++; num_of_char+=yyleng;        return ELSE;}

"for"                    { printf(" %s - line %d\n", yytext, number_of_line); num_of_words++; num_of_char+=yyleng;        return FOR;}
"while"                  { printf(" %s - line %d\n", yytext, number_of_line); num_of_words++; num_of_char+=yyleng;        return WHILE;}
"do"                     { printf(" %s - line %d\n", yytext, number_of_line); num_of_words++; num_of_char+=yyleng;        return DO;}

"true"                   { printf("Boolean: %s - line %d\n", yytext, number_of_line);  num_of_words++; num_of_char+=yyleng; yylval.bool_val = true; return BOOL_LITERAL;}
"false"                  { printf("Boolean: %s - line %d\n", yytext, number_of_line);  num_of_words++; num_of_char+=yyleng; yylval.bool_val = false;return BOOL_LITERAL;}     

"and"                    { printf("Operator: %s - line %d\n", yytext, number_of_line); num_of_words++; num_of_char+=yyleng;                         return LOGIC_AND;}
"or"                     { printf("Operator: %s - line %d\n", yytext, number_of_line); num_of_words++; num_of_char+=yyleng;                         return LOGIC_OR;}
"!"                      { printf("Operator: %s - line %d\n", yytext, number_of_line); num_of_words++; num_of_char+=yyleng;                         return LOGIC_NOT;}

"=="                     { printf("Operator: %s - line %d\n", yytext, number_of_line); num_of_words++; num_of_char+=yyleng;        return EQUALITY;}
"!="                     { printf("Operator: %s - line %d\n", yytext, number_of_line); num_of_words++; num_of_char+=yyleng;        return NEG_EQUALITY;}
"--"                     { printf("Operator: %s - line %d\n", yytext, number_of_line); num_of_words++; num_of_char+=yyleng;        return DEC;}
"++"                     { printf("Operator: %s - line %d\n", yytext, number_of_line); num_of_words++; num_of_char+=yyleng;        return INC;}

">"                      { printf("Operator: %s - line %d\n", yytext, number_of_line); num_of_words++; num_of_char+=yyleng;        return GT;}
"<"                      { printf("Operator: %s - line %d\n", yytext, number_of_line); num_of_words++; num_of_char+=yyleng;        return LT;}

"="                      { num_of_words++; num_of_char+=yyleng;        return EQ;}         
";"                      { num_of_words++; num_of_char+=yyleng;        return SEMICOLON;}

"%"                      { printf("Operator: %s - line %d\n", yytext, number_of_line); num_of_words++; num_of_char+=yyleng; yylval.str = strdup(yytext);return MODULO;}
"+"                      { printf("Operator: %s - line %d\n", yytext, number_of_line); num_of_words++; num_of_char+=yyleng; yylval.str = strdup(yytext);return PLUS;}
"-"                      { printf("Operator: %s - line %d\n", yytext, number_of_line); num_of_words++; num_of_char+=yyleng;                             return SUB;}
"*"                      { printf("Operator: %s - line %d\n", yytext, number_of_line); num_of_words++; num_of_char+=yyleng;                             return MUL;}
"/"                      { printf("Operator: %s - line %d\n", yytext, number_of_line); num_of_words++; num_of_char+=yyleng;                             return DIV;}
"^"                      { printf("Operator: %s - line %d\n", yytext, number_of_line); num_of_words++; num_of_char+=yyleng;                             return POW;}

[){}(:,]                 { printf("Others: %s - line %d\n", yytext, number_of_line);    num_of_words++; num_of_char+=yyleng;                                return *yytext;}
[A-Z]+                   { printf("Constant: %s - line %d\n", yytext, number_of_line);  num_of_words++; num_of_char+=yyleng; yylval.str = strdup(yytext);   return CONSTANT;}
[a-zA-Z_][a-zA-Z0-9_]*   { printf("Identifier: %s - line %d\n", yytext, number_of_line);num_of_words++; num_of_char+=yyleng; yylval.str = strdup(yytext);   return IDENTIFIER;}
\"[a-zA-Z0-9_]+\"        { printf("String: %s - line %d\n", yytext, number_of_line);    num_of_words++; num_of_char+=yyleng; yylval.str = strdup(yytext);   return STRING_LITERAL;}

[0-9]+                   { printf("Integer: %s - line %d\n", yytext, number_of_line);   num_of_words++; num_of_char+=yyleng; yylval.num = atoi(yytext);     return DIGIT;}
[0-9]+\.[0-9]+           { printf("Float: %s - line %d\n", yytext, number_of_line);     num_of_words++; num_of_char+=yyleng; yylval.float_val= atof(yytext);return FLOAT_DIGIT;}

[ \t]+                   /* Ignore spaces */                   
\n                       { num_of_char++; number_of_line++;}
.                        { printf("UNK: %s - line %d\n", yytext, number_of_line);          num_of_char++;                 return *yytext;}
%%

