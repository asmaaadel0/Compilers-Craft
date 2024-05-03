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
    #include "symbol_table.cpp"
    #include "operation.cpp"
    #include "quadruples.cpp"
    
    void yyerror(char* );
    int yylex();
    extern FILE *yyin;
    extern int number_of_line;

#line 87 "parser.tab.c"

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
  YYSYMBOL_BOOL = 6,                       /* BOOL  */
  YYSYMBOL_CHAR = 7,                       /* CHAR  */
  YYSYMBOL_PRINT = 8,                      /* PRINT  */
  YYSYMBOL_VOID = 9,                       /* VOID  */
  YYSYMBOL_RETURN = 10,                    /* RETURN  */
  YYSYMBOL_SWITCH = 11,                    /* SWITCH  */
  YYSYMBOL_BREAK = 12,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 13,                  /* CONTINUE  */
  YYSYMBOL_CASE = 14,                      /* CASE  */
  YYSYMBOL_DEFAULT = 15,                   /* DEFAULT  */
  YYSYMBOL_IF = 16,                        /* IF  */
  YYSYMBOL_ELSE = 17,                      /* ELSE  */
  YYSYMBOL_FOR = 18,                       /* FOR  */
  YYSYMBOL_WHILE = 19,                     /* WHILE  */
  YYSYMBOL_DO = 20,                        /* DO  */
  YYSYMBOL_BOOL_LITERAL = 21,              /* BOOL_LITERAL  */
  YYSYMBOL_LOGIC_AND = 22,                 /* LOGIC_AND  */
  YYSYMBOL_LOGIC_OR = 23,                  /* LOGIC_OR  */
  YYSYMBOL_LOGIC_NOT = 24,                 /* LOGIC_NOT  */
  YYSYMBOL_EQUALITY = 25,                  /* EQUALITY  */
  YYSYMBOL_NEG_EQUALITY = 26,              /* NEG_EQUALITY  */
  YYSYMBOL_DEC = 27,                       /* DEC  */
  YYSYMBOL_INC = 28,                       /* INC  */
  YYSYMBOL_GT = 29,                        /* GT  */
  YYSYMBOL_LT = 30,                        /* LT  */
  YYSYMBOL_EQ = 31,                        /* EQ  */
  YYSYMBOL_SEMICOLON = 32,                 /* SEMICOLON  */
  YYSYMBOL_MODULO = 33,                    /* MODULO  */
  YYSYMBOL_PLUS = 34,                      /* PLUS  */
  YYSYMBOL_SUB = 35,                       /* SUB  */
  YYSYMBOL_MUL = 36,                       /* MUL  */
  YYSYMBOL_DIV = 37,                       /* DIV  */
  YYSYMBOL_POW = 38,                       /* POW  */
  YYSYMBOL_BITWISE_OR = 39,                /* BITWISE_OR  */
  YYSYMBOL_BITWISE_AND = 40,               /* BITWISE_AND  */
  YYSYMBOL_SHL = 41,                       /* SHL  */
  YYSYMBOL_SHR = 42,                       /* SHR  */
  YYSYMBOL_CONSTANT = 43,                  /* CONSTANT  */
  YYSYMBOL_IDENTIFIER = 44,                /* IDENTIFIER  */
  YYSYMBOL_STRING_LITERAL = 45,            /* STRING_LITERAL  */
  YYSYMBOL_CHAR_LITERAL = 46,              /* CHAR_LITERAL  */
  YYSYMBOL_DIGIT = 47,                     /* DIGIT  */
  YYSYMBOL_FLOAT_DIGIT = 48,               /* FLOAT_DIGIT  */
  YYSYMBOL_49_ = 49,                       /* '('  */
  YYSYMBOL_50_ = 50,                       /* ')'  */
  YYSYMBOL_51_ = 51,                       /* '{'  */
  YYSYMBOL_52_ = 52,                       /* '}'  */
  YYSYMBOL_53_ = 53,                       /* ','  */
  YYSYMBOL_54_ = 54,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 55,                  /* $accept  */
  YYSYMBOL_PROGRAM = 56,                   /* PROGRAM  */
  YYSYMBOL_BLOCK = 57,                     /* BLOCK  */
  YYSYMBOL_58_1 = 58,                      /* $@1  */
  YYSYMBOL_STATEMENT = 59,                 /* STATEMENT  */
  YYSYMBOL_60_2 = 60,                      /* $@2  */
  YYSYMBOL_61_3 = 61,                      /* $@3  */
  YYSYMBOL_62_4 = 62,                      /* $@4  */
  YYSYMBOL_63_5 = 63,                      /* $@5  */
  YYSYMBOL_64_6 = 64,                      /* $@6  */
  YYSYMBOL_PRINT_STATEMENT = 65,           /* PRINT_STATEMENT  */
  YYSYMBOL_TYPE = 66,                      /* TYPE  */
  YYSYMBOL_EXPRESSION = 67,                /* EXPRESSION  */
  YYSYMBOL_DECLARATION_STATEMENT = 68,     /* DECLARATION_STATEMENT  */
  YYSYMBOL_69_7 = 69,                      /* $@7  */
  YYSYMBOL_70_8 = 70,                      /* $@8  */
  YYSYMBOL_DECLARATION_TAIL = 71,          /* DECLARATION_TAIL  */
  YYSYMBOL_RETURN_STATEMENT = 72,          /* RETURN_STATEMENT  */
  YYSYMBOL_73_9 = 73,                      /* $@9  */
  YYSYMBOL_SWITCH_STATEMENT = 74,          /* SWITCH_STATEMENT  */
  YYSYMBOL_75_10 = 75,                     /* $@10  */
  YYSYMBOL_DEFAULTCASE = 76,               /* DEFAULTCASE  */
  YYSYMBOL_CASES = 77,                     /* CASES  */
  YYSYMBOL_78_11 = 78,                     /* $@11  */
  YYSYMBOL_79_12 = 79,                     /* $@12  */
  YYSYMBOL_FUNC_DECLARATION_STATEMENT = 80, /* FUNC_DECLARATION_STATEMENT  */
  YYSYMBOL_81_13 = 81,                     /* $@13  */
  YYSYMBOL_82_14 = 82,                     /* $@14  */
  YYSYMBOL_83_15 = 83,                     /* $@15  */
  YYSYMBOL_84_16 = 84,                     /* $@16  */
  YYSYMBOL_ARGS = 85,                      /* ARGS  */
  YYSYMBOL_ARG_DECL = 86,                  /* ARG_DECL  */
  YYSYMBOL_IF_STATEMENT = 87,              /* IF_STATEMENT  */
  YYSYMBOL_88_17 = 88,                     /* $@17  */
  YYSYMBOL_WHILE_STATEMENT = 89,           /* WHILE_STATEMENT  */
  YYSYMBOL_90_18 = 90,                     /* $@18  */
  YYSYMBOL_DO_WHILE_STATEMENT = 91,        /* DO_WHILE_STATEMENT  */
  YYSYMBOL_FOR_STATEMENT = 92,             /* FOR_STATEMENT  */
  YYSYMBOL_93_19 = 93,                     /* $@19  */
  YYSYMBOL_94_20 = 94,                     /* $@20  */
  YYSYMBOL_95_21 = 95,                     /* $@21  */
  YYSYMBOL_ASSIGNMENT_STATEMENT = 96,      /* ASSIGNMENT_STATEMENT  */
  YYSYMBOL_97_22 = 97,                     /* $@22  */
  YYSYMBOL_98_23 = 98,                     /* $@23  */
  YYSYMBOL_FUNC_CALL = 99,                 /* FUNC_CALL  */
  YYSYMBOL_100_24 = 100,                   /* $@24  */
  YYSYMBOL_101_25 = 101,                   /* $@25  */
  YYSYMBOL_102_26 = 102,                   /* $@26  */
  YYSYMBOL_ARGUMENTS = 103,                /* ARGUMENTS  */
  YYSYMBOL_104_27 = 104                    /* $@27  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYLAST   701

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  205

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   303


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
      49,    50,     2,     2,    53,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    54,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,     2,    52,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    69,    69,    70,    74,    74,    79,    80,    81,    82,
      84,    85,    85,    85,    86,    86,    87,    87,    87,    88,
      89,    90,    92,    93,    94,   100,   101,   105,   106,   107,
     108,   109,   114,   115,   116,   117,   118,   119,   120,   122,
     123,   124,   126,   127,   129,   130,   131,   132,   134,   135,
     136,   137,   138,   140,   141,   142,   143,   144,   145,   147,
     148,   149,   150,   152,   153,   158,   158,   159,   159,   162,
     163,   167,   168,   168,   173,   173,   176,   179,   179,   179,
     180,   181,   186,   186,   187,   187,   188,   188,   189,   189,
     192,   193,   196,   201,   202,   202,   207,   207,   211,   215,
     215,   215,   215,   220,   220,   221,   221,   226,   226,   226,
     226,   229,   229,   230,   231
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
  "STRING", "BOOL", "CHAR", "PRINT", "VOID", "RETURN", "SWITCH", "BREAK",
  "CONTINUE", "CASE", "DEFAULT", "IF", "ELSE", "FOR", "WHILE", "DO",
  "BOOL_LITERAL", "LOGIC_AND", "LOGIC_OR", "LOGIC_NOT", "EQUALITY",
  "NEG_EQUALITY", "DEC", "INC", "GT", "LT", "EQ", "SEMICOLON", "MODULO",
  "PLUS", "SUB", "MUL", "DIV", "POW", "BITWISE_OR", "BITWISE_AND", "SHL",
  "SHR", "CONSTANT", "IDENTIFIER", "STRING_LITERAL", "CHAR_LITERAL",
  "DIGIT", "FLOAT_DIGIT", "'('", "')'", "'{'", "'}'", "','", "':'",
  "$accept", "PROGRAM", "BLOCK", "$@1", "STATEMENT", "$@2", "$@3", "$@4",
  "$@5", "$@6", "PRINT_STATEMENT", "TYPE", "EXPRESSION",
  "DECLARATION_STATEMENT", "$@7", "$@8", "DECLARATION_TAIL",
  "RETURN_STATEMENT", "$@9", "SWITCH_STATEMENT", "$@10", "DEFAULTCASE",
  "CASES", "$@11", "$@12", "FUNC_DECLARATION_STATEMENT", "$@13", "$@14",
  "$@15", "$@16", "ARGS", "ARG_DECL", "IF_STATEMENT", "$@17",
  "WHILE_STATEMENT", "$@18", "DO_WHILE_STATEMENT", "FOR_STATEMENT", "$@19",
  "$@20", "$@21", "ASSIGNMENT_STATEMENT", "$@22", "$@23", "FUNC_CALL",
  "$@24", "$@25", "$@26", "ARGUMENTS", "$@27", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-105)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-114)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -105,   132,  -105,  -105,  -105,  -105,  -105,  -105,   -41,   -34,
     -20,   -30,   -11,    13,   499,   -18,  -105,   499,   499,   499,
     499,    15,   -22,  -105,  -105,  -105,  -105,   499,  -105,  -105,
    -105,    28,    31,  -105,   -21,   527,  -105,    16,  -105,  -105,
    -105,  -105,  -105,  -105,   499,     3,   499,     9,  -105,  -105,
    -105,     5,   312,  -105,   629,   659,   659,   659,  -105,  -105,
      10,   339,  -105,   499,  -105,    24,  -105,  -105,    32,   499,
     499,   499,   499,  -105,  -105,   441,   470,  -105,   499,   499,
     499,   499,   499,   499,   499,   499,   499,   499,  -105,  -105,
     283,    30,   611,  -105,    43,   231,   499,   499,  -105,  -105,
     181,   611,  -105,    59,  -105,    -7,    35,    -7,   629,   629,
     645,   645,   499,    -1,   499,    -1,   659,   659,   659,    47,
      47,   659,    -1,    -1,    -1,    -1,    52,   499,  -105,    46,
      41,    39,    45,    76,  -105,   548,   569,   499,  -105,    24,
      48,   499,  -105,  -105,  -105,    49,  -105,    -1,    -1,  -105,
     365,    24,  -105,  -105,    11,    50,    24,   231,  -105,  -105,
     391,  -105,  -105,   499,   590,    24,  -105,    64,  -105,    24,
    -105,    29,  -105,   231,    51,    53,   417,  -105,  -105,    24,
    -105,  -105,   499,    54,  -105,    55,    60,   499,  -105,    70,
    -105,   261,    24,  -105,  -105,  -105,  -105,  -105,  -105,    24,
      24,  -105,  -105,    29,  -105
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,    11,     1,    27,    28,    30,    29,    31,     0,     0,
      72,     0,     0,     0,     0,     0,    36,     0,     0,     0,
       0,    33,    32,    37,    38,    34,    35,     0,     4,    23,
       2,     0,     0,     6,     0,     0,     7,     0,    19,    24,
      10,    14,     8,    63,     0,     0,     0,     0,    20,    21,
      33,    32,     0,    99,    41,    49,    48,    52,   105,   103,
       0,     0,     3,     0,    12,     0,    17,    67,    65,     0,
       0,     0,     0,    51,    50,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,    15,
       0,     0,    73,    74,    93,    11,     0,     0,   108,    64,
      11,    96,    13,     0,    18,     0,     0,     0,    39,    40,
      42,    43,     0,    46,     0,    44,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,     0,     0,    88,     0,
       0,    91,     0,     0,   100,     0,     0,   114,     5,     0,
       0,     0,    70,    68,    86,     0,    66,    47,    45,    25,
       0,     0,    92,    84,     0,     0,     0,    11,   106,   104,
     111,   109,    97,     0,     0,     0,    82,     0,    89,     0,
      90,    81,    95,    11,     0,     0,     0,    69,    87,     0,
      26,    85,     0,     0,    80,     0,     0,   114,   110,     0,
      83,     0,     0,    75,   101,   112,    98,    77,    76,     0,
       0,   102,    78,    81,    79
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -105,    56,   -45,  -105,   -94,  -105,  -105,  -105,  -105,  -105,
    -105,   -80,   -14,  -105,  -105,  -105,    -2,  -105,  -105,  -105,
    -105,  -105,   -91,  -105,  -105,  -105,  -105,  -105,  -105,  -105,
    -104,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,
    -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,   -78,  -105
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,    29,    62,    30,    31,   102,    89,    32,   104,
      33,    34,    35,    36,   107,   105,   143,    37,    46,    38,
     132,   184,   185,   200,   203,    39,   179,   169,   165,   151,
     130,   131,    40,   133,    64,   139,    66,    41,    95,   157,
     199,    42,    97,    96,    43,    60,   137,   175,   161,   174
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      52,   134,   145,    54,    55,    56,    57,    94,    44,    59,
      45,   129,   -71,    61,     3,     4,     5,     6,     7,    47,
     103,    48,    67,    68,   141,   142,   129,  -107,    75,    76,
      90,    53,    92,     3,     4,     5,     6,     7,     3,     4,
       5,     6,     7,   182,   183,    49,    58,    63,    88,   101,
     170,    65,    91,    93,  -107,   108,   109,   110,   111,    98,
     -94,   113,   115,   173,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   129,    28,    75,    76,   140,   186,
     128,   106,   135,   136,   149,   144,    84,    85,    86,    87,
     152,   153,   154,   156,   162,   155,   180,   163,   147,   166,
     148,   171,   196,   188,   187,   146,   168,   193,   192,   195,
     194,   172,   204,   150,     0,     0,     0,     0,   100,     0,
     178,     0,     0,   160,   181,     0,     0,   164,     0,     0,
       0,     0,     2,     0,   190,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,     0,   198,    14,   176,
      15,     0,   -16,    16,   201,   202,    17,     0,     0,    18,
      19,     0,     0,     0,     0,     0,     0,    20,   191,     0,
       0,     0,     0,   160,     0,    21,    22,    23,    24,    25,
      26,    27,     0,    28,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,     0,     0,    14,     0,    15,
       0,   -16,    16,     0,     0,    17,     0,     0,    18,    19,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,    21,    22,    23,    24,    25,    26,
      27,     0,    28,   138,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,     0,     0,    14,     0,    15,
       0,   -16,    16,     0,     0,    17,     0,     0,    18,    19,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,    21,    22,    23,    24,    25,    26,
      27,     0,    28,    69,    70,     0,    71,    72,    73,    74,
      75,    76,     0,     0,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,     0,    69,    70,     0,    71,    72,
      73,    74,    75,    76,     0,   197,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,     0,     0,     0,     0,
       0,     0,     0,   126,    69,    70,   127,    71,    72,    73,
      74,    75,    76,     0,     0,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,     0,     0,     0,     0,     0,
       0,    69,    70,    28,    71,    72,    73,    74,    75,    76,
       0,     0,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,     0,     0,     0,     0,     0,    69,    70,    99,
      71,    72,    73,    74,    75,    76,     0,     0,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,     0,     0,
       0,     0,     0,    69,    70,   167,    71,    72,    73,    74,
      75,    76,     0,     0,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,     0,     0,     0,     0,     0,    69,
      70,  -113,    71,    72,    73,    74,    75,    76,     0,     0,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
       0,     0,    16,     0,     0,    17,     0,   189,    18,    19,
       0,     0,   112,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,    50,    51,    23,    24,    25,    26,
      27,    16,     0,     0,    17,     0,     0,    18,    19,     0,
       0,   114,     0,     0,     0,    20,     0,     0,     0,     0,
       0,     0,     0,    50,    51,    23,    24,    25,    26,    27,
      16,     0,     0,    17,     0,     0,    18,    19,     0,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,    50,    51,    23,    24,    25,    26,    27,    69,
      70,     0,    71,    72,    73,    74,    75,    76,     0,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      69,    70,     0,    71,    72,    73,    74,    75,    76,     0,
     158,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    69,    70,     0,    71,    72,    73,    74,    75,    76,
       0,   159,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    69,    70,     0,    71,    72,    73,    74,    75,
      76,     0,   177,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    69,    70,     0,    71,    72,    73,    74,
      75,    76,     0,     0,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    71,    72,    73,    74,    75,    76,
       0,     0,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    73,    74,    75,    76,     0,     0,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    75,    76,
       0,     0,     0,     0,     0,    81,    82,    83,    84,    85,
      86,    87
};

static const yytype_int16 yycheck[] =
{
      14,    95,   106,    17,    18,    19,    20,    52,    49,    31,
      44,    91,    32,    27,     3,     4,     5,     6,     7,    49,
      65,    32,    43,    44,    31,    32,   106,    49,    29,    30,
      44,    49,    46,     3,     4,     5,     6,     7,     3,     4,
       5,     6,     7,    14,    15,    32,    31,    19,    32,    63,
     154,    20,    49,    44,    49,    69,    70,    71,    72,    49,
      17,    75,    76,   157,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,   154,    51,    29,    30,    19,   173,
      50,    49,    96,    97,    32,    50,    39,    40,    41,    42,
      44,    50,    53,    17,   139,    50,    32,    49,   112,    50,
     114,    51,    32,    50,    53,   107,   151,    52,    54,   187,
      50,   156,   203,   127,    -1,    -1,    -1,    -1,    62,    -1,
     165,    -1,    -1,   137,   169,    -1,    -1,   141,    -1,    -1,
      -1,    -1,     0,    -1,   179,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,   192,    16,   163,
      18,    -1,    20,    21,   199,   200,    24,    -1,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    35,   182,    -1,
      -1,    -1,    -1,   187,    -1,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    -1,    16,    -1,    18,
      -1,    20,    21,    -1,    -1,    24,    -1,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,    52,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    -1,    16,    -1,    18,
      -1,    20,    21,    -1,    -1,    24,    -1,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,    22,    23,    -1,    25,    26,    27,    28,
      29,    30,    -1,    -1,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    -1,    22,    23,    -1,    25,    26,
      27,    28,    29,    30,    -1,    54,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    22,    23,    53,    25,    26,    27,
      28,    29,    30,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    51,    25,    26,    27,    28,    29,    30,
      -1,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    22,    23,    50,
      25,    26,    27,    28,    29,    30,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    -1,
      -1,    -1,    -1,    22,    23,    50,    25,    26,    27,    28,
      29,    30,    -1,    -1,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,    22,
      23,    50,    25,    26,    27,    28,    29,    30,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      -1,    -1,    21,    -1,    -1,    24,    -1,    50,    27,    28,
      -1,    -1,    31,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    45,    46,    47,    48,
      49,    21,    -1,    -1,    24,    -1,    -1,    27,    28,    -1,
      -1,    31,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    44,    45,    46,    47,    48,    49,
      21,    -1,    -1,    24,    -1,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,    45,    46,    47,    48,    49,    22,
      23,    -1,    25,    26,    27,    28,    29,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      22,    23,    -1,    25,    26,    27,    28,    29,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    22,    23,    -1,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    22,    23,    -1,    25,    26,    27,    28,    29,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    22,    23,    -1,    25,    26,    27,    28,
      29,    30,    -1,    -1,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    25,    26,    27,    28,    29,    30,
      -1,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    27,    28,    29,    30,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    29,    30,
      -1,    -1,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      41,    42
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    56,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    16,    18,    21,    24,    27,    28,
      35,    43,    44,    45,    46,    47,    48,    49,    51,    57,
      59,    60,    63,    65,    66,    67,    68,    72,    74,    80,
      87,    92,    96,    99,    49,    44,    73,    49,    32,    32,
      43,    44,    67,    49,    67,    67,    67,    67,    31,    31,
     100,    67,    58,    19,    89,    20,    91,    43,    44,    22,
      23,    25,    26,    27,    28,    29,    30,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    32,    62,
      67,    49,    67,    44,    57,    93,    98,    97,    49,    50,
      56,    67,    61,    57,    64,    70,    49,    69,    67,    67,
      67,    67,    31,    67,    31,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    50,    53,    50,    66,
      85,    86,    75,    88,    59,    67,    67,   101,    52,    90,
      19,    31,    32,    71,    50,    85,    71,    67,    67,    32,
      67,    84,    44,    50,    53,    50,    17,    94,    32,    32,
      67,   103,    57,    49,    67,    83,    50,    50,    57,    82,
      85,    51,    57,    59,   104,   102,    67,    32,    57,    81,
      32,    57,    14,    15,    76,    77,    59,    53,    50,    50,
      57,    67,    54,    52,    50,   103,    32,    54,    57,    95,
      78,    57,    57,    79,    77
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    55,    56,    56,    58,    57,    59,    59,    59,    59,
      59,    60,    61,    59,    62,    59,    63,    64,    59,    59,
      59,    59,    59,    59,    59,    65,    65,    66,    66,    66,
      66,    66,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    69,    68,    70,    68,    71,
      71,    72,    73,    72,    75,    74,    76,    78,    79,    77,
      77,    77,    81,    80,    82,    80,    83,    80,    84,    80,
      85,    85,    86,    87,    88,    87,    90,    89,    91,    93,
      94,    95,    92,    97,    96,    98,    96,   100,   101,   102,
      99,   104,   103,   103,   103
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     0,     4,     1,     1,     1,     2,
       1,     0,     0,     3,     0,     2,     0,     0,     3,     1,
       2,     2,     2,     1,     1,     5,     7,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     2,     3,     3,     3,     4,     3,     4,     2,     2,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     3,     0,     4,     0,     4,     3,
       1,     1,     0,     3,     0,     8,     3,     0,     0,     7,
       1,     0,     0,     7,     0,     7,     0,     6,     0,     6,
       3,     1,     2,     3,     0,     6,     0,     4,     7,     0,
       0,     0,    10,     0,     5,     0,     5,     0,     0,     0,
       7,     0,     4,     1,     0
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
#line 69 "./parser.y"
                                   {printf("Parsed Line %d Succesfully\n\n", number_of_line);}
#line 1425 "parser.tab.c"
    break;

  case 4: /* $@1: %empty  */
