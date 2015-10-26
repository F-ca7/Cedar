/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */


#include <stdint.h>
#include "parse_node.h"
#include "parse_malloc.h"
#include "ob_non_reserved_keywords.h"
#include "common/ob_privilege_type.h"
#define YYDEBUG 1



# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "sql_parser.tab.h".  */
#ifndef YY_YY_SQL_PARSER_TAB_H_INCLUDED
# define YY_YY_SQL_PARSER_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NAME = 258,
     STRING = 259,
     INTNUM = 260,
     DATE_VALUE = 261,
     HINT_VALUE = 262,
     BOOL = 263,
     APPROXNUM = 264,
     NULLX = 265,
     UNKNOWN = 266,
     QUESTIONMARK = 267,
     SYSTEM_VARIABLE = 268,
     TEMP_VARIABLE = 269,
     EXCEPT = 270,
     UNION = 271,
     INTERSECT = 272,
     OR = 273,
     AND = 274,
     NOT = 275,
     COMP_NE = 276,
     COMP_GE = 277,
     COMP_GT = 278,
     COMP_EQ = 279,
     COMP_LT = 280,
     COMP_LE = 281,
     CNNOP = 282,
     LIKE = 283,
     BETWEEN = 284,
     IN = 285,
     IS = 286,
     MOD = 287,
     UMINUS = 288,
     ADD = 289,
     ANY = 290,
     ALL = 291,
     ALTER = 292,
     AS = 293,
     ASC = 294,
     BEGI = 295,
     BIGINT = 296,
     BINARY = 297,
     BOOLEAN = 298,
     BOTH = 299,
     BY = 300,
     CASCADE = 301,
     CASE = 302,
     CHARACTER = 303,
     CLUSTER = 304,
     COMMENT = 305,
     COMMIT = 306,
     CONSISTENT = 307,
     COLUMN = 308,
     COLUMNS = 309,
     CREATE = 310,
     CREATETIME = 311,
     CURRENT_USER = 312,
     CHANGE_OBI = 313,
     SWITCH_CLUSTER = 314,
     DATE = 315,
     DATETIME = 316,
     DEALLOCATE = 317,
     DECIMAL = 318,
     DEFAULT = 319,
     DELETE = 320,
     DESC = 321,
     DESCRIBE = 322,
     DISTINCT = 323,
     DOUBLE = 324,
     DROP = 325,
     DUAL = 326,
     ELSE = 327,
     END = 328,
     END_P = 329,
     ERROR = 330,
     EXECUTE = 331,
     EXISTS = 332,
     EXPLAIN = 333,
     FLOAT = 334,
     FOR = 335,
     FROM = 336,
     FULL = 337,
     FROZEN = 338,
     FORCE = 339,
     GLOBAL = 340,
     GLOBAL_ALIAS = 341,
     GRANT = 342,
     GROUP = 343,
     HAVING = 344,
     HINT_BEGIN = 345,
     HINT_END = 346,
     HOTSPOT = 347,
     IDENTIFIED = 348,
     IF = 349,
     INNER = 350,
     INTEGER = 351,
     INSERT = 352,
     INTO = 353,
     JOIN = 354,
     KEY = 355,
     LEADING = 356,
     LEFT = 357,
     LIMIT = 358,
     LOCAL = 359,
     LOCKED = 360,
     MEDIUMINT = 361,
     MEMORY = 362,
     MODIFYTIME = 363,
     MASTER = 364,
     NUMERIC = 365,
     OFFSET = 366,
     ON = 367,
     ORDER = 368,
     OPTION = 369,
     OUTER = 370,
     PARAMETERS = 371,
     PASSWORD = 372,
     PRECISION = 373,
     PREPARE = 374,
     PRIMARY = 375,
     READ_STATIC = 376,
     REAL = 377,
     RENAME = 378,
     REPLACE = 379,
     RESTRICT = 380,
     PRIVILEGES = 381,
     REVOKE = 382,
     RIGHT = 383,
     ROLLBACK = 384,
     KILL = 385,
     READ_CONSISTENCY = 386,
     SCHEMA = 387,
     SCOPE = 388,
     SELECT = 389,
     SESSION = 390,
     SESSION_ALIAS = 391,
     SET = 392,
     SHOW = 393,
     SMALLINT = 394,
     SNAPSHOT = 395,
     SPFILE = 396,
     START = 397,
     STATIC = 398,
     SYSTEM = 399,
     STRONG = 400,
     SET_MASTER_CLUSTER = 401,
     SET_SLAVE_CLUSTER = 402,
     SLAVE = 403,
     TABLE = 404,
     TABLES = 405,
     THEN = 406,
     TIME = 407,
     TIMESTAMP = 408,
     TINYINT = 409,
     TRAILING = 410,
     TRANSACTION = 411,
     TO = 412,
     UPDATE = 413,
     USER = 414,
     USING = 415,
     VALUES = 416,
     VARCHAR = 417,
     VARBINARY = 418,
     WHERE = 419,
     WHEN = 420,
     WITH = 421,
     WORK = 422,
     PROCESSLIST = 423,
     QUERY = 424,
     CONNECTION = 425,
     WEAK = 426,
     INDEX = 427,
     STORING = 428,
     AUTO_INCREMENT = 429,
     CHUNKSERVER = 430,
     COMPRESS_METHOD = 431,
     CONSISTENT_MODE = 432,
     EXPIRE_INFO = 433,
     GRANTS = 434,
     JOIN_INFO = 435,
     MERGESERVER = 436,
     REPLICA_NUM = 437,
     ROOTSERVER = 438,
     ROW_COUNT = 439,
     SERVER = 440,
     SERVER_IP = 441,
     SERVER_PORT = 442,
     SERVER_TYPE = 443,
     STATUS = 444,
     TABLE_ID = 445,
     TABLET_BLOCK_SIZE = 446,
     TABLET_MAX_SIZE = 447,
     UNLOCKED = 448,
     UPDATESERVER = 449,
     USE_BLOOM_FILTER = 450,
     VARIABLES = 451,
     VERBOSE = 452,
     WARNINGS = 453
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{


  struct _ParseNode *node;
  const struct _NonReservedKeyword *non_reserved_keyword;
  int    ival;



} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (ParseResult* result);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_SQL_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */


#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <ctype.h>

#include "sql_parser.lex.h"

#define YYLEX_PARAM result->yyscan_info_

extern void yyerror(YYLTYPE* yylloc, ParseResult* p, char* s,...);

extern ParseNode* merge_tree(void *malloc_pool, ObItemType node_tag, ParseNode* source_tree);

extern ParseNode* new_terminal_node(void *malloc_pool, ObItemType type);

extern ParseNode* new_non_terminal_node(void *malloc_pool, ObItemType node_tag, int num, ...);

extern char* copy_expr_string(ParseResult* p, int expr_start, int expr_end);

#define ISSPACE(c) ((c) == ' ' || (c) == '\n' || (c) == '\r' || (c) == '\t' || (c) == '\f' || (c) == '\v')

#define malloc_terminal_node(node, malloc_pool, type) \
do \
{ \
  if ((node = new_terminal_node(malloc_pool, type)) == NULL) \
  { \
    yyerror(NULL, result, "No more space for malloc"); \
    YYABORT; \
  } \
} while(0)

