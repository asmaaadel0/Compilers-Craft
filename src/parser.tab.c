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
#line 1 "parser.y"

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
    char temp_var[50] = "t";
    int SMLabel = 0;
    int SMLabel_Else = 0;
    int SMLabel_End = 0;
    int ForHeaderLabel = 0;
    int ForHelperLabel = 0;
    char IdentifierHolder[10];
    char* argumentList[20];
    int argPointer = 0;
    int enumCNT = 1;
    void prepend(char* s, const char* t)    {size_t len = strlen(t);memmove(s + len, s, strlen(s) + 1);memcpy(s, t, len);}
    char switcher[50];
    void pErr(int num);
    int AStack = -1;
//==================================================================================================================================================


#line 120 "parser.tab.c"

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
  YYSYMBOL_43_ = 43,                       /* '}'  */
  YYSYMBOL_44_ = 44,                       /* ')'  */
  YYSYMBOL_45_ = 45,                       /* ':'  */
  YYSYMBOL_46_ = 46,                       /* '{'  */
  YYSYMBOL_47_ = 47,                       /* '('  */
  YYSYMBOL_48_ = 48,                       /* ','  */
  YYSYMBOL_49_ = 49,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 50,                  /* $accept  */
  YYSYMBOL_PROGRAM = 51,                   /* PROGRAM  */
  YYSYMBOL_STATEMENT = 52,                 /* STATEMENT  */
  YYSYMBOL_ERROR_STATEMENT = 53,           /* ERROR_STATEMENT  */
  YYSYMBOL_SEMICOLON_MISS = 54,            /* SEMICOLON_MISS  */
  YYSYMBOL_TYPE = 55,                      /* TYPE  */
  YYSYMBOL_DECLARATION_STATEMENT = 56,     /* DECLARATION_STATEMENT  */
  YYSYMBOL_ERROR_DECLARATION_STATEMENT = 57, /* ERROR_DECLARATION_STATEMENT  */
  YYSYMBOL_DECLARATION_TAIL = 58,          /* DECLARATION_TAIL  */
  YYSYMBOL_ERROR_DECLARATION_TAIL = 59,    /* ERROR_DECLARATION_TAIL  */
  YYSYMBOL_60_1 = 60,                      /* $@1  */
  YYSYMBOL_61_2 = 61,                      /* $@2  */
  YYSYMBOL_62_3 = 62,                      /* $@3  */
  YYSYMBOL_RETURN_STATEMENT = 63,          /* RETURN_STATEMENT  */
  YYSYMBOL_helperSWITCH = 64,              /* helperSWITCH  */
  YYSYMBOL_SWITCH_STATEMENT = 65,          /* SWITCH_STATEMENT  */
  YYSYMBOL_DEFAULTCASE = 66,               /* DEFAULTCASE  */
  YYSYMBOL_ERROR_DEFAULTCASE = 67,         /* ERROR_DEFAULTCASE  */
  YYSYMBOL_CASES = 68,                     /* CASES  */
  YYSYMBOL_ERROR_CASES = 69,               /* ERROR_CASES  */
  YYSYMBOL_70_4 = 70,                      /* $@4  */
  YYSYMBOL_ERROR_SWITCH_STATEMENT = 71,    /* ERROR_SWITCH_STATEMENT  */
  YYSYMBOL_72_5 = 72,                      /* $@5  */
  YYSYMBOL_73_6 = 73,                      /* $@6  */
  YYSYMBOL_74_7 = 74,                      /* $@7  */
  YYSYMBOL_75_8 = 75,                      /* $@8  */
  YYSYMBOL_FUNC_DECLARATION_STATEMENT = 76, /* FUNC_DECLARATION_STATEMENT  */
  YYSYMBOL_ERROR_FUNC_DECLARATION_STATEMENT = 77, /* ERROR_FUNC_DECLARATION_STATEMENT  */
  YYSYMBOL_78_9 = 78,                      /* $@9  */
  YYSYMBOL_ARGS = 79,                      /* ARGS  */
  YYSYMBOL_ERROR_ARGS = 80,                /* ERROR_ARGS  */
  YYSYMBOL_ARG_DECL = 81,                  /* ARG_DECL  */
  YYSYMBOL_ENUM_DECLARATION_STATEMENT = 82, /* ENUM_DECLARATION_STATEMENT  */
  YYSYMBOL_ERROR_ENUM_DECLARATION_STATEMENT = 83, /* ERROR_ENUM_DECLARATION_STATEMENT  */
  YYSYMBOL_ENUM_HELPER = 84,               /* ENUM_HELPER  */
  YYSYMBOL_ENUM_ARGS = 85,                 /* ENUM_ARGS  */
  YYSYMBOL_ENUM_DEFINED_ARGS = 86,         /* ENUM_DEFINED_ARGS  */
  YYSYMBOL_ERROR_ENUM_DEFINED_ARGS = 87,   /* ERROR_ENUM_DEFINED_ARGS  */
  YYSYMBOL_ENUM_CALL_STATEMENT = 88,       /* ENUM_CALL_STATEMENT  */
  YYSYMBOL_IF_STATEMENT_HELPER = 89,       /* IF_STATEMENT_HELPER  */
  YYSYMBOL_IF_STATEMENT_HELPER1 = 90,      /* IF_STATEMENT_HELPER1  */
  YYSYMBOL_IF_STATEMENT = 91,              /* IF_STATEMENT  */
  YYSYMBOL_ERROR_IF_STATEMENT = 92,        /* ERROR_IF_STATEMENT  */
  YYSYMBOL_93_10 = 93,                     /* $@10  */
  YYSYMBOL_94_11 = 94,                     /* $@11  */
  YYSYMBOL_WHILE_STATEMENT = 95,           /* WHILE_STATEMENT  */
  YYSYMBOL_WHILEMISS_COLON = 96,           /* WHILEMISS_COLON  */
  YYSYMBOL_ERROR_WHILEMISS_COLON = 97,     /* ERROR_WHILEMISS_COLON  */
  YYSYMBOL_DO_WHILE_STATEMENT = 98,        /* DO_WHILE_STATEMENT  */
  YYSYMBOL_ERROR_DO_WHILE = 99,            /* ERROR_DO_WHILE  */
  YYSYMBOL_100_12 = 100,                   /* $@12  */
  YYSYMBOL_101_13 = 101,                   /* $@13  */
  YYSYMBOL_102_14 = 102,                   /* $@14  */
  YYSYMBOL_103_15 = 103,                   /* $@15  */
  YYSYMBOL_FOR_STATEMENT = 104,            /* FOR_STATEMENT  */
  YYSYMBOL_ERROR_FOR_LOOP = 105,           /* ERROR_FOR_LOOP  */
  YYSYMBOL_106_16 = 106,                   /* $@16  */
  YYSYMBOL_107_17 = 107,                   /* $@17  */
  YYSYMBOL_helperAssignmentRule = 108,     /* helperAssignmentRule  */
  YYSYMBOL_ASSIGNMENT_STATEMENT = 109,     /* ASSIGNMENT_STATEMENT  */
  YYSYMBOL_ERROR_ASSIGNMENT_STATEMENT = 110, /* ERROR_ASSIGNMENT_STATEMENT  */
  YYSYMBOL_BLOCK = 111,                    /* BLOCK  */
  YYSYMBOL_FUNC_CALL = 112,                /* FUNC_CALL  */
  YYSYMBOL_ERROR_FUNC_CALL = 113,          /* ERROR_FUNC_CALL  */
  YYSYMBOL_USED_ARGS = 114,                /* USED_ARGS  */
  YYSYMBOL_ERROR_USED_ARGS = 115,          /* ERROR_USED_ARGS  */
  YYSYMBOL_EXPRESSION = 116,               /* EXPRESSION  */
  YYSYMBOL_ERROR_EXPRESSION = 117,         /* ERROR_EXPRESSION  */
  YYSYMBOL_COMPARISONSTT = 118,            /* COMPARISONSTT  */
  YYSYMBOL_ERROR_COMPARISONSTT = 119,      /* ERROR_COMPARISONSTT  */
  YYSYMBOL_RES_WORD = 120                  /* RES_WORD  */
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
#define YYLAST   1265

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  208
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  373

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
      47,    44,     2,     2,    48,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    45,    49,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    46,     2,    43,     2,     2,     2,     2,
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
       0,    99,    99,   100,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   121,
     122,   123,   126,   129,   130,   131,   132,   136,   137,   138,
     142,   143,   144,   147,   148,   149,   152,   153,   154,   154,
     155,   155,   156,   156,   160,   161,   164,   167,   168,   171,
     172,   175,   178,   179,   180,   183,   183,   184,   187,   187,
     188,   188,   189,   189,   190,   190,   191,   197,   198,   199,
     200,   201,   205,   205,   209,   210,   211,   214,   217,   223,
     224,   227,   228,   229,   230,   232,   232,   235,   236,   242,
     243,   244,   247,   248,   249,   250,   254,   255,   259,   262,
     266,   267,   268,   271,   272,   272,   273,   273,   274,   278,
     282,   283,   286,   289,   290,   293,   293,   294,   294,   295,
     295,   296,   296,   297,   302,   303,   306,   306,   307,   307,
     313,   314,   318,   319,   322,   323,   327,   333,   334,   337,
     341,   342,   343,   345,   346,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   364,   365,   367,
     368,   369,   370,   371,   375,   376,   377,   378,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,   412,   413,   414,   421,   421,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   421
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
  "FLOAT_DIGIT", "'}'", "')'", "':'", "'{'", "'('", "','", "';'",
  "$accept", "PROGRAM", "STATEMENT", "ERROR_STATEMENT", "SEMICOLON_MISS",
  "TYPE", "DECLARATION_STATEMENT", "ERROR_DECLARATION_STATEMENT",
  "DECLARATION_TAIL", "ERROR_DECLARATION_TAIL", "$@1", "$@2", "$@3",
  "RETURN_STATEMENT", "helperSWITCH", "SWITCH_STATEMENT", "DEFAULTCASE",
  "ERROR_DEFAULTCASE", "CASES", "ERROR_CASES", "$@4",
  "ERROR_SWITCH_STATEMENT", "$@5", "$@6", "$@7", "$@8",
  "FUNC_DECLARATION_STATEMENT", "ERROR_FUNC_DECLARATION_STATEMENT", "$@9",
  "ARGS", "ERROR_ARGS", "ARG_DECL", "ENUM_DECLARATION_STATEMENT",
  "ERROR_ENUM_DECLARATION_STATEMENT", "ENUM_HELPER", "ENUM_ARGS",
  "ENUM_DEFINED_ARGS", "ERROR_ENUM_DEFINED_ARGS", "ENUM_CALL_STATEMENT",
  "IF_STATEMENT_HELPER", "IF_STATEMENT_HELPER1", "IF_STATEMENT",
  "ERROR_IF_STATEMENT", "$@10", "$@11", "WHILE_STATEMENT",
  "WHILEMISS_COLON", "ERROR_WHILEMISS_COLON", "DO_WHILE_STATEMENT",
  "ERROR_DO_WHILE", "$@12", "$@13", "$@14", "$@15", "FOR_STATEMENT",
  "ERROR_FOR_LOOP", "$@16", "$@17", "helperAssignmentRule",
  "ASSIGNMENT_STATEMENT", "ERROR_ASSIGNMENT_STATEMENT", "BLOCK",
  "FUNC_CALL", "ERROR_FUNC_CALL", "USED_ARGS", "ERROR_USED_ARGS",
  "EXPRESSION", "ERROR_EXPRESSION", "COMPARISONSTT", "ERROR_COMPARISONSTT",
  "RES_WORD", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-224)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-146)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -224,   263,  -224,   947,  -224,  -224,  -224,    12,  -224,   -12,
      46,    52,     0,   475,    25,   641,    22,  -224,   664,   641,
       4,   453,  -224,  -224,  -224,  -224,   641,  -224,  -224,     1,
    -224,  -224,     0,    94,  -224,  -224,  -224,   -10,  -224,  -224,
    -224,    54,  -224,  -224,  -224,  -224,  -224,  -224,  -224,   498,
    -224,  -224,  -224,  -224,  -224,  1117,  -224,  -224,  -224,   641,
     641,   641,   641,   523,   546,  -224,   641,   641,   641,   641,
       0,     0,  -224,  -224,    -5,    66,    35,  1202,  -224,   331,
    1185,  -224,    49,  -224,  -224,  -224,  1185,   426,   180,   886,
      68,    28,    89,  1216,   143,  -224,   558,  -224,   105,   581,
     379,   971,    18,    99,  -224,   641,   170,   210,  -224,    11,
    -224,  -224,    27,    81,   -10,  -224,  1134,   676,   699,   711,
     734,  -224,  -224,   606,   629,  -224,   641,   641,   641,   641,
     641,  -224,  1216,  1216,  1228,  1228,   641,   207,   641,   207,
     143,   207,   207,   143,  -224,  -224,    70,    75,    -6,    88,
      85,  -224,  -224,  -224,   157,    87,    97,    93,    32,   -10,
     426,   426,   426,  -224,   -10,  -224,   115,   107,  -224,    24,
    -224,  1151,   120,  -224,   846,   110,  -224,   825,  -224,  -224,
     641,   746,  -224,  -224,  -224,     0,   163,  -224,    13,   908,
     -10,  -224,  -224,   150,  -224,  -224,   122,  -224,    37,  -224,
    -224,   116,  1216,   116,  1216,   372,  1228,   372,  1228,    89,
     769,   207,    89,   781,   207,   143,   143,   143,   207,   207,
     207,   207,   126,    70,   192,   134,   132,   145,  -224,   -10,
      13,   155,   152,  -224,   154,   158,   165,   171,  -224,  -224,
    -224,   426,   426,   426,  -224,   178,   219,   191,  -224,   641,
     641,  -224,   208,   581,  -224,   581,  1168,   292,   930,  -224,
     -10,   196,   197,   -10,  -224,   641,  -224,   199,  -224,    89,
     207,    89,   207,  -224,   200,   202,  -224,  -224,   204,  -224,
     206,  -224,  -224,  -224,  -224,  -224,  -224,   -10,    13,    94,
     209,    94,    94,   212,   426,   213,   641,   201,   641,   641,
    1097,   992,  -224,  -224,  -224,  -224,  -224,  -224,   215,   216,
     826,  -224,   -10,  -224,    94,   863,  -224,  -224,  -224,   220,
    -224,  -224,   222,    94,   233,   234,  -224,   235,   -10,  1013,
     641,  1034,  1055,  -224,  -224,  -224,  -224,  -224,  -224,  -224,
    -224,  -224,  -224,  -224,  -224,  -224,  -224,  -224,  -224,  -224,
    -224,  -224,  -224,  -224,  -224,   254,  -224,  -224,   242,  -224,
    -224,   -10,  -224,  -224,  -224,  1076,  -224,  -224,  -224,  -224,
     -10,  -224,  -224
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,     0,    23,    24,    26,     0,    25,     0,
       0,     0,     0,     0,     0,     0,     0,   148,     0,     0,
     150,     0,   149,   146,   147,     3,     0,     2,    18,     0,
       4,    29,     0,     0,    13,    48,     5,     0,    14,    80,
      15,   104,     9,   102,    10,    12,   114,    11,   125,     0,
       6,   133,    16,   161,   138,     0,   163,   160,   177,     0,
       0,     0,     0,     0,     0,    19,     0,     0,     0,     0,
       0,     0,    20,    21,     0,     0,     0,     0,   150,     0,
      45,    58,     0,    22,    17,   106,    98,     0,     0,   112,
     115,     0,   186,   176,   151,   131,     0,   130,     0,     0,
       0,     0,     0,     0,     7,     0,     0,    53,    50,     0,
      54,    71,     0,   100,     0,   134,     0,     0,     0,     0,
       0,   153,   152,     0,     0,     8,     0,     0,     0,     0,
       0,   159,   187,   189,   182,   184,     0,   178,     0,   180,
     164,   165,   166,   167,    30,    31,     0,     0,    88,     0,
       0,    85,    86,    91,     0,     0,     0,    60,     0,     0,
       0,     0,     0,   110,     0,   111,     0,     0,   119,     0,
     139,     0,     0,    97,     0,     0,   142,   141,   136,   162,
       0,     0,    34,    28,    35,     0,     0,    27,     0,     0,
       0,    51,    57,     0,    66,    47,     0,    99,     0,   105,
     132,   188,   174,   190,   175,   183,   172,   185,   173,   179,
       0,   168,   181,     0,   169,   155,   154,   156,   157,   158,
     193,   191,     0,     0,     0,     0,     0,     0,    82,     0,
       0,     0,     0,    76,    75,     0,     0,     0,    64,    46,
     107,     0,     0,     0,   109,     0,     0,     0,   117,     0,
       0,   135,     0,     0,   137,     0,     0,     0,    42,    32,
       0,     0,     0,     0,    49,     0,   108,     0,   101,   194,
     171,   192,   170,    81,     0,     0,    95,    94,    90,    93,
      88,    87,    83,    79,    70,    77,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    96,   144,   140,    36,    37,    33,     0,     0,
       0,    69,     0,    73,     0,     0,   103,    84,    92,     0,
      68,    74,     0,     0,     0,     0,   126,     0,     0,     0,
       0,     0,     0,   123,   113,    39,    41,   195,   196,   198,
     206,   197,   199,   207,   208,   200,   204,   201,   202,   205,
     203,    43,    67,    52,    56,     0,    89,    59,     0,    63,
      65,     0,   128,   124,   116,     0,   120,   118,    61,   127,
       0,   122,   129
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -224,   262,   -86,  -224,   -27,  -151,  -224,  -224,   185,  -224,
    -224,  -224,  -224,  -224,  -224,  -224,   182,  -224,   -61,  -224,
    -224,  -224,  -224,  -224,  -224,  -224,  -224,  -224,  -224,  -178,
    -224,  -224,  -224,  -224,  -142,    65,   -28,  -224,  -224,  -224,
    -224,  -224,  -224,  -224,  -224,  -224,  -224,  -224,  -224,  -224,
    -224,  -224,  -224,  -224,  -224,  -224,  -224,  -224,  -224,  -224,
    -224,   -16,  -224,  -224,  -223,  -224,    -4,  -224,  -224,  -224,
    -224
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,    27,    28,    84,    29,    30,    31,   183,   184,
     308,   309,   310,    32,    33,    34,   107,   108,   109,   110,
     193,    35,   156,   236,   237,   292,    36,    37,   188,   232,
     233,   234,    38,    39,   150,   151,   152,   153,    40,    41,
     113,    42,    43,   114,   159,    44,   164,   165,    45,    46,
     166,   299,   247,   167,    47,    48,   361,   370,    49,    50,
      51,    52,    53,    54,   175,   176,    55,    56,    57,    58,
     351
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      91,   160,   162,   231,   222,   104,    80,   227,   261,    86,
     262,    89,   194,    74,    93,    94,     4,     5,     6,   180,
       8,   111,   101,    90,   224,   248,    87,    76,   196,   168,
     303,    83,   304,   238,    95,   231,    25,   231,   267,   102,
     103,   146,   225,   144,   145,   116,   169,    77,   181,   182,
     157,    75,   285,    81,   195,   132,   133,   134,   135,   137,
     139,   230,   140,   141,   142,   143,    17,   147,    25,    18,
     249,   250,    88,    25,   241,   242,   243,   -44,   239,   231,
      19,   274,   154,    25,    78,    79,    22,    23,    24,   226,
     191,    82,   171,    26,   158,   177,   197,   198,   199,   112,
     180,   189,   -72,   -72,   -72,   148,   -72,   105,   106,   148,
     321,  -121,   149,   202,   204,   206,   208,    63,    64,   211,
     214,   223,   215,   216,   217,   218,   219,   148,   228,   181,
     182,   170,   220,   245,   221,   172,   173,   231,   185,   -62,
      61,    62,   235,   240,    63,    64,   186,   -72,   244,    66,
     246,    67,    68,    69,   254,   293,   294,   295,   259,   252,
       4,     5,     6,   265,     8,   266,     4,     5,     6,   273,
       8,   123,   124,   280,   264,   282,   256,   258,   129,   130,
     131,     3,   268,     4,     5,     6,     7,     8,   283,     9,
      10,    11,    12,   275,   286,    13,   287,    14,    15,    16,
      17,   229,   288,    18,   289,   230,   270,   260,   327,   272,
     290,   230,   276,   284,    19,   190,    25,   291,    20,    21,
      22,    23,    24,   -55,   106,   296,    25,    26,   322,   161,
     324,   325,   277,   278,   279,   123,   124,   297,   298,   302,
     312,   313,   316,   317,   311,   300,   301,   314,   330,   177,
     318,   177,   319,   353,   225,   323,   326,   328,   335,   355,
     336,   315,   358,     2,     3,   357,     4,     5,     6,     7,
       8,   320,     9,    10,    11,    12,   359,   360,    13,   362,
      14,    15,    16,    17,   224,   368,    18,   100,   187,   192,
     281,   356,   329,     0,   331,   332,   352,    19,     0,   354,
       0,    20,    21,    22,    23,    24,     0,     0,     0,    25,
      26,     0,   363,    59,    60,     0,    61,    62,     0,     0,
      63,    64,     0,   306,     0,    66,   365,    67,    68,    69,
       0,     0,   155,     0,  -145,  -145,  -145,  -145,  -145,     0,
    -145,     0,  -145,     0,  -145,   369,  -145,  -145,  -145,  -145,
    -145,     0,  -145,  -145,   372,  -145,  -145,  -145,  -145,  -145,
    -145,     0,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,
       0,     0,     0,     0,  -145,  -145,  -145,  -145,    99,  -145,
       3,     0,     4,     5,     6,     7,     8,     0,     9,    10,
      11,    12,     0,     0,    13,     0,    14,    15,    16,    17,
      63,    64,    18,     0,     0,    66,     0,    67,    68,    69,
       0,     0,     0,    19,     0,     0,     0,    20,    21,    22,
      23,    24,   178,     0,     0,    25,    26,     3,     0,     4,
       5,     6,     7,     8,     0,     9,    10,    11,    12,     0,
       0,    13,     0,    14,    15,    16,    17,     0,     0,    18,
       0,     0,     0,     0,    96,     0,     0,     0,     0,     0,
      19,     0,     0,     0,    20,    21,    22,    23,    24,     0,
       0,     0,    25,    26,  -145,  -145,    77,  -145,  -145,  -145,
    -145,  -145,  -145,    97,  -145,  -145,  -145,  -145,  -145,  -145,
    -145,     0,    98,     0,     0,    17,     0,     0,    18,    77,
      99,     0,     0,     0,     0,     0,     0,     0,     0,    19,
       0,     0,     0,    78,    79,    22,    23,    24,    17,     0,
      85,    18,    26,     0,    77,     0,     0,     0,     0,   115,
       0,     0,    19,     0,     0,     0,    78,    79,    22,    23,
      24,     0,     0,    17,     0,    26,    18,    77,     0,     0,
       0,     0,     0,   136,     0,     0,     0,    19,     0,    77,
       0,    78,    79,    22,    23,    24,    17,     0,     0,    18,
      26,     0,     0,     0,     0,     0,   138,     0,    17,     0,
      19,    18,   174,     0,    78,    79,    22,    23,    24,     0,
       0,     0,    19,    26,     0,     0,    78,    79,    22,    23,
      24,    17,   170,     0,    18,    26,     0,   209,     0,     0,
       0,     0,     0,     0,     0,    19,     0,     0,     0,    78,
      79,    22,    23,    24,     0,  -143,    17,     0,    26,    18,
     212,     0,     0,     0,     0,     0,   210,     0,     0,     0,
      19,     0,    77,     0,    78,    79,    22,    23,    24,    17,
       0,     0,    18,    26,     0,     0,     0,     0,     0,   213,
       0,    17,     0,    19,    18,    92,     0,    78,    79,    22,
      23,    24,     0,     0,     0,    19,    26,   201,     0,    78,
      79,    22,    23,    24,    17,     0,     0,    18,    26,     0,
       0,     0,     0,     0,     0,     0,    17,     0,    19,    18,
     203,     0,    78,    79,    22,    23,    24,     0,     0,     0,
      19,    26,   205,     0,    78,    79,    22,    23,    24,    17,
       0,     0,    18,    26,     0,     0,     0,     0,     0,     0,
       0,    17,     0,    19,    18,   207,     0,    78,    79,    22,
      23,    24,     0,     0,     0,    19,    26,   257,     0,    78,
      79,    22,    23,    24,    17,     0,     0,    18,    26,     0,
       0,     0,     0,     0,     0,     0,    17,     0,    19,    18,
     269,     0,    78,    79,    22,    23,    24,     0,     0,     0,
      19,    26,   271,     0,    78,    79,    22,    23,    24,    17,
       0,     0,    18,    26,     0,     0,     0,     0,     0,     0,
       0,    17,     0,    19,    18,     0,     0,    78,    79,    22,
      23,    24,     0,     0,     0,    19,    26,     0,     0,    78,
      79,    22,    23,    24,     0,     0,     0,     0,    26,   337,
     338,   339,   340,   341,     0,   342,     0,   343,     0,   344,
       0,   345,   346,   347,   348,   349,   117,   118,     0,   119,
     120,   121,   122,   123,   124,     0,     0,   126,   127,   128,
     129,   130,   131,     0,   350,     0,     0,    59,    60,     0,
      61,    62,     0,   255,    63,    64,     0,     0,     0,    66,
       0,    67,    68,    69,   117,   118,     0,   119,   120,   121,
     122,   123,   124,     0,   253,   126,   127,   128,   129,   130,
     131,     0,     0,     0,     0,     0,     0,   117,   118,    25,
     119,   120,   121,   122,   123,   124,     0,     0,   126,   127,
     128,   129,   130,   131,     0,     0,     0,     0,     0,   117,
     118,   163,   119,   120,   121,   122,   123,   124,     0,     0,
     126,   127,   128,   129,   130,   131,     0,     0,     0,     0,
       0,   117,   118,   263,   119,   120,   121,   122,   123,   124,
       0,   307,   126,   127,   128,   129,   130,   131,    59,    60,
       0,    61,    62,   -38,   -40,    63,    64,     0,    65,     0,
      66,     0,    67,    68,    69,    70,    71,     0,     0,     0,
      72,    73,   117,   118,     0,   119,   120,   121,   122,   123,
     124,     0,     0,   126,   127,   128,   129,   130,   131,     0,
       0,     0,     0,   117,   118,   179,   119,   120,   121,   122,
     123,   124,     0,     0,   126,   127,   128,   129,   130,   131,
       0,     0,     0,     0,   117,   118,   334,   119,   120,   121,
     122,   123,   124,     0,     0,   126,   127,   128,   129,   130,
     131,     0,     0,     0,     0,   117,   118,   364,   119,   120,
     121,   122,   123,   124,     0,     0,   126,   127,   128,   129,
     130,   131,     0,     0,     0,     0,   117,   118,   366,   119,
     120,   121,   122,   123,   124,     0,     0,   126,   127,   128,
     129,   130,   131,     0,     0,     0,     0,   117,   118,   367,
     119,   120,   121,   122,   123,   124,     0,     0,   126,   127,
     128,   129,   130,   131,     0,     0,     0,     0,   117,   118,
     371,   119,   120,   121,   122,   123,   124,     0,     0,   126,
     127,   128,   129,   130,   131,     0,     0,     0,   117,   118,
     333,   119,   120,   121,   122,   123,   124,     0,   125,   126,
     127,   128,   129,   130,   131,   117,   118,     0,   119,   120,
     121,   122,   123,   124,     0,   200,   126,   127,   128,   129,
     130,   131,   117,   118,     0,   119,   120,   121,   122,   123,
     124,     0,   251,   126,   127,   128,   129,   130,   131,   117,
     118,     0,   119,   120,   121,   122,   123,   124,     0,   305,
     126,   127,   128,   129,   130,   131,   117,   118,     0,   119,
     120,   121,   122,   123,   124,     0,     0,   126,   127,   128,
     129,   130,   131,    59,    60,     0,    61,    62,     0,     0,
      63,    64,     0,     0,     0,    66,     0,    67,    68,    69,
     119,   120,   121,   122,   123,   124,     0,     0,   126,   127,
     128,   129,   130,   131,   121,   122,   123,   124,     0,     0,
     126,   127,   128,   129,   130,   131
};