#line 74 "./parser.y"
                    {scope_start();}
#line 1431 "parser.tab.c"
    break;

  case 5: /* BLOCK: '{' $@1 PROGRAM '}'  */
#line 74 "./parser.y"
                                                 {scope_end(number_of_line);}
#line 1437 "parser.tab.c"
    break;

  case 6: /* STATEMENT: PRINT_STATEMENT  */
#line 79 "./parser.y"
                                             {printf("Parsed print statement\n");}
#line 1443 "parser.tab.c"
    break;

  case 8: /* STATEMENT: ASSIGNMENT_STATEMENT  */
#line 81 "./parser.y"
                                               {printf("Parsed Assignment statement\n");}
#line 1449 "parser.tab.c"
    break;

  case 10: /* STATEMENT: IF_STATEMENT  */
#line 84 "./parser.y"
                                               {printf("Parsed if statement\n");}
#line 1455 "parser.tab.c"
    break;

  case 11: /* $@2: %empty  */
#line 85 "./parser.y"
                  {quadPushStartLabel(++startLabelNum);}
#line 1461 "parser.tab.c"
    break;

  case 12: /* $@3: %empty  */
#line 85 "./parser.y"
                                                                         {quadPopStartLabel();}
#line 1467 "parser.tab.c"
    break;

  case 13: /* STATEMENT: $@2 WHILE_STATEMENT $@3  */
