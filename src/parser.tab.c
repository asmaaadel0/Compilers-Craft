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
  YYSYMBOL_45_ = 45,                       /* ':'  */
  YYSYMBOL_46_ = 46,                       /* '{'  */
  YYSYMBOL_47_ = 47,                       /* '('  */
  YYSYMBOL_48_ = 48,                       /* ','  */
  YYSYMBOL_49_ = 49,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 50,                  /* $accept  */
  YYSYMBOL_PROGRAM = 51,                   /* PROGRAM  */
  YYSYMBOL_STATEMENT = 52,                 /* STATEMENT  */
  YYSYMBOL_SEMICOLON_MISS = 53,            /* SEMICOLON_MISS  */
  YYSYMBOL_TYPE = 54,                      /* TYPE  */
  YYSYMBOL_DECLARATION_STATEMENT = 55,     /* DECLARATION_STATEMENT  */
  YYSYMBOL_DECLARATION_TAIL = 56,          /* DECLARATION_TAIL  */
  YYSYMBOL_57_1 = 57,                      /* $@1  */
  YYSYMBOL_58_2 = 58,                      /* $@2  */
  YYSYMBOL_59_3 = 59,                      /* $@3  */
  YYSYMBOL_RETURN_STATEMENT = 60,          /* RETURN_STATEMENT  */
  YYSYMBOL_helperSWITCH = 61,              /* helperSWITCH  */
  YYSYMBOL_SWITCH_STATEMENT = 62,          /* SWITCH_STATEMENT  */
  YYSYMBOL_DEFAULTCASE = 63,               /* DEFAULTCASE  */
  YYSYMBOL_CASES = 64,                     /* CASES  */
  YYSYMBOL_65_4 = 65,                      /* $@4  */
  YYSYMBOL_ERROR_SWITCH_STATEMENT = 66,    /* ERROR_SWITCH_STATEMENT  */
  YYSYMBOL_67_5 = 67,                      /* $@5  */
  YYSYMBOL_68_6 = 68,                      /* $@6  */
  YYSYMBOL_69_7 = 69,                      /* $@7  */
  YYSYMBOL_70_8 = 70,                      /* $@8  */
  YYSYMBOL_FUNC_DECLARATION_STATEMENT = 71, /* FUNC_DECLARATION_STATEMENT  */
  YYSYMBOL_ERROR_FUNC_DECLARATION_STATEMENT = 72, /* ERROR_FUNC_DECLARATION_STATEMENT  */
  YYSYMBOL_73_9 = 73,                      /* $@9  */
  YYSYMBOL_ARGS = 74,                      /* ARGS  */
  YYSYMBOL_ERROR_ARGS = 75,                /* ERROR_ARGS  */
  YYSYMBOL_ARG_DECL = 76,                  /* ARG_DECL  */
  YYSYMBOL_ENUM_DECLARATION_STATEMENT = 77, /* ENUM_DECLARATION_STATEMENT  */
  YYSYMBOL_ENUM_HELPER = 78,               /* ENUM_HELPER  */
  YYSYMBOL_ENUM_ARGS = 79,                 /* ENUM_ARGS  */
  YYSYMBOL_ENUM_DEFINED_ARGS = 80,         /* ENUM_DEFINED_ARGS  */
  YYSYMBOL_ERROR_ENUM_DECLARATION_STATEMENT = 81, /* ERROR_ENUM_DECLARATION_STATEMENT  */
  YYSYMBOL_ENUM_CALL_STATEMENT = 82,       /* ENUM_CALL_STATEMENT  */
  YYSYMBOL_IF_STATEMENT_HELPER = 83,       /* IF_STATEMENT_HELPER  */
  YYSYMBOL_IF_STATEMENT_HELPER1 = 84,      /* IF_STATEMENT_HELPER1  */
  YYSYMBOL_IF_STATEMENT = 85,              /* IF_STATEMENT  */
  YYSYMBOL_86_10 = 86,                     /* $@10  */
  YYSYMBOL_87_11 = 87,                     /* $@11  */
  YYSYMBOL_WHILE_STATEMENT = 88,           /* WHILE_STATEMENT  */
  YYSYMBOL_WHILEMISS_COLON = 89,           /* WHILEMISS_COLON  */
  YYSYMBOL_DO_WHILE_STATEMENT = 90,        /* DO_WHILE_STATEMENT  */
  YYSYMBOL_ERROR_DO_WHILE = 91,            /* ERROR_DO_WHILE  */
  YYSYMBOL_92_12 = 92,                     /* $@12  */
  YYSYMBOL_93_13 = 93,                     /* $@13  */
  YYSYMBOL_94_14 = 94,                     /* $@14  */
  YYSYMBOL_95_15 = 95,                     /* $@15  */
  YYSYMBOL_FOR_STATEMENT = 96,             /* FOR_STATEMENT  */
  YYSYMBOL_ERROR_FOR_LOOP = 97,            /* ERROR_FOR_LOOP  */
  YYSYMBOL_98_16 = 98,                     /* $@16  */
  YYSYMBOL_99_17 = 99,                     /* $@17  */
  YYSYMBOL_helperAssignmentRule = 100,     /* helperAssignmentRule  */
  YYSYMBOL_assignment_STATEMENT = 101,     /* assignment_STATEMENT  */
  YYSYMBOL_BLOCK = 102,                    /* BLOCK  */
  YYSYMBOL_FUNC_CALL = 103,                /* FUNC_CALL  */
  YYSYMBOL_USED_ARGS = 104,                /* USED_ARGS  */
  YYSYMBOL_EXPRESSION = 105,               /* EXPRESSION  */
  YYSYMBOL_ERROR_EXPRESSION = 106,         /* ERROR_EXPRESSION  */
  YYSYMBOL_COMPARISONSTT = 107,            /* COMPARISONSTT  */
  YYSYMBOL_ERROR_COMPARISONSTT = 108,      /* ERROR_COMPARISONSTT  */
  YYSYMBOL_RES_WORD = 109                  /* RES_WORD  */
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
#define YYLAST   1286

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  198
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  357

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
      47,    44,     2,     2,    48,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    45,    49,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    46,     2,    43,     2,     2,     2,     2,
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
       0,    99,    99,   100,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   124,   127,   128,   129,   130,   134,   135,   136,   137,
     138,   143,   144,   145,   146,   147,   147,   148,   148,   149,
     149,   154,   155,   158,   161,   162,   165,   166,   169,   170,
     170,   171,   172,   173,   177,   177,   178,   178,   179,   179,
     180,   180,   181,   187,   188,   189,   190,   191,   195,   195,
     199,   200,   201,   204,   207,   214,   215,   217,   217,   220,
     221,   227,   228,   229,   230,   231,   232,   236,   237,   239,
     240,   244,   245,   249,   252,   256,   257,   258,   259,   259,
     260,   260,   261,   267,   271,   272,   277,   278,   281,   281,
     282,   282,   283,   283,   284,   284,   285,   290,   291,   294,
     294,   295,   295,   301,   302,   306,   307,   308,   313,   319,
     320,   325,   326,   327,   328,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   347,   348,   350,
     351,   352,   353,   354,   358,   359,   360,   361,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404
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
  "FLOAT_DIGIT", "'}'", "')'", "':'", "'{'", "'('", "','", "';'",
  "$accept", "PROGRAM", "STATEMENT", "SEMICOLON_MISS", "TYPE",
  "DECLARATION_STATEMENT", "DECLARATION_TAIL", "$@1", "$@2", "$@3",
  "RETURN_STATEMENT", "helperSWITCH", "SWITCH_STATEMENT", "DEFAULTCASE",
  "CASES", "$@4", "ERROR_SWITCH_STATEMENT", "$@5", "$@6", "$@7", "$@8",
  "FUNC_DECLARATION_STATEMENT", "ERROR_FUNC_DECLARATION_STATEMENT", "$@9",
  "ARGS", "ERROR_ARGS", "ARG_DECL", "ENUM_DECLARATION_STATEMENT",
  "ENUM_HELPER", "ENUM_ARGS", "ENUM_DEFINED_ARGS",
  "ERROR_ENUM_DECLARATION_STATEMENT", "ENUM_CALL_STATEMENT",
  "IF_STATEMENT_HELPER", "IF_STATEMENT_HELPER1", "IF_STATEMENT", "$@10",
  "$@11", "WHILE_STATEMENT", "WHILEMISS_COLON", "DO_WHILE_STATEMENT",
  "ERROR_DO_WHILE", "$@12", "$@13", "$@14", "$@15", "FOR_STATEMENT",
  "ERROR_FOR_LOOP", "$@16", "$@17", "helperAssignmentRule",
  "assignment_STATEMENT", "BLOCK", "FUNC_CALL", "USED_ARGS", "EXPRESSION",
  "ERROR_EXPRESSION", "COMPARISONSTT", "ERROR_COMPARISONSTT", "RES_WORD", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-210)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-136)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -210,   247,  -210,   954,  -210,  -210,  -210,    47,  -210,   -31,
     459,    80,    -2,   482,    16,   648,    25,  -210,   660,   648,
      19,   437,  -210,  -210,  -210,  -210,   648,  -210,   -18,  -210,
      -2,    85,  -210,  -210,  -210,    -1,  -210,  -210,  -210,    55,
    -210,  -210,  -210,  -210,  -210,  -210,   494,  -210,  -210,  -210,
    1124,  -210,  -210,  -210,   648,   648,   648,   648,   517,   542,
    -210,   648,   648,   648,   648,    -2,    -2,  -210,  -210,    30,
      33,    58,  1209,  -210,   315,  1192,  -210,    11,  -210,  -210,
    -210,  1192,   410,   169,   893,    68,    17,    66,  1223,   121,
    -210,   565,  -210,    73,   577,   363,   978,   123,   113,  -210,
     648,    91,   125,    45,  -210,    31,   110,    -1,  -210,  1141,
     683,   695,   718,   730,  -210,  -210,   600,   625,  -210,  -210,
    -210,  -210,  -210,  -210,  -210,  1223,  1223,  1249,  1249,   648,
     140,   648,   140,   121,   140,   140,   121,  -210,  -210,    90,
      88,    67,    92,    98,  -210,  -210,    20,   107,    97,   116,
      37,    -1,   410,   410,   410,  -210,    -1,   141,   122,  -210,
      15,  -210,  1158,   138,  -210,   853,   139,   832,  -210,  -210,
     648,   753,  -210,  -210,    -2,    36,  -210,    62,   915,    -1,
    -210,  -210,   172,  -210,  -210,   147,  -210,    46,  -210,  -210,
    1237,  1223,  1237,  1223,   184,  1249,   184,  1249,    66,   765,
     140,    66,   788,   140,   140,   140,   148,    90,    81,   143,
     150,   151,  -210,    -1,    62,   157,   156,  -210,   153,   158,
     160,   168,  -210,  -210,  -210,   410,   410,   410,  -210,   155,
     188,   175,  -210,   648,   648,  -210,   192,   577,  -210,   577,
    1175,   276,   937,  -210,    -1,   180,   181,    -1,  -210,   648,
    -210,   183,  -210,    66,   140,    66,   140,  -210,   189,   179,
    -210,  -210,   186,  -210,   190,  -210,  -210,  -210,  -210,  -210,
    -210,    -1,    62,    85,   191,    85,    85,   195,   410,   196,
     648,   194,   648,   648,  1104,   999,  -210,  -210,  -210,  -210,
    -210,  -210,   193,   198,   833,  -210,    -1,  -210,    85,   870,
    -210,  -210,  -210,   204,  -210,  -210,   201,    85,   203,   206,
    -210,   216,    -1,  1020,   648,  1041,  1062,  -210,  -210,  -210,
    -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,
    -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,   231,
    -210,  -210,   220,  -210,  -210,    -1,  -210,  -210,  -210,  1083,
    -210,  -210,  -210,  -210,    -1,  -210,  -210
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,     0,    22,    23,    25,     0,    24,     0,
       0,     0,     0,     0,     0,     0,     0,   138,     0,     0,
     140,     0,   139,   136,   137,     3,     0,     2,     0,     4,
       0,    53,    13,    45,     5,     0,    14,    76,    15,    98,
       9,    10,    12,   107,    11,   118,     0,     6,    16,   151,
       0,   153,   150,   167,     0,     0,     0,     0,     0,     0,
      18,     0,     0,     0,     0,     0,     0,    19,    20,     0,
       0,     0,     0,   140,     0,    42,    54,     0,    21,    17,
     100,    93,     0,     0,   105,   108,     0,   176,   166,   141,
     124,     0,   123,     0,     0,     0,     0,     0,     0,     7,
       0,     0,    52,     0,    63,     0,    95,     0,   125,     0,
       0,     0,     0,     0,   143,   142,     0,     0,     8,   145,
     144,   146,   147,   148,   149,   177,   179,   172,   174,     0,
     168,     0,   170,   154,   155,   156,   157,    28,    29,     0,
       0,    80,     0,     0,    77,    78,     0,     0,     0,    56,
       0,     0,     0,     0,     0,   104,     0,     0,     0,   112,
       0,   130,     0,     0,    92,     0,     0,   133,   128,   152,
       0,     0,    32,    27,     0,     0,    26,     0,     0,     0,
      47,    51,     0,    62,    44,     0,    94,     0,    99,   126,
     178,   164,   180,   165,   173,   162,   175,   163,   169,     0,
     158,   171,     0,   159,   183,   181,     0,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    72,    71,     0,
       0,     0,    60,    43,   101,     0,     0,     0,   103,     0,
       0,     0,   110,     0,     0,   127,     0,     0,   129,     0,
       0,     0,    39,    30,     0,     0,     0,     0,    46,     0,
     102,     0,    96,   184,   161,   182,   160,    87,     0,     0,
      86,    85,    82,    84,    80,    79,    89,    75,    67,    73,
      74,     0,     0,    53,     0,    53,    53,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    91,   132,   131,    33,
      34,    31,     0,     0,     0,    66,     0,    69,    53,     0,
      97,    90,    83,     0,    65,    70,     0,    53,     0,     0,
     119,     0,     0,     0,     0,     0,     0,   116,   106,    36,
      38,   185,   186,   188,   196,   187,   189,   197,   198,   190,
     194,   191,   192,   195,   193,    40,    64,    48,    50,     0,
      81,    55,     0,    59,    61,     0,   121,   117,   109,     0,
     113,   111,    57,   120,     0,   115,   122
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -210,   243,   -79,   -29,  -144,  -210,   171,  -210,  -210,  -210,
    -210,  -210,  -210,   170,  -143,  -210,  -210,  -210,  -210,  -210,
    -210,  -210,  -210,  -210,  -170,  -210,  -210,  -210,  -129,    64,
     -32,  -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,
    -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,
    -210,  -210,   -16,  -210,  -209,    -4,  -210,  -210,  -210,  -210
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,    27,    79,    28,    29,   173,   292,   293,   294,
      30,    31,    32,   102,   103,   182,    33,   148,   220,   221,
     276,    34,    35,   177,   216,   217,   218,    36,   143,   144,
     145,    37,    38,    39,   106,    40,   107,   151,    41,   156,
      42,    43,   157,   283,   231,   158,    44,    45,   345,   354,
      46,    47,    48,    49,   166,    50,    51,    52,    53,   335
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      86,    99,   215,   152,   154,   245,    75,   246,    71,    81,
     206,    84,   149,   211,    88,    89,   232,    82,   159,   104,
      97,    98,    96,     4,     5,     6,    85,     8,   287,    78,
     288,   215,   185,   215,   140,   160,   137,   138,   222,     4,
       5,     6,   109,     8,   269,    25,   183,   251,    69,    90,
     125,   126,   127,   128,   130,   132,   150,   133,   134,   135,
     136,   233,   234,    83,   213,     4,     5,     6,   214,     8,
     215,    25,   141,   225,   226,   227,   139,    25,   258,   142,
     244,    76,   259,   223,   214,   180,    70,   162,   184,   186,
     167,   188,    25,   210,    58,    59,   178,   208,   100,   101,
     105,   260,   305,   163,   164,   146,   191,   193,   195,   197,
     214,  -114,   200,   203,   170,   209,   -68,   -68,   -68,    77,
     -68,   261,   262,   263,   170,   204,   187,   205,   215,   141,
     306,   141,   308,   309,   207,   224,   179,    25,   -49,   101,
     228,   212,   219,   171,   172,   243,   277,   278,   279,   116,
     117,   161,   174,   171,   172,   337,   122,   123,   124,   229,
     175,   -68,   -58,   248,   342,   230,   240,   242,   116,   117,
       3,   252,     4,     5,     6,     7,     8,   236,     9,    10,
      11,    12,   264,   238,    13,   249,    14,    15,    16,    17,
     250,   257,    18,   266,   267,   254,   270,   268,   256,   311,
     271,   272,   280,    19,   273,   274,   281,    20,    21,    22,
      23,    24,    58,    59,   275,    25,    26,    61,   153,    62,
      63,    64,   282,   286,   296,   297,   300,   302,   295,   284,
     285,   298,   301,   167,   303,   167,   319,   307,   209,   310,
     312,   314,   320,   339,   341,   299,   343,     2,     3,   344,
       4,     5,     6,     7,     8,   304,     9,    10,    11,    12,
     346,   208,    13,   352,    14,    15,    16,    17,    95,   176,
      18,   340,   181,   265,     0,     0,   313,     0,   315,   316,
     336,    19,     0,   338,     0,    20,    21,    22,    23,    24,
       0,     0,     0,    25,    26,     0,   347,    54,    55,     0,
      56,    57,     0,     0,    58,    59,     0,   290,     0,    61,
     349,    62,    63,    64,     0,     0,   147,     0,  -135,  -135,
    -135,  -135,  -135,     0,  -135,     0,  -135,     0,  -135,   353,
    -135,  -135,  -135,  -135,  -135,     0,  -135,  -135,   356,  -135,
    -135,  -135,  -135,  -135,  -135,     0,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,  -135,     0,     0,     0,     0,  -135,  -135,
    -135,  -135,    94,  -135,     3,     0,     4,     5,     6,     7,
       8,     0,     9,    10,    11,    12,     0,     0,    13,     0,
      14,    15,    16,    17,     0,     0,    18,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    19,     0,     0,
       0,    20,    21,    22,    23,    24,   168,     0,     0,    25,
      26,     3,     0,     4,     5,     6,     7,     8,     0,     9,
      10,    11,    12,     0,     0,    13,     0,    14,    15,    16,
      17,     0,     0,    18,     0,     0,     0,     0,    91,     0,
       0,     0,     0,     0,    19,     0,     0,     0,    20,    21,
      22,    23,    24,     0,     0,     0,    25,    26,  -135,  -135,
      72,  -135,  -135,  -135,  -135,  -135,  -135,    92,  -135,  -135,
    -135,  -135,  -135,  -135,  -135,     0,    93,     0,     0,    17,
       0,     0,    18,    72,    94,     0,     0,     0,     0,     0,
     -41,     0,     0,    19,     0,    72,     0,    73,    74,    22,
      23,    24,    17,     0,     0,    18,    26,     0,     0,     0,
       0,     0,     0,     0,    17,     0,    19,    18,    72,     0,
      73,    74,    22,    23,    24,   108,     0,    80,    19,    26,
       0,     0,    73,    74,    22,    23,    24,    17,     0,     0,
      18,    26,     0,    72,     0,     0,     0,   129,     0,     0,
       0,    19,     0,     0,     0,    73,    74,    22,    23,    24,
       0,     0,    17,     0,    26,    18,    72,     0,     0,     0,
       0,     0,   131,     0,     0,     0,    19,     0,   165,     0,
      73,    74,    22,    23,    24,    17,     0,     0,    18,    26,
       0,     0,     0,     0,     0,     0,     0,    17,     0,    19,
      18,   198,     0,    73,    74,    22,    23,    24,     0,   161,
       0,    19,    26,     0,     0,    73,    74,    22,    23,    24,
      17,  -134,     0,    18,    26,     0,   201,     0,     0,     0,
     199,     0,     0,     0,    19,     0,     0,     0,    73,    74,
      22,    23,    24,     0,     0,    17,     0,    26,    18,    72,
       0,     0,     0,     0,     0,   202,     0,     0,     0,    19,
       0,    87,     0,    73,    74,    22,    23,    24,    17,     0,
       0,    18,    26,     0,     0,     0,     0,     0,     0,     0,
      17,     0,    19,    18,   190,     0,    73,    74,    22,    23,
      24,     0,     0,     0,    19,    26,   192,     0,    73,    74,
      22,    23,    24,    17,     0,     0,    18,    26,     0,     0,
       0,     0,     0,     0,     0,    17,     0,    19,    18,   194,
       0,    73,    74,    22,    23,    24,     0,     0,     0,    19,
      26,   196,     0,    73,    74,    22,    23,    24,    17,     0,
       0,    18,    26,     0,     0,     0,     0,     0,     0,     0,
      17,     0,    19,    18,   241,     0,    73,    74,    22,    23,
      24,     0,     0,     0,    19,    26,   253,     0,    73,    74,
      22,    23,    24,    17,     0,     0,    18,    26,     0,     0,
       0,     0,     0,     0,     0,    17,     0,    19,    18,   255,
       0,    73,    74,    22,    23,    24,     0,     0,     0,    19,
      26,     0,     0,    73,    74,    22,    23,    24,    17,     0,
       0,    18,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,     0,     0,    73,    74,    22,    23,
      24,     0,     0,     0,     0,    26,   321,   322,   323,   324,
     325,     0,   326,     0,   327,     0,   328,     0,   329,   330,
     331,   332,   333,   110,   111,     0,   112,   113,   114,   115,
     116,   117,     0,     0,   119,   120,   121,   122,   123,   124,
       0,   334,     0,     0,    54,    55,     0,    56,    57,     0,
     239,    58,    59,     0,     0,     0,    61,     0,    62,    63,
      64,   110,   111,     0,   112,   113,   114,   115,   116,   117,
       0,   237,   119,   120,   121,   122,   123,   124,     0,     0,
       0,     0,     0,     0,   110,   111,    25,   112,   113,   114,
     115,   116,   117,     0,     0,   119,   120,   121,   122,   123,
     124,     0,     0,     0,     0,     0,   110,   111,   155,   112,
     113,   114,   115,   116,   117,     0,     0,   119,   120,   121,
     122,   123,   124,     0,     0,     0,     0,     0,   110,   111,
     247,   112,   113,   114,   115,   116,   117,     0,   291,   119,
     120,   121,   122,   123,   124,    54,    55,     0,    56,    57,
     -35,   -37,    58,    59,     0,    60,     0,    61,     0,    62,
      63,    64,    65,    66,     0,     0,     0,    67,    68,   110,
     111,     0,   112,   113,   114,   115,   116,   117,     0,     0,
     119,   120,   121,   122,   123,   124,     0,     0,     0,     0,
     110,   111,   169,   112,   113,   114,   115,   116,   117,     0,
       0,   119,   120,   121,   122,   123,   124,     0,     0,     0,
       0,   110,   111,   318,   112,   113,   114,   115,   116,   117,
       0,     0,   119,   120,   121,   122,   123,   124,     0,     0,
       0,     0,   110,   111,   348,   112,   113,   114,   115,   116,
     117,     0,     0,   119,   120,   121,   122,   123,   124,     0,
       0,     0,     0,   110,   111,   350,   112,   113,   114,   115,
     116,   117,     0,     0,   119,   120,   121,   122,   123,   124,
       0,     0,     0,     0,   110,   111,   351,   112,   113,   114,
     115,   116,   117,     0,     0,   119,   120,   121,   122,   123,
     124,     0,     0,     0,     0,   110,   111,   355,   112,   113,
     114,   115,   116,   117,     0,     0,   119,   120,   121,   122,
     123,   124,     0,     0,     0,   110,   111,   317,   112,   113,
     114,   115,   116,   117,     0,   118,   119,   120,   121,   122,
     123,   124,   110,   111,     0,   112,   113,   114,   115,   116,
     117,     0,   189,   119,   120,   121,   122,   123,   124,   110,
     111,     0,   112,   113,   114,   115,   116,   117,     0,   235,
     119,   120,   121,   122,   123,   124,   110,   111,     0,   112,
     113,   114,   115,   116,   117,     0,   289,   119,   120,   121,
     122,   123,   124,   110,   111,     0,   112,   113,   114,   115,
     116,   117,     0,     0,   119,   120,   121,   122,   123,   124,
      54,    55,     0,    56,    57,     0,     0,    58,    59,     0,
       0,     0,    61,     0,    62,    63,    64,   112,   113,   114,
     115,   116,   117,     0,     0,   119,   120,   121,   122,   123,
     124,    56,    57,     0,     0,    58,    59,     0,     0,     0,
      61,     0,    62,    63,    64,   114,   115,   116,   117,     0,
       0,   119,   120,   121,   122,   123,   124
};

