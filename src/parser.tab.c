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
  YYSYMBOL_PRINT_STATEMENT = 60,           /* PRINT_STATEMENT  */
  YYSYMBOL_TYPE = 61,                      /* TYPE  */
  YYSYMBOL_EXPRESSION = 62,                /* EXPRESSION  */
  YYSYMBOL_DECLARATION_STATEMENT = 63,     /* DECLARATION_STATEMENT  */
  YYSYMBOL_64_2 = 64,                      /* $@2  */
  YYSYMBOL_65_3 = 65,                      /* $@3  */
  YYSYMBOL_DECLARATION_TAIL = 66,          /* DECLARATION_TAIL  */
  YYSYMBOL_RETURN_STATEMENT = 67,          /* RETURN_STATEMENT  */
  YYSYMBOL_68_4 = 68,                      /* $@4  */
  YYSYMBOL_SWITCH_STATEMENT = 69,          /* SWITCH_STATEMENT  */
  YYSYMBOL_70_5 = 70,                      /* $@5  */
  YYSYMBOL_DEFAULTCASE = 71,               /* DEFAULTCASE  */
  YYSYMBOL_CASES = 72,                     /* CASES  */
  YYSYMBOL_FUNC_DECLARATION_STATEMENT = 73, /* FUNC_DECLARATION_STATEMENT  */
  YYSYMBOL_74_6 = 74,                      /* $@6  */
  YYSYMBOL_75_7 = 75,                      /* $@7  */
  YYSYMBOL_76_8 = 76,                      /* $@8  */
  YYSYMBOL_77_9 = 77,                      /* $@9  */
  YYSYMBOL_ARGS = 78,                      /* ARGS  */
  YYSYMBOL_ARG_DECL = 79,                  /* ARG_DECL  */
  YYSYMBOL_IF_STATEMENT = 80,              /* IF_STATEMENT  */
  YYSYMBOL_WHILE_STATEMENT = 81,           /* WHILE_STATEMENT  */
  YYSYMBOL_DO_WHILE_STATEMENT = 82,        /* DO_WHILE_STATEMENT  */
  YYSYMBOL_FOR_STATEMENT = 83,             /* FOR_STATEMENT  */
  YYSYMBOL_84_10 = 84,                     /* $@10  */
  YYSYMBOL_85_11 = 85,                     /* $@11  */
  YYSYMBOL_ASSIGNMENT_STATEMENT = 86,      /* ASSIGNMENT_STATEMENT  */
  YYSYMBOL_87_12 = 87,                     /* $@12  */
  YYSYMBOL_88_13 = 88,                     /* $@13  */
  YYSYMBOL_FUNC_CALL = 89,                 /* FUNC_CALL  */
  YYSYMBOL_90_14 = 90,                     /* $@14  */
  YYSYMBOL_91_15 = 91,                     /* $@15  */
  YYSYMBOL_92_16 = 92,                     /* $@16  */
  YYSYMBOL_ARGUMENTS = 93,                 /* ARGUMENTS  */
  YYSYMBOL_94_17 = 94                      /* $@17  */
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
#define YYLAST   683

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  104
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  195

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
       0,    68,    68,    69,    73,    73,    78,    79,    80,    81,
      83,    84,    85,    86,    87,    88,    89,    91,    92,    93,
      99,   100,   104,   105,   106,   107,   108,   113,   114,   115,
     116,   117,   118,   119,   121,   122,   124,   126,   127,   129,
     130,   131,   132,   134,   135,   136,   137,   138,   140,   141,
     142,   143,   144,   145,   147,   148,   149,   150,   152,   153,
     158,   158,   159,   159,   162,   163,   167,   168,   168,   173,
     173,   176,   179,   180,   181,   186,   186,   187,   187,   188,
     188,   189,   189,   192,   193,   196,   201,   202,   207,   211,
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
  "$accept", "PROGRAM", "BLOCK", "$@1", "STATEMENT", "PRINT_STATEMENT",
  "TYPE", "EXPRESSION", "DECLARATION_STATEMENT", "$@2", "$@3",
  "DECLARATION_TAIL", "RETURN_STATEMENT", "$@4", "SWITCH_STATEMENT", "$@5",
  "DEFAULTCASE", "CASES", "FUNC_DECLARATION_STATEMENT", "$@6", "$@7",
  "$@8", "$@9", "ARGS", "ARG_DECL", "IF_STATEMENT", "WHILE_STATEMENT",
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

