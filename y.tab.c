/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "miniL.y" /* yacc.c:339  */

    #include <stdio.h>
    #include <stdlib.h>
    #include "milFunc.h"

    extern int yylex();
    extern int yylineno;
    extern int yyparse();
    extern FILE* yyin;

    void yyerror(const char *msg);

#line 79 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUMBER = 258,
    IDENT = 259,
    FUNCTION = 260,
    BEGIN_PARAMS = 261,
    END_PARAMS = 262,
    BEGIN_LOCALS = 263,
    END_LOCALS = 264,
    BEGIN_BODY = 265,
    END_BODY = 266,
    INTEGER = 267,
    ARRAY = 268,
    OF = 269,
    IF = 270,
    THEN = 271,
    ENDIF = 272,
    ELSE = 273,
    WHILE = 274,
    DO = 275,
    BEGINLOOP = 276,
    ENDLOOP = 277,
    CONTINUE = 278,
    BREAK = 279,
    READ = 280,
    WRITE = 281,
    NOT = 282,
    TRUE = 283,
    FALSE = 284,
    RETURN = 285,
    MINUS = 286,
    ADD = 287,
    MULT = 288,
    DIV = 289,
    MOD = 290,
    EQ = 291,
    NEQ = 292,
    LT = 293,
    GT = 294,
    LTE = 295,
    GTE = 296,
    SEMICOLON = 297,
    COLON = 298,
    COMMA = 299,
    L_PAREN = 300,
    R_PAREN = 301,
    L_SQUARE_BRACKET = 302,
    R_SQUARE_BRACKET = 303,
    ASSIGN = 304
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "miniL.y" /* yacc.c:355  */

        int ival;
#line 18 "miniL.y" /* yacc.c:355  */

        char *stval;
        struct Node* assign_node;

#line 177 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 208 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   151

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  86
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  190

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    85,    85,    86,    88,    99,    99,    88,   104,   105,
     107,   137,   139,   145,   147,   145,   148,   155,   148,   156,
     159,   156,   161,   180,   160,   181,   182,   183,   184,   184,
     184,   185,   185,   185,   186,   193,   186,   194,   201,   194,
     202,   202,   203,   203,   204,   204,   206,   207,   209,   210,
     212,   214,   215,   217,   218,   219,   220,   221,   222,   223,
     225,   228,   227,   232,   231,   235,   238,   242,   241,   246,
     245,   250,   249,   253,   255,   256,   257,   258,   258,   258,
     259,   270,   271,   271,   272,   274,   295
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "IDENT", "FUNCTION",
  "BEGIN_PARAMS", "END_PARAMS", "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY",
  "END_BODY", "INTEGER", "ARRAY", "OF", "IF", "THEN", "ENDIF", "ELSE",
  "WHILE", "DO", "BEGINLOOP", "ENDLOOP", "CONTINUE", "BREAK", "READ",
  "WRITE", "NOT", "TRUE", "FALSE", "RETURN", "MINUS", "ADD", "MULT", "DIV",
  "MOD", "EQ", "NEQ", "LT", "GT", "LTE", "GTE", "SEMICOLON", "COLON",
  "COMMA", "L_PAREN", "R_PAREN", "L_SQUARE_BRACKET", "R_SQUARE_BRACKET",
  "ASSIGN", "$accept", "Program", "Function", "$@1", "$@2", "$@3",
  "Dec_colon", "Declaration", "Array", "Statement", "$@4", "$@5", "$@6",
  "$@7", "$@8", "$@9", "$@10", "$@11", "$@12", "$@13", "$@14", "$@15",
  "$@16", "$@17", "$@18", "$@19", "$@20", "$@21", "$@22", "Statement1",
  "Else_statement", "Bool_Exp", "Not", "Comp", "Expression", "Add_Op",
  "$@23", "$@24", "Multi_Exp", "Mult_Op", "$@25", "$@26", "$@27", "Term",
  "$@28", "$@29", "Term_Exp", "$@30", "Var", "Var_arr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
# endif

