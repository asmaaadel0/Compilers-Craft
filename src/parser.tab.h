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
#line 27 "./parser.y"

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
    CHAR = 261,                    /* CHAR  */
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
    BOOL_VALUE = 275,              /* BOOL_VALUE  */
    LOGICAL_AND = 276,             /* LOGICAL_AND  */
    LOGICAL_OR = 277,              /* LOGICAL_OR  */
    LOGICAL_NOT = 278,             /* LOGICAL_NOT  */
    EQUAL = 279,                   /* EQUAL  */
    NOT_EQUAL = 280,               /* NOT_EQUAL  */
    GT = 281,                      /* GT  */
    LT = 282,                      /* LT  */
    EQ = 283,                      /* EQ  */
    SEMICOLON = 284,               /* SEMICOLON  */
    MOD = 285,                     /* MOD  */
    ADD = 286,                     /* ADD  */
    SUB = 287,                     /* SUB  */
    MUL = 288,                     /* MUL  */
    DIV = 289,                     /* DIV  */
    POW = 290,                     /* POW  */
    BITWISE_OR = 291,              /* BITWISE_OR  */
    BITWISE_AND = 292,             /* BITWISE_AND  */
    SHL = 293,                     /* SHL  */
    SHR = 294,                     /* SHR  */
    CONSTANT = 295,                /* CONSTANT  */
    IDENTIFIER = 296,              /* IDENTIFIER  */
    STRING_VALUE = 297,            /* STRING_VALUE  */
    CHAR_VALUE = 298,              /* CHAR_VALUE  */
    INT_VALUE = 299,               /* INT_VALUE  */
    FLOAT_VALUE = 300              /* FLOAT_VALUE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 17 "./parser.y"
 
 int int_value;
 char* string_value; 
 float float_value;
 bool bool_value;

 struct nodeType *nodePtr;

#line 124 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
