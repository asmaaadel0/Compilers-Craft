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
  YYSYMBOL_80_13 = 80,                     /* $@13  */
  YYSYMBOL_FUNC_DECLARATION_STATEMENT = 81, /* FUNC_DECLARATION_STATEMENT  */
  YYSYMBOL_82_14 = 82,                     /* $@14  */
  YYSYMBOL_83_15 = 83,                     /* $@15  */
  YYSYMBOL_ARGS = 84,                      /* ARGS  */
  YYSYMBOL_ARG_DECL = 85,                  /* ARG_DECL  */
  YYSYMBOL_IF_TAIL = 86,                   /* IF_TAIL  */
  YYSYMBOL_IF_STATEMENT = 87,              /* IF_STATEMENT  */
  YYSYMBOL_88_16 = 88,                     /* $@16  */
  YYSYMBOL_89_17 = 89,                     /* $@17  */
  YYSYMBOL_WHILE_STATEMENT = 90,           /* WHILE_STATEMENT  */
  YYSYMBOL_91_18 = 91,                     /* $@18  */
  YYSYMBOL_DO_WHILE_STATEMENT = 92,        /* DO_WHILE_STATEMENT  */
  YYSYMBOL_FOR_STATEMENT = 93,             /* FOR_STATEMENT  */
  YYSYMBOL_94_19 = 94,                     /* $@19  */
  YYSYMBOL_95_20 = 95,                     /* $@20  */
  YYSYMBOL_96_21 = 96,                     /* $@21  */
  YYSYMBOL_97_22 = 97,                     /* $@22  */
  YYSYMBOL_ASSIGNMENT_STATEMENT = 98,      /* ASSIGNMENT_STATEMENT  */
  YYSYMBOL_99_23 = 99,                     /* $@23  */
  YYSYMBOL_100_24 = 100,                   /* $@24  */
  YYSYMBOL_FUNC_CALL = 101,                /* FUNC_CALL  */
  YYSYMBOL_102_25 = 102,                   /* $@25  */
  YYSYMBOL_103_26 = 103,                   /* $@26  */
  YYSYMBOL_104_27 = 104,                   /* $@27  */
  YYSYMBOL_ARGUMENTS = 105,                /* ARGUMENTS  */
  YYSYMBOL_106_28 = 106                    /* $@28  */
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
#define YYLAST   585

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  115
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  198

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
     108,   109,   110,   115,   116,   117,   118,   119,   120,   121,
     123,   124,   125,   127,   128,   130,   131,   132,   133,   135,
     136,   137,   138,   139,   141,   142,   143,   144,   145,   146,
     148,   149,   150,   151,   153,   154,   159,   159,   160,   160,
     163,   164,   168,   169,   169,   174,   174,   177,   180,   180,
     180,   180,   181,   182,   188,   188,   188,   191,   192,   193,
     196,   201,   202,   205,   205,   205,   210,   210,   214,   218,
     218,   218,   218,   218,   223,   223,   224,   224,   229,   229,
     229,   229,   232,   232,   233,   234
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
  "CASES", "$@11", "$@12", "$@13", "FUNC_DECLARATION_STATEMENT", "$@14",
  "$@15", "ARGS", "ARG_DECL", "IF_TAIL", "IF_STATEMENT", "$@16", "$@17",
  "WHILE_STATEMENT", "$@18", "DO_WHILE_STATEMENT", "FOR_STATEMENT", "$@19",
  "$@20", "$@21", "$@22", "ASSIGNMENT_STATEMENT", "$@23", "$@24",
  "FUNC_CALL", "$@25", "$@26", "$@27", "ARGUMENTS", "$@28", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-132)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-115)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -132,   137,  -132,  -132,  -132,  -132,  -132,  -132,   -47,  -132,
     -20,   -29,    -6,    -5,   397,   -16,  -132,   397,   397,   397,
     397,    -2,   -30,  -132,  -132,  -132,  -132,   397,  -132,  -132,
    -132,    15,    16,  -132,   -33,   425,  -132,     6,  -132,  -132,
    -132,  -132,  -132,  -132,   397,   397,     3,  -132,  -132,  -132,
     -10,   509,  -132,   527,    49,    49,    49,  -132,  -132,     0,
     295,  -132,   397,  -132,    -1,  -132,  -132,     2,   397,   397,
     397,   397,  -132,  -132,    -3,    85,  -132,   397,   397,   397,
     397,   397,   397,   397,   397,   397,   397,  -132,  -132,   266,
     509,  -132,    -1,   236,   397,   397,  -132,  -132,   186,   509,
    -132,    33,  -132,   -17,   -17,     4,   527,   527,   543,   543,
     397,   -13,   397,   -13,    49,    49,    49,    53,    53,    49,
     -13,   -13,   -13,   -13,    26,   397,     9,  -132,  -132,   446,
     467,   397,  -132,    -1,    24,   397,  -132,  -132,  -132,   164,
     -13,   -13,  -132,   321,    23,    58,   236,  -132,  -132,   347,
    -132,  -132,   397,   488,    40,    47,    46,    68,     8,    -1,
    -132,   236,    48,    54,   373,  -132,  -132,  -132,   164,  -132,
     397,    51,  -132,    55,  -132,  -132,   397,  -132,    71,    -1,
    -132,   509,    -1,  -132,    60,  -132,  -132,  -132,    61,  -132,
    -132,  -132,    -1,    -1,  -132,  -132,     8,  -132
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,    11,     1,    27,    28,    30,    29,    31,     0,    32,
      73,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,    34,    33,    38,    39,    35,    36,     0,     4,    23,
       2,     0,     0,     6,     0,     0,     7,     0,    19,    24,
      10,    14,     8,    64,     0,     0,     0,    20,    21,    34,
      33,    93,    99,    42,    51,    49,    53,   106,   104,     0,
       0,     3,     0,    12,     0,    17,    68,    66,     0,     0,
       0,     0,    52,    50,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    22,    15,     0,
      74,    75,     0,    11,     0,     0,   109,    65,    11,    96,
      13,     0,    18,     0,     0,     0,    40,    41,    43,    44,
       0,    47,     0,    45,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,     0,     0,     0,    94,   100,     0,
       0,   115,     5,     0,     0,     0,    71,    69,    67,    89,
      48,    46,    25,     0,     0,    92,    11,   107,   105,   112,
     110,    97,     0,     0,     0,     0,    88,     0,    83,     0,
      95,    11,     0,     0,     0,    70,    90,    85,    89,    26,
       0,     0,    82,     0,    91,   101,   115,   111,     0,     0,
      87,    78,     0,    76,     0,   113,    98,    86,     0,    77,
     102,    79,     0,     0,   103,    80,    83,    81
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -132,    57,   -57,  -132,   -84,  -132,  -132,  -132,  -132,  -132,
    -132,  -131,   -14,  -132,  -132,  -132,    10,  -132,  -132,  -132,
    -132,  -132,   -88,  -132,  -132,  -132,  -132,  -132,  -132,   -49,
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
     -53,  -132
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,    29,    61,    30,    31,   100,    88,    32,   102,
      33,    34,    35,    36,   104,   103,   137,    37,    45,    38,
     126,   172,   173,   188,   193,   196,    39,   105,   179,   155,
     156,   160,    40,    92,   145,    63,   133,    65,    41,    93,
     146,   184,   192,    42,    95,    94,    43,    59,   131,   163,
     150,   162
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      51,    58,    44,    53,    54,    55,    56,   101,   154,   128,
      66,    67,   -72,    60,   135,   136,    74,    75,    16,  -108,
      46,    17,   170,   171,    18,    19,    47,    48,   110,    57,
      89,    90,    20,    52,    62,   127,    64,   154,    87,  -108,
      49,    50,    23,    24,    25,    26,    27,    91,    99,    96,
      28,   -84,   134,   139,   106,   107,   108,   109,   142,   144,
     111,   113,   161,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   152,   158,   159,   151,   175,    74,    75,
     129,   130,    74,    75,   166,    80,    81,    82,    83,    84,
      85,    86,    83,    84,    85,    86,   140,   167,   141,   168,
     169,   176,   174,   186,   177,   182,    16,   183,   197,    17,
     190,   143,    18,    19,   138,   191,   112,   149,    98,   180,
      20,   153,   187,   185,     0,   189,     0,     0,    49,    50,
      23,    24,    25,    26,    27,   194,   195,     2,   164,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,     0,     0,    14,     0,    15,   181,   -16,    16,     0,
       0,    17,   149,     0,    18,    19,     0,     3,     4,     5,
       6,     7,    20,     9,     0,     0,     0,     0,     0,     0,
      21,    22,    23,    24,    25,    26,    27,     0,    28,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
       0,     0,    14,     0,    15,     0,   -16,    16,     0,     0,
      17,     0,     0,    18,    19,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,    21,
      22,    23,    24,    25,    26,    27,     0,    28,   132,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
       0,     0,    14,     0,    15,     0,   -16,    16,     0,     0,
      17,     0,     0,    18,    19,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,    21,
      22,    23,    24,    25,    26,    27,     0,    28,    68,    69,
       0,    70,    71,    72,    73,    74,    75,     0,     0,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,     0,
       0,     0,     0,     0,     0,     0,   124,    68,    69,   125,
      70,    71,    72,    73,    74,    75,     0,     0,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,     0,     0,
       0,     0,     0,    68,    69,    97,    70,    71,    72,    73,
      74,    75,     0,     0,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,     0,     0,     0,     0,     0,    68,
      69,   157,    70,    71,    72,    73,    74,    75,     0,     0,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
       0,     0,     0,     0,     0,    68,    69,  -114,    70,    71,
      72,    73,    74,    75,     0,     0,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,     0,     0,    16,     0,
       0,    17,     0,   178,    18,    19,     0,     0,     0,     0,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
      49,    50,    23,    24,    25,    26,    27,    68,    69,     0,
      70,    71,    72,    73,    74,    75,     0,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    68,    69,
       0,    70,    71,    72,    73,    74,    75,     0,   147,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    68,
      69,     0,    70,    71,    72,    73,    74,    75,     0,   148,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      68,    69,     0,    70,    71,    72,    73,    74,    75,     0,
     165,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    68,    69,     0,    70,    71,    72,    73,    74,    75,
       0,     0,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    70,    71,    72,    73,    74,    75,     0,     0,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      72,    73,    74,    75,     0,     0,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86
};