#define malloc_non_terminal_node(node, malloc_pool, node_tag, ...) \
do \
{ \
  if ((node = new_non_terminal_node(malloc_pool, node_tag, ##__VA_ARGS__)) == NULL) \
  { \
    yyerror(NULL, result, "No more space for malloc"); \
    YYABORT; \
  } \
} while(0)

#define merge_nodes(node, malloc_pool, node_tag, source_tree) \
do \
{ \
  if (source_tree == NULL) \
  { \
    node = NULL; \
  } \
  else if ((node = merge_tree(malloc_pool, node_tag, source_tree)) == NULL) \
  { \
    yyerror(NULL, result, "No more space for merging nodes"); \
    YYABORT; \
  } \
} while (0)

#define dup_expr_string(str_ptr, result, expr_start, expr_end) \
  do \
  { \
    str_ptr = NULL; \
    int start = expr_start; \
    while (start <= expr_end && ISSPACE(result->input_sql_[start - 1])) \
      start++; \
    if (start >= expr_start \
      && (str_ptr = copy_expr_string(result, start, expr_end)) == NULL) \
    { \
      yyerror(NULL, result, "No more space for copying expression string"); \
      YYABORT; \
    } \
  } while (0)




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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  166
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2756

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  210
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  165
/* YYNRULES -- Number of rules.  */
#define YYNRULES  511
/* YYNRULES -- Number of states.  */
#define YYNSTATES  906

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   453

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    36,     2,     2,
      40,    41,    34,    32,   209,    33,    42,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   208,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    38,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    37,    39,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    12,    14,    16,    18,    20,
      22,    24,    26,    28,    30,    32,    34,    36,    38,    40,
      42,    44,    46,    48,    50,    52,    54,    56,    58,    60,
      62,    64,    66,    67,    69,    73,    75,    79,    83,    85,
      87,    89,    91,    93,    95,    97,    99,   101,   105,   107,
     109,   113,   119,   121,   123,   125,   127,   130,   132,   135,
     138,   142,   146,   150,   154,   158,   162,   166,   168,   171,
     174,   178,   182,   186,   190,   194,   198,   202,   206,   210,
     214,   218,   222,   226,   230,   235,   239,   243,   246,   250,
     255,   259,   264,   268,   273,   279,   286,   290,   295,   299,
     301,   305,   311,   313,   314,   316,   319,   324,   327,   328,
     333,   339,   344,   351,   356,   360,   365,   367,   369,   371,
     373,   375,   377,   379,   385,   393,   395,   399,   403,   413,
     417,   420,   421,   425,   427,   431,   432,   434,   443,   447,
     448,   450,   454,   456,   462,   466,   468,   470,   472,   474,
     476,   479,   482,   484,   487,   489,   492,   495,   497,   500,
     503,   506,   509,   511,   513,   515,   518,   524,   528,   529,
     533,   534,   536,   537,   541,   542,   546,   547,   550,   551,
     554,   556,   559,   561,   564,   566,   570,   571,   575,   579,
     583,   587,   591,   595,   599,   603,   607,   611,   613,   614,
     619,   620,   623,   625,   629,   636,   637,   639,   643,   645,
     653,   658,   666,   667,   670,   672,   674,   678,   679,   681,
     685,   689,   695,   697,   701,   704,   706,   710,   714,   716,
     719,   723,   728,   734,   743,   745,   747,   757,   762,   767,
     772,   773,   776,   780,   785,   790,   793,   796,   801,   802,
     806,   808,   812,   813,   815,   818,   820,   822,   827,   831,
     834,   835,   837,   839,   841,   843,   845,   847,   848,   850,
     851,   854,   858,   863,   868,   873,   877,   881,   885,   886,
     890,   892,   893,   897,   899,   903,   906,   907,   909,   911,
     912,   915,   916,   918,   920,   922,   925,   929,   931,   933,
     937,   939,   943,   945,   949,   952,   956,   959,   961,   967,
     969,   973,   980,   986,   989,   992,   995,   997,   999,  1000,
    1004,  1006,  1008,  1010,  1012,  1014,  1015,  1019,  1025,  1031,
    1037,  1042,  1047,  1052,  1055,  1060,  1064,  1068,  1072,  1076,
    1080,  1084,  1088,  1093,  1096,  1097,  1099,  1102,  1107,  1109,
    1111,  1112,  1113,  1116,  1119,  1120,  1122,  1123,  1125,  1129,
    1131,  1135,  1140,  1142,  1144,  1148,  1150,  1154,  1160,  1167,
    1170,  1171,  1175,  1179,  1181,  1185,  1190,  1192,  1194,  1196,
    1197,  1201,  1202,  1205,  1209,  1212,  1215,  1220,  1221,  1223,
    1224,  1226,  1228,  1235,  1237,  1241,  1244,  1246,  1248,  1251,
    1253,  1255,  1258,  1260,  1262,  1264,  1266,  1268,  1269,  1271,
    1273,  1279,  1282,  1283,  1288,  1290,  1292,  1294,  1296,  1298,
    1301,  1303,  1307,  1311,  1315,  1320,  1325,  1331,  1337,  1341,
    1343,  1345,  1347,  1351,  1354,  1355,  1357,  1361,  1365,  1367,
    1369,  1374,  1381,  1383,  1387,  1391,  1396,  1401,  1407,  1409,
    1410,  1412,  1414,  1415,  1419,  1423,  1427,  1430,  1435,  1443,
    1451,  1458,  1465,  1466,  1468,  1470,  1474,  1484,  1487,  1488,
    1492,  1496,  1500,  1501,  1503,  1505,  1507,  1509,  1513,  1520,
    1521,  1523,  1525,  1527,  1529,  1531,  1533,  1535,  1537,  1539,
    1541,  1543,  1545,  1547,  1549,  1551,  1553,  1555,  1557,  1559,
    1561,  1563,  1565,  1567,  1569,  1571,  1573,  1575,  1577,  1579,
    1581,  1583
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     211,     0,    -1,   212,    83,    -1,   212,   208,   213,    -1,
     213,    -1,   270,    -1,   263,    -1,   241,    -1,   235,    -1,
     232,    -1,   231,    -1,   257,    -1,   260,    -1,   304,    -1,
     307,    -1,   343,    -1,   346,    -1,   351,    -1,   356,    -1,
     362,    -1,   354,    -1,   314,    -1,   319,    -1,   321,    -1,
     323,    -1,   326,    -1,   336,    -1,   341,    -1,   330,    -1,
     331,    -1,   332,    -1,   333,    -1,    -1,   219,    -1,   214,
     209,   219,    -1,   370,    -1,   371,    42,   370,    -1,   371,
      42,    34,    -1,     4,    -1,     6,    -1,     5,    -1,     9,
      -1,     8,    -1,    10,    -1,    12,    -1,    14,    -1,    13,
      -1,   145,    42,   370,    -1,   215,    -1,   216,    -1,    40,
     219,    41,    -1,    40,   214,   209,   219,    41,    -1,   221,
      -1,   226,    -1,   227,    -1,   271,    -1,    86,   271,    -1,
     217,    -1,    32,   218,    -1,    33,   218,    -1,   218,    32,
     218,    -1,   218,    33,   218,    -1,   218,    34,   218,    -1,
     218,    35,   218,    -1,   218,    36,   218,    -1,   218,    38,
     218,    -1,   218,    37,   218,    -1,   217,    -1,    32,   219,
      -1,    33,   219,    -1,   219,    32,   219,    -1,   219,    33,
     219,    -1,   219,    34,   219,    -1,   219,    35,   219,    -1,
     219,    36,   219,    -1,   219,    38,   219,    -1,   219,    37,
     219,    -1,   219,    26,   219,    -1,   219,    25,   219,    -1,
     219,    24,   219,    -1,   219,    22,   219,    -1,   219,    23,
     219,    -1,   219,    21,   219,    -1,   219,    28,   219,    -1,
     219,    20,    28,   219,    -1,   219,    19,   219,    -1,   219,
      18,   219,    -1,    20,   219,    -1,   219,    31,    10,    -1,
     219,    31,    20,    10,    -1,   219,    31,     8,    -1,   219,
      31,    20,     8,    -1,   219,    31,    11,    -1,   219,    31,
      20,    11,    -1,   219,    29,   218,    19,   218,    -1,   219,
      20,    29,   218,    19,   218,    -1,   219,    30,   220,    -1,
     219,    20,    30,   220,    -1,   219,    27,   219,    -1,   271,
      -1,    40,   214,    41,    -1,    56,   222,   223,   225,    82,
      -1,   219,    -1,    -1,   224,    -1,   223,   224,    -1,   174,
     219,   160,   219,    -1,    81,   219,    -1,    -1,   372,    40,
      34,    41,    -1,   372,    40,   230,   219,    41,    -1,   372,
      40,   214,    41,    -1,   372,    40,   219,    47,   246,    41,
      -1,   372,    40,   287,    41,    -1,   372,    40,    41,    -1,
     228,    40,   229,    41,    -1,   193,    -1,   270,    -1,   263,
      -1,   232,    -1,   231,    -1,    45,    -1,    77,    -1,    74,
      90,   300,   276,   264,    -1,   167,   278,   300,   146,   233,
     276,   264,    -1,   234,    -1,   233,   209,   234,    -1,   370,
      24,   219,    -1,    64,   181,   242,   300,   121,   300,   236,
     237,   239,    -1,    40,   267,    41,    -1,   182,   238,    -1,
      -1,    40,   267,    41,    -1,   240,    -1,   239,   209,   240,
      -1,    -1,   255,    -1,    64,   158,   242,   300,    40,   243,
      41,   254,    -1,   103,    20,    86,    -1,    -1,   244,    -1,
     243,   209,   244,    -1,   245,    -1,   129,   109,    40,   267,
      41,    -1,   370,   246,   252,    -1,   163,    -1,   148,    -1,
     115,    -1,   105,    -1,    50,    -1,    72,   247,    -1,   119,
     247,    -1,    52,    -1,    88,   248,    -1,   131,    -1,    78,
     249,    -1,   162,   250,    -1,    70,    -1,    57,   251,    -1,
      51,   251,    -1,   171,   251,    -1,   172,   251,    -1,    65,
      -1,   117,    -1,    69,    -1,   161,   250,    -1,    40,     5,
     209,     5,    41,    -1,    40,     5,    41,    -1,    -1,    40,
       5,    41,    -1,    -1,   127,    -1,    -1,    40,     5,    41,
      -1,    -1,    40,     5,    41,    -1,    -1,   252,   253,    -1,
      -1,    20,    10,    -1,    10,    -1,    73,   216,    -1,   183,
      -1,   129,   109,    -1,   255,    -1,   254,   209,   255,    -1,
      -1,   189,   256,     4,    -1,   187,   256,     4,    -1,   201,
     256,     5,    -1,   200,   256,     5,    -1,   199,   256,     5,
      -1,   191,   256,     5,    -1,   185,   256,     4,    -1,   204,
     256,     8,    -1,   186,   256,   152,    -1,    59,   256,     4,
      -1,    24,    -1,    -1,    79,   158,   258,   259,    -1,    -1,
     103,    86,    -1,   299,    -1,   259,   209,   299,    -1,    79,
     181,   258,   261,   121,   262,    -1,    -1,   300,    -1,   261,
     209,   300,    -1,   300,    -1,   265,   107,   300,   266,   170,
     268,   264,    -1,   265,   107,   300,   270,    -1,   265,   107,
     300,    40,   267,    41,   270,    -1,    -1,   174,   219,    -1,
     133,    -1,   106,    -1,    40,   267,    41,    -1,    -1,   370,
      -1,   267,   209,   370,    -1,    40,   269,    41,    -1,   268,
     209,    40,   269,    41,    -1,   219,    -1,   269,   209,   219,
      -1,   272,   264,    -1,   271,    -1,    40,   272,    41,    -1,
      40,   271,    41,    -1,   273,    -1,   275,   286,    -1,   274,
     290,   286,    -1,   274,   289,   277,   286,    -1,   143,   278,
     295,   297,   285,    -1,   143,   278,   295,   297,    90,    80,
     276,   285,    -1,   275,    -1,   271,    -1,   143,   278,   295,
     297,    90,   298,   276,   288,   294,    -1,   274,    16,   295,
     274,    -1,   274,    17,   295,   274,    -1,   274,    15,   295,
     274,    -1,    -1,   173,   219,    -1,   173,     7,   219,    -1,
     112,   284,   120,   284,    -1,   120,   284,   112,   284,    -1,
     112,   284,    -1,   120,   284,    -1,   112,   284,   209,   284,
      -1,    -1,    99,   279,   100,    -1,   280,    -1,   279,   209,
     280,    -1,    -1,   281,    -1,   280,   281,    -1,   130,    -1,
     101,    -1,   140,    40,   283,    41,    -1,    40,   282,    41,
      -1,   282,   209,    -1,    -1,   180,    -1,   154,    -1,   152,
      -1,    92,    -1,     5,    -1,    12,    -1,    -1,   277,    -1,
      -1,    89,   167,    -1,   219,    90,   219,    -1,    53,   219,
      90,   219,    -1,   110,   219,    90,   219,    -1,   164,   219,
      90,   219,    -1,    53,    90,   219,    -1,   110,    90,   219,
      -1,   164,    90,   219,    -1,    -1,    97,    54,   214,    -1,
     290,    -1,    -1,   122,    54,   291,    -1,   292,    -1,   291,
     209,   292,    -1,   219,   293,    -1,    -1,    48,    -1,    75,
      -1,    -1,    98,   219,    -1,    -1,    45,    -1,    77,    -1,
     219,    -1,   219,   373,    -1,   219,    47,   373,    -1,    34,
      -1,   296,    -1,   297,   209,   296,    -1,   299,    -1,   298,
     209,   299,    -1,   300,    -1,   300,    47,   371,    -1,   300,
     371,    -1,   271,    47,   371,    -1,   271,   371,    -1,   301,
      -1,    40,   301,    41,    47,   371,    -1,   371,    -1,    40,
     301,    41,    -1,   299,   302,   108,   299,   121,   219,    -1,
     299,   108,   299,   121,   219,    -1,    91,   303,    -1,   111,
     303,    -1,   137,   303,    -1,   104,    -1,   124,    -1,    -1,
      87,   306,   305,    -1,   270,    -1,   231,    -1,   263,    -1,
     232,    -1,   206,    -1,    -1,   147,   159,   311,    -1,   147,
     181,   121,   300,   311,    -1,   147,    63,    90,   300,   311,
      -1,   147,    63,    30,   300,   311,    -1,   147,   158,   198,
     311,    -1,   147,   194,   198,   311,    -1,   147,   310,   205,
     311,    -1,   147,   141,    -1,   147,    64,   158,   300,    -1,
      76,   300,   312,    -1,    75,   300,   312,    -1,   147,   207,
     308,    -1,   147,   226,   207,    -1,   147,   188,   309,    -1,
     147,   125,   311,    -1,   147,   313,   177,    -1,   112,     5,
     209,     5,    -1,   112,     5,    -1,    -1,   322,    -1,    89,
      66,    -1,    89,    66,    40,    41,    -1,    94,    -1,   144,
      -1,    -1,    -1,    28,     4,    -1,   173,   219,    -1,    -1,
       4,    -1,    -1,    91,    -1,    64,   168,   315,    -1,   316,
      -1,   315,   209,   316,    -1,   317,   102,    54,   318,    -1,
       4,    -1,     4,    -1,    79,   168,   320,    -1,   317,    -1,
     320,   209,   317,    -1,   146,   126,   322,    24,   318,    -1,
      46,   168,   317,   102,    54,   318,    -1,    89,   317,    -1,
      -1,   132,   168,   325,    -1,   317,   166,   317,    -1,   324,
      -1,   325,   209,   324,    -1,    46,   168,   317,   327,    -1,
     114,    -1,   202,    -1,   176,    -1,    -1,   175,    61,   149,
      -1,    -1,    49,   328,    -1,   151,   165,   329,    -1,    60,
     328,    -1,   138,   328,    -1,   139,   334,   335,     5,    -1,
      -1,    94,    -1,    -1,   178,    -1,   179,    -1,    96,   337,
     121,   340,   166,   320,    -1,   338,    -1,   337,   209,   338,
      -1,    45,   339,    -1,    46,    -1,    64,    -1,    64,   168,
      -1,    74,    -1,    79,    -1,    96,   123,    -1,   106,    -1,
     167,    -1,   143,    -1,   133,    -1,   135,    -1,    -1,    34,
      -1,   371,    -1,   136,   337,   342,    90,   320,    -1,   121,
     340,    -1,    -1,   128,   344,    90,   345,    -1,   373,    -1,
     270,    -1,   263,    -1,   232,    -1,   231,    -1,   146,   347,
      -1,   348,    -1,   347,   209,   348,    -1,    14,   349,   219,
      -1,   370,   349,   219,    -1,    94,   370,   349,   219,    -1,
     144,   370,   349,   219,    -1,    95,    42,   370,   349,   219,
      -1,   145,    42,   370,   349,   219,    -1,    13,   349,   219,
      -1,   166,    -1,    24,    -1,    14,    -1,    85,   344,   352,
      -1,   169,   353,    -1,    -1,   350,    -1,   353,   209,   350,
      -1,   355,   128,   344,    -1,    71,    -1,    79,    -1,    46,
     158,   300,   357,    -1,    46,   158,   300,   132,   166,   300,
      -1,   358,    -1,   357,   209,   358,    -1,    43,   359,   245,
      -1,    79,   359,   370,   360,    -1,    46,   359,   370,   361,
      -1,   132,   359,   370,   166,   373,    -1,    62,    -1,    -1,
      55,    -1,   134,    -1,    -1,   146,    20,    10,    -1,    79,
      20,    10,    -1,   146,    73,   216,    -1,    79,    73,    -1,
      46,   153,   146,   364,    -1,    46,   153,   363,    67,   118,
      24,     4,    -1,    46,   153,   363,    68,   118,    24,     4,
      -1,    46,   153,   155,   118,    24,     4,    -1,    46,   153,
     156,   157,    24,     4,    -1,    -1,    93,    -1,   365,    -1,
     364,   209,   365,    -1,   370,    24,   216,   366,   367,   197,
      24,   368,   369,    -1,    59,     4,    -1,    -1,   142,    24,
     116,    -1,   142,    24,   150,    -1,   142,    24,    53,    -1,
      -1,   192,    -1,   203,    -1,   184,    -1,   190,    -1,    58,
      24,     5,    -1,   195,    24,     4,   196,    24,     5,    -1,
      -1,     3,    -1,   374,    -1,     3,    -1,   374,    -1,     3,
      -1,     3,    -1,   374,    -1,   183,    -1,   184,    -1,   185,
      -1,   186,    -1,   187,    -1,   188,    -1,   189,    -1,   190,
      -1,   191,    -1,   192,    -1,   193,    -1,   194,    -1,   195,
      -1,   196,    -1,   197,    -1,   198,    -1,   200,    -1,   199,
      -1,   201,    -1,   202,    -1,   203,    -1,   204,    -1,   205,
      -1,   206,    -1,   207,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   229,   229,   238,   245,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   289,   293,   300,   302,   308,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   330,   332,
     334,   336,   342,   350,   354,   358,   362,   370,   371,   375,
     379,   380,   381,   382,   383,   384,   385,   388,   389,   393,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,   410,   411,   412,   416,   420,   424,   428,
     432,   436,   440,   444,   448,   452,   456,   460,   464,   471,
     475,   480,   488,   489,   493,   495,   500,   507,   508,   512,
     526,   554,   629,   645,   649,   671,   679,   686,   687,   688,
     689,   693,   697,   711,   725,   735,   739,   746,   760,   776,
     783,   789,   795,   802,   806,   811,   817,   831,   848,   851,
     855,   859,   866,   870,   879,   888,   890,   892,   894,   896,
     898,   907,   916,   918,   920,   922,   927,   934,   936,   943,
     950,   957,   964,   966,   968,   974,   986,   988,   991,   995,
     996,  1000,  1001,  1005,  1006,  1010,  1011,  1015,  1018,  1022,
    1027,  1032,  1034,  1036,  1041,  1045,  1050,  1056,  1061,  1066,
    1071,  1076,  1081,  1086,  1091,  1096,  1102,  1110,  1111,  1122,
    1132,  1133,  1138,  1142,  1156,  1166,  1168,  1172,  1179,  1190,
    1204,  1215,  1233,  1234,  1241,  1246,  1254,  1259,  1263,  1264,
    1271,  1275,  1281,  1282,  1296,  1306,  1311,  1312,  1316,  1320,
    1325,  1335,  1356,  1378,  1404,  1405,  1409,  1435,  1457,  1479,
    1505,  1506,  1510,  1517,  1525,  1533,  1537,  1541,  1553,  1556,
    1570,  1574,  1579,  1585,  1589,  1596,  1600,  1604,  1609,  1616,
    1621,  1627,  1631,  1635,  1639,  1645,  1647,  1653,  1654,  1660,
    1661,  1669,  1676,  1683,  1690,  1697,  1708,  1719,  1734,  1735,
    1742,  1743,  1747,  1754,  1756,  1761,  1769,  1770,  1772,  1778,
    1779,  1787,  1790,  1794,  1801,  1806,  1814,  1822,  1832,  1836,
    1843,  1845,  1850,  1854,  1858,  1862,  1866,  1870,  1874,  1883,
    1891,  1895,  1899,  1908,  1914,  1920,  1926,  1933,  1934,  1944,
    1952,  1953,  1954,  1955,  1959,  1960,  1971,  1973,  1975,  1977,
    1979,  1981,  1983,  1988,  1990,  1992,  1994,  1996,  2000,  2013,
    2017,  2021,  2029,  2038,  2048,  2052,  2054,  2056,  2061,  2062,
    2063,  2068,  2069,  2071,  2077,  2078,  2083,  2084,  2093,  2099,
    2103,  2109,  2115,  2121,  2133,  2139,  2143,  2155,  2159,  2165,
    2170,  2180,  2186,  2192,  2196,  2207,  2213,  2218,  2231,  2236,
    2240,  2245,  2249,  2255,  2266,  2278,  2290,  2297,  2301,  2309,
    2313,  2318,  2332,  2343,  2347,  2353,  2359,  2364,  2369,  2374,
    2379,  2384,  2389,  2394,  2399,  2404,  2411,  2416,  2421,  2426,
    2437,  2477,  2482,  2493,  2500,  2505,  2507,  2509,  2511,  2522,
    2530,  2534,  2541,  2547,  2554,  2561,  2568,  2575,  2582,  2591,
    2592,  2596,  2607,  2614,  2619,  2624,  2628,  2641,  2649,  2651,
    2662,  2668,  2679,  2683,  2690,  2695,  2701,  2706,  2715,  2716,
    2720,  2721,  2722,  2726,  2731,  2736,  2740,  2754,  2760,  2767,
    2774,  2781,  2791,  2794,  2802,  2806,  2813,  2828,  2831,  2835,
    2837,  2839,  2842,  2846,  2851,  2856,  2861,  2869,  2873,  2878,
    2889,  2891,  2908,  2910,  2927,  2931,  2933,  2946,  2947,  2948,
    2949,  2950,  2951,  2952,  2953,  2954,  2955,  2956,  2957,  2958,
    2959,  2960,  2961,  2962,  2963,  2964,  2965,  2966,  2967,  2968,
    2969,  2970
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "STRING", "INTNUM", "DATE_VALUE",
  "HINT_VALUE", "BOOL", "APPROXNUM", "NULLX", "UNKNOWN", "QUESTIONMARK",
  "SYSTEM_VARIABLE", "TEMP_VARIABLE", "EXCEPT", "UNION", "INTERSECT", "OR",
  "AND", "NOT", "COMP_NE", "COMP_GE", "COMP_GT", "COMP_EQ", "COMP_LT",
  "COMP_LE", "CNNOP", "LIKE", "BETWEEN", "IN", "IS", "'+'", "'-'", "'*'",
  "'/'", "'%'", "MOD", "'^'", "UMINUS", "'('", "')'", "'.'", "ADD", "ANY",
  "ALL", "ALTER", "AS", "ASC", "BEGI", "BIGINT", "BINARY", "BOOLEAN",
  "BOTH", "BY", "CASCADE", "CASE", "CHARACTER", "CLUSTER", "COMMENT",
  "COMMIT", "CONSISTENT", "COLUMN", "COLUMNS", "CREATE", "CREATETIME",
  "CURRENT_USER", "CHANGE_OBI", "SWITCH_CLUSTER", "DATE", "DATETIME",
  "DEALLOCATE", "DECIMAL", "DEFAULT", "DELETE", "DESC", "DESCRIBE",
  "DISTINCT", "DOUBLE", "DROP", "DUAL", "ELSE", "END", "END_P", "ERROR",
  "EXECUTE", "EXISTS", "EXPLAIN", "FLOAT", "FOR", "FROM", "FULL", "FROZEN",
  "FORCE", "GLOBAL", "GLOBAL_ALIAS", "GRANT", "GROUP", "HAVING",
  "HINT_BEGIN", "HINT_END", "HOTSPOT", "IDENTIFIED", "IF", "INNER",
  "INTEGER", "INSERT", "INTO", "JOIN", "KEY", "LEADING", "LEFT", "LIMIT",
  "LOCAL", "LOCKED", "MEDIUMINT", "MEMORY", "MODIFYTIME", "MASTER",
  "NUMERIC", "OFFSET", "ON", "ORDER", "OPTION", "OUTER", "PARAMETERS",
  "PASSWORD", "PRECISION", "PREPARE", "PRIMARY", "READ_STATIC", "REAL",
  "RENAME", "REPLACE", "RESTRICT", "PRIVILEGES", "REVOKE", "RIGHT",
  "ROLLBACK", "KILL", "READ_CONSISTENCY", "SCHEMA", "SCOPE", "SELECT",
  "SESSION", "SESSION_ALIAS", "SET", "SHOW", "SMALLINT", "SNAPSHOT",
  "SPFILE", "START", "STATIC", "SYSTEM", "STRONG", "SET_MASTER_CLUSTER",
  "SET_SLAVE_CLUSTER", "SLAVE", "TABLE", "TABLES", "THEN", "TIME",
  "TIMESTAMP", "TINYINT", "TRAILING", "TRANSACTION", "TO", "UPDATE",
  "USER", "USING", "VALUES", "VARCHAR", "VARBINARY", "WHERE", "WHEN",
  "WITH", "WORK", "PROCESSLIST", "QUERY", "CONNECTION", "WEAK", "INDEX",
  "STORING", "AUTO_INCREMENT", "CHUNKSERVER", "COMPRESS_METHOD",
  "CONSISTENT_MODE", "EXPIRE_INFO", "GRANTS", "JOIN_INFO", "MERGESERVER",
  "REPLICA_NUM", "ROOTSERVER", "ROW_COUNT", "SERVER", "SERVER_IP",
  "SERVER_PORT", "SERVER_TYPE", "STATUS", "TABLE_ID", "TABLET_BLOCK_SIZE",
  "TABLET_MAX_SIZE", "UNLOCKED", "UPDATESERVER", "USE_BLOOM_FILTER",
  "VARIABLES", "VERBOSE", "WARNINGS", "';'", "','", "$accept", "sql_stmt",
  "stmt_list", "stmt", "expr_list", "column_ref", "expr_const",
  "simple_expr", "arith_expr", "expr", "in_expr", "case_expr", "case_arg",
  "when_clause_list", "when_clause", "case_default", "func_expr",
  "when_func", "when_func_name", "when_func_stmt", "distinct_or_all",
  "delete_stmt", "update_stmt", "update_asgn_list", "update_asgn_factor",
  "create_index_stmt", "opt_index_columns", "opt_storing",
  "opt_storing_columns", "opt_index_option_list", "index_option",
  "create_table_stmt", "opt_if_not_exists", "table_element_list",
  "table_element", "column_definition", "data_type", "opt_decimal",
  "opt_float", "opt_precision", "opt_time_precision", "opt_char_length",
  "opt_column_attribute_list", "column_attribute", "opt_table_option_list",
  "table_option", "opt_equal_mark", "drop_table_stmt", "opt_if_exists",
  "table_list", "drop_index_stmt", "index_list", "table_name",
  "insert_stmt", "opt_when", "replace_or_insert", "opt_insert_columns",
  "column_list", "insert_vals_list", "insert_vals", "select_stmt",
  "select_with_parens", "select_no_parens", "no_table_select",
  "select_clause", "simple_select", "opt_where", "select_limit",
  "opt_hint", "opt_hint_list", "hint_options", "hint_option",
  "opt_comma_list", "consistency_level", "limit_expr", "opt_select_limit",
  "opt_for_update", "parameterized_trim", "opt_groupby", "opt_order_by",
  "order_by", "sort_list", "sort_key", "opt_asc_desc", "opt_having",
  "opt_distinct", "projection", "select_expr_list", "from_list",
  "table_factor", "relation_factor", "joined_table", "join_type",
  "join_outer", "explain_stmt", "explainable_stmt", "opt_verbose",
  "show_stmt", "opt_limit", "opt_for_grant_user", "opt_scope",
  "opt_show_condition", "opt_like_condition", "opt_full",
  "create_user_stmt", "user_specification_list", "user_specification",
  "user", "password", "drop_user_stmt", "user_list", "set_password_stmt",
  "opt_for_user", "rename_user_stmt", "rename_info", "rename_list",
  "lock_user_stmt", "lock_spec", "opt_work",
  "opt_with_consistent_snapshot", "begin_stmt", "commit_stmt",
  "rollback_stmt", "kill_stmt", "opt_is_global", "opt_flag", "grant_stmt",
  "priv_type_list", "priv_type", "opt_privilege", "priv_level",
  "revoke_stmt", "opt_on_priv_level", "prepare_stmt", "stmt_name",
  "preparable_stmt", "variable_set_stmt", "var_and_val_list",
  "var_and_val", "to_or_eq", "argument", "execute_stmt", "opt_using_args",
  "argument_list", "deallocate_prepare_stmt", "deallocate_or_drop",
  "alter_table_stmt", "alter_column_actions", "alter_column_action",
  "opt_column", "opt_drop_behavior", "alter_column_behavior",
  "alter_system_stmt", "opt_force", "alter_system_actions",
  "alter_system_action", "opt_comment", "opt_config_scope", "server_type",
  "opt_cluster_or_address", "column_name", "relation_name",
  "function_name", "column_label", "unreserved_keyword", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,    43,    45,    42,    47,    37,   287,    94,   288,
      40,    41,    46,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,    59,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   210,   211,   212,   212,   213,   213,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   213,   214,   214,   215,   215,   215,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   220,
     220,   221,   222,   222,   223,   223,   224,   225,   225,   226,
     226,   226,   226,   226,   226,   227,   228,   229,   229,   229,
     229,   230,   230,   231,   232,   233,   233,   234,   235,   236,
     237,   237,   238,   239,   239,   239,   240,   241,   242,   242,
     243,   243,   244,   244,   245,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   247,   247,   247,   248,
     248,   249,   249,   250,   250,   251,   251,   252,   252,   253,
     253,   253,   253,   253,   254,   254,   254,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   256,   256,   257,
     258,   258,   259,   259,   260,   261,   261,   261,   262,   263,
     263,   263,   264,   264,   265,   265,   266,   266,   267,   267,
     268,   268,   269,   269,   270,   270,   271,   271,   272,   272,
     272,   272,   273,   273,   274,   274,   275,   275,   275,   275,
     276,   276,   276,   277,   277,   277,   277,   277,   278,   278,
     279,   279,   279,   280,   280,   281,   281,   281,   281,   282,
     282,   283,   283,   283,   283,   284,   284,   285,   285,   286,
     286,   287,   287,   287,   287,   287,   287,   287,   288,   288,
     289,   289,   290,   291,   291,   292,   293,   293,   293,   294,
     294,   295,   295,   295,   296,   296,   296,   296,   297,   297,
     298,   298,   299,   299,   299,   299,   299,   299,   299,   300,
     301,   301,   301,   302,   302,   302,   302,   303,   303,   304,
     305,   305,   305,   305,   306,   306,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   308,   308,   308,   309,   309,   309,   310,   310,
     310,   311,   311,   311,   312,   312,   313,   313,   314,   315,
     315,   316,   317,   318,   319,   320,   320,   321,   321,   322,
     322,   323,   324,   325,   325,   326,   327,   327,   328,   328,
     329,   329,   330,   330,   331,   332,   333,   334,   334,   335,
     335,   335,   336,   337,   337,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   338,   339,   339,   340,   340,
     341,   342,   342,   343,   344,   345,   345,   345,   345,   346,
     347,   347,   348,   348,   348,   348,   348,   348,   348,   349,
     349,   350,   351,   352,   352,   353,   353,   354,   355,   355,
     356,   356,   357,   357,   358,   358,   358,   358,   359,   359,
     360,   360,   360,   361,   361,   361,   361,   362,   362,   362,
     362,   362,   363,   363,   364,   364,   365,   366,   366,   367,
     367,   367,   367,   368,   368,   368,   368,   369,   369,   369,
     370,   370,   371,   371,   372,   373,   373,   374,   374,   374,
     374,   374,   374,   374,   374,   374,   374,   374,   374,   374,
     374,   374,   374,   374,   374,   374,   374,   374,   374,   374,
     374,   374
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     3,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       3,     5,     1,     1,     1,     1,     2,     1,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     1,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     4,     3,     3,     2,     3,     4,
       3,     4,     3,     4,     5,     6,     3,     4,     3,     1,
       3,     5,     1,     0,     1,     2,     4,     2,     0,     4,
       5,     4,     6,     4,     3,     4,     1,     1,     1,     1,
       1,     1,     1,     5,     7,     1,     3,     3,     9,     3,
       2,     0,     3,     1,     3,     0,     1,     8,     3,     0,
       1,     3,     1,     5,     3,     1,     1,     1,     1,     1,
       2,     2,     1,     2,     1,     2,     2,     1,     2,     2,
       2,     2,     1,     1,     1,     2,     5,     3,     0,     3,
       0,     1,     0,     3,     0,     3,     0,     2,     0,     2,
       1,     2,     1,     2,     1,     3,     0,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     0,     4,
       0,     2,     1,     3,     6,     0,     1,     3,     1,     7,
       4,     7,     0,     2,     1,     1,     3,     0,     1,     3,
       3,     5,     1,     3,     2,     1,     3,     3,     1,     2,
       3,     4,     5,     8,     1,     1,     9,     4,     4,     4,
       0,     2,     3,     4,     4,     2,     2,     4,     0,     3,
       1,     3,     0,     1,     2,     1,     1,     4,     3,     2,
       0,     1,     1,     1,     1,     1,     1,     0,     1,     0,
       2,     3,     4,     4,     4,     3,     3,     3,     0,     3,
       1,     0,     3,     1,     3,     2,     0,     1,     1,     0,
       2,     0,     1,     1,     1,     2,     3,     1,     1,     3,
       1,     3,     1,     3,     2,     3,     2,     1,     5,     1,
       3,     6,     5,     2,     2,     2,     1,     1,     0,     3,
       1,     1,     1,     1,     1,     0,     3,     5,     5,     5,
       4,     4,     4,     2,     4,     3,     3,     3,     3,     3,
       3,     3,     4,     2,     0,     1,     2,     4,     1,     1,
       0,     0,     2,     2,     0,     1,     0,     1,     3,     1,
       3,     4,     1,     1,     3,     1,     3,     5,     6,     2,
       0,     3,     3,     1,     3,     4,     1,     1,     1,     0,
       3,     0,     2,     3,     2,     2,     4,     0,     1,     0,
       1,     1,     6,     1,     3,     2,     1,     1,     2,     1,
       1,     2,     1,     1,     1,     1,     1,     0,     1,     1,
       5,     2,     0,     4,     1,     1,     1,     1,     1,     2,
       1,     3,     3,     3,     4,     4,     5,     5,     3,     1,
       1,     1,     3,     2,     0,     1,     3,     3,     1,     1,
       4,     6,     1,     3,     3,     4,     4,     5,     1,     0,
       1,     1,     0,     3,     3,     3,     2,     4,     7,     7,
       6,     6,     0,     1,     1,     3,     9,     2,     0,     3,
       3,     3,     0,     1,     1,     1,     1,     3,     6,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      32,     0,     0,   379,   379,     0,   438,     0,     0,     0,
     439,     0,   325,     0,   215,     0,     0,   214,     0,   379,
     387,   248,     0,   350,     0,   248,     0,     0,     4,    10,
       9,     8,     7,    11,    12,     6,     0,     5,   235,   212,
     228,   281,   234,    13,    14,    21,    22,    23,    24,    25,
      28,    29,    30,    31,    26,    27,    15,    16,    17,    20,
       0,    18,    19,   235,     0,   462,     0,     0,   378,   382,
     384,   139,     0,   139,     0,   482,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
     501,   502,   504,   503,   505,   506,   507,   508,   509,   510,
     511,   354,   309,   483,   354,   200,     0,   200,   485,   434,
     414,   486,   324,     0,   407,   396,   397,   399,   400,     0,
     402,   405,   404,   403,     0,   393,     0,     0,   412,   385,
     388,   389,   252,   291,   480,     0,     0,     0,     0,   370,
       0,     0,   419,   420,     0,   481,   484,     0,     0,   357,
     348,   351,   333,   349,     0,   351,     0,   370,     0,   344,
       0,     0,     0,     0,   381,     0,     1,     2,    32,     0,
       0,   224,   291,   291,   291,     0,     0,   269,     0,   229,
       0,   227,   226,   463,     0,     0,     0,     0,     0,   362,
       0,     0,     0,   358,   359,     0,     0,   240,   355,   336,
     335,     0,     0,   365,   364,   205,     0,   432,   321,   323,
     322,   320,   319,   406,   395,   398,   401,     0,     0,     0,
       0,   373,   371,     0,     0,   390,   391,     0,   260,   256,
     255,     0,     0,   250,   253,   292,   293,     0,   430,   429,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   340,   351,   326,     0,     0,
     339,   345,   351,     0,   337,   338,   351,   341,     0,     0,
     383,     0,     3,   217,   480,    38,    40,    39,    42,    41,
      43,    44,    46,    45,     0,     0,     0,     0,   103,     0,
       0,   497,    48,    49,    67,   213,    52,    53,    54,     0,
      55,    35,     0,   481,     0,     0,     0,     0,     0,     0,
     269,   230,   270,   437,   457,   464,     0,     0,     0,     0,
       0,   449,   449,   449,   449,   440,   442,     0,   376,   377,
     375,     0,     0,     0,     0,     0,     0,   212,   201,     0,
     199,     0,   202,   302,   307,     0,     0,   206,   431,   435,
     433,   408,     0,   409,   394,   418,   417,   416,   415,   413,
       0,     0,   411,     0,   386,     0,     0,   249,     0,   254,
     297,   294,   298,   267,   428,   422,     0,     0,   369,     0,
       0,     0,   421,   423,   351,   351,   334,   352,   353,   330,
     351,   346,   331,   343,   332,     0,   114,   121,     0,   122,
       0,     0,     0,    33,     0,     0,     0,     0,     0,     0,
     210,    87,    68,    69,     0,    33,    55,   102,     0,    56,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   248,   235,   239,   234,   237,   238,
     286,   282,   283,   265,   266,   245,   246,   231,     0,     0,
       0,     0,     0,     0,   448,     0,     0,     0,     0,     0,
       0,     0,   138,     0,   360,     0,     0,     0,   241,   123,
     235,     0,   307,     0,     0,   306,   318,   316,     0,   318,
     318,     0,     0,   304,   366,     0,     0,     0,     0,   372,
     374,   410,   258,   259,   264,   263,   262,   261,     0,   251,
       0,   295,     0,     0,   268,   232,   424,     0,   363,   367,
     425,     0,   329,   328,   327,     0,     0,   109,     0,     0,
       0,     0,     0,     0,   111,     0,     0,     0,     0,   113,
     380,   240,   125,     0,     0,   218,     0,     0,    50,     0,
     108,   104,    47,    86,    85,     0,     0,     0,    82,    80,
      81,    79,    78,    77,    98,    83,     0,     0,    57,     0,
       0,    96,    99,    90,    88,    92,     0,    70,    71,    72,
      73,    74,    76,    75,     0,   120,   119,   118,   117,    37,
      36,   291,   287,   288,   285,     0,     0,     0,     0,   465,
     468,   460,   461,     0,     0,   444,     0,     0,   452,   441,
       0,   449,   443,   368,     0,     0,   140,   142,   361,     0,
     242,   310,   203,   305,   317,   313,     0,   314,   315,     0,
     303,   204,   208,   207,   436,   392,   257,   296,   240,   240,
     300,   299,   426,   427,   347,   342,   275,     0,   276,     0,
     277,     0,    34,   149,   176,   152,   176,   162,   164,   157,
     168,   172,   170,   148,   147,   163,   168,   154,   146,   174,
     174,   145,   176,   176,     0,   271,   110,     0,   212,     0,
     216,     0,     0,   212,    34,     0,     0,   105,     0,    84,
       0,    97,    58,    59,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    33,    91,    89,    93,   115,     0,   284,
     243,   247,   244,     0,   472,   458,   459,   178,     0,     0,
     446,   450,   451,   445,     0,     0,   186,     0,     0,   131,
       0,     0,     0,   267,     0,   278,   272,   273,   274,     0,
     159,   158,     0,   150,   171,   155,     0,   153,   151,     0,
     165,   156,   160,   161,   112,   126,   124,   127,   211,   219,
     222,     0,     0,   209,    51,     0,   107,   101,     0,    94,
      60,    61,    62,    63,    64,    66,    65,   100,     0,   467,
       0,     0,   144,     0,   456,     0,     0,   447,     0,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   137,
     184,   141,     0,     0,   135,   308,   312,     0,   233,   301,
       0,   289,     0,     0,     0,     0,   220,     0,     0,   106,
      95,     0,     0,     0,   180,     0,     0,     0,   182,   177,
     454,   453,   455,     0,   197,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   129,     0,   130,   128,
     133,   136,   311,     0,     0,   236,   175,   167,     0,   169,
     173,   223,     0,   471,   469,   470,     0,   179,   181,   183,
     143,   196,   193,   195,   188,   187,   192,   191,   190,   189,
     194,   185,     0,     0,   279,   290,     0,   221,   475,   476,
     473,   474,   479,   132,   134,   166,     0,     0,   466,     0,
       0,   477,     0,     0,     0,   478
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    26,    27,    28,   402,   292,   293,   294,   569,   371,
     571,   296,   418,   550,   551,   688,   297,   298,   299,   584,
     404,    29,    30,   541,   542,    31,   729,   804,   848,   849,
     850,    32,   192,   615,   616,   617,   674,   743,   747,   745,
     750,   740,   782,   829,   799,   851,   835,    33,   202,   340,
      34,   346,   631,    35,   171,    36,   409,   544,   683,   761,
      37,   300,    39,    40,    41,    42,   337,   514,   133,   232,
     233,   234,   365,   508,   455,   515,   179,   405,   811,   176,
     177,   451,   452,   594,   855,   237,   372,   373,   639,   640,
     343,   344,   491,   625,    43,   212,   113,    44,   264,   260,
     161,   255,   199,   162,    45,   193,   194,   203,   519,    46,
     204,    47,   245,    48,   221,   222,    49,   330,    69,   270,
      50,    51,    52,    53,   131,   227,    54,   124,   125,   214,
     352,    55,   224,    56,   109,   359,    57,   142,   143,   240,
     349,    58,   207,   350,    59,    60,    61,   325,   326,   469,
     723,   720,    62,   187,   314,   315,   714,   781,   892,   898,
     301,   302,   163,   110,   303
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -674
static const yytype_int16 yypact[] =
{
     874,    17,   -44,   -73,   -73,   122,  -674,    22,  2149,  2149,
     207,  2354,   -42,   331,  -674,  2354,   -35,  -674,   331,   -73,
      79,    92,  1108,   467,    30,    92,   205,   -50,  -674,  -674,
    -674,  -674,  -674,  -674,  -674,  -674,   114,  -674,    24,    52,
    -674,    68,    37,  -674,  -674,  -674,  -674,  -674,  -674,  -674,
    -674,  -674,  -674,  -674,  -674,  -674,  -674,  -674,  -674,  -674,
     121,  -674,  -674,   228,   232,   167,  2149,   275,  -674,  -674,
    -674,   181,   275,   181,  2149,  -674,  -674,  -674,  -674,  -674,
    -674,  -674,  -674,  -674,  -674,  -674,  -674,  -674,  -674,  -674,
    -674,  -674,  -674,  -674,  -674,  -674,  -674,  -674,  -674,  -674,
    -674,   289,  -674,  -674,   289,   212,   275,   212,  -674,   155,
    -674,  -674,  -674,   194,   191,  -674,   171,  -674,  -674,   218,
    -674,  -674,  -674,  -674,   -57,  -674,   264,   275,   -34,  -674,
    -674,   -61,   227,    59,  -674,    21,    21,  2379,   318,   282,
    2379,   344,   183,  -674,    21,  -674,  -674,    64,   238,  -674,
    -674,    -2,  -674,  -674,   221,    -2,   303,   337,   231,   319,
     225,   234,   259,   406,   277,  2149,  -674,  -674,   874,  2149,
    1768,  -674,    59,    59,    59,   399,   151,   166,   295,  -674,
    2354,  -674,  -674,  -674,  2379,   338,   306,   179,    67,  -674,
     -40,   446,  2149,   258,  -674,   367,  2149,   298,  -674,  -674,
    -674,   387,  2023,  -674,   269,  2149,   463,  -674,  -674,  -674,
    -674,  -674,  -674,  -674,  -674,  -674,  -674,  2048,   331,   194,
     315,  -674,   270,  2048,   395,  -674,  -674,   481,  -674,  -674,
    -674,   449,   -53,   227,  -674,  -674,  -674,  1136,  -674,  -674,
    1768,  1768,    21,  2379,   275,   468,    21,  2379,  1736,  1768,
    2149,  2149,  2149,   487,  1768,  -674,    -2,  -674,  2149,    75,
    -674,  -674,    -2,   488,  -674,  -674,    -2,  -674,   866,   433,
    -674,   350,  -674,    42,   102,  -674,  -674,  -674,  -674,  -674,
    -674,  -674,  -674,  -674,  1768,  1768,  1768,  1341,  1768,   457,
     459,   465,  -674,  -674,  -674,  2718,  -674,  -674,  -674,   466,
    -674,  -674,   461,   470,    49,    49,    49,  1768,    94,    94,
     419,  -674,  -674,  -674,   304,  -674,   492,   493,   494,   402,
     403,   460,   460,   460,    -3,   316,  -674,   474,  -674,  -674,
    -674,   443,   497,   275,   485,   420,  1404,    52,  -674,  1375,
     333,  2073,   307,  2104,  -674,   275,    -5,  -674,  -674,  -674,
     343,  -674,   374,  -674,  -674,  -674,  -674,  -674,  -674,  -674,
     275,   275,  -674,   275,  -674,   -16,   233,  -674,   227,  -674,
    -674,  1071,  -674,   -20,  2718,  2718,  1768,    21,  -674,   551,
    1768,    21,  -674,  2718,    -2,    -2,  -674,  -674,  2718,  -674,
      -2,   516,  -674,   348,  -674,   518,  -674,  -674,  1467,  -674,
    1672,  1705,   -11,  2340,  1768,   519,   414,  2379,  1442,   405,
    -674,  2498,  -674,  -674,   364,  2391,   236,  2718,   417,  -674,
    2379,  1768,  1768,   268,  1768,  1768,  1768,  1768,  1768,  1768,
    1768,  1768,  1973,   536,   383,  1768,  1768,  1768,  1768,  1768,
    1768,  1768,   194,  2278,    92,  -674,   560,  -674,   560,  -674,
    2612,   384,  -674,  -674,  -674,   -59,   482,  -674,  2379,    63,
     591,   592,   583,   585,  -674,  2379,  2379,  2379,  2149,  2379,
     215,   551,  -674,  2310,  -674,   551,  2149,  1768,  2718,  -674,
    1943,   307,   569,  2023,  2149,  -674,   489,  -674,  2023,   489,
     489,   504,  2149,  -674,  -674,  2149,  2149,   463,   275,  -674,
    -674,   269,  -674,  -674,  -674,  -674,  -674,  -674,   574,   227,
    2354,  -674,  1998,  1136,  -674,  -674,  2718,  1768,  -674,  -674,
    2718,  1768,  -674,  -674,  -674,   575,   612,  -674,  1768,  2370,
    1768,  2569,  1768,  2590,  -674,  1768,  1952,  1768,  2670,  -674,
    -674,   -78,  -674,   598,    -7,  -674,   579,  1768,  -674,  1768,
     -21,  -674,  -674,  2421,  2498,  1768,  1973,   536,   667,   667,
     667,   667,   667,   667,   786,   858,  1973,  1973,  -674,   595,
    1341,  -674,  -674,  -674,  -674,  -674,   358,   498,   498,   586,
     586,   586,   586,  -674,   582,  -674,  -674,  -674,  -674,  -674,
    -674,    59,  -674,  -674,  -674,  1768,    94,    94,    94,  -674,
     576,  -674,  -674,   630,   632,  -674,  1952,     2,    35,  -674,
     471,   460,  -674,  -674,   529,    -6,  -674,  -674,  -674,   599,
    2718,   593,   307,  -674,  -674,  -674,   241,  -674,  -674,  2023,
    -674,  -674,  -674,  -674,  -674,   269,  -674,  -674,   298,   -72,
     307,  -674,  2718,  2718,  -674,  -674,  2718,  1768,  2718,  1768,
    2718,  1768,  2718,  -674,   602,  -674,   602,  -674,  -674,  -674,
     603,   520,   605,  -674,  -674,  -674,   603,  -674,  -674,   606,
     606,  -674,   602,   602,   609,  2718,  -674,  2379,    52,  1768,
      17,  2379,  1768,   -88,  2694,   773,  1768,  -674,   570,   858,
     643,  -674,  -674,  -674,  1973,  1973,  1973,  1973,  1973,  1973,
    1973,  1973,     3,  2718,  -674,  -674,  -674,  -674,  1136,  -674,
    -674,  -674,  -674,   647,   511,  -674,  -674,  -674,    78,    82,
    -674,  -674,  -674,  -674,  2354,   614,   379,  2310,  2379,   475,
    2149,  1768,   293,   151,  2023,   559,  2718,  2718,  2718,   653,
    -674,  -674,   659,  -674,  -674,  -674,   660,  -674,  -674,   661,
    -674,  -674,  -674,  -674,  -674,  -674,  -674,  2718,  -674,  -674,
    2718,     7,   627,  -674,  -674,  1768,  2718,  -674,  1973,   552,
     568,   568,   633,   633,   633,   633,  -674,  -674,   -39,  -674,
     644,   473,    18,   662,  -674,   672,    63,  -674,  2379,   663,
     663,   663,   663,   663,   663,   663,   663,   663,   663,   476,
    -674,  -674,     8,   646,   379,  -674,  2718,  1768,  -674,   307,
     629,   590,   649,     9,   650,   665,  -674,  1768,  1768,  2718,
     552,  2023,   188,   683,  -674,   674,    63,   615,  -674,  -674,
    -674,  -674,  -674,    11,  -674,   704,   708,   563,   714,   717,
     718,   720,   722,   723,   721,   379,  -674,  2379,  -674,   521,
    -674,  -674,  2718,  1768,  1768,  -674,  -674,  -674,   726,  -674,
    -674,  2718,    13,  -674,  -674,  -674,   152,  -674,  -674,  -674,
    -674,  -674,  -674,  -674,  -674,  -674,  -674,  -674,  -674,  -674,
    -674,  -674,    15,   379,   523,  2718,   692,  -674,  -674,  -674,
    -674,  -674,   -27,  -674,  -674,  -674,   712,   731,  -674,   740,
     743,  -674,   561,   732,   753,  -674
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -674,  -674,  -674,   594,  -279,  -674,  -443,  -389,  -150,   313,
     202,  -674,  -674,  -674,   210,  -674,   741,  -674,  -674,  -674,
    -674,   -96,   -92,  -674,    86,  -674,  -674,  -674,  -674,  -674,
    -117,  -674,   694,  -674,    41,   317,   163,   115,  -674,  -674,
     113,  -397,  -674,  -674,  -674,  -663,   -19,  -674,   677,  -674,
    -674,  -674,  -674,   -89,  -319,  -674,  -674,  -673,  -674,   -33,
    -108,    12,     1,  -674,    76,   117,  -401,   610,   -10,  -674,
     421,  -214,  -674,  -674,  -277,    54,  -124,  -674,  -674,  -674,
    -674,  -674,   193,  -674,  -674,  -163,   299,   118,  -674,  -196,
      14,   486,  -674,   -82,  -674,  -674,  -674,  -674,  -674,  -674,
    -674,  -128,   724,  -674,  -674,  -674,   499,   -31,  -326,  -674,
    -317,  -674,   670,  -674,   477,  -674,  -674,  -674,    89,  -674,
    -674,  -674,  -674,  -674,  -674,  -674,  -674,   813,   617,  -674,
     613,  -674,  -674,  -674,    27,  -674,  -674,  -674,   589,  -107,
     345,  -674,  -674,  -674,  -674,  -674,  -674,  -674,   370,   120,
    -674,  -674,  -674,  -674,  -674,   386,  -674,  -674,  -674,  -674,
     -18,    31,  -674,  -351,    -8
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -485
static const yytype_int16 yytable[] =
{
     103,   103,    64,   111,   144,   211,   342,   111,   414,   304,
     305,   306,    38,    63,   145,   165,   600,   208,   479,   369,
     511,   209,   101,   104,   210,   502,   253,   257,   824,   241,
     534,   896,   456,   167,   680,   726,   190,   249,   825,   102,
     102,   195,   126,   568,   777,   238,   501,   367,   816,   846,
     857,   821,   870,   311,   887,   802,   893,     1,   103,   464,
     686,   596,   327,   800,   217,  -225,   103,   275,   276,   277,
     512,   278,   279,   280,   328,   281,   282,   283,  -269,   189,
     188,   718,   408,   172,   173,   174,   170,   223,   197,     1,
     721,   826,   308,    70,   250,   336,   220,   102,   783,   453,
     309,   336,   785,    68,   235,   102,   454,  -225,   129,    65,
     321,   358,    74,   322,    66,   833,   495,   225,   226,   242,
    -269,   762,   246,   355,    67,    38,   178,   356,   389,   145,
     357,   677,   145,   127,   392,   376,   236,   734,   394,   380,
     678,   391,  -484,   481,  -482,   613,   323,   827,   719,   618,
     597,   784,   218,   549,   251,   786,   368,   103,   168,   637,
      21,   103,   329,   468,   112,   410,   316,   568,   897,   722,
     513,   254,   111,   130,   882,   218,   145,   568,   568,   271,
      38,   635,   881,   273,   103,    21,   457,   239,   103,   513,
     175,   132,   444,   503,   103,   164,   102,   103,   535,   324,
     102,   828,   681,   727,   496,   166,   332,   313,   290,   103,
     335,  -269,   535,   378,   341,   103,   817,   681,   858,   347,
     681,   169,   817,   102,   681,   377,   170,   102,   378,   381,
     144,    38,  -225,   102,     1,   145,   102,   733,   735,   145,
     145,   863,   103,   103,   103,  -269,   319,   320,   353,   180,
     103,  -235,  -235,  -235,   353,   178,   522,   523,   321,   741,
     183,   322,   524,   308,   384,   385,   386,   228,     7,   181,
     517,   309,   390,   182,   521,   752,   753,   181,  -280,   189,
      71,   102,   102,   102,   191,    38,  -280,   622,    64,   102,
      72,   702,   626,   198,   323,   369,   555,   556,   557,   416,
      14,   419,   195,    73,   864,   568,   568,   568,   568,   568,
     568,   568,   568,   184,   494,   201,   445,   445,   445,   710,
     711,   712,   185,   186,   206,   504,   213,    17,   229,   499,
     220,   103,   486,   103,   588,   103,   888,    21,   865,   215,
      64,   216,   889,   832,   890,   487,   585,   611,  -235,   488,
     586,   480,   489,   587,   219,   891,  -235,   230,  -235,   756,
     243,    25,   731,   111,   763,   105,   704,   231,   705,   706,
     102,   244,   485,   787,   493,   106,   114,   115,   490,   568,
     446,   448,   449,   868,   486,   505,   247,   506,   107,   543,
     545,   573,   248,   574,   575,   116,   252,   487,   486,   145,
     145,   488,   552,   576,   489,   117,   690,   627,   628,    64,
     118,   487,   145,   507,   807,   488,   692,   693,   489,   256,
      63,   447,   447,   447,   258,   590,   259,   119,   708,   262,
     490,   263,   265,   732,   591,   145,   267,   120,   789,   266,
     316,   465,   466,   467,   490,   572,   268,   606,   607,   608,
     145,   610,   269,   307,    38,   606,   317,   145,   145,   145,
     103,   145,   312,   318,   121,   145,   331,   333,   103,   334,
     146,   336,   103,   338,   122,   103,   103,   348,   345,   361,
     103,   360,   609,   295,   103,   363,   364,   103,   103,   366,
     619,   387,   379,   393,   406,   341,   407,     1,   123,   102,
     341,   420,   111,   443,   103,  -116,   442,   102,   178,   632,
     633,   485,  -483,   458,   102,   623,   459,   460,   461,   102,
     462,   463,   464,   630,   341,   470,   102,   102,   471,   472,
     147,   148,   437,   438,   439,   440,   441,   473,   809,   475,
     498,   476,   483,   102,   769,   770,   771,   772,   773,   774,
     775,   776,   497,   374,   375,   518,   525,   526,   149,   527,
     539,   150,   383,   540,   790,   791,   792,   388,   793,   572,
     794,    64,   758,   547,   884,   546,   570,   174,   795,   796,
     797,   403,   416,   798,   695,   696,   697,   698,   699,   700,
     701,   549,   151,   595,   598,   601,   602,   411,   412,   413,
     415,   417,   697,   698,   699,   700,   701,   603,   152,   604,
     621,   153,   629,   624,   694,   636,   644,   645,   820,   682,
     450,   103,   679,   707,   441,   154,   155,   695,   696,   697,
     698,   699,   700,   701,   715,   713,   716,   724,   725,   728,
     730,   341,   739,   742,  -356,   746,   749,   744,   156,   478,
     754,   779,   767,   780,   788,   157,   810,   803,   812,   543,
     102,   158,   768,   759,   813,   814,   815,   818,   822,   145,
     823,   701,   830,   145,   159,   695,   696,   697,   698,   699,
     700,   701,   831,   853,   867,   845,   847,   834,   854,   516,
     856,   859,    38,   520,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   860,   866,   871,   606,
     545,   529,   872,   531,   533,   873,   111,   538,   874,   145,
     145,   875,   103,   876,   869,   877,   103,   878,   879,   880,
     883,   886,   535,   895,   553,   554,   899,   558,   559,   560,
     561,   562,   563,   564,   565,   901,   341,   902,   577,   578,
     579,   580,   581,   582,   583,   900,   904,   903,   905,   691,
     687,   805,   272,   755,   160,   102,   894,   196,   801,   717,
     545,   836,   837,   838,   839,   840,   841,   842,   843,   844,
     145,   748,   605,   751,   205,   862,   310,   808,   709,   509,
     620,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   641,   103,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,   441,   482,   778,   261,   200,   545,
     642,   128,   474,   341,   643,   354,   362,   382,   500,   145,
     612,   646,   634,   648,   599,   650,     0,     0,   652,     0,
     675,     0,   102,     0,     0,     0,     0,     0,     0,     0,
     684,     0,   685,     0,     0,     0,     0,     0,   689,   274,
     275,   276,   277,     0,   278,   279,   280,     0,   281,   282,
     283,     0,     0,   703,     0,     0,   284,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,     0,   285,   286,
     395,     0,     0,     0,     0,     0,   287,   396,   450,     0,
       0,   397,     0,     0,     1,     0,     0,     0,     0,   398,
       2,     0,   288,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   765,     4,     0,     0,     0,     5,     0,
       0,     0,     0,   399,     0,     6,     0,     0,     7,     8,
       9,     0,   289,    10,     0,     0,     0,     0,     0,    11,
     736,    12,   737,     0,   738,     0,     0,     0,     0,     0,
      13,     0,     0,     0,     0,     0,   400,     0,     0,     0,
      14,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   757,     0,     0,   760,     0,     0,     0,   766,
       0,     0,    15,     0,     0,     0,    16,    17,     0,     0,
      18,   290,    19,    20,     0,     0,     0,    21,     0,     0,
      22,    23,     0,     0,     0,    24,     0,     0,     0,     0,
     401,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,     0,     0,   806,     0,     0,     0,     0,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,   291,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   108,     0,     0,     0,   819,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
       0,   134,     0,     0,     0,     0,     0,     0,   510,     0,
     852,   135,   136,     0,     0,     0,     0,     0,     0,     0,
     861,   760,     0,     0,     0,     0,     0,     0,     0,   274,
     275,   276,   277,     0,   278,   279,   280,     0,   281,   282,
     283,     0,     0,     0,     0,     0,   284,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   703,   885,   285,   286,
     370,     0,     0,     0,     0,     0,   287,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   288,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   137,   138,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   289,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   139,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   140,   141,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,     0,
       0,   290,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,     0,     0,     0,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,   291,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   274,   275,   276,   277,     0,   278,
     279,   280,     0,   281,   282,   283,     0,     0,     0,     0,
       0,   284,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   285,   286,     0,     0,     0,    75,     0,
       0,   287,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   288,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   274,   275,   276,
     277,   477,   278,   279,   280,   339,   281,   282,   283,     0,
       0,     0,     0,     0,   284,     0,     0,   289,     0,     0,
       0,     0,     0,     0,     0,     0,   285,   286,     0,     0,
       0,     0,     0,     0,   287,   134,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     288,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     274,   275,   276,   277,     0,   278,   279,   280,     0,   281,
     282,   283,     1,     0,    21,     0,   290,   284,     0,     0,
     289,     0,     0,     0,     0,     0,     0,     0,     0,   285,
     286,     0,     0,     0,     0,     0,     0,   287,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,     0,
       0,     0,     0,   288,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,   291,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   290,
       0,     0,     0,   289,     0,     0,     0,   528,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,     0,     0,    21,     0,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,   291,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   290,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
     291,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   274,   275,   276,   277,     0,
     278,   279,   280,     0,   281,   282,   283,     0,     0,     0,
       0,     0,   284,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   285,   286,     0,     0,   274,   275,
     276,   277,   287,   278,   279,   280,     0,   281,   282,   283,
       0,     0,     0,     0,     0,   284,     0,     0,   288,     0,
       0,     0,     0,     0,     0,     0,     0,   285,   286,   134,
       0,     0,     0,     0,     0,   287,     0,     0,     0,   135,
     136,     0,     0,     0,     0,     0,     0,     0,   289,     0,
       0,   288,   530,     0,     0,     0,     0,     0,     0,     0,
       0,   274,   275,   276,   277,     0,   278,   279,   280,     0,
     281,   282,   283,     0,     0,     0,     0,     0,   284,     0,
       0,   289,     0,     0,     0,   532,     0,     0,     0,     0,
     285,   286,     0,     0,     0,     0,     0,     0,   287,     0,
       0,     0,     0,     0,     0,     0,     0,   290,     0,     0,
       0,     0,     0,     0,   288,     0,     0,     0,     0,     0,
     137,   138,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     290,     0,     0,     0,   289,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,   291,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     140,   141,     0,     0,     0,     0,     0,     0,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,   291,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   290,     0,     0,     0,     0,     0,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,     0,     0,    75,     0,     0,     0,
       0,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,   291,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   274,   275,   276,   277,
       0,   278,   279,   280,   181,   281,   282,   283,     0,     0,
     484,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    75,   653,   654,   655,   566,   567,     0,     0,   656,
       0,     0,     0,   287,     0,     0,     0,   657,     0,     0,
       0,   658,   659,     0,   660,     0,    75,     0,     0,   288,
     661,     0,     0,     0,     0,     0,     0,     0,   339,     0,
     662,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    75,     0,     0,     0,     0,     0,   663,     0,   289,
       0,     0,     0,   339,     0,     0,     0,   664,     0,   665,
       0,   666,     0,     0,     0,     0,    75,     0,   638,     0,
       0,     0,   351,   667,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     668,     0,     0,     0,     0,     0,     0,    75,     0,     0,
       0,     0,     0,   669,   670,   671,     0,     0,   290,     0,
     484,     0,     0,   672,   673,     0,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   492,    75,     0,     0,     0,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,   291,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   134,     0,     0,     0,     0,     0,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   589,   134,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   108,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,     0,
       0,     0,   134,     0,     0,     0,     0,   536,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     537,     0,   548,     0,     0,     0,     0,     0,     0,   614,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     647,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,     0,     0,     0,     0,
       0,     0,     0,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,     0,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,     0,     0,     0,     0,     0,     0,     0,     0,   649,
     592,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     651,     0,     0,     0,     0,     0,     0,   593,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,     0,
       0,   676,   421,   422,   423,   424,   425,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,     0,     0,   764,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-674)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       8,     9,     1,    11,    22,   113,   202,    15,   287,   172,
     173,   174,     0,     1,    22,    25,   459,   113,   337,   233,
     371,   113,     8,     9,   113,    41,    28,   155,    10,   136,
      41,    58,   309,    83,    41,    41,    67,   144,    20,     8,
       9,    72,    15,   432,    41,    24,   363,   100,    41,    41,
      41,    90,    41,   177,    41,   728,    41,    40,    66,    62,
      81,   120,   102,   726,   121,    41,    74,     4,     5,     6,
      90,     8,     9,    10,   114,    12,    13,    14,    41,     4,
      66,    79,    40,    15,    16,    17,   174,   121,    74,    40,
      55,    73,   112,     4,    30,   173,   127,    66,    20,     5,
     120,   173,    20,   176,    45,    74,    12,    83,    19,   153,
      43,   219,    90,    46,   158,   788,   121,   178,   179,   137,
      83,   209,   140,   219,   168,   113,    89,   219,   256,   137,
     219,   209,   140,   168,   262,   242,    77,   209,   266,   246,
     541,    66,    40,   339,    42,   471,    79,   129,   146,   475,
     209,    73,   209,   174,    90,    73,   209,   165,   208,   510,
     143,   169,   202,   166,   206,   273,   184,   556,   195,   134,
     209,   173,   180,    94,   847,   209,   184,   566,   567,   165,
     168,   498,   845,   169,   192,   143,   310,   166,   196,   209,
     122,    99,   143,   209,   202,   165,   165,   205,   209,   132,
     169,   183,   209,   209,   209,     0,   192,   180,   145,   217,
     196,   174,   209,   244,   202,   223,   209,   209,   209,   205,
     209,   107,   209,   192,   209,   243,   174,   196,   259,   247,
     248,   219,   208,   202,    40,   243,   205,   638,   639,   247,
     248,    53,   250,   251,   252,   208,    67,    68,   217,   128,
     258,    15,    16,    17,   223,    89,   384,   385,    43,   656,
      93,    46,   390,   112,   250,   251,   252,    40,    74,    41,
     377,   120,   258,    41,   381,   672,   673,    41,   112,     4,
     158,   250,   251,   252,   103,   273,   120,   483,   287,   258,
     168,   570,   488,     4,    79,   509,    28,    29,    30,   287,
     106,   289,   333,   181,   116,   694,   695,   696,   697,   698,
     699,   700,   701,   146,   345,   103,   304,   305,   306,   596,
     597,   598,   155,   156,   169,    92,   135,   133,   101,   360,
     361,   339,    91,   341,   442,   343,   184,   143,   150,   168,
     339,   123,   190,   786,   192,   104,   442,   132,   112,   108,
     442,   339,   111,   442,    90,   203,   120,   130,   122,   678,
      42,   167,   121,   371,   683,   158,     8,   140,    10,    11,
     339,    89,   341,   724,   343,   168,    45,    46,   137,   768,
     304,   305,   306,   826,    91,   152,    42,   154,   181,   407,
     408,     8,   209,    10,    11,    64,   158,   104,    91,   407,
     408,   108,   420,    20,   111,    74,   556,   489,   490,   408,
      79,   104,   420,   180,   121,   108,   566,   567,   111,   198,
     408,   304,   305,   306,   121,   443,    89,    96,   591,   198,
     137,   112,   207,   629,   444,   443,   177,   106,    59,   205,
     458,   321,   322,   323,   137,   433,    40,   465,   466,   467,
     458,   469,   175,    54,   442,   473,   118,   465,   466,   467,
     468,   469,   167,   157,   133,   473,    20,   209,   476,   102,
       3,   173,   480,    86,   143,   483,   484,    14,   209,   209,
     488,   166,   468,   170,   492,    90,     5,   495,   496,    40,
     476,     4,    24,     5,    61,   483,   146,    40,   167,   468,
     488,    42,   510,    42,   512,    40,    40,   476,    89,   495,
     496,   480,    42,   209,   483,   484,    24,    24,    24,   488,
     118,   118,    62,   492,   512,   209,   495,   496,    54,    86,
      63,    64,    34,    35,    36,    37,    38,    40,   734,    54,
     166,   121,   209,   512,   694,   695,   696,   697,   698,   699,
     700,   701,   209,   240,   241,     4,    40,   209,    91,    41,
      41,    94,   249,   149,   185,   186,   187,   254,   189,   557,
     191,   570,   680,   209,   853,   170,    40,    17,   199,   200,
     201,   268,   570,   204,    32,    33,    34,    35,    36,    37,
      38,   174,   125,   209,   112,     4,     4,   284,   285,   286,
     287,   288,    34,    35,    36,    37,    38,    24,   141,    24,
      41,   144,   108,   124,    19,    41,    41,     5,   768,    40,
     307,   629,    24,    41,    38,   158,   159,    32,    33,    34,
      35,    36,    37,    38,     4,    59,     4,   166,   109,    40,
      47,   629,    40,    40,   177,    40,    40,   127,   181,   336,
      41,     4,    82,   142,    40,   188,    97,   182,     5,   677,
     629,   194,    19,   681,     5,     5,     5,    40,    24,   677,
     197,    38,    10,   681,   207,    32,    33,    34,    35,    36,
      37,    38,    10,    54,    10,   209,    40,    24,    98,   376,
      41,    41,   680,   380,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    41,    24,     4,   727,
     728,   398,     4,   400,   401,   152,   724,   404,     4,   727,
     728,     4,   730,     5,   109,     5,   734,     5,     5,     8,
     209,     5,   209,    41,   421,   422,    24,   424,   425,   426,
     427,   428,   429,   430,   431,     5,   734,     4,   435,   436,
     437,   438,   439,   440,   441,    24,    24,   196,     5,   557,
     550,   730,   168,   677,    23,   734,   883,    73,   727,   606,
     788,   790,   791,   792,   793,   794,   795,   796,   797,   798,
     788,   666,   465,   670,   107,   818,   176,   733,   595,   368,
     477,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,   513,   821,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,   339,   708,   157,   104,   847,
     517,    18,   333,   821,   521,   218,   223,   248,   361,   847,
     470,   528,   497,   530,   458,   532,    -1,    -1,   535,    -1,
     537,    -1,   821,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     547,    -1,   549,    -1,    -1,    -1,    -1,    -1,   555,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,    12,    13,
      14,    -1,    -1,   570,    -1,    -1,    20,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    -1,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    40,    41,   595,    -1,
      -1,    45,    -1,    -1,    40,    -1,    -1,    -1,    -1,    53,
      46,    -1,    56,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   160,    60,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    77,    -1,    71,    -1,    -1,    74,    75,
      76,    -1,    86,    79,    -1,    -1,    -1,    -1,    -1,    85,
     647,    87,   649,    -1,   651,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   679,    -1,    -1,   682,    -1,    -1,    -1,   686,
      -1,    -1,   128,    -1,    -1,    -1,   132,   133,    -1,    -1,
     136,   145,   138,   139,    -1,    -1,    -1,   143,    -1,    -1,
     146,   147,    -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,
     164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   167,    -1,    -1,   731,    -1,    -1,    -1,    -1,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,     3,    -1,    -1,    -1,   765,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
     807,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     817,   818,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   853,   854,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   144,   145,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,    -1,
      -1,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,    -1,    -1,    -1,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,     3,     4,     5,     6,    -1,     8,
       9,    10,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,     3,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    40,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    40,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    14,    40,    -1,   143,    -1,   145,    20,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,    -1,
      -1,    -1,    -1,    56,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   145,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    90,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,    -1,    -1,   143,    -1,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,     3,     4,
       5,     6,    40,     8,     9,    10,    -1,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,     3,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    56,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    86,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     145,    -1,    -1,    -1,    86,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     144,   145,    -1,    -1,    -1,    -1,    -1,    -1,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   145,    -1,    -1,    -1,    -1,    -1,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,    -1,    -1,     3,    -1,    -1,    -1,
      -1,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,     3,     4,     5,     6,
      -1,     8,     9,    10,    41,    12,    13,    14,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    50,    51,    52,    32,    33,    -1,    -1,    57,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    69,    70,    -1,    72,    -1,     3,    -1,    -1,    56,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,   105,    -1,    86,
      -1,    -1,    -1,    40,    -1,    -1,    -1,   115,    -1,   117,
      -1,   119,    -1,    -1,    -1,    -1,     3,    -1,    80,    -1,
      -1,    -1,    34,   131,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     148,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,   161,   162,   163,    -1,    -1,   145,    -1,
      47,    -1,    -1,   171,   172,    -1,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,    47,     3,    -1,    -1,    -1,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,     3,    -1,    -1,    -1,    -1,    -1,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,    34,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,     3,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    47,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      90,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,   129,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      90,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    75,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    41,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    -1,    -1,    41,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    40,    46,    49,    60,    64,    71,    74,    75,    76,
      79,    85,    87,    96,   106,   128,   132,   133,   136,   138,
     139,   143,   146,   147,   151,   167,   211,   212,   213,   231,
     232,   235,   241,   257,   260,   263,   265,   270,   271,   272,
     273,   274,   275,   304,   307,   314,   319,   321,   323,   326,
     330,   331,   332,   333,   336,   341,   343,   346,   351,   354,
     355,   356,   362,   271,   272,   153,   158,   168,   176,   328,
     328,   158,   168,   181,    90,     3,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   300,   371,   374,   300,   158,   168,   181,     3,   344,
     373,   374,   206,   306,    45,    46,    64,    74,    79,    96,
     106,   133,   143,   167,   337,   338,   344,   168,   337,   328,
      94,   334,    99,   278,     3,    13,    14,    94,    95,   126,
     144,   145,   347,   348,   370,   374,     3,    63,    64,    91,
      94,   125,   141,   144,   158,   159,   181,   188,   194,   207,
     226,   310,   313,   372,   165,   278,     0,    83,   208,   107,
     174,   264,    15,    16,    17,   122,   289,   290,    89,   286,
     128,    41,    41,    93,   146,   155,   156,   363,   300,     4,
     317,   103,   242,   315,   316,   317,   242,   300,     4,   312,
     312,   103,   258,   317,   320,   258,   169,   352,   231,   232,
     263,   270,   305,   135,   339,   168,   123,   121,   209,    90,
     317,   324,   325,   121,   342,   178,   179,   335,    40,   101,
     130,   140,   279,   280,   281,    45,    77,   295,    24,   166,
     349,   349,   370,    42,    89,   322,   370,    42,   209,   349,
      30,    90,   158,    28,   173,   311,   198,   311,   121,    89,
     309,   322,   198,   112,   308,   207,   205,   177,    40,   175,
     329,   300,   213,   300,     3,     4,     5,     6,     8,     9,
      10,    12,    13,    14,    20,    32,    33,    40,    56,    86,
     145,   193,   215,   216,   217,   219,   221,   226,   227,   228,
     271,   370,   371,   374,   295,   295,   295,    54,   112,   120,
     277,   286,   167,   344,   364,   365,   370,   118,   157,    67,
      68,    43,    46,    79,   132,   357,   358,   102,   114,   202,
     327,    20,   300,   209,   102,   300,   173,   276,    86,    40,
     259,   271,   299,   300,   301,   209,   261,   300,    14,   350,
     353,    34,   340,   371,   338,   231,   232,   263,   270,   345,
     166,   209,   340,    90,     5,   282,    40,   100,   209,   281,
      34,   219,   296,   297,   219,   219,   349,   370,   317,    24,
     349,   370,   348,   219,   300,   300,   300,     4,   219,   311,
     300,    66,   311,     5,   311,    34,    41,    45,    53,    77,
     110,   164,   214,   219,   230,   287,    61,   146,    40,   266,
     270,   219,   219,   219,   214,   219,   271,   219,   222,   271,
      42,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    40,    42,   143,   271,   274,   275,   274,   274,
     219,   291,   292,     5,    12,   284,   284,   286,   209,    24,
      24,    24,   118,   118,    62,   359,   359,   359,   166,   359,
     209,    54,    86,    40,   316,    54,   121,     7,   219,   264,
     271,   299,   301,   209,    47,   371,    91,   104,   108,   111,
     137,   302,    47,   371,   317,   121,   209,   209,   166,   317,
     324,   320,    41,   209,    92,   152,   154,   180,   283,   280,
      47,   373,    90,   209,   277,   285,   219,   349,     4,   318,
     219,   349,   311,   311,   311,    40,   209,    41,    90,   219,
      90,   219,    90,   219,    41,   209,    47,    90,   219,    41,
     149,   233,   234,   370,   267,   370,   170,   209,    41,   174,
     223,   224,   370,   219,   219,    28,    29,    30,   219,   219,
     219,   219,   219,   219,   219,   219,    32,    33,   217,   218,
      40,   220,   271,     8,    10,    11,    20,   219,   219,   219,
     219,   219,   219,   219,   229,   231,   232,   263,   270,    34,
     370,   278,    48,    75,   293,   209,   120,   209,   112,   365,
     216,     4,     4,    24,    24,   245,   370,   370,   370,   300,
     370,   132,   358,   318,   129,   243,   244,   245,   318,   300,
     219,    41,   299,   371,   124,   303,   299,   303,   303,   108,
     371,   262,   300,   300,   350,   320,    41,   373,    80,   298,
     299,   296,   219,   219,    41,     5,   219,    90,   219,    90,
     219,    90,   219,    50,    51,    52,    57,    65,    69,    70,
      72,    78,    88,   105,   115,   117,   119,   131,   148,   161,
     162,   163,   171,   172,   246,   219,    41,   209,   276,    24,
      41,   209,    40,   268,   219,   219,    81,   224,   225,   219,
     218,   220,   218,   218,    19,    32,    33,    34,    35,    36,
      37,    38,   214,   219,     8,    10,    11,    41,   295,   292,
     284,   284,   284,    59,   366,     4,     4,   246,    79,   146,
     361,    55,   134,   360,   166,   109,    41,   209,    40,   236,
      47,   121,   299,   276,   209,   276,   219,   219,   219,    40,
     251,   251,    40,   247,   127,   249,    40,   248,   247,    40,
     250,   250,   251,   251,    41,   234,   264,   219,   270,   370,
     219,   269,   209,   264,    41,   160,   219,    82,    19,   218,
     218,   218,   218,   218,   218,   218,   218,    41,   297,     4,
     142,   367,   252,    20,    73,    20,    73,   373,    40,    59,
     185,   186,   187,   189,   191,   199,   200,   201,   204,   254,
     255,   244,   267,   182,   237,   371,   219,   121,   285,   299,
      97,   288,     5,     5,     5,     5,    41,   209,    40,   219,
     218,    90,    24,   197,    10,    20,    73,   129,   183,   253,
      10,    10,   216,   267,    24,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   209,    41,    40,   238,   239,
     240,   255,   219,    54,    98,   294,    41,    41,   209,    41,
      41,   219,   269,    53,   116,   150,    24,    10,   216,   109,
      41,     4,     4,   152,     4,     4,     5,     5,     5,     5,
       8,   255,   267,   209,   214,   219,     5,    41,   184,   190,
     192,   203,   368,    41,   240,    41,    58,   195,   369,    24,
      24,     5,     4,   196,    24,     5
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      yyerror (&yylloc, result, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (YYID (N))                                                     \
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
    while (YYID (0))
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

__attribute__((__unused__))
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
#else
static unsigned
yy_location_print_ (yyo, yylocp)
    FILE *yyo;
    YYLTYPE const * const yylocp;
#endif
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += fprintf (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += fprintf (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += fprintf (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += fprintf (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += fprintf (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, &yylloc, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, &yylloc)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location, result); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ParseResult* result)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, result)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    ParseResult* result;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
  YYUSE (result);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ParseResult* result)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp, result)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    ParseResult* result;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, result);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, ParseResult* result)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule, result)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
    ParseResult* result;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       , result);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule, result); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, ParseResult* result)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp, result)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
    ParseResult* result;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (result);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {
      case 3: /* NAME */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 4: /* STRING */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 5: /* INTNUM */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 6: /* DATE_VALUE */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 7: /* HINT_VALUE */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 8: /* BOOL */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 9: /* APPROXNUM */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 10: /* NULLX */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 11: /* UNKNOWN */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 12: /* QUESTIONMARK */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 13: /* SYSTEM_VARIABLE */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 14: /* TEMP_VARIABLE */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 211: /* sql_stmt */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 212: /* stmt_list */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 213: /* stmt */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 214: /* expr_list */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 215: /* column_ref */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 216: /* expr_const */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 217: /* simple_expr */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 218: /* arith_expr */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 219: /* expr */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 220: /* in_expr */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 221: /* case_expr */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 222: /* case_arg */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 223: /* when_clause_list */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 224: /* when_clause */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 225: /* case_default */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 226: /* func_expr */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 227: /* when_func */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 228: /* when_func_name */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 229: /* when_func_stmt */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 230: /* distinct_or_all */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 231: /* delete_stmt */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 232: /* update_stmt */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 233: /* update_asgn_list */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 234: /* update_asgn_factor */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 235: /* create_index_stmt */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 236: /* opt_index_columns */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 237: /* opt_storing */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 238: /* opt_storing_columns */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 239: /* opt_index_option_list */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 240: /* index_option */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 241: /* create_table_stmt */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 242: /* opt_if_not_exists */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 243: /* table_element_list */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 244: /* table_element */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 245: /* column_definition */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 246: /* data_type */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 247: /* opt_decimal */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 248: /* opt_float */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 249: /* opt_precision */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 250: /* opt_time_precision */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 251: /* opt_char_length */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 252: /* opt_column_attribute_list */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 253: /* column_attribute */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 254: /* opt_table_option_list */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 255: /* table_option */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 256: /* opt_equal_mark */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 257: /* drop_table_stmt */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 258: /* opt_if_exists */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 259: /* table_list */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 260: /* drop_index_stmt */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 261: /* index_list */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 262: /* table_name */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 263: /* insert_stmt */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 264: /* opt_when */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 265: /* replace_or_insert */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 266: /* opt_insert_columns */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 267: /* column_list */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 268: /* insert_vals_list */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 269: /* insert_vals */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 270: /* select_stmt */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 271: /* select_with_parens */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 272: /* select_no_parens */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 273: /* no_table_select */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 274: /* select_clause */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 275: /* simple_select */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 276: /* opt_where */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 277: /* select_limit */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 278: /* opt_hint */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 279: /* opt_hint_list */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 280: /* hint_options */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 281: /* hint_option */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 282: /* opt_comma_list */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 284: /* limit_expr */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 285: /* opt_select_limit */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 286: /* opt_for_update */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 287: /* parameterized_trim */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 288: /* opt_groupby */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 289: /* opt_order_by */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 290: /* order_by */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 291: /* sort_list */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 292: /* sort_key */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 293: /* opt_asc_desc */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 294: /* opt_having */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 295: /* opt_distinct */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 296: /* projection */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 297: /* select_expr_list */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 298: /* from_list */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 299: /* table_factor */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 300: /* relation_factor */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 301: /* joined_table */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 302: /* join_type */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 303: /* join_outer */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 304: /* explain_stmt */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 305: /* explainable_stmt */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 306: /* opt_verbose */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 307: /* show_stmt */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 308: /* opt_limit */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 309: /* opt_for_grant_user */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 311: /* opt_show_condition */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 312: /* opt_like_condition */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 314: /* create_user_stmt */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 315: /* user_specification_list */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 316: /* user_specification */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 317: /* user */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 318: /* password */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 319: /* drop_user_stmt */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 320: /* user_list */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 321: /* set_password_stmt */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 322: /* opt_for_user */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 323: /* rename_user_stmt */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 324: /* rename_info */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 325: /* rename_list */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 326: /* lock_user_stmt */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 327: /* lock_spec */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 328: /* opt_work */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 330: /* begin_stmt */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 331: /* commit_stmt */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 332: /* rollback_stmt */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 333: /* kill_stmt */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 334: /* opt_is_global */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 335: /* opt_flag */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 336: /* grant_stmt */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 337: /* priv_type_list */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 338: /* priv_type */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 339: /* opt_privilege */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 340: /* priv_level */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 341: /* revoke_stmt */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 342: /* opt_on_priv_level */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 343: /* prepare_stmt */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 344: /* stmt_name */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 345: /* preparable_stmt */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 346: /* variable_set_stmt */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 347: /* var_and_val_list */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 348: /* var_and_val */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 349: /* to_or_eq */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 350: /* argument */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 351: /* execute_stmt */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 352: /* opt_using_args */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 353: /* argument_list */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 354: /* deallocate_prepare_stmt */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 355: /* deallocate_or_drop */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 356: /* alter_table_stmt */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 357: /* alter_column_actions */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 358: /* alter_column_action */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 359: /* opt_column */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 361: /* alter_column_behavior */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 362: /* alter_system_stmt */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 363: /* opt_force */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 364: /* alter_system_actions */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 365: /* alter_system_action */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 366: /* opt_comment */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 368: /* server_type */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 369: /* opt_cluster_or_address */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 370: /* column_name */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 371: /* relation_name */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 372: /* function_name */

        {destroy_tree(((*yyvaluep).node));};

        break;
      case 373: /* column_label */

        {destroy_tree(((*yyvaluep).node));};

        break;

      default:
        break;
    }
}




