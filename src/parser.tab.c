/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "./parser.y"

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
    //--------------------- Symbol Table -----------------
    struct enumEntry{
        char* keys[100];
        int values [100];
    };
    struct Entry {
        int id,intValue,scope;
        char* name , value;
        float floatValue;
        bool boolValue;
        char* strValue; 

        struct enumEntry enumValue;
        char* type; // var,const, func, enum_arg, var_enum
        char* dataType; // int, float, bool, string (for func: return type)
        // list of arguments stored as IDs of them symbol table
        int argList[100];
        int argEnum[100]; // store indexes of the enum args in the symbol table
        int argCount;
        int declareLine;
        int isConst, isArg, isUsed, isInit, outOfScope;
    };
    struct Entry symbolTable[500]; //
    int st_index=0;
    int in_loop=0;
    int assign_index=-1;
    int func_index=-1; // to check return type of the function
    int is_param=0;
    int arg_count=0;
    int called_func_index=0;
    int is_enum=0;
    char* enum_keys[100];
    int enum_values [100];
    int enum_arg_count=0;
    int is_changed=1; // default is 1,
    int return_exist=0;
    //-- symbol table functions:  st_functionName()
    int st_insert(char* data_type, char* name, char* type, int is_arg);
    void st_print();
    void st_log();
    void clear_logs();
    int is_exist(char* name);
    int lookup(char* name, int is_assignment);
    //--- handle scope
    int scope_index=0;
    int block_number=0;
    int scope_stack[500]; // stack of scopes (for nested scopes to store block number)
    void scope_start();
    void scope_end();
    //--- handle errors
    void check_type( int i);
    void unused_print() ;
    void assign_int( int d , int i);
    void assign_str( char* s , int i);
    void assign_bool( bool b , int i);
    void assign_float( float f , int i);
    void assign_enum (int i, char* enum_name, char* key);
    void arg_count_check( int i);
    void assign_arg_indexes();




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
    char* popVStack();
    char temp_var[50] = "t";
    void pushVStack(char* s);
    void CodeGenAss();
    void CodeGenOp(char* operator);
    void printIF();
    void printLLVM(char* s);
    char* makeLabel();
    char* makeEndLabel();
    void printWHILE();
    void controlTerminator(int isWhile);
    void CodeGenLogical();
    void StAssPush(char* s);
    void StAssPrint(char* s, int ind);
    int SMLabel = 0;
    int SMLabel_Else = 0;
    int SMLabel_End = 0;
    void StAssJmp(char* jmp, char* jmpName,int* num, int inc, int noNum);
    void StAssPrintLBL(int isLBL, int inc);
    void StAssForHeader();
    void StAssForMiddle();
    int ForHeaderLabel = 0;
    int ForHelperLabel = 0;
    char IdentifierHolder[10];
    char* argumentList[20];
    int argPointer = 0;
    void popArgs();
    int enumCNT = 1;
    void prepend(char* s, const char* t)    {size_t len = strlen(t);memmove(s + len, s, strlen(s) + 1);memcpy(s, t, len);}
    char switcher[50];
    void pErr(int num);
    void sErr(int num);
    void prependFile(char* filename, char* text);
    void printDataSegment();
    //int* linenoPTR = &yylineno;
    int alwaysFalseFlag = 0;
    int AStack = -1;
    void alwaysFalse(int operation);
    void warnAlwaysFalse();
    void pushAStack(char* var);
    char* popAStack();
//==================================================================================================================================================


