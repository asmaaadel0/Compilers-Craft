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
    
    void yyerror(char* );
    int yylex();
    extern FILE *yyin;
    extern int number_of_line;

#line 85 "parser.tab.c"

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
  YYSYMBOL_PRINT = 7,                      /* PRINT  */
  YYSYMBOL_VOID = 8,                       /* VOID  */
  YYSYMBOL_RETURN = 9,                     /* RETURN  */
  YYSYMBOL_SWITCH = 10,                    /* SWITCH  */
  YYSYMBOL_BREAK = 11,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 12,                  /* CONTINUE  */
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
  YYSYMBOL_NOT = 24,                       /* NOT  */
  YYSYMBOL_EQUALITY = 25,                  /* EQUALITY  */
  YYSYMBOL_NEG_EQUALITY = 26,              /* NEG_EQUALITY  */
  YYSYMBOL_DEC = 27,                       /* DEC  */
  YYSYMBOL_INC = 28,                       /* INC  */
  YYSYMBOL_GT = 29,                        /* GT  */
  YYSYMBOL_LT = 30,                        /* LT  */
  YYSYMBOL_SHR = 31,                       /* SHR  */
  YYSYMBOL_SHL = 32,                       /* SHL  */
  YYSYMBOL_EQ = 33,                        /* EQ  */
  YYSYMBOL_SEMICOLON = 34,                 /* SEMICOLON  */
  YYSYMBOL_MODULO = 35,                    /* MODULO  */
  YYSYMBOL_PLUS = 36,                      /* PLUS  */
  YYSYMBOL_SUB = 37,                       /* SUB  */
  YYSYMBOL_MUL = 38,                       /* MUL  */
  YYSYMBOL_DIV = 39,                       /* DIV  */
  YYSYMBOL_POW = 40,                       /* POW  */
  YYSYMBOL_CONSTANT = 41,                  /* CONSTANT  */
  YYSYMBOL_IDENTIFIER = 42,                /* IDENTIFIER  */
  YYSYMBOL_STRING_LITERAL = 43,            /* STRING_LITERAL  */
  YYSYMBOL_DIGIT = 44,                     /* DIGIT  */
  YYSYMBOL_FLOAT_DIGIT = 45,               /* FLOAT_DIGIT  */
  YYSYMBOL_46_ = 46,                       /* '{'  */
  YYSYMBOL_47_ = 47,                       /* '}'  */
  YYSYMBOL_48_ = 48,                       /* '('  */
  YYSYMBOL_49_ = 49,                       /* ')'  */
  YYSYMBOL_50_ = 50,                       /* ','  */
  YYSYMBOL_51_ = 51,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 52,                  /* $accept  */
  YYSYMBOL_PROGRAM = 53,                   /* PROGRAM  */
  YYSYMBOL_BLOCK = 54,                     /* BLOCK  */
  YYSYMBOL_55_1 = 55,                      /* $@1  */
  YYSYMBOL_STATEMENT = 56,                 /* STATEMENT  */
  YYSYMBOL_PRINT_STATEMENT = 57,           /* PRINT_STATEMENT  */
  YYSYMBOL_TYPE = 58,                      /* TYPE  */
  YYSYMBOL_EXPRESSION = 59,                /* EXPRESSION  */
  YYSYMBOL_DECLARATION_STATEMENT = 60,     /* DECLARATION_STATEMENT  */
  YYSYMBOL_61_2 = 61,                      /* $@2  */
  YYSYMBOL_62_3 = 62,                      /* $@3  */
  YYSYMBOL_DECLARATION_TAIL = 63,          /* DECLARATION_TAIL  */
  YYSYMBOL_RETURN_STATEMENT = 64,          /* RETURN_STATEMENT  */
  YYSYMBOL_65_4 = 65,                      /* $@4  */
  YYSYMBOL_SWITCH_STATEMENT = 66,          /* SWITCH_STATEMENT  */
  YYSYMBOL_DEFAULTCASE = 67,               /* DEFAULTCASE  */
  YYSYMBOL_CASES = 68,                     /* CASES  */
  YYSYMBOL_FUNC_DECLARATION_STATEMENT = 69, /* FUNC_DECLARATION_STATEMENT  */
  YYSYMBOL_70_5 = 70,                      /* $@5  */
  YYSYMBOL_71_6 = 71,                      /* $@6  */
  YYSYMBOL_72_7 = 72,                      /* $@7  */
  YYSYMBOL_73_8 = 73,                      /* $@8  */
  YYSYMBOL_ARGS = 74,                      /* ARGS  */
  YYSYMBOL_ARG_DECL = 75,                  /* ARG_DECL  */
  YYSYMBOL_IF_STATEMENT = 76,              /* IF_STATEMENT  */
  YYSYMBOL_WHILE_STATEMENT = 77,           /* WHILE_STATEMENT  */
  YYSYMBOL_DO_WHILE_STATEMENT = 78,        /* DO_WHILE_STATEMENT  */
  YYSYMBOL_FOR_STATEMENT = 79,             /* FOR_STATEMENT  */
  YYSYMBOL_80_9 = 80,                      /* $@9  */
  YYSYMBOL_81_10 = 81,                     /* $@10  */
  YYSYMBOL_ASSIGNMENT_STATEMENT = 82,      /* ASSIGNMENT_STATEMENT  */
  YYSYMBOL_83_11 = 83,                     /* $@11  */
  YYSYMBOL_84_12 = 84,                     /* $@12  */
  YYSYMBOL_FUNC_CALL = 85,                 /* FUNC_CALL  */
  YYSYMBOL_86_13 = 86,                     /* $@13  */
  YYSYMBOL_ARGUMENTS = 87                  /* ARGUMENTS  */
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
#define YYLAST   632

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  186

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   300


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
      48,    49,     2,     2,    50,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    51,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    46,     2,    47,     2,     2,     2,     2,
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
      45
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    65,    65,    66,    70,    70,    75,    76,    77,    78,
      80,    81,    82,    83,    84,    85,    86,    88,    89,    90,
      96,    97,   101,   102,   103,   104,   109,   110,   111,   112,
     113,   114,   116,   117,   119,   120,   122,   123,   125,   126,
     127,   128,   130,   131,   133,   134,   136,   137,   138,   139,
     140,   141,   142,   144,   145,   147,   148,   153,   153,   154,
     154,   157,   158,   162,   163,   163,   168,   171,   174,   175,
     176,   181,   181,   182,   182,   183,   183,   184,   184,   187,
     188,   191,   196,   197,   202,   206,   210,   210,   210,   215,
     215,   216,   216,   221,   221,   224,   225,   226
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
  "STRING", "BOOL", "PRINT", "VOID", "RETURN", "SWITCH", "BREAK",
  "CONTINUE", "CASE", "DEFAULT", "IF", "ELSE", "FOR", "WHILE", "DO",
  "BOOL_LITERAL", "LOGIC_AND", "LOGIC_OR", "LOGIC_NOT", "NOT", "EQUALITY",
  "NEG_EQUALITY", "DEC", "INC", "GT", "LT", "SHR", "SHL", "EQ",
  "SEMICOLON", "MODULO", "PLUS", "SUB", "MUL", "DIV", "POW", "CONSTANT",
  "IDENTIFIER", "STRING_LITERAL", "DIGIT", "FLOAT_DIGIT", "'{'", "'}'",
  "'('", "')'", "','", "':'", "$accept", "PROGRAM", "BLOCK", "$@1",
  "STATEMENT", "PRINT_STATEMENT", "TYPE", "EXPRESSION",
  "DECLARATION_STATEMENT", "$@2", "$@3", "DECLARATION_TAIL",
  "RETURN_STATEMENT", "$@4", "SWITCH_STATEMENT", "DEFAULTCASE", "CASES",
  "FUNC_DECLARATION_STATEMENT", "$@5", "$@6", "$@7", "$@8", "ARGS",
  "ARG_DECL", "IF_STATEMENT", "WHILE_STATEMENT", "DO_WHILE_STATEMENT",
  "FOR_STATEMENT", "$@9", "$@10", "ASSIGNMENT_STATEMENT", "$@11", "$@12",
  "FUNC_CALL", "$@13", "ARGUMENTS", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-98)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-94)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -98,   165,   -98,   -98,   -98,   -98,   -98,   -34,   -26,     0,
      -6,     4,    12,   449,    -1,   449,     3,   -98,   449,   449,
     449,   449,   449,    21,   -28,   -98,   -98,   -98,   -98,   449,
     -98,   -98,   -98,   -30,   496,   -98,    22,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   449,     7,   449,    11,   -98,
     -98,   -98,    32,   474,   -98,   474,    63,   592,   592,    13,
      13,    13,   -98,   -98,    34,   -98,   364,   -98,    38,   449,
     449,   449,   449,   -98,   -98,    76,   437,   449,   449,   -98,
     449,   449,   449,   449,   449,   449,   -98,   312,    18,   576,
      41,    72,   257,   -98,    42,   449,   449,   449,   211,   -98,
     -15,    26,   -15,   592,   592,   102,   102,   449,    -4,   449,
      -4,   -98,   -98,    13,    13,    13,    -4,    -4,    13,    55,
     449,   -98,    49,    43,    44,    27,     3,   257,   449,   516,
     536,   338,    52,   -98,   449,   -98,   -98,   -98,    53,   -98,
      -4,    -4,   -98,   389,     3,   -98,   -98,    73,   449,    47,
     -98,    46,   -98,   257,   414,   -98,   -98,   449,   -98,   556,
       3,   -98,    71,   -98,     3,   -98,   285,     3,   -98,    57,
      77,   -98,   -98,   -98,     3,   -98,   -98,     3,   -98,   -98,
     -98,   -98,    27,     3,   -98,   -98
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     1,    22,    23,    25,    24,     0,     0,    64,
       0,     0,     0,     0,     0,     0,     0,    30,     0,     0,
       0,     0,     0,    27,    26,    31,    28,    29,     4,     0,
      18,     2,     6,     0,     0,     7,     0,    14,    19,    10,
      11,    13,    12,     8,    55,     0,     0,     0,     0,    15,
      16,    27,    26,     0,    86,     0,     0,    34,    35,    45,
      44,    48,    91,    89,     0,     3,     0,    59,    57,     0,
       0,     0,     0,    43,    42,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,    17,     0,     0,    65,
       0,    82,     0,    84,     0,     0,     0,    97,     0,    56,
       0,     0,     0,    32,    33,    36,    37,     0,    40,     0,
      38,    53,    54,    46,    47,    49,    50,    51,    52,     0,
       0,    77,     0,     0,    80,    70,     0,     0,     0,     0,
       0,    96,     0,     5,     0,    62,    60,    75,     0,    58,
      41,    39,    20,     0,     0,    81,    73,     0,     0,     0,
      69,     0,    83,     0,     0,    92,    90,    97,    94,     0,
       0,    71,     0,    78,     0,    79,     0,     0,    66,     0,
       0,    95,    61,    76,     0,    21,    74,     0,    67,    87,
      85,    72,    70,     0,    68,    88
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -98,    50,   -16,   -98,   -79,   -98,   -86,   -12,   -98,   -98,
     -98,     5,   -98,   -98,   -98,   -98,   -70,   -98,   -98,   -98,
     -98,   -98,   -97,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -43
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,    30,    65,    31,    32,    33,    34,    35,   102,
     100,   136,    36,    47,    37,   150,   151,    38,   174,   164,
     160,   144,   123,   124,    39,    40,    41,    42,    92,   183,
      43,    96,    95,    44,    64,   132
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      56,    53,   122,    55,   138,    63,    57,    58,    59,    60,
      61,    67,    68,   127,    45,   122,    46,    66,   134,   135,
     -93,     3,     4,     5,     6,    75,    76,    77,    78,     3,
       4,     5,     6,    87,   -63,    89,    48,    91,    49,    93,
     148,   149,    75,    76,    77,    78,    50,    54,   153,    28,
     165,    83,    84,    85,    62,    88,    86,   103,   104,   105,
     106,   122,    90,   108,   110,   111,   112,   121,   113,   114,
     115,   116,   117,   118,   169,   137,     3,     4,     5,     6,
     -93,    94,    97,   129,   130,   131,   101,   125,   126,   142,
     128,   145,   146,   168,   147,   140,    17,   141,   167,    18,
      19,   158,   161,    20,    21,   175,   179,   139,   143,   107,
     152,   180,   184,    22,   171,    98,   154,    51,    52,    25,
      26,    27,   159,     0,    29,     0,     0,     0,   163,    73,
      74,    75,    76,    77,    78,     0,   166,    80,    81,    82,
      83,    84,    85,     0,   173,   131,     0,     0,   176,     0,
       0,   178,     0,     0,     0,     0,     0,     0,   181,     0,
       0,   182,     0,     0,     0,     2,     0,   185,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
      13,     0,    14,    15,    16,    17,     0,     0,    18,    19,
       0,     0,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,    22,     0,     0,     0,    23,    24,    25,    26,
      27,    28,     0,    29,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,     0,     0,    13,     0,    14,    15,
      16,    17,     0,     0,    18,    19,     0,     0,    20,    21,
       0,     0,     0,     0,     0,     0,     0,     0,    22,     0,
       0,     0,    23,    24,    25,    26,    27,    28,   133,    29,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,    13,     0,    14,    15,    16,    17,     0,     0,
      18,    19,     0,     0,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,    22,     0,     0,     0,    23,    24,
      25,    26,    27,    28,     0,    29,    69,    70,     0,     0,
      71,    72,    73,    74,    75,    76,    77,    78,     0,     0,
      80,    81,    82,    83,    84,    85,     0,     0,     0,     0,
       0,     0,     0,    69,    70,     0,   177,    71,    72,    73,
      74,    75,    76,    77,    78,     0,     0,    80,    81,    82,
      83,    84,    85,     0,     0,     0,     0,     0,     0,    69,
      70,   119,   120,    71,    72,    73,    74,    75,    76,    77,
      78,     0,     0,    80,    81,    82,    83,    84,    85,     0,
       0,     0,     0,     0,     0,    69,    70,     0,   157,    71,
      72,    73,    74,    75,    76,    77,    78,     0,     0,    80,
      81,    82,    83,    84,    85,     0,     0,     0,     0,     0,
      69,    70,     0,    99,    71,    72,    73,    74,    75,    76,
      77,    78,     0,     0,    80,    81,    82,    83,    84,    85,
       0,     0,     0,     0,     0,    69,    70,     0,   162,    71,
      72,    73,    74,    75,    76,    77,    78,     0,     0,    80,
      81,    82,    83,    84,    85,     0,     0,    17,     0,     0,
      18,    19,     0,   170,    20,    21,     0,     0,     0,    17,
     109,     0,    18,    19,    22,     0,    20,    21,    51,    52,
      25,    26,    27,     0,     0,    29,    22,     0,     0,     0,
      51,    52,    25,    26,    27,    69,    70,    29,     0,    71,
      72,    73,    74,    75,    76,    77,    78,     0,     0,    80,
      81,    82,    83,    84,    85,     0,     0,    69,    70,     0,
      28,    71,    72,    73,    74,    75,    76,    77,    78,     0,
      79,    80,    81,    82,    83,    84,    85,    69,    70,     0,
       0,    71,    72,    73,    74,    75,    76,    77,    78,     0,
     155,    80,    81,    82,    83,    84,    85,    69,    70,     0,
       0,    71,    72,    73,    74,    75,    76,    77,    78,     0,
     156,    80,    81,    82,    83,    84,    85,    69,    70,     0,
       0,    71,    72,    73,    74,    75,    76,    77,    78,     0,
     172,    80,    81,    82,    83,    84,    85,    69,    70,     0,
       0,    71,    72,    73,    74,    75,    76,    77,    78,     0,
       0,    80,    81,    82,    83,    84,    85,    71,    72,    73,
      74,    75,    76,    77,    78,     0,     0,    80,    81,    82,
      83,    84,    85
};

