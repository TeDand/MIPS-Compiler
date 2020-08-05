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

#line 67 "src/C_parser.tab.cpp" /* yacc.c:339  */

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
   by #include "C_parser.tab.hpp".  */
#ifndef YY_YY_SRC_C_PARSER_TAB_HPP_INCLUDED
# define YY_YY_SRC_C_PARSER_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "src/C_parser.y" /* yacc.c:355  */

  #include "ast.hpp"

  #include <cassert>

  extern const Expression *g_root; // A way of getting the AST out

  //! This is to fix problems when generating C++
  // We are declaring the functions provided by Flex, so
  // that Bison generated code can call them.
  int yylex(void);
  void yyerror(const char *);

#line 111 "src/C_parser.tab.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_VARIABLE = 258,
    T_INTEGER = 259,
    T_STRING = 260,
    T_TYPEDEF = 261,
    T_INC_OP = 262,
    T_DEC_OP = 263,
    T_LEFT_OP = 264,
    T_RIGHT_OP = 265,
    T_LE_OP = 266,
    T_GE_OP = 267,
    T_GT = 268,
    T_LT = 269,
    T_EQUALTO = 270,
    T_NOT_EQUALTO = 271,
    T_TIMES = 272,
    T_PLUS = 273,
    T_MINUS = 274,
    T_DIVIDE = 275,
    T_NOT = 276,
    T_XOR_OP = 277,
    T_TILDA = 278,
    T_COMMA = 279,
    T_SEMICOLON = 280,
    T_LBRACKET = 281,
    T_RBRACKET = 282,
    T_ASS = 283,
    T_LCBRACKET = 284,
    T_RCBRACKET = 285,
    T_LSBRACKET = 286,
    T_RSBRACKET = 287,
    T_COLON = 288,
    T_AND_OP = 289,
    T_OR_OP = 290,
    T_LOGICAL_AND_OP = 291,
    T_LOGICAL_OR_OP = 292,
    MUL_ASSIGN = 293,
    DIV_ASSIGN = 294,
    MOD_ASSIGN = 295,
    ADD_ASSIGN = 296,
    SUB_ASSIGN = 297,
    LEFT_ASSIGN = 298,
    RIGHT_ASSIGN = 299,
    AND_ASSIGN = 300,
    XOR_ASSIGN = 301,
    OR_ASSIGN = 302,
    T_MOD = 303,
    T_CHAR = 304,
    T_INT = 305,
    T_UNSIGNED = 306,
    T_FLOAT = 307,
    T_DOUBLE = 308,
    T_VOID = 309,
    STRUCT = 310,
    T_ENUM = 311,
    T_CASE = 312,
    T_DEFAULT = 313,
    T_IF = 314,
    T_ELSE = 315,
    T_SWITCH = 316,
    T_WHILE = 317,
    DO = 318,
    T_CONTINUE = 319,
    T_BREAK = 320,
    T_RETURN = 321,
    T_FOR = 322
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 17 "src/C_parser.y" /* yacc.c:355  */

  const Expression *expr;
  double number;
  std::string *string;