#line 85 "./parser.y"
                                                                                                             {printf("Parsed While LOOP\n");}
#line 1473 "parser.tab.c"
    break;

  case 14: /* $@4: %empty  */
#line 86 "./parser.y"
                                {quadPopStartLabel();}
#line 1479 "parser.tab.c"
    break;

  case 15: /* STATEMENT: FOR_STATEMENT $@4  */
#line 86 "./parser.y"
                                                                      {printf("Parsed For LOOP\n");}
#line 1485 "parser.tab.c"
    break;

  case 16: /* $@5: %empty  */
#line 87 "./parser.y"
                  {quadPushStartLabel(++startLabelNum);}
#line 1491 "parser.tab.c"
    break;

  case 17: /* $@6: %empty  */
#line 87 "./parser.y"
                                                                           {quadPopStartLabel();}
#line 1497 "parser.tab.c"
    break;

  case 18: /* STATEMENT: $@5 DO_WHILE_STATEMENT $@6  */
#line 87 "./parser.y"
                                                                                                            {printf("Parsed Do While LOOP\n");}
#line 1503 "parser.tab.c"
    break;

  case 19: /* STATEMENT: SWITCH_STATEMENT  */
#line 88 "./parser.y"
                                               {printf("Parsed Switch Statement\n");}