#line 206 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_FLOAT = 4,                      /* FLOAT  */
  YYSYMBOL_STRING = 5,                     /* STRING  */
  YYSYMBOL_ENUM = 6,                       /* ENUM  */
  YYSYMBOL_BOOL = 7,                       /* BOOL  */
  YYSYMBOL_PRINT = 8,                      /* PRINT  */
  YYSYMBOL_VOID = 9,                       /* VOID  */
  YYSYMBOL_RETURN = 10,                    /* RETURN  */
  YYSYMBOL_SWITCH = 11,                    /* SWITCH  */
  YYSYMBOL_BREAK = 12,                     /* BREAK  */
  YYSYMBOL_CASE = 13,                      /* CASE  */
  YYSYMBOL_DEFAULT = 14,                   /* DEFAULT  */
  YYSYMBOL_IF = 15,                        /* IF  */
  YYSYMBOL_ELSE = 16,                      /* ELSE  */
  YYSYMBOL_FOR = 17,                       /* FOR  */
  YYSYMBOL_WHILE = 18,                     /* WHILE  */
  YYSYMBOL_DO = 19,                        /* DO  */
  YYSYMBOL_BOOL_LITERAL = 20,              /* BOOL_LITERAL  */
  YYSYMBOL_LOGIC_AND = 21,                 /* LOGIC_AND  */
  YYSYMBOL_LOGIC_OR = 22,                  /* LOGIC_OR  */
  YYSYMBOL_LOGIC_NOT = 23,                 /* LOGIC_NOT  */
  YYSYMBOL_EQUALITY = 24,                  /* EQUALITY  */
  YYSYMBOL_NEG_EQUALITY = 25,              /* NEG_EQUALITY  */
  YYSYMBOL_DEC = 26,                       /* DEC  */
  YYSYMBOL_INC = 27,                       /* INC  */
  YYSYMBOL_GT = 28,                        /* GT  */
  YYSYMBOL_LT = 29,                        /* LT  */
  YYSYMBOL_EQ = 30,                        /* EQ  */
  YYSYMBOL_SEMICOLON = 31,                 /* SEMICOLON  */
  YYSYMBOL_MODULO = 32,                    /* MODULO  */
  YYSYMBOL_PLUS = 33,                      /* PLUS  */
  YYSYMBOL_SUB = 34,                       /* SUB  */
  YYSYMBOL_MUL = 35,                       /* MUL  */
  YYSYMBOL_DIV = 36,                       /* DIV  */
  YYSYMBOL_POW = 37,                       /* POW  */
  YYSYMBOL_CONSTANT = 38,                  /* CONSTANT  */
  YYSYMBOL_IDENTIFIER = 39,                /* IDENTIFIER  */
  YYSYMBOL_STRING_LITERAL = 40,            /* STRING_LITERAL  */
  YYSYMBOL_DIGIT = 41,                     /* DIGIT  */
  YYSYMBOL_FLOAT_DIGIT = 42,               /* FLOAT_DIGIT  */
  YYSYMBOL_43_ = 43,                       /* '{'  */
  YYSYMBOL_44_ = 44,                       /* '}'  */
  YYSYMBOL_45_ = 45,                       /* ')'  */
  YYSYMBOL_46_ = 46,                       /* ':'  */
  YYSYMBOL_47_ = 47,                       /* '('  */
  YYSYMBOL_48_ = 48,                       /* ','  */
  YYSYMBOL_49_ = 49,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 50,                  /* $accept  */
  YYSYMBOL_PROGRAM = 51,                   /* PROGRAM  */
  YYSYMBOL_STATEMENT = 52,                 /* STATEMENT  */
  YYSYMBOL_SEMICOLON_MISS = 53,            /* SEMICOLON_MISS  */
  YYSYMBOL_TYPE = 54,                      /* TYPE  */
  YYSYMBOL_DECLARATION_STT = 55,           /* DECLARATION_STT  */
  YYSYMBOL_56_1 = 56,                      /* $@1  */
  YYSYMBOL_57_2 = 57,                      /* $@2  */
  YYSYMBOL_DECLARATION_TAIL = 58,          /* DECLARATION_TAIL  */
  YYSYMBOL_59_3 = 59,                      /* $@3  */
  YYSYMBOL_60_4 = 60,                      /* $@4  */
  YYSYMBOL_RETURN_STT = 61,                /* RETURN_STT  */
  YYSYMBOL_62_5 = 62,                      /* $@5  */
  YYSYMBOL_helperSWITCH = 63,              /* helperSWITCH  */
  YYSYMBOL_SWITCH_STT = 64,                /* SWITCH_STT  */
  YYSYMBOL_DEFAULTCASE = 65,               /* DEFAULTCASE  */
  YYSYMBOL_CASES = 66,                     /* CASES  */
  YYSYMBOL_67_6 = 67,                      /* $@6  */
  YYSYMBOL_68_7 = 68,                      /* $@7  */
  YYSYMBOL_69_8 = 69,                      /* $@8  */
  YYSYMBOL_70_9 = 70,                      /* $@9  */
  YYSYMBOL_ERRONOUS_SWITCH_STT = 71,       /* ERRONOUS_SWITCH_STT  */
  YYSYMBOL_72_10 = 72,                     /* $@10  */
  YYSYMBOL_73_11 = 73,                     /* $@11  */
  YYSYMBOL_74_12 = 74,                     /* $@12  */
  YYSYMBOL_75_13 = 75,                     /* $@13  */
  YYSYMBOL_FUNC_DECLARATION_STT = 76,      /* FUNC_DECLARATION_STT  */
  YYSYMBOL_77_14 = 77,                     /* $@14  */
  YYSYMBOL_78_15 = 78,                     /* $@15  */
  YYSYMBOL_79_16 = 79,                     /* $@16  */
  YYSYMBOL_80_17 = 80,                     /* $@17  */
  YYSYMBOL_81_18 = 81,                     /* $@18  */
  YYSYMBOL_82_19 = 82,                     /* $@19  */
  YYSYMBOL_83_20 = 83,                     /* $@20  */
  YYSYMBOL_84_21 = 84,                     /* $@21  */
  YYSYMBOL_ERRONOUS_FUNC_DECLARATION_STT = 85, /* ERRONOUS_FUNC_DECLARATION_STT  */
  YYSYMBOL_86_22 = 86,                     /* $@22  */
  YYSYMBOL_ARGS = 87,                      /* ARGS  */
  YYSYMBOL_ERRONOUS_ARGS = 88,             /* ERRONOUS_ARGS  */
  YYSYMBOL_ARG_DECL = 89,                  /* ARG_DECL  */
  YYSYMBOL_ENUM_DECLARATION_STT = 90,      /* ENUM_DECLARATION_STT  */
  YYSYMBOL_91_23 = 91,                     /* $@23  */
  YYSYMBOL_ENUM_HELPER = 92,               /* ENUM_HELPER  */
  YYSYMBOL_ENUM_ARGS = 93,                 /* ENUM_ARGS  */
  YYSYMBOL_94_24 = 94,                     /* $@24  */
  YYSYMBOL_ENUM_DEFINED_ARGS = 95,         /* ENUM_DEFINED_ARGS  */
  YYSYMBOL_96_25 = 96,                     /* $@25  */
  YYSYMBOL_ERRONOUS_ENUM_DECLARATION_STT = 97, /* ERRONOUS_ENUM_DECLARATION_STT  */
  YYSYMBOL_ENUM_CALL_STT = 98,             /* ENUM_CALL_STT  */
  YYSYMBOL_IF_STT_HELPER = 99,             /* IF_STT_HELPER  */
  YYSYMBOL_100_26 = 100,                   /* $@26  */
  YYSYMBOL_IF_STT_HELPER1 = 101,           /* IF_STT_HELPER1  */
  YYSYMBOL_IF_STT = 102,                   /* IF_STT  */
  YYSYMBOL_103_27 = 103,                   /* $@27  */
  YYSYMBOL_104_28 = 104,                   /* $@28  */
  YYSYMBOL_WHILE_STT = 105,                /* WHILE_STT  */
  YYSYMBOL_106_29 = 106,                   /* $@29  */
  YYSYMBOL_107_30 = 107,                   /* $@30  */
  YYSYMBOL_WHILEMISS_COLON = 108,          /* WHILEMISS_COLON  */
  YYSYMBOL_DO_WHILE_STT = 109,             /* DO_WHILE_STT  */
  YYSYMBOL_110_31 = 110,                   /* $@31  */
  YYSYMBOL_ERRONOUS_DO_WHILE = 111,        /* ERRONOUS_DO_WHILE  */
  YYSYMBOL_112_32 = 112,                   /* $@32  */
  YYSYMBOL_113_33 = 113,                   /* $@33  */
  YYSYMBOL_114_34 = 114,                   /* $@34  */
  YYSYMBOL_115_35 = 115,                   /* $@35  */
  YYSYMBOL_FOR_STT = 116,                  /* FOR_STT  */
  YYSYMBOL_117_36 = 117,                   /* $@36  */
  YYSYMBOL_118_37 = 118,                   /* $@37  */
  YYSYMBOL_119_38 = 119,                   /* $@38  */
  YYSYMBOL_120_39 = 120,                   /* $@39  */
  YYSYMBOL_ERRONOUS_FOR_LOOP = 121,        /* ERRONOUS_FOR_LOOP  */
  YYSYMBOL_122_40 = 122,                   /* $@40  */
  YYSYMBOL_123_41 = 123,                   /* $@41  */
  YYSYMBOL_helperAssignmentRule = 124,     /* helperAssignmentRule  */
  YYSYMBOL_assignmentSTT = 125,            /* assignmentSTT  */
  YYSYMBOL_126_42 = 126,                   /* $@42  */
  YYSYMBOL_BLOCK = 127,                    /* BLOCK  */
  YYSYMBOL_128_43 = 128,                   /* $@43  */
  YYSYMBOL_FUNC_CALL = 129,                /* FUNC_CALL  */
  YYSYMBOL_130_44 = 130,                   /* $@44  */
  YYSYMBOL_131_45 = 131,                   /* $@45  */
  YYSYMBOL_132_46 = 132,                   /* $@46  */
  YYSYMBOL_USED_ARGS = 133,                /* USED_ARGS  */
  YYSYMBOL_134_47 = 134,                   /* $@47  */
  YYSYMBOL_EXPRESSION = 135,               /* EXPRESSION  */
  YYSYMBOL_136_48 = 136,                   /* $@48  */
  YYSYMBOL_137_49 = 137,                   /* $@49  */
  YYSYMBOL_138_50 = 138,                   /* $@50  */
  YYSYMBOL_139_51 = 139,                   /* $@51  */
  YYSYMBOL_140_52 = 140,                   /* $@52  */
  YYSYMBOL_141_53 = 141,                   /* $@53  */
  YYSYMBOL_ERRONOUS_EXPRESSION = 142,      /* ERRONOUS_EXPRESSION  */
  YYSYMBOL_COMPARISONSTT = 143,            /* COMPARISONSTT  */
  YYSYMBOL_ERRONOUS_COMPARISONSTT = 144    /* ERRONOUS_COMPARISONSTT  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1065

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  95
/* YYNRULES -- Number of rules.  */
#define YYNRULES  220
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  384

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   297


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      47,    45,     2,     2,    48,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    46,    49,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,     2,    44,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   195,   195,   196,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   220,   224,   225,   226,   227,   231,   231,   232,   232,
     233,   234,   235,   240,   241,   242,   243,   244,   244,   245,
     245,   246,   251,   252,   252,   254,   257,   258,   262,   263,
     266,   266,   266,   266,   267,   267,   268,   269,   271,   280,
     280,   281,   281,   282,   282,   283,   283,   284,   296,   297,
     297,   297,   298,   298,   298,   299,   299,   299,   300,   300,
     300,   305,   305,   315,   316,   317,   320,   323,   330,   330,
     331,   333,   333,   336,   336,   337,   343,   343,   344,   345,
     346,   347,   348,   352,   353,   355,   356,   360,   361,   365,
     365,   368,   372,   373,   374,   375,   375,   376,   376,   377,
     388,   388,   388,   395,   396,   401,   401,   402,   405,   405,
     406,   406,   407,   407,   408,   408,   409,   416,   416,   416,
     416,   416,   417,   421,   421,   422,   422,   429,   430,   434,
     435,   436,   436,   441,   441,   449,   449,   449,   449,   450,
     456,   456,   457,   458,   459,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   474,   475,   475,   476,   476,
     478,   478,   479,   479,   482,   482,   483,   484,   485,   486,
     495,   497,   498,   499,   506,   507,   508,   509,   510,   511,
     512,   513,   514,   515,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT", "FLOAT",
  "STRING", "ENUM", "BOOL", "PRINT", "VOID", "RETURN", "SWITCH", "BREAK",
  "CASE", "DEFAULT", "IF", "ELSE", "FOR", "WHILE", "DO", "BOOL_LITERAL",
  "LOGIC_AND", "LOGIC_OR", "LOGIC_NOT", "EQUALITY", "NEG_EQUALITY", "DEC",
  "INC", "GT", "LT", "EQ", "SEMICOLON", "MODULO", "PLUS", "SUB", "MUL",
  "DIV", "POW", "CONSTANT", "IDENTIFIER", "STRING_LITERAL", "DIGIT",
  "FLOAT_DIGIT", "'{'", "'}'", "')'", "':'", "'('", "','", "';'",
  "$accept", "PROGRAM", "STATEMENT", "SEMICOLON_MISS", "TYPE",
  "DECLARATION_STT", "$@1", "$@2", "DECLARATION_TAIL", "$@3", "$@4",
  "RETURN_STT", "$@5", "helperSWITCH", "SWITCH_STT", "DEFAULTCASE",
  "CASES", "$@6", "$@7", "$@8", "$@9", "ERRONOUS_SWITCH_STT", "$@10",
  "$@11", "$@12", "$@13", "FUNC_DECLARATION_STT", "$@14", "$@15", "$@16",
  "$@17", "$@18", "$@19", "$@20", "$@21", "ERRONOUS_FUNC_DECLARATION_STT",
  "$@22", "ARGS", "ERRONOUS_ARGS", "ARG_DECL", "ENUM_DECLARATION_STT",
  "$@23", "ENUM_HELPER", "ENUM_ARGS", "$@24", "ENUM_DEFINED_ARGS", "$@25",
  "ERRONOUS_ENUM_DECLARATION_STT", "ENUM_CALL_STT", "IF_STT_HELPER",
  "$@26", "IF_STT_HELPER1", "IF_STT", "$@27", "$@28", "WHILE_STT", "$@29",
  "$@30", "WHILEMISS_COLON", "DO_WHILE_STT", "$@31", "ERRONOUS_DO_WHILE",
  "$@32", "$@33", "$@34", "$@35", "FOR_STT", "$@36", "$@37", "$@38",
  "$@39", "ERRONOUS_FOR_LOOP", "$@40", "$@41", "helperAssignmentRule",
  "assignmentSTT", "$@42", "BLOCK", "$@43", "FUNC_CALL", "$@44", "$@45",
  "$@46", "USED_ARGS", "$@47", "EXPRESSION", "$@48", "$@49", "$@50",
  "$@51", "$@52", "$@53", "ERRONOUS_EXPRESSION", "COMPARISONSTT",
  "ERRONOUS_COMPARISONSTT", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-266)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-166)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -266,   193,  -266,   702,  -266,  -266,  -266,     7,  -266,   -28,
      -7,    30,    -5,   -11,     6,  -266,    27,  -266,   502,   514,
      45,   430,  -266,  -266,  -266,  -266,   514,  -266,    21,  -266,
      -5,   107,  -266,  -266,  -266,    44,  -266,  -266,  -266,    49,
    -266,  -266,  -266,  -266,  -266,  -266,    85,  -266,  -266,  -266,
     900,  -266,  -266,  -266,   514,   514,   514,   514,   132,   265,
    -266,   514,   514,   514,   514,    -5,    -5,  -266,  -266,    58,
      67,    60,   514,  -266,    16,  -266,  -266,  -266,   514,   406,
      63,   514,    74,    82,   108,  -266,   358,  1016,  1002,   140,
    -266,    77,  -266,   109,    81,  -266,   727,  -266,    26,  -266,
    -266,    68,   131,    17,  -266,    28,   118,    44,  -266,   917,
     537,   549,   572,   584,  -266,  -266,   299,   467,  -266,  -266,
    -266,  -266,  -266,  -266,  -266,  1016,  1016,  1028,  1028,   514,
     122,   514,   122,   140,   122,   122,   140,  -266,  -266,    99,
     105,   -24,    33,    98,  -266,  -266,   113,   968,   134,   110,
      37,    44,   968,   406,   406,   406,   968,   136,   138,  -266,
       8,    77,  -266,   514,   139,  -266,  -266,   240,  -266,    62,
      -5,   147,    62,    18,   514,    44,  -266,  -266,   170,  -266,
    -266,   141,  -266,    38,  -266,  -266,   446,  1016,   446,  1016,
     128,  1028,   128,  1028,   108,   607,   122,   108,   619,   122,
     514,   514,   514,   514,   514,   514,   122,   122,   151,    99,
      89,   153,   165,    99,  -266,    18,   169,   172,   173,   177,
    -266,  -266,  -266,   406,   406,  -266,   176,   178,   208,   181,
    -266,   514,   514,   934,   198,   479,  -266,   514,   642,  -266,
    -266,  -266,    18,   185,  -266,    18,   200,   192,  -266,   194,
     968,  -266,   514,  -266,   204,  -266,   108,   122,   108,   122,
     140,   140,   140,   122,   122,   140,  -266,   209,   206,  -266,
    -266,   212,  -266,   222,  -266,   218,   219,  -266,   107,   224,
     107,   107,   220,   406,   406,  -266,    44,   514,   221,   514,
     514,   859,   968,  -266,  -266,   666,  -266,   749,   951,   985,
     684,   226,  -266,  -266,  -266,  -266,    18,   223,   880,  -266,
    -266,  -266,   238,   228,  -266,  -266,  -266,    44,   245,   107,
     246,   247,  -266,   248,  -266,  -266,   771,   514,   793,   815,
    -266,   249,   479,   251,   250,  -266,  -266,  -266,   253,   257,
    -266,    44,  -266,    44,  -266,   269,    44,  -266,  -266,   266,
    -266,  -266,    44,  -266,   406,  -266,   837,  -266,  -266,  -266,
    -266,  -266,   479,  -266,  -266,    44,  -266,  -266,   279,  -266,
    -266,  -266,  -266,    44,   270,  -266,  -266,  -266,   107,  -266,
    -266,  -266,    44,  -266
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,     0,    22,    23,    24,     0,    25,     0,
      43,     0,     0,   109,     0,   120,     0,   168,     0,     0,
     170,     0,   169,   166,   167,   153,     0,     2,     0,     4,
       0,    58,    13,    47,     5,     0,    14,    90,    15,   115,
       9,    10,    12,   127,    11,   142,     0,     6,    16,   187,
       0,   189,   186,   203,     0,     0,     0,     0,     0,     0,
      18,     0,     0,     0,     0,     0,     0,    19,    20,     0,
       0,     0,     0,    59,     0,    21,    17,   117,     0,     0,
     137,     0,   128,     0,   212,   170,     0,   202,     0,   171,
     148,   151,   147,     0,     0,     3,     0,    28,    81,     7,
      50,     0,    57,     0,    68,     0,   112,     0,   149,     0,
       0,     0,     0,     0,   173,   172,     0,     0,     8,   176,
     174,   178,   180,   182,   184,   213,   215,   208,   210,     0,
     204,     0,   206,   190,   191,   192,   193,    31,    30,     0,
       0,    93,     0,     0,    91,    92,    72,    44,     0,    61,
       0,     0,   110,     0,     0,     0,   121,     0,     0,   132,
       0,     0,   159,     0,     0,   108,   156,     0,   188,     0,
       0,    69,     0,     0,     0,     0,    49,    56,     0,    67,
      46,     0,   111,     0,   116,   150,   214,   200,   216,   201,
     209,   198,   211,   199,   205,     0,   194,   207,     0,   195,
       0,     0,     0,     0,     0,     0,   219,   217,     0,     0,
       0,     0,     0,     0,   104,     0,     0,     0,     0,     0,
      65,    45,   118,     0,     0,   138,   124,     0,     0,     0,
     130,     0,     0,     0,     0,     0,   154,     0,     0,    36,
      29,    32,     0,     0,    27,     0,     0,     0,    85,    84,
      51,    48,     0,   119,     0,   113,   220,   197,   218,   196,
     177,   175,   179,   181,   183,   185,   103,     0,     0,   102,
     101,    96,   100,     0,   105,     0,     0,    79,    58,     0,
      58,    58,     0,     0,     0,   123,     0,     0,     0,     0,
       0,     0,   125,   152,   107,     0,   157,   160,     0,     0,
      41,     0,    76,    86,    87,    82,     0,     0,     0,   114,
     106,    99,     0,    93,    94,    89,    73,     0,     0,    58,
       0,     0,   143,     0,   139,   122,     0,     0,     0,     0,
     136,     0,     0,     0,     0,    34,    35,    33,     0,     0,
      70,     0,    83,     0,    55,     0,     0,    80,    60,     0,
      64,    66,     0,   145,     0,   129,     0,   133,   131,   126,
     162,   158,     0,    38,    40,     0,    77,    52,     0,    97,
      74,    62,   144,     0,     0,   135,   161,    71,    58,   146,
     140,    53,     0,   141
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -266,   216,   -77,   -29,  -163,  -266,  -266,  -266,   142,  -266,
    -266,  -266,  -266,  -266,  -266,   214,  -265,  -266,  -266,  -266,
    -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,
    -266,  -266,  -266,  -266,  -266,  -266,  -266,  -212,  -266,  -266,
    -266,  -266,  -125,    47,  -266,   -22,  -266,  -266,  -266,  -266,
    -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,
    -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,
    -266,  -266,  -266,  -266,  -266,  -266,  -266,   -16,  -266,  -266,
    -266,  -266,  -266,  -258,  -266,   -14,  -266,  -266,  -266,  -266,
    -266,  -266,  -266,  -266,  -266
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,    27,    76,    28,    29,   172,   169,   240,   338,
     339,    30,    72,    31,    32,   102,   103,   174,   307,   378,
     178,    33,   148,   218,   219,   281,    34,   242,   365,   215,
     346,   243,   341,   216,   317,    35,   173,   247,   248,   249,
      36,   213,   143,   144,   211,   145,   312,    37,    38,    39,
      78,   106,    40,   107,   151,    41,    81,   226,   286,    42,
     331,    43,   157,   290,   229,   158,    44,   155,   284,   354,
     382,    45,   352,   373,    46,    47,   163,    48,    95,    49,
      94,   235,   333,   296,   334,    50,   201,   200,   202,   203,
     204,   205,    51,    52,    53
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      83,    99,   153,   276,    87,    89,   210,    79,    69,   230,
     246,    71,    96,   318,   208,   320,   321,   149,   179,   104,
     -95,     4,     5,     6,   -42,     8,    75,   -26,    82,   181,
     301,    73,   109,   303,   212,    77,   137,   138,   220,   254,
     125,   126,   127,   128,   130,   132,    70,   133,   134,   135,
     136,   231,   246,    80,   349,   232,   -26,   -26,   147,    97,
      98,   180,   150,   237,   152,   170,   245,   156,   140,    74,
      25,    25,   -88,   171,   360,    90,   223,   224,   225,   246,
     221,    25,   246,   159,   267,   176,    88,    25,   275,   182,
     268,   184,   238,   239,   342,   105,   187,   189,   191,   193,
     160,   139,   196,   199,   376,    17,   141,   146,    18,   269,
     142,    25,   154,   381,   175,   206,   108,   207,  -134,    19,
     100,   101,   162,    85,    86,    22,    23,    24,   166,   270,
     271,   272,    26,    88,   183,   222,    58,    59,   141,   164,
     165,   241,   214,   246,   -54,   101,   282,   283,   209,   233,
     116,   117,    17,   -63,   227,    18,    58,    59,   -78,   251,
     250,    61,   129,    62,    63,    64,    19,   255,   116,   117,
      85,    86,    22,    23,    24,   122,   123,   124,   234,    26,
     217,   257,   228,   252,   259,   253,   260,   261,   262,   263,
     264,   265,   -75,     2,     3,   266,     4,     5,     6,     7,
       8,   273,     9,    10,    11,    12,   323,   324,    13,   274,
      14,    15,    16,    17,   277,   278,    18,   291,   292,   279,
     280,   297,   285,   298,   300,   287,   288,    19,   289,   294,
     302,    20,    21,    22,    23,    24,    25,   305,   308,   304,
      26,     3,   306,     4,     5,     6,     7,     8,   309,     9,
      10,    11,    12,   310,   311,    13,   -98,    14,    15,    16,
      17,   313,   315,    18,   316,   322,    88,   319,   327,   343,
     325,   340,   -95,   326,    19,   328,   329,   374,    20,    21,
      22,    23,    24,    25,   236,    17,   345,    26,    18,   348,
     350,   351,   344,   353,   359,   131,   361,   363,   362,    19,
     194,   347,   364,    85,    86,    22,    23,    24,   368,   210,
     371,   167,    26,   356,   244,   380,   177,     0,   297,    17,
     314,     0,    18,   369,     0,   366,     0,   367,     0,   195,
     370,     0,     0,    19,     0,     0,   372,    85,    86,    22,
      23,    24,     0,     0,     0,     0,    26,     0,   297,   377,
       0,     0,     0,     0,     0,     0,     0,   379,  -165,   161,
       0,  -165,  -165,  -165,  -165,  -165,   383,  -165,  -165,  -165,
    -165,     0,     0,  -165,     0,  -165,  -165,  -165,  -165,  -165,
    -165,  -165,  -165,  -165,  -165,  -165,  -165,  -165,     0,  -165,
    -165,  -165,  -165,  -165,  -165,  -165,  -165,  -165,  -165,  -165,
    -165,  -165,  -165,  -165,  -165,  -155,  -165,     3,     0,     4,
       5,     6,     7,     8,     0,     9,    10,    11,    12,     0,
       0,    13,     0,    14,    15,    16,    17,     0,     0,    18,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
      19,     0,     0,     0,    20,    21,    22,    23,    24,    25,
       0,  -165,  -165,    26,  -165,  -165,  -165,  -165,  -165,  -165,
      92,  -165,  -165,  -165,  -165,  -165,  -165,  -165,   197,    93,
      56,    57,     0,     0,    58,    59,     0,  -155,     0,    61,
     295,    62,    63,    64,     0,     0,     0,    17,     0,     0,
      18,     0,     0,     0,     0,     0,     0,   198,     0,    17,
       0,    19,    18,    84,     0,    85,    86,    22,    23,    24,
       0,     0,     0,    19,    26,    88,     0,    85,    86,    22,
      23,    24,    17,     0,  -164,    18,    26,     0,     0,     0,
       0,     0,     0,     0,    17,     0,    19,    18,   186,     0,
      85,    86,    22,    23,    24,     0,     0,     0,    19,    26,
     188,     0,    85,    86,    22,    23,    24,    17,     0,     0,
      18,    26,     0,     0,     0,     0,     0,     0,     0,    17,
       0,    19,    18,   190,     0,    85,    86,    22,    23,    24,
       0,     0,     0,    19,    26,   192,     0,    85,    86,    22,
      23,    24,    17,     0,     0,    18,    26,     0,     0,     0,
       0,     0,     0,     0,    17,     0,    19,    18,   256,     0,
      85,    86,    22,    23,    24,     0,     0,     0,    19,    26,
     258,     0,    85,    86,    22,    23,    24,    17,     0,     0,
      18,    26,     0,     0,     0,     0,     0,     0,     0,    17,
       0,    19,    18,   299,     0,    85,    86,    22,    23,    24,
       0,     0,     0,    19,    26,     0,     0,    85,    86,    22,
      23,    24,    17,     0,     0,    18,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    19,     0,     0,     0,
      85,    86,    22,    23,    24,     0,     0,    54,    55,    26,
      56,    57,     0,     0,    58,    59,     0,     0,     0,    61,
       0,    62,    63,    64,     0,   110,   111,     0,   112,   113,
     114,   115,   116,   117,   332,   337,   119,   120,     0,   122,
     123,   124,     0,    54,    55,     0,    56,    57,   -37,   -39,
      58,    59,     0,    60,     0,    61,     0,    62,    63,    64,
      65,    66,     0,     0,     0,     0,    67,    68,   110,   111,
       0,   112,   113,   114,   115,   116,   117,     0,     0,   119,
     120,   121,   122,   123,   124,     0,     0,     0,     0,     0,
     110,   111,   168,   112,   113,   114,   115,   116,   117,     0,
       0,   119,   120,   121,   122,   123,   124,     0,     0,     0,
       0,     0,   110,   111,  -163,   112,   113,   114,   115,   116,
     117,     0,     0,   119,   120,   121,   122,   123,   124,     0,
       0,     0,     0,     0,   110,   111,   355,   112,   113,   114,
     115,   116,   117,     0,     0,   119,   120,   121,   122,   123,
     124,     0,     0,     0,     0,     0,   110,   111,   357,   112,
     113,   114,   115,   116,   117,     0,     0,   119,   120,   121,
     122,   123,   124,     0,     0,     0,     0,     0,   110,   111,
     358,   112,   113,   114,   115,   116,   117,     0,     0,   119,
     120,   121,   122,   123,   124,     0,     0,     0,     0,     0,
     110,   111,   375,   112,   113,   114,   115,   116,   117,     0,
       0,   119,   120,   121,   122,   123,   124,     0,     0,     0,
       0,   110,   111,   330,   112,   113,   114,   115,   116,   117,
       0,     0,   119,   120,   121,   122,   123,   124,     0,     0,
       0,   110,   111,    25,   112,   113,   114,   115,   116,   117,
       0,   118,   119,   120,   121,   122,   123,   124,   110,   111,
       0,   112,   113,   114,   115,   116,   117,     0,   185,   119,
     120,   121,   122,   123,   124,   110,   111,     0,   112,   113,
     114,   115,   116,   117,     0,   293,   119,   120,   121,   122,
     123,   124,   110,   111,     0,   112,   113,   114,   115,   116,
     117,     0,   335,   119,   120,   121,   122,   123,   124,   110,
     111,     0,   112,   113,   114,   115,   116,   117,     0,     0,
     119,   120,   121,   122,   123,   124,    54,    55,     0,    56,
      57,     0,     0,    58,    59,     0,   336,     0,    61,     0,
      62,    63,    64,    54,    55,     0,    56,    57,     0,     0,
      58,    59,     0,     0,     0,    61,     0,    62,    63,    64,
     112,   113,   114,   115,   116,   117,     0,     0,   119,   120,
     121,   122,   123,   124,   114,   115,   116,   117,     0,     0,
     119,   120,   121,   122,   123,   124
};