/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (ParseResult* result)
#else
int
yyparse (result)
    ParseResult* result;
#endif
#endif
{
/* The lookahead symbol.  */
int yychar;


#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
static YYSTYPE yyval_default;
# define YY_INITIAL_VALUE(Value) = Value
#endif
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc = yyloc_default;


    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

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
      yychar = YYLEX;
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
     `$$ = $1'.

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
        case 2:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_STMT_LIST, (yyvsp[(1) - (2)].node));
      result->result_tree_ = (yyval.node);
      YYACCEPT;
    }
    break;

  case 3:

    {
      if ((yyvsp[(3) - (3)].node) != NULL)
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      else
        (yyval.node) = (yyvsp[(1) - (3)].node);
    }
    break;

  case 4:

    {
      (yyval.node) = ((yyvsp[(1) - (1)].node) != NULL) ? (yyvsp[(1) - (1)].node) : NULL;
    }
    break;

  case 5:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 6:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 7:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 8:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 9:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 10:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 11:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 12:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 13:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 14:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 15:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 16:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 17:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 18:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 19:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 20:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 21:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 22:

    { (yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 23:

    { (yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 24:

    { (yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 25:

    { (yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 26:

    { (yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 27:

    { (yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 28:

    { (yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 29:

    { (yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 30:

    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 31:

    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 32:

    { (yyval.node) = NULL; }
    break;

  case 33:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    }
    break;

  case 34:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 35:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 36:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NAME_FIELD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(3) - (3)]).first_column, (yylsp[(3) - (3)]).last_column);
    }
    break;

  case 37:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_STAR);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NAME_FIELD, 2, (yyvsp[(1) - (3)].node), node);
    }
    break;

  case 38:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 39:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 40:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 41:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 42:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 43:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 44:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 45:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 46:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 47:

    { (yyvsp[(3) - (3)].node)->type_ = T_SYSTEM_VARIABLE; (yyval.node) = (yyvsp[(3) - (3)].node); }
    break;

  case 48:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 49:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 50:

    { (yyval.node) = (yyvsp[(2) - (3)].node); }
    break;

  case 51:

    {
      ParseNode *node = NULL;
      malloc_non_terminal_node(node, result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node));
      merge_nodes((yyval.node), result->malloc_pool_, T_EXPR_LIST, node);
    }
    break;

  case 52:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
      /*
      yyerror(&@1, result, "CASE expression is not supported yet!");
      YYABORT;
      */
    }
    break;

  case 53:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    }
    break;

  case 54:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    }
    break;

  case 55:

    {
    	(yyval.node) = (yyvsp[(1) - (1)].node);
    }
    break;

  case 56:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_EXISTS, 1, (yyvsp[(2) - (2)].node));
    }
    break;

  case 57:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 58:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_POS, 1, (yyvsp[(2) - (2)].node));
    }
    break;

  case 59:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NEG, 1, (yyvsp[(2) - (2)].node));
    }
    break;

  case 60:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_ADD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); }
    break;

  case 61:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MINUS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); }
    break;

  case 62:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MUL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); }
    break;

  case 63:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_DIV, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); }
    break;

  case 64:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_REM, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); }
    break;

  case 65:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_POW, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); }
    break;

  case 66:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MOD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); }
    break;

  case 67:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 68:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_POS, 1, (yyvsp[(2) - (2)].node));
    }
    break;

  case 69:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NEG, 1, (yyvsp[(2) - (2)].node));
    }
    break;

  case 70:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_ADD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); }
    break;

  case 71:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MINUS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); }
    break;

  case 72:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MUL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); }
    break;

  case 73:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_DIV, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); }
    break;

  case 74:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_REM, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); }
    break;

  case 75:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_POW, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); }
    break;

  case 76:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MOD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); }
    break;

  case 77:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); }
    break;

  case 78:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LT, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); }
    break;

  case 79:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_EQ, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); }
    break;

  case 80:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_GE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); }
    break;

  case 81:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_GT, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); }
    break;

  case 82:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); }
    break;

  case 83:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); }
    break;

  case 84:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NOT_LIKE, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node)); }
    break;

  case 85:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_AND, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 86:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_OR, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 87:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NOT, 1, (yyvsp[(2) - (2)].node));
    }
    break;

  case 88:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 89:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS_NOT, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    }
    break;

  case 90:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 91:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS_NOT, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    }
    break;

  case 92:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 93:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS_NOT, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    }
    break;

  case 94:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_BTW, 3, (yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    }
    break;

  case 95:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NOT_BTW, 3, (yyvsp[(1) - (6)].node), (yyvsp[(4) - (6)].node), (yyvsp[(6) - (6)].node));
    }
    break;

  case 96:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IN, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 97:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NOT_IN, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    }
    break;

  case 98:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_CNN, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 99:

    {
    	(yyval.node) = (yyvsp[(1) - (1)].node);
    }
    break;

  case 100:

    { merge_nodes((yyval.node), result->malloc_pool_, T_EXPR_LIST, (yyvsp[(2) - (3)].node)); }
    break;

  case 101:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_WHEN_LIST, (yyvsp[(3) - (5)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CASE, 3, (yyvsp[(2) - (5)].node), (yyval.node), (yyvsp[(4) - (5)].node));
    }
    break;

  case 102:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 103:

    { (yyval.node) = NULL; }
    break;

  case 104:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 105:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); }
    break;

  case 106:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_WHEN, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    }
    break;

  case 107:

    { (yyval.node) = (yyvsp[(2) - (2)].node); }
    break;

  case 108:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_NULL); }
    break;

  case 109:

    {
      if (strcasecmp((yyvsp[(1) - (4)].node)->str_value_, "count") != 0)
      {
        yyerror(&(yylsp[(1) - (4)]), result, "Only COUNT function can be with '*' parameter!");
        YYABORT;
      }
      else
      {
        ParseNode* node = NULL;
        malloc_terminal_node(node, result->malloc_pool_, T_STAR);
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_FUN_COUNT, 1, node);
      }
    }
    break;

  case 110:

    {
      if (strcasecmp((yyvsp[(1) - (5)].node)->str_value_, "count") == 0)
      {
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_FUN_COUNT, 2, (yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].node));
      }
      else if (strcasecmp((yyvsp[(1) - (5)].node)->str_value_, "sum") == 0)
      {
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_FUN_SUM, 2, (yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].node));
      }
      else if (strcasecmp((yyvsp[(1) - (5)].node)->str_value_, "max") == 0)
      {
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_FUN_MAX, 2, (yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].node));
      }
      else if (strcasecmp((yyvsp[(1) - (5)].node)->str_value_, "min") == 0)
      {
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_FUN_MIN, 2, (yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].node));
      }
      else if (strcasecmp((yyvsp[(1) - (5)].node)->str_value_, "avg") == 0)
      {
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_FUN_AVG, 2, (yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].node));
      }
      else
      {
        yyerror(&(yylsp[(1) - (5)]), result, "Wrong system function with 'DISTINCT/ALL'!");
        YYABORT;
      }
    }
    break;

  case 111:

    {
      if (strcasecmp((yyvsp[(1) - (4)].node)->str_value_, "count") == 0)
      {
        if ((yyvsp[(3) - (4)].node)->type_ == T_LINK_NODE)
        {
          yyerror(&(yylsp[(1) - (4)]), result, "COUNT function only support 1 parameter!");
          YYABORT;
        }
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_FUN_COUNT, 2, NULL, (yyvsp[(3) - (4)].node));
      }
      else if (strcasecmp((yyvsp[(1) - (4)].node)->str_value_, "sum") == 0)
      {
        if ((yyvsp[(3) - (4)].node)->type_ == T_LINK_NODE)
        {
          yyerror(&(yylsp[(1) - (4)]), result, "SUM function only support 1 parameter!");
          YYABORT;
        }
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_FUN_SUM, 2, NULL, (yyvsp[(3) - (4)].node));
      }
      else if (strcasecmp((yyvsp[(1) - (4)].node)->str_value_, "max") == 0)
      {
        if ((yyvsp[(3) - (4)].node)->type_ == T_LINK_NODE)
        {
          yyerror(&(yylsp[(1) - (4)]), result, "MAX function only support 1 parameter!");
          YYABORT;
        }
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_FUN_MAX, 2, NULL, (yyvsp[(3) - (4)].node));
      }
      else if (strcasecmp((yyvsp[(1) - (4)].node)->str_value_, "min") == 0)
      {
        if ((yyvsp[(3) - (4)].node)->type_ == T_LINK_NODE)
        {
          yyerror(&(yylsp[(1) - (4)]), result, "MIN function only support 1 parameter!");
          YYABORT;
        }
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_FUN_MIN, 2, NULL, (yyvsp[(3) - (4)].node));
      }
      else if (strcasecmp((yyvsp[(1) - (4)].node)->str_value_, "avg") == 0)
      {
        if ((yyvsp[(3) - (4)].node)->type_ == T_LINK_NODE)
        {
          yyerror(&(yylsp[(1) - (4)]), result, "AVG function only support 1 parameter!");
          YYABORT;
        }
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_FUN_AVG, 2, NULL, (yyvsp[(3) - (4)].node));
      }
      else if (strcasecmp((yyvsp[(1) - (4)].node)->str_value_, "trim") == 0)
      {
        if ((yyvsp[(3) - (4)].node)->type_ == T_LINK_NODE)
        {
          yyerror(&(yylsp[(1) - (4)]), result, "TRIM function syntax error! TRIM don't take %d params", (yyvsp[(3) - (4)].node)->num_child_);
          YYABORT;
        }
        else
        {
          ParseNode* default_type = NULL;
          malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
          default_type->value_ = 0;
          ParseNode* default_operand = NULL;
          malloc_terminal_node(default_operand, result->malloc_pool_, T_STRING);
          default_operand->str_value_ = " "; /* blank for default */
          default_operand->value_ = strlen(default_operand->str_value_);
          ParseNode *params = NULL;
          malloc_non_terminal_node(params, result->malloc_pool_, T_EXPR_LIST, 3, default_type, default_operand, (yyvsp[(3) - (4)].node));
          malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_FUN_SYS, 2, (yyvsp[(1) - (4)].node), params);
        }
      }
      else  /* system function */
      {
        ParseNode *params = NULL;
        merge_nodes(params, result->malloc_pool_, T_EXPR_LIST, (yyvsp[(3) - (4)].node));
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_FUN_SYS, 2, (yyvsp[(1) - (4)].node), params);
      }
    }
    break;

  case 112:

    {
      if (strcasecmp((yyvsp[(1) - (6)].node)->str_value_, "cast") == 0)
      {
        (yyvsp[(5) - (6)].node)->value_ = (yyvsp[(5) - (6)].node)->type_;
        (yyvsp[(5) - (6)].node)->type_ = T_INT;
        ParseNode *params = NULL;
        malloc_non_terminal_node(params, result->malloc_pool_, T_EXPR_LIST, 2, (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node));
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_FUN_SYS, 2, (yyvsp[(1) - (6)].node), params);
      }
      else
      {
        yyerror(&(yylsp[(1) - (6)]), result, "AS support cast function only!");
        YYABORT;
      }
    }
    break;

  case 113:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_FUN_SYS, 2, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));
    }
    break;

  case 114:

    {
      if (strcasecmp((yyvsp[(1) - (3)].node)->str_value_, "now") == 0 ||
          strcasecmp((yyvsp[(1) - (3)].node)->str_value_, "current_time") == 0 ||
          strcasecmp((yyvsp[(1) - (3)].node)->str_value_, "current_timestamp") == 0)
      {
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CUR_TIME, 1, (yyvsp[(1) - (3)].node));
      }
      else if (strcasecmp((yyvsp[(1) - (3)].node)->str_value_, "strict_current_timestamp") == 0)
      {
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CUR_TIME_UPS, 1, (yyvsp[(1) - (3)].node));
      }
      else
      {
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_FUN_SYS, 1, (yyvsp[(1) - (3)].node));
      }
      //yyerror(&@1, result, "system/user-define function is not supported yet!");
      //YYABORT;
    }
    break;

  case 115:

    {
      (yyval.node) = (yyvsp[(1) - (4)].node);
      (yyval.node)->children_[0] = (yyvsp[(3) - (4)].node);
    }
    break;

  case 116:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ROW_COUNT, 1, NULL);
    }
    break;

  case 121:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_ALL);
    }
    break;

  case 122:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_DISTINCT);
    }
    break;

  case 123:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_DELETE, 3, (yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node));
    }
    break;

  case 124:

    {
      ParseNode* assign_list = NULL;
      merge_nodes(assign_list, result->malloc_pool_, T_ASSIGN_LIST, (yyvsp[(5) - (7)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_UPDATE, 5, (yyvsp[(3) - (7)].node), assign_list, (yyvsp[(6) - (7)].node), (yyvsp[(7) - (7)].node), (yyvsp[(2) - (7)].node));
    }
    break;

  case 125:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    }
    break;

  case 126:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 127:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ASSIGN_ITEM, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 128:

    {
		ParseNode *index_options = NULL;
		merge_nodes(index_options, result->malloc_pool_, T_INDEX_OPTION_LIST, (yyvsp[(9) - (9)].node));
		malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CREATE_INDEX, 6,
								  (yyvsp[(3) - (9)].node), /* if not exists */
								  (yyvsp[(6) - (9)].node), /* table name */
								  (yyvsp[(4) - (9)].node), /* index name */ 
		                          (yyvsp[(7) - (9)].node), /* index columns */
		                          (yyvsp[(8) - (9)].node), /* storing list */
		                          index_options /* option list */
		                        );
	}
    break;

  case 129:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_COLUMN_LIST, (yyvsp[(2) - (3)].node));
    }
    break;

  case 130:

    {
  		(yyval.node)=(yyvsp[(2) - (2)].node);
  	}
    break;

  case 131:

    {
  		(yyval.node)=NULL;
  	}
    break;

  case 132:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_COLUMN_LIST, (yyvsp[(2) - (3)].node));
    }
    break;

  case 133:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    }
    break;

  case 134:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 135:

    {
      (yyval.node) = NULL;
    }
    break;

  case 136:

    {
		(yyval.node) = (yyvsp[(1) - (1)].node);
	}
    break;

  case 137:

    {
      ParseNode *table_elements = NULL;
      ParseNode *table_options = NULL;
      merge_nodes(table_elements, result->malloc_pool_, T_TABLE_ELEMENT_LIST, (yyvsp[(6) - (8)].node));
      merge_nodes(table_options, result->malloc_pool_, T_TABLE_OPTION_LIST, (yyvsp[(8) - (8)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CREATE_TABLE, 4,
              (yyvsp[(3) - (8)].node),                   /* if not exists */
              (yyvsp[(4) - (8)].node),                   /* table name */
              table_elements,       /* columns or primary key */
              table_options         /* table option(s) */
              );
    }
    break;

  case 138:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_IF_NOT_EXISTS); }
    break;

  case 139:

    { (yyval.node) = NULL; }
    break;

  case 140:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    }
    break;

  case 141:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 142:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    }
    break;

  case 143:

    {
      ParseNode* col_list= NULL;
      merge_nodes(col_list, result->malloc_pool_, T_COLUMN_LIST, (yyvsp[(4) - (5)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PRIMARY_KEY, 1, col_list);
    }
    break;

  case 144:

    {
      ParseNode *attributes = NULL;
      merge_nodes(attributes, result->malloc_pool_, T_COLUMN_ATTRIBUTES, (yyvsp[(3) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_DEFINITION, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), attributes);
    }
    break;

  case 145:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER ); }
    break;

  case 146:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER); }
    break;

  case 147:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER); }
    break;

  case 148:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER); }
    break;

  case 149:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER); }
    break;

  case 150:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DECIMAL);
      else
        merge_nodes((yyval.node), result->malloc_pool_, T_TYPE_DECIMAL, (yyvsp[(2) - (2)].node));
      yyerror(&(yylsp[(1) - (2)]), result, "DECIMAL type is not supported");
      YYABORT;
    }
    break;

  case 151:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DECIMAL);
      else
        merge_nodes((yyval.node), result->malloc_pool_, T_TYPE_DECIMAL, (yyvsp[(2) - (2)].node));
      yyerror(&(yylsp[(1) - (2)]), result, "NUMERIC type is not supported");
      YYABORT;
    }
    break;

  case 152:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_BOOLEAN ); }
    break;

  case 153:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_FLOAT, 1, (yyvsp[(2) - (2)].node)); }
    break;

  case 154:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DOUBLE); }
    break;

  case 155:

    {
      (void)((yyvsp[(2) - (2)].node)) ; /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DOUBLE);
    }
    break;

  case 156:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIMESTAMP);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIMESTAMP, 1, (yyvsp[(2) - (2)].node));
    }
    break;

  case 157:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIMESTAMP); }
    break;

  case 158:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CHARACTER);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CHARACTER, 1, (yyvsp[(2) - (2)].node));
    }
    break;

  case 159:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CHARACTER);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CHARACTER, 1, (yyvsp[(2) - (2)].node));
    }
    break;

  case 160:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_VARCHAR);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_VARCHAR, 1, (yyvsp[(2) - (2)].node));
    }
    break;

  case 161:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_VARCHAR);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_VARCHAR, 1, (yyvsp[(2) - (2)].node));
    }
    break;

  case 162:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CREATETIME); }
    break;

  case 163:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_MODIFYTIME); }
    break;

  case 164:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DATE);
      yyerror(&(yylsp[(1) - (1)]), result, "DATE type is not supported");
      YYABORT;
    }
    break;

  case 165:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIME);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIME, 1, (yyvsp[(2) - (2)].node));
      yyerror(&(yylsp[(1) - (2)]), result, "TIME type is not supported");
      YYABORT;
    }
    break;

  case 166:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node)); }
    break;

  case 167:

    { (yyval.node) = (yyvsp[(2) - (3)].node); }
    break;

  case 168:

    { (yyval.node) = NULL; }
    break;

  case 169:

    { (yyval.node) = (yyvsp[(2) - (3)].node); }
    break;

  case 170:

    { (yyval.node) = NULL; }
    break;

  case 171:

    { (yyval.node) = NULL; }
    break;

  case 172:

    { (yyval.node) = NULL; }
    break;

  case 173:

    { (yyval.node) = (yyvsp[(2) - (3)].node); }
    break;

  case 174:

    { (yyval.node) = NULL; }
    break;

  case 175:

    { (yyval.node) = (yyvsp[(2) - (3)].node); }
    break;

  case 176:

    { (yyval.node) = NULL; }
    break;

  case 177:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); }
    break;

  case 178:

    { (yyval.node) = NULL; }
    break;

  case 179:

    {
      (void)((yyvsp[(2) - (2)].node)) ; /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NOT_NULL);
    }
    break;

  case 180:

    {
      (void)((yyvsp[(1) - (1)].node)) ; /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NULL);
    }
    break;

  case 181:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyvsp[(2) - (2)].node)); }
    break;

  case 182:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_AUTO_INCREMENT); }
    break;

  case 183:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_PRIMARY_KEY); }
    break;

  case 184:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    }
    break;

  case 185:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 186:

    {
      (yyval.node) = NULL;
    }
    break;

  case 187:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_INFO, 1, (yyvsp[(3) - (3)].node));
    }
    break;

  case 188:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPIRE_INFO, 1, (yyvsp[(3) - (3)].node));
    }
    break;

  case 189:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLET_MAX_SIZE, 1, (yyvsp[(3) - (3)].node));
    }
    break;

  case 190:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLET_BLOCK_SIZE, 1, (yyvsp[(3) - (3)].node));
    }
    break;

  case 191:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLET_ID, 1, (yyvsp[(3) - (3)].node));
    }
    break;

  case 192:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_REPLICA_NUM, 1, (yyvsp[(3) - (3)].node));
    }
    break;

  case 193:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COMPRESS_METHOD, 1, (yyvsp[(3) - (3)].node));
    }
    break;

  case 194:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_USE_BLOOM_FILTER, 1, (yyvsp[(3) - (3)].node));
    }
    break;

  case 195:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSISTENT_MODE);
      (yyval.node)->value_ = 1;
    }
    break;

  case 196:

    {
      (void)((yyvsp[(2) - (3)].node)); /*  make bison mute*/
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COMMENT, 1, (yyvsp[(3) - (3)].node));
    }
    break;

  case 197:

    { (yyval.node) = NULL; }
    break;

  case 198:

    { (yyval.node) = NULL; }
    break;

  case 199:

    {
      ParseNode *tables = NULL;
      merge_nodes(tables, result->malloc_pool_, T_TABLE_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_DROP_TABLE, 2, (yyvsp[(3) - (4)].node), tables);
    }
    break;

  case 200:

    { (yyval.node) = NULL; }
    break;

  case 201:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_IF_EXISTS); }
    break;

  case 202:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    }
    break;

  case 203:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 204:

    {
      ParseNode *indexs = NULL;
      merge_nodes(indexs, result->malloc_pool_, T_INDEX_LIST, (yyvsp[(4) - (6)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_DROP_INDEX, 3, (yyvsp[(3) - (6)].node), tables, (yyvsp[(6) - (6)].node));
    }
    break;

  case 205:

    { (yyval.node) = NULL; }
    break;

  case 206:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    }
    break;

  case 207:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 208:

    {
	  (yyval.node) = (yyvsp[(1) - (1)].node);
	}
    break;

  case 209:

    {
      ParseNode* val_list = NULL;
      merge_nodes(val_list, result->malloc_pool_, T_VALUE_LIST, (yyvsp[(6) - (7)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_INSERT, 6,
                              (yyvsp[(3) - (7)].node),           /* target relation */
                              (yyvsp[(4) - (7)].node),           /* column list */
                              val_list,     /* value list */
                              NULL,         /* value from sub-query */
                              (yyvsp[(1) - (7)].node),           /* is replacement */
                              (yyvsp[(7) - (7)].node)            /* when expression */
                              );
    }
    break;

  case 210:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_INSERT, 6,
                              (yyvsp[(3) - (4)].node),           /* target relation */
                              NULL,         /* column list */
                              NULL,         /* value list */
                              (yyvsp[(4) - (4)].node),           /* value from sub-query */
                              (yyvsp[(1) - (4)].node),           /* is replacement */
                              NULL          /* when expression */
                              );
    }
    break;

  case 211:

    {
      /* if opt_when is really needed, use select_with_parens instead */
      ParseNode* col_list = NULL;
      merge_nodes(col_list, result->malloc_pool_, T_COLUMN_LIST, (yyvsp[(5) - (7)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_INSERT, 6,
                              (yyvsp[(3) - (7)].node),           /* target relation */
                              col_list,     /* column list */
                              NULL,         /* value list */
                              (yyvsp[(7) - (7)].node),           /* value from sub-query */
                              (yyvsp[(1) - (7)].node),           /* is replacement */
                              NULL          /* when expression */
                              );
    }
    break;

  case 212:

    { (yyval.node) = NULL; }
    break;

  case 213:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    }
    break;

  case 214:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    }
    break;

  case 215:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    }
    break;

  case 216:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_COLUMN_LIST, (yyvsp[(2) - (3)].node));
    }
    break;

  case 217:

    { (yyval.node) = NULL; }
    break;

  case 218:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 219:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 220:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_VALUE_VECTOR, (yyvsp[(2) - (3)].node));
    }
    break;

  case 221:

    {
    merge_nodes((yyvsp[(4) - (5)].node), result->malloc_pool_, T_VALUE_VECTOR, (yyvsp[(4) - (5)].node));
    malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (5)].node), (yyvsp[(4) - (5)].node));
  }
    break;

  case 222:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 223:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 224:

    {
      (yyval.node) = (yyvsp[(1) - (2)].node);
      (yyval.node)->children_[14] = (yyvsp[(2) - (2)].node);
      if ((yyval.node)->children_[12] == NULL && (yyvsp[(2) - (2)].node) != NULL)
      {
        malloc_terminal_node((yyval.node)->children_[12], result->malloc_pool_, T_BOOL);
        (yyval.node)->children_[12]->value_ = 1;
      }
    }
    break;

  case 225:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 226:

    { (yyval.node) = (yyvsp[(2) - (3)].node); }
    break;

  case 227:

    { (yyval.node) = (yyvsp[(2) - (3)].node); }
    break;

  case 228:

    {
      (yyval.node)= (yyvsp[(1) - (1)].node);
    }
    break;

  case 229:

    {
      (yyval.node) = (yyvsp[(1) - (2)].node);
      (yyval.node)->children_[12] = (yyvsp[(2) - (2)].node);
    }
    break;

  case 230:

    {
      /* use the new order by to replace old one */
      ParseNode* select = (ParseNode*)(yyvsp[(1) - (3)].node);
      if (select->children_[10])
        destroy_tree(select->children_[10]);
      select->children_[10] = (yyvsp[(2) - (3)].node);
      select->children_[12] = (yyvsp[(3) - (3)].node);
      (yyval.node) = select;
    }
    break;

  case 231:

    {
      /* use the new order by to replace old one */
      ParseNode* select = (ParseNode*)(yyvsp[(1) - (4)].node);
      if ((yyvsp[(2) - (4)].node))
      {
        if (select->children_[10])
          destroy_tree(select->children_[10]);
        select->children_[10] = (yyvsp[(2) - (4)].node);
      }

      /* set limit value */
      if (select->children_[11])
        destroy_tree(select->children_[11]);
      select->children_[11] = (yyvsp[(3) - (4)].node);
      select->children_[12] = (yyvsp[(4) - (4)].node);
      (yyval.node) = select;
    }
    break;

  case 232:

    {
      ParseNode* project_list = NULL;
      merge_nodes(project_list, result->malloc_pool_, T_PROJECT_LIST, (yyvsp[(4) - (5)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SELECT, 15,
                              (yyvsp[(3) - (5)].node),             /* 1. distinct */
                              project_list,   /* 2. select clause */
                              NULL,           /* 3. from clause */
                              NULL,           /* 4. where */
                              NULL,           /* 5. group by */
                              NULL,           /* 6. having */
                              NULL,           /* 7. set operation */
                              NULL,           /* 8. all specified? */
                              NULL,           /* 9. former select stmt */
                              NULL,           /* 10. later select stmt */
                              NULL,           /* 11. order by */
                              (yyvsp[(5) - (5)].node),             /* 12. limit */
                              NULL,           /* 13. for update */
                              (yyvsp[(2) - (5)].node),             /* 14 hints */
                              NULL            /* 15 when clause */
                              );
    }
    break;

  case 233:

    {
      ParseNode* project_list = NULL;
      merge_nodes(project_list, result->malloc_pool_, T_PROJECT_LIST, (yyvsp[(4) - (8)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SELECT, 15,
                              (yyvsp[(3) - (8)].node),             /* 1. distinct */
                              project_list,   /* 2. select clause */
                              NULL,           /* 3. from clause */
                              (yyvsp[(7) - (8)].node),             /* 4. where */
                              NULL,           /* 5. group by */
                              NULL,           /* 6. having */
                              NULL,           /* 7. set operation */
                              NULL,           /* 8. all specified? */
                              NULL,           /* 9. former select stmt */
                              NULL,           /* 10. later select stmt */
                              NULL,           /* 11. order by */
                              (yyvsp[(8) - (8)].node),             /* 12. limit */
                              NULL,           /* 13. for update */
                              (yyvsp[(2) - (8)].node),             /* 14 hints */
                              NULL            /* 15 when clause */
                              );
    }
    break;

  case 234:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 235:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 236:

    {
      ParseNode* project_list = NULL;
      ParseNode* from_list = NULL;
      merge_nodes(project_list, result->malloc_pool_, T_PROJECT_LIST, (yyvsp[(4) - (9)].node));
      merge_nodes(from_list, result->malloc_pool_, T_FROM_LIST, (yyvsp[(6) - (9)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SELECT, 15,
                              (yyvsp[(3) - (9)].node),             /* 1. distinct */
                              project_list,   /* 2. select clause */
                              from_list,      /* 3. from clause */
                              (yyvsp[(7) - (9)].node),             /* 4. where */
                              (yyvsp[(8) - (9)].node),             /* 5. group by */
                              (yyvsp[(9) - (9)].node),             /* 6. having */
                              NULL,           /* 7. set operation */
                              NULL,           /* 8. all specified? */
                              NULL,           /* 9. former select stmt */
                              NULL,           /* 10. later select stmt */
                              NULL,           /* 11. order by */
                              NULL,           /* 12. limit */
                              NULL,           /* 13. for update */
                              (yyvsp[(2) - (9)].node),             /* 14 hints */
                              NULL            /* 15 when clause */
                              );
    }
    break;

  case 237:

    {
      ParseNode* set_op = NULL;
      malloc_terminal_node(set_op, result->malloc_pool_, T_SET_UNION);
	    malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SELECT, 15,
                              NULL,           /* 1. distinct */
                              NULL,           /* 2. select clause */
                              NULL,           /* 3. from clause */
                              NULL,           /* 4. where */
                              NULL,           /* 5. group by */
                              NULL,           /* 6. having */
                              set_op,   /* 7. set operation */
                              (yyvsp[(3) - (4)].node),             /* 8. all specified? */
                              (yyvsp[(1) - (4)].node),             /* 9. former select stmt */
                              (yyvsp[(4) - (4)].node),             /* 10. later select stmt */
                              NULL,           /* 11. order by */
                              NULL,           /* 12. limit */
                              NULL,           /* 13. for update */
                              NULL,           /* 14 hints */
                              NULL            /* 15 when clause */
                              );
    }
    break;

  case 238:

    {
      ParseNode* set_op = NULL;
      malloc_terminal_node(set_op, result->malloc_pool_, T_SET_INTERSECT);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SELECT, 15,
                              NULL,           /* 1. distinct */
                              NULL,           /* 2. select clause */
                              NULL,           /* 3. from clause */
                              NULL,           /* 4. where */
                              NULL,           /* 5. group by */
                              NULL,           /* 6. having */
                              set_op,   /* 7. set operation */
                              (yyvsp[(3) - (4)].node),             /* 8. all specified? */
                              (yyvsp[(1) - (4)].node),             /* 9. former select stmt */
                              (yyvsp[(4) - (4)].node),             /* 10. later select stmt */
                              NULL,           /* 11. order by */
                              NULL,           /* 12. limit */
                              NULL,           /* 13. for update */
                              NULL,           /* 14 hints */
                              NULL            /* 15 when clause */
                              );
    }
    break;

  case 239:

    {
      ParseNode* set_op = NULL;
      malloc_terminal_node(set_op, result->malloc_pool_, T_SET_EXCEPT);
	    malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SELECT, 15,
                              NULL,           /* 1. distinct */
                              NULL,           /* 2. select clause */
                              NULL,           /* 3. from clause */
                              NULL,           /* 4. where */
                              NULL,           /* 5. group by */
                              NULL,           /* 6. having */
                              set_op,   /* 7. set operation */
                              (yyvsp[(3) - (4)].node),             /* 8. all specified? */
                              (yyvsp[(1) - (4)].node),             /* 9. former select stmt */
                              (yyvsp[(4) - (4)].node),             /* 10. later select stmt */
                              NULL,           /* 11. order by */
                              NULL,           /* 12. limit */
                              NULL,           /* 13. for update */
                              NULL,           /* 14 hints */
                              NULL            /* 15 when clause */
                              );
    }
    break;

  case 240:

    {(yyval.node) = NULL;}
    break;

  case 241:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    }
    break;

  case 242:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_WHERE_CLAUSE, 2, (yyvsp[(3) - (3)].node), (yyvsp[(2) - (3)].node));
    }
    break;

  case 243:

    {
      if ((yyvsp[(2) - (4)].node)->type_ == T_QUESTIONMARK && (yyvsp[(4) - (4)].node)->type_ == T_QUESTIONMARK)
      {
        (yyvsp[(4) - (4)].node)->value_++;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    }
    break;

  case 244:

    {
      if ((yyvsp[(2) - (4)].node)->type_ == T_QUESTIONMARK && (yyvsp[(4) - (4)].node)->type_ == T_QUESTIONMARK)
      {
        (yyvsp[(4) - (4)].node)->value_++;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, (yyvsp[(4) - (4)].node), (yyvsp[(2) - (4)].node));
    }
    break;

  case 245:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, (yyvsp[(2) - (2)].node), NULL);
    }
    break;

  case 246:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, NULL, (yyvsp[(2) - (2)].node));
    }
    break;

  case 247:

    {
      if ((yyvsp[(2) - (4)].node)->type_ == T_QUESTIONMARK && (yyvsp[(4) - (4)].node)->type_ == T_QUESTIONMARK)
      {
        (yyvsp[(4) - (4)].node)->value_++;
      }
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, (yyvsp[(4) - (4)].node), (yyvsp[(2) - (4)].node));
    }
    break;

  case 248:

    {
      (yyval.node) = NULL;
    }
    break;

  case 249:

    {
      if ((yyvsp[(2) - (3)].node))
      {
        merge_nodes((yyval.node), result->malloc_pool_, T_HINT_OPTION_LIST, (yyvsp[(2) - (3)].node));
      }
      else
      {
        (yyval.node) = NULL;
      }
    }
    break;

  case 250:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    }
    break;

  case 251:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 252:

    {
      (yyval.node) = NULL;
    }
    break;

  case 253:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    }
    break;

  case 254:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    }
    break;

  case 255:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_READ_STATIC);
    }
    break;

  case 256:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_HOTSPOT);
    }
    break;

  case 257:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_READ_CONSISTENCY);
      (yyval.node)->value_ = (yyvsp[(3) - (4)].ival);
    }
    break;

  case 258:

    {
      (yyval.node) = (yyvsp[(2) - (3)].node);
    }
    break;

  case 259:

    {
      (yyval.node) = (yyvsp[(1) - (2)].node);
    }
    break;

  case 260:

    {
      (yyval.node) = NULL;
    }
    break;

  case 261:

    {
    (yyval.ival) = 3;
  }
    break;

  case 262:

    {
    (yyval.ival) = 4;
  }
    break;

  case 263:

    {
    (yyval.ival) = 1;
  }
    break;

  case 264:

    {
    (yyval.ival) = 2;
  }
    break;

  case 265:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 266:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 267:

    { (yyval.node) = NULL; }
    break;

  case 268:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 269:

    { (yyval.node) = NULL; }
    break;

  case 270:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    }
    break;

  case 271:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 0;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 272:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 0;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    }
    break;

  case 273:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 1;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    }
    break;

  case 274:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 2;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    }
    break;

  case 275:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 0;
      ParseNode *default_operand = NULL;
      malloc_terminal_node(default_operand, result->malloc_pool_, T_STRING);
      default_operand->str_value_ = " "; /* blank for default */
      default_operand->value_ = strlen(default_operand->str_value_);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, default_operand, (yyvsp[(3) - (3)].node));
    }
    break;

  case 276:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 1;
      ParseNode *default_operand = NULL;
      malloc_terminal_node(default_operand, result->malloc_pool_, T_STRING);
      default_operand->str_value_ = " "; /* blank for default */
      default_operand->value_ = strlen(default_operand->str_value_);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, default_operand, (yyvsp[(3) - (3)].node));
    }
    break;

  case 277:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 2;
      ParseNode *default_operand = NULL;
      malloc_terminal_node(default_operand, result->malloc_pool_, T_STRING);
      default_operand->str_value_ = " "; /* blank for default */
      default_operand->value_ = strlen(default_operand->str_value_);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, default_operand, (yyvsp[(3) - (3)].node));
    }
    break;

  case 278:

    { (yyval.node) = NULL; }
    break;

  case 279:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_EXPR_LIST, (yyvsp[(3) - (3)].node));
    }
    break;

  case 280:

    { (yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 281:

    { (yyval.node) = NULL; }
    break;

  case 282:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_SORT_LIST, (yyvsp[(3) - (3)].node));
    }
    break;

  case 283:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 284:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); }
    break;

  case 285:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SORT_KEY, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    }
    break;

  case 286:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_ASC); }
    break;

  case 287:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_ASC); }
    break;

  case 288:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_DESC); }
    break;

  case 289:

    { (yyval.node) = 0; }
    break;

  case 290:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    }
    break;

  case 291:

    {
      (yyval.node) = NULL;
    }
    break;

  case 292:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_ALL);
    }
    break;

  case 293:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_DISTINCT);
    }
    break;

  case 294:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, (yyvsp[(1) - (1)].node));
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (1)]).first_column, (yylsp[(1) - (1)]).last_column);
    }
    break;

  case 295:

    {
      ParseNode* alias_node = NULL;
      malloc_non_terminal_node(alias_node, result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, alias_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (2)]).first_column, (yylsp[(1) - (2)]).last_column);
      dup_expr_string(alias_node->str_value_, result, (yylsp[(2) - (2)]).first_column, (yylsp[(2) - (2)]).last_column);
    }
    break;

  case 296:

    {
      ParseNode* alias_node = NULL;
      malloc_non_terminal_node(alias_node, result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, alias_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (3)]).first_column, (yylsp[(1) - (3)]).last_column);
      dup_expr_string(alias_node->str_value_, result, (yylsp[(3) - (3)]).first_column, (yylsp[(3) - (3)]).last_column);
    }
    break;

  case 297:

    {
      ParseNode* star_node = NULL;
      malloc_terminal_node(star_node, result->malloc_pool_, T_STAR);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, star_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (1)]).first_column, (yylsp[(1) - (1)]).last_column);
    }
    break;

  case 298:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    }
    break;

  case 299:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 300:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 301:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); }
    break;

  case 302:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    }
    break;

  case 303:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 304:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    }
    break;

  case 305:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 306:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    }
    break;

  case 307:

    {
    	(yyval.node) = (yyvsp[(1) - (1)].node);
    }
    break;

  case 308:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(2) - (5)].node), (yyvsp[(5) - (5)].node));
    	yyerror(&(yylsp[(1) - (5)]), result, "qualied joined table can not be aliased!");
      YYABORT;
    }
    break;

  case 309:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 310:

    {
    	(yyval.node) = (yyvsp[(2) - (3)].node);
    }
    break;

  case 311:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOINED_TABLE, 4, (yyvsp[(2) - (6)].node), (yyvsp[(1) - (6)].node), (yyvsp[(4) - (6)].node), (yyvsp[(6) - (6)].node));
    }
    break;

  case 312:

    {
      ParseNode* node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_JOIN_INNER);
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOINED_TABLE, 4, node, (yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    }
    break;

  case 313:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_FULL);
    }
    break;

  case 314:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_LEFT);
    }
    break;

  case 315:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_RIGHT);
    }
    break;

  case 316:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_INNER);
    }
    break;

  case 317:

    { (yyval.node) = NULL; }
    break;

  case 318:

    { (yyval.node) = NULL; }
    break;

  case 319:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPLAIN, 1, (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = ((yyvsp[(2) - (3)].node) ? 1 : 0); /* positive: verbose */
    }
    break;

  case 320:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 321:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 322:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 323:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 324:

    { (yyval.node) = (ParseNode*)1; }
    break;

  case 325:

    { (yyval.node) = NULL; }
    break;

  case 326:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_TABLES, 1, (yyvsp[(3) - (3)].node)); }
    break;

  case 327:

    {  malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_INDEX, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); }
    break;

  case 328:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); }
    break;

  case 329:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); }
    break;

  case 330:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_TABLE_STATUS, 1, (yyvsp[(4) - (4)].node)); }
    break;

  case 331:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_SERVER_STATUS, 1, (yyvsp[(4) - (4)].node)); }
    break;

  case 332:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_VARIABLES, 1, (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = (yyvsp[(2) - (4)].ival);
    }
    break;

  case 333:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_SCHEMA); }
    break;

  case 334:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_CREATE_TABLE, 1, (yyvsp[(4) - (4)].node)); }
    break;

  case 335:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); }
    break;

  case 336:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); }
    break;

  case 337:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_WARNINGS, 1, (yyvsp[(3) - (3)].node));
    }
    break;

  case 338:

    {
      if ((yyvsp[(2) - (3)].node)->type_ != T_FUN_COUNT)
      {
        yyerror(&(yylsp[(1) - (3)]), result, "Only COUNT(*) function is supported in SHOW WARNINGS statement!");
        YYABORT;
      }
      else
      {
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_WARNINGS);
        (yyval.node)->value_ = 1;
      }
    }
    break;

  case 339:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_GRANTS, 1, (yyvsp[(3) - (3)].node));
    }
    break;

  case 340:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_PARAMETERS, 1, (yyvsp[(3) - (3)].node));
    }
    break;

  case 341:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_PROCESSLIST);
      (yyval.node)->value_ = (yyvsp[(2) - (3)].ival);
    }
    break;

  case 342:

    {
      if ((yyvsp[(2) - (4)].node)->value_ < 0 || (yyvsp[(4) - (4)].node)->value_ < 0)
      {
        yyerror(&(yylsp[(1) - (4)]), result, "OFFSET/COUNT must not be less than 0!");
        YYABORT;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_LIMIT, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    }
    break;

  case 343:

    {
      if ((yyvsp[(2) - (2)].node)->value_ < 0)
      {
        yyerror(&(yylsp[(1) - (2)]), result, "COUNT must not be less than 0!");
        YYABORT;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_LIMIT, 2, NULL, (yyvsp[(2) - (2)].node));
    }
    break;

  case 344:

    { (yyval.node) = NULL; }
    break;

  case 345:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 346:

    { (yyval.node) = NULL; }
    break;

  case 347:

    { (yyval.node) = NULL; }
    break;

  case 348:

    { (yyval.ival) = 1; }
    break;

  case 349:

    { (yyval.ival) = 0; }
    break;

  case 350:

    { (yyval.ival) = 0; }
    break;

  case 351:

    { (yyval.node) = NULL; }
    break;

  case 352:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 1, (yyvsp[(2) - (2)].node)); }
    break;

  case 353:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_WHERE_CLAUSE, 1, (yyvsp[(2) - (2)].node)); }
    break;

  case 354:

    { (yyval.node) = NULL; }
    break;

  case 355:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 1, (yyvsp[(1) - (1)].node)); }
    break;

  case 356:

    { (yyval.ival) = 0; }
    break;

  case 357:

    { (yyval.ival) = 1; }
    break;

  case 358:

    {
        merge_nodes((yyval.node), result->malloc_pool_, T_CREATE_USER, (yyvsp[(3) - (3)].node));
    }
    break;

  case 359:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    }
    break;

  case 360:

    {
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 361:

    {
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CREATE_USER_SPEC, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    }
    break;

  case 362:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    }
    break;

  case 363:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    }
    break;

  case 364:

    {
        merge_nodes((yyval.node), result->malloc_pool_, T_DROP_USER, (yyvsp[(3) - (3)].node));
    }
    break;

  case 365:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    }
    break;

  case 366:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 367:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SET_PASSWORD, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    }
    break;

  case 368:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SET_PASSWORD, 2, (yyvsp[(3) - (6)].node), (yyvsp[(6) - (6)].node));
    }
    break;

  case 369:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    }
    break;

  case 370:

    {
      (yyval.node) = NULL;
    }
    break;

  case 371:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_RENAME_USER, (yyvsp[(3) - (3)].node));
    }
    break;

  case 372:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_RENAME_INFO, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 373:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    }
    break;

  case 374:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 375:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LOCK_USER, 2, (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    }
    break;

  case 376:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    }
    break;

  case 377:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    }
    break;

  case 378:

    {
      (void)(yyval.node);
    }
    break;

  case 379:

    {
      (void)(yyval.node);
    }
    break;

  case 380:

    {
      (yyval.ival) = 1;
    }
    break;

  case 381:

    {
      (yyval.ival) = 0;
    }
    break;

  case 382:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BEGIN);
      (yyval.node)->value_ = 0;
    }
    break;

  case 383:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BEGIN);
      (yyval.node)->value_ = (yyvsp[(3) - (3)].ival);
    }
    break;

  case 384:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_COMMIT);
    }
    break;

  case 385:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_ROLLBACK);
    }
    break;

  case 386:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_KILL, 3, (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    }
    break;

  case 387:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    }
    break;

  case 388:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    }
    break;

  case 389:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    }
    break;

  case 390:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    }
    break;

  case 391:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    }
    break;

  case 392:

    {
      ParseNode *privileges_node = NULL;
      ParseNode *users_node = NULL;
      merge_nodes(privileges_node, result->malloc_pool_, T_PRIVILEGES, (yyvsp[(2) - (6)].node));
      merge_nodes(users_node, result->malloc_pool_, T_USERS, (yyvsp[(6) - (6)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_GRANT,
                                 3, privileges_node, (yyvsp[(4) - (6)].node), users_node);
    }
    break;

  case 393:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    }
    break;

  case 394:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 395:

    {
      (void)(yyvsp[(2) - (2)].node);                 /* useless */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_ALL;
    }
    break;

  case 396:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_ALTER;
    }
    break;

  case 397:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_CREATE;
    }
    break;

  case 398:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_CREATE_USER;
    }
    break;

  case 399:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_DELETE;
    }
    break;

  case 400:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_DROP;
    }
    break;

  case 401:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_GRANT_OPTION;
    }
    break;

  case 402:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_INSERT;
    }
    break;

  case 403:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_UPDATE;
    }
    break;

  case 404:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_SELECT;
    }
    break;

  case 405:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_REPLACE;
    }
    break;

  case 406:

    {
      (void)(yyval.node);
    }
    break;

  case 407:

    {
      (void)(yyval.node);
    }
    break;

  case 408:

    {
      /* means global priv_level */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_LEVEL);
    }
    break;

  case 409:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_LEVEL, 1, (yyvsp[(1) - (1)].node));
    }
    break;

  case 410:

    {
      ParseNode *privileges_node = NULL;
      ParseNode *priv_level = NULL;
      merge_nodes(privileges_node, result->malloc_pool_, T_PRIVILEGES, (yyvsp[(2) - (5)].node));
      if ((yyvsp[(3) - (5)].node) == NULL)
      {
        /* check privileges: should have and only have ALL PRIVILEGES, GRANT OPTION */
        int check_ok = 0;
        if (2 == privileges_node->num_child_)
        {
          assert(privileges_node->children_[0]->num_child_ == 0);
          assert(privileges_node->children_[0]->type_ == T_PRIV_TYPE);
          assert(privileges_node->children_[1]->num_child_ == 0);
          assert(privileges_node->children_[1]->type_ == T_PRIV_TYPE);
          if ((privileges_node->children_[0]->value_ == OB_PRIV_ALL
               && privileges_node->children_[1]->value_ == OB_PRIV_GRANT_OPTION)
              || (privileges_node->children_[1]->value_ == OB_PRIV_ALL
                  && privileges_node->children_[0]->value_ == OB_PRIV_GRANT_OPTION))
          {
            check_ok = 1;
          }
        }
        if (!check_ok)
        {
          yyerror(&(yylsp[(1) - (5)]), result, "support only ALL PRIVILEGES, GRANT OPTION");
          YYABORT;
        }
      }
      else
      {
        priv_level = (yyvsp[(3) - (5)].node);
      }
      ParseNode *users_node = NULL;
      merge_nodes(users_node, result->malloc_pool_, T_USERS, (yyvsp[(5) - (5)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_REVOKE,
                                 3, privileges_node, priv_level, users_node);
    }
    break;

  case 411:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    }
    break;

  case 412:

    {
      (yyval.node) = NULL;
    }
    break;

  case 413:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PREPARE, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    }
    break;

  case 414:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 415:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 416:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 417:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 418:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 419:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_VARIABLE_SET, (yyvsp[(2) - (2)].node));;
      (yyval.node)->value_ = 2;
    }
    break;

  case 420:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    }
    break;

  case 421:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 422:

    {
      (void)((yyvsp[(2) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    }
    break;

  case 423:

    {
      (void)((yyvsp[(2) - (3)].node));
      (yyvsp[(1) - (3)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    }
    break;

  case 424:

    {
      (void)((yyvsp[(3) - (4)].node));
      (yyvsp[(2) - (4)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = 1;
    }
    break;

  case 425:

    {
      (void)((yyvsp[(3) - (4)].node));
      (yyvsp[(2) - (4)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = 2;
    }
    break;

  case 426:

    {
      (void)((yyvsp[(4) - (5)].node));
      (yyvsp[(3) - (5)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
      (yyval.node)->value_ = 1;
    }
    break;

  case 427:

    {
      (void)((yyvsp[(4) - (5)].node));
      (yyvsp[(3) - (5)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
      (yyval.node)->value_ = 2;
    }
    break;

  case 428:

    {
      (void)((yyvsp[(2) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    }
    break;

  case 429:

    { (yyval.node) = NULL; }
    break;

  case 430:

    { (yyval.node) = NULL; }
    break;

  case 431:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 432:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXECUTE, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 433:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (2)].node));
    }
    break;

  case 434:

    {
      (yyval.node) = NULL;
    }
    break;

  case 435:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    }
    break;

  case 436:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 437:

    {
      (void)((yyvsp[(1) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_DEALLOCATE, 1, (yyvsp[(3) - (3)].node));
    }
    break;

  case 438:

    { (yyval.node) = NULL; }
    break;

  case 439:

    { (yyval.node) = NULL; }
    break;

  case 440:

    {
      ParseNode *alter_actions = NULL;
      merge_nodes(alter_actions, result->malloc_pool_, T_ALTER_ACTION_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_TABLE, 2, (yyvsp[(3) - (4)].node), alter_actions);
    }
    break;

  case 441:

    {
      yyerror(&(yylsp[(1) - (6)]), result, "Table rename is not supported now");
      YYABORT;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLE_RENAME, 1, (yyvsp[(6) - (6)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_ACTION_LIST, 1, (yyval.node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_TABLE, 2, (yyvsp[(3) - (6)].node), (yyval.node));
    }
    break;

  case 442:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    }
    break;

  case 443:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 444:

    {
      (void)((yyvsp[(2) - (3)].node)); /* make bison mute */
      (yyval.node) = (yyvsp[(3) - (3)].node); /* T_COLUMN_DEFINITION */
    }
    break;

  case 445:

    {
      (void)((yyvsp[(2) - (4)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_DROP, 1, (yyvsp[(3) - (4)].node));
      (yyval.node)->value_ = (yyvsp[(4) - (4)].ival);
    }
    break;

  case 446:

    {
      (void)((yyvsp[(2) - (4)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_ALTER, 2, (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    }
    break;

  case 447:

    {
      (void)((yyvsp[(2) - (5)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_RENAME, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    }
    break;

  case 448:

    { (yyval.node) = NULL; }
    break;

  case 449:

    { (yyval.node) = NULL; }
    break;

  case 450:

    { (yyval.ival) = 2; }
    break;

  case 451:

    { (yyval.ival) = 1; }
    break;

  case 452:

    { (yyval.ival) = 0; }
    break;

  case 453:

    {
      (void)((yyvsp[(3) - (3)].node)); /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NOT_NULL);
    }
    break;

  case 454:

    {
      (void)((yyvsp[(3) - (3)].node)); /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NULL);
    }
    break;

  case 455:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyvsp[(3) - (3)].node));
    }
    break;

  case 456:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_NULL);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyval.node));
    }
    break;

  case 457:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_SYTEM_ACTION_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_SYSTEM, 1, (yyval.node));
    }
    break;

  case 458:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 3, node, (yyvsp[(7) - (7)].node), (yyvsp[(3) - (7)].node));
    }
    break;

  case 459:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 3, node, (yyvsp[(7) - (7)].node), (yyvsp[(3) - (7)].node));
    }
    break;

  case 460:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 2, node, (yyvsp[(6) - (6)].node));
    }
    break;

  case 461:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 2, node, (yyvsp[(6) - (6)].node));
    }
    break;

  case 462:

    {
      (yyval.node) = NULL;
    }
    break;

  case 463:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_FORCE);
    }
    break;

  case 464:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    }
    break;

  case 465:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    }
    break;

  case 466:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SYSTEM_ACTION, 5,
                               (yyvsp[(1) - (9)].node),    /* param_name */
                               (yyvsp[(3) - (9)].node),    /* param_value */
                               (yyvsp[(4) - (9)].node),    /* comment */
                               (yyvsp[(8) - (9)].node),    /* server type */
                               (yyvsp[(9) - (9)].node)     /* cluster or IP/port */
                               );
      (yyval.node)->value_ = (yyvsp[(5) - (9)].ival);                /* scope */
    }
    break;

  case 467:

    { (yyval.node) = (yyvsp[(2) - (2)].node); }
    break;

  case 468:

    { (yyval.node) = NULL; }
    break;

  case 469:

    { (yyval.ival) = 0; }
    break;

  case 470:

    { (yyval.ival) = 1; }
    break;

  case 471:

    { (yyval.ival) = 2; }
    break;

  case 472:

    { (yyval.ival) = 2; }
    break;

  case 473:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 1;
    }
    break;

  case 474:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 4;
    }
    break;

  case 475:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 2;
    }
    break;

  case 476:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 3;
    }
    break;

  case 477:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CLUSTER, 1, (yyvsp[(3) - (3)].node));
    }
    break;

  case 478:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SERVER_ADDRESS, 2, (yyvsp[(3) - (6)].node), (yyvsp[(6) - (6)].node));
    }
    break;

  case 479:

    { (yyval.node) = NULL; }
    break;

  case 480:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 481:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_IDENT);
      (yyval.node)->str_value_ = parse_strdup((yyvsp[(1) - (1)].non_reserved_keyword)->keyword_name, result->malloc_pool_);
      if ((yyval.node)->str_value_ == NULL)
      {
        yyerror(NULL, result, "No more space for string duplicate");
        YYABORT;
      }
      else
      {
        (yyval.node)->value_ = strlen((yyval.node)->str_value_);
      }
    }
    break;

  case 482:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 483:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_IDENT);
      (yyval.node)->str_value_ = parse_strdup((yyvsp[(1) - (1)].non_reserved_keyword)->keyword_name, result->malloc_pool_);
      if ((yyval.node)->str_value_ == NULL)
      {
        yyerror(NULL, result, "No more space for string duplicate");
        YYABORT;
      }
      else
      {
        (yyval.node)->value_ = strlen((yyval.node)->str_value_);
      }
    }
    break;

  case 485:

    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 486:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_IDENT);
      (yyval.node)->str_value_ = parse_strdup((yyvsp[(1) - (1)].non_reserved_keyword)->keyword_name, result->malloc_pool_);
      if ((yyval.node)->str_value_ == NULL)
      {
        yyerror(NULL, result, "No more space for string duplicate");
        YYABORT;
      }
    }
    break;



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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, result, YY_("syntax error"));
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
        yyerror (&yylloc, result, yymsgp);
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
		      yytoken, &yylval, &yylloc, result);
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
  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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
		  yystos[yystate], yyvsp, yylsp, result);
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
  yyerror (&yylloc, result, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, result);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp, result);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}





void yyerror(YYLTYPE* yylloc, ParseResult* p, char* s, ...)
{
  if (p != NULL)
  {
    p->result_tree_ = 0;
    va_list ap;
    va_start(ap, s);
    vsnprintf(p->error_msg_, MAX_ERROR_MSG, s, ap);
    if (yylloc != NULL)
    {
      if (p->input_sql_[yylloc->first_column - 1] != '\'')
        p->start_col_ = yylloc->first_column;
      p->end_col_ = yylloc->last_column;
      p->line_ = yylloc->first_line;
    }
  }
}

int parse_init(ParseResult* p)
{
  int ret = 0;  // can not include C++ file "ob_define.h"
  if (!p || !p->malloc_pool_)
  {
    ret = -1;
    if (p)
    {
      snprintf(p->error_msg_, MAX_ERROR_MSG, "malloc_pool_ must be set");
    }
  }
  if (ret == 0)
  {
    ret = yylex_init_extra(p, &(p->yyscan_info_));
  }
  return ret;
}

int parse_terminate(ParseResult* p)
{
  return yylex_destroy(p->yyscan_info_);
}

int parse_sql(ParseResult* p, const char* buf, size_t len)
{
  int ret = -1;
  p->result_tree_ = 0;
  p->error_msg_[0] = 0;
  p->input_sql_ = buf;
  p->input_sql_len_ = len;
  p->start_col_ = 1;
  p->end_col_ = 1;
  p->line_ = 1;
  p->yycolumn_ = 1;
  p->yylineno_ = 1;
  p->tmp_literal_ = NULL;

  if (buf == NULL || len <= 0)
  {
    snprintf(p->error_msg_, MAX_ERROR_MSG, "Input SQL can not be empty");
    return ret;
  }

  while(len > 0 && isspace(buf[len - 1]))
    --len;

  if (len <= 0)
  {
    snprintf(p->error_msg_, MAX_ERROR_MSG, "Input SQL can not be while space only");
    return ret;
  }

  YY_BUFFER_STATE bp;

  //bp = yy_scan_string(buf, p->yyscan_info_);
  bp = yy_scan_bytes(buf, len, p->yyscan_info_);
  yy_switch_to_buffer(bp, p->yyscan_info_);
  ret = yyparse(p);
  yy_delete_buffer(bp, p->yyscan_info_);
  return ret;
}
