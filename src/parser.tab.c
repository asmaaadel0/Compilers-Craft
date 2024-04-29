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
    symbol *head = NULL;
    char IdentifierHolder[10];

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
  YYSYMBOL_ENUM = 6,                       /* ENUM  */
  YYSYMBOL_BOOL = 7,                       /* BOOL  */
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
  YYSYMBOL_NOT = 25,                       /* NOT  */
  YYSYMBOL_EQUALITY = 26,                  /* EQUALITY  */
  YYSYMBOL_NEG_EQUALITY = 27,              /* NEG_EQUALITY  */
  YYSYMBOL_DEC = 28,                       /* DEC  */
  YYSYMBOL_INC = 29,                       /* INC  */
  YYSYMBOL_GT = 30,                        /* GT  */
  YYSYMBOL_LT = 31,                        /* LT  */
  YYSYMBOL_SHR = 32,                       /* SHR  */
  YYSYMBOL_SHL = 33,                       /* SHL  */
  YYSYMBOL_EQ = 34,                        /* EQ  */
  YYSYMBOL_SEMICOLON = 35,                 /* SEMICOLON  */
  YYSYMBOL_MODULO = 36,                    /* MODULO  */
  YYSYMBOL_PLUS = 37,                      /* PLUS  */
  YYSYMBOL_SUB = 38,                       /* SUB  */
  YYSYMBOL_MUL = 39,                       /* MUL  */
  YYSYMBOL_DIV = 40,                       /* DIV  */
  YYSYMBOL_POW = 41,                       /* POW  */
  YYSYMBOL_CONSTANT = 42,                  /* CONSTANT  */
  YYSYMBOL_IDENTIFIER = 43,                /* IDENTIFIER  */
  YYSYMBOL_STRING_LITERAL = 44,            /* STRING_LITERAL  */
  YYSYMBOL_DIGIT = 45,                     /* DIGIT  */
  YYSYMBOL_FLOAT_DIGIT = 46,               /* FLOAT_DIGIT  */
  YYSYMBOL_47_ = 47,                       /* '{'  */
  YYSYMBOL_48_ = 48,                       /* '}'  */
  YYSYMBOL_49_ = 49,                       /* '('  */
  YYSYMBOL_50_ = 50,                       /* ')'  */
  YYSYMBOL_51_ = 51,                       /* ','  */
  YYSYMBOL_52_ = 52,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 53,                  /* $accept  */
  YYSYMBOL_PROGRAM = 54,                   /* PROGRAM  */
  YYSYMBOL_BLOCK = 55,                     /* BLOCK  */
  YYSYMBOL_56_1 = 56,                      /* $@1  */
  YYSYMBOL_STATEMENT = 57,                 /* STATEMENT  */
  YYSYMBOL_PRINT_STATEMENT = 58,           /* PRINT_STATEMENT  */
  YYSYMBOL_TYPE = 59,                      /* TYPE  */
  YYSYMBOL_EXPRESSION = 60,                /* EXPRESSION  */
  YYSYMBOL_DECLARATION_STATEMENT = 61,     /* DECLARATION_STATEMENT  */
  YYSYMBOL_62_2 = 62,                      /* $@2  */
  YYSYMBOL_63_3 = 63,                      /* $@3  */
  YYSYMBOL_DECLARATION_TAIL = 64,          /* DECLARATION_TAIL  */
  YYSYMBOL_RETURN_STATEMENT = 65,          /* RETURN_STATEMENT  */
  YYSYMBOL_SWITCH_STATEMENT = 66,          /* SWITCH_STATEMENT  */
  YYSYMBOL_DEFAULTCASE = 67,               /* DEFAULTCASE  */
  YYSYMBOL_CASES = 68,                     /* CASES  */
  YYSYMBOL_FUNC_DECLARATION_STATEMENT = 69, /* FUNC_DECLARATION_STATEMENT  */
  YYSYMBOL_ARGS = 70,                      /* ARGS  */
  YYSYMBOL_ARG_DECL = 71,                  /* ARG_DECL  */
  YYSYMBOL_ENUM_DECLARATION_STATEMENT = 72, /* ENUM_DECLARATION_STATEMENT  */
  YYSYMBOL_ENUM_HELPER = 73,               /* ENUM_HELPER  */
  YYSYMBOL_ENUM_ARGS = 74,                 /* ENUM_ARGS  */
  YYSYMBOL_75_4 = 75,                      /* $@4  */
  YYSYMBOL_ENUM_DEFINED_ARGS = 76,         /* ENUM_DEFINED_ARGS  */
  YYSYMBOL_77_5 = 77,                      /* $@5  */
  YYSYMBOL_ENUM_CALL_STATEMENT = 78,       /* ENUM_CALL_STATEMENT  */
  YYSYMBOL_IF_STATEMENT = 79,              /* IF_STATEMENT  */
  YYSYMBOL_WHILE_STATEMENT = 80,           /* WHILE_STATEMENT  */
  YYSYMBOL_DO_WHILE_STATEMENT = 81,        /* DO_WHILE_STATEMENT  */
  YYSYMBOL_FOR_STATEMENT = 82,             /* FOR_STATEMENT  */
  YYSYMBOL_ASSIGNMENT_STATEMENT = 83,      /* ASSIGNMENT_STATEMENT  */
  YYSYMBOL_84_6 = 84,                      /* $@6  */
  YYSYMBOL_85_7 = 85,                      /* $@7  */
  YYSYMBOL_FUNC_CALL = 86,                 /* FUNC_CALL  */
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
#define YYLAST   634

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  204

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   301


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
      49,    50,     2,     2,    51,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    52,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,    48,     2,     2,     2,     2,
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
      45,    46
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    67,    67,    68,    72,    72,    77,    78,    79,    80,
      82,    83,    85,    86,    87,    88,    89,    90,    91,    93,
      94,    95,   101,   102,   106,   107,   108,   109,   114,   115,
     116,   117,   118,   119,   121,   122,   124,   125,   127,   128,
     130,   131,   132,   133,   135,   136,   138,   139,   141,   142,
     143,   144,   145,   146,   147,   149,   150,   152,   153,   158,
     158,   159,   159,   162,   163,   167,   168,   173,   176,   179,
     180,   181,   186,   187,   188,   189,   192,   193,   196,   201,
     203,   203,   206,   206,   207,   213,   213,   214,   218,   219,
     224,   225,   230,   234,   238,   243,   243,   244,   244,   249,
     252,   253
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
  "CONTINUE", "CASE", "DEFAULT", "IF", "ELSE", "FOR", "WHILE", "DO",
  "BOOL_LITERAL", "LOGIC_AND", "LOGIC_OR", "LOGIC_NOT", "NOT", "EQUALITY",
  "NEG_EQUALITY", "DEC", "INC", "GT", "LT", "SHR", "SHL", "EQ",
  "SEMICOLON", "MODULO", "PLUS", "SUB", "MUL", "DIV", "POW", "CONSTANT",
  "IDENTIFIER", "STRING_LITERAL", "DIGIT", "FLOAT_DIGIT", "'{'", "'}'",
  "'('", "')'", "','", "':'", "$accept", "PROGRAM", "BLOCK", "$@1",
  "STATEMENT", "PRINT_STATEMENT", "TYPE", "EXPRESSION",
  "DECLARATION_STATEMENT", "$@2", "$@3", "DECLARATION_TAIL",
  "RETURN_STATEMENT", "SWITCH_STATEMENT", "DEFAULTCASE", "CASES",
  "FUNC_DECLARATION_STATEMENT", "ARGS", "ARG_DECL",
  "ENUM_DECLARATION_STATEMENT", "ENUM_HELPER", "ENUM_ARGS", "$@4",
  "ENUM_DEFINED_ARGS", "$@5", "ENUM_CALL_STATEMENT", "IF_STATEMENT",
  "WHILE_STATEMENT", "DO_WHILE_STATEMENT", "FOR_STATEMENT",
  "ASSIGNMENT_STATEMENT", "$@6", "$@7", "FUNC_CALL", "ARGUMENTS", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-107)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-88)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -107,   176,  -107,  -107,  -107,  -107,   -38,  -107,   -42,   -33,
     450,   -23,    23,    25,   450,   -22,   450,   -10,  -107,   450,
     450,   450,   450,   450,    28,     2,  -107,  -107,  -107,  -107,
     450,  -107,  -107,  -107,   -13,   497,  -107,    30,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,    16,   450,
      27,  -107,    34,   577,    32,  -107,  -107,   475,   270,   475,
      81,   593,   593,    71,    71,    71,  -107,  -107,    -2,   450,
    -107,   377,  -107,    56,   450,   450,   450,   450,  -107,  -107,
      10,   106,   450,   450,  -107,   450,   450,   450,   450,   450,
     450,  -107,    63,   325,    14,    61,   101,   270,  -107,    70,
     450,   450,    77,  -107,   351,    72,   223,  -107,    12,    21,
      12,   593,   593,    58,    58,   450,   131,   450,   131,  -107,
    -107,    71,    71,    71,   131,   131,    71,   -25,    75,  -107,
    -107,    90,   450,   -10,    83,    78,    86,    35,   -10,   270,
     450,   517,   537,    94,   450,  -107,  -107,   450,  -107,  -107,
     -10,    88,  -107,   131,   131,    96,    91,   108,  -107,   402,
    -107,  -107,   -10,   110,   450,    95,  -107,    98,  -107,   103,
     427,  -107,  -107,  -107,  -107,   557,  -107,   -10,   109,   111,
    -107,   123,  -107,  -107,   298,   -10,  -107,   -10,   124,  -107,
    -107,   114,   118,  -107,  -107,   -10,  -107,  -107,  -107,   126,
      35,   133,  -107,  -107
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     1,    24,    25,    27,     0,    26,     0,     0,
      65,     0,     0,     0,     0,     0,     0,     0,    32,     0,
       0,     0,     0,     0,    29,    28,    33,    30,    31,     4,
       0,    20,     2,     6,     0,     0,     7,     0,    16,    21,
      10,    11,    12,    13,    15,    14,     8,    57,     0,     0,
       0,    29,    28,    66,     0,    17,    18,     0,     0,     0,
       0,    36,    37,    47,    46,    50,    97,    95,     0,     0,
       3,     0,    61,    59,     0,     0,     0,     0,    45,    44,
       0,     0,     0,     0,     9,     0,     0,     0,     0,     0,
       0,    19,     0,     0,     0,     0,    90,     0,    92,     0,
       0,     0,     0,    89,   101,     0,     0,    58,     0,     0,
       0,    34,    35,    38,    39,     0,    42,     0,    40,    55,
      56,    48,    49,    51,    52,    53,    54,    82,     0,    80,
      81,     0,     0,     0,     0,     0,    77,    71,     0,     0,
       0,     0,     0,     0,     0,    99,     5,     0,    64,    62,
       0,     0,    60,    43,    41,     0,     0,     0,    22,     0,
      75,    78,     0,     0,     0,     0,    70,     0,    91,     0,
       0,    98,    96,    88,   100,     0,    74,     0,    85,     0,
      79,     0,    73,    76,     0,     0,    67,     0,     0,    63,
      72,     0,    82,    83,    23,     0,    68,    94,    93,     0,
      71,     0,    86,    69
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -107,   102,   -17,  -107,   -54,  -107,   -93,    -8,  -107,  -107,
    -107,    64,  -107,  -107,  -107,   -29,  -107,  -106,  -107,  -107,
    -107,    -6,  -107,   -24,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,    33
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,    31,    70,    32,    33,    34,    35,    36,   110,
     108,   149,    37,    38,   166,   167,    39,   135,   136,    40,
     128,   129,   156,   130,   191,    41,    42,    43,    44,    45,
      46,   101,   100,    47,   105
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      60,   134,    53,   151,    97,    48,    57,    49,    59,   155,
      50,    61,    62,    63,    64,    65,   134,     3,     4,     5,
      54,     7,    71,   -84,     3,     4,     5,    58,     7,    72,
      73,    18,   102,   103,    19,    20,    67,    29,    21,    22,
      96,    93,    98,   139,   115,    68,   147,   148,    23,   164,
     165,    69,    51,    52,    26,    27,    28,   183,    55,    30,
      56,   104,    66,    92,   133,    91,   111,   112,   113,   114,
     134,   150,   116,   118,   119,   120,    94,   121,   122,   123,
     124,   125,   126,    69,    95,   169,    78,    79,    80,    81,
      82,    83,   141,   142,    85,    86,    87,    88,    89,    90,
      99,    80,    81,    82,    83,   109,   127,   153,   137,   154,
      88,    89,    90,     3,     4,     5,   160,     7,   138,   140,
     143,   168,   145,   157,   159,   158,   161,    18,   162,   173,
      19,    20,   170,   176,    21,    22,   104,   163,   177,   175,
     117,   178,   179,   180,    23,   182,   186,   185,    51,    52,
      26,    27,    28,   187,   192,    30,   184,   -87,   194,   198,
     190,    80,    81,    82,    83,   199,   -84,   155,   196,   201,
     197,   203,   106,   193,   152,   202,     2,   174,   200,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
       0,     0,    14,     0,    15,    16,    17,    18,     0,     0,
      19,    20,     0,     0,    21,    22,     0,     0,     0,     0,
       0,     0,     0,     0,    23,     0,     0,     0,    24,    25,
      26,    27,    28,    29,     0,    30,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,     0,     0,    14,
       0,    15,    16,    17,    18,     0,     0,    19,    20,     0,
       0,    21,    22,     0,     0,     0,     0,     0,     0,     0,
       0,    23,     0,     0,     0,    24,    25,    26,    27,    28,
      29,   146,    30,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,     0,     0,    14,     0,    15,    16,
      17,    18,     0,     0,    19,    20,     0,     0,    21,    22,
       0,     0,     0,     0,     0,     0,     0,     0,    23,     0,
       0,     0,    24,    25,    26,    27,    28,    29,     0,    30,
      74,    75,     0,     0,    76,    77,    78,    79,    80,    81,
      82,    83,     0,     0,    85,    86,    87,    88,    89,    90,
       0,     0,     0,     0,     0,     0,     0,    74,    75,     0,
     195,    76,    77,    78,    79,    80,    81,    82,    83,     0,
       0,    85,    86,    87,    88,    89,    90,     0,     0,     0,
       0,     0,     0,    74,    75,   131,   132,    76,    77,    78,
      79,    80,    81,    82,    83,     0,     0,    85,    86,    87,
      88,    89,    90,     0,     0,     0,     0,     0,     0,    74,
      75,     0,   144,    76,    77,    78,    79,    80,    81,    82,
      83,     0,     0,    85,    86,    87,    88,    89,    90,     0,
       0,     0,     0,     0,    74,    75,     0,   107,    76,    77,
      78,    79,    80,    81,    82,    83,     0,     0,    85,    86,
      87,    88,    89,    90,     0,     0,     0,     0,     0,    74,
      75,     0,   181,    76,    77,    78,    79,    80,    81,    82,
      83,     0,     0,    85,    86,    87,    88,    89,    90,     0,
       0,    18,     0,     0,    19,    20,     0,   188,    21,    22,
       0,     0,     0,     0,     0,     0,     0,     0,    23,     0,
       0,     0,    51,    52,    26,    27,    28,    74,    75,    30,
       0,    76,    77,    78,    79,    80,    81,    82,    83,     0,
       0,    85,    86,    87,    88,    89,    90,     0,     0,    74,
      75,     0,    29,    76,    77,    78,    79,    80,    81,    82,
      83,     0,    84,    85,    86,    87,    88,    89,    90,    74,
      75,     0,     0,    76,    77,    78,    79,    80,    81,    82,
      83,     0,   171,    85,    86,    87,    88,    89,    90,    74,
      75,     0,     0,    76,    77,    78,    79,    80,    81,    82,
      83,     0,   172,    85,    86,    87,    88,    89,    90,    74,
      75,     0,     0,    76,    77,    78,    79,    80,    81,    82,
      83,     0,   189,    85,    86,    87,    88,    89,    90,    74,
      75,     0,     0,    76,    77,    78,    79,    80,    81,    82,
      83,     0,     0,    85,    86,    87,    88,    89,    90,    76,
      77,    78,    79,    80,    81,    82,    83,     0,     0,    85,
      86,    87,    88,    89,    90
};