static const yytype_int16 yycheck[] =
{
      16,    30,    79,   215,    18,    19,    30,     1,     1,     1,
     173,    39,    26,   278,   139,   280,   281,     1,     1,    35,
      44,     3,     4,     5,    31,     7,    31,     1,     1,     1,
     242,     1,    46,   245,     1,    46,    65,    66,     1,     1,
      54,    55,    56,    57,    58,    59,    39,    61,    62,    63,
      64,    43,   215,    47,   319,    47,    30,    31,    72,    38,
      39,    44,    46,     1,    78,    39,    48,    81,     1,    39,
      43,    43,    39,    47,   332,    30,   153,   154,   155,   242,
      43,    43,   245,     1,   209,   101,     1,    43,   213,   105,
       1,   107,    30,    31,   306,    46,   110,   111,   112,   113,
      18,    43,   116,   117,   362,    20,    39,    47,    23,    20,
      43,    43,    49,   378,    46,   129,    31,   131,    44,    34,
      13,    14,    45,    38,    39,    40,    41,    42,    47,    40,
      41,    42,    47,     1,    16,   151,    28,    29,    39,    30,
      31,   170,    44,   306,    13,    14,   223,   224,    43,   163,
      28,    29,    20,    43,    18,    23,    28,    29,    45,   175,
     174,    33,    30,    35,    36,    37,    34,   183,    28,    29,
      38,    39,    40,    41,    42,    35,    36,    37,    39,    47,
      46,   195,    44,    13,   198,    44,   200,   201,   202,   203,
     204,   205,    45,     0,     1,    44,     3,     4,     5,     6,
       7,    48,     9,    10,    11,    12,   283,   284,    15,    44,
      17,    18,    19,    20,    45,    43,    23,   231,   232,    46,
      43,   235,    46,   237,   238,    47,    18,    34,    47,    31,
      45,    38,    39,    40,    41,    42,    43,    45,   252,    39,
      47,     1,    48,     3,     4,     5,     6,     7,    44,     9,
      10,    11,    12,    44,    48,    15,    44,    17,    18,    19,
      20,    39,    44,    23,    45,    45,     1,    43,    47,    46,
     286,    45,    44,   287,    34,   289,   290,   354,    38,    39,
      40,    41,    42,    43,    44,    20,    48,    47,    23,    44,
      44,    44,   308,    45,    45,    30,    45,    44,    48,    34,
       1,   317,    45,    38,    39,    40,    41,    42,    39,    30,
      44,    95,    47,   327,   172,    45,   102,    -1,   332,    20,
     273,    -1,    23,   345,    -1,   341,    -1,   343,    -1,    30,
     346,    -1,    -1,    34,    -1,    -1,   352,    38,    39,    40,
      41,    42,    -1,    -1,    -1,    -1,    47,    -1,   362,   365,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   373,     0,     1,
      -1,     3,     4,     5,     6,     7,   382,     9,    10,    11,
      12,    -1,    -1,    15,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    -1,
      -1,    15,    -1,    17,    18,    19,    20,    -1,    -1,    23,
      -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    38,    39,    40,    41,    42,    43,
      -1,    21,    22,    47,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,     1,    39,
      24,    25,    -1,    -1,    28,    29,    -1,    47,    -1,    33,
       1,    35,    36,    37,    -1,    -1,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    20,
      -1,    34,    23,     1,    -1,    38,    39,    40,    41,    42,
      -1,    -1,    -1,    34,    47,     1,    -1,    38,    39,    40,
      41,    42,    20,    -1,    45,    23,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    34,    23,     1,    -1,
      38,    39,    40,    41,    42,    -1,    -1,    -1,    34,    47,
       1,    -1,    38,    39,    40,    41,    42,    20,    -1,    -1,
      23,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    34,    23,     1,    -1,    38,    39,    40,    41,    42,
      -1,    -1,    -1,    34,    47,     1,    -1,    38,    39,    40,
      41,    42,    20,    -1,    -1,    23,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    34,    23,     1,    -1,
      38,    39,    40,    41,    42,    -1,    -1,    -1,    34,    47,
       1,    -1,    38,    39,    40,    41,    42,    20,    -1,    -1,
      23,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    34,    23,     1,    -1,    38,    39,    40,    41,    42,
      -1,    -1,    -1,    34,    47,    -1,    -1,    38,    39,    40,
      41,    42,    20,    -1,    -1,    23,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      38,    39,    40,    41,    42,    -1,    -1,    21,    22,    47,
      24,    25,    -1,    -1,    28,    29,    -1,    -1,    -1,    33,
      -1,    35,    36,    37,    -1,    21,    22,    -1,    24,    25,
      26,    27,    28,    29,    48,    31,    32,    33,    -1,    35,
      36,    37,    -1,    21,    22,    -1,    24,    25,    44,    45,
      28,    29,    -1,    31,    -1,    33,    -1,    35,    36,    37,
      38,    39,    -1,    -1,    -1,    -1,    44,    45,    21,    22,
      -1,    24,    25,    26,    27,    28,    29,    -1,    -1,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      21,    22,    45,    24,    25,    26,    27,    28,    29,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    21,    22,    45,    24,    25,    26,    27,    28,
      29,    -1,    -1,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    21,    22,    45,    24,    25,    26,
      27,    28,    29,    -1,    -1,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    21,    22,    45,    24,
      25,    26,    27,    28,    29,    -1,    -1,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    21,    22,
      45,    24,    25,    26,    27,    28,    29,    -1,    -1,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      21,    22,    45,    24,    25,    26,    27,    28,    29,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    21,    22,    44,    24,    25,    26,    27,    28,    29,
      -1,    -1,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    21,    22,    43,    24,    25,    26,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    21,    22,
      -1,    24,    25,    26,    27,    28,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    21,    22,    -1,    24,    25,
      26,    27,    28,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    21,    22,    -1,    24,    25,    26,    27,    28,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    21,
      22,    -1,    24,    25,    26,    27,    28,    29,    -1,    -1,
      32,    33,    34,    35,    36,    37,    21,    22,    -1,    24,
      25,    -1,    -1,    28,    29,    -1,    31,    -1,    33,    -1,
      35,    36,    37,    21,    22,    -1,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      24,    25,    26,    27,    28,    29,    -1,    -1,    32,    33,
      34,    35,    36,    37,    26,    27,    28,    29,    -1,    -1,
      32,    33,    34,    35,    36,    37
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    51,     0,     1,     3,     4,     5,     6,     7,     9,
      10,    11,    12,    15,    17,    18,    19,    20,    23,    34,
      38,    39,    40,    41,    42,    43,    47,    52,    54,    55,
      61,    63,    64,    71,    76,    85,    90,    97,    98,    99,
     102,   105,   109,   111,   116,   121,   124,   125,   127,   129,
     135,   142,   143,   144,    21,    22,    24,    25,    28,    29,
      31,    33,    35,    36,    37,    38,    39,    44,    45,     1,
      39,    39,    62,     1,    39,    31,    53,    46,   100,     1,
      47,   106,     1,   127,     1,    38,    39,   135,     1,   135,
      30,     1,    30,    39,   130,   128,   135,    38,    39,    53,
      13,    14,    65,    66,   127,    46,   101,   103,    31,   135,
      21,    22,    24,    25,    26,    27,    28,    29,    31,    32,
      33,    34,    35,    36,    37,   135,   135,   135,   135,    30,
     135,    30,   135,   135,   135,   135,   135,    53,    53,    43,
       1,    39,    43,    92,    93,    95,    47,   135,    72,     1,
      46,   104,   135,    52,    49,   117,   135,   112,   115,     1,
      18,     1,    45,   126,    30,    31,    47,    51,    45,    57,
      39,    47,    56,    86,    67,    46,   127,    65,    70,     1,
      44,     1,   127,    16,   127,    31,     1,   135,     1,   135,
       1,   135,     1,   135,     1,    30,   135,     1,    30,   135,
     137,   136,   138,   139,   140,   141,   135,   135,    92,    43,
      30,    94,     1,    91,    44,    79,    83,    46,    73,    74,
       1,    43,   127,    52,    52,    52,   107,    18,    44,   114,
       1,    43,    47,   135,    39,   131,    44,     1,    30,    31,
      58,    53,    77,    81,    58,    48,    54,    87,    88,    89,
     135,   127,    13,    44,     1,   127,     1,   135,     1,   135,
     135,   135,   135,   135,   135,   135,    44,    92,     1,    20,
      40,    41,    42,    48,    44,    92,    87,    45,    43,    46,
      43,    75,    52,    52,   118,    46,   108,    47,    18,    47,
     113,   135,   135,    31,    31,     1,   133,   135,   135,     1,
     135,    87,    45,    87,    39,    45,    48,    68,   135,    44,
      44,    48,    96,    39,    93,    44,    45,    84,    66,    43,
      66,    66,    45,    52,    52,   127,   135,    47,   135,   135,
      44,   110,    48,   132,   134,    31,    31,    31,    59,    60,
      45,    82,    87,    46,   127,    48,    80,   127,    44,    66,
      44,    44,   122,    45,   119,    45,   135,    45,    45,    45,
     133,    45,    48,    44,    45,    78,   127,   127,    39,    95,
     127,    44,   127,   123,    52,    45,   133,   127,    69,   127,
      45,    66,   120,   127
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    51,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    53,    54,    54,    54,    54,    56,    55,    57,    55,
      55,    55,    55,    58,    58,    58,    58,    59,    58,    60,
      58,    58,    61,    62,    61,    63,    64,    64,    65,    65,
      67,    68,    69,    66,    70,    66,    66,    66,    66,    72,
      71,    73,    71,    74,    71,    75,    71,    71,    76,    77,
      78,    76,    79,    80,    76,    81,    82,    76,    83,    84,
      76,    86,    85,    87,    87,    87,    88,    89,    91,    90,
      90,    92,    92,    94,    93,    93,    96,    95,    95,    95,
      95,    95,    95,    97,    97,    97,    97,    98,    98,   100,
      99,   101,   102,   102,   102,   103,   102,   104,   102,   102,
     106,   107,   105,   108,   108,   110,   109,   109,   112,   111,
     113,   111,   114,   111,   115,   111,   111,   117,   118,   119,
     120,   116,   116,   122,   121,   123,   121,   124,   124,   125,
     125,   126,   125,   128,   127,   130,   131,   132,   129,   129,
     134,   133,   133,   133,   133,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   136,   135,   137,   135,   138,   135,
     139,   135,   140,   135,   141,   135,   135,   135,   135,   135,
     142,   142,   142,   142,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     1,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     0,     4,     0,     4,
       3,     3,     4,     3,     3,     3,     1,     0,     4,     0,
       4,     2,     1,     0,     3,     4,     3,     1,     3,     2,
       0,     0,     0,     8,     0,     5,     2,     1,     0,     0,
       7,     0,     8,     0,     7,     0,     7,     3,     2,     0,
       0,     8,     0,     0,     8,     0,     0,     7,     0,     0,
       7,     0,     5,     3,     1,     1,     2,     2,     0,     6,
       1,     1,     1,     0,     4,     1,     0,     6,     3,     4,
       3,     3,     3,     5,     4,     5,     6,     5,     3,     0,
       3,     2,     2,     4,     5,     0,     3,     0,     4,     4,
       0,     0,     6,     1,     0,     0,     7,     1,     0,     7,
       0,     7,     0,     7,     0,     8,     6,     0,     0,     0,
       0,    11,     1,     0,     8,     0,     9,     2,     2,     2,
       3,     0,     5,     0,     4,     0,     0,     0,     7,     3,
       0,     4,     3,     1,     0,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     1,     1,     3,     1,
       3,     3,     3,     3,     3,     3,     4,     4,     3,     3,
       3,     3,     2,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     3,     3,     3,     3,     4,     4,     4,
       4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 17: /* STATEMENT: BREAK SEMICOLON_MISS  */
#line 213 "./parser.y"
                                        {StAssJmp("JMP", "END", &SMLabel_End, 0, 0);}
#line 1759 "parser.tab.c"
    break;

  case 18: /* STATEMENT: error SEMICOLON  */
#line 214 "./parser.y"
                                        {printf("\n\n=====ERROR====\n ERRONOUS STATEMENT at line %d\n\n", yylineno);pErr(yylineno);}
#line 1765 "parser.tab.c"
    break;

  case 19: /* STATEMENT: error '}'  */
#line 215 "./parser.y"
                                        {printf("\n\n=====ERROR====\n ERRONOUS STATEMENT at line %d\n\n", yylineno);pErr(yylineno);}
#line 1771 "parser.tab.c"
    break;

  case 20: /* STATEMENT: error ')'  */
#line 216 "./parser.y"
                                        {printf("\n\n=====ERROR====\n ERRONOUS STATEMENT at line %d\n\n", yylineno);pErr(yylineno);}
#line 1777 "parser.tab.c"
    break;

  case 22: /* TYPE: INT  */
#line 224 "./parser.y"
                            { (yyval.str) = "int";   }
#line 1783 "parser.tab.c"
    break;

  case 23: /* TYPE: FLOAT  */
#line 225 "./parser.y"
                            { (yyval.str) = "float"; }
#line 1789 "parser.tab.c"
    break;

  case 24: /* TYPE: STRING  */
#line 226 "./parser.y"
                            { (yyval.str) = "string";}
#line 1795 "parser.tab.c"
    break;

  case 25: /* TYPE: BOOL  */
#line 227 "./parser.y"
                            { (yyval.str) = "bool";  }
#line 1801 "parser.tab.c"
    break;

  case 26: /* $@1: %empty  */
#line 231 "./parser.y"
                                    {st_insert((yyvsp[-1].str), (yyvsp[0].str),"var",0);   assign_index= st_index-1; strcpy(IdentifierHolder, (yyvsp[0].str));}
#line 1807 "parser.tab.c"
    break;

  case 27: /* DECLARATION_STT: TYPE IDENTIFIER $@1 DECLARATION_TAIL  */
#line 231 "./parser.y"
                                                                                                                                                         { assign_index =-1; printf("#[Parsed_Declaration]# "); }
#line 1813 "parser.tab.c"
    break;

  case 28: /* $@2: %empty  */
#line 232 "./parser.y"
                                    {st_insert((yyvsp[-1].str), (yyvsp[0].str),"const",0); assign_index= st_index-1; strcpy(IdentifierHolder, (yyvsp[0].str));}
#line 1819 "parser.tab.c"
    break;

  case 29: /* DECLARATION_STT: TYPE CONSTANT $@2 DECLARATION_TAIL  */
#line 232 "./parser.y"
                                                                                                                                                         {assign_index =-1; printf("#[Parsed_CONST_Declaration]# "); }
#line 1825 "parser.tab.c"
    break;

  case 30: /* DECLARATION_STT: error IDENTIFIER SEMICOLON_MISS  */
#line 233 "./parser.y"
                                                                                                 {printf("\n\n=====ERROR====\n MISSING variable type at line %d\n\n", yylineno);pErr(yylineno);}
#line 1831 "parser.tab.c"
    break;

  case 31: /* DECLARATION_STT: error CONSTANT SEMICOLON_MISS  */
#line 234 "./parser.y"
                                                                                                 {printf("\n\n=====ERROR====\n MISSING constant type at line %d\n\n", yylineno);pErr(yylineno);}
#line 1837 "parser.tab.c"
    break;

  case 32: /* DECLARATION_STT: TYPE IDENTIFIER IDENTIFIER SEMICOLON_MISS  */
#line 235 "./parser.y"
                                                                                                 {printf("\n\n=====ERROR====\n unexpected identifier %s at line %d\n\n",(yyvsp[-1].str), yylineno);pErr(yylineno);}
#line 1843 "parser.tab.c"
    break;

  case 33: /* DECLARATION_TAIL: EQ EXPRESSION SEMICOLON  */
#line 240 "./parser.y"
                                                                                            {StAssPush(strdup(IdentifierHolder)); StAssPrint("OVER", 1); StAssPrint("STORE", 1); StAssPrint("DROP", 1);}
#line 1849 "parser.tab.c"
    break;

  case 34: /* DECLARATION_TAIL: error EXPRESSION SEMICOLON  */
#line 241 "./parser.y"
                                                                                            {printf("\n\n=====ERROR====\n MISSING '=' at line %d\n\n", yylineno);pErr(yylineno);}
#line 1855 "parser.tab.c"
    break;

  case 35: /* DECLARATION_TAIL: EQ error SEMICOLON  */
#line 242 "./parser.y"
                                                                                            {printf("\n\n=====ERROR====\n unexpected '=' without second operand at line %d\n\n", yylineno);pErr(yylineno);}
#line 1861 "parser.tab.c"
    break;

  case 37: /* $@3: %empty  */
#line 244 "./parser.y"
                                                                                      {printf("\n\n=====ERROR====\n Missing semicolon ';' at line %d\n\n", yylineno); pErr(yylineno);}
#line 1867 "parser.tab.c"
    break;

  case 39: /* $@4: %empty  */
#line 245 "./parser.y"
                                                                                      {printf("\n\n=====ERROR====\n Missing semicolon ';' at line %d\n\n", yylineno); pErr(yylineno);}
#line 1873 "parser.tab.c"
    break;

  case 41: /* DECLARATION_TAIL: EQ EXPRESSION  */
#line 246 "./parser.y"
                                                                                               {printf("\n\n=====ERROR====\n Missing semicolon ';' at line %d\n\n", yylineno);pErr(yylineno);}
#line 1879 "parser.tab.c"
    break;

  case 42: /* RETURN_STT: RETURN  */
#line 251 "./parser.y"
                                        {int dum = 0;StAssPrint("POP\tPC",1);StAssJmp("JMP", "PC", &dum,0,1);}
#line 1885 "parser.tab.c"
    break;

  case 43: /* $@5: %empty  */
#line 252 "./parser.y"
                         {assign_index =func_index;}
#line 1891 "parser.tab.c"
    break;

  case 44: /* RETURN_STT: RETURN $@5 EXPRESSION  */
#line 252 "./parser.y"
                                                                          { return_exist = 1; StAssPrint("OVER",1);int dum = 0;StAssPrint("POP\tPC",1);StAssPrint("DNEXT", 1);StAssJmp("JMP", "PC", &dum,0,1);}
#line 1897 "parser.tab.c"
    break;

  case 45: /* helperSWITCH: SWITCH IDENTIFIER ':' '{'  */
#line 254 "./parser.y"
                                          {strcpy(switcher, (yyvsp[-2].str));}
#line 1903 "parser.tab.c"
    break;

  case 46: /* SWITCH_STT: helperSWITCH CASES '}'  */
#line 257 "./parser.y"
                                        {StAssPrintLBL(0,1);}
#line 1909 "parser.tab.c"
    break;

  case 48: /* DEFAULTCASE: DEFAULT ':' BLOCK  */
#line 262 "./parser.y"
                                  {StAssJmp("JMP", "END",&SMLabel_End, 0,0); }
#line 1915 "parser.tab.c"
    break;

  case 49: /* DEFAULTCASE: DEFAULT BLOCK  */
#line 263 "./parser.y"
                                {printf("\n\n=====ERROR====\n missing colon ':' at DEFAULT CASE of switch, error at line %d\n\n", yylineno); pErr(yylineno);}
#line 1921 "parser.tab.c"
    break;

  case 50: /* $@6: %empty  */
#line 266 "./parser.y"
                     {StAssPush(switcher);}
#line 1927 "parser.tab.c"
    break;

  case 51: /* $@7: %empty  */
#line 266 "./parser.y"
                                                       {StAssPrint("EQ", 1); StAssJmp("JNZ", "LBL",&SMLabel_Else, 0,0);}
#line 1933 "parser.tab.c"
    break;

  case 52: /* $@8: %empty  */
#line 266 "./parser.y"
                                                                                                                                   {StAssJmp("JMP", "END",&SMLabel_End, 0,0); StAssPrintLBL(1, 1);}
#line 1939 "parser.tab.c"
    break;

  case 54: /* $@9: %empty  */
#line 267 "./parser.y"
                              {printf("\n\n=====ERROR====\n DEFAULT CASE must be written at the end of the switch statement, error at line %d\n\n", yylineno); pErr(yylineno);}
#line 1945 "parser.tab.c"
    break;

  case 56: /* CASES: DEFAULTCASE DEFAULTCASE  */
#line 268 "./parser.y"
                                                                {printf("\n\n=====ERROR====\n only 1 DEFAULT CASE is allowed in the switch statement error, at line %d\n\n", yylineno); pErr(yylineno);}
#line 1951 "parser.tab.c"
    break;

  case 59: /* $@10: %empty  */
#line 280 "./parser.y"
                                                {printf("\n\n=====ERROR====\n MISSING identifier for switch statement at line %d\n\n", yylineno);pErr(yylineno);}
#line 1957 "parser.tab.c"
    break;

  case 61: /* $@11: %empty  */
#line 281 "./parser.y"
                                                {printf("\n\n=====ERROR====\n unexpected identifier '%s' at switch statement at line %d\n\n",yylval, yylineno); pErr(yylineno);}
#line 1963 "parser.tab.c"
    break;

  case 63: /* $@12: %empty  */
#line 282 "./parser.y"
                                                {printf("\n\n=====ERROR====\n MISSING colon ':' for switch statement (switchs must have a colon) at line %d\n\n", yylineno);pErr(yylineno);}
#line 1969 "parser.tab.c"
    break;

  case 65: /* $@13: %empty  */
#line 283 "./parser.y"
                                                {printf("\n\n=====ERROR====\n MISSING '{' for switch statement at line %d\n\n", yylineno);pErr(yylineno);}
#line 1975 "parser.tab.c"
    break;

  case 67: /* ERRONOUS_SWITCH_STT: helperSWITCH CASES error  */
#line 284 "./parser.y"
                                           {printf("\n\n=====ERROR====\n unclosed '}' for switch statement at line %d\n\n", yylineno);pErr(yylineno);}
#line 1981 "parser.tab.c"
    break;

  case 69: /* $@14: %empty  */
#line 297 "./parser.y"
                                      {char dum[10]; strcpy(dum,(yyvsp[-1].str));strcat(dum,":");StAssPrint(dum, 0);}
#line 1987 "parser.tab.c"
    break;

  case 70: /* $@15: %empty  */
#line 297 "./parser.y"
                                                                                                                    {func_index = st_insert((yyvsp[-5].str), (yyvsp[-4].str),"func",0); popArgs();}
#line 1993 "parser.tab.c"
    break;

  case 72: /* $@16: %empty  */
#line 298 "./parser.y"
                                      {char dum[10]; strcpy(dum,(yyvsp[-1].str));strcat(dum,":");StAssPrint(dum, 0);}
#line 1999 "parser.tab.c"
    break;

  case 73: /* $@17: %empty  */
#line 298 "./parser.y"
                                                                                                                    {func_index=st_insert("void", (yyvsp[-4].str),"func",0); popArgs();}
#line 2005 "parser.tab.c"
    break;

  case 75: /* $@18: %empty  */
#line 299 "./parser.y"
                                      {char dum[10]; strcpy(dum,(yyvsp[-1].str));strcat(dum,":");StAssPrint(dum, 0);}
#line 2011 "parser.tab.c"
    break;

  case 76: /* $@19: %empty  */
#line 299 "./parser.y"
                                                                                                                    {func_index=st_insert((yyvsp[-4].str), (yyvsp[-3].str),"func",0);}
#line 2017 "parser.tab.c"
    break;

  case 78: /* $@20: %empty  */
#line 300 "./parser.y"
                                      {char dum[10]; strcpy(dum,(yyvsp[-1].str));strcat(dum,":");StAssPrint(dum, 0);}
#line 2023 "parser.tab.c"
    break;

  case 79: /* $@21: %empty  */
#line 300 "./parser.y"
                                                                                                                    {func_index=st_insert("void", (yyvsp[-3].str),"func",0);}
#line 2029 "parser.tab.c"
    break;

  case 81: /* $@22: %empty  */
#line 305 "./parser.y"
                                                    {printf("\n\n=====ERROR====\n unhandled function parenthesis at line %d for function %s\n\n", yylineno, (yyvsp[0].str));pErr(yylineno);}
#line 2035 "parser.tab.c"
    break;

  case 82: /* ERRONOUS_FUNC_DECLARATION_STT: TYPE IDENTIFIER $@22 ARGS ')'  */
#line 305 "./parser.y"
                                                                                                                                                                                                                   {st_insert((yyvsp[-4].str), (yyvsp[-3].str),"func",0);}
#line 2041 "parser.tab.c"
    break;

  case 86: /* ERRONOUS_ARGS: ',' ARGS  */
#line 320 "./parser.y"
                                           {printf("\n\n=====ERROR====\n unexpected ',' in argument list of function declaration at line %d\n\n", yylineno);pErr(yylineno);}
#line 2047 "parser.tab.c"
    break;

  case 87: /* ARG_DECL: TYPE IDENTIFIER  */
#line 323 "./parser.y"
                                                            {st_insert((yyvsp[-1].str), (yyvsp[0].str),"var",1); char* buf=(yyvsp[0].str); argumentList[argPointer]=buf;argPointer++;}
#line 2053 "parser.tab.c"
    break;

  case 88: /* $@23: %empty  */
#line 330 "./parser.y"
                                      { is_enum =1;}
#line 2059 "parser.tab.c"
    break;

  case 89: /* ENUM_DECLARATION_STT: ENUM IDENTIFIER '{' $@23 ENUM_HELPER '}'  */
#line 330 "./parser.y"
                                                                              { st_insert("enum" , (yyvsp[-4].str), "var" , 0); is_enum=0; enumCNT=1;}
#line 2065 "parser.tab.c"
    break;

  case 93: /* $@24: %empty  */
#line 336 "./parser.y"
                              { StAssPush((yyvsp[0].str));char buf[10]; itoa(enumCNT++,buf,10); prepend(buf, "$"); StAssPush(buf);StAssPrint("STORE",1);enum_keys[enum_arg_count] = (yyvsp[0].str); enum_values[enum_arg_count] = enum_arg_count; enum_arg_count++;  st_insert("int" , (yyvsp[0].str), "enum_arg" , 0); assign_int(  enum_arg_count-1,st_index-1); }
#line 2071 "parser.tab.c"
    break;

  case 95: /* ENUM_ARGS: IDENTIFIER  */
#line 337 "./parser.y"
                              { StAssPush((yyvsp[0].str));char buf[10]; itoa(enumCNT++,buf,10); prepend(buf, "$"); StAssPush(buf);StAssPrint("STORE",1);enum_keys[enum_arg_count] = (yyvsp[0].str); enum_values[enum_arg_count] = enum_arg_count; enum_arg_count++; st_insert("int" , (yyvsp[0].str), "enum_arg" , 0); assign_int( enum_arg_count-1,st_index-1);  }
#line 2077 "parser.tab.c"
    break;

  case 96: /* $@25: %empty  */
#line 343 "./parser.y"
                                        { StAssPush((yyvsp[-2].str));char buf[10]; itoa((yyvsp[0].num),buf,10);prepend(buf, "$");StAssPush(buf);StAssPrint("STORE",1); enum_keys[enum_arg_count] = (yyvsp[-2].str); enum_values[enum_arg_count] = (yyvsp[0].num); enum_arg_count++ ; st_insert("int" , (yyvsp[-2].str), "enum_arg" , 0); assign_int(  (yyvsp[0].num),st_index-1); }
#line 2083 "parser.tab.c"
    break;

  case 98: /* ENUM_DEFINED_ARGS: IDENTIFIER EQ DIGIT  */
#line 344 "./parser.y"
                                        { StAssPush((yyvsp[-2].str));char buf[10]; itoa((yyvsp[0].num),buf,10);prepend(buf, "$");StAssPush(buf);StAssPrint("STORE",1); enum_keys[enum_arg_count] = (yyvsp[-2].str); enum_values[enum_arg_count] = (yyvsp[0].num); enum_arg_count++;  st_insert("int" , (yyvsp[-2].str), "enum_arg" , 0); assign_int(  (yyvsp[0].num),st_index-1); }
#line 2089 "parser.tab.c"
    break;

  case 99: /* ENUM_DEFINED_ARGS: IDENTIFIER EQ error ','  */
#line 345 "./parser.y"
                                                            {printf("\n\n=====ERROR====\n WRONG arguments in the ENUM statement at line %d\n\n", yylineno);pErr(yylineno);}
#line 2095 "parser.tab.c"
    break;

  case 100: /* ENUM_DEFINED_ARGS: IDENTIFIER EQ FLOAT_DIGIT  */
#line 346 "./parser.y"
                                                            {printf("\n\n=====ERROR====\n WRONG arguments in the ENUM statement at line %d\n\n", yylineno);pErr(yylineno);}
#line 2101 "parser.tab.c"
    break;

  case 101: /* ENUM_DEFINED_ARGS: IDENTIFIER EQ STRING_LITERAL  */
#line 347 "./parser.y"
                                                            {printf("\n\n=====ERROR====\n WRONG arguments in the ENUM statement at line %d\n\n", yylineno);pErr(yylineno);}
#line 2107 "parser.tab.c"
    break;

  case 102: /* ENUM_DEFINED_ARGS: IDENTIFIER EQ BOOL_LITERAL  */
#line 348 "./parser.y"
                                                            {printf("\n\n=====ERROR====\n WRONG arguments in the ENUM statement at line %d\n\n", yylineno);pErr(yylineno);}
#line 2113 "parser.tab.c"
    break;

  case 103: /* ERRONOUS_ENUM_DECLARATION_STT: ENUM error '{' ENUM_HELPER '}'  */
#line 352 "./parser.y"
                                                            {printf("\n\n=====ERROR====\n missing identifier for ENUM statement at line %d\n\n", yylineno);pErr(yylineno);}
#line 2119 "parser.tab.c"
    break;

  case 104: /* ERRONOUS_ENUM_DECLARATION_STT: ENUM IDENTIFIER ENUM_HELPER '}'  */
#line 353 "./parser.y"
                                                            {printf("\n\n=====ERROR====\n missing opening curly braces for ENUM statement at line %d\n\n", yylineno);pErr(yylineno);}
#line 2125 "parser.tab.c"
    break;

  case 105: /* ERRONOUS_ENUM_DECLARATION_STT: ENUM IDENTIFIER '{' error '}'  */
#line 355 "./parser.y"
                                                            {printf("\n\n=====ERROR====\n missing arguments in the ENUM statement at line %d\n\n", yylineno);pErr(yylineno);}
#line 2131 "parser.tab.c"
    break;

  case 106: /* ERRONOUS_ENUM_DECLARATION_STT: ENUM IDENTIFIER error '{' ENUM_HELPER '}'  */
#line 356 "./parser.y"
                                                            {printf("\n\n=====ERROR====\n UnExpected IDENTIFIER in the ENUM statement at line %d\n\n", yylineno);pErr(yylineno);}
#line 2137 "parser.tab.c"
    break;

  case 107: /* ENUM_CALL_STT: IDENTIFIER IDENTIFIER EQ IDENTIFIER SEMICOLON  */
#line 360 "./parser.y"
                                                               { StAssPush((yyvsp[-3].str));StAssPush((yyvsp[-1].str));StAssPrint("STORE",1); st_insert((yyvsp[-4].str) , (yyvsp[-3].str), "var_enum" , 0); assign_enum(st_index-1, (yyvsp[-4].str),(yyvsp[-1].str)); int i= lookup((yyvsp[-4].str), 0); symbolTable[i].isUsed=1; }
#line 2143 "parser.tab.c"
    break;

  case 108: /* ENUM_CALL_STT: IDENTIFIER IDENTIFIER SEMICOLON  */
#line 361 "./parser.y"
                                                   { st_insert((yyvsp[-2].str) , (yyvsp[-1].str), "var_enum" , 0); int i= lookup((yyvsp[-2].str),0); symbolTable[i].isUsed=1;}
#line 2149 "parser.tab.c"
    break;

  case 109: /* $@26: %empty  */
#line 365 "./parser.y"
                   {printIF();}
#line 2155 "parser.tab.c"
    break;

  case 110: /* IF_STT_HELPER: IF $@26 EXPRESSION  */
#line 365 "./parser.y"
                                           {StAssJmp("JNZ", "LBL",&SMLabel_Else, 0,0); warnAlwaysFalse();}
#line 2161 "parser.tab.c"
    break;

  case 111: /* IF_STT_HELPER1: ':' BLOCK  */
#line 368 "./parser.y"
                                                            {controlTerminator(0);  StAssJmp("JMP", "END",&SMLabel_End, 0,0); StAssPrintLBL(1, 1);}
#line 2167 "parser.tab.c"
    break;

  case 112: /* IF_STT: IF_STT_HELPER IF_STT_HELPER1  */
#line 372 "./parser.y"
                                                              {StAssJmp("JMP", "END",&SMLabel_End, 1,0); StAssPrintLBL(0, 1);}
#line 2173 "parser.tab.c"
    break;

  case 113: /* IF_STT: IF_STT_HELPER IF_STT_HELPER1 ELSE BLOCK  */
#line 373 "./parser.y"
                                                              {StAssJmp("JMP", "END",&SMLabel_End, 1,0); StAssPrintLBL(0, 1);}
#line 2179 "parser.tab.c"
    break;

  case 114: /* IF_STT: IF_STT_HELPER IF_STT_HELPER1 ELSE error '}'  */
#line 374 "./parser.y"
                                                              {printf("\n\n=====ERROR====\n Missing '{' for the ELSE statement at line %d\n\n", yylineno);pErr(yylineno);}
#line 2185 "parser.tab.c"
    break;

  case 115: /* $@27: %empty  */
#line 375 "./parser.y"
                                                              {printf("\n\n=====ERROR====\n Missing ':' for the IF statement at line %d\n\n", yylineno);pErr(yylineno);}
#line 2191 "parser.tab.c"
    break;

  case 117: /* $@28: %empty  */
#line 376 "./parser.y"
                                                              {printf("\n\n=====ERROR====\n Missing expression for the IF statement at line %d\n\n", yylineno);pErr(yylineno);}
#line 2197 "parser.tab.c"
    break;

  case 119: /* IF_STT: IF_STT_HELPER ':' error '}'  */
#line 377 "./parser.y"
                                                              {printf("\n\n=====ERROR====\n Missing '{' for the IF statement at line %d\n\n", yylineno);pErr(yylineno);}
#line 2203 "parser.tab.c"
    break;

  case 120: /* $@29: %empty  */
#line 388 "./parser.y"
                      {printWHILE(); StAssPrintLBL(1, 0);}
#line 2209 "parser.tab.c"
    break;

  case 121: /* $@30: %empty  */
#line 388 "./parser.y"
                                                                      {StAssJmp("JNZ", "END",&SMLabel_End, 0,0);warnAlwaysFalse();}
#line 2215 "parser.tab.c"
    break;

  case 122: /* WHILE_STT: WHILE $@29 EXPRESSION $@30 WHILEMISS_COLON BLOCK  */
#line 388 "./parser.y"
                                                                                                                                                          {StAssJmp("JMP", "LBL",&SMLabel_Else, 1,0); StAssPrintLBL(0, 1);}
#line 2221 "parser.tab.c"
    break;

  case 124: /* WHILEMISS_COLON: %empty  */
#line 396 "./parser.y"
                  {printf("\n\n=====ERROR====\n Missing ':' for the WHILE loop at line %d\n\n", yylineno);pErr(yylineno);}
#line 2227 "parser.tab.c"
    break;

  case 125: /* $@31: %empty  */
#line 401 "./parser.y"
                                              {warnAlwaysFalse();}
#line 2233 "parser.tab.c"
    break;

  case 128: /* $@32: %empty  */
#line 405 "./parser.y"
                                                    {printf("\n\n=====ERROR====\n Missing DO-Block for the DO-WHILE loop at line %d\n\n", yylineno);pErr(yylineno);}
#line 2239 "parser.tab.c"
    break;

  case 130: /* $@33: %empty  */
#line 406 "./parser.y"
                                                    {printf("\n\n=====ERROR====\n Missing opening parenthesis '(' for the DO-WHILE loop at line %d\n\n", yylineno);pErr(yylineno);}
#line 2245 "parser.tab.c"
    break;

  case 132: /* $@34: %empty  */
#line 407 "./parser.y"
                                                    {printf("\n\n=====ERROR====\n Missing WHILE DO-WHILE loop at line %d\n\n", yylineno);pErr(yylineno);}
#line 2251 "parser.tab.c"
    break;

  case 134: /* $@35: %empty  */
#line 408 "./parser.y"
                                                    {printf("\n\n=====ERROR====\n Missing opening curly braces '{' for the DO-Block for DO-WHILE loop at line %d\n\n", yylineno);pErr(yylineno);}
#line 2257 "parser.tab.c"
    break;

  case 136: /* ERRONOUS_DO_WHILE: DO BLOCK WHILE '{' EXPRESSION '}'  */
#line 409 "./parser.y"
                                                    {printf("\n\n=====ERROR====\n DO-WHILE loop accepts braces () not curly braces {} at line %d\n\n", yylineno);pErr(yylineno);}
#line 2263 "parser.tab.c"
    break;

  case 137: /* $@36: %empty  */
#line 416 "./parser.y"
                        {in_loop = 1;}
#line 2269 "parser.tab.c"
    break;

  case 138: /* $@37: %empty  */
#line 416 "./parser.y"
                                                 {StAssForHeader();}
#line 2275 "parser.tab.c"
    break;

  case 139: /* $@38: %empty  */
#line 416 "./parser.y"
                                                                               {StAssForMiddle(); warnAlwaysFalse();}
#line 2281 "parser.tab.c"
    break;

  case 140: /* $@39: %empty  */
#line 416 "./parser.y"
                                                                                                                                   {StAssPrintLBL(1,1); in_loop = 0;}
#line 2287 "parser.tab.c"
    break;

  case 141: /* FOR_STT: FOR '(' $@36 STATEMENT $@37 STATEMENT $@38 STATEMENT ')' $@39 BLOCK  */
#line 416 "./parser.y"
                                                                                                                                                                             {StAssJmp("JMP", "Label", &ForHeaderLabel,1,0); StAssPrintLBL(0,1);}
#line 2293 "parser.tab.c"
    break;

  case 143: /* $@40: %empty  */
#line 421 "./parser.y"
                                                                       {printf("\n\n=====ERROR====\n Missing opening braces '(' in the FOR loop at line %d\n\n", yylineno);pErr(yylineno);}
#line 2299 "parser.tab.c"
    break;

  case 145: /* $@41: %empty  */
#line 422 "./parser.y"
                                                                       {printf("\n\n=====ERROR====\n unexpected semicolon in the FOR loop at line %d\n\n", yylineno);pErr(yylineno);}
#line 2305 "parser.tab.c"
    break;

  case 147: /* helperAssignmentRule: IDENTIFIER EQ  */
#line 429 "./parser.y"
                                                                 {pushVStack((yyvsp[-1].str)); StAssPush((yyvsp[-1].str)); assign_index = lookup((yyvsp[-1].str),1);}
#line 2311 "parser.tab.c"
    break;

  case 148: /* helperAssignmentRule: CONSTANT EQ  */
#line 430 "./parser.y"
                                                                 {printf("\n\n=====ERROR====\n CONSTANTS must not be reassigned %d\n\n", yylineno);pErr(yylineno);}
#line 2317 "parser.tab.c"
    break;

  case 149: /* assignmentSTT: helperAssignmentRule SEMICOLON  */
#line 434 "./parser.y"
                                                                 {assign_index=-1; printf("\n\n=====ERROR====\n expected expression in assignment statement at line %d\n\n", yylineno);pErr(yylineno);}
#line 2323 "parser.tab.c"
    break;

  case 150: /* assignmentSTT: helperAssignmentRule EXPRESSION SEMICOLON  */
#line 435 "./parser.y"
                                                                 {assign_index =-1; StAssPrint("STORE", 1); CodeGenAss();printf("#[Parsed_Assignment]# ");}
#line 2329 "parser.tab.c"
    break;

  case 151: /* $@42: %empty  */
#line 436 "./parser.y"
                                                                 {pushVStack((yyvsp[-1].str)); assign_index = lookup((yyvsp[-1].str),1); StAssPush((yyvsp[-1].str));}
#line 2335 "parser.tab.c"
    break;

  case 152: /* assignmentSTT: IDENTIFIER error $@42 EXPRESSION SEMICOLON  */
#line 436 "./parser.y"
                                                                                                                                                        {printf("\n\n=====ERROR====\n expected '=' in assignment statement at line %d\n\n", yylineno);pErr(yylineno);}
#line 2341 "parser.tab.c"
    break;

  case 153: /* $@43: %empty  */
#line 441 "./parser.y"
                    {scope_start();}
#line 2347 "parser.tab.c"
    break;

  case 154: /* BLOCK: '{' $@43 PROGRAM '}'  */
#line 441 "./parser.y"
                                                                              {scope_end(); printf("#[Parsed_Block]# ");}
#line 2353 "parser.tab.c"
    break;

  case 155: /* $@44: %empty  */
#line 449 "./parser.y"
                           {called_func_index = lookup((yyvsp[0].str),0); check_type(called_func_index); StAssPush("PC");}
#line 2359 "parser.tab.c"
    break;

  case 156: /* $@45: %empty  */
#line 449 "./parser.y"
                                                                                                                   { is_param =1;}
#line 2365 "parser.tab.c"
    break;

  case 157: /* $@46: %empty  */
#line 449 "./parser.y"
                                                                                                                                              { is_param =0; arg_count_check(called_func_index); arg_count=0; int dum=0; StAssJmp("JMP", (yyvsp[-4].str),&dum, 0,0);}
#line 2371 "parser.tab.c"
    break;

  case 158: /* FUNC_CALL: IDENTIFIER $@44 '(' $@45 USED_ARGS $@46 ')'  */
#line 449 "./parser.y"
                                                                                                                                                                                                                                                               { printf("#[Parsed_Func_Call]# ");}
#line 2377 "parser.tab.c"
    break;

  case 159: /* FUNC_CALL: IDENTIFIER error ')'  */
#line 450 "./parser.y"
                                                        {printf("\n\n=====ERROR====\n unhandled function parenthesis at line %d\n\n", yylineno);pErr(yylineno);}
#line 2383 "parser.tab.c"
    break;

  case 160: /* $@47: %empty  */
#line 456 "./parser.y"
                           { arg_count++; }
#line 2389 "parser.tab.c"
    break;

  case 162: /* USED_ARGS: error ',' USED_ARGS  */
#line 457 "./parser.y"
                                                            {printf("\n\n=====ERROR====\n Missing first argument in function's argument list or erronous ',' at line %d\n\n", yylineno);pErr(yylineno);}
#line 2395 "parser.tab.c"
    break;

  case 163: /* USED_ARGS: EXPRESSION  */
#line 458 "./parser.y"
                             {arg_count++ ;}
#line 2401 "parser.tab.c"
    break;

  case 165: /* EXPRESSION: IDENTIFIER  */
#line 465 "./parser.y"
                                                { int i = lookup((yyvsp[0].str),0); check_type(i); pushVStack((yyvsp[0].str)); pushAStack((yyvsp[0].str)); StAssPush((yyvsp[0].str));}
#line 2407 "parser.tab.c"
    break;

  case 166: /* EXPRESSION: DIGIT  */
#line 466 "./parser.y"
                                                { assign_int((yyvsp[0].num), assign_index) ; char numtostring[40]; itoa((yyvsp[0].num), numtostring, 10); pushVStack(numtostring); pushAStack(numtostring); char dum[10]="$"; StAssPush(strcat(dum,numtostring));}
#line 2413 "parser.tab.c"
    break;

  case 167: /* EXPRESSION: FLOAT_DIGIT  */
#line 467 "./parser.y"
                                                { assign_float((yyvsp[0].float_val), assign_index); char floattostring[40]; gcvt((yyvsp[0].float_val), 6, floattostring);  char dum[10]="$"; StAssPush(strcat(dum,floattostring));}
#line 2419 "parser.tab.c"
    break;

  case 168: /* EXPRESSION: BOOL_LITERAL  */
#line 468 "./parser.y"
                                                { assign_bool((yyvsp[0].bool_val), assign_index); if((yyvsp[0].bool_val)==true){pushVStack("true");StAssPush("$true");}else{pushVStack("false");StAssPush("$false");} }
#line 2425 "parser.tab.c"
    break;

  case 169: /* EXPRESSION: STRING_LITERAL  */
#line 469 "./parser.y"
                                                { assign_str((yyvsp[0].str), assign_index); pushVStack((yyvsp[0].str));char buf[50]; strcpy(buf, "$");strcat(buf, (yyvsp[0].str)); StAssPush(buf);}
#line 2431 "parser.tab.c"
    break;

  case 170: /* EXPRESSION: CONSTANT  */
#line 470 "./parser.y"
                                                { int i = lookup((yyvsp[0].str),0); check_type(i); pushVStack((yyvsp[0].str)); pushAStack((yyvsp[0].str)); StAssPush((yyvsp[0].str));}
#line 2437 "parser.tab.c"
    break;

  case 171: /* EXPRESSION: SUB EXPRESSION  */
#line 471 "./parser.y"
                                                {StAssPrint("neg", 1);}
#line 2443 "parser.tab.c"
    break;

  case 172: /* EXPRESSION: EXPRESSION INC  */
#line 472 "./parser.y"
                                                { pushVStack("+"); pushVStack("1"); CodeGenOp("ADD"); StAssPrint("DUP",1); StAssPush("$1"); StAssPrint("ADD", 1); StAssPrint("STORE", 1);}
#line 2449 "parser.tab.c"
    break;

  case 173: /* EXPRESSION: EXPRESSION DEC  */
#line 473 "./parser.y"
                                                { pushVStack("-"); pushVStack("1"); CodeGenOp("SUB"); StAssPrint("DUP",1); StAssPush("$1"); StAssPrint("SUB", 1); StAssPrint("STORE", 1);}
#line 2455 "parser.tab.c"
    break;

  case 174: /* $@48: %empty  */
#line 474 "./parser.y"
                                                { pushVStack("+");}
#line 2461 "parser.tab.c"
    break;

  case 175: /* EXPRESSION: EXPRESSION PLUS $@48 EXPRESSION  */
#line 474 "./parser.y"
                                                                                 {CodeGenOp("ADD"); StAssPrint("ADD", 1);}
#line 2467 "parser.tab.c"
    break;

  case 176: /* $@49: %empty  */
#line 475 "./parser.y"
                                                { pushVStack("m");}
#line 2473 "parser.tab.c"
    break;

  case 177: /* EXPRESSION: EXPRESSION MODULO $@49 EXPRESSION  */
#line 475 "./parser.y"
                                                                                 {CodeGenOp("MOD"); StAssPrint("MOD", 1);}
#line 2479 "parser.tab.c"
    break;

  case 178: /* $@50: %empty  */
#line 476 "./parser.y"
                                                { pushVStack("-");}
#line 2485 "parser.tab.c"
    break;

  case 179: /* EXPRESSION: EXPRESSION SUB $@50 EXPRESSION  */
#line 476 "./parser.y"
                                                                                 {CodeGenOp("SUB"); StAssPrint("SUB", 1);}
#line 2491 "parser.tab.c"
    break;

  case 180: /* $@51: %empty  */
#line 478 "./parser.y"
                                                { pushVStack("*");}
#line 2497 "parser.tab.c"
    break;

  case 181: /* EXPRESSION: EXPRESSION MUL $@51 EXPRESSION  */
#line 478 "./parser.y"
                                                                                 {CodeGenOp("MUL"); StAssPrint("MUL", 1);}
#line 2503 "parser.tab.c"
    break;

  case 182: /* $@52: %empty  */
#line 479 "./parser.y"
                                                { pushVStack("/");}
#line 2509 "parser.tab.c"
    break;

  case 183: /* EXPRESSION: EXPRESSION DIV $@52 EXPRESSION  */
#line 479 "./parser.y"
                                                                                 {CodeGenOp("DIV"); StAssPrint("DIV", 1);}
#line 2515 "parser.tab.c"
    break;

  case 184: /* $@53: %empty  */
#line 482 "./parser.y"
                                                {pushVStack("^");}
#line 2521 "parser.tab.c"
    break;

  case 185: /* EXPRESSION: EXPRESSION POW $@53 EXPRESSION  */
#line 482 "./parser.y"
                                                                               {CodeGenOp("POW");}
#line 2527 "parser.tab.c"
    break;

  case 189: /* EXPRESSION: ERRONOUS_EXPRESSION  */
#line 486 "./parser.y"
                                                {printf("\n\n=====ERROR====\n Expression error at line %d\n\n", yylineno);pErr(yylineno);}
#line 2533 "parser.tab.c"
    break;

  case 194: /* COMPARISONSTT: EXPRESSION GT EXPRESSION  */
#line 506 "./parser.y"
                                                        {pushVStack(">"); CodeGenLogical(); StAssPrint("GT", 1); alwaysFalse(1);}
#line 2539 "parser.tab.c"
    break;

  case 195: /* COMPARISONSTT: EXPRESSION LT EXPRESSION  */
#line 507 "./parser.y"
                                                        {pushVStack("<"); CodeGenLogical(); StAssPrint("LT", 1); alwaysFalse(2);}
#line 2545 "parser.tab.c"
    break;

  case 196: /* COMPARISONSTT: EXPRESSION LT EQ EXPRESSION  */
#line 508 "./parser.y"
                                                        {pushVStack("<="); CodeGenLogical(); StAssPrint("LE", 1); alwaysFalse(3);}
#line 2551 "parser.tab.c"
    break;

  case 197: /* COMPARISONSTT: EXPRESSION GT EQ EXPRESSION  */
#line 509 "./parser.y"
                                                        {pushVStack(">="); CodeGenLogical(); StAssPrint("GE", 1); alwaysFalse(4);}
#line 2557 "parser.tab.c"
    break;

  case 198: /* COMPARISONSTT: EXPRESSION EQUALITY EXPRESSION  */
#line 510 "./parser.y"
                                                        {pushVStack("="); CodeGenLogical(); StAssPrint("EQ", 1); alwaysFalse(5);}
#line 2563 "parser.tab.c"
    break;

  case 199: /* COMPARISONSTT: EXPRESSION NEG_EQUALITY EXPRESSION  */
#line 511 "./parser.y"
                                                        {pushVStack("!="); CodeGenLogical(); StAssPrint("NE", 1); alwaysFalse(6);}
#line 2569 "parser.tab.c"
    break;

  case 200: /* COMPARISONSTT: EXPRESSION LOGIC_AND EXPRESSION  */
#line 512 "./parser.y"
                                                        {pushVStack("and"); CodeGenLogical(); StAssPrint("AND", 1);}
#line 2575 "parser.tab.c"
    break;

  case 201: /* COMPARISONSTT: EXPRESSION LOGIC_OR EXPRESSION  */
#line 513 "./parser.y"
                                                        {pushVStack("or"); CodeGenLogical(); StAssPrint("OR", 1);}
#line 2581 "parser.tab.c"
    break;

  case 202: /* COMPARISONSTT: LOGIC_NOT EXPRESSION  */
#line 514 "./parser.y"
                                                        {StAssPrint("neg", 1);}
#line 2587 "parser.tab.c"
    break;

  case 204: /* ERRONOUS_COMPARISONSTT: error GT EXPRESSION  */
#line 519 "./parser.y"
                                                                    {printf("\n\n=====ERROR====\n Missing left operand before '>' at line %d\n\n", yylineno);pErr(yylineno);}
#line 2593 "parser.tab.c"
    break;

  case 205: /* ERRONOUS_COMPARISONSTT: EXPRESSION GT error  */
#line 520 "./parser.y"
                                                                    {printf("\n\n=====ERROR====\n Missing right operand after '>' at line %d\n\n", yylineno);pErr(yylineno);}
#line 2599 "parser.tab.c"
    break;

  case 206: /* ERRONOUS_COMPARISONSTT: error LT EXPRESSION  */
#line 521 "./parser.y"
                                                                    {printf("\n\n=====ERROR====\n Missing left operand before '<' at line %d\n\n", yylineno);pErr(yylineno);}
#line 2605 "parser.tab.c"
    break;

  case 207: /* ERRONOUS_COMPARISONSTT: EXPRESSION LT error  */
#line 522 "./parser.y"
                                                                    {printf("\n\n=====ERROR====\n Missing right operand after '<' at line %d\n\n", yylineno);pErr(yylineno);}
#line 2611 "parser.tab.c"
    break;

  case 208: /* ERRONOUS_COMPARISONSTT: error EQUALITY EXPRESSION  */
#line 523 "./parser.y"
                                                                    {printf("\n\n=====ERROR====\n Missing left operand before '==' at line %d\n\n", yylineno);pErr(yylineno);}
#line 2617 "parser.tab.c"
    break;

  case 209: /* ERRONOUS_COMPARISONSTT: EXPRESSION EQUALITY error  */
#line 524 "./parser.y"
                                                                    {printf("\n\n=====ERROR====\n Missing right operand after '==' at line %d\n\n", yylineno);pErr(yylineno);}
#line 2623 "parser.tab.c"
    break;

  case 210: /* ERRONOUS_COMPARISONSTT: error NEG_EQUALITY EXPRESSION  */
#line 525 "./parser.y"
                                                                    {printf("\n\n=====ERROR====\n Missing left operand before '!=' at line %d\n\n", yylineno);pErr(yylineno);}
#line 2629 "parser.tab.c"
    break;

  case 211: /* ERRONOUS_COMPARISONSTT: EXPRESSION NEG_EQUALITY error  */
#line 526 "./parser.y"
                                                                    {printf("\n\n=====ERROR====\n Missing right operand after '!=' at line %d\n\n", yylineno);pErr(yylineno);}
#line 2635 "parser.tab.c"
    break;

  case 212: /* ERRONOUS_COMPARISONSTT: LOGIC_NOT error  */
#line 527 "./parser.y"
                                                                    {printf("\n\n=====ERROR====\n Missing right operand after the negating operator '!' at line %d\n\n", yylineno);pErr(yylineno);}
#line 2641 "parser.tab.c"
    break;

  case 213: /* ERRONOUS_COMPARISONSTT: error LOGIC_AND EXPRESSION  */
#line 528 "./parser.y"
                                                                    {printf("\n\n=====ERROR====\n Missing left operand before 'and' operator at line %d\n\n", yylineno);pErr(yylineno);}
#line 2647 "parser.tab.c"
    break;

  case 214: /* ERRONOUS_COMPARISONSTT: EXPRESSION LOGIC_AND error  */
#line 529 "./parser.y"
                                                                    {printf("\n\n=====ERROR====\n Missing right operand after 'and' operator at line %d\n\n", yylineno);pErr(yylineno);}
#line 2653 "parser.tab.c"
    break;

  case 215: /* ERRONOUS_COMPARISONSTT: error LOGIC_OR EXPRESSION  */
#line 530 "./parser.y"
                                                                    {printf("\n\n=====ERROR====\n Missing left operand before 'or' operator at line %d\n\n", yylineno);pErr(yylineno);}
#line 2659 "parser.tab.c"
    break;

  case 216: /* ERRONOUS_COMPARISONSTT: EXPRESSION LOGIC_OR error  */
#line 531 "./parser.y"
                                                                    {printf("\n\n=====ERROR====\n Missing right operand after 'or' operator at line %d\n\n", yylineno);pErr(yylineno);}
#line 2665 "parser.tab.c"
    break;

  case 217: /* ERRONOUS_COMPARISONSTT: error LT EQ EXPRESSION  */
#line 532 "./parser.y"
                                                                    {printf("\n\n=====ERROR====\n Missing left operand before '<=' operator at line %d\n\n", yylineno);pErr(yylineno);}
#line 2671 "parser.tab.c"
    break;

  case 218: /* ERRONOUS_COMPARISONSTT: EXPRESSION LT EQ error  */
#line 533 "./parser.y"
                                                                    {printf("\n\n=====ERROR====\n Missing right operand after '<=' operator at line %d\n\n", yylineno);pErr(yylineno);}
#line 2677 "parser.tab.c"
    break;

  case 219: /* ERRONOUS_COMPARISONSTT: error GT EQ EXPRESSION  */
#line 534 "./parser.y"
                                                                    {printf("\n\n=====ERROR====\n Missing left operand before '>=' operator at line %d\n\n", yylineno);pErr(yylineno);}
#line 2683 "parser.tab.c"
    break;

  case 220: /* ERRONOUS_COMPARISONSTT: EXPRESSION GT EQ error  */
#line 535 "./parser.y"
                                                                    {printf("\n\n=====ERROR====\n Missing right operand after '>=' operator at line %d\n\n", yylineno);pErr(yylineno);}
#line 2689 "parser.tab.c"
    break;


#line 2693 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 554 "./parser.y"




//------------------------------------------ FUNCTIONS ---------------------------------------------
void yyerror(char *s) { 
 fprintf(stderr, "line %d: %s\n", yylineno, s); 
} 
int yywrap()
{
    return 1;
}
//--------------------------------------------------- SYMBOL TABLE---------------------------------------------
int is_exist(char* name){
    for (int i = 0; i < st_index; i++){
        if (strcmp(symbolTable[i].name, name) == 0 && symbolTable[i].scope == block_number && symbolTable[i].outOfScope == 0){
            return symbolTable[i].declareLine;
        }
    }
    return -1;
}
int lookup(char* name, int is_assignment) {
    // 
    // This method returns -1 if the symbol does not exist in the symbol table. 
    // If the symbol exists, it returns its index in the table.
    // loop on the table from down to up to take the variable from the closest scope as closet one will
    // be with higher index in the table

     if ( is_enum == 1) { return -1;} 
     if ( symbolTable[assign_index].type == "var_enum")
     {  
        assign_enum (assign_index, symbolTable[assign_index].dataType, name);
        return -1;
    }     
    for (int i = st_index-1 ; i >= 0; i--){
        if (strcmp(symbolTable[i].name, name) == 0 && symbolTable[i].outOfScope == 0 ){
           
            if (symbolTable[i].isInit == 0 && strcmp(symbolTable[i].type, "var") == 0 && symbolTable[i].isArg == 0 ) 
            {   
            // if ( i != assign_index)// 3shan lw kan el var 3la el LHS s3tha 3ady ex: int x=9; int z; z =x;
            if (is_assignment == 0)
            {
                printf("\n !!!!!!!!!!!! Error at line %d: %s used before initialized !!!!!!!!!!!\n", number_of_line, name); sErr(number_of_line);
            }
            }
             if (is_assignment == 0) {symbolTable[i].isUsed=1;}
            return i;
        }
    }
    printf("\n !!!!!!!!!!!! Error at line %d: %s undeclared identifier in this scope !!!!!!!!!!!\n", number_of_line, name);
    //  assign_index=-1;//TODO
    sErr(number_of_line);
    return -1;
}
//-------------------------------------- INSERT IN SYMBOL TABLE  ----------------------------------I
int st_insert(char* data_type, char* name, char* type ,int is_arg ) {

    //------ create new entry
    struct Entry newEntry ;
    //----- check if name is already in symbol table
    int L=is_exist(name) ;
    if (L != -1){
        printf("\n !!!!!!!!!!!! Error at line %d: %s is already declared in this scope at line %d !!!!!!!!!!!\n",number_of_line, name, L); 
        sErr(number_of_line);
        is_changed=0;
        return -1;
        }
    //------ set new entry values
    newEntry.name = name;
    newEntry.dataType = data_type;
    newEntry.declareLine = number_of_line;
    newEntry.type = type;
    newEntry.id = st_index;
    newEntry.isArg = is_arg;
    newEntry.outOfScope = 0;
    newEntry.isInit = 0;// assume all uninitialized untill assign
    newEntry.isUsed = 0; // assume all unused untill used
    //----- set scope (if it's an argument, scope is the next scope)
    if (is_arg == 1 || in_loop == 1){ newEntry.scope = block_number+1;}
    else {newEntry.scope = scope_stack[scope_index];}
    //------ if it's a function, set argCount and argList
    if ( strcmp(type, "func") == 0){
        int j =0;        
        for(int i=0; i<st_index; i++) {
            if ( symbolTable[i].isArg  && symbolTable[i].scope == (block_number +1)){
                newEntry.argList[j] = symbolTable[i].id;
                j++;
            }
            }
            newEntry.argCount = j;
    }
    //------ insert new entry to symbol table
    symbolTable[st_index] = newEntry;
      // 
    if (strcmp( data_type, "enum") == 0 )
    {
        symbolTable[st_index].isInit=1;
        // // create enum entry 
        struct enumEntry newEnumEntry ;
        // initialize enum keys and values
         for (int i = 0; i < 100; i++)
        {
            newEnumEntry.keys[i]  = "";
            newEnumEntry.values[i]  = 0;
        }
        // fill enum keys and values
        for (int i = 0; i < enum_arg_count; i++)
        {
            newEnumEntry.keys[i] = enum_keys[i];
            newEnumEntry.values[i] = enum_values[i];
        }
        symbolTable[st_index].enumValue = newEnumEntry;
        enum_arg_count=0;
        // clear enum keys and values
        for (int i = 0; i < 100; i++)
        {
            enum_keys[i] = "";
            enum_values[i] = 0;
        }
    }
    st_index++; // increment symbol table index
    st_log(); // log symbol table
    return st_index-1;
}
//----------------------------------------------- PRINT SYMBOL TABLE ----------------------------------------------------
void st_log() {
    //----- write symbol table to file
    FILE *log_fp= fopen("symbol_table_logs.log", "a");
    //----- check if file is opened
    if(log_fp == NULL) {
        printf("can't open symbol_table_logs.log file!\n");
        exit(1);
    }
    //----- write symbol table header
    fprintf(log_fp, "ID, Line, Scope, Name, Type, DataType, isInit, Value, Args\n");
    //----- write symbol table entries
    for(int i=0; i< st_index; i++) {
        struct Entry *entry = &symbolTable[i];
        fprintf(log_fp, "%d, %d, %d, %s, %s, %s, %d, ", entry->id, entry->declareLine, entry->scope, entry->name,entry->type, entry->dataType,entry->isInit);
        //---- store value of entry
        if (entry->isInit == 1) {
        if (strcmp(entry->dataType,"int")==0 || strcmp(entry->type,"var_enum")==0) {fprintf(log_fp, "%d, ", entry->intValue);}
        else if (strcmp(entry->dataType,"float")==0) {fprintf(log_fp, "%f, ", entry->floatValue);}
        else if (strcmp(entry->dataType,"bool")==0) {fprintf(log_fp,"%s, ", entry->boolValue ? "true" : "false");}
        else if (strcmp(entry->dataType,"string")==0) {fprintf(log_fp, "%s, ", entry->strValue);}
        }
        else {fprintf(log_fp, "-, ");}
        //---- print arguments of functions
        if (strcmp(entry->type, "func") == 0)
        {
            for (int j = 0; j < entry->argCount; j++)
            {
            fprintf(log_fp, "%d,", entry->argList[j]);
            }
        }
        else {fprintf(log_fp, "-");}
       
        fprintf(log_fp, "\n");

    }
    fprintf(log_fp, "=============\n");
    fclose(log_fp);
}
void clear_logs()
{
   FILE *fp= fopen("symbol_table_logs.log", "w");
   fclose(fp);
}
void st_print() {
    //----- write symbol table to file
    FILE *fp = fopen("symbol_table.txt", "w");
    //----- check if file is opened
    if(fp == NULL) {
        printf("can't open symbol_table.txt file!\n");
        exit(1);
    }
    //----- write symbol table header
    fprintf(fp, "ID\t|Name\t|Type\t|DataType\t|Line\t|Scope\tisInit\t|Value\t\t|Args\n");
    fprintf(fp, "-------------------------------------------------------------------------------------------\n");
    //----- write symbol table entries
    for(int i=0; i< st_index; i++) {
        struct Entry *entry = &symbolTable[i];
        fprintf(fp, "%d\t|%s\t|%s\t|%s\t\t|%d\t|%d\t|%d\t|", entry->id, entry->name,entry->type, entry->dataType, entry->declareLine, entry->scope,entry->isInit);
        //---- store value of entry
        if (entry->isInit == 1) {
        if (strcmp(entry->dataType,"int")==0 || strcmp(entry->type,"var_enum")==0) {fprintf(fp, "%d\t\t|", entry->intValue);}
        else if (strcmp(entry->dataType,"float")==0) {fp, fprintf(fp, "%f\t\t|", entry->floatValue);}
        else if (strcmp(entry->dataType,"bool")==0) {fprintf(fp,"%s\t\t|", entry->boolValue ? "true" : "false");}
        else if (strcmp(entry->dataType,"string")==0) {fprintf(fp, "%s\t\t|", entry->strValue);}
        }
        else {fprintf(fp, "-\t\t|");}
        //---- print arguments of functions
        if (strcmp(entry->type, "func") == 0)
        {
            for (int j = 0; j < entry->argCount; j++)
            {
            fprintf(fp, "%d,", entry->argList[j]);
            }
        }
        else {fprintf(fp, "-");}
       
        fprintf(fp, "\n");
    }
    fclose(fp);
}
//---------------------------------- HANDLE TYPE MISMATCH ERRORS ------------------------------------------------------------------

// for declaration statments take the st_index -1 3shan lesa m3molo insert but for assignment 3ady take assign_index coming from lookup function
void assign_int (int d , int i) {
    assign_arg_indexes();
    if (is_param) {i = assign_index;}
    if (i == -1) {return;}
    if ( symbolTable[i].dataType == "string" && symbolTable[i].type == "func" )
    {printf("\n !!!!!!!!!!!! Type Mismatch Error at line %d: Function %s return type is %s but assigned int !!!!!!!!!!!\n", number_of_line, symbolTable[i].name, symbolTable[i].dataType );
    sErr(number_of_line);
     return; 
     }
    symbolTable[i].isInit= 1 ;
    if (symbolTable[i].dataType != "string" && symbolTable[i].outOfScope == 0 && is_param == 0 ) {
        if ( symbolTable[i].dataType == "float")
        {
            symbolTable[i].floatValue= (float)d ;
        }
        else if ( symbolTable[i].dataType == "bool")
        {
            symbolTable[i].boolValue= (bool)d ;
        }
        else if ( symbolTable[i].dataType == "int") {  symbolTable[i].intValue= d ;}
    }
    else { printf("\n !!!!!!!!!!!! Type Mismatch Error at line %d: %s %s variable assigned int value!!!!!!!!!!!\n", number_of_line, symbolTable[i].name, symbolTable[i].dataType );
    sErr(number_of_line);}
    if(is_changed == 1) {st_log();} // 
    if(is_param == 0){ assign_index = -1;}
}
void assign_float( float f, int i) {
    assign_arg_indexes();
    if (is_param) {i = assign_index;}
    if (i == -1) {return;}
     if ( symbolTable[i].dataType == "string" && symbolTable[i].type == "func" )
    {printf("\n !!!!!!!!!!!! Type Mismatch Error at line %d: Function %s return type is %s but assigned float !!!!!!!!!!!\n", number_of_line, symbolTable[i].name, symbolTable[i].dataType );
    sErr(number_of_line);
    return ;}
    symbolTable[i].isInit= 1 ;
    if (symbolTable[i].dataType != "string" && symbolTable[i].outOfScope == 0 ) {
    if (symbolTable[i].dataType == "float"){symbolTable[i].floatValue= f ;}
    else if (symbolTable[i].dataType == "int"){symbolTable[i].intValue= (int)f ;}
    else if (symbolTable[i].dataType == "bool"){symbolTable[i].boolValue= (bool)f ;}
    }
    else { printf("\n !!!!!!!!!!!! Type Mismatch Error at line %d: %s %s variable assigned float value !!!!!!!!!!!\n", number_of_line, symbolTable[i].name,symbolTable[i].dataType ); sErr(number_of_line);}
   if(is_changed == 1) {st_log();}
   if(is_param == 0){ assign_index = -1;}
}
void assign_bool( bool b , int i) {
    assign_arg_indexes();
    if (is_param) {i = assign_index;}
    if (i == -1) {return;}
    if ( symbolTable[i].dataType == "string" && symbolTable[i].type == "func" )
    {printf("\n !!!!!!!!!!!! Type Mismatch Error at line %d: Function %s return type is %s but assigned boolean !!!!!!!!!!!\n", number_of_line, symbolTable[i].name, symbolTable[i].dataType );
      sErr(number_of_line);
     return ;} 
    symbolTable[i].isInit= 1 ;
    if (symbolTable[i].dataType != "string" && symbolTable[i].outOfScope == 0 ) {
    if (symbolTable[i].dataType == "bool"){symbolTable[i].boolValue= b ;}
    else if (symbolTable[i].dataType == "int"){symbolTable[i].intValue= (int)b ;}
    else if (symbolTable[i].dataType == "float"){symbolTable[i].floatValue= (float)b ;}
    }
    else { printf("\n !!!!!!!!!!!! Type Mismatch Error at line %d: %s %s variable assigned bool value !!!!!!!!!!!\n", number_of_line, symbolTable[i].name,symbolTable[i].dataType );}
    if(is_changed == 1) {st_log();}
     if(is_param == 0){ assign_index = -1;}
}
void assign_str( char* s , int i) {
    assign_arg_indexes();
    if (is_param) {i = assign_index;}
    if (i == -1) {return;}
    if ( symbolTable[i].dataType != "string" && symbolTable[i].type == "func" )
    {printf("\n !!!!!!!!!!!! Type Mismatch Error at line %d: Function %s return type is %s but assigned string !!!!!!!!!!!\n", number_of_line, symbolTable[i].name, symbolTable[i].dataType );
     sErr(number_of_line);
     return ;} 
    symbolTable[i].isInit= 1 ;
    if (symbolTable[i].dataType == "string"){symbolTable[i].strValue= s ;}
    else { printf("\n !!!!!!!!!!!! Type Mismatch Error at line %d: %s %s variable assigned string value !!!!!!!!!!!\n", number_of_line, symbolTable[i].name,symbolTable[i].dataType );
    sErr(number_of_line);}
    if(is_changed == 1) {st_log();}
    if(is_param == 0){ assign_index = -1;}
}
void assign_enum (int i, char* enum_name, char* key) {
    //TODO ARGUMENTS OF TYPE ENUM ERROR CHECK
    if (i == -1) {return;}
    if (symbolTable[i].type == "var_enum") {
        for (int k=0; k < st_index; k++) { // loop on symbol table to find the enum declaration
            if (strcmp(symbolTable[k].name, enum_name) == 0) { // if found the enum declaration
                for (int j = 0; j < 100; j++) { // loop on enum keys to find the enum value
                    if (strcmp(symbolTable[k].enumValue.keys[j], key) == 0) {
                        symbolTable[i].intValue = symbolTable[k].enumValue.values[j];
                        symbolTable[i].isInit= 1 ; // set isInit to 1
                        st_log();
                        assign_index = -1;
                        return;
                    }
                }
                printf("\n !!!!!!!!!!!! Error at line %d: %s not exist as key for %s enum  !!!!!!!!!!!\n", number_of_line, key ,enum_name );
                sErr(number_of_line);
                assign_index = -1;
                return;
            }
        }
    }
    else { printf("\n !!!!!!!!!!!! Type Mismatch Error at line %d: %s %s variable assigned enum value !!!!!!!!!!!\n", number_of_line, symbolTable[i].name,symbolTable[i].dataType );
    sErr(number_of_line);}
    assign_index = -1;
}

void assign_arg_indexes()
{
    if ( is_param == 1) //to check argument type 
    { 
        if ( arg_count <=symbolTable[called_func_index].argCount )
        {assign_index = symbolTable[called_func_index].argList[arg_count];}
        else {assign_index=-1;}
    }
}
void check_type( int i) {
    // this functio check type matching between 2 identifiers before assign the value
    if ( is_param == 1) //to check argument type 
    { 
        if ( arg_count <symbolTable[called_func_index].argCount )
        {assign_index = symbolTable[called_func_index].argList[arg_count];}
        else {assign_index=-1;}
    }
     if ( i == -1 || assign_index == -1) 
    { return;}
    if (symbolTable[i].dataType != symbolTable[assign_index].dataType && (symbolTable[assign_index].dataType == "string" ||  symbolTable[i].dataType == "string"))
    {   /// at calling a function
        if (strcmp(symbolTable[i].type,"func")== 0){ printf("\n !!!!!!!!!!!! Type Mismatch Error at line %d: %s is %s variable  but %s return %s value  !!!!!!!!!!!\n", number_of_line,symbolTable[assign_index].name,symbolTable[assign_index].dataType, symbolTable[i].name,symbolTable[i].dataType ); sErr(number_of_line);}
        else if (strcmp(symbolTable[assign_index].type,"func")== 0){ printf("\n !!!!!!!!!!!! Type Mismatch Error at line %d: %s is %s variable  but %s return %s value  !!!!!!!!!!!\n", number_of_line,symbolTable[i].name,symbolTable[i].dataType, symbolTable[assign_index].name,symbolTable[assign_index].dataType ); sErr(number_of_line);}
        else if (is_param == 1)
        {printf("\n !!!!!!!!!!!! Type Mismatch Error at line %d: Incorrect argument type %s is %s variable but %s %s !!!!!!!!!!!\n", number_of_line,symbolTable[assign_index].name,symbolTable[assign_index].dataType, symbolTable[i].name,symbolTable[i].dataType ); sErr(number_of_line);}
        else {printf("\n !!!!!!!!!!!! Type Mismatch Error at line %d: %s is %s variable  but %s %s !!!!!!!!!!!\n", number_of_line,symbolTable[assign_index].name,symbolTable[assign_index].dataType, symbolTable[i].name,symbolTable[i].dataType );sErr(number_of_line);}
    }
    else if (strcmp(symbolTable[assign_index].type,"func") != 0)
    {
        symbolTable[assign_index].isInit=1;
        // assign value to the variable
        if ( strcmp(symbolTable[i].dataType,"int") ==0 || strcmp(symbolTable[i].type,"var_enum") ==0  ) {
            assign_int(symbolTable[i].intValue, assign_index);
            }
        else if (symbolTable[i].dataType == "float"){
            assign_float(symbolTable[i].floatValue, assign_index);
            }
        else if ( strcmp(symbolTable[i].dataType, "string")==0){
            assign_str(symbolTable[i].strValue, assign_index);
            }
        else if (symbolTable[i].dataType == "bool"){
            assign_bool(symbolTable[i].boolValue, assign_index);
            }
        st_log();
    }
    if(is_param == 0){ assign_index = -1;}
}
//--------------------------------------------------- HANDLE SCOPE ---------------------------------------------------

void scope_start(){
    //----- increment block number and scope index
    block_number++;
    scope_index++;
    scope_stack[scope_index] = block_number;
}
void scope_end(){
    if (func_index != -1 && strcmp(symbolTable[func_index].type, "func") == 0 && return_exist == 0 && strcmp(symbolTable[func_index].dataType, "void") != 0)
    {printf("\n !!!!!!!!!!!! Error at line %d: Missing return statement in Function %s !!!!!!!!!!!\n", number_of_line, symbolTable[func_index].name); sErr(number_of_line);}
     if (func_index != -1 && strcmp(symbolTable[func_index].type, "func") == 0 && return_exist == 1 && strcmp(symbolTable[func_index].dataType, "void") == 0)
    {printf("\n !!!!!!!!!!!! Error at line %d: %s Void Function can't have return statement !!!!!!!!!!!\n", number_of_line, symbolTable[func_index].name); sErr(number_of_line);}
    assign_index=-1;
    func_index =-1;
    return_exist=0;
    //----- make all symbols in this scope out of scope
    for (int i = 0; i < st_index; i++){
        if (symbolTable[i].scope == scope_stack[scope_index]){
            symbolTable[i].outOfScope = 1;
        }
    }
    scope_index--; // decrement scope index   
}
void unused_print() {
    for(int i=0; i< st_index; i++) {
        if ( symbolTable[i].isUsed == 0 && strcmp( symbolTable[i].type, "enum_arg") != 0) {
        if (strcmp(symbolTable[i].type,"func") == 0){printf("\n !!!!!!!!!!!! Function %s Declared at line %d but never called !!!!!!!!!!!\n",symbolTable[i].name, symbolTable[i].declareLine); sErr(symbolTable[i].declareLine);}
        else if ( symbolTable[i].isArg == 1){printf("\n !!!!!!!!!!!! Unused Argument %s Declared in Function at line %d !!!!!!!!!!!\n",symbolTable[i].name, symbolTable[i].declareLine); sErr(symbolTable[i].declareLine);}
        else {printf("\n !!!!!!!!!!!! Unused Identifier %s Declared at line %d !!!!!!!!!!!\n",symbolTable[i].name, symbolTable[i].declareLine); sErr(symbolTable[i].declareLine);}
        }
    }
}
void arg_count_check( int i) {
    if ( arg_count > symbolTable[i].argCount )
    {printf("\n !!!!!!!!!!!! Error at line %d : too many arguments for function call expected %d got %d !!!!!!!!!!!\n", number_of_line, symbolTable[i].argCount, arg_count); sErr(number_of_line);}
    else if ( arg_count < symbolTable[i].argCount )
    {printf("\n !!!!!!!!!!!! Error at line %d : too few arguments for function call expected %d got %d !!!!!!!!!!!\n", number_of_line, symbolTable[i].argCount, arg_count); sErr(number_of_line); }
}


/*
                                                                                |\/\  ,.
                                                                                /   `' |,-,
                                                                            /         /_
                                                                            _/            /
                                                                            (.-,--.       /
                                                                            /o/  o \     /
                                                                            \_\    /   _/
                                                                            (__`--'    _)
                                                                            /         |
                                                                            (_____,'    \  BART :)
                                                                            \_       _\
                                                                                `._..-'
*/
// ____________________________________________________________________________ CODE GEN _______________________________________________________________________

void pushVStack(char* var)
{   
    VirtualSP++;
    VirtualStack[VirtualSP] = strdup(var);
    /*printf("\nPUSHED %s\n", var);
    for (int i = VirtualSP ; i >=0; i--)
    {
        printf("\nDEBUG: %s", VirtualStack[i]);
    }*/
};

char* popVStack ()
{
    char* returner =  VirtualStack[VirtualSP];
    VirtualSP--;
    //printf("\nPOPED %s\n", returner);
    return returner;
};


void pushAStack(char* var)
{   
    AStack++;
    VirtualStack[AStack] = strdup(var);
    /*printf("\nPUSHED %s\n", var);
    for (int i = VirtualSP ; i >=0; i--)
    {
        printf("\nDEBUG: %s", VirtualStack[i]);
    }*/
};

char* popAStack ()
{
    char* returner =  VirtualStack[AStack];
    AStack--;
    //printf("\nPOPED %s\n", returner);
    return returner;
};

char* newTemp()
{
    char* tempVar;
    strcpy(tempVar, "t");
    char numtostring[10];
    itoa(tempNumber, numtostring, 10);
    strcat(tempVar, numtostring);
    tempNumber++;
    return tempVar;
};



void StAssPush(char* s)
{
//////////////////////////////////////////////////////////// STACK ASSEMBLY///////////////////////////////////////////////
    FILE *assfile = fopen("stackassembly.txt", "a");
    if(assfile == NULL) {
        printf("can't open stackassembly.txt file!\n");
        exit(1);
    }
    fprintf(assfile, "\tPUSH \t %s\n", s);
    fclose (assfile);
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
}

void StAssPrint(char* s, int ind)
{
//////////////////////////////////////////////////////////// STACK ASSEMBLY///////////////////////////////////////////////
    FILE *assfile = fopen("stackassembly.txt", "a");
    if(assfile == NULL) {
        printf("can't open stackassembly.txt file!\n");
        exit(1);
    }
    if(ind){fprintf(assfile, "\t%s\n", s);}
    else{fprintf(assfile, "%s\n", s);}
    fclose (assfile);
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
};

void StAssJmp(char* jmp, char* jmpName, int* num, int inc, int noNum)
{
    FILE *assfile = fopen("stackassembly.txt", "a");
    if(assfile == NULL) {
        printf("can't open stackassembly.txt file!\n");
        exit(1);
    }
    if(noNum == 1)
    {
        fprintf(assfile, "\t%s \t %s\n", jmp, jmpName);
    }
    else{fprintf(assfile, "\t%s \t %s%d\n", jmp, jmpName,*num);}
    
    fclose (assfile);
    if(inc == 1){*num = *num + 1;}
};

void StAssPrintLBL(int isLBL, int inc)
{
    char buf[10];
    char numtostring[10];
    if(isLBL){
        strcpy(buf , "LBL");
        
        if(inc)
        {
            itoa(SMLabel_Else++, numtostring, 10);
        }
        else
        {
            itoa(SMLabel_Else, numtostring, 10);
        }

        } else {
        strcpy(buf, "END");
        if(inc)
        {
            itoa(SMLabel_End++, numtostring, 10);
        }
        else
        {
            itoa(SMLabel_End, numtostring, 10);
        }
    }
    strcat(buf, numtostring);strcat(buf, ":"); StAssPrint(buf,0);
};


void StAssForHeader()
{
    StAssPush("dum");
    StAssPush("$0");
    StAssPrint("STORE", 1);
    char buf[10];
    char numtostring[10];
    itoa(ForHeaderLabel, numtostring, 10);
    strcpy(buf, "Label");
    strcat(buf, numtostring);
    strcat(buf, ":");
    StAssPrint(buf, 0);
    StAssPush("dum");
    StAssPush("$1");
    StAssPrint("EQ", 1);
    StAssJmp("JZ", "HELPER", &ForHelperLabel, 0,0);

};

void StAssForMiddle()
{
    StAssJmp("JNZ", "END", &SMLabel_End, 0,0);
    StAssPush("dum");
    StAssPush("$1");
    StAssPrint("STORE", 1);
    StAssJmp("JMP", "LBL", &SMLabel_Else, 0,0);
    char buf[10];
    char numtostring[10];
    itoa(ForHelperLabel, numtostring, 10);
    strcpy(buf, "HELPER");
    strcat(buf, numtostring);
    strcat(buf, ":");
    StAssPrint(buf, 0);
    ForHelperLabel++;
};



void prependFile(char* filename, char* text) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file\n");
        exit(1);
    }
    fseek(file, 0, SEEK_END);
    long fsize = ftell(file);
    fseek(file, 0, SEEK_SET);
    char *buffer = malloc(fsize + 1);
    fread(buffer, 1, fsize, file);
    fclose(file);
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file\n");
        exit(1);
    }
    fprintf(file, "%s", text);
    fwrite(buffer, 1, fsize, file);
    fclose(file);
    free(buffer);
}