#line 197 "src/C_parser.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_C_PARSER_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 214 "src/C_parser.tab.cpp" /* yacc.c:358  */

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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
#define YYFINAL  32
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   763

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  167
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  285

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   322

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
       2,     2,     2,     2,     2,     2,    68,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    67,    67,    70,    71,    72,    76,    77,    78,    79,
      80,    81,    82,    86,    87,    91,    92,    93,    94,    98,
      99,   100,   101,   102,   103,   107,   108,   112,   113,   114,
     115,   119,   120,   121,   125,   126,   127,   131,   132,   133,
     134,   135,   139,   140,   141,   145,   146,   150,   151,   155,
     156,   160,   161,   165,   166,   170,   171,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   189,   190,
     194,   195,   199,   200,   201,   202,   206,   207,   211,   212,
     216,   217,   218,   219,   220,   221,   222,   223,   227,   228,
     229,   233,   234,   238,   242,   243,   247,   248,   252,   253,
     254,   258,   259,   260,   264,   265,   269,   270,   274,   275,
     279,   280,   281,   282,   283,   284,   285,   289,   290,   294,
     295,   299,   300,   304,   305,   309,   310,   311,   315,   316,
     320,   321,   322,   323,   324,   325,   329,   330,   331,   335,
     336,   337,   338,   342,   343,   347,   348,   352,   353,   357,
     358,   359,   363,   364,   365,   366,   370,   371,   372,   373,
     377,   378,   382,   383,   387,   388,   389,   390
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_VARIABLE", "T_INTEGER", "T_STRING",
  "T_TYPEDEF", "T_INC_OP", "T_DEC_OP", "T_LEFT_OP", "T_RIGHT_OP",
  "T_LE_OP", "T_GE_OP", "T_GT", "T_LT", "T_EQUALTO", "T_NOT_EQUALTO",
  "T_TIMES", "T_PLUS", "T_MINUS", "T_DIVIDE", "T_NOT", "T_XOR_OP",
  "T_TILDA", "T_COMMA", "T_SEMICOLON", "T_LBRACKET", "T_RBRACKET", "T_ASS",
  "T_LCBRACKET", "T_RCBRACKET", "T_LSBRACKET", "T_RSBRACKET", "T_COLON",
  "T_AND_OP", "T_OR_OP", "T_LOGICAL_AND_OP", "T_LOGICAL_OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "T_MOD", "T_CHAR", "T_INT", "T_UNSIGNED", "T_FLOAT", "T_DOUBLE",
  "T_VOID", "STRUCT", "T_ENUM", "T_CASE", "T_DEFAULT", "T_IF", "T_ELSE",
  "T_SWITCH", "T_WHILE", "DO", "T_CONTINUE", "T_BREAK", "T_RETURN",
  "T_FOR", "'.'", "$accept", "ROOT", "PRIMARY_EXPRESSION",
  "POSTFIX_EXPRESSION", "ARGUMENT_EXP_LIST", "UNARY_EXPRESSION", "UNARY",
  "CAST_EXPRESSION", "MULTIPLICATIVE_EXPRESSION", "ADDITIVE_EXPRESSION",
  "SHIFT_EXPRESSION", "RELATIONAL_EXPRESSION", "EQUALITY_EXPRESSION",
  "AND_EXPRESSION", "EXCLUSIVE_OR_EXPRESSION", "BITWISE_OR_EXPRESSION",
  "LOGICAL_AND_EXPRESSION", "LOGICAL_OR_EXPRESSION",
  "ASSIGNMENT_EXPRESSION", "ASSIGNMENT_OPERATOR", "EXPR", "DECLARATION",
  "DECLARATION_SPECIFIERS", "INIT_DECLARATOR_LIST", "INIT_DECLARATOR",
  "TYPE_SPECIFIER", "STRUCT_SPECIFIER", "STRUCT_DECLARATION_LIST",
  "STRUCT_DECLARATION", "SPECIFIER_QUALIFIER_LIST",
  "STRUCT_DECLARATOR_LIST", "STRUCT_DECLARATOR", "ENUM_SPECIFIER",
  "ENUMERATOR_LIST", "ENUMERATOR", "DECLARATOR", "DIRECT_DECLARATOR",
  "POINTER", "PARAMETER_LIST", "PARAMETER_DECLARATION", "IDENTIFIER_LIST",
  "INITIALISER", "INITIALISER_LIST", "STATEMENT", "LABELED_STATEMENT",
  "COMPOUND_STATEMENT", "DECLARATION_LIST", "STATEMENT_LIST",
  "EXPRESSION_STATEMENT", "CONDITIONAL", "ITERATION_STATEMENT", "JUMP",
  "TRANSLATION_UNIT", "EXTERNAL_DECLARATION", "FUNCTION_DEFINITION", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,    46
};
# endif

