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
  YYSYMBOL_CASE = 13,                      /* CASE  */
  YYSYMBOL_DEFAULT = 14,                   /* DEFAULT  */
  YYSYMBOL_IF = 15,                        /* IF  */
  YYSYMBOL_ELSE = 16,                      /* ELSE  */
  YYSYMBOL_FOR = 17,                       /* FOR  */
  YYSYMBOL_WHILE = 18,                     /* WHILE  */
  YYSYMBOL_DO = 19,                        /* DO  */
  YYSYMBOL_BOOL_VALUE = 20,                /* BOOL_VALUE  */
  YYSYMBOL_LOGICAL_AND = 21,               /* LOGICAL_AND  */
  YYSYMBOL_LOGICAL_OR = 22,                /* LOGICAL_OR  */
  YYSYMBOL_LOGICAL_NOT = 23,               /* LOGICAL_NOT  */
  YYSYMBOL_EQUAL = 24,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 25,                 /* NOT_EQUAL  */
  YYSYMBOL_GT = 26,                        /* GT  */
  YYSYMBOL_LT = 27,                        /* LT  */
  YYSYMBOL_EQ = 28,                        /* EQ  */
  YYSYMBOL_SEMICOLON = 29,                 /* SEMICOLON  */
  YYSYMBOL_MOD = 30,                       /* MOD  */
  YYSYMBOL_ADD = 31,                       /* ADD  */
  YYSYMBOL_SUB = 32,                       /* SUB  */
  YYSYMBOL_MUL = 33,                       /* MUL  */
  YYSYMBOL_DIV = 34,                       /* DIV  */
  YYSYMBOL_POW = 35,                       /* POW  */
  YYSYMBOL_BITWISE_OR = 36,                /* BITWISE_OR  */
  YYSYMBOL_BITWISE_AND = 37,               /* BITWISE_AND  */
  YYSYMBOL_SHL = 38,                       /* SHL  */
  YYSYMBOL_SHR = 39,                       /* SHR  */
  YYSYMBOL_CONSTANT = 40,                  /* CONSTANT  */
  YYSYMBOL_IDENTIFIER = 41,                /* IDENTIFIER  */
  YYSYMBOL_STRING_VALUE = 42,              /* STRING_VALUE  */
  YYSYMBOL_CHAR_VALUE = 43,                /* CHAR_VALUE  */
  YYSYMBOL_INT_VALUE = 44,                 /* INT_VALUE  */
  YYSYMBOL_FLOAT_VALUE = 45,               /* FLOAT_VALUE  */
  YYSYMBOL_46_ = 46,                       /* '('  */
  YYSYMBOL_47_ = 47,                       /* ')'  */
  YYSYMBOL_48_ = 48,                       /* '{'  */
  YYSYMBOL_49_ = 49,                       /* '}'  */
  YYSYMBOL_50_ = 50,                       /* ':'  */
  YYSYMBOL_51_ = 51,                       /* ','  */
  YYSYMBOL_YYACCEPT = 52,                  /* $accept  */
  YYSYMBOL_PROGRAM = 53,                   /* PROGRAM  */
  YYSYMBOL_BLOCK = 54,                     /* BLOCK  */
  YYSYMBOL_55_1 = 55,                      /* $@1  */
  YYSYMBOL_STATEMENT = 56,                 /* STATEMENT  */
  YYSYMBOL_57_2 = 57,                      /* $@2  */
  YYSYMBOL_58_3 = 58,                      /* $@3  */
  YYSYMBOL_59_4 = 59,                      /* $@4  */
  YYSYMBOL_60_5 = 60,                      /* $@5  */
  YYSYMBOL_PRINT_STATEMENT = 61,           /* PRINT_STATEMENT  */
  YYSYMBOL_62_6 = 62,                      /* $@6  */
  YYSYMBOL_TYPE = 63,                      /* TYPE  */
  YYSYMBOL_EXPRESSION = 64,                /* EXPRESSION  */
  YYSYMBOL_DECLARATION_STATEMENT = 65,     /* DECLARATION_STATEMENT  */
  YYSYMBOL_66_7 = 66,                      /* $@7  */
  YYSYMBOL_67_8 = 67,                      /* $@8  */
  YYSYMBOL_68_9 = 68,                      /* $@9  */
  YYSYMBOL_69_10 = 69,                     /* $@10  */
  YYSYMBOL_RETURN_STATEMENT = 70,          /* RETURN_STATEMENT  */
  YYSYMBOL_71_11 = 71,                     /* $@11  */
  YYSYMBOL_SWITCH_STATEMENT = 72,          /* SWITCH_STATEMENT  */
  YYSYMBOL_73_12 = 73,                     /* $@12  */
  YYSYMBOL_DEFAULTCASE = 74,               /* DEFAULTCASE  */
  YYSYMBOL_CASES = 75,                     /* CASES  */
  YYSYMBOL_76_13 = 76,                     /* $@13  */
  YYSYMBOL_77_14 = 77,                     /* $@14  */
  YYSYMBOL_FUNC_DECLARATION_STATEMENT = 78, /* FUNC_DECLARATION_STATEMENT  */
  YYSYMBOL_79_15 = 79,                     /* $@15  */
  YYSYMBOL_80_16 = 80,                     /* $@16  */
  YYSYMBOL_ARGS = 81,                      /* ARGS  */
  YYSYMBOL_ARG_DECL = 82,                  /* ARG_DECL  */
  YYSYMBOL_IF_TAIL = 83,                   /* IF_TAIL  */
  YYSYMBOL_IF_STATEMENT = 84,              /* IF_STATEMENT  */
  YYSYMBOL_85_17 = 85,                     /* $@17  */
  YYSYMBOL_86_18 = 86,                     /* $@18  */
  YYSYMBOL_WHILE_STATEMENT = 87,           /* WHILE_STATEMENT  */
  YYSYMBOL_88_19 = 88,                     /* $@19  */
  YYSYMBOL_DO_WHILE_STATEMENT = 89,        /* DO_WHILE_STATEMENT  */
  YYSYMBOL_FOR_STATEMENT = 90,             /* FOR_STATEMENT  */
  YYSYMBOL_91_20 = 91,                     /* $@20  */
  YYSYMBOL_92_21 = 92,                     /* $@21  */
  YYSYMBOL_93_22 = 93,                     /* $@22  */
  YYSYMBOL_94_23 = 94,                     /* $@23  */
  YYSYMBOL_ASSIGNMENT_STATEMENT = 95,      /* ASSIGNMENT_STATEMENT  */
  YYSYMBOL_96_24 = 96,                     /* $@24  */
  YYSYMBOL_97_25 = 97,                     /* $@25  */
  YYSYMBOL_FUNC_CALL = 98,                 /* FUNC_CALL  */
  YYSYMBOL_99_26 = 99,                     /* $@26  */
  YYSYMBOL_100_27 = 100,                   /* $@27  */
  YYSYMBOL_101_28 = 101,                   /* $@28  */
  YYSYMBOL_ARGUMENTS = 102,                /* ARGUMENTS  */
  YYSYMBOL_103_29 = 103                    /* $@29  */
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
#define YYLAST   507

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  190

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
      46,    47,     2,     2,    51,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    50,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,     2,    49,     2,     2,     2,     2,
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
       0,    74,    74,    75,    79,    79,    84,    85,    86,    88,
      90,    90,    91,    91,    92,    92,    93,    93,    94,    96,
      98,    99,   100,   106,   106,   110,   111,   112,   113,   114,
     115,   120,   121,   122,   123,   124,   125,   126,   128,   129,
     131,   132,   134,   135,   136,   137,   138,   139,   141,   142,
     143,   144,   146,   147,   149,   150,   152,   153,   154,   155,
     160,   160,   161,   161,   162,   162,   163,   163,   168,   169,
     169,   174,   174,   177,   180,   180,   180,   181,   182,   188,
     188,   188,   191,   192,   193,   196,   201,   202,   203,   206,
     206,   206,   211,   211,   215,   219,   219,   219,   219,   219,
     224,   224,   225,   225,   230,   230,   230,   230,   233,   233,
     234,   235
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
  "CASE", "DEFAULT", "IF", "ELSE", "FOR", "WHILE", "DO", "BOOL_VALUE",
  "LOGICAL_AND", "LOGICAL_OR", "LOGICAL_NOT", "EQUAL", "NOT_EQUAL", "GT",
  "LT", "EQ", "SEMICOLON", "MOD", "ADD", "SUB", "MUL", "DIV", "POW",
  "BITWISE_OR", "BITWISE_AND", "SHL", "SHR", "CONSTANT", "IDENTIFIER",
  "STRING_VALUE", "CHAR_VALUE", "INT_VALUE", "FLOAT_VALUE", "'('", "')'",
  "'{'", "'}'", "':'", "','", "$accept", "PROGRAM", "BLOCK", "$@1",
  "STATEMENT", "$@2", "$@3", "$@4", "$@5", "PRINT_STATEMENT", "$@6",
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