void printDataSegment()
{
    char DS[5000];
    strcpy(DS, "");
    for (int i = 0 ; i < st_index-1 ; i++)
    {
        if((strcmp(symbolTable[i].type, "func") != 0) && (strcmp(symbolTable[i].dataType , "int")==0 || strcmp(symbolTable[i].dataType , "float")==0 || strcmp(symbolTable[i].dataType ,"bool")==0 || strcmp(symbolTable[i].dataType , "string")==0))
        {
            strcat(DS, "VAR\t");
            char buff [500];
            strcpy(buff, symbolTable[i].name);
            strcat(DS, buff);
            strcat(DS, "\n");
        }
    }
    strcat(DS, "\n\n");
    char* filename = "stackassembly.txt";
    prependFile(filename, DS);
};

void pErr(int lineNUMM)
{
    FILE *assfile = fopen("ParsingErrors.txt", "a");
    char buf [50];
    itoa(lineNUMM, buf,10);
    fprintf(assfile, "%s ", buf);
    fclose (assfile);
};



void sErr(int num)
{
    FILE *semfile = fopen("SemanticErrors.txt", "a");
     if(semfile == NULL) {
        printf("can't open SemanticErrors.txt file!\n");
        exit(1);
    }

    fprintf(semfile, "%d ", num);
    
    fclose (semfile);
};

