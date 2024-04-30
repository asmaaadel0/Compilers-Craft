/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 23 "./parser.y"

#include<stdbool.h>

#line 53 "parser.tab.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INT = 258,                     /* INT  */
    FLOAT = 259,                   /* FLOAT  */
    STRING = 260,                  /* STRING  */
    BOOL = 261,                    /* BOOL  */
    PRINT = 262,                   /* PRINT  */
    VOID = 263,                    /* VOID  */
    RETURN = 264,                  /* RETURN  */
    SWITCH = 265,                  /* SWITCH  */
    BREAK = 266,                   /* BREAK  */
    CONTINUE = 267,                /* CONTINUE  */
    CASE = 268,                    /* CASE  */
    DEFAULT = 269,                 /* DEFAULT  */
    IF = 270,                      /* IF  */
    ELSE = 271,                    /* ELSE  */
    FOR = 272,                     /* FOR  */
    WHILE = 273,                   /* WHILE  */
    DO = 274,                      /* DO  */
    BOOL_LITERAL = 275,            /* BOOL_LITERAL  */
    LOGIC_AND = 276,               /* LOGIC_AND  */
    LOGIC_OR = 277,                /* LOGIC_OR  */
    LOGIC_NOT = 278,               /* LOGIC_NOT  */
    NOT = 279,                     /* NOT  */
    EQUALITY = 280,                /* EQUALITY  */
    NEG_EQUALITY = 281,            /* NEG_EQUALITY  */
    DEC = 282,                     /* DEC  */
    INC = 283,                     /* INC  */
    GT = 284,                      /* GT  */
    LT = 285,                      /* LT  */
    SHR = 286,                     /* SHR  */
    SHL = 287,                     /* SHL  */
    EQ = 288,                      /* EQ  */
    SEMICOLON = 289,               /* SEMICOLON  */
    MODULO = 290,                  /* MODULO  */
    PLUS = 291,                    /* PLUS  */
    SUB = 292,                     /* SUB  */
    MUL = 293,                     /* MUL  */
    DIV = 294,                     /* DIV  */
    POW = 295,                     /* POW  */
    CONSTANT = 296,                /* CONSTANT  */
    IDENTIFIER = 297,              /* IDENTIFIER  */
    STRING_LITERAL = 298,          /* STRING_LITERAL  */
    DIGIT = 299,                   /* DIGIT  */
    FLOAT_DIGIT = 300              /* FLOAT_DIGIT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "./parser.y"
 
 int num;
 char* str; 
 float float_val;
 bool bool_val;

#line 122 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
