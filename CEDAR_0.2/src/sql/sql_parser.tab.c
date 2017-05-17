
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */


#include <stdint.h>
#include "parse_node.h"
#include "parse_malloc.h"
#include "ob_non_reserved_keywords.h"
#include "common/ob_privilege_type.h"
#define YYDEBUG 1



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
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
     PROCEDURE = 289,
     DECLARE = 290,
     ELSEIF = 291,
     OUT = 292,
     INOUT = 293,
     WHILE = 294,
     LOOP = 295,
     EXIT = 296,
     CONTINUE = 297,
     DO = 298,
     CALL = 299,
     ARRAY = 300,
     REVERSE = 301,
     CURSOR = 302,
     OPEN = 303,
     FETCH = 304,
     CLOSE = 305,
     NEXT = 306,
     PRIOR = 307,
     FIRST = 308,
     LAST = 309,
     ABSOLUTE = 310,
     RELATIVE = 311,
     ADD = 312,
     ANY = 313,
     ALL = 314,
     ALTER = 315,
     AS = 316,
     ASC = 317,
     BEGI = 318,
     BIGINT = 319,
     BINARY = 320,
     BOOLEAN = 321,
     BOTH = 322,
     BY = 323,
     CASCADE = 324,
     CASE = 325,
     CHARACTER = 326,
     CLUSTER = 327,
     COMMENT = 328,
     COMMIT = 329,
     CONSISTENT = 330,
     COLUMN = 331,
     COLUMNS = 332,
     CREATE = 333,
     CREATETIME = 334,
     CURRENT_USER = 335,
     CHANGE_OBI = 336,
     SWITCH_CLUSTER = 337,
     DATE = 338,
     DATETIME = 339,
     DEALLOCATE = 340,
     DECIMAL = 341,
     DEFAULT = 342,
     DELETE = 343,
     DESC = 344,
     DESCRIBE = 345,
     DISTINCT = 346,
     DOUBLE = 347,
     DROP = 348,
     DUAL = 349,
     ELSE = 350,
     END = 351,
     END_P = 352,
     ERROR = 353,
     EXECUTE = 354,
     EXISTS = 355,
     EXPLAIN = 356,
     FLOAT = 357,
     FOR = 358,
     FROM = 359,
     FULL = 360,
     FROZEN = 361,
     FORCE = 362,
     GLOBAL = 363,
     GLOBAL_ALIAS = 364,
     GRANT = 365,
     GROUP = 366,
     HAVING = 367,
     HINT_BEGIN = 368,
     HINT_END = 369,
     HOTSPOT = 370,
     IDENTIFIED = 371,
     IF = 372,
     INNER = 373,
     INTEGER = 374,
     INSERT = 375,
     INTO = 376,
     JOIN = 377,
     SEMI_JOIN = 378,
     KEY = 379,
     LEADING = 380,
     LEFT = 381,
     LIMIT = 382,
     LOCAL = 383,
     LOCKED = 384,
     LOCKWJH = 385,
     MEDIUMINT = 386,
     MEMORY = 387,
     MODIFYTIME = 388,
     MASTER = 389,
     NUMERIC = 390,
     OFFSET = 391,
     ON = 392,
     ORDER = 393,
     OPTION = 394,
     OUTER = 395,
     PARAMETERS = 396,
     PASSWORD = 397,
     PRECISION = 398,
     PREPARE = 399,
     PRIMARY = 400,
     READ_STATIC = 401,
     REAL = 402,
     RENAME = 403,
     REPLACE = 404,
     RESTRICT = 405,
     PRIVILEGES = 406,
     REVOKE = 407,
     RIGHT = 408,
     ROLLBACK = 409,
     KILL = 410,
     READ_CONSISTENCY = 411,
     NO_GROUP = 412,
     LONG_TRANS = 413,
     SCHEMA = 414,
     SCOPE = 415,
     SELECT = 416,
     SESSION = 417,
     SESSION_ALIAS = 418,
     SET = 419,
     SHOW = 420,
     SMALLINT = 421,
     SNAPSHOT = 422,
     SPFILE = 423,
     START = 424,
     STATIC = 425,
     SYSTEM = 426,
     STRONG = 427,
     SET_MASTER_CLUSTER = 428,
     SET_SLAVE_CLUSTER = 429,
     SLAVE = 430,
     TABLE = 431,
     TABLES = 432,
     THEN = 433,
     TIME = 434,
     TIMESTAMP = 435,
     TINYINT = 436,
     TRAILING = 437,
     TRANSACTION = 438,
     TO = 439,
     UPDATE = 440,
     USER = 441,
     USING = 442,
     VALUES = 443,
     VARCHAR = 444,
     VARBINARY = 445,
     WHERE = 446,
     WHEN = 447,
     WITH = 448,
     WORK = 449,
     PROCESSLIST = 450,
     QUERY = 451,
     CONNECTION = 452,
     WEAK = 453,
     INDEX = 454,
     STORING = 455,
     BLOOMFILTER_JOIN = 456,
     MERGE_JOIN = 457,
     AUTO_INCREMENT = 458,
     CHUNKSERVER = 459,
     COMPRESS_METHOD = 460,
     CONSISTENT_MODE = 461,
     EXPIRE_INFO = 462,
     GRANTS = 463,
     JOIN_INFO = 464,
     MERGESERVER = 465,
     REPLICA_NUM = 466,
     ROOTSERVER = 467,
     ROW_COUNT = 468,
     SERVER = 469,
     SERVER_IP = 470,
     SERVER_PORT = 471,
     SERVER_TYPE = 472,
     STATUS = 473,
     TABLE_ID = 474,
     TABLET_BLOCK_SIZE = 475,
     TABLET_MAX_SIZE = 476,
     UNLOCKED = 477,
     UPDATESERVER = 478,
     USE_BLOOM_FILTER = 479,
     VARIABLES = 480,
     VERBOSE = 481,
     WARNINGS = 482
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
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  200
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3660

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  239
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  220
/* YYNRULES -- Number of rules.  */
#define YYNRULES  666
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1256

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   482

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    36,     2,     2,
      40,    41,    34,    32,   238,    33,    42,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   237,
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
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    12,    14,    16,    18,    20,
      22,    24,    26,    28,    30,    32,    34,    36,    38,    40,
      42,    44,    46,    48,    50,    52,    54,    56,    58,    60,
      62,    64,    66,    68,    70,    72,    74,    76,    78,    80,
      82,    84,    86,    88,    90,    92,    94,    96,    97,    99,
     103,   105,   109,   113,   115,   117,   119,   121,   123,   125,
     127,   129,   131,   135,   137,   139,   143,   149,   151,   153,
     155,   157,   160,   162,   164,   167,   170,   174,   178,   182,
     186,   190,   194,   198,   200,   203,   206,   210,   214,   218,
     222,   226,   230,   234,   238,   242,   246,   250,   254,   258,
     262,   267,   271,   275,   278,   282,   287,   291,   296,   300,
     305,   311,   318,   322,   327,   331,   333,   337,   343,   345,
     346,   348,   351,   356,   359,   360,   365,   370,   375,   381,
     386,   393,   398,   402,   407,   409,   411,   413,   415,   417,
     419,   421,   427,   435,   437,   441,   445,   455,   459,   462,
     463,   467,   469,   473,   474,   476,   482,   484,   487,   490,
     494,   499,   505,   511,   517,   523,   530,   538,   542,   546,
     550,   556,   558,   560,   565,   572,   575,   584,   588,   589,
     591,   595,   597,   603,   607,   609,   611,   613,   615,   617,
     620,   623,   625,   628,   630,   633,   636,   638,   641,   644,
     647,   650,   652,   654,   656,   659,   665,   669,   670,   674,
     675,   677,   678,   682,   683,   687,   688,   691,   692,   695,
     697,   700,   702,   705,   707,   711,   712,   716,   720,   724,
     728,   732,   736,   740,   744,   748,   752,   754,   755,   760,
     761,   764,   766,   770,   777,   778,   780,   784,   786,   794,
     799,   807,   808,   811,   813,   815,   819,   820,   822,   826,
     830,   836,   838,   842,   845,   847,   851,   855,   857,   860,
     864,   869,   875,   884,   886,   888,   898,   908,   913,   918,
     923,   924,   927,   931,   936,   941,   944,   947,   952,   953,
     957,   959,   963,   964,   966,   969,   971,   973,   988,   993,
     999,  1004,  1008,  1013,  1015,  1017,  1020,  1021,  1023,  1027,
    1029,  1031,  1033,  1035,  1037,  1039,  1041,  1043,  1044,  1046,
    1047,  1050,  1054,  1059,  1064,  1069,  1073,  1077,  1081,  1082,
    1086,  1088,  1089,  1093,  1095,  1099,  1102,  1103,  1105,  1107,
    1108,  1111,  1112,  1114,  1116,  1118,  1121,  1125,  1127,  1129,
    1133,  1135,  1139,  1141,  1145,  1148,  1152,  1155,  1157,  1163,
    1165,  1169,  1176,  1182,  1185,  1188,  1191,  1193,  1195,  1196,
    1200,  1202,  1204,  1206,  1208,  1210,  1211,  1215,  1221,  1227,
    1233,  1238,  1243,  1248,  1251,  1256,  1260,  1264,  1268,  1272,
    1276,  1280,  1284,  1288,  1293,  1296,  1297,  1299,  1302,  1307,
    1309,  1311,  1312,  1313,  1316,  1319,  1320,  1322,  1323,  1325,
    1329,  1331,  1335,  1340,  1342,  1344,  1348,  1350,  1354,  1360,
    1367,  1370,  1371,  1375,  1379,  1381,  1385,  1390,  1392,  1394,
    1396,  1397,  1401,  1402,  1405,  1409,  1412,  1415,  1420,  1421,
    1423,  1424,  1426,  1428,  1435,  1437,  1441,  1444,  1446,  1448,
    1451,  1453,  1455,  1458,  1460,  1462,  1464,  1466,  1468,  1469,
    1471,  1473,  1479,  1482,  1483,  1488,  1490,  1492,  1494,  1496,
    1498,  1501,  1505,  1507,  1511,  1515,  1519,  1524,  1529,  1535,
    1541,  1545,  1549,  1553,  1555,  1557,  1559,  1561,  1565,  1567,
    1571,  1575,  1578,  1579,  1581,  1585,  1589,  1591,  1593,  1598,
    1605,  1607,  1611,  1615,  1620,  1625,  1631,  1633,  1634,  1636,
    1638,  1639,  1643,  1647,  1651,  1654,  1659,  1667,  1675,  1682,
    1689,  1690,  1692,  1694,  1698,  1708,  1711,  1712,  1716,  1720,
    1724,  1725,  1727,  1729,  1731,  1733,  1737,  1744,  1745,  1747,
    1749,  1751,  1753,  1755,  1757,  1759,  1761,  1763,  1765,  1767,
    1769,  1771,  1773,  1775,  1777,  1779,  1781,  1783,  1785,  1787,
    1789,  1791,  1793,  1795,  1797,  1799,  1801,  1803,  1805,  1807,
    1809,  1812,  1819,  1825,  1829,  1831,  1834,  1838,  1842,  1846,
    1850,  1855,  1860,  1865,  1869,  1870,  1872,  1875,  1877,  1879,
    1881,  1883,  1885,  1887,  1889,  1892,  1895,  1898,  1901,  1904,
    1907,  1910,  1913,  1916,  1919,  1922,  1925,  1928,  1931,  1934,
    1936,  1938,  1939,  1941,  1944,  1946,  1948,  1950,  1952,  1954,
    1956,  1959,  1962,  1965,  1968,  1971,  1974,  1977,  1980,  1983,
    1986,  1989,  1992,  1995,  1998,  2001,  2003,  2005,  2010,  2017,
    2023,  2027,  2037,  2046,  2055,  2063,  2065,  2068,  2073,  2076,
    2084,  2087,  2089,  2094,  2095,  2098,  2104,  2116,  2129,  2137,
    2139,  2142,  2147,  2154,  2160,  2166,  2170
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     240,     0,    -1,   241,   106,    -1,   241,   237,   242,    -1,
     242,    -1,   431,    -1,   456,    -1,   458,    -1,   457,    -1,
     271,    -1,   273,    -1,   274,    -1,   289,    -1,   282,    -1,
     283,    -1,   284,    -1,   285,    -1,   287,    -1,   288,    -1,
     319,    -1,   312,    -1,   290,    -1,   265,    -1,   262,    -1,
     261,    -1,   306,    -1,   309,    -1,   356,    -1,   359,    -1,
     396,    -1,   399,    -1,   407,    -1,   412,    -1,   418,    -1,
     410,    -1,   367,    -1,   372,    -1,   374,    -1,   376,    -1,
     379,    -1,   389,    -1,   394,    -1,   383,    -1,   384,    -1,
     385,    -1,   386,    -1,   360,    -1,    -1,   248,    -1,   243,
     238,   248,    -1,   426,    -1,   427,    42,   426,    -1,   427,
      42,    34,    -1,     4,    -1,     6,    -1,     5,    -1,     9,
      -1,     8,    -1,    10,    -1,    12,    -1,    14,    -1,    13,
      -1,   172,    42,   426,    -1,   244,    -1,   245,    -1,    40,
     248,    41,    -1,    40,   243,   238,   248,    41,    -1,   250,
      -1,   256,    -1,   257,    -1,   320,    -1,   109,   320,    -1,
     255,    -1,   246,    -1,    32,   247,    -1,    33,   247,    -1,
     247,    32,   247,    -1,   247,    33,   247,    -1,   247,    34,
     247,    -1,   247,    35,   247,    -1,   247,    36,   247,    -1,
     247,    38,   247,    -1,   247,    37,   247,    -1,   246,    -1,
      32,   248,    -1,    33,   248,    -1,   248,    32,   248,    -1,
     248,    33,   248,    -1,   248,    34,   248,    -1,   248,    35,
     248,    -1,   248,    36,   248,    -1,   248,    38,   248,    -1,
     248,    37,   248,    -1,   248,    26,   248,    -1,   248,    25,
     248,    -1,   248,    24,   248,    -1,   248,    22,   248,    -1,
     248,    23,   248,    -1,   248,    21,   248,    -1,   248,    28,
     248,    -1,   248,    20,    28,   248,    -1,   248,    19,   248,
      -1,   248,    18,   248,    -1,    20,   248,    -1,   248,    31,
      10,    -1,   248,    31,    20,    10,    -1,   248,    31,     8,
      -1,   248,    31,    20,     8,    -1,   248,    31,    11,    -1,
     248,    31,    20,    11,    -1,   248,    29,   247,    19,   247,
      -1,   248,    20,    29,   247,    19,   247,    -1,   248,    30,
     249,    -1,   248,    20,    30,   249,    -1,   248,    27,   248,
      -1,   320,    -1,    40,   243,    41,    -1,    79,   251,   252,
     254,   105,    -1,   248,    -1,    -1,   253,    -1,   252,   253,
      -1,   201,   248,   187,   248,    -1,   104,   248,    -1,    -1,
      14,    40,     5,    41,    -1,    14,    40,    14,    41,    -1,
     428,    40,    34,    41,    -1,   428,    40,   260,   248,    41,
      -1,   428,    40,   243,    41,    -1,   428,    40,   248,    70,
     295,    41,    -1,   428,    40,   339,    41,    -1,   428,    40,
      41,    -1,   258,    40,   259,    41,    -1,   222,    -1,   319,
      -1,   312,    -1,   262,    -1,   261,    -1,    68,    -1,   100,
      -1,    97,   113,   352,   326,   313,    -1,   194,   328,   352,
     173,   263,   326,   313,    -1,   264,    -1,   263,   238,   264,
      -1,   426,    24,   248,    -1,    87,   208,   291,   352,   146,
     352,   266,   267,   269,    -1,    40,   316,    41,    -1,   209,
     268,    -1,    -1,    40,   316,    41,    -1,   270,    -1,   269,
     238,   270,    -1,    -1,   304,    -1,    44,   272,    56,   112,
     319,    -1,   429,    -1,    57,   272,    -1,    58,   272,    -1,
      58,   272,    60,    -1,    58,   272,   130,   409,    -1,    58,
     272,    60,   130,   409,    -1,    58,   272,    62,   130,   409,
      -1,    58,   272,    61,   130,   409,    -1,    58,   272,    63,
     130,   409,    -1,    58,   272,    64,     5,   130,   409,    -1,
      58,   272,   286,    65,     5,   130,   409,    -1,    58,   272,
      61,    -1,    58,   272,    62,    -1,    58,   272,    63,    -1,
      58,   272,   286,    65,     5,    -1,    60,    -1,    61,    -1,
      58,   272,    64,     5,    -1,    58,   272,   113,     5,   193,
       5,    -1,    59,   272,    -1,    87,   185,   291,   352,    40,
     292,    41,   303,    -1,   126,    20,   109,    -1,    -1,   293,
      -1,   292,   238,   293,    -1,   294,    -1,   154,   133,    40,
     316,    41,    -1,   426,   295,   301,    -1,   190,    -1,   175,
      -1,   140,    -1,   128,    -1,    73,    -1,    95,   296,    -1,
     144,   296,    -1,    75,    -1,   111,   297,    -1,   156,    -1,
     101,   298,    -1,   189,   299,    -1,    93,    -1,    80,   300,
      -1,    74,   300,    -1,   198,   300,    -1,   199,   300,    -1,
      88,    -1,   142,    -1,    92,    -1,   188,   299,    -1,    40,
       5,   238,     5,    41,    -1,    40,     5,    41,    -1,    -1,
      40,     5,    41,    -1,    -1,   152,    -1,    -1,    40,     5,
      41,    -1,    -1,    40,     5,    41,    -1,    -1,   301,   302,
      -1,    -1,    20,    10,    -1,    10,    -1,    96,   245,    -1,
     212,    -1,   154,   133,    -1,   304,    -1,   303,   238,   304,
      -1,    -1,   218,   305,     4,    -1,   216,   305,     4,    -1,
     230,   305,     5,    -1,   229,   305,     5,    -1,   228,   305,
       5,    -1,   220,   305,     5,    -1,   214,   305,     4,    -1,
     233,   305,     8,    -1,   215,   305,   179,    -1,    82,   305,
       4,    -1,    24,    -1,    -1,   102,   185,   307,   308,    -1,
      -1,   126,   109,    -1,   351,    -1,   308,   238,   351,    -1,
     102,   208,   307,   310,   146,   311,    -1,    -1,   352,    -1,
     310,   238,   352,    -1,   352,    -1,   314,   130,   352,   315,
     197,   317,   313,    -1,   314,   130,   352,   319,    -1,   314,
     130,   352,    40,   316,    41,   319,    -1,    -1,   201,   248,
      -1,   158,    -1,   129,    -1,    40,   316,    41,    -1,    -1,
     426,    -1,   316,   238,   426,    -1,    40,   318,    41,    -1,
     317,   238,    40,   318,    41,    -1,   248,    -1,   318,   238,
     248,    -1,   321,   313,    -1,   320,    -1,    40,   321,    41,
      -1,    40,   320,    41,    -1,   322,    -1,   325,   338,    -1,
     323,   342,   338,    -1,   323,   341,   327,   338,    -1,   170,
     328,   347,   349,   337,    -1,   170,   328,   347,   349,   113,
     103,   326,   337,    -1,   325,    -1,   320,    -1,   170,   328,
     349,   130,   409,   113,   350,   326,   338,    -1,   170,   328,
     347,   349,   113,   350,   326,   340,   346,    -1,   323,    16,
     347,   323,    -1,   323,    17,   347,   323,    -1,   323,    15,
     347,   323,    -1,    -1,   200,   248,    -1,   200,     7,   248,
      -1,   136,   336,   145,   336,    -1,   145,   336,   136,   336,
      -1,   136,   336,    -1,   145,   336,    -1,   136,   336,   238,
     336,    -1,    -1,   122,   329,   123,    -1,   330,    -1,   329,
     238,   330,    -1,    -1,   331,    -1,   330,   331,    -1,   155,
      -1,   124,    -1,   132,    40,   352,   238,   352,   238,   352,
      42,   352,   238,   352,    42,   352,    41,    -1,   165,    40,
     335,    41,    -1,   208,    40,   352,   352,    41,    -1,     3,
      40,     3,    41,    -1,    40,   332,    41,    -1,   131,    40,
     333,    41,    -1,   166,    -1,   167,    -1,   332,   238,    -1,
      -1,   334,    -1,   333,   238,   334,    -1,   210,    -1,   211,
      -1,   207,    -1,   181,    -1,   179,    -1,   115,    -1,     5,
      -1,    12,    -1,    -1,   327,    -1,    -1,   112,   194,    -1,
     248,   113,   248,    -1,    76,   248,   113,   248,    -1,   134,
     248,   113,   248,    -1,   191,   248,   113,   248,    -1,    76,
     113,   248,    -1,   134,   113,   248,    -1,   191,   113,   248,
      -1,    -1,   120,    77,   243,    -1,   342,    -1,    -1,   147,
      77,   343,    -1,   344,    -1,   343,   238,   344,    -1,   248,
     345,    -1,    -1,    71,    -1,    98,    -1,    -1,   121,   248,
      -1,    -1,    68,    -1,   100,    -1,   248,    -1,   248,   429,
      -1,   248,    70,   429,    -1,    34,    -1,   348,    -1,   349,
     238,   348,    -1,   351,    -1,   350,   238,   351,    -1,   352,
      -1,   352,    70,   427,    -1,   352,   427,    -1,   320,    70,
     427,    -1,   320,   427,    -1,   353,    -1,    40,   353,    41,
      70,   427,    -1,   427,    -1,    40,   353,    41,    -1,   351,
     354,   131,   351,   146,   248,    -1,   351,   131,   351,   146,
     248,    -1,   114,   355,    -1,   135,   355,    -1,   162,   355,
      -1,   127,    -1,   149,    -1,    -1,   110,   358,   357,    -1,
     319,    -1,   261,    -1,   312,    -1,   262,    -1,   235,    -1,
      -1,   174,   186,   364,    -1,   174,   208,   146,   352,   364,
      -1,   174,    86,   113,   352,   364,    -1,   174,    86,    30,
     352,   364,    -1,   174,   185,   227,   364,    -1,   174,   223,
     227,   364,    -1,   174,   363,   234,   364,    -1,   174,   168,
      -1,   174,    87,   185,   352,    -1,    99,   352,   365,    -1,
      98,   352,   365,    -1,   174,   236,   361,    -1,   174,   256,
     236,    -1,   174,   217,   362,    -1,   174,   150,   364,    -1,
     174,   366,   204,    -1,   139,   185,   352,    -1,   136,     5,
     238,     5,    -1,   136,     5,    -1,    -1,   375,    -1,   112,
      89,    -1,   112,    89,    40,    41,    -1,   117,    -1,   171,
      -1,    -1,    -1,    28,     4,    -1,   200,   248,    -1,    -1,
       4,    -1,    -1,   114,    -1,    87,   195,   368,    -1,   369,
      -1,   368,   238,   369,    -1,   370,   125,    77,   371,    -1,
       4,    -1,     4,    -1,   102,   195,   373,    -1,   370,    -1,
     373,   238,   370,    -1,   173,   151,   375,    24,   371,    -1,
      69,   195,   370,   125,    77,   371,    -1,   112,   370,    -1,
      -1,   157,   195,   378,    -1,   370,   193,   370,    -1,   377,
      -1,   378,   238,   377,    -1,    69,   195,   370,   380,    -1,
     138,    -1,   231,    -1,   203,    -1,    -1,   202,    84,   176,
      -1,    -1,    72,   381,    -1,   178,   192,   382,    -1,    83,
     381,    -1,   163,   381,    -1,   164,   387,   388,     5,    -1,
      -1,   117,    -1,    -1,   205,    -1,   206,    -1,   119,   390,
     146,   393,   193,   373,    -1,   391,    -1,   390,   238,   391,
      -1,    68,   392,    -1,    69,    -1,    87,    -1,    87,   195,
      -1,    97,    -1,   102,    -1,   119,   148,    -1,   129,    -1,
     194,    -1,   170,    -1,   158,    -1,   160,    -1,    -1,    34,
      -1,   427,    -1,   161,   390,   395,   113,   373,    -1,   146,
     393,    -1,    -1,   153,   397,   113,   398,    -1,   429,    -1,
     319,    -1,   312,    -1,   262,    -1,   261,    -1,   173,   400,
      -1,   173,   173,   402,    -1,   401,    -1,   400,   238,   401,
      -1,    14,   403,   248,    -1,   426,   403,   248,    -1,   117,
     426,   403,   248,    -1,   171,   426,   403,   248,    -1,   118,
      42,   426,   403,   248,    -1,   172,    42,   426,   403,   248,
      -1,    13,   403,   248,    -1,   255,   403,   248,    -1,    14,
     403,   405,    -1,   193,    -1,    24,    -1,    14,    -1,   255,
      -1,    40,   406,    41,    -1,   245,    -1,   406,   238,   245,
      -1,   108,   397,   408,    -1,   196,   409,    -1,    -1,   404,
      -1,   409,   238,   404,    -1,   411,   153,   397,    -1,    94,
      -1,   102,    -1,    69,   185,   352,   413,    -1,    69,   185,
     352,   157,   193,   352,    -1,   414,    -1,   413,   238,   414,
      -1,    66,   415,   294,    -1,   102,   415,   426,   416,    -1,
      69,   415,   426,   417,    -1,   157,   415,   426,   193,   429,
      -1,    85,    -1,    -1,    78,    -1,   159,    -1,    -1,   173,
      20,    10,    -1,   102,    20,    10,    -1,   173,    96,   245,
      -1,   102,    96,    -1,    69,   180,   173,   420,    -1,    69,
     180,   419,    90,   143,    24,     4,    -1,    69,   180,   419,
      91,   143,    24,     4,    -1,    69,   180,   182,   143,    24,
       4,    -1,    69,   180,   183,   184,    24,     4,    -1,    -1,
     116,    -1,   421,    -1,   420,   238,   421,    -1,   426,    24,
     245,   422,   423,   226,    24,   424,   425,    -1,    82,     4,
      -1,    -1,   169,    24,   141,    -1,   169,    24,   177,    -1,
     169,    24,    76,    -1,    -1,   221,    -1,   232,    -1,   213,
      -1,   219,    -1,    81,    24,     5,    -1,   224,    24,     4,
     225,    24,     5,    -1,    -1,     3,    -1,   430,    -1,     3,
      -1,   430,    -1,     3,    -1,     3,    -1,   430,    -1,   212,
      -1,   213,    -1,   214,    -1,   215,    -1,   216,    -1,   217,
      -1,   218,    -1,   219,    -1,   220,    -1,   221,    -1,   222,
      -1,   223,    -1,   224,    -1,   225,    -1,   226,    -1,   227,
      -1,   229,    -1,   228,    -1,   230,    -1,   231,    -1,   232,
      -1,   233,    -1,   234,    -1,   235,    -1,   236,    -1,   432,
     435,    -1,    87,    43,     3,    40,   433,    41,    -1,    87,
      43,     3,    40,    41,    -1,   433,   238,   434,    -1,   434,
      -1,    14,   295,    -1,    30,    14,   295,    -1,    46,    14,
     295,    -1,    47,    14,   295,    -1,    14,   295,    54,    -1,
      30,    14,   295,    54,    -1,    46,    14,   295,    54,    -1,
      47,    14,   295,    54,    -1,    72,   436,   105,    -1,    -1,
     437,    -1,   437,   438,    -1,   438,    -1,   444,    -1,   448,
      -1,   453,    -1,   452,    -1,   442,    -1,   443,    -1,   324,
     237,    -1,   312,   237,    -1,   262,   237,    -1,   261,   237,
      -1,   319,   237,    -1,   271,   237,    -1,   273,   237,    -1,
     289,   237,    -1,   275,   237,    -1,   276,   237,    -1,   277,
     237,    -1,   279,   237,    -1,   278,   237,    -1,   280,   237,
      -1,   281,   237,    -1,   455,    -1,   454,    -1,    -1,   440,
      -1,   440,   441,    -1,   441,    -1,   444,    -1,   448,    -1,
     453,    -1,   452,    -1,   443,    -1,   324,   237,    -1,   312,
     237,    -1,   262,   237,    -1,   261,   237,    -1,   319,   237,
      -1,   271,   237,    -1,   273,   237,    -1,   289,   237,    -1,
     275,   237,    -1,   276,   237,    -1,   277,   237,    -1,   279,
     237,    -1,   278,   237,    -1,   280,   237,    -1,   281,   237,
      -1,   455,    -1,   454,    -1,    44,   409,   295,   237,    -1,
      44,   409,   295,    96,   245,   237,    -1,    44,   409,   295,
      54,   237,    -1,   173,   400,   237,    -1,   126,   248,   187,
     439,   445,   447,   105,   126,   237,    -1,   126,   248,   187,
     439,   445,   105,   126,   237,    -1,   126,   248,   187,   439,
     447,   105,   126,   237,    -1,   126,   248,   187,   439,   105,
     126,   237,    -1,   446,    -1,   445,   446,    -1,    45,   248,
     187,   439,    -1,   104,   439,    -1,    79,   248,   449,   451,
     105,    79,   237,    -1,   449,   450,    -1,   450,    -1,   201,
     248,   187,   439,    -1,    -1,   104,   439,    -1,    49,   439,
     105,    49,   237,    -1,   112,    14,    30,   247,   193,   247,
      49,   439,   105,    49,   237,    -1,   112,    14,    30,    55,
     247,   193,   247,    49,   439,   105,    49,   237,    -1,    48,
     248,    52,   439,   105,    48,   237,    -1,   237,    -1,    50,
     237,    -1,    50,   201,   248,   237,    -1,    53,     3,    40,
     243,    41,   328,    -1,    53,     3,    40,    41,   328,    -1,
     102,    43,   126,   109,     3,    -1,   102,    43,     3,    -1,
     174,    43,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   258,   258,   267,   274,   281,   282,   283,   284,   286,
     287,   288,   289,   290,   292,   293,   294,   295,   296,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   336,   340,
     347,   349,   355,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   377,   379,   381,   383,   389,   397,   401,
     405,   409,   413,   421,   422,   426,   430,   431,   432,   433,
     434,   435,   436,   439,   440,   444,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   467,   471,   475,   479,   483,   487,   491,   495,
     499,   503,   507,   511,   515,   522,   526,   531,   539,   540,
     544,   546,   551,   558,   559,   564,   568,   576,   590,   618,
     693,   709,   713,   735,   743,   750,   751,   752,   753,   757,
     761,   775,   789,   799,   803,   810,   824,   840,   847,   853,
     859,   866,   870,   875,   881,   898,   909,   922,   938,   944,
     958,   973,   988,  1004,  1020,  1036,  1053,  1069,  1090,  1109,
    1126,  1139,  1144,  1159,  1176,  1196,  1216,  1233,  1236,  1240,
    1244,  1251,  1255,  1264,  1273,  1275,  1277,  1279,  1281,  1283,
    1292,  1301,  1303,  1305,  1307,  1312,  1319,  1321,  1328,  1335,
    1342,  1349,  1351,  1353,  1359,  1371,  1373,  1376,  1380,  1381,
    1385,  1386,  1390,  1391,  1395,  1396,  1400,  1403,  1407,  1412,
    1417,  1419,  1421,  1426,  1430,  1435,  1441,  1446,  1451,  1456,
    1461,  1466,  1471,  1476,  1481,  1487,  1495,  1496,  1507,  1517,
    1518,  1523,  1527,  1541,  1551,  1553,  1557,  1564,  1575,  1589,
    1600,  1618,  1619,  1626,  1631,  1639,  1644,  1648,  1649,  1656,
    1660,  1666,  1667,  1681,  1691,  1696,  1697,  1701,  1705,  1710,
    1720,  1741,  1763,  1789,  1790,  1798,  1830,  1856,  1878,  1900,
    1926,  1927,  1931,  1938,  1946,  1954,  1958,  1962,  1974,  1977,
    1991,  1995,  2000,  2006,  2010,  2017,  2021,  2025,  2029,  2035,
    2041,  2048,  2053,  2058,  2062,  2069,  2074,  2081,  2085,  2092,
    2096,  2104,  2108,  2112,  2116,  2122,  2124,  2130,  2131,  2137,
    2138,  2146,  2153,  2160,  2167,  2174,  2185,  2196,  2211,  2212,
    2219,  2220,  2224,  2231,  2233,  2238,  2246,  2247,  2249,  2255,
    2256,  2264,  2267,  2271,  2278,  2283,  2291,  2299,  2309,  2313,
    2320,  2322,  2327,  2331,  2335,  2339,  2343,  2347,  2351,  2360,
    2368,  2372,  2376,  2385,  2391,  2397,  2403,  2410,  2411,  2421,
    2429,  2430,  2431,  2432,  2436,  2437,  2448,  2450,  2452,  2454,
    2456,  2458,  2460,  2465,  2467,  2469,  2471,  2473,  2477,  2490,
    2494,  2498,  2505,  2511,  2520,  2530,  2534,  2536,  2538,  2543,
    2544,  2545,  2550,  2551,  2553,  2559,  2560,  2565,  2566,  2576,
    2582,  2586,  2592,  2598,  2604,  2616,  2622,  2626,  2638,  2642,
    2648,  2653,  2664,  2670,  2676,  2680,  2692,  2698,  2703,  2717,
    2722,  2726,  2731,  2735,  2741,  2753,  2765,  2777,  2784,  2788,
    2796,  2800,  2805,  2819,  2830,  2834,  2840,  2846,  2851,  2856,
    2861,  2866,  2871,  2876,  2881,  2886,  2891,  2898,  2903,  2908,
    2913,  2925,  2965,  2970,  2982,  2989,  2994,  2996,  2998,  3000,
    3013,  3019,  3027,  3031,  3038,  3044,  3051,  3058,  3065,  3072,
    3079,  3086,  3097,  3107,  3108,  3112,  3115,  3121,  3128,  3129,
    3144,  3151,  3156,  3161,  3165,  3178,  3186,  3188,  3199,  3205,
    3216,  3220,  3227,  3232,  3238,  3243,  3252,  3253,  3257,  3258,
    3259,  3263,  3268,  3273,  3277,  3291,  3297,  3304,  3311,  3318,
    3328,  3331,  3339,  3343,  3350,  3365,  3368,  3372,  3374,  3376,
    3379,  3383,  3388,  3393,  3398,  3406,  3410,  3415,  3426,  3428,
    3445,  3447,  3464,  3468,  3470,  3483,  3484,  3485,  3486,  3487,
    3488,  3489,  3490,  3491,  3492,  3493,  3494,  3495,  3496,  3497,
    3498,  3499,  3500,  3501,  3502,  3503,  3504,  3505,  3506,  3507,
    3517,  3522,  3529,  3535,  3539,  3544,  3548,  3552,  3556,  3560,
    3567,  3574,  3581,  3589,  3596,  3599,  3604,  3608,  3613,  3615,
    3617,  3619,  3621,  3623,  3625,  3627,  3629,  3631,  3633,  3635,
    3637,  3639,  3641,  3643,  3645,  3647,  3649,  3651,  3653,  3656,
    3658,  3665,  3668,  3673,  3677,  3682,  3684,  3686,  3688,  3690,
    3692,  3694,  3696,  3698,  3700,  3702,  3704,  3706,  3708,  3710,
    3712,  3714,  3716,  3718,  3720,  3723,  3725,  3733,  3739,  3745,
    3765,  3777,  3783,  3789,  3793,  3798,  3802,  3807,  3813,  3824,
    3831,  3835,  3840,  3846,  3849,  3860,  3869,  3878,  3896,  3902,
    3912,  3922,  3933,  3941,  3954,  3958,  3972
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "STRING", "INTNUM", "DATE_VALUE",
  "HINT_VALUE", "BOOL", "APPROXNUM", "NULLX", "UNKNOWN", "QUESTIONMARK",
  "SYSTEM_VARIABLE", "TEMP_VARIABLE", "EXCEPT", "UNION", "INTERSECT", "OR",
  "AND", "NOT", "COMP_NE", "COMP_GE", "COMP_GT", "COMP_EQ", "COMP_LT",
  "COMP_LE", "CNNOP", "LIKE", "BETWEEN", "IN", "IS", "'+'", "'-'", "'*'",
  "'/'", "'%'", "MOD", "'^'", "UMINUS", "'('", "')'", "'.'", "PROCEDURE",
  "DECLARE", "ELSEIF", "OUT", "INOUT", "WHILE", "LOOP", "EXIT", "CONTINUE",
  "DO", "CALL", "ARRAY", "REVERSE", "CURSOR", "OPEN", "FETCH", "CLOSE",
  "NEXT", "PRIOR", "FIRST", "LAST", "ABSOLUTE", "RELATIVE", "ADD", "ANY",
  "ALL", "ALTER", "AS", "ASC", "BEGI", "BIGINT", "BINARY", "BOOLEAN",
  "BOTH", "BY", "CASCADE", "CASE", "CHARACTER", "CLUSTER", "COMMENT",
  "COMMIT", "CONSISTENT", "COLUMN", "COLUMNS", "CREATE", "CREATETIME",
  "CURRENT_USER", "CHANGE_OBI", "SWITCH_CLUSTER", "DATE", "DATETIME",
  "DEALLOCATE", "DECIMAL", "DEFAULT", "DELETE", "DESC", "DESCRIBE",
  "DISTINCT", "DOUBLE", "DROP", "DUAL", "ELSE", "END", "END_P", "ERROR",
  "EXECUTE", "EXISTS", "EXPLAIN", "FLOAT", "FOR", "FROM", "FULL", "FROZEN",
  "FORCE", "GLOBAL", "GLOBAL_ALIAS", "GRANT", "GROUP", "HAVING",
  "HINT_BEGIN", "HINT_END", "HOTSPOT", "IDENTIFIED", "IF", "INNER",
  "INTEGER", "INSERT", "INTO", "JOIN", "SEMI_JOIN", "KEY", "LEADING",
  "LEFT", "LIMIT", "LOCAL", "LOCKED", "LOCKWJH", "MEDIUMINT", "MEMORY",
  "MODIFYTIME", "MASTER", "NUMERIC", "OFFSET", "ON", "ORDER", "OPTION",
  "OUTER", "PARAMETERS", "PASSWORD", "PRECISION", "PREPARE", "PRIMARY",
  "READ_STATIC", "REAL", "RENAME", "REPLACE", "RESTRICT", "PRIVILEGES",
  "REVOKE", "RIGHT", "ROLLBACK", "KILL", "READ_CONSISTENCY", "NO_GROUP",
  "LONG_TRANS", "SCHEMA", "SCOPE", "SELECT", "SESSION", "SESSION_ALIAS",
  "SET", "SHOW", "SMALLINT", "SNAPSHOT", "SPFILE", "START", "STATIC",
  "SYSTEM", "STRONG", "SET_MASTER_CLUSTER", "SET_SLAVE_CLUSTER", "SLAVE",
  "TABLE", "TABLES", "THEN", "TIME", "TIMESTAMP", "TINYINT", "TRAILING",
  "TRANSACTION", "TO", "UPDATE", "USER", "USING", "VALUES", "VARCHAR",
  "VARBINARY", "WHERE", "WHEN", "WITH", "WORK", "PROCESSLIST", "QUERY",
  "CONNECTION", "WEAK", "INDEX", "STORING", "BLOOMFILTER_JOIN",
  "MERGE_JOIN", "AUTO_INCREMENT", "CHUNKSERVER", "COMPRESS_METHOD",
  "CONSISTENT_MODE", "EXPIRE_INFO", "GRANTS", "JOIN_INFO", "MERGESERVER",
  "REPLICA_NUM", "ROOTSERVER", "ROW_COUNT", "SERVER", "SERVER_IP",
  "SERVER_PORT", "SERVER_TYPE", "STATUS", "TABLE_ID", "TABLET_BLOCK_SIZE",
  "TABLET_MAX_SIZE", "UNLOCKED", "UPDATESERVER", "USE_BLOOM_FILTER",
  "VARIABLES", "VERBOSE", "WARNINGS", "';'", "','", "$accept", "sql_stmt",
  "stmt_list", "stmt", "expr_list", "column_ref", "expr_const",
  "simple_expr", "arith_expr", "expr", "in_expr", "case_expr", "case_arg",
  "when_clause_list", "when_clause", "case_default", "array_expr",
  "func_expr", "when_func", "when_func_name", "when_func_stmt",
  "distinct_or_all", "delete_stmt", "update_stmt", "update_asgn_list",
  "update_asgn_factor", "create_index_stmt", "opt_index_columns",
  "opt_storing", "opt_storing_columns", "opt_index_option_list",
  "index_option", "cursor_declare_stmt", "cursor_name", "cursor_open_stmt",
  "cursor_fetch_stmt", "cursor_fetch_into_stmt",
  "cursor_fetch_next_into_stmt", "cursor_fetch_first_into_stmt",
  "cursor_fetch_prior_into_stmt", "cursor_fetch_last_into_stmt",
  "cursor_fetch_absolute_into_stmt", "cursor_fetch_relative_into_stmt",
  "fetch_prior_stmt", "fetch_first_stmt", "fetch_last_stmt",
  "fetch_relative_stmt", "next_or_prior", "fetch_absolute_stmt",
  "fetch_fromto_stmt", "cursor_close_stmt", "create_table_stmt",
  "opt_if_not_exists", "table_element_list", "table_element",
  "column_definition", "data_type", "opt_decimal", "opt_float",
  "opt_precision", "opt_time_precision", "opt_char_length",
  "opt_column_attribute_list", "column_attribute", "opt_table_option_list",
  "table_option", "opt_equal_mark", "drop_table_stmt", "opt_if_exists",
  "table_list", "drop_index_stmt", "index_list", "table_name",
  "insert_stmt", "opt_when", "replace_or_insert", "opt_insert_columns",
  "column_list", "insert_vals_list", "insert_vals", "select_stmt",
  "select_with_parens", "select_no_parens", "no_table_select",
  "select_clause", "select_into_clause", "simple_select", "opt_where",
  "select_limit", "opt_hint", "opt_hint_list", "hint_options",
  "hint_option", "opt_comma_list", "join_op_type_list", "join_op_type",
  "consistency_level", "limit_expr", "opt_select_limit", "opt_for_update",
  "parameterized_trim", "opt_groupby", "opt_order_by", "order_by",
  "sort_list", "sort_key", "opt_asc_desc", "opt_having", "opt_distinct",
  "projection", "select_expr_list", "from_list", "table_factor",
  "relation_factor", "joined_table", "join_type", "join_outer",
  "explain_stmt", "explainable_stmt", "opt_verbose", "show_stmt",
  "lock_table_stmt", "opt_limit", "opt_for_grant_user", "opt_scope",
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
  "var_and_val", "var_and_array_val", "to_or_eq", "argument",
  "array_vals_list", "array_val_list", "execute_stmt", "opt_using_args",
  "argument_list", "deallocate_prepare_stmt", "deallocate_or_drop",
  "alter_table_stmt", "alter_column_actions", "alter_column_action",
  "opt_column", "opt_drop_behavior", "alter_column_behavior",
  "alter_system_stmt", "opt_force", "alter_system_actions",
  "alter_system_action", "opt_comment", "opt_config_scope", "server_type",
  "opt_cluster_or_address", "column_name", "relation_name",
  "function_name", "column_label", "unreserved_keyword",
  "create_procedure_stmt", "proc_decl", "proc_parameter_list",
  "proc_parameter", "proc_block", "proc_sect", "proc_stmts", "proc_stmt",
  "control_sect", "control_stmts", "control_stmt", "stmt_declare",
  "stmt_assign", "stmt_if", "stmt_elsifs", "stmt_elsif", "stmt_else",
  "stmt_case", "case_when_list", "case_when", "case_else", "stmt_loop",
  "stmt_while", "stmt_null", "stmt_exit", "exec_procedure_stmt",
  "drop_procedure_stmt", "show_procedure_stmt", 0
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
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,    59,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   239,   240,   241,   241,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   243,   243,
     244,   244,   244,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   249,   249,   250,   251,   251,
     252,   252,   253,   254,   254,   255,   255,   256,   256,   256,
     256,   256,   256,   257,   258,   259,   259,   259,   259,   260,
     260,   261,   262,   263,   263,   264,   265,   266,   267,   267,
     268,   269,   269,   269,   270,   271,   272,   273,   274,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   286,   287,   288,   289,   290,   291,   291,   292,
     292,   293,   293,   294,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   296,   296,   296,   297,   297,
     298,   298,   299,   299,   300,   300,   301,   301,   302,   302,
     302,   302,   302,   303,   303,   303,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   305,   305,   306,   307,
     307,   308,   308,   309,   310,   310,   310,   311,   312,   312,
     312,   313,   313,   314,   314,   315,   315,   316,   316,   317,
     317,   318,   318,   319,   319,   320,   320,   321,   321,   321,
     321,   322,   322,   323,   323,   324,   325,   325,   325,   325,
     326,   326,   326,   327,   327,   327,   327,   327,   328,   328,
     329,   329,   329,   330,   330,   331,   331,   331,   331,   331,
     331,   331,   331,   331,   331,   332,   332,   333,   333,   334,
     334,   335,   335,   335,   335,   336,   336,   337,   337,   338,
     338,   339,   339,   339,   339,   339,   339,   339,   340,   340,
     341,   341,   342,   343,   343,   344,   345,   345,   345,   346,
     346,   347,   347,   347,   348,   348,   348,   348,   349,   349,
     350,   350,   351,   351,   351,   351,   351,   351,   351,   352,
     353,   353,   353,   354,   354,   354,   354,   355,   355,   356,
     357,   357,   357,   357,   358,   358,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   360,   361,   361,   361,   362,   362,   362,   363,
     363,   363,   364,   364,   364,   365,   365,   366,   366,   367,
     368,   368,   369,   370,   371,   372,   373,   373,   374,   374,
     375,   375,   376,   377,   378,   378,   379,   380,   380,   381,
     381,   382,   382,   383,   383,   384,   385,   386,   387,   387,
     388,   388,   388,   389,   390,   390,   391,   391,   391,   391,
     391,   391,   391,   391,   391,   391,   391,   392,   392,   393,
     393,   394,   395,   395,   396,   397,   398,   398,   398,   398,
     399,   399,   400,   400,   401,   401,   401,   401,   401,   401,
     401,   401,   402,   403,   403,   404,   404,   405,   406,   406,
     407,   408,   408,   409,   409,   410,   411,   411,   412,   412,
     413,   413,   414,   414,   414,   414,   415,   415,   416,   416,
     416,   417,   417,   417,   417,   418,   418,   418,   418,   418,
     419,   419,   420,   420,   421,   422,   422,   423,   423,   423,
     423,   424,   424,   424,   424,   425,   425,   425,   426,   426,
     427,   427,   428,   429,   429,   430,   430,   430,   430,   430,
     430,   430,   430,   430,   430,   430,   430,   430,   430,   430,
     430,   430,   430,   430,   430,   430,   430,   430,   430,   430,
     431,   432,   432,   433,   433,   434,   434,   434,   434,   434,
     434,   434,   434,   435,   436,   436,   437,   437,   438,   438,
     438,   438,   438,   438,   438,   438,   438,   438,   438,   438,
     438,   438,   438,   438,   438,   438,   438,   438,   438,   438,
     438,   439,   439,   440,   440,   441,   441,   441,   441,   441,
     441,   441,   441,   441,   441,   441,   441,   441,   441,   441,
     441,   441,   441,   441,   441,   441,   441,   442,   442,   442,
     443,   444,   444,   444,   444,   445,   445,   446,   447,   448,
     449,   449,   450,   451,   451,   452,   452,   452,   453,   454,
     455,   455,   456,   456,   457,   457,   458
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     3,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     3,     5,     1,     1,     1,
       1,     2,     1,     1,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     1,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       4,     3,     3,     2,     3,     4,     3,     4,     3,     4,
       5,     6,     3,     4,     3,     1,     3,     5,     1,     0,
       1,     2,     4,     2,     0,     4,     4,     4,     5,     4,
       6,     4,     3,     4,     1,     1,     1,     1,     1,     1,
       1,     5,     7,     1,     3,     3,     9,     3,     2,     0,
       3,     1,     3,     0,     1,     5,     1,     2,     2,     3,
       4,     5,     5,     5,     5,     6,     7,     3,     3,     3,
       5,     1,     1,     4,     6,     2,     8,     3,     0,     1,
       3,     1,     5,     3,     1,     1,     1,     1,     1,     2,
       2,     1,     2,     1,     2,     2,     1,     2,     2,     2,
       2,     1,     1,     1,     2,     5,     3,     0,     3,     0,
       1,     0,     3,     0,     3,     0,     2,     0,     2,     1,
       2,     1,     2,     1,     3,     0,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     0,     4,     0,
       2,     1,     3,     6,     0,     1,     3,     1,     7,     4,
       7,     0,     2,     1,     1,     3,     0,     1,     3,     3,
       5,     1,     3,     2,     1,     3,     3,     1,     2,     3,
       4,     5,     8,     1,     1,     9,     9,     4,     4,     4,
       0,     2,     3,     4,     4,     2,     2,     4,     0,     3,
       1,     3,     0,     1,     2,     1,     1,    14,     4,     5,
       4,     3,     4,     1,     1,     2,     0,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     0,
       2,     3,     4,     4,     4,     3,     3,     3,     0,     3,
       1,     0,     3,     1,     3,     2,     0,     1,     1,     0,
       2,     0,     1,     1,     1,     2,     3,     1,     1,     3,
       1,     3,     1,     3,     2,     3,     2,     1,     5,     1,
       3,     6,     5,     2,     2,     2,     1,     1,     0,     3,
       1,     1,     1,     1,     1,     0,     3,     5,     5,     5,
       4,     4,     4,     2,     4,     3,     3,     3,     3,     3,
       3,     3,     3,     4,     2,     0,     1,     2,     4,     1,
       1,     0,     0,     2,     2,     0,     1,     0,     1,     3,
       1,     3,     4,     1,     1,     3,     1,     3,     5,     6,
       2,     0,     3,     3,     1,     3,     4,     1,     1,     1,
       0,     3,     0,     2,     3,     2,     2,     4,     0,     1,
       0,     1,     1,     6,     1,     3,     2,     1,     1,     2,
       1,     1,     2,     1,     1,     1,     1,     1,     0,     1,
       1,     5,     2,     0,     4,     1,     1,     1,     1,     1,
       2,     3,     1,     3,     3,     3,     4,     4,     5,     5,
       3,     3,     3,     1,     1,     1,     1,     3,     1,     3,
       3,     2,     0,     1,     3,     3,     1,     1,     4,     6,
       1,     3,     3,     4,     4,     5,     1,     0,     1,     1,
       0,     3,     3,     3,     2,     4,     7,     7,     6,     6,
       0,     1,     1,     3,     9,     2,     0,     3,     3,     3,
       0,     1,     1,     1,     1,     3,     6,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     6,     5,     3,     1,     2,     3,     3,     3,     3,
       4,     4,     4,     3,     0,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       1,     0,     1,     2,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     1,     4,     6,     5,
       3,     9,     8,     8,     7,     1,     2,     4,     2,     7,
       2,     1,     4,     0,     2,     5,    11,    12,     7,     1,
       2,     4,     6,     5,     5,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      47,     0,     0,     0,     0,     0,     0,     0,   430,   430,
       0,   496,     0,     0,     0,   497,     0,   375,     0,   254,
       0,     0,     0,   253,     0,   430,   438,   288,     0,   401,
       0,   288,     0,     0,     4,    24,    23,    22,     9,    10,
      11,    13,    14,    15,    16,    17,    18,    12,    21,    25,
      26,    20,     0,    19,   274,   251,   267,   331,   273,    27,
      28,    46,    35,    36,    37,    38,    39,    42,    43,    44,
      45,    40,    41,    29,    30,    31,    34,     0,    32,    33,
       5,     0,     6,     8,     7,   274,     0,   543,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,   556,
     557,   558,   559,   560,   562,   561,   563,   564,   565,   566,
     567,   568,   569,     0,   156,   544,     0,   157,   158,   175,
     520,     0,     0,   429,   433,   435,     0,   178,     0,   178,
       0,   540,   405,   359,   541,   405,     0,   239,     0,   239,
     492,   465,   374,     0,   458,   447,   448,   450,   451,     0,
     453,   456,   455,   454,     0,   444,     0,     0,     0,   463,
     436,   439,   440,   292,   341,   538,     0,     0,     0,     0,
     421,     0,     0,     0,     0,   470,   472,     0,   539,   542,
       0,     0,     0,   408,   399,   402,   383,   400,     0,   402,
       0,   421,     0,   395,     0,     0,     0,     0,   432,     0,
       1,     2,    47,     0,     0,   263,   341,   341,   341,     0,
       0,   319,     0,   268,     0,   584,   570,   266,   265,     0,
       0,   159,   167,   168,   169,     0,     0,     0,   521,     0,
       0,     0,     0,     0,   413,     0,     0,     0,     0,   409,
     410,     0,     0,   280,   406,   386,   385,   665,     0,     0,
       0,   416,   415,   244,     0,   490,   371,   373,   372,   370,
     369,   457,   446,   449,   452,     0,     0,   392,     0,     0,
     424,   422,     0,     0,   441,   442,     0,     0,   306,   296,
       0,     0,   295,     0,   303,   304,     0,     0,   290,   293,
     342,   343,     0,   484,   483,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   471,     0,     0,     0,   666,
       0,     0,     0,     0,     0,   390,   402,   376,     0,     0,
     389,   396,   402,     0,   387,   388,   402,   391,     0,     0,
     434,     0,     3,   256,   538,    53,    55,    54,    57,    56,
      58,    59,    61,    60,     0,     0,     0,     0,   119,     0,
       0,   555,    63,    64,    83,   252,    67,    72,    68,    69,
       0,    70,    50,     0,   539,     0,     0,     0,     0,     0,
       0,   319,   269,   320,   495,     0,     0,   611,     0,     0,
       0,     0,     0,   288,     0,   659,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   585,   587,   592,   593,   588,   589,   591,   590,
     610,   609,     0,   288,     0,    48,   173,     0,     0,   515,
     522,     0,     0,     0,     0,     0,   507,   507,   507,   507,
     498,   500,     0,   427,   428,   426,     0,     0,     0,     0,
       0,     0,     0,   251,     0,   240,     0,   238,     0,   241,
     352,   357,     0,     0,   245,   485,   486,   493,   491,   459,
       0,   460,   445,   469,   468,   467,   466,   464,     0,     0,
     462,     0,   437,     0,     0,     0,     0,     0,     0,   289,
       0,   294,   347,   344,   348,   317,   480,     0,     0,   474,
       0,     0,   420,     0,     0,     0,     0,   481,   473,   475,
     402,   402,   384,   403,   404,   380,   402,   397,   381,   394,
     382,     0,   132,   139,     0,   140,     0,     0,     0,    48,
       0,     0,     0,     0,     0,     0,   249,   103,    84,    85,
       0,    48,    70,   118,     0,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     288,   274,   279,   273,   277,   278,   336,   332,   333,   315,
     316,   285,   286,   270,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   612,   614,   619,   615,   616,   618,   617,   636,
     635,     0,   660,     0,     0,     0,     0,     0,     0,   597,
     596,   599,   600,   602,   603,   604,   606,   605,   607,   608,
     601,   595,   598,   594,   583,   586,   155,   663,   288,     0,
       0,   170,     0,     0,     0,     0,     0,     0,   506,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   572,     0,
       0,     0,   574,   177,     0,   411,     0,     0,     0,   281,
     141,   664,   274,     0,   357,     0,     0,   356,   368,   366,
       0,   368,   368,     0,     0,   354,   417,     0,     0,     0,
       0,   423,   425,   461,     0,   301,   305,   309,   310,     0,
     307,     0,   314,   313,   312,   311,     0,     0,   291,     0,
     345,     0,     0,   318,   271,   125,   126,   476,     0,   414,
     418,   477,     0,     0,   482,   379,   378,   377,     0,     0,
     127,     0,     0,     0,     0,     0,     0,   129,     0,     0,
       0,   131,   431,   280,   143,     0,     0,   257,     0,     0,
      65,     0,   124,   120,    62,   102,   101,     0,     0,     0,
      98,    96,    97,    95,    94,    93,   114,    99,     0,     0,
      73,     0,     0,   112,   115,   106,   104,   108,     0,    86,
      87,    88,    89,    90,    92,    91,     0,   138,   137,   136,
     135,    52,    51,   341,   337,   338,   335,     0,     0,     0,
       0,   188,   215,   191,   215,   201,   203,   196,   207,   211,
     209,   187,   186,   202,   207,   193,   185,   213,   213,   184,
     215,   215,     0,   611,   623,   622,   625,   626,   628,   629,
     630,   632,   631,   633,   634,   627,   621,   624,   620,     0,
     613,     0,   171,   172,     0,     0,     0,     0,     0,     0,
     653,   651,     0,   611,     0,   640,   662,    49,   174,   523,
      60,   526,   518,   519,     0,     0,   502,     0,     0,   510,
     499,     0,   507,   501,   419,   575,     0,     0,     0,   571,
       0,     0,     0,   179,   181,   412,     0,   282,   360,   242,
     355,   367,   363,     0,   364,   365,     0,   353,   243,   247,
     246,   494,   443,   300,   302,     0,     0,   298,     0,   346,
     280,   280,   350,   349,   478,   479,   488,     0,   398,   393,
     325,     0,   326,     0,   327,     0,     0,   321,   128,     0,
     251,     0,   255,     0,     0,   251,    49,     0,     0,   121,
       0,   100,     0,   113,    74,    75,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   107,   105,   109,   133,     0,
     334,   283,   287,   284,     0,   198,   197,     0,   189,   210,
     194,     0,   192,   190,     0,   204,   195,   199,   200,     0,
       0,   637,     0,     0,   661,     0,     0,     0,     0,     0,
     160,     0,     0,   611,   650,     0,     0,     0,     0,     0,
       0,   530,   516,   517,   217,     0,     0,   504,   508,   509,
     503,     0,   579,   576,   577,   578,   573,     0,   225,     0,
       0,   149,     0,     0,     0,   308,     0,   299,   317,     0,
     328,   487,     0,   322,   323,   324,   130,   144,   142,   145,
     250,   258,   261,     0,     0,   248,    66,     0,   123,   117,
       0,   110,    76,    77,    78,    79,    80,    82,    81,   116,
       0,     0,     0,     0,     0,   639,     0,     0,   655,   161,
     163,   162,   164,     0,     0,   611,   654,     0,     0,     0,
       0,   611,     0,     0,   645,     0,     0,   525,     0,     0,
     183,     0,   514,     0,     0,   505,   580,   581,   582,     0,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     176,   223,   180,     0,     0,   153,   358,   362,     0,     0,
     272,   351,     0,   339,   489,   259,     0,     0,   122,   111,
       0,   214,   206,     0,   208,   212,   638,     0,   165,     0,
     652,     0,     0,     0,     0,   648,     0,     0,   646,     0,
       0,     0,     0,     0,   219,     0,     0,     0,   221,   216,
     512,   511,   513,     0,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   147,     0,   148,   146,
     151,   154,   361,     0,     0,     0,   276,   262,     0,     0,
     658,   166,   649,     0,   611,   611,   644,     0,     0,     0,
     280,   529,   527,   528,     0,   218,   220,   222,   182,   235,
     232,   234,   227,   226,   231,   230,   229,   228,   233,   224,
       0,     0,     0,   329,   340,   260,   205,   611,     0,   647,
     642,     0,   643,   319,   533,   534,   531,   532,   537,   150,
     152,     0,     0,     0,   641,   275,     0,     0,   524,     0,
       0,     0,     0,     0,     0,     0,   656,   535,     0,     0,
     657,     0,     0,     0,   297,   536
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    32,    33,    34,   414,   352,   353,   354,   761,   483,
     763,   356,   534,   742,   743,   930,   357,   358,   359,   360,
     776,   520,   576,   577,   733,   734,    37,  1011,  1105,  1168,
    1169,  1170,   578,   113,   579,    40,   580,   581,   582,   583,
     584,   585,   586,    41,    42,    43,    44,   227,    45,    46,
     587,    48,   238,   872,   873,   874,   812,   958,   962,   960,
     965,   955,  1080,  1149,  1100,  1171,  1155,    49,   250,   447,
      50,   453,   888,   588,   205,    52,   525,   736,   925,  1033,
     589,   361,    55,    56,    57,   590,    58,   443,   703,   164,
     287,   288,   289,   474,   689,   690,   696,   571,   704,   213,
     521,  1113,   210,   211,   567,   568,   786,  1176,   292,   484,
     485,   901,   902,   450,   451,   673,   882,    59,   260,   143,
      60,    61,   324,   320,   195,   315,   245,   196,    62,   239,
     240,   251,   710,    63,   252,    64,   301,    65,   270,   271,
      66,   435,   124,   330,    67,    68,    69,    70,   162,   276,
      71,   154,   155,   262,   460,    72,   273,    73,   140,   467,
      74,   175,   176,   305,   295,   457,   714,   907,    75,   255,
     458,    76,    77,    78,   430,   431,   643,  1000,   997,    79,
     232,   419,   420,   991,  1079,  1228,  1238,   362,   363,   197,
     114,   364,    80,    81,   651,   652,   216,   401,   402,   403,
     591,   592,   593,   404,   594,   595,  1073,  1074,  1075,   596,
     840,   841,   985,   597,   598,   599,   600,    82,    83,    84
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -968
static const yytype_int16 yypact[] =
{
    3271,    63,  2816,    84,  2816,  2816,  2816,   198,  -103,  -103,
     324,  -968,     9,  2948,  2948,   325,  2816,  -131,   818,  -968,
     -50,  2816,   -43,  -968,   818,  -103,    -7,    62,  2512,   998,
     -37,    62,   196,   -59,  -968,  -968,  -968,  -968,  -968,  -968,
    -968,  -968,  -968,  -968,  -968,  -968,  -968,  -968,  -968,  -968,
    -968,  -968,   193,  -968,    10,   155,  -968,   126,   123,  -968,
    -968,  -968,  -968,  -968,  -968,  -968,  -968,  -968,  -968,  -968,
    -968,  -968,  -968,  -968,  -968,  -968,  -968,   219,  -968,  -968,
    -968,   303,  -968,  -968,  -968,   343,   347,  -968,  -968,  -968,
    -968,  -968,  -968,  -968,  -968,  -968,  -968,  -968,  -968,  -968,
    -968,  -968,  -968,  -968,  -968,  -968,  -968,  -968,  -968,  -968,
    -968,  -968,  -968,   336,  -968,  -968,   367,  -968,   532,  -968,
     379,  2948,   410,  -968,  -968,  -968,   425,   317,   410,   317,
    2948,  -968,   474,  -968,  -968,   474,    81,   323,   410,   323,
     306,  -968,  -968,   293,   369,  -968,   301,  -968,  -968,   412,
    -968,  -968,  -968,  -968,   -65,  -968,  2948,   414,   410,   -39,
    -968,  -968,   -88,   351,    58,  -968,    74,   136,  2981,   516,
     475,  2981,   555,   592,    74,   383,  -968,    74,  -968,  -968,
     619,    38,   441,  -968,  -968,    14,  -968,  -968,   400,    14,
     483,   521,   405,   499,   413,   416,   447,   614,   459,  2948,
    -968,  -968,  3271,  2948,  2278,  -968,    58,    58,    58,   585,
     199,   300,   471,  -968,  2816,  3178,  -968,  -968,  -968,   554,
    1700,   606,   609,  -968,  -968,   674,   675,   618,  -968,  2981,
     541,   501,   240,   297,  -968,   262,   647,   668,  2948,   453,
    -968,   567,  2948,   500,  -968,  -968,  -968,  -968,   596,   598,
    2638,  -968,   463,  2948,   694,  -968,  -968,  -968,  -968,  -968,
    -968,  -968,  -968,  -968,  -968,  2663,   818,  -968,   293,   517,
    -968,   473,  2663,   599,  -968,  -968,   709,   676,  -968,  -968,
     679,   681,  -968,   682,  -968,  -968,   683,   -68,   351,  -968,
    -968,  -968,  1768,  -968,  -968,  2278,   142,  2278,    74,  2981,
     410,   691,    74,  2981,    74,  -968,  2278,   643,  2278,  -968,
    2948,  2948,  2948,   722,  2278,  -968,    14,  -968,  2948,    49,
    -968,  -968,    14,   724,  -968,  -968,    14,  -968,  1118,   646,
    -968,   559,  -968,   162,   457,  -968,  -968,  -968,  -968,  -968,
    -968,  -968,  -968,   693,  2278,  2278,  2278,  1870,  2278,   696,
     692,   698,  -968,  -968,  -968,  2001,  -968,  -968,  -968,  -968,
     702,  -968,  -968,   704,   705,   181,   181,   181,  2278,   100,
     100,   638,  -968,  -968,  -968,  2688,  2278,  3194,   -80,  2816,
    2278,   737,  2278,    62,   643,  -968,   522,   526,   528,   531,
     535,   536,   538,   539,   542,   543,   545,   547,   558,   579,
     608,   652,  3178,  -968,  -968,  -968,  -968,  -968,  -968,  -968,
    -968,  -968,    63,    62,    11,  2001,  -968,   603,   773,   610,
    -968,   822,   823,   826,   708,   710,   769,   769,   769,   -31,
     644,  -968,   804,  -968,  -968,  -968,   494,   774,   845,   410,
     816,   749,  1938,   155,   894,  -968,  1841,   660,  2714,   376,
    2747,  -968,   410,   132,  -968,   693,  -968,  -968,   661,  -968,
     711,  -968,  -968,  -968,  -968,  -968,  -968,  -968,   410,   410,
    -968,   410,  -968,   898,    22,   278,  2948,   234,  2948,  -968,
     351,  -968,  -968,  1380,  -968,   -57,  2001,   862,   865,  2001,
    2278,    74,  -968,   903,  2278,    74,   868,  2001,  -968,  2001,
      14,    14,  -968,  -968,  2001,  -968,    14,   869,  -968,   672,
    -968,   870,  -968,  -968,  2108,  -968,  2176,  2346,    26,  3493,
    2278,   872,   738,  2981,  2253,   719,  -968,  3091,  -968,  -968,
     680,  3546,   573,  2001,   718,  -968,  2981,  2278,  2278,   520,
    2278,  2278,  2278,  2278,  2278,  2278,  2278,  2278,  2613,   882,
     445,  2278,  2278,  2278,  2278,  2278,  2278,  2278,   293,  2784,
      62,  -968,   906,  -968,   906,  -968,  3514,   686,  -968,  -968,
    -968,   -75,   789,  -968,  1353,  3035,   689,   690,   695,   697,
     699,   701,   703,   707,   723,   725,   727,   729,   730,   731,
     733,   828,  3194,  -968,  -968,  -968,  -968,  -968,  -968,  -968,
    -968,  2278,  -968,   407,  1637,   901,  1724,  1466,   305,  -968,
    -968,  -968,  -968,  -968,  -968,  -968,  -968,  -968,  -968,  -968,
    -968,  -968,  -968,  -968,  -968,  -968,  -968,  -968,    62,  2278,
     930,  -968,  2981,   333,   935,   938,   921,   937,  -968,  2981,
    2981,  2981,  2948,  2981,   358,   903,  3311,   949,  -968,   957,
     958,    30,  -968,  -968,  2922,  -968,   903,  2948,  2278,  2001,
    -968,  -968,  2010,   376,   918,  2638,  2948,  -968,   824,  -968,
    2638,   824,   824,   843,  2948,  -968,  -968,  2948,  2948,   694,
     410,  -968,  -968,   463,   934,  -968,  -968,  -968,  -968,    33,
    -968,   746,  -968,  -968,  -968,  -968,   944,  2948,   351,  2816,
    -968,  2547,  1768,  -968,  -968,  -968,  -968,  2001,  2278,  -968,
    -968,  2001,  2278,   333,  -968,  -968,  -968,  -968,   948,   985,
    -968,  2278,  1792,  2278,  2511,  2278,  3072,  -968,  3311,  2278,
    3595,  -968,  -968,   -99,  -968,   967,    36,  -968,   953,  2278,
    -968,  2278,   -42,  -968,  -968,  1598,  3091,  2278,  2613,   882,
    1143,  1143,  1143,  1143,  1143,  1143,  1337,  1015,  2613,  2613,
    -968,   755,  1870,  -968,  -968,  -968,  -968,  -968,   659,   805,
     805,   959,   959,   959,   959,  -968,   954,  -968,  -968,  -968,
    -968,  -968,  -968,    58,  -968,  -968,  -968,  2278,   100,   100,
     100,  -968,   956,  -968,   956,  -968,  -968,  -968,   960,   850,
     963,  -968,  -968,  -968,   960,  -968,  -968,   964,   964,  -968,
     956,   956,    69,  3194,  -968,  -968,  -968,  -968,  -968,  -968,
    -968,  -968,  -968,  -968,  -968,  -968,  -968,  -968,  -968,   962,
    -968,   800,   875,   876,   879,   884,  1010,   694,   951,  2278,
     -26,  -968,  2580,  3194,   -21,  -968,  -968,  2001,  -968,  -968,
    -968,   936,  -968,  -968,  1016,  1020,  -968,  3311,   -33,    -6,
    -968,   832,   769,  -968,  -968,   965,  3311,  3311,  3311,  -968,
     484,   893,    41,  -968,  -968,  -968,   987,  2001,   961,   376,
    -968,  -968,  -968,   621,  -968,  -968,  2638,  -968,  -968,  -968,
    -968,  -968,   463,  -968,  -968,   278,  2948,  -968,   988,  -968,
     500,   -89,   376,  -968,  2001,  2001,  -968,    44,  -968,  -968,
    2001,  2278,  2001,  2278,  2001,  2278,   989,  2001,  -968,  2981,
     155,  2278,    63,  2981,  2278,  -102,  3619,  1831,  2278,  -968,
     928,  1015,   766,  -968,  -968,  -968,  2613,  2613,  2613,  2613,
    2613,  2613,  2613,  2613,    45,  -968,  -968,  -968,  -968,  1768,
    -968,  -968,  -968,  -968,  1031,  -968,  -968,  1033,  -968,  -968,
    -968,  1034,  -968,  -968,  1037,  -968,  -968,  -968,  -968,   825,
     333,  -968,   970,   827,  -968,   694,   694,   694,   694,   933,
     661,  1062,  2239,  3194,  -968,   971,  2613,   157,   334,   694,
    1064,   900,  -968,  -968,  -968,    86,   124,  -968,  -968,  -968,
    -968,  2816,  -968,  1024,  1025,  1026,  -968,  1041,   525,  2922,
    2981,   873,  2948,  2278,   635,  -968,   839,  -968,   199,  2638,
     966,  -968,   333,  2001,  2001,  2001,  -968,  -968,  -968,  2001,
    -968,  -968,  2001,    48,  1043,  -968,  -968,  2278,  2001,  -968,
    2613,  1023,   854,   854,  1050,  1050,  1050,  1050,  -968,  -968,
     110,  1048,    52,  1049,  1051,  -968,   856,  1047,  -968,   661,
     661,   661,   661,   694,   968,  3194,  -968,  1012,   534,  2613,
    2278,  3194,   973,   353,  -968,   991,   148,  -968,  1073,   874,
      29,  1093,  -968,  1094,   333,  -968,  -968,  -968,  -968,  2981,
    1081,  1081,  1081,  1081,  1081,  1081,  1081,  1081,  1081,  1081,
     878,  -968,  -968,    53,  1070,   525,  -968,  2001,  2278,  2948,
    -968,   376,  1036,   990,  -968,  -968,  2278,  2278,  2001,  1023,
    2638,  -968,  -968,  1109,  -968,  -968,  -968,   880,   661,   694,
    -968,   883,  2613,   916,  2409,  -968,   892,   993,  -968,  1028,
    1008,  2638,   239,  1111,  -968,  1127,   333,  1007,  -968,  -968,
    -968,  -968,  -968,    55,  -968,  1137,  1138,   974,  1139,  1141,
    1142,  1144,  1149,  1150,  1152,   525,  -968,  2981,  -968,   908,
    -968,  -968,  2001,  1119,  2278,  2278,  -968,  2001,    56,  1122,
    -968,   661,  -968,   945,  3194,  3194,  -968,   927,  1056,   950,
     -89,  -968,  -968,  -968,   415,  -968,  -968,  -968,  -968,  -968,
    -968,  -968,  -968,  -968,  -968,  -968,  -968,  -968,  -968,  -968,
      61,   525,  2948,   929,  2001,  -968,  -968,  3194,  1080,  -968,
    -968,   952,  -968,   638,  -968,  -968,  -968,  -968,   -38,  -968,
    -968,   955,  1083,  1146,  -968,  -968,  1166,  1167,  -968,  2948,
    1147,   972,  1187,  1195,  1158,   975,  -968,  -968,   976,  2948,
    -968,  1179,  1163,  1200,  -968,  -968
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -968,  -968,  -968,  1005,  -322,  -968,  -599,  -363,  -338,   726,
     462,  -968,  -968,  -968,   466,  -968,   -20,  1184,  -968,  -968,
    -968,  -968,    24,    28,  -968,   295,  -968,  -968,  -968,  -968,
    -968,     6,    23,    32,    40,  -968,  -171,  -170,  -157,  -149,
    -140,  -125,  -107,  -968,  -968,  -968,  -968,   616,  -968,  -968,
      50,  -968,  1095,  -968,   213,   584,  -554,   421,  -968,  -968,
     418,  -458,  -968,  -968,  -968,  -967,  -286,  -968,  1090,  -968,
    -968,  -968,  -968,    57,  -434,  -968,  -968,  -962,  -968,   113,
       7,   179,    15,  -968,   188,  -100,   218,  -713,  1021,    -9,
    -968,   752,  -267,  -968,  -968,   338,  -968,  -355,   217,  -210,
    -968,  -968,  -968,  -968,  -968,   449,  -968,  -968,  -175,   537,
    -580,    97,  -233,    47,   795,  -968,  -108,  -968,  -968,  -968,
    -968,  -968,  -968,  -968,  -968,   -98,  1110,  -968,  -968,  -968,
     809,   -63,  -172,  -968,  -436,  -968,  1058,  -968,   782,  -968,
    -968,  -968,   104,  -968,  -968,  -968,  -968,  -968,  -968,  -968,
    -968,  1229,   992,  -968,   982,  -968,  -968,  -968,    43,  -968,
    -968,   877,   969,  -968,   -94,   577,  -968,  -968,  -968,  -968,
    -365,  -968,  -968,  -968,  -968,   613,   216,  -968,  -968,  -968,
    -968,  -968,   628,  -968,  -968,  -968,  -968,   -23,    16,  -968,
      -3,    -2,  -968,  -968,  -968,   392,  -968,  -968,  -968,   885,
    -767,  -968,   700,  -968,   -95,   -91,  -968,   201,   202,   -85,
    -968,   444,  -968,   -84,   -83,   -82,   -81,  -968,  -968,  -968
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -543
static const yytype_int16 yytable[] =
{
     115,   372,   115,   115,   115,   177,   518,    53,   174,   660,
     574,   134,   134,   141,   115,   572,    86,   449,   141,   115,
     920,   481,   199,    38,    35,   530,   178,   844,    36,   133,
     133,   365,   366,   367,   851,   683,   117,   118,   119,  1144,
      39,  1101,   313,  1236,   390,   391,   972,   201,  1103,  1145,
      47,  -264,   628,   234,   638,   479,   701,    51,   392,   235,
     132,   135,   928,   685,   157,   241,   393,   727,   310,   995,
     788,   869,   998,   297,   894,   394,   988,   922,   983,   369,
     306,   265,  1008,   308,   247,  1021,  1049,   116,   370,  1115,
     395,   317,   865,  1122,  1166,   269,  1198,  1215,   293,   204,
     123,   442,  1229,     1,   142,   569,  1081,   272,   396,   989,
     161,   442,   570,   125,   906,   400,  -264,   274,   275,   134,
     405,   601,   130,   969,   406,  1146,   290,  1153,   134,   160,
     407,   408,   409,   410,   411,   156,  1034,   133,   507,   919,
     996,   206,   207,   208,  1083,   298,   133,   487,   302,  1019,
     259,   311,   158,   999,   134,   198,   488,   602,   291,   741,
     293,   573,   642,   789,  -319,   970,   178,   256,   233,   178,
     480,   257,   133,   266,   916,   839,   296,   243,   202,    54,
      85,   702,  1082,  1147,   163,   760,  1237,  1018,  1020,   937,
     938,   939,   940,   941,   942,   943,   200,   134,  1209,   266,
     258,   134,   524,   267,   490,  1210,   421,   248,   494,    53,
     496,   141,   115,   663,   314,   133,  1066,   702,   505,   133,
    1084,     1,   399,  1120,   508,    38,    35,   178,   510,  -319,
      36,   390,   391,    27,   456,   212,   134,   492,   388,   386,
     134,  1148,    39,   387,   892,   392,   331,  -264,   134,   629,
     333,   134,    47,   393,   133,   389,   492,   374,   133,    51,
     686,  1141,   394,   134,   629,   397,   133,   294,   870,   133,
     134,   895,   398,   209,   923,   466,   491,   395,   677,  1009,
     495,   461,  1022,   629,   177,   438,  1116,   174,   461,   441,
    1123,   923,   463,   923,  1116,   396,   464,   178,  1130,   923,
     454,   178,   400,   994,  1135,   178,   971,   405,   134,   134,
     134,   406,  1003,  1004,  1005,  1191,   134,   407,   408,   409,
     410,   411,    54,   203,  -319,   465,   133,   133,   133,   294,
     424,   425,    27,     1,   133,   369,   956,   335,   336,   337,
     526,   338,   339,   340,   370,   341,   342,   850,   702,   692,
    1069,   560,   967,   968,   277,   456,   204,   500,   501,   502,
    -319,   177,    86,   426,   174,   506,   427,   126,   136,  1050,
     678,  1056,   214,   115,   607,   215,   241,   115,   120,  1070,
    1192,    54,   178,   121,   217,   760,   679,   432,   218,   676,
      12,   278,   219,   122,    54,   760,   760,   708,  1070,   428,
     433,   712,   715,   716,   627,   681,   269,   220,   717,   399,
     932,   603,   212,   693,   234,   694,  1193,  1218,  1219,   626,
     934,   935,    19,  1114,   426,   388,   386,   427,   236,   448,
     387,   481,   879,   951,   952,   953,  -330,   883,  1071,  1072,
     944,   695,   389,   237,   134,  -330,   134,    54,   134,   249,
    1232,    23,   397,   765,   429,   766,   767,  1071,  1137,   398,
     428,    86,   133,    27,   667,   768,   675,   832,   833,   834,
     835,   836,   980,   864,   134,   279,   134,  1223,   244,   760,
     700,   115,   280,   281,   875,  1152,  1028,    31,   687,   688,
     668,  1035,   133,   434,   133,   228,   263,  -542,   646,  -540,
     735,   737,   254,   669,   987,   350,   282,   670,   646,   127,
     137,   671,    54,   744,   647,   862,   283,   284,   285,   128,
     138,   178,   178,   691,   647,   697,   532,   268,   535,   261,
     649,   650,   129,   139,   178,   648,   782,   837,   672,    86,
     649,   650,   845,   307,   561,   561,   561,  1196,   747,   748,
     749,   783,   229,   562,   564,   565,    54,   178,   299,   286,
     264,   230,   231,   884,   885,   780,   937,   938,   939,   940,
     941,   942,   943,   760,   760,   760,   760,   760,   760,   760,
     760,    54,   777,   563,   563,   563,   778,   300,  -274,  -274,
    -274,    54,   221,   222,   223,   224,   225,   303,  1041,  1042,
    1043,  1044,  1045,  1046,  1047,  1048,   304,  1090,   949,   421,
    1059,  1060,  1061,  1062,   217,   779,   857,   858,   859,   846,
     861,   307,   309,   760,  1076,   662,   312,   316,  1224,   318,
     178,   857,   322,   319,  1225,   323,  1226,   178,   178,   178,
     134,   178,   639,   640,   641,   226,   165,  1227,  1068,   325,
     326,   327,   178,  1014,   328,   134,   166,   167,   133,   456,
     134,   329,   368,   134,   134,   373,   412,   945,   134,   946,
     947,  -171,   134,   133,  -172,   134,   134,   760,   667,   416,
     417,   133,   880,   418,   422,   423,   133,   436,   437,   860,
     887,   439,   440,   133,   133,   134,   899,   115,  1128,   134,
     442,   452,  1119,    85,   876,   444,   760,   445,   455,  -274,
     468,   469,   471,   133,   472,   493,   473,   133,  -274,   475,
    -274,   476,   477,   478,   889,   890,   503,  1132,   764,   509,
     522,  1133,   523,   296,   536,   668,     1,    54,  -134,  1091,
    1092,  1093,   558,  1094,   898,  1095,   559,  -541,   669,   668,
     212,   605,   670,  1096,  1097,  1098,   671,   624,  1099,   609,
     168,   169,   669,   610,  1181,   611,   670,  1013,   612,   760,
     671,    54,   613,   614,   936,   615,   616,    86,   631,   617,
     618,  1108,   619,   672,   620,  1040,  1111,   937,   938,   939,
     940,   941,   942,   943,  1183,   621,   630,   672,   937,   938,
     939,   940,   941,   942,   943,  1156,  1157,  1158,  1159,  1160,
    1161,  1162,  1163,  1164,   171,   172,   622,   456,   537,   538,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,   556,   557,   553,
     554,   555,   556,   557,   448,   623,   633,   634,   632,   448,
     635,   636,  1213,   637,   638,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     448,   645,   644,   653,   134,   654,   144,   145,   939,   940,
     941,   942,   943,   656,   134,   657,   735,   661,   665,   679,
    1031,   684,   133,   705,   680,   146,   706,   709,   713,   718,
     719,   720,   133,   731,   732,   147,   738,   178,   739,   741,
     148,   178,   762,   208,   787,   790,   814,   815,   764,  1030,
     355,   842,   816,   829,   817,   848,   818,   149,   819,   852,
     820,   532,   853,  1016,   821,   854,   415,   150,   937,   938,
     939,   940,   941,   942,   943,   456,   456,   456,   456,   878,
     822,   855,   823,   866,   824,  1184,   825,   826,   827,   456,
     828,   867,   868,   881,   886,   893,   151,   937,   938,   939,
     940,   941,   942,   943,   896,   897,   857,   737,   152,   908,
     909,   921,    54,   924,  1217,   948,   954,   557,  1085,   115,
     957,   179,   959,   961,   964,   975,   976,   178,   178,   977,
     134,   973,   153,  1235,   978,   979,   981,   134,   990,  1002,
     992,   486,    54,   489,   993,  1001,  1007,  1010,  1106,  1017,
    1026,  1012,   497,  1039,   499,   133,  1051,   974,  1052,  1053,
     504,   180,  1054,   456,   548,   549,   550,   551,   552,   553,
     554,   555,   556,   557,   519,   937,   938,   939,   940,   941,
     942,   943,  1055,  1063,  1058,   448,   737,  1064,  1077,  1078,
     527,   528,   529,   531,   533,  1057,  1067,  1109,  1086,  1087,
    1088,  1089,  1104,  1117,   181,   182,  1112,   178,   943,  1121,
    1124,  1131,  1125,  1126,   566,  1127,  1140,  1142,  1129,  1136,
    1143,    54,   575,  1150,  1151,  1154,   604,   134,   606,   456,
    1167,  1175,   183,  1174,  1179,   184,  1165,  1180,   134,  1187,
    1182,   334,   335,   336,   337,   133,   338,   339,   340,  1186,
     341,   342,   343,  1188,  1189,  1194,   133,  1195,   344,   134,
    1197,  1199,  1200,  1202,   737,  1203,  1211,  1204,   185,  1205,
     345,   346,   511,  1201,  1206,  1207,  1173,   133,   347,   512,
    1208,  1212,    54,  1216,  1220,   178,   186,   629,   659,   187,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
     556,   557,  1221,   188,   189,  1233,   513,  1222,  1240,  1234,
    1242,  1243,  1247,  1239,   514,  1241,  1245,   348,   448,  1248,
    1249,  1251,  -407,  1253,  1254,  1255,   190,   332,   929,  1246,
     134,   933,  1250,   194,  1027,   191,   707,  1230,   515,   838,
     711,   192,  1102,   856,   242,   963,   966,   349,   133,   253,
    1178,   371,   698,  1015,   193,  1110,   950,   134,  1190,   903,
     722,   664,   724,   726,    54,   246,   730,   134,   655,   321,
      54,   682,   516,   159,   470,   133,   891,   863,   462,  1231,
     849,   608,  1006,   745,   746,   133,   750,   751,   752,   753,
     754,   755,   756,   757,  1138,  1139,   498,   769,   770,   771,
     772,   773,   774,   775,   984,     0,  1244,   625,     0,     0,
     350,     0,   830,     0,     0,     0,  1252,     0,     0,   448,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   517,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     448,     0,     0,     0,     0,     0,     0,   831,     0,     0,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
     351,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   847,     0,     0,     0,     0,
       0,     0,     0,    54,    54,   547,   548,   549,   550,   551,
     552,   553,   554,   555,   556,   557,     0,     0,     0,     0,
       0,     0,     0,    87,   877,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    54,     0,   537,   538,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,   556,   557,     0,
       0,     0,     0,     0,     0,     0,   791,   792,   793,     0,
       0,     0,     0,   794,   904,     0,     0,     0,   905,     0,
       0,   795,     0,     0,     0,   796,   797,   910,   798,   912,
     699,   914,     0,     0,   799,   917,     0,     0,     0,     0,
       0,     0,     0,     0,   800,   926,     0,   927,     0,   334,
     335,   336,   337,   931,   338,   339,   340,     0,   341,   342,
     343,   801,     0,     0,     0,     0,   344,     0,   415,     0,
       0,     0,     0,   802,     0,   803,     0,   804,   345,   346,
     482,     0,     0,     0,     0,     0,   347,     0,     0,   805,
       0,     0,     0,   566,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   806,     0,
       0,     0,     0,     0,   290,     0,     0,     0,     0,     0,
       0,   807,   808,   809,     0,   348,     0,     0,     0,     0,
       0,   810,   811,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   982,   291,     0,     0,     0,
       0,     0,     0,     0,     0,   349,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   679,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   538,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,   556,   557,  1023,   350,  1024,
       0,  1025,     0,     0,     0,     0,     0,  1029,     0,     0,
    1032,     0,     0,     0,  1038,   537,   538,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,   556,   557,     0,     0,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,   351,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   334,   335,   336,   337,     0,   338,   339,
     340,     0,   341,   342,   343,     0,     0,     0,     0,     0,
     344,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   345,   346,     0,     0,     0,     0,     0,  1107,
     347,   413,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,  1118,     0,     0,     0,     0,     0,     0,
       0,   334,   335,   336,   337,     0,   338,   339,   340,   348,
     341,   342,   343,     0,     0,     0,     0,     0,   344,     0,
       0,     0,     0,     0,     0,     0,  1134,     0,     0,     0,
     345,   346,   482,     0,     0,     0,     0,     0,   347,   349,
     537,   538,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,   556,
     557,     0,     0,     0,  1172,     0,     0,     0,   839,     0,
       0,     0,  1177,  1032,   131,     0,     0,   348,     0,   537,
     538,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553,   554,   555,   556,   557,
       0,     0,   350,   334,   335,   336,   337,   349,   338,   339,
     340,   446,   341,   342,   343,     0,     0,     0,     0,     0,
     344,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     415,  1214,   345,   346,     0,   911,     0,     0,     0,     0,
     347,   843,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   351,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,     0,     0,     0,
     350,   334,   335,   336,   337,   658,   338,   339,   340,   348,
     341,   342,   343,     0,     0,     0,     0,     0,   344,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     345,   346,     0,     0,     0,     0,     0,     0,   347,   349,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
     351,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,     0,     0,     0,     0,     0,
       0,    27,     0,   131,     0,     0,     0,   348,  1037,   537,
     538,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553,   554,   555,   556,   557,
      27,     0,   350,     0,     0,     0,     0,   349,     0,     0,
       0,   217,     0,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,     0,     0,
     666,     0,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   351,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,     0,     0,     0,
     350,   334,   335,   336,   337,     0,   338,   339,   340,     0,
     341,   342,   343,     0,     0,     0,     0,     0,   344,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     345,   346,     0,     0,     0,     0,     0,     0,   347,     0,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
     351,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,     0,     0,     0,     0,   334,
     335,   336,   337,     0,   338,   339,   340,   348,   341,   342,
     343,     0,     0,     0,     0,     0,   344,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   345,   346,
       0,     0,     0,     0,     0,     0,   347,   349,     0,     0,
       0,   721,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,     0,     0,     0,
       0,     0,     0,     0,     0,   348,   165,   537,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,     0,     0,
     350,   334,   335,   336,   337,   349,   338,   339,   340,   723,
     341,   342,   343,     1,     0,     0,     0,     0,   344,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     345,   346,     0,     0,     0,     0,     0,     0,   347,     0,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
     351,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,     0,     0,     0,   350,   334,
     335,   336,   337,     0,   338,   339,   340,   348,   341,   342,
     343,     0,     0,     0,     0,     0,   344,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   345,   346,
       0,     0,     0,     0,     0,     0,   347,   349,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,   351,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,   348,  1065,   537,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,     0,     0,
     350,     0,     0,     0,     0,   349,     0,     0,     0,   725,
       0,     0,     0,     0,     0,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
     351,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   165,     0,     0,   350,     0,
       0,     0,     0,     0,     0,   166,   167,     0,     0,   537,
     538,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553,   554,   555,   556,   557,
     131,     0,     0,     0,     0,     0,     0,     0,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,   351,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   334,   335,   336,   337,   446,   338,   339,
     340,     0,   341,   342,   343,     0,  1185,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   758,   759,     0,     0,   334,   335,   336,   337,
     347,   338,   339,   340,   913,   341,   342,   343,     0,   168,
     169,     0,     0,     0,     0,   986,     0,     0,     0,     0,
       0,   131,     0,     0,     0,   758,   759,     0,     0,     0,
     900,     0,     0,   347,     0,     0,     0,     0,     0,   348,
       0,     0,     0,   170,     0,     0,   131,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   446,     0,
       0,     0,     0,   171,   172,   173,     0,     0,     0,   349,
       0,    87,   348,     0,     0,     0,     0,   459,     0,     0,
       0,     0,   455,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   131,     0,     0,
       0,     0,   349,     0,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,     0,
     131,     0,   350,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   666,   350,     0,   165,     0,     0,
       0,     0,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   351,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   674,   781,    87,
       0,     0,     0,     0,     0,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,   351,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   165,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   131,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   165,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,     0,     0,     0,     0,     0,     0,     0,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   537,   538,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,   556,   557,     0,     0,   871,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   813,     0,     0,
     537,   538,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,   556,
     557,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553,   554,   555,   556,   557,
       0,     0,     0,     0,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,     0,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   915,     0,     0,     0,     0,
       0,     0,     0,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,     1,     0,
       0,     0,   375,     0,     0,     0,   376,   377,   378,     0,
       0,     0,     0,     0,     1,     4,   379,     6,     2,     0,
       0,     0,   376,   377,   378,     0,     0,     0,     0,     0,
       0,     4,   379,     6,     0,     0,     0,   380,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   380,     0,    12,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     381,    12,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   382,     0,   381,    19,     0,     0,
       0,     1,     0,     0,     0,     2,     0,     0,     0,     0,
     382,     0,     0,    19,     3,     0,     0,     0,     4,     5,
       6,     0,     0,     0,     0,     0,    23,     0,     0,     0,
       7,     0,     0,     8,     0,     0,     0,     0,   383,     0,
       0,   384,    23,     0,     9,     0,     0,     0,    10,     0,
       0,     0,     0,     0,   383,    11,     0,   384,    12,    13,
      14,     0,    31,    15,     0,     0,     0,     0,     0,    16,
       0,    17,     0,     0,   791,   792,   793,     0,    31,     0,
      18,   794,     0,     0,     0,     0,     0,     0,     0,   795,
      19,     0,     0,   796,   797,     0,   798,     0,     0,     0,
      20,     0,   799,     0,     0,   385,     0,     0,     0,     0,
       0,     0,   800,     0,    21,     0,     0,     0,    22,    23,
       0,   385,    24,     0,    25,    26,     0,     0,     0,   801,
       0,    27,     0,     0,    28,    29,     0,     0,     0,    30,
       0,   802,     0,   803,     0,   804,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,     0,   805,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   806,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   807,
     808,   809,     0,     0,     0,     0,     0,     0,     0,   810,
     811,   537,   538,   539,   540,   541,   542,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
     556,   557,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   728,   537,   538,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,   556,   557,   784,     0,   740,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   729,     0,     0,     0,
       0,     0,   785,   537,   538,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,   556,   557,     0,     0,   918,   537,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,     0,     0,
    1036
};

static const yytype_int16 yycheck[] =
{
       2,   211,     4,     5,     6,    28,   328,     0,    28,   443,
     375,    13,    14,    16,    16,   370,     1,   250,    21,    21,
     733,   288,    31,     0,     0,   347,    28,   607,     0,    13,
      14,   206,   207,   208,   633,   471,     4,     5,     6,    10,
       0,  1008,    28,    81,   215,   215,   813,   106,  1010,    20,
       0,    41,    41,     4,    85,   123,   113,     0,   215,   122,
      13,    14,   104,    41,    21,   128,   215,    41,    30,   102,
     145,    41,    78,   167,    41,   215,   843,    41,   104,   136,
     174,   146,    41,   177,     3,    41,    41,     3,   145,    41,
     215,   189,   646,    41,    41,   158,    41,    41,    24,   201,
     203,   200,    41,    40,   235,     5,    20,   146,   215,   130,
     117,   200,    12,     9,   713,   215,   106,   205,   206,   121,
     215,   201,   113,    54,   215,    96,    68,  1089,   130,    25,
     215,   215,   215,   215,   215,   185,   238,   121,    89,   238,
     173,    15,    16,    17,    20,   168,   130,     5,   171,   238,
     143,   113,   195,   159,   156,   192,    14,   237,   100,   201,
      24,   371,   193,   238,    41,    96,   168,   143,   121,   171,
     238,   143,   156,   238,   728,   201,    40,   130,   237,     0,
       1,   238,    96,   154,   122,   548,   224,   900,   901,    32,
      33,    34,    35,    36,    37,    38,     0,   199,  1165,   238,
     143,   203,    40,   156,   298,  1167,   229,   126,   302,   202,
     304,   214,   214,   446,   200,   199,   983,   238,   316,   203,
      96,    40,   215,   113,   322,   202,   202,   229,   326,   106,
     202,   402,   402,   170,   254,   112,   238,   300,   215,   215,
     242,   212,   202,   215,   680,   402,   199,   237,   250,   238,
     203,   253,   202,   402,   238,   215,   319,   214,   242,   202,
     238,   113,   402,   265,   238,   215,   250,   193,   238,   253,
     272,   238,   215,   147,   238,   268,   299,   402,   146,   238,
     303,   265,   238,   238,   307,   238,   238,   307,   272,   242,
     238,   238,   268,   238,   238,   402,   268,   299,  1065,   238,
     253,   303,   402,   857,  1071,   307,   237,   402,   310,   311,
     312,   402,   866,   867,   868,    76,   318,   402,   402,   402,
     402,   402,   143,   130,   201,   268,   310,   311,   312,   193,
      90,    91,   170,    40,   318,   136,   794,     4,     5,     6,
     333,     8,     9,    10,   145,    12,    13,    14,   238,   115,
     193,   170,   810,   811,     3,   375,   201,   310,   311,   312,
     237,   384,   347,    66,   384,   318,    69,    43,    43,   949,
     238,   970,   153,   375,   383,    72,   439,   379,   180,    45,
     141,   202,   384,   185,    41,   748,   238,   125,    41,   452,
      97,    40,    56,   195,   215,   758,   759,   491,    45,   102,
     138,   495,   500,   501,   413,   468,   469,    40,   506,   402,
     748,   379,   112,   179,     4,   181,   177,  1184,  1185,   412,
     758,   759,   129,  1022,    66,   402,   402,    69,     3,   250,
     402,   698,   665,   788,   789,   790,   136,   670,   104,   105,
     762,   207,   402,   126,   446,   145,   448,   268,   450,   126,
    1217,   158,   402,     8,   157,    10,    11,   104,   105,   402,
     102,   446,   446,   170,   448,    20,   450,    60,    61,    62,
      63,    64,   837,   645,   476,   124,   478,  1190,     4,   842,
     483,   483,   131,   132,   656,  1084,   920,   194,   210,   211,
     114,   925,   476,   231,   478,   116,   195,    40,    14,    42,
     523,   524,   196,   127,   842,   172,   155,   131,    14,   185,
     185,   135,   333,   536,    30,   157,   165,   166,   167,   195,
     195,   523,   524,   476,    30,   478,   347,   113,   349,   160,
      46,    47,   208,   208,   536,    41,   559,   130,   162,   524,
      46,    47,   237,   238,   365,   366,   367,  1146,    28,    29,
      30,   560,   173,   365,   366,   367,   377,   559,    42,   208,
     148,   182,   183,   671,   672,   558,    32,    33,    34,    35,
      36,    37,    38,   936,   937,   938,   939,   940,   941,   942,
     943,   402,   558,   365,   366,   367,   558,   112,    15,    16,
      17,   412,    60,    61,    62,    63,    64,    42,   936,   937,
     938,   939,   940,   941,   942,   943,    14,    82,   783,   632,
     975,   976,   977,   978,    41,   558,   639,   640,   641,   628,
     643,   238,     3,   986,   989,   446,   185,   227,   213,   146,
     632,   654,   227,   112,   219,   136,   221,   639,   640,   641,
     642,   643,   426,   427,   428,   113,     3,   232,   986,   236,
     234,   204,   654,   886,    40,   657,    13,    14,   642,   679,
     662,   202,    77,   665,   666,   194,   112,     8,   670,    10,
      11,    65,   674,   657,    65,   677,   678,  1040,   662,     5,
       5,   665,   666,    65,   143,   184,   670,    40,    20,   642,
     674,   238,   125,   677,   678,   697,   699,   699,  1063,   701,
     200,   238,  1040,   524,   657,   109,  1069,   109,    14,   136,
     193,   238,   113,   697,     5,    24,    40,   701,   145,    40,
     147,    40,    40,    40,   677,   678,     4,   193,   549,     5,
      84,  1069,   173,    40,    42,   114,    40,   558,    40,   214,
     215,   216,    40,   218,   697,   220,    42,    42,   127,   114,
     112,    14,   131,   228,   229,   230,   135,   105,   233,   237,
     117,   118,   127,   237,  1129,   237,   131,   146,   237,  1132,
     135,   592,   237,   237,    19,   237,   237,   762,     5,   237,
     237,   146,   237,   162,   237,    19,  1019,    32,    33,    34,
      35,    36,    37,    38,  1132,   237,   193,   162,    32,    33,
      34,    35,    36,    37,    38,  1091,  1092,  1093,  1094,  1095,
    1096,  1097,  1098,  1099,   171,   172,   237,   837,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    34,
      35,    36,    37,    38,   665,   237,    24,    24,   238,   670,
      24,   143,  1174,   143,    85,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     701,    77,   238,   109,   886,    40,    68,    69,    34,    35,
      36,    37,    38,    77,   896,   146,   919,     3,   238,   238,
     923,     3,   886,    41,   193,    87,    41,     4,    40,    40,
     238,    41,   896,    41,   176,    97,   197,   919,   238,   201,
     102,   923,    40,    17,   238,   136,   237,   237,   749,   922,
     204,    30,   237,   105,   237,     5,   237,   119,   237,     4,
     237,   762,     4,   896,   237,    24,   220,   129,    32,    33,
      34,    35,    36,    37,    38,   975,   976,   977,   978,    41,
     237,    24,   237,    14,   237,    49,   237,   237,   237,   989,
     237,    14,    14,   149,   131,    41,   158,    32,    33,    34,
      35,    36,    37,    38,   238,    41,  1009,  1010,   170,    41,
       5,    24,   813,    40,    49,    41,    40,    38,  1001,  1001,
      40,     3,   152,    40,    40,   130,   130,  1009,  1010,   130,
    1012,    49,   194,  1223,   130,     5,    65,  1019,    82,    54,
       4,   295,   843,   297,     4,   193,   133,    40,  1012,    41,
      41,    70,   306,   105,   308,  1019,     5,   237,     5,     5,
     314,    43,     5,  1063,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,   328,    32,    33,    34,    35,    36,
      37,    38,   237,   130,   237,   886,  1089,     5,     4,   169,
     344,   345,   346,   347,   348,   105,   105,   238,    54,    54,
      54,    40,   209,    40,    86,    87,   120,  1089,    38,    41,
      41,    79,    41,   237,   368,    48,   105,    24,   130,   126,
     226,   922,   376,    10,    10,    24,   380,  1109,   382,  1129,
      40,   121,   114,    77,     5,   117,   238,   237,  1120,   126,
     237,     3,     4,     5,     6,  1109,     8,     9,    10,   237,
      12,    13,    14,   105,   126,    24,  1120,    10,    20,  1141,
     133,     4,     4,     4,  1167,     4,   238,     5,   150,     5,
      32,    33,    34,   179,     5,     5,  1109,  1141,    40,    41,
       8,    42,   983,    41,   237,  1167,   168,   238,   442,   171,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,   126,   185,   186,   105,    68,   237,   105,   237,
      24,    24,     5,   238,    76,    49,    49,    79,  1019,     4,
      42,   225,   204,    24,    41,     5,   208,   202,   742,   237,
    1212,   749,   237,    29,   919,   217,   490,  1211,   100,   603,
     494,   223,  1009,   639,   129,   804,   808,   109,  1212,   139,
    1117,   210,   480,   895,   236,  1018,   787,  1239,  1141,   702,
     514,   446,   516,   517,  1065,   135,   520,  1249,   439,   191,
    1071,   469,   134,    24,   272,  1239,   679,   644,   266,  1212,
     632,   384,   870,   537,   538,  1249,   540,   541,   542,   543,
     544,   545,   546,   547,  1073,  1073,   307,   551,   552,   553,
     554,   555,   556,   557,   840,    -1,  1239,   402,    -1,    -1,
     172,    -1,   592,    -1,    -1,    -1,  1249,    -1,    -1,  1120,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   191,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1141,    -1,    -1,    -1,    -1,    -1,    -1,   601,    -1,    -1,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   629,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1184,  1185,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,   658,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1217,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,    -1,
      -1,    -1,    -1,    80,   708,    -1,    -1,    -1,   712,    -1,
      -1,    88,    -1,    -1,    -1,    92,    93,   721,    95,   723,
      70,   725,    -1,    -1,   101,   729,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   111,   739,    -1,   741,    -1,     3,
       4,     5,     6,   747,     8,     9,    10,    -1,    12,    13,
      14,   128,    -1,    -1,    -1,    -1,    20,    -1,   762,    -1,
      -1,    -1,    -1,   140,    -1,   142,    -1,   144,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,   156,
      -1,    -1,    -1,   787,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,
      -1,   188,   189,   190,    -1,    79,    -1,    -1,    -1,    -1,
      -1,   198,   199,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   839,   100,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   238,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,   911,   172,   913,
      -1,   915,    -1,    -1,    -1,    -1,    -1,   921,    -1,    -1,
     924,    -1,    -1,    -1,   928,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    -1,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,  1013,
      40,    41,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,  1037,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,    79,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1070,    -1,    -1,    -1,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    40,   109,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    -1,    -1,    -1,  1108,    -1,    -1,    -1,   201,    -1,
      -1,    -1,  1116,  1117,     3,    -1,    -1,    79,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,    -1,   172,     3,     4,     5,     6,   109,     8,     9,
      10,    40,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1174,  1175,    32,    33,    -1,   113,    -1,    -1,    -1,    -1,
      40,   187,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,    -1,    -1,    -1,
     172,     3,     4,     5,     6,     7,     8,     9,    10,    79,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,   109,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,    -1,    -1,    -1,    -1,    -1,
      -1,   170,    -1,     3,    -1,    -1,    -1,    79,   187,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
     170,    -1,   172,    -1,    -1,    -1,    -1,   109,    -1,    -1,
      -1,    41,    -1,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,    -1,    -1,
      70,    -1,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,    -1,    -1,    -1,
     172,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,    79,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    40,   109,    -1,    -1,
      -1,   113,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,     3,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    -1,
     172,     3,     4,     5,     6,   109,     8,     9,    10,   113,
      12,    13,    14,    40,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,    -1,    -1,    -1,   172,     3,
       4,     5,     6,    -1,     8,     9,    10,    79,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    40,   109,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   170,    -1,    79,   187,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    -1,
     172,    -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,   113,
      -1,    -1,    -1,    -1,    -1,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,     3,    -1,    -1,   172,    -1,
      -1,    -1,    -1,    -1,    -1,    13,    14,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,     3,     4,     5,     6,    40,     8,     9,
      10,    -1,    12,    13,    14,    -1,   187,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,     3,     4,     5,     6,
      40,     8,     9,    10,   113,    12,    13,    14,    -1,   117,
     118,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
     103,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    -1,   151,    -1,    -1,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,   171,   172,   173,    -1,    -1,    -1,   109,
      -1,     3,    79,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,   109,    -1,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,    -1,
       3,    -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,    70,   172,    -1,     3,    -1,    -1,
      -1,    -1,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,    70,    34,     3,
      -1,    -1,    -1,    -1,    -1,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,     3,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,     3,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,   154,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,    -1,    -1,    -1,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,    -1,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,    40,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    48,    49,    50,    -1,
      -1,    -1,    -1,    -1,    40,    57,    58,    59,    44,    -1,
      -1,    -1,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    59,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   126,    -1,   112,   129,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,
     126,    -1,    -1,   129,    53,    -1,    -1,    -1,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,    -1,
      69,    -1,    -1,    72,    -1,    -1,    -1,    -1,   170,    -1,
      -1,   173,   158,    -1,    83,    -1,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,   170,    94,    -1,   173,    97,    98,
      99,    -1,   194,   102,    -1,    -1,    -1,    -1,    -1,   108,
      -1,   110,    -1,    -1,    73,    74,    75,    -1,   194,    -1,
     119,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
     129,    -1,    -1,    92,    93,    -1,    95,    -1,    -1,    -1,
     139,    -1,   101,    -1,    -1,   237,    -1,    -1,    -1,    -1,
      -1,    -1,   111,    -1,   153,    -1,    -1,    -1,   157,   158,
      -1,   237,   161,    -1,   163,   164,    -1,    -1,    -1,   128,
      -1,   170,    -1,    -1,   173,   174,    -1,    -1,    -1,   178,
      -1,   140,    -1,   142,    -1,   144,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   194,    -1,   156,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   188,
     189,   190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   198,
     199,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    71,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,    -1,
      -1,    -1,    98,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    41,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    -1,
      41
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    40,    44,    53,    57,    58,    59,    69,    72,    83,
      87,    94,    97,    98,    99,   102,   108,   110,   119,   129,
     139,   153,   157,   158,   161,   163,   164,   170,   173,   174,
     178,   194,   240,   241,   242,   261,   262,   265,   271,   273,
     274,   282,   283,   284,   285,   287,   288,   289,   290,   306,
     309,   312,   314,   319,   320,   321,   322,   323,   325,   356,
     359,   360,   367,   372,   374,   376,   379,   383,   384,   385,
     386,   389,   394,   396,   399,   407,   410,   411,   412,   418,
     431,   432,   456,   457,   458,   320,   321,     3,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   272,   429,   430,     3,   272,   272,   272,
     180,   185,   195,   203,   381,   381,    43,   185,   195,   208,
     113,     3,   352,   427,   430,   352,    43,   185,   195,   208,
     397,   429,   235,   358,    68,    69,    87,    97,   102,   119,
     129,   158,   170,   194,   390,   391,   185,   397,   195,   390,
     381,   117,   387,   122,   328,     3,    13,    14,   117,   118,
     151,   171,   172,   173,   255,   400,   401,   426,   430,     3,
      43,    86,    87,   114,   117,   150,   168,   171,   185,   186,
     208,   217,   223,   236,   256,   363,   366,   428,   192,   328,
       0,   106,   237,   130,   201,   313,    15,    16,    17,   147,
     341,   342,   112,   338,   153,    72,   435,    41,    41,    56,
      40,    60,    61,    62,    63,    64,   113,   286,   116,   173,
     182,   183,   419,   352,     4,   370,     3,   126,   291,   368,
     369,   370,   291,   352,     4,   365,   365,     3,   126,   126,
     307,   370,   373,   307,   196,   408,   261,   262,   312,   319,
     357,   160,   392,   195,   148,   146,   238,   352,   113,   370,
     377,   378,   146,   395,   205,   206,   388,     3,    40,   124,
     131,   132,   155,   165,   166,   167,   208,   329,   330,   331,
      68,   100,   347,    24,   193,   403,    40,   403,   426,    42,
     112,   375,   426,    42,    14,   402,   403,   238,   403,     3,
      30,   113,   185,    28,   200,   364,   227,   364,   146,   112,
     362,   375,   227,   136,   361,   236,   234,   204,    40,   202,
     382,   352,   242,   352,     3,     4,     5,     6,     8,     9,
      10,    12,    13,    14,    20,    32,    33,    40,    79,   109,
     172,   222,   244,   245,   246,   248,   250,   255,   256,   257,
     258,   320,   426,   427,   430,   347,   347,   347,    77,   136,
     145,   327,   338,   194,   397,    44,    48,    49,    50,    58,
      79,   112,   126,   170,   173,   237,   261,   262,   271,   273,
     275,   276,   277,   278,   279,   280,   281,   289,   312,   319,
     324,   436,   437,   438,   442,   443,   444,   448,   452,   453,
     454,   455,   112,    41,   243,   248,     5,     5,    65,   420,
     421,   426,   143,   184,    90,    91,    66,    69,   102,   157,
     413,   414,   125,   138,   231,   380,    40,    20,   352,   238,
     125,   352,   200,   326,   109,   109,    40,   308,   320,   351,
     352,   353,   238,   310,   352,    14,   255,   404,   409,    34,
     393,   427,   391,   261,   262,   312,   319,   398,   193,   238,
     393,   113,     5,    40,   332,    40,    40,    40,    40,   123,
     238,   331,    34,   248,   348,   349,   248,     5,    14,   248,
     403,   426,   370,    24,   403,   426,   403,   248,   401,   248,
     352,   352,   352,     4,   248,   364,   352,    89,   364,     5,
     364,    34,    41,    68,    76,   100,   134,   191,   243,   248,
     260,   339,    84,   173,    40,   315,   319,   248,   248,   248,
     243,   248,   320,   248,   251,   320,    42,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    40,    42,
     170,   320,   323,   325,   323,   323,   248,   343,   344,     5,
      12,   336,   336,   338,   409,   248,   261,   262,   271,   273,
     275,   276,   277,   278,   279,   280,   281,   289,   312,   319,
     324,   439,   440,   441,   443,   444,   448,   452,   453,   454,
     455,   201,   237,   272,   248,    14,   248,   328,   400,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   105,   438,   319,   328,    41,   238,
     193,     5,   238,    24,    24,    24,   143,   143,    85,   415,
     415,   415,   193,   415,   238,    77,    14,    30,    41,    46,
      47,   433,   434,   109,    40,   369,    77,   146,     7,   248,
     313,     3,   320,   351,   353,   238,    70,   427,   114,   127,
     131,   135,   162,   354,    70,   427,   370,   146,   238,   238,
     193,   370,   377,   373,     3,    41,   238,   210,   211,   333,
     334,   352,   115,   179,   181,   207,   335,   352,   330,    70,
     429,   113,   238,   327,   337,    41,    41,   248,   403,     4,
     371,   248,   403,    40,   405,   364,   364,   364,    40,   238,
      41,   113,   248,   113,   248,   113,   248,    41,    70,   113,
     248,    41,   176,   263,   264,   426,   316,   426,   197,   238,
      41,   201,   252,   253,   426,   248,   248,    28,    29,    30,
     248,   248,   248,   248,   248,   248,   248,   248,    32,    33,
     246,   247,    40,   249,   320,     8,    10,    11,    20,   248,
     248,   248,   248,   248,   248,   248,   259,   261,   262,   312,
     319,    34,   426,   328,    71,    98,   345,   238,   145,   238,
     136,    73,    74,    75,    80,    88,    92,    93,    95,   101,
     111,   128,   140,   142,   144,   156,   175,   188,   189,   190,
     198,   199,   295,    52,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   105,
     441,   248,    60,    61,    62,    63,    64,   130,   286,   201,
     449,   450,    30,   187,   349,   237,   328,   248,     5,   421,
      14,   245,     4,     4,    24,    24,   294,   426,   426,   426,
     352,   426,   157,   414,   371,   295,    14,    14,    14,    41,
     238,   154,   292,   293,   294,   371,   352,   248,    41,   351,
     427,   149,   355,   351,   355,   355,   131,   427,   311,   352,
     352,   404,   373,    41,    41,   238,   238,    41,   352,   429,
     103,   350,   351,   348,   248,   248,   245,   406,    41,     5,
     248,   113,   248,   113,   248,   113,   295,   248,    41,   238,
     326,    24,    41,   238,    40,   317,   248,   248,   104,   253,
     254,   248,   247,   249,   247,   247,    19,    32,    33,    34,
      35,    36,    37,    38,   243,     8,    10,    11,    41,   347,
     344,   336,   336,   336,    40,   300,   300,    40,   296,   152,
     298,    40,   297,   296,    40,   299,   299,   300,   300,    54,
      96,   237,   439,    49,   237,   130,   130,   130,   130,     5,
     409,    65,   248,   104,   450,   451,    55,   247,   439,   130,
      82,   422,     4,     4,   295,   102,   173,   417,    78,   159,
     416,   193,    54,   295,   295,   295,   434,   133,    41,   238,
      40,   266,    70,   146,   351,   334,   352,    41,   326,   238,
     326,    41,   238,   248,   248,   248,    41,   264,   313,   248,
     319,   426,   248,   318,   238,   313,    41,   187,   248,   105,
      19,   247,   247,   247,   247,   247,   247,   247,   247,    41,
     349,     5,     5,     5,     5,   237,   245,   105,   237,   409,
     409,   409,   409,   130,     5,   187,   439,   105,   247,   193,
      45,   104,   105,   445,   446,   447,   409,     4,   169,   423,
     301,    20,    96,    20,    96,   429,    54,    54,    54,    40,
      82,   214,   215,   216,   218,   220,   228,   229,   230,   233,
     303,   304,   293,   316,   209,   267,   427,   248,   146,   238,
     337,   351,   120,   340,   245,    41,   238,    40,   248,   247,
     113,    41,    41,   238,    41,    41,   237,    48,   409,   130,
     439,    79,   193,   247,   248,   439,   126,   105,   446,   447,
     105,   113,    24,   226,    10,    20,    96,   154,   212,   302,
      10,    10,   245,   316,    24,   305,   305,   305,   305,   305,
     305,   305,   305,   305,   305,   238,    41,    40,   268,   269,
     270,   304,   248,   352,    77,   121,   346,   248,   318,     5,
     237,   409,   237,   247,    49,   187,   237,   126,   105,   126,
     350,    76,   141,   177,    24,    10,   245,   133,    41,     4,
       4,   179,     4,     4,     5,     5,     5,     5,     8,   304,
     316,   238,    42,   243,   248,    41,    41,    49,   439,   439,
     237,   126,   237,   326,   213,   219,   221,   232,   424,    41,
     270,   352,   439,   105,   237,   338,    81,   224,   425,   238,
     105,    49,    24,    24,   352,    49,   237,     5,     4,    42,
     237,   225,   352,    24,    41,     5
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (&yylloc, result, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
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
      case 3: /* "NAME" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 4: /* "STRING" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 5: /* "INTNUM" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 6: /* "DATE_VALUE" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 7: /* "HINT_VALUE" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 8: /* "BOOL" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 9: /* "APPROXNUM" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 10: /* "NULLX" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 11: /* "UNKNOWN" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 12: /* "QUESTIONMARK" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 13: /* "SYSTEM_VARIABLE" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 14: /* "TEMP_VARIABLE" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 240: /* "sql_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 241: /* "stmt_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 242: /* "stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 243: /* "expr_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 244: /* "column_ref" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 245: /* "expr_const" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 246: /* "simple_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 247: /* "arith_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 248: /* "expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 249: /* "in_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 250: /* "case_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 251: /* "case_arg" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 252: /* "when_clause_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 253: /* "when_clause" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 254: /* "case_default" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 255: /* "array_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 256: /* "func_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 257: /* "when_func" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 258: /* "when_func_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 259: /* "when_func_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 260: /* "distinct_or_all" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 261: /* "delete_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 262: /* "update_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 263: /* "update_asgn_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 264: /* "update_asgn_factor" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 265: /* "create_index_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 266: /* "opt_index_columns" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 267: /* "opt_storing" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 268: /* "opt_storing_columns" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 269: /* "opt_index_option_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 270: /* "index_option" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 271: /* "cursor_declare_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 272: /* "cursor_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 273: /* "cursor_open_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 274: /* "cursor_fetch_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 275: /* "cursor_fetch_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 276: /* "cursor_fetch_next_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 277: /* "cursor_fetch_first_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 278: /* "cursor_fetch_prior_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 279: /* "cursor_fetch_last_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 280: /* "cursor_fetch_absolute_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 281: /* "cursor_fetch_relative_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 282: /* "fetch_prior_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 283: /* "fetch_first_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 284: /* "fetch_last_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 285: /* "fetch_relative_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 286: /* "next_or_prior" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 287: /* "fetch_absolute_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 288: /* "fetch_fromto_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 289: /* "cursor_close_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 290: /* "create_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 291: /* "opt_if_not_exists" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 292: /* "table_element_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 293: /* "table_element" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 294: /* "column_definition" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 295: /* "data_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 296: /* "opt_decimal" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 297: /* "opt_float" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 298: /* "opt_precision" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 299: /* "opt_time_precision" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 300: /* "opt_char_length" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 301: /* "opt_column_attribute_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 302: /* "column_attribute" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 303: /* "opt_table_option_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 304: /* "table_option" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 305: /* "opt_equal_mark" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 306: /* "drop_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 307: /* "opt_if_exists" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 308: /* "table_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 309: /* "drop_index_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 310: /* "index_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 311: /* "table_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 312: /* "insert_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 313: /* "opt_when" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 314: /* "replace_or_insert" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 315: /* "opt_insert_columns" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 316: /* "column_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 317: /* "insert_vals_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 318: /* "insert_vals" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 319: /* "select_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 320: /* "select_with_parens" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 321: /* "select_no_parens" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 322: /* "no_table_select" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 323: /* "select_clause" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 324: /* "select_into_clause" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 325: /* "simple_select" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 326: /* "opt_where" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 327: /* "select_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 328: /* "opt_hint" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 329: /* "opt_hint_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 330: /* "hint_options" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 331: /* "hint_option" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 332: /* "opt_comma_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 333: /* "join_op_type_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 334: /* "join_op_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 336: /* "limit_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 337: /* "opt_select_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 338: /* "opt_for_update" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 339: /* "parameterized_trim" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 340: /* "opt_groupby" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 341: /* "opt_order_by" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 342: /* "order_by" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 343: /* "sort_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 344: /* "sort_key" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 345: /* "opt_asc_desc" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 346: /* "opt_having" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 347: /* "opt_distinct" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 348: /* "projection" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 349: /* "select_expr_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 350: /* "from_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 351: /* "table_factor" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 352: /* "relation_factor" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 353: /* "joined_table" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 354: /* "join_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 355: /* "join_outer" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 356: /* "explain_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 357: /* "explainable_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 358: /* "opt_verbose" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 359: /* "show_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 360: /* "lock_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 361: /* "opt_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 362: /* "opt_for_grant_user" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 364: /* "opt_show_condition" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 365: /* "opt_like_condition" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 367: /* "create_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 368: /* "user_specification_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 369: /* "user_specification" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 370: /* "user" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 371: /* "password" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 372: /* "drop_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 373: /* "user_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 374: /* "set_password_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 375: /* "opt_for_user" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 376: /* "rename_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 377: /* "rename_info" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 378: /* "rename_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 379: /* "lock_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 380: /* "lock_spec" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 381: /* "opt_work" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 383: /* "begin_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 384: /* "commit_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 385: /* "rollback_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 386: /* "kill_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 387: /* "opt_is_global" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 388: /* "opt_flag" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 389: /* "grant_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 390: /* "priv_type_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 391: /* "priv_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 392: /* "opt_privilege" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 393: /* "priv_level" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 394: /* "revoke_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 395: /* "opt_on_priv_level" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 396: /* "prepare_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 397: /* "stmt_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 398: /* "preparable_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 399: /* "variable_set_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 400: /* "var_and_val_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 401: /* "var_and_val" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 402: /* "var_and_array_val" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 403: /* "to_or_eq" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 404: /* "argument" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 405: /* "array_vals_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 406: /* "array_val_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 407: /* "execute_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 408: /* "opt_using_args" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 409: /* "argument_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 410: /* "deallocate_prepare_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 411: /* "deallocate_or_drop" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 412: /* "alter_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 413: /* "alter_column_actions" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 414: /* "alter_column_action" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 415: /* "opt_column" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 417: /* "alter_column_behavior" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 418: /* "alter_system_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 419: /* "opt_force" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 420: /* "alter_system_actions" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 421: /* "alter_system_action" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 422: /* "opt_comment" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 424: /* "server_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 425: /* "opt_cluster_or_address" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 426: /* "column_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 427: /* "relation_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 428: /* "function_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 429: /* "column_label" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 431: /* "create_procedure_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 432: /* "proc_decl" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 433: /* "proc_parameter_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 434: /* "proc_parameter" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 435: /* "proc_block" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 436: /* "proc_sect" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 437: /* "proc_stmts" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 438: /* "proc_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 439: /* "control_sect" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 440: /* "control_stmts" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 441: /* "control_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 442: /* "stmt_declare" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 443: /* "stmt_assign" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 444: /* "stmt_if" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 445: /* "stmt_elsifs" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 446: /* "stmt_elsif" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 447: /* "stmt_else" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 448: /* "stmt_case" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 449: /* "case_when_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 450: /* "case_when" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 451: /* "case_else" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 452: /* "stmt_loop" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 453: /* "stmt_while" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 454: /* "stmt_null" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 455: /* "stmt_exit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 456: /* "exec_procedure_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 457: /* "drop_procedure_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 458: /* "show_procedure_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
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





/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
    YYLTYPE yyerror_range[2];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

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
  if (yyn == YYPACT_NINF)
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;
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
    ;}
    break;

  case 3:

    {
      if ((yyvsp[(3) - (3)].node) != NULL)
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      else
        (yyval.node) = (yyvsp[(1) - (3)].node);
    ;}
    break;

  case 4:

    {
      (yyval.node) = ((yyvsp[(1) - (1)].node) != NULL) ? (yyvsp[(1) - (1)].node) : NULL;
    ;}
    break;

  case 5:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 6:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 7:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 8:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 9:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 10:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 11:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 12:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 13:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 14:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 15:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 16:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 17:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 18:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 19:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 20:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 21:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 22:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 23:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 24:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 25:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 26:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 27:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 28:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 29:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 30:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 31:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 32:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 33:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 34:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 35:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 36:

    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 37:

    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 38:

    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 39:

    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 40:

    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 41:

    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 42:

    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 43:

    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 44:

    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 45:

    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 46:

    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 47:

    { (yyval.node) = NULL; ;}
    break;

  case 48:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 49:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 50:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 51:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NAME_FIELD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(3) - (3)]).first_column, (yylsp[(3) - (3)]).last_column);
    ;}
    break;

  case 52:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_STAR);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NAME_FIELD, 2, (yyvsp[(1) - (3)].node), node);
    ;}
    break;

  case 53:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 54:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 55:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 56:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 57:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 58:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 59:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 60:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 61:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 62:

    { (yyvsp[(3) - (3)].node)->type_ = T_SYSTEM_VARIABLE; (yyval.node) = (yyvsp[(3) - (3)].node); ;}
    break;

  case 63:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 64:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 65:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 66:

    {
      ParseNode *node = NULL;
      malloc_non_terminal_node(node, result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node));
      merge_nodes((yyval.node), result->malloc_pool_, T_EXPR_LIST, node);
    ;}
    break;

  case 67:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
      /*
      yyerror(&@1, result, "CASE expression is not supported yet!");
      YYABORT;
      */
    ;}
    break;

  case 68:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 69:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 70:

    {
    	(yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 71:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_EXISTS, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 72:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 73:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 74:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_POS, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 75:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NEG, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 76:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_ADD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 77:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MINUS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 78:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MUL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 79:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_DIV, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 80:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_REM, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 81:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_POW, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 82:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MOD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 83:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 84:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_POS, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 85:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NEG, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 86:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_ADD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 87:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MINUS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 88:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MUL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 89:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_DIV, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 90:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_REM, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 91:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_POW, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 92:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MOD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 93:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 94:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LT, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 95:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_EQ, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 96:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_GE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 97:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_GT, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 98:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 99:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 100:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NOT_LIKE, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 101:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_AND, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 102:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_OR, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 103:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NOT, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 104:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 105:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS_NOT, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 106:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 107:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS_NOT, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 108:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 109:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS_NOT, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 110:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_BTW, 3, (yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 111:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NOT_BTW, 3, (yyvsp[(1) - (6)].node), (yyvsp[(4) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 112:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IN, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 113:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NOT_IN, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 114:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_CNN, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 115:

    {
    	(yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 116:

    { merge_nodes((yyval.node), result->malloc_pool_, T_EXPR_LIST, (yyvsp[(2) - (3)].node)); ;}
    break;

  case 117:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_WHEN_LIST, (yyvsp[(3) - (5)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CASE, 3, (yyvsp[(2) - (5)].node), (yyval.node), (yyvsp[(4) - (5)].node));
    ;}
    break;

  case 118:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 119:

    { (yyval.node) = NULL; ;}
    break;

  case 120:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 121:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 122:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_WHEN, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 123:

    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 124:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_NULL); ;}
    break;

  case 125:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ARRAY, 2, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));
    ;}
    break;

  case 126:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ARRAY, 2, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));
    ;}
    break;

  case 127:

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
    ;}
    break;

  case 128:

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
    ;}
    break;

  case 129:

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
    ;}
    break;

  case 130:

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
    ;}
    break;

  case 131:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_FUN_SYS, 2, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));
    ;}
    break;

  case 132:

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
    ;}
    break;

  case 133:

    {
      (yyval.node) = (yyvsp[(1) - (4)].node);
      (yyval.node)->children_[0] = (yyvsp[(3) - (4)].node);
    ;}
    break;

  case 134:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ROW_COUNT, 1, NULL);
    ;}
    break;

  case 139:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_ALL);
    ;}
    break;

  case 140:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_DISTINCT);
    ;}
    break;

  case 141:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_DELETE, 3, (yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 142:

    {
      ParseNode* assign_list = NULL;
      merge_nodes(assign_list, result->malloc_pool_, T_ASSIGN_LIST, (yyvsp[(5) - (7)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_UPDATE, 5, (yyvsp[(3) - (7)].node), assign_list, (yyvsp[(6) - (7)].node), (yyvsp[(7) - (7)].node), (yyvsp[(2) - (7)].node));
    ;}
    break;

  case 143:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 144:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 145:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ASSIGN_ITEM, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 146:

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
	;}
    break;

  case 147:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_COLUMN_LIST, (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 148:

    {
  		(yyval.node)=(yyvsp[(2) - (2)].node);
  	;}
    break;

  case 149:

    {
  		(yyval.node)=NULL;
  	;}
    break;

  case 150:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_COLUMN_LIST, (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 151:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 152:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 153:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 154:

    {
		(yyval.node) = (yyvsp[(1) - (1)].node);
	;}
    break;

  case 155:

    {					 
       malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_DECLARE, 2,
                                        (yyvsp[(2) - (5)].node),		/*cursor name*/
                                        (yyvsp[(5) - (5)].node)		/*result from select_stmt*/
					             ); 
	 ;}
    break;

  case 156:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 157:

    {
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_OPEN, 1,
            (yyvsp[(2) - (2)].node)     /* cursor_name*/
                                    );
            ;}
    break;

  case 158:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH, 1,
                   (yyvsp[(2) - (2)].node)     /* cursor_name*/
                                       );
            ;}
    break;

  case 159:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH, 1,
                   (yyvsp[(2) - (3)].node)     /* cursor_name*/
                                       );
            ;}
    break;

  case 160:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH, 1, (yyvsp[(2) - (4)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(4) - (4)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_INTO, 2, fetch, args);
            ;}
    break;

  case 161:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH_NEXT, 1, (yyvsp[(2) - (5)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(5) - (5)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_NEXT_INTO, 2, fetch, args);
            ;}
    break;

  case 162:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH_FIRST, 1, (yyvsp[(2) - (5)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(5) - (5)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_FIRST_INTO, 2, fetch, args);
            ;}
    break;

  case 163:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH_PRIOR, 1, (yyvsp[(2) - (5)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(5) - (5)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_PRIOR_INTO, 2, fetch, args);
            ;}
    break;

  case 164:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH_LAST, 1, (yyvsp[(2) - (5)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(5) - (5)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_LAST_INTO, 2, fetch, args);
            ;}
    break;

  case 165:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH_ABSOLUTE, 2, (yyvsp[(2) - (6)].node), (yyvsp[(4) - (6)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(6) - (6)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_ABS_INTO, 2, fetch, args);
            ;}
    break;

  case 166:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH_RELATIVE, 3, (yyvsp[(2) - (7)].node), (yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(7) - (7)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_RELATIVE_INTO, 2, fetch, args);
            ;}
    break;

  case 167:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_PRIOR, 1,
                   (yyvsp[(2) - (3)].node)     /* cursor_name*/
                    
                    
                    
                                       );
            ;}
    break;

  case 168:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_FIRST, 1,
                   (yyvsp[(2) - (3)].node)     /* cursor_name*/
                                       );
            ;}
    break;

  case 169:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_LAST, 1,
                   (yyvsp[(2) - (3)].node)     /* cursor_name*/
                                       );
            ;}
    break;

  case 170:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_RELATIVE, 3,
                   (yyvsp[(2) - (5)].node),     /* cursor_name*/
                   (yyvsp[(3) - (5)].node),                  
                   (yyvsp[(5) - (5)].node)                  
                                       );
            ;}
    break;

  case 171:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 172:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 173:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_ABSOLUTE, 2,
                   (yyvsp[(2) - (4)].node),     /* cursor_name*/
                   (yyvsp[(4) - (4)].node)
                                       );
            ;}
    break;

  case 174:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_FROMTO, 3,
                   (yyvsp[(2) - (6)].node),     /* cursor_name*/
                   (yyvsp[(4) - (6)].node),
                   (yyvsp[(6) - (6)].node)
                                       );
            ;}
    break;

  case 175:

    {
             malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_CLOSE, 1,
                   (yyvsp[(2) - (2)].node)     /* cursor_name*/
                                      );
             ;}
    break;

  case 176:

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
    ;}
    break;

  case 177:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_IF_NOT_EXISTS); ;}
    break;

  case 178:

    { (yyval.node) = NULL; ;}
    break;

  case 179:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 180:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 181:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 182:

    {
      ParseNode* col_list= NULL;
      merge_nodes(col_list, result->malloc_pool_, T_COLUMN_LIST, (yyvsp[(4) - (5)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PRIMARY_KEY, 1, col_list);
    ;}
    break;

  case 183:

    {
      ParseNode *attributes = NULL;
      merge_nodes(attributes, result->malloc_pool_, T_COLUMN_ATTRIBUTES, (yyvsp[(3) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_DEFINITION, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), attributes);
    ;}
    break;

  case 184:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER ); ;}
    break;

  case 185:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER); ;}
    break;

  case 186:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER); ;}
    break;

  case 187:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER); ;}
    break;

  case 188:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER); ;}
    break;

  case 189:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DECIMAL);
      else
        merge_nodes((yyval.node), result->malloc_pool_, T_TYPE_DECIMAL, (yyvsp[(2) - (2)].node));
      yyerror(&(yylsp[(1) - (2)]), result, "DECIMAL type is not supported");
      YYABORT;
    ;}
    break;

  case 190:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DECIMAL);
      else
        merge_nodes((yyval.node), result->malloc_pool_, T_TYPE_DECIMAL, (yyvsp[(2) - (2)].node));
      yyerror(&(yylsp[(1) - (2)]), result, "NUMERIC type is not supported");
      YYABORT;
    ;}
    break;

  case 191:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_BOOLEAN ); ;}
    break;

  case 192:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_FLOAT, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 193:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DOUBLE); ;}
    break;

  case 194:

    {
      (void)((yyvsp[(2) - (2)].node)) ; /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DOUBLE);
    ;}
    break;

  case 195:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIMESTAMP);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIMESTAMP, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 196:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIMESTAMP); ;}
    break;

  case 197:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CHARACTER);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CHARACTER, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 198:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CHARACTER);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CHARACTER, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 199:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_VARCHAR);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_VARCHAR, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 200:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_VARCHAR);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_VARCHAR, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 201:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CREATETIME); ;}
    break;

  case 202:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_MODIFYTIME); ;}
    break;

  case 203:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DATE);
      yyerror(&(yylsp[(1) - (1)]), result, "DATE type is not supported");
      YYABORT;
    ;}
    break;

  case 204:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIME);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIME, 1, (yyvsp[(2) - (2)].node));
      yyerror(&(yylsp[(1) - (2)]), result, "TIME type is not supported");
      YYABORT;
    ;}
    break;

  case 205:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node)); ;}
    break;

  case 206:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 207:

    { (yyval.node) = NULL; ;}
    break;

  case 208:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 209:

    { (yyval.node) = NULL; ;}
    break;

  case 210:

    { (yyval.node) = NULL; ;}
    break;

  case 211:

    { (yyval.node) = NULL; ;}
    break;

  case 212:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 213:

    { (yyval.node) = NULL; ;}
    break;

  case 214:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 215:

    { (yyval.node) = NULL; ;}
    break;

  case 216:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 217:

    { (yyval.node) = NULL; ;}
    break;

  case 218:

    {
      (void)((yyvsp[(2) - (2)].node)) ; /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NOT_NULL);
    ;}
    break;

  case 219:

    {
      (void)((yyvsp[(1) - (1)].node)) ; /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NULL);
    ;}
    break;

  case 220:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 221:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_AUTO_INCREMENT); ;}
    break;

  case 222:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_PRIMARY_KEY); ;}
    break;

  case 223:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 224:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 225:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 226:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_INFO, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 227:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPIRE_INFO, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 228:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLET_MAX_SIZE, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 229:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLET_BLOCK_SIZE, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 230:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLET_ID, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 231:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_REPLICA_NUM, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 232:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COMPRESS_METHOD, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 233:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_USE_BLOOM_FILTER, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 234:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSISTENT_MODE);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 235:

    {
      (void)((yyvsp[(2) - (3)].node)); /*  make bison mute*/
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COMMENT, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 236:

    { (yyval.node) = NULL; ;}
    break;

  case 237:

    { (yyval.node) = NULL; ;}
    break;

  case 238:

    {
      ParseNode *tables = NULL;
      merge_nodes(tables, result->malloc_pool_, T_TABLE_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_DROP_TABLE, 2, (yyvsp[(3) - (4)].node), tables);
    ;}
    break;

  case 239:

    { (yyval.node) = NULL; ;}
    break;

  case 240:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_IF_EXISTS); ;}
    break;

  case 241:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 242:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 243:

    {
      ParseNode *indexs = NULL;
      merge_nodes(indexs, result->malloc_pool_, T_INDEX_LIST, (yyvsp[(4) - (6)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_DROP_INDEX, 3, (yyvsp[(3) - (6)].node), indexs, (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 244:

    { (yyval.node) = NULL; ;}
    break;

  case 245:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 246:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 247:

    {
	  (yyval.node) = (yyvsp[(1) - (1)].node);
	;}
    break;

  case 248:

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
    ;}
    break;

  case 249:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_INSERT, 6,
                              (yyvsp[(3) - (4)].node),           /* target relation */
                              NULL,         /* column list */
                              NULL,         /* value list */
                              (yyvsp[(4) - (4)].node),           /* value from sub-query */
                              (yyvsp[(1) - (4)].node),           /* is replacement */
                              NULL          /* when expression */
                              );
    ;}
    break;

  case 250:

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
    ;}
    break;

  case 251:

    { (yyval.node) = NULL; ;}
    break;

  case 252:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 253:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 254:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 255:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_COLUMN_LIST, (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 256:

    { (yyval.node) = NULL; ;}
    break;

  case 257:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 258:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 259:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_VALUE_VECTOR, (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 260:

    {
    merge_nodes((yyvsp[(4) - (5)].node), result->malloc_pool_, T_VALUE_VECTOR, (yyvsp[(4) - (5)].node));
    malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (5)].node), (yyvsp[(4) - (5)].node));
  ;}
    break;

  case 261:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 262:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 263:

    {
      (yyval.node) = (yyvsp[(1) - (2)].node);
      (yyval.node)->children_[14] = (yyvsp[(2) - (2)].node);
      if ((yyval.node)->children_[12] == NULL && (yyvsp[(2) - (2)].node) != NULL)
      {
        malloc_terminal_node((yyval.node)->children_[12], result->malloc_pool_, T_BOOL);
        (yyval.node)->children_[12]->value_ = 1;
      }
    ;}
    break;

  case 264:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 265:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 266:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 267:

    {
      (yyval.node)= (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 268:

    {
      (yyval.node) = (yyvsp[(1) - (2)].node);
      (yyval.node)->children_[12] = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 269:

    {
      /* use the new order by to replace old one */
      ParseNode* select = (ParseNode*)(yyvsp[(1) - (3)].node);
      if (select->children_[10])
        destroy_tree(select->children_[10]);
      select->children_[10] = (yyvsp[(2) - (3)].node);
      select->children_[12] = (yyvsp[(3) - (3)].node);
      (yyval.node) = select;
    ;}
    break;

  case 270:

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
    ;}
    break;

  case 271:

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
    ;}
    break;

  case 272:

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
    ;}
    break;

  case 273:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 274:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 275:

    {
						  ParseNode* project_list = NULL;
						  ParseNode* from_list = NULL;
						  ParseNode* select = NULL;
						  ParseNode* args = NULL;
              merge_nodes(project_list, result->malloc_pool_, T_PROJECT_LIST, (yyvsp[(3) - (9)].node));
              merge_nodes(from_list, result->malloc_pool_, T_FROM_LIST, (yyvsp[(7) - (9)].node));
						  malloc_non_terminal_node(select, result->malloc_pool_, T_SELECT, 16,
                              NULL,           /* 1. distinct */
                              project_list,   /* 2. select clause */
                              from_list,      /* 3. from clause */
                              (yyvsp[(8) - (9)].node),             /* 4. where */
                              NULL,           /* 5. group by */
                              NULL,           /* 6. having */
                              NULL,           /* 7. set operation */
                              NULL,           /* 8. all specified? */
                              NULL,           /* 9. former select stmt */
                              NULL,           /* 10. later select stmt */
                              NULL,           /* 11. order by */
                              NULL,             /* 12. limit */
                              (yyvsp[(9) - (9)].node),           /* 13. for update */
                              (yyvsp[(2) - (9)].node),             /* 14 hints */
                              NULL            /* 15 when clause */
                              ,NULL
                              );
              merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(5) - (9)].node));
						  malloc_non_terminal_node((yyval.node),result->malloc_pool_, T_SELECT_INTO, 2, args, select);
						;}
    break;

  case 276:

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
    ;}
    break;

  case 277:

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
    ;}
    break;

  case 278:

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
    ;}
    break;

  case 279:

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
    ;}
    break;

  case 280:

    {(yyval.node) = NULL;;}
    break;

  case 281:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 282:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_WHERE_CLAUSE, 2, (yyvsp[(3) - (3)].node), (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 283:

    {
      if ((yyvsp[(2) - (4)].node)->type_ == T_QUESTIONMARK && (yyvsp[(4) - (4)].node)->type_ == T_QUESTIONMARK)
      {
        (yyvsp[(4) - (4)].node)->value_++;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 284:

    {
      if ((yyvsp[(2) - (4)].node)->type_ == T_QUESTIONMARK && (yyvsp[(4) - (4)].node)->type_ == T_QUESTIONMARK)
      {
        (yyvsp[(4) - (4)].node)->value_++;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, (yyvsp[(4) - (4)].node), (yyvsp[(2) - (4)].node));
    ;}
    break;

  case 285:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, (yyvsp[(2) - (2)].node), NULL);
    ;}
    break;

  case 286:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, NULL, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 287:

    {
      if ((yyvsp[(2) - (4)].node)->type_ == T_QUESTIONMARK && (yyvsp[(4) - (4)].node)->type_ == T_QUESTIONMARK)
      {
        (yyvsp[(4) - (4)].node)->value_++;
      }
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, (yyvsp[(4) - (4)].node), (yyvsp[(2) - (4)].node));
    ;}
    break;

  case 288:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 289:

    {
      if ((yyvsp[(2) - (3)].node))
      {
        merge_nodes((yyval.node), result->malloc_pool_, T_HINT_OPTION_LIST, (yyvsp[(2) - (3)].node));
      }
      else
      {
        (yyval.node) = NULL;
      }
    ;}
    break;

  case 290:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 291:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 292:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 293:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 294:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 295:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_READ_STATIC);
    ;}
    break;

  case 296:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_HOTSPOT);
    ;}
    break;

  case 297:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SEMI_JOIN, 6, (yyvsp[(3) - (14)].node), (yyvsp[(5) - (14)].node), (yyvsp[(7) - (14)].node), (yyvsp[(9) - (14)].node), (yyvsp[(11) - (14)].node), (yyvsp[(13) - (14)].node));
    ;}
    break;

  case 298:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_READ_CONSISTENCY);
      (yyval.node)->value_ = (yyvsp[(3) - (4)].ival);
    ;}
    break;

  case 299:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_USE_INDEX, 2, (yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].node));
    ;}
    break;

  case 300:

    {
	  (void)((yyvsp[(1) - (4)].node));
	  (void)((yyvsp[(3) - (4)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_UNKOWN_HINT);
    ;}
    break;

  case 301:

    {
      (yyval.node) = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 302:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_JOIN_OP_TYPE_LIST, (yyvsp[(3) - (4)].node));
    ;}
    break;

  case 303:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_NO_GROUP);
    ;}
    break;

  case 304:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_LONG_TRANS);
    ;}
    break;

  case 305:

    {
      (yyval.node) = (yyvsp[(1) - (2)].node);
    ;}
    break;

  case 306:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 307:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 308:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 309:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BLOOMFILTER_JOIN);
    ;}
    break;

  case 310:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_MERGE_JOIN);
    ;}
    break;

  case 311:

    {
    (yyval.ival) = 3;
  ;}
    break;

  case 312:

    {
    (yyval.ival) = 4;
  ;}
    break;

  case 313:

    {
    (yyval.ival) = 1;
  ;}
    break;

  case 314:

    {
    (yyval.ival) = 2;
  ;}
    break;

  case 315:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 316:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 317:

    { (yyval.node) = NULL; ;}
    break;

  case 318:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 319:

    { (yyval.node) = NULL; ;}
    break;

  case 320:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 321:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 0;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 322:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 0;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 323:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 1;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 324:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 2;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 325:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 0;
      ParseNode *default_operand = NULL;
      malloc_terminal_node(default_operand, result->malloc_pool_, T_STRING);
      default_operand->str_value_ = " "; /* blank for default */
      default_operand->value_ = strlen(default_operand->str_value_);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, default_operand, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 326:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 1;
      ParseNode *default_operand = NULL;
      malloc_terminal_node(default_operand, result->malloc_pool_, T_STRING);
      default_operand->str_value_ = " "; /* blank for default */
      default_operand->value_ = strlen(default_operand->str_value_);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, default_operand, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 327:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 2;
      ParseNode *default_operand = NULL;
      malloc_terminal_node(default_operand, result->malloc_pool_, T_STRING);
      default_operand->str_value_ = " "; /* blank for default */
      default_operand->value_ = strlen(default_operand->str_value_);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, default_operand, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 328:

    { (yyval.node) = NULL; ;}
    break;

  case 329:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_EXPR_LIST, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 330:

    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 331:

    { (yyval.node) = NULL; ;}
    break;

  case 332:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_SORT_LIST, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 333:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 334:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 335:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SORT_KEY, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 336:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_ASC); ;}
    break;

  case 337:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_ASC); ;}
    break;

  case 338:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_DESC); ;}
    break;

  case 339:

    { (yyval.node) = 0; ;}
    break;

  case 340:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 341:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 342:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_ALL);
    ;}
    break;

  case 343:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_DISTINCT);
    ;}
    break;

  case 344:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, (yyvsp[(1) - (1)].node));
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (1)]).first_column, (yylsp[(1) - (1)]).last_column);
    ;}
    break;

  case 345:

    {
      ParseNode* alias_node = NULL;
      malloc_non_terminal_node(alias_node, result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, alias_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (2)]).first_column, (yylsp[(1) - (2)]).last_column);
      dup_expr_string(alias_node->str_value_, result, (yylsp[(2) - (2)]).first_column, (yylsp[(2) - (2)]).last_column);
    ;}
    break;

  case 346:

    {
      ParseNode* alias_node = NULL;
      malloc_non_terminal_node(alias_node, result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, alias_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (3)]).first_column, (yylsp[(1) - (3)]).last_column);
      dup_expr_string(alias_node->str_value_, result, (yylsp[(3) - (3)]).first_column, (yylsp[(3) - (3)]).last_column);
    ;}
    break;

  case 347:

    {
      ParseNode* star_node = NULL;
      malloc_terminal_node(star_node, result->malloc_pool_, T_STAR);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, star_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (1)]).first_column, (yylsp[(1) - (1)]).last_column);
    ;}
    break;

  case 348:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 349:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 350:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 351:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 352:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 353:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 354:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 355:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 356:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 357:

    {
    	(yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 358:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(2) - (5)].node), (yyvsp[(5) - (5)].node));
    	yyerror(&(yylsp[(1) - (5)]), result, "qualied joined table can not be aliased!");
      YYABORT;
    ;}
    break;

  case 359:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 360:

    {
    	(yyval.node) = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 361:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOINED_TABLE, 4, (yyvsp[(2) - (6)].node), (yyvsp[(1) - (6)].node), (yyvsp[(4) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 362:

    {
      ParseNode* node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_JOIN_INNER);
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOINED_TABLE, 4, node, (yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 363:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_FULL);
    ;}
    break;

  case 364:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_LEFT);
    ;}
    break;

  case 365:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_RIGHT);
    ;}
    break;

  case 366:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_INNER);
    ;}
    break;

  case 367:

    { (yyval.node) = NULL; ;}
    break;

  case 368:

    { (yyval.node) = NULL; ;}
    break;

  case 369:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPLAIN, 1, (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = ((yyvsp[(2) - (3)].node) ? 1 : 0); /* positive: verbose */
    ;}
    break;

  case 370:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 371:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 372:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 373:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 374:

    { (yyval.node) = (ParseNode*)1; ;}
    break;

  case 375:

    { (yyval.node) = NULL; ;}
    break;

  case 376:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_TABLES, 1, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 377:

    {  malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_INDEX, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 378:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 379:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 380:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_TABLE_STATUS, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 381:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_SERVER_STATUS, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 382:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_VARIABLES, 1, (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = (yyvsp[(2) - (4)].ival);
    ;}
    break;

  case 383:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_SCHEMA); ;}
    break;

  case 384:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_CREATE_TABLE, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 385:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 386:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 387:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_WARNINGS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 388:

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
    ;}
    break;

  case 389:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_GRANTS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 390:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_PARAMETERS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 391:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_PROCESSLIST);
      (yyval.node)->value_ = (yyvsp[(2) - (3)].ival);
    ;}
    break;

  case 392:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LOCK_TABLE, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 393:

    {
      if ((yyvsp[(2) - (4)].node)->value_ < 0 || (yyvsp[(4) - (4)].node)->value_ < 0)
      {
        yyerror(&(yylsp[(1) - (4)]), result, "OFFSET/COUNT must not be less than 0!");
        YYABORT;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_LIMIT, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 394:

    {
      if ((yyvsp[(2) - (2)].node)->value_ < 0)
      {
        yyerror(&(yylsp[(1) - (2)]), result, "COUNT must not be less than 0!");
        YYABORT;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_LIMIT, 2, NULL, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 395:

    { (yyval.node) = NULL; ;}
    break;

  case 396:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 397:

    { (yyval.node) = NULL; ;}
    break;

  case 398:

    { (yyval.node) = NULL; ;}
    break;

  case 399:

    { (yyval.ival) = 1; ;}
    break;

  case 400:

    { (yyval.ival) = 0; ;}
    break;

  case 401:

    { (yyval.ival) = 0; ;}
    break;

  case 402:

    { (yyval.node) = NULL; ;}
    break;

  case 403:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 404:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_WHERE_CLAUSE, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 405:

    { (yyval.node) = NULL; ;}
    break;

  case 406:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 1, (yyvsp[(1) - (1)].node)); ;}
    break;

  case 407:

    { (yyval.ival) = 0; ;}
    break;

  case 408:

    { (yyval.ival) = 1; ;}
    break;

  case 409:

    {
        merge_nodes((yyval.node), result->malloc_pool_, T_CREATE_USER, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 410:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 411:

    {
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 412:

    {
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CREATE_USER_SPEC, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 413:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 414:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 415:

    {
        merge_nodes((yyval.node), result->malloc_pool_, T_DROP_USER, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 416:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 417:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 418:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SET_PASSWORD, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 419:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SET_PASSWORD, 2, (yyvsp[(3) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 420:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 421:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 422:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_RENAME_USER, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 423:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_RENAME_INFO, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 424:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 425:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 426:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LOCK_USER, 2, (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 427:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 428:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 429:

    {
      (void)(yyval.node);
    ;}
    break;

  case 430:

    {
      (void)(yyval.node);
    ;}
    break;

  case 431:

    {
      (yyval.ival) = 1;
    ;}
    break;

  case 432:

    {
      (yyval.ival) = 0;
    ;}
    break;

  case 433:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BEGIN);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 434:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BEGIN);
      (yyval.node)->value_ = (yyvsp[(3) - (3)].ival);
    ;}
    break;

  case 435:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_COMMIT);
    ;}
    break;

  case 436:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_ROLLBACK);
    ;}
    break;

  case 437:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_KILL, 3, (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 438:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 439:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 440:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 441:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 442:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 443:

    {
      ParseNode *privileges_node = NULL;
      ParseNode *users_node = NULL;
      merge_nodes(privileges_node, result->malloc_pool_, T_PRIVILEGES, (yyvsp[(2) - (6)].node));
      merge_nodes(users_node, result->malloc_pool_, T_USERS, (yyvsp[(6) - (6)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_GRANT,
                                 3, privileges_node, (yyvsp[(4) - (6)].node), users_node);
    ;}
    break;

  case 444:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 445:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 446:

    {
      (void)(yyvsp[(2) - (2)].node);                 /* useless */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_ALL;
    ;}
    break;

  case 447:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_ALTER;
    ;}
    break;

  case 448:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_CREATE;
    ;}
    break;

  case 449:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_CREATE_USER;
    ;}
    break;

  case 450:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_DELETE;
    ;}
    break;

  case 451:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_DROP;
    ;}
    break;

  case 452:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_GRANT_OPTION;
    ;}
    break;

  case 453:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_INSERT;
    ;}
    break;

  case 454:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_UPDATE;
    ;}
    break;

  case 455:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_SELECT;
    ;}
    break;

  case 456:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_REPLACE;
    ;}
    break;

  case 457:

    {
      (void)(yyval.node);
    ;}
    break;

  case 458:

    {
      (void)(yyval.node);
    ;}
    break;

  case 459:

    {
      /* means global priv_level */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_LEVEL);
    ;}
    break;

  case 460:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_LEVEL, 1, (yyvsp[(1) - (1)].node));
    ;}
    break;

  case 461:

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
    ;}
    break;

  case 462:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 463:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 464:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PREPARE, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 465:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 466:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 467:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 468:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 469:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 470:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_VARIABLE_SET, (yyvsp[(2) - (2)].node));;
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 471:

    {
      (yyval.node) = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 472:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 473:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 474:

    {
      (void)((yyvsp[(2) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 475:

    {
      (void)((yyvsp[(2) - (3)].node));
      (yyvsp[(1) - (3)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 476:

    {
      (void)((yyvsp[(3) - (4)].node));
      (yyvsp[(2) - (4)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 477:

    {
      (void)((yyvsp[(3) - (4)].node));
      (yyvsp[(2) - (4)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 478:

    {
      (void)((yyvsp[(4) - (5)].node));
      (yyvsp[(3) - (5)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 479:

    {
      (void)((yyvsp[(4) - (5)].node));
      (yyvsp[(3) - (5)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 480:

    {
      (void)((yyvsp[(2) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 481:

    {
      (void)((yyvsp[(2) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 482:

    {
      (void)((yyvsp[(2) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_ARRAY_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 483:

    { (yyval.node) = NULL; ;}
    break;

  case 484:

    { (yyval.node) = NULL; ;}
    break;

  case 485:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 486:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 487:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_ARRAY_VAL, (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 488:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 489:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 490:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXECUTE, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 491:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 492:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 493:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 494:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 495:

    {
      (void)((yyvsp[(1) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_DEALLOCATE, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 496:

    { (yyval.node) = NULL; ;}
    break;

  case 497:

    { (yyval.node) = NULL; ;}
    break;

  case 498:

    {
      ParseNode *alter_actions = NULL;
      merge_nodes(alter_actions, result->malloc_pool_, T_ALTER_ACTION_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_TABLE, 2, (yyvsp[(3) - (4)].node), alter_actions);
    ;}
    break;

  case 499:

    {
      yyerror(&(yylsp[(1) - (6)]), result, "Table rename is not supported now");
      YYABORT;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLE_RENAME, 1, (yyvsp[(6) - (6)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_ACTION_LIST, 1, (yyval.node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_TABLE, 2, (yyvsp[(3) - (6)].node), (yyval.node));
    ;}
    break;

  case 500:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 501:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 502:

    {
      (void)((yyvsp[(2) - (3)].node)); /* make bison mute */
      (yyval.node) = (yyvsp[(3) - (3)].node); /* T_COLUMN_DEFINITION */
    ;}
    break;

  case 503:

    {
      (void)((yyvsp[(2) - (4)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_DROP, 1, (yyvsp[(3) - (4)].node));
      (yyval.node)->value_ = (yyvsp[(4) - (4)].ival);
    ;}
    break;

  case 504:

    {
      (void)((yyvsp[(2) - (4)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_ALTER, 2, (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 505:

    {
      (void)((yyvsp[(2) - (5)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_RENAME, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 506:

    { (yyval.node) = NULL; ;}
    break;

  case 507:

    { (yyval.node) = NULL; ;}
    break;

  case 508:

    { (yyval.ival) = 2; ;}
    break;

  case 509:

    { (yyval.ival) = 1; ;}
    break;

  case 510:

    { (yyval.ival) = 0; ;}
    break;

  case 511:

    {
      (void)((yyvsp[(3) - (3)].node)); /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NOT_NULL);
    ;}
    break;

  case 512:

    {
      (void)((yyvsp[(3) - (3)].node)); /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NULL);
    ;}
    break;

  case 513:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 514:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_NULL);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyval.node));
    ;}
    break;

  case 515:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_SYTEM_ACTION_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_SYSTEM, 1, (yyval.node));
    ;}
    break;

  case 516:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 3, node, (yyvsp[(7) - (7)].node), (yyvsp[(3) - (7)].node));
    ;}
    break;

  case 517:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 3, node, (yyvsp[(7) - (7)].node), (yyvsp[(3) - (7)].node));
    ;}
    break;

  case 518:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 2, node, (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 519:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 2, node, (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 520:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 521:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_FORCE);
    ;}
    break;

  case 522:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 523:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 524:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SYSTEM_ACTION, 5,
                               (yyvsp[(1) - (9)].node),    /* param_name */
                               (yyvsp[(3) - (9)].node),    /* param_value */
                               (yyvsp[(4) - (9)].node),    /* comment */
                               (yyvsp[(8) - (9)].node),    /* server type */
                               (yyvsp[(9) - (9)].node)     /* cluster or IP/port */
                               );
      (yyval.node)->value_ = (yyvsp[(5) - (9)].ival);                /* scope */
    ;}
    break;

  case 525:

    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 526:

    { (yyval.node) = NULL; ;}
    break;

  case 527:

    { (yyval.ival) = 0; ;}
    break;

  case 528:

    { (yyval.ival) = 1; ;}
    break;

  case 529:

    { (yyval.ival) = 2; ;}
    break;

  case 530:

    { (yyval.ival) = 2; ;}
    break;

  case 531:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 532:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 4;
    ;}
    break;

  case 533:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 534:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 3;
    ;}
    break;

  case 535:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CLUSTER, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 536:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SERVER_ADDRESS, 2, (yyvsp[(3) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 537:

    { (yyval.node) = NULL; ;}
    break;

  case 538:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 539:

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
    ;}
    break;

  case 540:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 541:

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
    ;}
    break;

  case 543:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 544:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_IDENT);
      (yyval.node)->str_value_ = parse_strdup((yyvsp[(1) - (1)].non_reserved_keyword)->keyword_name, result->malloc_pool_);
      if ((yyval.node)->str_value_ == NULL)
      {
        yyerror(NULL, result, "No more space for string duplicate");
        YYABORT;
      }
    ;}
    break;

  case 570:

    {
								malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CREATE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
							;}
    break;

  case 571:

    {
					ParseNode *params = NULL;
        			merge_nodes(params, result->malloc_pool_, T_PARAM_LIST, (yyvsp[(5) - (6)].node));
					malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECL, 2, (yyvsp[(3) - (6)].node), params);
				;}
    break;

  case 572:

    {
					ParseNode *params = NULL;
					malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECL, 2, (yyvsp[(3) - (5)].node), params);
				;}
    break;

  case 573:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
					;}
    break;

  case 574:

    {
						(yyval.node) = (yyvsp[(1) - (1)].node);
					;}
    break;

  case 575:

    {
                malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PARAM_DEFINITION, 3, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node), NULL);
					;}
    break;

  case 576:

    {
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_IN_PARAM_DEFINITION, 3, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node), NULL);
					;}
    break;

  case 577:

    {
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OUT_PARAM_DEFINITION, 3, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node), NULL);
					;}
    break;

  case 578:

    {
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_INOUT_PARAM_DEFINITION, 3, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node), NULL);
          ;}
    break;

  case 579:

    {
          ParseNode *array_flag = NULL;
          malloc_terminal_node(array_flag, result->malloc_pool_, T_BOOL);
          array_flag->value_ = 1;
          malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PARAM_DEFINITION, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), array_flag);
        ;}
    break;

  case 580:

    {
          ParseNode *array_flag = NULL;
          malloc_terminal_node(array_flag, result->malloc_pool_, T_BOOL);
          array_flag->value_ = 1;
          malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_IN_PARAM_DEFINITION, 3, (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), array_flag);
        ;}
    break;

  case 581:

    {
          ParseNode *array_flag = NULL;
          malloc_terminal_node(array_flag, result->malloc_pool_, T_BOOL);
          array_flag->value_ = 1;
          malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OUT_PARAM_DEFINITION, 3, (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), array_flag);
        ;}
    break;

  case 582:

    {
          ParseNode *array_flag = NULL;
          malloc_terminal_node(array_flag, result->malloc_pool_, T_BOOL);
          array_flag->value_ = 1;
          malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_INOUT_PARAM_DEFINITION, 3, (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), array_flag);
        ;}
    break;

  case 583:

    { 
					//malloc_non_terminal_node($$, result->malloc_pool_, T_PROCEDURE_BLOCK, 1, $2);
					(yyval.node)=(yyvsp[(2) - (3)].node);
				;}
    break;

  case 584:

    { 
					(yyval.node)=NULL;
				;}
    break;

  case 585:

    { 
        			merge_nodes((yyval.node), result->malloc_pool_, T_PROCEDURE_STMTS, (yyvsp[(1) - (1)].node));
				;}
    break;

  case 586:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
				;}
    break;

  case 587:

    {
					(yyval.node)=(yyvsp[(1) - (1)].node);
				;}
    break;

  case 588:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 589:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 590:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 591:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 592:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 593:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 594:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 595:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 596:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 597:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 598:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 599:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 600:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 601:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 602:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 603:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 604:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 605:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 606:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 607:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 608:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 609:

    { (yyval.node) =(yyvsp[(1) - (1)].node); ;}
    break;

  case 610:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 611:

    { 
					(yyval.node)=NULL;
				;}
    break;

  case 612:

    { 
        			merge_nodes((yyval.node), result->malloc_pool_, T_PROCEDURE_STMTS, (yyvsp[(1) - (1)].node));
				;}
    break;

  case 613:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
				;}
    break;

  case 614:

    {
					(yyval.node)=(yyvsp[(1) - (1)].node);
				;}
    break;

  case 615:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 616:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 617:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 618:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 619:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 620:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 621:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 622:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 623:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 624:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 625:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 626:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 627:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 628:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 629:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 630:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 631:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 632:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 633:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 634:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 635:

    { (yyval.node) =(yyvsp[(1) - (1)].node); ;}
    break;

  case 636:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 637:

    {
						ParseNode *args = NULL;
						merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (4)].node));
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECLARE, 4, args, (yyvsp[(3) - (4)].node), NULL, NULL);
					;}
    break;

  case 638:

    {
						ParseNode *args = NULL;
						merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (6)].node));
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECLARE, 4, args, (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node), NULL);
          ;}
    break;

  case 639:

    {
            ParseNode *args = NULL;
            ParseNode *arr = NULL;
            malloc_terminal_node(arr, result->malloc_pool_, T_BOOL);
            arr->value_ = 1;
            merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (5)].node));
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECLARE, 4,
                                     args,  //arguments
                                     (yyvsp[(3) - (5)].node),    //data type
                                     NULL, 	//default value
                                     arr 		//is array
                                     );
          ;}
    break;

  case 640:

    {
						ParseNode *var_list = NULL;
						merge_nodes(var_list, result->malloc_pool_, T_VAR_VAL_LIST, (yyvsp[(2) - (3)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ASSGIN, 1,var_list);
					;}
    break;

  case 641:

    {
						ParseNode *elsifs = NULL;
						merge_nodes(elsifs, result->malloc_pool_, T_PROCEDURE_ELSEIFS, (yyvsp[(5) - (9)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (9)].node), (yyvsp[(4) - (9)].node), elsifs ,(yyvsp[(6) - (9)].node));
					;}
    break;

  case 642:

    {
						ParseNode *elsifs = NULL;
						merge_nodes(elsifs, result->malloc_pool_, T_PROCEDURE_ELSEIFS, (yyvsp[(5) - (8)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (8)].node), (yyvsp[(4) - (8)].node), elsifs ,NULL);
					;}
    break;

  case 643:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (8)].node), (yyvsp[(4) - (8)].node), NULL ,(yyvsp[(5) - (8)].node));
					;}
    break;

  case 644:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (7)].node), (yyvsp[(4) - (7)].node), NULL ,NULL);
					;}
    break;

  case 645:

    {
						(yyval.node)=(yyvsp[(1) - (1)].node);
					;}
    break;

  case 646:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
					;}
    break;

  case 647:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ELSEIF, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
					;}
    break;

  case 648:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ELSE, 1, (yyvsp[(2) - (2)].node));
						//$$ = $2;
					;}
    break;

  case 649:

    {
						ParseNode *casewhenlist = NULL;
						merge_nodes(casewhenlist, result->malloc_pool_, T_PROCEDURE_CASE_WHEN_LIST, (yyvsp[(3) - (7)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CASE, 3, (yyvsp[(2) - (7)].node), casewhenlist, (yyvsp[(4) - (7)].node));
					;}
    break;

  case 650:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
					;}
    break;

  case 651:

    {
						(yyval.node)=(yyvsp[(1) - (1)].node);
					;}
    break;

  case 652:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CASE_WHEN, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
					;}
    break;

  case 653:

    {
						(yyval.node) = NULL;
					;}
    break;

  case 654:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ELSE, 1, (yyvsp[(2) - (2)].node));
						//$$ = $2;
					;}
    break;

  case 655:

    {
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_LOOP, 5,
                                     NULL,
                                     NULL,
                                     NULL,
                                     NULL,
                                     (yyvsp[(2) - (5)].node));
          ;}
    break;

  case 656:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_LOOP, 5,
                                       (yyvsp[(2) - (11)].node),
                                       NULL,
                                       (yyvsp[(4) - (11)].node),
                                       (yyvsp[(6) - (11)].node),
                                       (yyvsp[(8) - (11)].node));
            ;}
    break;

  case 657:

    {
              ParseNode *rev_flag = NULL;
              malloc_terminal_node(rev_flag, result->malloc_pool_, T_BOOL);
              rev_flag->value_ = 1;
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_LOOP, 5,
                                       (yyvsp[(2) - (12)].node), 				//loop counter
                                       rev_flag,  //reverse loop
                                       (yyvsp[(5) - (12)].node),        //lowest_number
                                       (yyvsp[(7) - (12)].node),        //highest number
                                       (yyvsp[(9) - (12)].node));       //loop body
            ;}
    break;

  case 658:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_WHILE, 2, (yyvsp[(2) - (7)].node), (yyvsp[(4) - (7)].node));
					;}
    break;

  case 659:

    {
						/* We do not bother building a node for NULL */
						(yyval.node) = NULL;
					;}
    break;

  case 660:

    {
                        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXIT, 1, NULL);
						(yyval.node)->value_=1;
					;}
    break;

  case 661:

    {
                        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXIT, 1, (yyvsp[(3) - (4)].node));//when_expr
                    ;}
    break;

  case 662:

    {
        					ParseNode *param_list = NULL;
            				merge_nodes(param_list, result->malloc_pool_, T_EXPR_LIST, (yyvsp[(4) - (6)].node));
        					
                            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXEC, 3, (yyvsp[(2) - (6)].node), param_list, (yyvsp[(6) - (6)].node));
						;}
    break;

  case 663:

    {
							ParseNode *params = NULL;
                            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXEC, 3, (yyvsp[(2) - (5)].node), params, (yyvsp[(5) - (5)].node));
                        ;}
    break;

  case 664:

    {
							malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DROP, 2, (yyvsp[(5) - (5)].node),(yyvsp[(5) - (5)].node));
						;}
    break;

  case 665:

    {
							malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DROP, 1, (yyvsp[(3) - (3)].node));
						;}
    break;

  case 666:

    {
							malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_SHOW, 1, (yyvsp[(3) - (3)].node));
						;}
    break;



      default: break;
    }
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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, result, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (&yylloc, result, yymsg);
	  }
	else
	  {
	    yyerror (&yylloc, result, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

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

  yyerror_range[0] = yylsp[1-yylen];
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
      if (yyn != YYPACT_NINF)
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp, result);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc, result);
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