#define YYPACT_NINF -78

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-78)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       4,    13,    21,     4,   -78,   -78,   -78,   -19,    19,    37,
       0,   -78,    18,    43,    57,    37,    20,    53,    60,   -78,
      66,   -78,    37,    22,   -78,    58,    62,   -78,    70,     7,
      36,    61,    61,    63,    45,    47,    81,    89,     1,    84,
     -78,    93,   -78,    82,     1,    76,     7,   -78,   -78,    52,
     -78,    54,   -78,   -78,   -27,   -78,    64,    31,   -20,   -78,
     -78,   -78,    51,    59,     7,    14,     7,    80,     7,     7,
     105,    67,   107,    71,     1,     1,     1,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,     1,    68,    94,   -78,   -78,
     -78,   -78,   -78,   -78,     1,    96,   100,   -78,   -78,   -78,
      72,   -78,    73,   -78,    78,    69,    75,   -78,     7,     1,
       1,     1,     1,     1,    85,    25,     7,   109,   -78,    86,
      61,   -78,     7,   -78,     7,   -78,   -78,   -78,    83,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,    77,    98,   -78,
      90,     7,    91,    92,   -78,    95,   -78,     1,   -78,     7,
      97,   128,   131,     7,   -78,     7,   -78,   -78,   -78,   -78,
     -78,    88,   -78,   -78,   -78,   -78,     7,     7,     7,   108,
     101,   -78,   -78,   -78,    99,   -78,   134,     7,   102,   -78,
     137,   103,   110,   131,   104,   -78,   106,   -78,     7,   -78
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     3,     4,     1,     2,     0,     0,     9,
       0,     5,     0,    12,     0,     9,     0,     0,     0,     8,
       0,    10,     9,     0,     6,     0,     0,    11,     0,     0,
      85,    52,    52,     0,     0,     0,     0,     0,     0,     0,
      13,     0,    51,     0,     0,     0,     0,    40,    42,    85,
      28,    85,    31,    76,    85,    77,     0,    65,    73,    74,
      75,     7,     0,     0,     0,    59,     0,     0,    47,    47,
       0,     0,     0,     0,    84,     0,     0,    44,    63,    61,
      60,    67,    69,    71,    66,     0,     0,    49,    53,    54,
      55,    56,    57,    58,     0,     0,     0,    46,    41,    43,
       0,    29,     0,    32,    81,     0,     0,    78,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
      52,    34,    47,    37,    47,    82,    80,    86,     0,    45,
      64,    62,    68,    70,    72,    14,    19,    85,     0,    48,
       0,    47,     0,     0,    30,     0,    33,    84,    79,    47,
       0,     0,     0,    47,    26,    47,    35,    38,    83,    15,
      20,     0,    85,    16,    25,    27,    47,    47,    47,     0,
       0,    36,    39,    21,     0,    17,     0,    47,     0,    18,
       0,     0,     0,     0,     0,    22,     0,    23,    47,    24
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -78,   142,   -78,   -78,   -78,   -78,    -3,   -78,   -78,   -22,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -63,
     -78,   -29,   -78,   -78,   -28,   -78,   -78,   -78,   -77,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,    -1,   -78,   -36,   -78
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     7,    14,    26,    11,    12,    17,    97,
      62,   149,   170,   177,   150,   168,   186,   188,    71,   122,
      73,   124,   143,   166,   145,   167,    68,    69,   108,    98,
     117,    43,    44,    94,   104,    80,   110,   109,    57,    84,
     111,   112,   113,    58,    76,   128,   105,   147,    40,    60
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      50,    52,    59,    45,    53,    54,    99,    39,    59,     1,
      56,    30,    19,    81,    82,    83,    65,     4,    74,    24,
      75,     5,    31,     8,    67,     9,    32,    33,   136,   137,
      34,    35,    36,    37,   132,   133,   134,    38,    59,    59,
      59,    10,    87,    13,    95,   129,    55,   106,   107,    59,
      88,    89,    90,    91,    92,    93,    16,   114,    59,   144,
      15,   146,    78,    79,    18,    21,   118,    20,    22,    23,
      25,    28,    27,    59,    59,    59,    59,    59,   154,   138,
      29,   130,   131,    41,    46,    49,   159,    47,    42,    48,
     164,   142,   165,    51,   139,    61,    63,    66,    64,    70,
      85,    72,    96,   171,   172,   173,    77,    86,   100,   101,
     102,    59,   116,   103,   179,   126,   163,   115,   119,   120,
     121,   123,   125,   127,   151,   189,   140,   135,   141,   148,
     152,   161,   153,   155,   156,   162,   169,   157,   178,   160,
     181,   174,   183,   175,   176,     6,   158,   184,   187,   180,
     185,   182
};

