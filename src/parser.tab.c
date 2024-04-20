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
  YYSYMBOL_45_ = 45,                       /* '('  */
  YYSYMBOL_46_ = 46,                       /* ':'  */
  YYSYMBOL_47_ = 47,                       /* '{'  */
  YYSYMBOL_48_ = 48,                       /* ','  */
  YYSYMBOL_49_ = 49,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 50,                  /* $accept  */
  YYSYMBOL_PROGRAM = 51,                   /* PROGRAM  */
  YYSYMBOL_STATEMENT = 52,                 /* STATEMENT  */
  YYSYMBOL_ERROR_STATEMENT = 53,           /* ERROR_STATEMENT  */
  YYSYMBOL_TYPE = 54,                      /* TYPE  */
  YYSYMBOL_EXPRESSION = 55,                /* EXPRESSION  */
  YYSYMBOL_ERROR_EXPRESSION = 56,          /* ERROR_EXPRESSION  */
  YYSYMBOL_COMPARISON = 57,                /* COMPARISON  */
  YYSYMBOL_ERROR_COMPARISON = 58,          /* ERROR_COMPARISON  */
  YYSYMBOL_DECLARATION_STATEMENT = 59,     /* DECLARATION_STATEMENT  */
  YYSYMBOL_ERROR_DECLARATION_STATEMENT = 60, /* ERROR_DECLARATION_STATEMENT  */
  YYSYMBOL_DECLARATION_TAIL = 61,          /* DECLARATION_TAIL  */
  YYSYMBOL_ERROR_DECLARATION_TAIL = 62,    /* ERROR_DECLARATION_TAIL  */
  YYSYMBOL_RETURN_STATEMENT = 63,          /* RETURN_STATEMENT  */
  YYSYMBOL_HELPER_SWITCH = 64,             /* HELPER_SWITCH  */
  YYSYMBOL_SWITCH_STATEMENT = 65,          /* SWITCH_STATEMENT  */
  YYSYMBOL_DEFAULTCASE = 66,               /* DEFAULTCASE  */
  YYSYMBOL_ERROR_DEFAULTCASE = 67,         /* ERROR_DEFAULTCASE  */
  YYSYMBOL_CASES = 68,                     /* CASES  */
  YYSYMBOL_ERROR_CASES = 69,               /* ERROR_CASES  */
  YYSYMBOL_70_1 = 70,                      /* $@1  */
  YYSYMBOL_ERROR_SWITCH_STATEMENT = 71,    /* ERROR_SWITCH_STATEMENT  */
  YYSYMBOL_72_2 = 72,                      /* $@2  */
  YYSYMBOL_73_3 = 73,                      /* $@3  */
  YYSYMBOL_74_4 = 74,                      /* $@4  */
  YYSYMBOL_75_5 = 75,                      /* $@5  */
  YYSYMBOL_FUNC_DECLARATION_STATEMENT = 76, /* FUNC_DECLARATION_STATEMENT  */
  YYSYMBOL_ERROR_FUNC_DECLARATION_STATEMENT = 77, /* ERROR_FUNC_DECLARATION_STATEMENT  */
  YYSYMBOL_78_6 = 78,                      /* $@6  */
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
  YYSYMBOL_IF_STATEMENT = 89,              /* IF_STATEMENT  */
  YYSYMBOL_WHILE_STATEMENT = 90,           /* WHILE_STATEMENT  */
  YYSYMBOL_DO_WHILE_STATEMENT = 91,        /* DO_WHILE_STATEMENT  */
  YYSYMBOL_ERROR_DO_WHILE = 92,            /* ERROR_DO_WHILE  */
  YYSYMBOL_FOR_STATEMENT = 93,             /* FOR_STATEMENT  */
  YYSYMBOL_ERROR_FOR_LOOP = 94,            /* ERROR_FOR_LOOP  */
  YYSYMBOL_95_7 = 95,                      /* $@7  */
  YYSYMBOL_96_8 = 96,                      /* $@8  */
  YYSYMBOL_HELPER_ASSIGNMENT_RULE = 97,    /* HELPER_ASSIGNMENT_RULE  */
  YYSYMBOL_ASSIGNMENT_STATEMENT = 98,      /* ASSIGNMENT_STATEMENT  */
  YYSYMBOL_ERROR_ASSIGNMENT_STATEMENT = 99, /* ERROR_ASSIGNMENT_STATEMENT  */
  YYSYMBOL_BLOCK = 100,                    /* BLOCK  */
  YYSYMBOL_FUNC_CALL = 101,                /* FUNC_CALL  */
  YYSYMBOL_ERROR_FUNC_CALL = 102,          /* ERROR_FUNC_CALL  */
  YYSYMBOL_USED_ARGS = 103,                /* USED_ARGS  */
  YYSYMBOL_ERROR_USED_ARGS = 104           /* ERROR_USED_ARGS  */
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
#define YYLAST   1069

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  171
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  329

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
      45,    44,     2,     2,    48,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    46,    49,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,    43,     2,     2,     2,     2,
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
       0,    99,    99,   100,   104,   105,   106,   108,   109,   111,
     112,   113,   114,   115,   116,   118,   119,   120,   122,   125,
     126,   127,   132,   133,   134,   135,   140,   141,   142,   143,
     144,   145,   147,   149,   150,   152,   153,   154,   155,   156,
     157,   158,   160,   161,   162,   165,   166,   167,   168,   172,
     173,   174,   176,   177,   179,   180,   181,   182,   184,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   208,   209,   210,   213,
     214,   215,   218,   219,   220,   223,   224,   228,   229,   233,
     236,   237,   240,   241,   244,   247,   248,   249,   250,   253,
     253,   254,   257,   257,   258,   258,   259,   259,   260,   260,
     261,   266,   267,   268,   269,   270,   273,   273,   276,   277,
     278,   281,   284,   289,   290,   293,   294,   295,   296,   298,
     298,   301,   302,   308,   309,   310,   313,   314,   315,   316,
     320,   321,   326,   327,   332,   336,   337,   340,   341,   342,
     343,   349,   350,   353,   353,   354,   354,   360,   361,   364,
     365,   368,   369,   374,   381,   382,   385,   388,   389,   390,
     392,   393
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
  "FLOAT_DIGIT", "'}'", "')'", "'('", "':'", "'{'", "','", "';'",
  "$accept", "PROGRAM", "STATEMENT", "ERROR_STATEMENT", "TYPE",
  "EXPRESSION", "ERROR_EXPRESSION", "COMPARISON", "ERROR_COMPARISON",
  "DECLARATION_STATEMENT", "ERROR_DECLARATION_STATEMENT",
  "DECLARATION_TAIL", "ERROR_DECLARATION_TAIL", "RETURN_STATEMENT",
  "HELPER_SWITCH", "SWITCH_STATEMENT", "DEFAULTCASE", "ERROR_DEFAULTCASE",
  "CASES", "ERROR_CASES", "$@1", "ERROR_SWITCH_STATEMENT", "$@2", "$@3",
  "$@4", "$@5", "FUNC_DECLARATION_STATEMENT",
  "ERROR_FUNC_DECLARATION_STATEMENT", "$@6", "ARGS", "ERROR_ARGS",
  "ARG_DECL", "ENUM_DECLARATION_STATEMENT",
  "ERROR_ENUM_DECLARATION_STATEMENT", "ENUM_HELPER", "ENUM_ARGS",
  "ENUM_DEFINED_ARGS", "ERROR_ENUM_DEFINED_ARGS", "ENUM_CALL_STATEMENT",
  "IF_STATEMENT", "WHILE_STATEMENT", "DO_WHILE_STATEMENT",
  "ERROR_DO_WHILE", "FOR_STATEMENT", "ERROR_FOR_LOOP", "$@7", "$@8",
  "HELPER_ASSIGNMENT_RULE", "ASSIGNMENT_STATEMENT",
  "ERROR_ASSIGNMENT_STATEMENT", "BLOCK", "FUNC_CALL", "ERROR_FUNC_CALL",
  "USED_ARGS", "ERROR_USED_ARGS", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-176)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-171)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -176,   324,  -176,   759,  -176,  -176,  -176,    23,  -176,   -25,
     459,    26,   -13,   580,    12,   580,     3,  -176,   589,   580,
      -7,   441,  -176,  -176,  -176,   580,  -176,  -176,  -176,   -27,
     887,  -176,  -176,  -176,  -176,  -176,    33,     8,  -176,  -176,
    -176,   -10,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,   482,  -176,  -176,  -176,  -176,  -176,   580,   580,   580,
     580,   221,   495,  -176,   580,   580,   580,   580,    41,    61,
    -176,  -176,    -8,     4,    62,  1006,  -176,   145,   972,  -176,
       7,  -176,   723,   414,   274,   723,    91,    18,    42,  1020,
     184,  -176,   508,  -176,     2,   531,   783,   369,    83,   194,
     612,   625,   635,   648,  -176,  -176,   544,   557,  -176,   580,
     580,   580,   580,   580,   580,  -176,   580,    -2,    84,  -176,
       6,  -176,  -176,  -176,   904,  1020,  1020,  1032,  1032,   580,
      74,   580,    74,   184,    74,    74,   184,  -176,  -176,    71,
       0,   -20,    29,    69,  -176,  -176,  -176,    51,    76,    75,
      77,     5,   117,   414,   414,   414,  -176,    93,  -176,     1,
    -176,   921,   102,  -176,   181,   706,    98,  -176,  -176,  -176,
     580,   661,  -176,  -176,  -176,   118,    56,  -176,    86,   115,
    1020,   115,  1020,   270,  1032,   270,  1032,    42,   671,    74,
      42,   684,    74,   184,   184,   184,    74,    74,   184,   740,
     -10,  -176,  -176,   140,  -176,  -176,  -176,    74,    74,   112,
      71,    95,   119,   116,   120,  -176,   -10,    86,   125,   121,
    -176,   137,   147,   122,   149,  -176,  -176,   -10,   414,   414,
     414,   580,   580,   580,   580,  -176,   192,   531,   531,  -176,
     938,   989,   955,  -176,   -10,   171,   182,    42,    74,    42,
      74,   -10,  -176,   580,  -176,   187,   179,  -176,  -176,   183,
    -176,   186,  -176,  -176,  -176,  -176,  -176,  -176,   -10,    86,
       8,   185,     8,     8,  -176,   193,   414,   196,   804,   825,
     846,   867,  -176,  -176,  -176,  -176,  -176,  -176,  -176,   -10,
    -176,     8,   723,  -176,  -176,   197,  -176,  -176,   195,     8,
     200,   202,  -176,   212,   -10,   215,   226,   227,   233,  -176,
    -176,  -176,   235,  -176,  -176,   224,  -176,  -176,   -10,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,   -10,  -176
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,     0,    22,    23,    25,     0,    24,     0,
       0,     0,     0,     0,     0,     0,     0,    29,     0,     0,
      31,     0,    30,    27,    28,     0,     3,     2,    18,     0,
       0,    44,    32,    58,     4,    78,     0,    97,    13,    91,
      17,     0,     7,   124,     8,     9,    10,    12,   146,    11,
     152,     0,     5,   160,    16,    42,   165,     0,     0,     0,
       0,     0,     0,    19,     0,     0,     0,     0,     0,     0,
      20,    21,     0,     0,     0,     0,    31,     0,    88,   102,
       0,    14,     0,     0,     0,     0,     0,     0,    67,    51,
      37,   158,     0,   157,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    34,    33,     0,     0,     6,     0,
       0,     0,     0,     0,     0,    15,     0,     0,    96,    93,
       0,    98,   115,   161,     0,    68,    70,    63,    65,     0,
      59,     0,    61,    45,    46,    47,    48,    79,    80,     0,
       0,   132,     0,     0,   129,   130,   135,     0,     0,     0,
     104,     0,   142,     0,     0,     0,   144,     0,   149,     0,
     166,     0,     0,   141,     0,   168,     0,   169,    43,   163,
       0,     0,    83,    77,    84,     0,     0,    76,     0,    69,
      49,    71,    50,    64,    52,    66,    53,    60,     0,    56,
      62,     0,    54,    35,    36,    38,    39,    40,    41,     0,
       0,    94,   101,     0,   110,    90,   159,    74,    72,     0,
       0,     0,     0,     0,     0,   126,     0,     0,     0,     0,
     120,   119,     0,     0,     0,   108,    89,     0,     0,     0,
       0,     0,     0,     0,     0,   162,     0,     0,     0,   164,
       0,     0,     0,    81,     0,     0,     0,    75,    57,    73,
      55,     0,    92,     0,   125,     0,     0,   139,   138,   134,
     137,   132,   131,   127,   123,   114,   121,   122,     0,     0,
      97,     0,    97,    97,   143,     0,     0,     0,     0,     0,
       0,     0,   140,   171,   167,    85,    86,    82,   113,     0,
     117,    97,     0,   128,   136,     0,   112,   118,     0,    97,
       0,     0,   153,     0,     0,     0,     0,     0,     0,   111,
      95,   100,     0,   133,   103,     0,   107,   109,     0,   155,
     151,   147,   148,   145,   150,   105,   154,     0,   156
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -176,   242,   -68,  -176,  -138,    16,  -176,  -176,  -176,  -176,
    -176,   172,  -176,  -176,  -176,  -176,   152,  -176,  -116,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -175,
    -176,  -176,  -176,  -176,  -122,    60,   -21,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
     -16,  -176,  -176,  -132,  -176
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,   173,   174,    36,    37,    38,   118,   119,   120,   121,
     203,    39,   149,   223,   224,   273,    40,    41,   178,   219,
     220,   221,    42,    43,   143,   144,   145,   146,    44,    45,
      46,    47,    48,    49,    50,   318,   327,    51,    52,    53,
      54,    55,    56,   166,   167
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      87,   245,   232,   246,    86,   140,   225,   204,   150,   218,
     211,    98,    99,    83,    74,   153,   155,   209,    81,   158,
     214,   116,   117,    91,    72,   122,    78,    79,   212,    82,
     213,    85,   162,   163,    89,    90,   159,    26,   218,   139,
     218,    96,   266,   141,   200,    26,   233,   210,   234,   205,
      26,   142,   226,   151,     4,     5,     6,    84,     8,     4,
       5,     6,    73,     8,   115,    80,   152,   124,   141,   156,
      61,    62,   137,   125,   126,   127,   128,   130,   132,   218,
     133,   134,   135,   136,   170,   228,   229,   230,   255,     4,
       5,     6,   138,     8,   297,   216,   256,   -99,   117,   217,
     244,   201,   106,   107,   217,   283,   284,   147,   161,   157,
     141,   165,   215,   171,   172,   257,   180,   182,   184,   186,
     160,   222,   189,   192,  -106,   193,   194,   195,   196,   197,
     198,   218,   199,   227,   217,   258,   259,   260,   231,    59,
      60,   236,   239,    61,    62,   207,   148,   208,    64,   243,
      65,    66,    67,   253,   298,   254,   300,   301,   261,   263,
     275,   276,   277,   264,   267,   268,   -26,   -26,   271,   -26,
     -26,   -26,   -26,   -26,   -26,   310,   -26,   -26,   -26,   -26,
     -26,   -26,   -26,   315,   252,   269,   240,   242,   -26,   -26,
      95,   -26,   -26,   -26,   270,   170,   272,  -116,  -116,  -116,
     265,  -116,    57,    58,   248,    59,    60,   250,   303,    61,
      62,   274,   106,   107,    64,   289,    65,    66,    67,   112,
     113,   114,    75,   282,   171,   172,   290,   294,   288,   237,
     293,   295,   299,   175,   212,   291,   312,   302,   314,   176,
     304,    17,  -116,   316,    18,   317,   321,   278,   279,   280,
     281,   129,   296,   165,   165,    19,   319,   322,   323,    76,
      77,    22,    23,    24,   324,   211,    25,   325,    97,   292,
     202,   177,   262,   309,   313,     3,   311,     4,     5,     6,
       7,     8,     0,     9,    10,    11,    12,     0,   320,    13,
       0,    14,    15,    16,    17,     0,     0,    18,    61,    62,
       0,     0,   326,    64,     0,    65,    66,    67,    19,     0,
       0,   328,    20,    21,    22,    23,    24,     0,     0,    25,
       0,    26,     0,   154,     2,     3,     0,     4,     5,     6,
       7,     8,     0,     9,    10,    11,    12,     0,     0,    13,
       0,    14,    15,    16,    17,     0,     0,    18,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    19,     0,
       0,     0,    20,    21,    22,    23,    24,     0,     0,    25,
       3,    26,     4,     5,     6,     7,     8,     0,     9,    10,
      11,    12,     0,     0,    13,     0,    14,    15,    16,    17,
       0,     0,    18,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    19,     0,     0,     0,    20,    21,    22,
      23,    24,   169,     0,    25,     3,    26,     4,     5,     6,
       7,     8,     0,     9,    10,    11,    12,     0,     0,    13,
       0,    14,    15,    16,    17,     0,     0,    18,     0,     0,
       0,     0,    92,     0,     0,     0,     0,     0,    19,     0,
       0,     0,    20,    21,    22,    23,    24,     0,     0,    25,
      75,    26,   -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,
     -26,    93,   -26,   -26,   -26,   -26,   -26,   -26,   -26,    17,
      94,     0,    18,    75,     0,     0,    95,     0,     0,     0,
     -87,     0,     0,    19,     0,     0,    75,    76,    77,    22,
      23,    24,    17,     0,    25,    18,     0,     0,     0,    75,
       0,     0,     0,   123,     0,    17,    19,     0,    18,     0,
      76,    77,    22,    23,    24,   131,     0,    25,    17,    19,
       0,    18,   164,    76,    77,    22,    23,    24,     0,     0,
      25,     0,    19,     0,     0,   187,    76,    77,    22,    23,
      24,    17,   160,    25,    18,     0,     0,     0,   190,     0,
       0,     0,     0,     0,    17,    19,     0,    18,     0,    76,
      77,    22,    23,    24,   188,  -170,    25,    17,    19,     0,
      18,    75,    76,    77,    22,    23,    24,   191,     0,    25,
      88,    19,     0,     0,     0,    76,    77,    22,    23,    24,
      17,     0,    25,    18,     0,     0,     0,     0,     0,    17,
       0,     0,    18,   179,    19,     0,     0,     0,    76,    77,
      22,    23,    24,    19,     0,    25,   181,    76,    77,    22,
      23,    24,    17,     0,    25,    18,   183,     0,     0,     0,
       0,     0,     0,     0,     0,    17,    19,     0,    18,   185,
      76,    77,    22,    23,    24,    17,     0,    25,    18,    19,
       0,     0,   241,    76,    77,    22,    23,    24,    17,    19,
      25,    18,   247,    76,    77,    22,    23,    24,     0,     0,
      25,    17,    19,     0,    18,   249,    76,    77,    22,    23,
      24,    17,     0,    25,    18,    19,     0,     0,     0,    76,
      77,    22,    23,    24,    17,    19,    25,    18,     0,    76,
      77,    22,    23,    24,     0,     0,    25,     0,    19,     0,
       0,     0,    76,    77,    22,    23,    24,   100,   101,    25,
     102,   103,   104,   105,   106,   107,     0,     0,   109,   110,
     111,   112,   113,   114,   100,   101,     0,   102,   103,   104,
     105,   106,   107,     0,   238,   109,   110,   111,   112,   113,
     114,   100,   101,     0,   102,   103,   104,   105,   106,   107,
      26,     0,   109,   110,   111,   112,   113,   114,     0,     0,
      57,    58,     0,    59,    60,     0,   251,    61,    62,     0,
      63,     0,    64,     0,    65,    66,    67,    68,    69,     0,
       0,     0,    70,    71,   100,   101,     0,   102,   103,   104,
     105,   106,   107,     0,     0,   109,   110,   111,   112,   113,
     114,     0,     0,     0,     0,   100,   101,   168,   102,   103,
     104,   105,   106,   107,     0,     0,   109,   110,   111,   112,
     113,   114,     0,     0,     0,     0,   100,   101,   305,   102,
     103,   104,   105,   106,   107,     0,     0,   109,   110,   111,
     112,   113,   114,     0,     0,     0,     0,   100,   101,   306,
     102,   103,   104,   105,   106,   107,     0,     0,   109,   110,
     111,   112,   113,   114,     0,     0,     0,     0,   100,   101,
     307,   102,   103,   104,   105,   106,   107,     0,     0,   109,
     110,   111,   112,   113,   114,     0,     0,     0,   100,   101,
     308,   102,   103,   104,   105,   106,   107,     0,   108,   109,
     110,   111,   112,   113,   114,   100,   101,     0,   102,   103,
     104,   105,   106,   107,     0,   206,   109,   110,   111,   112,
     113,   114,   100,   101,     0,   102,   103,   104,   105,   106,
     107,     0,   235,   109,   110,   111,   112,   113,   114,   100,
     101,     0,   102,   103,   104,   105,   106,   107,     0,   285,
     109,   110,   111,   112,   113,   114,   100,   101,     0,   102,
     103,   104,   105,   106,   107,     0,   287,   109,   110,   111,
     112,   113,   114,   100,   101,     0,   102,   103,   104,   105,
     106,   107,     0,     0,   109,   110,   111,   112,   113,   114,
      57,    58,     0,    59,    60,     0,     0,    61,    62,     0,
     286,     0,    64,     0,    65,    66,    67,    57,    58,     0,
      59,    60,     0,     0,    61,    62,     0,     0,     0,    64,
       0,    65,    66,    67,   102,   103,   104,   105,   106,   107,
       0,     0,   109,   110,   111,   112,   113,   114,   104,   105,
     106,   107,     0,     0,   109,   110,   111,   112,   113,   114
};