#define YYPACT_NINF -147

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-147)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     114,  -147,   230,     1,    45,  -147,  -147,  -147,  -147,  -147,
    -147,    29,    39,    43,  -147,    47,   230,  -147,  -147,   399,
      25,    49,   114,  -147,  -147,  -147,  -147,    42,    30,   139,
      77,   107,  -147,  -147,     2,  -147,   334,  -147,   205,  -147,
      47,  -147,   399,   193,   104,    25,  -147,  -147,   139,   139,
     260,  -147,    57,   107,    90,    -9,  -147,    45,  -147,   594,
    -147,   399,    91,  -147,   708,   708,  -147,  -147,  -147,  -147,
    -147,  -147,   530,  -147,  -147,   729,   100,   111,   156,   160,
     465,   155,   181,   618,   184,  -147,     9,   464,   729,  -147,
      19,   125,   162,   163,   217,   180,   197,   186,   189,   190,
    -147,   227,  -147,  -147,  -147,   270,   335,  -147,  -147,  -147,
    -147,   201,  -147,  -147,  -147,  -147,    45,    76,  -147,   105,
    -147,  -147,  -147,    72,   321,  -147,  -147,  -147,   729,   282,
    -147,   232,    31,   729,   107,  -147,  -147,   594,  -147,  -147,
    -147,   465,   729,  -147,  -147,   115,   248,    48,   465,   729,
     729,   729,   235,  -147,  -147,  -147,   293,   642,  -147,  -147,
     666,   729,   289,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,   729,  -147,   729,   729,   729,   729,
     729,   729,   729,   729,   729,   729,   729,   729,   729,   729,
     729,   729,   729,   729,   729,  -147,  -147,   400,  -147,  -147,
    -147,   230,  -147,   291,  -147,  -147,  -147,   190,    57,  -147,
     729,  -147,   190,  -147,  -147,    65,  -147,  -147,   729,   465,
    -147,   154,   213,   214,   277,  -147,   642,  -147,   226,  -147,
     -10,  -147,  -147,  -147,  -147,  -147,    19,    19,   125,   125,
     162,   162,   162,   162,   163,   163,   217,   180,   197,   186,
     189,  -147,  -147,  -147,  -147,  -147,   190,   570,  -147,  -147,
    -147,   465,   465,   465,   729,   687,   729,  -147,  -147,  -147,
    -147,   281,  -147,  -147,   274,   465,   278,  -147,   465,   283,
    -147,   465,  -147,  -147,  -147
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   110,    72,   117,     0,    81,    82,    85,    83,    84,
      80,     0,     0,     0,   163,     0,    74,    86,    87,     0,
     109,     0,     2,   160,   162,    73,   118,     0,    90,     0,
     103,     0,     1,    70,     0,    76,    78,    75,     0,   143,
       0,   167,     0,     0,     0,   108,   161,   111,     0,    95,
       0,    91,     0,     0,   106,     0,   104,     0,    71,     0,
     165,     0,     3,     4,     0,     0,    20,    21,    22,    23,
      24,   147,     0,   139,    19,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     6,    15,    25,     0,    27,
      31,    34,    37,    42,    45,    47,    49,    51,    53,    55,
      68,     0,   145,   130,   131,     0,     0,   132,   133,   134,
     135,    78,   144,   166,   123,   116,   122,     0,   119,     0,
       3,   113,    25,     0,     0,    94,    89,    92,     0,     0,
      96,    98,     0,     0,     0,   101,    77,     0,   125,    79,
     164,     0,     0,    16,    17,     0,     0,     0,     0,     0,
       0,     0,     0,   156,   157,   158,     0,     0,    11,    12,
       0,     0,     0,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,     0,    18,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   148,   141,     0,   140,   146,
     121,     0,   114,     0,   115,   112,    88,    99,     0,    93,
       0,   102,   107,   105,   128,     0,   136,     5,     0,     0,
     138,     0,     0,     0,     0,   159,     0,     8,     0,    13,
       0,    10,    56,    28,    29,    30,    32,    33,    35,    36,
      40,    41,    39,    38,    43,    44,    46,    48,    50,    52,
      54,    69,   142,   120,   124,    97,   100,     0,   126,    26,
     137,     0,     0,     0,     0,     0,     0,     9,     7,   127,
     129,   149,   151,   152,     0,     0,     0,    14,     0,     0,
     154,     0,   150,   153,   155
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -147,  -147,  -147,  -147,  -147,   -31,  -147,   -84,   165,   166,
      32,   179,   141,   159,   164,   158,   153,   -37,   -59,  -147,
     -63,    23,     3,  -147,   300,   -19,  -147,   311,   -42,    27,
    -147,   170,  -147,   315,   245,    -3,   359,   378,  -147,   194,
    -147,  -131,  -147,   -78,  -147,     5,    78,   286,  -146,  -147,
    -147,  -147,  -147,   360,  -147
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    85,    86,   228,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   174,
     101,    39,    40,    34,    35,    16,    17,    50,    51,    52,
     129,   130,    18,    55,    56,    19,    20,    21,   117,   118,
     119,   139,   215,   102,   103,   104,    42,   106,   107,   108,
     109,   110,    22,    23,    24
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     138,    27,   152,    15,   175,    25,   214,   123,   127,   145,
      49,   226,    36,   122,   194,   134,   158,   159,     3,    37,
     156,   135,   268,    14,    41,    15,    57,    58,   199,    49,
      49,    49,    28,   143,   144,   160,   176,   111,   147,   177,
     161,    60,    30,    32,   122,    14,   116,   113,     1,   131,
       1,    43,     1,    49,   111,   134,    44,   122,    29,    48,
       1,   211,     3,   216,     3,   112,   140,   178,    31,    47,
     220,     4,    33,     4,     3,     4,   125,   162,   138,   145,
     265,   219,   127,     4,   112,   193,   221,   222,   223,   257,
     128,   207,   233,   234,   235,   258,   212,   122,   230,   146,
     201,   229,   122,   202,   205,    49,    53,   120,    63,   193,
      54,    64,    65,   200,    61,   232,   105,     1,   133,   199,
       2,    66,    67,    68,   141,    69,   270,    70,   112,   203,
      72,     3,   204,   148,   259,   251,   121,   149,    74,   194,
       4,   260,   217,   179,   180,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,     5,     6,     7,     8,     9,    10,    11,
      12,   181,   182,   256,   183,   184,   185,   186,   194,   122,
     153,   261,   150,   271,   272,   273,   151,   122,     5,     6,
       7,     8,     9,    10,    11,    12,   114,   280,   138,     2,
     282,   274,   276,   284,   116,   131,   154,   277,    62,    63,
     157,     2,    64,    65,   189,   240,   241,   242,   243,   190,
     115,   191,    66,    67,    68,   192,    69,   193,    70,    59,
      71,    72,   187,   188,    38,    73,     2,   194,   194,    74,
     262,   263,     5,     6,     7,     8,     9,    10,    11,    12,
     266,   194,   195,   267,     5,     6,     7,     8,     9,    10,
      11,    12,    75,    76,    77,   210,    78,    79,    80,    81,
      82,    83,    84,    62,    63,   218,     2,    64,    65,     5,
       6,     7,     8,     9,    10,    11,    12,    66,    67,    68,
     126,    69,   231,    70,   254,    71,    72,   224,   194,    38,
     196,   279,   194,   264,    74,   281,   208,   209,   283,     5,
       6,     7,     8,     9,    10,    11,    12,   194,   225,     5,
       6,     7,     8,     9,    10,    11,    12,    75,    76,    77,
     246,    78,    79,    80,    81,    82,    83,    84,    62,    63,
       2,   278,    64,    65,   236,   237,   250,   238,   239,   247,
     249,   206,    66,    67,    68,   248,    69,   136,    70,   124,
      71,    72,    59,    38,    38,   198,   244,   245,   132,    74,
       5,     6,     7,     8,     9,    10,    11,    12,   255,   213,
      45,    26,    46,     5,     6,     7,     8,     9,    10,    11,
      12,   197,    75,    76,    77,   253,    78,    79,    80,    81,
      82,    83,    84,    62,    63,     2,     0,    64,    65,     0,
       0,     0,     0,     0,     0,     0,     0,    66,    67,    68,
       0,    69,     0,    70,     0,    71,    72,     0,    38,    38,
     252,     0,     0,     0,    74,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     8,     9,    10,    11,    12,     0,    75,    76,    77,
       0,    78,    79,    80,    81,    82,    83,    84,    62,    63,
       0,     0,    64,    65,     0,     0,     0,     0,     0,     0,
       0,     0,    66,    67,    68,     0,    69,     0,    70,     0,
      71,    72,   163,     0,    38,     0,     0,     0,     0,    74,
       0,     0,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    75,    76,    77,     0,    78,    79,    80,    81,
      82,    83,    84,   120,    63,     0,     0,    64,    65,     0,
       0,     0,     0,     0,     0,     0,     0,    66,    67,    68,
       0,    69,     0,    70,     0,     0,    72,     0,     0,     0,
       0,     0,     0,     0,    74,     0,     0,     0,     0,     0,
       0,     0,     0,   120,    63,     0,     0,    64,    65,     5,
       6,     7,     8,     9,    10,    11,    12,    66,    67,    68,
       0,    69,     0,    70,     0,     0,    72,   120,    63,   137,
     269,    64,    65,     0,    74,     0,     0,     0,     0,     0,
       0,    66,    67,    68,     0,    69,     0,    70,     0,     0,
      72,   120,    63,   137,     0,    64,    65,     0,    74,     0,
       0,     0,     0,     0,     0,    66,    67,    68,     0,    69,
       0,    70,     0,   155,    72,   120,    63,     0,     0,    64,
      65,     0,    74,     0,     0,     0,     0,     0,     0,    66,
      67,    68,     0,    69,     0,    70,     0,    71,    72,   120,
      63,     0,     0,    64,    65,     0,    74,     0,     0,     0,
       0,     0,     0,    66,    67,    68,     0,    69,     0,    70,
     120,    63,    72,   227,    64,    65,     0,     0,     0,     0,
      74,     0,     0,     0,    66,    67,    68,     0,    69,     0,
      70,   120,    63,    72,   275,    64,    65,     0,     0,     0,
       0,    74,     0,     0,     0,    66,    67,    68,     0,    69,
       0,    70,   120,    63,   142,     0,    64,    65,     0,     0,
       0,     0,    74,     0,     0,     0,    66,    67,    68,     0,
      69,     0,    70,     0,     0,    72,     0,     0,     0,     0,
       0,     0,     0,    74
};