static const yytype_uint8 yycheck[] =
{
      36,    37,    38,    32,     3,     4,    69,    29,    44,     5,
      38,     4,    15,    33,    34,    35,    44,     4,    45,    22,
      47,     0,    15,    42,    46,     6,    19,    20,     3,     4,
      23,    24,    25,    26,   111,   112,   113,    30,    74,    75,
      76,     4,    64,    43,    66,   108,    45,    75,    76,    85,
      36,    37,    38,    39,    40,    41,    13,    85,    94,   122,
      42,   124,    31,    32,     7,    12,    94,    47,     8,     3,
      48,     9,    14,   109,   110,   111,   112,   113,   141,   115,
      10,   109,   110,    47,    21,     4,   149,    42,    27,    42,
     153,   120,   155,     4,   116,    11,     3,    21,    16,    47,
      49,    47,    22,   166,   167,   168,    42,    48,     3,    42,
       3,   147,    18,    42,   177,    46,   152,    49,    22,    19,
      48,    48,    44,    48,    47,   188,    17,    42,    42,    46,
      32,     3,    42,    42,    42,     4,    48,    42,     4,    42,
       3,    33,    32,    42,    45,     3,   147,   183,    42,    47,
      46,    48
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    51,    52,     4,     0,    51,    53,    42,     6,
       4,    56,    57,    43,    54,    42,    13,    58,     7,    56,
      47,    12,     8,     3,    56,    48,    55,    14,     9,    10,
       4,    15,    19,    20,    23,    24,    25,    26,    30,    59,
      98,    47,    27,    81,    82,    81,    21,    42,    42,     4,
      98,     4,    98,     3,     4,    45,    84,    88,    93,    98,
      99,    11,    60,     3,    16,    84,    21,    59,    76,    77,
      47,    68,    47,    70,    45,    47,    94,    42,    31,    32,
      85,    33,    34,    35,    89,    49,    48,    59,    36,    37,
      38,    39,    40,    41,    83,    59,    22,    59,    79,    79,
       3,    42,     3,    42,    84,    96,    84,    84,    78,    87,
      86,    90,    91,    92,    84,    49,    18,    80,    84,    22,
      19,    48,    69,    48,    71,    44,    46,    48,    95,    79,
      84,    84,    88,    88,    88,    42,     3,     4,    98,    59,
      17,    42,    81,    72,    79,    74,    79,    97,    46,    61,
      64,    47,    32,    42,    79,    42,    42,    42,    96,    79,
      42,     3,     4,    98,    79,    79,    73,    75,    65,    48,
      62,    79,    79,    79,    33,    42,    45,    63,     4,    79,
      47,     3,    48,    32,    98,    46,    66,    42,    67,    79
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    51,    53,    54,    55,    52,    56,    56,
      57,    58,    58,    60,    61,    59,    62,    63,    59,    64,
      65,    59,    66,    67,    59,    59,    59,    59,    68,    69,
      59,    70,    71,    59,    72,    73,    59,    74,    75,    59,
      76,    59,    77,    59,    78,    59,    79,    79,    80,    80,
      81,    82,    82,    83,    83,    83,    83,    83,    83,    83,
      84,    86,    85,    87,    85,    85,    88,    90,    89,    91,
      89,    92,    89,    89,    93,    93,    93,    94,    95,    93,
      93,    96,    97,    96,    96,    98,    99
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     0,     0,     0,    15,     3,     0,
       4,     5,     0,     0,     0,     7,     0,     0,    12,     0,
       0,    10,     0,     0,    22,     8,     7,     8,     0,     0,
       6,     0,     0,     6,     0,     0,     9,     0,     0,     9,
       0,     4,     0,     4,     0,     5,     1,     0,     2,     0,
       4,     1,     0,     1,     1,     1,     1,     1,     1,     0,
       2,     0,     3,     0,     3,     0,     2,     0,     3,     0,
       3,     0,     3,     0,     1,     1,     1,     0,     0,     5,
       4,     1,     0,     4,     0,     1,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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
| yyreduce -- Do a reduction.  |
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 88 "miniL.y" /* yacc.c:1646  */
    {
  std::string func_name = (yyvsp[0].stval);
                if(symbol_table.size() > 0 && findFunction(func_name)) {
                        std::string msg = "Function already exists";
                        char a[msg.size()];
                        strcpy(a, msg.c_str());
                        yyerror(a);
                }
  std::cout << "func " + func_name << endl;
  add_function_to_symbol_table(func_name);
}
#line 1515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 99 "miniL.y" /* yacc.c:1646  */
    {org_params();}
#line 1521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 99 "miniL.y" /* yacc.c:1646  */
    {params.clear();}
#line 1527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 100 "miniL.y" /* yacc.c:1646  */
    {
  std::cout << "endfunc" << endl << endl;
}
#line 1535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 107 "miniL.y" /* yacc.c:1646  */
    {
        std::string value = (yyvsp[-3].stval);
        std::string num = (yyvsp[-1].stval);
        Type t;
        if(find(value)) {std::string msg = "identifier exists";
	char a[msg.size()];
	strcpy(a, msg.c_str());
        yyerror(a);
        }
        else{
        std:: cout << ".";

        if (num != "") {
                std::cout << "[] ";
               t = Array; 
        }
        else {
                std::cout << " ";
                t = Integer;
        }
        std::cout << value;
        if (num != "") {
                std::cout << ", " << num; 
        }
        std::cout << endl;
        add_variable_to_symbol_table(value, t);
        params.push_back(value);
        }
}
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 138 "miniL.y" /* yacc.c:1646  */
    {(yyval.stval) = (yyvsp[-2].stval);}
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 139 "miniL.y" /* yacc.c:1646  */
    {
                char a[1];
                strcpy(a, "");
                (yyval.stval) = a;
                }
#line 1585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 145 "miniL.y" /* yacc.c:1646  */
    {operands.push_back((yyvsp[0].stval)); args.push_back((yyvsp[0].stval)); arr.push_back((yyvsp[0].stval));
                }
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 147 "miniL.y" /* yacc.c:1646  */
    {if (operands.size() > 0) {organize_into_nodes();} }
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 148 "miniL.y" /* yacc.c:1646  */
    {
                        std::string temp = "temp_" + to_string(k);
                        k++;
                        std::cout << ". " << temp << endl;
                        std::cout << "+ " << temp << ", " << (yyvsp[-2].stval) << ", " << (yyvsp[0].stval) << endl;
                        std::cout << "[]= " << (yyvsp[-7].stval) << ", "<< (yyvsp[-5].stval) << ", " << temp;
                        }
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 155 "miniL.y" /* yacc.c:1646  */
    {std::cout << endl;}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 156 "miniL.y" /* yacc.c:1646  */
    {
                        std::cout << "[]= " << (yyvsp[-5].stval) << ", "<< (yyvsp[-3].stval) << ", " << (yyvsp[0].stval);
                        }
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 159 "miniL.y" /* yacc.c:1646  */
    {std::cout << endl;}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 161 "miniL.y" /* yacc.c:1646  */
    {
                        std::string temp1 = "temp_" + to_string(k);
                        k++;
                        std::cout << ". " << temp1 << endl;
                        std::cout << "=[] " << temp1 << ", " << (yyvsp[-12].stval) << ", " << (yyvsp[-10].stval) << endl;
                        std::string temp2 = "temp_" + to_string(k);
                        k++;
                        std::cout << ". " << temp2 << endl;
                        std::cout << "=[] " << temp2 << ", " << (yyvsp[-6].stval) << ", " << (yyvsp[-4].stval) << endl;
                        std::string temp3 = "temp_" + to_string(k);
                        k++;
                        std::cout << ". " << temp3 << endl;
                        std::cout << "+ "<< temp3 << ", " << temp2 << ", " << (yyvsp[-1].stval) << endl;
                        std::string temp4 = "temp_" + to_string(k);
                        k++;
                        std::cout << ". " << temp4 << endl;
                        std::cout << "* "<< temp4 << ", " << temp1 << ", " << temp3 << endl;
                        std::cout << "[]= " << (yyvsp[-17].stval) << ", "<< (yyvsp[-15].stval) << ", " << temp4;
                        }
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 180 "miniL.y" /* yacc.c:1646  */
    {std::cout << endl;}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 184 "miniL.y" /* yacc.c:1646  */
    {std::cout << ".< " << (yyvsp[0].stval);}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 184 "miniL.y" /* yacc.c:1646  */
    {std::cout << endl;}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 185 "miniL.y" /* yacc.c:1646  */
    {std::cout << ".> " << (yyvsp[0].stval);}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 185 "miniL.y" /* yacc.c:1646  */
    {std::cout << endl;}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 186 "miniL.y" /* yacc.c:1646  */
    {
                        std::string temp = "temp_" + to_string(k);
                        k++;
                        std::cout << ". " << temp << endl;
                        std::cout << "[]= " << temp << ", "<< (yyvsp[-3].stval) << ", " << (yyvsp[-1].stval) << endl;
                        std::cout << ".< " << (yyvsp[-3].stval);
                        }
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 193 "miniL.y" /* yacc.c:1646  */
    {std::cout << endl;}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 194 "miniL.y" /* yacc.c:1646  */
    {                        
                        std::string temp = "temp_" + to_string(k);
                        k++;
                        std::cout << ". " << temp << endl;
                        std::cout << "=[] " << temp << ", "<< (yyvsp[-3].stval) << ", " << (yyvsp[-1].stval) << endl;
                        std::cout << ".> " << temp;
                        }
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 201 "miniL.y" /* yacc.c:1646  */
    {std::cout << endl;}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 202 "miniL.y" /* yacc.c:1646  */
    {std::cout << endl;}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 203 "miniL.y" /* yacc.c:1646  */
    {std::cout << endl;}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 204 "miniL.y" /* yacc.c:1646  */
    {org_return_exp(); std::cout << endl;}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 228 "miniL.y" /* yacc.c:1646  */
    { operands.push_back("+"); args.push_back("+"); arr.push_back("+");
        }
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 232 "miniL.y" /* yacc.c:1646  */
    { operands.push_back("-"); args.push_back("-"); arr.push_back("-");
        }
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 235 "miniL.y" /* yacc.c:1646  */
    {}
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 242 "miniL.y" /* yacc.c:1646  */
    { operands.push_back("*"); args.push_back("*"); arr.push_back("*");
        }
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 246 "miniL.y" /* yacc.c:1646  */
    { operands.push_back("/"); args.push_back("/"); arr.push_back("/");
        }
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 250 "miniL.y" /* yacc.c:1646  */
    { operands.push_back("%"); args.push_back("%"); arr.push_back("%");
        }
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 253 "miniL.y" /* yacc.c:1646  */
    {}
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 255 "miniL.y" /* yacc.c:1646  */
    {operands.push_back((yyvsp[0].stval)); args.push_back((yyvsp[0].stval)); arr.push_back((yyvsp[0].stval));}
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 256 "miniL.y" /* yacc.c:1646  */
    {arr.push_back((yyvsp[0].stval));}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 257 "miniL.y" /* yacc.c:1646  */
    {operands.push_back((yyvsp[0].stval)); args.push_back((yyvsp[0].stval)); (yyval.stval) = (yyvsp[0].stval); arr.push_back((yyvsp[0].stval));}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 258 "miniL.y" /* yacc.c:1646  */
    {operands.push_back("("); arr.push_back("(");}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 258 "miniL.y" /* yacc.c:1646  */
    {organize_into_nodes(); }
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 259 "miniL.y" /* yacc.c:1646  */
    {                
                std::string val = (yyvsp[-3].stval);
                if(!findFunction(val)) {
                        std::string msg = "Unidentified function";
	                char a[msg.size()];
		        strcpy(a, msg.c_str());
                        yyerror(a);
                }
                args.push_back((yyvsp[-3].stval)); org_args();
        }
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 271 "miniL.y" /* yacc.c:1646  */
    {args.push_back(",");}
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 272 "miniL.y" /* yacc.c:1646  */
    {}
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 274 "miniL.y" /* yacc.c:1646  */
    {  
        std::string val = (yyvsp[0].stval);
        if(find(val)) {
                if (!isArray(val)) { 
                                (yyval.stval) = (yyvsp[0].stval); 
                        }
                        else {
                                std::string msg = "Identifier is not an integer type";
                                char a[msg.size()];
                                strcpy(a, msg.c_str());
                                yyerror(a);
                        }
        }
        else {  
                std::string msg = "Unidentified identifier";
	        char a[msg.size()];
		strcpy(a, msg.c_str());
                yyerror(a);
                }
        }
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 295 "miniL.y" /* yacc.c:1646  */
    {        
                std::string val = (yyvsp[-3].stval);
                if(find(val)) {
                        if (isArray(val)) { 
                                (yyval.stval) = (yyvsp[-3].stval); 
                                org_array();
                        }
                        else {
                                std::string msg = "Identifier is not an array type";
                                char a[msg.size()];
                                strcpy(a, msg.c_str());
                                yyerror(a);
                        }
                }
                else {  
                        std::string msg = "Unidentified identifier";
                        char a[msg.size()];
                        strcpy(a, msg.c_str());
                        yyerror(a);
                }


                }
#line 1895 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1899 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 322 "miniL.y" /* yacc.c:1906  */
 

int main(int argc, char **argv) {
   yyin = stdin;
   yyparse();
   std::string val = "main"; 
   if(!findFunction(val)){
           std::string msg = "Not defined main";
	        char a[msg.size()];
		strcpy(a, msg.c_str());
                yyerror(a);
                }
   print_symbol_table();
   return 0;
}

void yyerror(const char *msg) {
    /* implement your error handling */
   fprintf(stderr,"At Line %d : %s\n",yylineno,msg);
}