static const yytype_int16 yycheck[] =
{
      16,    13,    88,    15,   101,    33,    18,    19,    20,    21,
      22,    41,    42,    92,    48,   101,    42,    29,    33,    34,
      48,     3,     4,     5,     6,    29,    30,    31,    32,     3,
       4,     5,     6,    45,    34,    47,    42,    53,    34,    55,
      13,    14,    29,    30,    31,    32,    34,    48,   127,    46,
     147,    38,    39,    40,    33,    48,    34,    69,    70,    71,
      72,   147,    51,    75,    76,    77,    78,    49,    80,    81,
      82,    83,    84,    85,   153,    49,     3,     4,     5,     6,
      48,    18,    48,    95,    96,    97,    48,    46,    16,    34,
      48,    42,    49,    47,    50,   107,    20,   109,    51,    23,
      24,    49,    49,    27,    28,    34,    49,   102,   120,    33,
     126,    34,   182,    37,   157,    65,   128,    41,    42,    43,
      44,    45,   134,    -1,    48,    -1,    -1,    -1,   144,    27,
      28,    29,    30,    31,    32,    -1,   148,    35,    36,    37,
      38,    39,    40,    -1,   160,   157,    -1,    -1,   164,    -1,
      -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,   174,    -1,
      -1,   177,    -1,    -1,    -1,     0,    -1,   183,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    -1,    -1,
      15,    -1,    17,    18,    19,    20,    -1,    -1,    23,    24,
      -1,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    41,    42,    43,    44,
      45,    46,    -1,    48,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    -1,    -1,    15,    -1,    17,    18,
      19,    20,    -1,    -1,    23,    24,    -1,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      -1,    -1,    41,    42,    43,    44,    45,    46,    47,    48,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    -1,    15,    -1,    17,    18,    19,    20,    -1,    -1,
      23,    24,    -1,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    41,    42,
      43,    44,    45,    46,    -1,    48,    21,    22,    -1,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      35,    36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    -1,    51,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    49,    50,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    35,    36,    37,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    -1,    50,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      21,    22,    -1,    49,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    35,    36,    37,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    21,    22,    -1,    49,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    35,
      36,    37,    38,    39,    40,    -1,    -1,    20,    -1,    -1,
      23,    24,    -1,    49,    27,    28,    -1,    -1,    -1,    20,
      33,    -1,    23,    24,    37,    -1,    27,    28,    41,    42,
      43,    44,    45,    -1,    -1,    48,    37,    -1,    -1,    -1,
      41,    42,    43,    44,    45,    21,    22,    48,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    35,
      36,    37,    38,    39,    40,    -1,    -1,    21,    22,    -1,
      46,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    21,    22,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    21,    22,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    21,    22,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    21,    22,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    40
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    53,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    15,    17,    18,    19,    20,    23,    24,
      27,    28,    37,    41,    42,    43,    44,    45,    46,    48,
      54,    56,    57,    58,    59,    60,    64,    66,    69,    76,
      77,    78,    79,    82,    85,    48,    42,    65,    42,    34,
      34,    41,    42,    59,    48,    59,    54,    59,    59,    59,
      59,    59,    33,    33,    86,    55,    59,    41,    42,    21,
      22,    25,    26,    27,    28,    29,    30,    31,    32,    34,
      35,    36,    37,    38,    39,    40,    34,    59,    48,    59,
      51,    54,    80,    54,    18,    84,    83,    48,    53,    49,
      62,    48,    61,    59,    59,    59,    59,    33,    59,    33,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    49,
      50,    49,    58,    74,    75,    46,    16,    56,    48,    59,
      59,    59,    87,    47,    33,    34,    63,    49,    74,    63,
      59,    59,    34,    59,    73,    42,    49,    50,    13,    14,
      67,    68,    54,    56,    59,    34,    34,    50,    49,    59,
      72,    49,    49,    54,    71,    74,    59,    51,    47,    56,
      49,    87,    34,    54,    70,    34,    54,    51,    54,    49,
      34,    54,    54,    81,    68,    54
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    52,    53,    53,    55,    54,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      57,    57,    58,    58,    58,    58,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    61,    60,    62,
      60,    63,    63,    64,    65,    64,    66,    67,    68,    68,
      68,    70,    69,    71,    69,    72,    69,    73,    69,    74,
      74,    75,    76,    76,    77,    78,    80,    81,    79,    83,
      82,    84,    82,    86,    85,    87,    87,    87
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     0,     4,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     2,     2,     2,     1,     1,
       5,     7,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     2,     2,     3,     3,     3,     4,
       3,     4,     2,     2,     2,     2,     3,     3,     2,     3,
       3,     3,     3,     3,     3,     1,     3,     0,     4,     0,
       4,     3,     1,     1,     0,     3,     6,     3,     5,     1,
       0,     0,     7,     0,     7,     0,     6,     0,     6,     3,
       1,     2,     3,     5,     3,     7,     0,     0,     9,     0,
       5,     0,     5,     0,     5,     3,     1,     0
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
#line 65 "./parser.y"
                                   {printf("Parsed Line %d Succesfully\n\n", number_of_line);}
#line 1376 "parser.tab.c"
    break;

  case 4: /* $@1: %empty  */
#line 70 "./parser.y"
                    {scope_start();}
#line 1382 "parser.tab.c"
    break;

  case 5: /* BLOCK: '{' $@1 PROGRAM '}'  */
#line 70 "./parser.y"
                                                 {scope_end(number_of_line);}
#line 1388 "parser.tab.c"
    break;

  case 6: /* STATEMENT: PRINT_STATEMENT  */
#line 75 "./parser.y"
                                              {printf("Parsed print statement\n");}
#line 1394 "parser.tab.c"
    break;

  case 8: /* STATEMENT: ASSIGNMENT_STATEMENT  */
#line 77 "./parser.y"
                                               {printf("Parsed Assignment statement\n");}
#line 1400 "parser.tab.c"
    break;

  case 10: /* STATEMENT: IF_STATEMENT  */
#line 80 "./parser.y"
                                               {printf("Parsed if statement\n");}
#line 1406 "parser.tab.c"
    break;

  case 11: /* STATEMENT: WHILE_STATEMENT  */
#line 81 "./parser.y"
                                               {printf("Parsed While LOOP\n");}
#line 1412 "parser.tab.c"
    break;

  case 12: /* STATEMENT: FOR_STATEMENT  */
#line 82 "./parser.y"
                                               {printf("Parsed For LOOP\n");}
#line 1418 "parser.tab.c"
    break;

  case 13: /* STATEMENT: DO_WHILE_STATEMENT  */
#line 83 "./parser.y"
                                               {printf("Parsed Do While LOOP\n");}
#line 1424 "parser.tab.c"
    break;

  case 14: /* STATEMENT: SWITCH_STATEMENT  */
#line 84 "./parser.y"
                                               {printf("Parsed Switch Statement\n");}
#line 1430 "parser.tab.c"
    break;

  case 18: /* STATEMENT: BLOCK  */
#line 89 "./parser.y"
                                               {printf("Parsed Block\n");}
#line 1436 "parser.tab.c"
    break;

  case 19: /* STATEMENT: FUNC_DECLARATION_STATEMENT  */
#line 90 "./parser.y"
                                               {printf("Parsed Function Declaration\n");}
#line 1442 "parser.tab.c"
    break;

  case 22: /* TYPE: INT  */
#line 101 "./parser.y"
                            { (yyval.str) = "int";   }
#line 1448 "parser.tab.c"
    break;

  case 23: /* TYPE: FLOAT  */
#line 102 "./parser.y"
                            { (yyval.str) = "float"; }
#line 1454 "parser.tab.c"
    break;

  case 24: /* TYPE: BOOL  */
#line 103 "./parser.y"
                            { (yyval.str) = "bool";  }
#line 1460 "parser.tab.c"
    break;

  case 25: /* TYPE: STRING  */
#line 104 "./parser.y"
                            { (yyval.str) = "string";}
#line 1466 "parser.tab.c"
    break;

  case 26: /* EXPRESSION: IDENTIFIER  */
#line 109 "./parser.y"
                                {int i = lookup((yyvsp[0].str), 0, number_of_line);check_type(i, number_of_line);}
#line 1472 "parser.tab.c"
    break;

  case 27: /* EXPRESSION: CONSTANT  */
#line 110 "./parser.y"
                                {int i = lookup((yyvsp[0].str), 0, number_of_line);check_type(i, number_of_line);}
#line 1478 "parser.tab.c"
    break;

  case 28: /* EXPRESSION: DIGIT  */
#line 111 "./parser.y"
                                {assign_int(insertResult, (yyvsp[0].num), number_of_line);}
#line 1484 "parser.tab.c"
    break;

  case 29: /* EXPRESSION: FLOAT_DIGIT  */
#line 112 "./parser.y"
                                {assign_float(insertResult, (yyvsp[0].float_val), number_of_line);}
#line 1490 "parser.tab.c"
    break;

  case 30: /* EXPRESSION: BOOL_LITERAL  */
#line 113 "./parser.y"
                                {assign_bool(insertResult, (yyvsp[0].bool_val), number_of_line);}
#line 1496 "parser.tab.c"
    break;

  case 31: /* EXPRESSION: STRING_LITERAL  */
#line 114 "./parser.y"
                                {assign_string(insertResult, (yyvsp[0].str), number_of_line);}
#line 1502 "parser.tab.c"
    break;

  case 57: /* $@2: %empty  */
#line 153 "./parser.y"
                                {insertResult = insert((yyvsp[-1].str), (yyvsp[0].str), "var", number_of_line, false);}
#line 1508 "parser.tab.c"
    break;

  case 58: /* DECLARATION_STATEMENT: TYPE IDENTIFIER $@2 DECLARATION_TAIL  */
#line 153 "./parser.y"
                                                                                                                 { insertResult = -1;printf("Parsed Declaration\n");}
#line 1514 "parser.tab.c"
    break;

  case 59: /* $@3: %empty  */
#line 154 "./parser.y"
                                {insertResult = insert((yyvsp[-1].str), (yyvsp[0].str), "const", number_of_line, false);}
#line 1520 "parser.tab.c"
    break;

  case 60: /* DECLARATION_STATEMENT: TYPE CONSTANT $@3 DECLARATION_TAIL  */
#line 154 "./parser.y"
                                                                                                                 { insertResult = -1;printf("Parsed Const Declaration\n"); }
#line 1526 "parser.tab.c"
    break;

  case 64: /* $@4: %empty  */
#line 163 "./parser.y"
                         {insertResult = funcIndex;}
#line 1532 "parser.tab.c"
    break;

  case 65: /* RETURN_STATEMENT: RETURN $@4 EXPRESSION  */
#line 163 "./parser.y"
                                                                {returnExist = 1;}
#line 1538 "parser.tab.c"
    break;

  case 71: /* $@5: %empty  */
#line 181 "./parser.y"
                                             {funcIndex = insert((yyvsp[-4].str), (yyvsp[-3].str),"func", number_of_line, 0);}
#line 1544 "parser.tab.c"
    break;

  case 73: /* $@6: %empty  */
#line 182 "./parser.y"
                                              {funcIndex = insert("void", (yyvsp[-3].str),"func", number_of_line, 0);}
#line 1550 "parser.tab.c"
    break;

  case 75: /* $@7: %empty  */
#line 183 "./parser.y"
                                          {funcIndex = insert((yyvsp[-3].str), (yyvsp[-2].str),"func", number_of_line, 0);}
#line 1556 "parser.tab.c"
    break;

  case 77: /* $@8: %empty  */
#line 184 "./parser.y"
                                          {funcIndex = insert("void", (yyvsp[-2].str),"func", number_of_line, 0);}
#line 1562 "parser.tab.c"
    break;

  case 81: /* ARG_DECL: TYPE IDENTIFIER  */
#line 191 "./parser.y"
                                {insertResult = insert((yyvsp[-1].str), (yyvsp[0].str),"var", number_of_line, true);}
#line 1568 "parser.tab.c"
    break;

  case 86: /* $@9: %empty  */
#line 210 "./parser.y"
                        {inLoop = 1;}
#line 1574 "parser.tab.c"
    break;

  case 87: /* $@10: %empty  */
#line 210 "./parser.y"
                                                                        {inLoop = 0;}
#line 1580 "parser.tab.c"
    break;

  case 89: /* $@11: %empty  */
#line 215 "./parser.y"
                              {insertResult = lookup((yyvsp[-1].str), 1, number_of_line);}
#line 1586 "parser.tab.c"
    break;

  case 91: /* $@12: %empty  */
#line 216 "./parser.y"
                              {printf("Error at line: %d CONSTANTS must not be reassigned\n", number_of_line);insertResult = -1;}
#line 1592 "parser.tab.c"
    break;

  case 93: /* $@13: %empty  */
#line 221 "./parser.y"
                           {calledFuncIndex = lookup((yyvsp[0].str),0, number_of_line);check_type(calledFuncIndex, number_of_line);}
#line 1598 "parser.tab.c"
    break;

  case 94: /* FUNC_CALL: IDENTIFIER $@13 '(' ARGUMENTS ')'  */
#line 221 "./parser.y"
                                                                                                                                            { printf("Parsed Function Call\n");}
#line 1604 "parser.tab.c"
    break;


#line 1608 "parser.tab.c"

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

#line 228 "./parser.y"


void yyerror(char *s) { 
 fprintf(stderr, "line %d: %s\n", number_of_line, s); 
} 
int yywrap()
{
    return 1;
}

int main(int argc, char *argv[])
{ 
    yyin = fopen(argv[1], "r");
    yyparse();
    // display();
    display_to_file("symbol_table.txt");
    // display_unused_variables();

    return 0;
}