#line 1509 "parser.tab.c"
    break;

  case 20: /* STATEMENT: BREAK SEMICOLON  */
#line 89 "./parser.y"
                                               {quadJumpEndLabel();}
#line 1515 "parser.tab.c"
    break;

  case 23: /* STATEMENT: BLOCK  */
#line 93 "./parser.y"
                                               {printf("Parsed Block\n");}
#line 1521 "parser.tab.c"
    break;

  case 24: /* STATEMENT: FUNC_DECLARATION_STATEMENT  */
#line 94 "./parser.y"
                                               {printf("Parsed Function Declaration\n");}
#line 1527 "parser.tab.c"
    break;

  case 27: /* TYPE: INT  */
#line 105 "./parser.y"
                            { (yyval.str) = "int";   }
#line 1533 "parser.tab.c"
    break;

  case 28: /* TYPE: FLOAT  */
#line 106 "./parser.y"
                            { (yyval.str) = "float"; }
#line 1539 "parser.tab.c"
    break;

  case 29: /* TYPE: BOOL  */
#line 107 "./parser.y"
                            { (yyval.str) = "bool";  }
#line 1545 "parser.tab.c"
    break;

  case 30: /* TYPE: STRING  */
#line 108 "./parser.y"
                            { (yyval.str) = "string";}