#define YYTABLE_NINF (-104)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -99,   172,   -99,   -99,   -99,   -99,   -99,   -99,   -36,   -21,
       3,   -11,    14,    19,   481,     6,   481,     5,   -99,   481,
     481,   481,   481,    46,   -25,   -99,   -99,   -99,   -99,   481,
     -99,   -99,   -99,   -99,   -32,   509,   -99,    47,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   481,    29,   481,    36,
     -99,   -99,   -99,    33,   352,   -99,   352,    64,   611,   641,
     641,   641,   -99,   -99,    40,   379,   -99,   -99,    41,   481,
     481,   481,   481,   -99,   -99,    60,   105,   -99,   481,   481,
     481,   481,   481,   481,   481,   481,   481,   481,   -99,   323,
      15,   593,   -99,    75,   271,   -99,    44,   481,   481,   -99,
     -99,   221,    16,    26,    16,   611,   611,   627,   627,   481,
      20,   481,    20,   641,   641,   641,   -14,   -14,   641,    20,
      20,    20,    20,    62,   481,   -99,    52,    48,    49,    50,
       5,   271,   481,   530,   551,   481,   -99,   481,   -99,   -99,
     -99,    51,   -99,    20,    20,   -99,   405,     5,   -99,   -99,
      38,    59,   -99,   271,   431,   -99,   -99,   457,   -99,   572,
       5,   -99,    79,   -99,     5,   -99,    39,    65,    82,    63,
      67,   -99,   -99,     5,   -99,   -99,   481,    68,   -99,    66,
     -99,   -99,   481,   -99,   -99,   301,     5,   -99,     5,   -99,
       5,   -99,   -99,    39,   -99
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     1,    22,    23,    25,    24,    26,     0,     0,
      67,     0,     0,     0,     0,     0,     0,     0,    31,     0,
       0,     0,     0,    28,    27,    32,    33,    29,    30,     0,
       4,    18,     2,     6,     0,     0,     7,     0,    14,    19,
      10,    11,    13,    12,     8,    58,     0,     0,     0,     0,
      15,    16,    28,    27,     0,    90,     0,     0,    36,    44,
      43,    47,    95,    93,     0,     0,     3,    62,    60,     0,
       0,     0,     0,    46,    45,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    17,     0,
       0,    68,    69,    86,     0,    88,     0,     0,     0,    98,
      59,     0,     0,     0,     0,    34,    35,    37,    38,     0,
      41,     0,    39,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,     0,     0,    81,     0,     0,    84,     0,
       0,     0,     0,     0,     0,   104,     5,     0,    65,    63,
      79,     0,    61,    42,    40,    20,     0,     0,    85,    77,
       0,     0,    87,     0,     0,    96,    94,   101,    99,     0,
       0,    75,     0,    82,     0,    83,    74,     0,     0,     0,
       0,    64,    80,     0,    21,    78,     0,     0,    73,     0,
      91,    89,   104,   100,    76,     0,     0,    70,     0,   102,
       0,    71,    92,    74,    72
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -99,    53,   -17,   -99,   -91,   -99,   -89,   -12,   -99,   -99,
     -99,    17,   -99,   -99,   -99,   -99,   -99,   -69,   -99,   -99,
     -99,   -99,   -99,   -98,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -55,   -99
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,    31,    66,    32,    33,    34,    35,    36,   104,
     102,   139,    37,    48,    38,   129,   178,   179,    39,   173,
     164,   160,   147,   127,   128,    40,    41,    42,    43,    94,
     188,    44,    98,    97,    45,    64,   135,   170,   158,   169
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      57,   126,    54,   131,    56,   141,    63,    58,    59,    60,
      61,    67,    68,    46,   126,    75,    76,    65,     3,     4,
       5,     6,     7,    47,   -97,    84,    85,    86,    87,     3,
       4,     5,     6,     7,    89,   -66,    91,    93,    49,    95,
     153,     3,     4,     5,     6,     7,    50,   137,   138,    75,
      76,    51,   165,   176,   177,    55,    30,   105,   106,   107,
     108,   126,   167,   110,   112,   125,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   140,    62,    90,    88,
      92,    18,   -97,    96,    19,   133,   134,    20,    21,    99,
     103,   109,   130,   132,   145,    22,   148,   143,   149,   144,
     151,   161,   150,    52,    53,    25,    26,    27,    28,    29,
     166,   174,   146,   152,   181,   180,   182,   183,   187,   101,
     154,   142,   186,   157,   194,   159,    18,   189,     0,    19,
     163,     0,    20,    21,     0,     0,   111,     0,     0,     0,
      22,     0,     0,   172,     0,     0,     0,   175,    52,    53,
      25,    26,    27,    28,    29,     0,   184,     0,     0,     0,
       0,     0,     0,     0,   185,     0,     0,     0,     0,   191,
     157,   192,     2,   193,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,     0,     0,    14,     0,
      15,    16,    17,    18,     0,     0,    19,     0,     0,    20,
      21,     0,     0,     0,     0,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,    23,    24,    25,    26,    27,
      28,    29,     0,    30,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,     0,     0,    14,     0,    15,
      16,    17,    18,     0,     0,    19,     0,     0,    20,    21,
       0,     0,     0,     0,     0,     0,    22,     0,     0,     0,
       0,     0,     0,     0,    23,    24,    25,    26,    27,    28,
      29,     0,    30,   136,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,     0,     0,    14,     0,    15,
      16,    17,    18,     0,     0,    19,     0,     0,    20,    21,
       0,     0,     0,     0,     0,     0,    22,     0,     0,     0,
       0,     0,     0,     0,    23,    24,    25,    26,    27,    28,
      29,     0,    30,    69,    70,     0,    71,    72,    73,    74,
      75,    76,     0,     0,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,     0,    69,    70,     0,    71,    72,
      73,    74,    75,    76,     0,   190,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,     0,     0,     0,     0,
       0,     0,     0,   123,    69,    70,   124,    71,    72,    73,
      74,    75,    76,     0,     0,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,     0,     0,     0,     0,     0,
       0,    69,    70,    30,    71,    72,    73,    74,    75,    76,
       0,     0,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,     0,     0,     0,     0,     0,    69,    70,   100,
      71,    72,    73,    74,    75,    76,     0,     0,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,     0,     0,
       0,     0,     0,    69,    70,   162,    71,    72,    73,    74,
      75,    76,     0,     0,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,     0,     0,     0,     0,     0,    69,
      70,   168,    71,    72,    73,    74,    75,    76,     0,     0,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
       0,     0,    18,     0,     0,    19,     0,  -103,    20,    21,
       0,     0,     0,     0,     0,     0,    22,     0,     0,     0,
       0,     0,     0,     0,    52,    53,    25,    26,    27,    28,
      29,    69,    70,     0,    71,    72,    73,    74,    75,    76,
       0,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    69,    70,     0,    71,    72,    73,    74,    75,
      76,     0,   155,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    69,    70,     0,    71,    72,    73,    74,
      75,    76,     0,   156,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    69,    70,     0,    71,    72,    73,
      74,    75,    76,     0,   171,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    69,    70,     0,    71,    72,
      73,    74,    75,    76,     0,     0,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    71,    72,    73,    74,
      75,    76,     0,     0,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    73,    74,    75,    76,     0,     0,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      75,    76,     0,     0,     0,     0,     0,    81,    82,    83,
      84,    85,    86,    87
};

