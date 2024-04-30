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
  YYSYMBOL_CHAR_LITERAL = 45,              /* CHAR_LITERAL  */
  YYSYMBOL_DIGIT = 46,                     /* DIGIT  */
  YYSYMBOL_FLOAT_DIGIT = 47,               /* FLOAT_DIGIT  */
  YYSYMBOL_48_ = 48,                       /* '{'  */
  YYSYMBOL_49_ = 49,                       /* '}'  */
  YYSYMBOL_50_ = 50,                       /* '('  */
  YYSYMBOL_51_ = 51,                       /* ')'  */
  YYSYMBOL_52_ = 52,                       /* ','  */
  YYSYMBOL_53_ = 53,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 54,                  /* $accept  */
  YYSYMBOL_PROGRAM = 55,                   /* PROGRAM  */
  YYSYMBOL_BLOCK = 56,                     /* BLOCK  */
  YYSYMBOL_57_1 = 57,                      /* $@1  */
  YYSYMBOL_STATEMENT = 58,                 /* STATEMENT  */
  YYSYMBOL_PRINT_STATEMENT = 59,           /* PRINT_STATEMENT  */
  YYSYMBOL_TYPE = 60,                      /* TYPE  */
  YYSYMBOL_EXPRESSION = 61,                /* EXPRESSION  */
  YYSYMBOL_DECLARATION_STATEMENT = 62,     /* DECLARATION_STATEMENT  */
  YYSYMBOL_63_2 = 63,                      /* $@2  */
  YYSYMBOL_64_3 = 64,                      /* $@3  */
  YYSYMBOL_DECLARATION_TAIL = 65,          /* DECLARATION_TAIL  */
  YYSYMBOL_RETURN_STATEMENT = 66,          /* RETURN_STATEMENT  */
  YYSYMBOL_67_4 = 67,                      /* $@4  */
  YYSYMBOL_SWITCH_STATEMENT = 68,          /* SWITCH_STATEMENT  */
  YYSYMBOL_DEFAULTCASE = 69,               /* DEFAULTCASE  */
  YYSYMBOL_CASES = 70,                     /* CASES  */
  YYSYMBOL_FUNC_DECLARATION_STATEMENT = 71, /* FUNC_DECLARATION_STATEMENT  */
  YYSYMBOL_72_5 = 72,                      /* $@5  */
  YYSYMBOL_73_6 = 73,                      /* $@6  */
  YYSYMBOL_74_7 = 74,                      /* $@7  */
  YYSYMBOL_75_8 = 75,                      /* $@8  */
  YYSYMBOL_ARGS = 76,                      /* ARGS  */
  YYSYMBOL_ARG_DECL = 77,                  /* ARG_DECL  */
  YYSYMBOL_IF_STATEMENT = 78,              /* IF_STATEMENT  */
  YYSYMBOL_WHILE_STATEMENT = 79,           /* WHILE_STATEMENT  */
  YYSYMBOL_DO_WHILE_STATEMENT = 80,        /* DO_WHILE_STATEMENT  */
  YYSYMBOL_FOR_STATEMENT = 81,             /* FOR_STATEMENT  */
  YYSYMBOL_82_9 = 82,                      /* $@9  */
  YYSYMBOL_83_10 = 83,                     /* $@10  */
  YYSYMBOL_ASSIGNMENT_STATEMENT = 84,      /* ASSIGNMENT_STATEMENT  */
  YYSYMBOL_85_11 = 85,                     /* $@11  */
  YYSYMBOL_86_12 = 86,                     /* $@12  */
  YYSYMBOL_FUNC_CALL = 87,                 /* FUNC_CALL  */
  YYSYMBOL_88_13 = 88,                     /* $@13  */
  YYSYMBOL_ARGUMENTS = 89                  /* ARGUMENTS  */
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
#define YYLAST   657

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  99
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  188

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   302


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
      50,    51,     2,     2,    52,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    53,     2,
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
      45,    46,    47
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    65,    65,    66,    70,    70,    75,    76,    77,    78,
      80,    81,    82,    83,    84,    85,    86,    88,    89,    90,
      96,    97,   101,   102,   103,   104,   105,   110,   111,   112,
     113,   114,   115,   116,   118,   119,   121,   122,   124,   125,
     127,   128,   129,   130,   132,   133,   135,   136,   138,   139,
     140,   141,   142,   143,   144,   146,   147,   149,   150,   155,
     155,   156,   156,   159,   160,   164,   165,   165,   170,   173,
     176,   177,   178,   183,   183,   184,   184,   185,   185,   186,
     186,   189,   190,   193,   198,   199,   204,   208,   212,   212,
     212,   217,   217,   218,   218,   223,   223,   226,   227,   228
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
  "BOOL_LITERAL", "LOGIC_AND", "LOGIC_OR", "LOGIC_NOT", "NOT", "EQUALITY",
  "NEG_EQUALITY", "DEC", "INC", "GT", "LT", "SHR", "SHL", "EQ",
  "SEMICOLON", "MODULO", "PLUS", "SUB", "MUL", "DIV", "POW", "CONSTANT",
  "IDENTIFIER", "STRING_LITERAL", "CHAR_LITERAL", "DIGIT", "FLOAT_DIGIT",
  "'{'", "'}'", "'('", "')'", "','", "':'", "$accept", "PROGRAM", "BLOCK",
  "$@1", "STATEMENT", "PRINT_STATEMENT", "TYPE", "EXPRESSION",
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

