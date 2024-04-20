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
  YYSYMBOL_46_ = 46,                       /* ','  */
  YYSYMBOL_47_ = 47,                       /* ':'  */
  YYSYMBOL_48_ = 48,                       /* '{'  */
  YYSYMBOL_49_ = 49,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 50,                  /* $accept  */
  YYSYMBOL_PROGRAM = 51,                   /* PROGRAM  */
  YYSYMBOL_STATEMENT = 52,                 /* STATEMENT  */
  YYSYMBOL_ERROR_STATEMENT = 53,           /* ERROR_STATEMENT  */
  YYSYMBOL_PRINT_STATEMENT = 54,           /* PRINT_STATEMENT  */
  YYSYMBOL_ERROR_PRINT_STATEMENT = 55,     /* ERROR_PRINT_STATEMENT  */
  YYSYMBOL_TYPE = 56,                      /* TYPE  */
  YYSYMBOL_EXPRESSION = 57,                /* EXPRESSION  */
  YYSYMBOL_ERROR_EXPRESSION = 58,          /* ERROR_EXPRESSION  */
  YYSYMBOL_COMPARISON = 59,                /* COMPARISON  */
  YYSYMBOL_ERROR_COMPARISON = 60,          /* ERROR_COMPARISON  */
  YYSYMBOL_DECLARATION_STATEMENT = 61,     /* DECLARATION_STATEMENT  */
  YYSYMBOL_ERROR_DECLARATION_STATEMENT = 62, /* ERROR_DECLARATION_STATEMENT  */
  YYSYMBOL_DECLARATION_TAIL = 63,          /* DECLARATION_TAIL  */
  YYSYMBOL_ERROR_DECLARATION_TAIL = 64,    /* ERROR_DECLARATION_TAIL  */
  YYSYMBOL_RETURN_STATEMENT = 65,          /* RETURN_STATEMENT  */
  YYSYMBOL_HELPER_SWITCH = 66,             /* HELPER_SWITCH  */
  YYSYMBOL_SWITCH_STATEMENT = 67,          /* SWITCH_STATEMENT  */
  YYSYMBOL_DEFAULTCASE = 68,               /* DEFAULTCASE  */
  YYSYMBOL_ERROR_DEFAULTCASE = 69,         /* ERROR_DEFAULTCASE  */
  YYSYMBOL_CASES = 70,                     /* CASES  */
  YYSYMBOL_ERROR_CASES = 71,               /* ERROR_CASES  */
  YYSYMBOL_72_1 = 72,                      /* $@1  */
  YYSYMBOL_ERROR_SWITCH_STATEMENT = 73,    /* ERROR_SWITCH_STATEMENT  */
  YYSYMBOL_74_2 = 74,                      /* $@2  */
  YYSYMBOL_75_3 = 75,                      /* $@3  */
  YYSYMBOL_76_4 = 76,                      /* $@4  */
  YYSYMBOL_77_5 = 77,                      /* $@5  */
  YYSYMBOL_FUNC_DECLARATION_STATEMENT = 78, /* FUNC_DECLARATION_STATEMENT  */
  YYSYMBOL_ERROR_FUNC_DECLARATION_STATEMENT = 79, /* ERROR_FUNC_DECLARATION_STATEMENT  */
  YYSYMBOL_80_6 = 80,                      /* $@6  */
  YYSYMBOL_ARGS = 81,                      /* ARGS  */
  YYSYMBOL_ERROR_ARGS = 82,                /* ERROR_ARGS  */
  YYSYMBOL_ARG_DECL = 83,                  /* ARG_DECL  */
  YYSYMBOL_ENUM_DECLARATION_STATEMENT = 84, /* ENUM_DECLARATION_STATEMENT  */
  YYSYMBOL_ERROR_ENUM_DECLARATION_STATEMENT = 85, /* ERROR_ENUM_DECLARATION_STATEMENT  */
  YYSYMBOL_ENUM_HELPER = 86,               /* ENUM_HELPER  */
  YYSYMBOL_ENUM_ARGS = 87,                 /* ENUM_ARGS  */
  YYSYMBOL_ENUM_DEFINED_ARGS = 88,         /* ENUM_DEFINED_ARGS  */
  YYSYMBOL_ERROR_ENUM_DEFINED_ARGS = 89,   /* ERROR_ENUM_DEFINED_ARGS  */
  YYSYMBOL_ENUM_CALL_STATEMENT = 90,       /* ENUM_CALL_STATEMENT  */
  YYSYMBOL_IF_STATEMENT = 91,              /* IF_STATEMENT  */
  YYSYMBOL_WHILE_STATEMENT = 92,           /* WHILE_STATEMENT  */
  YYSYMBOL_DO_WHILE_STATEMENT = 93,        /* DO_WHILE_STATEMENT  */
  YYSYMBOL_ERROR_DO_WHILE = 94,            /* ERROR_DO_WHILE  */
  YYSYMBOL_FOR_STATEMENT = 95,             /* FOR_STATEMENT  */
  YYSYMBOL_ERROR_FOR_LOOP = 96,            /* ERROR_FOR_LOOP  */
  YYSYMBOL_97_7 = 97,                      /* $@7  */
  YYSYMBOL_98_8 = 98,                      /* $@8  */
  YYSYMBOL_ASSIGNMENT_STATEMENT = 99,      /* ASSIGNMENT_STATEMENT  */
  YYSYMBOL_ERROR_ASSIGNMENT_STATEMENT = 100, /* ERROR_ASSIGNMENT_STATEMENT  */
  YYSYMBOL_BLOCK = 101,                    /* BLOCK  */
  YYSYMBOL_FUNC_CALL = 102,                /* FUNC_CALL  */
  YYSYMBOL_ERROR_FUNC_CALL = 103,          /* ERROR_FUNC_CALL  */
  YYSYMBOL_ARGUMENTS = 104,                /* ARGUMENTS  */
  YYSYMBOL_ERROR_ARGUMENTS = 105           /* ERROR_ARGUMENTS  */
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
#define YYLAST   1178

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  178
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  348

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
      45,    44,     2,     2,    46,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    47,    49,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,     2,    43,     2,     2,     2,     2,
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
       0,    99,    99,   100,   104,   105,   106,   107,   109,   110,
     112,   113,   114,   115,   116,   117,   119,   120,   121,   123,
     126,   127,   128,   133,   134,   135,   138,   139,   140,   144,
     145,   146,   147,   152,   153,   154,   155,   156,   157,   159,
     161,   162,   164,   165,   166,   167,   168,   169,   170,   172,
     173,   174,   177,   178,   179,   180,   184,   185,   186,   188,
     189,   191,   192,   193,   194,   196,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   220,   221,   222,   225,   226,   227,   230,
     231,   232,   235,   236,   240,   241,   245,   248,   249,   252,
     253,   256,   259,   260,   261,   262,   265,   265,   266,   269,
     269,   270,   270,   271,   271,   272,   272,   273,   278,   279,
     280,   281,   282,   285,   285,   288,   289,   290,   293,   296,
     301,   302,   305,   306,   307,   308,   310,   310,   313,   314,
     320,   321,   322,   325,   326,   327,   328,   332,   333,   338,
     339,   344,   348,   349,   352,   353,   354,   355,   359,   360,
     363,   363,   364,   364,   369,   370,   371,   374,   375,   376,
     381,   388,   389,   392,   395,   396,   397,   399,   400
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
  "FLOAT_DIGIT", "'}'", "')'", "'('", "','", "':'", "'{'", "';'",
  "$accept", "PROGRAM", "STATEMENT", "ERROR_STATEMENT", "PRINT_STATEMENT",
  "ERROR_PRINT_STATEMENT", "TYPE", "EXPRESSION", "ERROR_EXPRESSION",
  "COMPARISON", "ERROR_COMPARISON", "DECLARATION_STATEMENT",
  "ERROR_DECLARATION_STATEMENT", "DECLARATION_TAIL",
  "ERROR_DECLARATION_TAIL", "RETURN_STATEMENT", "HELPER_SWITCH",
  "SWITCH_STATEMENT", "DEFAULTCASE", "ERROR_DEFAULTCASE", "CASES",
  "ERROR_CASES", "$@1", "ERROR_SWITCH_STATEMENT", "$@2", "$@3", "$@4",
  "$@5", "FUNC_DECLARATION_STATEMENT", "ERROR_FUNC_DECLARATION_STATEMENT",
  "$@6", "ARGS", "ERROR_ARGS", "ARG_DECL", "ENUM_DECLARATION_STATEMENT",
  "ERROR_ENUM_DECLARATION_STATEMENT", "ENUM_HELPER", "ENUM_ARGS",
  "ENUM_DEFINED_ARGS", "ERROR_ENUM_DEFINED_ARGS", "ENUM_CALL_STATEMENT",
  "IF_STATEMENT", "WHILE_STATEMENT", "DO_WHILE_STATEMENT",
  "ERROR_DO_WHILE", "FOR_STATEMENT", "ERROR_FOR_LOOP", "$@7", "$@8",
  "ASSIGNMENT_STATEMENT", "ERROR_ASSIGNMENT_STATEMENT", "BLOCK",
  "FUNC_CALL", "ERROR_FUNC_CALL", "ARGUMENTS", "ERROR_ARGUMENTS", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-182)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-178)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -182,   305,  -182,   837,  -182,  -182,  -182,     9,  -182,   -32,
     -18,   256,    11,    -7,    24,     7,    24,     5,  -182,   625,
      24,     0,   471,  -182,  -182,  -182,    24,  -182,  -182,  -182,
    -182,  -182,   -16,   965,  -182,  -182,  -182,  -182,  -182,    14,
     102,  -182,  -182,  -182,   -12,  -182,  -182,  -182,  -182,  -182,
    -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,    24,
      24,    24,    24,   116,   489,  -182,    24,    24,    24,    24,
      39,    58,  -182,  -182,    25,     3,    24,    50,  1101,  -182,
     150,  1067,  -182,     8,  -182,   732,   446,   351,   732,    79,
      10,     4,  1115,   205,   512,   521,   544,    92,   557,   861,
     400,   113,   200,   638,   648,   661,   674,  -182,  -182,   570,
     593,  -182,    24,    24,    24,    24,    24,    24,  -182,    24,
     101,   139,  -182,    13,  -182,  -182,  1115,  1115,  1141,  1141,
      24,   131,    24,   131,   205,   131,   131,   205,  -182,  -182,
      65,    64,    42,    18,    63,  -182,  -182,  -182,   766,    89,
      96,   117,    94,     6,   152,   446,   446,   446,  -182,   124,
    -182,     1,  -182,   982,  -182,   999,  -182,  1016,   134,  -182,
     245,   818,   126,  -182,  -182,  -182,    24,   684,  -182,  -182,
    -182,   149,   219,  -182,    95,  1129,  1115,  1129,  1115,   192,
    1141,   192,  1141,     4,   697,   131,     4,   710,   131,   205,
     205,   205,   131,   131,   205,   749,   -12,  -182,  -182,   175,
    -182,  -182,   131,   131,   147,    65,    19,   160,   157,   159,
    -182,    36,   602,   -12,    95,   169,   166,  -182,   165,   167,
     171,   168,  -182,  -182,   -12,   446,   446,   446,    24,    24,
      24,    24,  -182,  -182,  -182,   182,   557,   557,  -182,  1033,
    1084,  1050,  -182,   -12,   170,   188,     4,   131,     4,   131,
     -12,  -182,    24,  -182,   195,   189,  -182,  -182,   198,  -182,
     201,  -182,  -182,  -182,  -182,  -182,   217,   792,  -182,  -182,
    -182,   -12,    95,   102,   202,   102,   102,  -182,   207,   446,
     208,   882,   903,   924,   945,  -182,  -182,  -182,  -182,  -182,
    -182,  -182,   -12,  -182,   102,   732,  -182,  -182,   210,  -182,
     227,   215,  -182,  -182,   225,   102,   228,   229,  -182,   216,
     -12,   244,   252,   253,   255,  -182,  -182,  -182,   259,  -182,
    -182,   261,  -182,   250,  -182,  -182,   -12,  -182,  -182,  -182,
    -182,  -182,  -182,  -182,  -182,  -182,   -12,  -182
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,     0,    29,    30,    32,     0,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    36,     0,
       0,    38,     0,    37,    34,    35,     0,     3,     2,    19,
       4,    25,     0,     0,    51,    39,    65,     5,    85,     0,
     104,    14,    98,    18,     0,     8,   131,     9,    10,    11,
      13,   153,    12,   159,     6,   166,    17,    49,   172,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
       0,     0,    21,    22,     0,     0,     0,     0,     0,    38,
       0,    95,   109,     0,    15,     0,     0,     0,     0,     0,
       0,    74,    58,    44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    41,    40,     0,
       0,     7,     0,     0,     0,     0,     0,     0,    16,     0,
       0,   103,   100,     0,   105,   122,    75,    77,    70,    72,
       0,    66,     0,    68,    52,    53,    54,    55,    86,    87,
       0,     0,   139,     0,     0,   136,   137,   142,     0,     0,
       0,     0,   111,     0,   149,     0,     0,     0,   151,     0,
     156,     0,   168,     0,   173,     0,   167,     0,     0,   148,
       0,   175,     0,   176,    50,   170,     0,     0,    90,    84,
      91,     0,     0,    83,     0,    76,    56,    78,    57,    71,
      59,    73,    60,    67,     0,    63,    69,     0,    61,    42,
      43,    45,    46,    47,    48,     0,     0,   101,   108,     0,
     117,    97,    81,    79,     0,     0,     0,     0,     0,     0,
     133,     0,     0,     0,     0,     0,     0,   127,   126,     0,
       0,     0,   115,    96,     0,     0,     0,     0,     0,     0,
       0,     0,   165,   169,   164,     0,     0,     0,   171,     0,
       0,     0,    88,     0,     0,     0,    82,    64,    80,    62,
       0,    99,     0,   132,     0,     0,   146,   145,   141,   144,
     139,   138,   134,   130,    26,    23,     0,     0,   121,   128,
     129,     0,     0,   104,     0,   104,   104,   150,     0,     0,
       0,     0,     0,     0,     0,   147,   178,   174,    92,    93,
      89,   120,     0,   124,   104,     0,   135,   143,     0,    27,
       0,     0,   119,   125,     0,   104,     0,     0,   160,     0,
       0,     0,     0,     0,     0,   118,   102,   107,     0,   140,
      24,     0,   110,     0,   114,   116,     0,   162,   158,   154,
     155,   152,   157,    28,   112,   161,     0,   163
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -182,   272,   -70,  -182,  -182,  -182,  -144,    15,  -182,  -182,
    -182,  -182,  -182,   224,  -182,  -182,  -182,  -182,   179,  -182,
    -178,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,
    -182,  -181,  -182,  -182,  -182,  -182,  -125,    85,    -4,  -182,
    -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,
    -182,   -17,  -182,  -182,   -84,  -182
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,   179,   180,    39,    40,    41,   121,   122,
     123,   124,   209,    42,   151,   230,   231,   286,    43,    44,
     184,   226,   227,   228,    45,    46,   144,   145,   146,   147,
      47,    48,    49,    50,    51,    52,    53,   336,   346,    54,
      55,    56,    57,    58,   172,   173
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      90,   254,   239,   255,   141,   225,    89,   232,    86,   152,
      74,   160,    82,    76,   210,   214,   155,   157,   219,   218,
     265,    77,   101,   102,    84,    78,    81,   125,   161,    85,
      94,    88,    63,    64,    92,    93,    27,   274,   225,   266,
     225,    99,   142,   279,    18,   118,   240,    19,    75,   241,
      83,   143,    87,    27,   233,   153,   211,   142,    20,   267,
     268,   269,    79,    80,    23,    24,    25,   275,   154,    26,
     138,   158,   216,   140,   126,   127,   128,   129,   131,   133,
     225,   134,   135,   136,   137,   235,   236,   237,   217,   139,
     264,   148,     4,     5,     6,   149,     8,   159,     4,     5,
       6,   313,     8,   207,   142,   314,   220,   316,   317,   163,
     165,   167,   215,   171,   176,   119,   120,    78,   186,   188,
     190,   192,   168,   169,   195,   198,   326,   199,   200,   201,
     202,   203,   204,   223,   205,   224,    18,   333,   225,    19,
     164,   224,  -113,   177,   178,   212,   130,   213,   206,    27,
      20,   150,  -106,   120,    79,    80,    23,    24,    25,   109,
     110,    26,   296,   297,   229,   288,   289,   290,   234,   238,
     248,   -33,   -33,   245,   -33,   -33,   -33,   -33,   -33,   -33,
     252,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   262,   261,
     263,   249,   251,   -33,   -33,    98,   -33,   -33,   -33,   270,
     272,   176,   273,  -123,  -123,  -123,   278,  -123,   280,   257,
     281,   282,   259,   295,   302,   283,   285,   287,   284,   319,
      63,    64,     4,     5,     6,    66,     8,    67,    68,    69,
     177,   178,   303,   109,   110,   307,   301,   277,   306,   181,
     115,   116,   117,   304,   308,   182,  -123,   217,   309,   328,
     315,   318,   320,   291,   292,   293,   294,    78,   330,   331,
     337,   171,   171,   253,   312,   224,    59,    60,   332,    61,
      62,   334,   335,    63,    64,   339,    18,   305,    66,    19,
      67,    68,    69,   340,   341,   325,   342,   -94,   327,   216,
      20,   246,   343,   344,    79,    80,    23,    24,    25,   100,
     208,    26,   271,   338,   329,     2,     3,     0,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,     0,   345,
      14,     0,    15,    16,    17,    18,   183,     0,    19,   347,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,     0,    21,    22,    23,    24,    25,     0,     0,
      26,     0,     3,    27,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,     0,     0,    14,     0,    15,    16,
      17,    18,     0,     0,    19,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,    21,
      22,    23,    24,    25,     0,     0,    26,     0,     0,    27,
     156,     3,     0,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,     0,     0,    14,     0,    15,    16,    17,
      18,     0,     0,    19,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    20,     0,     0,     0,    21,    22,
      23,    24,    25,   175,     0,    26,     0,     3,    27,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,     0,
       0,    14,     0,    15,    16,    17,    18,     0,     0,    19,
       0,     0,    95,     0,     0,     0,     0,     0,     0,     0,
      20,     0,     0,     0,    21,    22,    23,    24,    25,     0,
      78,    26,   -33,   -33,    27,   -33,   -33,   -33,   -33,   -33,
     -33,    96,   -33,   -33,   -33,   -33,   -33,   -33,   -33,    18,
      97,     0,    19,    78,     0,     0,    98,     0,     0,   132,
       0,     0,    78,    20,     0,     0,     0,    79,    80,    23,
      24,    25,    18,     0,    26,    19,     0,     0,     0,     0,
       0,    18,     0,   162,    19,    78,    20,     0,     0,     0,
      79,    80,    23,    24,    25,    20,     0,    26,   170,    79,
      80,    23,    24,    25,    18,   164,    26,    19,     0,     0,
       0,   193,     0,     0,     0,   166,     0,    18,    20,     0,
      19,     0,    79,    80,    23,    24,    25,     0,     0,    26,
      18,    20,     0,    19,   196,    79,    80,    23,    24,    25,
     194,  -177,    26,    78,    20,     0,     0,     0,    79,    80,
      23,    24,    25,    18,     0,    26,    19,     0,     0,     0,
       0,     0,    18,   197,     0,    19,    91,    20,     0,     0,
       0,    79,    80,    23,    24,    25,    20,     0,    26,   185,
      79,    80,    23,    24,    25,    18,   276,    26,    19,   187,
       0,     0,     0,     0,     0,     0,     0,     0,    18,    20,
       0,    19,   189,    79,    80,    23,    24,    25,    18,     0,
      26,    19,    20,     0,     0,   191,    79,    80,    23,    24,
      25,    18,    20,    26,    19,   250,    79,    80,    23,    24,
      25,     0,     0,    26,    18,    20,     0,    19,   256,    79,
      80,    23,    24,    25,    18,     0,    26,    19,    20,     0,
       0,   258,    79,    80,    23,    24,    25,    18,    20,    26,
      19,     0,    79,    80,    23,    24,    25,     0,     0,    26,
      18,    20,     0,    19,     0,    79,    80,    23,    24,    25,
       0,     0,    26,     0,    20,     0,     0,     0,    79,    80,
      23,    24,    25,   103,   104,    26,   105,   106,   107,   108,
     109,   110,     0,     0,   112,   113,   114,   115,   116,   117,
     103,   104,     0,   105,   106,   107,   108,   109,   110,     0,
      27,   112,   113,   114,   115,   116,   117,   103,   104,     0,
     105,   106,   107,   108,   109,   110,   260,     0,   112,   113,
     114,   115,   116,   117,     0,     0,     0,     0,     0,     0,
     221,     0,   222,   103,   104,     0,   105,   106,   107,   108,
     109,   110,     0,     0,   112,   113,   114,   115,   116,   117,
       0,     0,     0,     0,     0,     0,   310,     0,   311,   103,
     104,     0,   105,   106,   107,   108,   109,   110,     0,     0,
     112,   113,   114,   115,   116,   117,     0,     0,    59,    60,
       0,    61,    62,     0,   247,    63,    64,     0,    65,     0,
      66,     0,    67,    68,    69,    70,    71,     0,     0,     0,
      72,    73,   103,   104,     0,   105,   106,   107,   108,   109,
     110,     0,     0,   112,   113,   114,   115,   116,   117,     0,
       0,     0,     0,   103,   104,   174,   105,   106,   107,   108,
     109,   110,     0,     0,   112,   113,   114,   115,   116,   117,
       0,     0,     0,     0,   103,   104,   321,   105,   106,   107,
     108,   109,   110,     0,     0,   112,   113,   114,   115,   116,
     117,     0,     0,     0,     0,   103,   104,   322,   105,   106,
     107,   108,   109,   110,     0,     0,   112,   113,   114,   115,
     116,   117,     0,     0,     0,     0,   103,   104,   323,   105,
     106,   107,   108,   109,   110,     0,     0,   112,   113,   114,
     115,   116,   117,     0,     0,     0,   103,   104,   324,   105,
     106,   107,   108,   109,   110,     0,   111,   112,   113,   114,
     115,   116,   117,   103,   104,     0,   105,   106,   107,   108,
     109,   110,     0,   242,   112,   113,   114,   115,   116,   117,
     103,   104,     0,   105,   106,   107,   108,   109,   110,     0,
     243,   112,   113,   114,   115,   116,   117,   103,   104,     0,
     105,   106,   107,   108,   109,   110,     0,   244,   112,   113,
     114,   115,   116,   117,   103,   104,     0,   105,   106,   107,
     108,   109,   110,     0,   298,   112,   113,   114,   115,   116,
     117,   103,   104,     0,   105,   106,   107,   108,   109,   110,
       0,   300,   112,   113,   114,   115,   116,   117,   103,   104,
       0,   105,   106,   107,   108,   109,   110,     0,     0,   112,
     113,   114,   115,   116,   117,    59,    60,     0,    61,    62,
       0,     0,    63,    64,     0,   299,     0,    66,     0,    67,
      68,    69,    59,    60,     0,    61,    62,     0,     0,    63,
      64,     0,     0,     0,    66,     0,    67,    68,    69,   105,
     106,   107,   108,   109,   110,     0,     0,   112,   113,   114,
     115,   116,   117,    61,    62,     0,     0,    63,    64,     0,
       0,     0,    66,     0,    67,    68,    69,   107,   108,   109,
     110,     0,     0,   112,   113,   114,   115,   116,   117
};