static const yytype_int16 yycheck[] =
{
      16,   176,     1,   178,     1,     1,     1,     1,     1,   147,
      30,    38,    39,     1,    39,    83,    84,   139,    31,     1,
     142,    13,    14,    30,     1,    41,    10,     1,    48,    13,
       1,    15,    30,    31,    18,    19,    18,    47,   176,    47,
     178,    25,   217,    39,    46,    47,    45,    47,    47,    43,
      47,    47,    47,    46,     3,     4,     5,    45,     7,     3,
       4,     5,    39,     7,    31,    39,    82,    51,    39,    85,
      28,    29,    31,    57,    58,    59,    60,    61,    62,   217,
      64,    65,    66,    67,     1,   153,   154,   155,   210,     3,
       4,     5,    31,     7,   269,    44,     1,    13,    14,    48,
      44,   117,    28,    29,    48,   237,   238,    45,    92,    18,
      39,    95,    43,    30,    31,    20,   100,   101,   102,   103,
      44,    46,   106,   107,    47,   109,   110,   111,   112,   113,
     114,   269,   116,    16,    48,    40,    41,    42,    45,    24,
      25,    39,    44,    28,    29,   129,     1,   131,    33,    31,
      35,    36,    37,    13,   270,    43,   272,   273,    39,    43,
     228,   229,   230,    43,    39,    44,    21,    22,    46,    24,
      25,    26,    27,    28,    29,   291,    31,    32,    33,    34,
      35,    36,    37,   299,   200,    48,   170,   171,    43,    44,
      45,    46,    47,    48,    47,     1,    47,     3,     4,     5,
     216,     7,    21,    22,   188,    24,    25,   191,   276,    28,
      29,   227,    28,    29,    33,    44,    35,    36,    37,    35,
      36,    37,     1,    31,    30,    31,    44,    48,   244,    48,
      43,    48,    47,    39,    48,   251,    39,    44,    43,    45,
      44,    20,    48,    43,    23,    43,    31,   231,   232,   233,
     234,    30,   268,   237,   238,    34,    44,    31,    31,    38,
      39,    40,    41,    42,    31,    30,    45,    43,    26,   253,
     118,    99,   212,   289,   295,     1,   292,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    -1,   304,    15,
      -1,    17,    18,    19,    20,    -1,    -1,    23,    28,    29,
      -1,    -1,   318,    33,    -1,    35,    36,    37,    34,    -1,
      -1,   327,    38,    39,    40,    41,    42,    -1,    -1,    45,
      -1,    47,    -1,    49,     0,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    -1,    -1,    15,
      -1,    17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    38,    39,    40,    41,    42,    -1,    -1,    45,
       1,    47,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    -1,    -1,    15,    -1,    17,    18,    19,    20,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    -1,    45,     1,    47,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    -1,    -1,    15,
      -1,    17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    38,    39,    40,    41,    42,    -1,    -1,    45,
       1,    47,    21,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    20,
      39,    -1,    23,     1,    -1,    -1,    45,    -1,    -1,    -1,
      31,    -1,    -1,    34,    -1,    -1,     1,    38,    39,    40,
      41,    42,    20,    -1,    45,    23,    -1,    -1,    -1,     1,
      -1,    -1,    -1,    31,    -1,    20,    34,    -1,    23,    -1,
      38,    39,    40,    41,    42,    30,    -1,    45,    20,    34,
      -1,    23,     1,    38,    39,    40,    41,    42,    -1,    -1,
      45,    -1,    34,    -1,    -1,     1,    38,    39,    40,    41,
      42,    20,    44,    45,    23,    -1,    -1,    -1,     1,    -1,
      -1,    -1,    -1,    -1,    20,    34,    -1,    23,    -1,    38,
      39,    40,    41,    42,    30,    44,    45,    20,    34,    -1,
      23,     1,    38,    39,    40,    41,    42,    30,    -1,    45,
       1,    34,    -1,    -1,    -1,    38,    39,    40,    41,    42,
      20,    -1,    45,    23,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    23,     1,    34,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    34,    -1,    45,     1,    38,    39,    40,
      41,    42,    20,    -1,    45,    23,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    34,    -1,    23,     1,
      38,    39,    40,    41,    42,    20,    -1,    45,    23,    34,
      -1,    -1,     1,    38,    39,    40,    41,    42,    20,    34,
      45,    23,     1,    38,    39,    40,    41,    42,    -1,    -1,
      45,    20,    34,    -1,    23,     1,    38,    39,    40,    41,
      42,    20,    -1,    45,    23,    34,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    20,    34,    45,    23,    -1,    38,
      39,    40,    41,    42,    -1,    -1,    45,    -1,    34,    -1,
      -1,    -1,    38,    39,    40,    41,    42,    21,    22,    45,
      24,    25,    26,    27,    28,    29,    -1,    -1,    32,    33,
      34,    35,    36,    37,    21,    22,    -1,    24,    25,    26,
      27,    28,    29,    -1,    48,    32,    33,    34,    35,    36,
      37,    21,    22,    -1,    24,    25,    26,    27,    28,    29,
      47,    -1,    32,    33,    34,    35,    36,    37,    -1,    -1,
      21,    22,    -1,    24,    25,    -1,    46,    28,    29,    -1,
      31,    -1,    33,    -1,    35,    36,    37,    38,    39,    -1,
      -1,    -1,    43,    44,    21,    22,    -1,    24,    25,    26,
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
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    21,    22,    -1,    24,    25,    26,    27,
      28,    29,    -1,    -1,    32,    33,    34,    35,    36,    37,
      21,    22,    -1,    24,    25,    -1,    -1,    28,    29,    -1,
      31,    -1,    33,    -1,    35,    36,    37,    21,    22,    -1,
      24,    25,    -1,    -1,    28,    29,    -1,    -1,    -1,    33,
      -1,    35,    36,    37,    24,    25,    26,    27,    28,    29,
      -1,    -1,    32,    33,    34,    35,    36,    37,    26,    27,
      28,    29,    -1,    -1,    32,    33,    34,    35,    36,    37
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    51,     0,     1,     3,     4,     5,     6,     7,     9,
      10,    11,    12,    15,    17,    18,    19,    20,    23,    34,
      38,    39,    40,    41,    42,    45,    47,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    63,    64,    65,    71,
      76,    77,    82,    83,    88,    89,    90,    91,    92,    93,
      94,    97,    98,    99,   100,   101,   102,    21,    22,    24,
      25,    28,    29,    31,    33,    35,    36,    37,    38,    39,
      43,    44,     1,    39,    39,     1,    38,    39,    55,     1,
      39,    31,    55,     1,    45,    55,     1,   100,     1,    55,
      55,    30,     1,    30,    39,    45,    55,    51,    38,    39,
      21,    22,    24,    25,    26,    27,    28,    29,    31,    32,
      33,    34,    35,    36,    37,    31,    13,    14,    66,    67,
      68,    69,   100,    31,    55,    55,    55,    55,    55,    30,
      55,    30,    55,    55,    55,    55,    55,    31,    31,    47,
       1,    39,    47,    84,    85,    86,    87,    45,     1,    72,
       1,    46,   100,    52,    49,    52,   100,    18,     1,    18,
      44,    55,    30,    31,     1,    55,   103,   104,    44,    43,
       1,    30,    31,    61,    62,    39,    45,    61,    78,     1,
      55,     1,    55,     1,    55,     1,    55,     1,    30,    55,
       1,    30,    55,    55,    55,    55,    55,    55,    55,    55,
      46,   100,    66,    70,     1,    43,    31,    55,    55,    84,
      47,    30,    48,     1,    84,    43,    44,    48,    54,    79,
      80,    81,    46,    73,    74,     1,    47,    16,    52,    52,
      52,    45,     1,    45,    47,    31,    39,    48,    48,    44,
      55,     1,    55,    31,    44,    79,    79,     1,    55,     1,
      55,    46,   100,    13,    43,    84,     1,    20,    40,    41,
      42,    39,    85,    43,    43,   100,    79,    39,    44,    48,
      47,    46,    47,    75,   100,    52,    52,    52,    55,    55,
      55,    55,    31,   103,   103,    31,    31,    31,   100,    44,
      44,   100,    55,    43,    48,    48,   100,    79,    68,    47,
      68,    68,    44,    52,    44,    44,    44,    44,    43,   100,
      68,   100,    39,    86,    43,    68,    43,    43,    95,    44,
     100,    31,    31,    31,    31,    43,   100,    96,   100
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    51,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    53,
      53,    53,    54,    54,    54,    54,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    56,    56,    56,    56,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    59,    59,    59,    60,
      60,    60,    61,    61,    61,    62,    62,    63,    63,    64,
      65,    65,    66,    66,    67,    68,    68,    68,    68,    70,
      69,    69,    72,    71,    73,    71,    74,    71,    75,    71,
      71,    76,    76,    76,    76,    76,    78,    77,    79,    79,
      79,    80,    81,    82,    82,    83,    83,    83,    83,    84,
      84,    85,    85,    86,    86,    86,    87,    87,    87,    87,
      88,    88,    89,    89,    90,    91,    91,    92,    92,    92,
      92,    93,    93,    95,    94,    96,    94,    97,    97,    98,
      98,    99,    99,   100,   101,   101,   102,   103,   103,   103,
     104,   104
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     1,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     3,     3,     2,     3,     3,
       3,     3,     1,     3,     1,     3,     3,     3,     3,     3,
       3,     2,     3,     3,     3,     4,     3,     4,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       3,     3,     4,     4,     4,     4,     3,     3,     1,     3,
       3,     4,     3,     1,     1,     3,     3,     1,     2,     4,
       3,     1,     3,     1,     2,     5,     1,     0,     1,     0,
       5,     2,     0,     7,     0,     8,     0,     7,     0,     7,
       3,     6,     6,     5,     5,     2,     0,     5,     3,     1,
       1,     2,     2,     5,     1,     5,     4,     5,     6,     1,
       1,     3,     1,     5,     3,     1,     4,     3,     3,     3,
       5,     3,     3,     5,     3,     7,     1,     7,     7,     3,
       7,     7,     1,     0,     8,     0,     9,     2,     2,     3,
       1,     2,     4,     3,     4,     1,     3,     3,     1,     1,
       0,     3
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
#line 1591 "parser.tab.c"
    break;

  case 7: /* STATEMENT: ENUM_DECLARATION_STATEMENT  */
#line 108 "parser.y"
                                                            {printf("Parsed Enum Declaration\n");}
#line 1597 "parser.tab.c"
    break;

  case 8: /* STATEMENT: ENUM_CALL_STATEMENT  */
#line 109 "parser.y"
                                                            {printf("Parsed Enum Usage\n");}
#line 1603 "parser.tab.c"
    break;

  case 9: /* STATEMENT: IF_STATEMENT  */
#line 111 "parser.y"
                                                            {printf("Parsed if statement\n");}
#line 1609 "parser.tab.c"
    break;

  case 10: /* STATEMENT: WHILE_STATEMENT  */
#line 112 "parser.y"
                                                            {printf("Parsed While LOOP\n");}
#line 1615 "parser.tab.c"
    break;

  case 11: /* STATEMENT: FOR_STATEMENT  */
#line 113 "parser.y"
                                                            {printf("Parsed For LOOP\n");}
#line 1621 "parser.tab.c"
    break;

  case 12: /* STATEMENT: DO_WHILE_STATEMENT  */
#line 114 "parser.y"
                                                            {printf("Parsed Do While LOOP\n");}
#line 1627 "parser.tab.c"
    break;

  case 13: /* STATEMENT: SWITCH_STATEMENT  */
#line 115 "parser.y"
                                                            {printf("Parsed Switch Statement\n");}
#line 1633 "parser.tab.c"
    break;

  case 17: /* STATEMENT: FUNC_DECLARATION_STATEMENT  */
#line 120 "parser.y"
                                                            {printf("Parsed Function Declaration\n");}
#line 1639 "parser.tab.c"
    break;

  case 19: /* ERROR_STATEMENT: error SEMICOLON  */
#line 125 "parser.y"
                                                          {printf("\nError STATEMENT at line %d\n", yylineno);pErr(yylineno);}
#line 1645 "parser.tab.c"
    break;

  case 20: /* ERROR_STATEMENT: error '}'  */
#line 126 "parser.y"
                                                          {printf("\nError STATEMENT at line %d\n", yylineno);pErr(yylineno);}
#line 1651 "parser.tab.c"
    break;

  case 21: /* ERROR_STATEMENT: error ')'  */
#line 127 "parser.y"
                                                          {printf("\nError STATEMENT at line %d\n", yylineno);pErr(yylineno);}
#line 1657 "parser.tab.c"
    break;

  case 22: /* TYPE: INT  */
#line 132 "parser.y"
                            { (yyval.str) = "int";   }
#line 1663 "parser.tab.c"
    break;

  case 23: /* TYPE: FLOAT  */
#line 133 "parser.y"
                            { (yyval.str) = "float"; }
#line 1669 "parser.tab.c"
    break;

  case 24: /* TYPE: BOOL  */
#line 134 "parser.y"
                            { (yyval.str) = "bool";  }
#line 1675 "parser.tab.c"
    break;

  case 25: /* TYPE: STRING  */
#line 135 "parser.y"
                            { (yyval.str) = "string";}
#line 1681 "parser.tab.c"
    break;

  case 44: /* EXPRESSION: ERROR_EXPRESSION  */
#line 162 "parser.y"
                                             {printf("\nError Expression error at line %d\n", yylineno);pErr(yylineno);}
#line 1687 "parser.tab.c"
    break;

  case 59: /* ERROR_COMPARISON: error GT EXPRESSION  */
#line 187 "parser.y"
                                                                    {printf("\nError Missing left operand before '>' at line %d\n", yylineno);pErr(yylineno);}
#line 1693 "parser.tab.c"
    break;

  case 60: /* ERROR_COMPARISON: EXPRESSION GT error  */
#line 188 "parser.y"
                                                                    {printf("\nError Missing right operand after '>' at line %d\n", yylineno);pErr(yylineno);}
#line 1699 "parser.tab.c"
    break;

  case 61: /* ERROR_COMPARISON: error LT EXPRESSION  */
#line 189 "parser.y"
                                                                    {printf("\nError Missing left operand before '<' at line %d\n", yylineno);pErr(yylineno);}
#line 1705 "parser.tab.c"
    break;

  case 62: /* ERROR_COMPARISON: EXPRESSION LT error  */
#line 190 "parser.y"
                                                                    {printf("\nError Missing right operand after '<' at line %d\n", yylineno);pErr(yylineno);}
#line 1711 "parser.tab.c"
    break;

  case 63: /* ERROR_COMPARISON: error EQUALITY EXPRESSION  */
#line 191 "parser.y"
                                                                    {printf("\nError Missing left operand before '==' at line %d\n", yylineno);pErr(yylineno);}
#line 1717 "parser.tab.c"
    break;

  case 64: /* ERROR_COMPARISON: EXPRESSION EQUALITY error  */
#line 192 "parser.y"
                                                                    {printf("\nError Missing right operand after '==' at line %d\n", yylineno);pErr(yylineno);}
#line 1723 "parser.tab.c"
    break;

  case 65: /* ERROR_COMPARISON: error NEG_EQUALITY EXPRESSION  */
#line 193 "parser.y"
                                                                    {printf("\nError Missing left operand before '!=' at line %d\n", yylineno);pErr(yylineno);}
#line 1729 "parser.tab.c"
    break;

  case 66: /* ERROR_COMPARISON: EXPRESSION NEG_EQUALITY error  */
#line 194 "parser.y"
                                                                    {printf("\nError Missing right operand after '!=' at line %d\n", yylineno);pErr(yylineno);}
#line 1735 "parser.tab.c"
    break;

  case 67: /* ERROR_COMPARISON: LOGIC_NOT error  */
#line 195 "parser.y"
                                                                    {printf("\nError Missing right operand after the negating operator '!' at line %d\n", yylineno);pErr(yylineno);}
#line 1741 "parser.tab.c"
    break;

  case 68: /* ERROR_COMPARISON: error LOGIC_AND EXPRESSION  */
#line 196 "parser.y"
                                                                    {printf("\nError Missing left operand before 'and' operator at line %d\n", yylineno);pErr(yylineno);}
#line 1747 "parser.tab.c"
    break;

  case 69: /* ERROR_COMPARISON: EXPRESSION LOGIC_AND error  */
#line 197 "parser.y"
                                                                    {printf("\nError Missing right operand after 'and' operator at line %d\n", yylineno);pErr(yylineno);}
#line 1753 "parser.tab.c"
    break;

  case 70: /* ERROR_COMPARISON: error LOGIC_OR EXPRESSION  */
#line 198 "parser.y"
                                                                    {printf("\nError Missing left operand before 'or' operator at line %d\n", yylineno);pErr(yylineno);}
#line 1759 "parser.tab.c"
    break;

  case 71: /* ERROR_COMPARISON: EXPRESSION LOGIC_OR error  */
#line 199 "parser.y"
                                                                    {printf("\nError Missing right operand after 'or' operator at line %d\n", yylineno);pErr(yylineno);}
#line 1765 "parser.tab.c"
    break;

  case 72: /* ERROR_COMPARISON: error LT EQ EXPRESSION  */
#line 200 "parser.y"
                                                                    {printf("\nError Missing left operand before '<=' operator at line %d\n", yylineno);pErr(yylineno);}
#line 1771 "parser.tab.c"
    break;

  case 73: /* ERROR_COMPARISON: EXPRESSION LT EQ error  */
#line 201 "parser.y"
                                                                    {printf("\nError Missing right operand after '<=' operator at line %d\n", yylineno);pErr(yylineno);}
#line 1777 "parser.tab.c"
    break;

  case 74: /* ERROR_COMPARISON: error GT EQ EXPRESSION  */
#line 202 "parser.y"
                                                                    {printf("\nError Missing left operand before '>=' operator at line %d\n", yylineno);pErr(yylineno);}
#line 1783 "parser.tab.c"
    break;

  case 75: /* ERROR_COMPARISON: EXPRESSION GT EQ error  */
#line 203 "parser.y"
                                                                    {printf("\nError Missing right operand after '>=' operator at line %d\n", yylineno);pErr(yylineno);}
#line 1789 "parser.tab.c"
    break;

  case 76: /* DECLARATION_STATEMENT: TYPE IDENTIFIER DECLARATION_TAIL  */
#line 208 "parser.y"
                                                            { printf("Parsed Declaration\n"); }
#line 1795 "parser.tab.c"
    break;

  case 77: /* DECLARATION_STATEMENT: TYPE CONSTANT DECLARATION_TAIL  */
#line 209 "parser.y"
                                                            { printf("Parsed Const Declaration\n"); }
#line 1801 "parser.tab.c"
    break;

  case 79: /* ERROR_DECLARATION_STATEMENT: error CONSTANT SEMICOLON  */
#line 213 "parser.y"
                                                        {printf("\nError Missing constant type at line %d\n", yylineno);pErr(yylineno);}
#line 1807 "parser.tab.c"
    break;

  case 80: /* ERROR_DECLARATION_STATEMENT: error IDENTIFIER SEMICOLON  */
#line 214 "parser.y"
                                                        {printf("\nError Missing variable type at line %d\n", yylineno);pErr(yylineno);}
#line 1813 "parser.tab.c"
    break;

  case 81: /* ERROR_DECLARATION_STATEMENT: TYPE IDENTIFIER IDENTIFIER SEMICOLON  */
#line 215 "parser.y"
                                                        {printf("\nError unexpected identifier %s at line %d\n",(yyvsp[-1].str), yylineno);pErr(yylineno);}
#line 1819 "parser.tab.c"
    break;

  case 85: /* ERROR_DECLARATION_TAIL: error EXPRESSION SEMICOLON  */
#line 223 "parser.y"
                                                  {printf("\nError Missing '=' at line %d\n", yylineno);pErr(yylineno);}
#line 1825 "parser.tab.c"
    break;

  case 86: /* ERROR_DECLARATION_TAIL: EQ error SEMICOLON  */
#line 224 "parser.y"
                                                  {printf("\nError Missing second operand at line %d\n", yylineno);pErr(yylineno);}
#line 1831 "parser.tab.c"
    break;

  case 89: /* HELPER_SWITCH: SWITCH IDENTIFIER ':' '{'  */
#line 233 "parser.y"
                                           {strcpy(switcher, (yyvsp[-2].str));}
#line 1837 "parser.tab.c"
    break;

  case 94: /* ERROR_DEFAULTCASE: DEFAULT BLOCK  */
#line 244 "parser.y"
                              {printf("\nError missing colon ':' at DEFAULT CASE of switch, error at line %d\n", yylineno); pErr(yylineno);}
#line 1843 "parser.tab.c"
    break;

  case 99: /* $@1: %empty  */
#line 253 "parser.y"
                                            {printf("\nError DEFAULT CASE must be written at the end of the switch statement, error at line %d\n", yylineno); pErr(yylineno);}
#line 1849 "parser.tab.c"
    break;

  case 101: /* ERROR_CASES: DEFAULTCASE DEFAULTCASE  */
#line 254 "parser.y"
                                            {printf("\nError only 1 DEFAULT CASE is allowed in the switch statement error, at line %d\n", yylineno); pErr(yylineno);}
#line 1855 "parser.tab.c"
    break;

  case 102: /* $@2: %empty  */
#line 257 "parser.y"
                                                {printf("\nError Missing identifier for switch statement at line %d\n", yylineno);pErr(yylineno);}
#line 1861 "parser.tab.c"
    break;

  case 104: /* $@3: %empty  */
#line 258 "parser.y"
                                                {printf("\nError unexpected identifier '%s' at switch statement at line %d\n",yylval, yylineno); pErr(yylineno);}
#line 1867 "parser.tab.c"
    break;

  case 106: /* $@4: %empty  */
#line 259 "parser.y"
                                                {printf("\nError Missing colon ':' for switch statement (switchs must have a colon) at line %d\n", yylineno);pErr(yylineno);}
#line 1873 "parser.tab.c"
    break;

  case 108: /* $@5: %empty  */
#line 260 "parser.y"
                                                {printf("\nError Missing '{' for switch statement at line %d\n", yylineno);pErr(yylineno);}
#line 1879 "parser.tab.c"
    break;

  case 110: /* ERROR_SWITCH_STATEMENT: HELPER_SWITCH CASES error  */
#line 261 "parser.y"
                                                 {printf("\nError unclosed '}' for switch statement at line %d\n", yylineno);pErr(yylineno);}
#line 1885 "parser.tab.c"
    break;

  case 116: /* $@6: %empty  */
#line 273 "parser.y"
                                  {printf("\nError unhandled function parenthesis at line %d for function %s\n", yylineno, (yyvsp[0].str));pErr(yylineno);}
#line 1891 "parser.tab.c"
    break;

  case 121: /* ERROR_ARGS: ',' ARGS  */
#line 281 "parser.y"
                           {printf("\nError unexpected ',' in argument list of function declaration at line %d\n", yylineno);pErr(yylineno);}
#line 1897 "parser.tab.c"
    break;

  case 125: /* ERROR_ENUM_DECLARATION_STATEMENT: ENUM error '{' ENUM_HELPER '}'  */
#line 293 "parser.y"
                                                           {printf("\nError missing identifier for ENUM statement at line %d\n", yylineno);pErr(yylineno);}
#line 1903 "parser.tab.c"
    break;

  case 126: /* ERROR_ENUM_DECLARATION_STATEMENT: ENUM IDENTIFIER ENUM_HELPER '}'  */
#line 294 "parser.y"
                                                           {printf("\nError missing opening curly braces for ENUM statement at line %d\n", yylineno);pErr(yylineno);}
#line 1909 "parser.tab.c"
    break;

  case 127: /* ERROR_ENUM_DECLARATION_STATEMENT: ENUM IDENTIFIER '{' error '}'  */
#line 295 "parser.y"
                                                           {printf("\nError missing arguments in the ENUM statement at line %d\n", yylineno);pErr(yylineno);}
#line 1915 "parser.tab.c"
    break;

  case 128: /* ERROR_ENUM_DECLARATION_STATEMENT: ENUM IDENTIFIER error '{' ENUM_HELPER '}'  */
#line 296 "parser.y"
                                                           {printf("\nError UnExpected IDENTIFIER in the ENUM statement at line %d\n", yylineno);pErr(yylineno);}
#line 1921 "parser.tab.c"
    break;

  case 136: /* ERROR_ENUM_DEFINED_ARGS: IDENTIFIER EQ error ','  */
#line 313 "parser.y"
                                                          {printf("\nError WRONG arguments in the ENUM statement at line %d\n", yylineno);pErr(yylineno);}
#line 1927 "parser.tab.c"
    break;

  case 137: /* ERROR_ENUM_DEFINED_ARGS: IDENTIFIER EQ FLOAT_DIGIT  */
#line 314 "parser.y"
                                                          {printf("\nError WRONG arguments in the ENUM statement at line %d\n", yylineno);pErr(yylineno);}
#line 1933 "parser.tab.c"
    break;

  case 138: /* ERROR_ENUM_DEFINED_ARGS: IDENTIFIER EQ STRING_LITERAL  */
#line 315 "parser.y"
                                                          {printf("\nError WRONG arguments in the ENUM statement at line %d\n", yylineno);pErr(yylineno);}
#line 1939 "parser.tab.c"
    break;

  case 139: /* ERROR_ENUM_DEFINED_ARGS: IDENTIFIER EQ BOOL_LITERAL  */
#line 316 "parser.y"
                                                          {printf("\nError WRONG arguments in the ENUM statement at line %d\n", yylineno);pErr(yylineno);}
#line 1945 "parser.tab.c"
    break;

  case 147: /* ERROR_DO_WHILE: DO error WHILE '(' EXPRESSION ')' SEMICOLON  */
#line 340 "parser.y"
                                                              {printf("\nError Missing DO-Block for the DO-WHILE loop at line %d\n", yylineno);pErr(yylineno);}
#line 1951 "parser.tab.c"
    break;

  case 148: /* ERROR_DO_WHILE: DO BLOCK WHILE error EXPRESSION ')' SEMICOLON  */
#line 341 "parser.y"
                                                              {printf("\nError Missing opening parenthesis '(' for the DO-WHILE loop at line %d\n", yylineno);pErr(yylineno);}
#line 1957 "parser.tab.c"
    break;

  case 149: /* ERROR_DO_WHILE: DO BLOCK error  */
#line 342 "parser.y"
                                                              {printf("\nError Missing WHILE DO-WHILE loop at line %d\n", yylineno);pErr(yylineno);}
#line 1963 "parser.tab.c"
    break;

  case 150: /* ERROR_DO_WHILE: DO BLOCK WHILE '{' EXPRESSION '}' SEMICOLON  */
#line 343 "parser.y"
                                                              {printf("\nError DO-WHILE loop accepts braces () not curly braces {} at line %d\n", yylineno);pErr(yylineno);}
#line 1969 "parser.tab.c"
    break;

  case 153: /* $@7: %empty  */
#line 353 "parser.y"
                                                               {printf("\nError Missing opening braces '(' in the FOR loop at line %d\n", yylineno);pErr(yylineno);}
#line 1975 "parser.tab.c"
    break;

  case 155: /* $@8: %empty  */
#line 354 "parser.y"
                                                               {printf("\nError unexpected semicolon in the FOR loop at line %d\n", yylineno);pErr(yylineno);}
#line 1981 "parser.tab.c"
    break;

  case 158: /* HELPER_ASSIGNMENT_RULE: CONSTANT EQ  */
#line 361 "parser.y"
                                                              {printf("\nError CONSTANTS must not be reassigned %d\n", yylineno);pErr(yylineno);}
#line 1987 "parser.tab.c"
    break;

  case 159: /* ASSIGNMENT_STATEMENT: HELPER_ASSIGNMENT_RULE EXPRESSION SEMICOLON  */
#line 364 "parser.y"
                                                              {printf("Parsed Assignment\n");}
#line 1993 "parser.tab.c"
    break;

  case 161: /* ERROR_ASSIGNMENT_STATEMENT: HELPER_ASSIGNMENT_RULE SEMICOLON  */
#line 368 "parser.y"
                                                                { printf("\nError expected expression in assignment statement at line %d\n", yylineno);pErr(yylineno);}
#line 1999 "parser.tab.c"
    break;

  case 162: /* ERROR_ASSIGNMENT_STATEMENT: IDENTIFIER error EXPRESSION SEMICOLON  */
#line 369 "parser.y"
                                                              {printf("\nError expected '=' in assignment statement at line %d\n", yylineno);pErr(yylineno);}
#line 2005 "parser.tab.c"
    break;

  case 163: /* BLOCK: '{' PROGRAM '}'  */
#line 374 "parser.y"
                                              {printf("Parsed Block\n");}
#line 2011 "parser.tab.c"
    break;

  case 164: /* FUNC_CALL: IDENTIFIER '(' USED_ARGS ')'  */
#line 381 "parser.y"
                                              { printf("Parsed Funciton Call\n");}
#line 2017 "parser.tab.c"
    break;

  case 166: /* ERROR_FUNC_CALL: IDENTIFIER error ')'  */
#line 385 "parser.y"
                                            {printf("\nError unhandled function parenthesis at line %d\n", yylineno);pErr(yylineno);}
#line 2023 "parser.tab.c"
    break;

  case 171: /* ERROR_USED_ARGS: error ',' USED_ARGS  */
#line 393 "parser.y"
                                                           {printf("\nError Missing first argument in function's argument list or erronous ',' at line %d\n", yylineno);pErr(yylineno);}
#line 2029 "parser.tab.c"
    break;


#line 2033 "parser.tab.c"

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

#line 395 "parser.y"


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