#define YYPACT_NINF (-126)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-111)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -126,   144,  -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,
      -4,    -2,   -10,  -126,   137,   137,     9,   -23,  -126,  -126,
    -126,  -126,   137,  -126,  -126,  -126,    24,    29,    46,    56,
    -126,   -29,   341,  -126,    39,  -126,  -126,  -126,  -126,    36,
     137,  -126,  -126,  -126,    37,  -126,    44,  -126,  -126,    38,
     265,  -126,   137,  -126,   137,  -126,    27,  -126,    40,  -126,
      59,   -22,   137,   137,   137,   137,    53,    97,  -126,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,  -126,
     137,   436,   237,   137,   137,  -126,  -126,   190,   436,   436,
      72,    50,    64,    71,    73,    74,    58,   452,   452,   -17,
     -17,   137,   185,   137,   185,    67,    44,    44,    67,    67,
      67,   468,   468,    11,    11,   284,  -126,   360,   379,   137,
    -126,    27,    27,    60,  -126,   137,  -126,   137,  -126,    25,
     436,   436,    78,   237,  -126,  -126,   303,  -126,  -126,  -126,
     137,    61,   398,   417,    68,    63,    70,  -126,  -126,    76,
      75,    98,   322,    80,  -126,  -126,  -126,  -126,    25,   237,
     137,  -126,   -13,  -126,    86,     6,    27,  -126,    77,  -126,
    -126,  -126,  -126,   137,    69,  -126,    82,  -126,  -126,   436,
      27,  -126,    27,    83,  -126,  -126,    27,  -126,     6,  -126
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,    10,     1,    25,    26,    28,    29,    27,    23,    30,
      69,     0,     0,    35,     0,     0,    32,    31,    36,    37,
      33,    34,     0,     4,    21,     2,     0,     0,     0,     0,
       9,     0,     0,     6,     0,    22,    18,     7,    39,     0,
       0,    19,    95,    32,    31,    41,    40,   102,   100,     0,
       0,     3,     0,    11,     0,    13,     0,    15,     0,    17,
      64,    60,     0,     0,     0,     0,     0,     0,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
       0,    70,    10,     0,     0,   105,    38,    10,    89,    92,
       0,     0,     0,     0,     0,     0,     0,    52,    53,    54,
      55,     0,    56,     0,    58,    47,    42,    43,    44,    45,
      46,    48,    49,    50,    51,     0,    96,     0,     0,   111,
       5,     0,     0,     0,    71,     0,    67,     0,    63,    84,
      57,    59,     0,    10,   103,   101,   108,   106,    90,    93,
       0,     0,     0,     0,     0,     0,    83,    24,    97,     0,
       0,    88,     0,     0,    65,    61,    85,    80,    84,    10,
     111,   107,     0,    91,     0,    78,     0,    82,     0,   109,
      86,    87,    94,     0,     0,    77,     0,    81,    98,    74,
       0,    72,     0,     0,    73,    99,     0,    75,    78,    76
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -126,    84,   -50,  -126,   -79,  -126,  -126,  -126,  -126,  -126,
    -126,  -125,   -14,  -126,  -126,  -126,  -126,  -126,  -126,  -126,
    -126,  -126,  -126,   -70,  -126,  -126,  -126,  -126,  -126,   -35,
    -126,  -126,   -28,  -126,  -126,  -126,  -126,  -126,  -126,  -126,
    -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,
     -15,  -126
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,    24,    51,    25,    26,    27,    28,    29,    30,
      39,    31,    32,    33,    94,    95,    92,    93,    34,    40,
      59,   141,   175,   176,   183,   188,    35,    96,   166,   145,
     146,   163,    53,   121,   151,    55,   122,    57,    36,    82,
     133,   159,   182,    37,    84,    83,    38,    49,   119,   150,
     137,   149
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      45,    46,    52,   116,   144,    48,    90,   -62,    50,    66,
      67,    60,    61,    69,    70,    71,    72,    73,    74,   173,
     174,    77,    78,  -104,   -79,   -68,    81,    41,     3,     4,
       5,     6,     7,   144,     9,    23,    42,    47,    88,    52,
      89,    69,    70,    71,    72,    73,    74,    54,    97,    98,
      99,   100,   102,   104,   148,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,    56,   115,    58,    79,   117,
     118,   138,   139,    13,    69,    23,    14,    72,    73,    74,
     168,   101,    80,  -104,    85,    15,    91,   130,   -66,   131,
     123,   124,   125,    43,    44,    18,    19,    20,    21,    22,
     126,   127,    74,   128,   129,   136,   140,   147,   153,   156,
     157,   142,   170,   143,   162,   172,   177,    13,   189,   180,
      14,   158,   161,   167,   178,   103,   152,   160,   165,    15,
     184,   181,   185,   186,   171,    87,   187,    43,    44,    18,
      19,    20,    21,    22,     2,   169,   136,     3,     4,     5,
       6,     7,     8,     9,    10,   -16,    11,    13,     0,   179,
      14,    12,   -12,   -14,    13,     0,     0,    14,     0,    15,
       0,     0,     0,     0,     0,     0,    15,    43,    44,    18,
      19,    20,    21,    22,    16,    17,    18,    19,    20,    21,
      22,     0,    23,     3,     4,     5,     6,     7,     8,     9,
      10,   -16,    11,     0,     0,     0,     0,    12,   -12,   -14,
      13,     0,     0,    14,     0,    69,    70,    71,    72,    73,
      74,     0,    15,    77,    78,     0,     0,     0,     0,     0,
      16,    17,    18,    19,    20,    21,    22,     0,    23,   120,
       3,     4,     5,     6,     7,     8,     9,    10,   -16,    11,
       0,     0,     0,     0,    12,   -12,   -14,    13,     0,     0,
      14,     0,     0,     0,     0,     0,     0,     0,     0,    15,
       0,     0,     0,     0,     0,     0,     0,    16,    17,    18,
      19,    20,    21,    22,     0,    23,    62,    63,     0,    64,
      65,    66,    67,     0,     0,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    62,    63,     0,    64,    65,
      66,    67,    86,     0,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    62,    63,     0,    64,    65,    66,
      67,   132,     0,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    62,    63,     0,    64,    65,    66,    67,
    -110,     0,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    62,    63,     0,    64,    65,    66,    67,   164,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    62,    63,     0,    64,    65,    66,    67,     0,   134,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      62,    63,     0,    64,    65,    66,    67,     0,   135,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    62,
      63,     0,    64,    65,    66,    67,     0,   154,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    62,    63,
       0,    64,    65,    66,    67,     0,   155,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    62,    63,     0,
      64,    65,    66,    67,     0,     0,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    64,    65,    66,    67,
       0,     0,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    64,    65,    66,    67,     0,     0,    69,    70,
      71,    72,    73,    74,     0,     0,    77,    78
};