static const yytype_int16 yycheck[] =
{
      16,    87,    88,   154,   146,    32,    10,   149,   186,    13,
     188,    15,     1,     1,    18,    19,     3,     4,     5,     1,
       7,    37,    26,     1,    30,     1,     1,    39,     1,     1,
     253,    31,   255,     1,    30,   186,    46,   188,     1,    38,
      39,    46,    48,    70,    71,    49,    18,     1,    30,    31,
       1,    39,   230,     1,    43,    59,    60,    61,    62,    63,
      64,    48,    66,    67,    68,    69,    20,     1,    46,    23,
      46,    47,    47,    46,   160,   161,   162,    31,    46,   230,
      34,   223,    47,    46,    38,    39,    40,    41,    42,     1,
     106,    39,    96,    47,    45,    99,   112,    16,   114,    45,
       1,   105,     3,     4,     5,    39,     7,    13,    14,    39,
     288,    43,    46,   117,   118,   119,   120,    28,    29,   123,
     124,    46,   126,   127,   128,   129,   130,    39,    43,    30,
      31,    44,   136,    18,   138,    30,    31,   288,    39,    46,
      24,    25,    45,   159,    28,    29,    47,    48,   164,    33,
      43,    35,    36,    37,    44,   241,   242,   243,   185,    39,
       3,     4,     5,    13,     7,    43,     3,     4,     5,    43,
       7,    28,    29,    39,   190,    43,   180,   181,    35,    36,
      37,     1,   198,     3,     4,     5,     6,     7,    43,     9,
      10,    11,    12,     1,    39,    15,    44,    17,    18,    19,
      20,    44,    48,    23,    46,    48,   210,    44,   294,   213,
      45,    48,    20,   229,    34,    45,    46,    46,    38,    39,
      40,    41,    42,    13,    14,    47,    46,    47,   289,    49,
     291,   292,    40,    41,    42,    28,    29,    18,    47,    31,
      44,    44,    43,    43,   260,   249,   250,   263,    47,   253,
      48,   255,    48,   314,    48,    46,    44,    44,    43,    39,
      44,   265,   323,     0,     1,    43,     3,     4,     5,     6,
       7,   287,     9,    10,    11,    12,    43,    43,    15,    44,
      17,    18,    19,    20,    30,    43,    23,    25,   103,   107,
     225,   319,   296,    -1,   298,   299,   312,    34,    -1,   315,
      -1,    38,    39,    40,    41,    42,    -1,    -1,    -1,    46,
      47,    -1,   328,    21,    22,    -1,    24,    25,    -1,    -1,
      28,    29,    -1,    31,    -1,    33,   330,    35,    36,    37,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    -1,    11,    -1,    13,   361,    15,    16,    17,    18,
      19,    -1,    21,    22,   370,    24,    25,    26,    27,    28,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,    -1,    -1,    -1,    43,    44,    45,    46,    47,    48,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    -1,    -1,    15,    -1,    17,    18,    19,    20,
      28,    29,    23,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    -1,    -1,    46,    47,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    -1,
      -1,    15,    -1,    17,    18,    19,    20,    -1,    -1,    23,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    38,    39,    40,    41,    42,    -1,
      -1,    -1,    46,    47,    21,    22,     1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    39,    -1,    -1,    20,    -1,    -1,    23,     1,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    38,    39,    40,    41,    42,    20,    -1,
      45,    23,    47,    -1,     1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    34,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    -1,    -1,    20,    -1,    47,    23,     1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    34,    -1,     1,
      -1,    38,    39,    40,    41,    42,    20,    -1,    -1,    23,
      47,    -1,    -1,    -1,    -1,    -1,    30,    -1,    20,    -1,
      34,    23,     1,    -1,    38,    39,    40,    41,    42,    -1,
      -1,    -1,    34,    47,    -1,    -1,    38,    39,    40,    41,
      42,    20,    44,    -1,    23,    47,    -1,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    -1,    44,    20,    -1,    47,    23,
       1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      34,    -1,     1,    -1,    38,    39,    40,    41,    42,    20,
      -1,    -1,    23,    47,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    20,    -1,    34,    23,     1,    -1,    38,    39,    40,
      41,    42,    -1,    -1,    -1,    34,    47,     1,    -1,    38,
      39,    40,    41,    42,    20,    -1,    -1,    23,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    34,    23,
       1,    -1,    38,    39,    40,    41,    42,    -1,    -1,    -1,
      34,    47,     1,    -1,    38,    39,    40,    41,    42,    20,
      -1,    -1,    23,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    34,    23,     1,    -1,    38,    39,    40,
      41,    42,    -1,    -1,    -1,    34,    47,     1,    -1,    38,
      39,    40,    41,    42,    20,    -1,    -1,    23,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    34,    23,
       1,    -1,    38,    39,    40,    41,    42,    -1,    -1,    -1,
      34,    47,     1,    -1,    38,    39,    40,    41,    42,    20,
      -1,    -1,    23,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    34,    23,    -1,    -1,    38,    39,    40,
      41,    42,    -1,    -1,    -1,    34,    47,    -1,    -1,    38,
      39,    40,    41,    42,    -1,    -1,    -1,    -1,    47,     3,
       4,     5,     6,     7,    -1,     9,    -1,    11,    -1,    13,
      -1,    15,    16,    17,    18,    19,    21,    22,    -1,    24,
      25,    26,    27,    28,    29,    -1,    -1,    32,    33,    34,
      35,    36,    37,    -1,    38,    -1,    -1,    21,    22,    -1,
      24,    25,    -1,    48,    28,    29,    -1,    -1,    -1,    33,
      -1,    35,    36,    37,    21,    22,    -1,    24,    25,    26,
      27,    28,    29,    -1,    48,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    46,
      24,    25,    26,    27,    28,    29,    -1,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    21,
      22,    45,    24,    25,    26,    27,    28,    29,    -1,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    21,    22,    45,    24,    25,    26,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    21,    22,
      -1,    24,    25,    43,    44,    28,    29,    -1,    31,    -1,
      33,    -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,
      43,    44,    21,    22,    -1,    24,    25,    26,    27,    28,
      29,    -1,    -1,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    21,    22,    44,    24,    25,    26,    27,
      28,    29,    -1,    -1,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    21,    22,    44,    24,    25,    26,
      27,    28,    29,    -1,    -1,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    21,    22,    44,    24,    25,
      26,    27,    28,    29,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    21,    22,    44,    24,
      25,    26,    27,    28,    29,    -1,    -1,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    21,    22,    44,
      24,    25,    26,    27,    28,    29,    -1,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    21,    22,
      44,    24,    25,    26,    27,    28,    29,    -1,    -1,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    21,    22,
      43,    24,    25,    26,    27,    28,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    21,    22,    -1,    24,    25,
      26,    27,    28,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    21,    22,    -1,    24,    25,    26,    27,    28,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    21,
      22,    -1,    24,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    21,    22,    -1,    24,
      25,    26,    27,    28,    29,    -1,    -1,    32,    33,    34,
      35,    36,    37,    21,    22,    -1,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      24,    25,    26,    27,    28,    29,    -1,    -1,    32,    33,
      34,    35,    36,    37,    26,    27,    28,    29,    -1,    -1,
      32,    33,    34,    35,    36,    37
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    51,     0,     1,     3,     4,     5,     6,     7,     9,
      10,    11,    12,    15,    17,    18,    19,    20,    23,    34,
      38,    39,    40,    41,    42,    46,    47,    52,    53,    55,
      56,    57,    63,    64,    65,    71,    76,    77,    82,    83,
      88,    89,    91,    92,    95,    98,    99,   104,   105,   108,
     109,   110,   111,   112,   113,   116,   117,   118,   119,    21,
      22,    24,    25,    28,    29,    31,    33,    35,    36,    37,
      38,    39,    43,    44,     1,    39,    39,     1,    38,    39,
     116,     1,    39,    31,    54,    45,   116,     1,    47,   116,
       1,   111,     1,   116,   116,    30,     1,    30,    39,    47,
      51,   116,    38,    39,    54,    13,    14,    66,    67,    68,
      69,   111,    45,    90,    93,    31,   116,    21,    22,    24,
      25,    26,    27,    28,    29,    31,    32,    33,    34,    35,
      36,    37,   116,   116,   116,   116,    30,   116,    30,   116,
     116,   116,   116,   116,    54,    54,    46,     1,    39,    46,
      84,    85,    86,    87,    47,     1,    72,     1,    45,    94,
      52,    49,    52,    45,    96,    97,   100,   103,     1,    18,
      44,   116,    30,    31,     1,   114,   115,   116,    43,    44,
       1,    30,    31,    58,    59,    39,    47,    58,    78,   116,
      45,   111,    66,    70,     1,    43,     1,   111,    16,   111,
      31,     1,   116,     1,   116,     1,   116,     1,   116,     1,
      30,   116,     1,    30,   116,   116,   116,   116,   116,   116,
     116,   116,    84,    46,    30,    48,     1,    84,    43,    44,
      48,    55,    79,    80,    81,    45,    73,    74,     1,    46,
     111,    52,    52,    52,   111,    18,    43,   102,     1,    46,
      47,    31,    39,    48,    44,    48,   116,     1,   116,    54,
      44,    79,    79,    45,   111,    13,    43,     1,   111,     1,
     116,     1,   116,    43,    84,     1,    20,    40,    41,    42,
      39,    85,    43,    43,   111,    79,    39,    44,    48,    46,
      45,    46,    75,    52,    52,    52,    47,    18,    47,   101,
     116,   116,    31,   114,   114,    31,    31,    31,    60,    61,
      62,   111,    44,    44,   111,   116,    43,    43,    48,    48,
     111,    79,    68,    46,    68,    68,    44,    52,    44,   116,
      47,   116,   116,    43,    44,    43,    44,     3,     4,     5,
       6,     7,     9,    11,    13,    15,    16,    17,    18,    19,
      38,   120,   111,    68,   111,    39,    86,    43,    68,    43,
      43,   106,    44,   111,    44,   116,    44,    44,    43,   111,
     107,    44,   111
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    51,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    53,
      53,    53,    54,    55,    55,    55,    55,    56,    56,    56,
      57,    57,    57,    58,    58,    58,    59,    59,    60,    59,
      61,    59,    62,    59,    63,    63,    64,    65,    65,    66,
      66,    67,    68,    68,    68,    70,    69,    69,    72,    71,
      73,    71,    74,    71,    75,    71,    71,    76,    76,    76,
      76,    76,    78,    77,    79,    79,    79,    80,    81,    82,
      82,    83,    83,    83,    83,    84,    84,    85,    85,    86,
      86,    86,    87,    87,    87,    87,    88,    88,    89,    90,
      91,    91,    91,    92,    93,    92,    94,    92,    92,    95,
      96,    96,    97,    98,    98,   100,    99,   101,    99,   102,
      99,   103,    99,    99,   104,   104,   106,   105,   107,   105,
     108,   108,   109,   109,   110,   110,   111,   112,   112,   113,
     114,   114,   114,   115,   115,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   117,   117,   117,   117,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     1,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     2,
       2,     2,     1,     1,     1,     1,     1,     3,     3,     1,
       3,     3,     4,     3,     1,     1,     3,     3,     0,     4,
       0,     4,     0,     4,     1,     2,     4,     3,     1,     3,
       1,     2,     5,     1,     1,     0,     5,     2,     0,     7,
       0,     8,     0,     7,     0,     7,     3,     6,     6,     5,
       5,     2,     0,     5,     3,     1,     1,     2,     2,     5,
       1,     5,     4,     5,     6,     1,     1,     3,     1,     5,
       3,     1,     4,     3,     3,     3,     5,     3,     2,     2,
       2,     4,     1,     5,     0,     3,     0,     4,     4,     4,
       1,     1,     0,     6,     1,     0,     7,     0,     7,     0,
       7,     0,     8,     6,     7,     1,     0,     8,     0,     9,
       2,     2,     3,     1,     2,     4,     3,     4,     1,     3,
       3,     1,     1,     0,     3,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     3,     3,     3,     3,     3,     2,
       1,     1,     3,     1,     3,     3,     3,     3,     3,     3,
       4,     4,     3,     3,     3,     3,     2,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     3,     3,     3,
       3,     4,     4,     4,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1
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
  case 2: /* PROGRAM: PROGRAM STATEMENT  */
#line 99 "parser.y"
                                                            {printf("Parsed Line %d Succesfully\n\n", number_of_line);}
#line 1678 "parser.tab.c"
    break;

  case 5: /* STATEMENT: FUNC_DECLARATION_STATEMENT  */
#line 105 "parser.y"
                                                            {printf("Parsed Function Declaration\n");}
#line 1684 "parser.tab.c"
    break;

  case 9: /* STATEMENT: IF_STATEMENT  */
#line 109 "parser.y"
                                                            {printf("Parsed if statement\n");}
#line 1690 "parser.tab.c"
    break;

  case 10: /* STATEMENT: WHILE_STATEMENT  */
#line 110 "parser.y"
                                                            {printf("Parsed While LOOP\n");}
#line 1696 "parser.tab.c"
    break;

  case 11: /* STATEMENT: FOR_STATEMENT  */
#line 111 "parser.y"
                                                            {printf("Parsed For LOOP\n");}
#line 1702 "parser.tab.c"
    break;

  case 12: /* STATEMENT: DO_WHILE_STATEMENT  */
#line 112 "parser.y"
                                                            {printf("Parsed Do While LOOP\n");}
#line 1708 "parser.tab.c"
    break;

  case 13: /* STATEMENT: SWITCH_STATEMENT  */
#line 113 "parser.y"
                                                            {printf("Parsed Switch Statement\n");}
#line 1714 "parser.tab.c"
    break;

  case 14: /* STATEMENT: ENUM_DECLARATION_STATEMENT  */
#line 114 "parser.y"
                                                            {printf("Parsed Enum Declaration\n");}
#line 1720 "parser.tab.c"
    break;

  case 15: /* STATEMENT: ENUM_CALL_STATEMENT  */
#line 115 "parser.y"
                                                            {printf("Parsed Enum Usage\n");}
#line 1726 "parser.tab.c"
    break;

  case 19: /* ERROR_STATEMENT: error SEMICOLON  */
#line 121 "parser.y"
                                                          {printf("\nError STATEMENT at line %d\n", yylineno);pErr(yylineno);}
#line 1732 "parser.tab.c"
    break;

  case 20: /* ERROR_STATEMENT: error '}'  */
#line 122 "parser.y"
                                                          {printf("\nError STATEMENT at line %d\n", yylineno);pErr(yylineno);}
#line 1738 "parser.tab.c"
    break;

  case 21: /* ERROR_STATEMENT: error ')'  */
#line 123 "parser.y"
                                                          {printf("\nError STATEMENT at line %d\n", yylineno);pErr(yylineno);}
#line 1744 "parser.tab.c"
    break;

  case 23: /* TYPE: INT  */
#line 129 "parser.y"
                            { (yyval.str) = "int";   }
#line 1750 "parser.tab.c"
    break;

  case 24: /* TYPE: FLOAT  */
#line 130 "parser.y"
                            { (yyval.str) = "float"; }
#line 1756 "parser.tab.c"
    break;

  case 25: /* TYPE: BOOL  */
#line 131 "parser.y"
                            { (yyval.str) = "bool";  }
#line 1762 "parser.tab.c"
    break;

  case 26: /* TYPE: STRING  */
#line 132 "parser.y"
                            { (yyval.str) = "string";}
#line 1768 "parser.tab.c"
    break;

  case 27: /* DECLARATION_STATEMENT: TYPE IDENTIFIER DECLARATION_TAIL  */
#line 136 "parser.y"
                                                                  { printf("Parsed Declaration\n"); }
#line 1774 "parser.tab.c"
    break;

  case 28: /* DECLARATION_STATEMENT: TYPE CONSTANT DECLARATION_TAIL  */
#line 137 "parser.y"
                                                                  { printf("Parsed Const Declaration\n"); }
#line 1780 "parser.tab.c"
    break;

  case 30: /* ERROR_DECLARATION_STATEMENT: error CONSTANT SEMICOLON_MISS  */
#line 142 "parser.y"
                                                                {printf("\nError Missing constant type at line %d\n", yylineno);pErr(yylineno);}
#line 1786 "parser.tab.c"
    break;

  case 31: /* ERROR_DECLARATION_STATEMENT: error IDENTIFIER SEMICOLON_MISS  */
#line 143 "parser.y"
                                                                {printf("\nError Missing variable type at line %d\n", yylineno);pErr(yylineno);}
#line 1792 "parser.tab.c"
    break;

  case 32: /* ERROR_DECLARATION_STATEMENT: TYPE IDENTIFIER IDENTIFIER SEMICOLON_MISS  */
#line 144 "parser.y"
                                                                {printf("\nError unexpected identifier %s at line %d\n",(yyvsp[-1].str), yylineno);pErr(yylineno);}
#line 1798 "parser.tab.c"
    break;

  case 36: /* ERROR_DECLARATION_TAIL: error EXPRESSION SEMICOLON  */
#line 152 "parser.y"
                                                  {printf("\nError Missing '=' at line %d\n", yylineno);pErr(yylineno);}
#line 1804 "parser.tab.c"
    break;

  case 37: /* ERROR_DECLARATION_TAIL: EQ error SEMICOLON  */
#line 153 "parser.y"
                                                  {printf("\nError Missing second operand at line %d\n", yylineno);pErr(yylineno);}
#line 1810 "parser.tab.c"
    break;

  case 38: /* $@1: %empty  */
#line 154 "parser.y"
                                                  {printf("\nError Missing semicolon ';' at line %d\n", yylineno); pErr(yylineno);}
#line 1816 "parser.tab.c"
    break;

  case 40: /* $@2: %empty  */
#line 155 "parser.y"
                                                  {printf("\nError Missing semicolon ';' at line %d\n", yylineno); pErr(yylineno);}
#line 1822 "parser.tab.c"
    break;

  case 42: /* $@3: %empty  */
#line 156 "parser.y"
                                                  {printf("\nError Missing semicolon ';' at line %d\n", yylineno); pErr(yylineno);}
#line 1828 "parser.tab.c"
    break;

  case 46: /* helperSWITCH: SWITCH IDENTIFIER ':' '{'  */
#line 164 "parser.y"
                                          {strcpy(switcher, (yyvsp[-2].str));}
#line 1834 "parser.tab.c"
    break;

  case 51: /* ERROR_DEFAULTCASE: DEFAULT BLOCK  */
#line 175 "parser.y"
                              {printf("\nError missing colon ':' at DEFAULT CASE of switch, error at line %d\n", yylineno); pErr(yylineno);}
#line 1840 "parser.tab.c"
    break;

  case 55: /* $@4: %empty  */
#line 183 "parser.y"
                                            {printf("\nError DEFAULT CASE must be written at the end of the switch statement, error at line %d\n", yylineno); pErr(yylineno);}
#line 1846 "parser.tab.c"
    break;

  case 57: /* ERROR_CASES: DEFAULTCASE DEFAULTCASE  */
#line 184 "parser.y"
                                            {printf("\nError only 1 DEFAULT CASE is allowed in the switch statement error, at line %d\n", yylineno); pErr(yylineno);}
#line 1852 "parser.tab.c"
    break;

  case 58: /* $@5: %empty  */
#line 187 "parser.y"
                                                {printf("\nError Missing identifier for switch statement at line %d\n", yylineno);pErr(yylineno);}
#line 1858 "parser.tab.c"
    break;

  case 60: /* $@6: %empty  */
#line 188 "parser.y"
                                                {printf("\nError unexpected identifier '%s' at switch statement at line %d\n",yylval, yylineno); pErr(yylineno);}
#line 1864 "parser.tab.c"
    break;

  case 62: /* $@7: %empty  */
#line 189 "parser.y"
                                                {printf("\nError Missing colon ':' for switch statement (switchs must have a colon) at line %d\n", yylineno);pErr(yylineno);}
#line 1870 "parser.tab.c"
    break;

  case 64: /* $@8: %empty  */
#line 190 "parser.y"
                                                {printf("\nError Missing '{' for switch statement at line %d\n", yylineno);pErr(yylineno);}
#line 1876 "parser.tab.c"
    break;

  case 66: /* ERROR_SWITCH_STATEMENT: helperSWITCH CASES error  */
#line 191 "parser.y"
                                                {printf("\nError unclosed '}' for switch statement at line %d\n", yylineno);pErr(yylineno);}
#line 1882 "parser.tab.c"
    break;

  case 72: /* $@9: %empty  */
#line 205 "parser.y"
                                  {printf("\nError unhandled function parenthesis at line %d for function %s\n", yylineno, (yyvsp[0].str));pErr(yylineno);}
#line 1888 "parser.tab.c"
    break;

  case 77: /* ERROR_ARGS: ',' ARGS  */
#line 214 "parser.y"
                           {printf("\nError unexpected ',' in argument list of function declaration at line %d\n", yylineno);pErr(yylineno);}
#line 1894 "parser.tab.c"
    break;

  case 81: /* ERROR_ENUM_DECLARATION_STATEMENT: ENUM error '{' ENUM_HELPER '}'  */
#line 227 "parser.y"
                                                           {printf("\nError missing identifier for ENUM statement at line %d\n", yylineno);pErr(yylineno);}
#line 1900 "parser.tab.c"
    break;

  case 82: /* ERROR_ENUM_DECLARATION_STATEMENT: ENUM IDENTIFIER ENUM_HELPER '}'  */
#line 228 "parser.y"
                                                           {printf("\nError missing opening curly braces for ENUM statement at line %d\n", yylineno);pErr(yylineno);}
#line 1906 "parser.tab.c"
    break;

  case 83: /* ERROR_ENUM_DECLARATION_STATEMENT: ENUM IDENTIFIER '{' error '}'  */
#line 229 "parser.y"
                                                           {printf("\nError missing arguments in the ENUM statement at line %d\n", yylineno);pErr(yylineno);}
#line 1912 "parser.tab.c"
    break;

  case 84: /* ERROR_ENUM_DECLARATION_STATEMENT: ENUM IDENTIFIER error '{' ENUM_HELPER '}'  */
#line 230 "parser.y"
                                                           {printf("\nError UnExpected IDENTIFIER in the ENUM statement at line %d\n", yylineno);pErr(yylineno);}
#line 1918 "parser.tab.c"
    break;

  case 92: /* ERROR_ENUM_DEFINED_ARGS: IDENTIFIER EQ error ','  */
#line 247 "parser.y"
                                                          {printf("\nError WRONG arguments in the ENUM statement at line %d\n", yylineno);pErr(yylineno);}
#line 1924 "parser.tab.c"
    break;

  case 93: /* ERROR_ENUM_DEFINED_ARGS: IDENTIFIER EQ FLOAT_DIGIT  */
#line 248 "parser.y"
                                                          {printf("\nError WRONG arguments in the ENUM statement at line %d\n", yylineno);pErr(yylineno);}
#line 1930 "parser.tab.c"
    break;

  case 94: /* ERROR_ENUM_DEFINED_ARGS: IDENTIFIER EQ STRING_LITERAL  */
#line 249 "parser.y"
                                                          {printf("\nError WRONG arguments in the ENUM statement at line %d\n", yylineno);pErr(yylineno);}
#line 1936 "parser.tab.c"
    break;

  case 95: /* ERROR_ENUM_DEFINED_ARGS: IDENTIFIER EQ BOOL_LITERAL  */
#line 250 "parser.y"
                                                          {printf("\nError WRONG arguments in the ENUM statement at line %d\n", yylineno);pErr(yylineno);}
#line 1942 "parser.tab.c"
    break;

  case 103: /* ERROR_IF_STATEMENT: IF_STATEMENT_HELPER IF_STATEMENT_HELPER1 ELSE error '}'  */
#line 271 "parser.y"
                                                                        {printf("\nError Missing '{' for the ELSE statement at line %d\n", yylineno);pErr(yylineno);}
#line 1948 "parser.tab.c"
    break;

  case 104: /* $@10: %empty  */
#line 272 "parser.y"
                                                                    {printf("\nError Missing ':' for the IF statement at line %d\n", yylineno);pErr(yylineno);}
#line 1954 "parser.tab.c"
    break;

  case 106: /* $@11: %empty  */
#line 273 "parser.y"
                                                              {printf("\nError Missing expression for the IF statement at line %d\n", yylineno);pErr(yylineno);}
#line 1960 "parser.tab.c"
    break;

  case 108: /* ERROR_IF_STATEMENT: IF_STATEMENT_HELPER ':' error '}'  */
#line 274 "parser.y"
                                                                    {printf("\nError Missing '{' for the IF statement at line %d\n", yylineno);pErr(yylineno);}
#line 1966 "parser.tab.c"
    break;

  case 112: /* ERROR_WHILEMISS_COLON: %empty  */
#line 286 "parser.y"
                {printf("\nError Missing ':' for the WHILE loop at line %d\n", yylineno);pErr(yylineno);}
#line 1972 "parser.tab.c"
    break;

  case 115: /* $@12: %empty  */
#line 293 "parser.y"
                                                    {printf("\nError Missing DO-Block for the DO-WHILE loop at line %d\n", yylineno);pErr(yylineno);}
#line 1978 "parser.tab.c"
    break;

  case 117: /* $@13: %empty  */
#line 294 "parser.y"
                                                    {printf("\nError Missing opening parenthesis '(' for the DO-WHILE loop at line %d\n", yylineno);pErr(yylineno);}
#line 1984 "parser.tab.c"
    break;

  case 119: /* $@14: %empty  */
#line 295 "parser.y"
                                                    {printf("\nError Missing WHILE DO-WHILE loop at line %d\n", yylineno);pErr(yylineno);}
#line 1990 "parser.tab.c"
    break;

  case 121: /* $@15: %empty  */
#line 296 "parser.y"
                                                    {printf("\nError Missing opening curly braces '{' for the DO-Block for DO-WHILE loop at line %d\n", yylineno);pErr(yylineno);}
#line 1996 "parser.tab.c"
    break;

  case 123: /* ERROR_DO_WHILE: DO BLOCK WHILE '{' EXPRESSION '}'  */
#line 297 "parser.y"
                                                    {printf("\nError DO-WHILE loop accepts braces () not curly braces {} at line %d\n", yylineno);pErr(yylineno);}
#line 2002 "parser.tab.c"
    break;

  case 126: /* $@16: %empty  */
#line 306 "parser.y"
                                                               {printf("\nError Missing opening braces '(' in the FOR loop at line %d\n", yylineno);pErr(yylineno);}
#line 2008 "parser.tab.c"
    break;

  case 128: /* $@17: %empty  */
#line 307 "parser.y"
                                                               {printf("\nError unexpected semicolon in the FOR loop at line %d\n", yylineno);pErr(yylineno);}
#line 2014 "parser.tab.c"
    break;

  case 131: /* helperAssignmentRule: CONSTANT EQ  */
#line 314 "parser.y"
                                                              {printf("\nError CONSTANTS must not be reassigned %d\n", yylineno);pErr(yylineno);}
#line 2020 "parser.tab.c"
    break;

  case 132: /* ASSIGNMENT_STATEMENT: helperAssignmentRule EXPRESSION SEMICOLON  */
#line 318 "parser.y"
                                                            {printf("Parsed Assignment\n");}
#line 2026 "parser.tab.c"
    break;

  case 134: /* ERROR_ASSIGNMENT_STATEMENT: helperAssignmentRule SEMICOLON  */
#line 322 "parser.y"
                                                              { printf("\nError expected expression in assignment statement at line %d\n", yylineno);pErr(yylineno);}
#line 2032 "parser.tab.c"
    break;

  case 135: /* ERROR_ASSIGNMENT_STATEMENT: IDENTIFIER error EXPRESSION SEMICOLON  */
#line 323 "parser.y"
                                                              {printf("\nError expected '=' in assignment statement at line %d\n", yylineno);pErr(yylineno);}
#line 2038 "parser.tab.c"
    break;

  case 136: /* BLOCK: '{' PROGRAM '}'  */
#line 327 "parser.y"
                                              {printf("Parsed Block\n");}
#line 2044 "parser.tab.c"
    break;

  case 137: /* FUNC_CALL: IDENTIFIER '(' USED_ARGS ')'  */
#line 333 "parser.y"
                                              { printf("Parsed Funciton Call\n");}
#line 2050 "parser.tab.c"
    break;

  case 139: /* ERROR_FUNC_CALL: IDENTIFIER error ')'  */
#line 337 "parser.y"
                                            {printf("\nError unhandled function parenthesis at line %d\n", yylineno);pErr(yylineno);}
#line 2056 "parser.tab.c"
    break;

  case 144: /* ERROR_USED_ARGS: error ',' USED_ARGS  */
#line 346 "parser.y"
                                                           {printf("\nError Missing first argument in function's argument list or erronous ',' at line %d\n", yylineno);pErr(yylineno);}
#line 2062 "parser.tab.c"
    break;

  case 163: /* EXPRESSION: ERROR_EXPRESSION  */
#line 371 "parser.y"
                                             {printf("\nError Expression error at line %d\n", yylineno);pErr(yylineno);}
#line 2068 "parser.tab.c"
    break;

  case 178: /* ERROR_COMPARISONSTT: error GT EXPRESSION  */
#line 398 "parser.y"
                                                                    {printf("\nError Missing left operand before '>' at line %d\n", yylineno);pErr(yylineno);}
#line 2074 "parser.tab.c"
    break;

  case 179: /* ERROR_COMPARISONSTT: EXPRESSION GT error  */
#line 399 "parser.y"
                                                                    {printf("\nError Missing right operand after '>' at line %d\n", yylineno);pErr(yylineno);}
#line 2080 "parser.tab.c"
    break;

  case 180: /* ERROR_COMPARISONSTT: error LT EXPRESSION  */
#line 400 "parser.y"
                                                                    {printf("\nError Missing left operand before '<' at line %d\n", yylineno);pErr(yylineno);}
#line 2086 "parser.tab.c"
    break;

  case 181: /* ERROR_COMPARISONSTT: EXPRESSION LT error  */
#line 401 "parser.y"
                                                                    {printf("\nError Missing right operand after '<' at line %d\n", yylineno);pErr(yylineno);}
#line 2092 "parser.tab.c"
    break;

  case 182: /* ERROR_COMPARISONSTT: error EQUALITY EXPRESSION  */
#line 402 "parser.y"
                                                                    {printf("\nError Missing left operand before '==' at line %d\n", yylineno);pErr(yylineno);}
#line 2098 "parser.tab.c"
    break;

  case 183: /* ERROR_COMPARISONSTT: EXPRESSION EQUALITY error  */
#line 403 "parser.y"
                                                                    {printf("\nError Missing right operand after '==' at line %d\n", yylineno);pErr(yylineno);}
#line 2104 "parser.tab.c"
    break;

  case 184: /* ERROR_COMPARISONSTT: error NEG_EQUALITY EXPRESSION  */
#line 404 "parser.y"
                                                                    {printf("\nError Missing left operand before '!=' at line %d\n", yylineno);pErr(yylineno);}
#line 2110 "parser.tab.c"
    break;

  case 185: /* ERROR_COMPARISONSTT: EXPRESSION NEG_EQUALITY error  */
#line 405 "parser.y"
                                                                    {printf("\nError Missing right operand after '!=' at line %d\n", yylineno);pErr(yylineno);}
#line 2116 "parser.tab.c"
    break;

  case 186: /* ERROR_COMPARISONSTT: LOGIC_NOT error  */
#line 406 "parser.y"
                                                                    {printf("\nError Missing right operand after the negating operator '!' at line %d\n", yylineno);pErr(yylineno);}
#line 2122 "parser.tab.c"
    break;

  case 187: /* ERROR_COMPARISONSTT: error LOGIC_AND EXPRESSION  */
#line 407 "parser.y"
                                                                    {printf("\nError Missing left operand before 'and' operator at line %d\n", yylineno);pErr(yylineno);}
#line 2128 "parser.tab.c"
    break;

  case 188: /* ERROR_COMPARISONSTT: EXPRESSION LOGIC_AND error  */
#line 408 "parser.y"
                                                                    {printf("\nError Missing right operand after 'and' operator at line %d\n", yylineno);pErr(yylineno);}
#line 2134 "parser.tab.c"
    break;

  case 189: /* ERROR_COMPARISONSTT: error LOGIC_OR EXPRESSION  */
#line 409 "parser.y"
                                                                    {printf("\nError Missing left operand before 'or' operator at line %d\n", yylineno);pErr(yylineno);}
#line 2140 "parser.tab.c"
    break;

  case 190: /* ERROR_COMPARISONSTT: EXPRESSION LOGIC_OR error  */
#line 410 "parser.y"
                                                                    {printf("\nError Missing right operand after 'or' operator at line %d\n", yylineno);pErr(yylineno);}
#line 2146 "parser.tab.c"
    break;

  case 191: /* ERROR_COMPARISONSTT: error LT EQ EXPRESSION  */
#line 411 "parser.y"
                                                                    {printf("\nError Missing left operand before '<=' operator at line %d\n", yylineno);pErr(yylineno);}
#line 2152 "parser.tab.c"
    break;

  case 192: /* ERROR_COMPARISONSTT: EXPRESSION LT EQ error  */
#line 412 "parser.y"
                                                                    {printf("\nError Missing right operand after '<=' operator at line %d\n", yylineno);pErr(yylineno);}
#line 2158 "parser.tab.c"
    break;

  case 193: /* ERROR_COMPARISONSTT: error GT EQ EXPRESSION  */
#line 413 "parser.y"
                                                                    {printf("\nError Missing left operand before '>=' operator at line %d\n", yylineno);pErr(yylineno);}
#line 2164 "parser.tab.c"
    break;

  case 194: /* ERROR_COMPARISONSTT: EXPRESSION GT EQ error  */
#line 414 "parser.y"
                                                                    {printf("\nError Missing right operand after '>=' operator at line %d\n", yylineno);pErr(yylineno);}
#line 2170 "parser.tab.c"
    break;


#line 2174 "parser.tab.c"

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

#line 424 "parser.y"


void yyerror(char *s) { 
 fprintf(stderr, "line %d: %s\n", yylineno, s); 
} 
int yywrap()
{
    return 1;
}


void pErr(int lineNUMM)
{
    FILE *assfile = fopen("ParsingErrors.txt", "a");
    char buf [50];
    itoa(lineNUMM, buf,10);
    fprintf(assfile, "%s ", buf);
    fclose (assfile);
};

int main(int argc, char *argv[])
{ 
    yy_flex_debug = 1;
    yyin = fopen(argv[1], "r");
    yyparse();

    return 0;
}