static const yytype_int16 yycheck[] =
{
      17,   182,     1,   184,     1,   149,     1,     1,     1,     1,
       1,     1,     1,    45,     1,   140,    86,    87,   143,     1,
       1,    39,    38,    39,    31,     1,    11,    44,    18,    14,
      30,    16,    28,    29,    19,    20,    48,     1,   182,    20,
     184,    26,    39,   224,    20,    31,    45,    23,    39,    48,
      39,    48,    45,    48,    48,    47,    43,    39,    34,    40,
      41,    42,    38,    39,    40,    41,    42,    31,    85,    45,
      31,    88,    30,    48,    59,    60,    61,    62,    63,    64,
     224,    66,    67,    68,    69,   155,   156,   157,    46,    31,
     215,    76,     3,     4,     5,    45,     7,    18,     3,     4,
       5,   282,     7,   120,    39,   283,    43,   285,   286,    94,
      95,    96,    48,    98,     1,    13,    14,     1,   103,   104,
     105,   106,    30,    31,   109,   110,   304,   112,   113,   114,
     115,   116,   117,    44,   119,    46,    20,   315,   282,    23,
      44,    46,    48,    30,    31,   130,    30,   132,    47,    48,
      34,     1,    13,    14,    38,    39,    40,    41,    42,    28,
      29,    45,   246,   247,    47,   235,   236,   237,    16,    45,
      44,    21,    22,    39,    24,    25,    26,    27,    28,    29,
      31,    31,    32,    33,    34,    35,    36,    37,    13,   206,
      43,   176,   177,    43,    44,    45,    46,    47,    48,    39,
      43,     1,    43,     3,     4,     5,   223,     7,    39,   194,
      44,    46,   197,    31,    44,    48,    48,   234,    47,   289,
      28,    29,     3,     4,     5,    33,     7,    35,    36,    37,
      30,    31,    44,    28,    29,    46,   253,   222,    43,    39,
      35,    36,    37,   260,    46,    45,    46,    46,    31,    39,
      48,    44,    44,   238,   239,   240,   241,     1,    31,    44,
      44,   246,   247,    44,   281,    46,    21,    22,    43,    24,
      25,    43,    43,    28,    29,    31,    20,   262,    33,    23,
      35,    36,    37,    31,    31,   302,    31,    31,   305,    30,
      34,    46,    31,    43,    38,    39,    40,    41,    42,    27,
     121,    45,   217,   320,   308,     0,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    -1,   336,
      15,    -1,    17,    18,    19,    20,   102,    -1,    23,   346,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    38,    39,    40,    41,    42,    -1,    -1,
      45,    -1,     1,    48,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    -1,    -1,    15,    -1,    17,    18,
      19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    -1,    -1,    45,    -1,    -1,    48,
      49,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    -1,    -1,    15,    -1,    17,    18,    19,
      20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    43,    -1,    45,    -1,     1,    48,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    -1,
      -1,    15,    -1,    17,    18,    19,    20,    -1,    -1,    23,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    38,    39,    40,    41,    42,    -1,
       1,    45,    21,    22,    48,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    20,
      39,    -1,    23,     1,    -1,    -1,    45,    -1,    -1,    30,
      -1,    -1,     1,    34,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    20,    -1,    45,    23,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    31,    23,     1,    34,    -1,    -1,    -1,
      38,    39,    40,    41,    42,    34,    -1,    45,     1,    38,
      39,    40,    41,    42,    20,    44,    45,    23,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    31,    -1,    20,    34,    -1,
      23,    -1,    38,    39,    40,    41,    42,    -1,    -1,    45,
      20,    34,    -1,    23,     1,    38,    39,    40,    41,    42,
      30,    44,    45,     1,    34,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    20,    -1,    45,    23,    -1,    -1,    -1,
      -1,    -1,    20,    30,    -1,    23,     1,    34,    -1,    -1,
      -1,    38,    39,    40,    41,    42,    34,    -1,    45,     1,
      38,    39,    40,    41,    42,    20,    44,    45,    23,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    34,
      -1,    23,     1,    38,    39,    40,    41,    42,    20,    -1,
      45,    23,    34,    -1,    -1,     1,    38,    39,    40,    41,
      42,    20,    34,    45,    23,     1,    38,    39,    40,    41,
      42,    -1,    -1,    45,    20,    34,    -1,    23,     1,    38,
      39,    40,    41,    42,    20,    -1,    45,    23,    34,    -1,
      -1,     1,    38,    39,    40,    41,    42,    20,    34,    45,
      23,    -1,    38,    39,    40,    41,    42,    -1,    -1,    45,
      20,    34,    -1,    23,    -1,    38,    39,    40,    41,    42,
      -1,    -1,    45,    -1,    34,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    21,    22,    45,    24,    25,    26,    27,
      28,    29,    -1,    -1,    32,    33,    34,    35,    36,    37,
      21,    22,    -1,    24,    25,    26,    27,    28,    29,    -1,
      48,    32,    33,    34,    35,    36,    37,    21,    22,    -1,
      24,    25,    26,    27,    28,    29,    47,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    46,    21,    22,    -1,    24,    25,    26,    27,
      28,    29,    -1,    -1,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    46,    21,
      22,    -1,    24,    25,    26,    27,    28,    29,    -1,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    21,    22,
      -1,    24,    25,    -1,    46,    28,    29,    -1,    31,    -1,
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
      35,    36,    37,    -1,    -1,    -1,    21,    22,    43,    24,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    21,    22,    -1,    24,    25,    26,    27,
      28,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      21,    22,    -1,    24,    25,    26,    27,    28,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    21,    22,    -1,
      24,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    21,    22,    -1,    24,    25,    26,
      27,    28,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    21,    22,    -1,    24,    25,    26,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    21,    22,
      -1,    24,    25,    26,    27,    28,    29,    -1,    -1,    32,
      33,    34,    35,    36,    37,    21,    22,    -1,    24,    25,
      -1,    -1,    28,    29,    -1,    31,    -1,    33,    -1,    35,
      36,    37,    21,    22,    -1,    24,    25,    -1,    -1,    28,
      29,    -1,    -1,    -1,    33,    -1,    35,    36,    37,    24,
      25,    26,    27,    28,    29,    -1,    -1,    32,    33,    34,
      35,    36,    37,    24,    25,    -1,    -1,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    26,    27,    28,
      29,    -1,    -1,    32,    33,    34,    35,    36,    37
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    51,     0,     1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    15,    17,    18,    19,    20,    23,
      34,    38,    39,    40,    41,    42,    45,    48,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    65,
      66,    67,    73,    78,    79,    84,    85,    90,    91,    92,
      93,    94,    95,    96,    99,   100,   101,   102,   103,    21,
      22,    24,    25,    28,    29,    31,    33,    35,    36,    37,
      38,    39,    43,    44,     1,    39,    45,    39,     1,    38,
      39,    57,     1,    39,    31,    57,     1,    45,    57,     1,
     101,     1,    57,    57,    30,     1,    30,    39,    45,    57,
      51,    38,    39,    21,    22,    24,    25,    26,    27,    28,
      29,    31,    32,    33,    34,    35,    36,    37,    31,    13,
      14,    68,    69,    70,    71,   101,    57,    57,    57,    57,
      30,    57,    30,    57,    57,    57,    57,    57,    31,    31,
      48,     1,    39,    48,    86,    87,    88,    89,    57,    45,
       1,    74,     1,    47,   101,    52,    49,    52,   101,    18,
       1,    18,    31,    57,    44,    57,    31,    57,    30,    31,
       1,    57,   104,   105,    44,    43,     1,    30,    31,    63,
      64,    39,    45,    63,    80,     1,    57,     1,    57,     1,
      57,     1,    57,     1,    30,    57,     1,    30,    57,    57,
      57,    57,    57,    57,    57,    57,    47,   101,    68,    72,
       1,    43,    57,    57,    86,    48,    30,    46,     1,    86,
      43,    44,    46,    44,    46,    56,    81,    82,    83,    47,
      75,    76,     1,    48,    16,    52,    52,    52,    45,     1,
      45,    48,    31,    31,    31,    39,    46,    46,    44,    57,
       1,    57,    31,    44,    81,    81,     1,    57,     1,    57,
      47,   101,    13,    43,    86,     1,    20,    40,    41,    42,
      39,    87,    43,    43,     1,    31,    44,    57,   101,    81,
      39,    44,    46,    48,    47,    48,    77,   101,    52,    52,
      52,    57,    57,    57,    57,    31,   104,   104,    31,    31,
      31,   101,    44,    44,   101,    57,    43,    46,    46,    31,
      44,    46,   101,    81,    70,    48,    70,    70,    44,    52,
      44,    44,    44,    44,    43,   101,    70,   101,    39,    88,
      31,    44,    43,    70,    43,    43,    97,    44,   101,    31,
      31,    31,    31,    31,    43,   101,    98,   101
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    51,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      53,    53,    53,    54,    54,    54,    55,    55,    55,    56,
      56,    56,    56,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    58,    58,    58,    58,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    61,    61,    61,    62,    62,    62,    63,
      63,    63,    64,    64,    65,    65,    66,    67,    67,    68,
      68,    69,    70,    70,    70,    70,    72,    71,    71,    74,
      73,    75,    73,    76,    73,    77,    73,    73,    78,    78,
      78,    78,    78,    80,    79,    81,    81,    81,    82,    83,
      84,    84,    85,    85,    85,    85,    86,    86,    87,    87,
      88,    88,    88,    89,    89,    89,    89,    90,    90,    91,
      91,    92,    93,    93,    94,    94,    94,    94,    95,    95,
      97,    96,    98,    96,    99,    99,    99,   100,   100,   100,
     101,   102,   102,   103,   104,   104,   104,   105,   105
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     1,     1,
       2,     2,     2,     5,     7,     1,     5,     6,     8,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     3,     3,     2,     3,     3,     3,     3,     1,
       3,     1,     3,     3,     3,     3,     3,     3,     2,     3,
       3,     3,     4,     3,     4,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     3,     3,     3,     3,     4,
       4,     4,     4,     3,     3,     1,     3,     3,     4,     3,
       1,     1,     3,     3,     1,     2,     4,     3,     1,     3,
       1,     2,     5,     1,     0,     1,     0,     5,     2,     0,
       7,     0,     8,     0,     7,     0,     7,     3,     6,     6,
       5,     5,     2,     0,     5,     3,     1,     1,     2,     2,
       5,     1,     5,     4,     5,     6,     1,     1,     3,     1,
       5,     3,     1,     4,     3,     3,     3,     5,     3,     3,
       5,     3,     7,     1,     7,     7,     3,     7,     7,     1,
       0,     8,     0,     9,     4,     4,     1,     3,     3,     4,
       3,     4,     1,     3,     3,     1,     1,     0,     3
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
#line 1619 "parser.tab.c"
    break;

  case 4: /* STATEMENT: PRINT_STATEMENT  */
#line 104 "parser.y"
                                                           {printf("Parsed print statement\n");}
#line 1625 "parser.tab.c"
    break;

  case 8: /* STATEMENT: ENUM_DECLARATION_STATEMENT  */
#line 109 "parser.y"
                                                            {printf("Parsed Enum Declaration\n");}
#line 1631 "parser.tab.c"
    break;

  case 9: /* STATEMENT: ENUM_CALL_STATEMENT  */
#line 110 "parser.y"
                                                            {printf("Parsed Enum Usage\n");}
#line 1637 "parser.tab.c"
    break;

  case 10: /* STATEMENT: IF_STATEMENT  */
#line 112 "parser.y"
                                                            {printf("Parsed if statement\n");}
#line 1643 "parser.tab.c"
    break;

  case 11: /* STATEMENT: WHILE_STATEMENT  */
#line 113 "parser.y"
                                                            {printf("Parsed While LOOP\n");}
#line 1649 "parser.tab.c"
    break;

  case 12: /* STATEMENT: FOR_STATEMENT  */
#line 114 "parser.y"
                                                            {printf("Parsed For LOOP\n");}
#line 1655 "parser.tab.c"
    break;

  case 13: /* STATEMENT: DO_WHILE_STATEMENT  */
#line 115 "parser.y"
                                                            {printf("Parsed Do While LOOP\n");}
#line 1661 "parser.tab.c"
    break;

  case 14: /* STATEMENT: SWITCH_STATEMENT  */
#line 116 "parser.y"
                                                            {printf("Parsed Switch Statement\n");}
#line 1667 "parser.tab.c"
    break;

  case 18: /* STATEMENT: FUNC_DECLARATION_STATEMENT  */
#line 121 "parser.y"
                                                            {printf("Parsed Function Declaration\n");}
#line 1673 "parser.tab.c"
    break;

  case 20: /* ERROR_STATEMENT: error SEMICOLON  */
#line 126 "parser.y"
                                                          {printf("\nError STATEMENT at line %d\n", yylineno);pErr(yylineno);}
#line 1679 "parser.tab.c"
    break;

  case 21: /* ERROR_STATEMENT: error '}'  */
#line 127 "parser.y"
                                                          {printf("\nError STATEMENT at line %d\n", yylineno);pErr(yylineno);}
#line 1685 "parser.tab.c"
    break;

  case 22: /* ERROR_STATEMENT: error ')'  */
#line 128 "parser.y"
                                                          {printf("\nError STATEMENT at line %d\n", yylineno);pErr(yylineno);}
#line 1691 "parser.tab.c"
    break;

  case 26: /* ERROR_PRINT_STATEMENT: PRINT '(' EXPRESSION ')' error  */
#line 138 "parser.y"
                                             {printf("\nError missing semicolon ';', error at line %d\n", yylineno); pErr(yylineno);}
#line 1697 "parser.tab.c"
    break;

  case 27: /* ERROR_PRINT_STATEMENT: PRINT '(' EXPRESSION ',' ')' SEMICOLON  */
#line 139 "parser.y"
                                                        {printf("\nError colon ',', error at line %d\n", yylineno); pErr(yylineno);}
#line 1703 "parser.tab.c"
    break;

  case 28: /* ERROR_PRINT_STATEMENT: PRINT '(' EXPRESSION ',' EXPRESSION ',' ')' SEMICOLON  */
#line 140 "parser.y"
                                                                       {printf("\nError colon ',', error at line %d\n", yylineno); pErr(yylineno);}
#line 1709 "parser.tab.c"
    break;

  case 29: /* TYPE: INT  */
#line 144 "parser.y"
                            { (yyval.str) = "int";   }
#line 1715 "parser.tab.c"
    break;

  case 30: /* TYPE: FLOAT  */
#line 145 "parser.y"
                            { (yyval.str) = "float"; }
#line 1721 "parser.tab.c"
    break;

  case 31: /* TYPE: BOOL  */
#line 146 "parser.y"
                            { (yyval.str) = "bool";  }
#line 1727 "parser.tab.c"
    break;

  case 32: /* TYPE: STRING  */
#line 147 "parser.y"
                            { (yyval.str) = "string";}
#line 1733 "parser.tab.c"
    break;

  case 51: /* EXPRESSION: ERROR_EXPRESSION  */
#line 174 "parser.y"
                                             {printf("\nError Expression error at line %d\n", yylineno);pErr(yylineno);}
#line 1739 "parser.tab.c"
    break;

  case 66: /* ERROR_COMPARISON: error GT EXPRESSION  */
#line 199 "parser.y"
                                                                    {printf("\nError Missing left operand before '>' at line %d\n", yylineno);pErr(yylineno);}
#line 1745 "parser.tab.c"
    break;

  case 67: /* ERROR_COMPARISON: EXPRESSION GT error  */
#line 200 "parser.y"
                                                                    {printf("\nError Missing right operand after '>' at line %d\n", yylineno);pErr(yylineno);}
#line 1751 "parser.tab.c"
    break;

  case 68: /* ERROR_COMPARISON: error LT EXPRESSION  */
#line 201 "parser.y"
                                                                    {printf("\nError Missing left operand before '<' at line %d\n", yylineno);pErr(yylineno);}
#line 1757 "parser.tab.c"
    break;

  case 69: /* ERROR_COMPARISON: EXPRESSION LT error  */
#line 202 "parser.y"
                                                                    {printf("\nError Missing right operand after '<' at line %d\n", yylineno);pErr(yylineno);}
#line 1763 "parser.tab.c"
    break;

  case 70: /* ERROR_COMPARISON: error EQUALITY EXPRESSION  */
#line 203 "parser.y"
                                                                    {printf("\nError Missing left operand before '==' at line %d\n", yylineno);pErr(yylineno);}
#line 1769 "parser.tab.c"
    break;

  case 71: /* ERROR_COMPARISON: EXPRESSION EQUALITY error  */
#line 204 "parser.y"
                                                                    {printf("\nError Missing right operand after '==' at line %d\n", yylineno);pErr(yylineno);}
#line 1775 "parser.tab.c"
    break;

  case 72: /* ERROR_COMPARISON: error NEG_EQUALITY EXPRESSION  */
#line 205 "parser.y"
                                                                    {printf("\nError Missing left operand before '!=' at line %d\n", yylineno);pErr(yylineno);}
#line 1781 "parser.tab.c"
    break;

  case 73: /* ERROR_COMPARISON: EXPRESSION NEG_EQUALITY error  */
#line 206 "parser.y"
                                                                    {printf("\nError Missing right operand after '!=' at line %d\n", yylineno);pErr(yylineno);}
#line 1787 "parser.tab.c"
    break;

  case 74: /* ERROR_COMPARISON: LOGIC_NOT error  */
#line 207 "parser.y"
                                                                    {printf("\nError Missing right operand after the negating operator '!' at line %d\n", yylineno);pErr(yylineno);}
#line 1793 "parser.tab.c"
    break;

  case 75: /* ERROR_COMPARISON: error LOGIC_AND EXPRESSION  */
#line 208 "parser.y"
                                                                    {printf("\nError Missing left operand before 'and' operator at line %d\n", yylineno);pErr(yylineno);}
#line 1799 "parser.tab.c"
    break;

  case 76: /* ERROR_COMPARISON: EXPRESSION LOGIC_AND error  */
#line 209 "parser.y"
                                                                    {printf("\nError Missing right operand after 'and' operator at line %d\n", yylineno);pErr(yylineno);}
#line 1805 "parser.tab.c"
    break;

  case 77: /* ERROR_COMPARISON: error LOGIC_OR EXPRESSION  */
#line 210 "parser.y"
                                                                    {printf("\nError Missing left operand before 'or' operator at line %d\n", yylineno);pErr(yylineno);}
#line 1811 "parser.tab.c"
    break;

  case 78: /* ERROR_COMPARISON: EXPRESSION LOGIC_OR error  */
#line 211 "parser.y"
                                                                    {printf("\nError Missing right operand after 'or' operator at line %d\n", yylineno);pErr(yylineno);}
#line 1817 "parser.tab.c"
    break;

  case 79: /* ERROR_COMPARISON: error LT EQ EXPRESSION  */
#line 212 "parser.y"
                                                                    {printf("\nError Missing left operand before '<=' operator at line %d\n", yylineno);pErr(yylineno);}
#line 1823 "parser.tab.c"
    break;

  case 80: /* ERROR_COMPARISON: EXPRESSION LT EQ error  */
#line 213 "parser.y"
                                                                    {printf("\nError Missing right operand after '<=' operator at line %d\n", yylineno);pErr(yylineno);}
#line 1829 "parser.tab.c"
    break;

  case 81: /* ERROR_COMPARISON: error GT EQ EXPRESSION  */
#line 214 "parser.y"
                                                                    {printf("\nError Missing left operand before '>=' operator at line %d\n", yylineno);pErr(yylineno);}
#line 1835 "parser.tab.c"
    break;

  case 82: /* ERROR_COMPARISON: EXPRESSION GT EQ error  */
#line 215 "parser.y"
                                                                    {printf("\nError Missing right operand after '>=' operator at line %d\n", yylineno);pErr(yylineno);}
#line 1841 "parser.tab.c"
    break;

  case 83: /* DECLARATION_STATEMENT: TYPE IDENTIFIER DECLARATION_TAIL  */
#line 220 "parser.y"
                                                            { printf("Parsed Declaration\n"); }
#line 1847 "parser.tab.c"
    break;

  case 84: /* DECLARATION_STATEMENT: TYPE CONSTANT DECLARATION_TAIL  */
#line 221 "parser.y"
                                                            { printf("Parsed Const Declaration\n"); }
#line 1853 "parser.tab.c"
    break;

  case 86: /* ERROR_DECLARATION_STATEMENT: error CONSTANT SEMICOLON  */
#line 225 "parser.y"
                                                        {printf("\nError Missing constant type at line %d\n", yylineno);pErr(yylineno);}
#line 1859 "parser.tab.c"
    break;

  case 87: /* ERROR_DECLARATION_STATEMENT: error IDENTIFIER SEMICOLON  */
#line 226 "parser.y"
                                                        {printf("\nError Missing variable type at line %d\n", yylineno);pErr(yylineno);}
#line 1865 "parser.tab.c"
    break;

  case 88: /* ERROR_DECLARATION_STATEMENT: TYPE IDENTIFIER IDENTIFIER SEMICOLON  */
#line 227 "parser.y"
                                                        {printf("\nError unexpected identifier %s at line %d\n",(yyvsp[-1].str), yylineno);pErr(yylineno);}
#line 1871 "parser.tab.c"
    break;

  case 92: /* ERROR_DECLARATION_TAIL: error EXPRESSION SEMICOLON  */
#line 235 "parser.y"
                                                  {printf("\nError Missing '=' at line %d\n", yylineno);pErr(yylineno);}
#line 1877 "parser.tab.c"
    break;

  case 93: /* ERROR_DECLARATION_TAIL: EQ error SEMICOLON  */
#line 236 "parser.y"
                                                  {printf("\nError Missing second operand at line %d\n", yylineno);pErr(yylineno);}
#line 1883 "parser.tab.c"
    break;

  case 96: /* HELPER_SWITCH: SWITCH IDENTIFIER ':' '{'  */
#line 245 "parser.y"
                                           {strcpy(switcher, (yyvsp[-2].str));}
#line 1889 "parser.tab.c"
    break;

  case 101: /* ERROR_DEFAULTCASE: DEFAULT BLOCK  */
#line 256 "parser.y"
                              {printf("\nError missing colon ':' at DEFAULT CASE of switch, error at line %d\n", yylineno); pErr(yylineno);}
#line 1895 "parser.tab.c"
    break;

  case 106: /* $@1: %empty  */
#line 265 "parser.y"
                                            {printf("\nError DEFAULT CASE must be written at the end of the switch statement, error at line %d\n", yylineno); pErr(yylineno);}
#line 1901 "parser.tab.c"
    break;

  case 108: /* ERROR_CASES: DEFAULTCASE DEFAULTCASE  */
#line 266 "parser.y"
                                            {printf("\nError only 1 DEFAULT CASE is allowed in the switch statement error, at line %d\n", yylineno); pErr(yylineno);}
#line 1907 "parser.tab.c"
    break;

  case 109: /* $@2: %empty  */
#line 269 "parser.y"
                                                {printf("\nError Missing identifier for switch statement at line %d\n", yylineno);pErr(yylineno);}
#line 1913 "parser.tab.c"
    break;

  case 111: /* $@3: %empty  */
#line 270 "parser.y"
                                                {printf("\nError unexpected identifier '%s' at switch statement at line %d\n",yylval, yylineno); pErr(yylineno);}
#line 1919 "parser.tab.c"
    break;

  case 113: /* $@4: %empty  */
#line 271 "parser.y"
                                                {printf("\nError Missing colon ':' for switch statement (switchs must have a colon) at line %d\n", yylineno);pErr(yylineno);}
#line 1925 "parser.tab.c"
    break;

  case 115: /* $@5: %empty  */
#line 272 "parser.y"
                                                {printf("\nError Missing '{' for switch statement at line %d\n", yylineno);pErr(yylineno);}
#line 1931 "parser.tab.c"
    break;

  case 117: /* ERROR_SWITCH_STATEMENT: HELPER_SWITCH CASES error  */
#line 273 "parser.y"
                                                 {printf("\nError unclosed '}' for switch statement at line %d\n", yylineno);pErr(yylineno);}
#line 1937 "parser.tab.c"
    break;

  case 123: /* $@6: %empty  */
#line 285 "parser.y"
                                  {printf("\nError unhandled function parenthesis at line %d for function %s\n", yylineno, (yyvsp[0].str));pErr(yylineno);}
#line 1943 "parser.tab.c"
    break;

  case 128: /* ERROR_ARGS: ',' ARGS  */
#line 293 "parser.y"
                           {printf("\nError unexpected ',' in argument list of function declaration at line %d\n", yylineno);pErr(yylineno);}
#line 1949 "parser.tab.c"
    break;

  case 132: /* ERROR_ENUM_DECLARATION_STATEMENT: ENUM error '{' ENUM_HELPER '}'  */
#line 305 "parser.y"
                                                           {printf("\nError missing identifier for ENUM statement at line %d\n", yylineno);pErr(yylineno);}
#line 1955 "parser.tab.c"
    break;

  case 133: /* ERROR_ENUM_DECLARATION_STATEMENT: ENUM IDENTIFIER ENUM_HELPER '}'  */
#line 306 "parser.y"
                                                           {printf("\nError missing opening curly braces for ENUM statement at line %d\n", yylineno);pErr(yylineno);}
#line 1961 "parser.tab.c"
    break;

  case 134: /* ERROR_ENUM_DECLARATION_STATEMENT: ENUM IDENTIFIER '{' error '}'  */
#line 307 "parser.y"
                                                           {printf("\nError missing arguments in the ENUM statement at line %d\n", yylineno);pErr(yylineno);}
#line 1967 "parser.tab.c"
    break;

  case 135: /* ERROR_ENUM_DECLARATION_STATEMENT: ENUM IDENTIFIER error '{' ENUM_HELPER '}'  */
#line 308 "parser.y"
                                                           {printf("\nError UnExpected IDENTIFIER in the ENUM statement at line %d\n", yylineno);pErr(yylineno);}
#line 1973 "parser.tab.c"
    break;

  case 143: /* ERROR_ENUM_DEFINED_ARGS: IDENTIFIER EQ error ','  */
#line 325 "parser.y"
                                                          {printf("\nError WRONG arguments in the ENUM statement at line %d\n", yylineno);pErr(yylineno);}
#line 1979 "parser.tab.c"
    break;

  case 144: /* ERROR_ENUM_DEFINED_ARGS: IDENTIFIER EQ FLOAT_DIGIT  */
#line 326 "parser.y"
                                                          {printf("\nError WRONG arguments in the ENUM statement at line %d\n", yylineno);pErr(yylineno);}
#line 1985 "parser.tab.c"
    break;

  case 145: /* ERROR_ENUM_DEFINED_ARGS: IDENTIFIER EQ STRING_LITERAL  */
#line 327 "parser.y"
                                                          {printf("\nError WRONG arguments in the ENUM statement at line %d\n", yylineno);pErr(yylineno);}
#line 1991 "parser.tab.c"
    break;

  case 146: /* ERROR_ENUM_DEFINED_ARGS: IDENTIFIER EQ BOOL_LITERAL  */
#line 328 "parser.y"
                                                          {printf("\nError WRONG arguments in the ENUM statement at line %d\n", yylineno);pErr(yylineno);}
#line 1997 "parser.tab.c"
    break;

  case 154: /* ERROR_DO_WHILE: DO error WHILE '(' EXPRESSION ')' SEMICOLON  */
#line 352 "parser.y"
                                                              {printf("\nError Missing DO-Block for the DO-WHILE loop at line %d\n", yylineno);pErr(yylineno);}
#line 2003 "parser.tab.c"
    break;

  case 155: /* ERROR_DO_WHILE: DO BLOCK WHILE error EXPRESSION ')' SEMICOLON  */
#line 353 "parser.y"
                                                              {printf("\nError Missing opening parenthesis '(' for the DO-WHILE loop at line %d\n", yylineno);pErr(yylineno);}
#line 2009 "parser.tab.c"
    break;

  case 156: /* ERROR_DO_WHILE: DO BLOCK error  */
#line 354 "parser.y"
                                                              {printf("\nError Missing WHILE DO-WHILE loop at line %d\n", yylineno);pErr(yylineno);}
#line 2015 "parser.tab.c"
    break;

  case 157: /* ERROR_DO_WHILE: DO BLOCK WHILE '{' EXPRESSION '}' SEMICOLON  */
#line 355 "parser.y"
                                                              {printf("\nError DO-WHILE loop accepts braces () not curly braces {} at line %d\n", yylineno);pErr(yylineno);}
#line 2021 "parser.tab.c"
    break;

  case 160: /* $@7: %empty  */
#line 363 "parser.y"
                                                               {printf("\nError Missing opening braces '(' in the FOR loop at line %d\n", yylineno);pErr(yylineno);}
#line 2027 "parser.tab.c"
    break;

  case 162: /* $@8: %empty  */
#line 364 "parser.y"
                                                               {printf("\nError unexpected semicolon in the FOR loop at line %d\n", yylineno);pErr(yylineno);}
#line 2033 "parser.tab.c"
    break;

  case 164: /* ASSIGNMENT_STATEMENT: IDENTIFIER EQ EXPRESSION SEMICOLON  */
#line 369 "parser.y"
                                                       {printf("Parsed Assignment\n");}
#line 2039 "parser.tab.c"
    break;

  case 165: /* ASSIGNMENT_STATEMENT: CONSTANT EQ EXPRESSION SEMICOLON  */
#line 370 "parser.y"
                                                       {printf("Parsed Assignment\n");}
#line 2045 "parser.tab.c"
    break;

  case 167: /* ERROR_ASSIGNMENT_STATEMENT: IDENTIFIER EQ SEMICOLON  */
#line 374 "parser.y"
                                                      { printf("\nError expected expression in assignment statement at line %d\n", yylineno);pErr(yylineno);}
#line 2051 "parser.tab.c"
    break;

  case 168: /* ERROR_ASSIGNMENT_STATEMENT: CONSTANT EQ SEMICOLON  */
#line 375 "parser.y"
                                                      { printf("\nError expected expression in assignment statement at line %d\n", yylineno);pErr(yylineno);}
#line 2057 "parser.tab.c"
    break;

  case 169: /* ERROR_ASSIGNMENT_STATEMENT: IDENTIFIER error EXPRESSION SEMICOLON  */
#line 376 "parser.y"
                                                              {printf("\nError expected '=' in assignment statement at line %d\n", yylineno);pErr(yylineno);}
#line 2063 "parser.tab.c"
    break;

  case 170: /* BLOCK: '{' PROGRAM '}'  */
#line 381 "parser.y"
                                              {printf("Parsed Block\n");}
#line 2069 "parser.tab.c"
    break;

  case 171: /* FUNC_CALL: IDENTIFIER '(' ARGUMENTS ')'  */
#line 388 "parser.y"
                                              { printf("Parsed Funciton Call\n");}
#line 2075 "parser.tab.c"
    break;

  case 173: /* ERROR_FUNC_CALL: IDENTIFIER error ')'  */
#line 392 "parser.y"
                                            {printf("\nError unhandled function parenthesis at line %d\n", yylineno);pErr(yylineno);}
#line 2081 "parser.tab.c"
    break;

  case 178: /* ERROR_ARGUMENTS: error ',' ARGUMENTS  */
#line 400 "parser.y"
                                                            {printf("\nError Missing first argument in function's argument list or erronous ',' at line %d\n", yylineno);pErr(yylineno);}
#line 2087 "parser.tab.c"
    break;


#line 2091 "parser.tab.c"

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

#line 402 "parser.y"


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
