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
    
    void yyerror(char* );
    int yylex();
    extern FILE *yyin;
    extern int number_of_line;

#line 86 "parser.tab.c"

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
  YYSYMBOL_CONSTANT = 39,                  /* CONSTANT  */
  YYSYMBOL_IDENTIFIER = 40,                /* IDENTIFIER  */
  YYSYMBOL_STRING_LITERAL = 41,            /* STRING_LITERAL  */
  YYSYMBOL_CHAR_LITERAL = 42,              /* CHAR_LITERAL  */
  YYSYMBOL_DIGIT = 43,                     /* DIGIT  */
  YYSYMBOL_FLOAT_DIGIT = 44,               /* FLOAT_DIGIT  */
  YYSYMBOL_45_ = 45,                       /* '('  */
  YYSYMBOL_46_ = 46,                       /* ')'  */
  YYSYMBOL_47_ = 47,                       /* '{'  */
  YYSYMBOL_48_ = 48,                       /* '}'  */
  YYSYMBOL_49_ = 49,                       /* ','  */
  YYSYMBOL_50_ = 50,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 51,                  /* $accept  */
  YYSYMBOL_PROGRAM = 52,                   /* PROGRAM  */
  YYSYMBOL_BLOCK = 53,                     /* BLOCK  */
  YYSYMBOL_54_1 = 54,                      /* $@1  */
  YYSYMBOL_STATEMENT = 55,                 /* STATEMENT  */
  YYSYMBOL_PRINT_STATEMENT = 56,           /* PRINT_STATEMENT  */
  YYSYMBOL_TYPE = 57,                      /* TYPE  */
  YYSYMBOL_EXPRESSION = 58,                /* EXPRESSION  */
  YYSYMBOL_DECLARATION_STATEMENT = 59,     /* DECLARATION_STATEMENT  */
  YYSYMBOL_60_2 = 60,                      /* $@2  */
  YYSYMBOL_61_3 = 61,                      /* $@3  */
  YYSYMBOL_DECLARATION_TAIL = 62,          /* DECLARATION_TAIL  */
  YYSYMBOL_RETURN_STATEMENT = 63,          /* RETURN_STATEMENT  */
  YYSYMBOL_64_4 = 64,                      /* $@4  */
  YYSYMBOL_SWITCH_STATEMENT = 65,          /* SWITCH_STATEMENT  */
  YYSYMBOL_66_5 = 66,                      /* $@5  */
  YYSYMBOL_DEFAULTCASE = 67,               /* DEFAULTCASE  */
  YYSYMBOL_CASES = 68,                     /* CASES  */
  YYSYMBOL_FUNC_DECLARATION_STATEMENT = 69, /* FUNC_DECLARATION_STATEMENT  */
  YYSYMBOL_70_6 = 70,                      /* $@6  */
  YYSYMBOL_71_7 = 71,                      /* $@7  */
  YYSYMBOL_72_8 = 72,                      /* $@8  */
  YYSYMBOL_73_9 = 73,                      /* $@9  */
  YYSYMBOL_ARGS = 74,                      /* ARGS  */
  YYSYMBOL_ARG_DECL = 75,                  /* ARG_DECL  */
  YYSYMBOL_IF_STATEMENT = 76,              /* IF_STATEMENT  */
  YYSYMBOL_WHILE_STATEMENT = 77,           /* WHILE_STATEMENT  */
  YYSYMBOL_DO_WHILE_STATEMENT = 78,        /* DO_WHILE_STATEMENT  */
  YYSYMBOL_FOR_STATEMENT = 79,             /* FOR_STATEMENT  */
  YYSYMBOL_80_10 = 80,                     /* $@10  */
  YYSYMBOL_81_11 = 81,                     /* $@11  */
  YYSYMBOL_ASSIGNMENT_STATEMENT = 82,      /* ASSIGNMENT_STATEMENT  */
  YYSYMBOL_83_12 = 83,                     /* $@12  */
  YYSYMBOL_84_13 = 84,                     /* $@13  */
  YYSYMBOL_FUNC_CALL = 85,                 /* FUNC_CALL  */
  YYSYMBOL_86_14 = 86,                     /* $@14  */
  YYSYMBOL_87_15 = 87,                     /* $@15  */
  YYSYMBOL_88_16 = 88,                     /* $@16  */
  YYSYMBOL_ARGUMENTS = 89,                 /* ARGUMENTS  */
  YYSYMBOL_90_17 = 90                      /* $@17  */
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
#define YYLAST   584

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  187

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   299


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
      45,    46,     2,     2,    49,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    50,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    67,    67,    68,    72,    72,    77,    78,    79,    80,
      82,    83,    84,    85,    86,    87,    88,    90,    91,    92,
      98,    99,   103,   104,   105,   106,   107,   112,   113,   114,
     115,   116,   117,   118,   120,   121,   123,   125,   126,   128,
     129,   130,   131,   133,   134,   135,   136,   137,   139,   140,
     141,   142,   143,   144,   146,   147,   152,   152,   153,   153,
     156,   157,   161,   162,   162,   167,   167,   170,   173,   174,
     175,   180,   180,   181,   181,   182,   182,   183,   183,   186,
     187,   190,   195,   196,   201,   205,   209,   209,   209,   214,
     214,   215,   215,   220,   220,   220,   220,   223,   223,   224,
     225
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
  "PLUS", "SUB", "MUL", "DIV", "POW", "CONSTANT", "IDENTIFIER",
  "STRING_LITERAL", "CHAR_LITERAL", "DIGIT", "FLOAT_DIGIT", "'('", "')'",
  "'{'", "'}'", "','", "':'", "$accept", "PROGRAM", "BLOCK", "$@1",
  "STATEMENT", "PRINT_STATEMENT", "TYPE", "EXPRESSION",
  "DECLARATION_STATEMENT", "$@2", "$@3", "DECLARATION_TAIL",
  "RETURN_STATEMENT", "$@4", "SWITCH_STATEMENT", "$@5", "DEFAULTCASE",
  "CASES", "FUNC_DECLARATION_STATEMENT", "$@6", "$@7", "$@8", "$@9",
  "ARGS", "ARG_DECL", "IF_STATEMENT", "WHILE_STATEMENT",
  "DO_WHILE_STATEMENT", "FOR_STATEMENT", "$@10", "$@11",
  "ASSIGNMENT_STATEMENT", "$@12", "$@13", "FUNC_CALL", "$@14", "$@15",
  "$@16", "ARGUMENTS", "$@17", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-99)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-100)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -99,   164,   -99,   -99,   -99,   -99,   -99,   -99,   -42,   -24,
     -11,   -10,     6,    21,   440,     0,   440,    15,   -99,   440,
     440,   440,   440,    63,   -25,   -99,   -99,   -99,   -99,   440,
     -99,   -99,   -99,   -99,    -7,   464,   -99,    67,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   440,    58,   440,    66,
     -99,   -99,   -99,    62,   306,   -99,   306,    89,   546,    60,
      60,    60,   -99,   -99,    64,   329,   -99,   -99,    65,   440,
     440,   440,   440,   -99,   -99,   102,   415,   -99,   440,   440,
     440,   440,   440,   440,   -99,   281,     8,   532,   -99,    94,
     255,   -99,    68,   440,   440,   -99,   -99,   209,    70,    19,
      70,   546,   546,    13,    13,   440,    26,   440,    26,    60,
      60,    60,    26,    26,    60,    82,   440,   -99,    76,    72,
      71,    73,    15,   255,   440,   481,   498,   440,   -99,   440,
     -99,   -99,   -99,    75,   -99,    26,    26,   -99,   351,    15,
     -99,   -99,    24,    78,   -99,   255,   373,   -99,   -99,   395,
     -99,   515,    15,   -99,    92,   -99,    15,   -99,    77,    81,
      96,    83,    85,   -99,   -99,    15,   -99,   -99,   440,    84,
     -99,    88,   -99,   -99,   440,   -99,   -99,    50,    15,   -99,
      15,   -99,    15,   -99,   -99,    77,   -99
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     1,    22,    23,    25,    24,    26,     0,     0,
      63,     0,     0,     0,     0,     0,     0,     0,    31,     0,
       0,     0,     0,    28,    27,    32,    33,    29,    30,     0,
       4,    18,     2,     6,     0,     0,     7,     0,    14,    19,
      10,    11,    13,    12,     8,    54,     0,     0,     0,     0,
      15,    16,    28,    27,     0,    86,     0,     0,    36,    44,
      43,    47,    91,    89,     0,     0,     3,    58,    56,     0,
       0,     0,     0,    46,    45,     0,     0,     9,     0,     0,
       0,     0,     0,     0,    17,     0,     0,    64,    65,    82,
       0,    84,     0,     0,     0,    94,    55,     0,     0,     0,
       0,    34,    35,    37,    38,     0,    41,     0,    39,    48,
      49,    50,    51,    52,    53,     0,     0,    77,     0,     0,
      80,     0,     0,     0,     0,     0,     0,   100,     5,     0,
      61,    59,    75,     0,    57,    42,    40,    20,     0,     0,
      81,    73,     0,     0,    83,     0,     0,    92,    90,    97,
      95,     0,     0,    71,     0,    78,     0,    79,    70,     0,
       0,     0,     0,    60,    76,     0,    21,    74,     0,     0,
      69,     0,    87,    85,   100,    96,    72,     0,     0,    66,
       0,    98,     0,    67,    88,    70,    68
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -99,    74,   -17,   -99,   -71,   -99,   -81,   -12,   -99,   -99,
     -99,    38,   -99,   -99,   -99,   -99,   -99,   -36,   -99,   -99,
     -99,   -99,   -99,   -98,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -23,   -99
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,    31,    66,    32,    33,    34,    35,    36,   100,
      98,   131,    37,    48,    38,   121,   170,   171,    39,   165,
     156,   152,   139,   119,   120,    40,    41,    42,    43,    90,
     180,    44,    94,    93,    45,    64,   127,   162,   150,   161
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      57,   133,    54,    46,    56,   118,    63,    58,    59,    60,
      61,     3,     4,     5,     6,     7,    47,    65,   118,   123,
     -93,   -62,     3,     4,     5,     6,     7,     3,     4,     5,
       6,     7,    67,    68,    85,    49,    87,    89,    50,    91,
      73,    74,    75,    76,   157,    55,    78,    79,    80,    81,
      82,    83,   145,    51,   117,    75,    76,   101,   102,   103,
     104,   118,    30,   106,   108,   132,   109,   110,   111,   112,
     113,   114,    69,    70,   159,    71,    72,    73,    74,    75,
      76,   125,   126,    78,    79,    80,    81,    82,    83,    75,
      76,   168,   169,   135,    62,   136,    81,    82,    83,    84,
     182,   129,   130,    86,   138,   144,    88,   -93,    92,    95,
      99,   122,   146,   124,   137,   149,   140,   151,   141,   143,
     142,   153,   155,    18,   166,   158,    19,   172,   173,    20,
      21,   175,   174,   105,   178,   164,   179,    22,   134,   167,
      97,    52,    53,    25,    26,    27,    28,    29,   176,   186,
       0,   181,     0,     0,     0,     0,   177,     0,     0,     0,
       0,   183,   149,   184,     2,   185,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,     0,     0,
      14,     0,    15,    16,    17,    18,     0,     0,    19,     0,
       0,    20,    21,     0,     0,     0,     0,     0,     0,    22,
       0,     0,     0,    23,    24,    25,    26,    27,    28,    29,
       0,    30,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,     0,     0,    14,     0,    15,    16,    17,
      18,     0,     0,    19,     0,     0,    20,    21,     0,     0,
       0,     0,     0,     0,    22,     0,     0,     0,    23,    24,
      25,    26,    27,    28,    29,     0,    30,   128,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,     0,
       0,    14,     0,    15,    16,    17,    18,     0,     0,    19,
       0,     0,    20,    21,     0,     0,     0,     0,     0,     0,
      22,     0,     0,     0,    23,    24,    25,    26,    27,    28,
      29,     0,    30,    69,    70,     0,    71,    72,    73,    74,
      75,    76,     0,     0,    78,    79,    80,    81,    82,    83,
       0,     0,     0,     0,     0,     0,     0,   115,    69,    70,
     116,    71,    72,    73,    74,    75,    76,     0,     0,    78,
      79,    80,    81,    82,    83,     0,     0,     0,     0,     0,
       0,    69,    70,    30,    71,    72,    73,    74,    75,    76,
       0,     0,    78,    79,    80,    81,    82,    83,     0,     0,
       0,     0,     0,    69,    70,    96,    71,    72,    73,    74,
      75,    76,     0,     0,    78,    79,    80,    81,    82,    83,
       0,     0,     0,     0,     0,    69,    70,   154,    71,    72,
      73,    74,    75,    76,     0,     0,    78,    79,    80,    81,
      82,    83,     0,     0,     0,     0,     0,    69,    70,   160,
      71,    72,    73,    74,    75,    76,     0,     0,    78,    79,
      80,    81,    82,    83,     0,     0,    18,     0,     0,    19,
       0,   -99,    20,    21,     0,     0,   107,     0,     0,     0,
      22,     0,     0,     0,    52,    53,    25,    26,    27,    28,
      29,    18,     0,     0,    19,     0,     0,    20,    21,     0,
       0,     0,     0,     0,     0,    22,     0,     0,     0,    52,
      53,    25,    26,    27,    28,    29,    69,    70,     0,    71,
      72,    73,    74,    75,    76,     0,    77,    78,    79,    80,
      81,    82,    83,    69,    70,     0,    71,    72,    73,    74,
      75,    76,     0,   147,    78,    79,    80,    81,    82,    83,
      69,    70,     0,    71,    72,    73,    74,    75,    76,     0,
     148,    78,    79,    80,    81,    82,    83,    69,    70,     0,
      71,    72,    73,    74,    75,    76,     0,   163,    78,    79,
      80,    81,    82,    83,    69,    70,     0,    71,    72,    73,
      74,    75,    76,     0,     0,    78,    79,    80,    81,    82,
      83,    71,    72,    73,    74,    75,    76,     0,     0,    78,
      79,    80,    81,    82,    83
};