void popArgs()
{
    argPointer--;
    for (int i = argPointer; i>= 0;i--)
    {
        char buf[20];
        strcpy(buf, "POP\t");
        strcat(buf, argumentList[i]);
        StAssPrint(buf,1);
        argPointer--;
    }
    argPointer = 0;
};

void CodeGenAss()
{
    if(codeGen){
    //printf("DEBUG %s", VirtualStack[VirtualSP]);
    FILE *llfile = fopen("LLVM.txt", "a");
    if(llfile == NULL) {
        printf("can't open LLVM.txt file!\n");
        exit(1);
    }
    char* value = popVStack();
    char* carrier = popVStack();
    fprintf(llfile, "%s = %s\n", carrier, value);
    fclose (llfile);
    //printf("DEBUG %s", VirtualStack[VirtualSP]);

    }
};

void CodeGenOp(char* operator)
{
    if(codeGen){
    char* second_operand = popVStack();
    char* operation = popVStack();
    char* first_operand = popVStack();
    char dumstr[10];
    itoa(tempNumber, dumstr, 10);
    strcat(temp_var, dumstr);
    tempNumber++;
    pushVStack(temp_var);
    FILE *llvfile = fopen("LLVM.txt", "a");
    if(llvfile == NULL) {
        printf("can't open LLVM.txt file!\n");
        exit(1);
    }
    fprintf(llvfile, "%s = %s %s %s\n", temp_var, first_operand, operation, second_operand);
    fclose (llvfile);
    temp_var[strlen(temp_var)-1] = '\0';
    
    }
};