static const yytype_int16 yycheck[] =
{
      59,     4,    80,     0,    88,     2,   137,    44,    50,    72,
      29,   157,    15,    44,    24,    24,     7,     8,    17,    16,
      83,    30,    32,     0,    19,    22,    24,    25,   106,    48,
      49,    50,     3,    64,    65,    26,    17,    40,    75,    20,
      31,    36,     3,     0,    75,    22,    43,    42,     3,    52,
       3,    26,     3,    72,    57,    24,    31,    88,    29,    29,
       3,    30,    17,   141,    17,    42,    61,    48,    29,    27,
     148,    26,    25,    26,    17,    26,    49,    68,   137,   142,
     226,    33,   124,    26,    61,    37,   149,   150,   151,    24,
      33,   128,   176,   177,   178,    30,   133,   128,   161,    72,
      24,   160,   133,    27,    32,   124,    29,     3,     4,    37,
       3,     7,     8,   116,    36,   174,    38,     3,    28,   197,
       6,    17,    18,    19,    33,    21,   257,    23,   105,    24,
      26,    17,    27,    33,   218,   194,    32,    26,    34,    24,
      26,   219,    27,    18,    19,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,    49,    50,    51,    52,    53,    54,    55,
      56,     9,    10,   210,    11,    12,    13,    14,    24,   210,
      25,    27,    26,   261,   262,   263,    26,   218,    49,    50,
      51,    52,    53,    54,    55,    56,     3,   275,   257,     6,
     278,   264,   265,   281,   201,   208,    25,   266,     3,     4,
      26,     6,     7,     8,    34,   183,   184,   185,   186,    22,
      27,    35,    17,    18,    19,    36,    21,    37,    23,    28,
      25,    26,    15,    16,    29,    30,     6,    24,    24,    34,
      27,    27,    49,    50,    51,    52,    53,    54,    55,    56,
      24,    24,    25,    27,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    33,    61,    62,    63,    64,
      65,    66,    67,     3,     4,    27,     6,     7,     8,    49,
      50,    51,    52,    53,    54,    55,    56,    17,    18,    19,
      30,    21,     3,    23,     3,    25,    26,    62,    24,    29,
      30,    27,    24,    26,    34,    27,    24,    25,    25,    49,
      50,    51,    52,    53,    54,    55,    56,    24,    25,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
     189,    61,    62,    63,    64,    65,    66,    67,     3,     4,
       6,    60,     7,     8,   179,   180,   193,   181,   182,   190,
     192,    30,    17,    18,    19,   191,    21,    57,    23,    48,
      25,    26,    28,    29,    29,    30,   187,   188,    53,    34,
      49,    50,    51,    52,    53,    54,    55,    56,   208,   134,
      21,     3,    22,    49,    50,    51,    52,    53,    54,    55,
      56,   105,    57,    58,    59,   201,    61,    62,    63,    64,
      65,    66,    67,     3,     4,     6,    -1,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,
      -1,    21,    -1,    23,    -1,    25,    26,    -1,    29,    29,
      30,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    57,    58,    59,
      -1,    61,    62,    63,    64,    65,    66,    67,     3,     4,
      -1,    -1,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    -1,    21,    -1,    23,    -1,
      25,    26,    28,    -1,    29,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,     3,     4,    -1,    -1,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,
      -1,    21,    -1,    23,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,    -1,    -1,     7,     8,    49,
      50,    51,    52,    53,    54,    55,    56,    17,    18,    19,
      -1,    21,    -1,    23,    -1,    -1,    26,     3,     4,    29,
      30,     7,     8,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    19,    -1,    21,    -1,    23,    -1,    -1,
      26,     3,     4,    29,    -1,     7,     8,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    -1,    21,
      -1,    23,    -1,    25,    26,     3,     4,    -1,    -1,     7,
       8,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    19,    -1,    21,    -1,    23,    -1,    25,    26,     3,
       4,    -1,    -1,     7,     8,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    19,    -1,    21,    -1,    23,
       3,     4,    26,    27,     7,     8,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    17,    18,    19,    -1,    21,    -1,
      23,     3,     4,    26,    27,     7,     8,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    17,    18,    19,    -1,    21,
      -1,    23,     3,     4,    26,    -1,     7,     8,    -1,    -1,
      -1,    -1,    34,    -1,    -1,    -1,    17,    18,    19,    -1,
      21,    -1,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,    17,    26,    49,    50,    51,    52,    53,
      54,    55,    56,    70,    90,    91,    94,    95,   101,   104,
     105,   106,   121,   122,   123,    91,   106,   104,     3,    29,
       3,    29,     0,    25,    92,    93,   104,    91,    29,    90,
      91,   114,   115,    26,    31,   105,   122,    27,    29,    94,
      96,    97,    98,    29,     3,   102,   103,    24,    25,    28,
     114,   115,     3,     4,     7,     8,    17,    18,    19,    21,
      23,    25,    26,    30,    34,    57,    58,    59,    61,    62,
      63,    64,    65,    66,    67,    71,    72,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    89,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   104,    90,   114,     3,    27,    91,   107,   108,   109,
       3,    32,    74,    86,    96,    98,    30,    97,    33,    99,
     100,   104,   102,    28,    24,    30,    93,    29,    87,   110,
     114,    33,    26,    74,    74,    89,    98,    86,    33,    26,
      26,    26,   112,    25,    25,    25,    89,    26,     7,     8,
      26,    31,    68,    28,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    88,    76,    17,    20,    48,    18,
      19,     9,    10,    11,    12,    13,    14,    15,    16,    34,
      22,    35,    36,    37,    24,    25,    30,   116,    30,   112,
     104,    24,    27,    24,    27,    32,    30,    86,    24,    25,
      33,    30,    86,   103,   110,   111,   112,    27,    27,    33,
     112,    89,    89,    89,    62,    25,   117,    27,    73,    87,
      89,     3,    87,    76,    76,    76,    77,    77,    78,    78,
      79,    79,    79,    79,    80,    80,    81,    82,    83,    84,
      85,    87,    30,   108,     3,   100,    86,    24,    30,    76,
     112,    27,    27,    27,    26,   117,    24,    27,    32,    30,
     110,   112,   112,   112,    89,    27,    89,    87,    60,    27,
     112,    27,   112,    25,   112
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    71,    71,    71,    72,    72,    72,    72,
      72,    72,    72,    73,    73,    74,    74,    74,    74,    75,
      75,    75,    75,    75,    75,    76,    76,    77,    77,    77,
      77,    78,    78,    78,    79,    79,    79,    80,    80,    80,
      80,    80,    81,    81,    81,    82,    82,    83,    83,    84,
      84,    85,    85,    86,    86,    87,    87,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    89,    89,
      90,    90,    91,    91,    91,    91,    92,    92,    93,    93,
      94,    94,    94,    94,    94,    94,    94,    94,    95,    95,
      95,    96,    96,    97,    98,    98,    99,    99,   100,   100,
     100,   101,   101,   101,   102,   102,   103,   103,   104,   104,
     105,   105,   105,   105,   105,   105,   105,   106,   106,   107,
     107,   108,   108,   109,   109,   110,   110,   110,   111,   111,
     112,   112,   112,   112,   112,   112,   113,   113,   113,   114,
     114,   114,   114,   115,   115,   116,   116,   117,   117,   118,
     118,   118,   119,   119,   119,   119,   120,   120,   120,   120,
     121,   121,   122,   122,   123,   123,   123,   123
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     2,     2,     1,     3,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     3,     1,     2,     1,     2,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     4,
       2,     1,     2,     3,     2,     1,     1,     3,     1,     2,
       3,     4,     5,     2,     1,     3,     1,     3,     2,     1,
       1,     3,     4,     3,     4,     4,     3,     1,     2,     1,
       3,     2,     1,     1,     3,     1,     3,     4,     1,     3,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     2,
       3,     3,     4,     1,     2,     1,     2,     1,     2,     5,
       7,     5,     5,     7,     6,     7,     2,     2,     2,     3,
       1,     2,     1,     1,     4,     3,     3,     2
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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                                              );
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 67 "src/C_parser.y" /* yacc.c:1646  */
    {g_root = (yyvsp[0].expr);}