static const yytype_int16 yycheck[] =
{
      16,    30,   146,    82,    83,   175,    10,   177,    39,    13,
     139,    15,     1,   142,    18,    19,     1,     1,     1,    35,
      38,    39,    26,     3,     4,     5,     1,     7,   237,    31,
     239,   175,     1,   177,     1,    18,    65,    66,     1,     3,
       4,     5,    46,     7,   214,    46,     1,     1,     1,    30,
      54,    55,    56,    57,    58,    59,    45,    61,    62,    63,
      64,    46,    47,    47,    44,     3,     4,     5,    48,     7,
     214,    46,    39,   152,   153,   154,    46,    46,   207,    46,
      44,     1,     1,    46,    48,   101,    39,    91,    43,   105,
      94,   107,    46,     1,    28,    29,   100,    30,    13,    14,
      45,    20,   272,    30,    31,    47,   110,   111,   112,   113,
      48,    43,   116,   117,     1,    48,     3,     4,     5,    39,
       7,    40,    41,    42,     1,   129,    16,   131,   272,    39,
     273,    39,   275,   276,    46,   151,    45,    46,    13,    14,
     156,    43,    45,    30,    31,   174,   225,   226,   227,    28,
      29,    44,    39,    30,    31,   298,    35,    36,    37,    18,
      47,    48,    46,   179,   307,    43,   170,   171,    28,    29,
       1,   187,     3,     4,     5,     6,     7,    39,     9,    10,
      11,    12,    39,    44,    15,    13,    17,    18,    19,    20,
      43,    43,    23,    43,    43,   199,    39,   213,   202,   278,
      44,    48,    47,    34,    46,    45,    18,    38,    39,    40,
      41,    42,    28,    29,    46,    46,    47,    33,    49,    35,
      36,    37,    47,    31,    44,    44,    43,    48,   244,   233,
     234,   247,    43,   237,    48,   239,    43,    46,    48,    44,
      44,    47,    44,    39,    43,   249,    43,     0,     1,    43,
       3,     4,     5,     6,     7,   271,     9,    10,    11,    12,
      44,    30,    15,    43,    17,    18,    19,    20,    25,    98,
      23,   303,   102,   209,    -1,    -1,   280,    -1,   282,   283,
     296,    34,    -1,   299,    -1,    38,    39,    40,    41,    42,
      -1,    -1,    -1,    46,    47,    -1,   312,    21,    22,    -1,
      24,    25,    -1,    -1,    28,    29,    -1,    31,    -1,    33,
     314,    35,    36,    37,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    -1,    11,    -1,    13,   345,
      15,    16,    17,    18,    19,    -1,    21,    22,   354,    24,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    -1,    43,    44,
      45,    46,    47,    48,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    -1,    -1,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    38,    39,    40,    41,    42,    43,    -1,    -1,    46,
      47,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    -1,    -1,    15,    -1,    17,    18,    19,
      20,    -1,    -1,    23,    -1,    -1,    -1,    -1,     1,    -1,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    -1,    -1,    -1,    46,    47,    21,    22,
       1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    39,    -1,    -1,    20,
      -1,    -1,    23,     1,    47,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    34,    -1,     1,    -1,    38,    39,    40,
      41,    42,    20,    -1,    -1,    23,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    34,    23,     1,    -1,
      38,    39,    40,    41,    42,    31,    -1,    45,    34,    47,
      -1,    -1,    38,    39,    40,    41,    42,    20,    -1,    -1,
      23,    47,    -1,     1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    38,    39,    40,    41,    42,
      -1,    -1,    20,    -1,    47,    23,     1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    34,    -1,     1,    -1,
      38,    39,    40,    41,    42,    20,    -1,    -1,    23,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    34,
      23,     1,    -1,    38,    39,    40,    41,    42,    -1,    44,
      -1,    34,    47,    -1,    -1,    38,    39,    40,    41,    42,
      20,    44,    -1,    23,    47,    -1,     1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    34,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    -1,    -1,    20,    -1,    47,    23,     1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    34,
      -1,     1,    -1,    38,    39,    40,    41,    42,    20,    -1,
      -1,    23,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    34,    23,     1,    -1,    38,    39,    40,    41,
      42,    -1,    -1,    -1,    34,    47,     1,    -1,    38,    39,
      40,    41,    42,    20,    -1,    -1,    23,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    34,    23,     1,
      -1,    38,    39,    40,    41,    42,    -1,    -1,    -1,    34,
      47,     1,    -1,    38,    39,    40,    41,    42,    20,    -1,
      -1,    23,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    34,    23,     1,    -1,    38,    39,    40,    41,
      42,    -1,    -1,    -1,    34,    47,     1,    -1,    38,    39,
      40,    41,    42,    20,    -1,    -1,    23,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    34,    23,     1,
      -1,    38,    39,    40,    41,    42,    -1,    -1,    -1,    34,
      47,    -1,    -1,    38,    39,    40,    41,    42,    20,    -1,
      -1,    23,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    -1,    -1,    -1,    -1,    47,     3,     4,     5,     6,
       7,    -1,     9,    -1,    11,    -1,    13,    -1,    15,    16,
      17,    18,    19,    21,    22,    -1,    24,    25,    26,    27,
      28,    29,    -1,    -1,    32,    33,    34,    35,    36,    37,
      -1,    38,    -1,    -1,    21,    22,    -1,    24,    25,    -1,
      48,    28,    29,    -1,    -1,    -1,    33,    -1,    35,    36,
      37,    21,    22,    -1,    24,    25,    26,    27,    28,    29,
      -1,    48,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    46,    24,    25,    26,
      27,    28,    29,    -1,    -1,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    21,    22,    45,    24,
      25,    26,    27,    28,    29,    -1,    -1,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    21,    22,
      45,    24,    25,    26,    27,    28,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    21,    22,    -1,    24,    25,
      43,    44,    28,    29,    -1,    31,    -1,    33,    -1,    35,
      36,    37,    38,    39,    -1,    -1,    -1,    43,    44,    21,
      22,    -1,    24,    25,    26,    27,    28,    29,    -1,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      21,    22,    44,    24,    25,    26,    27,    28,    29,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    21,    22,    44,    24,    25,    26,    27,    28,    29,
      -1,    -1,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    21,    22,    44,    24,    25,    26,    27,    28,
      29,    -1,    -1,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    21,    22,    44,    24,    25,    26,    27,
      28,    29,    -1,    -1,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    21,    22,    44,    24,    25,    26,
      27,    28,    29,    -1,    -1,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    21,    22,    44,    24,    25,
      26,    27,    28,    29,    -1,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    21,    22,    43,    24,    25,
      26,    27,    28,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    21,    22,    -1,    24,    25,    26,    27,    28,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    21,
      22,    -1,    24,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    21,    22,    -1,    24,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    21,    22,    -1,    24,    25,    26,    27,
      28,    29,    -1,    -1,    32,    33,    34,    35,    36,    37,
      21,    22,    -1,    24,    25,    -1,    -1,    28,    29,    -1,
      -1,    -1,    33,    -1,    35,    36,    37,    24,    25,    26,
      27,    28,    29,    -1,    -1,    32,    33,    34,    35,    36,
      37,    24,    25,    -1,    -1,    28,    29,    -1,    -1,    -1,
      33,    -1,    35,    36,    37,    26,    27,    28,    29,    -1,
      -1,    32,    33,    34,    35,    36,    37
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    51,     0,     1,     3,     4,     5,     6,     7,     9,
      10,    11,    12,    15,    17,    18,    19,    20,    23,    34,
      38,    39,    40,    41,    42,    46,    47,    52,    54,    55,
      60,    61,    62,    66,    71,    72,    77,    81,    82,    83,
      85,    88,    90,    91,    96,    97,   100,   101,   102,   103,
     105,   106,   107,   108,    21,    22,    24,    25,    28,    29,
      31,    33,    35,    36,    37,    38,    39,    43,    44,     1,
      39,    39,     1,    38,    39,   105,     1,    39,    31,    53,
      45,   105,     1,    47,   105,     1,   102,     1,   105,   105,
      30,     1,    30,    39,    47,    51,   105,    38,    39,    53,
      13,    14,    63,    64,   102,    45,    84,    86,    31,   105,
      21,    22,    24,    25,    26,    27,    28,    29,    31,    32,
      33,    34,    35,    36,    37,   105,   105,   105,   105,    30,
     105,    30,   105,   105,   105,   105,   105,    53,    53,    46,
       1,    39,    46,    78,    79,    80,    47,     1,    67,     1,
      45,    87,    52,    49,    52,    45,    89,    92,    95,     1,
      18,    44,   105,    30,    31,     1,   104,   105,    43,    44,
       1,    30,    31,    56,    39,    47,    56,    73,   105,    45,
     102,    63,    65,     1,    43,     1,   102,    16,   102,    31,
       1,   105,     1,   105,     1,   105,     1,   105,     1,    30,
     105,     1,    30,   105,   105,   105,    78,    46,    30,    48,
       1,    78,    43,    44,    48,    54,    74,    75,    76,    45,
      68,    69,     1,    46,   102,    52,    52,    52,   102,    18,
      43,    94,     1,    46,    47,    31,    39,    48,    44,    48,
     105,     1,   105,    53,    44,    74,    74,    45,   102,    13,
      43,     1,   102,     1,   105,     1,   105,    43,    78,     1,
      20,    40,    41,    42,    39,    79,    43,    43,   102,    74,
      39,    44,    48,    46,    45,    46,    70,    52,    52,    52,
      47,    18,    47,    93,   105,   105,    31,   104,   104,    31,
      31,    31,    57,    58,    59,   102,    44,    44,   102,   105,
      43,    43,    48,    48,   102,    74,    64,    46,    64,    64,
      44,    52,    44,   105,    47,   105,   105,    43,    44,    43,
      44,     3,     4,     5,     6,     7,     9,    11,    13,    15,
      16,    17,    18,    19,    38,   109,   102,    64,   102,    39,
      80,    43,    64,    43,    43,    98,    44,   102,    44,   105,
      44,    44,    43,   102,    99,    44,   102
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    51,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    53,    54,    54,    54,    54,    55,    55,    55,    55,
      55,    56,    56,    56,    56,    57,    56,    58,    56,    59,
      56,    60,    60,    61,    62,    62,    63,    63,    64,    65,
      64,    64,    64,    64,    67,    66,    68,    66,    69,    66,
      70,    66,    66,    71,    71,    71,    71,    71,    73,    72,
      74,    74,    74,    75,    76,    77,    77,    78,    78,    79,
      79,    80,    80,    80,    80,    80,    80,    81,    81,    81,
      81,    82,    82,    83,    84,    85,    85,    85,    86,    85,
      87,    85,    85,    88,    89,    89,    90,    90,    92,    91,
      93,    91,    94,    91,    95,    91,    91,    96,    96,    98,
      97,    99,    97,   100,   100,   101,   101,   101,   102,   103,
     103,   104,   104,   104,   104,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   106,   106,   106,   106,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     1,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       4,     3,     1,     3,     3,     0,     4,     0,     4,     0,
       4,     1,     2,     4,     3,     1,     3,     2,     5,     0,
       5,     2,     1,     0,     0,     7,     0,     8,     0,     7,
       0,     7,     3,     2,     6,     6,     5,     5,     0,     5,
       3,     1,     1,     2,     2,     5,     1,     1,     1,     3,
       1,     5,     3,     4,     3,     3,     3,     5,     4,     5,
       6,     5,     3,     2,     2,     2,     4,     5,     0,     3,
       0,     4,     4,     4,     1,     0,     6,     1,     0,     7,
       0,     7,     0,     7,     0,     8,     6,     7,     1,     0,
       8,     0,     9,     2,     2,     2,     3,     4,     3,     4,
       3,     3,     3,     1,     0,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     1,     3,     1,     3,     3,     3,     3,     3,     3,
       4,     4,     3,     3,     3,     3,     2,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     3,     3,     3,
       3,     4,     4,     4,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1
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
#line 1653 "parser.tab.c"
    break;

  case 5: /* STATEMENT: FUNC_DECLARATION_STATEMENT  */
#line 105 "parser.y"
                                                            {printf("Parsed Function Declaration\n");}
#line 1659 "parser.tab.c"
    break;

  case 9: /* STATEMENT: IF_STATEMENT  */
#line 109 "parser.y"
                                                            {printf("Parsed if statement\n");}
#line 1665 "parser.tab.c"
    break;

  case 10: /* STATEMENT: WHILE_STATEMENT  */
#line 110 "parser.y"
                                                            {printf("Parsed While LOOP\n");}
#line 1671 "parser.tab.c"
    break;

  case 11: /* STATEMENT: FOR_STATEMENT  */
#line 111 "parser.y"
                                                            {printf("Parsed For LOOP\n");}
#line 1677 "parser.tab.c"
    break;

  case 12: /* STATEMENT: DO_WHILE_STATEMENT  */
#line 112 "parser.y"
                                                            {printf("Parsed Do While LOOP\n");}
#line 1683 "parser.tab.c"
    break;

  case 13: /* STATEMENT: SWITCH_STATEMENT  */
#line 113 "parser.y"
                                                            {printf("Parsed Switch Statement\n");}
#line 1689 "parser.tab.c"
    break;

  case 14: /* STATEMENT: ENUM_DECLARATION_STATEMENT  */
#line 114 "parser.y"
                                                            {printf("Parsed Enum Declaration\n");}
#line 1695 "parser.tab.c"
    break;

  case 15: /* STATEMENT: ENUM_CALL_STATEMENT  */
#line 115 "parser.y"
                                                            {printf("Parsed Enum Usage\n");}
#line 1701 "parser.tab.c"
    break;

  case 18: /* STATEMENT: error SEMICOLON  */
#line 118 "parser.y"
                                                            {printf("\nError STATEMENT at line %d\n", yylineno);pErr(yylineno);}
#line 1707 "parser.tab.c"
    break;

  case 19: /* STATEMENT: error '}'  */
#line 119 "parser.y"
                                                            {printf("\nError STATEMENT at line %d\n", yylineno);pErr(yylineno);}
#line 1713 "parser.tab.c"
    break;

  case 20: /* STATEMENT: error ')'  */
#line 120 "parser.y"
                                                            {printf("\nError STATEMENT at line %d\n", yylineno);pErr(yylineno);}
#line 1719 "parser.tab.c"
    break;

  case 22: /* TYPE: INT  */
#line 127 "parser.y"
                            { (yyval.str) = "int";   }
#line 1725 "parser.tab.c"
    break;

  case 23: /* TYPE: FLOAT  */
#line 128 "parser.y"
                            { (yyval.str) = "float"; }
#line 1731 "parser.tab.c"
    break;

  case 24: /* TYPE: BOOL  */
#line 129 "parser.y"
                            { (yyval.str) = "bool";  }
#line 1737 "parser.tab.c"
    break;

  case 25: /* TYPE: STRING  */
#line 130 "parser.y"
                            { (yyval.str) = "string";}
#line 1743 "parser.tab.c"
    break;

  case 26: /* DECLARATION_STATEMENT: TYPE IDENTIFIER DECLARATION_TAIL  */
#line 134 "parser.y"
                                                                  { printf("Parsed Declaration\n"); }
#line 1749 "parser.tab.c"
    break;

  case 27: /* DECLARATION_STATEMENT: TYPE CONSTANT DECLARATION_TAIL  */
#line 135 "parser.y"
                                                                  { printf("Parsed Const Declaration\n"); }
#line 1755 "parser.tab.c"
    break;

  case 28: /* DECLARATION_STATEMENT: error CONSTANT SEMICOLON_MISS  */
#line 136 "parser.y"
                                                                  {printf("\nError Missing constant type at line %d\n", yylineno);pErr(yylineno);}
#line 1761 "parser.tab.c"
    break;

  case 29: /* DECLARATION_STATEMENT: error IDENTIFIER SEMICOLON_MISS  */
#line 137 "parser.y"
                                                                  {printf("\nError Missing variable type at line %d\n", yylineno);pErr(yylineno);}
#line 1767 "parser.tab.c"
    break;

  case 30: /* DECLARATION_STATEMENT: TYPE IDENTIFIER IDENTIFIER SEMICOLON_MISS  */
#line 138 "parser.y"
                                                                  {printf("\nError unexpected identifier %s at line %d\n",(yyvsp[-1].str), yylineno);pErr(yylineno);}
#line 1773 "parser.tab.c"
    break;

  case 33: /* DECLARATION_TAIL: error EXPRESSION SEMICOLON  */
#line 145 "parser.y"
                                                    {printf("\nError Missing '=' at line %d\n", yylineno);pErr(yylineno);}
#line 1779 "parser.tab.c"
    break;

  case 34: /* DECLARATION_TAIL: EQ error SEMICOLON  */
#line 146 "parser.y"
                                                    {printf("\nError Missing second operand at line %d\n", yylineno);pErr(yylineno);}
#line 1785 "parser.tab.c"
    break;

  case 35: /* $@1: %empty  */
#line 147 "parser.y"
                                                    {printf("\nError Missing semicolon ';' at line %d\n", yylineno); pErr(yylineno);}
#line 1791 "parser.tab.c"
    break;

  case 37: /* $@2: %empty  */
#line 148 "parser.y"
                                                    {printf("\nError Missing semicolon ';' at line %d\n", yylineno); pErr(yylineno);}
#line 1797 "parser.tab.c"
    break;

  case 39: /* $@3: %empty  */
#line 149 "parser.y"
                                                    {printf("\nError Missing semicolon ';' at line %d\n", yylineno); pErr(yylineno);}
#line 1803 "parser.tab.c"
    break;

  case 43: /* helperSWITCH: SWITCH IDENTIFIER ':' '{'  */
#line 158 "parser.y"
                                          {strcpy(switcher, (yyvsp[-2].str));}
#line 1809 "parser.tab.c"
    break;

  case 47: /* DEFAULTCASE: DEFAULT BLOCK  */
#line 166 "parser.y"
                                {printf("\nError missing colon ':' at DEFAULT CASE of switch, error at line %d\n", yylineno); pErr(yylineno);}
#line 1815 "parser.tab.c"
    break;

  case 49: /* $@4: %empty  */
#line 170 "parser.y"
                              {printf("\nError DEFAULT CASE must be written at the end of the switch statement, error at line %d\n", yylineno); pErr(yylineno);}
#line 1821 "parser.tab.c"
    break;

  case 51: /* CASES: DEFAULTCASE DEFAULTCASE  */
#line 171 "parser.y"
                                                                {printf("\nError only 1 DEFAULT CASE is allowed in the switch statement error, at line %d\n", yylineno); pErr(yylineno);}
#line 1827 "parser.tab.c"
    break;

  case 54: /* $@5: %empty  */
#line 177 "parser.y"
                                                {printf("\nError Missing identifier for switch statement at line %d\n", yylineno);pErr(yylineno);}
#line 1833 "parser.tab.c"
    break;

  case 56: /* $@6: %empty  */
#line 178 "parser.y"
                                                {printf("\nError unexpected identifier '%s' at switch statement at line %d\n",yylval, yylineno); pErr(yylineno);}
#line 1839 "parser.tab.c"
    break;

  case 58: /* $@7: %empty  */
#line 179 "parser.y"
                                                {printf("\nError Missing colon ':' for switch statement (switchs must have a colon) at line %d\n", yylineno);pErr(yylineno);}
#line 1845 "parser.tab.c"
    break;

  case 60: /* $@8: %empty  */
#line 180 "parser.y"
                                                {printf("\nError Missing '{' for switch statement at line %d\n", yylineno);pErr(yylineno);}
#line 1851 "parser.tab.c"
    break;

  case 62: /* ERROR_SWITCH_STATEMENT: helperSWITCH CASES error  */
#line 181 "parser.y"
                                           {printf("\nError unclosed '}' for switch statement at line %d\n", yylineno);pErr(yylineno);}
#line 1857 "parser.tab.c"
    break;

  case 68: /* $@9: %empty  */
#line 195 "parser.y"
                                                    {printf("\nError unhandled function parenthesis at line %d for function %s\n", yylineno, (yyvsp[0].str));pErr(yylineno);}
#line 1863 "parser.tab.c"
    break;

  case 73: /* ERROR_ARGS: ',' ARGS  */
#line 204 "parser.y"
                                           {printf("\nError unexpected ',' in argument list of function declaration at line %d\n", yylineno);pErr(yylineno);}
#line 1869 "parser.tab.c"
    break;

  case 83: /* ENUM_DEFINED_ARGS: IDENTIFIER EQ error ','  */
#line 229 "parser.y"
                                                            {printf("\nError WRONG arguments in the ENUM statement at line %d\n", yylineno);pErr(yylineno);}
#line 1875 "parser.tab.c"
    break;

  case 84: /* ENUM_DEFINED_ARGS: IDENTIFIER EQ FLOAT_DIGIT  */
#line 230 "parser.y"
                                                            {printf("\nError WRONG arguments in the ENUM statement at line %d\n", yylineno);pErr(yylineno);}
#line 1881 "parser.tab.c"
    break;

  case 85: /* ENUM_DEFINED_ARGS: IDENTIFIER EQ STRING_LITERAL  */
#line 231 "parser.y"
                                                            {printf("\nError WRONG arguments in the ENUM statement at line %d\n", yylineno);pErr(yylineno);}
#line 1887 "parser.tab.c"
    break;

  case 86: /* ENUM_DEFINED_ARGS: IDENTIFIER EQ BOOL_LITERAL  */
#line 232 "parser.y"
                                                            {printf("\nError WRONG arguments in the ENUM statement at line %d\n", yylineno);pErr(yylineno);}
#line 1893 "parser.tab.c"
    break;

  case 87: /* ERROR_ENUM_DECLARATION_STATEMENT: ENUM error '{' ENUM_HELPER '}'  */
#line 236 "parser.y"
                                                            {printf("\nError missing identifier for ENUM statement at line %d\n", yylineno);pErr(yylineno);}
#line 1899 "parser.tab.c"
    break;

  case 88: /* ERROR_ENUM_DECLARATION_STATEMENT: ENUM IDENTIFIER ENUM_HELPER '}'  */
#line 237 "parser.y"
                                                            {printf("\nError missing opening curly braces for ENUM statement at line %d\n", yylineno);pErr(yylineno);}
#line 1905 "parser.tab.c"
    break;

  case 89: /* ERROR_ENUM_DECLARATION_STATEMENT: ENUM IDENTIFIER '{' error '}'  */
#line 239 "parser.y"
                                                            {printf("\nError missing arguments in the ENUM statement at line %d\n", yylineno);pErr(yylineno);}
#line 1911 "parser.tab.c"
    break;

  case 90: /* ERROR_ENUM_DECLARATION_STATEMENT: ENUM IDENTIFIER error '{' ENUM_HELPER '}'  */
#line 240 "parser.y"
                                                            {printf("\nError UnExpected IDENTIFIER in the ENUM statement at line %d\n", yylineno);pErr(yylineno);}
#line 1917 "parser.tab.c"
    break;

  case 97: /* IF_STATEMENT: IF_STATEMENT_HELPER IF_STATEMENT_HELPER1 ELSE error '}'  */
#line 258 "parser.y"
                                                                          {printf("\nError Missing '{' for the ELSE statement at line %d\n", yylineno);pErr(yylineno);}
#line 1923 "parser.tab.c"
    break;

  case 98: /* $@10: %empty  */
#line 259 "parser.y"
                                                                    {printf("\nError Missing ':' for the IF statement at line %d\n", yylineno);pErr(yylineno);}
#line 1929 "parser.tab.c"
    break;

  case 100: /* $@11: %empty  */
#line 260 "parser.y"
                                                              {printf("\nError Missing expression for the IF statement at line %d\n", yylineno);pErr(yylineno);}
#line 1935 "parser.tab.c"
    break;

  case 102: /* IF_STATEMENT: IF_STATEMENT_HELPER ':' error '}'  */
#line 261 "parser.y"
                                                                    {printf("\nError Missing '{' for the IF statement at line %d\n", yylineno);pErr(yylineno);}
#line 1941 "parser.tab.c"
    break;

  case 105: /* WHILEMISS_COLON: %empty  */
#line 272 "parser.y"
                  {printf("\nError Missing ':' for the WHILE loop at line %d\n", yylineno);pErr(yylineno);}
#line 1947 "parser.tab.c"
    break;

  case 108: /* $@12: %empty  */
#line 281 "parser.y"
                                                    {printf("\nError Missing DO-Block for the DO-WHILE loop at line %d\n", yylineno);pErr(yylineno);}
#line 1953 "parser.tab.c"
    break;

  case 110: /* $@13: %empty  */
#line 282 "parser.y"
                                                    {printf("\nError Missing opening parenthesis '(' for the DO-WHILE loop at line %d\n", yylineno);pErr(yylineno);}
#line 1959 "parser.tab.c"
    break;

  case 112: /* $@14: %empty  */
#line 283 "parser.y"
                                                    {printf("\nError Missing WHILE DO-WHILE loop at line %d\n", yylineno);pErr(yylineno);}
#line 1965 "parser.tab.c"
    break;

  case 114: /* $@15: %empty  */
#line 284 "parser.y"
                                                    {printf("\nError Missing opening curly braces '{' for the DO-Block for DO-WHILE loop at line %d\n", yylineno);pErr(yylineno);}
#line 1971 "parser.tab.c"
    break;

  case 116: /* ERROR_DO_WHILE: DO BLOCK WHILE '{' EXPRESSION '}'  */
#line 285 "parser.y"
                                                    {printf("\nError DO-WHILE loop accepts braces () not curly braces {} at line %d\n", yylineno);pErr(yylineno);}
#line 1977 "parser.tab.c"
    break;

  case 119: /* $@16: %empty  */
#line 294 "parser.y"
                                                               {printf("\nError Missing opening braces '(' in the FOR loop at line %d\n", yylineno);pErr(yylineno);}
#line 1983 "parser.tab.c"
    break;

  case 121: /* $@17: %empty  */
#line 295 "parser.y"
                                                               {printf("\nError unexpected semicolon in the FOR loop at line %d\n", yylineno);pErr(yylineno);}
#line 1989 "parser.tab.c"
    break;

  case 124: /* helperAssignmentRule: CONSTANT EQ  */
#line 302 "parser.y"
                                                              {printf("\nError CONSTANTS must not be reassigned %d\n", yylineno);pErr(yylineno);}
#line 1995 "parser.tab.c"
    break;

  case 125: /* assignment_STATEMENT: helperAssignmentRule SEMICOLON  */
#line 306 "parser.y"
                                                              { printf("\nError expected expression in assignment statement at line %d\n", yylineno);pErr(yylineno);}
#line 2001 "parser.tab.c"
    break;

  case 126: /* assignment_STATEMENT: helperAssignmentRule EXPRESSION SEMICOLON  */
#line 307 "parser.y"
                                                              {printf("Parsed Assignment\n");}
#line 2007 "parser.tab.c"
    break;

  case 127: /* assignment_STATEMENT: IDENTIFIER error EXPRESSION SEMICOLON  */
#line 308 "parser.y"
                                                              {printf("\nError expected '=' in assignment statement at line %d\n", yylineno);pErr(yylineno);}
#line 2013 "parser.tab.c"
    break;

  case 128: /* BLOCK: '{' PROGRAM '}'  */
#line 313 "parser.y"
                                              {printf("Parsed Block\n");}
#line 2019 "parser.tab.c"
    break;

  case 129: /* FUNC_CALL: IDENTIFIER '(' USED_ARGS ')'  */
#line 319 "parser.y"
                                              { printf("Parsed Funciton Call\n");}
#line 2025 "parser.tab.c"
    break;

  case 130: /* FUNC_CALL: IDENTIFIER error ')'  */
#line 320 "parser.y"
                                              {printf("\nError unhandled function parenthesis at line %d\n", yylineno);pErr(yylineno);}
#line 2031 "parser.tab.c"
    break;

  case 132: /* USED_ARGS: error ',' USED_ARGS  */
#line 326 "parser.y"
                                                            {printf("\nError Missing first argument in function's argument list or erronous ',' at line %d\n", yylineno);pErr(yylineno);}
#line 2037 "parser.tab.c"
    break;

  case 153: /* EXPRESSION: ERROR_EXPRESSION  */
#line 354 "parser.y"
                                             {printf("\nError Expression error at line %d\n", yylineno);pErr(yylineno);}
#line 2043 "parser.tab.c"
    break;

  case 168: /* ERROR_COMPARISONSTT: error GT EXPRESSION  */
#line 381 "parser.y"
                                                                    {printf("\nError Missing left operand before '>' at line %d\n", yylineno);pErr(yylineno);}
#line 2049 "parser.tab.c"
    break;

  case 169: /* ERROR_COMPARISONSTT: EXPRESSION GT error  */
#line 382 "parser.y"
                                                                    {printf("\nError Missing right operand after '>' at line %d\n", yylineno);pErr(yylineno);}
#line 2055 "parser.tab.c"
    break;

  case 170: /* ERROR_COMPARISONSTT: error LT EXPRESSION  */
#line 383 "parser.y"
                                                                    {printf("\nError Missing left operand before '<' at line %d\n", yylineno);pErr(yylineno);}
#line 2061 "parser.tab.c"
    break;

  case 171: /* ERROR_COMPARISONSTT: EXPRESSION LT error  */
#line 384 "parser.y"
                                                                    {printf("\nError Missing right operand after '<' at line %d\n", yylineno);pErr(yylineno);}
#line 2067 "parser.tab.c"
    break;

  case 172: /* ERROR_COMPARISONSTT: error EQUALITY EXPRESSION  */
#line 385 "parser.y"
                                                                    {printf("\nError Missing left operand before '==' at line %d\n", yylineno);pErr(yylineno);}
#line 2073 "parser.tab.c"
    break;

  case 173: /* ERROR_COMPARISONSTT: EXPRESSION EQUALITY error  */
#line 386 "parser.y"
                                                                    {printf("\nError Missing right operand after '==' at line %d\n", yylineno);pErr(yylineno);}
#line 2079 "parser.tab.c"
    break;

  case 174: /* ERROR_COMPARISONSTT: error NEG_EQUALITY EXPRESSION  */
#line 387 "parser.y"
                                                                    {printf("\nError Missing left operand before '!=' at line %d\n", yylineno);pErr(yylineno);}
#line 2085 "parser.tab.c"
    break;

  case 175: /* ERROR_COMPARISONSTT: EXPRESSION NEG_EQUALITY error  */
#line 388 "parser.y"
                                                                    {printf("\nError Missing right operand after '!=' at line %d\n", yylineno);pErr(yylineno);}
#line 2091 "parser.tab.c"
    break;

  case 176: /* ERROR_COMPARISONSTT: LOGIC_NOT error  */
#line 389 "parser.y"
                                                                    {printf("\nError Missing right operand after the negating operator '!' at line %d\n", yylineno);pErr(yylineno);}
#line 2097 "parser.tab.c"
    break;

  case 177: /* ERROR_COMPARISONSTT: error LOGIC_AND EXPRESSION  */
#line 390 "parser.y"
                                                                    {printf("\nError Missing left operand before 'and' operator at line %d\n", yylineno);pErr(yylineno);}
#line 2103 "parser.tab.c"
    break;

  case 178: /* ERROR_COMPARISONSTT: EXPRESSION LOGIC_AND error  */
#line 391 "parser.y"
                                                                    {printf("\nError Missing right operand after 'and' operator at line %d\n", yylineno);pErr(yylineno);}
#line 2109 "parser.tab.c"
    break;

  case 179: /* ERROR_COMPARISONSTT: error LOGIC_OR EXPRESSION  */
#line 392 "parser.y"
                                                                    {printf("\nError Missing left operand before 'or' operator at line %d\n", yylineno);pErr(yylineno);}
#line 2115 "parser.tab.c"
    break;

  case 180: /* ERROR_COMPARISONSTT: EXPRESSION LOGIC_OR error  */
#line 393 "parser.y"
                                                                    {printf("\nError Missing right operand after 'or' operator at line %d\n", yylineno);pErr(yylineno);}
#line 2121 "parser.tab.c"
    break;

  case 181: /* ERROR_COMPARISONSTT: error LT EQ EXPRESSION  */
#line 394 "parser.y"
                                                                    {printf("\nError Missing left operand before '<=' operator at line %d\n", yylineno);pErr(yylineno);}
#line 2127 "parser.tab.c"
    break;

  case 182: /* ERROR_COMPARISONSTT: EXPRESSION LT EQ error  */
#line 395 "parser.y"
                                                                    {printf("\nError Missing right operand after '<=' operator at line %d\n", yylineno);pErr(yylineno);}
#line 2133 "parser.tab.c"
    break;

  case 183: /* ERROR_COMPARISONSTT: error GT EQ EXPRESSION  */
#line 396 "parser.y"
                                                                    {printf("\nError Missing left operand before '>=' operator at line %d\n", yylineno);pErr(yylineno);}
#line 2139 "parser.tab.c"
    break;

  case 184: /* ERROR_COMPARISONSTT: EXPRESSION GT EQ error  */
#line 397 "parser.y"
                                                                    {printf("\nError Missing right operand after '>=' operator at line %d\n", yylineno);pErr(yylineno);}
#line 2145 "parser.tab.c"
    break;


#line 2149 "parser.tab.c"

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

#line 407 "parser.y"


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