char* makeLabel()
{
    char dumstr[10];
    itoa(labelNumber, dumstr, 10);
    strcat(temp_label, dumstr);
    return temp_label;
};

void resetTempLabel()
{
    temp_label[strlen(temp_label)-1] = '\0';
    labelNumber++;
};

char* makeEndLabel()
{
    char dumstr[10];
    itoa(endlabelNumber, dumstr, 10);
    strcat(temp_endlabel, dumstr);
    return temp_endlabel;
};

void CodeGenLogical()
{
    if(codeGen)
    {
        char* equality_OP = popVStack();
        char* second_operand = popVStack();
        char* first_operand = popVStack();
        makeEndLabel();
        makeLabel();
        FILE *llvfile = fopen("LLVM.txt", "a");
        if(llvfile == NULL) {printf("can't open LLVM.txt file!\n");exit(1);}
        fprintf(llvfile, "%s %s %s goto %s\ngoto %s\n%s : \n", first_operand, equality_OP, second_operand, temp_label, temp_endlabel, temp_label); fclose (llvfile);
    }
    resetTempLabel();
};

void printIF(){
    if(codeGen){
    FILE *llvfile = fopen("LLVM.txt", "a");
    if(llvfile == NULL) {printf("can't open LLVM.txt file!\n");exit(1);}
    fprintf(llvfile, "IF "); fclose (llvfile);   }
};