#line 1613 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 70 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Variable(*(yyvsp[0].string));}
#line 1619 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 71 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Number((yyvsp[0].number));}
#line 1625 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 72 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr);}
#line 1631 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 76 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 1637 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 77 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new ArrayAccess((yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 1643 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 78 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new PostfixExpression((yyvsp[-2].expr), NULL);}
#line 1649 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 79 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new PostfixExpression((yyvsp[-3].expr), (yyvsp[-1].expr));}
#line 1655 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 80 "src/C_parser.y" /* yacc.c:1646  */
    {}
#line 1661 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 81 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new IncOperator((yyvsp[-1].expr), *(yyvsp[0].string)); }
#line 1667 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 82 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new IncOperator((yyvsp[-1].expr), *(yyvsp[0].string)); }
#line 1673 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 86 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new ArguementList(NULL, (yyvsp[0].expr)); }
#line 1679 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 87 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new ArguementList((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1685 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 91 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 1691 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 92 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new PreIncOperator(*(yyvsp[-1].string), (yyvsp[0].expr));}
#line 1697 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 93 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new PreIncOperator(*(yyvsp[-1].string), (yyvsp[0].expr));}
#line 1703 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 94 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new UnaryOperator(*(yyvsp[-1].string), (yyvsp[0].expr));}
#line 1709 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 98 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.string) = new std::string(*(yyvsp[0].string));}
#line 1715 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 99 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.string) = new std::string(*(yyvsp[0].string));}
#line 1721 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 100 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.string) = new std::string(*(yyvsp[0].string));;}
#line 1727 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 101 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.string) = new std::string(*(yyvsp[0].string));}
#line 1733 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 102 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.string) = new std::string(*(yyvsp[0].string));}
#line 1739 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 103 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.string) = new std::string(*(yyvsp[0].string));}
#line 1745 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 107 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 1751 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 108 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 1757 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 112 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 1763 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 113 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new MulOperator((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1769 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 114 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new DivOperator((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1775 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 115 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new ModOperator((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1781 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 119 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 1787 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 120 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new AddOperator((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1793 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 121 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new SubOperator((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1799 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 125 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 1805 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 126 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new LeftShiftOperator((yyvsp[-2].expr),(yyvsp[0].expr));}
#line 1811 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 127 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new RightShiftOperator((yyvsp[-2].expr),(yyvsp[0].expr)); }
#line 1817 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 131 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 1823 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 132 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new LessThanOperator((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1829 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 133 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new GreaterThanOperator((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1835 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 134 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new LessThanEquOperator((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1841 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 135 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new GreaterThanEquOperator((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1847 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 139 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 1853 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 140 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new EqualityOperator((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1859 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 141 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new InEqualityOperator((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1865 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 145 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 1871 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 146 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new BitAndOperator((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1877 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 150 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 1883 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 151 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new XOROperator((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1889 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 155 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 1895 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 156 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new BitOrOperator((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1901 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 160 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 1907 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 161 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new AndOperator((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1913 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 165 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 1919 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 166 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new OrOperator((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1925 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 170 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 1931 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 171 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new AssignmentOperator((yyvsp[-2].expr), *(yyvsp[-1].string), (yyvsp[0].expr));}
#line 1937 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 175 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.string) = new std::string(*(yyvsp[0].string));}
#line 1943 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 176 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.string) = new std::string(*(yyvsp[0].string));}
#line 1949 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 177 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.string) = new std::string(*(yyvsp[0].string));}
#line 1955 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 178 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.string) = new std::string(*(yyvsp[0].string));}
#line 1961 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 179 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.string) = new std::string(*(yyvsp[0].string));}
#line 1967 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 180 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.string) = new std::string(*(yyvsp[0].string));}
#line 1973 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 181 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.string) = new std::string(*(yyvsp[0].string));}
#line 1979 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 182 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.string) = new std::string(*(yyvsp[0].string));}
#line 1985 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 183 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.string) = new std::string(*(yyvsp[0].string));}
#line 1991 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 184 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.string) = new std::string(*(yyvsp[0].string));}
#line 1997 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 185 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.string) = new std::string(*(yyvsp[0].string));}
#line 2003 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 189 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2009 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 190 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2015 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 194 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2021 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 195 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Declaration((yyvsp[-1].expr)); }
#line 2027 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 199 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2033 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 200 "src/C_parser.y" /* yacc.c:1646  */
    {}