#define YYPACT_NINF (-100)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-96)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -100,   166,  -100,  -100,  -100,  -100,  -100,  -100,   -45,   -26,
     -16,   -15,     0,     4,   457,     1,   457,     5,  -100,   457,
     457,   457,   457,   457,    20,   -23,  -100,  -100,  -100,  -100,
    -100,   457,  -100,  -100,  -100,   -12,   506,  -100,    27,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,   457,     2,   457,
      28,  -100,  -100,  -100,    32,   483,  -100,   483,    64,   602,
     602,    16,    16,    16,  -100,  -100,    37,  -100,   373,  -100,
      40,   457,   457,   457,   457,  -100,  -100,    97,   446,   457,
     457,  -100,   457,   457,   457,   457,   457,   457,  -100,   319,
      17,   586,    43,    71,   262,  -100,    42,   457,   457,   457,
     214,  -100,    -9,    38,    -9,   602,   602,   616,   616,   457,
     -18,   457,   -18,  -100,  -100,    16,    16,    16,   -18,   -18,
      16,    58,   457,  -100,    51,    44,    45,    18,     5,   262,
     457,   526,   546,   346,    48,  -100,   457,  -100,  -100,  -100,
      49,  -100,   -18,   -18,  -100,   399,     5,  -100,  -100,    73,
     457,    50,  -100,    52,  -100,   262,   425,  -100,  -100,   457,
    -100,   566,     5,  -100,    67,  -100,     5,  -100,   291,     5,
    -100,    53,    70,  -100,  -100,  -100,     5,  -100,  -100,     5,
    -100,  -100,  -100,  -100,    18,     5,  -100,  -100
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     1,    22,    23,    25,    24,    26,     0,     0,
      66,     0,     0,     0,     0,     0,     0,     0,    31,     0,
       0,     0,     0,     0,    28,    27,    32,    33,    29,    30,
       4,     0,    18,     2,     6,     0,     0,     7,     0,    14,
      19,    10,    11,    13,    12,     8,    57,     0,     0,     0,
       0,    15,    16,    28,    27,     0,    88,     0,     0,    36,
      37,    47,    46,    50,    93,    91,     0,     3,     0,    61,
      59,     0,     0,     0,     0,    45,    44,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,     0,    17,     0,
       0,    67,     0,    84,     0,    86,     0,     0,     0,    99,
       0,    58,     0,     0,     0,    34,    35,    38,    39,     0,
      42,     0,    40,    55,    56,    48,    49,    51,    52,    53,
      54,     0,     0,    79,     0,     0,    82,    72,     0,     0,
       0,     0,     0,    98,     0,     5,     0,    64,    62,    77,
       0,    60,    43,    41,    20,     0,     0,    83,    75,     0,
       0,     0,    71,     0,    85,     0,     0,    94,    92,    99,
      96,     0,     0,    73,     0,    80,     0,    81,     0,     0,
      68,     0,     0,    97,    63,    78,     0,    21,    76,     0,
      69,    89,    87,    74,    72,     0,    70,    90
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -100,    39,   -17,  -100,   -92,  -100,   -74,   -13,  -100,  -100,
    -100,     3,  -100,  -100,  -100,  -100,   -76,  -100,  -100,  -100,
    -100,  -100,   -99,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,   -49
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,    32,    67,    33,    34,    35,    36,    37,   104,
     102,   138,    38,    49,    39,   152,   153,    40,   176,   166,
     162,   146,   125,   126,    41,    42,    43,    44,    94,   185,
      45,    98,    97,    46,    66,   134
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      58,    55,   129,    57,   140,    47,    59,    60,    61,    62,
      63,    65,    77,    78,    79,    80,   124,    48,    68,   -65,
       3,     4,     5,     6,     7,   136,   137,   -95,    50,   124,
      69,    70,   150,   151,    89,    51,    91,   155,    93,    52,
      95,     3,     4,     5,     6,     7,    77,    78,    79,    80,
     167,    56,    90,    30,    64,    85,    86,    87,   105,   106,
     107,   108,    88,   171,   110,   112,   113,   114,   123,   115,
     116,   117,   118,   119,   120,   124,     3,     4,     5,     6,
       7,    92,   -95,    96,   131,   132,   133,    99,   128,   139,
     103,   127,   130,   144,   147,   148,   142,   149,   143,   160,
     163,   170,   177,   169,   181,   182,   100,   141,   186,   145,
     173,   154,     0,     0,     0,     0,     0,   156,    18,     0,
       0,    19,    20,   161,     0,    21,    22,     0,     0,   165,
       0,   109,     0,     0,     0,    23,     0,   168,     0,    53,
      54,    26,    27,    28,    29,   175,   133,    31,     0,   178,
       0,     0,   180,     0,     0,     0,     0,     0,     0,   183,
       0,     0,   184,     0,     0,     0,     2,     0,   187,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
       0,     0,    14,     0,    15,    16,    17,    18,     0,     0,
      19,    20,     0,     0,    21,    22,     0,     0,     0,     0,
       0,     0,     0,     0,    23,     0,     0,     0,    24,    25,
      26,    27,    28,    29,    30,     0,    31,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,     0,     0,
      14,     0,    15,    16,    17,    18,     0,     0,    19,    20,
       0,     0,    21,    22,     0,     0,     0,     0,     0,     0,
       0,     0,    23,     0,     0,     0,    24,    25,    26,    27,
      28,    29,    30,   135,    31,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,     0,     0,    14,     0,
      15,    16,    17,    18,     0,     0,    19,    20,     0,     0,
      21,    22,     0,     0,     0,     0,     0,     0,     0,     0,
      23,     0,     0,     0,    24,    25,    26,    27,    28,    29,
      30,     0,    31,    71,    72,     0,     0,    73,    74,    75,
      76,    77,    78,    79,    80,     0,     0,    82,    83,    84,
      85,    86,    87,     0,     0,     0,     0,     0,     0,     0,
       0,    71,    72,     0,   179,    73,    74,    75,    76,    77,
      78,    79,    80,     0,     0,    82,    83,    84,    85,    86,
      87,     0,     0,     0,     0,     0,     0,     0,    71,    72,
     121,   122,    73,    74,    75,    76,    77,    78,    79,    80,
       0,     0,    82,    83,    84,    85,    86,    87,     0,     0,
       0,     0,     0,     0,     0,    71,    72,     0,   159,    73,
      74,    75,    76,    77,    78,    79,    80,     0,     0,    82,
      83,    84,    85,    86,    87,     0,     0,     0,     0,     0,
       0,    71,    72,     0,   101,    73,    74,    75,    76,    77,
      78,    79,    80,     0,     0,    82,    83,    84,    85,    86,
      87,     0,     0,     0,     0,     0,     0,    71,    72,     0,
     164,    73,    74,    75,    76,    77,    78,    79,    80,     0,
       0,    82,    83,    84,    85,    86,    87,    18,     0,     0,
      19,    20,     0,     0,    21,    22,   172,     0,    18,     0,
     111,    19,    20,     0,    23,    21,    22,     0,    53,    54,
      26,    27,    28,    29,     0,    23,    31,     0,     0,    53,
      54,    26,    27,    28,    29,    71,    72,    31,     0,    73,
      74,    75,    76,    77,    78,    79,    80,     0,     0,    82,
      83,    84,    85,    86,    87,     0,     0,     0,    71,    72,
       0,    30,    73,    74,    75,    76,    77,    78,    79,    80,
       0,    81,    82,    83,    84,    85,    86,    87,    71,    72,
       0,     0,    73,    74,    75,    76,    77,    78,    79,    80,
       0,   157,    82,    83,    84,    85,    86,    87,    71,    72,
       0,     0,    73,    74,    75,    76,    77,    78,    79,    80,
       0,   158,    82,    83,    84,    85,    86,    87,    71,    72,
       0,     0,    73,    74,    75,    76,    77,    78,    79,    80,
       0,   174,    82,    83,    84,    85,    86,    87,    71,    72,
       0,     0,    73,    74,    75,    76,    77,    78,    79,    80,
       0,     0,    82,    83,    84,    85,    86,    87,    73,    74,
      75,    76,    77,    78,    79,    80,     0,     0,    82,    83,
      84,    85,    86,    87,    75,    76,    77,    78,    79,    80,
       0,     0,    82,    83,    84,    85,    86,    87
};

