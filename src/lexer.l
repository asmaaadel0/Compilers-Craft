%{
    #include "parser.tab.h"
    int number_of_line = 1;
    int num_of_char;
    int num_of_words;
%}

%%
#[\s\t]*.*[\s\t]*        {/* Ignore comments */ }

"int"                    { num_of_words++; num_of_char+=yyleng;  return INT;}
"float"                  { num_of_words++; num_of_char+=yyleng;  return FLOAT;}
"string"                 { num_of_words++; num_of_char+=yyleng;  return STRING;}
"enum"                   { num_of_words++; num_of_char+=yyleng;  return ENUM;}
"bool"                   { num_of_words++; num_of_char+=yyleng;  return BOOL;}

"print"                  { num_of_words++; num_of_char+=yyleng;  return PRINT;}
"void"                   { num_of_words++; num_of_char+=yyleng;  return VOID;}
"return"                 { num_of_words++; num_of_char+=yyleng;  return RETURN;}

"switch"                 { num_of_words++; num_of_char+=yyleng;  return SWITCH;}
"break"                  { num_of_words++; num_of_char+=yyleng;  return BREAK;}
"continue"               { num_of_words++; num_of_char+=yyleng;  return CONTINUE;}

"case"                   { num_of_words++; num_of_char+=yyleng;  return CASE;}
"default"                { num_of_words++; num_of_char+=yyleng;  return DEFAULT;}

"if"                     { num_of_words++; num_of_char+=yyleng;  return IF;}
"else"                   { num_of_words++; num_of_char+=yyleng;  return ELSE;}

"for"                    { num_of_words++; num_of_char+=yyleng;  return FOR;}
"while"                  { num_of_words++; num_of_char+=yyleng;  return WHILE;}
"do"                     { num_of_words++; num_of_char+=yyleng;  return DO;}

"true"                   { num_of_words++; num_of_char+=yyleng; yylval.bool_val = true; return BOOL_LITERAL;}
"false"                  { num_of_words++; num_of_char+=yyleng; yylval.bool_val = false;return BOOL_LITERAL;}     

"and"                    { num_of_words++; num_of_char+=yyleng;  return LOGIC_AND;}
"or"                     { num_of_words++; num_of_char+=yyleng;  return LOGIC_OR;}
"!"                      { num_of_words++; num_of_char+=yyleng;  return LOGIC_NOT;}
"~"                      { num_of_words++; num_of_char+=yyleng;  return NOT;}

"=="                     { num_of_words++; num_of_char+=yyleng;  return EQUALITY;}
"!="                     { num_of_words++; num_of_char+=yyleng;  return NEG_EQUALITY;}
"--"                     { num_of_words++; num_of_char+=yyleng;  return DEC;}
"++"                     { num_of_words++; num_of_char+=yyleng;  return INC;}

">"                      { num_of_words++; num_of_char+=yyleng;  return GT;}
"<"                      { num_of_words++; num_of_char+=yyleng;  return LT;}

"<<"                     { num_of_words++; num_of_char+=yyleng;  return SHL;}
">>"                     { num_of_words++; num_of_char+=yyleng;  return SHR;}

"="                      { num_of_words++; num_of_char+=yyleng;  return EQ;}         
";"                      { num_of_words++; num_of_char+=yyleng;  return SEMICOLON;}

"%"                      { num_of_words++; num_of_char+=yyleng; yylval.str = strdup(yytext);return MODULO;}
"+"                      { num_of_words++; num_of_char+=yyleng; yylval.str = strdup(yytext);return PLUS;}
"-"                      { num_of_words++; num_of_char+=yyleng;                             return SUB;}
"*"                      { num_of_words++; num_of_char+=yyleng;                             return MUL;}
"/"                      { num_of_words++; num_of_char+=yyleng;                             return DIV;}
"^"                      { num_of_words++; num_of_char+=yyleng;                             return POW;}

[){}(:,]                 { num_of_words++; num_of_char+=yyleng;                                return *yytext;}
[A-Z]+                   { num_of_words++; num_of_char+=yyleng; yylval.str = strdup(yytext);   return CONSTANT;}
[a-zA-Z_][a-zA-Z0-9_]*   { num_of_words++; num_of_char+=yyleng; yylval.str = strdup(yytext);   return IDENTIFIER;}
\"[a-zA-Z0-9_]+\"        { num_of_words++; num_of_char+=yyleng; yylval.str = strdup(yytext);   return STRING_LITERAL;}

[0-9]+                   { num_of_words++; num_of_char+=yyleng; yylval.num = atoi(yytext);     return DIGIT;}
[0-9]+\.[0-9]+           { num_of_words++; num_of_char+=yyleng; yylval.float_val= atof(yytext);return FLOAT_DIGIT;}

[ \t]+                   /* Ignore spaces */                   
\n                       { num_of_char++; number_of_line++;}
.                        { num_of_char++; return *yytext;}
%%