#line 2039 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 201 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2045 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 202 "src/C_parser.y" /* yacc.c:1646  */
    {}
#line 2051 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 206 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2057 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 207 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new DeclaratorList((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2063 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 211 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new AssDeclaration((yyvsp[0].expr), NULL); }
#line 2069 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 212 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new AssDeclaration((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2075 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 216 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2081 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 217 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2087 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 218 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2093 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 219 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2099 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 220 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2105 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 221 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2111 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 222 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2117 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 223 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2123 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 227 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2129 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 228 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2135 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 229 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2141 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 233 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2147 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 234 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2153 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 238 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2159 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 242 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2165 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 243 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2171 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 247 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2177 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 248 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2183 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 252 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2189 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 253 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2195 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 254 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2201 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 258 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2207 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 259 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Enum((yyvsp[-1].expr)); }
#line 2213 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 260 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2219 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 264 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr); }
#line 2225 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 265 "src/C_parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new EnumList((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2231 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 269 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new EnumAss(*(yyvsp[0].string), NULL);}
#line 2237 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 270 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new EnumAss(*(yyvsp[-2].string), (yyvsp[0].expr)); }
#line 2243 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 274 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2249 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 275 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 2255 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 279 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Variable(*(yyvsp[0].string)); }
#line 2261 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 280 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2267 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 281 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Array((yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 2273 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 282 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2279 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 283 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new FunctionParamDec((yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 2285 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 284 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2291 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 285 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new FunctionParamDec((yyvsp[-2].expr), NULL); }
#line 2297 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 289 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2303 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 290 "src/C_parser.y" /* yacc.c:1646  */
    {  }
