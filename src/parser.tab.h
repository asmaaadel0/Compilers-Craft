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
#line 144 "parser.y"

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
    ENUM = 261,                    /* ENUM  */
    BOOL = 262,                    /* BOOL  */
    PRINT = 263,                   /* PRINT  */
    VOID = 264,                    /* VOID  */
    RETURN = 265,                  /* RETURN  */
    SWITCH = 266,                  /* SWITCH  */
    BREAK = 267,                   /* BREAK  */
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
    EQUALITY = 279,                /* EQUALITY  */
    NEG_EQUALITY = 280,            /* NEG_EQUALITY  */
    DEC = 281,                     /* DEC  */
    INC = 282,                     /* INC  */
    GT = 283,                      /* GT  */
    LT = 284,                      /* LT  */
    EQ = 285,                      /* EQ  */
    SEMICOLON = 286,               /* SEMICOLON  */
    MODULO = 287,                  /* MODULO  */
    PLUS = 288,                    /* PLUS  */
    SUB = 289,                     /* SUB  */
    MUL = 290,                     /* MUL  */
    DIV = 291,                     /* DIV  */
    POW = 292,                     /* POW  */
    CONSTANT = 293,                /* CONSTANT  */
    IDENTIFIER = 294,              /* IDENTIFIER  */
    STRING_LITERAL = 295,          /* STRING_LITERAL  */
    DIGIT = 296,                   /* DIGIT  */
    FLOAT_DIGIT = 297              /* FLOAT_DIGIT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 136 "parser.y"
 
 bool bool_val;
 char* str; 
 int num;
 float float_val;

#line 119 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