static const yytype_int16 yycheck[] =
{
      17,    99,    14,    45,    16,    86,    31,    19,    20,    21,
      22,     3,     4,     5,     6,     7,    40,    29,    99,    90,
      45,    32,     3,     4,     5,     6,     7,     3,     4,     5,
       6,     7,    39,    40,    46,    45,    48,    54,    32,    56,
      27,    28,    29,    30,   142,    45,    33,    34,    35,    36,
      37,    38,   123,    32,    46,    29,    30,    69,    70,    71,
      72,   142,    47,    75,    76,    46,    78,    79,    80,    81,
      82,    83,    22,    23,   145,    25,    26,    27,    28,    29,
      30,    93,    94,    33,    34,    35,    36,    37,    38,    29,
      30,    14,    15,   105,    31,   107,    36,    37,    38,    32,
      50,    31,    32,    45,   116,   122,    40,    45,    19,    45,
      45,    17,   124,    45,    32,   127,    40,   129,    46,    46,
      49,    46,   139,    21,    32,    47,    24,    46,    32,    27,
      28,    46,    49,    31,    50,   152,    48,    35,   100,   156,
      66,    39,    40,    41,    42,    43,    44,    45,   165,   185,
      -1,   174,    -1,    -1,    -1,    -1,   168,    -1,    -1,    -1,
      -1,   178,   174,   180,     0,   182,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    -1,
      16,    -1,    18,    19,    20,    21,    -1,    -1,    24,    -1,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    42,    43,    44,    45,
      -1,    47,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    -1,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    42,    43,    44,    45,    -1,    47,    48,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      -1,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    42,    43,    44,
      45,    -1,    47,    22,    23,    -1,    25,    26,    27,    28,
      29,    30,    -1,    -1,    33,    34,    35,    36,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    22,    23,
      49,    25,    26,    27,    28,    29,    30,    -1,    -1,    33,
      34,    35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    47,    25,    26,    27,    28,    29,    30,
      -1,    -1,    33,    34,    35,    36,    37,    38,    -1,    -1,
      -1,    -1,    -1,    22,    23,    46,    25,    26,    27,    28,
      29,    30,    -1,    -1,    33,    34,    35,    36,    37,    38,
      -1,    -1,    -1,    -1,    -1,    22,    23,    46,    25,    26,
      27,    28,    29,    30,    -1,    -1,    33,    34,    35,    36,
      37,    38,    -1,    -1,    -1,    -1,    -1,    22,    23,    46,
      25,    26,    27,    28,    29,    30,    -1,    -1,    33,    34,
      35,    36,    37,    38,    -1,    -1,    21,    -1,    -1,    24,
      -1,    46,    27,    28,    -1,    -1,    31,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    42,    43,    44,
      45,    21,    -1,    -1,    24,    -1,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    42,    43,    44,    45,    22,    23,    -1,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    22,    23,    -1,    25,    26,    27,    28,
      29,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      22,    23,    -1,    25,    26,    27,    28,    29,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    22,    23,    -1,
      25,    26,    27,    28,    29,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    22,    23,    -1,    25,    26,    27,
      28,    29,    30,    -1,    -1,    33,    34,    35,    36,    37,
      38,    25,    26,    27,    28,    29,    30,    -1,    -1,    33,
      34,    35,    36,    37,    38
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    52,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    16,    18,    19,    20,    21,    24,
      27,    28,    35,    39,    40,    41,    42,    43,    44,    45,
      47,    53,    55,    56,    57,    58,    59,    63,    65,    69,
      76,    77,    78,    79,    82,    85,    45,    40,    64,    45,
      32,    32,    39,    40,    58,    45,    58,    53,    58,    58,
      58,    58,    31,    31,    86,    58,    54,    39,    40,    22,
      23,    25,    26,    27,    28,    29,    30,    32,    33,    34,
      35,    36,    37,    38,    32,    58,    45,    58,    40,    53,
      80,    53,    19,    84,    83,    45,    46,    52,    61,    45,
      60,    58,    58,    58,    58,    31,    58,    31,    58,    58,
      58,    58,    58,    58,    58,    46,    49,    46,    57,    74,
      75,    66,    17,    55,    45,    58,    58,    87,    48,    31,
      32,    62,    46,    74,    62,    58,    58,    32,    58,    73,
      40,    46,    49,    46,    53,    55,    58,    32,    32,    58,
      89,    58,    72,    46,    46,    53,    71,    74,    47,    55,
      46,    90,    88,    32,    53,    70,    32,    53,    14,    15,
      67,    68,    46,    32,    49,    46,    53,    58,    50,    48,
      81,    89,    50,    53,    53,    53,    68
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    51,    52,    52,    54,    53,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      56,    56,    57,    57,    57,    57,    57,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    60,    59,    61,    59,
      62,    62,    63,    64,    63,    66,    65,    67,    68,    68,
      68,    70,    69,    71,    69,    72,    69,    73,    69,    74,
      74,    75,    76,    76,    77,    78,    80,    81,    79,    83,
      82,    84,    82,    86,    87,    88,    85,    90,    89,    89,
      89
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     0,     4,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     2,     2,     2,     1,     1,
       5,     7,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     2,     3,     3,     3,
       4,     3,     4,     2,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     1,     3,     0,     4,     0,     4,
       3,     1,     1,     0,     3,     0,     8,     3,     5,     1,
       0,     0,     7,     0,     7,     0,     6,     0,     6,     3,
       1,     2,     3,     5,     3,     7,     0,     0,     9,     0,
       5,     0,     5,     0,     0,     0,     7,     0,     4,     1,
       0
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
#line 1373 "parser.tab.c"
    break;

  case 4: /* $@1: %empty  */
#line 72 "./parser.y"
                    {scope_start();}
#line 1379 "parser.tab.c"
    break;

  case 5: /* BLOCK: '{' $@1 PROGRAM '}'  */
#line 72 "./parser.y"
                                                 {scope_end(number_of_line);}
#line 1385 "parser.tab.c"
    break;

  case 6: /* STATEMENT: PRINT_STATEMENT  */
#line 77 "./parser.y"
                                              {printf("Parsed print statement\n");}
#line 1391 "parser.tab.c"
    break;

  case 8: /* STATEMENT: ASSIGNMENT_STATEMENT  */
#line 79 "./parser.y"
                                               {printf("Parsed Assignment statement\n");}
#line 1397 "parser.tab.c"
    break;

  case 10: /* STATEMENT: IF_STATEMENT  */
#line 82 "./parser.y"
                                               {printf("Parsed if statement\n");}
#line 1403 "parser.tab.c"
    break;

  case 11: /* STATEMENT: WHILE_STATEMENT  */
#line 83 "./parser.y"
                                               {printf("Parsed While LOOP\n");}
#line 1409 "parser.tab.c"
    break;

  case 12: /* STATEMENT: FOR_STATEMENT  */
#line 84 "./parser.y"
                                               {printf("Parsed For LOOP\n");}
#line 1415 "parser.tab.c"
    break;

  case 13: /* STATEMENT: DO_WHILE_STATEMENT  */
#line 85 "./parser.y"
                                               {printf("Parsed Do While LOOP\n");}
#line 1421 "parser.tab.c"
    break;

  case 14: /* STATEMENT: SWITCH_STATEMENT  */
#line 86 "./parser.y"
                                               {printf("Parsed Switch Statement\n");}
#line 1427 "parser.tab.c"
    break;

  case 18: /* STATEMENT: BLOCK  */
#line 91 "./parser.y"
                                               {printf("Parsed Block\n");}
#line 1433 "parser.tab.c"
    break;

  case 19: /* STATEMENT: FUNC_DECLARATION_STATEMENT  */
#line 92 "./parser.y"
                                               {printf("Parsed Function Declaration\n");}
#line 1439 "parser.tab.c"
    break;

  case 22: /* TYPE: INT  */
#line 103 "./parser.y"
                            { (yyval.str) = "int";   }
#line 1445 "parser.tab.c"
    break;

  case 23: /* TYPE: FLOAT  */
#line 104 "./parser.y"
                            { (yyval.str) = "float"; }
#line 1451 "parser.tab.c"
    break;

  case 24: /* TYPE: BOOL  */
#line 105 "./parser.y"
                            { (yyval.str) = "bool";  }
#line 1457 "parser.tab.c"
    break;

  case 25: /* TYPE: STRING  */
#line 106 "./parser.y"
                            { (yyval.str) = "string";}
#line 1463 "parser.tab.c"
    break;

  case 26: /* TYPE: CHAR  */
#line 107 "./parser.y"
                            { (yyval.str) = "char";}
#line 1469 "parser.tab.c"
    break;

  case 27: /* EXPRESSION: IDENTIFIER  */
#line 112 "./parser.y"
                                {int i = lookup((yyvsp[0].str), 0, number_of_line);char *type = symbolTable[i].datatype;(yyval.nPtr) = getType(type);check_type(i, number_of_line);}
#line 1475 "parser.tab.c"
    break;

  case 28: /* EXPRESSION: CONSTANT  */
#line 113 "./parser.y"
                                {int i = lookup((yyvsp[0].str), 0, number_of_line);char *type = symbolTable[i].datatype;(yyval.nPtr) = getType(type);check_type(i, number_of_line);}
#line 1481 "parser.tab.c"
    break;

  case 29: /* EXPRESSION: DIGIT  */
#line 114 "./parser.y"
                                {(yyval.nPtr) = con("int");assign_int(insertResult, (yyvsp[0].num), number_of_line);}
#line 1487 "parser.tab.c"
    break;

  case 30: /* EXPRESSION: FLOAT_DIGIT  */
#line 115 "./parser.y"
                                {(yyval.nPtr) = con("float");assign_float(insertResult, (yyvsp[0].float_val), number_of_line);}
#line 1493 "parser.tab.c"
    break;

  case 31: /* EXPRESSION: BOOL_LITERAL  */
#line 116 "./parser.y"
                                {(yyval.nPtr) = con("bool");assign_bool(insertResult, (yyvsp[0].bool_val), number_of_line);}
#line 1499 "parser.tab.c"
    break;

  case 32: /* EXPRESSION: STRING_LITERAL  */
#line 117 "./parser.y"
                                {(yyval.nPtr) = con("string");assign_string(insertResult, (yyvsp[0].str), number_of_line);}
#line 1505 "parser.tab.c"
    break;

  case 33: /* EXPRESSION: CHAR_LITERAL  */
#line 118 "./parser.y"
                                {(yyval.nPtr) = con("char");assign_char(insertResult, (yyvsp[0].str), number_of_line);}
#line 1511 "parser.tab.c"
    break;

  case 34: /* EXPRESSION: EXPRESSION LOGIC_AND EXPRESSION  */
#line 120 "./parser.y"
                                                 {(yyval.nPtr) = logical((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '&', number_of_line);}
#line 1517 "parser.tab.c"
    break;

  case 35: /* EXPRESSION: EXPRESSION LOGIC_OR EXPRESSION  */
#line 121 "./parser.y"
                                                 {(yyval.nPtr) = logical((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '|', number_of_line);}
#line 1523 "parser.tab.c"
    break;

  case 36: /* EXPRESSION: LOGIC_NOT EXPRESSION  */
#line 123 "./parser.y"
                                                 {(yyval.nPtr) = not_operator((yyvsp[0].nPtr), number_of_line);}
#line 1529 "parser.tab.c"
    break;

  case 37: /* EXPRESSION: EXPRESSION EQUALITY EXPRESSION  */
#line 125 "./parser.y"
                                                    {comparison((yyvsp[-2].nPtr), (yyvsp[0].nPtr), "==", number_of_line);}
#line 1535 "parser.tab.c"
    break;

  case 38: /* EXPRESSION: EXPRESSION NEG_EQUALITY EXPRESSION  */
#line 126 "./parser.y"
                                                    {comparison((yyvsp[-2].nPtr), (yyvsp[0].nPtr), "!=", number_of_line);}
#line 1541 "parser.tab.c"
    break;

  case 39: /* EXPRESSION: EXPRESSION LT EXPRESSION  */
#line 128 "./parser.y"
                                              {(yyval.nPtr) = comparison((yyvsp[-2].nPtr), (yyvsp[0].nPtr), "<", number_of_line);}
#line 1547 "parser.tab.c"
    break;

  case 40: /* EXPRESSION: EXPRESSION LT EQ EXPRESSION  */
#line 129 "./parser.y"
                                              {(yyval.nPtr) = comparison((yyvsp[-3].nPtr), (yyvsp[0].nPtr), "<=", number_of_line);}
#line 1553 "parser.tab.c"
    break;

  case 41: /* EXPRESSION: EXPRESSION GT EXPRESSION  */
#line 130 "./parser.y"
                                              {(yyval.nPtr) = comparison((yyvsp[-2].nPtr), (yyvsp[0].nPtr), ">", number_of_line);}
#line 1559 "parser.tab.c"
    break;

  case 42: /* EXPRESSION: EXPRESSION GT EQ EXPRESSION  */
#line 131 "./parser.y"
                                              {(yyval.nPtr) = comparison((yyvsp[-3].nPtr), (yyvsp[0].nPtr), ">=", number_of_line);}
#line 1565 "parser.tab.c"
    break;

  case 43: /* EXPRESSION: INC EXPRESSION  */
#line 133 "./parser.y"
                                  {unary_operator((yyvsp[0].nPtr), number_of_line);}
#line 1571 "parser.tab.c"
    break;

  case 44: /* EXPRESSION: DEC EXPRESSION  */
#line 134 "./parser.y"
                                  {unary_operator((yyvsp[0].nPtr), number_of_line);}
#line 1577 "parser.tab.c"
    break;

  case 45: /* EXPRESSION: EXPRESSION INC  */
#line 135 "./parser.y"
                                  {unary_operator((yyvsp[-1].nPtr), number_of_line);}
#line 1583 "parser.tab.c"
    break;

  case 46: /* EXPRESSION: EXPRESSION DEC  */
#line 136 "./parser.y"
                                  {unary_operator((yyvsp[-1].nPtr), number_of_line);}
#line 1589 "parser.tab.c"
    break;

  case 47: /* EXPRESSION: SUB EXPRESSION  */
#line 137 "./parser.y"
                                  {unary_operator((yyvsp[0].nPtr), number_of_line);}
#line 1595 "parser.tab.c"
    break;

  case 48: /* EXPRESSION: EXPRESSION MODULO EXPRESSION  */
#line 139 "./parser.y"
                                              {(yyval.nPtr) = arithmatic((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '%', number_of_line);}
#line 1601 "parser.tab.c"
    break;

  case 49: /* EXPRESSION: EXPRESSION PLUS EXPRESSION  */
#line 140 "./parser.y"
                                              {(yyval.nPtr) = arithmatic((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '+', number_of_line);}
#line 1607 "parser.tab.c"
    break;

  case 50: /* EXPRESSION: EXPRESSION SUB EXPRESSION  */
#line 141 "./parser.y"
                                              {(yyval.nPtr) = arithmatic((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '+', number_of_line);}
#line 1613 "parser.tab.c"
    break;

  case 51: /* EXPRESSION: EXPRESSION MUL EXPRESSION  */
#line 142 "./parser.y"
                                              {(yyval.nPtr) = arithmatic((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '*', number_of_line);}
#line 1619 "parser.tab.c"
    break;

  case 52: /* EXPRESSION: EXPRESSION DIV EXPRESSION  */
#line 143 "./parser.y"
                                              {(yyval.nPtr) = arithmatic((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '/', number_of_line);}
#line 1625 "parser.tab.c"
    break;

  case 53: /* EXPRESSION: EXPRESSION POW EXPRESSION  */
#line 144 "./parser.y"
                                              {(yyval.nPtr) = arithmatic((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '^', number_of_line);}
#line 1631 "parser.tab.c"
    break;

  case 56: /* $@2: %empty  */
#line 152 "./parser.y"
                                {insertResult = insert((yyvsp[-1].str), (yyvsp[0].str), "var", number_of_line, false);}
#line 1637 "parser.tab.c"
    break;

  case 57: /* DECLARATION_STATEMENT: TYPE IDENTIFIER $@2 DECLARATION_TAIL  */
#line 152 "./parser.y"
                                                                                                                 { insertResult = -1;printf("Parsed Declaration\n");}
#line 1643 "parser.tab.c"
    break;

  case 58: /* $@3: %empty  */
#line 153 "./parser.y"
                                {insertResult = insert((yyvsp[-1].str), (yyvsp[0].str), "const", number_of_line, false);}
#line 1649 "parser.tab.c"
    break;

  case 59: /* DECLARATION_STATEMENT: TYPE CONSTANT $@3 DECLARATION_TAIL  */
#line 153 "./parser.y"
                                                                                                                 { insertResult = -1;printf("Parsed Const Declaration\n"); }
#line 1655 "parser.tab.c"
    break;

  case 63: /* $@4: %empty  */
#line 162 "./parser.y"
                         {insertResult = funcIndex;}
#line 1661 "parser.tab.c"
    break;

  case 64: /* RETURN_STATEMENT: RETURN $@4 EXPRESSION  */
#line 162 "./parser.y"
                                                                {returnExist = 1;}
#line 1667 "parser.tab.c"
    break;

  case 65: /* $@5: %empty  */
#line 167 "./parser.y"
                                       {lookup((yyvsp[0].str), 0, number_of_line);}
#line 1673 "parser.tab.c"
    break;

  case 71: /* $@6: %empty  */
#line 180 "./parser.y"
                                             {funcIndex = insert((yyvsp[-4].str), (yyvsp[-3].str),"func", number_of_line, 0);}
#line 1679 "parser.tab.c"
    break;

  case 73: /* $@7: %empty  */
#line 181 "./parser.y"
                                              {funcIndex = insert("void", (yyvsp[-3].str),"func", number_of_line, 0);}
#line 1685 "parser.tab.c"
    break;

  case 75: /* $@8: %empty  */
#line 182 "./parser.y"
                                          {funcIndex = insert((yyvsp[-3].str), (yyvsp[-2].str),"func", number_of_line, 0);}
#line 1691 "parser.tab.c"
    break;

  case 77: /* $@9: %empty  */
#line 183 "./parser.y"
                                          {funcIndex = insert("void", (yyvsp[-2].str),"func", number_of_line, 0);}
#line 1697 "parser.tab.c"
    break;

  case 81: /* ARG_DECL: TYPE IDENTIFIER  */
#line 190 "./parser.y"
                                {insertResult = insert((yyvsp[-1].str), (yyvsp[0].str),"var", number_of_line, true);}
#line 1703 "parser.tab.c"
    break;

  case 86: /* $@10: %empty  */
#line 209 "./parser.y"
                        {inLoop = 1;}
#line 1709 "parser.tab.c"
    break;

  case 87: /* $@11: %empty  */
#line 209 "./parser.y"
                                                                        {inLoop = 0;}
#line 1715 "parser.tab.c"
    break;

  case 89: /* $@12: %empty  */
#line 214 "./parser.y"
                              {insertResult = lookup((yyvsp[-1].str), 1, number_of_line);}
#line 1721 "parser.tab.c"
    break;

  case 91: /* $@13: %empty  */
#line 215 "./parser.y"
                              {printf("Error at line: %d CONSTANTS must not be reassigned\n", number_of_line);exit(1);insertResult = -1;}
#line 1727 "parser.tab.c"
    break;

  case 93: /* $@14: %empty  */
#line 220 "./parser.y"
                           {calledFuncIndex = lookup((yyvsp[0].str), 0, number_of_line);check_type(calledFuncIndex, number_of_line);}
#line 1733 "parser.tab.c"
    break;

  case 94: /* $@15: %empty  */
#line 220 "./parser.y"
                                                                                                                              {isParameter=1;}
#line 1739 "parser.tab.c"
    break;

  case 95: /* $@16: %empty  */
#line 220 "./parser.y"
                                                                                                                                                         {isParameter=0;arg_count_check(calledFuncIndex, number_of_line);}
#line 1745 "parser.tab.c"
    break;

  case 96: /* FUNC_CALL: IDENTIFIER $@14 '(' $@15 ARGUMENTS $@16 ')'  */
#line 220 "./parser.y"
                                                                                                                                                                                                                               { printf("Parsed Function Call\n");}
#line 1751 "parser.tab.c"
    break;

  case 97: /* $@17: %empty  */
#line 223 "./parser.y"
                           { argCount++; }
#line 1757 "parser.tab.c"
    break;

  case 99: /* ARGUMENTS: EXPRESSION  */
#line 224 "./parser.y"
                             { argCount++; }
#line 1763 "parser.tab.c"
    break;


#line 1767 "parser.tab.c"

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

#line 227 "./parser.y"


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
    yyin = fopen(argv[1], "r");
    yyparse();
    // display();
    // display_unused_variables();
    display_to_file("symbol_table.txt");

    return 0;
}