#line 2309 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 294 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 2315 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 295 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new ParamList((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 2321 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 299 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new ParamDeclaration((yyvsp[0].expr));}
#line 2327 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 300 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2333 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 304 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new Variable(*(yyvsp[0].string));}
#line 2339 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 305 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2345 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 309 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 2351 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 310 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2357 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 311 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2363 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 315 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2369 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 316 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2375 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 320 "src/C_parser.y" /* yacc.c:1646  */
    { }
#line 2381 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 321 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 2387 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 322 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 2393 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 323 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 2399 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 324 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 2405 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 325 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr);}
#line 2411 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 329 "src/C_parser.y" /* yacc.c:1646  */
    {  }
#line 2417 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 330 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new CaseStatement((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2423 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 331 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new DefaultStatement((yyvsp[0].expr)); }
#line 2429 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 335 "src/C_parser.y" /* yacc.c:1646  */
    {  (yyval.expr) = NULL; }
#line 2435 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 336 "src/C_parser.y" /* yacc.c:1646  */
    {  (yyval.expr) = (yyvsp[-1].expr); }
#line 2441 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 337 "src/C_parser.y" /* yacc.c:1646  */
    {  (yyval.expr) = (yyvsp[-1].expr); }
#line 2447 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 338 "src/C_parser.y" /* yacc.c:1646  */
    {  (yyval.expr) = new CompoundStatement((yyvsp[-2].expr), (yyvsp[-1].expr)); }