#line 1551 "parser.tab.c"
    break;

  case 31: /* TYPE: CHAR  */
#line 109 "./parser.y"
                            { (yyval.str) = "char";}
#line 1557 "parser.tab.c"
    break;

  case 32: /* EXPRESSION: IDENTIFIER  */
#line 114 "./parser.y"
                                {int i = lookup((yyvsp[0].str), 0, number_of_line);check_type(i, number_of_line);(yyval.nPtr) = setType(symbolTable[i].datatype, symbolTable[i].intValue, symbolTable[i].floatValue, symbolTable[i].boolValue, symbolTable[i].strValue, symbolTable[i].charValue);quadPushIdentifier((yyvsp[0].str));}
#line 1563 "parser.tab.c"
    break;

  case 33: /* EXPRESSION: CONSTANT  */
#line 115 "./parser.y"
                                {int i = lookup((yyvsp[0].str), 0, number_of_line);check_type(i, number_of_line);(yyval.nPtr) = setType(symbolTable[i].datatype, symbolTable[i].intValue, symbolTable[i].floatValue, symbolTable[i].boolValue, symbolTable[i].strValue, symbolTable[i].charValue);quadPushIdentifier((yyvsp[0].str));}
#line 1569 "parser.tab.c"
    break;

  case 34: /* EXPRESSION: DIGIT  */
#line 116 "./parser.y"
                                {(yyval.nPtr) = setType("int", (yyvsp[0].num), 0.0, 0, "", "");assign_int(insertResult, (yyvsp[0].num), number_of_line);quadPushInt((yyvsp[0].num));}
#line 1575 "parser.tab.c"
    break;

  case 35: /* EXPRESSION: FLOAT_DIGIT  */
#line 117 "./parser.y"
                                {(yyval.nPtr) = setType("float", 0, (yyvsp[0].float_val), 0, "", "");assign_float(insertResult, (yyvsp[0].float_val), number_of_line);quadPushFloat((yyvsp[0].float_val));}
#line 1581 "parser.tab.c"
    break;

  case 36: /* EXPRESSION: BOOL_LITERAL  */
#line 118 "./parser.y"
                                {(yyval.nPtr) = setType("bool", 0, 0.0, (yyvsp[0].bool_val), "", "");assign_bool(insertResult, (yyvsp[0].bool_val), number_of_line);quadPushInt((yyvsp[0].bool_val));}
#line 1587 "parser.tab.c"
    break;

  case 37: /* EXPRESSION: STRING_LITERAL  */
