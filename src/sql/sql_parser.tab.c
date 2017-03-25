
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
     SCHEMA = 413,
     SCOPE = 414,
     SELECT = 415,
     SESSION = 416,
     SESSION_ALIAS = 417,
     SET = 418,
     SHOW = 419,
     SMALLINT = 420,
     SNAPSHOT = 421,
     SPFILE = 422,
     START = 423,
     STATIC = 424,
     SYSTEM = 425,
     STRONG = 426,
     SET_MASTER_CLUSTER = 427,
     SET_SLAVE_CLUSTER = 428,
     SLAVE = 429,
     TABLE = 430,
     TABLES = 431,
     THEN = 432,
     TIME = 433,
     TIMESTAMP = 434,
     TINYINT = 435,
     TRAILING = 436,
     TRANSACTION = 437,
     TO = 438,
     UPDATE = 439,
     USER = 440,
     USING = 441,
     VALUES = 442,
     VARCHAR = 443,
     VARBINARY = 444,
     WHERE = 445,
     WHEN = 446,
     WITH = 447,
     WORK = 448,
     PROCESSLIST = 449,
     QUERY = 450,
     CONNECTION = 451,
     WEAK = 452,
     INDEX = 453,
     STORING = 454,
     BLOOMFILTER_JOIN = 455,
     MERGE_JOIN = 456,
     AUTO_INCREMENT = 457,
     CHUNKSERVER = 458,
     COMPRESS_METHOD = 459,
     CONSISTENT_MODE = 460,
     EXPIRE_INFO = 461,
     GRANTS = 462,
     JOIN_INFO = 463,
     MERGESERVER = 464,
     REPLICA_NUM = 465,
     ROOTSERVER = 466,
     ROW_COUNT = 467,
     SERVER = 468,
     SERVER_IP = 469,
     SERVER_PORT = 470,
     SERVER_TYPE = 471,
     STATUS = 472,
     TABLE_ID = 473,
     TABLET_BLOCK_SIZE = 474,
     TABLET_MAX_SIZE = 475,
     UNLOCKED = 476,
     UPDATESERVER = 477,
     USE_BLOOM_FILTER = 478,
     VARIABLES = 479,
     VERBOSE = 480,
     WARNINGS = 481
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
#define YYLAST   3909

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  238
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  220
/* YYNRULES -- Number of rules.  */
#define YYNRULES  665
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1255

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   481

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    36,     2,     2,
      40,    41,    34,    32,   237,    33,    42,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   236,
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
     234,   235
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
     999,  1004,  1008,  1013,  1015,  1018,  1019,  1021,  1025,  1027,
    1029,  1031,  1033,  1035,  1037,  1039,  1041,  1042,  1044,  1045,
    1048,  1052,  1057,  1062,  1067,  1071,  1075,  1079,  1080,  1084,
    1086,  1087,  1091,  1093,  1097,  1100,  1101,  1103,  1105,  1106,
    1109,  1110,  1112,  1114,  1116,  1119,  1123,  1125,  1127,  1131,
    1133,  1137,  1139,  1143,  1146,  1150,  1153,  1155,  1161,  1163,
    1167,  1174,  1180,  1183,  1186,  1189,  1191,  1193,  1194,  1198,
    1200,  1202,  1204,  1206,  1208,  1209,  1213,  1219,  1225,  1231,
    1236,  1241,  1246,  1249,  1254,  1258,  1262,  1266,  1270,  1274,
    1278,  1282,  1286,  1291,  1294,  1295,  1297,  1300,  1305,  1307,
    1309,  1310,  1311,  1314,  1317,  1318,  1320,  1321,  1323,  1327,
    1329,  1333,  1338,  1340,  1342,  1346,  1348,  1352,  1358,  1365,
    1368,  1369,  1373,  1377,  1379,  1383,  1388,  1390,  1392,  1394,
    1395,  1399,  1400,  1403,  1407,  1410,  1413,  1418,  1419,  1421,
    1422,  1424,  1426,  1433,  1435,  1439,  1442,  1444,  1446,  1449,
    1451,  1453,  1456,  1458,  1460,  1462,  1464,  1466,  1467,  1469,
    1471,  1477,  1480,  1481,  1486,  1488,  1490,  1492,  1494,  1496,
    1499,  1503,  1505,  1509,  1513,  1517,  1522,  1527,  1533,  1539,
    1543,  1547,  1551,  1553,  1555,  1557,  1559,  1563,  1565,  1569,
    1573,  1576,  1577,  1579,  1583,  1587,  1589,  1591,  1596,  1603,
    1605,  1609,  1613,  1618,  1623,  1629,  1631,  1632,  1634,  1636,
    1637,  1641,  1645,  1649,  1652,  1657,  1665,  1673,  1680,  1687,
    1688,  1690,  1692,  1696,  1706,  1709,  1710,  1714,  1718,  1722,
    1723,  1725,  1727,  1729,  1731,  1735,  1742,  1743,  1745,  1747,
    1749,  1751,  1753,  1755,  1757,  1759,  1761,  1763,  1765,  1767,
    1769,  1771,  1773,  1775,  1777,  1779,  1781,  1783,  1785,  1787,
    1789,  1791,  1793,  1795,  1797,  1799,  1801,  1803,  1805,  1807,
    1810,  1817,  1823,  1827,  1829,  1832,  1836,  1840,  1844,  1848,
    1853,  1858,  1863,  1867,  1868,  1870,  1873,  1875,  1877,  1879,
    1881,  1883,  1885,  1887,  1890,  1893,  1896,  1899,  1902,  1905,
    1908,  1911,  1914,  1917,  1920,  1923,  1926,  1929,  1932,  1934,
    1936,  1937,  1939,  1942,  1944,  1946,  1948,  1950,  1952,  1954,
    1957,  1960,  1963,  1966,  1969,  1972,  1975,  1978,  1981,  1984,
    1987,  1990,  1993,  1996,  1999,  2001,  2003,  2008,  2015,  2021,
    2025,  2035,  2044,  2053,  2061,  2063,  2066,  2071,  2074,  2082,
    2085,  2087,  2092,  2093,  2096,  2102,  2114,  2127,  2135,  2137,
    2140,  2145,  2152,  2158,  2164,  2168
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     239,     0,    -1,   240,   106,    -1,   240,   236,   241,    -1,
     241,    -1,   430,    -1,   455,    -1,   457,    -1,   456,    -1,
     270,    -1,   272,    -1,   273,    -1,   288,    -1,   281,    -1,
     282,    -1,   283,    -1,   284,    -1,   286,    -1,   287,    -1,
     318,    -1,   311,    -1,   289,    -1,   264,    -1,   261,    -1,
     260,    -1,   305,    -1,   308,    -1,   355,    -1,   358,    -1,
     395,    -1,   398,    -1,   406,    -1,   411,    -1,   417,    -1,
     409,    -1,   366,    -1,   371,    -1,   373,    -1,   375,    -1,
     378,    -1,   388,    -1,   393,    -1,   382,    -1,   383,    -1,
     384,    -1,   385,    -1,   359,    -1,    -1,   247,    -1,   242,
     237,   247,    -1,   425,    -1,   426,    42,   425,    -1,   426,
      42,    34,    -1,     4,    -1,     6,    -1,     5,    -1,     9,
      -1,     8,    -1,    10,    -1,    12,    -1,    14,    -1,    13,
      -1,   171,    42,   425,    -1,   243,    -1,   244,    -1,    40,
     247,    41,    -1,    40,   242,   237,   247,    41,    -1,   249,
      -1,   255,    -1,   256,    -1,   319,    -1,   109,   319,    -1,
     254,    -1,   245,    -1,    32,   246,    -1,    33,   246,    -1,
     246,    32,   246,    -1,   246,    33,   246,    -1,   246,    34,
     246,    -1,   246,    35,   246,    -1,   246,    36,   246,    -1,
     246,    38,   246,    -1,   246,    37,   246,    -1,   245,    -1,
      32,   247,    -1,    33,   247,    -1,   247,    32,   247,    -1,
     247,    33,   247,    -1,   247,    34,   247,    -1,   247,    35,
     247,    -1,   247,    36,   247,    -1,   247,    38,   247,    -1,
     247,    37,   247,    -1,   247,    26,   247,    -1,   247,    25,
     247,    -1,   247,    24,   247,    -1,   247,    22,   247,    -1,
     247,    23,   247,    -1,   247,    21,   247,    -1,   247,    28,
     247,    -1,   247,    20,    28,   247,    -1,   247,    19,   247,
      -1,   247,    18,   247,    -1,    20,   247,    -1,   247,    31,
      10,    -1,   247,    31,    20,    10,    -1,   247,    31,     8,
      -1,   247,    31,    20,     8,    -1,   247,    31,    11,    -1,
     247,    31,    20,    11,    -1,   247,    29,   246,    19,   246,
      -1,   247,    20,    29,   246,    19,   246,    -1,   247,    30,
     248,    -1,   247,    20,    30,   248,    -1,   247,    27,   247,
      -1,   319,    -1,    40,   242,    41,    -1,    79,   250,   251,
     253,   105,    -1,   247,    -1,    -1,   252,    -1,   251,   252,
      -1,   200,   247,   186,   247,    -1,   104,   247,    -1,    -1,
      14,    40,     5,    41,    -1,    14,    40,    14,    41,    -1,
     427,    40,    34,    41,    -1,   427,    40,   259,   247,    41,
      -1,   427,    40,   242,    41,    -1,   427,    40,   247,    70,
     294,    41,    -1,   427,    40,   338,    41,    -1,   427,    40,
      41,    -1,   257,    40,   258,    41,    -1,   221,    -1,   318,
      -1,   311,    -1,   261,    -1,   260,    -1,    68,    -1,   100,
      -1,    97,   113,   351,   325,   312,    -1,   193,   327,   351,
     172,   262,   325,   312,    -1,   263,    -1,   262,   237,   263,
      -1,   425,    24,   247,    -1,    87,   207,   290,   351,   146,
     351,   265,   266,   268,    -1,    40,   315,    41,    -1,   208,
     267,    -1,    -1,    40,   315,    41,    -1,   269,    -1,   268,
     237,   269,    -1,    -1,   303,    -1,    44,   271,    56,   112,
     318,    -1,   428,    -1,    57,   271,    -1,    58,   271,    -1,
      58,   271,    60,    -1,    58,   271,   130,   408,    -1,    58,
     271,    60,   130,   408,    -1,    58,   271,    62,   130,   408,
      -1,    58,   271,    61,   130,   408,    -1,    58,   271,    63,
     130,   408,    -1,    58,   271,    64,     5,   130,   408,    -1,
      58,   271,   285,    65,     5,   130,   408,    -1,    58,   271,
      61,    -1,    58,   271,    62,    -1,    58,   271,    63,    -1,
      58,   271,   285,    65,     5,    -1,    60,    -1,    61,    -1,
      58,   271,    64,     5,    -1,    58,   271,   113,     5,   192,
       5,    -1,    59,   271,    -1,    87,   184,   290,   351,    40,
     291,    41,   302,    -1,   126,    20,   109,    -1,    -1,   292,
      -1,   291,   237,   292,    -1,   293,    -1,   154,   133,    40,
     315,    41,    -1,   425,   294,   300,    -1,   189,    -1,   174,
      -1,   140,    -1,   128,    -1,    73,    -1,    95,   295,    -1,
     144,   295,    -1,    75,    -1,   111,   296,    -1,   156,    -1,
     101,   297,    -1,   188,   298,    -1,    93,    -1,    80,   299,
      -1,    74,   299,    -1,   197,   299,    -1,   198,   299,    -1,
      88,    -1,   142,    -1,    92,    -1,   187,   298,    -1,    40,
       5,   237,     5,    41,    -1,    40,     5,    41,    -1,    -1,
      40,     5,    41,    -1,    -1,   152,    -1,    -1,    40,     5,
      41,    -1,    -1,    40,     5,    41,    -1,    -1,   300,   301,
      -1,    -1,    20,    10,    -1,    10,    -1,    96,   244,    -1,
     211,    -1,   154,   133,    -1,   303,    -1,   302,   237,   303,
      -1,    -1,   217,   304,     4,    -1,   215,   304,     4,    -1,
     229,   304,     5,    -1,   228,   304,     5,    -1,   227,   304,
       5,    -1,   219,   304,     5,    -1,   213,   304,     4,    -1,
     232,   304,     8,    -1,   214,   304,   178,    -1,    82,   304,
       4,    -1,    24,    -1,    -1,   102,   184,   306,   307,    -1,
      -1,   126,   109,    -1,   350,    -1,   307,   237,   350,    -1,
     102,   207,   306,   309,   146,   310,    -1,    -1,   351,    -1,
     309,   237,   351,    -1,   351,    -1,   313,   130,   351,   314,
     196,   316,   312,    -1,   313,   130,   351,   318,    -1,   313,
     130,   351,    40,   315,    41,   318,    -1,    -1,   200,   247,
      -1,   158,    -1,   129,    -1,    40,   315,    41,    -1,    -1,
     425,    -1,   315,   237,   425,    -1,    40,   317,    41,    -1,
     316,   237,    40,   317,    41,    -1,   247,    -1,   317,   237,
     247,    -1,   320,   312,    -1,   319,    -1,    40,   320,    41,
      -1,    40,   319,    41,    -1,   321,    -1,   324,   337,    -1,
     322,   341,   337,    -1,   322,   340,   326,   337,    -1,   169,
     327,   346,   348,   336,    -1,   169,   327,   346,   348,   113,
     103,   325,   336,    -1,   324,    -1,   319,    -1,   169,   327,
     348,   130,   408,   113,   349,   325,   337,    -1,   169,   327,
     346,   348,   113,   349,   325,   339,   345,    -1,   322,    16,
     346,   322,    -1,   322,    17,   346,   322,    -1,   322,    15,
     346,   322,    -1,    -1,   199,   247,    -1,   199,     7,   247,
      -1,   136,   335,   145,   335,    -1,   145,   335,   136,   335,
      -1,   136,   335,    -1,   145,   335,    -1,   136,   335,   237,
     335,    -1,    -1,   122,   328,   123,    -1,   329,    -1,   328,
     237,   329,    -1,    -1,   330,    -1,   329,   330,    -1,   155,
      -1,   124,    -1,   132,    40,   351,   237,   351,   237,   351,
      42,   351,   237,   351,    42,   351,    41,    -1,   165,    40,
     334,    41,    -1,   207,    40,   351,   351,    41,    -1,     3,
      40,     3,    41,    -1,    40,   331,    41,    -1,   131,    40,
     332,    41,    -1,   166,    -1,   331,   237,    -1,    -1,   333,
      -1,   332,   237,   333,    -1,   209,    -1,   210,    -1,   206,
      -1,   180,    -1,   178,    -1,   115,    -1,     5,    -1,    12,
      -1,    -1,   326,    -1,    -1,   112,   193,    -1,   247,   113,
     247,    -1,    76,   247,   113,   247,    -1,   134,   247,   113,
     247,    -1,   190,   247,   113,   247,    -1,    76,   113,   247,
      -1,   134,   113,   247,    -1,   190,   113,   247,    -1,    -1,
     120,    77,   242,    -1,   341,    -1,    -1,   147,    77,   342,
      -1,   343,    -1,   342,   237,   343,    -1,   247,   344,    -1,
      -1,    71,    -1,    98,    -1,    -1,   121,   247,    -1,    -1,
      68,    -1,   100,    -1,   247,    -1,   247,   428,    -1,   247,
      70,   428,    -1,    34,    -1,   347,    -1,   348,   237,   347,
      -1,   350,    -1,   349,   237,   350,    -1,   351,    -1,   351,
      70,   426,    -1,   351,   426,    -1,   319,    70,   426,    -1,
     319,   426,    -1,   352,    -1,    40,   352,    41,    70,   426,
      -1,   426,    -1,    40,   352,    41,    -1,   350,   353,   131,
     350,   146,   247,    -1,   350,   131,   350,   146,   247,    -1,
     114,   354,    -1,   135,   354,    -1,   162,   354,    -1,   127,
      -1,   149,    -1,    -1,   110,   357,   356,    -1,   318,    -1,
     260,    -1,   311,    -1,   261,    -1,   234,    -1,    -1,   173,
     185,   363,    -1,   173,   207,   146,   351,   363,    -1,   173,
      86,   113,   351,   363,    -1,   173,    86,    30,   351,   363,
      -1,   173,   184,   226,   363,    -1,   173,   222,   226,   363,
      -1,   173,   362,   233,   363,    -1,   173,   167,    -1,   173,
      87,   184,   351,    -1,    99,   351,   364,    -1,    98,   351,
     364,    -1,   173,   235,   360,    -1,   173,   255,   235,    -1,
     173,   216,   361,    -1,   173,   150,   363,    -1,   173,   365,
     203,    -1,   139,   184,   351,    -1,   136,     5,   237,     5,
      -1,   136,     5,    -1,    -1,   374,    -1,   112,    89,    -1,
     112,    89,    40,    41,    -1,   117,    -1,   170,    -1,    -1,
      -1,    28,     4,    -1,   199,   247,    -1,    -1,     4,    -1,
      -1,   114,    -1,    87,   194,   367,    -1,   368,    -1,   367,
     237,   368,    -1,   369,   125,    77,   370,    -1,     4,    -1,
       4,    -1,   102,   194,   372,    -1,   369,    -1,   372,   237,
     369,    -1,   172,   151,   374,    24,   370,    -1,    69,   194,
     369,   125,    77,   370,    -1,   112,   369,    -1,    -1,   157,
     194,   377,    -1,   369,   192,   369,    -1,   376,    -1,   377,
     237,   376,    -1,    69,   194,   369,   379,    -1,   138,    -1,
     230,    -1,   202,    -1,    -1,   201,    84,   175,    -1,    -1,
      72,   380,    -1,   177,   191,   381,    -1,    83,   380,    -1,
     163,   380,    -1,   164,   386,   387,     5,    -1,    -1,   117,
      -1,    -1,   204,    -1,   205,    -1,   119,   389,   146,   392,
     192,   372,    -1,   390,    -1,   389,   237,   390,    -1,    68,
     391,    -1,    69,    -1,    87,    -1,    87,   194,    -1,    97,
      -1,   102,    -1,   119,   148,    -1,   129,    -1,   193,    -1,
     169,    -1,   158,    -1,   160,    -1,    -1,    34,    -1,   426,
      -1,   161,   389,   394,   113,   372,    -1,   146,   392,    -1,
      -1,   153,   396,   113,   397,    -1,   428,    -1,   318,    -1,
     311,    -1,   261,    -1,   260,    -1,   172,   399,    -1,   172,
     172,   401,    -1,   400,    -1,   399,   237,   400,    -1,    14,
     402,   247,    -1,   425,   402,   247,    -1,   117,   425,   402,
     247,    -1,   170,   425,   402,   247,    -1,   118,    42,   425,
     402,   247,    -1,   171,    42,   425,   402,   247,    -1,    13,
     402,   247,    -1,   254,   402,   247,    -1,    14,   402,   404,
      -1,   192,    -1,    24,    -1,    14,    -1,   254,    -1,    40,
     405,    41,    -1,   244,    -1,   405,   237,   244,    -1,   108,
     396,   407,    -1,   195,   408,    -1,    -1,   403,    -1,   408,
     237,   403,    -1,   410,   153,   396,    -1,    94,    -1,   102,
      -1,    69,   184,   351,   412,    -1,    69,   184,   351,   157,
     192,   351,    -1,   413,    -1,   412,   237,   413,    -1,    66,
     414,   293,    -1,   102,   414,   425,   415,    -1,    69,   414,
     425,   416,    -1,   157,   414,   425,   192,   428,    -1,    85,
      -1,    -1,    78,    -1,   159,    -1,    -1,   172,    20,    10,
      -1,   102,    20,    10,    -1,   172,    96,   244,    -1,   102,
      96,    -1,    69,   179,   172,   419,    -1,    69,   179,   418,
      90,   143,    24,     4,    -1,    69,   179,   418,    91,   143,
      24,     4,    -1,    69,   179,   181,   143,    24,     4,    -1,
      69,   179,   182,   183,    24,     4,    -1,    -1,   116,    -1,
     420,    -1,   419,   237,   420,    -1,   425,    24,   244,   421,
     422,   225,    24,   423,   424,    -1,    82,     4,    -1,    -1,
     168,    24,   141,    -1,   168,    24,   176,    -1,   168,    24,
      76,    -1,    -1,   220,    -1,   231,    -1,   212,    -1,   218,
      -1,    81,    24,     5,    -1,   223,    24,     4,   224,    24,
       5,    -1,    -1,     3,    -1,   429,    -1,     3,    -1,   429,
      -1,     3,    -1,     3,    -1,   429,    -1,   211,    -1,   212,
      -1,   213,    -1,   214,    -1,   215,    -1,   216,    -1,   217,
      -1,   218,    -1,   219,    -1,   220,    -1,   221,    -1,   222,
      -1,   223,    -1,   224,    -1,   225,    -1,   226,    -1,   228,
      -1,   227,    -1,   229,    -1,   230,    -1,   231,    -1,   232,
      -1,   233,    -1,   234,    -1,   235,    -1,   431,   434,    -1,
      87,    43,     3,    40,   432,    41,    -1,    87,    43,     3,
      40,    41,    -1,   432,   237,   433,    -1,   433,    -1,    14,
     294,    -1,    30,    14,   294,    -1,    46,    14,   294,    -1,
      47,    14,   294,    -1,    14,   294,    54,    -1,    30,    14,
     294,    54,    -1,    46,    14,   294,    54,    -1,    47,    14,
     294,    54,    -1,    72,   435,   105,    -1,    -1,   436,    -1,
     436,   437,    -1,   437,    -1,   443,    -1,   447,    -1,   452,
      -1,   451,    -1,   441,    -1,   442,    -1,   323,   236,    -1,
     311,   236,    -1,   261,   236,    -1,   260,   236,    -1,   318,
     236,    -1,   270,   236,    -1,   272,   236,    -1,   288,   236,
      -1,   274,   236,    -1,   275,   236,    -1,   276,   236,    -1,
     278,   236,    -1,   277,   236,    -1,   279,   236,    -1,   280,
     236,    -1,   454,    -1,   453,    -1,    -1,   439,    -1,   439,
     440,    -1,   440,    -1,   443,    -1,   447,    -1,   452,    -1,
     451,    -1,   442,    -1,   323,   236,    -1,   311,   236,    -1,
     261,   236,    -1,   260,   236,    -1,   318,   236,    -1,   270,
     236,    -1,   272,   236,    -1,   288,   236,    -1,   274,   236,
      -1,   275,   236,    -1,   276,   236,    -1,   278,   236,    -1,
     277,   236,    -1,   279,   236,    -1,   280,   236,    -1,   454,
      -1,   453,    -1,    44,   408,   294,   236,    -1,    44,   408,
     294,    96,   244,   236,    -1,    44,   408,   294,    54,   236,
      -1,   172,   399,   236,    -1,   126,   247,   186,   438,   444,
     446,   105,   126,   236,    -1,   126,   247,   186,   438,   444,
     105,   126,   236,    -1,   126,   247,   186,   438,   446,   105,
     126,   236,    -1,   126,   247,   186,   438,   105,   126,   236,
      -1,   445,    -1,   444,   445,    -1,    45,   247,   186,   438,
      -1,   104,   438,    -1,    79,   247,   448,   450,   105,    79,
     236,    -1,   448,   449,    -1,   449,    -1,   200,   247,   186,
     438,    -1,    -1,   104,   438,    -1,    49,   438,   105,    49,
     236,    -1,   112,    14,    30,   246,   192,   246,    49,   438,
     105,    49,   236,    -1,   112,    14,    30,    55,   246,   192,
     246,    49,   438,   105,    49,   236,    -1,    48,   247,    52,
     438,   105,    48,   236,    -1,   236,    -1,    50,   236,    -1,
      50,   200,   247,   236,    -1,    53,     3,    40,   242,    41,
     327,    -1,    53,     3,    40,    41,   327,    -1,   102,    43,
     126,   109,     3,    -1,   102,    43,     3,    -1,   173,    43,
       3,    -1
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
     693,   716,   720,   742,   750,   757,   758,   759,   760,   764,
     768,   782,   796,   806,   810,   817,   831,   847,   854,   860,
     866,   873,   877,   882,   888,   905,   916,   929,   945,   951,
     965,   980,   995,  1011,  1027,  1043,  1060,  1076,  1097,  1116,
    1133,  1146,  1151,  1166,  1183,  1203,  1223,  1240,  1243,  1247,
    1251,  1258,  1262,  1271,  1280,  1282,  1284,  1286,  1288,  1290,
    1302,  1311,  1313,  1315,  1317,  1322,  1329,  1331,  1338,  1345,
    1352,  1359,  1361,  1363,  1369,  1381,  1383,  1386,  1390,  1391,
    1395,  1396,  1400,  1401,  1405,  1406,  1410,  1413,  1417,  1422,
    1427,  1429,  1431,  1436,  1440,  1445,  1451,  1456,  1461,  1466,
    1471,  1476,  1481,  1486,  1491,  1497,  1505,  1506,  1517,  1527,
    1528,  1533,  1537,  1551,  1561,  1563,  1567,  1574,  1585,  1599,
    1610,  1628,  1629,  1636,  1641,  1649,  1654,  1658,  1659,  1666,
    1670,  1676,  1677,  1691,  1701,  1706,  1707,  1711,  1715,  1720,
    1730,  1751,  1773,  1799,  1800,  1808,  1840,  1866,  1888,  1910,
    1936,  1937,  1941,  1948,  1956,  1964,  1968,  1972,  1984,  1987,
    2001,  2005,  2010,  2016,  2020,  2027,  2031,  2035,  2039,  2045,
    2051,  2058,  2063,  2068,  2075,  2080,  2087,  2091,  2098,  2102,
    2110,  2114,  2118,  2122,  2128,  2130,  2136,  2137,  2143,  2144,
    2152,  2159,  2166,  2173,  2180,  2191,  2202,  2217,  2218,  2225,
    2226,  2230,  2237,  2239,  2244,  2252,  2253,  2255,  2261,  2262,
    2270,  2273,  2277,  2284,  2289,  2297,  2305,  2315,  2319,  2326,
    2328,  2333,  2337,  2341,  2345,  2349,  2353,  2357,  2366,  2374,
    2378,  2382,  2391,  2397,  2403,  2409,  2416,  2417,  2427,  2435,
    2436,  2437,  2438,  2442,  2443,  2454,  2456,  2458,  2460,  2462,
    2464,  2466,  2471,  2473,  2475,  2477,  2479,  2483,  2496,  2500,
    2504,  2511,  2517,  2526,  2536,  2540,  2542,  2544,  2549,  2550,
    2551,  2556,  2557,  2559,  2565,  2566,  2571,  2572,  2582,  2588,
    2592,  2598,  2604,  2610,  2622,  2628,  2632,  2644,  2648,  2654,
    2659,  2670,  2676,  2682,  2686,  2698,  2704,  2709,  2723,  2728,
    2732,  2737,  2741,  2747,  2759,  2771,  2783,  2790,  2794,  2802,
    2806,  2811,  2825,  2836,  2840,  2846,  2852,  2857,  2862,  2867,
    2872,  2877,  2882,  2887,  2892,  2897,  2904,  2909,  2914,  2919,
    2931,  2971,  2976,  2988,  2995,  3000,  3002,  3004,  3006,  3019,
    3025,  3033,  3037,  3044,  3050,  3057,  3064,  3071,  3078,  3085,
    3092,  3103,  3113,  3114,  3118,  3121,  3127,  3134,  3135,  3150,
    3157,  3162,  3167,  3171,  3184,  3192,  3194,  3205,  3211,  3222,
    3226,  3233,  3238,  3244,  3249,  3258,  3259,  3263,  3264,  3265,
    3269,  3274,  3279,  3283,  3297,  3303,  3310,  3317,  3324,  3334,
    3337,  3345,  3349,  3356,  3371,  3374,  3378,  3380,  3382,  3385,
    3389,  3394,  3399,  3404,  3412,  3416,  3421,  3432,  3434,  3451,
    3453,  3470,  3474,  3476,  3489,  3490,  3491,  3492,  3493,  3494,
    3495,  3496,  3497,  3498,  3499,  3500,  3501,  3502,  3503,  3504,
    3505,  3506,  3507,  3508,  3509,  3510,  3511,  3512,  3513,  3523,
    3528,  3535,  3541,  3545,  3550,  3554,  3558,  3562,  3566,  3573,
    3580,  3587,  3595,  3602,  3605,  3610,  3614,  3619,  3621,  3623,
    3625,  3627,  3629,  3631,  3633,  3635,  3637,  3639,  3641,  3643,
    3645,  3647,  3649,  3651,  3653,  3655,  3657,  3659,  3662,  3664,
    3671,  3674,  3679,  3683,  3688,  3690,  3692,  3694,  3696,  3698,
    3700,  3702,  3704,  3706,  3708,  3710,  3712,  3714,  3716,  3718,
    3720,  3722,  3724,  3726,  3729,  3731,  3739,  3745,  3751,  3771,
    3783,  3789,  3795,  3799,  3804,  3808,  3813,  3819,  3830,  3837,
    3841,  3846,  3852,  3855,  3866,  3875,  3884,  3902,  3908,  3918,
    3928,  3939,  3947,  3960,  3964,  3978
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
  "SCHEMA", "SCOPE", "SELECT", "SESSION", "SESSION_ALIAS", "SET", "SHOW",
  "SMALLINT", "SNAPSHOT", "SPFILE", "START", "STATIC", "SYSTEM", "STRONG",
  "SET_MASTER_CLUSTER", "SET_SLAVE_CLUSTER", "SLAVE", "TABLE", "TABLES",
  "THEN", "TIME", "TIMESTAMP", "TINYINT", "TRAILING", "TRANSACTION", "TO",
  "UPDATE", "USER", "USING", "VALUES", "VARCHAR", "VARBINARY", "WHERE",
  "WHEN", "WITH", "WORK", "PROCESSLIST", "QUERY", "CONNECTION", "WEAK",
  "INDEX", "STORING", "BLOOMFILTER_JOIN", "MERGE_JOIN", "AUTO_INCREMENT",
  "CHUNKSERVER", "COMPRESS_METHOD", "CONSISTENT_MODE", "EXPIRE_INFO",
  "GRANTS", "JOIN_INFO", "MERGESERVER", "REPLICA_NUM", "ROOTSERVER",
  "ROW_COUNT", "SERVER", "SERVER_IP", "SERVER_PORT", "SERVER_TYPE",
  "STATUS", "TABLE_ID", "TABLET_BLOCK_SIZE", "TABLET_MAX_SIZE", "UNLOCKED",
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
     476,   477,   478,   479,   480,   481,    59,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   238,   239,   240,   240,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   242,   242,
     243,   243,   243,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   248,   248,   249,   250,   250,
     251,   251,   252,   253,   253,   254,   254,   255,   255,   255,
     255,   255,   255,   256,   257,   258,   258,   258,   258,   259,
     259,   260,   261,   262,   262,   263,   264,   265,   266,   266,
     267,   268,   268,   268,   269,   270,   271,   272,   273,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   285,   286,   287,   288,   289,   290,   290,   291,
     291,   292,   292,   293,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   295,   295,   295,   296,   296,
     297,   297,   298,   298,   299,   299,   300,   300,   301,   301,
     301,   301,   301,   302,   302,   302,   303,   303,   303,   303,
     303,   303,   303,   303,   303,   303,   304,   304,   305,   306,
     306,   307,   307,   308,   309,   309,   309,   310,   311,   311,
     311,   312,   312,   313,   313,   314,   314,   315,   315,   316,
     316,   317,   317,   318,   318,   319,   319,   320,   320,   320,
     320,   321,   321,   322,   322,   323,   324,   324,   324,   324,
     325,   325,   325,   326,   326,   326,   326,   326,   327,   327,
     328,   328,   328,   329,   329,   330,   330,   330,   330,   330,
     330,   330,   330,   330,   331,   331,   332,   332,   333,   333,
     334,   334,   334,   334,   335,   335,   336,   336,   337,   337,
     338,   338,   338,   338,   338,   338,   338,   339,   339,   340,
     340,   341,   342,   342,   343,   344,   344,   344,   345,   345,
     346,   346,   346,   347,   347,   347,   347,   348,   348,   349,
     349,   350,   350,   350,   350,   350,   350,   350,   351,   352,
     352,   352,   353,   353,   353,   353,   354,   354,   355,   356,
     356,   356,   356,   357,   357,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   359,   360,   360,   360,   361,   361,   361,   362,   362,
     362,   363,   363,   363,   364,   364,   365,   365,   366,   367,
     367,   368,   369,   370,   371,   372,   372,   373,   373,   374,
     374,   375,   376,   377,   377,   378,   379,   379,   380,   380,
     381,   381,   382,   382,   383,   384,   385,   386,   386,   387,
     387,   387,   388,   389,   389,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   391,   391,   392,   392,
     393,   394,   394,   395,   396,   397,   397,   397,   397,   398,
     398,   399,   399,   400,   400,   400,   400,   400,   400,   400,
     400,   401,   402,   402,   403,   403,   404,   405,   405,   406,
     407,   407,   408,   408,   409,   410,   410,   411,   411,   412,
     412,   413,   413,   413,   413,   414,   414,   415,   415,   415,
     416,   416,   416,   416,   417,   417,   417,   417,   417,   418,
     418,   419,   419,   420,   421,   421,   422,   422,   422,   422,
     423,   423,   423,   423,   424,   424,   424,   425,   425,   426,
     426,   427,   428,   428,   429,   429,   429,   429,   429,   429,
     429,   429,   429,   429,   429,   429,   429,   429,   429,   429,
     429,   429,   429,   429,   429,   429,   429,   429,   429,   430,
     431,   431,   432,   432,   433,   433,   433,   433,   433,   433,
     433,   433,   434,   435,   435,   436,   436,   437,   437,   437,
     437,   437,   437,   437,   437,   437,   437,   437,   437,   437,
     437,   437,   437,   437,   437,   437,   437,   437,   437,   437,
     438,   438,   439,   439,   440,   440,   440,   440,   440,   440,
     440,   440,   440,   440,   440,   440,   440,   440,   440,   440,
     440,   440,   440,   440,   440,   440,   441,   441,   441,   442,
     443,   443,   443,   443,   444,   444,   445,   446,   447,   448,
     448,   449,   450,   450,   451,   451,   451,   452,   453,   454,
     454,   455,   455,   456,   456,   457
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
       4,     3,     4,     1,     2,     0,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     0,     2,
       3,     4,     4,     4,     3,     3,     3,     0,     3,     1,
       0,     3,     1,     3,     2,     0,     1,     1,     0,     2,
       0,     1,     1,     1,     2,     3,     1,     1,     3,     1,
       3,     1,     3,     2,     3,     2,     1,     5,     1,     3,
       6,     5,     2,     2,     2,     1,     1,     0,     3,     1,
       1,     1,     1,     1,     0,     3,     5,     5,     5,     4,
       4,     4,     2,     4,     3,     3,     3,     3,     3,     3,
       3,     3,     4,     2,     0,     1,     2,     4,     1,     1,
       0,     0,     2,     2,     0,     1,     0,     1,     3,     1,
       3,     4,     1,     1,     3,     1,     3,     5,     6,     2,
       0,     3,     3,     1,     3,     4,     1,     1,     1,     0,
       3,     0,     2,     3,     2,     2,     4,     0,     1,     0,
       1,     1,     6,     1,     3,     2,     1,     1,     2,     1,
       1,     2,     1,     1,     1,     1,     1,     0,     1,     1,
       5,     2,     0,     4,     1,     1,     1,     1,     1,     2,
       3,     1,     3,     3,     3,     4,     4,     5,     5,     3,
       3,     3,     1,     1,     1,     1,     3,     1,     3,     3,
       2,     0,     1,     3,     3,     1,     1,     4,     6,     1,
       3,     3,     4,     4,     5,     1,     0,     1,     1,     0,
       3,     3,     3,     2,     4,     7,     7,     6,     6,     0,
       1,     1,     3,     9,     2,     0,     3,     3,     3,     0,
       1,     1,     1,     1,     3,     6,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       6,     5,     3,     1,     2,     3,     3,     3,     3,     4,
       4,     4,     3,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     1,
       0,     1,     2,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     1,     4,     6,     5,     3,
       9,     8,     8,     7,     1,     2,     4,     2,     7,     2,
       1,     4,     0,     2,     5,    11,    12,     7,     1,     2,
       4,     6,     5,     5,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      47,     0,     0,     0,     0,     0,     0,     0,   429,   429,
       0,   495,     0,     0,     0,   496,     0,   374,     0,   254,
       0,     0,     0,   253,     0,   429,   437,   288,     0,   400,
       0,   288,     0,     0,     4,    24,    23,    22,     9,    10,
      11,    13,    14,    15,    16,    17,    18,    12,    21,    25,
      26,    20,     0,    19,   274,   251,   267,   330,   273,    27,
      28,    46,    35,    36,    37,    38,    39,    42,    43,    44,
      45,    40,    41,    29,    30,    31,    34,     0,    32,    33,
       5,     0,     6,     8,     7,   274,     0,   542,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
     556,   557,   558,   559,   561,   560,   562,   563,   564,   565,
     566,   567,   568,     0,   156,   543,     0,   157,   158,   175,
     519,     0,     0,   428,   432,   434,     0,   178,     0,   178,
       0,   539,   404,   358,   540,   404,     0,   239,     0,   239,
     491,   464,   373,     0,   457,   446,   447,   449,   450,     0,
     452,   455,   454,   453,     0,   443,     0,     0,     0,   462,
     435,   438,   439,   292,   340,   537,     0,     0,     0,     0,
     420,     0,     0,     0,     0,   469,   471,     0,   538,   541,
       0,     0,     0,   407,   398,   401,   382,   399,     0,   401,
       0,   420,     0,   394,     0,     0,     0,     0,   431,     0,
       1,     2,    47,     0,     0,   263,   340,   340,   340,     0,
       0,   318,     0,   268,     0,   583,   569,   266,   265,     0,
       0,   159,   167,   168,   169,     0,     0,     0,   520,     0,
       0,     0,     0,     0,   412,     0,     0,     0,     0,   408,
     409,     0,     0,   280,   405,   385,   384,   664,     0,     0,
       0,   415,   414,   244,     0,   489,   370,   372,   371,   369,
     368,   456,   445,   448,   451,     0,     0,   391,     0,     0,
     423,   421,     0,     0,   440,   441,     0,     0,   305,   296,
       0,     0,   295,     0,   303,     0,     0,   290,   293,   341,
     342,     0,   483,   482,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   470,     0,     0,     0,   665,     0,
       0,     0,     0,     0,   389,   401,   375,     0,     0,   388,
     395,   401,     0,   386,   387,   401,   390,     0,     0,   433,
       0,     3,   256,   537,    53,    55,    54,    57,    56,    58,
      59,    61,    60,     0,     0,     0,     0,   119,     0,     0,
     554,    63,    64,    83,   252,    67,    72,    68,    69,     0,
      70,    50,     0,   538,     0,     0,     0,     0,     0,     0,
     318,   269,   319,   494,     0,     0,   610,     0,     0,     0,
       0,     0,   288,     0,   658,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   584,   586,   591,   592,   587,   588,   590,   589,   609,
     608,     0,   288,     0,    48,   173,     0,     0,   514,   521,
       0,     0,     0,     0,     0,   506,   506,   506,   506,   497,
     499,     0,   426,   427,   425,     0,     0,     0,     0,     0,
       0,     0,   251,     0,   240,     0,   238,     0,   241,   351,
     356,     0,     0,   245,   484,   485,   492,   490,   458,     0,
     459,   444,   468,   467,   466,   465,   463,     0,     0,   461,
       0,   436,     0,     0,     0,     0,     0,     0,   289,     0,
     294,   346,   343,   347,   316,   479,     0,     0,   473,     0,
       0,   419,     0,     0,     0,     0,   480,   472,   474,   401,
     401,   383,   402,   403,   379,   401,   396,   380,   393,   381,
       0,   132,   139,     0,   140,     0,     0,     0,    48,     0,
       0,     0,     0,     0,     0,   249,   103,    84,    85,     0,
      48,    70,   118,     0,    71,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   288,
     274,   279,   273,   277,   278,   335,   331,   332,   314,   315,
     285,   286,   270,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   611,   613,   618,   614,   615,   617,   616,   635,   634,
       0,   659,     0,     0,     0,     0,     0,     0,   596,   595,
     598,   599,   601,   602,   603,   605,   604,   606,   607,   600,
     594,   597,   593,   582,   585,   155,   662,   288,     0,     0,
     170,     0,     0,     0,     0,     0,     0,   505,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   571,     0,     0,
       0,   573,   177,     0,   410,     0,     0,     0,   281,   141,
     663,   274,     0,   356,     0,     0,   355,   367,   365,     0,
     367,   367,     0,     0,   353,   416,     0,     0,     0,     0,
     422,   424,   460,     0,   301,   304,   308,   309,     0,   306,
       0,   313,   312,   311,   310,     0,     0,   291,     0,   344,
       0,     0,   317,   271,   125,   126,   475,     0,   413,   417,
     476,     0,     0,   481,   378,   377,   376,     0,     0,   127,
       0,     0,     0,     0,     0,     0,   129,     0,     0,     0,
     131,   430,   280,   143,     0,     0,   257,     0,     0,    65,
       0,   124,   120,    62,   102,   101,     0,     0,     0,    98,
      96,    97,    95,    94,    93,   114,    99,     0,     0,    73,
       0,     0,   112,   115,   106,   104,   108,     0,    86,    87,
      88,    89,    90,    92,    91,     0,   138,   137,   136,   135,
      52,    51,   340,   336,   337,   334,     0,     0,     0,     0,
     188,   215,   191,   215,   201,   203,   196,   207,   211,   209,
     187,   186,   202,   207,   193,   185,   213,   213,   184,   215,
     215,     0,   610,   622,   621,   624,   625,   627,   628,   629,
     631,   630,   632,   633,   626,   620,   623,   619,     0,   612,
       0,   171,   172,     0,     0,     0,     0,     0,     0,   652,
     650,     0,   610,     0,   639,   661,    49,   174,   522,    60,
     525,   517,   518,     0,     0,   501,     0,     0,   509,   498,
       0,   506,   500,   418,   574,     0,     0,     0,   570,     0,
       0,     0,   179,   181,   411,     0,   282,   359,   242,   354,
     366,   362,     0,   363,   364,     0,   352,   243,   247,   246,
     493,   442,   300,   302,     0,     0,   298,     0,   345,   280,
     280,   349,   348,   477,   478,   487,     0,   397,   392,   324,
       0,   325,     0,   326,     0,     0,   320,   128,     0,   251,
       0,   255,     0,     0,   251,    49,     0,     0,   121,     0,
     100,     0,   113,    74,    75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   107,   105,   109,   133,     0,   333,
     283,   287,   284,     0,   198,   197,     0,   189,   210,   194,
       0,   192,   190,     0,   204,   195,   199,   200,     0,     0,
     636,     0,     0,   660,     0,     0,     0,     0,     0,   160,
       0,     0,   610,   649,     0,     0,     0,     0,     0,     0,
     529,   515,   516,   217,     0,     0,   503,   507,   508,   502,
       0,   578,   575,   576,   577,   572,     0,   225,     0,     0,
     149,     0,     0,     0,   307,     0,   299,   316,     0,   327,
     486,     0,   321,   322,   323,   130,   144,   142,   145,   250,
     258,   261,     0,     0,   248,    66,     0,   123,   117,     0,
     110,    76,    77,    78,    79,    80,    82,    81,   116,     0,
       0,     0,     0,     0,   638,     0,     0,   654,   161,   163,
     162,   164,     0,     0,   610,   653,     0,     0,     0,     0,
     610,     0,     0,   644,     0,     0,   524,     0,     0,   183,
       0,   513,     0,     0,   504,   579,   580,   581,     0,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   176,
     223,   180,     0,     0,   153,   357,   361,     0,     0,   272,
     350,     0,   338,   488,   259,     0,     0,   122,   111,     0,
     214,   206,     0,   208,   212,   637,     0,   165,     0,   651,
       0,     0,     0,     0,   647,     0,     0,   645,     0,     0,
       0,     0,     0,   219,     0,     0,     0,   221,   216,   511,
     510,   512,     0,   236,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   147,     0,   148,   146,   151,
     154,   360,     0,     0,     0,   276,   262,     0,     0,   657,
     166,   648,     0,   610,   610,   643,     0,     0,     0,   280,
     528,   526,   527,     0,   218,   220,   222,   182,   235,   232,
     234,   227,   226,   231,   230,   229,   228,   233,   224,     0,
       0,     0,   328,   339,   260,   205,   610,     0,   646,   641,
       0,   642,   318,   532,   533,   530,   531,   536,   150,   152,
       0,     0,     0,   640,   275,     0,     0,   523,     0,     0,
       0,     0,     0,     0,     0,   655,   534,     0,     0,   656,
       0,     0,     0,   297,   535
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    32,    33,    34,   413,   351,   352,   353,   760,   482,
     762,   355,   533,   741,   742,   929,   356,   357,   358,   359,
     775,   519,   575,   576,   732,   733,    37,  1010,  1104,  1167,
    1168,  1169,   577,   113,   578,    40,   579,   580,   581,   582,
     583,   584,   585,    41,    42,    43,    44,   227,    45,    46,
     586,    48,   238,   871,   872,   873,   811,   957,   961,   959,
     964,   954,  1079,  1148,  1099,  1170,  1154,    49,   250,   446,
      50,   452,   887,   587,   205,    52,   524,   735,   924,  1032,
     588,   360,    55,    56,    57,   589,    58,   442,   702,   164,
     286,   287,   288,   473,   688,   689,   695,   570,   703,   213,
     520,  1112,   210,   211,   566,   567,   785,  1175,   291,   483,
     484,   900,   901,   449,   450,   672,   881,    59,   260,   143,
      60,    61,   323,   319,   195,   314,   245,   196,    62,   239,
     240,   251,   709,    63,   252,    64,   300,    65,   270,   271,
      66,   434,   124,   329,    67,    68,    69,    70,   162,   276,
      71,   154,   155,   262,   459,    72,   273,    73,   140,   466,
      74,   175,   176,   304,   294,   456,   713,   906,    75,   255,
     457,    76,    77,    78,   429,   430,   642,   999,   996,    79,
     232,   418,   419,   990,  1078,  1227,  1237,   361,   362,   197,
     114,   363,    80,    81,   650,   651,   216,   400,   401,   402,
     590,   591,   592,   403,   593,   594,  1072,  1073,  1074,   595,
     839,   840,   984,   596,   597,   598,   599,    82,    83,    84
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -954
static const yytype_int16 yypact[] =
{
    3393,    54,  2862,   110,  2862,  2862,  2862,   167,  -112,  -112,
     274,  -954,    11,  3026,  3026,   298,  2862,  -116,  1003,  -954,
     -19,  2862,    34,  -954,  1003,  -112,   165,    82,  2558,   918,
      93,    82,   182,   -48,  -954,  -954,  -954,  -954,  -954,  -954,
    -954,  -954,  -954,  -954,  -954,  -954,  -954,  -954,  -954,  -954,
    -954,  -954,   184,  -954,     8,   142,  -954,   371,     5,  -954,
    -954,  -954,  -954,  -954,  -954,  -954,  -954,  -954,  -954,  -954,
    -954,  -954,  -954,  -954,  -954,  -954,  -954,   191,  -954,  -954,
    -954,   276,  -954,  -954,  -954,   311,   315,  -954,  -954,  -954,
    -954,  -954,  -954,  -954,  -954,  -954,  -954,  -954,  -954,  -954,
    -954,  -954,  -954,  -954,  -954,  -954,  -954,  -954,  -954,  -954,
    -954,  -954,  -954,   306,  -954,  -954,   330,  -954,   476,  -954,
     278,  3026,   379,  -954,  -954,  -954,   372,   263,   379,   263,
    3026,  -954,   400,  -954,  -954,   400,    90,   283,   379,   283,
     220,  -954,  -954,   295,   258,  -954,   231,  -954,  -954,   285,
    -954,  -954,  -954,  -954,   -58,  -954,  3026,   342,   379,   -38,
    -954,  -954,   -47,   192,    52,  -954,    30,    26,  3063,   415,
     360,  3063,   424,   463,    30,   248,  -954,    30,  -954,  -954,
     495,    43,   317,  -954,  -954,    10,  -954,  -954,   281,    10,
     364,   403,   291,   383,   290,   301,   325,   504,   348,  3026,
    -954,  -954,  3393,  3026,  2393,  -954,    52,    52,    52,   490,
     132,   257,   394,  -954,  2862,   891,  -954,  -954,  -954,   481,
    1817,   530,   548,  -954,  -954,   609,   636,   555,  -954,  3063,
     507,   472,   305,   265,  -954,   212,   616,   640,  3026,   429,
    -954,   536,  3026,   469,  -954,  -954,  -954,  -954,   561,   567,
    2709,  -954,   442,  3026,   669,  -954,  -954,  -954,  -954,  -954,
    -954,  -954,  -954,  -954,  -954,  1487,  1003,  -954,   295,   494,
    -954,   451,  1487,   577,  -954,  -954,   686,   659,  -954,  -954,
     678,   679,  -954,   680,  -954,   683,   -51,   192,  -954,  -954,
    -954,  1904,  -954,  -954,  2393,   335,  2393,    30,  3063,   379,
     701,    30,  3063,    30,  -954,  2393,  1389,  2393,  -954,  3026,
    3026,  3026,   706,  2393,  -954,    10,  -954,  3026,   137,  -954,
    -954,    10,   738,  -954,  -954,    10,  -954,  1315,   663,  -954,
     576,  -954,    62,   128,  -954,  -954,  -954,  -954,  -954,  -954,
    -954,  -954,   715,  2393,  2393,  2393,  1986,  2393,   717,   720,
     719,  -954,  -954,  -954,  3871,  -954,  -954,  -954,  -954,   729,
    -954,  -954,   731,   736,    69,    69,    69,  2393,   150,   150,
     667,  -954,  -954,  -954,  1734,  2393,  1319,   -75,  2862,  2393,
     766,  2393,    82,  1389,  -954,   547,   559,   560,   562,   565,
     578,   579,   582,   583,   584,   585,   586,   588,   589,   590,
     687,   891,  -954,  -954,  -954,  -954,  -954,  -954,  -954,  -954,
    -954,    54,    82,    18,  3871,  -954,   592,   792,   580,  -954,
     778,   780,   789,   684,   685,   744,   744,   744,     0,   594,
    -954,   755,  -954,  -954,  -954,   735,   724,   820,   379,   803,
     746,  2064,   142,   878,  -954,   624,   645,  2792,   395,  2958,
    -954,   379,   -34,  -954,   715,  -954,  -954,   657,  -954,   704,
    -954,  -954,  -954,  -954,  -954,  -954,  -954,   379,   379,  -954,
     379,  -954,   895,    19,   280,  3026,   228,  3026,  -954,   192,
    -954,  -954,  1558,  -954,   246,  3871,   859,   861,  3871,  2393,
      30,  -954,   899,  2393,    30,   864,  3871,  -954,  3871,    10,
      10,  -954,  -954,  3871,  -954,    10,   865,  -954,   671,  -954,
     866,  -954,  -954,  2155,  -954,  2233,  2315,    20,  3617,  2393,
     868,   737,  3063,  2593,   710,  -954,  3764,  -954,  -954,   673,
    3101,   581,  3871,   713,  -954,  3063,  2393,  2393,   518,  2393,
    2393,  2393,  2393,  2393,  2393,  2393,  2393,  2659,   874,   566,
    2393,  2393,  2393,  2393,  2393,  2393,  2393,   295,  2830,    82,
    -954,   898,  -954,   898,  -954,  3734,   681,  -954,  -954,  -954,
     -78,   781,  -954,  3286,  3788,   688,   689,   690,   692,   693,
     694,   696,   697,   698,   702,   707,   708,   709,   711,   722,
     814,  1319,  -954,  -954,  -954,  -954,  -954,  -954,  -954,  -954,
    2393,  -954,   670,  2555,   892,  3080,  1657,   267,  -954,  -954,
    -954,  -954,  -954,  -954,  -954,  -954,  -954,  -954,  -954,  -954,
    -954,  -954,  -954,  -954,  -954,  -954,  -954,    82,  2393,   932,
    -954,  3063,   556,   919,   942,   927,   929,  -954,  3063,  3063,
    3063,  3026,  3063,   354,   899,  3436,   945,  -954,   948,   950,
      22,  -954,  -954,  2993,  -954,   899,  3026,  2393,  3871,  -954,
    -954,  2684,   395,   924,  2709,  3026,  -954,   811,  -954,  2709,
     811,   811,   835,  3026,  -954,  -954,  3026,  3026,   669,   379,
    -954,  -954,   442,   926,  -954,  -954,  -954,  -954,    24,  -954,
     734,  -954,  -954,  -954,  -954,   928,  3026,   192,  2862,  -954,
    2760,  1904,  -954,  -954,  -954,  -954,  3871,  2393,  -954,  -954,
    3871,  2393,   556,  -954,  -954,  -954,  -954,   949,   982,  -954,
    2393,  3638,  2393,  3670,  2393,  3691,  -954,  3436,  2393,  3823,
    -954,  -954,  -121,  -954,   965,    39,  -954,   951,  2393,  -954,
    2393,   -33,  -954,  -954,  3712,  3764,  2393,  2659,   874,   946,
     946,   946,   946,   946,   946,  1149,  1181,  2659,  2659,  -954,
     703,  1986,  -954,  -954,  -954,  -954,  -954,   420,   517,   517,
     954,   954,   954,   954,  -954,   952,  -954,  -954,  -954,  -954,
    -954,  -954,    52,  -954,  -954,  -954,  2393,   150,   150,   150,
    -954,   955,  -954,   955,  -954,  -954,  -954,   956,   842,   959,
    -954,  -954,  -954,   956,  -954,  -954,   960,   960,  -954,   955,
     955,    -1,  1319,  -954,  -954,  -954,  -954,  -954,  -954,  -954,
    -954,  -954,  -954,  -954,  -954,  -954,  -954,  -954,   953,  -954,
    2485,   871,   880,   881,   883,  1009,   669,   943,  2393,   -27,
    -954,  2626,  1319,   -43,  -954,  -954,  3871,  -954,  -954,  -954,
     936,  -954,  -954,  1015,  1017,  -954,  3436,    21,    61,  -954,
     831,   744,  -954,  -954,   968,  3436,  3436,  3436,  -954,   405,
     896,    48,  -954,  -954,  -954,   984,  3871,   961,   395,  -954,
    -954,  -954,   538,  -954,  -954,  2709,  -954,  -954,  -954,  -954,
    -954,   442,  -954,  -954,   280,  3026,  -954,   989,  -954,   469,
    -115,   395,  -954,  3871,  3871,  -954,    50,  -954,  -954,  3871,
    2393,  3871,  2393,  3871,  2393,   992,  3871,  -954,  3063,   142,
    2393,    54,  3063,  2393,   -97,  3847,  3130,  2393,  -954,   920,
    1181,   753,  -954,  -954,  -954,  2659,  2659,  2659,  2659,  2659,
    2659,  2659,  2659,    56,  -954,  -954,  -954,  -954,  1904,  -954,
    -954,  -954,  -954,  1031,  -954,  -954,  1033,  -954,  -954,  -954,
    1035,  -954,  -954,  1036,  -954,  -954,  -954,  -954,   807,   556,
    -954,   939,   810,  -954,   669,   669,   669,   669,   917,   657,
    1043,  3299,  1319,  -954,   947,  2659,   568,   365,   669,  1046,
     885,  -954,  -954,  -954,    80,    87,  -954,  -954,  -954,  -954,
    2862,  -954,  1000,  1001,  1002,  -954,  1018,   539,  2993,  3063,
     849,  3026,  2393,   615,  -954,   824,  -954,   132,  2709,   944,
    -954,   556,  3871,  3871,  3871,  -954,  -954,  -954,  3871,  -954,
    -954,  3871,    57,  1022,  -954,  -954,  2393,  3871,  -954,  2659,
     852,   597,   597,  1028,  1028,  1028,  1028,  -954,  -954,   -37,
    1026,    58,  1029,  1032,  -954,   833,  1034,  -954,   657,   657,
     657,   657,   669,   957,  1319,  -954,   995,   611,  2659,  2393,
    1319,   963,   382,  -954,   975,   -30,  -954,  1057,   858,    42,
    1081,  -954,  1082,   556,  -954,  -954,  -954,  -954,  3063,  1069,
    1069,  1069,  1069,  1069,  1069,  1069,  1069,  1069,  1069,   857,
    -954,  -954,    60,  1055,   539,  -954,  3871,  2393,  3026,  -954,
     395,  1019,   976,  -954,  -954,  2393,  2393,  3871,   852,  2709,
    -954,  -954,  1093,  -954,  -954,  -954,   873,   657,   669,  -954,
     879,  2659,   774,  3320,  -954,   882,   978,  -954,   996,   988,
    2709,   -12,  1086,  -954,  1106,   556,   986,  -954,  -954,  -954,
    -954,  -954,    64,  -954,  1116,  1119,   958,  1122,  1124,  1125,
    1126,  1128,  1132,  1121,   539,  -954,  3063,  -954,   902,  -954,
    -954,  3871,  1099,  2393,  2393,  -954,  3871,    65,  1101,  -954,
     657,  -954,   830,  1319,  1319,  -954,   908,  1020,   909,  -115,
    -954,  -954,  -954,   296,  -954,  -954,  -954,  -954,  -954,  -954,
    -954,  -954,  -954,  -954,  -954,  -954,  -954,  -954,  -954,    74,
     539,  3026,   910,  3871,  -954,  -954,  1319,  1044,  -954,  -954,
     914,  -954,   667,  -954,  -954,  -954,  -954,    -6,  -954,  -954,
     915,  1049,  1102,  -954,  -954,  1131,  1133,  -954,  3026,  1109,
     923,  1155,  1158,  1123,   930,  -954,  -954,   964,  3026,  -954,
    1139,  1127,  1162,  -954,  -954
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -954,  -954,  -954,   967,  -312,  -954,  -616,  -357,  -234,   732,
     422,  -954,  -954,  -954,   430,  -954,   -20,  1145,  -954,  -954,
    -954,  -954,    31,    35,  -954,   271,  -954,  -954,  -954,  -954,
    -954,   -35,    28,    38,    45,  -954,  -176,  -136,  -129,  -123,
     -89,   -88,   -83,  -954,  -954,  -954,  -954,   591,  -954,  -954,
      47,  -954,  1061,  -954,   183,   554,  -576,   392,  -954,  -954,
     390,  -251,  -954,  -954,  -954,  -950,  -221,  -954,  1059,  -954,
    -954,  -954,  -954,    37,  -422,  -954,  -954,  -953,  -954,    83,
       6,   130,     9,  -954,   207,   -82,   260,  -715,   991,    -9,
    -954,   723,  -260,  -954,  -954,   309,  -954,  -348,   187,  -210,
    -954,  -954,  -954,  -954,  -954,   419,  -954,  -954,  -183,   505,
    -574,    67,  -243,    68,   763,  -954,   -80,  -954,  -954,  -954,
    -954,  -954,  -954,  -954,  -954,  -134,  1085,  -954,  -954,  -954,
     784,   -54,  -534,  -954,  -437,  -954,  1037,  -954,   756,  -954,
    -954,  -954,   138,  -954,  -954,  -954,  -954,  -954,  -954,  -954,
    -954,  1199,   966,  -954,   962,  -954,  -954,  -954,    15,  -954,
    -954,   843,   925,  -954,  -126,   551,  -954,  -954,  -954,  -954,
    -365,  -954,  -954,  -954,  -954,   587,   288,  -954,  -954,  -954,
    -954,  -954,   602,  -954,  -954,  -954,  -954,   -23,    16,  -954,
      -3,    -2,  -954,  -954,  -954,   366,  -954,  -954,  -954,   836,
    -772,  -954,   647,  -954,   -81,   -79,  -954,   168,   169,   -73,
    -954,   404,  -954,   -72,   -71,   -65,   -62,  -954,  -954,  -954
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -542
static const yytype_int16 yytable[] =
{
     115,   371,   115,   115,   115,   177,    53,   448,   174,   573,
      86,   134,   134,   141,   115,   517,   850,   919,   141,   115,
     659,   571,   199,   364,   365,   366,   178,   480,    38,   133,
     133,    35,   843,   682,   529,    36,   157,    51,   312,   389,
     971,   296,   117,   118,   119,    39,  -318,    47,   305,  -264,
     292,   307,  1143,   968,   292,   316,  1102,  1100,   201,   627,
     684,   726,  1144,   868,  1190,   893,   295,   787,   235,   864,
     987,   927,   478,   309,   241,  1235,  1119,   982,   441,   390,
     921,   132,   135,  1140,   441,   637,   391,   988,   265,  1007,
     123,  1020,   392,   247,     1,   969,   905,  1048,  1114,  1121,
    1080,  1165,   523,   204,   269,  1197,  1214,  1082,   272,     1,
     863,  -318,   676,   116,  -264,  1228,   918,   212,   142,   134,
     289,   874,  1018,   994,   130,   600,   393,   394,   134,  1191,
      54,    85,   395,   399,   404,  1152,   405,   133,  1145,   997,
    1033,   234,   406,   407,   408,   297,   133,   125,   301,   259,
     409,   915,   290,   410,   134,   568,   310,   274,   275,   788,
     572,   601,   569,   160,  1192,   156,   178,   740,  -541,   178,
    -539,   489,   133,   838,   256,   493,  1081,   495,   257,   266,
     258,   504,   200,  1083,  1017,  1019,   479,   507,   202,   233,
     759,   509,   641,   995,   701,   277,  1146,   134,   243,   266,
     701,   134,   662,   677,   163,  -318,   420,   678,    53,   313,
    1065,   141,   115,  1209,  1208,   133,   248,  1236,   293,   133,
     998,   398,   293,    27,   267,   389,   506,   178,   158,   373,
      38,    27,   278,    35,   455,   970,   134,    36,   559,    51,
     134,  -318,   891,   387,  -264,   491,   385,    39,   134,    47,
     386,   134,   397,  1147,   133,   628,   685,   628,   133,   869,
     388,   894,   396,   134,   491,   390,   133,   330,   368,   133,
     134,   332,   391,    54,   465,   490,   922,   369,   392,   494,
     993,   460,   161,   177,   198,  1008,   174,  1021,   460,  1002,
    1003,  1004,  1129,   628,  1115,  1122,   178,   922,  1134,   462,
     178,   922,  1115,   463,   178,   464,   437,   134,   134,   134,
     440,   922,   393,   394,   203,   134,   279,   126,   395,   399,
     404,   453,   405,   280,   281,   133,   133,   133,   406,   407,
     408,   425,    54,   133,   426,     1,   409,   431,   525,   410,
     486,   136,   204,   691,   214,    54,   120,   282,   215,   487,
     432,   121,   217,  1055,   455,    86,   218,   283,   284,   700,
     177,   122,   219,   174,   707,   714,   715,   427,   711,   212,
     220,   716,   115,   606,  1049,   236,   115,   499,   500,   501,
     447,   178,   368,   234,   241,   505,   206,   207,   208,   237,
     759,   369,    12,  -329,   228,   423,   424,   675,    54,   285,
     759,   759,  -329,   626,   244,  1113,   692,   398,   693,   249,
    1069,  1217,  1218,   680,   269,   254,   602,   625,   261,   645,
     425,   878,   428,   426,    19,   263,   882,  1069,   944,   387,
     945,   946,   385,   264,   694,   646,   386,   480,   397,   950,
     951,   952,   433,   134,  1231,   134,   388,   134,   396,   943,
     229,   648,   649,    23,    86,   268,   427,   298,   127,   230,
     231,   133,    54,   666,    27,   674,   302,  1151,   128,  1070,
    1071,   979,   299,   134,  1222,   134,   531,   303,   534,   699,
     115,   129,   137,   701,   759,   306,  1070,  1136,    31,   686,
     687,   133,   138,   133,   560,   560,   560,  1027,   308,   734,
     736,   311,  1034,   844,   306,   139,    54,   315,  1223,   667,
     317,   861,   743,   931,  1224,   318,  1225,   321,   209,   322,
     178,   178,   668,   933,   934,   324,   669,  1226,   326,  1195,
     670,    54,    86,   178,   325,   781,   221,   222,   223,   224,
     225,    54,   955,   690,   327,   696,   746,   747,   748,   328,
     782,   552,   553,   554,   555,   556,   178,   671,   966,   967,
     334,   335,   336,   779,   337,   338,   339,   367,   340,   341,
     849,   561,   563,   564,   764,   661,   765,   766,   759,   759,
     759,   759,   759,   759,   759,   759,   767,   372,   776,   226,
     883,   884,   777,   411,   778,  -171,  -274,  -274,  -274,   948,
     936,   937,   938,   939,   940,   941,   942,   986,   420,  1058,
    1059,  1060,  1061,  -172,   415,   856,   857,   858,   845,   860,
     417,  1089,   217,  1075,   562,   562,   562,   131,   759,   178,
     856,   938,   939,   940,   941,   942,   178,   178,   178,   134,
     178,   416,  1013,   936,   937,   938,   939,   940,   941,   942,
     421,   178,   667,    85,   134,   422,   435,   133,   455,   134,
     436,   439,   134,   134,   445,   668,   438,   134,   441,   669,
     443,   134,   133,   670,   134,   134,   444,   666,   763,   451,
     133,   879,   759,   454,  1012,   133,   467,    54,   468,   886,
     470,   471,   133,   133,   134,   898,   115,  1127,   134,   472,
     671,  1040,  1041,  1042,  1043,  1044,  1045,  1046,  1047,   859,
     502,   759,   133,   638,   639,   640,   133,  -274,   474,   475,
     476,    54,   935,   477,   875,   492,  -274,   349,  -274,   667,
     831,   832,   833,   834,   835,   936,   937,   938,   939,   940,
     941,   942,   668,   508,   888,   889,   669,   521,   522,   645,
     670,  1067,  1090,  1091,  1092,   295,  1093,     1,  1094,  -134,
    1068,  1107,   535,  1180,   897,   646,  1095,  1096,  1097,   557,
      86,  1098,  1039,   558,   759,  1110,   647,   671,  -540,   212,
     604,   648,   649,   608,   629,   936,   937,   938,   939,   940,
     941,   942,   623,    27,   447,   609,   610,   630,   611,   447,
     836,   612,   632,  1131,   633,  1118,   936,   937,   938,   939,
     940,   941,   942,   634,   613,   614,   455,   631,   615,   616,
     617,   618,   619,  1183,   620,   621,   622,   635,   636,   637,
     447,   643,   644,   652,  1132,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     653,  1212,   936,   937,   938,   939,   940,   941,   942,  1155,
    1156,  1157,  1158,  1159,  1160,  1161,  1162,  1163,   763,  1216,
     655,   660,   664,   134,   936,   937,   938,   939,   940,   941,
     942,   531,   656,   134,   678,   734,   679,  1182,   683,  1030,
     704,   133,   705,   708,   712,   717,   737,   719,   718,   730,
     738,   133,   731,   740,   761,   208,   178,   789,   786,   828,
     178,   179,   841,   851,   813,   814,   815,  1029,   816,   817,
     818,     1,   819,   820,   821,   374,   354,   847,   822,   375,
     376,   377,    54,   823,   824,   825,   852,   826,     4,   378,
       6,   853,   414,   854,   455,   455,   455,   455,   827,   865,
     880,   180,   866,  1015,   867,   877,   885,   892,   455,   896,
     379,   895,    54,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,   556,   856,   736,   908,    12,   920,
     907,   923,   556,   947,   958,   953,   956,  1084,   115,   960,
     963,   974,   972,   380,   181,   182,   178,   178,   980,   134,
     975,   976,  1234,   977,   978,   447,   134,   381,   989,   991,
      19,   992,  1001,  1000,  1009,  1038,   485,  1105,   488,  1006,
    1016,  1011,   183,  1025,   133,   184,  1050,   496,  1051,   498,
    1052,  1053,   455,  1054,  1056,   503,  1057,  1062,  1063,    23,
    1076,    54,  1066,  1077,  1085,  1086,  1087,  1103,  1088,   518,
     382,  1108,  1116,   383,  1111,   736,   942,  1120,   185,  1125,
    1123,   144,   145,  1124,  1130,   526,   527,   528,   530,   532,
    1139,  1141,  1126,  1142,    31,   186,   178,  1128,   187,  1135,
     146,  1149,  1150,  1153,  1164,  1166,  1173,  1174,  1178,   565,
     147,  1187,   188,   189,  1186,   148,   134,   574,   455,  1179,
    1193,   603,    54,   605,  1188,  1181,  1194,   134,  1185,  1196,
    1198,  -406,   149,  1199,   133,   190,  1201,   384,  1202,  1207,
    1203,  1204,   150,  1205,   191,   133,  1200,  1206,   134,  1210,
     192,  1211,  1215,   736,  1219,  1221,  1220,   628,   447,  1232,
    1233,  1240,  1238,   193,  1239,  1241,   133,  1242,  1244,  1245,
    1246,   151,  1247,  1252,   178,  1248,  1249,  1254,  1253,   331,
     932,   928,   152,   658,   194,  1229,  1172,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,   556,  1250,  1026,
     242,  1101,   855,   837,    54,   962,   153,   965,   253,  1177,
      54,   370,   697,  1014,  1109,   949,   902,  1189,   663,   134,
     547,   548,   549,   550,   551,   552,   553,   554,   555,   556,
     246,   706,   654,   159,   681,   710,   607,   133,   320,   890,
     862,   497,   461,   848,   469,  1005,   134,   624,   829,     0,
    1137,  1138,     0,   983,     0,   721,   134,   723,   725,   447,
       0,   729,     0,     0,   133,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   133,     0,     0,     0,   744,   745,
     447,   749,   750,   751,   752,   753,   754,   755,   756,  1230,
       0,     0,   768,   769,   770,   771,   772,   773,   774,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1243,     0,     0,     0,
       0,     0,     0,    54,    54,     0,  1251,     0,   333,   334,
     335,   336,     0,   337,   338,   339,     0,   340,   341,   342,
       0,     0,   830,     0,     0,   343,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    54,   344,   345,   510,
       0,     0,     0,     0,     0,   346,   511,     0,     0,     1,
     846,     0,     0,     2,     0,     0,     0,   375,   376,   377,
       0,     0,     0,     0,     0,     0,     4,   378,     6,     0,
       0,     0,     0,   512,     0,     0,     0,     0,     0,   876,
       0,   513,   165,     0,   347,     0,     0,     0,   379,     0,
       0,     0,   166,   167,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   514,    12,     0,     0,     0,
       0,     0,     0,     0,   348,     0,     0,     0,     0,     0,
       0,   380,     0,     0,     0,     0,     0,     0,     0,   903,
       0,     0,     0,   904,     0,   381,     0,     0,    19,   515,
       0,     0,   909,     0,   911,     0,   913,     0,     0,     0,
     916,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     925,     0,   926,     0,     0,     0,     0,    23,   930,     0,
       0,     0,     0,     0,     0,     0,   349,     0,   382,     0,
     131,   383,     0,   414,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   516,   168,   169,     0,     0,
       0,     0,    31,     0,     0,     0,     0,     0,   565,     0,
       0,   458,     0,     0,     0,     0,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,   350,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,     0,     0,     0,     0,   384,     0,     0,     0,   171,
     172,    87,     0,     0,     0,     0,     0,     0,     0,     0,
     981,     0,     0,     0,     0,     0,   536,   537,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,     0,     0,     0,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,     0,     0,     0,   698,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1022,     0,  1023,     0,  1024,     0,     0,     0,
       0,     0,  1028,     0,     0,  1031,     0,     0,     0,  1037,
     333,   334,   335,   336,     0,   337,   338,   339,     0,   340,
     341,   342,     0,     0,     0,     0,     0,   343,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   344,
     345,   481,     0,     0,     0,     0,     0,   346,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,     0,     0,   289,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   347,    87,     0,     0,
       0,     0,     0,     0,  1106,     0,     0,     0,   454,     0,
       0,     0,     0,     0,     0,     0,     0,   290,     0,     0,
       0,     0,     0,     0,     0,     0,   348,     0,  1117,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,     0,     0,     0,     0,     0,     0,
       0,  1133,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     333,   334,   335,   336,     0,   337,   338,   339,   349,   340,
     341,   342,     0,     0,     0,     0,     0,   343,     0,  1171,
       0,     0,     0,     0,     0,     0,     0,  1176,  1031,   344,
     345,     0,     0,     0,     0,     0,     0,   346,   412,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,   350,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,     0,     0,     0,   347,     0,     0,     0,
       0,     0,     0,     0,     0,   414,  1213,   333,   334,   335,
     336,     0,   337,   338,   339,     0,   340,   341,   342,     0,
       0,     0,     0,     0,   343,     0,   348,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   344,   345,   481,     0,
       0,     0,     0,     0,   346,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   347,     0,     0,     0,     0,   349,   333,
     334,   335,   336,     0,   337,   338,   339,     0,   340,   341,
     342,     0,     0,     0,     0,     0,   343,     0,     0,     0,
       0,     0,     0,   348,     0,     0,     0,     0,   344,   345,
       0,     0,     0,     0,     0,     0,   346,     0,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,   350,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   347,     0,   333,   334,   335,
     336,   657,   337,   338,   339,   349,   340,   341,   342,     0,
       0,     0,     0,     0,   343,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   348,   344,   345,     0,     0,
       0,     0,     0,     0,   346,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,   350,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
       0,     0,     0,   347,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,   349,   333,   334,
     335,   336,     0,   337,   338,   339,     0,   340,   341,   342,
       0,     0,     0,   348,     0,   343,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   344,   345,     0,
       0,     0,     0,     0,     0,   346,     0,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,   350,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   347,   349,   333,   334,   335,   336,
       0,   337,   338,   339,     0,   340,   341,   342,     0,     0,
       0,     0,     0,   343,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   348,   344,   345,     0,   720,     0,
       0,     0,     0,   346,     0,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,   350,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   347,     0,     0,     0,     0,     0,   333,   334,
     335,   336,     0,   337,   338,   339,   349,   340,   341,   342,
       0,     0,     0,     0,     0,   343,     0,     0,     0,     0,
       0,     0,   348,     0,     0,     0,   722,   344,   345,     0,
       0,     0,     0,     0,     0,   346,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,   350,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,     0,     0,     0,   347,     0,   333,   334,   335,   336,
       0,   337,   338,   339,   349,   340,   341,   342,     0,     0,
       0,     0,     0,   343,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   348,   344,   345,     0,   724,     0,
       0,     0,     0,   346,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,   350,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,     0,
       0,     0,   347,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   349,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   348,   536,   537,   538,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,   556,     0,     0,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,   350,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   165,     0,     0,   349,     0,     0,     0,     0,     0,
       0,   166,   167,   536,   537,   538,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,   556,     0,     0,   165,     0,     0,     0,
       0,     0,     0,     0,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,   350,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   333,
     334,   335,   336,     1,   337,   338,   339,     0,   340,   341,
     342,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   757,   758,
       0,     0,   333,   334,   335,   336,   346,   337,   338,   339,
       0,   340,   341,   342,     0,   168,   169,     0,     0,     0,
       0,   985,     0,     0,     0,     0,     0,   131,     0,     0,
       0,   757,   758,     0,     0,     0,     0,     0,     0,   346,
       0,     0,     0,     0,     0,   347,     0,     0,     0,   170,
       0,     0,   131,     0,     0,     0,     0,     0,     0,     0,
       0,   973,     0,     0,     0,   217,     0,     0,   171,   172,
     173,     0,     0,     0,     0,   348,     0,     0,   347,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   445,
       0,     0,     0,     0,   665,   838,     0,     0,     0,     0,
       0,     0,    27,   131,     0,     0,     0,     0,   348,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,     0,   131,     0,   349,     0,     0,
     445,     0,     0,     0,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,     0,
     349,     0,     0,   165,     0,     0,     0,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,   350,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   665,   899,   780,    87,     0,     0,     0,     0,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
     350,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   131,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   165,     0,     0,     0,
       0,     0,     0,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   673,   131,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   165,     0,     0,     0,
       0,     0,     0,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553,   554,   555,   556,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,   556,
       0,     0,   739,     0,     0,     0,     0,   870,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553,   554,   555,   556,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,     0,     0,     0,     0,   842,     0,     0,     0,
       0,     0,     0,     0,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1036,   536,   537,   538,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,   556,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553,   554,   555,   556,   790,
     791,   792,     0,     0,     0,     0,   793,     0,     0,     0,
       0,     0,     0,     0,   794,     0,     0,     0,   795,   796,
       0,   797,     0,     0,     0,     0,     0,   798,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   799,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   800,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   801,     0,   802,     0,
     803,     0,     0,     1,     0,     0,     0,     2,     0,     0,
       0,     0,   804,     0,     0,     0,     3,     0,     0,     0,
       4,     5,     6,     0,     0,     0,     0,     0,     0,     0,
     805,     0,     7,     0,     0,     8,     0,     0,     0,     0,
       0,     0,     0,   806,   807,   808,     9,     0,     0,     0,
      10,     0,     0,   809,   810,  1064,     0,    11,     0,     0,
      12,    13,    14,     0,     0,    15,     0,     0,     0,     0,
       0,    16,     0,    17,     0,     0,  1184,     0,     0,   790,
     791,   792,    18,     0,     0,     0,   793,     0,     0,     0,
       0,     0,    19,   678,   794,     0,     0,     0,   795,   796,
       0,   797,    20,     0,     0,     0,     0,   798,     0,     0,
       0,     0,     0,     0,     0,     0,    21,   799,     0,     0,
      22,    23,     0,     0,    24,     0,    25,    26,     0,     0,
       0,     0,    27,     0,   800,    28,    29,     0,     0,     0,
      30,     0,     0,     0,     0,     0,   801,     0,   802,     0,
     803,     0,     0,     0,     0,     0,    31,     0,     0,     0,
       0,     0,   804,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     805,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   806,   807,   808,     0,     0,     0,     0,
       0,     0,     0,   809,   810,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,   556,   536,   537,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   727,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553,   554,   555,   556,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,   556,
     728,   537,   538,   539,   540,   541,   542,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
     556,   910,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,   556,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   912,   538,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,   556,     0,   914,   783,   536,   537,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,     0,     0,     0,
       0,     0,   784,     0,     0,     0,     0,     0,     0,     0,
     812,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,     0,     0,   917,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,   556,     0,     0,  1035,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,   556
};

static const yytype_int16 yycheck[] =
{
       2,   211,     4,     5,     6,    28,     0,   250,    28,   374,
       1,    13,    14,    16,    16,   327,   632,   732,    21,    21,
     442,   369,    31,   206,   207,   208,    28,   287,     0,    13,
      14,     0,   606,   470,   346,     0,    21,     0,    28,   215,
     812,   167,     4,     5,     6,     0,    41,     0,   174,    41,
      24,   177,    10,    54,    24,   189,  1009,  1007,   106,    41,
      41,    41,    20,    41,    76,    41,    40,   145,   122,   645,
     842,   104,   123,    30,   128,    81,   113,   104,   199,   215,
      41,    13,    14,   113,   199,    85,   215,   130,   146,    41,
     202,    41,   215,     3,    40,    96,   712,    41,    41,    41,
      20,    41,    40,   200,   158,    41,    41,    20,   146,    40,
     644,   106,   146,     3,   106,    41,   237,   112,   234,   121,
      68,   655,   237,   102,   113,   200,   215,   215,   130,   141,
       0,     1,   215,   215,   215,  1088,   215,   121,    96,    78,
     237,     4,   215,   215,   215,   168,   130,     9,   171,   143,
     215,   727,   100,   215,   156,     5,   113,   204,   205,   237,
     370,   236,    12,    25,   176,   184,   168,   200,    40,   171,
      42,   297,   156,   200,   143,   301,    96,   303,   143,   237,
     143,   315,     0,    96,   899,   900,   237,   321,   236,   121,
     547,   325,   192,   172,   237,     3,   154,   199,   130,   237,
     237,   203,   445,   237,   122,   200,   229,   237,   202,   199,
     982,   214,   214,  1166,  1164,   199,   126,   223,   192,   203,
     159,   215,   192,   169,   156,   401,    89,   229,   194,   214,
     202,   169,    40,   202,   254,   236,   238,   202,   169,   202,
     242,   236,   679,   215,   236,   299,   215,   202,   250,   202,
     215,   253,   215,   211,   238,   237,   237,   237,   242,   237,
     215,   237,   215,   265,   318,   401,   250,   199,   136,   253,
     272,   203,   401,   143,   268,   298,   237,   145,   401,   302,
     856,   265,   117,   306,   191,   237,   306,   237,   272,   865,
     866,   867,  1064,   237,   237,   237,   298,   237,  1070,   268,
     302,   237,   237,   268,   306,   268,   238,   309,   310,   311,
     242,   237,   401,   401,   130,   317,   124,    43,   401,   401,
     401,   253,   401,   131,   132,   309,   310,   311,   401,   401,
     401,    66,   202,   317,    69,    40,   401,   125,   332,   401,
       5,    43,   200,   115,   153,   215,   179,   155,    72,    14,
     138,   184,    41,   969,   374,   346,    41,   165,   166,   113,
     383,   194,    56,   383,   490,   499,   500,   102,   494,   112,
      40,   505,   374,   382,   948,     3,   378,   309,   310,   311,
     250,   383,   136,     4,   438,   317,    15,    16,    17,   126,
     747,   145,    97,   136,   116,    90,    91,   451,   268,   207,
     757,   758,   145,   412,     4,  1021,   178,   401,   180,   126,
      45,  1183,  1184,   467,   468,   195,   378,   411,   160,    14,
      66,   664,   157,    69,   129,   194,   669,    45,     8,   401,
      10,    11,   401,   148,   206,    30,   401,   697,   401,   787,
     788,   789,   230,   445,  1216,   447,   401,   449,   401,   761,
     172,    46,    47,   158,   445,   113,   102,    42,   184,   181,
     182,   445,   332,   447,   169,   449,    42,  1083,   194,   104,
     105,   836,   112,   475,  1189,   477,   346,    14,   348,   482,
     482,   207,   184,   237,   841,   237,   104,   105,   193,   209,
     210,   475,   194,   477,   364,   365,   366,   919,     3,   522,
     523,   184,   924,   236,   237,   207,   376,   226,   212,   114,
     146,   157,   535,   747,   218,   112,   220,   226,   147,   136,
     522,   523,   127,   757,   758,   235,   131,   231,   203,  1145,
     135,   401,   523,   535,   233,   558,    60,    61,    62,    63,
      64,   411,   793,   475,    40,   477,    28,    29,    30,   201,
     559,    34,    35,    36,    37,    38,   558,   162,   809,   810,
       4,     5,     6,   557,     8,     9,    10,    77,    12,    13,
      14,   364,   365,   366,     8,   445,    10,    11,   935,   936,
     937,   938,   939,   940,   941,   942,    20,   193,   557,   113,
     670,   671,   557,   112,   557,    65,    15,    16,    17,   782,
      32,    33,    34,    35,    36,    37,    38,   841,   631,   974,
     975,   976,   977,    65,     5,   638,   639,   640,   627,   642,
      65,    82,    41,   988,   364,   365,   366,     3,   985,   631,
     653,    34,    35,    36,    37,    38,   638,   639,   640,   641,
     642,     5,   885,    32,    33,    34,    35,    36,    37,    38,
     143,   653,   114,   523,   656,   183,    40,   641,   678,   661,
      20,   125,   664,   665,    40,   127,   237,   669,   199,   131,
     109,   673,   656,   135,   676,   677,   109,   661,   548,   237,
     664,   665,  1039,    14,   146,   669,   192,   557,   237,   673,
     113,     5,   676,   677,   696,   698,   698,  1062,   700,    40,
     162,   935,   936,   937,   938,   939,   940,   941,   942,   641,
       4,  1068,   696,   425,   426,   427,   700,   136,    40,    40,
      40,   591,    19,    40,   656,    24,   145,   171,   147,   114,
      60,    61,    62,    63,    64,    32,    33,    34,    35,    36,
      37,    38,   127,     5,   676,   677,   131,    84,   172,    14,
     135,   985,   213,   214,   215,    40,   217,    40,   219,    40,
     192,   146,    42,  1128,   696,    30,   227,   228,   229,    40,
     761,   232,    19,    42,  1131,  1018,    41,   162,    42,   112,
      14,    46,    47,   236,   192,    32,    33,    34,    35,    36,
      37,    38,   105,   169,   664,   236,   236,     5,   236,   669,
     130,   236,    24,   192,    24,  1039,    32,    33,    34,    35,
      36,    37,    38,    24,   236,   236,   836,   237,   236,   236,
     236,   236,   236,    49,   236,   236,   236,   143,   143,    85,
     700,   237,    77,   109,  1068,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
      40,  1173,    32,    33,    34,    35,    36,    37,    38,  1090,
    1091,  1092,  1093,  1094,  1095,  1096,  1097,  1098,   748,    49,
      77,     3,   237,   885,    32,    33,    34,    35,    36,    37,
      38,   761,   146,   895,   237,   918,   192,  1131,     3,   922,
      41,   885,    41,     4,    40,    40,   196,    41,   237,    41,
     237,   895,   175,   200,    40,    17,   918,   136,   237,   105,
     922,     3,    30,     4,   236,   236,   236,   921,   236,   236,
     236,    40,   236,   236,   236,    44,   204,     5,   236,    48,
      49,    50,   812,   236,   236,   236,     4,   236,    57,    58,
      59,    24,   220,    24,   974,   975,   976,   977,   236,    14,
     149,    43,    14,   895,    14,    41,   131,    41,   988,    41,
      79,   237,   842,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,  1008,  1009,     5,    97,    24,
      41,    40,    38,    41,   152,    40,    40,  1000,  1000,    40,
      40,   130,    49,   112,    86,    87,  1008,  1009,    65,  1011,
     130,   130,  1222,   130,     5,   885,  1018,   126,    82,     4,
     129,     4,    54,   192,    40,   105,   294,  1011,   296,   133,
      41,    70,   114,    41,  1018,   117,     5,   305,     5,   307,
       5,     5,  1062,   236,   105,   313,   236,   130,     5,   158,
       4,   921,   105,   168,    54,    54,    54,   208,    40,   327,
     169,   237,    40,   172,   120,  1088,    38,    41,   150,   236,
      41,    68,    69,    41,    79,   343,   344,   345,   346,   347,
     105,    24,    48,   225,   193,   167,  1088,   130,   170,   126,
      87,    10,    10,    24,   237,    40,    77,   121,     5,   367,
      97,   105,   184,   185,   126,   102,  1108,   375,  1128,   236,
      24,   379,   982,   381,   126,   236,    10,  1119,   236,   133,
       4,   203,   119,     4,  1108,   207,     4,   236,     4,     8,
       5,     5,   129,     5,   216,  1119,   178,     5,  1140,   237,
     222,    42,    41,  1166,   236,   236,   126,   237,  1018,   105,
     236,    49,   237,   235,   105,    24,  1140,    24,    49,   236,
       5,   158,     4,    24,  1166,    42,   236,     5,    41,   202,
     748,   741,   169,   441,    29,  1210,  1108,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,   224,   918,
     129,  1008,   638,   602,  1064,   803,   193,   807,   139,  1116,
    1070,   210,   479,   894,  1017,   786,   701,  1140,   445,  1211,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
     135,   489,   438,    24,   468,   493,   383,  1211,   191,   678,
     643,   306,   266,   631,   272,   869,  1238,   401,   591,    -1,
    1072,  1072,    -1,   839,    -1,   513,  1248,   515,   516,  1119,
      -1,   519,    -1,    -1,  1238,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1248,    -1,    -1,    -1,   536,   537,
    1140,   539,   540,   541,   542,   543,   544,   545,   546,  1211,
      -1,    -1,   550,   551,   552,   553,   554,   555,   556,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1238,    -1,    -1,    -1,
      -1,    -1,    -1,  1183,  1184,    -1,  1248,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    14,
      -1,    -1,   600,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1216,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,    40,
     628,    -1,    -1,    44,    -1,    -1,    -1,    48,    49,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,    -1,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,   657,
      -1,    76,     3,    -1,    79,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    97,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,
      -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   707,
      -1,    -1,    -1,   711,    -1,   126,    -1,    -1,   129,   134,
      -1,    -1,   720,    -1,   722,    -1,   724,    -1,    -1,    -1,
     728,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     738,    -1,   740,    -1,    -1,    -1,    -1,   158,   746,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   171,    -1,   169,    -1,
       3,   172,    -1,   761,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   190,   117,   118,    -1,    -1,
      -1,    -1,   193,    -1,    -1,    -1,    -1,    -1,   786,    -1,
      -1,    34,    -1,    -1,    -1,    -1,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,    -1,    -1,    -1,    -1,   236,    -1,    -1,    -1,   170,
     171,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     838,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    -1,    -1,    -1,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,    -1,    -1,    -1,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   910,    -1,   912,    -1,   914,    -1,    -1,    -1,
      -1,    -1,   920,    -1,    -1,   923,    -1,    -1,    -1,   927,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    40,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,     3,    -1,    -1,
      -1,    -1,    -1,    -1,  1012,    -1,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,  1036,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1069,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,   171,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,  1107,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1115,  1116,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1173,  1174,     3,     4,     5,
       6,    -1,     8,     9,    10,    -1,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    -1,   109,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    40,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,   171,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,   109,    -1,    -1,    -1,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,   171,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   109,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
      -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   169,    -1,   171,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    14,
      -1,    -1,    -1,   109,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,   171,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    32,    33,    -1,   113,    -1,
      -1,    -1,    -1,    40,    -1,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,   171,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,   109,    -1,    -1,    -1,   113,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,    -1,    -1,    -1,    79,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,   171,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    32,    33,    -1,   113,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   109,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,
      -1,    13,    14,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,     3,
       4,     5,     6,    40,     8,     9,    10,    -1,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      -1,    -1,     3,     4,     5,     6,    40,     8,     9,    10,
      -1,    12,    13,    14,    -1,   117,   118,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,   151,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   236,    -1,    -1,    -1,    41,    -1,    -1,   170,   171,
     172,    -1,    -1,    -1,    -1,   109,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    70,   200,    -1,    -1,    -1,    -1,
      -1,    -1,   169,     3,    -1,    -1,    -1,    -1,   109,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,    -1,     3,    -1,   171,    -1,    -1,
      40,    -1,    -1,    -1,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,    -1,
     171,    -1,    -1,     3,    -1,    -1,    -1,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,    70,   103,    34,     3,    -1,    -1,    -1,    -1,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,     3,    -1,    -1,    -1,
      -1,    -1,    -1,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,    70,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,     3,    -1,    -1,    -1,
      -1,    -1,    -1,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,    -1,    41,    -1,    -1,    -1,    -1,   154,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,    -1,    -1,    -1,    -1,   186,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   186,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    73,
      74,    75,    -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,    92,    93,
      -1,    95,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   128,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   140,    -1,   142,    -1,
     144,    -1,    -1,    40,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,   156,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      57,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     174,    -1,    69,    -1,    -1,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   187,   188,   189,    83,    -1,    -1,    -1,
      87,    -1,    -1,   197,   198,   186,    -1,    94,    -1,    -1,
      97,    98,    99,    -1,    -1,   102,    -1,    -1,    -1,    -1,
      -1,   108,    -1,   110,    -1,    -1,   186,    -1,    -1,    73,
      74,    75,   119,    -1,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    -1,   129,   237,    88,    -1,    -1,    -1,    92,    93,
      -1,    95,   139,    -1,    -1,    -1,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   153,   111,    -1,    -1,
     157,   158,    -1,    -1,   161,    -1,   163,   164,    -1,    -1,
      -1,    -1,   169,    -1,   128,   172,   173,    -1,    -1,    -1,
     177,    -1,    -1,    -1,    -1,    -1,   140,    -1,   142,    -1,
     144,    -1,    -1,    -1,    -1,    -1,   193,    -1,    -1,    -1,
      -1,    -1,   156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   187,   188,   189,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   197,   198,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
     113,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,   113,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    -1,   113,    71,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    -1,    -1,    41,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    -1,    41,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    40,    44,    53,    57,    58,    59,    69,    72,    83,
      87,    94,    97,    98,    99,   102,   108,   110,   119,   129,
     139,   153,   157,   158,   161,   163,   164,   169,   172,   173,
     177,   193,   239,   240,   241,   260,   261,   264,   270,   272,
     273,   281,   282,   283,   284,   286,   287,   288,   289,   305,
     308,   311,   313,   318,   319,   320,   321,   322,   324,   355,
     358,   359,   366,   371,   373,   375,   378,   382,   383,   384,
     385,   388,   393,   395,   398,   406,   409,   410,   411,   417,
     430,   431,   455,   456,   457,   319,   320,     3,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   271,   428,   429,     3,   271,   271,   271,
     179,   184,   194,   202,   380,   380,    43,   184,   194,   207,
     113,     3,   351,   426,   429,   351,    43,   184,   194,   207,
     396,   428,   234,   357,    68,    69,    87,    97,   102,   119,
     129,   158,   169,   193,   389,   390,   184,   396,   194,   389,
     380,   117,   386,   122,   327,     3,    13,    14,   117,   118,
     151,   170,   171,   172,   254,   399,   400,   425,   429,     3,
      43,    86,    87,   114,   117,   150,   167,   170,   184,   185,
     207,   216,   222,   235,   255,   362,   365,   427,   191,   327,
       0,   106,   236,   130,   200,   312,    15,    16,    17,   147,
     340,   341,   112,   337,   153,    72,   434,    41,    41,    56,
      40,    60,    61,    62,    63,    64,   113,   285,   116,   172,
     181,   182,   418,   351,     4,   369,     3,   126,   290,   367,
     368,   369,   290,   351,     4,   364,   364,     3,   126,   126,
     306,   369,   372,   306,   195,   407,   260,   261,   311,   318,
     356,   160,   391,   194,   148,   146,   237,   351,   113,   369,
     376,   377,   146,   394,   204,   205,   387,     3,    40,   124,
     131,   132,   155,   165,   166,   207,   328,   329,   330,    68,
     100,   346,    24,   192,   402,    40,   402,   425,    42,   112,
     374,   425,    42,    14,   401,   402,   237,   402,     3,    30,
     113,   184,    28,   199,   363,   226,   363,   146,   112,   361,
     374,   226,   136,   360,   235,   233,   203,    40,   201,   381,
     351,   241,   351,     3,     4,     5,     6,     8,     9,    10,
      12,    13,    14,    20,    32,    33,    40,    79,   109,   171,
     221,   243,   244,   245,   247,   249,   254,   255,   256,   257,
     319,   425,   426,   429,   346,   346,   346,    77,   136,   145,
     326,   337,   193,   396,    44,    48,    49,    50,    58,    79,
     112,   126,   169,   172,   236,   260,   261,   270,   272,   274,
     275,   276,   277,   278,   279,   280,   288,   311,   318,   323,
     435,   436,   437,   441,   442,   443,   447,   451,   452,   453,
     454,   112,    41,   242,   247,     5,     5,    65,   419,   420,
     425,   143,   183,    90,    91,    66,    69,   102,   157,   412,
     413,   125,   138,   230,   379,    40,    20,   351,   237,   125,
     351,   199,   325,   109,   109,    40,   307,   319,   350,   351,
     352,   237,   309,   351,    14,   254,   403,   408,    34,   392,
     426,   390,   260,   261,   311,   318,   397,   192,   237,   392,
     113,     5,    40,   331,    40,    40,    40,    40,   123,   237,
     330,    34,   247,   347,   348,   247,     5,    14,   247,   402,
     425,   369,    24,   402,   425,   402,   247,   400,   247,   351,
     351,   351,     4,   247,   363,   351,    89,   363,     5,   363,
      34,    41,    68,    76,   100,   134,   190,   242,   247,   259,
     338,    84,   172,    40,   314,   318,   247,   247,   247,   242,
     247,   319,   247,   250,   319,    42,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    40,    42,   169,
     319,   322,   324,   322,   322,   247,   342,   343,     5,    12,
     335,   335,   337,   408,   247,   260,   261,   270,   272,   274,
     275,   276,   277,   278,   279,   280,   288,   311,   318,   323,
     438,   439,   440,   442,   443,   447,   451,   452,   453,   454,
     200,   236,   271,   247,    14,   247,   327,   399,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   105,   437,   318,   327,    41,   237,   192,
       5,   237,    24,    24,    24,   143,   143,    85,   414,   414,
     414,   192,   414,   237,    77,    14,    30,    41,    46,    47,
     432,   433,   109,    40,   368,    77,   146,     7,   247,   312,
       3,   319,   350,   352,   237,    70,   426,   114,   127,   131,
     135,   162,   353,    70,   426,   369,   146,   237,   237,   192,
     369,   376,   372,     3,    41,   237,   209,   210,   332,   333,
     351,   115,   178,   180,   206,   334,   351,   329,    70,   428,
     113,   237,   326,   336,    41,    41,   247,   402,     4,   370,
     247,   402,    40,   404,   363,   363,   363,    40,   237,    41,
     113,   247,   113,   247,   113,   247,    41,    70,   113,   247,
      41,   175,   262,   263,   425,   315,   425,   196,   237,    41,
     200,   251,   252,   425,   247,   247,    28,    29,    30,   247,
     247,   247,   247,   247,   247,   247,   247,    32,    33,   245,
     246,    40,   248,   319,     8,    10,    11,    20,   247,   247,
     247,   247,   247,   247,   247,   258,   260,   261,   311,   318,
      34,   425,   327,    71,    98,   344,   237,   145,   237,   136,
      73,    74,    75,    80,    88,    92,    93,    95,   101,   111,
     128,   140,   142,   144,   156,   174,   187,   188,   189,   197,
     198,   294,    52,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   105,   440,
     247,    60,    61,    62,    63,    64,   130,   285,   200,   448,
     449,    30,   186,   348,   236,   327,   247,     5,   420,    14,
     244,     4,     4,    24,    24,   293,   425,   425,   425,   351,
     425,   157,   413,   370,   294,    14,    14,    14,    41,   237,
     154,   291,   292,   293,   370,   351,   247,    41,   350,   426,
     149,   354,   350,   354,   354,   131,   426,   310,   351,   351,
     403,   372,    41,    41,   237,   237,    41,   351,   428,   103,
     349,   350,   347,   247,   247,   244,   405,    41,     5,   247,
     113,   247,   113,   247,   113,   294,   247,    41,   237,   325,
      24,    41,   237,    40,   316,   247,   247,   104,   252,   253,
     247,   246,   248,   246,   246,    19,    32,    33,    34,    35,
      36,    37,    38,   242,     8,    10,    11,    41,   346,   343,
     335,   335,   335,    40,   299,   299,    40,   295,   152,   297,
      40,   296,   295,    40,   298,   298,   299,   299,    54,    96,
     236,   438,    49,   236,   130,   130,   130,   130,     5,   408,
      65,   247,   104,   449,   450,    55,   246,   438,   130,    82,
     421,     4,     4,   294,   102,   172,   416,    78,   159,   415,
     192,    54,   294,   294,   294,   433,   133,    41,   237,    40,
     265,    70,   146,   350,   333,   351,    41,   325,   237,   325,
      41,   237,   247,   247,   247,    41,   263,   312,   247,   318,
     425,   247,   317,   237,   312,    41,   186,   247,   105,    19,
     246,   246,   246,   246,   246,   246,   246,   246,    41,   348,
       5,     5,     5,     5,   236,   244,   105,   236,   408,   408,
     408,   408,   130,     5,   186,   438,   105,   246,   192,    45,
     104,   105,   444,   445,   446,   408,     4,   168,   422,   300,
      20,    96,    20,    96,   428,    54,    54,    54,    40,    82,
     213,   214,   215,   217,   219,   227,   228,   229,   232,   302,
     303,   292,   315,   208,   266,   426,   247,   146,   237,   336,
     350,   120,   339,   244,    41,   237,    40,   247,   246,   113,
      41,    41,   237,    41,    41,   236,    48,   408,   130,   438,
      79,   192,   246,   247,   438,   126,   105,   445,   446,   105,
     113,    24,   225,    10,    20,    96,   154,   211,   301,    10,
      10,   244,   315,    24,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   237,    41,    40,   267,   268,   269,
     303,   247,   351,    77,   121,   345,   247,   317,     5,   236,
     408,   236,   246,    49,   186,   236,   126,   105,   126,   349,
      76,   141,   176,    24,    10,   244,   133,    41,     4,     4,
     178,     4,     4,     5,     5,     5,     5,     8,   303,   315,
     237,    42,   242,   247,    41,    41,    49,   438,   438,   236,
     126,   236,   325,   212,   218,   220,   231,   423,    41,   269,
     351,   438,   105,   236,   337,    81,   223,   424,   237,   105,
      49,    24,    24,   351,    49,   236,     5,     4,    42,   236,
     224,   351,    24,    41,     5
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
      case 239: /* "sql_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 240: /* "stmt_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 241: /* "stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 242: /* "expr_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 243: /* "column_ref" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 244: /* "expr_const" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 245: /* "simple_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 246: /* "arith_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 247: /* "expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 248: /* "in_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 249: /* "case_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 250: /* "case_arg" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 251: /* "when_clause_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 252: /* "when_clause" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 253: /* "case_default" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 254: /* "array_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 255: /* "func_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 256: /* "when_func" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 257: /* "when_func_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 258: /* "when_func_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 259: /* "distinct_or_all" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 260: /* "delete_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 261: /* "update_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 262: /* "update_asgn_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 263: /* "update_asgn_factor" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 264: /* "create_index_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 265: /* "opt_index_columns" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 266: /* "opt_storing" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 267: /* "opt_storing_columns" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 268: /* "opt_index_option_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 269: /* "index_option" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 270: /* "cursor_declare_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 271: /* "cursor_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 272: /* "cursor_open_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 273: /* "cursor_fetch_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 274: /* "cursor_fetch_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 275: /* "cursor_fetch_next_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 276: /* "cursor_fetch_first_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 277: /* "cursor_fetch_prior_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 278: /* "cursor_fetch_last_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 279: /* "cursor_fetch_absolute_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 280: /* "cursor_fetch_relative_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 281: /* "fetch_prior_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 282: /* "fetch_first_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 283: /* "fetch_last_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 284: /* "fetch_relative_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 285: /* "next_or_prior" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 286: /* "fetch_absolute_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 287: /* "fetch_fromto_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 288: /* "cursor_close_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 289: /* "create_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 290: /* "opt_if_not_exists" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 291: /* "table_element_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 292: /* "table_element" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 293: /* "column_definition" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 294: /* "data_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 295: /* "opt_decimal" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 296: /* "opt_float" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 297: /* "opt_precision" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 298: /* "opt_time_precision" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 299: /* "opt_char_length" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 300: /* "opt_column_attribute_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 301: /* "column_attribute" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 302: /* "opt_table_option_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 303: /* "table_option" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 304: /* "opt_equal_mark" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 305: /* "drop_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 306: /* "opt_if_exists" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 307: /* "table_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 308: /* "drop_index_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 309: /* "index_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 310: /* "table_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 311: /* "insert_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 312: /* "opt_when" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 313: /* "replace_or_insert" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 314: /* "opt_insert_columns" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 315: /* "column_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 316: /* "insert_vals_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 317: /* "insert_vals" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 318: /* "select_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 319: /* "select_with_parens" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 320: /* "select_no_parens" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 321: /* "no_table_select" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 322: /* "select_clause" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 323: /* "select_into_clause" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 324: /* "simple_select" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 325: /* "opt_where" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 326: /* "select_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 327: /* "opt_hint" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 328: /* "opt_hint_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 329: /* "hint_options" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 330: /* "hint_option" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 331: /* "opt_comma_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 332: /* "join_op_type_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 333: /* "join_op_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 335: /* "limit_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 336: /* "opt_select_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 337: /* "opt_for_update" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 338: /* "parameterized_trim" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 339: /* "opt_groupby" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 340: /* "opt_order_by" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 341: /* "order_by" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 342: /* "sort_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 343: /* "sort_key" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 344: /* "opt_asc_desc" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 345: /* "opt_having" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 346: /* "opt_distinct" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 347: /* "projection" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 348: /* "select_expr_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 349: /* "from_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 350: /* "table_factor" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 351: /* "relation_factor" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 352: /* "joined_table" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 353: /* "join_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 354: /* "join_outer" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 355: /* "explain_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 356: /* "explainable_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 357: /* "opt_verbose" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 358: /* "show_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 359: /* "lock_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 360: /* "opt_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 361: /* "opt_for_grant_user" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 363: /* "opt_show_condition" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 364: /* "opt_like_condition" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 366: /* "create_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 367: /* "user_specification_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 368: /* "user_specification" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 369: /* "user" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 370: /* "password" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 371: /* "drop_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 372: /* "user_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 373: /* "set_password_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 374: /* "opt_for_user" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 375: /* "rename_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 376: /* "rename_info" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 377: /* "rename_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 378: /* "lock_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 379: /* "lock_spec" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 380: /* "opt_work" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 382: /* "begin_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 383: /* "commit_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 384: /* "rollback_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 385: /* "kill_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 386: /* "opt_is_global" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 387: /* "opt_flag" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 388: /* "grant_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 389: /* "priv_type_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 390: /* "priv_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 391: /* "opt_privilege" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 392: /* "priv_level" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 393: /* "revoke_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 394: /* "opt_on_priv_level" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 395: /* "prepare_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 396: /* "stmt_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 397: /* "preparable_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 398: /* "variable_set_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 399: /* "var_and_val_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 400: /* "var_and_val" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 401: /* "var_and_array_val" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 402: /* "to_or_eq" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 403: /* "argument" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 404: /* "array_vals_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 405: /* "array_val_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 406: /* "execute_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 407: /* "opt_using_args" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 408: /* "argument_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 409: /* "deallocate_prepare_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 410: /* "deallocate_or_drop" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 411: /* "alter_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 412: /* "alter_column_actions" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 413: /* "alter_column_action" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 414: /* "opt_column" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 416: /* "alter_column_behavior" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 417: /* "alter_system_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 418: /* "opt_force" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 419: /* "alter_system_actions" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 420: /* "alter_system_action" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 421: /* "opt_comment" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 423: /* "server_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 424: /* "opt_cluster_or_address" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 425: /* "column_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 426: /* "relation_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 427: /* "function_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 428: /* "column_label" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 430: /* "create_procedure_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 431: /* "proc_decl" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 432: /* "proc_parameter_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 433: /* "proc_parameter" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 434: /* "proc_block" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 435: /* "proc_sect" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 436: /* "proc_stmts" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 437: /* "proc_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 438: /* "control_sect" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 439: /* "control_stmts" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 440: /* "control_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 441: /* "stmt_declare" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 442: /* "stmt_assign" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 443: /* "stmt_if" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 444: /* "stmt_elsifs" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 445: /* "stmt_elsif" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 446: /* "stmt_else" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 447: /* "stmt_case" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 448: /* "case_when_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 449: /* "case_when" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 450: /* "case_else" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 451: /* "stmt_loop" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 452: /* "stmt_while" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 453: /* "stmt_null" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 454: /* "stmt_exit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 455: /* "exec_procedure_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 456: /* "drop_procedure_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 457: /* "show_procedure_stmt" */

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
        /*modify fanqiushi DECIMAL OceanBase_BankCommV0.2 2014_6_16:b*/
        /*$5->value_ = $5->type_;
        $5->type_ = T_INT;*/
        if((yyvsp[(5) - (6)].node)->type_!=T_TYPE_DECIMAL)
        {
            (yyvsp[(5) - (6)].node)->value_ = (yyvsp[(5) - (6)].node)->type_;
            (yyvsp[(5) - (6)].node)->type_ = T_INT;
        }
        /*modify:e*/
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
      /* modify xsl ECNU_DECIMAL 2017_2
      yyerror(&@1, result, "DECIMAL type is not supported");
      YYABORT;
      */
      //modify e
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
      (yyval.node) = (yyvsp[(1) - (2)].node);
    ;}
    break;

  case 305:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 306:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 307:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 308:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BLOOMFILTER_JOIN);
    ;}
    break;

  case 309:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_MERGE_JOIN);
    ;}
    break;

  case 310:

    {
    (yyval.ival) = 3;
  ;}
    break;

  case 311:

    {
    (yyval.ival) = 4;
  ;}
    break;

  case 312:

    {
    (yyval.ival) = 1;
  ;}
    break;

  case 313:

    {
    (yyval.ival) = 2;
  ;}
    break;

  case 314:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 315:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 316:

    { (yyval.node) = NULL; ;}
    break;

  case 317:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 318:

    { (yyval.node) = NULL; ;}
    break;

  case 319:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 320:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 0;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 321:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 0;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 322:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 1;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 323:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 2;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 324:

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

  case 325:

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

  case 326:

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

  case 327:

    { (yyval.node) = NULL; ;}
    break;

  case 328:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_EXPR_LIST, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 329:

    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 330:

    { (yyval.node) = NULL; ;}
    break;

  case 331:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_SORT_LIST, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 332:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 333:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 334:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SORT_KEY, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 335:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_ASC); ;}
    break;

  case 336:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_ASC); ;}
    break;

  case 337:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_DESC); ;}
    break;

  case 338:

    { (yyval.node) = 0; ;}
    break;

  case 339:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 340:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 341:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_ALL);
    ;}
    break;

  case 342:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_DISTINCT);
    ;}
    break;

  case 343:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, (yyvsp[(1) - (1)].node));
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (1)]).first_column, (yylsp[(1) - (1)]).last_column);
    ;}
    break;

  case 344:

    {
      ParseNode* alias_node = NULL;
      malloc_non_terminal_node(alias_node, result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, alias_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (2)]).first_column, (yylsp[(1) - (2)]).last_column);
      dup_expr_string(alias_node->str_value_, result, (yylsp[(2) - (2)]).first_column, (yylsp[(2) - (2)]).last_column);
    ;}
    break;

  case 345:

    {
      ParseNode* alias_node = NULL;
      malloc_non_terminal_node(alias_node, result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, alias_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (3)]).first_column, (yylsp[(1) - (3)]).last_column);
      dup_expr_string(alias_node->str_value_, result, (yylsp[(3) - (3)]).first_column, (yylsp[(3) - (3)]).last_column);
    ;}
    break;

  case 346:

    {
      ParseNode* star_node = NULL;
      malloc_terminal_node(star_node, result->malloc_pool_, T_STAR);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, star_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (1)]).first_column, (yylsp[(1) - (1)]).last_column);
    ;}
    break;

  case 347:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 348:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 349:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 350:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 351:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 352:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 353:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
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
    	(yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 357:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(2) - (5)].node), (yyvsp[(5) - (5)].node));
    	yyerror(&(yylsp[(1) - (5)]), result, "qualied joined table can not be aliased!");
      YYABORT;
    ;}
    break;

  case 358:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 359:

    {
    	(yyval.node) = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 360:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOINED_TABLE, 4, (yyvsp[(2) - (6)].node), (yyvsp[(1) - (6)].node), (yyvsp[(4) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 361:

    {
      ParseNode* node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_JOIN_INNER);
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOINED_TABLE, 4, node, (yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 362:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_FULL);
    ;}
    break;

  case 363:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_LEFT);
    ;}
    break;

  case 364:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_RIGHT);
    ;}
    break;

  case 365:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_INNER);
    ;}
    break;

  case 366:

    { (yyval.node) = NULL; ;}
    break;

  case 367:

    { (yyval.node) = NULL; ;}
    break;

  case 368:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPLAIN, 1, (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = ((yyvsp[(2) - (3)].node) ? 1 : 0); /* positive: verbose */
    ;}
    break;

  case 369:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
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

    { (yyval.node) = (ParseNode*)1; ;}
    break;

  case 374:

    { (yyval.node) = NULL; ;}
    break;

  case 375:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_TABLES, 1, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 376:

    {  malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_INDEX, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 377:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 378:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 379:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_TABLE_STATUS, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 380:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_SERVER_STATUS, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 381:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_VARIABLES, 1, (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = (yyvsp[(2) - (4)].ival);
    ;}
    break;

  case 382:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_SCHEMA); ;}
    break;

  case 383:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_CREATE_TABLE, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 384:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 385:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 386:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_WARNINGS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 387:

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

  case 388:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_GRANTS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 389:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_PARAMETERS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 390:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_PROCESSLIST);
      (yyval.node)->value_ = (yyvsp[(2) - (3)].ival);
    ;}
    break;

  case 391:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LOCK_TABLE, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 392:

    {
      if ((yyvsp[(2) - (4)].node)->value_ < 0 || (yyvsp[(4) - (4)].node)->value_ < 0)
      {
        yyerror(&(yylsp[(1) - (4)]), result, "OFFSET/COUNT must not be less than 0!");
        YYABORT;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_LIMIT, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 393:

    {
      if ((yyvsp[(2) - (2)].node)->value_ < 0)
      {
        yyerror(&(yylsp[(1) - (2)]), result, "COUNT must not be less than 0!");
        YYABORT;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_LIMIT, 2, NULL, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 394:

    { (yyval.node) = NULL; ;}
    break;

  case 395:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 396:

    { (yyval.node) = NULL; ;}
    break;

  case 397:

    { (yyval.node) = NULL; ;}
    break;

  case 398:

    { (yyval.ival) = 1; ;}
    break;

  case 399:

    { (yyval.ival) = 0; ;}
    break;

  case 400:

    { (yyval.ival) = 0; ;}
    break;

  case 401:

    { (yyval.node) = NULL; ;}
    break;

  case 402:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 403:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_WHERE_CLAUSE, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 404:

    { (yyval.node) = NULL; ;}
    break;

  case 405:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 1, (yyvsp[(1) - (1)].node)); ;}
    break;

  case 406:

    { (yyval.ival) = 0; ;}
    break;

  case 407:

    { (yyval.ival) = 1; ;}
    break;

  case 408:

    {
        merge_nodes((yyval.node), result->malloc_pool_, T_CREATE_USER, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 409:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 410:

    {
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 411:

    {
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CREATE_USER_SPEC, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 412:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 413:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 414:

    {
        merge_nodes((yyval.node), result->malloc_pool_, T_DROP_USER, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 415:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 416:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 417:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SET_PASSWORD, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 418:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SET_PASSWORD, 2, (yyvsp[(3) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 419:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 420:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 421:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_RENAME_USER, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 422:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_RENAME_INFO, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 423:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 424:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 425:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LOCK_USER, 2, (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 426:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 427:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 428:

    {
      (void)(yyval.node);
    ;}
    break;

  case 429:

    {
      (void)(yyval.node);
    ;}
    break;

  case 430:

    {
      (yyval.ival) = 1;
    ;}
    break;

  case 431:

    {
      (yyval.ival) = 0;
    ;}
    break;

  case 432:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BEGIN);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 433:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BEGIN);
      (yyval.node)->value_ = (yyvsp[(3) - (3)].ival);
    ;}
    break;

  case 434:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_COMMIT);
    ;}
    break;

  case 435:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_ROLLBACK);
    ;}
    break;

  case 436:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_KILL, 3, (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 437:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 438:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
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
      ParseNode *privileges_node = NULL;
      ParseNode *users_node = NULL;
      merge_nodes(privileges_node, result->malloc_pool_, T_PRIVILEGES, (yyvsp[(2) - (6)].node));
      merge_nodes(users_node, result->malloc_pool_, T_USERS, (yyvsp[(6) - (6)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_GRANT,
                                 3, privileges_node, (yyvsp[(4) - (6)].node), users_node);
    ;}
    break;

  case 443:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 444:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 445:

    {
      (void)(yyvsp[(2) - (2)].node);                 /* useless */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_ALL;
    ;}
    break;

  case 446:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_ALTER;
    ;}
    break;

  case 447:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_CREATE;
    ;}
    break;

  case 448:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_CREATE_USER;
    ;}
    break;

  case 449:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_DELETE;
    ;}
    break;

  case 450:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_DROP;
    ;}
    break;

  case 451:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_GRANT_OPTION;
    ;}
    break;

  case 452:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_INSERT;
    ;}
    break;

  case 453:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_UPDATE;
    ;}
    break;

  case 454:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_SELECT;
    ;}
    break;

  case 455:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_REPLACE;
    ;}
    break;

  case 456:

    {
      (void)(yyval.node);
    ;}
    break;

  case 457:

    {
      (void)(yyval.node);
    ;}
    break;

  case 458:

    {
      /* means global priv_level */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_LEVEL);
    ;}
    break;

  case 459:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_LEVEL, 1, (yyvsp[(1) - (1)].node));
    ;}
    break;

  case 460:

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

  case 461:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 462:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 463:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PREPARE, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 464:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
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

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_VARIABLE_SET, (yyvsp[(2) - (2)].node));;
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 470:

    {
      (yyval.node) = (yyvsp[(3) - (3)].node);
    ;}
    break;

  case 471:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 472:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 473:

    {
      (void)((yyvsp[(2) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 474:

    {
      (void)((yyvsp[(2) - (3)].node));
      (yyvsp[(1) - (3)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 475:

    {
      (void)((yyvsp[(3) - (4)].node));
      (yyvsp[(2) - (4)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 476:

    {
      (void)((yyvsp[(3) - (4)].node));
      (yyvsp[(2) - (4)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 477:

    {
      (void)((yyvsp[(4) - (5)].node));
      (yyvsp[(3) - (5)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 478:

    {
      (void)((yyvsp[(4) - (5)].node));
      (yyvsp[(3) - (5)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 479:

    {
      (void)((yyvsp[(2) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
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
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_ARRAY_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 482:

    { (yyval.node) = NULL; ;}
    break;

  case 483:

    { (yyval.node) = NULL; ;}
    break;

  case 484:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 485:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 486:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_ARRAY_VAL, (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 487:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 488:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 489:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXECUTE, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 490:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 491:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 492:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 493:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 494:

    {
      (void)((yyvsp[(1) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_DEALLOCATE, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 495:

    { (yyval.node) = NULL; ;}
    break;

  case 496:

    { (yyval.node) = NULL; ;}
    break;

  case 497:

    {
      ParseNode *alter_actions = NULL;
      merge_nodes(alter_actions, result->malloc_pool_, T_ALTER_ACTION_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_TABLE, 2, (yyvsp[(3) - (4)].node), alter_actions);
    ;}
    break;

  case 498:

    {
      yyerror(&(yylsp[(1) - (6)]), result, "Table rename is not supported now");
      YYABORT;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLE_RENAME, 1, (yyvsp[(6) - (6)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_ACTION_LIST, 1, (yyval.node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_TABLE, 2, (yyvsp[(3) - (6)].node), (yyval.node));
    ;}
    break;

  case 499:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 500:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 501:

    {
      (void)((yyvsp[(2) - (3)].node)); /* make bison mute */
      (yyval.node) = (yyvsp[(3) - (3)].node); /* T_COLUMN_DEFINITION */
    ;}
    break;

  case 502:

    {
      (void)((yyvsp[(2) - (4)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_DROP, 1, (yyvsp[(3) - (4)].node));
      (yyval.node)->value_ = (yyvsp[(4) - (4)].ival);
    ;}
    break;

  case 503:

    {
      (void)((yyvsp[(2) - (4)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_ALTER, 2, (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 504:

    {
      (void)((yyvsp[(2) - (5)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_RENAME, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 505:

    { (yyval.node) = NULL; ;}
    break;

  case 506:

    { (yyval.node) = NULL; ;}
    break;

  case 507:

    { (yyval.ival) = 2; ;}
    break;

  case 508:

    { (yyval.ival) = 1; ;}
    break;

  case 509:

    { (yyval.ival) = 0; ;}
    break;

  case 510:

    {
      (void)((yyvsp[(3) - (3)].node)); /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NOT_NULL);
    ;}
    break;

  case 511:

    {
      (void)((yyvsp[(3) - (3)].node)); /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NULL);
    ;}
    break;

  case 512:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 513:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_NULL);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyval.node));
    ;}
    break;

  case 514:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_SYTEM_ACTION_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_SYSTEM, 1, (yyval.node));
    ;}
    break;

  case 515:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 3, node, (yyvsp[(7) - (7)].node), (yyvsp[(3) - (7)].node));
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
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 2, node, (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 518:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 2, node, (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 519:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 520:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_FORCE);
    ;}
    break;

  case 521:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 522:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 523:

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

  case 524:

    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 525:

    { (yyval.node) = NULL; ;}
    break;

  case 526:

    { (yyval.ival) = 0; ;}
    break;

  case 527:

    { (yyval.ival) = 1; ;}
    break;

  case 528:

    { (yyval.ival) = 2; ;}
    break;

  case 529:

    { (yyval.ival) = 2; ;}
    break;

  case 530:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 531:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 4;
    ;}
    break;

  case 532:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 533:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 3;
    ;}
    break;

  case 534:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CLUSTER, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 535:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SERVER_ADDRESS, 2, (yyvsp[(3) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 536:

    { (yyval.node) = NULL; ;}
    break;

  case 537:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 538:

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

  case 542:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 543:

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

  case 569:

    {
								malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CREATE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
							;}
    break;

  case 570:

    {
					ParseNode *params = NULL;
        			merge_nodes(params, result->malloc_pool_, T_PARAM_LIST, (yyvsp[(5) - (6)].node));
					malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECL, 2, (yyvsp[(3) - (6)].node), params);
				;}
    break;

  case 571:

    {
					ParseNode *params = NULL;
					malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECL, 2, (yyvsp[(3) - (5)].node), params);
				;}
    break;

  case 572:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
					;}
    break;

  case 573:

    {
						(yyval.node) = (yyvsp[(1) - (1)].node);
					;}
    break;

  case 574:

    {
                malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PARAM_DEFINITION, 3, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node), NULL);
					;}
    break;

  case 575:

    {
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_IN_PARAM_DEFINITION, 3, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node), NULL);
					;}
    break;

  case 576:

    {
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OUT_PARAM_DEFINITION, 3, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node), NULL);
					;}
    break;

  case 577:

    {
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_INOUT_PARAM_DEFINITION, 3, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node), NULL);
          ;}
    break;

  case 578:

    {
          ParseNode *array_flag = NULL;
          malloc_terminal_node(array_flag, result->malloc_pool_, T_BOOL);
          array_flag->value_ = 1;
          malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PARAM_DEFINITION, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), array_flag);
        ;}
    break;

  case 579:

    {
          ParseNode *array_flag = NULL;
          malloc_terminal_node(array_flag, result->malloc_pool_, T_BOOL);
          array_flag->value_ = 1;
          malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_IN_PARAM_DEFINITION, 3, (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), array_flag);
        ;}
    break;

  case 580:

    {
          ParseNode *array_flag = NULL;
          malloc_terminal_node(array_flag, result->malloc_pool_, T_BOOL);
          array_flag->value_ = 1;
          malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OUT_PARAM_DEFINITION, 3, (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), array_flag);
        ;}
    break;

  case 581:

    {
          ParseNode *array_flag = NULL;
          malloc_terminal_node(array_flag, result->malloc_pool_, T_BOOL);
          array_flag->value_ = 1;
          malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_INOUT_PARAM_DEFINITION, 3, (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), array_flag);
        ;}
    break;

  case 582:

    { 
					//malloc_non_terminal_node($$, result->malloc_pool_, T_PROCEDURE_BLOCK, 1, $2);
					(yyval.node)=(yyvsp[(2) - (3)].node);
				;}
    break;

  case 583:

    { 
					(yyval.node)=NULL;
				;}
    break;

  case 584:

    { 
        			merge_nodes((yyval.node), result->malloc_pool_, T_PROCEDURE_STMTS, (yyvsp[(1) - (1)].node));
				;}
    break;

  case 585:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
				;}
    break;

  case 586:

    {
					(yyval.node)=(yyvsp[(1) - (1)].node);
				;}
    break;

  case 587:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
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

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
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

    { (yyval.node) =(yyvsp[(1) - (1)].node); ;}
    break;

  case 609:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 610:

    { 
					(yyval.node)=NULL;
				;}
    break;

  case 611:

    { 
        			merge_nodes((yyval.node), result->malloc_pool_, T_PROCEDURE_STMTS, (yyvsp[(1) - (1)].node));
				;}
    break;

  case 612:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
				;}
    break;

  case 613:

    {
					(yyval.node)=(yyvsp[(1) - (1)].node);
				;}
    break;

  case 614:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
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

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
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

    { (yyval.node) =(yyvsp[(1) - (1)].node); ;}
    break;

  case 635:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 636:

    {
						ParseNode *args = NULL;
						merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (4)].node));
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECLARE, 4, args, (yyvsp[(3) - (4)].node), NULL, NULL);
					;}
    break;

  case 637:

    {
						ParseNode *args = NULL;
						merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (6)].node));
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECLARE, 4, args, (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node), NULL);
          ;}
    break;

  case 638:

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

  case 639:

    {
						ParseNode *var_list = NULL;
						merge_nodes(var_list, result->malloc_pool_, T_VAR_VAL_LIST, (yyvsp[(2) - (3)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ASSGIN, 1,var_list);
					;}
    break;

  case 640:

    {
						ParseNode *elsifs = NULL;
						merge_nodes(elsifs, result->malloc_pool_, T_PROCEDURE_ELSEIFS, (yyvsp[(5) - (9)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (9)].node), (yyvsp[(4) - (9)].node), elsifs ,(yyvsp[(6) - (9)].node));
					;}
    break;

  case 641:

    {
						ParseNode *elsifs = NULL;
						merge_nodes(elsifs, result->malloc_pool_, T_PROCEDURE_ELSEIFS, (yyvsp[(5) - (8)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (8)].node), (yyvsp[(4) - (8)].node), elsifs ,NULL);
					;}
    break;

  case 642:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (8)].node), (yyvsp[(4) - (8)].node), NULL ,(yyvsp[(5) - (8)].node));
					;}
    break;

  case 643:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (7)].node), (yyvsp[(4) - (7)].node), NULL ,NULL);
					;}
    break;

  case 644:

    {
						(yyval.node)=(yyvsp[(1) - (1)].node);
					;}
    break;

  case 645:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
					;}
    break;

  case 646:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ELSEIF, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
					;}
    break;

  case 647:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ELSE, 1, (yyvsp[(2) - (2)].node));
						//$$ = $2;
					;}
    break;

  case 648:

    {
						ParseNode *casewhenlist = NULL;
						merge_nodes(casewhenlist, result->malloc_pool_, T_PROCEDURE_CASE_WHEN_LIST, (yyvsp[(3) - (7)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CASE, 3, (yyvsp[(2) - (7)].node), casewhenlist, (yyvsp[(4) - (7)].node));
					;}
    break;

  case 649:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
					;}
    break;

  case 650:

    {
						(yyval.node)=(yyvsp[(1) - (1)].node);
					;}
    break;

  case 651:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CASE_WHEN, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
					;}
    break;

  case 652:

    {
						(yyval.node) = NULL;
					;}
    break;

  case 653:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ELSE, 1, (yyvsp[(2) - (2)].node));
						//$$ = $2;
					;}
    break;

  case 654:

    {
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_LOOP, 5,
                                     NULL,
                                     NULL,
                                     NULL,
                                     NULL,
                                     (yyvsp[(2) - (5)].node));
          ;}
    break;

  case 655:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_LOOP, 5,
                                       (yyvsp[(2) - (11)].node),
                                       NULL,
                                       (yyvsp[(4) - (11)].node),
                                       (yyvsp[(6) - (11)].node),
                                       (yyvsp[(8) - (11)].node));
            ;}
    break;

  case 656:

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

  case 657:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_WHILE, 2, (yyvsp[(2) - (7)].node), (yyvsp[(4) - (7)].node));
					;}
    break;

  case 658:

    {
						/* We do not bother building a node for NULL */
						(yyval.node) = NULL;
					;}
    break;

  case 659:

    {
                        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXIT, 1, NULL);
						(yyval.node)->value_=1;
					;}
    break;

  case 660:

    {
                        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXIT, 1, (yyvsp[(3) - (4)].node));//when_expr
                    ;}
    break;

  case 661:

    {
        					ParseNode *param_list = NULL;
            				merge_nodes(param_list, result->malloc_pool_, T_EXPR_LIST, (yyvsp[(4) - (6)].node));
        					
                            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXEC, 3, (yyvsp[(2) - (6)].node), param_list, (yyvsp[(6) - (6)].node));
						;}
    break;

  case 662:

    {
							ParseNode *params = NULL;
                            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXEC, 3, (yyvsp[(2) - (5)].node), params, (yyvsp[(5) - (5)].node));
                        ;}
    break;

  case 663:

    {
							malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DROP, 2, (yyvsp[(5) - (5)].node),(yyvsp[(5) - (5)].node));
						;}
    break;

  case 664:

    {
							malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DROP, 1, (yyvsp[(3) - (3)].node));
						;}
    break;

  case 665:

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