static const yytype_int16 yycheck[] =
{
      14,    31,    49,    17,    18,    19,    20,    64,   139,    93,
      43,    44,    32,    27,    31,    32,    29,    30,    21,    49,
      49,    24,    14,    15,    27,    28,    32,    32,    31,    31,
      44,    45,    35,    49,    19,    92,    20,   168,    32,    49,
      43,    44,    45,    46,    47,    48,    49,    44,    62,    49,
      51,    49,    19,    49,    68,    69,    70,    71,    32,    50,
      74,    75,   146,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    49,    51,    17,   133,   161,    29,    30,
      94,    95,    29,    30,    44,    36,    37,    38,    39,    40,
      41,    42,    39,    40,    41,    42,   110,    50,   112,    53,
      32,    53,   159,    32,    50,    54,    21,    52,   196,    24,
      50,   125,    27,    28,   104,    54,    31,   131,    61,   168,
      35,   135,   179,   176,    -1,   182,    -1,    -1,    43,    44,
      45,    46,    47,    48,    49,   192,   193,     0,   152,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    -1,    16,    -1,    18,   170,    20,    21,    -1,
      -1,    24,   176,    -1,    27,    28,    -1,     3,     4,     5,
       6,     7,    35,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    44,    45,    46,    47,    48,    49,    -1,    51,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    -1,    16,    -1,    18,    -1,    20,    21,    -1,    -1,
      24,    -1,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    52,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    -1,    16,    -1,    18,    -1,    20,    21,    -1,    -1,
      24,    -1,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    22,    23,
      -1,    25,    26,    27,    28,    29,    30,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    22,    23,    53,
      25,    26,    27,    28,    29,    30,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    -1,
      -1,    -1,    -1,    22,    23,    50,    25,    26,    27,    28,
      29,    30,    -1,    -1,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,    22,
      23,    50,    25,    26,    27,    28,    29,    30,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      -1,    -1,    -1,    -1,    -1,    22,    23,    50,    25,    26,
      27,    28,    29,    30,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    -1,    -1,    21,    -1,
      -1,    24,    -1,    50,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    44,    45,    46,    47,    48,    49,    22,    23,    -1,
      25,    26,    27,    28,    29,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    22,    23,
      -1,    25,    26,    27,    28,    29,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    22,
      23,    -1,    25,    26,    27,    28,    29,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      22,    23,    -1,    25,    26,    27,    28,    29,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    22,    23,    -1,    25,    26,    27,    28,    29,    30,
      -1,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    25,    26,    27,    28,    29,    30,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      27,    28,    29,    30,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    56,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    16,    18,    21,    24,    27,    28,
      35,    43,    44,    45,    46,    47,    48,    49,    51,    57,
      59,    60,    63,    65,    66,    67,    68,    72,    74,    81,
      87,    93,    98,   101,    49,    73,    49,    32,    32,    43,
      44,    67,    49,    67,    67,    67,    67,    31,    31,   102,
      67,    58,    19,    90,    20,    92,    43,    44,    22,    23,
      25,    26,    27,    28,    29,    30,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    32,    62,    67,
      67,    44,    88,    94,   100,    99,    49,    50,    56,    67,
      61,    57,    64,    70,    69,    82,    67,    67,    67,    67,
      31,    67,    31,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    50,    53,    75,    57,    59,    67,
      67,   103,    52,    91,    19,    31,    32,    71,    71,    49,
      67,    67,    32,    67,    50,    89,    95,    32,    32,    67,
     105,    57,    49,    67,    66,    84,    85,    50,    51,    17,
      86,    59,   106,   104,    67,    32,    44,    50,    53,    32,
      14,    15,    76,    77,    57,    59,    53,    50,    50,    83,
      84,    67,    54,    52,    96,   105,    32,    57,    78,    57,
      50,    54,    97,    79,    57,    57,    80,    77
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    55,    56,    56,    58,    57,    59,    59,    59,    59,
      59,    60,    61,    59,    62,    59,    63,    64,    59,    59,
      59,    59,    59,    59,    59,    65,    65,    66,    66,    66,
      66,    66,    66,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    69,    68,    70,    68,
      71,    71,    72,    73,    72,    75,    74,    76,    78,    79,
      80,    77,    77,    77,    82,    83,    81,    84,    84,    84,
      85,    86,    86,    88,    89,    87,    91,    90,    92,    94,
      95,    96,    97,    93,    99,    98,   100,    98,   102,   103,
     104,   101,   106,   105,   105,   105
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     0,     4,     1,     1,     1,     2,
       1,     0,     0,     3,     0,     2,     0,     0,     3,     1,
       2,     2,     2,     1,     1,     5,     7,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     2,     3,     3,     3,     4,     3,     4,     2,
       2,     2,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     3,     0,     4,     0,     4,
       3,     1,     1,     0,     3,     0,     8,     3,     0,     0,
       0,     8,     1,     0,     0,     0,     8,     3,     1,     0,
       2,     2,     0,     0,     0,     6,     0,     4,     7,     0,
       0,     0,     0,    11,     0,     5,     0,     5,     0,     0,
       0,     7,     0,     4,     1,     0
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
#line 1402 "parser.tab.c"
    break;

  case 4: /* $@1: %empty  */
#line 74 "./parser.y"
                    {scope_start();}
#line 1408 "parser.tab.c"
    break;

  case 5: /* BLOCK: '{' $@1 PROGRAM '}'  */
#line 74 "./parser.y"
                                                 {scope_end(number_of_line);}
#line 1414 "parser.tab.c"
    break;

  case 6: /* STATEMENT: PRINT_STATEMENT  */
#line 79 "./parser.y"
                                             {printf("Parsed print statement\n");}
#line 1420 "parser.tab.c"
    break;

  case 8: /* STATEMENT: ASSIGNMENT_STATEMENT  */
#line 81 "./parser.y"
                                               {printf("Parsed Assignment statement\n");}
#line 1426 "parser.tab.c"
    break;

  case 10: /* STATEMENT: IF_STATEMENT  */
#line 84 "./parser.y"
                                               {printf("Parsed if statement\n");}
#line 1432 "parser.tab.c"
    break;

  case 11: /* $@2: %empty  */
#line 85 "./parser.y"
                  {quadPushStartLabel(++startLabelNum);}
#line 1438 "parser.tab.c"
    break;

  case 12: /* $@3: %empty  */
#line 85 "./parser.y"
                                                                         {quadPopStartLabel();}
#line 1444 "parser.tab.c"
    break;

  case 13: /* STATEMENT: $@2 WHILE_STATEMENT $@3  */
#line 85 "./parser.y"
                                                                                                             {printf("Parsed While LOOP\n");}
#line 1450 "parser.tab.c"
    break;

  case 14: /* $@4: %empty  */
#line 86 "./parser.y"
                                {quadPopStartLabel();}
#line 1456 "parser.tab.c"
    break;

  case 15: /* STATEMENT: FOR_STATEMENT $@4  */
#line 86 "./parser.y"
                                                                      {printf("Parsed For LOOP\n");}
#line 1462 "parser.tab.c"
    break;

  case 16: /* $@5: %empty  */
#line 87 "./parser.y"
                  {quadPushStartLabel(++startLabelNum);}
#line 1468 "parser.tab.c"
    break;

  case 17: /* $@6: %empty  */
#line 87 "./parser.y"
                                                                           {quadPopStartLabel();}
#line 1474 "parser.tab.c"
    break;

  case 18: /* STATEMENT: $@5 DO_WHILE_STATEMENT $@6  */
#line 87 "./parser.y"
                                                                                                            {printf("Parsed Do While LOOP\n");}
#line 1480 "parser.tab.c"
    break;

  case 19: /* STATEMENT: SWITCH_STATEMENT  */
#line 88 "./parser.y"
                                               {printf("Parsed Switch Statement\n");}
#line 1486 "parser.tab.c"
    break;

  case 20: /* STATEMENT: BREAK SEMICOLON  */
#line 89 "./parser.y"
                                               {quadJumpEndLabel();}
#line 1492 "parser.tab.c"
    break;

  case 22: /* STATEMENT: RETURN_STATEMENT SEMICOLON  */
#line 92 "./parser.y"
                                               {quadReturn();}
#line 1498 "parser.tab.c"
    break;

  case 23: /* STATEMENT: BLOCK  */
#line 93 "./parser.y"
                                               {printf("Parsed Block\n");}
#line 1504 "parser.tab.c"
    break;

  case 24: /* STATEMENT: FUNC_DECLARATION_STATEMENT  */
#line 94 "./parser.y"
                                               {printf("Parsed Function Declaration\n");}
#line 1510 "parser.tab.c"
    break;

  case 27: /* TYPE: INT  */
#line 105 "./parser.y"
                            { (yyval.str) = "int";   }
#line 1516 "parser.tab.c"
    break;

  case 28: /* TYPE: FLOAT  */
#line 106 "./parser.y"
                            { (yyval.str) = "float"; }
#line 1522 "parser.tab.c"
    break;

  case 29: /* TYPE: BOOL  */
#line 107 "./parser.y"
                            { (yyval.str) = "bool";  }
#line 1528 "parser.tab.c"
    break;

  case 30: /* TYPE: STRING  */
#line 108 "./parser.y"
                            { (yyval.str) = "string";}
#line 1534 "parser.tab.c"
    break;

  case 31: /* TYPE: CHAR  */
#line 109 "./parser.y"
                            { (yyval.str) = "char";}
#line 1540 "parser.tab.c"
    break;

  case 32: /* TYPE: VOID  */
#line 110 "./parser.y"
                            { (yyval.str) = "void";}
#line 1546 "parser.tab.c"
    break;

  case 33: /* EXPRESSION: IDENTIFIER  */
#line 115 "./parser.y"
                                {int i = lookup((yyvsp[0].str), 0, number_of_line);check_type(i, number_of_line);(yyval.nPtr) = setType(symbolTable[i].datatype, symbolTable[i].intValue, symbolTable[i].floatValue, symbolTable[i].boolValue, symbolTable[i].strValue, symbolTable[i].charValue);quadPushIdentifier((yyvsp[0].str));}
#line 1552 "parser.tab.c"
    break;

  case 34: /* EXPRESSION: CONSTANT  */
#line 116 "./parser.y"
                                {int i = lookup((yyvsp[0].str), 0, number_of_line);check_type(i, number_of_line);(yyval.nPtr) = setType(symbolTable[i].datatype, symbolTable[i].intValue, symbolTable[i].floatValue, symbolTable[i].boolValue, symbolTable[i].strValue, symbolTable[i].charValue);quadPushIdentifier((yyvsp[0].str));}
#line 1558 "parser.tab.c"
    break;

  case 35: /* EXPRESSION: DIGIT  */
#line 117 "./parser.y"
                                {(yyval.nPtr) = setType("int", (yyvsp[0].num), 0.0, 0, "", "");assign_int(insertResult, (yyvsp[0].num), number_of_line);quadPushInt((yyvsp[0].num));}
#line 1564 "parser.tab.c"
    break;

  case 36: /* EXPRESSION: FLOAT_DIGIT  */
#line 118 "./parser.y"
                                {(yyval.nPtr) = setType("float", 0, (yyvsp[0].float_val), 0, "", "");assign_float(insertResult, (yyvsp[0].float_val), number_of_line);quadPushFloat((yyvsp[0].float_val));}
#line 1570 "parser.tab.c"
    break;

  case 37: /* EXPRESSION: BOOL_LITERAL  */
#line 119 "./parser.y"
                                {(yyval.nPtr) = setType("bool", 0, 0.0, (yyvsp[0].bool_val), "", "");assign_bool(insertResult, (yyvsp[0].bool_val), number_of_line);quadPushInt((yyvsp[0].bool_val));}
#line 1576 "parser.tab.c"
    break;

  case 38: /* EXPRESSION: STRING_LITERAL  */
#line 120 "./parser.y"
                                {(yyval.nPtr) = setType("string", 0, 0.0, 0, (yyvsp[0].str), "");assign_string(insertResult, (yyvsp[0].str), number_of_line);quadPushString((yyvsp[0].str));}
#line 1582 "parser.tab.c"
    break;

  case 39: /* EXPRESSION: CHAR_LITERAL  */
#line 121 "./parser.y"
                                {(yyval.nPtr) = setType("char", 0, 0.0, 0, "", (yyvsp[0].str));assign_char(insertResult, (yyvsp[0].str), number_of_line);quadPushChar((yyvsp[0].str));}
#line 1588 "parser.tab.c"
    break;

  case 40: /* EXPRESSION: EXPRESSION LOGIC_AND EXPRESSION  */
#line 123 "./parser.y"
                                                 {(yyval.nPtr) = logical((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '&', number_of_line);quadInstruction("LOGICAL_AND");}
#line 1594 "parser.tab.c"
    break;

  case 41: /* EXPRESSION: EXPRESSION LOGIC_OR EXPRESSION  */
#line 124 "./parser.y"
                                                 {(yyval.nPtr) = logical((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '|', number_of_line);quadInstruction("LOGICAL_OR");}
#line 1600 "parser.tab.c"
    break;

  case 42: /* EXPRESSION: LOGIC_NOT EXPRESSION  */
#line 125 "./parser.y"
                                                 {(yyval.nPtr) = not_operator((yyvsp[0].nPtr), number_of_line);quadInstruction("LOGICAL_NOT");}
#line 1606 "parser.tab.c"
    break;

  case 43: /* EXPRESSION: EXPRESSION EQUALITY EXPRESSION  */
#line 127 "./parser.y"
                                                    {(yyval.nPtr) = comparison((yyvsp[-2].nPtr), (yyvsp[0].nPtr), "==", number_of_line);quadInstruction("EQ");}
#line 1612 "parser.tab.c"
    break;

  case 44: /* EXPRESSION: EXPRESSION NEG_EQUALITY EXPRESSION  */
#line 128 "./parser.y"
                                                    {(yyval.nPtr) = comparison((yyvsp[-2].nPtr), (yyvsp[0].nPtr), "!=", number_of_line);quadInstruction("NEQ");}
#line 1618 "parser.tab.c"
    break;

  case 45: /* EXPRESSION: EXPRESSION LT EXPRESSION  */
#line 130 "./parser.y"
                                              {(yyval.nPtr) = comparison((yyvsp[-2].nPtr), (yyvsp[0].nPtr), "<", number_of_line);quadInstruction("LT");}
#line 1624 "parser.tab.c"
    break;

  case 46: /* EXPRESSION: EXPRESSION LT EQ EXPRESSION  */
#line 131 "./parser.y"
                                              {(yyval.nPtr) = comparison((yyvsp[-3].nPtr), (yyvsp[0].nPtr), "<=", number_of_line);quadInstruction("LEQ");}
#line 1630 "parser.tab.c"
    break;

  case 47: /* EXPRESSION: EXPRESSION GT EXPRESSION  */
#line 132 "./parser.y"
                                              {(yyval.nPtr) = comparison((yyvsp[-2].nPtr), (yyvsp[0].nPtr), ">", number_of_line);quadInstruction("GT");}
#line 1636 "parser.tab.c"
    break;

  case 48: /* EXPRESSION: EXPRESSION GT EQ EXPRESSION  */
#line 133 "./parser.y"
                                              {(yyval.nPtr) = comparison((yyvsp[-3].nPtr), (yyvsp[0].nPtr), ">=", number_of_line);quadInstruction("GEQ");}
#line 1642 "parser.tab.c"
    break;

  case 49: /* EXPRESSION: INC EXPRESSION  */
#line 135 "./parser.y"
                                  {(yyval.nPtr) = unary_operator((yyvsp[0].nPtr), "++", number_of_line);quadInstruction("INC");}
#line 1648 "parser.tab.c"
    break;

  case 50: /* EXPRESSION: EXPRESSION INC  */
#line 136 "./parser.y"
                                  {(yyval.nPtr) = unary_operator((yyvsp[-1].nPtr), "++", number_of_line);quadInstruction("INC");}
#line 1654 "parser.tab.c"
    break;

  case 51: /* EXPRESSION: DEC EXPRESSION  */
#line 137 "./parser.y"
                                  {(yyval.nPtr) = unary_operator((yyvsp[0].nPtr), "--", number_of_line);quadInstruction("DEC");}
#line 1660 "parser.tab.c"
    break;

  case 52: /* EXPRESSION: EXPRESSION DEC  */
#line 138 "./parser.y"
                                  {(yyval.nPtr) = unary_operator((yyvsp[-1].nPtr), "--", number_of_line);quadInstruction("DEC");}
#line 1666 "parser.tab.c"
    break;

  case 53: /* EXPRESSION: SUB EXPRESSION  */
#line 139 "./parser.y"
                                  {(yyval.nPtr) = unary_operator((yyvsp[0].nPtr), "-",  number_of_line);quadInstruction("NEG");}
#line 1672 "parser.tab.c"
    break;

  case 54: /* EXPRESSION: EXPRESSION MODULO EXPRESSION  */
#line 141 "./parser.y"
                                              {(yyval.nPtr) = arithmatic((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '%', number_of_line);quadInstruction("MOD");}
#line 1678 "parser.tab.c"
    break;

  case 55: /* EXPRESSION: EXPRESSION PLUS EXPRESSION  */
#line 142 "./parser.y"
                                              {(yyval.nPtr) = arithmatic((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '+', number_of_line);quadInstruction("ADD");}
#line 1684 "parser.tab.c"
    break;

  case 56: /* EXPRESSION: EXPRESSION SUB EXPRESSION  */
#line 143 "./parser.y"
                                              {(yyval.nPtr) = arithmatic((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '-', number_of_line);quadInstruction("SUB");}
#line 1690 "parser.tab.c"
    break;

  case 57: /* EXPRESSION: EXPRESSION MUL EXPRESSION  */
#line 144 "./parser.y"
                                              {(yyval.nPtr) = arithmatic((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '*', number_of_line);quadInstruction("MUL");}
#line 1696 "parser.tab.c"
    break;

  case 58: /* EXPRESSION: EXPRESSION DIV EXPRESSION  */
#line 145 "./parser.y"
                                              {(yyval.nPtr) = arithmatic((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '/', number_of_line);quadInstruction("DIV");}
#line 1702 "parser.tab.c"
    break;

  case 59: /* EXPRESSION: EXPRESSION POW EXPRESSION  */
#line 146 "./parser.y"
                                              {(yyval.nPtr) = arithmatic((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '^', number_of_line);quadInstruction("POW");}
#line 1708 "parser.tab.c"
    break;

  case 60: /* EXPRESSION: EXPRESSION BITWISE_OR EXPRESSION  */
#line 148 "./parser.y"
                                                    {(yyval.nPtr) = bitwise((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '|', number_of_line);quadInstruction("BITWISE_OR");}
#line 1714 "parser.tab.c"
    break;

  case 61: /* EXPRESSION: EXPRESSION BITWISE_AND EXPRESSION  */
#line 149 "./parser.y"
                                                    {(yyval.nPtr) = bitwise((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '&', number_of_line);quadInstruction("BITWISE_AND");}
#line 1720 "parser.tab.c"
    break;

  case 62: /* EXPRESSION: EXPRESSION SHL EXPRESSION  */
#line 150 "./parser.y"
                                                    {(yyval.nPtr) = bitwise((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '<', number_of_line);quadInstruction("SHL");}
#line 1726 "parser.tab.c"
    break;

  case 63: /* EXPRESSION: EXPRESSION SHR EXPRESSION  */
#line 151 "./parser.y"
                                                    {(yyval.nPtr) = bitwise((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '>', number_of_line);quadInstruction("SHR");}
#line 1732 "parser.tab.c"
    break;

  case 65: /* EXPRESSION: '(' EXPRESSION ')'  */
#line 154 "./parser.y"
                                                    {(yyval.nPtr) = (yyvsp[-1].nPtr);}
#line 1738 "parser.tab.c"
    break;

  case 66: /* $@7: %empty  */
#line 159 "./parser.y"
                                {insertResult = insert((yyvsp[-1].str), (yyvsp[0].str), "var", number_of_line, false);}
#line 1744 "parser.tab.c"
    break;

  case 67: /* DECLARATION_STATEMENT: TYPE IDENTIFIER $@7 DECLARATION_TAIL  */
#line 159 "./parser.y"
                                                                                                                 { insertResult = -1;quadPopIdentifier((yyvsp[-2].str));printf("Parsed Declaration\n");}
#line 1750 "parser.tab.c"
    break;

  case 68: /* $@8: %empty  */
#line 160 "./parser.y"
                                {insertResult = insert((yyvsp[-1].str), (yyvsp[0].str), "const", number_of_line, false);}
#line 1756 "parser.tab.c"
    break;

  case 69: /* DECLARATION_STATEMENT: TYPE CONSTANT $@8 DECLARATION_TAIL  */
#line 160 "./parser.y"
                                                                                                                 { insertResult = -1;quadPopIdentifier((yyvsp[-2].str));printf("Parsed Const Declaration\n");}
#line 1762 "parser.tab.c"
    break;

  case 73: /* $@9: %empty  */
#line 169 "./parser.y"
                         {insertResult = funcIndex;}
#line 1768 "parser.tab.c"
    break;

  case 74: /* RETURN_STATEMENT: RETURN $@9 EXPRESSION  */
#line 169 "./parser.y"
                                                                {returnExist = 1;}
#line 1774 "parser.tab.c"
    break;

  case 75: /* $@10: %empty  */
#line 174 "./parser.y"
                                      {quadPushLastIdentifierStack((yyvsp[0].str));quadPushEndLabel(++endLabelNum);lookup((yyvsp[0].str), 0, number_of_line);}
#line 1780 "parser.tab.c"
    break;

  case 76: /* SWITCH_STATEMENT: SWITCH '(' IDENTIFIER $@10 ')' '{' CASES '}'  */
#line 174 "./parser.y"
                                                                                                                                                          {quadPopEndLabel();quadPopLastIdentifierStack();}
#line 1786 "parser.tab.c"
    break;

  case 78: /* $@11: %empty  */
#line 180 "./parser.y"
                                {quadJumpFalseLabel(++labelNum);}
#line 1792 "parser.tab.c"
    break;

  case 79: /* $@12: %empty  */
#line 180 "./parser.y"
                                                                     {quadPeakLastIdentifierStack();}
#line 1798 "parser.tab.c"
    break;

  case 80: /* $@13: %empty  */
#line 180 "./parser.y"
                                                                                                            {quadPopLabel();}
#line 1804 "parser.tab.c"
    break;

  case 84: /* $@14: %empty  */
#line 188 "./parser.y"
                                {quadStartFunction((yyvsp[0].str));}
#line 1810 "parser.tab.c"
    break;

  case 85: /* $@15: %empty  */
#line 188 "./parser.y"
                                                                     {funcIndex = insert((yyvsp[-5].str), (yyvsp[-4].str),"func", number_of_line, 0);}
#line 1816 "parser.tab.c"
    break;

  case 86: /* FUNC_DECLARATION_STATEMENT: TYPE IDENTIFIER $@14 '(' ARGS ')' $@15 BLOCK  */
#line 188 "./parser.y"
                                                                                                                                   {quadEndFunction((yyvsp[-6].str));}
#line 1822 "parser.tab.c"
    break;

  case 90: /* ARG_DECL: TYPE IDENTIFIER  */
#line 196 "./parser.y"
                                {quadPopIdentifier((yyvsp[0].str));insertResult = insert((yyvsp[-1].str), (yyvsp[0].str),"var", number_of_line, true);}
#line 1828 "parser.tab.c"
    break;

  case 93: /* $@16: %empty  */
#line 205 "./parser.y"
                              {quadJumpFalseLabel(++labelNum);}
#line 1834 "parser.tab.c"
    break;

  case 94: /* $@17: %empty  */
#line 205 "./parser.y"
                                                                      {quadPushEndLabel(++endLabelNum);quadJumpEndLabel();quadPopEndLabel();quadPopLabel();}
#line 1840 "parser.tab.c"
    break;

  case 96: /* $@18: %empty  */
#line 210 "./parser.y"
                                 {quadJumpFalseLabel(++labelNum);}
#line 1846 "parser.tab.c"
    break;

  case 97: /* WHILE_STATEMENT: WHILE EXPRESSION $@18 BLOCK  */
#line 210 "./parser.y"
                                                                         {quadPopLabel();quadJumpStartLabel();}
#line 1852 "parser.tab.c"
    break;

  case 98: /* DO_WHILE_STATEMENT: DO BLOCK WHILE '(' EXPRESSION ')' SEMICOLON  */
#line 214 "./parser.y"
                                                            {quadJumpFalseLabel(++labelNum);quadPopLabel();quadJumpStartLabel();}
#line 1858 "parser.tab.c"
    break;

  case 99: /* $@19: %empty  */
#line 218 "./parser.y"
                        {inLoop = 1;}
#line 1864 "parser.tab.c"
    break;

  case 100: /* $@20: %empty  */
#line 218 "./parser.y"
                                                {quadPushStartLabel(++startLabelNum);}
#line 1870 "parser.tab.c"
    break;

  case 101: /* $@21: %empty  */
#line 218 "./parser.y"
                                                                                                           {quadJumpFalseLabel(++labelNum);}
#line 1876 "parser.tab.c"
    break;

  case 102: /* $@22: %empty  */
#line 218 "./parser.y"
                                                                                                                                                 {inLoop = 0;}
#line 1882 "parser.tab.c"
    break;

  case 103: /* FOR_STATEMENT: FOR '(' $@19 STATEMENT $@20 STATEMENT STATEMENT $@21 ')' $@22 BLOCK  */
#line 218 "./parser.y"
                                                                                                                                                                     {quadPopLabel();quadJumpStartLabel();}
#line 1888 "parser.tab.c"
    break;

  case 104: /* $@23: %empty  */
#line 223 "./parser.y"
                              {insertResult = lookup((yyvsp[-1].str), 1, number_of_line);}
#line 1894 "parser.tab.c"
    break;

  case 105: /* ASSIGNMENT_STATEMENT: IDENTIFIER EQ $@23 EXPRESSION SEMICOLON  */
#line 223 "./parser.y"
                                                                                                   {quadPopIdentifier((yyvsp[-4].str));}
#line 1900 "parser.tab.c"
    break;

  case 106: /* $@24: %empty  */
#line 224 "./parser.y"
                              {printf("Error at line: %d CONSTANTS must not be reassigned\n", number_of_line);exit(1);insertResult = -1;}
#line 1906 "parser.tab.c"
    break;

  case 108: /* $@25: %empty  */
#line 229 "./parser.y"
                           {calledFuncIndex = lookup((yyvsp[0].str), 0, number_of_line);check_type(calledFuncIndex, number_of_line);}
#line 1912 "parser.tab.c"
    break;

  case 109: /* $@26: %empty  */
#line 229 "./parser.y"
                                                                                                                              {isParameter=1;}
#line 1918 "parser.tab.c"
    break;

  case 110: /* $@27: %empty  */
#line 229 "./parser.y"
                                                                                                                                                         {isParameter=0;arg_count_check(calledFuncIndex, number_of_line);}
#line 1924 "parser.tab.c"
    break;

  case 111: /* FUNC_CALL: IDENTIFIER $@25 '(' $@26 ARGUMENTS $@27 ')'  */
#line 229 "./parser.y"
                                                                                                                                                                                                                               {quadCallFunction((yyvsp[-6].str));printf("Parsed Function Call\n");}
#line 1930 "parser.tab.c"
    break;

  case 112: /* $@28: %empty  */
#line 232 "./parser.y"
                           { argCount++; }
#line 1936 "parser.tab.c"
    break;

  case 114: /* ARGUMENTS: EXPRESSION  */
#line 233 "./parser.y"
                             { argCount++; }
#line 1942 "parser.tab.c"
    break;


#line 1946 "parser.tab.c"

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

#line 236 "./parser.y"


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