#line 119 "./parser.y"
                                {(yyval.nPtr) = setType("string", 0, 0.0, 0, (yyvsp[0].str), "");assign_string(insertResult, (yyvsp[0].str), number_of_line);quadPushString((yyvsp[0].str));}
#line 1593 "parser.tab.c"
    break;

  case 38: /* EXPRESSION: CHAR_LITERAL  */
#line 120 "./parser.y"
                                {(yyval.nPtr) = setType("char", 0, 0.0, 0, "", (yyvsp[0].str));assign_char(insertResult, (yyvsp[0].str), number_of_line);}
#line 1599 "parser.tab.c"
    break;

  case 39: /* EXPRESSION: EXPRESSION LOGIC_AND EXPRESSION  */
#line 122 "./parser.y"
                                                 {(yyval.nPtr) = logical((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '&', number_of_line);quadInstruction("LOGICAL_AND");}
#line 1605 "parser.tab.c"
    break;

  case 40: /* EXPRESSION: EXPRESSION LOGIC_OR EXPRESSION  */
#line 123 "./parser.y"
                                                 {(yyval.nPtr) = logical((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '|', number_of_line);quadInstruction("LOGICAL_OR");}
#line 1611 "parser.tab.c"
    break;

  case 41: /* EXPRESSION: LOGIC_NOT EXPRESSION  */
#line 124 "./parser.y"
                                                 {(yyval.nPtr) = not_operator((yyvsp[0].nPtr), number_of_line);quadInstruction("LOGICAL_NOT");}
#line 1617 "parser.tab.c"
    break;

  case 42: /* EXPRESSION: EXPRESSION EQUALITY EXPRESSION  */
#line 126 "./parser.y"
                                                    {(yyval.nPtr) = comparison((yyvsp[-2].nPtr), (yyvsp[0].nPtr), "==", number_of_line);quadInstruction("EQ");}
#line 1623 "parser.tab.c"
    break;

  case 43: /* EXPRESSION: EXPRESSION NEG_EQUALITY EXPRESSION  */
#line 127 "./parser.y"
                                                    {(yyval.nPtr) = comparison((yyvsp[-2].nPtr), (yyvsp[0].nPtr), "!=", number_of_line);quadInstruction("NEQ");}
#line 1629 "parser.tab.c"
    break;

  case 44: /* EXPRESSION: EXPRESSION LT EXPRESSION  */
#line 129 "./parser.y"
                                              {(yyval.nPtr) = comparison((yyvsp[-2].nPtr), (yyvsp[0].nPtr), "<", number_of_line);quadInstruction("LT");}
#line 1635 "parser.tab.c"
    break;

  case 45: /* EXPRESSION: EXPRESSION LT EQ EXPRESSION  */
#line 130 "./parser.y"
                                              {(yyval.nPtr) = comparison((yyvsp[-3].nPtr), (yyvsp[0].nPtr), "<=", number_of_line);quadInstruction("LEQ");}
#line 1641 "parser.tab.c"
    break;

  case 46: /* EXPRESSION: EXPRESSION GT EXPRESSION  */
#line 131 "./parser.y"
                                              {(yyval.nPtr) = comparison((yyvsp[-2].nPtr), (yyvsp[0].nPtr), ">", number_of_line);quadInstruction("GT");}
#line 1647 "parser.tab.c"
    break;

  case 47: /* EXPRESSION: EXPRESSION GT EQ EXPRESSION  */
#line 132 "./parser.y"
                                              {(yyval.nPtr) = comparison((yyvsp[-3].nPtr), (yyvsp[0].nPtr), ">=", number_of_line);quadInstruction("GEQ");}
#line 1653 "parser.tab.c"
    break;

  case 48: /* EXPRESSION: INC EXPRESSION  */
#line 134 "./parser.y"
                                  {(yyval.nPtr) = unary_operator((yyvsp[0].nPtr), "++", number_of_line);quadInstruction("INC");}
#line 1659 "parser.tab.c"
    break;

  case 49: /* EXPRESSION: DEC EXPRESSION  */
#line 135 "./parser.y"
                                  {(yyval.nPtr) = unary_operator((yyvsp[0].nPtr), "--", number_of_line);quadInstruction("DEC");}
#line 1665 "parser.tab.c"
    break;

  case 50: /* EXPRESSION: EXPRESSION INC  */
#line 136 "./parser.y"
                                  {(yyval.nPtr) = unary_operator((yyvsp[-1].nPtr), "++", number_of_line);quadInstruction("INC");}
#line 1671 "parser.tab.c"
    break;

  case 51: /* EXPRESSION: EXPRESSION DEC  */
#line 137 "./parser.y"
                                  {(yyval.nPtr) = unary_operator((yyvsp[-1].nPtr), "--", number_of_line);quadInstruction("DEC");}
#line 1677 "parser.tab.c"
    break;

  case 52: /* EXPRESSION: SUB EXPRESSION  */
#line 138 "./parser.y"
                                  {(yyval.nPtr) = unary_operator((yyvsp[0].nPtr), "-",  number_of_line);quadInstruction("NEG");}
#line 1683 "parser.tab.c"
    break;

  case 53: /* EXPRESSION: EXPRESSION MODULO EXPRESSION  */
#line 140 "./parser.y"
                                              {(yyval.nPtr) = arithmatic((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '%', number_of_line);quadInstruction("MOD");}
#line 1689 "parser.tab.c"
    break;

  case 54: /* EXPRESSION: EXPRESSION PLUS EXPRESSION  */
#line 141 "./parser.y"
                                              {(yyval.nPtr) = arithmatic((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '+', number_of_line);quadInstruction("ADD");}
#line 1695 "parser.tab.c"
    break;

  case 55: /* EXPRESSION: EXPRESSION SUB EXPRESSION  */
#line 142 "./parser.y"
                                              {(yyval.nPtr) = arithmatic((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '-', number_of_line);quadInstruction("SUB");}
#line 1701 "parser.tab.c"
    break;

  case 56: /* EXPRESSION: EXPRESSION MUL EXPRESSION  */
#line 143 "./parser.y"
                                              {(yyval.nPtr) = arithmatic((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '*', number_of_line);quadInstruction("MUL");}
#line 1707 "parser.tab.c"
    break;

  case 57: /* EXPRESSION: EXPRESSION DIV EXPRESSION  */
#line 144 "./parser.y"
                                              {(yyval.nPtr) = arithmatic((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '/', number_of_line);quadInstruction("DIV");}
#line 1713 "parser.tab.c"
    break;

  case 58: /* EXPRESSION: EXPRESSION POW EXPRESSION  */
#line 145 "./parser.y"
                                              {(yyval.nPtr) = arithmatic((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '^', number_of_line);quadInstruction("POW");}
#line 1719 "parser.tab.c"
    break;

  case 59: /* EXPRESSION: EXPRESSION BITWISE_OR EXPRESSION  */
#line 147 "./parser.y"
                                                    {(yyval.nPtr) = bitwise((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '|', number_of_line);quadInstruction("BITWISE_OR");}
#line 1725 "parser.tab.c"
    break;

  case 60: /* EXPRESSION: EXPRESSION BITWISE_AND EXPRESSION  */
#line 148 "./parser.y"
                                                    {(yyval.nPtr) = bitwise((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '&', number_of_line);quadInstruction("BITWISE_AND");}
#line 1731 "parser.tab.c"
    break;

  case 61: /* EXPRESSION: EXPRESSION SHL EXPRESSION  */
#line 149 "./parser.y"
                                                    {(yyval.nPtr) = bitwise((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '<', number_of_line);quadInstruction("SHL");}
#line 1737 "parser.tab.c"
    break;

  case 62: /* EXPRESSION: EXPRESSION SHR EXPRESSION  */
#line 150 "./parser.y"
                                                    {(yyval.nPtr) = bitwise((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '>', number_of_line);quadInstruction("SHR");}
#line 1743 "parser.tab.c"
    break;

  case 64: /* EXPRESSION: '(' EXPRESSION ')'  */
#line 153 "./parser.y"
                                                    {(yyval.nPtr) = (yyvsp[-1].nPtr);}
#line 1749 "parser.tab.c"
    break;

  case 65: /* $@7: %empty  */
#line 158 "./parser.y"
                                {insertResult = insert((yyvsp[-1].str), (yyvsp[0].str), "var", number_of_line, false);quadPopIdentifier((yyvsp[0].str));}
#line 1755 "parser.tab.c"
    break;

  case 66: /* DECLARATION_STATEMENT: TYPE IDENTIFIER $@7 DECLARATION_TAIL  */
#line 158 "./parser.y"
                                                                                                                                       { insertResult = -1;printf("Parsed Declaration\n");}
#line 1761 "parser.tab.c"
    break;

  case 67: /* $@8: %empty  */
#line 159 "./parser.y"
                                {insertResult = insert((yyvsp[-1].str), (yyvsp[0].str), "const", number_of_line, false);quadPopIdentifier((yyvsp[0].str));}
#line 1767 "parser.tab.c"
    break;

  case 68: /* DECLARATION_STATEMENT: TYPE CONSTANT $@8 DECLARATION_TAIL  */
#line 159 "./parser.y"
                                                                                                                                       { insertResult = -1;printf("Parsed Const Declaration\n"); }
#line 1773 "parser.tab.c"
    break;

  case 71: /* RETURN_STATEMENT: RETURN  */
#line 167 "./parser.y"
                       {quadReturn();}
#line 1779 "parser.tab.c"
    break;

  case 72: /* $@9: %empty  */
#line 168 "./parser.y"
                         {insertResult = funcIndex;quadReturn();}
#line 1785 "parser.tab.c"
    break;

  case 73: /* RETURN_STATEMENT: RETURN $@9 EXPRESSION  */
#line 168 "./parser.y"
                                                                             {returnExist = 1;}
#line 1791 "parser.tab.c"
    break;

  case 74: /* $@10: %empty  */
#line 173 "./parser.y"
                                      {quadPushLastIdentifierStack((yyvsp[0].str));quadPushEndLabel(++endLabelNum);lookup((yyvsp[0].str), 0, number_of_line);}
#line 1797 "parser.tab.c"
    break;

  case 75: /* SWITCH_STATEMENT: SWITCH '(' IDENTIFIER $@10 ')' '{' CASES '}'  */
#line 173 "./parser.y"
                                                                                                                                                          {quadPopEndLabel();quadPopLastIdentifierStack();}
#line 1803 "parser.tab.c"
    break;

  case 77: /* $@11: %empty  */
#line 179 "./parser.y"
                                    {quadPeakLastIdentifierStack();quadJumpFalseLabel(++labelNum);}
#line 1809 "parser.tab.c"
    break;

  case 78: /* $@12: %empty  */
#line 179 "./parser.y"
                                                                                                          {quadPopLabel();}
#line 1815 "parser.tab.c"
    break;

  case 82: /* $@13: %empty  */
#line 186 "./parser.y"
                                            {quadStartFunction((yyvsp[-3].str));funcIndex = insert((yyvsp[-4].str), (yyvsp[-3].str),"func", number_of_line, 0);}
#line 1821 "parser.tab.c"
    break;

  case 83: /* FUNC_DECLARATION_STATEMENT: TYPE IDENTIFIER '(' ARGS ')' $@13 BLOCK  */
#line 186 "./parser.y"
                                                                                                                                {quadEndFunction((yyvsp[-5].str));}
#line 1827 "parser.tab.c"
    break;

  case 84: /* $@14: %empty  */
#line 187 "./parser.y"
                                              {quadStartFunction((yyvsp[-3].str));funcIndex = insert("void", (yyvsp[-3].str),"func", number_of_line, 0);}
#line 1833 "parser.tab.c"
    break;

  case 85: /* FUNC_DECLARATION_STATEMENT: VOID IDENTIFIER '(' ARGS ')' $@14 BLOCK  */
#line 187 "./parser.y"
                                                                                                                                     {quadEndFunction((yyvsp[-5].str));}
#line 1839 "parser.tab.c"
    break;

  case 86: /* $@15: %empty  */
#line 188 "./parser.y"
                                          {quadStartFunction((yyvsp[-2].str));funcIndex = insert((yyvsp[-3].str), (yyvsp[-2].str),"func", number_of_line, 0);}
#line 1845 "parser.tab.c"
    break;

  case 87: /* FUNC_DECLARATION_STATEMENT: TYPE IDENTIFIER '(' ')' $@15 BLOCK  */
#line 188 "./parser.y"
                                                                                                                              {quadEndFunction((yyvsp[-4].str));}
#line 1851 "parser.tab.c"
    break;

  case 88: /* $@16: %empty  */
#line 189 "./parser.y"
                                          {quadStartFunction((yyvsp[-2].str));funcIndex = insert("void", (yyvsp[-2].str),"func", number_of_line, 0);}
#line 1857 "parser.tab.c"
    break;

  case 89: /* FUNC_DECLARATION_STATEMENT: VOID IDENTIFIER '(' ')' $@16 BLOCK  */
#line 189 "./parser.y"
                                                                                                                                 {quadEndFunction((yyvsp[-4].str));}
#line 1863 "parser.tab.c"
    break;

  case 92: /* ARG_DECL: TYPE IDENTIFIER  */
#line 196 "./parser.y"
                                {quadPopIdentifier((yyvsp[0].str));insertResult = insert((yyvsp[-1].str), (yyvsp[0].str),"var", number_of_line, true);}
#line 1869 "parser.tab.c"
    break;

  case 93: /* IF_STATEMENT: IF EXPRESSION BLOCK  */
#line 201 "./parser.y"
                                      {quadPushEndLabel(++endLabelNum);quadJumpEndLabel();quadPopEndLabel();quadJumpFalseLabel(++labelNum);quadPopLabel();}
#line 1875 "parser.tab.c"
    break;

  case 94: /* $@17: %empty  */
#line 202 "./parser.y"
                                      {quadPushEndLabel(++endLabelNum);quadJumpEndLabel();}
#line 1881 "parser.tab.c"
    break;

  case 95: /* IF_STATEMENT: IF EXPRESSION BLOCK $@17 ELSE BLOCK  */
#line 202 "./parser.y"
                                                                                                       {quadPopLabel();}
#line 1887 "parser.tab.c"
    break;

  case 96: /* $@18: %empty  */
#line 207 "./parser.y"
                                 {quadJumpFalseLabel(++labelNum);}
#line 1893 "parser.tab.c"
    break;

  case 97: /* WHILE_STATEMENT: WHILE EXPRESSION $@18 BLOCK  */
#line 207 "./parser.y"
                                                                         {quadPopLabel();quadJumpStartLabel();}
#line 1899 "parser.tab.c"
    break;

  case 98: /* DO_WHILE_STATEMENT: DO BLOCK WHILE '(' EXPRESSION ')' SEMICOLON  */
#line 211 "./parser.y"
                                                            {quadJumpFalseLabel(++labelNum);quadPopLabel();quadJumpStartLabel();}
#line 1905 "parser.tab.c"
    break;

  case 99: /* $@19: %empty  */
#line 215 "./parser.y"
                        {inLoop = 1;}
#line 1911 "parser.tab.c"
    break;

  case 100: /* $@20: %empty  */
#line 215 "./parser.y"
                                                {quadPushStartLabel(++startLabelNum);}
#line 1917 "parser.tab.c"
    break;

  case 101: /* $@21: %empty  */
#line 215 "./parser.y"
                                                                                                               {quadJumpFalseLabel(++labelNum);inLoop = 0;}
#line 1923 "parser.tab.c"
    break;

  case 102: /* FOR_STATEMENT: FOR '(' $@19 STATEMENT $@20 STATEMENT STATEMENT ')' $@21 BLOCK  */
#line 215 "./parser.y"
                                                                                                                                                                  {quadPopLabel();quadJumpStartLabel();}
#line 1929 "parser.tab.c"
    break;

  case 103: /* $@22: %empty  */
#line 220 "./parser.y"
                              {insertResult = lookup((yyvsp[-1].str), 1, number_of_line);quadPopIdentifier((yyvsp[-1].str));}
#line 1935 "parser.tab.c"
    break;

  case 105: /* $@23: %empty  */
#line 221 "./parser.y"
                              {printf("Error at line: %d CONSTANTS must not be reassigned\n", number_of_line);exit(1);insertResult = -1;}
#line 1941 "parser.tab.c"
    break;

  case 107: /* $@24: %empty  */
#line 226 "./parser.y"
                           {calledFuncIndex = lookup((yyvsp[0].str), 0, number_of_line);check_type(calledFuncIndex, number_of_line);quadCallFunction((yyvsp[0].str));}
#line 1947 "parser.tab.c"
    break;

  case 108: /* $@25: %empty  */
#line 226 "./parser.y"
                                                                                                                                                   {isParameter=1;}
#line 1953 "parser.tab.c"
    break;

  case 109: /* $@26: %empty  */
#line 226 "./parser.y"
                                                                                                                                                                              {isParameter=0;arg_count_check(calledFuncIndex, number_of_line);}
#line 1959 "parser.tab.c"
    break;

  case 110: /* FUNC_CALL: IDENTIFIER $@24 '(' $@25 ARGUMENTS $@26 ')'  */
#line 226 "./parser.y"
                                                                                                                                                                                                                                                    { printf("Parsed Function Call\n");}
#line 1965 "parser.tab.c"
    break;

  case 111: /* $@27: %empty  */
#line 229 "./parser.y"
                           { argCount++; }
#line 1971 "parser.tab.c"
    break;

  case 113: /* ARGUMENTS: EXPRESSION  */
#line 230 "./parser.y"
                             { argCount++; }
#line 1977 "parser.tab.c"
    break;


#line 1981 "parser.tab.c"

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

#line 233 "./parser.y"


void yyerror(char *s) { 
 fprintf(stderr, "line %d: %s\n", number_of_line, s); 
} 
int yywrap()
{
    return 1;
}

int main(int argc, char *argv[])
{ 
    remove_file();
    setQuadFilePath("quadruples.txt", createFile("quadruples.txt"));
    yyin = fopen(argv[1], "r");
    yyparse();
    // display();
    // display_unused_variables();
    display_to_file("symbol_table.txt");

    return 0;
}