#line 2453 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 342 "src/C_parser.y" /* yacc.c:1646  */
    {  (yyval.expr) = (yyvsp[0].expr); }
#line 2459 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 343 "src/C_parser.y" /* yacc.c:1646  */
    {  (yyval.expr) = new DeclarationList((yyvsp[-1].expr), (yyvsp[0].expr)); }
#line 2465 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 347 "src/C_parser.y" /* yacc.c:1646  */
    {  (yyval.expr) = (yyvsp[0].expr); }
#line 2471 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 348 "src/C_parser.y" /* yacc.c:1646  */
    {  (yyval.expr) = new StatementList((yyvsp[-1].expr), (yyvsp[0].expr)); }
#line 2477 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 352 "src/C_parser.y" /* yacc.c:1646  */
    {  }
#line 2483 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 353 "src/C_parser.y" /* yacc.c:1646  */
    {  (yyval.expr) = new Statement((yyvsp[-1].expr)); }
#line 2489 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 357 "src/C_parser.y" /* yacc.c:1646  */
    {  (yyval.expr) = new IfStatement((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2495 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 358 "src/C_parser.y" /* yacc.c:1646  */
    {  (yyval.expr) = new IfElseStatement((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2501 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 359 "src/C_parser.y" /* yacc.c:1646  */
    {  (yyval.expr) = new SwitchStatement((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2507 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 363 "src/C_parser.y" /* yacc.c:1646  */
    {  (yyval.expr) = new WhileStatement((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2513 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 364 "src/C_parser.y" /* yacc.c:1646  */
    {  }
#line 2519 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 365 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new ForStatement(NULL, (yyvsp[-3].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2525 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 366 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new ForStatement((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2531 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 370 "src/C_parser.y" /* yacc.c:1646  */
    {  (yyval.expr) = new ContinueStatement(); }
#line 2537 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 371 "src/C_parser.y" /* yacc.c:1646  */
    {  (yyval.expr) = new BreakStatement(); }
#line 2543 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 372 "src/C_parser.y" /* yacc.c:1646  */
    {  (yyval.expr) = new ReturnStatement(NULL); }
#line 2549 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 373 "src/C_parser.y" /* yacc.c:1646  */
    {  (yyval.expr) = new ReturnStatement((yyvsp[-1].expr)); }
#line 2555 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 377 "src/C_parser.y" /* yacc.c:1646  */
    {  (yyval.expr) = (yyvsp[0].expr); }
#line 2561 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 378 "src/C_parser.y" /* yacc.c:1646  */
    {  (yyval.expr) = new TranslationUnit((yyvsp[-1].expr),(yyvsp[0].expr)); }
#line 2567 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 382 "src/C_parser.y" /* yacc.c:1646  */
    {  (yyval.expr) = (yyvsp[0].expr); }
#line 2573 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 383 "src/C_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new GlobalDec((yyvsp[0].expr)); }
#line 2579 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 387 "src/C_parser.y" /* yacc.c:1646  */
    {  }
#line 2585 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 388 "src/C_parser.y" /* yacc.c:1646  */
    {  (yyval.expr) = new FunctionDec((yyvsp[-1].expr), (yyvsp[0].expr));}
#line 2591 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 389 "src/C_parser.y" /* yacc.c:1646  */
    {  }
#line 2597 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 390 "src/C_parser.y" /* yacc.c:1646  */
    {  }
#line 2603 "src/C_parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 2607 "src/C_parser.tab.cpp" /* yacc.c:1646  */
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
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
#line 393 "src/C_parser.y" /* yacc.c:1906  */


const Expression *g_root; // Definition of variable (to match declaration earlier)

const Expression *parseAST_cin()
{
  g_root=0;
  yyparse();
  return g_root;
}

// const Expression *parseAST_file(std::string in_file)
// {
//   g_root=0;
//   yyin = fopen(in_file, "r");
//   if(yyin){
// 	yyparse();
//   }
//   fclose(yyin);
//   return g_root;
// }
