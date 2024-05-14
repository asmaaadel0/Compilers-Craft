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
    extern int yylineno;

    int yylex();
    extern FILE *yyin;    

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
  YYSYMBOL_CHAR = 6,                       /* CHAR  */
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
  YYSYMBOL_BOOL_VALUE = 21,                /* BOOL_VALUE  */
  YYSYMBOL_LOGICAL_AND = 22,               /* LOGICAL_AND  */
  YYSYMBOL_LOGICAL_OR = 23,                /* LOGICAL_OR  */
  YYSYMBOL_LOGICAL_NOT = 24,               /* LOGICAL_NOT  */
  YYSYMBOL_EQUAL = 25,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 26,                 /* NOT_EQUAL  */
  YYSYMBOL_GT = 27,                        /* GT  */
  YYSYMBOL_LT = 28,                        /* LT  */
  YYSYMBOL_EQ = 29,                        /* EQ  */
  YYSYMBOL_SEMICOLON = 30,                 /* SEMICOLON  */
  YYSYMBOL_MOD = 31,                       /* MOD  */
  YYSYMBOL_ADD = 32,                       /* ADD  */
  YYSYMBOL_SUB = 33,                       /* SUB  */
  YYSYMBOL_MUL = 34,                       /* MUL  */
  YYSYMBOL_DIV = 35,                       /* DIV  */
  YYSYMBOL_POW = 36,                       /* POW  */
  YYSYMBOL_BITWISE_OR = 37,                /* BITWISE_OR  */
  YYSYMBOL_BITWISE_AND = 38,               /* BITWISE_AND  */
  YYSYMBOL_SHL = 39,                       /* SHL  */
  YYSYMBOL_SHR = 40,                       /* SHR  */
  YYSYMBOL_CONSTANT = 41,                  /* CONSTANT  */
  YYSYMBOL_IDENTIFIER = 42,                /* IDENTIFIER  */
  YYSYMBOL_STRING_VALUE = 43,              /* STRING_VALUE  */
  YYSYMBOL_CHAR_VALUE = 44,                /* CHAR_VALUE  */
  YYSYMBOL_INT_VALUE = 45,                 /* INT_VALUE  */
  YYSYMBOL_FLOAT_VALUE = 46,               /* FLOAT_VALUE  */
  YYSYMBOL_47_ = 47,                       /* '('  */
  YYSYMBOL_48_ = 48,                       /* ')'  */
  YYSYMBOL_49_ = 49,                       /* '{'  */
  YYSYMBOL_50_ = 50,                       /* '}'  */
  YYSYMBOL_51_ = 51,                       /* ':'  */
  YYSYMBOL_52_ = 52,                       /* ','  */
  YYSYMBOL_YYACCEPT = 53,                  /* $accept  */
  YYSYMBOL_PROGRAM = 54,                   /* PROGRAM  */
  YYSYMBOL_BLOCK = 55,                     /* BLOCK  */
  YYSYMBOL_56_1 = 56,                      /* $@1  */
  YYSYMBOL_STATEMENT = 57,                 /* STATEMENT  */
  YYSYMBOL_58_2 = 58,                      /* $@2  */
  YYSYMBOL_59_3 = 59,                      /* $@3  */
  YYSYMBOL_60_4 = 60,                      /* $@4  */
  YYSYMBOL_61_5 = 61,                      /* $@5  */
  YYSYMBOL_PRINT_STATEMENT = 62,           /* PRINT_STATEMENT  */
  YYSYMBOL_63_6 = 63,                      /* $@6  */
  YYSYMBOL_TYPE = 64,                      /* TYPE  */
  YYSYMBOL_EXPRESSION = 65,                /* EXPRESSION  */
  YYSYMBOL_DECLARATION_STATEMENT = 66,     /* DECLARATION_STATEMENT  */
  YYSYMBOL_67_7 = 67,                      /* $@7  */
  YYSYMBOL_68_8 = 68,                      /* $@8  */
  YYSYMBOL_69_9 = 69,                      /* $@9  */
  YYSYMBOL_70_10 = 70,                     /* $@10  */
  YYSYMBOL_RETURN_STATEMENT = 71,          /* RETURN_STATEMENT  */
  YYSYMBOL_72_11 = 72,                     /* $@11  */
  YYSYMBOL_SWITCH_STATEMENT = 73,          /* SWITCH_STATEMENT  */
  YYSYMBOL_74_12 = 74,                     /* $@12  */
  YYSYMBOL_DEFAULTCASE = 75,               /* DEFAULTCASE  */
  YYSYMBOL_CASES = 76,                     /* CASES  */
  YYSYMBOL_77_13 = 77,                     /* $@13  */
  YYSYMBOL_78_14 = 78,                     /* $@14  */
  YYSYMBOL_FUNC_DECLARATION_STATEMENT = 79, /* FUNC_DECLARATION_STATEMENT  */
  YYSYMBOL_80_15 = 80,                     /* $@15  */
  YYSYMBOL_81_16 = 81,                     /* $@16  */
  YYSYMBOL_ARGS = 82,                      /* ARGS  */
  YYSYMBOL_ARG_DECL = 83,                  /* ARG_DECL  */
  YYSYMBOL_IF_TAIL = 84,                   /* IF_TAIL  */
  YYSYMBOL_IF_STATEMENT = 85,              /* IF_STATEMENT  */
  YYSYMBOL_86_17 = 86,                     /* $@17  */
  YYSYMBOL_87_18 = 87,                     /* $@18  */
  YYSYMBOL_WHILE_STATEMENT = 88,           /* WHILE_STATEMENT  */
  YYSYMBOL_89_19 = 89,                     /* $@19  */
  YYSYMBOL_DO_WHILE_STATEMENT = 90,        /* DO_WHILE_STATEMENT  */
  YYSYMBOL_FOR_STATEMENT = 91,             /* FOR_STATEMENT  */
  YYSYMBOL_92_20 = 92,                     /* $@20  */
  YYSYMBOL_93_21 = 93,                     /* $@21  */
  YYSYMBOL_94_22 = 94,                     /* $@22  */
  YYSYMBOL_95_23 = 95,                     /* $@23  */
  YYSYMBOL_ASSIGNMENT_STATEMENT = 96,      /* ASSIGNMENT_STATEMENT  */
  YYSYMBOL_97_24 = 97,                     /* $@24  */
  YYSYMBOL_98_25 = 98,                     /* $@25  */
  YYSYMBOL_FUNC_CALL = 99,                 /* FUNC_CALL  */
  YYSYMBOL_100_26 = 100,                   /* $@26  */
  YYSYMBOL_101_27 = 101,                   /* $@27  */
  YYSYMBOL_102_28 = 102,                   /* $@28  */
  YYSYMBOL_ARGUMENTS = 103,                /* ARGUMENTS  */
  YYSYMBOL_104_29 = 104                    /* $@29  */
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
#define YYLAST   511

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  112
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  192

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
      47,    48,     2,     2,    52,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    51,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,     2,    50,     2,     2,     2,     2,
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
       0,    74,    74,    75,    79,    79,    84,    85,    86,    88,
      90,    90,    91,    91,    92,    92,    93,    93,    94,    96,
      97,    99,   100,   101,   107,   107,   111,   112,   113,   114,
     115,   116,   121,   122,   123,   124,   125,   126,   127,   129,
     130,   132,   133,   135,   136,   137,   138,   139,   140,   142,
     143,   144,   145,   147,   148,   150,   151,   153,   154,   155,
     156,   161,   161,   162,   162,   163,   163,   164,   164,   169,
     170,   170,   175,   175,   178,   181,   181,   181,   182,   183,
     189,   189,   189,   192,   193,   194,   197,   202,   203,   204,
     207,   207,   207,   212,   212,   216,   220,   220,   220,   220,
     220,   225,   225,   226,   226,   231,   231,   231,   231,   234,
     234,   235,   236
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
  "STRING", "CHAR", "BOOL", "PRINT", "VOID", "RETURN", "SWITCH", "BREAK",
  "CONTINUE", "CASE", "DEFAULT", "IF", "ELSE", "FOR", "WHILE", "DO",
  "BOOL_VALUE", "LOGICAL_AND", "LOGICAL_OR", "LOGICAL_NOT", "EQUAL",
  "NOT_EQUAL", "GT", "LT", "EQ", "SEMICOLON", "MOD", "ADD", "SUB", "MUL",
  "DIV", "POW", "BITWISE_OR", "BITWISE_AND", "SHL", "SHR", "CONSTANT",
  "IDENTIFIER", "STRING_VALUE", "CHAR_VALUE", "INT_VALUE", "FLOAT_VALUE",
  "'('", "')'", "'{'", "'}'", "':'", "','", "$accept", "PROGRAM", "BLOCK",
  "$@1", "STATEMENT", "$@2", "$@3", "$@4", "$@5", "PRINT_STATEMENT", "$@6",
  "TYPE", "EXPRESSION", "DECLARATION_STATEMENT", "$@7", "$@8", "$@9",
  "$@10", "RETURN_STATEMENT", "$@11", "SWITCH_STATEMENT", "$@12",
  "DEFAULTCASE", "CASES", "$@13", "$@14", "FUNC_DECLARATION_STATEMENT",
  "$@15", "$@16", "ARGS", "ARG_DECL", "IF_TAIL", "IF_STATEMENT", "$@17",
  "$@18", "WHILE_STATEMENT", "$@19", "DO_WHILE_STATEMENT", "FOR_STATEMENT",
  "$@20", "$@21", "$@22", "$@23", "ASSIGNMENT_STATEMENT", "$@24", "$@25",
  "FUNC_CALL", "$@26", "$@27", "$@28", "ARGUMENTS", "$@29", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-129)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-112)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -129,   145,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,
     -21,    -6,    10,   -41,  -129,    97,    97,   -18,   -24,  -129,
    -129,  -129,  -129,    97,  -129,  -129,  -129,    15,    47,    48,
      58,  -129,   -23,   344,  -129,    45,  -129,  -129,  -129,  -129,
      29,    97,  -129,  -129,  -129,  -129,    31,  -129,     2,  -129,
    -129,    32,   268,  -129,    97,  -129,    97,  -129,    34,  -129,
      33,  -129,    54,   -20,    97,    97,    97,    97,     1,    53,
    -129,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,  -129,    97,   439,   240,    97,    97,  -129,  -129,   192,
     439,   439,    66,    49,    60,    57,    63,    78,    46,   455,
     455,   140,   140,    97,   -19,    97,   -19,    73,     2,     2,
      73,    73,    73,   471,   471,   186,   186,   287,  -129,   363,
     382,    97,  -129,    34,    34,    64,  -129,    97,  -129,    97,
    -129,    98,   439,   439,    80,   240,  -129,  -129,   306,  -129,
    -129,  -129,    97,    67,   401,   420,    74,    71,    68,  -129,
    -129,    70,    75,   107,   325,    76,  -129,  -129,  -129,  -129,
      98,   240,    97,  -129,   -14,  -129,    96,    14,    34,  -129,
      81,  -129,  -129,  -129,  -129,    97,    77,  -129,    82,  -129,
    -129,   439,    34,  -129,    34,    83,  -129,  -129,    34,  -129,
      14,  -129
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,    10,     1,    26,    27,    29,    30,    28,    24,    31,
      70,     0,     0,     0,    36,     0,     0,    33,    32,    37,
      38,    34,    35,     0,     4,    22,     2,     0,     0,     0,
       0,     9,     0,     0,     6,     0,    23,    18,     7,    40,
       0,     0,    19,    20,    96,    33,    32,    42,    41,   103,
     101,     0,     0,     3,     0,    11,     0,    13,     0,    15,
       0,    17,    65,    61,     0,     0,     0,     0,     0,     0,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    21,     0,    71,    10,     0,     0,   106,    39,    10,
      90,    93,     0,     0,     0,     0,     0,     0,     0,    53,
      54,    55,    56,     0,    57,     0,    59,    48,    43,    44,
      45,    46,    47,    49,    50,    51,    52,     0,    97,     0,
       0,   112,     5,     0,     0,     0,    72,     0,    68,     0,
      64,    85,    58,    60,     0,    10,   104,   102,   109,   107,
      91,    94,     0,     0,     0,     0,     0,     0,    84,    25,
      98,     0,     0,    89,     0,     0,    66,    62,    86,    81,
      85,    10,   112,   108,     0,    92,     0,    79,     0,    83,
       0,   110,    87,    88,    95,     0,     0,    78,     0,    82,
      99,    75,     0,    73,     0,     0,    74,   100,     0,    76,
      79,    77
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -129,    93,   -51,  -129,   -80,  -129,  -129,  -129,  -129,  -129,
    -129,  -128,   -15,  -129,  -129,  -129,  -129,  -129,  -129,  -129,
    -129,  -129,  -129,   -55,  -129,  -129,  -129,  -129,  -129,    -1,
    -129,  -129,   -28,  -129,  -129,  -129,  -129,  -129,  -129,  -129,
    -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,
       0,  -129
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,    25,    53,    26,    27,    28,    29,    30,    31,
      40,    32,    33,    34,    96,    97,    94,    95,    35,    41,
      61,   143,   177,   178,   185,   190,    36,    98,   168,   147,
     148,   165,    55,   123,   153,    57,   124,    59,    37,    84,
     135,   161,   184,    38,    86,    85,    39,    51,   121,   152,
     139,   151
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      47,    48,    54,   146,   118,    50,    44,    92,    52,   -69,
     -63,    49,    71,    72,    73,    74,    75,    76,    62,    63,
      79,    80,    14,  -105,    42,    15,    83,   -80,   175,   176,
     103,    54,   146,    71,    16,    24,    74,    75,    76,    90,
      43,    91,    45,    46,    19,    20,    21,    22,    23,    99,
     100,   101,   102,   104,   106,   150,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    56,   117,    58,    60,
     119,   120,   140,   141,    14,    81,    82,    15,  -105,    87,
      93,   170,   105,    24,   -67,   125,    16,   128,   132,   127,
     133,   126,   129,   131,    45,    46,    19,    20,    21,    22,
      23,     3,     4,     5,     6,     7,   138,     9,   130,    76,
     149,   142,   144,   172,   145,   155,   158,   179,    14,   159,
     160,    15,   162,   163,   164,   167,   174,   154,   182,   180,
      16,   186,   183,   187,   188,   191,   173,   189,    45,    46,
      19,    20,    21,    22,    23,     2,    89,   138,     3,     4,
       5,     6,     7,     8,     9,    10,   -16,    11,    12,   169,
     181,     0,   171,    13,   -12,   -14,    14,    68,    69,    15,
       0,    71,    72,    73,    74,    75,    76,     0,    16,    79,
      80,     0,     0,     0,     0,     0,    17,    18,    19,    20,
      21,    22,    23,     0,    24,     3,     4,     5,     6,     7,
       8,     9,    10,   -16,    11,    12,     0,     0,     0,     0,
      13,   -12,   -14,    14,     0,     0,    15,    71,    72,    73,
      74,    75,    76,     0,     0,    16,     0,     0,     0,     0,
       0,     0,     0,    17,    18,    19,    20,    21,    22,    23,
       0,    24,   122,     3,     4,     5,     6,     7,     8,     9,
      10,   -16,    11,    12,     0,     0,     0,     0,    13,   -12,
     -14,    14,     0,     0,    15,     0,     0,     0,     0,     0,
       0,     0,     0,    16,     0,     0,     0,     0,     0,     0,
       0,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      64,    65,     0,    66,    67,    68,    69,     0,     0,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    64,
      65,     0,    66,    67,    68,    69,    88,     0,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    64,    65,
       0,    66,    67,    68,    69,   134,     0,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    64,    65,     0,
      66,    67,    68,    69,  -111,     0,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    64,    65,     0,    66,
      67,    68,    69,   166,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    64,    65,     0,    66,    67,
      68,    69,     0,   136,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    64,    65,     0,    66,    67,    68,
      69,     0,   137,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    64,    65,     0,    66,    67,    68,    69,
       0,   156,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    64,    65,     0,    66,    67,    68,    69,     0,
     157,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    64,    65,     0,    66,    67,    68,    69,     0,     0,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      66,    67,    68,    69,     0,     0,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    66,    67,    68,    69,
       0,     0,    71,    72,    73,    74,    75,    76,     0,     0,
      79,    80
};