void printLLVM(char* s)
{
    if(codeGen){
        FILE *llvfile = fopen("LLVM.txt", "a");
        if(llvfile == NULL) {printf("can't open LLVM.txt file!\n");exit(1);}
        fprintf(llvfile, s); fclose (llvfile);
    }
};

void printWHILE()
{
    if(codeGen)
    {
        printLLVM(makeLabel());
        resetTempLabel();
        printLLVM(":\n");
        printIF();
    }
};

void controlTerminator(int isWhile)
{
    if(codeGen)
    {
        if(isWhile)
        {
            labelNumber-=2;
            printLLVM("goto ");
            printLLVM(makeLabel());
            labelNumber+=2;
            printLLVM("\n");
            resetTempLabel();
        }

        printLLVM(strdup(temp_endlabel));
        printLLVM(":\n");
        temp_endlabel[strlen(temp_endlabel)-1] = '\0';
        endlabelNumber++;
    }
};
//==============================================================================================================================================================


//_____________________________________________________ CHECK ALWAYS FALSE_____________________________________________________


void alwaysFalse(int operation)
{
    char* second = popAStack();
    char* first = popAStack();
    int initialized = 1;

    char* endptrSec;
    long int resultSecond = strtol(second, &endptrSec, 10);
    if (errno == EINVAL) {
        //printf("The string %s cannot be converted to an integer.\n", second);
        //meaning the second operand is an identifier
        //todo go get its value from symbol table and store it in resultSecond
        resultSecond = symbolTable[ lookup(second,0)].intValue;
        initialized = symbolTable[ lookup(second,0)].isInit;
    } else {
        //printf("The converted integer is %d.\n", resultSecond);
        //second operand is an immediate value,
        //its value is stored in result
    }


    if(initialized == 0)
    {
        alwaysFalseFlag = 0;
        return;
    }



    char* endptrFirst;
    long int resultFirst = strtol(first, &endptrFirst, 10);
    if (errno == EINVAL) {
        //printf("The string %s cannot be converted to an integer.\n", first);
        //meaning the first operand is an identifier
        //todo go get its value from symbol table and store it in resultFirst
        resultFirst = symbolTable[ lookup(first,0)].intValue;
        initialized = symbolTable[ lookup(second,0)].isInit;
    } else {
        //printf("The converted integer is %d.\n", resultFirst);
        //first operand is an immediate value,
        //its value is stored in result
    }


    if(initialized == 0)
    {
        alwaysFalseFlag = 0;
        printf("COMPARING %d with %d", resultFirst, resultSecond);
        return;
    }

    //printf("COMPARING %d with %d", resultFirst, resultSecond);


    switch (operation)
    {
        case 1:                                 //GT        first > second
        if(resultFirst <=  resultSecond) {alwaysFalseFlag = 1; return;} else{alwaysFalseFlag = 0;}
        break;

        case 2:                                 //LT        first < second
        if(resultFirst >=  resultSecond) {alwaysFalseFlag = 1; return;} else{alwaysFalseFlag = 0;}
        break;

        case 3:                                 //LT EQ     first <= second
        if(resultFirst >  resultSecond) {alwaysFalseFlag = 1; return;} else{alwaysFalseFlag = 0;}
        break;

        case 4:                                 //GT EQ     first >= second
        if(resultFirst <  resultSecond) {alwaysFalseFlag = 1; return;} else{alwaysFalseFlag = 0;}
        break;

        case 5:                                 //EQUALITY  first == second
        if(resultFirst !=  resultSecond) {alwaysFalseFlag = 1; return;} else{alwaysFalseFlag = 0;}
        break;

        case 6:                                 //NOT_EQUALITY first != second
        if(resultFirst ==  resultSecond) {alwaysFalseFlag = 1; return;} else{alwaysFalseFlag = 0;}
        break;
    }
};

void warnAlwaysFalse()
{
    if (alwaysFalseFlag == 1)
    {
        printf("\n\n!!!!!!!!!!!!!!!!!!!! WARNING-DEADCODE : If statement in line %d is always False.!!!!!!!!!!!!!!!!!\n\n", yylineno);
        sErr(yylineno);
    }
};


//------------------------------------------- MAIN -------------------------------
int main(int argc, char *argv[])
{ 
    clear_logs();
    yy_flex_debug = 1;
    int ret = remove("LLVM.txt");
    int ret2 = remove("stackassembly.txt");
    int ret3 = remove("ParsingErrors.txt");
    int ret4 = remove("SemanticErrors.txt");
    if(ret != 0 && ret2 !=0 && ret3 !=0 && ret4 != 0){
        printf("\nCreating Intermediate Code File ...\n");
        printf("Creating Stack Machine Assembly File ...\n");
    }
    yyin = fopen(argv[1], "r");
    yyparse();
    st_print();
    unused_print();
    printDataSegment();

    return 0;
}
