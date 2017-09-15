
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
     HASH_JOIN = 458,
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
#define YYFINAL  200
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3778

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  240
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  220
/* YYNRULES -- Number of rules.  */
#define YYNRULES  667
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1257

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
    1029,  1031,  1033,  1035,  1037,  1039,  1041,  1043,  1045,  1046,
    1048,  1049,  1052,  1056,  1061,  1066,  1071,  1075,  1079,  1083,
    1084,  1088,  1090,  1091,  1095,  1097,  1101,  1104,  1105,  1107,
    1109,  1110,  1113,  1114,  1116,  1118,  1120,  1123,  1127,  1129,
    1131,  1135,  1137,  1141,  1143,  1147,  1150,  1154,  1157,  1159,
    1165,  1167,  1171,  1178,  1184,  1187,  1190,  1193,  1195,  1197,
    1198,  1202,  1204,  1206,  1208,  1210,  1212,  1213,  1217,  1223,
    1229,  1235,  1240,  1245,  1250,  1253,  1258,  1262,  1266,  1270,
    1274,  1278,  1282,  1286,  1290,  1295,  1298,  1299,  1301,  1304,
    1309,  1311,  1313,  1314,  1315,  1318,  1321,  1322,  1324,  1325,
    1327,  1331,  1333,  1337,  1342,  1344,  1346,  1350,  1352,  1356,
    1362,  1369,  1372,  1373,  1377,  1381,  1383,  1387,  1392,  1394,
    1396,  1398,  1399,  1403,  1404,  1407,  1411,  1414,  1417,  1422,
    1423,  1425,  1426,  1428,  1430,  1437,  1439,  1443,  1446,  1448,
    1450,  1453,  1455,  1457,  1460,  1462,  1464,  1466,  1468,  1470,
    1471,  1473,  1475,  1481,  1484,  1485,  1490,  1492,  1494,  1496,
    1498,  1500,  1503,  1507,  1509,  1513,  1517,  1521,  1526,  1531,
    1537,  1543,  1547,  1551,  1555,  1557,  1559,  1561,  1563,  1567,
    1569,  1573,  1577,  1580,  1581,  1583,  1587,  1591,  1593,  1595,
    1600,  1607,  1609,  1613,  1617,  1622,  1627,  1633,  1635,  1636,
    1638,  1640,  1641,  1645,  1649,  1653,  1656,  1661,  1669,  1677,
    1684,  1691,  1692,  1694,  1696,  1700,  1710,  1713,  1714,  1718,
    1722,  1726,  1727,  1729,  1731,  1733,  1735,  1739,  1746,  1747,
    1749,  1751,  1753,  1755,  1757,  1759,  1761,  1763,  1765,  1767,
    1769,  1771,  1773,  1775,  1777,  1779,  1781,  1783,  1785,  1787,
    1789,  1791,  1793,  1795,  1797,  1799,  1801,  1803,  1805,  1807,
    1809,  1811,  1814,  1821,  1827,  1831,  1833,  1836,  1840,  1844,
    1848,  1852,  1857,  1862,  1867,  1871,  1872,  1874,  1877,  1879,
    1881,  1883,  1885,  1887,  1889,  1891,  1894,  1897,  1900,  1903,
    1906,  1909,  1912,  1915,  1918,  1921,  1924,  1927,  1930,  1933,
    1936,  1938,  1940,  1941,  1943,  1946,  1948,  1950,  1952,  1954,
    1956,  1958,  1961,  1964,  1967,  1970,  1973,  1976,  1979,  1982,
    1985,  1988,  1991,  1994,  1997,  2000,  2003,  2005,  2007,  2012,
    2019,  2025,  2029,  2039,  2048,  2057,  2065,  2067,  2070,  2075,
    2078,  2086,  2089,  2091,  2096,  2097,  2100,  2106,  2118,  2131,
    2139,  2141,  2144,  2149,  2156,  2162,  2168,  2172
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     241,     0,    -1,   242,   106,    -1,   242,   238,   243,    -1,
     243,    -1,   432,    -1,   457,    -1,   459,    -1,   458,    -1,
     272,    -1,   274,    -1,   275,    -1,   290,    -1,   283,    -1,
     284,    -1,   285,    -1,   286,    -1,   288,    -1,   289,    -1,
     320,    -1,   313,    -1,   291,    -1,   266,    -1,   263,    -1,
     262,    -1,   307,    -1,   310,    -1,   357,    -1,   360,    -1,
     397,    -1,   400,    -1,   408,    -1,   413,    -1,   419,    -1,
     411,    -1,   368,    -1,   373,    -1,   375,    -1,   377,    -1,
     380,    -1,   390,    -1,   395,    -1,   384,    -1,   385,    -1,
     386,    -1,   387,    -1,   361,    -1,    -1,   249,    -1,   244,
     239,   249,    -1,   427,    -1,   428,    42,   427,    -1,   428,
      42,    34,    -1,     4,    -1,     6,    -1,     5,    -1,     9,
      -1,     8,    -1,    10,    -1,    12,    -1,    14,    -1,    13,
      -1,   172,    42,   427,    -1,   245,    -1,   246,    -1,    40,
     249,    41,    -1,    40,   244,   239,   249,    41,    -1,   251,
      -1,   257,    -1,   258,    -1,   321,    -1,   109,   321,    -1,
     256,    -1,   247,    -1,    32,   248,    -1,    33,   248,    -1,
     248,    32,   248,    -1,   248,    33,   248,    -1,   248,    34,
     248,    -1,   248,    35,   248,    -1,   248,    36,   248,    -1,
     248,    38,   248,    -1,   248,    37,   248,    -1,   247,    -1,
      32,   249,    -1,    33,   249,    -1,   249,    32,   249,    -1,
     249,    33,   249,    -1,   249,    34,   249,    -1,   249,    35,
     249,    -1,   249,    36,   249,    -1,   249,    38,   249,    -1,
     249,    37,   249,    -1,   249,    26,   249,    -1,   249,    25,
     249,    -1,   249,    24,   249,    -1,   249,    22,   249,    -1,
     249,    23,   249,    -1,   249,    21,   249,    -1,   249,    28,
     249,    -1,   249,    20,    28,   249,    -1,   249,    19,   249,
      -1,   249,    18,   249,    -1,    20,   249,    -1,   249,    31,
      10,    -1,   249,    31,    20,    10,    -1,   249,    31,     8,
      -1,   249,    31,    20,     8,    -1,   249,    31,    11,    -1,
     249,    31,    20,    11,    -1,   249,    29,   248,    19,   248,
      -1,   249,    20,    29,   248,    19,   248,    -1,   249,    30,
     250,    -1,   249,    20,    30,   250,    -1,   249,    27,   249,
      -1,   321,    -1,    40,   244,    41,    -1,    79,   252,   253,
     255,   105,    -1,   249,    -1,    -1,   254,    -1,   253,   254,
      -1,   201,   249,   187,   249,    -1,   104,   249,    -1,    -1,
      14,    40,     5,    41,    -1,    14,    40,    14,    41,    -1,
     429,    40,    34,    41,    -1,   429,    40,   261,   249,    41,
      -1,   429,    40,   244,    41,    -1,   429,    40,   249,    70,
     296,    41,    -1,   429,    40,   340,    41,    -1,   429,    40,
      41,    -1,   259,    40,   260,    41,    -1,   223,    -1,   320,
      -1,   313,    -1,   263,    -1,   262,    -1,    68,    -1,   100,
      -1,    97,   113,   353,   327,   314,    -1,   194,   329,   353,
     173,   264,   327,   314,    -1,   265,    -1,   264,   239,   265,
      -1,   427,    24,   249,    -1,    87,   208,   292,   353,   146,
     353,   267,   268,   270,    -1,    40,   317,    41,    -1,   209,
     269,    -1,    -1,    40,   317,    41,    -1,   271,    -1,   270,
     239,   271,    -1,    -1,   305,    -1,    44,   273,    56,   112,
     320,    -1,   430,    -1,    57,   273,    -1,    58,   273,    -1,
      58,   273,    60,    -1,    58,   273,   130,   410,    -1,    58,
     273,    60,   130,   410,    -1,    58,   273,    62,   130,   410,
      -1,    58,   273,    61,   130,   410,    -1,    58,   273,    63,
     130,   410,    -1,    58,   273,    64,     5,   130,   410,    -1,
      58,   273,   287,    65,     5,   130,   410,    -1,    58,   273,
      61,    -1,    58,   273,    62,    -1,    58,   273,    63,    -1,
      58,   273,   287,    65,     5,    -1,    60,    -1,    61,    -1,
      58,   273,    64,     5,    -1,    58,   273,   113,     5,   193,
       5,    -1,    59,   273,    -1,    87,   185,   292,   353,    40,
     293,    41,   304,    -1,   126,    20,   109,    -1,    -1,   294,
      -1,   293,   239,   294,    -1,   295,    -1,   154,   133,    40,
     317,    41,    -1,   427,   296,   302,    -1,   190,    -1,   175,
      -1,   140,    -1,   128,    -1,    73,    -1,    95,   297,    -1,
     144,   297,    -1,    75,    -1,   111,   298,    -1,   156,    -1,
     101,   299,    -1,   189,   300,    -1,    93,    -1,    80,   301,
      -1,    74,   301,    -1,   198,   301,    -1,   199,   301,    -1,
      88,    -1,   142,    -1,    92,    -1,   188,   300,    -1,    40,
       5,   239,     5,    41,    -1,    40,     5,    41,    -1,    -1,
      40,     5,    41,    -1,    -1,   152,    -1,    -1,    40,     5,
      41,    -1,    -1,    40,     5,    41,    -1,    -1,   302,   303,
      -1,    -1,    20,    10,    -1,    10,    -1,    96,   246,    -1,
     213,    -1,   154,   133,    -1,   305,    -1,   304,   239,   305,
      -1,    -1,   219,   306,     4,    -1,   217,   306,     4,    -1,
     231,   306,     5,    -1,   230,   306,     5,    -1,   229,   306,
       5,    -1,   221,   306,     5,    -1,   215,   306,     4,    -1,
     234,   306,     8,    -1,   216,   306,   179,    -1,    82,   306,
       4,    -1,    24,    -1,    -1,   102,   185,   308,   309,    -1,
      -1,   126,   109,    -1,   352,    -1,   309,   239,   352,    -1,
     102,   208,   308,   311,   146,   312,    -1,    -1,   353,    -1,
     311,   239,   353,    -1,   353,    -1,   315,   130,   353,   316,
     197,   318,   314,    -1,   315,   130,   353,   320,    -1,   315,
     130,   353,    40,   317,    41,   320,    -1,    -1,   201,   249,
      -1,   158,    -1,   129,    -1,    40,   317,    41,    -1,    -1,
     427,    -1,   317,   239,   427,    -1,    40,   319,    41,    -1,
     318,   239,    40,   319,    41,    -1,   249,    -1,   319,   239,
     249,    -1,   322,   314,    -1,   321,    -1,    40,   322,    41,
      -1,    40,   321,    41,    -1,   323,    -1,   326,   339,    -1,
     324,   343,   339,    -1,   324,   342,   328,   339,    -1,   170,
     329,   348,   350,   338,    -1,   170,   329,   348,   350,   113,
     103,   327,   338,    -1,   326,    -1,   321,    -1,   170,   329,
     350,   130,   410,   113,   351,   327,   339,    -1,   170,   329,
     348,   350,   113,   351,   327,   341,   347,    -1,   324,    16,
     348,   324,    -1,   324,    17,   348,   324,    -1,   324,    15,
     348,   324,    -1,    -1,   200,   249,    -1,   200,     7,   249,
      -1,   136,   337,   145,   337,    -1,   145,   337,   136,   337,
      -1,   136,   337,    -1,   145,   337,    -1,   136,   337,   239,
     337,    -1,    -1,   122,   330,   123,    -1,   331,    -1,   330,
     239,   331,    -1,    -1,   332,    -1,   331,   332,    -1,   155,
      -1,   124,    -1,   132,    40,   353,   239,   353,   239,   353,
      42,   353,   239,   353,    42,   353,    41,    -1,   165,    40,
     336,    41,    -1,   208,    40,   353,   353,    41,    -1,     3,
      40,     3,    41,    -1,    40,   333,    41,    -1,   131,    40,
     334,    41,    -1,   166,    -1,   167,    -1,   333,   239,    -1,
      -1,   335,    -1,   334,   239,   335,    -1,   210,    -1,   211,
      -1,   212,    -1,   207,    -1,   181,    -1,   179,    -1,   115,
      -1,     5,    -1,    12,    -1,    -1,   328,    -1,    -1,   112,
     194,    -1,   249,   113,   249,    -1,    76,   249,   113,   249,
      -1,   134,   249,   113,   249,    -1,   191,   249,   113,   249,
      -1,    76,   113,   249,    -1,   134,   113,   249,    -1,   191,
     113,   249,    -1,    -1,   120,    77,   244,    -1,   343,    -1,
      -1,   147,    77,   344,    -1,   345,    -1,   344,   239,   345,
      -1,   249,   346,    -1,    -1,    71,    -1,    98,    -1,    -1,
     121,   249,    -1,    -1,    68,    -1,   100,    -1,   249,    -1,
     249,   430,    -1,   249,    70,   430,    -1,    34,    -1,   349,
      -1,   350,   239,   349,    -1,   352,    -1,   351,   239,   352,
      -1,   353,    -1,   353,    70,   428,    -1,   353,   428,    -1,
     321,    70,   428,    -1,   321,   428,    -1,   354,    -1,    40,
     354,    41,    70,   428,    -1,   428,    -1,    40,   354,    41,
      -1,   352,   355,   131,   352,   146,   249,    -1,   352,   131,
     352,   146,   249,    -1,   114,   356,    -1,   135,   356,    -1,
     162,   356,    -1,   127,    -1,   149,    -1,    -1,   110,   359,
     358,    -1,   320,    -1,   262,    -1,   313,    -1,   263,    -1,
     236,    -1,    -1,   174,   186,   365,    -1,   174,   208,   146,
     353,   365,    -1,   174,    86,   113,   353,   365,    -1,   174,
      86,    30,   353,   365,    -1,   174,   185,   228,   365,    -1,
     174,   224,   228,   365,    -1,   174,   364,   235,   365,    -1,
     174,   168,    -1,   174,    87,   185,   353,    -1,    99,   353,
     366,    -1,    98,   353,   366,    -1,   174,   237,   362,    -1,
     174,   257,   237,    -1,   174,   218,   363,    -1,   174,   150,
     365,    -1,   174,   367,   204,    -1,   139,   185,   353,    -1,
     136,     5,   239,     5,    -1,   136,     5,    -1,    -1,   376,
      -1,   112,    89,    -1,   112,    89,    40,    41,    -1,   117,
      -1,   171,    -1,    -1,    -1,    28,     4,    -1,   200,   249,
      -1,    -1,     4,    -1,    -1,   114,    -1,    87,   195,   369,
      -1,   370,    -1,   369,   239,   370,    -1,   371,   125,    77,
     372,    -1,     4,    -1,     4,    -1,   102,   195,   374,    -1,
     371,    -1,   374,   239,   371,    -1,   173,   151,   376,    24,
     372,    -1,    69,   195,   371,   125,    77,   372,    -1,   112,
     371,    -1,    -1,   157,   195,   379,    -1,   371,   193,   371,
      -1,   378,    -1,   379,   239,   378,    -1,    69,   195,   371,
     381,    -1,   138,    -1,   232,    -1,   203,    -1,    -1,   202,
      84,   176,    -1,    -1,    72,   382,    -1,   178,   192,   383,
      -1,    83,   382,    -1,   163,   382,    -1,   164,   388,   389,
       5,    -1,    -1,   117,    -1,    -1,   205,    -1,   206,    -1,
     119,   391,   146,   394,   193,   374,    -1,   392,    -1,   391,
     239,   392,    -1,    68,   393,    -1,    69,    -1,    87,    -1,
      87,   195,    -1,    97,    -1,   102,    -1,   119,   148,    -1,
     129,    -1,   194,    -1,   170,    -1,   158,    -1,   160,    -1,
      -1,    34,    -1,   428,    -1,   161,   391,   396,   113,   374,
      -1,   146,   394,    -1,    -1,   153,   398,   113,   399,    -1,
     430,    -1,   320,    -1,   313,    -1,   263,    -1,   262,    -1,
     173,   401,    -1,   173,   173,   403,    -1,   402,    -1,   401,
     239,   402,    -1,    14,   404,   249,    -1,   427,   404,   249,
      -1,   117,   427,   404,   249,    -1,   171,   427,   404,   249,
      -1,   118,    42,   427,   404,   249,    -1,   172,    42,   427,
     404,   249,    -1,    13,   404,   249,    -1,   256,   404,   249,
      -1,    14,   404,   406,    -1,   193,    -1,    24,    -1,    14,
      -1,   256,    -1,    40,   407,    41,    -1,   246,    -1,   407,
     239,   246,    -1,   108,   398,   409,    -1,   196,   410,    -1,
      -1,   405,    -1,   410,   239,   405,    -1,   412,   153,   398,
      -1,    94,    -1,   102,    -1,    69,   185,   353,   414,    -1,
      69,   185,   353,   157,   193,   353,    -1,   415,    -1,   414,
     239,   415,    -1,    66,   416,   295,    -1,   102,   416,   427,
     417,    -1,    69,   416,   427,   418,    -1,   157,   416,   427,
     193,   430,    -1,    85,    -1,    -1,    78,    -1,   159,    -1,
      -1,   173,    20,    10,    -1,   102,    20,    10,    -1,   173,
      96,   246,    -1,   102,    96,    -1,    69,   180,   173,   421,
      -1,    69,   180,   420,    90,   143,    24,     4,    -1,    69,
     180,   420,    91,   143,    24,     4,    -1,    69,   180,   182,
     143,    24,     4,    -1,    69,   180,   183,   184,    24,     4,
      -1,    -1,   116,    -1,   422,    -1,   421,   239,   422,    -1,
     427,    24,   246,   423,   424,   227,    24,   425,   426,    -1,
      82,     4,    -1,    -1,   169,    24,   141,    -1,   169,    24,
     177,    -1,   169,    24,    76,    -1,    -1,   222,    -1,   233,
      -1,   214,    -1,   220,    -1,    81,    24,     5,    -1,   225,
      24,     4,   226,    24,     5,    -1,    -1,     3,    -1,   431,
      -1,     3,    -1,   431,    -1,     3,    -1,     3,    -1,   431,
      -1,   213,    -1,   214,    -1,   215,    -1,   216,    -1,   217,
      -1,   218,    -1,   219,    -1,   220,    -1,   221,    -1,   222,
      -1,   223,    -1,   224,    -1,   225,    -1,   226,    -1,   227,
      -1,   228,    -1,   230,    -1,   229,    -1,   231,    -1,   232,
      -1,   233,    -1,   234,    -1,   235,    -1,   236,    -1,   237,
      -1,   433,   436,    -1,    87,    43,     3,    40,   434,    41,
      -1,    87,    43,     3,    40,    41,    -1,   434,   239,   435,
      -1,   435,    -1,    14,   296,    -1,    30,    14,   296,    -1,
      46,    14,   296,    -1,    47,    14,   296,    -1,    14,   296,
      54,    -1,    30,    14,   296,    54,    -1,    46,    14,   296,
      54,    -1,    47,    14,   296,    54,    -1,    72,   437,   105,
      -1,    -1,   438,    -1,   438,   439,    -1,   439,    -1,   445,
      -1,   449,    -1,   454,    -1,   453,    -1,   443,    -1,   444,
      -1,   325,   238,    -1,   313,   238,    -1,   263,   238,    -1,
     262,   238,    -1,   320,   238,    -1,   272,   238,    -1,   274,
     238,    -1,   290,   238,    -1,   276,   238,    -1,   277,   238,
      -1,   278,   238,    -1,   280,   238,    -1,   279,   238,    -1,
     281,   238,    -1,   282,   238,    -1,   456,    -1,   455,    -1,
      -1,   441,    -1,   441,   442,    -1,   442,    -1,   445,    -1,
     449,    -1,   454,    -1,   453,    -1,   444,    -1,   325,   238,
      -1,   313,   238,    -1,   263,   238,    -1,   262,   238,    -1,
     320,   238,    -1,   272,   238,    -1,   274,   238,    -1,   290,
     238,    -1,   276,   238,    -1,   277,   238,    -1,   278,   238,
      -1,   280,   238,    -1,   279,   238,    -1,   281,   238,    -1,
     282,   238,    -1,   456,    -1,   455,    -1,    44,   410,   296,
     238,    -1,    44,   410,   296,    96,   246,   238,    -1,    44,
     410,   296,    54,   238,    -1,   173,   401,   238,    -1,   126,
     249,   187,   440,   446,   448,   105,   126,   238,    -1,   126,
     249,   187,   440,   446,   105,   126,   238,    -1,   126,   249,
     187,   440,   448,   105,   126,   238,    -1,   126,   249,   187,
     440,   105,   126,   238,    -1,   447,    -1,   446,   447,    -1,
      45,   249,   187,   440,    -1,   104,   440,    -1,    79,   249,
     450,   452,   105,    79,   238,    -1,   450,   451,    -1,   451,
      -1,   201,   249,   187,   440,    -1,    -1,   104,   440,    -1,
      49,   440,   105,    49,   238,    -1,   112,    14,    30,   248,
     193,   248,    49,   440,   105,    49,   238,    -1,   112,    14,
      30,    55,   248,   193,   248,    49,   440,   105,    49,   238,
      -1,    48,   249,    52,   440,   105,    48,   238,    -1,   238,
      -1,    50,   238,    -1,    50,   201,   249,   238,    -1,    53,
       3,    40,   244,    41,   329,    -1,    53,     3,    40,    41,
     329,    -1,   102,    43,   126,   109,     3,    -1,   102,    43,
       3,    -1,   174,    43,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   259,   259,   268,   275,   282,   283,   284,   285,   287,
     288,   289,   290,   291,   293,   294,   295,   296,   297,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   337,   341,
     348,   350,   356,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   378,   380,   382,   384,   390,   398,   402,
     406,   410,   414,   422,   423,   427,   431,   432,   433,   434,
     435,   436,   437,   440,   441,   445,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   468,   472,   476,   480,   484,   488,   492,   496,
     500,   504,   508,   512,   516,   523,   527,   532,   540,   541,
     545,   547,   552,   559,   560,   565,   569,   577,   591,   619,
     694,   710,   714,   736,   744,   751,   752,   753,   754,   758,
     762,   776,   790,   800,   804,   811,   825,   841,   848,   854,
     860,   867,   871,   876,   882,   899,   910,   923,   939,   945,
     959,   974,   989,  1005,  1021,  1037,  1054,  1070,  1091,  1110,
    1127,  1140,  1145,  1160,  1177,  1197,  1217,  1234,  1237,  1241,
    1245,  1252,  1256,  1265,  1274,  1276,  1278,  1280,  1282,  1284,
    1293,  1302,  1304,  1306,  1308,  1313,  1320,  1322,  1329,  1336,
    1343,  1350,  1352,  1354,  1360,  1372,  1374,  1377,  1381,  1382,
    1386,  1387,  1391,  1392,  1396,  1397,  1401,  1404,  1408,  1413,
    1418,  1420,  1422,  1427,  1431,  1436,  1442,  1447,  1452,  1457,
    1462,  1467,  1472,  1477,  1482,  1488,  1496,  1497,  1508,  1518,
    1519,  1524,  1528,  1542,  1552,  1554,  1558,  1565,  1576,  1590,
    1601,  1619,  1620,  1627,  1632,  1640,  1645,  1649,  1650,  1657,
    1661,  1667,  1668,  1682,  1692,  1697,  1698,  1702,  1706,  1711,
    1721,  1742,  1764,  1790,  1791,  1799,  1831,  1857,  1879,  1901,
    1927,  1928,  1932,  1939,  1947,  1955,  1959,  1963,  1975,  1978,
    1992,  1996,  2001,  2007,  2011,  2018,  2022,  2026,  2030,  2036,
    2042,  2049,  2054,  2059,  2063,  2070,  2075,  2082,  2086,  2093,
    2097,  2102,  2110,  2114,  2118,  2122,  2128,  2130,  2136,  2137,
    2143,  2144,  2152,  2159,  2166,  2173,  2180,  2191,  2202,  2217,
    2218,  2225,  2226,  2230,  2237,  2239,  2244,  2252,  2253,  2255,
    2261,  2262,  2270,  2273,  2277,  2284,  2289,  2297,  2305,  2315,
    2319,  2326,  2328,  2333,  2337,  2341,  2345,  2349,  2353,  2357,
    2366,  2374,  2378,  2382,  2391,  2397,  2403,  2409,  2416,  2417,
    2427,  2435,  2436,  2437,  2438,  2442,  2443,  2454,  2456,  2458,
    2460,  2462,  2464,  2466,  2471,  2473,  2475,  2477,  2479,  2483,
    2496,  2500,  2504,  2511,  2517,  2526,  2536,  2540,  2542,  2544,
    2549,  2550,  2551,  2556,  2557,  2559,  2565,  2566,  2571,  2572,
    2582,  2588,  2592,  2598,  2604,  2610,  2622,  2628,  2632,  2644,
    2648,  2654,  2659,  2670,  2676,  2682,  2686,  2698,  2704,  2709,
    2723,  2728,  2732,  2737,  2741,  2747,  2759,  2771,  2783,  2790,
    2794,  2802,  2806,  2811,  2825,  2836,  2840,  2846,  2852,  2857,
    2862,  2867,  2872,  2877,  2882,  2887,  2892,  2897,  2904,  2909,
    2914,  2919,  2931,  2971,  2976,  2988,  2995,  3000,  3002,  3004,
    3006,  3019,  3025,  3033,  3037,  3044,  3050,  3057,  3064,  3071,
    3078,  3085,  3092,  3103,  3113,  3114,  3118,  3121,  3127,  3134,
    3135,  3150,  3157,  3162,  3167,  3171,  3184,  3192,  3194,  3205,
    3211,  3222,  3226,  3233,  3238,  3244,  3249,  3258,  3259,  3263,
    3264,  3265,  3269,  3274,  3279,  3283,  3297,  3303,  3310,  3317,
    3324,  3334,  3337,  3345,  3349,  3356,  3371,  3374,  3378,  3380,
    3382,  3385,  3389,  3394,  3399,  3404,  3412,  3416,  3421,  3432,
    3434,  3451,  3453,  3470,  3474,  3476,  3489,  3490,  3491,  3492,
    3493,  3494,  3495,  3496,  3497,  3498,  3499,  3500,  3501,  3502,
    3503,  3504,  3505,  3506,  3507,  3508,  3509,  3510,  3511,  3512,
    3513,  3523,  3528,  3535,  3541,  3545,  3550,  3554,  3558,  3562,
    3566,  3573,  3580,  3587,  3595,  3602,  3605,  3610,  3614,  3619,
    3621,  3623,  3625,  3627,  3629,  3631,  3633,  3635,  3637,  3639,
    3641,  3643,  3645,  3647,  3649,  3651,  3653,  3655,  3657,  3659,
    3662,  3664,  3671,  3674,  3679,  3683,  3688,  3690,  3692,  3694,
    3696,  3698,  3700,  3702,  3704,  3706,  3708,  3710,  3712,  3714,
    3716,  3718,  3720,  3722,  3724,  3726,  3729,  3731,  3739,  3745,
    3751,  3771,  3783,  3789,  3795,  3799,  3804,  3808,  3813,  3819,
    3830,  3837,  3841,  3846,  3852,  3855,  3866,  3875,  3884,  3902,
    3908,  3918,  3928,  3939,  3947,  3960,  3964,  3978
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
  "MERGE_JOIN", "HASH_JOIN", "AUTO_INCREMENT", "CHUNKSERVER",
  "COMPRESS_METHOD", "CONSISTENT_MODE", "EXPIRE_INFO", "GRANTS",
  "JOIN_INFO", "MERGESERVER", "REPLICA_NUM", "ROOTSERVER", "ROW_COUNT",
  "SERVER", "SERVER_IP", "SERVER_PORT", "SERVER_TYPE", "STATUS",
  "TABLE_ID", "TABLET_BLOCK_SIZE", "TABLET_MAX_SIZE", "UNLOCKED",
  "UPDATESERVER", "USE_BLOOM_FILTER", "VARIABLES", "VERBOSE", "WARNINGS",
  "';'", "','", "$accept", "sql_stmt", "stmt_list", "stmt", "expr_list",
  "column_ref", "expr_const", "simple_expr", "arith_expr", "expr",
  "in_expr", "case_expr", "case_arg", "when_clause_list", "when_clause",
  "case_default", "array_expr", "func_expr", "when_func", "when_func_name",
  "when_func_stmt", "distinct_or_all", "delete_stmt", "update_stmt",
  "update_asgn_list", "update_asgn_factor", "create_index_stmt",
  "opt_index_columns", "opt_storing", "opt_storing_columns",
  "opt_index_option_list", "index_option", "cursor_declare_stmt",
  "cursor_name", "cursor_open_stmt", "cursor_fetch_stmt",
  "cursor_fetch_into_stmt", "cursor_fetch_next_into_stmt",
  "cursor_fetch_first_into_stmt", "cursor_fetch_prior_into_stmt",
  "cursor_fetch_last_into_stmt", "cursor_fetch_absolute_into_stmt",
  "cursor_fetch_relative_into_stmt", "fetch_prior_stmt",
  "fetch_first_stmt", "fetch_last_stmt", "fetch_relative_stmt",
  "next_or_prior", "fetch_absolute_stmt", "fetch_fromto_stmt",
  "cursor_close_stmt", "create_table_stmt", "opt_if_not_exists",
  "table_element_list", "table_element", "column_definition", "data_type",
  "opt_decimal", "opt_float", "opt_precision", "opt_time_precision",
  "opt_char_length", "opt_column_attribute_list", "column_attribute",
  "opt_table_option_list", "table_option", "opt_equal_mark",
  "drop_table_stmt", "opt_if_exists", "table_list", "drop_index_stmt",
  "index_list", "table_name", "insert_stmt", "opt_when",
  "replace_or_insert", "opt_insert_columns", "column_list",
  "insert_vals_list", "insert_vals", "select_stmt", "select_with_parens",
  "select_no_parens", "no_table_select", "select_clause",
  "select_into_clause", "simple_select", "opt_where", "select_limit",
  "opt_hint", "opt_hint_list", "hint_options", "hint_option",
  "opt_comma_list", "join_op_type_list", "join_op_type",
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
     243,   243,   243,   243,   243,   243,   243,   243,   244,   244,
     245,   245,   245,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   250,   250,   251,   252,   252,
     253,   253,   254,   255,   255,   256,   256,   257,   257,   257,
     257,   257,   257,   258,   259,   260,   260,   260,   260,   261,
     261,   262,   263,   264,   264,   265,   266,   267,   268,   268,
     269,   270,   270,   270,   271,   272,   273,   274,   275,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   287,   288,   289,   290,   291,   292,   292,   293,
     293,   294,   294,   295,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   297,   297,   297,   298,   298,
     299,   299,   300,   300,   301,   301,   302,   302,   303,   303,
     303,   303,   303,   304,   304,   304,   305,   305,   305,   305,
     305,   305,   305,   305,   305,   305,   306,   306,   307,   308,
     308,   309,   309,   310,   311,   311,   311,   312,   313,   313,
     313,   314,   314,   315,   315,   316,   316,   317,   317,   318,
     318,   319,   319,   320,   320,   321,   321,   322,   322,   322,
     322,   323,   323,   324,   324,   325,   326,   326,   326,   326,
     327,   327,   327,   328,   328,   328,   328,   328,   329,   329,
     330,   330,   330,   331,   331,   332,   332,   332,   332,   332,
     332,   332,   332,   332,   332,   333,   333,   334,   334,   335,
     335,   335,   336,   336,   336,   336,   337,   337,   338,   338,
     339,   339,   340,   340,   340,   340,   340,   340,   340,   341,
     341,   342,   342,   343,   344,   344,   345,   346,   346,   346,
     347,   347,   348,   348,   348,   349,   349,   349,   349,   350,
     350,   351,   351,   352,   352,   352,   352,   352,   352,   352,
     353,   354,   354,   354,   355,   355,   355,   355,   356,   356,
     357,   358,   358,   358,   358,   359,   359,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   361,   362,   362,   362,   363,   363,   363,
     364,   364,   364,   365,   365,   365,   366,   366,   367,   367,
     368,   369,   369,   370,   371,   372,   373,   374,   374,   375,
     375,   376,   376,   377,   378,   379,   379,   380,   381,   381,
     382,   382,   383,   383,   384,   384,   385,   386,   387,   388,
     388,   389,   389,   389,   390,   391,   391,   392,   392,   392,
     392,   392,   392,   392,   392,   392,   392,   392,   393,   393,
     394,   394,   395,   396,   396,   397,   398,   399,   399,   399,
     399,   400,   400,   401,   401,   402,   402,   402,   402,   402,
     402,   402,   402,   403,   404,   404,   405,   405,   406,   407,
     407,   408,   409,   409,   410,   410,   411,   412,   412,   413,
     413,   414,   414,   415,   415,   415,   415,   416,   416,   417,
     417,   417,   418,   418,   418,   418,   419,   419,   419,   419,
     419,   420,   420,   421,   421,   422,   423,   423,   424,   424,
     424,   424,   425,   425,   425,   425,   426,   426,   426,   427,
     427,   428,   428,   429,   430,   430,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   432,   433,   433,   434,   434,   435,   435,   435,   435,
     435,   435,   435,   435,   436,   437,   437,   438,   438,   439,
     439,   439,   439,   439,   439,   439,   439,   439,   439,   439,
     439,   439,   439,   439,   439,   439,   439,   439,   439,   439,
     439,   439,   440,   440,   441,   441,   442,   442,   442,   442,
     442,   442,   442,   442,   442,   442,   442,   442,   442,   442,
     442,   442,   442,   442,   442,   442,   442,   442,   443,   443,
     443,   444,   445,   445,   445,   445,   446,   446,   447,   448,
     449,   450,   450,   451,   452,   452,   453,   453,   453,   454,
     455,   456,   456,   457,   457,   458,   458,   459
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
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       0,     2,     3,     4,     4,     4,     3,     3,     3,     0,
       3,     1,     0,     3,     1,     3,     2,     0,     1,     1,
       0,     2,     0,     1,     1,     1,     2,     3,     1,     1,
       3,     1,     3,     1,     3,     2,     3,     2,     1,     5,
       1,     3,     6,     5,     2,     2,     2,     1,     1,     0,
       3,     1,     1,     1,     1,     1,     0,     3,     5,     5,
       5,     4,     4,     4,     2,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     4,     2,     0,     1,     2,     4,
       1,     1,     0,     0,     2,     2,     0,     1,     0,     1,
       3,     1,     3,     4,     1,     1,     3,     1,     3,     5,
       6,     2,     0,     3,     3,     1,     3,     4,     1,     1,
       1,     0,     3,     0,     2,     3,     2,     2,     4,     0,
       1,     0,     1,     1,     6,     1,     3,     2,     1,     1,
       2,     1,     1,     2,     1,     1,     1,     1,     1,     0,
       1,     1,     5,     2,     0,     4,     1,     1,     1,     1,
       1,     2,     3,     1,     3,     3,     3,     4,     4,     5,
       5,     3,     3,     3,     1,     1,     1,     1,     3,     1,
       3,     3,     2,     0,     1,     3,     3,     1,     1,     4,
       6,     1,     3,     3,     4,     4,     5,     1,     0,     1,
       1,     0,     3,     3,     3,     2,     4,     7,     7,     6,
       6,     0,     1,     1,     3,     9,     2,     0,     3,     3,
       3,     0,     1,     1,     1,     1,     3,     6,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     6,     5,     3,     1,     2,     3,     3,     3,
       3,     4,     4,     4,     3,     0,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     1,     0,     1,     2,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     1,     4,     6,
       5,     3,     9,     8,     8,     7,     1,     2,     4,     2,
       7,     2,     1,     4,     0,     2,     5,    11,    12,     7,
       1,     2,     4,     6,     5,     5,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      47,     0,     0,     0,     0,     0,     0,     0,   431,   431,
       0,   497,     0,     0,     0,   498,     0,   376,     0,   254,
       0,     0,     0,   253,     0,   431,   439,   288,     0,   402,
       0,   288,     0,     0,     4,    24,    23,    22,     9,    10,
      11,    13,    14,    15,    16,    17,    18,    12,    21,    25,
      26,    20,     0,    19,   274,   251,   267,   332,   273,    27,
      28,    46,    35,    36,    37,    38,    39,    42,    43,    44,
      45,    40,    41,    29,    30,    31,    34,     0,    32,    33,
       5,     0,     6,     8,     7,   274,     0,   544,   546,   547,
     548,   549,   550,   551,   552,   553,   554,   555,   556,   557,
     558,   559,   560,   561,   563,   562,   564,   565,   566,   567,
     568,   569,   570,     0,   156,   545,     0,   157,   158,   175,
     521,     0,     0,   430,   434,   436,     0,   178,     0,   178,
       0,   541,   406,   360,   542,   406,     0,   239,     0,   239,
     493,   466,   375,     0,   459,   448,   449,   451,   452,     0,
     454,   457,   456,   455,     0,   445,     0,     0,     0,   464,
     437,   440,   441,   292,   342,   539,     0,     0,     0,     0,
     422,     0,     0,     0,     0,   471,   473,     0,   540,   543,
       0,     0,     0,   409,   400,   403,   384,   401,     0,   403,
       0,   422,     0,   396,     0,     0,     0,     0,   433,     0,
       1,     2,    47,     0,     0,   263,   342,   342,   342,     0,
       0,   320,     0,   268,     0,   585,   571,   266,   265,     0,
       0,   159,   167,   168,   169,     0,     0,     0,   522,     0,
       0,     0,     0,     0,   414,     0,     0,     0,     0,   410,
     411,     0,     0,   280,   407,   387,   386,   666,     0,     0,
       0,   417,   416,   244,     0,   491,   372,   374,   373,   371,
     370,   458,   447,   450,   453,     0,     0,   393,     0,     0,
     425,   423,     0,     0,   442,   443,     0,     0,   306,   296,
       0,     0,   295,     0,   303,   304,     0,     0,   290,   293,
     343,   344,     0,   485,   484,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   472,     0,     0,     0,   667,
       0,     0,     0,     0,     0,   391,   403,   377,     0,     0,
     390,   397,   403,     0,   388,   389,   403,   392,     0,     0,
     435,     0,     3,   256,   539,    53,    55,    54,    57,    56,
      58,    59,    61,    60,     0,     0,     0,     0,   119,     0,
       0,   556,    63,    64,    83,   252,    67,    72,    68,    69,
       0,    70,    50,     0,   540,     0,     0,     0,     0,     0,
       0,   320,   269,   321,   496,     0,     0,   612,     0,     0,
       0,     0,     0,   288,     0,   660,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   586,   588,   593,   594,   589,   590,   592,   591,
     611,   610,     0,   288,     0,    48,   173,     0,     0,   516,
     523,     0,     0,     0,     0,     0,   508,   508,   508,   508,
     499,   501,     0,   428,   429,   427,     0,     0,     0,     0,
       0,     0,     0,   251,     0,   240,     0,   238,     0,   241,
     353,   358,     0,     0,   245,   486,   487,   494,   492,   460,
       0,   461,   446,   470,   469,   468,   467,   465,     0,     0,
     463,     0,   438,     0,     0,     0,     0,     0,     0,   289,
       0,   294,   348,   345,   349,   318,   481,     0,     0,   475,
       0,     0,   421,     0,     0,     0,     0,   482,   474,   476,
     403,   403,   385,   404,   405,   381,   403,   398,   382,   395,
     383,     0,   132,   139,     0,   140,     0,     0,     0,    48,
       0,     0,     0,     0,     0,     0,   249,   103,    84,    85,
       0,    48,    70,   118,     0,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     288,   274,   279,   273,   277,   278,   337,   333,   334,   316,
     317,   285,   286,   270,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   613,   615,   620,   616,   617,   619,   618,   637,
     636,     0,   661,     0,     0,     0,     0,     0,     0,   598,
     597,   600,   601,   603,   604,   605,   607,   606,   608,   609,
     602,   596,   599,   595,   584,   587,   155,   664,   288,     0,
       0,   170,     0,     0,     0,     0,     0,     0,   507,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   573,     0,
       0,     0,   575,   177,     0,   412,     0,     0,     0,   281,
     141,   665,   274,     0,   358,     0,     0,   357,   369,   367,
       0,   369,   369,     0,     0,   355,   418,     0,     0,     0,
       0,   424,   426,   462,     0,   301,   305,   309,   310,   311,
       0,   307,     0,   315,   314,   313,   312,     0,     0,   291,
       0,   346,     0,     0,   319,   271,   125,   126,   477,     0,
     415,   419,   478,     0,     0,   483,   380,   379,   378,     0,
       0,   127,     0,     0,     0,     0,     0,     0,   129,     0,
       0,     0,   131,   432,   280,   143,     0,     0,   257,     0,
       0,    65,     0,   124,   120,    62,   102,   101,     0,     0,
       0,    98,    96,    97,    95,    94,    93,   114,    99,     0,
       0,    73,     0,     0,   112,   115,   106,   104,   108,     0,
      86,    87,    88,    89,    90,    92,    91,     0,   138,   137,
     136,   135,    52,    51,   342,   338,   339,   336,     0,     0,
       0,     0,   188,   215,   191,   215,   201,   203,   196,   207,
     211,   209,   187,   186,   202,   207,   193,   185,   213,   213,
     184,   215,   215,     0,   612,   624,   623,   626,   627,   629,
     630,   631,   633,   632,   634,   635,   628,   622,   625,   621,
       0,   614,     0,   171,   172,     0,     0,     0,     0,     0,
       0,   654,   652,     0,   612,     0,   641,   663,    49,   174,
     524,    60,   527,   519,   520,     0,     0,   503,     0,     0,
     511,   500,     0,   508,   502,   420,   576,     0,     0,     0,
     572,     0,     0,     0,   179,   181,   413,     0,   282,   361,
     242,   356,   368,   364,     0,   365,   366,     0,   354,   243,
     247,   246,   495,   444,   300,   302,     0,     0,   298,     0,
     347,   280,   280,   351,   350,   479,   480,   489,     0,   399,
     394,   326,     0,   327,     0,   328,     0,     0,   322,   128,
       0,   251,     0,   255,     0,     0,   251,    49,     0,     0,
     121,     0,   100,     0,   113,    74,    75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   107,   105,   109,   133,
       0,   335,   283,   287,   284,     0,   198,   197,     0,   189,
     210,   194,     0,   192,   190,     0,   204,   195,   199,   200,
       0,     0,   638,     0,     0,   662,     0,     0,     0,     0,
       0,   160,     0,     0,   612,   651,     0,     0,     0,     0,
       0,     0,   531,   517,   518,   217,     0,     0,   505,   509,
     510,   504,     0,   580,   577,   578,   579,   574,     0,   225,
       0,     0,   149,     0,     0,     0,   308,     0,   299,   318,
       0,   329,   488,     0,   323,   324,   325,   130,   144,   142,
     145,   250,   258,   261,     0,     0,   248,    66,     0,   123,
     117,     0,   110,    76,    77,    78,    79,    80,    82,    81,
     116,     0,     0,     0,     0,     0,   640,     0,     0,   656,
     161,   163,   162,   164,     0,     0,   612,   655,     0,     0,
       0,     0,   612,     0,     0,   646,     0,     0,   526,     0,
       0,   183,     0,   515,     0,     0,   506,   581,   582,   583,
       0,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   176,   223,   180,     0,     0,   153,   359,   363,     0,
       0,   272,   352,     0,   340,   490,   259,     0,     0,   122,
     111,     0,   214,   206,     0,   208,   212,   639,     0,   165,
       0,   653,     0,     0,     0,     0,   649,     0,     0,   647,
       0,     0,     0,     0,     0,   219,     0,     0,     0,   221,
     216,   513,   512,   514,     0,   236,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   147,     0,   148,
     146,   151,   154,   362,     0,     0,     0,   276,   262,     0,
       0,   659,   166,   650,     0,   612,   612,   645,     0,     0,
       0,   280,   530,   528,   529,     0,   218,   220,   222,   182,
     235,   232,   234,   227,   226,   231,   230,   229,   228,   233,
     224,     0,     0,     0,   330,   341,   260,   205,   612,     0,
     648,   643,     0,   644,   320,   534,   535,   532,   533,   538,
     150,   152,     0,     0,     0,   642,   275,     0,     0,   525,
       0,     0,     0,     0,     0,     0,     0,   657,   536,     0,
       0,   658,     0,     0,     0,   297,   537
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    32,    33,    34,   414,   352,   353,   354,   762,   483,
     764,   356,   534,   743,   744,   931,   357,   358,   359,   360,
     777,   520,   576,   577,   734,   735,    37,  1012,  1106,  1169,
    1170,  1171,   578,   113,   579,    40,   580,   581,   582,   583,
     584,   585,   586,    41,    42,    43,    44,   227,    45,    46,
     587,    48,   238,   873,   874,   875,   813,   959,   963,   961,
     966,   956,  1081,  1150,  1101,  1172,  1156,    49,   250,   447,
      50,   453,   889,   588,   205,    52,   525,   737,   926,  1034,
     589,   361,    55,    56,    57,   590,    58,   443,   704,   164,
     287,   288,   289,   474,   690,   691,   697,   571,   705,   213,
     521,  1114,   210,   211,   567,   568,   787,  1177,   292,   484,
     485,   902,   903,   450,   451,   673,   883,    59,   260,   143,
      60,    61,   324,   320,   195,   315,   245,   196,    62,   239,
     240,   251,   711,    63,   252,    64,   301,    65,   270,   271,
      66,   435,   124,   330,    67,    68,    69,    70,   162,   276,
      71,   154,   155,   262,   460,    72,   273,    73,   140,   467,
      74,   175,   176,   305,   295,   457,   715,   908,    75,   255,
     458,    76,    77,    78,   430,   431,   643,  1001,   998,    79,
     232,   419,   420,   992,  1080,  1229,  1239,   362,   363,   197,
     114,   364,    80,    81,   651,   652,   216,   401,   402,   403,
     591,   592,   593,   404,   594,   595,  1074,  1075,  1076,   596,
     841,   842,   986,   597,   598,   599,   600,    82,    83,    84
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -962
static const yytype_int16 yypact[] =
{
    3240,    22,  2805,    83,  2805,  2805,  2805,   194,  -114,  -114,
     167,  -962,   -19,  2947,  2947,   232,  2805,  -113,   661,  -962,
     -42,  2805,    -6,  -962,   661,  -114,    36,   100,  2406,   624,
      70,   100,   324,   -63,  -962,  -962,  -962,  -962,  -962,  -962,
    -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,
    -962,  -962,   206,  -962,    -3,   144,  -962,   353,    15,  -962,
    -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,
    -962,  -962,  -962,  -962,  -962,  -962,  -962,   225,  -962,  -962,
    -962,   309,  -962,  -962,  -962,   347,   350,  -962,  -962,  -962,
    -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,
    -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,
    -962,  -962,  -962,   338,  -962,  -962,   363,  -962,   671,  -962,
     393,  2947,   408,  -962,  -962,  -962,   405,   293,   408,   293,
    2947,  -962,   431,  -962,  -962,   431,    69,   328,   408,   328,
     260,  -962,  -962,   413,   298,  -962,   268,  -962,  -962,   317,
    -962,  -962,  -962,  -962,   137,  -962,  2947,   355,   408,   168,
    -962,  -962,   154,   380,    42,  -962,    52,    74,  2978,   429,
     366,  2978,   440,   477,    52,   263,  -962,    52,  -962,  -962,
     535,    86,   371,  -962,  -962,    14,  -962,  -962,   315,    14,
     419,   439,   342,   442,   373,   345,   383,   544,   390,  2947,
    -962,  -962,  3240,  2947,  2240,  -962,    42,    42,    42,   531,
      19,   235,   417,  -962,  2805,   754,  -962,  -962,  -962,   501,
    1585,   549,   551,  -962,  -962,   621,   623,   564,  -962,  2978,
     489,   449,   352,   391,  -962,   213,   596,   622,  2947,   409,
    -962,   519,  2947,   451,  -962,  -962,  -962,  -962,   545,   552,
    2641,  -962,   414,  2947,   648,  -962,  -962,  -962,  -962,  -962,
    -962,  -962,  -962,  -962,  -962,  2680,   661,  -962,   413,   472,
    -962,   427,  2680,   556,  -962,  -962,   672,   639,  -962,  -962,
     647,   652,  -962,   659,  -962,  -962,   666,   -74,   380,  -962,
    -962,  -962,  1746,  -962,  -962,  2240,   325,  2240,    52,  2978,
     408,   664,    52,  2978,    52,  -962,  2240,  2435,  2240,  -962,
    2947,  2947,  2947,   705,  2240,  -962,    14,  -962,  2947,   116,
    -962,  -962,    14,   708,  -962,  -962,    14,  -962,  1333,   633,
    -962,   546,  -962,    43,   358,  -962,  -962,  -962,  -962,  -962,
    -962,  -962,  -962,   681,  2240,  2240,  2240,  1826,  2240,   685,
     695,   702,  -962,  -962,  -962,  3740,  -962,  -962,  -962,  -962,
     707,  -962,  -962,   711,   714,    50,    50,    50,  2240,   151,
     151,   645,  -962,  -962,  -962,  2876,  2240,   849,   -94,  2805,
    2240,   746,  2240,   100,  2435,  -962,   523,   526,   529,   530,
     534,   550,   553,   555,   558,   562,   563,   567,   568,   576,
     578,   668,   754,  -962,  -962,  -962,  -962,  -962,  -962,  -962,
    -962,  -962,    22,   100,    -1,  3740,  -962,   589,   794,   590,
    -962,   791,   793,   806,   700,   701,   760,   760,   760,   136,
     607,  -962,   770,  -962,  -962,  -962,   522,   740,   810,   408,
     775,   710,  1907,   144,   851,  -962,  1663,   618,  2712,   593,
    2743,  -962,   408,   200,  -962,   681,  -962,  -962,   619,  -962,
     667,  -962,  -962,  -962,  -962,  -962,  -962,  -962,   408,   408,
    -962,   408,  -962,   859,    25,   308,  2947,   334,  2947,  -962,
     380,  -962,  -962,  1425,  -962,   -43,  3740,   822,   823,  3740,
    2240,    52,  -962,   861,  2240,    52,   827,  3740,  -962,  3740,
      14,    14,  -962,  -962,  3740,  -962,    14,   828,  -962,   630,
    -962,   829,  -962,  -962,  1997,  -962,  2079,  2158,    26,  3462,
    2240,   838,   706,  2978,  2543,   684,  -962,  3050,  -962,  -962,
     649,  3668,   538,  3740,   686,  -962,  2978,  2240,  2240,   561,
    2240,  2240,  2240,  2240,  2240,  2240,  2240,  2240,  2508,   846,
     376,  2240,  2240,  2240,  2240,  2240,  2240,  2240,   413,  2778,
     100,  -962,   873,  -962,   873,  -962,  3579,   653,  -962,  -962,
    -962,     5,   755,  -962,  1019,  3633,   656,   658,   662,   673,
     676,   677,   678,   679,   682,   683,   687,   688,   691,   692,
     693,   797,   849,  -962,  -962,  -962,  -962,  -962,  -962,  -962,
    -962,  2240,  -962,   541,  2332,   874,  3029,  1503,   259,  -962,
    -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,
    -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,   100,  2240,
     900,  -962,  2978,   172,   905,   906,   895,   899,  -962,  2978,
    2978,  2978,  2947,  2978,   404,   861,  3280,   919,  -962,   920,
     922,    32,  -962,  -962,  2915,  -962,   861,  2947,  2240,  3740,
    -962,  -962,  2605,   593,   896,  2641,  2947,  -962,   790,  -962,
    2641,   790,   790,   809,  2947,  -962,  -962,  2947,  2947,   648,
     408,  -962,  -962,   414,   901,  -962,  -962,  -962,  -962,  -962,
      34,  -962,   704,  -962,  -962,  -962,  -962,   904,  2947,   380,
    2805,  -962,  2570,  1746,  -962,  -962,  -962,  -962,  3740,  2240,
    -962,  -962,  3740,  2240,   172,  -962,  -962,  -962,  -962,   921,
     936,  -962,  2240,  3483,  2240,  3515,  2240,  3536,  -962,  3280,
    2240,  3692,  -962,  -962,  -115,  -962,   923,    39,  -962,   924,
    2240,  -962,  2240,   -39,  -962,  -962,  3557,  3050,  2240,  2508,
     846,  1152,  1152,  1152,  1152,  1152,  1152,  1358,  1190,  2508,
    2508,  -962,   789,  1826,  -962,  -962,  -962,  -962,  -962,   497,
     587,   587,   925,   925,   925,   925,  -962,   927,  -962,  -962,
    -962,  -962,  -962,  -962,    42,  -962,  -962,  -962,  2240,   151,
     151,   151,  -962,   929,  -962,   929,  -962,  -962,  -962,   931,
     813,   932,  -962,  -962,  -962,   931,  -962,  -962,   933,   933,
    -962,   929,   929,    94,   849,  -962,  -962,  -962,  -962,  -962,
    -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,
     928,  -962,  1296,   844,   858,   860,   863,   974,   648,   930,
    2240,   114,  -962,  2475,   849,   -46,  -962,  -962,  3740,  -962,
    -962,  -962,   907,  -962,  -962,   990,   992,  -962,  3280,   -28,
     -10,  -962,   804,   760,  -962,  -962,   945,  3280,  3280,  3280,
    -962,   503,   868,    46,  -962,  -962,  -962,   962,  3740,   934,
     593,  -962,  -962,  -962,   577,  -962,  -962,  2641,  -962,  -962,
    -962,  -962,  -962,   414,  -962,  -962,   308,  2947,  -962,   964,
    -962,   451,   -88,   593,  -962,  3740,  3740,  -962,    47,  -962,
    -962,  3740,  2240,  3740,  2240,  3740,  2240,   965,  3740,  -962,
    2978,   144,  2240,    22,  2978,  2240,  -101,  3716,  3199,  2240,
    -962,   898,  1190,   840,  -962,  -962,  -962,  2508,  2508,  2508,
    2508,  2508,  2508,  2508,  2508,    51,  -962,  -962,  -962,  -962,
    1746,  -962,  -962,  -962,  -962,  1005,  -962,  -962,  1007,  -962,
    -962,  -962,  1008,  -962,  -962,  1010,  -962,  -962,  -962,  -962,
     778,   172,  -962,   912,   782,  -962,   648,   648,   648,   648,
     891,   619,  1018,  3220,   849,  -962,   935,  2508,   452,   288,
     648,  1020,   856,  -962,  -962,  -962,    62,   127,  -962,  -962,
    -962,  -962,  2805,  -962,   972,   973,   978,  -962,   988,   343,
    2915,  2978,   824,  2947,  2240,   635,  -962,   795,  -962,    19,
    2641,   918,  -962,   172,  3740,  3740,  3740,  -962,  -962,  -962,
    3740,  -962,  -962,  3740,    54,   997,  -962,  -962,  2240,  3740,
    -962,  2508,  1022,   741,   741,  1001,  1001,  1001,  1001,  -962,
    -962,   -65,  1004,    55,  1006,  1009,  -962,   808,   994,  -962,
     619,   619,   619,   619,   648,   937,   849,  -962,   969,   491,
    2508,  2240,   849,   926,   435,  -962,   944,   -14,  -962,  1037,
     836,    44,  1055,  -962,  1056,   172,  -962,  -962,  -962,  -962,
    2978,  1044,  1044,  1044,  1044,  1044,  1044,  1044,  1044,  1044,
    1044,   830,  -962,  -962,    64,  1031,   343,  -962,  3740,  2240,
    2947,  -962,   593,   995,   952,  -962,  -962,  2240,  2240,  3740,
    1022,  2641,  -962,  -962,  1069,  -962,  -962,  -962,   837,   619,
     648,  -962,   841,  2508,   917,  3241,  -962,   842,   950,  -962,
     976,   956,  2641,   290,  1054,  -962,  1073,   172,   953,  -962,
    -962,  -962,  -962,  -962,    65,  -962,  1081,  1085,   911,  1087,
    1091,  1092,  1093,  1100,  1101,  1088,   343,  -962,  2978,  -962,
     870,  -962,  -962,  3740,  1071,  2240,  2240,  -962,  3740,    67,
    1074,  -962,   619,  -962,   949,   849,   849,  -962,   878,   991,
     880,   -88,  -962,  -962,  -962,   121,  -962,  -962,  -962,  -962,
    -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,  -962,
    -962,    72,   343,  2947,   886,  3740,  -962,  -962,   849,  1023,
    -962,  -962,   889,  -962,   645,  -962,  -962,  -962,  -962,   -34,
    -962,  -962,   892,  1028,  1086,  -962,  -962,  1110,  1115,  -962,
    2947,  1094,   903,  1137,  1140,  1103,   908,  -962,  -962,   938,
    2947,  -962,  1125,  1109,  1146,  -962,  -962
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -962,  -962,  -962,   951,  -322,  -962,  -610,  -344,  -103,   756,
     402,  -962,  -962,  -962,   411,  -962,   -20,  1126,  -962,  -962,
    -962,  -962,    24,    27,  -962,   236,  -962,  -962,  -962,  -962,
    -962,   -55,    45,    30,    53,  -962,  -174,  -171,  -152,  -146,
    -118,  -100,   -90,  -962,  -962,  -962,  -962,   557,  -962,  -962,
      59,  -962,  1033,  -962,   155,   528,  -569,   364,  -962,  -962,
     361,  -694,  -962,  -962,  -962,  -949,   283,  -962,  1029,  -962,
    -962,  -962,  -962,    28,  -425,  -962,  -962,  -961,  -962,    56,
       9,    57,     6,  -962,   336,   -89,   379,  -714,   961,   -16,
    -962,   696,  -267,  -962,  -962,   276,  -962,  -353,   158,  -210,
    -962,  -962,  -962,  -962,  -962,   385,  -962,  -962,  -175,   488,
    -585,    58,  -237,    38,   747,  -962,  -140,  -962,  -962,  -962,
    -962,  -962,  -962,  -962,  -962,  -143,  1057,  -962,  -962,  -962,
     757,   -67,  -534,  -962,  -434,  -962,  1011,  -962,   726,  -962,
    -962,  -962,   132,  -962,  -962,  -962,  -962,  -962,  -962,  -962,
    -962,  1173,   939,  -962,   940,  -962,  -962,  -962,    18,  -962,
    -962,   819,   897,  -962,   -96,   527,  -962,  -962,  -962,  -962,
    -359,  -962,  -962,  -962,  -962,   566,   359,  -962,  -962,  -962,
    -962,  -962,   581,  -962,  -962,  -962,  -962,   111,    16,  -962,
     -11,    -2,  -962,  -962,  -962,   344,  -962,  -962,  -962,   812,
    -735,  -962,   638,  -962,   -85,   -84,  -962,   142,   157,   -83,
    -962,   392,  -962,   -82,   -81,   -80,   -79,  -962,  -962,  -962
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -544
static const yytype_int16 yytable[] =
{
     115,   372,   115,   115,   115,   141,   518,    86,   174,    53,
     141,   134,   134,   449,   115,   199,   574,   572,   660,   115,
     921,   481,   845,   852,    35,   530,   178,    36,    51,   133,
     133,   365,   366,   367,   117,   118,   119,   683,  -264,   157,
     628,   390,   313,   201,   391,    38,   317,  1237,  1121,   479,
    1104,   132,   135,    39,  1145,   235,  -320,    54,    85,    47,
    1102,   241,     1,   392,  1146,   929,   685,   728,   999,   393,
     702,   297,   247,   870,   996,   895,   293,   866,   306,   973,
     923,   308,  1082,   524,   990,   442,   116,  1009,  1022,   123,
       1,   269,  1050,   369,   130,  1116,  1123,   394,   293,  1142,
     204,   957,   370,  -264,   907,  1167,  1199,   601,  1216,   989,
     290,   865,   442,  1230,   296,   395,   310,   968,   969,   134,
     234,  -320,   876,   142,   920,   396,   400,   212,   134,  1154,
     405,   406,   407,   408,   409,   410,   411,   133,  1035,   177,
    1147,   125,   291,   156,   602,   997,   133,  1084,   970,  1000,
     789,  1020,   259,   161,   134,   369,   569,   160,  1083,   233,
     917,   573,   742,   570,   370,   480,   178,   256,   243,   178,
     257,   258,   133,   505,   703,   202,   335,   336,   337,   508,
     338,   339,   340,   510,   341,   342,   851,  1019,  1021,   158,
     971,  1238,    27,   703,   267,   248,   703,   134,  1148,   311,
      54,   134,   490,   141,   761,   507,   494,  1211,   496,   663,
     126,    53,   115,    27,   314,   133,  -320,  1210,   984,   133,
     560,   638,   163,  1085,   399,   679,    35,   178,   390,    36,
      51,   391,   374,   492,   456,  -264,   134,   331,   629,   386,
     134,   333,   387,   398,   790,   294,   893,    38,   134,  1067,
     392,   134,   492,  -320,   133,    39,   393,  1149,   133,    54,
     388,    47,   198,   134,   686,   629,   133,   294,   389,   133,
     134,   871,    54,   896,   397,   136,   438,   466,   924,   298,
     441,   461,   302,   265,   394,  1010,  1023,   174,   461,   995,
     629,   454,   463,  1117,  1124,   464,   465,   178,  1004,  1005,
    1006,   178,   395,   924,   924,   178,  1117,   448,   134,   134,
     134,   924,   396,   400,   272,   840,   134,   405,   406,   407,
     408,   409,   410,   411,   200,    54,   133,   133,   133,   642,
     487,  1131,   972,  1071,   133,  1225,   203,  1136,   432,   488,
     421,  1226,   526,  1227,   350,   204,   677,   212,   500,   501,
     502,   433,   127,    86,  1228,   456,   506,   716,   717,   274,
     275,  1057,   128,   718,   174,  1051,  1192,   607,   206,   207,
     208,  -331,   241,   115,   120,   129,   266,   115,   214,   121,
    -331,   215,   178,   277,   766,   676,   767,   768,   217,   122,
      54,   218,  1072,  1073,   219,   709,   769,   627,  -543,   713,
    -541,   681,   269,   220,   532,   761,   535,   266,   236,   603,
     491,   399,   234,  1115,   495,   761,   761,   137,   177,   237,
     278,   626,   561,   561,   561,  1091,   386,   138,   880,   387,
     398,  1193,   481,   884,    54,   244,   952,   953,   954,   678,
     139,   945,   424,   425,   134,   434,   134,   388,   134,   693,
    1219,  1220,    86,     1,   249,   389,   254,   426,   261,    54,
     427,   397,   133,   263,   667,   264,   675,  1194,   268,    54,
     426,   299,   701,   427,   134,  1153,   134,  1224,   300,   981,
    1071,   115,   303,  1233,   938,   939,   940,   941,   942,   943,
     944,   304,   133,   428,   133,   177,  1029,   846,   307,   761,
     209,  1036,   307,   662,   279,   946,   428,   947,   948,   228,
      12,   280,   281,   694,   692,   695,   698,   646,   687,   688,
     689,   178,   178,   938,   939,   940,   941,   942,   943,   944,
      86,   885,   886,   647,   178,   282,   646,  1197,   309,  1072,
    1138,   696,    19,   316,   784,   283,   284,   285,   429,   649,
     650,   319,   647,  -274,  -274,  -274,   312,   178,  1092,  1093,
    1094,   863,  1095,   648,  1096,   318,   229,   781,   649,   650,
     322,    23,  1097,  1098,  1099,   230,   231,  1100,   323,   217,
     326,    85,   778,    27,   328,   779,   780,   327,   286,   748,
     749,   750,   329,   761,   761,   761,   761,   761,   761,   761,
     761,   833,   834,   835,   836,   837,   765,    31,   368,   950,
     325,   373,   847,   412,  -171,    54,  -172,  1060,  1061,  1062,
    1063,   553,   554,   555,   556,   557,   416,   179,   417,   418,
     178,  1077,   422,   423,   736,   738,   436,   178,   178,   178,
     134,   178,   437,   761,   440,  1070,   933,   745,   439,    54,
    1015,   442,   178,   452,   444,   134,   935,   936,   133,   456,
     134,   445,   455,   134,   134,   468,   469,   180,   134,   471,
     783,   838,   134,   133,  -274,   134,   134,   472,   667,   473,
     861,   133,   881,  -274,  1133,  -274,   133,   475,   493,   900,
     888,   668,   476,   133,   133,   877,   134,   761,   115,   477,
     134,   562,   564,   565,   669,  1129,   478,   668,   670,   503,
     181,   182,   671,   509,   133,   890,   891,   522,   133,   523,
     669,   296,   448,  1014,   670,     1,   761,   448,   671,   144,
     145,   221,   222,   223,   224,   225,   899,   536,   183,   672,
     988,   184,  -134,   421,   563,   563,   563,   558,   146,   668,
     858,   859,   860,   559,   862,   672,  -542,   212,   147,   448,
     605,   609,   669,   148,   610,   858,   670,   611,   612,    86,
     671,  1182,   613,   624,   185,   940,   941,   942,   943,   944,
     149,  1109,   630,  1112,   226,   639,   640,   641,   614,   761,
     150,   615,   186,   616,     1,   187,   617,   672,   375,   631,
     618,   619,   376,   377,   378,   620,   621,   765,   937,   188,
     189,     4,   379,     6,   622,   633,   623,   634,   456,   151,
     532,   938,   939,   940,   941,   942,   943,   944,  -408,   632,
     635,   152,   190,   380,  1042,  1043,  1044,  1045,  1046,  1047,
    1048,  1049,   191,   636,   637,   638,   644,   645,   192,   653,
     654,    12,   656,  1214,   661,   153,   657,   665,   679,  1041,
     680,   193,   684,   706,   707,   710,   381,   714,   719,   720,
     721,    54,   938,   939,   940,   941,   942,   943,   944,   732,
     382,   739,   733,    19,  1069,   134,   763,   742,   740,     1,
     208,   791,   788,     2,   815,   134,   816,   376,   377,   378,
     817,    54,   830,   133,   843,   849,     4,   379,     6,   853,
     854,   818,    23,   133,   819,   820,   821,   822,   178,   855,
     823,   824,   178,   856,   383,   825,   826,   384,   380,   827,
     828,   829,  1031,   867,   868,  1017,   869,   879,  1120,   882,
     887,   910,   894,   897,   448,   898,    12,   922,    31,   938,
     939,   940,   941,   942,   943,   944,   456,   456,   456,   456,
     355,   381,   909,   557,   925,   960,  1185,  1134,   949,   955,
     456,   958,   962,   965,   976,   382,   415,   974,    19,   980,
      54,   938,   939,   940,   941,   942,   943,   944,   977,   991,
     978,  1086,   385,   979,   993,   982,   994,  1002,  1218,  1003,
     115,  1008,  1011,  1040,  1013,  1018,  1027,    23,   178,   178,
    1052,   134,  1053,  1054,  1236,  1055,  1056,  1058,   134,   383,
    1059,  1064,   384,  1065,  1078,  1079,  1087,  1088,  1090,  1107,
    1184,   736,  1089,  1105,  1110,  1032,   133,  1118,  1113,   944,
    1068,    54,  1128,    31,   456,  1122,  1127,  1125,  1132,  1141,
    1126,   486,  1137,   489,   938,   939,   940,   941,   942,   943,
     944,  1143,   497,  1144,   499,  1151,  1152,  1130,  1155,  1166,
     504,  1168,  1175,  1176,  1180,  1181,  1188,   448,  1195,  1183,
    1187,  1189,  1190,  1196,   519,  1200,  1198,   385,   178,  1201,
    1202,  1203,   792,   793,   794,  1204,  1209,  1205,  1206,   795,
     527,   528,   529,   531,   533,  1207,  1208,   796,   134,  1212,
     456,   797,   798,  1213,   799,  1217,  1221,  1222,  1223,   134,
     800,   858,   738,    54,   566,   629,   133,  1235,  1234,    54,
     801,  1240,   575,  1241,  1243,  1242,   604,   133,   606,  1244,
     134,  1247,  1248,  1246,  1249,  1250,  1251,   802,  1174,  1254,
    1255,  1256,   934,   332,   930,   194,  1028,  1231,   133,   803,
     839,   804,   242,   805,  1252,  1103,   178,   857,   253,   964,
     967,   371,  1016,   951,  1179,   806,   699,  1111,   448,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,   556,
     557,   904,   246,   664,   807,   682,   655,   159,   659,   448,
    1191,   738,   321,   608,   498,   462,   892,   808,   809,   810,
     864,   134,   470,   850,   625,  1007,  1139,   811,   812,   548,
     549,   550,   551,   552,   553,   554,   555,   556,   557,   133,
     831,  1140,     0,   985,     0,     0,     0,     0,   134,     0,
       0,     0,    54,    54,     0,     0,   708,     0,   134,     0,
     712,  1232,     0,     0,     0,     0,   133,     0,   679,     0,
       0,     0,     0,     0,     0,     0,   133,     0,     0,     0,
     723,     0,   725,   727,     0,    54,   731,     0,  1245,   738,
       0,     0,     0,     0,     0,     0,     0,     0,  1253,     0,
       0,     0,     0,   746,   747,     0,   751,   752,   753,   754,
     755,   756,   757,   758,     0,     0,     0,   770,   771,   772,
     773,   774,   775,   776,   537,   538,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,   556,   557,     0,   334,   335,   336,   337,
       0,   338,   339,   340,     0,   341,   342,   343,     0,     0,
       0,     0,     0,   344,     0,     0,     0,   832,     0,     0,
       0,     0,     0,     0,     0,   345,   346,   511,     0,     0,
       0,     0,     0,   347,   512,  1157,  1158,  1159,  1160,  1161,
    1162,  1163,  1164,  1165,     0,   848,   547,   548,   549,   550,
     551,   552,   553,   554,   555,   556,   557,     0,     0,     0,
       0,   513,     0,     0,     0,     0,     0,     0,     0,   514,
       0,     0,   348,     0,   878,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    87,     0,
       0,     0,     0,   515,     0,     0,     0,     0,     0,     0,
       0,     0,   349,   537,   538,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,   556,   557,     0,   905,     0,   516,     0,   906,
       0,     0,     0,     0,     0,     0,     0,     0,   911,     0,
     913,     0,   915,     0,     0,     0,   918,     0,     0,     0,
       0,     0,     0,     0,     0,   700,   927,     0,   928,     0,
       0,     0,     0,     0,   932,   350,   334,   335,   336,   337,
       0,   338,   339,   340,     0,   341,   342,   343,     0,   415,
       0,     0,     0,   344,   517,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   975,   345,   346,   482,     0,     0,
       0,     0,     0,   347,   566,     0,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,   351,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   290,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   348,     0,     0,     0,     0,     0,   334,   335,
     336,   337,     0,   338,   339,   340,   983,   341,   342,   343,
       0,     0,     0,   291,     0,   344,     0,     0,     0,     0,
       0,     0,   349,     0,     0,     0,     0,   345,   346,     0,
       0,     0,     0,     0,     0,   347,   413,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,     0,   348,     0,   131,     0,  1024,     0,
    1025,     0,  1026,     0,     0,   350,     0,     0,  1030,     0,
       0,  1033,     0,     0,     0,  1039,     0,     0,     0,     0,
       0,     0,     0,     0,   349,     0,     0,     0,     0,     0,
       0,     0,     0,   446,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,   351,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,     0,     0,     0,     0,     0,     0,     0,     0,   334,
     335,   336,   337,     0,   338,   339,   340,   350,   341,   342,
     343,     0,     0,     0,     0,     0,   344,     0,     0,     0,
    1108,     0,     0,     0,     0,     0,     0,     0,   345,   346,
     482,     0,     0,     0,     0,     0,   347,     0,     0,     0,
       0,     0,     0,     0,  1119,     0,     0,     0,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,   351,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,     0,     0,   348,     0,  1135,     0,   334,
     335,   336,   337,    27,   338,   339,   340,     0,   341,   342,
     343,     0,     0,     0,     0,     0,   344,     0,     0,     0,
       0,     0,     0,     0,     0,   349,     0,     0,   345,   346,
       0,     0,     0,     0,     0,  1173,   347,     0,     0,     0,
       0,     0,     0,  1178,  1033,     0,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,     0,     0,     0,     0,   348,     0,     0,     0,     0,
     334,   335,   336,   337,   658,   338,   339,   340,   350,   341,
     342,   343,     0,     0,     0,     0,     0,   344,     0,     0,
       0,   415,  1215,     0,     0,   349,     0,     0,     0,   345,
     346,     0,     0,     0,     0,     0,     0,   347,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,   351,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,     0,     0,   348,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,   350,     0,
     334,   335,   336,   337,     0,   338,   339,   340,     0,   341,
     342,   343,     0,     0,     0,     0,   349,   344,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   345,
     346,     0,     0,     0,     0,     0,     0,   347,     0,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,   351,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   348,     0,     0,   350,
       0,     0,   334,   335,   336,   337,     0,   338,   339,   340,
       0,   341,   342,   343,     0,     0,     0,     0,     0,   344,
       0,     0,     0,     0,     0,     0,   349,     0,     0,     0,
     722,   345,   346,     0,     0,     0,     0,     0,     0,   347,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
     351,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   348,     0,
       0,   334,   335,   336,   337,     0,   338,   339,   340,   350,
     341,   342,   343,     0,     0,     0,     0,     0,   344,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   349,     0,
     345,   346,   724,     0,     0,     0,     0,     0,   347,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
     351,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,     0,     0,   348,     0,     0,
       0,     0,     0,   334,   335,   336,   337,     0,   338,   339,
     340,   350,   341,   342,   343,     0,     0,     0,     0,     0,
     344,     0,     0,     0,     0,     0,     0,   349,     0,     0,
       0,   726,   345,   346,     0,     0,     0,     0,     0,     0,
     347,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   351,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,     0,     0,   348,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     350,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   349,
     537,   538,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,   556,
     557,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,   351,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   165,
       0,     0,   350,     0,     0,     0,     0,     0,     0,   166,
     167,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   165,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   166,   167,
       0,     0,     0,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,   351,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   334,   335,
     336,   337,     0,   338,   339,   340,     0,   341,   342,   343,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   759,   760,     0,
       0,   334,   335,   336,   337,   347,   338,   339,   340,     0,
     341,   342,   343,   168,   169,     0,     0,     0,     0,     0,
     987,     0,     0,   840,     0,     0,     0,     0,     0,     0,
     759,   760,     0,     0,     0,     0,   165,     0,   347,     0,
       0,     0,   168,   169,   348,     0,     0,   170,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   131,     0,     0,     0,   171,   172,   173,
       0,     0,     0,     1,   349,     0,     0,   348,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   171,   172,   131,     0,
     446,     0,     0,     0,     0,     0,     0,   349,     0,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   131,     0,   217,   350,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   901,     0,   666,     0,     0,     0,     0,
     350,   446,     0,   131,     0,     0,     0,     0,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,   351,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    27,   459,   131,     0,     0,     0,     0,
       0,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,   351,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   131,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   165,   666,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,    87,     0,
       0,     0,   782,   674,     0,     0,     0,     0,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     455,     0,     0,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   165,     0,
       0,     0,     0,     0,     0,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     131,     0,     0,     0,     0,     0,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   165,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,     0,     0,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,     0,     0,     0,     0,   537,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,     0,   872,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,   556,   557,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,     0,     0,     0,     0,     0,     0,     0,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,     0,     0,     0,     0,     0,
       0,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   844,   537,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   537,   538,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,   556,   557,   537,
     538,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553,   554,   555,   556,   557,
       1,     0,     0,     0,     2,     0,     0,     0,     0,     0,
       0,     0,     0,     3,     0,     0,     0,     4,     5,     6,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       0,     0,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     9,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,    11,     0,     0,    12,    13,    14,
       0,     0,    15,     0,     0,     0,     0,     0,    16,     0,
      17,     0,     0,   792,   793,   794,     0,     0,     0,    18,
     795,     0,     0,     0,     0,     0,     0,     0,   796,    19,
       0,     0,   797,   798,     0,   799,     0,     0,     0,    20,
       0,   800,     0,     0,     0,     0,  1038,     0,     0,     0,
       0,   801,     0,    21,     0,     0,     0,    22,    23,     0,
       0,    24,     0,    25,    26,     0,     0,  1066,   802,     0,
      27,     0,     0,    28,    29,     0,     0,     0,    30,     0,
     803,     0,   804,     0,   805,     0,     0,     0,  1186,     0,
       0,     0,     0,     0,    31,     0,   806,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   807,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   808,   809,
     810,     0,     0,     0,     0,     0,     0,     0,   811,   812,
     537,   538,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,   556,
     557,   537,   538,   539,   540,   541,   542,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
     556,   557,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   729,   537,   538,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,   556,   557,   537,   538,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,   556,   557,   730,   538,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,   556,   557,   912,   537,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   914,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   916,
     785,   537,   538,   539,   540,   541,   542,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
     556,   557,     0,     0,     0,     0,     0,   786,     0,     0,
       0,     0,     0,     0,     0,   814,   537,   538,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,   556,   557,     0,     0,   741,
     537,   538,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,   556,
     557,     0,     0,   919,   537,   538,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,   556,   557,     0,     0,  1037,   537,   538,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,   556,   557
};

static const yytype_int16 yycheck[] =
{
       2,   211,     4,     5,     6,    16,   328,     1,    28,     0,
      21,    13,    14,   250,    16,    31,   375,   370,   443,    21,
     734,   288,   607,   633,     0,   347,    28,     0,     0,    13,
      14,   206,   207,   208,     4,     5,     6,   471,    41,    21,
      41,   215,    28,   106,   215,     0,   189,    81,   113,   123,
    1011,    13,    14,     0,    10,   122,    41,     0,     1,     0,
    1009,   128,    40,   215,    20,   104,    41,    41,    78,   215,
     113,   167,     3,    41,   102,    41,    24,   646,   174,   814,
      41,   177,    20,    40,   130,   200,     3,    41,    41,   203,
      40,   158,    41,   136,   113,    41,    41,   215,    24,   113,
     201,   795,   145,   106,   714,    41,    41,   201,    41,   844,
      68,   645,   200,    41,    40,   215,    30,   811,   812,   121,
       4,   106,   656,   236,   239,   215,   215,   112,   130,  1090,
     215,   215,   215,   215,   215,   215,   215,   121,   239,    28,
      96,     9,   100,   185,   238,   173,   130,    20,    54,   159,
     145,   239,   143,   117,   156,   136,     5,    25,    96,   121,
     729,   371,   201,    12,   145,   239,   168,   143,   130,   171,
     143,   143,   156,   316,   239,   238,     4,     5,     6,   322,
       8,     9,    10,   326,    12,    13,    14,   901,   902,   195,
      96,   225,   170,   239,   156,   126,   239,   199,   154,   113,
     143,   203,   298,   214,   548,    89,   302,  1168,   304,   446,
      43,   202,   214,   170,   200,   199,   201,  1166,   104,   203,
     170,    85,   122,    96,   215,   239,   202,   229,   402,   202,
     202,   402,   214,   300,   254,   238,   238,   199,   239,   215,
     242,   203,   215,   215,   239,   193,   680,   202,   250,   984,
     402,   253,   319,   238,   238,   202,   402,   213,   242,   202,
     215,   202,   192,   265,   239,   239,   250,   193,   215,   253,
     272,   239,   215,   239,   215,    43,   238,   268,   239,   168,
     242,   265,   171,   146,   402,   239,   239,   307,   272,   858,
     239,   253,   268,   239,   239,   268,   268,   299,   867,   868,
     869,   303,   402,   239,   239,   307,   239,   250,   310,   311,
     312,   239,   402,   402,   146,   201,   318,   402,   402,   402,
     402,   402,   402,   402,     0,   268,   310,   311,   312,   193,
       5,  1066,   238,    45,   318,   214,   130,  1072,   125,    14,
     229,   220,   333,   222,   172,   201,   146,   112,   310,   311,
     312,   138,   185,   347,   233,   375,   318,   500,   501,   205,
     206,   971,   195,   506,   384,   950,    76,   383,    15,    16,
      17,   136,   439,   375,   180,   208,   239,   379,   153,   185,
     145,    72,   384,     3,     8,   452,    10,    11,    41,   195,
     333,    41,   104,   105,    56,   491,    20,   413,    40,   495,
      42,   468,   469,    40,   347,   749,   349,   239,     3,   379,
     299,   402,     4,  1023,   303,   759,   760,   185,   307,   126,
      40,   412,   365,   366,   367,    82,   402,   195,   665,   402,
     402,   141,   699,   670,   377,     4,   789,   790,   791,   239,
     208,   763,    90,    91,   446,   232,   448,   402,   450,   115,
    1185,  1186,   446,    40,   126,   402,   196,    66,   160,   402,
      69,   402,   446,   195,   448,   148,   450,   177,   113,   412,
      66,    42,   483,    69,   476,  1085,   478,  1191,   112,   838,
      45,   483,    42,  1218,    32,    33,    34,    35,    36,    37,
      38,    14,   476,   102,   478,   384,   921,   238,   239,   843,
     147,   926,   239,   446,   124,     8,   102,    10,    11,   116,
      97,   131,   132,   179,   476,   181,   478,    14,   210,   211,
     212,   523,   524,    32,    33,    34,    35,    36,    37,    38,
     524,   671,   672,    30,   536,   155,    14,  1147,     3,   104,
     105,   207,   129,   228,   560,   165,   166,   167,   157,    46,
      47,   112,    30,    15,    16,    17,   185,   559,   215,   216,
     217,   157,   219,    41,   221,   146,   173,   558,    46,    47,
     228,   158,   229,   230,   231,   182,   183,   234,   136,    41,
     235,   524,   558,   170,    40,   558,   558,   204,   208,    28,
      29,    30,   202,   937,   938,   939,   940,   941,   942,   943,
     944,    60,    61,    62,    63,    64,   549,   194,    77,   784,
     237,   194,   628,   112,    65,   558,    65,   976,   977,   978,
     979,    34,    35,    36,    37,    38,     5,     3,     5,    65,
     632,   990,   143,   184,   523,   524,    40,   639,   640,   641,
     642,   643,    20,   987,   125,   193,   749,   536,   239,   592,
     887,   200,   654,   239,   109,   657,   759,   760,   642,   679,
     662,   109,    14,   665,   666,   193,   239,    43,   670,   113,
     559,   130,   674,   657,   136,   677,   678,     5,   662,    40,
     642,   665,   666,   145,   193,   147,   670,    40,    24,   700,
     674,   114,    40,   677,   678,   657,   698,  1041,   700,    40,
     702,   365,   366,   367,   127,  1064,    40,   114,   131,     4,
      86,    87,   135,     5,   698,   677,   678,    84,   702,   173,
     127,    40,   665,   146,   131,    40,  1070,   670,   135,    68,
      69,    60,    61,    62,    63,    64,   698,    42,   114,   162,
     843,   117,    40,   632,   365,   366,   367,    40,    87,   114,
     639,   640,   641,    42,   643,   162,    42,   112,    97,   702,
      14,   238,   127,   102,   238,   654,   131,   238,   238,   763,
     135,  1130,   238,   105,   150,    34,    35,    36,    37,    38,
     119,   146,   193,  1020,   113,   426,   427,   428,   238,  1133,
     129,   238,   168,   238,    40,   171,   238,   162,    44,     5,
     238,   238,    48,    49,    50,   238,   238,   750,    19,   185,
     186,    57,    58,    59,   238,    24,   238,    24,   838,   158,
     763,    32,    33,    34,    35,    36,    37,    38,   204,   239,
      24,   170,   208,    79,   937,   938,   939,   940,   941,   942,
     943,   944,   218,   143,   143,    85,   239,    77,   224,   109,
      40,    97,    77,  1175,     3,   194,   146,   239,   239,    19,
     193,   237,     3,    41,    41,     4,   112,    40,    40,   239,
      41,   814,    32,    33,    34,    35,    36,    37,    38,    41,
     126,   197,   176,   129,   987,   887,    40,   201,   239,    40,
      17,   136,   239,    44,   238,   897,   238,    48,    49,    50,
     238,   844,   105,   887,    30,     5,    57,    58,    59,     4,
       4,   238,   158,   897,   238,   238,   238,   238,   920,    24,
     238,   238,   924,    24,   170,   238,   238,   173,    79,   238,
     238,   238,   923,    14,    14,   897,    14,    41,  1041,   149,
     131,     5,    41,   239,   887,    41,    97,    24,   194,    32,
      33,    34,    35,    36,    37,    38,   976,   977,   978,   979,
     204,   112,    41,    38,    40,   152,    49,  1070,    41,    40,
     990,    40,    40,    40,   130,   126,   220,    49,   129,     5,
     923,    32,    33,    34,    35,    36,    37,    38,   130,    82,
     130,  1002,   238,   130,     4,    65,     4,   193,    49,    54,
    1002,   133,    40,   105,    70,    41,    41,   158,  1010,  1011,
       5,  1013,     5,     5,  1224,     5,   238,   105,  1020,   170,
     238,   130,   173,     5,     4,   169,    54,    54,    40,  1013,
    1133,   920,    54,   209,   239,   924,  1020,    40,   120,    38,
     105,   984,    48,   194,  1064,    41,   238,    41,    79,   105,
      41,   295,   126,   297,    32,    33,    34,    35,    36,    37,
      38,    24,   306,   227,   308,    10,    10,   130,    24,   239,
     314,    40,    77,   121,     5,   238,   126,  1020,    24,   238,
     238,   105,   126,    10,   328,     4,   133,   238,  1090,     4,
     179,     4,    73,    74,    75,     4,     8,     5,     5,    80,
     344,   345,   346,   347,   348,     5,     5,    88,  1110,   239,
    1130,    92,    93,    42,    95,    41,   238,   126,   238,  1121,
     101,  1010,  1011,  1066,   368,   239,  1110,   238,   105,  1072,
     111,   239,   376,   105,    24,    49,   380,  1121,   382,    24,
    1142,   238,     5,    49,     4,    42,   238,   128,  1110,    24,
      41,     5,   750,   202,   743,    29,   920,  1212,  1142,   140,
     603,   142,   129,   144,   226,  1010,  1168,   639,   139,   805,
     809,   210,   896,   788,  1118,   156,   480,  1019,  1121,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,   703,   135,   446,   175,   469,   439,    24,   442,  1142,
    1142,  1090,   191,   384,   307,   266,   679,   188,   189,   190,
     644,  1213,   272,   632,   402,   871,  1074,   198,   199,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,  1213,
     592,  1074,    -1,   841,    -1,    -1,    -1,    -1,  1240,    -1,
      -1,    -1,  1185,  1186,    -1,    -1,   490,    -1,  1250,    -1,
     494,  1213,    -1,    -1,    -1,    -1,  1240,    -1,   239,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1250,    -1,    -1,    -1,
     514,    -1,   516,   517,    -1,  1218,   520,    -1,  1240,  1168,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1250,    -1,
      -1,    -1,    -1,   537,   538,    -1,   540,   541,   542,   543,
     544,   545,   546,   547,    -1,    -1,    -1,   551,   552,   553,
     554,   555,   556,   557,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,   601,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    40,    41,  1092,  1093,  1094,  1095,  1096,
    1097,  1098,  1099,  1100,    -1,   629,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      -1,    -1,    79,    -1,   658,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   109,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,   709,    -1,   134,    -1,   713,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   722,    -1,
     724,    -1,   726,    -1,    -1,    -1,   730,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,   740,    -1,   742,    -1,
      -1,    -1,    -1,    -1,   748,   172,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    14,    -1,   763,
      -1,    -1,    -1,    20,   191,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   238,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    40,   788,    -1,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,   840,    12,    13,    14,
      -1,    -1,    -1,   100,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,   109,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,    -1,    79,    -1,     3,    -1,   912,    -1,
     914,    -1,   916,    -1,    -1,   172,    -1,    -1,   922,    -1,
      -1,   925,    -1,    -1,    -1,   929,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,   172,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
    1014,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1038,    -1,    -1,    -1,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,    -1,    -1,    79,    -1,  1071,    -1,     3,
       4,     5,     6,   170,     8,     9,    10,    -1,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,  1109,    40,    -1,    -1,    -1,
      -1,    -1,    -1,  1117,  1118,    -1,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,   172,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,  1175,  1176,    -1,    -1,   109,    -1,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,   172,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    14,    -1,    -1,    -1,    -1,   109,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,   172,
      -1,    -1,     3,     4,     5,     6,    -1,     8,     9,    10,
      -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,
     113,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,   172,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,
      32,    33,   113,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,   172,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,
      -1,   113,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,    -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,
      -1,    -1,    -1,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,     3,     4,     5,     6,    40,     8,     9,    10,    -1,
      12,    13,    14,   117,   118,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,     3,    -1,    40,    -1,
      -1,    -1,   117,   118,    79,    -1,    -1,   151,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    -1,   171,   172,   173,
      -1,    -1,    -1,    40,   109,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   171,   172,     3,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,     3,    -1,    41,   172,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   103,    -1,    70,    -1,    -1,    -1,    -1,
     172,    40,    -1,     3,    -1,    -1,    -1,    -1,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   170,    34,     3,    -1,    -1,    -1,    -1,
      -1,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,     3,    70,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,     3,    -1,
      -1,    -1,    34,    70,    -1,    -1,    -1,    -1,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      14,    -1,    -1,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,     3,    -1,
      -1,    -1,    -1,    -1,    -1,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
       3,    -1,    -1,    -1,    -1,    -1,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,    -1,    -1,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,    -1,    -1,    -1,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,   154,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,    -1,    -1,    -1,    -1,    -1,
      -1,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   187,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      40,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    57,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    94,    -1,    -1,    97,    98,    99,
      -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,   108,    -1,
     110,    -1,    -1,    73,    74,    75,    -1,    -1,    -1,   119,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,   129,
      -1,    -1,    92,    93,    -1,    95,    -1,    -1,    -1,   139,
      -1,   101,    -1,    -1,    -1,    -1,   187,    -1,    -1,    -1,
      -1,   111,    -1,   153,    -1,    -1,    -1,   157,   158,    -1,
      -1,   161,    -1,   163,   164,    -1,    -1,   187,   128,    -1,
     170,    -1,    -1,   173,   174,    -1,    -1,    -1,   178,    -1,
     140,    -1,   142,    -1,   144,    -1,    -1,    -1,   187,    -1,
      -1,    -1,    -1,    -1,   194,    -1,   156,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   175,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   188,   189,
     190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   198,   199,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,   113,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,   113,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
      71,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    -1,    -1,    41,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    -1,    -1,    41,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    -1,    -1,    41,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    40,    44,    53,    57,    58,    59,    69,    72,    83,
      87,    94,    97,    98,    99,   102,   108,   110,   119,   129,
     139,   153,   157,   158,   161,   163,   164,   170,   173,   174,
     178,   194,   241,   242,   243,   262,   263,   266,   272,   274,
     275,   283,   284,   285,   286,   288,   289,   290,   291,   307,
     310,   313,   315,   320,   321,   322,   323,   324,   326,   357,
     360,   361,   368,   373,   375,   377,   380,   384,   385,   386,
     387,   390,   395,   397,   400,   408,   411,   412,   413,   419,
     432,   433,   457,   458,   459,   321,   322,     3,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   273,   430,   431,     3,   273,   273,   273,
     180,   185,   195,   203,   382,   382,    43,   185,   195,   208,
     113,     3,   353,   428,   431,   353,    43,   185,   195,   208,
     398,   430,   236,   359,    68,    69,    87,    97,   102,   119,
     129,   158,   170,   194,   391,   392,   185,   398,   195,   391,
     382,   117,   388,   122,   329,     3,    13,    14,   117,   118,
     151,   171,   172,   173,   256,   401,   402,   427,   431,     3,
      43,    86,    87,   114,   117,   150,   168,   171,   185,   186,
     208,   218,   224,   237,   257,   364,   367,   429,   192,   329,
       0,   106,   238,   130,   201,   314,    15,    16,    17,   147,
     342,   343,   112,   339,   153,    72,   436,    41,    41,    56,
      40,    60,    61,    62,    63,    64,   113,   287,   116,   173,
     182,   183,   420,   353,     4,   371,     3,   126,   292,   369,
     370,   371,   292,   353,     4,   366,   366,     3,   126,   126,
     308,   371,   374,   308,   196,   409,   262,   263,   313,   320,
     358,   160,   393,   195,   148,   146,   239,   353,   113,   371,
     378,   379,   146,   396,   205,   206,   389,     3,    40,   124,
     131,   132,   155,   165,   166,   167,   208,   330,   331,   332,
      68,   100,   348,    24,   193,   404,    40,   404,   427,    42,
     112,   376,   427,    42,    14,   403,   404,   239,   404,     3,
      30,   113,   185,    28,   200,   365,   228,   365,   146,   112,
     363,   376,   228,   136,   362,   237,   235,   204,    40,   202,
     383,   353,   243,   353,     3,     4,     5,     6,     8,     9,
      10,    12,    13,    14,    20,    32,    33,    40,    79,   109,
     172,   223,   245,   246,   247,   249,   251,   256,   257,   258,
     259,   321,   427,   428,   431,   348,   348,   348,    77,   136,
     145,   328,   339,   194,   398,    44,    48,    49,    50,    58,
      79,   112,   126,   170,   173,   238,   262,   263,   272,   274,
     276,   277,   278,   279,   280,   281,   282,   290,   313,   320,
     325,   437,   438,   439,   443,   444,   445,   449,   453,   454,
     455,   456,   112,    41,   244,   249,     5,     5,    65,   421,
     422,   427,   143,   184,    90,    91,    66,    69,   102,   157,
     414,   415,   125,   138,   232,   381,    40,    20,   353,   239,
     125,   353,   200,   327,   109,   109,    40,   309,   321,   352,
     353,   354,   239,   311,   353,    14,   256,   405,   410,    34,
     394,   428,   392,   262,   263,   313,   320,   399,   193,   239,
     394,   113,     5,    40,   333,    40,    40,    40,    40,   123,
     239,   332,    34,   249,   349,   350,   249,     5,    14,   249,
     404,   427,   371,    24,   404,   427,   404,   249,   402,   249,
     353,   353,   353,     4,   249,   365,   353,    89,   365,     5,
     365,    34,    41,    68,    76,   100,   134,   191,   244,   249,
     261,   340,    84,   173,    40,   316,   320,   249,   249,   249,
     244,   249,   321,   249,   252,   321,    42,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    40,    42,
     170,   321,   324,   326,   324,   324,   249,   344,   345,     5,
      12,   337,   337,   339,   410,   249,   262,   263,   272,   274,
     276,   277,   278,   279,   280,   281,   282,   290,   313,   320,
     325,   440,   441,   442,   444,   445,   449,   453,   454,   455,
     456,   201,   238,   273,   249,    14,   249,   329,   401,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   105,   439,   320,   329,    41,   239,
     193,     5,   239,    24,    24,    24,   143,   143,    85,   416,
     416,   416,   193,   416,   239,    77,    14,    30,    41,    46,
      47,   434,   435,   109,    40,   370,    77,   146,     7,   249,
     314,     3,   321,   352,   354,   239,    70,   428,   114,   127,
     131,   135,   162,   355,    70,   428,   371,   146,   239,   239,
     193,   371,   378,   374,     3,    41,   239,   210,   211,   212,
     334,   335,   353,   115,   179,   181,   207,   336,   353,   331,
      70,   430,   113,   239,   328,   338,    41,    41,   249,   404,
       4,   372,   249,   404,    40,   406,   365,   365,   365,    40,
     239,    41,   113,   249,   113,   249,   113,   249,    41,    70,
     113,   249,    41,   176,   264,   265,   427,   317,   427,   197,
     239,    41,   201,   253,   254,   427,   249,   249,    28,    29,
      30,   249,   249,   249,   249,   249,   249,   249,   249,    32,
      33,   247,   248,    40,   250,   321,     8,    10,    11,    20,
     249,   249,   249,   249,   249,   249,   249,   260,   262,   263,
     313,   320,    34,   427,   329,    71,    98,   346,   239,   145,
     239,   136,    73,    74,    75,    80,    88,    92,    93,    95,
     101,   111,   128,   140,   142,   144,   156,   175,   188,   189,
     190,   198,   199,   296,    52,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     105,   442,   249,    60,    61,    62,    63,    64,   130,   287,
     201,   450,   451,    30,   187,   350,   238,   329,   249,     5,
     422,    14,   246,     4,     4,    24,    24,   295,   427,   427,
     427,   353,   427,   157,   415,   372,   296,    14,    14,    14,
      41,   239,   154,   293,   294,   295,   372,   353,   249,    41,
     352,   428,   149,   356,   352,   356,   356,   131,   428,   312,
     353,   353,   405,   374,    41,    41,   239,   239,    41,   353,
     430,   103,   351,   352,   349,   249,   249,   246,   407,    41,
       5,   249,   113,   249,   113,   249,   113,   296,   249,    41,
     239,   327,    24,    41,   239,    40,   318,   249,   249,   104,
     254,   255,   249,   248,   250,   248,   248,    19,    32,    33,
      34,    35,    36,    37,    38,   244,     8,    10,    11,    41,
     348,   345,   337,   337,   337,    40,   301,   301,    40,   297,
     152,   299,    40,   298,   297,    40,   300,   300,   301,   301,
      54,    96,   238,   440,    49,   238,   130,   130,   130,   130,
       5,   410,    65,   249,   104,   451,   452,    55,   248,   440,
     130,    82,   423,     4,     4,   296,   102,   173,   418,    78,
     159,   417,   193,    54,   296,   296,   296,   435,   133,    41,
     239,    40,   267,    70,   146,   352,   335,   353,    41,   327,
     239,   327,    41,   239,   249,   249,   249,    41,   265,   314,
     249,   320,   427,   249,   319,   239,   314,    41,   187,   249,
     105,    19,   248,   248,   248,   248,   248,   248,   248,   248,
      41,   350,     5,     5,     5,     5,   238,   246,   105,   238,
     410,   410,   410,   410,   130,     5,   187,   440,   105,   248,
     193,    45,   104,   105,   446,   447,   448,   410,     4,   169,
     424,   302,    20,    96,    20,    96,   430,    54,    54,    54,
      40,    82,   215,   216,   217,   219,   221,   229,   230,   231,
     234,   304,   305,   294,   317,   209,   268,   428,   249,   146,
     239,   338,   352,   120,   341,   246,    41,   239,    40,   249,
     248,   113,    41,    41,   239,    41,    41,   238,    48,   410,
     130,   440,    79,   193,   248,   249,   440,   126,   105,   447,
     448,   105,   113,    24,   227,    10,    20,    96,   154,   213,
     303,    10,    10,   246,   317,    24,   306,   306,   306,   306,
     306,   306,   306,   306,   306,   306,   239,    41,    40,   269,
     270,   271,   305,   249,   353,    77,   121,   347,   249,   319,
       5,   238,   410,   238,   248,    49,   187,   238,   126,   105,
     126,   351,    76,   141,   177,    24,    10,   246,   133,    41,
       4,     4,   179,     4,     4,     5,     5,     5,     5,     8,
     305,   317,   239,    42,   244,   249,    41,    41,    49,   440,
     440,   238,   126,   238,   327,   214,   220,   222,   233,   425,
      41,   271,   353,   440,   105,   238,   339,    81,   225,   426,
     239,   105,    49,    24,    24,   353,    49,   238,     5,     4,
      42,   238,   226,   353,    24,    41,     5
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
      case 310: /* "drop_index_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 311: /* "index_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 312: /* "table_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 313: /* "insert_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 314: /* "opt_when" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 315: /* "replace_or_insert" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 316: /* "opt_insert_columns" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 317: /* "column_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 318: /* "insert_vals_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 319: /* "insert_vals" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 320: /* "select_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 321: /* "select_with_parens" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 322: /* "select_no_parens" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 323: /* "no_table_select" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 324: /* "select_clause" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 325: /* "select_into_clause" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 326: /* "simple_select" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 327: /* "opt_where" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 328: /* "select_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 329: /* "opt_hint" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 330: /* "opt_hint_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 331: /* "hint_options" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 332: /* "hint_option" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 333: /* "opt_comma_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 334: /* "join_op_type_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 335: /* "join_op_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 337: /* "limit_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 338: /* "opt_select_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 339: /* "opt_for_update" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 340: /* "parameterized_trim" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 341: /* "opt_groupby" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 342: /* "opt_order_by" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 343: /* "order_by" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 344: /* "sort_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 345: /* "sort_key" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 346: /* "opt_asc_desc" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 347: /* "opt_having" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 348: /* "opt_distinct" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 349: /* "projection" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 350: /* "select_expr_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 351: /* "from_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 352: /* "table_factor" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 353: /* "relation_factor" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 354: /* "joined_table" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 355: /* "join_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 356: /* "join_outer" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 357: /* "explain_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 358: /* "explainable_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 359: /* "opt_verbose" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 360: /* "show_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 361: /* "lock_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 362: /* "opt_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 363: /* "opt_for_grant_user" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 365: /* "opt_show_condition" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 366: /* "opt_like_condition" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 368: /* "create_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 369: /* "user_specification_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 370: /* "user_specification" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 371: /* "user" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 372: /* "password" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 373: /* "drop_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 374: /* "user_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 375: /* "set_password_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 376: /* "opt_for_user" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 377: /* "rename_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 378: /* "rename_info" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 379: /* "rename_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 380: /* "lock_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 381: /* "lock_spec" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 382: /* "opt_work" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 384: /* "begin_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 385: /* "commit_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 386: /* "rollback_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 387: /* "kill_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 388: /* "opt_is_global" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 389: /* "opt_flag" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 390: /* "grant_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 391: /* "priv_type_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 392: /* "priv_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 393: /* "opt_privilege" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 394: /* "priv_level" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 395: /* "revoke_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 396: /* "opt_on_priv_level" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 397: /* "prepare_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 398: /* "stmt_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 399: /* "preparable_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 400: /* "variable_set_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 401: /* "var_and_val_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 402: /* "var_and_val" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 403: /* "var_and_array_val" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 404: /* "to_or_eq" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 405: /* "argument" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 406: /* "array_vals_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 407: /* "array_val_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 408: /* "execute_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 409: /* "opt_using_args" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 410: /* "argument_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 411: /* "deallocate_prepare_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 412: /* "deallocate_or_drop" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 413: /* "alter_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 414: /* "alter_column_actions" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 415: /* "alter_column_action" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 416: /* "opt_column" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 418: /* "alter_column_behavior" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 419: /* "alter_system_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 420: /* "opt_force" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 421: /* "alter_system_actions" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 422: /* "alter_system_action" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 423: /* "opt_comment" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 425: /* "server_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 426: /* "opt_cluster_or_address" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 427: /* "column_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 428: /* "relation_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 429: /* "function_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 430: /* "column_label" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 432: /* "create_procedure_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 433: /* "proc_decl" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 434: /* "proc_parameter_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 435: /* "proc_parameter" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 436: /* "proc_block" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 437: /* "proc_sect" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 438: /* "proc_stmts" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 439: /* "proc_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 440: /* "control_sect" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 441: /* "control_stmts" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 442: /* "control_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 443: /* "stmt_declare" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 444: /* "stmt_assign" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 445: /* "stmt_if" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 446: /* "stmt_elsifs" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 447: /* "stmt_elsif" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 448: /* "stmt_else" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 449: /* "stmt_case" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 450: /* "case_when_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 451: /* "case_when" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 452: /* "case_else" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 453: /* "stmt_loop" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 454: /* "stmt_while" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 455: /* "stmt_null" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 456: /* "stmt_exit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 457: /* "exec_procedure_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 458: /* "drop_procedure_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 459: /* "show_procedure_stmt" */

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
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_HASH_JOIN_SINGLE);
    ;}
    break;

  case 312:

    {
    (yyval.ival) = 3;
  ;}
    break;

  case 313:

    {
    (yyval.ival) = 4;
  ;}
    break;

  case 314:

    {
    (yyval.ival) = 1;
  ;}
    break;

  case 315:

    {
    (yyval.ival) = 2;
  ;}
    break;

  case 316:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 317:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 318:

    { (yyval.node) = NULL; ;}
    break;

  case 319:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 320:

    { (yyval.node) = NULL; ;}
    break;

  case 321:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 322:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 0;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 323:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 0;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 324:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 1;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 325:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 2;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 326:

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

  case 327:

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

  case 328:

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

  case 329:

    { (yyval.node) = NULL; ;}
    break;

  case 330:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_EXPR_LIST, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 331:

    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 332:

    { (yyval.node) = NULL; ;}
    break;

  case 333:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_SORT_LIST, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 334:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 335:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 336:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SORT_KEY, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 337:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_ASC); ;}
    break;

  case 338:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_ASC); ;}
    break;

  case 339:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_DESC); ;}
    break;

  case 340:

    { (yyval.node) = 0; ;}
    break;

  case 341:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 342:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 343:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_ALL);
    ;}
    break;

  case 344:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_DISTINCT);
    ;}
    break;

  case 345:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, (yyvsp[(1) - (1)].node));
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (1)]).first_column, (yylsp[(1) - (1)]).last_column);
    ;}
    break;

  case 346:

    {
      ParseNode* alias_node = NULL;
      malloc_non_terminal_node(alias_node, result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, alias_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (2)]).first_column, (yylsp[(1) - (2)]).last_column);
      dup_expr_string(alias_node->str_value_, result, (yylsp[(2) - (2)]).first_column, (yylsp[(2) - (2)]).last_column);
    ;}
    break;

  case 347:

    {
      ParseNode* alias_node = NULL;
      malloc_non_terminal_node(alias_node, result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, alias_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (3)]).first_column, (yylsp[(1) - (3)]).last_column);
      dup_expr_string(alias_node->str_value_, result, (yylsp[(3) - (3)]).first_column, (yylsp[(3) - (3)]).last_column);
    ;}
    break;

  case 348:

    {
      ParseNode* star_node = NULL;
      malloc_terminal_node(star_node, result->malloc_pool_, T_STAR);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, star_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (1)]).first_column, (yylsp[(1) - (1)]).last_column);
    ;}
    break;

  case 349:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 350:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 351:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 352:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 353:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 354:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 355:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 356:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 357:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 358:

    {
    	(yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 359:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(2) - (5)].node), (yyvsp[(5) - (5)].node));
    	yyerror(&(yylsp[(1) - (5)]), result, "qualied joined table can not be aliased!");
      YYABORT;
    ;}
    break;

  case 360:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 361:

    {
    	(yyval.node) = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 362:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOINED_TABLE, 4, (yyvsp[(2) - (6)].node), (yyvsp[(1) - (6)].node), (yyvsp[(4) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 363:

    {
      ParseNode* node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_JOIN_INNER);
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOINED_TABLE, 4, node, (yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 364:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_FULL);
    ;}
    break;

  case 365:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_LEFT);
    ;}
    break;

  case 366:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_RIGHT);
    ;}
    break;

  case 367:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_INNER);
    ;}
    break;

  case 368:

    { (yyval.node) = NULL; ;}
    break;

  case 369:

    { (yyval.node) = NULL; ;}
    break;

  case 370:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPLAIN, 1, (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = ((yyvsp[(2) - (3)].node) ? 1 : 0); /* positive: verbose */
    ;}
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

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 375:

    { (yyval.node) = (ParseNode*)1; ;}
    break;

  case 376:

    { (yyval.node) = NULL; ;}
    break;

  case 377:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_TABLES, 1, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 378:

    {  malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_INDEX, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 379:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 380:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 381:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_TABLE_STATUS, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 382:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_SERVER_STATUS, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 383:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_VARIABLES, 1, (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = (yyvsp[(2) - (4)].ival);
    ;}
    break;

  case 384:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_SCHEMA); ;}
    break;

  case 385:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_CREATE_TABLE, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 386:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 387:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 388:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_WARNINGS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 389:

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

  case 390:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_GRANTS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 391:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_PARAMETERS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 392:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_PROCESSLIST);
      (yyval.node)->value_ = (yyvsp[(2) - (3)].ival);
    ;}
    break;

  case 393:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LOCK_TABLE, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 394:

    {
      if ((yyvsp[(2) - (4)].node)->value_ < 0 || (yyvsp[(4) - (4)].node)->value_ < 0)
      {
        yyerror(&(yylsp[(1) - (4)]), result, "OFFSET/COUNT must not be less than 0!");
        YYABORT;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_LIMIT, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 395:

    {
      if ((yyvsp[(2) - (2)].node)->value_ < 0)
      {
        yyerror(&(yylsp[(1) - (2)]), result, "COUNT must not be less than 0!");
        YYABORT;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_LIMIT, 2, NULL, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 396:

    { (yyval.node) = NULL; ;}
    break;

  case 397:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 398:

    { (yyval.node) = NULL; ;}
    break;

  case 399:

    { (yyval.node) = NULL; ;}
    break;

  case 400:

    { (yyval.ival) = 1; ;}
    break;

  case 401:

    { (yyval.ival) = 0; ;}
    break;

  case 402:

    { (yyval.ival) = 0; ;}
    break;

  case 403:

    { (yyval.node) = NULL; ;}
    break;

  case 404:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 405:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_WHERE_CLAUSE, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 406:

    { (yyval.node) = NULL; ;}
    break;

  case 407:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 1, (yyvsp[(1) - (1)].node)); ;}
    break;

  case 408:

    { (yyval.ival) = 0; ;}
    break;

  case 409:

    { (yyval.ival) = 1; ;}
    break;

  case 410:

    {
        merge_nodes((yyval.node), result->malloc_pool_, T_CREATE_USER, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 411:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 412:

    {
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 413:

    {
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CREATE_USER_SPEC, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 414:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 415:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 416:

    {
        merge_nodes((yyval.node), result->malloc_pool_, T_DROP_USER, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 417:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 418:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 419:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SET_PASSWORD, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 420:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SET_PASSWORD, 2, (yyvsp[(3) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 421:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 422:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 423:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_RENAME_USER, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 424:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_RENAME_INFO, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 425:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 426:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 427:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LOCK_USER, 2, (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 428:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 429:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 430:

    {
      (void)(yyval.node);
    ;}
    break;

  case 431:

    {
      (void)(yyval.node);
    ;}
    break;

  case 432:

    {
      (yyval.ival) = 1;
    ;}
    break;

  case 433:

    {
      (yyval.ival) = 0;
    ;}
    break;

  case 434:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BEGIN);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 435:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BEGIN);
      (yyval.node)->value_ = (yyvsp[(3) - (3)].ival);
    ;}
    break;

  case 436:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_COMMIT);
    ;}
    break;

  case 437:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_ROLLBACK);
    ;}
    break;

  case 438:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_KILL, 3, (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 439:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 440:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 441:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 442:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 443:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 444:

    {
      ParseNode *privileges_node = NULL;
      ParseNode *users_node = NULL;
      merge_nodes(privileges_node, result->malloc_pool_, T_PRIVILEGES, (yyvsp[(2) - (6)].node));
      merge_nodes(users_node, result->malloc_pool_, T_USERS, (yyvsp[(6) - (6)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_GRANT,
                                 3, privileges_node, (yyvsp[(4) - (6)].node), users_node);
    ;}
    break;

  case 445:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 446:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 447:

    {
      (void)(yyvsp[(2) - (2)].node);                 /* useless */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_ALL;
    ;}
    break;

  case 448:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_ALTER;
    ;}
    break;

  case 449:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_CREATE;
    ;}
    break;

  case 450:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_CREATE_USER;
    ;}
    break;

  case 451:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_DELETE;
    ;}
    break;

  case 452:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_DROP;
    ;}
    break;

  case 453:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_GRANT_OPTION;
    ;}
    break;

  case 454:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_INSERT;
    ;}
    break;

  case 455:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_UPDATE;
    ;}
    break;

  case 456:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_SELECT;
    ;}
    break;

  case 457:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_REPLACE;
    ;}
    break;

  case 458:

    {
      (void)(yyval.node);
    ;}
    break;

  case 459:

    {
      (void)(yyval.node);
    ;}
    break;

  case 460:

    {
      /* means global priv_level */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_LEVEL);
    ;}
    break;

  case 461:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_LEVEL, 1, (yyvsp[(1) - (1)].node));
    ;}
    break;

  case 462:

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

  case 463:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 464:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 465:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PREPARE, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
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

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 471:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_VARIABLE_SET, (yyvsp[(2) - (2)].node));;
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 472:

    {
      (yyval.node) = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 473:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 474:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 475:

    {
      (void)((yyvsp[(2) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 476:

    {
      (void)((yyvsp[(2) - (3)].node));
      (yyvsp[(1) - (3)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 477:

    {
      (void)((yyvsp[(3) - (4)].node));
      (yyvsp[(2) - (4)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 478:

    {
      (void)((yyvsp[(3) - (4)].node));
      (yyvsp[(2) - (4)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 479:

    {
      (void)((yyvsp[(4) - (5)].node));
      (yyvsp[(3) - (5)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 480:

    {
      (void)((yyvsp[(4) - (5)].node));
      (yyvsp[(3) - (5)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
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
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 483:

    {
      (void)((yyvsp[(2) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_ARRAY_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 484:

    { (yyval.node) = NULL; ;}
    break;

  case 485:

    { (yyval.node) = NULL; ;}
    break;

  case 486:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 487:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 488:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_ARRAY_VAL, (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 489:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 490:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 491:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXECUTE, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 492:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 493:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 494:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 495:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 496:

    {
      (void)((yyvsp[(1) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_DEALLOCATE, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 497:

    { (yyval.node) = NULL; ;}
    break;

  case 498:

    { (yyval.node) = NULL; ;}
    break;

  case 499:

    {
      ParseNode *alter_actions = NULL;
      merge_nodes(alter_actions, result->malloc_pool_, T_ALTER_ACTION_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_TABLE, 2, (yyvsp[(3) - (4)].node), alter_actions);
    ;}
    break;

  case 500:

    {
      yyerror(&(yylsp[(1) - (6)]), result, "Table rename is not supported now");
      YYABORT;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLE_RENAME, 1, (yyvsp[(6) - (6)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_ACTION_LIST, 1, (yyval.node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_TABLE, 2, (yyvsp[(3) - (6)].node), (yyval.node));
    ;}
    break;

  case 501:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 502:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 503:

    {
      (void)((yyvsp[(2) - (3)].node)); /* make bison mute */
      (yyval.node) = (yyvsp[(3) - (3)].node); /* T_COLUMN_DEFINITION */
    ;}
    break;

  case 504:

    {
      (void)((yyvsp[(2) - (4)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_DROP, 1, (yyvsp[(3) - (4)].node));
      (yyval.node)->value_ = (yyvsp[(4) - (4)].ival);
    ;}
    break;

  case 505:

    {
      (void)((yyvsp[(2) - (4)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_ALTER, 2, (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 506:

    {
      (void)((yyvsp[(2) - (5)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_RENAME, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 507:

    { (yyval.node) = NULL; ;}
    break;

  case 508:

    { (yyval.node) = NULL; ;}
    break;

  case 509:

    { (yyval.ival) = 2; ;}
    break;

  case 510:

    { (yyval.ival) = 1; ;}
    break;

  case 511:

    { (yyval.ival) = 0; ;}
    break;

  case 512:

    {
      (void)((yyvsp[(3) - (3)].node)); /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NOT_NULL);
    ;}
    break;

  case 513:

    {
      (void)((yyvsp[(3) - (3)].node)); /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NULL);
    ;}
    break;

  case 514:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 515:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_NULL);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyval.node));
    ;}
    break;

  case 516:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_SYTEM_ACTION_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_SYSTEM, 1, (yyval.node));
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
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 3, node, (yyvsp[(7) - (7)].node), (yyvsp[(3) - (7)].node));
    ;}
    break;

  case 519:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 2, node, (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 520:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 2, node, (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 521:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 522:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_FORCE);
    ;}
    break;

  case 523:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 524:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 525:

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

  case 526:

    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 527:

    { (yyval.node) = NULL; ;}
    break;

  case 528:

    { (yyval.ival) = 0; ;}
    break;

  case 529:

    { (yyval.ival) = 1; ;}
    break;

  case 530:

    { (yyval.ival) = 2; ;}
    break;

  case 531:

    { (yyval.ival) = 2; ;}
    break;

  case 532:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 533:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 4;
    ;}
    break;

  case 534:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 535:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 3;
    ;}
    break;

  case 536:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CLUSTER, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 537:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SERVER_ADDRESS, 2, (yyvsp[(3) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 538:

    { (yyval.node) = NULL; ;}
    break;

  case 539:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 540:

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

  case 544:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 545:

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

  case 571:

    {
								malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CREATE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
							;}
    break;

  case 572:

    {
					ParseNode *params = NULL;
        			merge_nodes(params, result->malloc_pool_, T_PARAM_LIST, (yyvsp[(5) - (6)].node));
					malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECL, 2, (yyvsp[(3) - (6)].node), params);
				;}
    break;

  case 573:

    {
					ParseNode *params = NULL;
					malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECL, 2, (yyvsp[(3) - (5)].node), params);
				;}
    break;

  case 574:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
					;}
    break;

  case 575:

    {
						(yyval.node) = (yyvsp[(1) - (1)].node);
					;}
    break;

  case 576:

    {
                malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PARAM_DEFINITION, 3, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node), NULL);
					;}
    break;

  case 577:

    {
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_IN_PARAM_DEFINITION, 3, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node), NULL);
					;}
    break;

  case 578:

    {
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OUT_PARAM_DEFINITION, 3, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node), NULL);
					;}
    break;

  case 579:

    {
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_INOUT_PARAM_DEFINITION, 3, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node), NULL);
          ;}
    break;

  case 580:

    {
          ParseNode *array_flag = NULL;
          malloc_terminal_node(array_flag, result->malloc_pool_, T_BOOL);
          array_flag->value_ = 1;
          malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PARAM_DEFINITION, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), array_flag);
        ;}
    break;

  case 581:

    {
          ParseNode *array_flag = NULL;
          malloc_terminal_node(array_flag, result->malloc_pool_, T_BOOL);
          array_flag->value_ = 1;
          malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_IN_PARAM_DEFINITION, 3, (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), array_flag);
        ;}
    break;

  case 582:

    {
          ParseNode *array_flag = NULL;
          malloc_terminal_node(array_flag, result->malloc_pool_, T_BOOL);
          array_flag->value_ = 1;
          malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OUT_PARAM_DEFINITION, 3, (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), array_flag);
        ;}
    break;

  case 583:

    {
          ParseNode *array_flag = NULL;
          malloc_terminal_node(array_flag, result->malloc_pool_, T_BOOL);
          array_flag->value_ = 1;
          malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_INOUT_PARAM_DEFINITION, 3, (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), array_flag);
        ;}
    break;

  case 584:

    { 
					//malloc_non_terminal_node($$, result->malloc_pool_, T_PROCEDURE_BLOCK, 1, $2);
					(yyval.node)=(yyvsp[(2) - (3)].node);
				;}
    break;

  case 585:

    { 
					(yyval.node)=NULL;
				;}
    break;

  case 586:

    { 
        			merge_nodes((yyval.node), result->malloc_pool_, T_PROCEDURE_STMTS, (yyvsp[(1) - (1)].node));
				;}
    break;

  case 587:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
				;}
    break;

  case 588:

    {
					(yyval.node)=(yyvsp[(1) - (1)].node);
				;}
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

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
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

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 610:

    { (yyval.node) =(yyvsp[(1) - (1)].node); ;}
    break;

  case 611:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 612:

    { 
					(yyval.node)=NULL;
				;}
    break;

  case 613:

    { 
        			merge_nodes((yyval.node), result->malloc_pool_, T_PROCEDURE_STMTS, (yyvsp[(1) - (1)].node));
				;}
    break;

  case 614:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
				;}
    break;

  case 615:

    {
					(yyval.node)=(yyvsp[(1) - (1)].node);
				;}
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

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
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

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 636:

    { (yyval.node) =(yyvsp[(1) - (1)].node); ;}
    break;

  case 637:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 638:

    {
						ParseNode *args = NULL;
						merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (4)].node));
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECLARE, 4, args, (yyvsp[(3) - (4)].node), NULL, NULL);
					;}
    break;

  case 639:

    {
						ParseNode *args = NULL;
						merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (6)].node));
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECLARE, 4, args, (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node), NULL);
          ;}
    break;

  case 640:

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

  case 641:

    {
						ParseNode *var_list = NULL;
						merge_nodes(var_list, result->malloc_pool_, T_VAR_VAL_LIST, (yyvsp[(2) - (3)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ASSGIN, 1,var_list);
					;}
    break;

  case 642:

    {
						ParseNode *elsifs = NULL;
						merge_nodes(elsifs, result->malloc_pool_, T_PROCEDURE_ELSEIFS, (yyvsp[(5) - (9)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (9)].node), (yyvsp[(4) - (9)].node), elsifs ,(yyvsp[(6) - (9)].node));
					;}
    break;

  case 643:

    {
						ParseNode *elsifs = NULL;
						merge_nodes(elsifs, result->malloc_pool_, T_PROCEDURE_ELSEIFS, (yyvsp[(5) - (8)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (8)].node), (yyvsp[(4) - (8)].node), elsifs ,NULL);
					;}
    break;

  case 644:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (8)].node), (yyvsp[(4) - (8)].node), NULL ,(yyvsp[(5) - (8)].node));
					;}
    break;

  case 645:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (7)].node), (yyvsp[(4) - (7)].node), NULL ,NULL);
					;}
    break;

  case 646:

    {
						(yyval.node)=(yyvsp[(1) - (1)].node);
					;}
    break;

  case 647:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
					;}
    break;

  case 648:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ELSEIF, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
					;}
    break;

  case 649:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ELSE, 1, (yyvsp[(2) - (2)].node));
						//$$ = $2;
					;}
    break;

  case 650:

    {
						ParseNode *casewhenlist = NULL;
						merge_nodes(casewhenlist, result->malloc_pool_, T_PROCEDURE_CASE_WHEN_LIST, (yyvsp[(3) - (7)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CASE, 3, (yyvsp[(2) - (7)].node), casewhenlist, (yyvsp[(4) - (7)].node));
					;}
    break;

  case 651:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
					;}
    break;

  case 652:

    {
						(yyval.node)=(yyvsp[(1) - (1)].node);
					;}
    break;

  case 653:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CASE_WHEN, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
					;}
    break;

  case 654:

    {
						(yyval.node) = NULL;
					;}
    break;

  case 655:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ELSE, 1, (yyvsp[(2) - (2)].node));
						//$$ = $2;
					;}
    break;

  case 656:

    {
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_LOOP, 5,
                                     NULL,
                                     NULL,
                                     NULL,
                                     NULL,
                                     (yyvsp[(2) - (5)].node));
          ;}
    break;

  case 657:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_LOOP, 5,
                                       (yyvsp[(2) - (11)].node),
                                       NULL,
                                       (yyvsp[(4) - (11)].node),
                                       (yyvsp[(6) - (11)].node),
                                       (yyvsp[(8) - (11)].node));
            ;}
    break;

  case 658:

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

  case 659:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_WHILE, 2, (yyvsp[(2) - (7)].node), (yyvsp[(4) - (7)].node));
					;}
    break;

  case 660:

    {
						/* We do not bother building a node for NULL */
						(yyval.node) = NULL;
					;}
    break;

  case 661:

    {
                        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXIT, 1, NULL);
						(yyval.node)->value_=1;
					;}
    break;

  case 662:

    {
                        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXIT, 1, (yyvsp[(3) - (4)].node));//when_expr
                    ;}
    break;

  case 663:

    {
        					ParseNode *param_list = NULL;
            				merge_nodes(param_list, result->malloc_pool_, T_EXPR_LIST, (yyvsp[(4) - (6)].node));
        					
                            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXEC, 3, (yyvsp[(2) - (6)].node), param_list, (yyvsp[(6) - (6)].node));
						;}
    break;

  case 664:

    {
							ParseNode *params = NULL;
                            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXEC, 3, (yyvsp[(2) - (5)].node), params, (yyvsp[(5) - (5)].node));
                        ;}
    break;

  case 665:

    {
							malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DROP, 2, (yyvsp[(5) - (5)].node),(yyvsp[(5) - (5)].node));
						;}
    break;

  case 666:

    {
							malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DROP, 1, (yyvsp[(3) - (3)].node));
						;}
    break;

  case 667:

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

