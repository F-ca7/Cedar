
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
     TRUNCATE = 350,
     ELSE = 351,
     END = 352,
     END_P = 353,
     ERROR = 354,
     EXECUTE = 355,
     EXISTS = 356,
     EXPLAIN = 357,
     FLOAT = 358,
     FOR = 359,
     FROM = 360,
     FULL = 361,
     FROZEN = 362,
     FORCE = 363,
     GLOBAL = 364,
     GLOBAL_ALIAS = 365,
     GRANT = 366,
     GROUP = 367,
     HAVING = 368,
     HINT_BEGIN = 369,
     HINT_END = 370,
     HOTSPOT = 371,
     IDENTIFIED = 372,
     IF = 373,
     INNER = 374,
     INTEGER = 375,
     INSERT = 376,
     INTO = 377,
     JOIN = 378,
     SEMI_JOIN = 379,
     KEY = 380,
     LEADING = 381,
     LEFT = 382,
     LIMIT = 383,
     LOCAL = 384,
     LOCKED = 385,
     LOCKWJH = 386,
     MEDIUMINT = 387,
     MEMORY = 388,
     MODIFYTIME = 389,
     MASTER = 390,
     NUMERIC = 391,
     OFFSET = 392,
     ON = 393,
     ORDER = 394,
     OPTION = 395,
     OUTER = 396,
     PARAMETERS = 397,
     PASSWORD = 398,
     PRECISION = 399,
     PREPARE = 400,
     PRIMARY = 401,
     READ_STATIC = 402,
     REAL = 403,
     RENAME = 404,
     REPLACE = 405,
     RESTRICT = 406,
     PRIVILEGES = 407,
     REVOKE = 408,
     RIGHT = 409,
     ROLLBACK = 410,
     KILL = 411,
     READ_CONSISTENCY = 412,
     NO_GROUP = 413,
     LONG_TRANS = 414,
     SCHEMA = 415,
     SCOPE = 416,
     SELECT = 417,
     SESSION = 418,
     SESSION_ALIAS = 419,
     SET = 420,
     SHOW = 421,
     SMALLINT = 422,
     SNAPSHOT = 423,
     SPFILE = 424,
     START = 425,
     STATIC = 426,
     SYSTEM = 427,
     STRONG = 428,
     SET_MASTER_CLUSTER = 429,
     SET_SLAVE_CLUSTER = 430,
     SLAVE = 431,
     TABLE = 432,
     TABLES = 433,
     THEN = 434,
     TIME = 435,
     TIMESTAMP = 436,
     TINYINT = 437,
     TRAILING = 438,
     TRANSACTION = 439,
     TO = 440,
     UPDATE = 441,
     USER = 442,
     USING = 443,
     VALUES = 444,
     VARCHAR = 445,
     VARBINARY = 446,
     WHERE = 447,
     WHEN = 448,
     WITH = 449,
     WORK = 450,
     PROCESSLIST = 451,
     QUERY = 452,
     CONNECTION = 453,
     WEAK = 454,
     INDEX = 455,
     STORING = 456,
     BLOOMFILTER_JOIN = 457,
     MERGE_JOIN = 458,
     AUTO_INCREMENT = 459,
     CHUNKSERVER = 460,
     COMPRESS_METHOD = 461,
     CONSISTENT_MODE = 462,
     EXPIRE_INFO = 463,
     GRANTS = 464,
     JOIN_INFO = 465,
     MERGESERVER = 466,
     REPLICA_NUM = 467,
     ROOTSERVER = 468,
     ROW_COUNT = 469,
     SERVER = 470,
     SERVER_IP = 471,
     SERVER_PORT = 472,
     SERVER_TYPE = 473,
     STATUS = 474,
     TABLE_ID = 475,
     TABLET_BLOCK_SIZE = 476,
     TABLET_MAX_SIZE = 477,
     UNLOCKED = 478,
     UPDATESERVER = 479,
     USE_BLOOM_FILTER = 480,
     VARIABLES = 481,
     VERBOSE = 482,
     WARNINGS = 483
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
#define YYFINAL  204
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3934

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  240
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  221
/* YYNRULES -- Number of rules.  */
#define YYNRULES  669
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1263

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   483

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    36,     2,     2,
      40,    41,    34,    32,   239,    33,    42,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   238,
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
     234,   235,   236,   237
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
      82,    84,    86,    88,    90,    92,    94,    96,    98,    99,
     101,   105,   107,   111,   115,   117,   119,   121,   123,   125,
     127,   129,   131,   133,   137,   139,   141,   145,   151,   153,
     155,   157,   159,   162,   164,   166,   169,   172,   176,   180,
     184,   188,   192,   196,   200,   202,   205,   208,   212,   216,
     220,   224,   228,   232,   236,   240,   244,   248,   252,   256,
     260,   264,   269,   273,   277,   280,   284,   289,   293,   298,
     302,   307,   313,   320,   324,   329,   333,   335,   339,   345,
     347,   348,   350,   353,   358,   361,   362,   367,   372,   377,
     383,   388,   395,   400,   404,   409,   411,   413,   415,   417,
     419,   421,   423,   429,   437,   439,   443,   447,   457,   461,
     464,   465,   469,   471,   475,   476,   478,   484,   486,   489,
     492,   496,   501,   507,   513,   519,   525,   532,   540,   544,
     548,   552,   558,   560,   562,   567,   574,   577,   586,   590,
     591,   593,   597,   599,   605,   609,   611,   613,   615,   617,
     619,   622,   625,   627,   630,   632,   635,   638,   640,   643,
     646,   649,   652,   654,   656,   658,   661,   667,   671,   672,
     676,   677,   679,   680,   684,   685,   689,   690,   693,   694,
     697,   699,   702,   704,   707,   709,   713,   714,   718,   722,
     726,   730,   734,   738,   742,   746,   750,   754,   756,   757,
     762,   763,   766,   768,   772,   778,   785,   786,   788,   792,
     794,   802,   807,   815,   816,   819,   821,   823,   827,   828,
     830,   834,   838,   844,   846,   850,   853,   855,   859,   863,
     865,   868,   872,   877,   883,   892,   894,   896,   906,   916,
     921,   926,   931,   932,   935,   939,   944,   949,   952,   955,
     960,   961,   965,   967,   971,   972,   974,   977,   979,   981,
     996,  1001,  1007,  1012,  1016,  1021,  1023,  1025,  1028,  1029,
    1031,  1035,  1037,  1039,  1041,  1043,  1045,  1047,  1049,  1051,
    1052,  1054,  1055,  1058,  1062,  1067,  1072,  1077,  1081,  1085,
    1089,  1090,  1094,  1096,  1097,  1101,  1103,  1107,  1110,  1111,
    1113,  1115,  1116,  1119,  1120,  1122,  1124,  1126,  1129,  1133,
    1135,  1137,  1141,  1143,  1147,  1149,  1153,  1156,  1160,  1163,
    1165,  1171,  1173,  1177,  1184,  1190,  1193,  1196,  1199,  1201,
    1203,  1204,  1208,  1210,  1212,  1214,  1216,  1218,  1219,  1223,
    1229,  1235,  1241,  1246,  1251,  1256,  1259,  1264,  1268,  1272,
    1276,  1280,  1284,  1288,  1292,  1296,  1301,  1304,  1305,  1307,
    1310,  1315,  1317,  1319,  1320,  1321,  1324,  1327,  1328,  1330,
    1331,  1333,  1337,  1339,  1343,  1348,  1350,  1352,  1356,  1358,
    1362,  1368,  1375,  1378,  1379,  1383,  1387,  1389,  1393,  1398,
    1400,  1402,  1404,  1405,  1409,  1410,  1413,  1417,  1420,  1423,
    1428,  1429,  1431,  1432,  1434,  1436,  1443,  1445,  1449,  1452,
    1454,  1456,  1459,  1461,  1463,  1465,  1468,  1470,  1472,  1474,
    1476,  1478,  1479,  1481,  1483,  1489,  1492,  1493,  1498,  1500,
    1502,  1504,  1506,  1508,  1511,  1515,  1517,  1521,  1525,  1529,
    1534,  1539,  1545,  1551,  1555,  1559,  1563,  1565,  1567,  1569,
    1571,  1575,  1577,  1581,  1585,  1588,  1589,  1591,  1595,  1599,
    1601,  1603,  1608,  1615,  1617,  1621,  1625,  1630,  1635,  1641,
    1643,  1644,  1646,  1648,  1649,  1653,  1657,  1661,  1664,  1669,
    1677,  1685,  1692,  1699,  1700,  1702,  1704,  1708,  1718,  1721,
    1722,  1726,  1730,  1734,  1735,  1737,  1739,  1741,  1743,  1747,
    1754,  1755,  1757,  1759,  1761,  1763,  1765,  1767,  1769,  1771,
    1773,  1775,  1777,  1779,  1781,  1783,  1785,  1787,  1789,  1791,
    1793,  1795,  1797,  1799,  1801,  1803,  1805,  1807,  1809,  1811,
    1813,  1815,  1817,  1819,  1822,  1829,  1835,  1839,  1841,  1844,
    1848,  1852,  1856,  1860,  1865,  1870,  1875,  1879,  1880,  1882,
    1885,  1887,  1889,  1891,  1893,  1895,  1897,  1899,  1902,  1905,
    1908,  1911,  1914,  1917,  1920,  1923,  1926,  1929,  1932,  1935,
    1938,  1941,  1944,  1946,  1948,  1949,  1951,  1954,  1956,  1958,
    1960,  1962,  1964,  1966,  1969,  1972,  1975,  1978,  1981,  1984,
    1987,  1990,  1993,  1996,  1999,  2002,  2005,  2008,  2011,  2013,
    2015,  2020,  2027,  2033,  2037,  2047,  2056,  2065,  2073,  2075,
    2078,  2083,  2086,  2094,  2097,  2099,  2104,  2105,  2108,  2114,
    2126,  2139,  2147,  2149,  2152,  2157,  2164,  2170,  2176,  2180
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     241,     0,    -1,   242,   107,    -1,   242,   238,   243,    -1,
     243,    -1,   433,    -1,   458,    -1,   460,    -1,   459,    -1,
     272,    -1,   274,    -1,   275,    -1,   290,    -1,   283,    -1,
     284,    -1,   285,    -1,   286,    -1,   288,    -1,   289,    -1,
     321,    -1,   314,    -1,   291,    -1,   266,    -1,   263,    -1,
     262,    -1,   307,    -1,   311,    -1,   358,    -1,   361,    -1,
     398,    -1,   401,    -1,   409,    -1,   414,    -1,   420,    -1,
     412,    -1,   369,    -1,   374,    -1,   376,    -1,   378,    -1,
     381,    -1,   391,    -1,   396,    -1,   385,    -1,   386,    -1,
     387,    -1,   388,    -1,   362,    -1,   310,    -1,    -1,   249,
      -1,   244,   239,   249,    -1,   428,    -1,   429,    42,   428,
      -1,   429,    42,    34,    -1,     4,    -1,     6,    -1,     5,
      -1,     9,    -1,     8,    -1,    10,    -1,    12,    -1,    14,
      -1,    13,    -1,   173,    42,   428,    -1,   245,    -1,   246,
      -1,    40,   249,    41,    -1,    40,   244,   239,   249,    41,
      -1,   251,    -1,   257,    -1,   258,    -1,   322,    -1,   110,
     322,    -1,   256,    -1,   247,    -1,    32,   248,    -1,    33,
     248,    -1,   248,    32,   248,    -1,   248,    33,   248,    -1,
     248,    34,   248,    -1,   248,    35,   248,    -1,   248,    36,
     248,    -1,   248,    38,   248,    -1,   248,    37,   248,    -1,
     247,    -1,    32,   249,    -1,    33,   249,    -1,   249,    32,
     249,    -1,   249,    33,   249,    -1,   249,    34,   249,    -1,
     249,    35,   249,    -1,   249,    36,   249,    -1,   249,    38,
     249,    -1,   249,    37,   249,    -1,   249,    26,   249,    -1,
     249,    25,   249,    -1,   249,    24,   249,    -1,   249,    22,
     249,    -1,   249,    23,   249,    -1,   249,    21,   249,    -1,
     249,    28,   249,    -1,   249,    20,    28,   249,    -1,   249,
      19,   249,    -1,   249,    18,   249,    -1,    20,   249,    -1,
     249,    31,    10,    -1,   249,    31,    20,    10,    -1,   249,
      31,     8,    -1,   249,    31,    20,     8,    -1,   249,    31,
      11,    -1,   249,    31,    20,    11,    -1,   249,    29,   248,
      19,   248,    -1,   249,    20,    29,   248,    19,   248,    -1,
     249,    30,   250,    -1,   249,    20,    30,   250,    -1,   249,
      27,   249,    -1,   322,    -1,    40,   244,    41,    -1,    79,
     252,   253,   255,   106,    -1,   249,    -1,    -1,   254,    -1,
     253,   254,    -1,   202,   249,   188,   249,    -1,   105,   249,
      -1,    -1,    14,    40,     5,    41,    -1,    14,    40,    14,
      41,    -1,   430,    40,    34,    41,    -1,   430,    40,   261,
     249,    41,    -1,   430,    40,   244,    41,    -1,   430,    40,
     249,    70,   296,    41,    -1,   430,    40,   341,    41,    -1,
     430,    40,    41,    -1,   259,    40,   260,    41,    -1,   223,
      -1,   321,    -1,   314,    -1,   263,    -1,   262,    -1,    68,
      -1,   100,    -1,    97,   114,   354,   328,   315,    -1,   195,
     330,   354,   174,   264,   328,   315,    -1,   265,    -1,   264,
     239,   265,    -1,   428,    24,   249,    -1,    87,   209,   292,
     354,   147,   354,   267,   268,   270,    -1,    40,   318,    41,
      -1,   210,   269,    -1,    -1,    40,   318,    41,    -1,   271,
      -1,   270,   239,   271,    -1,    -1,   305,    -1,    44,   273,
      56,   113,   321,    -1,   431,    -1,    57,   273,    -1,    58,
     273,    -1,    58,   273,    60,    -1,    58,   273,   131,   411,
      -1,    58,   273,    60,   131,   411,    -1,    58,   273,    62,
     131,   411,    -1,    58,   273,    61,   131,   411,    -1,    58,
     273,    63,   131,   411,    -1,    58,   273,    64,     5,   131,
     411,    -1,    58,   273,   287,    65,     5,   131,   411,    -1,
      58,   273,    61,    -1,    58,   273,    62,    -1,    58,   273,
      63,    -1,    58,   273,   287,    65,     5,    -1,    60,    -1,
      61,    -1,    58,   273,    64,     5,    -1,    58,   273,   114,
       5,   194,     5,    -1,    59,   273,    -1,    87,   186,   292,
     354,    40,   293,    41,   304,    -1,   127,    20,   110,    -1,
      -1,   294,    -1,   293,   239,   294,    -1,   295,    -1,   155,
     134,    40,   318,    41,    -1,   428,   296,   302,    -1,   191,
      -1,   176,    -1,   141,    -1,   129,    -1,    73,    -1,    95,
     297,    -1,   145,   297,    -1,    75,    -1,   112,   298,    -1,
     157,    -1,   101,   299,    -1,   190,   300,    -1,    93,    -1,
      80,   301,    -1,    74,   301,    -1,   199,   301,    -1,   200,
     301,    -1,    88,    -1,   143,    -1,    92,    -1,   189,   300,
      -1,    40,     5,   239,     5,    41,    -1,    40,     5,    41,
      -1,    -1,    40,     5,    41,    -1,    -1,   153,    -1,    -1,
      40,     5,    41,    -1,    -1,    40,     5,    41,    -1,    -1,
     302,   303,    -1,    -1,    20,    10,    -1,    10,    -1,    96,
     246,    -1,   213,    -1,   155,   134,    -1,   305,    -1,   304,
     239,   305,    -1,    -1,   219,   306,     4,    -1,   217,   306,
       4,    -1,   231,   306,     5,    -1,   230,   306,     5,    -1,
     229,   306,     5,    -1,   221,   306,     5,    -1,   215,   306,
       4,    -1,   234,   306,     8,    -1,   216,   306,   180,    -1,
      82,   306,     4,    -1,    24,    -1,    -1,   102,   186,   308,
     309,    -1,    -1,   127,   110,    -1,   353,    -1,   309,   239,
     353,    -1,   104,   186,   308,   309,   424,    -1,   102,   209,
     308,   312,   147,   313,    -1,    -1,   354,    -1,   312,   239,
     354,    -1,   354,    -1,   316,   131,   354,   317,   198,   319,
     315,    -1,   316,   131,   354,   321,    -1,   316,   131,   354,
      40,   318,    41,   321,    -1,    -1,   202,   249,    -1,   159,
      -1,   130,    -1,    40,   318,    41,    -1,    -1,   428,    -1,
     318,   239,   428,    -1,    40,   320,    41,    -1,   319,   239,
      40,   320,    41,    -1,   249,    -1,   320,   239,   249,    -1,
     323,   315,    -1,   322,    -1,    40,   323,    41,    -1,    40,
     322,    41,    -1,   324,    -1,   327,   340,    -1,   325,   344,
     340,    -1,   325,   343,   329,   340,    -1,   171,   330,   349,
     351,   339,    -1,   171,   330,   349,   351,   114,   103,   328,
     339,    -1,   327,    -1,   322,    -1,   171,   330,   351,   131,
     411,   114,   352,   328,   340,    -1,   171,   330,   349,   351,
     114,   352,   328,   342,   348,    -1,   325,    16,   349,   325,
      -1,   325,    17,   349,   325,    -1,   325,    15,   349,   325,
      -1,    -1,   201,   249,    -1,   201,     7,   249,    -1,   137,
     338,   146,   338,    -1,   146,   338,   137,   338,    -1,   137,
     338,    -1,   146,   338,    -1,   137,   338,   239,   338,    -1,
      -1,   123,   331,   124,    -1,   332,    -1,   331,   239,   332,
      -1,    -1,   333,    -1,   332,   333,    -1,   156,    -1,   125,
      -1,   133,    40,   354,   239,   354,   239,   354,    42,   354,
     239,   354,    42,   354,    41,    -1,   166,    40,   337,    41,
      -1,   209,    40,   354,   354,    41,    -1,     3,    40,     3,
      41,    -1,    40,   334,    41,    -1,   132,    40,   335,    41,
      -1,   167,    -1,   168,    -1,   334,   239,    -1,    -1,   336,
      -1,   335,   239,   336,    -1,   211,    -1,   212,    -1,   208,
      -1,   182,    -1,   180,    -1,   116,    -1,     5,    -1,    12,
      -1,    -1,   329,    -1,    -1,   113,   195,    -1,   249,   114,
     249,    -1,    76,   249,   114,   249,    -1,   135,   249,   114,
     249,    -1,   192,   249,   114,   249,    -1,    76,   114,   249,
      -1,   135,   114,   249,    -1,   192,   114,   249,    -1,    -1,
     121,    77,   244,    -1,   344,    -1,    -1,   148,    77,   345,
      -1,   346,    -1,   345,   239,   346,    -1,   249,   347,    -1,
      -1,    71,    -1,    98,    -1,    -1,   122,   249,    -1,    -1,
      68,    -1,   100,    -1,   249,    -1,   249,   431,    -1,   249,
      70,   431,    -1,    34,    -1,   350,    -1,   351,   239,   350,
      -1,   353,    -1,   352,   239,   353,    -1,   354,    -1,   354,
      70,   429,    -1,   354,   429,    -1,   322,    70,   429,    -1,
     322,   429,    -1,   355,    -1,    40,   355,    41,    70,   429,
      -1,   429,    -1,    40,   355,    41,    -1,   353,   356,   132,
     353,   147,   249,    -1,   353,   132,   353,   147,   249,    -1,
     115,   357,    -1,   136,   357,    -1,   163,   357,    -1,   128,
      -1,   150,    -1,    -1,   111,   360,   359,    -1,   321,    -1,
     262,    -1,   314,    -1,   263,    -1,   236,    -1,    -1,   175,
     187,   366,    -1,   175,   209,   147,   354,   366,    -1,   175,
      86,   114,   354,   366,    -1,   175,    86,    30,   354,   366,
      -1,   175,   186,   228,   366,    -1,   175,   224,   228,   366,
      -1,   175,   365,   235,   366,    -1,   175,   169,    -1,   175,
      87,   186,   354,    -1,    99,   354,   367,    -1,    98,   354,
     367,    -1,   175,   237,   363,    -1,   175,   257,   237,    -1,
     175,   218,   364,    -1,   175,   151,   366,    -1,   175,   368,
     205,    -1,   140,   186,   354,    -1,   137,     5,   239,     5,
      -1,   137,     5,    -1,    -1,   377,    -1,   113,    89,    -1,
     113,    89,    40,    41,    -1,   118,    -1,   172,    -1,    -1,
      -1,    28,     4,    -1,   201,   249,    -1,    -1,     4,    -1,
      -1,   115,    -1,    87,   196,   370,    -1,   371,    -1,   370,
     239,   371,    -1,   372,   126,    77,   373,    -1,     4,    -1,
       4,    -1,   102,   196,   375,    -1,   372,    -1,   375,   239,
     372,    -1,   174,   152,   377,    24,   373,    -1,    69,   196,
     372,   126,    77,   373,    -1,   113,   372,    -1,    -1,   158,
     196,   380,    -1,   372,   194,   372,    -1,   379,    -1,   380,
     239,   379,    -1,    69,   196,   372,   382,    -1,   139,    -1,
     232,    -1,   204,    -1,    -1,   203,    84,   177,    -1,    -1,
      72,   383,    -1,   179,   193,   384,    -1,    83,   383,    -1,
     164,   383,    -1,   165,   389,   390,     5,    -1,    -1,   118,
      -1,    -1,   206,    -1,   207,    -1,   120,   392,   147,   395,
     194,   375,    -1,   393,    -1,   392,   239,   393,    -1,    68,
     394,    -1,    69,    -1,    87,    -1,    87,   196,    -1,    97,
      -1,   102,    -1,   104,    -1,   120,   149,    -1,   130,    -1,
     195,    -1,   171,    -1,   159,    -1,   161,    -1,    -1,    34,
      -1,   429,    -1,   162,   392,   397,   114,   375,    -1,   147,
     395,    -1,    -1,   154,   399,   114,   400,    -1,   431,    -1,
     321,    -1,   314,    -1,   263,    -1,   262,    -1,   174,   402,
      -1,   174,   174,   404,    -1,   403,    -1,   402,   239,   403,
      -1,    14,   405,   249,    -1,   428,   405,   249,    -1,   118,
     428,   405,   249,    -1,   172,   428,   405,   249,    -1,   119,
      42,   428,   405,   249,    -1,   173,    42,   428,   405,   249,
      -1,    13,   405,   249,    -1,   256,   405,   249,    -1,    14,
     405,   407,    -1,   194,    -1,    24,    -1,    14,    -1,   256,
      -1,    40,   408,    41,    -1,   246,    -1,   408,   239,   246,
      -1,   109,   399,   410,    -1,   197,   411,    -1,    -1,   406,
      -1,   411,   239,   406,    -1,   413,   154,   399,    -1,    94,
      -1,   102,    -1,    69,   186,   354,   415,    -1,    69,   186,
     354,   158,   194,   354,    -1,   416,    -1,   415,   239,   416,
      -1,    66,   417,   295,    -1,   102,   417,   428,   418,    -1,
      69,   417,   428,   419,    -1,   158,   417,   428,   194,   431,
      -1,    85,    -1,    -1,    78,    -1,   160,    -1,    -1,   174,
      20,    10,    -1,   102,    20,    10,    -1,   174,    96,   246,
      -1,   102,    96,    -1,    69,   181,   174,   422,    -1,    69,
     181,   421,    90,   144,    24,     4,    -1,    69,   181,   421,
      91,   144,    24,     4,    -1,    69,   181,   183,   144,    24,
       4,    -1,    69,   181,   184,   185,    24,     4,    -1,    -1,
     117,    -1,   423,    -1,   422,   239,   423,    -1,   428,    24,
     246,   424,   425,   227,    24,   426,   427,    -1,    82,     4,
      -1,    -1,   170,    24,   142,    -1,   170,    24,   178,    -1,
     170,    24,    76,    -1,    -1,   222,    -1,   233,    -1,   214,
      -1,   220,    -1,    81,    24,     5,    -1,   225,    24,     4,
     226,    24,     5,    -1,    -1,     3,    -1,   432,    -1,     3,
      -1,   432,    -1,     3,    -1,     3,    -1,   432,    -1,   213,
      -1,   214,    -1,   215,    -1,   216,    -1,   217,    -1,   218,
      -1,   219,    -1,   220,    -1,   221,    -1,   222,    -1,   223,
      -1,   224,    -1,   225,    -1,   226,    -1,   227,    -1,   228,
      -1,   230,    -1,   229,    -1,   231,    -1,   232,    -1,   233,
      -1,   234,    -1,   235,    -1,   236,    -1,   237,    -1,   434,
     437,    -1,    87,    43,     3,    40,   435,    41,    -1,    87,
      43,     3,    40,    41,    -1,   435,   239,   436,    -1,   436,
      -1,    14,   296,    -1,    30,    14,   296,    -1,    46,    14,
     296,    -1,    47,    14,   296,    -1,    14,   296,    54,    -1,
      30,    14,   296,    54,    -1,    46,    14,   296,    54,    -1,
      47,    14,   296,    54,    -1,    72,   438,   106,    -1,    -1,
     439,    -1,   439,   440,    -1,   440,    -1,   446,    -1,   450,
      -1,   455,    -1,   454,    -1,   444,    -1,   445,    -1,   326,
     238,    -1,   314,   238,    -1,   263,   238,    -1,   262,   238,
      -1,   321,   238,    -1,   272,   238,    -1,   274,   238,    -1,
     290,   238,    -1,   276,   238,    -1,   277,   238,    -1,   278,
     238,    -1,   280,   238,    -1,   279,   238,    -1,   281,   238,
      -1,   282,   238,    -1,   457,    -1,   456,    -1,    -1,   442,
      -1,   442,   443,    -1,   443,    -1,   446,    -1,   450,    -1,
     455,    -1,   454,    -1,   445,    -1,   326,   238,    -1,   314,
     238,    -1,   263,   238,    -1,   262,   238,    -1,   321,   238,
      -1,   272,   238,    -1,   274,   238,    -1,   290,   238,    -1,
     276,   238,    -1,   277,   238,    -1,   278,   238,    -1,   280,
     238,    -1,   279,   238,    -1,   281,   238,    -1,   282,   238,
      -1,   457,    -1,   456,    -1,    44,   411,   296,   238,    -1,
      44,   411,   296,    96,   246,   238,    -1,    44,   411,   296,
      54,   238,    -1,   174,   402,   238,    -1,   127,   249,   188,
     441,   447,   449,   106,   127,   238,    -1,   127,   249,   188,
     441,   447,   106,   127,   238,    -1,   127,   249,   188,   441,
     449,   106,   127,   238,    -1,   127,   249,   188,   441,   106,
     127,   238,    -1,   448,    -1,   447,   448,    -1,    45,   249,
     188,   441,    -1,   105,   441,    -1,    79,   249,   451,   453,
     106,    79,   238,    -1,   451,   452,    -1,   452,    -1,   202,
     249,   188,   441,    -1,    -1,   105,   441,    -1,    49,   441,
     106,    49,   238,    -1,   113,    14,    30,   248,   194,   248,
      49,   441,   106,    49,   238,    -1,   113,    14,    30,    55,
     248,   194,   248,    49,   441,   106,    49,   238,    -1,    48,
     249,    52,   441,   106,    48,   238,    -1,   238,    -1,    50,
     238,    -1,    50,   202,   249,   238,    -1,    53,     3,    40,
     244,    41,   330,    -1,    53,     3,    40,    41,   330,    -1,
     102,    43,   127,   110,     3,    -1,   102,    43,     3,    -1,
     175,    43,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   260,   260,   269,   276,   283,   284,   285,   286,   288,
     289,   290,   291,   292,   294,   295,   296,   297,   298,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   329,   331,   341,
     345,   352,   354,   360,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   382,   384,   386,   388,   394,   402,
     406,   410,   414,   418,   426,   427,   431,   435,   436,   437,
     438,   439,   440,   441,   444,   445,   449,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   472,   476,   480,   484,   488,   492,   496,
     500,   504,   508,   512,   516,   520,   527,   531,   536,   544,
     545,   549,   551,   556,   563,   564,   569,   573,   581,   595,
     623,   698,   714,   718,   740,   748,   755,   756,   757,   758,
     762,   766,   780,   794,   804,   808,   815,   829,   845,   852,
     858,   864,   871,   875,   880,   886,   903,   914,   927,   943,
     949,   963,   978,   993,  1009,  1025,  1041,  1058,  1074,  1095,
    1114,  1131,  1144,  1149,  1164,  1181,  1201,  1221,  1238,  1241,
    1245,  1249,  1256,  1260,  1269,  1278,  1280,  1282,  1284,  1286,
    1288,  1297,  1306,  1308,  1310,  1312,  1317,  1324,  1326,  1333,
    1340,  1347,  1354,  1356,  1358,  1364,  1376,  1378,  1381,  1385,
    1386,  1390,  1391,  1395,  1396,  1400,  1401,  1405,  1408,  1412,
    1417,  1422,  1424,  1426,  1431,  1435,  1440,  1446,  1451,  1456,
    1461,  1466,  1471,  1476,  1481,  1486,  1492,  1500,  1501,  1512,
    1522,  1523,  1528,  1532,  1544,  1561,  1571,  1573,  1577,  1584,
    1595,  1609,  1620,  1638,  1639,  1646,  1651,  1659,  1664,  1668,
    1669,  1676,  1680,  1686,  1687,  1701,  1711,  1716,  1717,  1721,
    1725,  1730,  1740,  1761,  1783,  1809,  1810,  1818,  1850,  1876,
    1898,  1920,  1946,  1947,  1951,  1958,  1966,  1974,  1978,  1982,
    1994,  1997,  2011,  2015,  2020,  2026,  2030,  2037,  2041,  2045,
    2049,  2055,  2061,  2068,  2073,  2078,  2082,  2089,  2094,  2101,
    2105,  2112,  2116,  2124,  2128,  2132,  2136,  2142,  2144,  2150,
    2151,  2157,  2158,  2166,  2173,  2180,  2187,  2194,  2205,  2216,
    2231,  2232,  2239,  2240,  2244,  2251,  2253,  2258,  2266,  2267,
    2269,  2275,  2276,  2284,  2287,  2291,  2298,  2303,  2311,  2319,
    2329,  2333,  2340,  2342,  2347,  2351,  2355,  2359,  2363,  2367,
    2371,  2380,  2388,  2392,  2396,  2405,  2411,  2417,  2423,  2430,
    2431,  2441,  2449,  2450,  2451,  2452,  2456,  2457,  2468,  2470,
    2472,  2474,  2476,  2478,  2480,  2485,  2487,  2489,  2491,  2493,
    2497,  2510,  2514,  2518,  2525,  2531,  2540,  2550,  2554,  2556,
    2558,  2563,  2564,  2565,  2570,  2571,  2573,  2579,  2580,  2585,
    2586,  2596,  2602,  2606,  2612,  2618,  2624,  2636,  2642,  2646,
    2658,  2662,  2668,  2673,  2684,  2690,  2696,  2700,  2712,  2718,
    2723,  2737,  2742,  2746,  2751,  2755,  2761,  2773,  2785,  2797,
    2804,  2808,  2816,  2820,  2825,  2839,  2850,  2854,  2860,  2866,
    2871,  2876,  2881,  2886,  2892,  2897,  2902,  2907,  2912,  2917,
    2924,  2929,  2934,  2939,  2951,  2991,  2996,  3008,  3015,  3020,
    3022,  3024,  3026,  3039,  3045,  3053,  3057,  3064,  3070,  3077,
    3084,  3091,  3098,  3105,  3112,  3123,  3133,  3134,  3138,  3141,
    3147,  3154,  3155,  3170,  3177,  3182,  3187,  3191,  3204,  3212,
    3214,  3225,  3231,  3242,  3246,  3253,  3258,  3264,  3269,  3278,
    3279,  3283,  3284,  3285,  3289,  3294,  3299,  3303,  3317,  3323,
    3330,  3337,  3344,  3354,  3357,  3365,  3369,  3376,  3391,  3394,
    3398,  3400,  3402,  3405,  3409,  3414,  3419,  3424,  3432,  3436,
    3441,  3452,  3454,  3471,  3473,  3490,  3494,  3496,  3509,  3510,
    3511,  3512,  3513,  3514,  3515,  3516,  3517,  3518,  3519,  3520,
    3521,  3522,  3523,  3524,  3525,  3526,  3527,  3528,  3529,  3530,
    3531,  3532,  3533,  3543,  3548,  3555,  3561,  3565,  3570,  3574,
    3578,  3582,  3586,  3593,  3600,  3607,  3615,  3622,  3625,  3630,
    3634,  3639,  3641,  3643,  3645,  3647,  3649,  3651,  3653,  3655,
    3657,  3659,  3661,  3663,  3665,  3667,  3669,  3671,  3673,  3675,
    3677,  3679,  3682,  3684,  3691,  3694,  3699,  3703,  3708,  3710,
    3712,  3714,  3716,  3718,  3720,  3722,  3724,  3726,  3728,  3730,
    3732,  3734,  3736,  3738,  3740,  3742,  3744,  3746,  3749,  3751,
    3759,  3765,  3771,  3791,  3803,  3809,  3815,  3819,  3824,  3828,
    3833,  3839,  3850,  3857,  3861,  3866,  3872,  3875,  3886,  3895,
    3904,  3922,  3928,  3938,  3948,  3959,  3967,  3980,  3984,  3998
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
  "DISTINCT", "DOUBLE", "DROP", "DUAL", "TRUNCATE", "ELSE", "END", "END_P",
  "ERROR", "EXECUTE", "EXISTS", "EXPLAIN", "FLOAT", "FOR", "FROM", "FULL",
  "FROZEN", "FORCE", "GLOBAL", "GLOBAL_ALIAS", "GRANT", "GROUP", "HAVING",
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
  "table_list", "truncate_table_stmt", "drop_index_stmt", "index_list",
  "table_name", "insert_stmt", "opt_when", "replace_or_insert",
  "opt_insert_columns", "column_list", "insert_vals_list", "insert_vals",
  "select_stmt", "select_with_parens", "select_no_parens",
  "no_table_select", "select_clause", "select_into_clause",
  "simple_select", "opt_where", "select_limit", "opt_hint",
  "opt_hint_list", "hint_options", "hint_option", "opt_comma_list",
  "join_op_type_list", "join_op_type", "consistency_level", "limit_expr",
  "opt_select_limit", "opt_for_update", "parameterized_trim",
  "opt_groupby", "opt_order_by", "order_by", "sort_list", "sort_key",
  "opt_asc_desc", "opt_having", "opt_distinct", "projection",
  "select_expr_list", "from_list", "table_factor", "relation_factor",
  "joined_table", "join_type", "join_outer", "explain_stmt",
  "explainable_stmt", "opt_verbose", "show_stmt", "lock_table_stmt",
  "opt_limit", "opt_for_grant_user", "opt_scope", "opt_show_condition",
  "opt_like_condition", "opt_full", "create_user_stmt",
  "user_specification_list", "user_specification", "user", "password",
  "drop_user_stmt", "user_list", "set_password_stmt", "opt_for_user",
  "rename_user_stmt", "rename_info", "rename_list", "lock_user_stmt",
  "lock_spec", "opt_work", "opt_with_consistent_snapshot", "begin_stmt",
  "commit_stmt", "rollback_stmt", "kill_stmt", "opt_is_global", "opt_flag",
  "grant_stmt", "priv_type_list", "priv_type", "opt_privilege",
  "priv_level", "revoke_stmt", "opt_on_priv_level", "prepare_stmt",
  "stmt_name", "preparable_stmt", "variable_set_stmt", "var_and_val_list",
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
     476,   477,   478,   479,   480,   481,   482,   483,    59,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   240,   241,   242,   242,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   244,
     244,   245,   245,   245,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   250,   250,   251,   252,
     252,   253,   253,   254,   255,   255,   256,   256,   257,   257,
     257,   257,   257,   257,   258,   259,   260,   260,   260,   260,
     261,   261,   262,   263,   264,   264,   265,   266,   267,   268,
     268,   269,   270,   270,   270,   271,   272,   273,   274,   275,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   287,   288,   289,   290,   291,   292,   292,
     293,   293,   294,   294,   295,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   297,   297,   297,   298,
     298,   299,   299,   300,   300,   301,   301,   302,   302,   303,
     303,   303,   303,   303,   304,   304,   304,   305,   305,   305,
     305,   305,   305,   305,   305,   305,   305,   306,   306,   307,
     308,   308,   309,   309,   310,   311,   312,   312,   312,   313,
     314,   314,   314,   315,   315,   316,   316,   317,   317,   318,
     318,   319,   319,   320,   320,   321,   321,   322,   322,   323,
     323,   323,   323,   324,   324,   325,   325,   326,   327,   327,
     327,   327,   328,   328,   328,   329,   329,   329,   329,   329,
     330,   330,   331,   331,   331,   332,   332,   333,   333,   333,
     333,   333,   333,   333,   333,   333,   333,   334,   334,   335,
     335,   336,   336,   337,   337,   337,   337,   338,   338,   339,
     339,   340,   340,   341,   341,   341,   341,   341,   341,   341,
     342,   342,   343,   343,   344,   345,   345,   346,   347,   347,
     347,   348,   348,   349,   349,   349,   350,   350,   350,   350,
     351,   351,   352,   352,   353,   353,   353,   353,   353,   353,
     353,   354,   355,   355,   355,   356,   356,   356,   356,   357,
     357,   358,   359,   359,   359,   359,   360,   360,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   362,   363,   363,   363,   364,   364,
     364,   365,   365,   365,   366,   366,   366,   367,   367,   368,
     368,   369,   370,   370,   371,   372,   373,   374,   375,   375,
     376,   376,   377,   377,   378,   379,   380,   380,   381,   382,
     382,   383,   383,   384,   384,   385,   385,   386,   387,   388,
     389,   389,   390,   390,   390,   391,   392,   392,   393,   393,
     393,   393,   393,   393,   393,   393,   393,   393,   393,   393,
     394,   394,   395,   395,   396,   397,   397,   398,   399,   400,
     400,   400,   400,   401,   401,   402,   402,   403,   403,   403,
     403,   403,   403,   403,   403,   404,   405,   405,   406,   406,
     407,   408,   408,   409,   410,   410,   411,   411,   412,   413,
     413,   414,   414,   415,   415,   416,   416,   416,   416,   417,
     417,   418,   418,   418,   419,   419,   419,   419,   420,   420,
     420,   420,   420,   421,   421,   422,   422,   423,   424,   424,
     425,   425,   425,   425,   426,   426,   426,   426,   427,   427,
     427,   428,   428,   429,   429,   430,   431,   431,   432,   432,
     432,   432,   432,   432,   432,   432,   432,   432,   432,   432,
     432,   432,   432,   432,   432,   432,   432,   432,   432,   432,
     432,   432,   432,   433,   434,   434,   435,   435,   436,   436,
     436,   436,   436,   436,   436,   436,   437,   438,   438,   439,
     439,   440,   440,   440,   440,   440,   440,   440,   440,   440,
     440,   440,   440,   440,   440,   440,   440,   440,   440,   440,
     440,   440,   440,   440,   441,   441,   442,   442,   443,   443,
     443,   443,   443,   443,   443,   443,   443,   443,   443,   443,
     443,   443,   443,   443,   443,   443,   443,   443,   443,   443,
     444,   444,   444,   445,   446,   446,   446,   446,   447,   447,
     448,   449,   450,   451,   451,   452,   453,   453,   454,   454,
     454,   455,   456,   457,   457,   458,   458,   459,   459,   460
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       3,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     3,     5,     1,     1,
       1,     1,     2,     1,     1,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     1,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     3,     3,     2,     3,     4,     3,     4,     3,
       4,     5,     6,     3,     4,     3,     1,     3,     5,     1,
       0,     1,     2,     4,     2,     0,     4,     4,     4,     5,
       4,     6,     4,     3,     4,     1,     1,     1,     1,     1,
       1,     1,     5,     7,     1,     3,     3,     9,     3,     2,
       0,     3,     1,     3,     0,     1,     5,     1,     2,     2,
       3,     4,     5,     5,     5,     5,     6,     7,     3,     3,
       3,     5,     1,     1,     4,     6,     2,     8,     3,     0,
       1,     3,     1,     5,     3,     1,     1,     1,     1,     1,
       2,     2,     1,     2,     1,     2,     2,     1,     2,     2,
       2,     2,     1,     1,     1,     2,     5,     3,     0,     3,
       0,     1,     0,     3,     0,     3,     0,     2,     0,     2,
       1,     2,     1,     2,     1,     3,     0,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     0,     4,
       0,     2,     1,     3,     5,     6,     0,     1,     3,     1,
       7,     4,     7,     0,     2,     1,     1,     3,     0,     1,
       3,     3,     5,     1,     3,     2,     1,     3,     3,     1,
       2,     3,     4,     5,     8,     1,     1,     9,     9,     4,
       4,     4,     0,     2,     3,     4,     4,     2,     2,     4,
       0,     3,     1,     3,     0,     1,     2,     1,     1,    14,
       4,     5,     4,     3,     4,     1,     1,     2,     0,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     0,     2,     3,     4,     4,     4,     3,     3,     3,
       0,     3,     1,     0,     3,     1,     3,     2,     0,     1,
       1,     0,     2,     0,     1,     1,     1,     2,     3,     1,
       1,     3,     1,     3,     1,     3,     2,     3,     2,     1,
       5,     1,     3,     6,     5,     2,     2,     2,     1,     1,
       0,     3,     1,     1,     1,     1,     1,     0,     3,     5,
       5,     5,     4,     4,     4,     2,     4,     3,     3,     3,
       3,     3,     3,     3,     3,     4,     2,     0,     1,     2,
       4,     1,     1,     0,     0,     2,     2,     0,     1,     0,
       1,     3,     1,     3,     4,     1,     1,     3,     1,     3,
       5,     6,     2,     0,     3,     3,     1,     3,     4,     1,
       1,     1,     0,     3,     0,     2,     3,     2,     2,     4,
       0,     1,     0,     1,     1,     6,     1,     3,     2,     1,
       1,     2,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     0,     1,     1,     5,     2,     0,     4,     1,     1,
       1,     1,     1,     2,     3,     1,     3,     3,     3,     4,
       4,     5,     5,     3,     3,     3,     1,     1,     1,     1,
       3,     1,     3,     3,     2,     0,     1,     3,     3,     1,
       1,     4,     6,     1,     3,     3,     4,     4,     5,     1,
       0,     1,     1,     0,     3,     3,     3,     2,     4,     7,
       7,     6,     6,     0,     1,     1,     3,     9,     2,     0,
       3,     3,     3,     0,     1,     1,     1,     1,     3,     6,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     6,     5,     3,     1,     2,     3,
       3,     3,     3,     4,     4,     4,     3,     0,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     1,     0,     1,     2,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     1,
       4,     6,     5,     3,     9,     8,     8,     7,     1,     2,
       4,     2,     7,     2,     1,     4,     0,     2,     5,    11,
      12,     7,     1,     2,     4,     6,     5,     5,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      48,     0,     0,     0,     0,     0,     0,     0,   432,   432,
       0,   499,     0,     0,     0,   500,     0,     0,   377,     0,
     256,     0,     0,     0,   255,     0,   432,   440,   290,     0,
     403,     0,   290,     0,     0,     4,    24,    23,    22,     9,
      10,    11,    13,    14,    15,    16,    17,    18,    12,    21,
      25,    47,    26,    20,     0,    19,   276,   253,   269,   333,
     275,    27,    28,    46,    35,    36,    37,    38,    39,    42,
      43,    44,    45,    40,    41,    29,    30,    31,    34,     0,
      32,    33,     5,     0,     6,     8,     7,   276,     0,   546,
     548,   549,   550,   551,   552,   553,   554,   555,   556,   557,
     558,   559,   560,   561,   562,   563,   565,   564,   566,   567,
     568,   569,   570,   571,   572,     0,   157,   547,     0,   158,
     159,   176,   523,     0,     0,   431,   435,   437,     0,   179,
       0,   179,     0,   543,   407,   361,   544,   407,     0,   240,
       0,   240,   240,   495,   468,   376,     0,   461,   449,   450,
     452,   453,   454,     0,   456,   459,   458,   457,     0,   446,
       0,     0,     0,   466,   438,   441,   442,   294,   343,   541,
       0,     0,     0,     0,   423,     0,     0,     0,     0,   473,
     475,     0,   542,   545,     0,     0,     0,   410,   401,   404,
     385,   402,     0,   404,     0,   423,     0,   397,     0,     0,
       0,     0,   434,     0,     1,     2,    48,     0,     0,   265,
     343,   343,   343,     0,     0,   321,     0,   270,     0,   587,
     573,   268,   267,     0,     0,   160,   168,   169,   170,     0,
       0,     0,   524,     0,     0,     0,     0,     0,   415,     0,
       0,     0,     0,   411,   412,     0,     0,   282,   408,   388,
     387,   668,     0,     0,     0,   418,   417,   246,     0,     0,
     493,   373,   375,   374,   372,   371,   460,   448,   451,   455,
       0,     0,   394,     0,     0,   426,   424,     0,     0,   443,
     444,     0,     0,   308,   298,     0,     0,   297,     0,   305,
     306,     0,     0,   292,   295,   344,   345,     0,   487,   486,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     474,     0,     0,     0,   669,     0,     0,     0,     0,     0,
     392,   404,   378,     0,     0,   391,   398,   404,     0,   389,
     390,   404,   393,     0,     0,   436,     0,     3,   258,   541,
      54,    56,    55,    58,    57,    59,    60,    62,    61,     0,
       0,     0,     0,   120,     0,     0,   558,    64,    65,    84,
     254,    68,    73,    69,    70,     0,    71,    51,     0,   542,
       0,     0,     0,     0,     0,     0,   321,   271,   322,   498,
       0,     0,   614,     0,     0,     0,     0,     0,   290,     0,
     662,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   588,   590,   595,
     596,   591,   592,   594,   593,   613,   612,     0,   290,     0,
      49,   174,     0,     0,   518,   525,     0,     0,     0,     0,
       0,   510,   510,   510,   510,   501,   503,     0,   429,   430,
     428,     0,     0,     0,     0,     0,     0,     0,   253,     0,
     241,     0,   239,     0,   242,   354,   359,     0,     0,   247,
     529,   488,   489,   496,   494,   462,     0,   463,   447,   472,
     471,   470,   469,   467,     0,     0,   465,     0,   439,     0,
       0,     0,     0,     0,     0,   291,     0,   296,   349,   346,
     350,   319,   483,     0,     0,   477,     0,     0,   422,     0,
       0,     0,     0,   484,   476,   478,   404,   404,   386,   405,
     406,   382,   404,   399,   383,   396,   384,     0,   133,   140,
       0,   141,     0,     0,     0,    49,     0,     0,     0,     0,
       0,     0,   251,   104,    85,    86,     0,    49,    71,   119,
       0,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   290,   276,   281,   275,
     279,   280,   338,   334,   335,   317,   318,   287,   288,   272,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   615,   617,
     622,   618,   619,   621,   620,   639,   638,     0,   663,     0,
       0,     0,     0,     0,     0,   600,   599,   602,   603,   605,
     606,   607,   609,   608,   610,   611,   604,   598,   601,   597,
     586,   589,   156,   666,   290,     0,     0,   171,     0,     0,
       0,     0,     0,     0,   509,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   575,     0,     0,     0,   577,   178,
       0,   413,     0,     0,     0,   283,   142,   667,   276,     0,
     359,     0,     0,   358,   370,   368,     0,   370,   370,     0,
       0,   356,   419,     0,     0,     0,   244,     0,     0,   425,
     427,   464,     0,   303,   307,   311,   312,     0,   309,     0,
     316,   315,   314,   313,     0,     0,   293,     0,   347,     0,
       0,   320,   273,   126,   127,   479,     0,   416,   420,   480,
       0,     0,   485,   381,   380,   379,     0,     0,   128,     0,
       0,     0,     0,     0,     0,   130,     0,     0,     0,   132,
     433,   282,   144,     0,     0,   259,     0,     0,    66,     0,
     125,   121,    63,   103,   102,     0,     0,     0,    99,    97,
      98,    96,    95,    94,   115,   100,     0,     0,    74,     0,
       0,   113,   116,   107,   105,   109,     0,    87,    88,    89,
      90,    91,    93,    92,     0,   139,   138,   137,   136,    53,
      52,   343,   339,   340,   337,     0,     0,     0,     0,   189,
     216,   192,   216,   202,   204,   197,   208,   212,   210,   188,
     187,   203,   208,   194,   186,   214,   214,   185,   216,   216,
       0,   614,   626,   625,   628,   629,   631,   632,   633,   635,
     634,   636,   637,   630,   624,   627,   623,     0,   616,     0,
     172,   173,     0,     0,     0,     0,     0,     0,   656,   654,
       0,   614,     0,   643,   665,    50,   175,   526,    61,   529,
     521,   522,     0,     0,   505,     0,     0,   513,   502,     0,
     510,   504,   421,   578,     0,     0,     0,   574,     0,     0,
       0,   180,   182,   414,     0,   284,   362,   243,   357,   369,
     365,     0,   366,   367,     0,   355,   245,   249,   248,   528,
     497,   445,   302,   304,     0,     0,   300,     0,   348,   282,
     282,   352,   351,   481,   482,   491,     0,   400,   395,   327,
       0,   328,     0,   329,     0,     0,   323,   129,     0,   253,
       0,   257,     0,     0,   253,    50,     0,     0,   122,     0,
     101,     0,   114,    75,    76,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   108,   106,   110,   134,     0,   336,
     285,   289,   286,     0,   199,   198,     0,   190,   211,   195,
       0,   193,   191,     0,   205,   196,   200,   201,     0,     0,
     640,     0,     0,   664,     0,     0,     0,     0,     0,   161,
       0,     0,   614,   653,     0,     0,     0,     0,     0,   533,
     519,   520,   218,     0,     0,   507,   511,   512,   506,     0,
     582,   579,   580,   581,   576,     0,   226,     0,     0,   150,
       0,     0,     0,   310,     0,   301,   319,     0,   330,   490,
       0,   324,   325,   326,   131,   145,   143,   146,   252,   260,
     263,     0,     0,   250,    67,     0,   124,   118,     0,   111,
      77,    78,    79,    80,    81,    83,    82,   117,     0,     0,
       0,     0,     0,   642,     0,     0,   658,   162,   164,   163,
     165,     0,     0,   614,   657,     0,     0,     0,     0,   614,
       0,     0,   648,     0,     0,     0,     0,   184,     0,   517,
       0,     0,   508,   583,   584,   585,     0,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   177,   224,   181,
       0,     0,   154,   360,   364,     0,     0,   274,   353,     0,
     341,   492,   261,     0,     0,   123,   112,     0,   215,   207,
       0,   209,   213,   641,     0,   166,     0,   655,     0,     0,
       0,     0,   651,     0,     0,   649,     0,     0,     0,     0,
       0,   220,     0,     0,     0,   222,   217,   515,   514,   516,
       0,   237,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   148,     0,   149,   147,   152,   155,   363,
       0,     0,     0,   278,   264,     0,     0,   661,   167,   652,
       0,   614,   614,   647,     0,     0,     0,   282,   532,   530,
     531,     0,   219,   221,   223,   183,   236,   233,   235,   228,
     227,   232,   231,   230,   229,   234,   225,     0,     0,     0,
     331,   342,   262,   206,   614,     0,   650,   645,     0,   646,
     321,   536,   537,   534,   535,   540,   151,   153,     0,     0,
       0,   644,   277,     0,     0,   527,     0,     0,     0,     0,
       0,     0,     0,   659,   538,     0,     0,   660,     0,     0,
       0,   299,   539
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    33,    34,    35,   419,   357,   358,   359,   769,   489,
     771,   361,   540,   750,   751,   939,   362,   363,   364,   365,
     784,   526,   582,   583,   741,   742,    38,  1019,  1112,  1175,
    1176,  1177,   584,   115,   585,    41,   586,   587,   588,   589,
     590,   591,   592,    42,    43,    44,    45,   231,    46,    47,
     593,    49,   242,   880,   881,   882,   820,   967,   971,   969,
     974,   964,  1087,  1156,  1107,  1178,  1162,    50,   254,   452,
      51,    52,   458,   896,   594,   209,    54,   531,   744,   934,
    1041,   595,   366,    57,    58,    59,   596,    60,   448,   711,
     168,   292,   293,   294,   480,   697,   698,   704,   577,   712,
     217,   527,  1120,   214,   215,   573,   574,   794,  1183,   297,
     490,   491,   910,   911,   455,   456,   679,   890,    61,   265,
     146,    62,    63,   329,   325,   199,   320,   249,   200,    64,
     243,   244,   255,   718,    65,   256,    66,   306,    67,   275,
     276,    68,   440,   126,   335,    69,    70,    71,    72,   166,
     281,    73,   158,   159,   267,   466,    74,   278,    75,   143,
     473,    76,   179,   180,   310,   300,   463,   722,   916,    77,
     260,   464,    78,    79,    80,   435,   436,   649,  1008,  1005,
      81,   236,   424,   425,   686,  1086,  1235,  1245,   367,   368,
     201,   116,   369,    82,    83,   657,   658,   220,   406,   407,
     408,   597,   598,   599,   409,   600,   601,  1081,  1082,  1083,
     602,   848,   849,   994,   603,   604,   605,   606,    84,    85,
      86
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -881
static const yytype_int16 yypact[] =
{
    3437,    23,  2723,    73,  2723,  2723,  2723,   177,   -89,   -89,
      13,  -881,    19,  2958,  2958,   189,    43,  2723,   -75,   763,
    -881,   132,  2723,   146,  -881,   763,   -89,   249,   265,  2412,
    3218,   198,   265,   402,   -41,  -881,  -881,  -881,  -881,  -881,
    -881,  -881,  -881,  -881,  -881,  -881,  -881,  -881,  -881,  -881,
    -881,  -881,  -881,  -881,   278,  -881,     1,   211,  -881,   335,
      99,  -881,  -881,  -881,  -881,  -881,  -881,  -881,  -881,  -881,
    -881,  -881,  -881,  -881,  -881,  -881,  -881,  -881,  -881,   277,
    -881,  -881,  -881,   347,  -881,  -881,  -881,   403,   406,  -881,
    -881,  -881,  -881,  -881,  -881,  -881,  -881,  -881,  -881,  -881,
    -881,  -881,  -881,  -881,  -881,  -881,  -881,  -881,  -881,  -881,
    -881,  -881,  -881,  -881,  -881,   396,  -881,  -881,   420,  -881,
     724,  -881,   251,  2958,   477,  -881,  -881,  -881,   481,   375,
     477,   375,  2958,  -881,   488,  -881,  -881,   488,   218,   389,
     477,   389,   389,   322,  -881,  -881,   365,   362,  -881,   302,
    -881,  -881,  -881,   429,  -881,  -881,  -881,  -881,   -65,  -881,
    2958,   424,   477,   -35,  -881,  -881,   264,   400,   315,  -881,
      29,   138,  2983,   527,   442,  2983,   546,   581,    29,   359,
    -881,    29,  -881,  -881,   597,   123,   433,  -881,  -881,    34,
    -881,  -881,   412,    34,   502,   529,   437,   520,   422,   441,
     472,   645,   483,  2958,  -881,  -881,  3437,  2958,  2246,  -881,
     315,   315,   315,   613,   284,     4,   496,  -881,  2723,   822,
    -881,  -881,  -881,   584,  1589,   634,   635,  -881,  -881,   703,
     706,   647,  -881,  2983,   572,   533,   421,   372,  -881,   223,
     679,   700,  2958,   484,  -881,   604,  2958,   537,  -881,  -881,
    -881,  -881,   624,   629,  2564,  -881,   517,  2958,  2564,   743,
    -881,  -881,  -881,  -881,  -881,  -881,  -881,  -881,  -881,  -881,
    2589,   763,  -881,   365,   564,  -881,   521,  2589,   651,  -881,
    -881,   756,   726,  -881,  -881,   736,   737,  -881,   738,  -881,
    -881,   740,   -53,   400,  -881,  -881,  -881,  1751,  -881,  -881,
    2246,   431,  2246,    29,  2983,   477,   757,    29,  2983,    29,
    -881,  2246,   960,  2246,  -881,  2958,  2958,  2958,   778,  2246,
    -881,    34,  -881,  2958,   106,  -881,  -881,    34,   784,  -881,
    -881,    34,  -881,  1336,   707,  -881,   620,  -881,    46,   140,
    -881,  -881,  -881,  -881,  -881,  -881,  -881,  -881,   764,  2246,
    2246,  2246,  1830,  2246,   793,   792,   795,  -881,  -881,  -881,
    3896,  -881,  -881,  -881,  -881,   796,  -881,  -881,   797,   798,
     115,   115,   115,  2246,   505,   505,   728,  -881,  -881,  -881,
    2824,  2246,  3183,   169,  2723,  2246,   823,  2246,   265,   960,
    -881,   606,   609,   610,   611,   614,   615,   616,   618,   623,
     626,   630,   631,   638,   639,   640,   745,   822,  -881,  -881,
    -881,  -881,  -881,  -881,  -881,  -881,  -881,    23,   265,    -6,
    3896,  -881,   664,   877,   646,  -881,   860,   862,   863,   744,
     747,   804,   804,   804,   -13,   656,  -881,   819,  -881,  -881,
    -881,   721,   787,   858,   477,   825,   752,  1913,   211,   897,
    -881,   593,   666,  2649,   574,  2849,  -881,   477,    -9,  -881,
     -39,   764,  -881,  -881,   675,  -881,   710,  -881,  -881,  -881,
    -881,  -881,  -881,  -881,   477,   477,  -881,   477,  -881,   912,
       9,   337,  2958,   338,  2958,  -881,   400,  -881,  -881,  1429,
    -881,   287,  3896,   880,   882,  3896,  2246,    29,  -881,   914,
    2246,    29,   887,  3896,  -881,  3896,    34,    34,  -881,  -881,
    3896,  -881,    34,   888,  -881,   690,  -881,   890,  -881,  -881,
    2001,  -881,  2084,  2163,    28,  3661,  2246,   891,   768,  2983,
    1666,   748,  -881,  2317,  -881,  -881,   694,  3824,   576,  3896,
     746,  -881,  2983,  2246,  2246,   513,  2246,  2246,  2246,  2246,
    2246,  2246,  2246,  2246,  2514,   907,   579,  2246,  2246,  2246,
    2246,  2246,  2246,  2246,   365,  2884,   265,  -881,   934,  -881,
     934,  -881,  3735,   711,  -881,  -881,  -881,   145,   817,  -881,
    3171,  3789,   717,   718,   719,   722,   734,   741,   742,   750,
     751,   754,   759,   762,   766,   767,   770,   853,  3183,  -881,
    -881,  -881,  -881,  -881,  -881,  -881,  -881,  2246,  -881,   665,
    1299,   932,  2409,  1507,   320,  -881,  -881,  -881,  -881,  -881,
    -881,  -881,  -881,  -881,  -881,  -881,  -881,  -881,  -881,  -881,
    -881,  -881,  -881,  -881,   265,  2246,   959,  -881,  2983,   495,
     971,   972,   954,   966,  -881,  2983,  2983,  2983,  2958,  2983,
     395,   914,  3478,   969,  -881,   977,   980,    33,  -881,  -881,
    2932,  -881,   914,  2958,  2246,  3896,  -881,  -881,  2539,   574,
     961,  2564,  2958,  -881,   845,  -881,  2564,   845,   845,   869,
    2958,  -881,  -881,  2958,  2958,   999,  -881,   743,   477,  -881,
    -881,   517,   965,  -881,  -881,  -881,  -881,    40,  -881,   773,
    -881,  -881,  -881,  -881,   978,  2958,   400,  2723,  -881,  2448,
    1751,  -881,  -881,  -881,  -881,  3896,  2246,  -881,  -881,  3896,
    2246,   495,  -881,  -881,  -881,  -881,   981,  1016,  -881,  2246,
    2870,  2246,  3682,  2246,  3714,  -881,  3478,  2246,  3848,  -881,
    -881,  -116,  -881,   989,    42,  -881,   983,  2246,  -881,  2246,
     -27,  -881,  -881,  3757,  2317,  2246,  2514,   907,  1174,  1174,
    1174,  1174,  1174,  1174,  1190,  1086,  2514,  2514,  -881,   875,
    1830,  -881,  -881,  -881,  -881,  -881,   149,   587,   587,   986,
     986,   986,   986,  -881,   985,  -881,  -881,  -881,  -881,  -881,
    -881,   315,  -881,  -881,  -881,  2246,   505,   505,   505,  -881,
     987,  -881,   987,  -881,  -881,  -881,   988,   876,   990,  -881,
    -881,  -881,   988,  -881,  -881,   991,   991,  -881,   987,   987,
     117,  3183,  -881,  -881,  -881,  -881,  -881,  -881,  -881,  -881,
    -881,  -881,  -881,  -881,  -881,  -881,  -881,   984,  -881,    69,
     903,   904,   905,   916,  1032,   743,   973,  2246,   -25,  -881,
    2481,  3183,   -56,  -881,  -881,  3896,  -881,  -881,  -881,   968,
    -881,  -881,  1044,  1047,  -881,  3478,    14,    64,  -881,   864,
     804,  -881,  -881,   998,  3478,  3478,  3478,  -881,   515,   920,
      70,  -881,  -881,  -881,  1019,  3896,   992,   574,  -881,  -881,
    -881,   627,  -881,  -881,  2564,  -881,  -881,  -881,  -881,  -881,
    -881,   517,  -881,  -881,   337,  2958,  -881,  1015,  -881,   537,
     -52,   574,  -881,  3896,  3896,  -881,    72,  -881,  -881,  3896,
    2246,  3896,  2246,  3896,  2246,  1020,  3896,  -881,  2983,   211,
    2246,    23,  2983,  2246,   -55,  3872,  2944,  2246,  -881,   957,
    1086,   906,  -881,  -881,  -881,  2514,  2514,  2514,  2514,  2514,
    2514,  2514,  2514,    77,  -881,  -881,  -881,  -881,  1751,  -881,
    -881,  -881,  -881,  1060,  -881,  -881,  1062,  -881,  -881,  -881,
    1063,  -881,  -881,  1064,  -881,  -881,  -881,  -881,   832,   495,
    -881,   967,   836,  -881,   743,   743,   743,   743,   944,   675,
    1071,  2982,  3183,  -881,   974,  2514,   538,   363,   743,   911,
    -881,  -881,  -881,    94,   324,  -881,  -881,  -881,  -881,  2723,
    -881,  1023,  1028,  1029,  -881,  1045,   397,  2932,  2983,   874,
    2958,  2246,   727,  -881,   848,  -881,   284,  2564,   970,  -881,
     495,  3896,  3896,  3896,  -881,  -881,  -881,  3896,  -881,  -881,
    3896,    81,  1049,  -881,  -881,  2246,  3896,  -881,  2514,   765,
     735,   735,  1052,  1052,  1052,  1052,  -881,  -881,    51,  1051,
      84,  1055,  1056,  -881,   855,  1050,  -881,   675,   675,   675,
     675,   743,   976,  3183,  -881,  1021,   547,  2514,  2246,  3183,
     982,   371,  -881,   993,    55,  1084,   883,    38,  1101,  -881,
    1102,   495,  -881,  -881,  -881,  -881,  2983,  1089,  1089,  1089,
    1089,  1089,  1089,  1089,  1089,  1089,  1089,   892,  -881,  -881,
      85,  1087,   397,  -881,  3896,  2246,  2958,  -881,   574,  1053,
    1007,  -881,  -881,  2246,  2246,  3896,   765,  2564,  -881,  -881,
    1130,  -881,  -881,  -881,   899,   675,   743,  -881,   910,  2514,
     933,  3438,  -881,   921,  1014,  -881,  1036,  1017,  2564,   217,
    1119,  -881,  1135,   495,  1027,  -881,  -881,  -881,  -881,  -881,
      86,  -881,  1158,  1159,  1018,  1160,  1161,  1162,  1163,  1164,
    1166,  1191,   397,  -881,  2983,  -881,   994,  -881,  -881,  3896,
    1173,  2246,  2246,  -881,  3896,    87,  1175,  -881,   675,  -881,
    1008,  3183,  3183,  -881,   996,  1103,   997,   -52,  -881,  -881,
    -881,   317,  -881,  -881,  -881,  -881,  -881,  -881,  -881,  -881,
    -881,  -881,  -881,  -881,  -881,  -881,  -881,    91,   397,  2958,
    1000,  3896,  -881,  -881,  3183,  1123,  -881,  -881,  1002,  -881,
     728,  -881,  -881,  -881,  -881,   -17,  -881,  -881,  1003,  1126,
    1187,  -881,  -881,  1213,  1214,  -881,  2958,  1192,  1005,  1240,
    1243,  1206,  1013,  -881,  -881,  1026,  2958,  -881,  1231,  1215,
    1252,  -881,  -881
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -881,  -881,  -881,  1054,  -324,  -881,  -602,  -344,  -202,   753,
     504,  -881,  -881,  -881,   509,  -881,     0,  1232,  -881,  -881,
    -881,  -881,    30,    65,  -881,   336,  -881,  -881,  -881,  -881,
    -881,    45,    41,    27,    59,  -881,  -181,  -165,  -164,  -162,
    -146,  -110,   -99,  -881,  -881,  -881,  -881,   657,  -881,  -881,
      79,  -881,  1134,  -881,   250,   625,  -612,   457,  -881,  -881,
     455,  -376,  -881,  -881,  -881,  -880,    52,  -881,   469,  1022,
    -881,  -881,  -881,  -881,   137,  -441,  -881,  -881,  -696,  -881,
     148,    68,    22,     5,  -881,   292,   -90,   301,  -707,  1067,
     -19,  -881,   788,  -292,  -881,  -881,   374,  -881,  -339,   256,
    -210,  -881,  -881,  -881,  -881,  -881,   489,  -881,  -881,  -194,
     573,  -605,   141,  -244,    31,   834,  -881,   -43,  -881,  -881,
    -881,  -881,  -881,  -881,  -881,  -881,  -142,  1149,  -881,  -881,
    -881,   844,   -78,  -290,  -881,  -438,  -881,  1095,  -881,   816,
    -881,  -881,  -881,   130,  -881,  -881,  -881,  -881,  -881,  -881,
    -881,  -881,  1267,  1024,  -881,  1030,  -881,  -881,  -881,    39,
    -881,  -881,   909,  1031,  -881,  -111,   607,  -881,  -881,  -881,
    -881,  -331,  -881,  -881,  -881,  -881,   643,   321,  -881,  -881,
    -881,  -881,  -881,   670,   450,  -881,  -881,  -881,    -8,    12,
    -881,     2,    -2,  -881,  -881,  -881,   460,  -881,  -881,  -881,
     940,  -774,  -881,   755,  -881,   -88,   -76,  -881,   270,   271,
     -74,  -881,   506,  -881,   -73,   -71,   -68,   -67,  -881,  -881,
    -881
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -546
static const yytype_int16 yytable[] =
{
     117,   487,   117,   117,   117,   377,    88,   666,   852,   524,
     454,   136,   136,   203,   454,   117,   370,   371,   372,   144,
     117,   181,    56,    87,   144,   135,   135,   182,   536,   178,
      36,   119,   120,   121,   929,   634,   578,   859,   395,   691,
     873,    39,  -266,   685,   134,   137,   239,   981,  1151,   580,
     693,   322,   245,   298,   396,   397,   128,   398,  1152,    40,
     302,   161,   318,     1,  1243,    37,   205,   311,    55,   735,
     313,   485,   644,   399,   877,   998,   118,   997,   937,    48,
     992,   903,   270,   931,   274,   447,   530,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
     556,   557,   558,   559,   560,   561,   562,   563,  -266,   400,
     238,  1016,   277,  1029,  1088,   125,  1003,   216,  1057,   915,
     401,   136,  1122,   928,   925,  1129,  1173,  1205,  1222,   405,
     136,   410,  1236,   132,  1153,   135,  1108,    53,   683,   127,
    -321,  -332,  1006,   411,   135,   412,   413,   208,   414,   447,
    -332,   415,   416,   315,   237,     1,   164,   954,   136,   955,
     956,   145,   298,   247,   303,  1127,   579,   307,    56,  1148,
     182,   978,   135,   182,   271,   749,   261,   847,   301,   511,
    -545,   648,  -543,   710,  1042,   514,   486,  1027,  1004,   516,
    1089,   272,   496,  1154,    28,   513,   500,   206,   502,   129,
     671,   136,  1026,  1028,   271,   136,  -321,   669,  1244,   130,
     768,   262,   216,   979,   264,   135,   117,    28,  1074,   135,
     144,   251,   131,   299,  1007,   426,   395,   498,    56,   142,
     684,   182,   138,   635,   336,   319,    36,   316,   338,  -266,
     136,    56,   396,   397,   136,   398,   498,    39,   694,   391,
     901,  1155,   136,  1002,   135,   136,   136,   379,   135,   462,
     393,   399,  1011,  1012,  1013,    40,   135,   635,   136,   135,
     135,    37,   878,   443,    55,   136,   453,   446,   394,   904,
     453,   932,   467,   263,   392,    48,   566,   404,   459,   467,
     710,   796,  1216,  1198,   687,    56,   497,   400,   402,  1137,
     501,  -321,   182,   469,   181,  1142,   182,   983,   401,  1017,
     182,  1030,   178,   136,   136,   136,   635,   405,   160,   410,
    1123,   136,  1110,  1130,   932,   932,  1123,   135,   135,   135,
     932,   411,   299,   412,   413,   135,   414,  -321,   470,   415,
     416,   472,   162,    53,  1090,   252,   506,   507,   508,   437,
     210,   211,   212,  1058,   512,   980,   403,    88,   122,  1199,
      56,   872,   438,   123,   723,   724,   245,   165,   232,   613,
     725,   607,   883,   124,   538,   139,   541,  1064,   117,   682,
     462,   181,   117,   295,   797,   140,   716,   182,   167,   178,
     720,   202,   567,   567,   567,  1200,   689,   274,   141,   633,
    1160,   709,   204,   282,    56,     1,   532,   608,  1078,   207,
     471,   609,   768,   208,   487,   296,  1078,  1225,  1226,   219,
    1091,   374,   768,   768,   374,   233,   965,   887,  1121,    56,
     375,   218,   891,   375,   234,   235,   493,   391,   431,    56,
     283,   432,   976,   977,   221,   494,   953,   222,   393,   136,
    1239,   136,   223,   136,   700,   439,    88,   960,   961,   962,
     224,   431,    12,   135,   432,   673,   394,   681,  1079,  1080,
     279,   280,   392,   668,   433,   404,  1079,  1144,  1217,  1097,
     136,   238,   136,   213,   240,   632,   402,   117,  1036,  1159,
    1230,   708,   248,  1043,   135,    20,   135,   433,   268,   340,
     341,   342,   241,   343,   344,   345,   768,   346,   347,   858,
     575,   429,   430,   699,   989,   705,   253,   576,   701,   259,
     702,   743,   745,   266,    24,   284,   710,   182,   182,   652,
     434,  1231,   285,   286,   752,    88,    28,  1232,   273,  1233,
     182,   755,   756,   757,   403,   653,   703,   791,   695,   696,
    1234,  1203,    87,   870,   941,   305,   287,   790,   853,   312,
      32,   655,   656,   182,   943,   944,   288,   289,   290,   304,
     946,   947,   948,   949,   950,   951,   952,   772,   269,   946,
     947,   948,   949,   950,   951,   952,    56,   773,   308,   774,
     775,  -276,  -276,  -276,   785,   309,   133,   958,   312,   776,
     314,   768,   768,   768,   768,   768,   768,   768,   768,   291,
     257,   258,  1098,  1099,  1100,   854,  1101,   221,  1102,   317,
      56,   559,   560,   561,   562,   563,  1103,  1104,  1105,   786,
     426,  1106,   788,   451,   892,   893,   182,   865,   866,   867,
     321,   869,   324,   182,   182,   182,   136,   182,   996,   323,
    1022,   768,   865,  1067,  1068,  1069,  1070,   328,   182,   330,
     135,   136,   568,   570,   571,   327,   136,  1084,   355,   136,
     136,   569,   569,   569,   136,   135,   331,   332,   136,   868,
     673,   136,   136,   135,   888,   333,   334,   462,   135,   674,
     373,   378,   895,   453,   884,   135,   135,   417,   453,  -172,
    -173,   787,   675,   136,   768,   117,   676,   136,   421,   908,
     677,   422,   423,  -276,   897,   898,   427,   135,   428,   441,
     442,   135,  -276,   444,  -276,   840,   841,   842,   843,   844,
     445,   453,  1077,   768,   449,   652,   907,   678,   447,   450,
    1135,  1139,   674,  1049,  1050,  1051,  1052,  1053,  1054,  1055,
    1056,   653,   645,   646,   647,   675,   457,   461,   474,   676,
     475,   478,   654,   677,    28,   477,   479,   655,   656,   948,
     949,   950,   951,   952,  1021,    88,   481,   482,   483,   772,
     484,   499,   509,  1118,   225,   226,   227,   228,   229,   515,
     678,   528,   538,  1076,   529,   768,   845,   946,   947,   948,
     949,   950,   951,   952,   301,  1188,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   147,   148,     1,   542,  -135,   564,   611,   230,   565,
    -544,   216,   674,    56,   615,   462,  1126,   616,   617,   618,
     149,   630,   619,   620,   621,   675,   622,  1220,   636,   676,
     150,   623,     1,   677,   624,   151,   380,   152,   625,   626,
     381,   382,   383,    56,  1115,  1140,   627,   628,   629,     4,
     384,     6,   637,   153,   639,   638,   640,   641,   642,   644,
     678,   643,   136,   154,   945,   650,   651,   659,   660,   663,
     667,   385,   662,   136,   688,   671,   135,   946,   947,   948,
     949,   950,   951,   952,   687,   692,   453,   135,   717,    12,
     743,   713,   155,   714,  1039,  1048,   182,   721,   726,   727,
     182,   728,   739,   747,   156,   386,  1024,  1190,   946,   947,
     948,   949,   950,   951,   952,   740,   746,   770,   749,   387,
     795,   212,    20,    56,   798,   822,   823,   824,   157,   837,
     825,   360,   850,   169,   856,   946,   947,   948,   949,   950,
     951,   952,   826,   170,   171,   860,   861,   420,   862,   827,
     828,    24,  1191,   874,   462,   462,   462,   462,   829,   830,
     863,   875,   831,   388,   876,   889,   389,   832,   462,  1038,
     833,   894,   886,   899,   834,   835,   902,   117,   836,   865,
     745,  1092,   905,   930,    56,   182,   182,    32,   136,   906,
    1242,   918,   917,   933,   563,   136,   957,   963,   966,   968,
     970,   973,  1113,   982,   984,   985,   986,   988,   990,   135,
     946,   947,   948,   949,   950,   951,   952,   987,  1000,   453,
     685,  1001,  1010,   492,  1015,   495,  1025,  1224,  1009,  1018,
     390,  1034,  1020,  1047,   503,  1059,   505,  1060,  1061,  1062,
    1063,   462,   510,  1065,  1066,  1071,  1072,  1093,   172,   173,
    1075,  1085,  1094,  1095,  1111,  1096,   525,  1116,   745,  1124,
     952,  1119,  1128,  1133,   182,    56,  1131,  1132,  1134,  1147,
    1138,    56,   533,   534,   535,   537,   539,  1136,  1149,  1143,
    1150,  1157,  1158,  1161,   136,   554,   555,   556,   557,   558,
     559,   560,   561,   562,   563,   136,   572,  1174,   135,  1182,
    1181,  1172,   175,   176,   581,  1186,   462,  1187,   610,   135,
     612,  1194,  1195,  1201,  1196,  1202,   136,  1180,  1189,   453,
    1163,  1164,  1165,  1166,  1167,  1168,  1169,  1170,  1171,  1193,
     135,  1204,  1206,  1207,  1209,  1210,   745,  1211,  1212,  1213,
     453,  1214,   182,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,  1208,  1215,
     665,   552,   553,   554,   555,   556,   557,   558,   559,   560,
     561,   562,   563,    56,    56,  1219,  1223,   136,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,  1240,
    1228,   135,  1247,  1218,  1227,  1229,  1248,  1249,  1250,   635,
    1241,  1252,  1246,  1253,   136,  1254,    56,  1255,  1256,   715,
    1238,  1257,  1258,   719,   136,  1260,  1261,  1262,   135,   938,
     337,   942,   198,  1237,  1035,   246,   846,  1109,   135,   972,
     864,   975,  1185,   730,   706,   732,   734,  1251,  1023,   738,
     460,   376,  1117,   912,   959,   670,   250,  1259,   661,  1197,
     326,   690,   163,   871,   900,   468,   753,   754,   614,   758,
     759,   760,   761,   762,   763,   764,   765,   476,   857,   999,
     777,   778,   779,   780,   781,   782,   783,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
     556,   557,   558,   559,   560,   561,   562,   563,  1014,   339,
     340,   341,   342,   504,   343,   344,   345,   631,   346,   347,
     348,  1145,  1146,   838,   993,     0,   349,     0,     0,     0,
     839,     0,     0,     0,     0,     0,     0,     0,   350,   351,
     517,     0,     0,     0,     0,     0,   352,   518,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   855,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   519,     0,     0,     0,     0,     0,
       0,     0,   520,     0,     0,   353,     0,   885,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    89,     0,     0,     0,   521,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   354,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
     556,   557,   558,   559,   560,   561,   562,   563,     0,   913,
       0,   522,     0,   914,     0,     0,     0,     0,     0,     0,
       0,     0,   919,     0,   921,     0,   923,     0,     0,     0,
     926,     0,     0,     0,     0,     0,     0,     0,     0,   707,
     935,   847,   936,     0,     0,     0,     0,     0,   940,   355,
     339,   340,   341,   342,     0,   343,   344,   345,     0,   346,
     347,   348,     0,   420,     0,     0,     0,   349,   523,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   350,
     351,   488,     0,     0,     0,     0,     0,   352,   572,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   356,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,     0,   295,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   353,     0,     0,     0,
       0,     0,   339,   340,   341,   342,     0,   343,   344,   345,
     991,   346,   347,   348,     0,     0,     0,   296,     0,   349,
       0,     0,     0,     0,     0,     0,     0,   354,     0,     0,
       0,   350,   351,     0,     0,     0,     0,     0,     0,   352,
     418,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,     0,   353,   169,
       0,     0,     0,  1031,     0,  1032,     0,  1033,     0,     0,
     355,     0,     0,  1037,     0,     0,  1040,     0,     0,     0,
    1046,     0,     0,     0,     0,     0,     0,     0,     0,   354,
       0,     0,     0,     0,     0,     0,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     356,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   339,   340,   341,   342,     0,   343,
     344,   345,   355,   346,   347,   348,     0,     0,     0,     0,
       0,   349,     0,     0,  1114,     0,     0,     0,     0,     0,
       0,     0,     0,   350,   351,   488,     0,     0,     0,     0,
       0,   352,     0,     0,     0,     0,     0,     0,  1125,     0,
       0,     0,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   356,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,     0,     0,     0,
     353,  1141,     0,   339,   340,   341,   342,    28,   343,   344,
     345,     0,   346,   347,   348,     0,     0,     0,     0,     0,
     349,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   354,   350,   351,     0,     0,     0,     0,  1179,     0,
     352,     0,     0,     0,     0,     0,  1184,  1040,     0,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,     0,     0,     0,     0,     0,   353,
       0,     0,     0,     0,     0,     0,   339,   340,   341,   342,
     664,   343,   344,   345,   355,   346,   347,   348,     0,     0,
       0,     0,     0,   349,   420,  1221,     0,     0,     0,     0,
     354,     0,     0,     0,     0,   350,   351,     0,     0,     0,
       0,     0,     0,   352,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   356,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,     0,
       0,     0,   353,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   355,   339,   340,   341,   342,     0,   343,
     344,   345,     0,   346,   347,   348,     0,     0,     0,     0,
       0,   349,     0,   354,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   350,   351,     0,     0,     0,     0,     0,
       0,   352,     0,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   356,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     353,     0,     0,     0,     0,     0,   355,   339,   340,   341,
     342,     0,   343,   344,   345,     0,   346,   347,   348,     0,
       0,     0,     0,     0,   349,     0,     0,     0,     0,     0,
       0,   354,     0,     0,     0,   729,   350,   351,     0,     0,
       0,     0,     0,     0,   352,     0,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   356,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   353,     0,     0,   339,   340,   341,   342,
       0,   343,   344,   345,   355,   346,   347,   348,     0,     0,
       0,     0,     0,   349,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   354,   350,   351,     0,   731,     0,
       0,     0,     0,   352,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   356,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,     0,
       0,     0,   353,     0,     0,     0,     0,     0,     0,   339,
     340,   341,   342,     0,   343,   344,   345,   355,   346,   347,
     348,     0,     0,     0,     0,     0,   349,     0,     0,     0,
       0,     0,     0,   354,     0,     0,     0,   733,   350,   351,
       0,     0,     0,     0,     0,     0,   352,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   356,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,     0,     0,     0,   353,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   355,   545,   546,   547,
     548,   549,   550,   551,   552,   553,   554,   555,   556,   557,
     558,   559,   560,   561,   562,   563,   354,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   356,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   169,     0,     0,     0,   355,
       0,     0,     0,     0,     0,   170,   171,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
     556,   557,   558,   559,   560,   561,   562,   563,     0,     0,
       0,   133,     0,     0,     0,     0,     0,     0,     0,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   356,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   339,   340,   341,   342,   451,   343,
     344,   345,     0,   346,   347,   348,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   766,   767,     0,     0,   339,   340,   341,
     342,   352,   343,   344,   345,     0,   346,   347,   348,     0,
     172,   173,     0,     0,     0,     0,   995,     0,     0,     0,
       0,     0,   133,     0,     0,     0,   766,   767,     0,     0,
       0,   909,     0,     0,   352,     0,     0,     0,     0,     0,
     353,     0,     0,     0,   174,     0,     0,   133,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     221,     0,     0,     0,   175,   176,   177,     0,     0,     0,
       0,   354,   133,   353,     0,     0,     0,   851,     0,     0,
       0,     0,     0,     0,   451,     0,     0,     0,     0,   672,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   465,   354,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
       0,     0,   133,     0,   355,     0,     0,     0,     0,     0,
       0,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,     0,   355,     0,     0,
       0,     0,     0,     0,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   356,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   672,
       0,     0,     0,     0,     0,     0,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   356,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,    89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   461,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   133,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   169,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   789,   680,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   169,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   133,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,   556,   557,   558,   559,   560,
     561,   562,   563,     0,   920,     0,   169,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,   556,   557,   558,   559,   560,   561,   562,
     563,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   879,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1045,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
    1073,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   183,     0,     1,     0,     0,     0,     2,     0,     0,
       0,   381,   382,   383,     0,     0,     0,     0,     0,     0,
       4,   384,     6,     0,   799,   800,   801,     0,     0,     0,
       0,   802,     0,     0,     0,     0,     0,     0,     0,   803,
       0,   184,   385,   804,   805,     0,   806,     0,     0,     0,
       0,     0,   807,     0,     0,     0,     0,     0,     0,     0,
      12,     0,     0,   808,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   386,     0,     0,     0,
     809,     0,     0,     0,   185,   186,     0,     0,     0,     0,
     387,     0,   810,    20,   811,     0,   812,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   813,     0,
       0,     0,     0,   187,     0,     0,   188,     0,     0,     0,
       0,     0,    24,     0,     0,     0,     0,   814,     0,     0,
       0,     0,     0,     0,   388,     0,     0,   389,     0,     0,
     815,   816,   817,     0,     0,     0,     0,     0,     0,   189,
     818,   819,     0,     0,     0,     0,     0,     0,    32,     0,
       0,     0,     0,     0,     0,     0,     0,   190,     0,     0,
     191,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   192,   193,     0,     0,     0,     0,
     687,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   390,     0,  -409,     0,     0,     0,   194,     0,     0,
       0,     0,     0,     0,     0,     0,   195,     0,     0,     0,
       0,     0,   196,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   197,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,   556,
     557,   558,   559,   560,   561,   562,   563,     1,     0,     0,
       0,     2,     0,     0,     0,     0,     0,     0,     0,     0,
       3,     0,     0,     0,     4,     5,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     0,     0,     8,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,     0,     0,     0,    10,     0,     0,     0,     0,     0,
       0,    11,     0,     0,    12,    13,    14,     0,     0,    15,
       0,    16,     0,     0,     0,     0,    17,     0,    18,     0,
       0,   799,   800,   801,     0,     0,     0,    19,   802,     0,
       0,     0,     0,     0,     0,     0,   803,    20,     0,     0,
     804,   805,     0,   806,     0,     0,     0,    21,     0,   807,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     808,    22,     0,     0,     0,    23,    24,     0,     0,    25,
       0,    26,    27,     0,     0,     0,     0,   809,    28,     0,
       0,    29,    30,     0,     0,     0,    31,     0,     0,   810,
       0,   811,     0,   812,     0,     0,  1192,     0,     0,     0,
       0,     0,    32,     0,     0,   813,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   814,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   815,   816,   817,
       0,     0,     0,     0,     0,     0,     0,   818,   819,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,   556,   557,   558,   559,   560,   561,   562,   563,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,   556,   557,   558,   559,   560,   561,   562,
     563,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   736,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,   556,   557,   558,   559,   560,
     561,   562,   563,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,   561,   562,   563,     0,   737,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553,   554,   555,   556,   557,
     558,   559,   560,   561,   562,   563,   922,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   792,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
     556,   557,   558,   559,   560,   561,   562,   563,   924,     0,
       0,     0,     0,   793,     0,     0,     0,     0,     0,     0,
       0,   821,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,   556,   557,   558,   559,   560,
     561,   562,   563,     0,     0,   748,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,   556,
     557,   558,   559,   560,   561,   562,   563,     0,     0,   927,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,   556,   557,   558,   559,   560,   561,   562,
     563,     0,     0,  1044,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,   556,   557,   558,
     559,   560,   561,   562,   563
};

static const yytype_int16 yycheck[] =
{
       2,   293,     4,     5,     6,   215,     1,   448,   613,   333,
     254,    13,    14,    32,   258,    17,   210,   211,   212,    17,
      22,    29,     0,     1,    22,    13,    14,    29,   352,    29,
       0,     4,     5,     6,   741,    41,   375,   639,   219,   477,
     652,     0,    41,    82,    13,    14,   124,   821,    10,   380,
      41,   193,   130,    24,   219,   219,    43,   219,    20,     0,
     171,    22,    28,    40,    81,     0,   107,   178,     0,    41,
     181,   124,    85,   219,    41,   131,     3,   851,   105,     0,
     105,    41,   147,    41,   162,   201,    40,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,   107,   219,
       4,    41,   147,    41,    20,   204,   102,   113,    41,   721,
     219,   123,    41,   239,   736,    41,    41,    41,    41,   219,
     132,   219,    41,   114,    96,   123,  1016,     0,   147,     9,
      41,   137,    78,   219,   132,   219,   219,   202,   219,   201,
     146,   219,   219,    30,   123,    40,    26,     8,   160,    10,
      11,   236,    24,   132,   172,   114,   376,   175,   146,   114,
     172,    54,   160,   175,   239,   202,   146,   202,    40,   321,
      40,   194,    42,   239,   239,   327,   239,   239,   174,   331,
      96,   160,   303,   155,   171,    89,   307,   238,   309,   186,
     239,   203,   909,   910,   239,   207,   107,   451,   225,   196,
     554,   146,   113,    96,   146,   203,   218,   171,   992,   207,
     218,     3,   209,   194,   160,   233,   407,   305,   206,   186,
     239,   233,    43,   239,   203,   201,   206,   114,   207,   238,
     242,   219,   407,   407,   246,   407,   324,   206,   239,   219,
     688,   213,   254,   865,   242,   257,   258,   218,   246,   259,
     219,   407,   874,   875,   876,   206,   254,   239,   270,   257,
     258,   206,   239,   242,   206,   277,   254,   246,   219,   239,
     258,   239,   270,   146,   219,   206,   171,   219,   257,   277,
     239,   146,  1172,    76,   239,   273,   304,   407,   219,  1073,
     308,   202,   304,   273,   312,  1079,   308,   238,   407,   239,
     312,   239,   312,   315,   316,   317,   239,   407,   186,   407,
     239,   323,  1018,   239,   239,   239,   239,   315,   316,   317,
     239,   407,   194,   407,   407,   323,   407,   238,   273,   407,
     407,   273,   196,   206,    20,   127,   315,   316,   317,   126,
      15,    16,    17,   958,   323,   238,   219,   352,   181,   142,
     338,   651,   139,   186,   506,   507,   444,   118,   117,   388,
     512,   202,   662,   196,   352,   186,   354,   979,   380,   457,
     380,   389,   384,    68,   239,   196,   497,   389,   123,   389,
     501,   193,   370,   371,   372,   178,   474,   475,   209,   418,
    1096,   114,     0,     3,   382,    40,   338,   238,    45,   131,
     273,   384,   756,   202,   706,   100,    45,  1191,  1192,    72,
      96,   137,   766,   767,   137,   174,   802,   671,  1030,   407,
     146,   154,   676,   146,   183,   184,     5,   407,    66,   417,
      40,    69,   818,   819,    41,    14,   770,    41,   407,   451,
    1224,   453,    56,   455,   116,   232,   451,   796,   797,   798,
      40,    66,    97,   451,    69,   453,   407,   455,   105,   106,
     206,   207,   407,   451,   102,   407,   105,   106,  1174,    82,
     482,     4,   484,   148,     3,   417,   407,   489,   929,  1091,
    1197,   489,     4,   934,   482,   130,   484,   102,   196,     4,
       5,     6,   127,     8,     9,    10,   850,    12,    13,    14,
       5,    90,    91,   482,   845,   484,   127,    12,   180,   197,
     182,   529,   530,   161,   159,   125,   239,   529,   530,    14,
     158,   214,   132,   133,   542,   530,   171,   220,   114,   222,
     542,    28,    29,    30,   407,    30,   208,   566,   211,   212,
     233,  1153,   530,   158,   756,   113,   156,   565,   238,   239,
     195,    46,    47,   565,   766,   767,   166,   167,   168,    42,
      32,    33,    34,    35,    36,    37,    38,   555,   149,    32,
      33,    34,    35,    36,    37,    38,   564,     8,    42,    10,
      11,    15,    16,    17,   564,    14,     3,   791,   239,    20,
       3,   945,   946,   947,   948,   949,   950,   951,   952,   209,
     141,   142,   215,   216,   217,   634,   219,    41,   221,   186,
     598,    34,    35,    36,    37,    38,   229,   230,   231,   564,
     638,   234,   564,    40,   677,   678,   638,   645,   646,   647,
     228,   649,   113,   645,   646,   647,   648,   649,   850,   147,
     894,   995,   660,   984,   985,   986,   987,   137,   660,   237,
     648,   663,   370,   371,   372,   228,   668,   998,   173,   671,
     672,   370,   371,   372,   676,   663,   235,   205,   680,   648,
     668,   683,   684,   671,   672,    40,   203,   687,   676,   115,
      77,   195,   680,   671,   663,   683,   684,   113,   676,    65,
      65,   564,   128,   705,  1048,   707,   132,   709,     5,   707,
     136,     5,    65,   137,   683,   684,   144,   705,   185,    40,
      20,   709,   146,   239,   148,    60,    61,    62,    63,    64,
     126,   709,   194,  1077,   110,    14,   705,   163,   201,   110,
    1071,   194,   115,   945,   946,   947,   948,   949,   950,   951,
     952,    30,   431,   432,   433,   128,   239,    14,   194,   132,
     239,     5,    41,   136,   171,   114,    40,    46,    47,    34,
      35,    36,    37,    38,   147,   770,    40,    40,    40,   757,
      40,    24,     4,  1027,    60,    61,    62,    63,    64,     5,
     163,    84,   770,   995,   174,  1139,   131,    32,    33,    34,
      35,    36,    37,    38,    40,  1136,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,    68,    69,    40,    42,    40,    40,    14,   114,    42,
      42,   113,   115,   821,   238,   845,  1048,   238,   238,   238,
      87,   106,   238,   238,   238,   128,   238,  1181,   194,   132,
      97,   238,    40,   136,   238,   102,    44,   104,   238,   238,
      48,    49,    50,   851,   147,  1077,   238,   238,   238,    57,
      58,    59,     5,   120,    24,   239,    24,    24,   144,    85,
     163,   144,   894,   130,    19,   239,    77,   110,    40,   147,
       3,    79,    77,   905,   194,   239,   894,    32,    33,    34,
      35,    36,    37,    38,   239,     3,   894,   905,     4,    97,
     928,    41,   159,    41,   932,    19,   928,    40,    40,   239,
     932,    41,    41,   239,   171,   113,   905,  1139,    32,    33,
      34,    35,    36,    37,    38,   177,   198,    40,   202,   127,
     239,    17,   130,   931,   137,   238,   238,   238,   195,   106,
     238,   208,    30,     3,     5,    32,    33,    34,    35,    36,
      37,    38,   238,    13,    14,     4,     4,   224,    24,   238,
     238,   159,    49,    14,   984,   985,   986,   987,   238,   238,
      24,    14,   238,   171,    14,   150,   174,   238,   998,   931,
     238,   132,    41,     4,   238,   238,    41,  1009,   238,  1017,
    1018,  1009,   239,    24,   992,  1017,  1018,   195,  1020,    41,
    1230,     5,    41,    40,    38,  1027,    41,    40,    40,   153,
      40,    40,  1020,    49,   131,   131,   131,     5,    65,  1027,
      32,    33,    34,    35,    36,    37,    38,   131,     4,  1027,
      82,     4,    54,   300,   134,   302,    41,    49,   194,    40,
     238,    41,    70,   106,   311,     5,   313,     5,     5,     5,
     238,  1071,   319,   106,   238,   131,     5,    54,   118,   119,
     106,   170,    54,    54,   210,    40,   333,   239,  1096,    40,
      38,   121,    41,   238,  1096,  1073,    41,    41,    48,   106,
      79,  1079,   349,   350,   351,   352,   353,   131,    24,   127,
     227,    10,    10,    24,  1116,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,  1127,   373,    40,  1116,   122,
      77,   239,   172,   173,   381,     5,  1136,   238,   385,  1127,
     387,   127,   106,    24,   127,    10,  1148,  1116,   238,  1127,
    1098,  1099,  1100,  1101,  1102,  1103,  1104,  1105,  1106,   238,
    1148,   134,     4,     4,     4,     4,  1174,     5,     5,     5,
    1148,     5,  1174,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   180,     8,
     447,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,  1191,  1192,    42,    41,  1219,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,   106,
     127,  1219,   106,   239,   238,   238,    49,    24,    24,   239,
     238,    49,   239,   238,  1246,     5,  1224,     4,    42,   496,
    1219,   238,   226,   500,  1256,    24,    41,     5,  1246,   750,
     206,   757,    30,  1218,   928,   131,   609,  1017,  1256,   812,
     645,   816,  1124,   520,   486,   522,   523,  1246,   904,   526,
     258,   214,  1026,   710,   795,   451,   137,  1256,   444,  1148,
     195,   475,    25,   650,   687,   271,   543,   544,   389,   546,
     547,   548,   549,   550,   551,   552,   553,   277,   638,   859,
     557,   558,   559,   560,   561,   562,   563,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,   878,     3,
       4,     5,     6,   312,     8,     9,    10,   407,    12,    13,
      14,  1081,  1081,   598,   848,    -1,    20,    -1,    -1,    -1,
     607,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   635,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    -1,    -1,    79,    -1,   664,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,    -1,   100,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   110,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,   716,
      -1,   135,    -1,   720,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   729,    -1,   731,    -1,   733,    -1,    -1,    -1,
     737,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
     747,   202,   749,    -1,    -1,    -1,    -1,    -1,   755,   173,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    14,    -1,   770,    -1,    -1,    -1,    20,   192,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    40,   795,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,    -1,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,     8,     9,    10,
     847,    12,    13,    14,    -1,    -1,    -1,   100,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,    -1,    79,     3,
      -1,    -1,    -1,   920,    -1,   922,    -1,   924,    -1,    -1,
     173,    -1,    -1,   930,    -1,    -1,   933,    -1,    -1,    -1,
     937,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    10,   173,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,  1021,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,  1045,    -1,
      -1,    -1,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,    -1,    -1,    -1,
      79,  1078,    -1,     3,     4,     5,     6,   171,     8,     9,
      10,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,    32,    33,    -1,    -1,    -1,    -1,  1115,    -1,
      40,    -1,    -1,    -1,    -1,    -1,  1123,  1124,    -1,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,   173,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    20,  1181,  1182,    -1,    -1,    -1,    -1,
     110,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   171,    -1,   173,     3,     4,     5,     6,    -1,     8,
       9,    10,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    20,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    -1,   173,     3,     4,     5,
       6,    -1,     8,     9,    10,    -1,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,   110,    -1,    -1,    -1,   114,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,   173,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   110,    32,    33,    -1,   114,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,   173,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,   110,    -1,    -1,    -1,   114,    32,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   173,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,   110,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,   173,
      -1,    -1,    -1,    -1,    -1,    13,    14,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,     3,     4,     5,     6,    40,     8,
       9,    10,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,     3,     4,     5,
       6,    40,     8,     9,    10,    -1,    12,    13,    14,    -1,
     118,   119,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,   103,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,   152,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,   172,   173,   174,    -1,    -1,    -1,
      -1,   110,     3,    79,    -1,    -1,    -1,   188,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,   110,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
      -1,    -1,     3,    -1,   173,    -1,    -1,    -1,    -1,    -1,
      -1,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,    -1,   173,    -1,    -1,
      -1,    -1,    -1,    -1,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,    70,
      -1,    -1,    -1,    -1,    -1,    -1,     3,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,     3,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,     3,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    -1,   114,    -1,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   155,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   188,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     188,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,     3,    -1,    40,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,    -1,    73,    74,    75,    -1,    -1,    -1,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      -1,    43,    79,    92,    93,    -1,    95,    -1,    -1,    -1,
      -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      97,    -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,    -1,
     129,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,
     127,    -1,   141,   130,   143,    -1,   145,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,
      -1,    -1,    -1,   115,    -1,    -1,   118,    -1,    -1,    -1,
      -1,    -1,   159,    -1,    -1,    -1,    -1,   176,    -1,    -1,
      -1,    -1,    -1,    -1,   171,    -1,    -1,   174,    -1,    -1,
     189,   190,   191,    -1,    -1,    -1,    -1,    -1,    -1,   151,
     199,   200,    -1,    -1,    -1,    -1,    -1,    -1,   195,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,    -1,
     172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   186,   187,    -1,    -1,    -1,    -1,
     239,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   238,    -1,   205,    -1,    -1,    -1,   209,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   218,    -1,    -1,    -1,
      -1,    -1,   224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   237,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    40,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    57,    58,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    94,    -1,    -1,    97,    98,    99,    -1,    -1,   102,
      -1,   104,    -1,    -1,    -1,    -1,   109,    -1,   111,    -1,
      -1,    73,    74,    75,    -1,    -1,    -1,   120,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    88,   130,    -1,    -1,
      92,    93,    -1,    95,    -1,    -1,    -1,   140,    -1,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,   154,    -1,    -1,    -1,   158,   159,    -1,    -1,   162,
      -1,   164,   165,    -1,    -1,    -1,    -1,   129,   171,    -1,
      -1,   174,   175,    -1,    -1,    -1,   179,    -1,    -1,   141,
      -1,   143,    -1,   145,    -1,    -1,   188,    -1,    -1,    -1,
      -1,    -1,   195,    -1,    -1,   157,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,   190,   191,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   199,   200,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,   114,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,   114,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    -1,    -1,    41,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    -1,    -1,    41,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    -1,    -1,    41,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    40,    44,    53,    57,    58,    59,    69,    72,    83,
      87,    94,    97,    98,    99,   102,   104,   109,   111,   120,
     130,   140,   154,   158,   159,   162,   164,   165,   171,   174,
     175,   179,   195,   241,   242,   243,   262,   263,   266,   272,
     274,   275,   283,   284,   285,   286,   288,   289,   290,   291,
     307,   310,   311,   314,   316,   321,   322,   323,   324,   325,
     327,   358,   361,   362,   369,   374,   376,   378,   381,   385,
     386,   387,   388,   391,   396,   398,   401,   409,   412,   413,
     414,   420,   433,   434,   458,   459,   460,   322,   323,     3,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   273,   431,   432,     3,   273,
     273,   273,   181,   186,   196,   204,   383,   383,    43,   186,
     196,   209,   114,     3,   354,   429,   432,   354,    43,   186,
     196,   209,   186,   399,   431,   236,   360,    68,    69,    87,
      97,   102,   104,   120,   130,   159,   171,   195,   392,   393,
     186,   399,   196,   392,   383,   118,   389,   123,   330,     3,
      13,    14,   118,   119,   152,   172,   173,   174,   256,   402,
     403,   428,   432,     3,    43,    86,    87,   115,   118,   151,
     169,   172,   186,   187,   209,   218,   224,   237,   257,   365,
     368,   430,   193,   330,     0,   107,   238,   131,   202,   315,
      15,    16,    17,   148,   343,   344,   113,   340,   154,    72,
     437,    41,    41,    56,    40,    60,    61,    62,    63,    64,
     114,   287,   117,   174,   183,   184,   421,   354,     4,   372,
       3,   127,   292,   370,   371,   372,   292,   354,     4,   367,
     367,     3,   127,   127,   308,   372,   375,   308,   308,   197,
     410,   262,   263,   314,   321,   359,   161,   394,   196,   149,
     147,   239,   354,   114,   372,   379,   380,   147,   397,   206,
     207,   390,     3,    40,   125,   132,   133,   156,   166,   167,
     168,   209,   331,   332,   333,    68,   100,   349,    24,   194,
     405,    40,   405,   428,    42,   113,   377,   428,    42,    14,
     404,   405,   239,   405,     3,    30,   114,   186,    28,   201,
     366,   228,   366,   147,   113,   364,   377,   228,   137,   363,
     237,   235,   205,    40,   203,   384,   354,   243,   354,     3,
       4,     5,     6,     8,     9,    10,    12,    13,    14,    20,
      32,    33,    40,    79,   110,   173,   223,   245,   246,   247,
     249,   251,   256,   257,   258,   259,   322,   428,   429,   432,
     349,   349,   349,    77,   137,   146,   329,   340,   195,   399,
      44,    48,    49,    50,    58,    79,   113,   127,   171,   174,
     238,   262,   263,   272,   274,   276,   277,   278,   279,   280,
     281,   282,   290,   314,   321,   326,   438,   439,   440,   444,
     445,   446,   450,   454,   455,   456,   457,   113,    41,   244,
     249,     5,     5,    65,   422,   423,   428,   144,   185,    90,
      91,    66,    69,   102,   158,   415,   416,   126,   139,   232,
     382,    40,    20,   354,   239,   126,   354,   201,   328,   110,
     110,    40,   309,   322,   353,   354,   355,   239,   312,   354,
     309,    14,   256,   406,   411,    34,   395,   429,   393,   262,
     263,   314,   321,   400,   194,   239,   395,   114,     5,    40,
     334,    40,    40,    40,    40,   124,   239,   333,    34,   249,
     350,   351,   249,     5,    14,   249,   405,   428,   372,    24,
     405,   428,   405,   249,   403,   249,   354,   354,   354,     4,
     249,   366,   354,    89,   366,     5,   366,    34,    41,    68,
      76,   100,   135,   192,   244,   249,   261,   341,    84,   174,
      40,   317,   321,   249,   249,   249,   244,   249,   322,   249,
     252,   322,    42,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    40,    42,   171,   322,   325,   327,
     325,   325,   249,   345,   346,     5,    12,   338,   338,   340,
     411,   249,   262,   263,   272,   274,   276,   277,   278,   279,
     280,   281,   282,   290,   314,   321,   326,   441,   442,   443,
     445,   446,   450,   454,   455,   456,   457,   202,   238,   273,
     249,    14,   249,   330,   402,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     106,   440,   321,   330,    41,   239,   194,     5,   239,    24,
      24,    24,   144,   144,    85,   417,   417,   417,   194,   417,
     239,    77,    14,    30,    41,    46,    47,   435,   436,   110,
      40,   371,    77,   147,     7,   249,   315,     3,   322,   353,
     355,   239,    70,   429,   115,   128,   132,   136,   163,   356,
      70,   429,   372,   147,   239,    82,   424,   239,   194,   372,
     379,   375,     3,    41,   239,   211,   212,   335,   336,   354,
     116,   180,   182,   208,   337,   354,   332,    70,   431,   114,
     239,   329,   339,    41,    41,   249,   405,     4,   373,   249,
     405,    40,   407,   366,   366,   366,    40,   239,    41,   114,
     249,   114,   249,   114,   249,    41,    70,   114,   249,    41,
     177,   264,   265,   428,   318,   428,   198,   239,    41,   202,
     253,   254,   428,   249,   249,    28,    29,    30,   249,   249,
     249,   249,   249,   249,   249,   249,    32,    33,   247,   248,
      40,   250,   322,     8,    10,    11,    20,   249,   249,   249,
     249,   249,   249,   249,   260,   262,   263,   314,   321,    34,
     428,   330,    71,    98,   347,   239,   146,   239,   137,    73,
      74,    75,    80,    88,    92,    93,    95,   101,   112,   129,
     141,   143,   145,   157,   176,   189,   190,   191,   199,   200,
     296,    52,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   106,   443,   249,
      60,    61,    62,    63,    64,   131,   287,   202,   451,   452,
      30,   188,   351,   238,   330,   249,     5,   423,    14,   246,
       4,     4,    24,    24,   295,   428,   428,   428,   354,   428,
     158,   416,   373,   296,    14,    14,    14,    41,   239,   155,
     293,   294,   295,   373,   354,   249,    41,   353,   429,   150,
     357,   353,   357,   357,   132,   429,   313,   354,   354,     4,
     406,   375,    41,    41,   239,   239,    41,   354,   431,   103,
     352,   353,   350,   249,   249,   246,   408,    41,     5,   249,
     114,   249,   114,   249,   114,   296,   249,    41,   239,   328,
      24,    41,   239,    40,   319,   249,   249,   105,   254,   255,
     249,   248,   250,   248,   248,    19,    32,    33,    34,    35,
      36,    37,    38,   244,     8,    10,    11,    41,   349,   346,
     338,   338,   338,    40,   301,   301,    40,   297,   153,   299,
      40,   298,   297,    40,   300,   300,   301,   301,    54,    96,
     238,   441,    49,   238,   131,   131,   131,   131,     5,   411,
      65,   249,   105,   452,   453,    55,   248,   441,   131,   424,
       4,     4,   296,   102,   174,   419,    78,   160,   418,   194,
      54,   296,   296,   296,   436,   134,    41,   239,    40,   267,
      70,   147,   353,   336,   354,    41,   328,   239,   328,    41,
     239,   249,   249,   249,    41,   265,   315,   249,   321,   428,
     249,   320,   239,   315,    41,   188,   249,   106,    19,   248,
     248,   248,   248,   248,   248,   248,   248,    41,   351,     5,
       5,     5,     5,   238,   246,   106,   238,   411,   411,   411,
     411,   131,     5,   188,   441,   106,   248,   194,    45,   105,
     106,   447,   448,   449,   411,   170,   425,   302,    20,    96,
      20,    96,   431,    54,    54,    54,    40,    82,   215,   216,
     217,   219,   221,   229,   230,   231,   234,   304,   305,   294,
     318,   210,   268,   429,   249,   147,   239,   339,   353,   121,
     342,   246,    41,   239,    40,   249,   248,   114,    41,    41,
     239,    41,    41,   238,    48,   411,   131,   441,    79,   194,
     248,   249,   441,   127,   106,   448,   449,   106,   114,    24,
     227,    10,    20,    96,   155,   213,   303,    10,    10,   246,
     318,    24,   306,   306,   306,   306,   306,   306,   306,   306,
     306,   306,   239,    41,    40,   269,   270,   271,   305,   249,
     354,    77,   122,   348,   249,   320,     5,   238,   411,   238,
     248,    49,   188,   238,   127,   106,   127,   352,    76,   142,
     178,    24,    10,   246,   134,    41,     4,     4,   180,     4,
       4,     5,     5,     5,     5,     8,   305,   318,   239,    42,
     244,   249,    41,    41,    49,   441,   441,   238,   127,   238,
     328,   214,   220,   222,   233,   426,    41,   271,   354,   441,
     106,   238,   340,    81,   225,   427,   239,   106,    49,    24,
      24,   354,    49,   238,     5,     4,    42,   238,   226,   354,
      24,    41,     5
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
      case 241: /* "sql_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 242: /* "stmt_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 243: /* "stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 244: /* "expr_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 245: /* "column_ref" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 246: /* "expr_const" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 247: /* "simple_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 248: /* "arith_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 249: /* "expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 250: /* "in_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 251: /* "case_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 252: /* "case_arg" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 253: /* "when_clause_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 254: /* "when_clause" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 255: /* "case_default" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 256: /* "array_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 257: /* "func_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 258: /* "when_func" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 259: /* "when_func_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 260: /* "when_func_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 261: /* "distinct_or_all" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 262: /* "delete_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 263: /* "update_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 264: /* "update_asgn_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 265: /* "update_asgn_factor" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 266: /* "create_index_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 267: /* "opt_index_columns" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 268: /* "opt_storing" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 269: /* "opt_storing_columns" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 270: /* "opt_index_option_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 271: /* "index_option" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 272: /* "cursor_declare_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 273: /* "cursor_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 274: /* "cursor_open_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 275: /* "cursor_fetch_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 276: /* "cursor_fetch_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 277: /* "cursor_fetch_next_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 278: /* "cursor_fetch_first_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 279: /* "cursor_fetch_prior_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 280: /* "cursor_fetch_last_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 281: /* "cursor_fetch_absolute_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 282: /* "cursor_fetch_relative_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 283: /* "fetch_prior_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 284: /* "fetch_first_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 285: /* "fetch_last_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 286: /* "fetch_relative_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 287: /* "next_or_prior" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 288: /* "fetch_absolute_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 289: /* "fetch_fromto_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 290: /* "cursor_close_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 291: /* "create_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 292: /* "opt_if_not_exists" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 293: /* "table_element_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 294: /* "table_element" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 295: /* "column_definition" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 296: /* "data_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 297: /* "opt_decimal" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 298: /* "opt_float" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 299: /* "opt_precision" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 300: /* "opt_time_precision" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 301: /* "opt_char_length" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 302: /* "opt_column_attribute_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 303: /* "column_attribute" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 304: /* "opt_table_option_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 305: /* "table_option" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 306: /* "opt_equal_mark" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 307: /* "drop_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 308: /* "opt_if_exists" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 309: /* "table_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 310: /* "truncate_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 311: /* "drop_index_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 312: /* "index_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 313: /* "table_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 314: /* "insert_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 315: /* "opt_when" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 316: /* "replace_or_insert" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 317: /* "opt_insert_columns" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 318: /* "column_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 319: /* "insert_vals_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 320: /* "insert_vals" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 321: /* "select_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 322: /* "select_with_parens" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 323: /* "select_no_parens" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 324: /* "no_table_select" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 325: /* "select_clause" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 326: /* "select_into_clause" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 327: /* "simple_select" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 328: /* "opt_where" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 329: /* "select_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 330: /* "opt_hint" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 331: /* "opt_hint_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 332: /* "hint_options" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 333: /* "hint_option" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 334: /* "opt_comma_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 335: /* "join_op_type_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 336: /* "join_op_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 338: /* "limit_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 339: /* "opt_select_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 340: /* "opt_for_update" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 341: /* "parameterized_trim" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 342: /* "opt_groupby" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 343: /* "opt_order_by" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 344: /* "order_by" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 345: /* "sort_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 346: /* "sort_key" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 347: /* "opt_asc_desc" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 348: /* "opt_having" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 349: /* "opt_distinct" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 350: /* "projection" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 351: /* "select_expr_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 352: /* "from_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 353: /* "table_factor" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 354: /* "relation_factor" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 355: /* "joined_table" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 356: /* "join_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 357: /* "join_outer" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 358: /* "explain_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 359: /* "explainable_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 360: /* "opt_verbose" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 361: /* "show_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 362: /* "lock_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 363: /* "opt_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 364: /* "opt_for_grant_user" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 366: /* "opt_show_condition" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 367: /* "opt_like_condition" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 369: /* "create_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 370: /* "user_specification_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 371: /* "user_specification" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 372: /* "user" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 373: /* "password" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 374: /* "drop_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 375: /* "user_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 376: /* "set_password_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 377: /* "opt_for_user" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 378: /* "rename_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 379: /* "rename_info" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 380: /* "rename_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 381: /* "lock_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 382: /* "lock_spec" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 383: /* "opt_work" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 385: /* "begin_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 386: /* "commit_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 387: /* "rollback_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 388: /* "kill_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 389: /* "opt_is_global" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 390: /* "opt_flag" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 391: /* "grant_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 392: /* "priv_type_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 393: /* "priv_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 394: /* "opt_privilege" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 395: /* "priv_level" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 396: /* "revoke_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 397: /* "opt_on_priv_level" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 398: /* "prepare_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 399: /* "stmt_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 400: /* "preparable_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 401: /* "variable_set_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 402: /* "var_and_val_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 403: /* "var_and_val" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 404: /* "var_and_array_val" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 405: /* "to_or_eq" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 406: /* "argument" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 407: /* "array_vals_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 408: /* "array_val_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 409: /* "execute_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 410: /* "opt_using_args" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 411: /* "argument_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 412: /* "deallocate_prepare_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 413: /* "deallocate_or_drop" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 414: /* "alter_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 415: /* "alter_column_actions" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 416: /* "alter_column_action" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 417: /* "opt_column" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 419: /* "alter_column_behavior" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 420: /* "alter_system_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 421: /* "opt_force" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 422: /* "alter_system_actions" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 423: /* "alter_system_action" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 424: /* "opt_comment" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 426: /* "server_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 427: /* "opt_cluster_or_address" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 428: /* "column_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 429: /* "relation_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 430: /* "function_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 431: /* "column_label" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 433: /* "create_procedure_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 434: /* "proc_decl" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 435: /* "proc_parameter_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 436: /* "proc_parameter" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 437: /* "proc_block" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 438: /* "proc_sect" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 439: /* "proc_stmts" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 440: /* "proc_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 441: /* "control_sect" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 442: /* "control_stmts" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 443: /* "control_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 444: /* "stmt_declare" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 445: /* "stmt_assign" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 446: /* "stmt_if" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 447: /* "stmt_elsifs" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 448: /* "stmt_elsif" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 449: /* "stmt_else" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 450: /* "stmt_case" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 451: /* "case_when_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 452: /* "case_when" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 453: /* "case_else" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 454: /* "stmt_loop" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 455: /* "stmt_while" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 456: /* "stmt_null" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 457: /* "stmt_exit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 458: /* "exec_procedure_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 459: /* "drop_procedure_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 460: /* "show_procedure_stmt" */

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

    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 48:

    { (yyval.node) = NULL; ;}
    break;

  case 49:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 50:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 51:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 52:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NAME_FIELD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(3) - (3)]).first_column, (yylsp[(3) - (3)]).last_column);
    ;}
    break;

  case 53:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_STAR);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NAME_FIELD, 2, (yyvsp[(1) - (3)].node), node);
    ;}
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

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 63:

    { (yyvsp[(3) - (3)].node)->type_ = T_SYSTEM_VARIABLE; (yyval.node) = (yyvsp[(3) - (3)].node); ;}
    break;

  case 64:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 65:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 66:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 67:

    {
      ParseNode *node = NULL;
      malloc_non_terminal_node(node, result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node));
      merge_nodes((yyval.node), result->malloc_pool_, T_EXPR_LIST, node);
    ;}
    break;

  case 68:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
      /*
      yyerror(&@1, result, "CASE expression is not supported yet!");
      YYABORT;
      */
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
    	(yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 72:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_EXISTS, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 73:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 74:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 75:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_POS, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 76:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NEG, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 77:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_ADD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 78:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MINUS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 79:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MUL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 80:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_DIV, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 81:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_REM, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 82:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_POW, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 83:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MOD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 84:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 85:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_POS, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 86:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NEG, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 87:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_ADD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 88:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MINUS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 89:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MUL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 90:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_DIV, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 91:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_REM, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 92:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_POW, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 93:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MOD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 94:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 95:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LT, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 96:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_EQ, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 97:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_GE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 98:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_GT, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 99:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 100:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 101:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NOT_LIKE, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 102:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_AND, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 103:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_OR, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 104:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NOT, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 105:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 106:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS_NOT, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 107:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 108:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS_NOT, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 109:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 110:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS_NOT, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 111:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_BTW, 3, (yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 112:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NOT_BTW, 3, (yyvsp[(1) - (6)].node), (yyvsp[(4) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 113:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IN, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 114:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NOT_IN, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 115:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_CNN, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 116:

    {
    	(yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 117:

    { merge_nodes((yyval.node), result->malloc_pool_, T_EXPR_LIST, (yyvsp[(2) - (3)].node)); ;}
    break;

  case 118:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_WHEN_LIST, (yyvsp[(3) - (5)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CASE, 3, (yyvsp[(2) - (5)].node), (yyval.node), (yyvsp[(4) - (5)].node));
    ;}
    break;

  case 119:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 120:

    { (yyval.node) = NULL; ;}
    break;

  case 121:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 122:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 123:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_WHEN, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 124:

    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 125:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_NULL); ;}
    break;

  case 126:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ARRAY, 2, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));
    ;}
    break;

  case 127:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ARRAY, 2, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));
    ;}
    break;

  case 128:

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

  case 129:

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

  case 130:

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

  case 131:

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

  case 132:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_FUN_SYS, 2, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));
    ;}
    break;

  case 133:

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

  case 134:

    {
      (yyval.node) = (yyvsp[(1) - (4)].node);
      (yyval.node)->children_[0] = (yyvsp[(3) - (4)].node);
    ;}
    break;

  case 135:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ROW_COUNT, 1, NULL);
    ;}
    break;

  case 140:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_ALL);
    ;}
    break;

  case 141:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_DISTINCT);
    ;}
    break;

  case 142:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_DELETE, 3, (yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 143:

    {
      ParseNode* assign_list = NULL;
      merge_nodes(assign_list, result->malloc_pool_, T_ASSIGN_LIST, (yyvsp[(5) - (7)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_UPDATE, 5, (yyvsp[(3) - (7)].node), assign_list, (yyvsp[(6) - (7)].node), (yyvsp[(7) - (7)].node), (yyvsp[(2) - (7)].node));
    ;}
    break;

  case 144:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 145:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 146:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ASSIGN_ITEM, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 147:

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

  case 148:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_COLUMN_LIST, (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 149:

    {
  		(yyval.node)=(yyvsp[(2) - (2)].node);
  	;}
    break;

  case 150:

    {
  		(yyval.node)=NULL;
  	;}
    break;

  case 151:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_COLUMN_LIST, (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 152:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 153:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 154:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 155:

    {
		(yyval.node) = (yyvsp[(1) - (1)].node);
	;}
    break;

  case 156:

    {					 
       malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_DECLARE, 2,
                                        (yyvsp[(2) - (5)].node),		/*cursor name*/
                                        (yyvsp[(5) - (5)].node)		/*result from select_stmt*/
					             ); 
	 ;}
    break;

  case 157:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 158:

    {
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_OPEN, 1,
            (yyvsp[(2) - (2)].node)     /* cursor_name*/
                                    );
            ;}
    break;

  case 159:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH, 1,
                   (yyvsp[(2) - (2)].node)     /* cursor_name*/
                                       );
            ;}
    break;

  case 160:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH, 1,
                   (yyvsp[(2) - (3)].node)     /* cursor_name*/
                                       );
            ;}
    break;

  case 161:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH, 1, (yyvsp[(2) - (4)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(4) - (4)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_INTO, 2, fetch, args);
            ;}
    break;

  case 162:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH_NEXT, 1, (yyvsp[(2) - (5)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(5) - (5)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_NEXT_INTO, 2, fetch, args);
            ;}
    break;

  case 163:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH_FIRST, 1, (yyvsp[(2) - (5)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(5) - (5)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_FIRST_INTO, 2, fetch, args);
            ;}
    break;

  case 164:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH_PRIOR, 1, (yyvsp[(2) - (5)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(5) - (5)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_PRIOR_INTO, 2, fetch, args);
            ;}
    break;

  case 165:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH_LAST, 1, (yyvsp[(2) - (5)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(5) - (5)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_LAST_INTO, 2, fetch, args);
            ;}
    break;

  case 166:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH_ABSOLUTE, 2, (yyvsp[(2) - (6)].node), (yyvsp[(4) - (6)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(6) - (6)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_ABS_INTO, 2, fetch, args);
            ;}
    break;

  case 167:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH_RELATIVE, 3, (yyvsp[(2) - (7)].node), (yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(7) - (7)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_RELATIVE_INTO, 2, fetch, args);
            ;}
    break;

  case 168:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_PRIOR, 1,
                   (yyvsp[(2) - (3)].node)     /* cursor_name*/
                    
                    
                    
                                       );
            ;}
    break;

  case 169:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_FIRST, 1,
                   (yyvsp[(2) - (3)].node)     /* cursor_name*/
                                       );
            ;}
    break;

  case 170:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_LAST, 1,
                   (yyvsp[(2) - (3)].node)     /* cursor_name*/
                                       );
            ;}
    break;

  case 171:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_RELATIVE, 3,
                   (yyvsp[(2) - (5)].node),     /* cursor_name*/
                   (yyvsp[(3) - (5)].node),                  
                   (yyvsp[(5) - (5)].node)                  
                                       );
            ;}
    break;

  case 172:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 173:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 174:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_ABSOLUTE, 2,
                   (yyvsp[(2) - (4)].node),     /* cursor_name*/
                   (yyvsp[(4) - (4)].node)
                                       );
            ;}
    break;

  case 175:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_FROMTO, 3,
                   (yyvsp[(2) - (6)].node),     /* cursor_name*/
                   (yyvsp[(4) - (6)].node),
                   (yyvsp[(6) - (6)].node)
                                       );
            ;}
    break;

  case 176:

    {
             malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_CLOSE, 1,
                   (yyvsp[(2) - (2)].node)     /* cursor_name*/
                                      );
             ;}
    break;

  case 177:

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

  case 178:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_IF_NOT_EXISTS); ;}
    break;

  case 179:

    { (yyval.node) = NULL; ;}
    break;

  case 180:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 181:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 182:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 183:

    {
      ParseNode* col_list= NULL;
      merge_nodes(col_list, result->malloc_pool_, T_COLUMN_LIST, (yyvsp[(4) - (5)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PRIMARY_KEY, 1, col_list);
    ;}
    break;

  case 184:

    {
      ParseNode *attributes = NULL;
      merge_nodes(attributes, result->malloc_pool_, T_COLUMN_ATTRIBUTES, (yyvsp[(3) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_DEFINITION, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), attributes);
    ;}
    break;

  case 185:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER ); ;}
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

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER); ;}
    break;

  case 190:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DECIMAL);
      else
        merge_nodes((yyval.node), result->malloc_pool_, T_TYPE_DECIMAL, (yyvsp[(2) - (2)].node));
      yyerror(&(yylsp[(1) - (2)]), result, "DECIMAL type is not supported");
      YYABORT;
    ;}
    break;

  case 191:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DECIMAL);
      else
        merge_nodes((yyval.node), result->malloc_pool_, T_TYPE_DECIMAL, (yyvsp[(2) - (2)].node));
      yyerror(&(yylsp[(1) - (2)]), result, "NUMERIC type is not supported");
      YYABORT;
    ;}
    break;

  case 192:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_BOOLEAN ); ;}
    break;

  case 193:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_FLOAT, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 194:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DOUBLE); ;}
    break;

  case 195:

    {
      (void)((yyvsp[(2) - (2)].node)) ; /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DOUBLE);
    ;}
    break;

  case 196:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIMESTAMP);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIMESTAMP, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 197:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIMESTAMP); ;}
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
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CHARACTER);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CHARACTER, 1, (yyvsp[(2) - (2)].node));
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

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_VARCHAR);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_VARCHAR, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 202:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CREATETIME); ;}
    break;

  case 203:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_MODIFYTIME); ;}
    break;

  case 204:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DATE);
      yyerror(&(yylsp[(1) - (1)]), result, "DATE type is not supported");
      YYABORT;
    ;}
    break;

  case 205:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIME);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIME, 1, (yyvsp[(2) - (2)].node));
      yyerror(&(yylsp[(1) - (2)]), result, "TIME type is not supported");
      YYABORT;
    ;}
    break;

  case 206:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node)); ;}
    break;

  case 207:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 208:

    { (yyval.node) = NULL; ;}
    break;

  case 209:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 210:

    { (yyval.node) = NULL; ;}
    break;

  case 211:

    { (yyval.node) = NULL; ;}
    break;

  case 212:

    { (yyval.node) = NULL; ;}
    break;

  case 213:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 214:

    { (yyval.node) = NULL; ;}
    break;

  case 215:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 216:

    { (yyval.node) = NULL; ;}
    break;

  case 217:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 218:

    { (yyval.node) = NULL; ;}
    break;

  case 219:

    {
      (void)((yyvsp[(2) - (2)].node)) ; /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NOT_NULL);
    ;}
    break;

  case 220:

    {
      (void)((yyvsp[(1) - (1)].node)) ; /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NULL);
    ;}
    break;

  case 221:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 222:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_AUTO_INCREMENT); ;}
    break;

  case 223:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_PRIMARY_KEY); ;}
    break;

  case 224:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 225:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 226:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 227:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_INFO, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 228:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPIRE_INFO, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 229:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLET_MAX_SIZE, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 230:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLET_BLOCK_SIZE, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 231:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLET_ID, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 232:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_REPLICA_NUM, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 233:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COMPRESS_METHOD, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 234:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_USE_BLOOM_FILTER, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 235:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSISTENT_MODE);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 236:

    {
      (void)((yyvsp[(2) - (3)].node)); /*  make bison mute*/
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COMMENT, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 237:

    { (yyval.node) = NULL; ;}
    break;

  case 238:

    { (yyval.node) = NULL; ;}
    break;

  case 239:

    {
      ParseNode *tables = NULL;
      merge_nodes(tables, result->malloc_pool_, T_TABLE_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_DROP_TABLE, 2, (yyvsp[(3) - (4)].node), tables);
    ;}
    break;

  case 240:

    { (yyval.node) = NULL; ;}
    break;

  case 241:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_IF_EXISTS); ;}
    break;

  case 242:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 243:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 244:

    {
          ParseNode *tables = NULL;
          merge_nodes(tables, result->malloc_pool_, T_TABLE_LIST, (yyvsp[(4) - (5)].node));
          malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TRUNCATE_TABLE, 3, (yyvsp[(3) - (5)].node), tables, (yyvsp[(5) - (5)].node));
        ;}
    break;

  case 245:

    {
      ParseNode *indexs = NULL;
      merge_nodes(indexs, result->malloc_pool_, T_INDEX_LIST, (yyvsp[(4) - (6)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_DROP_INDEX, 3, (yyvsp[(3) - (6)].node), indexs, (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 246:

    { (yyval.node) = NULL; ;}
    break;

  case 247:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 248:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 249:

    {
	  (yyval.node) = (yyvsp[(1) - (1)].node);
	;}
    break;

  case 250:

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

  case 251:

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

  case 252:

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

  case 253:

    { (yyval.node) = NULL; ;}
    break;

  case 254:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 255:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 256:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 257:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_COLUMN_LIST, (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 258:

    { (yyval.node) = NULL; ;}
    break;

  case 259:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 260:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 261:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_VALUE_VECTOR, (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 262:

    {
    merge_nodes((yyvsp[(4) - (5)].node), result->malloc_pool_, T_VALUE_VECTOR, (yyvsp[(4) - (5)].node));
    malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (5)].node), (yyvsp[(4) - (5)].node));
  ;}
    break;

  case 263:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 264:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 265:

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

  case 266:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 267:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 268:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 269:

    {
      (yyval.node)= (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 270:

    {
      (yyval.node) = (yyvsp[(1) - (2)].node);
      (yyval.node)->children_[12] = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 271:

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

  case 272:

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

  case 273:

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

  case 274:

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

  case 275:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 276:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 277:

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

  case 278:

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

  case 279:

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

  case 280:

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

  case 281:

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

  case 282:

    {(yyval.node) = NULL;;}
    break;

  case 283:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 284:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_WHERE_CLAUSE, 2, (yyvsp[(3) - (3)].node), (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 285:

    {
      if ((yyvsp[(2) - (4)].node)->type_ == T_QUESTIONMARK && (yyvsp[(4) - (4)].node)->type_ == T_QUESTIONMARK)
      {
        (yyvsp[(4) - (4)].node)->value_++;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 286:

    {
      if ((yyvsp[(2) - (4)].node)->type_ == T_QUESTIONMARK && (yyvsp[(4) - (4)].node)->type_ == T_QUESTIONMARK)
      {
        (yyvsp[(4) - (4)].node)->value_++;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, (yyvsp[(4) - (4)].node), (yyvsp[(2) - (4)].node));
    ;}
    break;

  case 287:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, (yyvsp[(2) - (2)].node), NULL);
    ;}
    break;

  case 288:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, NULL, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 289:

    {
      if ((yyvsp[(2) - (4)].node)->type_ == T_QUESTIONMARK && (yyvsp[(4) - (4)].node)->type_ == T_QUESTIONMARK)
      {
        (yyvsp[(4) - (4)].node)->value_++;
      }
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, (yyvsp[(4) - (4)].node), (yyvsp[(2) - (4)].node));
    ;}
    break;

  case 290:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 291:

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

  case 292:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 293:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 294:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 295:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 296:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 297:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_READ_STATIC);
    ;}
    break;

  case 298:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_HOTSPOT);
    ;}
    break;

  case 299:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SEMI_JOIN, 6, (yyvsp[(3) - (14)].node), (yyvsp[(5) - (14)].node), (yyvsp[(7) - (14)].node), (yyvsp[(9) - (14)].node), (yyvsp[(11) - (14)].node), (yyvsp[(13) - (14)].node));
    ;}
    break;

  case 300:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_READ_CONSISTENCY);
      (yyval.node)->value_ = (yyvsp[(3) - (4)].ival);
    ;}
    break;

  case 301:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_USE_INDEX, 2, (yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].node));
    ;}
    break;

  case 302:

    {
	  (void)((yyvsp[(1) - (4)].node));
	  (void)((yyvsp[(3) - (4)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_UNKOWN_HINT);
    ;}
    break;

  case 303:

    {
      (yyval.node) = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 304:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_JOIN_OP_TYPE_LIST, (yyvsp[(3) - (4)].node));
    ;}
    break;

  case 305:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_NO_GROUP);
    ;}
    break;

  case 306:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_LONG_TRANS);
    ;}
    break;

  case 307:

    {
      (yyval.node) = (yyvsp[(1) - (2)].node);
    ;}
    break;

  case 308:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 309:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 310:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 311:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BLOOMFILTER_JOIN);
    ;}
    break;

  case 312:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_MERGE_JOIN);
    ;}
    break;

  case 313:

    {
    (yyval.ival) = 3;
  ;}
    break;

  case 314:

    {
    (yyval.ival) = 4;
  ;}
    break;

  case 315:

    {
    (yyval.ival) = 1;
  ;}
    break;

  case 316:

    {
    (yyval.ival) = 2;
  ;}
    break;

  case 317:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 318:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 319:

    { (yyval.node) = NULL; ;}
    break;

  case 320:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 321:

    { (yyval.node) = NULL; ;}
    break;

  case 322:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 323:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 0;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 324:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 0;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 325:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 1;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 326:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 2;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 327:

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

  case 328:

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

  case 329:

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

  case 330:

    { (yyval.node) = NULL; ;}
    break;

  case 331:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_EXPR_LIST, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 332:

    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 333:

    { (yyval.node) = NULL; ;}
    break;

  case 334:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_SORT_LIST, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 335:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 336:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 337:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SORT_KEY, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 338:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_ASC); ;}
    break;

  case 339:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_ASC); ;}
    break;

  case 340:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_DESC); ;}
    break;

  case 341:

    { (yyval.node) = 0; ;}
    break;

  case 342:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 343:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 344:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_ALL);
    ;}
    break;

  case 345:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_DISTINCT);
    ;}
    break;

  case 346:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, (yyvsp[(1) - (1)].node));
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (1)]).first_column, (yylsp[(1) - (1)]).last_column);
    ;}
    break;

  case 347:

    {
      ParseNode* alias_node = NULL;
      malloc_non_terminal_node(alias_node, result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, alias_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (2)]).first_column, (yylsp[(1) - (2)]).last_column);
      dup_expr_string(alias_node->str_value_, result, (yylsp[(2) - (2)]).first_column, (yylsp[(2) - (2)]).last_column);
    ;}
    break;

  case 348:

    {
      ParseNode* alias_node = NULL;
      malloc_non_terminal_node(alias_node, result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, alias_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (3)]).first_column, (yylsp[(1) - (3)]).last_column);
      dup_expr_string(alias_node->str_value_, result, (yylsp[(3) - (3)]).first_column, (yylsp[(3) - (3)]).last_column);
    ;}
    break;

  case 349:

    {
      ParseNode* star_node = NULL;
      malloc_terminal_node(star_node, result->malloc_pool_, T_STAR);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, star_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (1)]).first_column, (yylsp[(1) - (1)]).last_column);
    ;}
    break;

  case 350:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 351:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 352:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 353:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 354:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
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
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 358:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 359:

    {
    	(yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 360:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(2) - (5)].node), (yyvsp[(5) - (5)].node));
    	yyerror(&(yylsp[(1) - (5)]), result, "qualied joined table can not be aliased!");
      YYABORT;
    ;}
    break;

  case 361:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 362:

    {
    	(yyval.node) = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 363:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOINED_TABLE, 4, (yyvsp[(2) - (6)].node), (yyvsp[(1) - (6)].node), (yyvsp[(4) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 364:

    {
      ParseNode* node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_JOIN_INNER);
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOINED_TABLE, 4, node, (yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 365:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_FULL);
    ;}
    break;

  case 366:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_LEFT);
    ;}
    break;

  case 367:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_RIGHT);
    ;}
    break;

  case 368:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_INNER);
    ;}
    break;

  case 369:

    { (yyval.node) = NULL; ;}
    break;

  case 370:

    { (yyval.node) = NULL; ;}
    break;

  case 371:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPLAIN, 1, (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = ((yyvsp[(2) - (3)].node) ? 1 : 0); /* positive: verbose */
    ;}
    break;

  case 372:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 373:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 374:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 375:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 376:

    { (yyval.node) = (ParseNode*)1; ;}
    break;

  case 377:

    { (yyval.node) = NULL; ;}
    break;

  case 378:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_TABLES, 1, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 379:

    {  malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_INDEX, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 380:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 381:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 382:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_TABLE_STATUS, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 383:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_SERVER_STATUS, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 384:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_VARIABLES, 1, (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = (yyvsp[(2) - (4)].ival);
    ;}
    break;

  case 385:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_SCHEMA); ;}
    break;

  case 386:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_CREATE_TABLE, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 387:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 388:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 389:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_WARNINGS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 390:

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

  case 391:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_GRANTS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 392:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_PARAMETERS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 393:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_PROCESSLIST);
      (yyval.node)->value_ = (yyvsp[(2) - (3)].ival);
    ;}
    break;

  case 394:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LOCK_TABLE, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 395:

    {
      if ((yyvsp[(2) - (4)].node)->value_ < 0 || (yyvsp[(4) - (4)].node)->value_ < 0)
      {
        yyerror(&(yylsp[(1) - (4)]), result, "OFFSET/COUNT must not be less than 0!");
        YYABORT;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_LIMIT, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 396:

    {
      if ((yyvsp[(2) - (2)].node)->value_ < 0)
      {
        yyerror(&(yylsp[(1) - (2)]), result, "COUNT must not be less than 0!");
        YYABORT;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_LIMIT, 2, NULL, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 397:

    { (yyval.node) = NULL; ;}
    break;

  case 398:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 399:

    { (yyval.node) = NULL; ;}
    break;

  case 400:

    { (yyval.node) = NULL; ;}
    break;

  case 401:

    { (yyval.ival) = 1; ;}
    break;

  case 402:

    { (yyval.ival) = 0; ;}
    break;

  case 403:

    { (yyval.ival) = 0; ;}
    break;

  case 404:

    { (yyval.node) = NULL; ;}
    break;

  case 405:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 406:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_WHERE_CLAUSE, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 407:

    { (yyval.node) = NULL; ;}
    break;

  case 408:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 1, (yyvsp[(1) - (1)].node)); ;}
    break;

  case 409:

    { (yyval.ival) = 0; ;}
    break;

  case 410:

    { (yyval.ival) = 1; ;}
    break;

  case 411:

    {
        merge_nodes((yyval.node), result->malloc_pool_, T_CREATE_USER, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 412:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 413:

    {
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 414:

    {
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CREATE_USER_SPEC, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 415:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 416:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 417:

    {
        merge_nodes((yyval.node), result->malloc_pool_, T_DROP_USER, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 418:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 419:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 420:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SET_PASSWORD, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 421:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SET_PASSWORD, 2, (yyvsp[(3) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 422:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 423:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 424:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_RENAME_USER, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 425:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_RENAME_INFO, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 426:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 427:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 428:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LOCK_USER, 2, (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 429:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 430:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 431:

    {
      (void)(yyval.node);
    ;}
    break;

  case 432:

    {
      (void)(yyval.node);
    ;}
    break;

  case 433:

    {
      (yyval.ival) = 1;
    ;}
    break;

  case 434:

    {
      (yyval.ival) = 0;
    ;}
    break;

  case 435:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BEGIN);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 436:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BEGIN);
      (yyval.node)->value_ = (yyvsp[(3) - (3)].ival);
    ;}
    break;

  case 437:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_COMMIT);
    ;}
    break;

  case 438:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_ROLLBACK);
    ;}
    break;

  case 439:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_KILL, 3, (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
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
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 444:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 445:

    {
      ParseNode *privileges_node = NULL;
      ParseNode *users_node = NULL;
      merge_nodes(privileges_node, result->malloc_pool_, T_PRIVILEGES, (yyvsp[(2) - (6)].node));
      merge_nodes(users_node, result->malloc_pool_, T_USERS, (yyvsp[(6) - (6)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_GRANT,
                                 3, privileges_node, (yyvsp[(4) - (6)].node), users_node);
    ;}
    break;

  case 446:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 447:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 448:

    {
      (void)(yyvsp[(2) - (2)].node);                 /* useless */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_ALL;
    ;}
    break;

  case 449:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_ALTER;
    ;}
    break;

  case 450:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_CREATE;
    ;}
    break;

  case 451:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_CREATE_USER;
    ;}
    break;

  case 452:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_DELETE;
    ;}
    break;

  case 453:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_DROP;
    ;}
    break;

  case 454:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_DROP;
    ;}
    break;

  case 455:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_GRANT_OPTION;
    ;}
    break;

  case 456:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_INSERT;
    ;}
    break;

  case 457:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_UPDATE;
    ;}
    break;

  case 458:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_SELECT;
    ;}
    break;

  case 459:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_REPLACE;
    ;}
    break;

  case 460:

    {
      (void)(yyval.node);
    ;}
    break;

  case 461:

    {
      (void)(yyval.node);
    ;}
    break;

  case 462:

    {
      /* means global priv_level */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_LEVEL);
    ;}
    break;

  case 463:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_LEVEL, 1, (yyvsp[(1) - (1)].node));
    ;}
    break;

  case 464:

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

  case 465:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 466:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 467:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PREPARE, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 468:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 469:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 470:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 471:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 472:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 473:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_VARIABLE_SET, (yyvsp[(2) - (2)].node));;
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 474:

    {
      (yyval.node) = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 475:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 476:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 477:

    {
      (void)((yyvsp[(2) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 478:

    {
      (void)((yyvsp[(2) - (3)].node));
      (yyvsp[(1) - (3)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 479:

    {
      (void)((yyvsp[(3) - (4)].node));
      (yyvsp[(2) - (4)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 480:

    {
      (void)((yyvsp[(3) - (4)].node));
      (yyvsp[(2) - (4)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 481:

    {
      (void)((yyvsp[(4) - (5)].node));
      (yyvsp[(3) - (5)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 482:

    {
      (void)((yyvsp[(4) - (5)].node));
      (yyvsp[(3) - (5)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 483:

    {
      (void)((yyvsp[(2) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 484:

    {
      (void)((yyvsp[(2) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 485:

    {
      (void)((yyvsp[(2) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_ARRAY_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 486:

    { (yyval.node) = NULL; ;}
    break;

  case 487:

    { (yyval.node) = NULL; ;}
    break;

  case 488:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 489:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 490:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_ARRAY_VAL, (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 491:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 492:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 493:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXECUTE, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 494:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 495:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 496:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 497:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 498:

    {
      (void)((yyvsp[(1) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_DEALLOCATE, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 499:

    { (yyval.node) = NULL; ;}
    break;

  case 500:

    { (yyval.node) = NULL; ;}
    break;

  case 501:

    {
      ParseNode *alter_actions = NULL;
      merge_nodes(alter_actions, result->malloc_pool_, T_ALTER_ACTION_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_TABLE, 2, (yyvsp[(3) - (4)].node), alter_actions);
    ;}
    break;

  case 502:

    {
      yyerror(&(yylsp[(1) - (6)]), result, "Table rename is not supported now");
      YYABORT;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLE_RENAME, 1, (yyvsp[(6) - (6)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_ACTION_LIST, 1, (yyval.node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_TABLE, 2, (yyvsp[(3) - (6)].node), (yyval.node));
    ;}
    break;

  case 503:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 504:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 505:

    {
      (void)((yyvsp[(2) - (3)].node)); /* make bison mute */
      (yyval.node) = (yyvsp[(3) - (3)].node); /* T_COLUMN_DEFINITION */
    ;}
    break;

  case 506:

    {
      (void)((yyvsp[(2) - (4)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_DROP, 1, (yyvsp[(3) - (4)].node));
      (yyval.node)->value_ = (yyvsp[(4) - (4)].ival);
    ;}
    break;

  case 507:

    {
      (void)((yyvsp[(2) - (4)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_ALTER, 2, (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 508:

    {
      (void)((yyvsp[(2) - (5)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_RENAME, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 509:

    { (yyval.node) = NULL; ;}
    break;

  case 510:

    { (yyval.node) = NULL; ;}
    break;

  case 511:

    { (yyval.ival) = 2; ;}
    break;

  case 512:

    { (yyval.ival) = 1; ;}
    break;

  case 513:

    { (yyval.ival) = 0; ;}
    break;

  case 514:

    {
      (void)((yyvsp[(3) - (3)].node)); /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NOT_NULL);
    ;}
    break;

  case 515:

    {
      (void)((yyvsp[(3) - (3)].node)); /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NULL);
    ;}
    break;

  case 516:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 517:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_NULL);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyval.node));
    ;}
    break;

  case 518:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_SYTEM_ACTION_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_SYSTEM, 1, (yyval.node));
    ;}
    break;

  case 519:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 3, node, (yyvsp[(7) - (7)].node), (yyvsp[(3) - (7)].node));
    ;}
    break;

  case 520:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 3, node, (yyvsp[(7) - (7)].node), (yyvsp[(3) - (7)].node));
    ;}
    break;

  case 521:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 2, node, (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 522:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 2, node, (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 523:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 524:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_FORCE);
    ;}
    break;

  case 525:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 526:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 527:

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

  case 528:

    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 529:

    { (yyval.node) = NULL; ;}
    break;

  case 530:

    { (yyval.ival) = 0; ;}
    break;

  case 531:

    { (yyval.ival) = 1; ;}
    break;

  case 532:

    { (yyval.ival) = 2; ;}
    break;

  case 533:

    { (yyval.ival) = 2; ;}
    break;

  case 534:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 535:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 4;
    ;}
    break;

  case 536:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 537:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 3;
    ;}
    break;

  case 538:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CLUSTER, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 539:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SERVER_ADDRESS, 2, (yyvsp[(3) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 540:

    { (yyval.node) = NULL; ;}
    break;

  case 541:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 542:

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
      else
      {
        (yyval.node)->value_ = strlen((yyval.node)->str_value_);
      }
    ;}
    break;

  case 546:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 547:

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

  case 573:

    {
								malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CREATE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
							;}
    break;

  case 574:

    {
					ParseNode *params = NULL;
        			merge_nodes(params, result->malloc_pool_, T_PARAM_LIST, (yyvsp[(5) - (6)].node));
					malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECL, 2, (yyvsp[(3) - (6)].node), params);
				;}
    break;

  case 575:

    {
					ParseNode *params = NULL;
					malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECL, 2, (yyvsp[(3) - (5)].node), params);
				;}
    break;

  case 576:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
					;}
    break;

  case 577:

    {
						(yyval.node) = (yyvsp[(1) - (1)].node);
					;}
    break;

  case 578:

    {
                malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PARAM_DEFINITION, 3, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node), NULL);
					;}
    break;

  case 579:

    {
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_IN_PARAM_DEFINITION, 3, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node), NULL);
					;}
    break;

  case 580:

    {
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OUT_PARAM_DEFINITION, 3, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node), NULL);
					;}
    break;

  case 581:

    {
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_INOUT_PARAM_DEFINITION, 3, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node), NULL);
          ;}
    break;

  case 582:

    {
          ParseNode *array_flag = NULL;
          malloc_terminal_node(array_flag, result->malloc_pool_, T_BOOL);
          array_flag->value_ = 1;
          malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PARAM_DEFINITION, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), array_flag);
        ;}
    break;

  case 583:

    {
          ParseNode *array_flag = NULL;
          malloc_terminal_node(array_flag, result->malloc_pool_, T_BOOL);
          array_flag->value_ = 1;
          malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_IN_PARAM_DEFINITION, 3, (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), array_flag);
        ;}
    break;

  case 584:

    {
          ParseNode *array_flag = NULL;
          malloc_terminal_node(array_flag, result->malloc_pool_, T_BOOL);
          array_flag->value_ = 1;
          malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OUT_PARAM_DEFINITION, 3, (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), array_flag);
        ;}
    break;

  case 585:

    {
          ParseNode *array_flag = NULL;
          malloc_terminal_node(array_flag, result->malloc_pool_, T_BOOL);
          array_flag->value_ = 1;
          malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_INOUT_PARAM_DEFINITION, 3, (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), array_flag);
        ;}
    break;

  case 586:

    { 
					//malloc_non_terminal_node($$, result->malloc_pool_, T_PROCEDURE_BLOCK, 1, $2);
					(yyval.node)=(yyvsp[(2) - (3)].node);
				;}
    break;

  case 587:

    { 
					(yyval.node)=NULL;
				;}
    break;

  case 588:

    { 
        			merge_nodes((yyval.node), result->malloc_pool_, T_PROCEDURE_STMTS, (yyvsp[(1) - (1)].node));
				;}
    break;

  case 589:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
				;}
    break;

  case 590:

    {
					(yyval.node)=(yyvsp[(1) - (1)].node);
				;}
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

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 595:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 596:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
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

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 610:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 611:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 612:

    { (yyval.node) =(yyvsp[(1) - (1)].node); ;}
    break;

  case 613:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 614:

    { 
					(yyval.node)=NULL;
				;}
    break;

  case 615:

    { 
        			merge_nodes((yyval.node), result->malloc_pool_, T_PROCEDURE_STMTS, (yyvsp[(1) - (1)].node));
				;}
    break;

  case 616:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
				;}
    break;

  case 617:

    {
					(yyval.node)=(yyvsp[(1) - (1)].node);
				;}
    break;

  case 618:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 619:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 620:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 621:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 622:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
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

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 636:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 637:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 638:

    { (yyval.node) =(yyvsp[(1) - (1)].node); ;}
    break;

  case 639:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 640:

    {
						ParseNode *args = NULL;
						merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (4)].node));
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECLARE, 4, args, (yyvsp[(3) - (4)].node), NULL, NULL);
					;}
    break;

  case 641:

    {
						ParseNode *args = NULL;
						merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (6)].node));
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECLARE, 4, args, (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node), NULL);
          ;}
    break;

  case 642:

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

  case 643:

    {
						ParseNode *var_list = NULL;
						merge_nodes(var_list, result->malloc_pool_, T_VAR_VAL_LIST, (yyvsp[(2) - (3)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ASSGIN, 1,var_list);
					;}
    break;

  case 644:

    {
						ParseNode *elsifs = NULL;
						merge_nodes(elsifs, result->malloc_pool_, T_PROCEDURE_ELSEIFS, (yyvsp[(5) - (9)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (9)].node), (yyvsp[(4) - (9)].node), elsifs ,(yyvsp[(6) - (9)].node));
					;}
    break;

  case 645:

    {
						ParseNode *elsifs = NULL;
						merge_nodes(elsifs, result->malloc_pool_, T_PROCEDURE_ELSEIFS, (yyvsp[(5) - (8)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (8)].node), (yyvsp[(4) - (8)].node), elsifs ,NULL);
					;}
    break;

  case 646:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (8)].node), (yyvsp[(4) - (8)].node), NULL ,(yyvsp[(5) - (8)].node));
					;}
    break;

  case 647:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (7)].node), (yyvsp[(4) - (7)].node), NULL ,NULL);
					;}
    break;

  case 648:

    {
						(yyval.node)=(yyvsp[(1) - (1)].node);
					;}
    break;

  case 649:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
					;}
    break;

  case 650:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ELSEIF, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
					;}
    break;

  case 651:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ELSE, 1, (yyvsp[(2) - (2)].node));
						//$$ = $2;
					;}
    break;

  case 652:

    {
						ParseNode *casewhenlist = NULL;
						merge_nodes(casewhenlist, result->malloc_pool_, T_PROCEDURE_CASE_WHEN_LIST, (yyvsp[(3) - (7)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CASE, 3, (yyvsp[(2) - (7)].node), casewhenlist, (yyvsp[(4) - (7)].node));
					;}
    break;

  case 653:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
					;}
    break;

  case 654:

    {
						(yyval.node)=(yyvsp[(1) - (1)].node);
					;}
    break;

  case 655:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CASE_WHEN, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
					;}
    break;

  case 656:

    {
						(yyval.node) = NULL;
					;}
    break;

  case 657:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ELSE, 1, (yyvsp[(2) - (2)].node));
						//$$ = $2;
					;}
    break;

  case 658:

    {
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_LOOP, 5,
                                     NULL,
                                     NULL,
                                     NULL,
                                     NULL,
                                     (yyvsp[(2) - (5)].node));
          ;}
    break;

  case 659:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_LOOP, 5,
                                       (yyvsp[(2) - (11)].node),
                                       NULL,
                                       (yyvsp[(4) - (11)].node),
                                       (yyvsp[(6) - (11)].node),
                                       (yyvsp[(8) - (11)].node));
            ;}
    break;

  case 660:

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

  case 661:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_WHILE, 2, (yyvsp[(2) - (7)].node), (yyvsp[(4) - (7)].node));
					;}
    break;

  case 662:

    {
						/* We do not bother building a node for NULL */
						(yyval.node) = NULL;
					;}
    break;

  case 663:

    {
                        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXIT, 1, NULL);
						(yyval.node)->value_=1;
					;}
    break;

  case 664:

    {
                        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXIT, 1, (yyvsp[(3) - (4)].node));//when_expr
                    ;}
    break;

  case 665:

    {
        					ParseNode *param_list = NULL;
            				merge_nodes(param_list, result->malloc_pool_, T_EXPR_LIST, (yyvsp[(4) - (6)].node));
        					
                            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXEC, 3, (yyvsp[(2) - (6)].node), param_list, (yyvsp[(6) - (6)].node));
						;}
    break;

  case 666:

    {
							ParseNode *params = NULL;
                            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXEC, 3, (yyvsp[(2) - (5)].node), params, (yyvsp[(5) - (5)].node));
                        ;}
    break;

  case 667:

    {
							malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DROP, 2, (yyvsp[(5) - (5)].node),(yyvsp[(5) - (5)].node));
						;}
    break;

  case 668:

    {
							malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DROP, 1, (yyvsp[(3) - (3)].node));
						;}
    break;

  case 669:

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