static const yytype_int16 yycheck[] =
{
      17,    14,    94,    16,   103,    50,    19,    20,    21,    22,
      23,    34,    30,    31,    32,    33,    90,    43,    31,    35,
       3,     4,     5,     6,     7,    34,    35,    50,    43,   103,
      42,    43,    14,    15,    47,    35,    49,   129,    55,    35,
      57,     3,     4,     5,     6,     7,    30,    31,    32,    33,
     149,    50,    50,    48,    34,    39,    40,    41,    71,    72,
      73,    74,    35,   155,    77,    78,    79,    80,    51,    82,
      83,    84,    85,    86,    87,   149,     3,     4,     5,     6,
       7,    53,    50,    19,    97,    98,    99,    50,    17,    51,
      50,    48,    50,    35,    43,    51,   109,    52,   111,    51,
      51,    49,    35,    53,    51,    35,    67,   104,   184,   122,
     159,   128,    -1,    -1,    -1,    -1,    -1,   130,    21,    -1,
      -1,    24,    25,   136,    -1,    28,    29,    -1,    -1,   146,
      -1,    34,    -1,    -1,    -1,    38,    -1,   150,    -1,    42,
      43,    44,    45,    46,    47,   162,   159,    50,    -1,   166,
      -1,    -1,   169,    -1,    -1,    -1,    -1,    -1,    -1,   176,
      -1,    -1,   179,    -1,    -1,    -1,     0,    -1,   185,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    -1,    16,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    -1,    -1,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    -1,    50,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    -1,
      16,    -1,    18,    19,    20,    21,    -1,    -1,    24,    25,
      -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    -1,    16,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    42,    43,    44,    45,    46,    47,
      48,    -1,    50,    22,    23,    -1,    -1,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    -1,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    -1,    53,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    -1,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      51,    52,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    -1,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    52,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    -1,    36,
      37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    -1,    51,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    -1,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      51,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
      -1,    36,    37,    38,    39,    40,    41,    21,    -1,    -1,
      24,    25,    -1,    -1,    28,    29,    51,    -1,    21,    -1,
      34,    24,    25,    -1,    38,    28,    29,    -1,    42,    43,
      44,    45,    46,    47,    -1,    38,    50,    -1,    -1,    42,
      43,    44,    45,    46,    47,    22,    23,    50,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    -1,    36,
      37,    38,    39,    40,    41,    -1,    -1,    -1,    22,    23,
      -1,    48,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    22,    23,
      -1,    -1,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    22,    23,
      -1,    -1,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    22,    23,
      -1,    -1,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    22,    23,
      -1,    -1,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    -1,    36,    37,    38,    39,    40,    41,    26,    27,
      28,    29,    30,    31,    32,    33,    -1,    -1,    36,    37,
      38,    39,    40,    41,    28,    29,    30,    31,    32,    33,
      -1,    -1,    36,    37,    38,    39,    40,    41
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    55,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    16,    18,    19,    20,    21,    24,
      25,    28,    29,    38,    42,    43,    44,    45,    46,    47,
      48,    50,    56,    58,    59,    60,    61,    62,    66,    68,
      71,    78,    79,    80,    81,    84,    87,    50,    43,    67,
      43,    35,    35,    42,    43,    61,    50,    61,    56,    61,
      61,    61,    61,    61,    34,    34,    88,    57,    61,    42,
      43,    22,    23,    26,    27,    28,    29,    30,    31,    32,
      33,    35,    36,    37,    38,    39,    40,    41,    35,    61,
      50,    61,    53,    56,    82,    56,    19,    86,    85,    50,
      55,    51,    64,    50,    63,    61,    61,    61,    61,    34,
      61,    34,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    51,    52,    51,    60,    76,    77,    48,    17,    58,
      50,    61,    61,    61,    89,    49,    34,    35,    65,    51,
      76,    65,    61,    61,    35,    61,    75,    43,    51,    52,
      14,    15,    69,    70,    56,    58,    61,    35,    35,    52,
      51,    61,    74,    51,    51,    56,    73,    76,    61,    53,
      49,    58,    51,    89,    35,    56,    72,    35,    56,    53,
      56,    51,    35,    56,    56,    83,    70,    56
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    55,    57,    56,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      59,    59,    60,    60,    60,    60,    60,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    63,
      62,    64,    62,    65,    65,    66,    67,    66,    68,    69,
      70,    70,    70,    72,    71,    73,    71,    74,    71,    75,
      71,    76,    76,    77,    78,    78,    79,    80,    82,    83,
      81,    85,    84,    86,    84,    88,    87,    89,    89,    89
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     0,     4,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     2,     2,     2,     1,     1,
       5,     7,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     2,     2,     3,     3,
       3,     4,     3,     4,     2,     2,     2,     2,     3,     3,
       2,     3,     3,     3,     3,     3,     3,     1,     3,     0,
       4,     0,     4,     3,     1,     1,     0,     3,     6,     3,
       5,     1,     0,     0,     7,     0,     7,     0,     6,     0,
       6,     3,     1,     2,     3,     5,     3,     7,     0,     0,
       9,     0,     5,     0,     5,     0,     5,     3,     1,     0
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
#line 1382 "parser.tab.c"
    break;

  case 4: /* $@1: %empty  */
#line 70 "./parser.y"
                    {scope_start();}
#line 1388 "parser.tab.c"
    break;

  case 5: /* BLOCK: '{' $@1 PROGRAM '}'  */
#line 70 "./parser.y"
                                                 {scope_end(number_of_line);}
#line 1394 "parser.tab.c"
    break;

  case 6: /* STATEMENT: PRINT_STATEMENT  */
#line 75 "./parser.y"
                                              {printf("Parsed print statement\n");}
#line 1400 "parser.tab.c"
    break;

  case 8: /* STATEMENT: ASSIGNMENT_STATEMENT  */
#line 77 "./parser.y"
                                               {printf("Parsed Assignment statement\n");}
#line 1406 "parser.tab.c"
    break;

  case 10: /* STATEMENT: IF_STATEMENT  */
#line 80 "./parser.y"
                                               {printf("Parsed if statement\n");}
#line 1412 "parser.tab.c"
    break;

  case 11: /* STATEMENT: WHILE_STATEMENT  */
#line 81 "./parser.y"
                                               {printf("Parsed While LOOP\n");}
#line 1418 "parser.tab.c"
    break;

  case 12: /* STATEMENT: FOR_STATEMENT  */
#line 82 "./parser.y"
                                               {printf("Parsed For LOOP\n");}
#line 1424 "parser.tab.c"
    break;

  case 13: /* STATEMENT: DO_WHILE_STATEMENT  */
#line 83 "./parser.y"
                                               {printf("Parsed Do While LOOP\n");}
#line 1430 "parser.tab.c"
    break;

  case 14: /* STATEMENT: SWITCH_STATEMENT  */
#line 84 "./parser.y"
                                               {printf("Parsed Switch Statement\n");}
#line 1436 "parser.tab.c"
    break;

  case 18: /* STATEMENT: BLOCK  */
#line 89 "./parser.y"
                                               {printf("Parsed Block\n");}
#line 1442 "parser.tab.c"
    break;

  case 19: /* STATEMENT: FUNC_DECLARATION_STATEMENT  */
#line 90 "./parser.y"
                                               {printf("Parsed Function Declaration\n");}
#line 1448 "parser.tab.c"
    break;

  case 22: /* TYPE: INT  */
#line 101 "./parser.y"
                            { (yyval.str) = "int";   }
#line 1454 "parser.tab.c"
    break;

  case 23: /* TYPE: FLOAT  */
#line 102 "./parser.y"
                            { (yyval.str) = "float"; }
#line 1460 "parser.tab.c"
    break;

  case 24: /* TYPE: BOOL  */
#line 103 "./parser.y"
                            { (yyval.str) = "bool";  }
#line 1466 "parser.tab.c"
    break;

  case 25: /* TYPE: STRING  */
#line 104 "./parser.y"
                            { (yyval.str) = "string";}
#line 1472 "parser.tab.c"
    break;

  case 26: /* TYPE: CHAR  */
#line 105 "./parser.y"
                            { (yyval.str) = "char";}
#line 1478 "parser.tab.c"
    break;

  case 27: /* EXPRESSION: IDENTIFIER  */
#line 110 "./parser.y"
                                {int i = lookup((yyvsp[0].str), 0, number_of_line);check_type(i, number_of_line);}
#line 1484 "parser.tab.c"
    break;

  case 28: /* EXPRESSION: CONSTANT  */
#line 111 "./parser.y"
                                {int i = lookup((yyvsp[0].str), 0, number_of_line);check_type(i, number_of_line);}
#line 1490 "parser.tab.c"
    break;

  case 29: /* EXPRESSION: DIGIT  */
#line 112 "./parser.y"
                                {assign_int(insertResult, (yyvsp[0].num), number_of_line);}
#line 1496 "parser.tab.c"
    break;

  case 30: /* EXPRESSION: FLOAT_DIGIT  */
#line 113 "./parser.y"
                                {assign_float(insertResult, (yyvsp[0].float_val), number_of_line);}
#line 1502 "parser.tab.c"
    break;

  case 31: /* EXPRESSION: BOOL_LITERAL  */
#line 114 "./parser.y"
                                {assign_bool(insertResult, (yyvsp[0].bool_val), number_of_line);}
#line 1508 "parser.tab.c"
    break;

  case 32: /* EXPRESSION: STRING_LITERAL  */
#line 115 "./parser.y"
                                {assign_string(insertResult, (yyvsp[0].str), number_of_line);}
#line 1514 "parser.tab.c"
    break;

  case 33: /* EXPRESSION: CHAR_LITERAL  */
#line 116 "./parser.y"
                                {assign_char(insertResult, (yyvsp[0].str), number_of_line);}
#line 1520 "parser.tab.c"
    break;

  case 59: /* $@2: %empty  */
#line 155 "./parser.y"
                                {insertResult = insert((yyvsp[-1].str), (yyvsp[0].str), "var", number_of_line, false);}
#line 1526 "parser.tab.c"
    break;

  case 60: /* DECLARATION_STATEMENT: TYPE IDENTIFIER $@2 DECLARATION_TAIL  */
#line 155 "./parser.y"
                                                                                                                 { insertResult = -1;printf("Parsed Declaration\n");}
#line 1532 "parser.tab.c"
    break;

  case 61: /* $@3: %empty  */
#line 156 "./parser.y"
                                {insertResult = insert((yyvsp[-1].str), (yyvsp[0].str), "const", number_of_line, false);}
#line 1538 "parser.tab.c"
    break;

  case 62: /* DECLARATION_STATEMENT: TYPE CONSTANT $@3 DECLARATION_TAIL  */
#line 156 "./parser.y"
                                                                                                                 { insertResult = -1;printf("Parsed Const Declaration\n"); }
#line 1544 "parser.tab.c"
    break;

  case 66: /* $@4: %empty  */
#line 165 "./parser.y"
                         {insertResult = funcIndex;}
#line 1550 "parser.tab.c"
    break;

  case 67: /* RETURN_STATEMENT: RETURN $@4 EXPRESSION  */
#line 165 "./parser.y"
                                                                {returnExist = 1;}
#line 1556 "parser.tab.c"
    break;

  case 73: /* $@5: %empty  */
#line 183 "./parser.y"
                                             {funcIndex = insert((yyvsp[-4].str), (yyvsp[-3].str),"func", number_of_line, 0);}
#line 1562 "parser.tab.c"
    break;

  case 75: /* $@6: %empty  */
#line 184 "./parser.y"
                                              {funcIndex = insert("void", (yyvsp[-3].str),"func", number_of_line, 0);}
#line 1568 "parser.tab.c"
    break;

  case 77: /* $@7: %empty  */
#line 185 "./parser.y"
                                          {funcIndex = insert((yyvsp[-3].str), (yyvsp[-2].str),"func", number_of_line, 0);}
#line 1574 "parser.tab.c"
    break;

  case 79: /* $@8: %empty  */
#line 186 "./parser.y"
                                          {funcIndex = insert("void", (yyvsp[-2].str),"func", number_of_line, 0);}
#line 1580 "parser.tab.c"
    break;

  case 83: /* ARG_DECL: TYPE IDENTIFIER  */
#line 193 "./parser.y"
                                {insertResult = insert((yyvsp[-1].str), (yyvsp[0].str),"var", number_of_line, true);}
#line 1586 "parser.tab.c"
    break;

  case 88: /* $@9: %empty  */
#line 212 "./parser.y"
                        {inLoop = 1;}
#line 1592 "parser.tab.c"
    break;

  case 89: /* $@10: %empty  */
#line 212 "./parser.y"
                                                                        {inLoop = 0;}
#line 1598 "parser.tab.c"
    break;

  case 91: /* $@11: %empty  */
#line 217 "./parser.y"
                              {insertResult = lookup((yyvsp[-1].str), 1, number_of_line);}
#line 1604 "parser.tab.c"
    break;

  case 93: /* $@12: %empty  */
#line 218 "./parser.y"
                              {printf("Error at line: %d CONSTANTS must not be reassigned\n", number_of_line);exit(1);insertResult = -1;}
#line 1610 "parser.tab.c"
    break;

  case 95: /* $@13: %empty  */
#line 223 "./parser.y"
                           {calledFuncIndex = lookup((yyvsp[0].str), 0, number_of_line);check_type(calledFuncIndex, number_of_line);}
#line 1616 "parser.tab.c"
    break;

  case 96: /* FUNC_CALL: IDENTIFIER $@13 '(' ARGUMENTS ')'  */
#line 223 "./parser.y"
                                                                                                                                             { printf("Parsed Function Call\n");}
#line 1622 "parser.tab.c"
    break;


#line 1626 "parser.tab.c"

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

#line 230 "./parser.y"


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