static const yytype_int16 yycheck[] =
{
      15,    16,    16,   131,    84,    29,    47,    58,    23,    30,
      30,    29,    31,    32,    33,    34,    35,    36,    41,    42,
      39,    40,    21,    47,    30,    24,    41,    47,    14,    15,
      29,    16,   160,    31,    33,    49,    34,    35,    36,    54,
      30,    56,    41,    42,    43,    44,    45,    46,    47,    64,
      65,    66,    67,    68,    69,   135,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    19,    82,    20,    11,
      85,    86,   123,   124,    21,    30,    47,    24,    47,    47,
      47,   161,    29,    49,    30,    19,    33,    30,   103,    29,
     105,    42,    29,    47,    41,    42,    43,    44,    45,    46,
      47,     3,     4,     5,     6,     7,   121,     9,    30,    36,
      30,    47,   127,   164,   129,    48,    42,   168,    21,    48,
      52,    24,    52,    48,    17,    49,    30,   142,    51,    48,
      33,   182,    50,   184,    51,   190,   164,   188,    41,    42,
      43,    44,    45,    46,    47,     0,    53,   162,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,   160,
     175,    -1,   162,    18,    19,    20,    21,    27,    28,    24,
      -1,    31,    32,    33,    34,    35,    36,    -1,    33,    39,
      40,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    31,    32,    33,
      34,    35,    36,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    -1,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      22,    23,    -1,    25,    26,    27,    28,    -1,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    22,
      23,    -1,    25,    26,    27,    28,    48,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    22,    23,
      -1,    25,    26,    27,    28,    48,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    22,    23,    -1,
      25,    26,    27,    28,    48,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    22,    23,    -1,    25,
      26,    27,    28,    48,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    22,    23,    -1,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    22,    23,    -1,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    22,    23,    -1,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    22,    23,    -1,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    22,    23,    -1,    25,    26,    27,    28,    -1,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      25,    26,    27,    28,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    25,    26,    27,    28,
      -1,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    40
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    54,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    12,    13,    18,    21,    24,    33,    41,    42,    43,
      44,    45,    46,    47,    49,    55,    57,    58,    59,    60,
      61,    62,    64,    65,    66,    71,    79,    91,    96,    99,
      63,    72,    30,    30,    47,    41,    42,    65,    65,    29,
      29,   100,    65,    56,    16,    85,    19,    88,    20,    90,
      11,    73,    41,    42,    22,    23,    25,    26,    27,    28,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    30,    47,    65,    92,    98,    97,    47,    48,    54,
      65,    65,    55,    47,    69,    70,    67,    68,    80,    65,
      65,    65,    65,    29,    65,    29,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    57,    65,
      65,   101,    50,    86,    89,    19,    42,    29,    30,    29,
      30,    47,    65,    65,    48,    93,    30,    30,    65,   103,
      55,    55,    47,    74,    65,    65,    64,    82,    83,    30,
      57,   104,   102,    87,    65,    48,    30,    30,    42,    48,
      52,    94,    52,    48,    17,    84,    48,    49,    81,    82,
      57,   103,    55,    85,    30,    14,    15,    75,    76,    55,
      48,    65,    51,    50,    95,    77,    55,    55,    51,    55,
      78,    76
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    53,    54,    54,    56,    55,    57,    57,    57,    57,
      58,    57,    59,    57,    60,    57,    61,    57,    57,    57,
      57,    57,    57,    57,    63,    62,    64,    64,    64,    64,
      64,    64,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    67,    66,    68,    66,    69,    66,    70,    66,    71,
      72,    71,    74,    73,    75,    77,    78,    76,    76,    76,
      80,    81,    79,    82,    82,    82,    83,    84,    84,    84,
      86,    87,    85,    89,    88,    90,    92,    93,    94,    95,
      91,    97,    96,    98,    96,   100,   101,   102,    99,   104,
     103,   103,   103
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     0,     4,     1,     1,     2,     1,
       0,     2,     0,     2,     0,     2,     0,     2,     1,     2,
       2,     2,     1,     1,     0,     6,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     3,
       4,     0,     6,     0,     4,     0,     6,     0,     4,     1,
       0,     3,     0,     8,     3,     0,     0,     7,     1,     0,
       0,     0,     8,     3,     1,     0,     2,     2,     2,     0,
       0,     0,     6,     0,     4,     7,     0,     0,     0,     0,
      11,     0,     5,     0,     5,     0,     0,     0,     7,     0,
       4,     1,     0
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
#line 74 "./parser.y"
                           {printf("Parsed Line %d Succesfully\n\n", yylineno);}
#line 1385 "parser.tab.c"
    break;

  case 4: /* $@1: %empty  */
#line 79 "./parser.y"
            {scope_start();}
#line 1391 "parser.tab.c"
    break;

  case 5: /* BLOCK: '{' $@1 PROGRAM '}'  */
#line 79 "./parser.y"
                                         {scope_end(yylineno);}
#line 1397 "parser.tab.c"
    break;

  case 7: /* STATEMENT: ASSIGNMENT_STATEMENT  */
#line 85 "./parser.y"
                                   {printf("Parsed Assignment statement\n");}
#line 1403 "parser.tab.c"
    break;

  case 9: /* STATEMENT: PRINT_STATEMENT  */
#line 88 "./parser.y"
                                     {printf("Parsed print statement\n");}
#line 1409 "parser.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 90 "./parser.y"
          {quadPushEndLabel(++endLabelNum);}
#line 1415 "parser.tab.c"
    break;

  case 11: /* STATEMENT: $@2 IF_STATEMENT  */
#line 90 "./parser.y"
                                                        {quadPopEndLabel();printf("Parsed if statement\n");}
#line 1421 "parser.tab.c"
    break;

  case 12: /* $@3: %empty  */
#line 91 "./parser.y"
          {quadPushStartLabel(++startLabelNum, "While");}
#line 1427 "parser.tab.c"
    break;

  case 13: /* STATEMENT: $@3 WHILE_STATEMENT  */
#line 91 "./parser.y"
                                                                        {quadPopStartLabel();printf("Parsed While LOOP\n");}
#line 1433 "parser.tab.c"
    break;

  case 14: /* $@4: %empty  */
#line 92 "./parser.y"
          {quadPushStartLabel(++startLabelNum, "DoWhile");}
#line 1439 "parser.tab.c"
    break;

  case 15: /* STATEMENT: $@4 DO_WHILE_STATEMENT  */
#line 92 "./parser.y"
                                                                             {quadPopStartLabel();printf("Parsed Do While LOOP\n");}
#line 1445 "parser.tab.c"
    break;

  case 16: /* $@5: %empty  */
#line 93 "./parser.y"
          {quadPushEndLabel(++endLabelNum);}
#line 1451 "parser.tab.c"
    break;

  case 17: /* STATEMENT: $@5 SWITCH_STATEMENT  */
#line 93 "./parser.y"
                                                            {quadPopEndLabel();printf("Parsed Switch Statement\n");}
#line 1457 "parser.tab.c"
    break;

  case 18: /* STATEMENT: FOR_STATEMENT  */
#line 94 "./parser.y"
                       {quadPopStartLabel();printf("Parsed For LOOP\n");}
#line 1463 "parser.tab.c"
    break;

  case 19: /* STATEMENT: BREAK SEMICOLON  */
#line 96 "./parser.y"
                         {quadJumpEndLabel();}
#line 1469 "parser.tab.c"
    break;

  case 21: /* STATEMENT: RETURN_STATEMENT SEMICOLON  */
#line 99 "./parser.y"
                                    {quadReturn();}
#line 1475 "parser.tab.c"
    break;

  case 22: /* STATEMENT: BLOCK  */
#line 100 "./parser.y"
                                    {printf("Parsed Block\n");}
#line 1481 "parser.tab.c"
    break;

  case 23: /* STATEMENT: FUNC_DECLARATION_STATEMENT  */
#line 101 "./parser.y"
                                    {printf("Parsed Function Declaration\n");}
#line 1487 "parser.tab.c"
    break;

  case 24: /* $@6: %empty  */
#line 107 "./parser.y"
             {insertResult=-1;isPrint=1;}
#line 1493 "parser.tab.c"
    break;

  case 25: /* PRINT_STATEMENT: PRINT $@6 '(' EXPRESSION ')' SEMICOLON  */
#line 107 "./parser.y"
                                                                     {isPrint=0;}
#line 1499 "parser.tab.c"
    break;

  case 26: /* TYPE: INT  */
#line 111 "./parser.y"
                    { (yyval.string_value) = "int";   }
#line 1505 "parser.tab.c"
    break;

  case 27: /* TYPE: FLOAT  */
#line 112 "./parser.y"
                    { (yyval.string_value) = "float"; }
#line 1511 "parser.tab.c"
    break;

  case 28: /* TYPE: BOOL  */
#line 113 "./parser.y"
                    { (yyval.string_value) = "bool";  }
#line 1517 "parser.tab.c"
    break;

  case 29: /* TYPE: STRING  */
#line 114 "./parser.y"
                    { (yyval.string_value) = "string";}
#line 1523 "parser.tab.c"
    break;

  case 30: /* TYPE: CHAR  */
#line 115 "./parser.y"
                    { (yyval.string_value) = "char";}
#line 1529 "parser.tab.c"
    break;

  case 31: /* TYPE: VOID  */
#line 116 "./parser.y"
                    { (yyval.string_value) = "void";}
#line 1535 "parser.tab.c"
    break;

  case 32: /* EXPRESSION: IDENTIFIER  */
#line 121 "./parser.y"
                      {int i = lookup((yyvsp[0].string_value), 0, yylineno);check_type(i, yylineno);(yyval.nodePtr) = set_type(symbolTable[i].datatype);if(!isPrint)quadPushIdent((yyvsp[0].string_value));}
#line 1541 "parser.tab.c"
    break;

  case 33: /* EXPRESSION: CONSTANT  */
#line 122 "./parser.y"
                      {int i = lookup((yyvsp[0].string_value), 0, yylineno);check_type(i, yylineno);(yyval.nodePtr) = set_type(symbolTable[i].datatype);if(!isPrint)quadPushIdent((yyvsp[0].string_value));}
#line 1547 "parser.tab.c"
    break;

  case 34: /* EXPRESSION: INT_VALUE  */
#line 123 "./parser.y"
                      {(yyval.nodePtr) = set_type("int");assign_int(insertResult, (yyvsp[0].int_value), yylineno);}
#line 1553 "parser.tab.c"
    break;

  case 35: /* EXPRESSION: FLOAT_VALUE  */
#line 124 "./parser.y"
                      {(yyval.nodePtr) = set_type("float");assign_float(insertResult, (yyvsp[0].float_value), yylineno);}
#line 1559 "parser.tab.c"
    break;

  case 36: /* EXPRESSION: BOOL_VALUE  */
#line 125 "./parser.y"
                      {(yyval.nodePtr) = set_type("bool");assign_bool(insertResult, (yyvsp[0].bool_value), yylineno);}
#line 1565 "parser.tab.c"
    break;

  case 37: /* EXPRESSION: STRING_VALUE  */
#line 126 "./parser.y"
                      {(yyval.nodePtr) = set_type("string");assign_string(insertResult, (yyvsp[0].string_value), yylineno);}
#line 1571 "parser.tab.c"
    break;

  case 38: /* EXPRESSION: CHAR_VALUE  */
#line 127 "./parser.y"
                      {(yyval.nodePtr) = set_type("char");assign_char(insertResult, (yyvsp[0].string_value), yylineno);}
#line 1577 "parser.tab.c"
    break;

  case 39: /* EXPRESSION: '(' EXPRESSION ')'  */
#line 129 "./parser.y"
                              {(yyval.nodePtr) = (yyvsp[-1].nodePtr);}
#line 1583 "parser.tab.c"
    break;

  case 41: /* EXPRESSION: SUB EXPRESSION  */
#line 132 "./parser.y"
                                {(yyval.nodePtr) = arithmatic_operator_checker((yyvsp[0].nodePtr), NULL, yylineno);quadInstruction("NEG");}
#line 1589 "parser.tab.c"
    break;

  case 42: /* EXPRESSION: LOGICAL_NOT EXPRESSION  */
#line 133 "./parser.y"
                                {(yyval.nodePtr) = boolean_operator_checker((yyvsp[0].nodePtr), NULL, yylineno);quadInstruction("LOGICAL_NOT");}
#line 1595 "parser.tab.c"
    break;

  case 43: /* EXPRESSION: EXPRESSION ADD EXPRESSION  */
#line 135 "./parser.y"
                                   {(yyval.nodePtr) = arithmatic_operator_checker((yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), yylineno);quadInstruction("ADD");}
#line 1601 "parser.tab.c"
    break;

  case 44: /* EXPRESSION: EXPRESSION SUB EXPRESSION  */
#line 136 "./parser.y"
                                   {(yyval.nodePtr) = arithmatic_operator_checker((yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), yylineno);quadInstruction("SUB");}
#line 1607 "parser.tab.c"
    break;

  case 45: /* EXPRESSION: EXPRESSION MUL EXPRESSION  */
#line 137 "./parser.y"
                                   {(yyval.nodePtr) = arithmatic_operator_checker((yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), yylineno);quadInstruction("MUL");}
#line 1613 "parser.tab.c"
    break;

  case 46: /* EXPRESSION: EXPRESSION DIV EXPRESSION  */
#line 138 "./parser.y"
                                   {(yyval.nodePtr) = arithmatic_operator_checker((yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), yylineno);quadInstruction("DIV");}
#line 1619 "parser.tab.c"
    break;

  case 47: /* EXPRESSION: EXPRESSION POW EXPRESSION  */
#line 139 "./parser.y"
                                   {(yyval.nodePtr) = arithmatic_operator_checker((yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), yylineno);quadInstruction("POW");}
#line 1625 "parser.tab.c"
    break;

  case 48: /* EXPRESSION: EXPRESSION MOD EXPRESSION  */
#line 140 "./parser.y"
                                   {(yyval.nodePtr) = arithmatic_operator_checker((yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), yylineno);quadInstruction("MOD");}
#line 1631 "parser.tab.c"
    break;

  case 49: /* EXPRESSION: EXPRESSION BITWISE_OR EXPRESSION  */
#line 142 "./parser.y"
                                            {(yyval.nodePtr) = bitwise_operator_checker((yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), yylineno);quadInstruction("BITWISE_OR");}
#line 1637 "parser.tab.c"
    break;

  case 50: /* EXPRESSION: EXPRESSION BITWISE_AND EXPRESSION  */
#line 143 "./parser.y"
                                            {(yyval.nodePtr) = bitwise_operator_checker((yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), yylineno);quadInstruction("BITWISE_AND");}
#line 1643 "parser.tab.c"
    break;

  case 51: /* EXPRESSION: EXPRESSION SHL EXPRESSION  */
#line 144 "./parser.y"
                                            {(yyval.nodePtr) = bitwise_operator_checker((yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), yylineno);quadInstruction("SHL");}
#line 1649 "parser.tab.c"
    break;

  case 52: /* EXPRESSION: EXPRESSION SHR EXPRESSION  */
#line 145 "./parser.y"
                                            {(yyval.nodePtr) = bitwise_operator_checker((yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), yylineno);quadInstruction("SHR");}
#line 1655 "parser.tab.c"
    break;

  case 53: /* EXPRESSION: EXPRESSION LOGICAL_AND EXPRESSION  */
#line 147 "./parser.y"
                                           {(yyval.nodePtr) = boolean_operator_checker((yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), yylineno);quadInstruction("LOGICAL_AND");}
#line 1661 "parser.tab.c"
    break;

  case 54: /* EXPRESSION: EXPRESSION LOGICAL_OR EXPRESSION  */
#line 148 "./parser.y"
                                           {(yyval.nodePtr) = boolean_operator_checker((yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), yylineno);quadInstruction("LOGICAL_OR");}
#line 1667 "parser.tab.c"
    break;

  case 55: /* EXPRESSION: EXPRESSION EQUAL EXPRESSION  */
#line 150 "./parser.y"
                                         {(yyval.nodePtr) = boolean_operator_checker((yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), yylineno);quadInstruction("EQ");}
#line 1673 "parser.tab.c"
    break;

  case 56: /* EXPRESSION: EXPRESSION NOT_EQUAL EXPRESSION  */
#line 151 "./parser.y"
                                         {(yyval.nodePtr) = boolean_operator_checker((yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), yylineno);quadInstruction("NEQ");}
#line 1679 "parser.tab.c"
    break;

  case 57: /* EXPRESSION: EXPRESSION GT EXPRESSION  */
#line 153 "./parser.y"
                                      {(yyval.nodePtr) = boolean_operator_checker((yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), yylineno);quadInstruction("GT");}
#line 1685 "parser.tab.c"
    break;

  case 58: /* EXPRESSION: EXPRESSION GT EQ EXPRESSION  */
#line 154 "./parser.y"
                                      {(yyval.nodePtr) = boolean_operator_checker((yyvsp[-3].nodePtr), (yyvsp[0].nodePtr), yylineno);quadInstruction("GEQ");}
#line 1691 "parser.tab.c"
    break;

  case 59: /* EXPRESSION: EXPRESSION LT EXPRESSION  */
#line 155 "./parser.y"
                                      {(yyval.nodePtr) = boolean_operator_checker((yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), yylineno);quadInstruction("LT");}
#line 1697 "parser.tab.c"
    break;

  case 60: /* EXPRESSION: EXPRESSION LT EQ EXPRESSION  */
#line 156 "./parser.y"
                                      {(yyval.nodePtr) = boolean_operator_checker((yyvsp[-3].nodePtr), (yyvsp[0].nodePtr), yylineno);quadInstruction("LEQ");}
#line 1703 "parser.tab.c"
    break;

  case 61: /* $@7: %empty  */
#line 161 "./parser.y"
                         {insertResult = insert((yyvsp[-1].string_value), (yyvsp[0].string_value), "var", yylineno, false);}
#line 1709 "parser.tab.c"
    break;

  case 62: /* DECLARATION_STATEMENT: TYPE IDENTIFIER $@7 EQ EXPRESSION SEMICOLON  */
#line 161 "./parser.y"
                                                                                                          { insertResult = -1;quadPopIdent((yyvsp[-4].string_value));printf("Parsed Declaration\n");}
#line 1715 "parser.tab.c"
    break;

  case 63: /* $@8: %empty  */
#line 162 "./parser.y"
                         {insertResult = insert((yyvsp[-1].string_value), (yyvsp[0].string_value), "var", yylineno, false);}
#line 1721 "parser.tab.c"
    break;

  case 64: /* DECLARATION_STATEMENT: TYPE IDENTIFIER $@8 SEMICOLON  */
#line 162 "./parser.y"
                                                                                            { insertResult = -1;printf("Parsed Declaration\n");}
#line 1727 "parser.tab.c"
    break;

  case 65: /* $@9: %empty  */
#line 163 "./parser.y"
                         {insertResult = insert((yyvsp[-1].string_value), (yyvsp[0].string_value), "const", yylineno, false);}
#line 1733 "parser.tab.c"
    break;

  case 66: /* DECLARATION_STATEMENT: TYPE CONSTANT $@9 EQ EXPRESSION SEMICOLON  */
#line 163 "./parser.y"
                                                                                                           { insertResult = -1;quadPopIdent((yyvsp[-4].string_value));printf("Parsed Const Declaration\n");}
#line 1739 "parser.tab.c"
    break;

  case 67: /* $@10: %empty  */
#line 164 "./parser.y"
                         {insertResult = insert((yyvsp[-1].string_value), (yyvsp[0].string_value), "const", yylineno, false);}
#line 1745 "parser.tab.c"
    break;

  case 68: /* DECLARATION_STATEMENT: TYPE CONSTANT $@10 SEMICOLON  */
#line 164 "./parser.y"
                                                                                             { insertResult = -1;printf("Parsed Const Declaration\n");}
#line 1751 "parser.tab.c"
    break;

  case 70: /* $@11: %empty  */
#line 170 "./parser.y"
                 {insertResult = funcIndex;}
#line 1757 "parser.tab.c"
    break;

  case 71: /* RETURN_STATEMENT: RETURN $@11 EXPRESSION  */
#line 170 "./parser.y"
                                                        {returnExist = 1;}
#line 1763 "parser.tab.c"
    break;

  case 72: /* $@12: %empty  */
#line 175 "./parser.y"
                              {quadPushSwitchIdent((yyvsp[0].string_value));lookup((yyvsp[0].string_value), 0, yylineno);}
#line 1769 "parser.tab.c"
    break;

  case 73: /* SWITCH_STATEMENT: SWITCH '(' IDENTIFIER $@12 ')' '{' CASES '}'  */
#line 175 "./parser.y"
                                                                                                    {quadPopSwitchIdent();}
#line 1775 "parser.tab.c"
    break;

  case 75: /* $@13: %empty  */
#line 181 "./parser.y"
                        {quadPeakSwitchIdent();quadInstruction("EQ");quadJumpFalseLabel(++labelNum);}
#line 1781 "parser.tab.c"
    break;

  case 76: /* $@14: %empty  */
#line 181 "./parser.y"
                                                                                                               {quadPopLabel();}
#line 1787 "parser.tab.c"
    break;

  case 80: /* $@15: %empty  */
#line 189 "./parser.y"
                        {quadStartFunction((yyvsp[0].string_value));}
#line 1793 "parser.tab.c"
    break;

  case 81: /* $@16: %empty  */
#line 189 "./parser.y"
                                                             {funcIndex = insert((yyvsp[-5].string_value), (yyvsp[-4].string_value),"func", yylineno, 0);}
#line 1799 "parser.tab.c"
    break;

  case 82: /* FUNC_DECLARATION_STATEMENT: TYPE IDENTIFIER $@15 '(' ARGS ')' $@16 BLOCK  */
#line 189 "./parser.y"
                                                                                                                     {quadEndFunction((yyvsp[-6].string_value));}
#line 1805 "parser.tab.c"
    break;

  case 86: /* ARG_DECL: TYPE IDENTIFIER  */
#line 197 "./parser.y"
                        {quadPopIdent((yyvsp[0].string_value));insertResult = insert((yyvsp[-1].string_value), (yyvsp[0].string_value),"var", yylineno, true);}
#line 1811 "parser.tab.c"
    break;

  case 90: /* $@17: %empty  */
#line 207 "./parser.y"
                      {quadJumpFalseLabel(++labelNum);}
#line 1817 "parser.tab.c"
    break;

  case 91: /* $@18: %empty  */
#line 207 "./parser.y"
                                                              {quadJumpEndLabel();quadPopLabel();}
#line 1823 "parser.tab.c"
    break;

  case 93: /* $@19: %empty  */
#line 212 "./parser.y"
                         {quadJumpFalseLabel(++labelNum);}
#line 1829 "parser.tab.c"
    break;

  case 94: /* WHILE_STATEMENT: WHILE EXPRESSION $@19 BLOCK  */
#line 212 "./parser.y"
                                                                 {quadJumpStartLabel("While");quadPopLabel();}
#line 1835 "parser.tab.c"
    break;

  case 95: /* DO_WHILE_STATEMENT: DO BLOCK WHILE '(' EXPRESSION ')' SEMICOLON  */
#line 216 "./parser.y"
                                                    {quadJumpFalseLabel(++labelNum);quadJumpStartLabel("DoWhile");quadPopLabel();}
#line 1841 "parser.tab.c"
    break;

  case 96: /* $@20: %empty  */
#line 220 "./parser.y"
                {inLoop = 1;}
#line 1847 "parser.tab.c"
    break;

  case 97: /* $@21: %empty  */
#line 220 "./parser.y"
                                        {quadPushStartLabel(++startLabelNum, "For");}
#line 1853 "parser.tab.c"
    break;

  case 98: /* $@22: %empty  */
#line 220 "./parser.y"
                                                                                                {quadJumpFalseLabel(++labelNum);}
#line 1859 "parser.tab.c"
    break;

  case 99: /* $@23: %empty  */
#line 220 "./parser.y"
                                                                                                                                                {inLoop = 0;}
#line 1865 "parser.tab.c"
    break;

  case 100: /* FOR_STATEMENT: FOR '(' $@20 STATEMENT $@21 STATEMENT $@22 STATEMENT ')' $@23 BLOCK  */
#line 220 "./parser.y"
                                                                                                                                                                    {quadJumpStartLabel("For");quadPopLabel();}
#line 1871 "parser.tab.c"
    break;

  case 101: /* $@24: %empty  */
#line 225 "./parser.y"
                      {insertResult = lookup((yyvsp[-1].string_value), 1, yylineno);}
#line 1877 "parser.tab.c"
    break;

  case 102: /* ASSIGNMENT_STATEMENT: IDENTIFIER EQ $@24 EXPRESSION SEMICOLON  */
#line 225 "./parser.y"
                                                                                     {quadPopIdent((yyvsp[-4].string_value));}
#line 1883 "parser.tab.c"
    break;

  case 103: /* $@25: %empty  */
#line 226 "./parser.y"
                      {printf("Error at line: %d CONSTANTS must not be reassigned\n", yylineno);exit(1);insertResult = -1;}
#line 1889 "parser.tab.c"
    break;

  case 105: /* $@26: %empty  */
#line 231 "./parser.y"
                   {argCount=0;calledFuncIndex = lookup((yyvsp[0].string_value), 0, yylineno);check_type(calledFuncIndex, yylineno);}
#line 1895 "parser.tab.c"
    break;

  case 106: /* $@27: %empty  */
#line 231 "./parser.y"
                                                                                                                     {isParameter=1;}
#line 1901 "parser.tab.c"
    break;

  case 107: /* $@28: %empty  */
#line 231 "./parser.y"
                                                                                                                                                {isParameter=0;arg_count_check(calledFuncIndex, yylineno);}
#line 1907 "parser.tab.c"
    break;

  case 108: /* FUNC_CALL: IDENTIFIER $@26 '(' $@27 ARGUMENTS $@28 ')'  */
#line 231 "./parser.y"
                                                                                                                                                                                                                {quadCallFunction((yyvsp[-6].string_value));printf("Parsed Function Call\n");(yyval.nodePtr) = set_type(symbolTable[calledFuncIndex].datatype);}
#line 1913 "parser.tab.c"
    break;

  case 109: /* $@29: %empty  */
#line 234 "./parser.y"
                   { argCount++; }
#line 1919 "parser.tab.c"
    break;

  case 111: /* ARGUMENTS: EXPRESSION  */
#line 235 "./parser.y"
                     { argCount++; }
#line 1925 "parser.tab.c"
    break;


#line 1929 "parser.tab.c"

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

#line 238 "./parser.y"


void yyerror(char *s) { 
    printf("line %d: %s\n", yylineno, s); 
    fprintf(error_file, "line %d: %s\n", yylineno, s); 
} 
int yywrap()
{
    return 1;
}

int main(int argc, char *argv[])
{ 
    remove_file();
    setQuadFilePath("./output/quadruples.txt", createFile("./output/quadruples.txt"));
    error_file = fopen("./output/error_file.txt", "w");
    yyin = fopen(argv[1], "r");
    yyparse();
    // display_symbol_table();
    // display_unused_variables();
    display_unused_variables_to_file("./output/unused_variables.txt");
    display_symbol_table_to_file("./output/symbol_table.txt");
    
    return 0;
}