static const yytype_int16 yycheck[] =
{
      14,    15,    15,    82,   129,    28,    56,    29,    22,    26,
      27,    40,    41,    30,    31,    32,    33,    34,    35,    13,
      14,    38,    39,    46,    46,    29,    40,    29,     3,     4,
       5,     6,     7,   158,     9,    48,    46,    28,    52,    15,
      54,    30,    31,    32,    33,    34,    35,    18,    62,    63,
      64,    65,    66,    67,   133,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    19,    80,    11,    29,    83,
      84,   121,   122,    20,    30,    48,    23,    33,    34,    35,
     159,    28,    46,    46,    46,    32,    46,   101,    29,   103,
      18,    41,    28,    40,    41,    42,    43,    44,    45,    46,
      29,    28,    35,    29,    46,   119,    46,    29,    47,    41,
      47,   125,   162,   127,    16,    29,   166,    20,   188,    50,
      23,    51,    47,   158,    47,    28,   140,    51,    48,    32,
     180,    49,   182,    50,   162,    51,   186,    40,    41,    42,
      43,    44,    45,    46,     0,   160,   160,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    20,    -1,   173,
      23,    17,    18,    19,    20,    -1,    -1,    23,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    40,    41,    42,
      43,    44,    45,    46,    40,    41,    42,    43,    44,    45,
      46,    -1,    48,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,    17,    18,    19,
      20,    -1,    -1,    23,    -1,    30,    31,    32,    33,    34,
      35,    -1,    32,    38,    39,    -1,    -1,    -1,    -1,    -1,
      40,    41,    42,    43,    44,    45,    46,    -1,    48,    49,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    45,    46,    -1,    48,    21,    22,    -1,    24,
      25,    26,    27,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    21,    22,    -1,    24,    25,
      26,    27,    47,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    21,    22,    -1,    24,    25,    26,
      27,    47,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    21,    22,    -1,    24,    25,    26,    27,
      47,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    21,    22,    -1,    24,    25,    26,    27,    47,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    21,    22,    -1,    24,    25,    26,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      21,    22,    -1,    24,    25,    26,    27,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    21,
      22,    -1,    24,    25,    26,    27,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    21,    22,
      -1,    24,    25,    26,    27,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    21,    22,    -1,
      24,    25,    26,    27,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    24,    25,    26,    27,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    24,    25,    26,    27,    -1,    -1,    30,    31,
      32,    33,    34,    35,    -1,    -1,    38,    39
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    53,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    12,    17,    20,    23,    32,    40,    41,    42,    43,
      44,    45,    46,    48,    54,    56,    57,    58,    59,    60,
      61,    63,    64,    65,    70,    78,    90,    95,    98,    62,
      71,    29,    46,    40,    41,    64,    64,    28,    28,    99,
      64,    55,    15,    84,    18,    87,    19,    89,    11,    72,
      40,    41,    21,    22,    24,    25,    26,    27,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    29,
      46,    64,    91,    97,    96,    46,    47,    53,    64,    64,
      54,    46,    68,    69,    66,    67,    79,    64,    64,    64,
      64,    28,    64,    28,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    56,    64,    64,   100,
      49,    85,    88,    18,    41,    28,    29,    28,    29,    46,
      64,    64,    47,    92,    29,    29,    64,   102,    54,    54,
      46,    73,    64,    64,    63,    81,    82,    29,    56,   103,
     101,    86,    64,    47,    29,    29,    41,    47,    51,    93,
      51,    47,    16,    83,    47,    48,    80,    81,    56,   102,
      54,    84,    29,    13,    14,    74,    75,    54,    47,    64,
      50,    49,    94,    76,    54,    54,    50,    54,    77,    75
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    52,    53,    53,    55,    54,    56,    56,    56,    56,
      57,    56,    58,    56,    59,    56,    60,    56,    56,    56,
      56,    56,    56,    62,    61,    63,    63,    63,    63,    63,
      63,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      66,    65,    67,    65,    68,    65,    69,    65,    70,    71,
      70,    73,    72,    74,    76,    77,    75,    75,    75,    79,
      80,    78,    81,    81,    81,    82,    83,    83,    83,    85,
      86,    84,    88,    87,    89,    91,    92,    93,    94,    90,
      96,    95,    97,    95,    99,   100,   101,    98,   103,   102,
     102,   102
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     0,     4,     1,     1,     2,     1,
       0,     2,     0,     2,     0,     2,     0,     2,     1,     2,
       2,     1,     1,     0,     6,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     4,     3,     4,
       0,     6,     0,     4,     0,     6,     0,     4,     1,     0,
       3,     0,     8,     3,     0,     0,     7,     1,     0,     0,
       0,     8,     3,     1,     0,     2,     2,     2,     0,     0,
       0,     6,     0,     4,     7,     0,     0,     0,     0,    11,
       0,     5,     0,     5,     0,     0,     0,     7,     0,     4,
       1,     0
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
#line 1379 "parser.tab.c"
    break;

  case 4: /* $@1: %empty  */
#line 79 "./parser.y"
            {enter_new_scope();}
#line 1385 "parser.tab.c"
    break;

  case 5: /* BLOCK: '{' $@1 PROGRAM '}'  */
#line 79 "./parser.y"
                                             {leave_scope(yylineno);}
#line 1391 "parser.tab.c"
    break;

  case 7: /* STATEMENT: ASSIGNMENT_STATEMENT  */
#line 85 "./parser.y"
                                   {printf("Parsed Assignment statement\n");}
#line 1397 "parser.tab.c"
    break;

  case 9: /* STATEMENT: PRINT_STATEMENT  */
#line 88 "./parser.y"
                                     {printf("Parsed print statement\n");}
#line 1403 "parser.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 90 "./parser.y"
          {quadPushEndLabel(++endLabelNum);}
#line 1409 "parser.tab.c"
    break;

  case 11: /* STATEMENT: $@2 IF_STATEMENT  */
#line 90 "./parser.y"
                                                        {quadPopEndLabel();printf("Parsed if statement\n");}
#line 1415 "parser.tab.c"
    break;

  case 12: /* $@3: %empty  */
#line 91 "./parser.y"
          {quadPushStartLabel(++startLabelNum, "While");}
#line 1421 "parser.tab.c"
    break;

  case 13: /* STATEMENT: $@3 WHILE_STATEMENT  */
#line 91 "./parser.y"
                                                                        {quadPopStartLabel();printf("Parsed While LOOP\n");}
#line 1427 "parser.tab.c"
    break;

  case 14: /* $@4: %empty  */
#line 92 "./parser.y"
          {quadPushStartLabel(++startLabelNum, "DoWhile");}
#line 1433 "parser.tab.c"
    break;

  case 15: /* STATEMENT: $@4 DO_WHILE_STATEMENT  */
#line 92 "./parser.y"
                                                                             {quadPopStartLabel();printf("Parsed Do While LOOP\n");}
#line 1439 "parser.tab.c"
    break;

  case 16: /* $@5: %empty  */
#line 93 "./parser.y"
          {quadPushEndLabel(++endLabelNum);}
#line 1445 "parser.tab.c"
    break;

  case 17: /* STATEMENT: $@5 SWITCH_STATEMENT  */
#line 93 "./parser.y"
                                                            {quadPopEndLabel();printf("Parsed Switch Statement\n");}
#line 1451 "parser.tab.c"
    break;

  case 18: /* STATEMENT: FOR_STATEMENT  */
#line 94 "./parser.y"
                       {quadPopStartLabel();printf("Parsed For LOOP\n");}
#line 1457 "parser.tab.c"
    break;

  case 19: /* STATEMENT: BREAK SEMICOLON  */
#line 96 "./parser.y"
                         {quadJumpEndLabel();}
#line 1463 "parser.tab.c"
    break;

  case 20: /* STATEMENT: RETURN_STATEMENT SEMICOLON  */
#line 98 "./parser.y"
                                    {quadReturn();}
#line 1469 "parser.tab.c"
    break;

  case 21: /* STATEMENT: BLOCK  */
#line 99 "./parser.y"
                                    {printf("Parsed Block\n");}
#line 1475 "parser.tab.c"
    break;

  case 22: /* STATEMENT: FUNC_DECLARATION_STATEMENT  */
#line 100 "./parser.y"
                                    {printf("Parsed Function Declaration\n");}
#line 1481 "parser.tab.c"
    break;

  case 23: /* $@6: %empty  */
#line 106 "./parser.y"
             {insertResult=-1;isPrint=1;}
#line 1487 "parser.tab.c"
    break;

  case 24: /* PRINT_STATEMENT: PRINT $@6 '(' EXPRESSION ')' SEMICOLON  */
#line 106 "./parser.y"
                                                                     {isPrint=0;}
#line 1493 "parser.tab.c"
    break;

  case 25: /* TYPE: INT  */
#line 110 "./parser.y"
                    { (yyval.string_value) = "int";   }
#line 1499 "parser.tab.c"
    break;

  case 26: /* TYPE: FLOAT  */
#line 111 "./parser.y"
                    { (yyval.string_value) = "float"; }
#line 1505 "parser.tab.c"
    break;

  case 27: /* TYPE: BOOL  */
#line 112 "./parser.y"
                    { (yyval.string_value) = "bool";  }
#line 1511 "parser.tab.c"
    break;

  case 28: /* TYPE: STRING  */
#line 113 "./parser.y"
                    { (yyval.string_value) = "string";}
#line 1517 "parser.tab.c"
    break;

  case 29: /* TYPE: CHAR  */
#line 114 "./parser.y"
                    { (yyval.string_value) = "char";}
#line 1523 "parser.tab.c"
    break;

  case 30: /* TYPE: VOID  */
#line 115 "./parser.y"
                    { (yyval.string_value) = "void";}
#line 1529 "parser.tab.c"
    break;

  case 31: /* EXPRESSION: IDENTIFIER  */
#line 120 "./parser.y"
                      {int i = lookup((yyvsp[0].string_value), 0, yylineno);check_type(i, yylineno);(yyval.nodePtr) = set_type(symbolTableArray[i].datatype);if(!isPrint)quadPushIdent((yyvsp[0].string_value));}
#line 1535 "parser.tab.c"
    break;

  case 32: /* EXPRESSION: CONSTANT  */
#line 121 "./parser.y"
                      {int i = lookup((yyvsp[0].string_value), 0, yylineno);check_type(i, yylineno);(yyval.nodePtr) = set_type(symbolTableArray[i].datatype);if(!isPrint)quadPushIdent((yyvsp[0].string_value));}
#line 1541 "parser.tab.c"
    break;

  case 33: /* EXPRESSION: INT_VALUE  */
#line 122 "./parser.y"
                      {(yyval.nodePtr) = set_type("int");check_int_value(insertResult, (yyvsp[0].int_value), yylineno);}
#line 1547 "parser.tab.c"
    break;

  case 34: /* EXPRESSION: FLOAT_VALUE  */
#line 123 "./parser.y"
                      {(yyval.nodePtr) = set_type("float");check_float_value(insertResult, (yyvsp[0].float_value), yylineno);}
#line 1553 "parser.tab.c"
    break;

  case 35: /* EXPRESSION: BOOL_VALUE  */
#line 124 "./parser.y"
                      {(yyval.nodePtr) = set_type("bool");check_bool_value(insertResult, (yyvsp[0].bool_value), yylineno);}
#line 1559 "parser.tab.c"
    break;

  case 36: /* EXPRESSION: STRING_VALUE  */
#line 125 "./parser.y"
                      {(yyval.nodePtr) = set_type("string");check_string_value(insertResult, (yyvsp[0].string_value), yylineno);}
#line 1565 "parser.tab.c"
    break;

  case 37: /* EXPRESSION: CHAR_VALUE  */
#line 126 "./parser.y"
                      {(yyval.nodePtr) = set_type("char");check_char_value(insertResult, (yyvsp[0].string_value), yylineno);}
#line 1571 "parser.tab.c"
    break;

  case 38: /* EXPRESSION: '(' EXPRESSION ')'  */
#line 128 "./parser.y"
                              {(yyval.nodePtr) = (yyvsp[-1].nodePtr);}
#line 1577 "parser.tab.c"
    break;

  case 40: /* EXPRESSION: SUB EXPRESSION  */
#line 131 "./parser.y"
                                {(yyval.nodePtr) = arithmatic_operator_checker((yyvsp[0].nodePtr), NULL, yylineno);quadInstruction("NEG");}
#line 1583 "parser.tab.c"
    break;

  case 41: /* EXPRESSION: LOGICAL_NOT EXPRESSION  */
#line 132 "./parser.y"
                                {(yyval.nodePtr) = boolean_operator_checker((yyvsp[0].nodePtr), NULL, yylineno);quadInstruction("LOGICAL_NOT");}
#line 1589 "parser.tab.c"
    break;

  case 42: /* EXPRESSION: EXPRESSION ADD EXPRESSION  */
#line 134 "./parser.y"
                                   {(yyval.nodePtr) = arithmatic_operator_checker((yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), yylineno);quadInstruction("ADD");}
#line 1595 "parser.tab.c"
    break;

  case 43: /* EXPRESSION: EXPRESSION SUB EXPRESSION  */
#line 135 "./parser.y"
                                   {(yyval.nodePtr) = arithmatic_operator_checker((yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), yylineno);quadInstruction("SUB");}
#line 1601 "parser.tab.c"
    break;

  case 44: /* EXPRESSION: EXPRESSION MUL EXPRESSION  */
#line 136 "./parser.y"
                                   {(yyval.nodePtr) = arithmatic_operator_checker((yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), yylineno);quadInstruction("MUL");}
#line 1607 "parser.tab.c"
    break;

  case 45: /* EXPRESSION: EXPRESSION DIV EXPRESSION  */
#line 137 "./parser.y"
                                   {(yyval.nodePtr) = arithmatic_operator_checker((yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), yylineno);quadInstruction("DIV");}
#line 1613 "parser.tab.c"
    break;

  case 46: /* EXPRESSION: EXPRESSION POW EXPRESSION  */
#line 138 "./parser.y"
                                   {(yyval.nodePtr) = arithmatic_operator_checker((yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), yylineno);quadInstruction("POW");}
#line 1619 "parser.tab.c"
    break;

  case 47: /* EXPRESSION: EXPRESSION MOD EXPRESSION  */
#line 139 "./parser.y"
                                   {(yyval.nodePtr) = arithmatic_operator_checker((yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), yylineno);quadInstruction("MOD");}
#line 1625 "parser.tab.c"
    break;

  case 48: /* EXPRESSION: EXPRESSION BITWISE_OR EXPRESSION  */
#line 141 "./parser.y"
                                            {(yyval.nodePtr) = bitwise_operator_checker((yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), yylineno);quadInstruction("BITWISE_OR");}
#line 1631 "parser.tab.c"
    break;

  case 49: /* EXPRESSION: EXPRESSION BITWISE_AND EXPRESSION  */
#line 142 "./parser.y"
                                            {(yyval.nodePtr) = bitwise_operator_checker((yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), yylineno);quadInstruction("BITWISE_AND");}
#line 1637 "parser.tab.c"
    break;

  case 50: /* EXPRESSION: EXPRESSION SHL EXPRESSION  */
#line 143 "./parser.y"
                                            {(yyval.nodePtr) = bitwise_operator_checker((yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), yylineno);quadInstruction("SHL");}
#line 1643 "parser.tab.c"
    break;

  case 51: /* EXPRESSION: EXPRESSION SHR EXPRESSION  */
#line 144 "./parser.y"
                                            {(yyval.nodePtr) = bitwise_operator_checker((yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), yylineno);quadInstruction("SHR");}
#line 1649 "parser.tab.c"
    break;

  case 52: /* EXPRESSION: EXPRESSION LOGICAL_AND EXPRESSION  */
#line 146 "./parser.y"
                                           {(yyval.nodePtr) = boolean_operator_checker((yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), yylineno);quadInstruction("LOGICAL_AND");}
#line 1655 "parser.tab.c"
    break;

  case 53: /* EXPRESSION: EXPRESSION LOGICAL_OR EXPRESSION  */
#line 147 "./parser.y"
                                           {(yyval.nodePtr) = boolean_operator_checker((yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), yylineno);quadInstruction("LOGICAL_OR");}
#line 1661 "parser.tab.c"
    break;

  case 54: /* EXPRESSION: EXPRESSION EQUAL EXPRESSION  */
#line 149 "./parser.y"
                                         {(yyval.nodePtr) = boolean_operator_checker((yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), yylineno);quadInstruction("EQ");}
#line 1667 "parser.tab.c"
    break;

  case 55: /* EXPRESSION: EXPRESSION NOT_EQUAL EXPRESSION  */
#line 150 "./parser.y"
                                         {(yyval.nodePtr) = boolean_operator_checker((yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), yylineno);quadInstruction("NEQ");}
#line 1673 "parser.tab.c"
    break;

  case 56: /* EXPRESSION: EXPRESSION GT EXPRESSION  */
#line 152 "./parser.y"
                                      {(yyval.nodePtr) = boolean_operator_checker((yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), yylineno);quadInstruction("GT");}
#line 1679 "parser.tab.c"
    break;

  case 57: /* EXPRESSION: EXPRESSION GT EQ EXPRESSION  */
#line 153 "./parser.y"
                                      {(yyval.nodePtr) = boolean_operator_checker((yyvsp[-3].nodePtr), (yyvsp[0].nodePtr), yylineno);quadInstruction("GEQ");}
#line 1685 "parser.tab.c"
    break;

  case 58: /* EXPRESSION: EXPRESSION LT EXPRESSION  */
#line 154 "./parser.y"
                                      {(yyval.nodePtr) = boolean_operator_checker((yyvsp[-2].nodePtr), (yyvsp[0].nodePtr), yylineno);quadInstruction("LT");}
#line 1691 "parser.tab.c"
    break;

  case 59: /* EXPRESSION: EXPRESSION LT EQ EXPRESSION  */
#line 155 "./parser.y"
                                      {(yyval.nodePtr) = boolean_operator_checker((yyvsp[-3].nodePtr), (yyvsp[0].nodePtr), yylineno);quadInstruction("LEQ");}
#line 1697 "parser.tab.c"
    break;

  case 60: /* $@7: %empty  */
#line 160 "./parser.y"
                         {insertResult = insert((yyvsp[-1].string_value), (yyvsp[0].string_value), "var", yylineno, false);}
#line 1703 "parser.tab.c"
    break;

  case 61: /* DECLARATION_STATEMENT: TYPE IDENTIFIER $@7 EQ EXPRESSION SEMICOLON  */
#line 160 "./parser.y"
                                                                                                          { insertResult = -1;quadPopIdent((yyvsp[-4].string_value));printf("Parsed Declaration\n");}
#line 1709 "parser.tab.c"
    break;

  case 62: /* $@8: %empty  */
#line 161 "./parser.y"
                         {insertResult = insert((yyvsp[-1].string_value), (yyvsp[0].string_value), "var", yylineno, false);}
#line 1715 "parser.tab.c"
    break;

  case 63: /* DECLARATION_STATEMENT: TYPE IDENTIFIER $@8 SEMICOLON  */
#line 161 "./parser.y"
                                                                                            { insertResult = -1;printf("Parsed Declaration\n");}
#line 1721 "parser.tab.c"
    break;

  case 64: /* $@9: %empty  */
#line 162 "./parser.y"
                         {insertResult = insert((yyvsp[-1].string_value), (yyvsp[0].string_value), "const", yylineno, false);}
#line 1727 "parser.tab.c"
    break;

  case 65: /* DECLARATION_STATEMENT: TYPE CONSTANT $@9 EQ EXPRESSION SEMICOLON  */
#line 162 "./parser.y"
                                                                                                           { insertResult = -1;quadPopIdent((yyvsp[-4].string_value));printf("Parsed Const Declaration\n");}
#line 1733 "parser.tab.c"
    break;

  case 66: /* $@10: %empty  */
#line 163 "./parser.y"
                         {insertResult = insert((yyvsp[-1].string_value), (yyvsp[0].string_value), "const", yylineno, false);}
#line 1739 "parser.tab.c"
    break;

  case 67: /* DECLARATION_STATEMENT: TYPE CONSTANT $@10 SEMICOLON  */
#line 163 "./parser.y"
                                                                                             { insertResult = -1;printf("Parsed Const Declaration\n");}
#line 1745 "parser.tab.c"
    break;

  case 69: /* $@11: %empty  */
#line 169 "./parser.y"
                 {insertResult = funcIndex;}
#line 1751 "parser.tab.c"
    break;

  case 70: /* RETURN_STATEMENT: RETURN $@11 EXPRESSION  */
#line 169 "./parser.y"
                                                        {returnExist = 1;}
#line 1757 "parser.tab.c"
    break;

  case 71: /* $@12: %empty  */
#line 174 "./parser.y"
                              {quadPushSwitchIdent((yyvsp[0].string_value));lookup((yyvsp[0].string_value), 0, yylineno);}
#line 1763 "parser.tab.c"
    break;

  case 72: /* SWITCH_STATEMENT: SWITCH '(' IDENTIFIER $@12 ')' '{' CASES '}'  */
#line 174 "./parser.y"
                                                                                                    {quadPopSwitchIdent();}
#line 1769 "parser.tab.c"
    break;

  case 74: /* $@13: %empty  */
#line 180 "./parser.y"
                        {quadPeakSwitchIdent();quadInstruction("EQ");quadJumpFalseLabel(++labelNum);}
#line 1775 "parser.tab.c"
    break;

  case 75: /* $@14: %empty  */
#line 180 "./parser.y"
                                                                                                               {quadPopLabel();}
#line 1781 "parser.tab.c"
    break;

  case 79: /* $@15: %empty  */
#line 188 "./parser.y"
                        {quadStartFunction((yyvsp[0].string_value));}
#line 1787 "parser.tab.c"
    break;

  case 80: /* $@16: %empty  */
#line 188 "./parser.y"
                                                             {funcIndex = insert((yyvsp[-5].string_value), (yyvsp[-4].string_value),"function", yylineno, 0);}
#line 1793 "parser.tab.c"
    break;

  case 81: /* FUNC_DECLARATION_STATEMENT: TYPE IDENTIFIER $@15 '(' ARGS ')' $@16 BLOCK  */
#line 188 "./parser.y"
                                                                                                                         {quadEndFunction((yyvsp[-6].string_value));}
#line 1799 "parser.tab.c"
    break;

  case 85: /* ARG_DECL: TYPE IDENTIFIER  */
#line 196 "./parser.y"
                        {quadPopIdent((yyvsp[0].string_value));insertResult = insert((yyvsp[-1].string_value), (yyvsp[0].string_value),"var", yylineno, true);}
#line 1805 "parser.tab.c"
    break;

  case 89: /* $@17: %empty  */
#line 206 "./parser.y"
                      {quadJumpFalseLabel(++labelNum);}
#line 1811 "parser.tab.c"
    break;

  case 90: /* $@18: %empty  */
#line 206 "./parser.y"
                                                              {quadJumpEndLabel();quadPopLabel();}
#line 1817 "parser.tab.c"
    break;

  case 92: /* $@19: %empty  */
#line 211 "./parser.y"
                         {quadJumpFalseLabel(++labelNum);}
#line 1823 "parser.tab.c"
    break;

  case 93: /* WHILE_STATEMENT: WHILE EXPRESSION $@19 BLOCK  */
#line 211 "./parser.y"
                                                                 {quadJumpStartLabel("While");quadPopLabel();}
#line 1829 "parser.tab.c"
    break;

  case 94: /* DO_WHILE_STATEMENT: DO BLOCK WHILE '(' EXPRESSION ')' SEMICOLON  */
#line 215 "./parser.y"
                                                    {quadJumpFalseLabel(++labelNum);quadJumpStartLabel("DoWhile");quadPopLabel();}
#line 1835 "parser.tab.c"
    break;

  case 95: /* $@20: %empty  */
#line 219 "./parser.y"
                {isLoop = 1;}
#line 1841 "parser.tab.c"
    break;

  case 96: /* $@21: %empty  */
#line 219 "./parser.y"
                                        {quadPushStartLabel(++startLabelNum, "For");}
#line 1847 "parser.tab.c"
    break;

  case 97: /* $@22: %empty  */
#line 219 "./parser.y"
                                                                                                {quadJumpFalseLabel(++labelNum);}
#line 1853 "parser.tab.c"
    break;

  case 98: /* $@23: %empty  */
#line 219 "./parser.y"
                                                                                                                                                {isLoop = 0;}
#line 1859 "parser.tab.c"
    break;

  case 99: /* FOR_STATEMENT: FOR '(' $@20 STATEMENT $@21 STATEMENT $@22 STATEMENT ')' $@23 BLOCK  */
#line 219 "./parser.y"
                                                                                                                                                                    {quadJumpStartLabel("For");quadPopLabel();}
#line 1865 "parser.tab.c"
    break;

  case 100: /* $@24: %empty  */
#line 224 "./parser.y"
                      {insertResult = lookup((yyvsp[-1].string_value), 1, yylineno);}
#line 1871 "parser.tab.c"
    break;

  case 101: /* ASSIGNMENT_STATEMENT: IDENTIFIER EQ $@24 EXPRESSION SEMICOLON  */
#line 224 "./parser.y"
                                                                                     {quadPopIdent((yyvsp[-4].string_value));}
#line 1877 "parser.tab.c"
    break;

  case 102: /* $@25: %empty  */
#line 225 "./parser.y"
                      {printf("Error at line: %d CONSTANTS must not be reassigned\n", yylineno);exit(EXIT_FAILURE);insertResult = -1;}
#line 1883 "parser.tab.c"
    break;

  case 104: /* $@26: %empty  */
#line 230 "./parser.y"
                   {funcArgCount=0;calledFuncIndex = lookup((yyvsp[0].string_value), 0, yylineno);check_type(calledFuncIndex, yylineno);}
#line 1889 "parser.tab.c"
    break;

  case 105: /* $@27: %empty  */
#line 230 "./parser.y"
                                                                                                                         {isParameter=1;}
#line 1895 "parser.tab.c"
    break;

  case 106: /* $@28: %empty  */
#line 230 "./parser.y"
                                                                                                                                                    {isParameter=0;arg_count_check(calledFuncIndex, yylineno);}
#line 1901 "parser.tab.c"
    break;

  case 107: /* FUNC_CALL: IDENTIFIER $@26 '(' $@27 ARGUMENTS $@28 ')'  */
#line 230 "./parser.y"
                                                                                                                                                                                                                    {quadCallFunction((yyvsp[-6].string_value));printf("Parsed Function Call\n");(yyval.nodePtr) = set_type(symbolTableArray[calledFuncIndex].datatype);}
#line 1907 "parser.tab.c"
    break;

  case 108: /* $@29: %empty  */
#line 233 "./parser.y"
                   { funcArgCount++; }
#line 1913 "parser.tab.c"
    break;

  case 110: /* ARGUMENTS: EXPRESSION  */
#line 234 "./parser.y"
                     { funcArgCount++; }
#line 1919 "parser.tab.c"
    break;


#line 1923 "parser.tab.c"

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

#line 237 "./parser.y"


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