static const yytype_int16 yycheck[] =
{
      17,    90,    14,    94,    16,   103,    31,    19,    20,    21,
      22,    43,    44,    49,   103,    29,    30,    29,     3,     4,
       5,     6,     7,    44,    49,    39,    40,    41,    42,     3,
       4,     5,     6,     7,    46,    32,    48,    54,    49,    56,
     131,     3,     4,     5,     6,     7,    32,    31,    32,    29,
      30,    32,   150,    14,    15,    49,    51,    69,    70,    71,
      72,   150,   153,    75,    76,    50,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    50,    31,    49,    32,
      44,    21,    49,    19,    24,    97,    98,    27,    28,    49,
      49,    31,    17,    49,    32,    35,    44,   109,    50,   111,
      50,    50,    53,    43,    44,    45,    46,    47,    48,    49,
      51,    32,   124,   130,    32,    50,    53,    50,    52,    66,
     132,   104,    54,   135,   193,   137,    21,   182,    -1,    24,
     147,    -1,    27,    28,    -1,    -1,    31,    -1,    -1,    -1,
      35,    -1,    -1,   160,    -1,    -1,    -1,   164,    43,    44,
      45,    46,    47,    48,    49,    -1,   173,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,   186,
     182,   188,     0,   190,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    -1,    16,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    -1,    16,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    -1,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,    52,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    -1,    16,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    -1,    -1,    27,    28,
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
      -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    45,    46,    47,    48,
      49,    22,    23,    -1,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    22,    23,    -1,    25,    26,    27,    28,    29,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    22,    23,    -1,    25,    26,    27,    28,
      29,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    22,    23,    -1,    25,    26,    27,
      28,    29,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    22,    23,    -1,    25,    26,
      27,    28,    29,    30,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    25,    26,    27,    28,
      29,    30,    -1,    -1,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    27,    28,    29,    30,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      29,    30,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,
      39,    40,    41,    42
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    56,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    16,    18,    19,    20,    21,    24,
      27,    28,    35,    43,    44,    45,    46,    47,    48,    49,
      51,    57,    59,    60,    61,    62,    63,    67,    69,    73,
      80,    81,    82,    83,    86,    89,    49,    44,    68,    49,
      32,    32,    43,    44,    62,    49,    62,    57,    62,    62,
      62,    62,    31,    31,    90,    62,    58,    43,    44,    22,
      23,    25,    26,    27,    28,    29,    30,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    32,    62,
      49,    62,    44,    57,    84,    57,    19,    88,    87,    49,
      50,    56,    65,    49,    64,    62,    62,    62,    62,    31,
      62,    31,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    50,    53,    50,    61,    78,    79,    70,
      17,    59,    49,    62,    62,    91,    52,    31,    32,    66,
      50,    78,    66,    62,    62,    32,    62,    77,    44,    50,
      53,    50,    57,    59,    62,    32,    32,    62,    93,    62,
      76,    50,    50,    57,    75,    78,    51,    59,    50,    94,
      92,    32,    57,    74,    32,    57,    14,    15,    71,    72,
      50,    32,    53,    50,    57,    62,    54,    52,    85,    93,
      54,    57,    57,    57,    72
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    55,    56,    56,    58,    57,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      60,    60,    61,    61,    61,    61,    61,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      64,    63,    65,    63,    66,    66,    67,    68,    67,    70,
      69,    71,    72,    72,    72,    74,    73,    75,    73,    76,
      73,    77,    73,    78,    78,    79,    80,    80,    81,    82,
      84,    85,    83,    87,    86,    88,    86,    90,    91,    92,
      89,    94,    93,    93,    93
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     0,     4,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     2,     2,     2,     1,     1,
       5,     7,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     2,     3,     3,     3,
       4,     3,     4,     2,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     3,
       0,     4,     0,     4,     3,     1,     1,     0,     3,     0,
       8,     3,     5,     1,     0,     0,     7,     0,     7,     0,
       6,     0,     6,     3,     1,     2,     3,     5,     3,     7,
       0,     0,     9,     0,     5,     0,     5,     0,     0,     0,
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
#line 68 "./parser.y"
                                   {printf("Parsed Line %d Succesfully\n\n", number_of_line);}
#line 1401 "parser.tab.c"
    break;

  case 4: /* $@1: %empty  */
#line 73 "./parser.y"
                    {scope_start();}
#line 1407 "parser.tab.c"
    break;

  case 5: /* BLOCK: '{' $@1 PROGRAM '}'  */
#line 73 "./parser.y"
                                                 {scope_end(number_of_line);}
#line 1413 "parser.tab.c"
    break;

  case 6: /* STATEMENT: PRINT_STATEMENT  */
#line 78 "./parser.y"
                                              {printf("Parsed print statement\n");}
#line 1419 "parser.tab.c"
    break;

  case 8: /* STATEMENT: ASSIGNMENT_STATEMENT  */
#line 80 "./parser.y"
                                               {printf("Parsed Assignment statement\n");}
#line 1425 "parser.tab.c"
    break;

  case 10: /* STATEMENT: IF_STATEMENT  */
#line 83 "./parser.y"
                                               {printf("Parsed if statement\n");}
#line 1431 "parser.tab.c"
    break;

  case 11: /* STATEMENT: WHILE_STATEMENT  */
#line 84 "./parser.y"
                                               {printf("Parsed While LOOP\n");}
#line 1437 "parser.tab.c"
    break;

  case 12: /* STATEMENT: FOR_STATEMENT  */
#line 85 "./parser.y"
                                               {printf("Parsed For LOOP\n");}
#line 1443 "parser.tab.c"
    break;

  case 13: /* STATEMENT: DO_WHILE_STATEMENT  */
#line 86 "./parser.y"
                                               {printf("Parsed Do While LOOP\n");}
#line 1449 "parser.tab.c"
    break;

  case 14: /* STATEMENT: SWITCH_STATEMENT  */
#line 87 "./parser.y"
                                               {printf("Parsed Switch Statement\n");}
#line 1455 "parser.tab.c"
    break;

  case 18: /* STATEMENT: BLOCK  */
#line 92 "./parser.y"
                                               {printf("Parsed Block\n");}
#line 1461 "parser.tab.c"
    break;

  case 19: /* STATEMENT: FUNC_DECLARATION_STATEMENT  */
#line 93 "./parser.y"
                                               {printf("Parsed Function Declaration\n");}
#line 1467 "parser.tab.c"
    break;

  case 22: /* TYPE: INT  */
#line 104 "./parser.y"
                            { (yyval.str) = "int";   }
#line 1473 "parser.tab.c"
    break;

  case 23: /* TYPE: FLOAT  */
#line 105 "./parser.y"
                            { (yyval.str) = "float"; }
#line 1479 "parser.tab.c"
    break;

  case 24: /* TYPE: BOOL  */
#line 106 "./parser.y"
                            { (yyval.str) = "bool";  }
#line 1485 "parser.tab.c"
    break;

  case 25: /* TYPE: STRING  */
#line 107 "./parser.y"
                            { (yyval.str) = "string";}
#line 1491 "parser.tab.c"
    break;

  case 26: /* TYPE: CHAR  */
#line 108 "./parser.y"
                            { (yyval.str) = "char";}
#line 1497 "parser.tab.c"
    break;

  case 27: /* EXPRESSION: IDENTIFIER  */
#line 113 "./parser.y"
                                {int i = lookup((yyvsp[0].str), 0, number_of_line);char *type = symbolTable[i].datatype;(yyval.nPtr) = getType(type);check_type(i, number_of_line);}
#line 1503 "parser.tab.c"
    break;

  case 28: /* EXPRESSION: CONSTANT  */
#line 114 "./parser.y"
                                {int i = lookup((yyvsp[0].str), 0, number_of_line);char *type = symbolTable[i].datatype;(yyval.nPtr) = getType(type);check_type(i, number_of_line);}
#line 1509 "parser.tab.c"
    break;

  case 29: /* EXPRESSION: DIGIT  */
#line 115 "./parser.y"
                                {(yyval.nPtr) = con("int");assign_int(insertResult, (yyvsp[0].num), number_of_line);}
#line 1515 "parser.tab.c"
    break;

  case 30: /* EXPRESSION: FLOAT_DIGIT  */
#line 116 "./parser.y"
                                {(yyval.nPtr) = con("float");assign_float(insertResult, (yyvsp[0].float_val), number_of_line);}
#line 1521 "parser.tab.c"
    break;

  case 31: /* EXPRESSION: BOOL_LITERAL  */
#line 117 "./parser.y"
                                {(yyval.nPtr) = con("bool");assign_bool(insertResult, (yyvsp[0].bool_val), number_of_line);}
#line 1527 "parser.tab.c"
    break;

  case 32: /* EXPRESSION: STRING_LITERAL  */
#line 118 "./parser.y"
                                {(yyval.nPtr) = con("string");assign_string(insertResult, (yyvsp[0].str), number_of_line);}
#line 1533 "parser.tab.c"
    break;

  case 33: /* EXPRESSION: CHAR_LITERAL  */
#line 119 "./parser.y"
                                {(yyval.nPtr) = con("char");assign_char(insertResult, (yyvsp[0].str), number_of_line);}
#line 1539 "parser.tab.c"
    break;

  case 34: /* EXPRESSION: EXPRESSION LOGIC_AND EXPRESSION  */
#line 121 "./parser.y"
                                                 {(yyval.nPtr) = logical((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '&', number_of_line);}
#line 1545 "parser.tab.c"
    break;

  case 35: /* EXPRESSION: EXPRESSION LOGIC_OR EXPRESSION  */
#line 122 "./parser.y"
                                                 {(yyval.nPtr) = logical((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '|', number_of_line);}
#line 1551 "parser.tab.c"
    break;

  case 36: /* EXPRESSION: LOGIC_NOT EXPRESSION  */
#line 124 "./parser.y"
                                                 {(yyval.nPtr) = not_operator((yyvsp[0].nPtr), number_of_line);}
#line 1557 "parser.tab.c"
    break;

  case 37: /* EXPRESSION: EXPRESSION EQUALITY EXPRESSION  */
#line 126 "./parser.y"
                                                    {comparison((yyvsp[-2].nPtr), (yyvsp[0].nPtr), "==", number_of_line);}
#line 1563 "parser.tab.c"
    break;

  case 38: /* EXPRESSION: EXPRESSION NEG_EQUALITY EXPRESSION  */
#line 127 "./parser.y"
                                                    {comparison((yyvsp[-2].nPtr), (yyvsp[0].nPtr), "!=", number_of_line);}
#line 1569 "parser.tab.c"
    break;

  case 39: /* EXPRESSION: EXPRESSION LT EXPRESSION  */
#line 129 "./parser.y"
                                              {(yyval.nPtr) = comparison((yyvsp[-2].nPtr), (yyvsp[0].nPtr), "<", number_of_line);}
#line 1575 "parser.tab.c"
    break;

  case 40: /* EXPRESSION: EXPRESSION LT EQ EXPRESSION  */
#line 130 "./parser.y"
                                              {(yyval.nPtr) = comparison((yyvsp[-3].nPtr), (yyvsp[0].nPtr), "<=", number_of_line);}
#line 1581 "parser.tab.c"
    break;

  case 41: /* EXPRESSION: EXPRESSION GT EXPRESSION  */
#line 131 "./parser.y"
                                              {(yyval.nPtr) = comparison((yyvsp[-2].nPtr), (yyvsp[0].nPtr), ">", number_of_line);}
#line 1587 "parser.tab.c"
    break;

  case 42: /* EXPRESSION: EXPRESSION GT EQ EXPRESSION  */
#line 132 "./parser.y"
                                              {(yyval.nPtr) = comparison((yyvsp[-3].nPtr), (yyvsp[0].nPtr), ">=", number_of_line);}
#line 1593 "parser.tab.c"
    break;

  case 43: /* EXPRESSION: INC EXPRESSION  */
#line 134 "./parser.y"
                                  {(yyval.nPtr) = unary_operator((yyvsp[0].nPtr), "++", number_of_line);}
#line 1599 "parser.tab.c"
    break;

  case 44: /* EXPRESSION: DEC EXPRESSION  */
#line 135 "./parser.y"
                                  {(yyval.nPtr) = unary_operator((yyvsp[0].nPtr), "--", number_of_line);}
#line 1605 "parser.tab.c"
    break;

  case 45: /* EXPRESSION: EXPRESSION INC  */
#line 136 "./parser.y"
                                  {(yyval.nPtr) = unary_operator((yyvsp[-1].nPtr), "++", number_of_line);}
#line 1611 "parser.tab.c"
    break;

  case 46: /* EXPRESSION: EXPRESSION DEC  */
#line 137 "./parser.y"
                                  {(yyval.nPtr) = unary_operator((yyvsp[-1].nPtr), "--", number_of_line);}
#line 1617 "parser.tab.c"
    break;

  case 47: /* EXPRESSION: SUB EXPRESSION  */
#line 138 "./parser.y"
                                  {(yyval.nPtr) = unary_operator((yyvsp[0].nPtr), "-",  number_of_line);}
#line 1623 "parser.tab.c"
    break;

  case 48: /* EXPRESSION: EXPRESSION MODULO EXPRESSION  */
#line 140 "./parser.y"
                                              {(yyval.nPtr) = arithmatic((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '%', number_of_line);}
#line 1629 "parser.tab.c"
    break;

  case 49: /* EXPRESSION: EXPRESSION PLUS EXPRESSION  */
#line 141 "./parser.y"
                                              {(yyval.nPtr) = arithmatic((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '+', number_of_line);}
#line 1635 "parser.tab.c"
    break;

  case 50: /* EXPRESSION: EXPRESSION SUB EXPRESSION  */
#line 142 "./parser.y"
                                              {(yyval.nPtr) = arithmatic((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '+', number_of_line);}
#line 1641 "parser.tab.c"
    break;

  case 51: /* EXPRESSION: EXPRESSION MUL EXPRESSION  */
#line 143 "./parser.y"
                                              {(yyval.nPtr) = arithmatic((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '*', number_of_line);}
#line 1647 "parser.tab.c"
    break;

  case 52: /* EXPRESSION: EXPRESSION DIV EXPRESSION  */
#line 144 "./parser.y"
                                              {(yyval.nPtr) = arithmatic((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '/', number_of_line);}
#line 1653 "parser.tab.c"
    break;

  case 53: /* EXPRESSION: EXPRESSION POW EXPRESSION  */
#line 145 "./parser.y"
                                              {(yyval.nPtr) = arithmatic((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '^', number_of_line);}
#line 1659 "parser.tab.c"
    break;

  case 54: /* EXPRESSION: EXPRESSION BITWISE_OR EXPRESSION  */
#line 147 "./parser.y"
                                                    {(yyval.nPtr) = bitwise((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '|', number_of_line);}
#line 1665 "parser.tab.c"
    break;

  case 55: /* EXPRESSION: EXPRESSION BITWISE_AND EXPRESSION  */
#line 148 "./parser.y"
                                                    {(yyval.nPtr) = bitwise((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '&', number_of_line);}
#line 1671 "parser.tab.c"
    break;

  case 56: /* EXPRESSION: EXPRESSION SHL EXPRESSION  */
#line 149 "./parser.y"
                                                    {(yyval.nPtr) = bitwise((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '<', number_of_line);}
#line 1677 "parser.tab.c"
    break;

  case 57: /* EXPRESSION: EXPRESSION SHR EXPRESSION  */
#line 150 "./parser.y"
                                                    {(yyval.nPtr) = bitwise((yyvsp[-2].nPtr), (yyvsp[0].nPtr), '>', number_of_line);}
#line 1683 "parser.tab.c"
    break;

  case 60: /* $@2: %empty  */
#line 158 "./parser.y"
                                {insertResult = insert((yyvsp[-1].str), (yyvsp[0].str), "var", number_of_line, false);}
#line 1689 "parser.tab.c"
    break;

  case 61: /* DECLARATION_STATEMENT: TYPE IDENTIFIER $@2 DECLARATION_TAIL  */
#line 158 "./parser.y"
                                                                                                                 { insertResult = -1;printf("Parsed Declaration\n");}
#line 1695 "parser.tab.c"
    break;

  case 62: /* $@3: %empty  */
#line 159 "./parser.y"
                                {insertResult = insert((yyvsp[-1].str), (yyvsp[0].str), "const", number_of_line, false);}
#line 1701 "parser.tab.c"
    break;

  case 63: /* DECLARATION_STATEMENT: TYPE CONSTANT $@3 DECLARATION_TAIL  */
#line 159 "./parser.y"
                                                                                                                 { insertResult = -1;printf("Parsed Const Declaration\n"); }
#line 1707 "parser.tab.c"
    break;

  case 67: /* $@4: %empty  */
#line 168 "./parser.y"
                         {insertResult = funcIndex;}
#line 1713 "parser.tab.c"
    break;

  case 68: /* RETURN_STATEMENT: RETURN $@4 EXPRESSION  */
#line 168 "./parser.y"
                                                                {returnExist = 1;}
#line 1719 "parser.tab.c"
    break;

  case 69: /* $@5: %empty  */
#line 173 "./parser.y"
                                       {lookup((yyvsp[0].str), 0, number_of_line);}
#line 1725 "parser.tab.c"
    break;

  case 75: /* $@6: %empty  */
#line 186 "./parser.y"
                                             {funcIndex = insert((yyvsp[-4].str), (yyvsp[-3].str),"func", number_of_line, 0);}
#line 1731 "parser.tab.c"
    break;

  case 77: /* $@7: %empty  */
#line 187 "./parser.y"
                                              {funcIndex = insert("void", (yyvsp[-3].str),"func", number_of_line, 0);}
#line 1737 "parser.tab.c"
    break;

  case 79: /* $@8: %empty  */
#line 188 "./parser.y"
                                          {funcIndex = insert((yyvsp[-3].str), (yyvsp[-2].str),"func", number_of_line, 0);}
#line 1743 "parser.tab.c"
    break;

  case 81: /* $@9: %empty  */
#line 189 "./parser.y"
                                          {funcIndex = insert("void", (yyvsp[-2].str),"func", number_of_line, 0);}
#line 1749 "parser.tab.c"
    break;

  case 85: /* ARG_DECL: TYPE IDENTIFIER  */
#line 196 "./parser.y"
                                {insertResult = insert((yyvsp[-1].str), (yyvsp[0].str),"var", number_of_line, true);}
#line 1755 "parser.tab.c"
    break;

  case 90: /* $@10: %empty  */
#line 215 "./parser.y"
                        {inLoop = 1;}
#line 1761 "parser.tab.c"
    break;

  case 91: /* $@11: %empty  */
#line 215 "./parser.y"
                                                                        {inLoop = 0;}
#line 1767 "parser.tab.c"
    break;

  case 93: /* $@12: %empty  */
#line 220 "./parser.y"
                              {insertResult = lookup((yyvsp[-1].str), 1, number_of_line);}
#line 1773 "parser.tab.c"
    break;

  case 95: /* $@13: %empty  */
#line 221 "./parser.y"
                              {printf("Error at line: %d CONSTANTS must not be reassigned\n", number_of_line);exit(1);insertResult = -1;}
#line 1779 "parser.tab.c"
    break;

  case 97: /* $@14: %empty  */
#line 226 "./parser.y"
                           {calledFuncIndex = lookup((yyvsp[0].str), 0, number_of_line);check_type(calledFuncIndex, number_of_line);}
#line 1785 "parser.tab.c"
    break;

  case 98: /* $@15: %empty  */
#line 226 "./parser.y"
                                                                                                                              {isParameter=1;}
#line 1791 "parser.tab.c"
    break;

  case 99: /* $@16: %empty  */
#line 226 "./parser.y"
                                                                                                                                                         {isParameter=0;arg_count_check(calledFuncIndex, number_of_line);}
#line 1797 "parser.tab.c"
    break;

  case 100: /* FUNC_CALL: IDENTIFIER $@14 '(' $@15 ARGUMENTS $@16 ')'  */
#line 226 "./parser.y"
                                                                                                                                                                                                                               { printf("Parsed Function Call\n");}
#line 1803 "parser.tab.c"
    break;

  case 101: /* $@17: %empty  */
#line 229 "./parser.y"
                           { argCount++; }
#line 1809 "parser.tab.c"
    break;

  case 103: /* ARGUMENTS: EXPRESSION  */
#line 230 "./parser.y"
                             { argCount++; }
#line 1815 "parser.tab.c"
    break;


#line 1819 "parser.tab.c"

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
    yyin = fopen(argv[1], "r");
    yyparse();
    // display();
    // display_unused_variables();
    display_to_file("symbol_table.txt");

    return 0;
}