static const yytype_int16 yycheck[] =
{
      17,    94,    10,   109,    58,    43,    14,    49,    16,    34,
      43,    19,    20,    21,    22,    23,   109,     3,     4,     5,
      43,     7,    30,    48,     3,     4,     5,    49,     7,    42,
      43,    21,    34,    35,    24,    25,    34,    47,    28,    29,
      57,    49,    59,    97,    34,    43,    34,    35,    38,    14,
      15,    49,    42,    43,    44,    45,    46,   163,    35,    49,
      35,    69,    34,    47,    50,    35,    74,    75,    76,    77,
     163,    50,    80,    81,    82,    83,    49,    85,    86,    87,
      88,    89,    90,    49,    52,   139,    28,    29,    30,    31,
      32,    33,   100,   101,    36,    37,    38,    39,    40,    41,
      19,    30,    31,    32,    33,    49,    43,   115,    47,   117,
      39,    40,    41,     3,     4,     5,   133,     7,    17,    49,
      43,   138,    50,    48,   132,    35,    43,    21,    50,    35,
      24,    25,   140,   150,    28,    29,   144,    51,    50,   147,
      34,    45,    51,    35,    38,   162,    48,    52,    42,    43,
      44,    45,    46,    50,    43,    49,   164,    48,    35,    35,
     177,    30,    31,    32,    33,    51,    48,    34,   185,    43,
     187,   200,    70,   179,   110,   199,     0,   144,   195,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    -1,    16,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    -1,    -1,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    42,    43,
      44,    45,    46,    47,    -1,    49,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    -1,    16,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    -1,
      -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    42,    43,    44,    45,    46,
      47,    48,    49,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    -1,    16,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    47,    -1,    49,
      22,    23,    -1,    -1,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    -1,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      52,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
      -1,    36,    37,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    50,    51,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    -1,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    -1,    51,    26,    27,    28,    29,    30,    31,    32,
      33,    -1,    -1,    36,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,    50,    26,    27,
      28,    29,    30,    31,    32,    33,    -1,    -1,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    22,
      23,    -1,    50,    26,    27,    28,    29,    30,    31,    32,
      33,    -1,    -1,    36,    37,    38,    39,    40,    41,    -1,
      -1,    21,    -1,    -1,    24,    25,    -1,    50,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    22,    23,    49,
      -1,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
      -1,    36,    37,    38,    39,    40,    41,    -1,    -1,    22,
      23,    -1,    47,    26,    27,    28,    29,    30,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,    22,
      23,    -1,    -1,    26,    27,    28,    29,    30,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,    22,
      23,    -1,    -1,    26,    27,    28,    29,    30,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,    22,
      23,    -1,    -1,    26,    27,    28,    29,    30,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,    22,
      23,    -1,    -1,    26,    27,    28,    29,    30,    31,    32,
      33,    -1,    -1,    36,    37,    38,    39,    40,    41,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    -1,    36,
      37,    38,    39,    40,    41
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    54,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    16,    18,    19,    20,    21,    24,
      25,    28,    29,    38,    42,    43,    44,    45,    46,    47,
      49,    55,    57,    58,    59,    60,    61,    65,    66,    69,
      72,    78,    79,    80,    81,    82,    83,    86,    43,    49,
      43,    42,    43,    60,    43,    35,    35,    60,    49,    60,
      55,    60,    60,    60,    60,    60,    34,    34,    43,    49,
      56,    60,    42,    43,    22,    23,    26,    27,    28,    29,
      30,    31,    32,    33,    35,    36,    37,    38,    39,    40,
      41,    35,    47,    60,    49,    52,    55,    57,    55,    19,
      85,    84,    34,    35,    60,    87,    54,    50,    63,    49,
      62,    60,    60,    60,    60,    34,    60,    34,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    43,    73,    74,
      76,    50,    51,    50,    59,    70,    71,    47,    17,    57,
      49,    60,    60,    43,    51,    50,    48,    34,    35,    64,
      50,    70,    64,    60,    60,    34,    75,    48,    35,    60,
      55,    43,    50,    51,    14,    15,    67,    68,    55,    57,
      60,    35,    35,    35,    87,    60,    55,    50,    45,    51,
      35,    50,    55,    70,    60,    52,    48,    50,    50,    35,
      55,    77,    43,    74,    35,    52,    55,    55,    35,    51,
      55,    43,    76,    68
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    53,    54,    54,    56,    55,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    58,    58,    59,    59,    59,    59,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    62,
      61,    63,    61,    64,    64,    65,    65,    66,    67,    68,
      68,    68,    69,    69,    69,    69,    70,    70,    71,    72,
      73,    73,    75,    74,    74,    77,    76,    76,    78,    78,
      79,    79,    80,    81,    82,    84,    83,    85,    83,    86,
      87,    87
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     0,     4,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       1,     1,     5,     7,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     2,     2,     3,     3,
       3,     4,     3,     4,     2,     2,     2,     2,     3,     3,
       2,     3,     3,     3,     3,     3,     3,     1,     3,     0,
       4,     0,     4,     3,     1,     1,     2,     6,     3,     5,
       1,     0,     6,     6,     5,     5,     3,     1,     2,     6,
       1,     1,     0,     4,     1,     0,     6,     3,     5,     3,
       3,     5,     3,     7,     7,     0,     5,     0,     5,     4,
       3,     1
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
#line 67 "./parser.y"
                                   {printf("Parsed Line %d Succesfully\n\n", number_of_line);}
#line 1388 "parser.tab.c"
    break;

  case 4: /* $@1: %empty  */
#line 72 "./parser.y"
                    {scope_start();}
#line 1394 "parser.tab.c"
    break;

  case 5: /* BLOCK: '{' $@1 PROGRAM '}'  */
#line 72 "./parser.y"
                                                 {scope_end(head, number_of_line);}
#line 1400 "parser.tab.c"
    break;

  case 6: /* STATEMENT: PRINT_STATEMENT  */
#line 77 "./parser.y"
                                              {printf("Parsed print statement\n");}
#line 1406 "parser.tab.c"
    break;

  case 8: /* STATEMENT: ASSIGNMENT_STATEMENT  */
#line 79 "./parser.y"
                                               {printf("Parsed Assignment statement\n");}
#line 1412 "parser.tab.c"
    break;

  case 10: /* STATEMENT: ENUM_DECLARATION_STATEMENT  */
#line 82 "./parser.y"
                                               {printf("Parsed Enum Declaration\n");}
#line 1418 "parser.tab.c"
    break;

  case 11: /* STATEMENT: ENUM_CALL_STATEMENT  */
#line 83 "./parser.y"
                                               {printf("Parsed Enum Call\n");}
#line 1424 "parser.tab.c"
    break;

  case 12: /* STATEMENT: IF_STATEMENT  */
#line 85 "./parser.y"
                                               {printf("Parsed if statement\n");}
#line 1430 "parser.tab.c"
    break;

  case 13: /* STATEMENT: WHILE_STATEMENT  */
#line 86 "./parser.y"
                                               {printf("Parsed While LOOP\n");}
#line 1436 "parser.tab.c"
    break;

  case 14: /* STATEMENT: FOR_STATEMENT  */
#line 87 "./parser.y"
                                               {printf("Parsed For LOOP\n");}
#line 1442 "parser.tab.c"
    break;

  case 15: /* STATEMENT: DO_WHILE_STATEMENT  */
#line 88 "./parser.y"
                                               {printf("Parsed Do While LOOP\n");}
#line 1448 "parser.tab.c"
    break;

  case 16: /* STATEMENT: SWITCH_STATEMENT  */
#line 89 "./parser.y"
                                               {printf("Parsed Switch Statement\n");}
#line 1454 "parser.tab.c"
    break;

  case 20: /* STATEMENT: BLOCK  */
#line 94 "./parser.y"
                                               {printf("Parsed Block\n");}
#line 1460 "parser.tab.c"
    break;

  case 21: /* STATEMENT: FUNC_DECLARATION_STATEMENT  */
#line 95 "./parser.y"
                                               {printf("Parsed Function Declaration\n");}
#line 1466 "parser.tab.c"
    break;

  case 24: /* TYPE: INT  */
#line 106 "./parser.y"
                            { (yyval.str) = "int";   }
#line 1472 "parser.tab.c"
    break;

  case 25: /* TYPE: FLOAT  */
#line 107 "./parser.y"
                            { (yyval.str) = "float"; }
#line 1478 "parser.tab.c"
    break;

  case 26: /* TYPE: BOOL  */
#line 108 "./parser.y"
                            { (yyval.str) = "bool";  }
#line 1484 "parser.tab.c"
    break;

  case 27: /* TYPE: STRING  */
#line 109 "./parser.y"
                            { (yyval.str) = "string";}
#line 1490 "parser.tab.c"
    break;

  case 28: /* EXPRESSION: IDENTIFIER  */
#line 114 "./parser.y"
                                {int i = lookup(head, (yyvsp[0].str), 0, number_of_line);}
#line 1496 "parser.tab.c"
    break;

  case 29: /* EXPRESSION: CONSTANT  */
#line 115 "./parser.y"
                                {int i = lookup(head, (yyvsp[0].str), 0, number_of_line);}
#line 1502 "parser.tab.c"
    break;

  case 30: /* EXPRESSION: DIGIT  */
#line 116 "./parser.y"
                                {assign_int(head, (yyvsp[0].num), IdentifierHolder, number_of_line);}
#line 1508 "parser.tab.c"
    break;

  case 31: /* EXPRESSION: FLOAT_DIGIT  */
#line 117 "./parser.y"
                                {assign_float(head, (yyvsp[0].float_val), IdentifierHolder, number_of_line);}
#line 1514 "parser.tab.c"
    break;

  case 32: /* EXPRESSION: BOOL_LITERAL  */
#line 118 "./parser.y"
                                {assign_bool(head, (yyvsp[0].bool_val), IdentifierHolder, number_of_line);}
#line 1520 "parser.tab.c"
    break;

  case 33: /* EXPRESSION: STRING_LITERAL  */
#line 119 "./parser.y"
                                {assign_string(head, (yyvsp[0].str), IdentifierHolder, number_of_line);}
#line 1526 "parser.tab.c"
    break;

  case 59: /* $@2: %empty  */
#line 158 "./parser.y"
                                {insertResult = insert(&head, (yyvsp[-1].str), (yyvsp[0].str), "var", number_of_line, false);strcpy(IdentifierHolder, (yyvsp[0].str));}
#line 1532 "parser.tab.c"
    break;

  case 60: /* DECLARATION_STATEMENT: TYPE IDENTIFIER $@2 DECLARATION_TAIL  */
#line 158 "./parser.y"
                                                                                                                                                     { printf("Parsed Declaration\n");}
#line 1538 "parser.tab.c"
    break;

  case 61: /* $@3: %empty  */
#line 159 "./parser.y"
                                {insertResult = insert(&head, (yyvsp[-1].str), (yyvsp[0].str), "const", number_of_line, false);strcpy(IdentifierHolder, (yyvsp[0].str));}
#line 1544 "parser.tab.c"
    break;

  case 62: /* DECLARATION_STATEMENT: TYPE CONSTANT $@3 DECLARATION_TAIL  */
#line 159 "./parser.y"
                                                                                                                                                     { printf("Parsed Const Declaration\n"); }
#line 1550 "parser.tab.c"
    break;

  case 78: /* ARG_DECL: TYPE IDENTIFIER  */
#line 196 "./parser.y"
                                {insertResult = insert(&head, (yyvsp[-1].str), (yyvsp[0].str),"var", number_of_line, true);strcpy(IdentifierHolder, (yyvsp[0].str));}
#line 1556 "parser.tab.c"
    break;

  case 79: /* ENUM_DECLARATION_STATEMENT: ENUM IDENTIFIER '{' ENUM_HELPER '}' SEMICOLON  */
#line 201 "./parser.y"
                                                               {insertResult = insert(&head, "enum" , (yyvsp[-4].str), "var" , number_of_line, false);strcpy(IdentifierHolder, (yyvsp[-4].str));}
#line 1562 "parser.tab.c"
    break;

  case 82: /* $@4: %empty  */
#line 206 "./parser.y"
                           {insertResult = insert(&head, "int" , (yyvsp[0].str), "enum_arg" , number_of_line, false);strcpy(IdentifierHolder, (yyvsp[0].str));}
#line 1568 "parser.tab.c"
    break;

  case 84: /* ENUM_ARGS: IDENTIFIER  */
#line 207 "./parser.y"
                             {insertResult = insert(&head, "int" , (yyvsp[0].str), "enum_arg" , number_of_line, false);strcpy(IdentifierHolder, (yyvsp[0].str));}
#line 1574 "parser.tab.c"
    break;

  case 85: /* $@5: %empty  */
#line 213 "./parser.y"
                                    {insertResult = insert(&head, "int" , (yyvsp[-2].str), "enum_arg" , number_of_line, false);strcpy(IdentifierHolder, (yyvsp[-2].str));}
#line 1580 "parser.tab.c"
    break;

  case 87: /* ENUM_DEFINED_ARGS: IDENTIFIER EQ DIGIT  */
#line 214 "./parser.y"
                                      {insertResult = insert(&head, "int" , (yyvsp[-2].str), "enum_arg" , number_of_line, false);strcpy(IdentifierHolder, (yyvsp[-2].str));}
#line 1586 "parser.tab.c"
    break;

  case 88: /* ENUM_CALL_STATEMENT: IDENTIFIER IDENTIFIER EQ IDENTIFIER SEMICOLON  */
#line 218 "./parser.y"
                                                               {insertResult = insert(&head, (yyvsp[-4].str) , (yyvsp[-3].str), "var_enum" , number_of_line, false);strcpy(IdentifierHolder, (yyvsp[-3].str));}
#line 1592 "parser.tab.c"
    break;

  case 89: /* ENUM_CALL_STATEMENT: IDENTIFIER IDENTIFIER SEMICOLON  */
#line 219 "./parser.y"
                                                  {insertResult = insert(&head, (yyvsp[-2].str) , (yyvsp[-1].str), "var_enum" , number_of_line, false);strcpy(IdentifierHolder, (yyvsp[-1].str));}
#line 1598 "parser.tab.c"
    break;

  case 95: /* $@6: %empty  */
#line 243 "./parser.y"
                              {int i = lookup(head, (yyvsp[-1].str), 1, number_of_line);}
#line 1604 "parser.tab.c"
    break;

  case 97: /* $@7: %empty  */
#line 244 "./parser.y"
                              {printf("Error at line: %d CONSTANTS must not be reassigned\n", number_of_line);}
#line 1610 "parser.tab.c"
    break;

  case 99: /* FUNC_CALL: IDENTIFIER '(' ARGUMENTS ')'  */
#line 249 "./parser.y"
                                              { printf("Parsed Function Call\n");}
#line 1616 "parser.tab.c"
    break;


#line 1620 "parser.tab.c"

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

#line 255 "./parser.y"


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
    display(head);
    display_to_file(head, "symbol_table.txt");
    display_unused_variables(head);

    return 0;
}
