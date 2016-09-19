
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
     CURSOR = 300,
     OPEN = 301,
     FETCH = 302,
     CLOSE = 303,
     NEXT = 304,
     PRIOR = 305,
     FIRST = 306,
     LAST = 307,
     ABSOLUTE = 308,
     RELATIVE = 309,
     ADD = 310,
     ANY = 311,
     ALL = 312,
     ALTER = 313,
     AS = 314,
     ASC = 315,
     BEGI = 316,
     BIGINT = 317,
     BINARY = 318,
     BOOLEAN = 319,
     BOTH = 320,
     BY = 321,
     CASCADE = 322,
     CASE = 323,
     CHARACTER = 324,
     CLUSTER = 325,
     COMMENT = 326,
     COMMIT = 327,
     CONSISTENT = 328,
     COLUMN = 329,
     COLUMNS = 330,
     CREATE = 331,
     CREATETIME = 332,
     CURRENT_USER = 333,
     CHANGE_OBI = 334,
     SWITCH_CLUSTER = 335,
     DATE = 336,
     DATETIME = 337,
     DEALLOCATE = 338,
     DECIMAL = 339,
     DEFAULT = 340,
     DELETE = 341,
     DESC = 342,
     DESCRIBE = 343,
     DISTINCT = 344,
     DOUBLE = 345,
     DROP = 346,
     DUAL = 347,
     ELSE = 348,
     END = 349,
     END_P = 350,
     ERROR = 351,
     EXECUTE = 352,
     EXISTS = 353,
     EXPLAIN = 354,
     FLOAT = 355,
     FOR = 356,
     FROM = 357,
     FULL = 358,
     FROZEN = 359,
     FORCE = 360,
     GLOBAL = 361,
     GLOBAL_ALIAS = 362,
     GRANT = 363,
     GROUP = 364,
     HAVING = 365,
     HINT_BEGIN = 366,
     HINT_END = 367,
     HOTSPOT = 368,
     IDENTIFIED = 369,
     IF = 370,
     INNER = 371,
     INTEGER = 372,
     INSERT = 373,
     INTO = 374,
     JOIN = 375,
     SEMI_JOIN = 376,
     KEY = 377,
     LEADING = 378,
     LEFT = 379,
     LIMIT = 380,
     LOCAL = 381,
     LOCKED = 382,
     LOCKWJH = 383,
     MEDIUMINT = 384,
     MEMORY = 385,
     MODIFYTIME = 386,
     MASTER = 387,
     NUMERIC = 388,
     OFFSET = 389,
     ON = 390,
     ORDER = 391,
     OPTION = 392,
     OUTER = 393,
     PARAMETERS = 394,
     PASSWORD = 395,
     PRECISION = 396,
     PREPARE = 397,
     PRIMARY = 398,
     READ_STATIC = 399,
     REAL = 400,
     RENAME = 401,
     REPLACE = 402,
     RESTRICT = 403,
     PRIVILEGES = 404,
     REVOKE = 405,
     RIGHT = 406,
     ROLLBACK = 407,
     KILL = 408,
     READ_CONSISTENCY = 409,
     SCHEMA = 410,
     SCOPE = 411,
     SELECT = 412,
     SESSION = 413,
     SESSION_ALIAS = 414,
     SET = 415,
     SHOW = 416,
     SMALLINT = 417,
     SNAPSHOT = 418,
     SPFILE = 419,
     START = 420,
     STATIC = 421,
     SYSTEM = 422,
     STRONG = 423,
     SET_MASTER_CLUSTER = 424,
     SET_SLAVE_CLUSTER = 425,
     SLAVE = 426,
     TABLE = 427,
     TABLES = 428,
     THEN = 429,
     TIME = 430,
     TIMESTAMP = 431,
     TINYINT = 432,
     TRAILING = 433,
     TRANSACTION = 434,
     TO = 435,
     UPDATE = 436,
     USER = 437,
     USING = 438,
     VALUES = 439,
     VARCHAR = 440,
     VARBINARY = 441,
     WHERE = 442,
     WHEN = 443,
     WITH = 444,
     WORK = 445,
     PROCESSLIST = 446,
     QUERY = 447,
     CONNECTION = 448,
     WEAK = 449,
     INDEX = 450,
     STORING = 451,
     BLOOMFILTER_JOIN = 452,
     MERGE_JOIN = 453,
     AUTO_INCREMENT = 454,
     CHUNKSERVER = 455,
     COMPRESS_METHOD = 456,
     CONSISTENT_MODE = 457,
     EXPIRE_INFO = 458,
     GRANTS = 459,
     JOIN_INFO = 460,
     MERGESERVER = 461,
     REPLICA_NUM = 462,
     ROOTSERVER = 463,
     ROW_COUNT = 464,
     SERVER = 465,
     SERVER_IP = 466,
     SERVER_PORT = 467,
     SERVER_TYPE = 468,
     STATUS = 469,
     TABLE_ID = 470,
     TABLET_BLOCK_SIZE = 471,
     TABLET_MAX_SIZE = 472,
     UNLOCKED = 473,
     UPDATESERVER = 474,
     USE_BLOOM_FILTER = 475,
     VARIABLES = 476,
     VERBOSE = 477,
     WARNINGS = 478
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
#define YYFINAL  198
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3593

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  235
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  216
/* YYNRULES -- Number of rules.  */
#define YYNRULES  646
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1202

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   478

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    36,     2,     2,
      40,    41,    34,    32,   234,    33,    42,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   233,
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
     224,   225,   226,   227,   228,   229,   230,   231,   232
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
     155,   157,   160,   162,   165,   168,   172,   176,   180,   184,
     188,   192,   196,   198,   201,   204,   208,   212,   216,   220,
     224,   228,   232,   236,   240,   244,   248,   252,   256,   260,
     265,   269,   273,   276,   280,   285,   289,   294,   298,   303,
     309,   316,   320,   325,   329,   331,   335,   341,   343,   344,
     346,   349,   354,   357,   358,   363,   369,   374,   381,   386,
     390,   395,   397,   399,   401,   403,   405,   407,   409,   415,
     423,   425,   429,   433,   443,   447,   450,   451,   455,   457,
     461,   462,   464,   470,   472,   475,   478,   482,   487,   493,
     499,   505,   511,   518,   526,   530,   534,   538,   544,   546,
     548,   553,   560,   563,   572,   576,   577,   579,   583,   585,
     591,   595,   597,   599,   601,   603,   605,   608,   611,   613,
     616,   618,   621,   624,   626,   629,   632,   635,   638,   640,
     642,   644,   647,   653,   657,   658,   662,   663,   665,   666,
     670,   671,   675,   676,   679,   680,   683,   685,   688,   690,
     693,   695,   699,   700,   704,   708,   712,   716,   720,   724,
     728,   732,   736,   740,   742,   743,   748,   749,   752,   754,
     758,   765,   766,   768,   772,   774,   782,   787,   795,   796,
     799,   801,   803,   807,   808,   810,   814,   818,   824,   826,
     830,   833,   835,   839,   843,   845,   848,   852,   857,   863,
     872,   874,   876,   885,   895,   900,   905,   910,   911,   914,
     918,   923,   928,   931,   934,   939,   940,   944,   946,   950,
     951,   953,   956,   958,   960,   975,   980,   986,   991,   995,
    1000,  1003,  1004,  1006,  1010,  1012,  1014,  1016,  1018,  1020,
    1022,  1024,  1026,  1027,  1029,  1030,  1033,  1037,  1042,  1047,
    1052,  1056,  1060,  1064,  1065,  1069,  1071,  1072,  1076,  1078,
    1082,  1085,  1086,  1088,  1090,  1091,  1094,  1095,  1097,  1099,
    1101,  1104,  1108,  1110,  1112,  1116,  1118,  1122,  1124,  1128,
    1131,  1135,  1138,  1140,  1146,  1148,  1152,  1159,  1165,  1168,
    1171,  1174,  1176,  1178,  1179,  1183,  1185,  1187,  1189,  1191,
    1193,  1194,  1198,  1204,  1210,  1216,  1221,  1226,  1231,  1234,
    1239,  1243,  1247,  1251,  1255,  1259,  1263,  1267,  1271,  1276,
    1279,  1280,  1282,  1285,  1290,  1292,  1294,  1295,  1296,  1299,
    1302,  1303,  1305,  1306,  1308,  1312,  1314,  1318,  1323,  1325,
    1327,  1331,  1333,  1337,  1343,  1350,  1353,  1354,  1358,  1362,
    1364,  1368,  1373,  1375,  1377,  1379,  1380,  1384,  1385,  1388,
    1392,  1395,  1398,  1403,  1404,  1406,  1407,  1409,  1411,  1418,
    1420,  1424,  1427,  1429,  1431,  1434,  1436,  1438,  1441,  1443,
    1445,  1447,  1449,  1451,  1452,  1454,  1456,  1462,  1465,  1466,
    1471,  1473,  1475,  1477,  1479,  1481,  1484,  1486,  1490,  1494,
    1498,  1503,  1508,  1514,  1520,  1524,  1526,  1528,  1530,  1534,
    1537,  1538,  1540,  1544,  1548,  1550,  1552,  1557,  1564,  1566,
    1570,  1574,  1579,  1584,  1590,  1592,  1593,  1595,  1597,  1598,
    1602,  1606,  1610,  1613,  1618,  1626,  1634,  1641,  1648,  1649,
    1651,  1653,  1657,  1667,  1670,  1671,  1675,  1679,  1683,  1684,
    1686,  1688,  1690,  1692,  1696,  1703,  1704,  1706,  1708,  1710,
    1712,  1714,  1716,  1718,  1720,  1722,  1724,  1726,  1728,  1730,
    1732,  1734,  1736,  1738,  1740,  1742,  1744,  1746,  1748,  1750,
    1752,  1754,  1756,  1758,  1760,  1762,  1764,  1766,  1768,  1771,
    1778,  1784,  1788,  1790,  1793,  1797,  1801,  1805,  1809,  1810,
    1812,  1815,  1817,  1819,  1821,  1823,  1825,  1827,  1829,  1832,
    1835,  1838,  1841,  1844,  1847,  1850,  1853,  1856,  1859,  1862,
    1865,  1868,  1871,  1874,  1876,  1878,  1880,  1883,  1885,  1887,
    1889,  1891,  1893,  1895,  1898,  1901,  1904,  1907,  1910,  1913,
    1916,  1919,  1922,  1925,  1928,  1931,  1934,  1937,  1940,  1942,
    1944,  1949,  1956,  1960,  1970,  1979,  1988,  1996,  1998,  2001,
    2006,  2009,  2017,  2020,  2022,  2027,  2028,  2031,  2037,  2045,
    2047,  2050,  2053,  2059,  2064,  2070,  2074
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     236,     0,    -1,   237,   104,    -1,   237,   233,   238,    -1,
     238,    -1,   423,    -1,   448,    -1,   450,    -1,   449,    -1,
     266,    -1,   268,    -1,   269,    -1,   284,    -1,   277,    -1,
     278,    -1,   279,    -1,   280,    -1,   282,    -1,   283,    -1,
     314,    -1,   307,    -1,   285,    -1,   260,    -1,   257,    -1,
     256,    -1,   301,    -1,   304,    -1,   351,    -1,   354,    -1,
     391,    -1,   394,    -1,   399,    -1,   404,    -1,   410,    -1,
     402,    -1,   362,    -1,   367,    -1,   369,    -1,   371,    -1,
     374,    -1,   384,    -1,   389,    -1,   378,    -1,   379,    -1,
     380,    -1,   381,    -1,   355,    -1,    -1,   244,    -1,   239,
     234,   244,    -1,   418,    -1,   419,    42,   418,    -1,   419,
      42,    34,    -1,     4,    -1,     6,    -1,     5,    -1,     9,
      -1,     8,    -1,    10,    -1,    12,    -1,    14,    -1,    13,
      -1,   168,    42,   418,    -1,   240,    -1,   241,    -1,    40,
     244,    41,    -1,    40,   239,   234,   244,    41,    -1,   246,
      -1,   251,    -1,   252,    -1,   315,    -1,   107,   315,    -1,
     242,    -1,    32,   243,    -1,    33,   243,    -1,   243,    32,
     243,    -1,   243,    33,   243,    -1,   243,    34,   243,    -1,
     243,    35,   243,    -1,   243,    36,   243,    -1,   243,    38,
     243,    -1,   243,    37,   243,    -1,   242,    -1,    32,   244,
      -1,    33,   244,    -1,   244,    32,   244,    -1,   244,    33,
     244,    -1,   244,    34,   244,    -1,   244,    35,   244,    -1,
     244,    36,   244,    -1,   244,    38,   244,    -1,   244,    37,
     244,    -1,   244,    26,   244,    -1,   244,    25,   244,    -1,
     244,    24,   244,    -1,   244,    22,   244,    -1,   244,    23,
     244,    -1,   244,    21,   244,    -1,   244,    28,   244,    -1,
     244,    20,    28,   244,    -1,   244,    19,   244,    -1,   244,
      18,   244,    -1,    20,   244,    -1,   244,    31,    10,    -1,
     244,    31,    20,    10,    -1,   244,    31,     8,    -1,   244,
      31,    20,     8,    -1,   244,    31,    11,    -1,   244,    31,
      20,    11,    -1,   244,    29,   243,    19,   243,    -1,   244,
      20,    29,   243,    19,   243,    -1,   244,    30,   245,    -1,
     244,    20,    30,   245,    -1,   244,    27,   244,    -1,   315,
      -1,    40,   239,    41,    -1,    77,   247,   248,   250,   103,
      -1,   244,    -1,    -1,   249,    -1,   248,   249,    -1,   197,
     244,   183,   244,    -1,   102,   244,    -1,    -1,   420,    40,
      34,    41,    -1,   420,    40,   255,   244,    41,    -1,   420,
      40,   239,    41,    -1,   420,    40,   244,    68,   290,    41,
      -1,   420,    40,   334,    41,    -1,   420,    40,    41,    -1,
     253,    40,   254,    41,    -1,   218,    -1,   314,    -1,   307,
      -1,   257,    -1,   256,    -1,    66,    -1,    98,    -1,    95,
     111,   347,   321,   308,    -1,   190,   323,   347,   169,   258,
     321,   308,    -1,   259,    -1,   258,   234,   259,    -1,   418,
      24,   244,    -1,    85,   204,   286,   347,   144,   347,   261,
     262,   264,    -1,    40,   311,    41,    -1,   205,   263,    -1,
      -1,    40,   311,    41,    -1,   265,    -1,   264,   234,   265,
      -1,    -1,   299,    -1,    44,   267,    54,   110,   314,    -1,
     421,    -1,    55,   267,    -1,    56,   267,    -1,    56,   267,
      58,    -1,    56,   267,   128,   401,    -1,    56,   267,    58,
     128,   401,    -1,    56,   267,    60,   128,   401,    -1,    56,
     267,    59,   128,   401,    -1,    56,   267,    61,   128,   401,
      -1,    56,   267,    62,     5,   128,   401,    -1,    56,   267,
     281,    63,     5,   128,   401,    -1,    56,   267,    59,    -1,
      56,   267,    60,    -1,    56,   267,    61,    -1,    56,   267,
     281,    63,     5,    -1,    58,    -1,    59,    -1,    56,   267,
      62,     5,    -1,    56,   267,   111,     5,   189,     5,    -1,
      57,   267,    -1,    85,   181,   286,   347,    40,   287,    41,
     298,    -1,   124,    20,   107,    -1,    -1,   288,    -1,   287,
     234,   288,    -1,   289,    -1,   152,   131,    40,   311,    41,
      -1,   418,   290,   296,    -1,   186,    -1,   171,    -1,   138,
      -1,   126,    -1,    71,    -1,    93,   291,    -1,   142,   291,
      -1,    73,    -1,   109,   292,    -1,   154,    -1,    99,   293,
      -1,   185,   294,    -1,    91,    -1,    78,   295,    -1,    72,
     295,    -1,   194,   295,    -1,   195,   295,    -1,    86,    -1,
     140,    -1,    90,    -1,   184,   294,    -1,    40,     5,   234,
       5,    41,    -1,    40,     5,    41,    -1,    -1,    40,     5,
      41,    -1,    -1,   150,    -1,    -1,    40,     5,    41,    -1,
      -1,    40,     5,    41,    -1,    -1,   296,   297,    -1,    -1,
      20,    10,    -1,    10,    -1,    94,   241,    -1,   208,    -1,
     152,   131,    -1,   299,    -1,   298,   234,   299,    -1,    -1,
     214,   300,     4,    -1,   212,   300,     4,    -1,   226,   300,
       5,    -1,   225,   300,     5,    -1,   224,   300,     5,    -1,
     216,   300,     5,    -1,   210,   300,     4,    -1,   229,   300,
       8,    -1,   211,   300,   175,    -1,    80,   300,     4,    -1,
      24,    -1,    -1,   100,   181,   302,   303,    -1,    -1,   124,
     107,    -1,   346,    -1,   303,   234,   346,    -1,   100,   204,
     302,   305,   144,   306,    -1,    -1,   347,    -1,   305,   234,
     347,    -1,   347,    -1,   309,   128,   347,   310,   193,   312,
     308,    -1,   309,   128,   347,   314,    -1,   309,   128,   347,
      40,   311,    41,   314,    -1,    -1,   197,   244,    -1,   156,
      -1,   127,    -1,    40,   311,    41,    -1,    -1,   418,    -1,
     311,   234,   418,    -1,    40,   313,    41,    -1,   312,   234,
      40,   313,    41,    -1,   244,    -1,   313,   234,   244,    -1,
     316,   308,    -1,   315,    -1,    40,   316,    41,    -1,    40,
     315,    41,    -1,   317,    -1,   320,   333,    -1,   318,   337,
     333,    -1,   318,   336,   322,   333,    -1,   166,   323,   342,
     344,   332,    -1,   166,   323,   342,   344,   111,   101,   321,
     332,    -1,   320,    -1,   315,    -1,   166,   344,   128,   401,
     111,   345,   321,   333,    -1,   166,   323,   342,   344,   111,
     345,   321,   335,   341,    -1,   318,    16,   342,   318,    -1,
     318,    17,   342,   318,    -1,   318,    15,   342,   318,    -1,
      -1,   196,   244,    -1,   196,     7,   244,    -1,   134,   331,
     143,   331,    -1,   143,   331,   134,   331,    -1,   134,   331,
      -1,   143,   331,    -1,   134,   331,   234,   331,    -1,    -1,
     120,   324,   121,    -1,   325,    -1,   324,   234,   325,    -1,
      -1,   326,    -1,   325,   326,    -1,   153,    -1,   122,    -1,
     130,    40,   347,   234,   347,   234,   347,    42,   347,   234,
     347,    42,   347,    41,    -1,   163,    40,   330,    41,    -1,
     204,    40,   347,   347,    41,    -1,     3,    40,     3,    41,
      -1,    40,   327,    41,    -1,   129,    40,   328,    41,    -1,
     327,   234,    -1,    -1,   329,    -1,   328,   234,   329,    -1,
     206,    -1,   207,    -1,   203,    -1,   177,    -1,   175,    -1,
     113,    -1,     5,    -1,    12,    -1,    -1,   322,    -1,    -1,
     110,   190,    -1,   244,   111,   244,    -1,    74,   244,   111,
     244,    -1,   132,   244,   111,   244,    -1,   187,   244,   111,
     244,    -1,    74,   111,   244,    -1,   132,   111,   244,    -1,
     187,   111,   244,    -1,    -1,   118,    75,   239,    -1,   337,
      -1,    -1,   145,    75,   338,    -1,   339,    -1,   338,   234,
     339,    -1,   244,   340,    -1,    -1,    69,    -1,    96,    -1,
      -1,   119,   244,    -1,    -1,    66,    -1,    98,    -1,   244,
      -1,   244,   421,    -1,   244,    68,   421,    -1,    34,    -1,
     343,    -1,   344,   234,   343,    -1,   346,    -1,   345,   234,
     346,    -1,   347,    -1,   347,    68,   419,    -1,   347,   419,
      -1,   315,    68,   419,    -1,   315,   419,    -1,   348,    -1,
      40,   348,    41,    68,   419,    -1,   419,    -1,    40,   348,
      41,    -1,   346,   349,   129,   346,   144,   244,    -1,   346,
     129,   346,   144,   244,    -1,   112,   350,    -1,   133,   350,
      -1,   160,   350,    -1,   125,    -1,   147,    -1,    -1,   108,
     353,   352,    -1,   314,    -1,   256,    -1,   307,    -1,   257,
      -1,   231,    -1,    -1,   170,   182,   359,    -1,   170,   204,
     144,   347,   359,    -1,   170,    84,   111,   347,   359,    -1,
     170,    84,    30,   347,   359,    -1,   170,   181,   223,   359,
      -1,   170,   219,   223,   359,    -1,   170,   358,   230,   359,
      -1,   170,   164,    -1,   170,    85,   181,   347,    -1,    97,
     347,   360,    -1,    96,   347,   360,    -1,   170,   232,   356,
      -1,   170,   251,   232,    -1,   170,   213,   357,    -1,   170,
     148,   359,    -1,   170,   361,   200,    -1,   137,   181,   347,
      -1,   134,     5,   234,     5,    -1,   134,     5,    -1,    -1,
     370,    -1,   110,    87,    -1,   110,    87,    40,    41,    -1,
     115,    -1,   167,    -1,    -1,    -1,    28,     4,    -1,   196,
     244,    -1,    -1,     4,    -1,    -1,   112,    -1,    85,   191,
     363,    -1,   364,    -1,   363,   234,   364,    -1,   365,   123,
      75,   366,    -1,     4,    -1,     4,    -1,   100,   191,   368,
      -1,   365,    -1,   368,   234,   365,    -1,   169,   149,   370,
      24,   366,    -1,    67,   191,   365,   123,    75,   366,    -1,
     110,   365,    -1,    -1,   155,   191,   373,    -1,   365,   189,
     365,    -1,   372,    -1,   373,   234,   372,    -1,    67,   191,
     365,   375,    -1,   136,    -1,   227,    -1,   199,    -1,    -1,
     198,    82,   172,    -1,    -1,    70,   376,    -1,   174,   188,
     377,    -1,    81,   376,    -1,   161,   376,    -1,   162,   382,
     383,     5,    -1,    -1,   115,    -1,    -1,   201,    -1,   202,
      -1,   117,   385,   144,   388,   189,   368,    -1,   386,    -1,
     385,   234,   386,    -1,    66,   387,    -1,    67,    -1,    85,
      -1,    85,   191,    -1,    95,    -1,   100,    -1,   117,   146,
      -1,   127,    -1,   190,    -1,   166,    -1,   156,    -1,   158,
      -1,    -1,    34,    -1,   419,    -1,   159,   385,   390,   111,
     368,    -1,   144,   388,    -1,    -1,   151,   392,   111,   393,
      -1,   421,    -1,   314,    -1,   307,    -1,   257,    -1,   256,
      -1,   169,   395,    -1,   396,    -1,   395,   234,   396,    -1,
      14,   397,   244,    -1,   418,   397,   244,    -1,   115,   418,
     397,   244,    -1,   167,   418,   397,   244,    -1,   116,    42,
     418,   397,   244,    -1,   168,    42,   418,   397,   244,    -1,
      13,   397,   244,    -1,   189,    -1,    24,    -1,    14,    -1,
     106,   392,   400,    -1,   192,   401,    -1,    -1,   398,    -1,
     401,   234,   398,    -1,   403,   151,   392,    -1,    92,    -1,
     100,    -1,    67,   181,   347,   405,    -1,    67,   181,   347,
     155,   189,   347,    -1,   406,    -1,   405,   234,   406,    -1,
      64,   407,   289,    -1,   100,   407,   418,   408,    -1,    67,
     407,   418,   409,    -1,   155,   407,   418,   189,   421,    -1,
      83,    -1,    -1,    76,    -1,   157,    -1,    -1,   169,    20,
      10,    -1,   100,    20,    10,    -1,   169,    94,   241,    -1,
     100,    94,    -1,    67,   176,   169,   412,    -1,    67,   176,
     411,    88,   141,    24,     4,    -1,    67,   176,   411,    89,
     141,    24,     4,    -1,    67,   176,   178,   141,    24,     4,
      -1,    67,   176,   179,   180,    24,     4,    -1,    -1,   114,
      -1,   413,    -1,   412,   234,   413,    -1,   418,    24,   241,
     414,   415,   222,    24,   416,   417,    -1,    80,     4,    -1,
      -1,   165,    24,   139,    -1,   165,    24,   173,    -1,   165,
      24,    74,    -1,    -1,   217,    -1,   228,    -1,   209,    -1,
     215,    -1,    79,    24,     5,    -1,   220,    24,     4,   221,
      24,     5,    -1,    -1,     3,    -1,   422,    -1,     3,    -1,
     422,    -1,     3,    -1,     3,    -1,   422,    -1,   208,    -1,
     209,    -1,   210,    -1,   211,    -1,   212,    -1,   213,    -1,
     214,    -1,   215,    -1,   216,    -1,   217,    -1,   218,    -1,
     219,    -1,   220,    -1,   221,    -1,   222,    -1,   223,    -1,
     225,    -1,   224,    -1,   226,    -1,   227,    -1,   228,    -1,
     229,    -1,   230,    -1,   231,    -1,   232,    -1,   424,   427,
      -1,    85,    43,     3,    40,   425,    41,    -1,    85,    43,
       3,    40,    41,    -1,   425,   234,   426,    -1,   426,    -1,
      14,   290,    -1,    30,    14,   290,    -1,    46,    14,   290,
      -1,    47,    14,   290,    -1,    70,   428,   103,    -1,    -1,
     429,    -1,   429,   430,    -1,   430,    -1,   436,    -1,   440,
      -1,   445,    -1,   444,    -1,   434,    -1,   435,    -1,   319,
     233,    -1,   307,   233,    -1,   257,   233,    -1,   256,   233,
      -1,   314,   233,    -1,   266,   233,    -1,   268,   233,    -1,
     284,   233,    -1,   270,   233,    -1,   271,   233,    -1,   272,
     233,    -1,   274,   233,    -1,   273,   233,    -1,   275,   233,
      -1,   276,   233,    -1,   447,    -1,   446,    -1,   432,    -1,
     432,   433,    -1,   433,    -1,   436,    -1,   440,    -1,   445,
      -1,   444,    -1,   435,    -1,   319,   233,    -1,   307,   233,
      -1,   257,   233,    -1,   256,   233,    -1,   314,   233,    -1,
     266,   233,    -1,   268,   233,    -1,   284,   233,    -1,   270,
     233,    -1,   271,   233,    -1,   272,   233,    -1,   274,   233,
      -1,   273,   233,    -1,   275,   233,    -1,   276,   233,    -1,
     447,    -1,   446,    -1,    44,   401,   290,   233,    -1,    44,
     401,   290,    94,   241,   233,    -1,   169,   395,   233,    -1,
     124,   244,   183,   431,   437,   439,   103,   124,   233,    -1,
     124,   244,   183,   431,   437,   103,   124,   233,    -1,   124,
     244,   183,   431,   439,   103,   124,   233,    -1,   124,   244,
     183,   431,   103,   124,   233,    -1,   438,    -1,   437,   438,
      -1,    45,   244,   183,   431,    -1,   102,   431,    -1,    77,
     244,   441,   443,   103,    77,   233,    -1,   441,   442,    -1,
     442,    -1,   197,   244,   183,   431,    -1,    -1,   102,   431,
      -1,    49,   431,   103,    49,   233,    -1,    48,   244,    52,
     431,   103,    48,   233,    -1,   233,    -1,    50,   233,    -1,
      51,   233,    -1,    53,     3,    40,   239,    41,    -1,    53,
       3,    40,    41,    -1,   100,    43,   124,   107,     3,    -1,
     100,    43,     3,    -1,   170,    43,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   254,   254,   263,   270,   277,   278,   279,   280,   283,
     284,   285,   286,   287,   289,   290,   291,   292,   293,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   333,   337,
     344,   346,   352,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   374,   376,   378,   380,   386,   394,   398,
     402,   406,   414,   415,   419,   423,   424,   425,   426,   427,
     428,   429,   432,   433,   437,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   460,   464,   468,   472,   476,   480,   484,   488,   492,
     496,   500,   504,   508,   515,   519,   524,   532,   533,   537,
     539,   544,   551,   552,   556,   570,   598,   673,   689,   693,
     715,   723,   730,   731,   732,   733,   737,   741,   755,   769,
     779,   783,   790,   804,   820,   827,   833,   839,   846,   850,
     855,   861,   878,   889,   902,   918,   924,   938,   953,   968,
     984,  1000,  1016,  1033,  1049,  1070,  1089,  1106,  1119,  1124,
    1139,  1156,  1176,  1196,  1213,  1216,  1220,  1224,  1231,  1235,
    1244,  1253,  1255,  1257,  1259,  1261,  1263,  1272,  1281,  1283,
    1285,  1287,  1292,  1299,  1301,  1308,  1315,  1322,  1329,  1331,
    1333,  1339,  1351,  1353,  1356,  1360,  1361,  1365,  1366,  1370,
    1371,  1375,  1376,  1380,  1383,  1387,  1392,  1397,  1399,  1401,
    1406,  1410,  1415,  1421,  1426,  1431,  1436,  1441,  1446,  1451,
    1456,  1461,  1467,  1475,  1476,  1487,  1497,  1498,  1503,  1507,
    1521,  1531,  1533,  1537,  1544,  1555,  1569,  1580,  1598,  1599,
    1606,  1611,  1619,  1624,  1628,  1629,  1636,  1640,  1646,  1647,
    1661,  1671,  1676,  1677,  1681,  1685,  1690,  1700,  1721,  1743,
    1769,  1770,  1778,  1810,  1836,  1858,  1880,  1906,  1907,  1911,
    1918,  1926,  1934,  1938,  1942,  1954,  1957,  1971,  1975,  1980,
    1986,  1990,  1997,  2001,  2005,  2009,  2015,  2021,  2028,  2033,
    2041,  2046,  2053,  2057,  2064,  2068,  2076,  2080,  2084,  2088,
    2094,  2096,  2102,  2103,  2109,  2110,  2118,  2125,  2132,  2139,
    2146,  2157,  2168,  2183,  2184,  2191,  2192,  2196,  2203,  2205,
    2210,  2218,  2219,  2221,  2227,  2228,  2236,  2239,  2243,  2250,
    2255,  2263,  2271,  2281,  2285,  2292,  2294,  2299,  2303,  2307,
    2311,  2315,  2319,  2323,  2332,  2340,  2344,  2348,  2357,  2363,
    2369,  2375,  2382,  2383,  2393,  2401,  2402,  2403,  2404,  2408,
    2409,  2420,  2422,  2424,  2426,  2428,  2430,  2432,  2437,  2439,
    2441,  2443,  2445,  2449,  2462,  2466,  2470,  2477,  2483,  2492,
    2502,  2506,  2508,  2510,  2515,  2516,  2517,  2522,  2523,  2525,
    2531,  2532,  2537,  2538,  2548,  2554,  2558,  2564,  2570,  2576,
    2588,  2594,  2598,  2610,  2614,  2620,  2625,  2636,  2642,  2648,
    2652,  2664,  2670,  2675,  2689,  2694,  2698,  2703,  2707,  2713,
    2725,  2737,  2749,  2756,  2760,  2768,  2772,  2777,  2791,  2802,
    2806,  2812,  2818,  2823,  2828,  2833,  2838,  2843,  2848,  2853,
    2858,  2863,  2870,  2875,  2880,  2885,  2897,  2937,  2942,  2954,
    2961,  2966,  2968,  2970,  2972,  2984,  2992,  2996,  3003,  3009,
    3016,  3023,  3030,  3037,  3044,  3053,  3054,  3058,  3069,  3076,
    3081,  3086,  3090,  3103,  3111,  3113,  3124,  3130,  3141,  3145,
    3152,  3157,  3163,  3168,  3177,  3178,  3182,  3183,  3184,  3188,
    3193,  3198,  3202,  3216,  3222,  3229,  3236,  3243,  3253,  3256,
    3264,  3268,  3275,  3290,  3293,  3297,  3299,  3301,  3304,  3308,
    3313,  3318,  3323,  3331,  3335,  3340,  3351,  3353,  3370,  3372,
    3389,  3393,  3395,  3408,  3409,  3410,  3411,  3412,  3413,  3414,
    3415,  3416,  3417,  3418,  3419,  3420,  3421,  3422,  3423,  3424,
    3425,  3426,  3427,  3428,  3429,  3430,  3431,  3432,  3442,  3447,
    3454,  3462,  3466,  3471,  3475,  3479,  3483,  3488,  3495,  3498,
    3503,  3507,  3512,  3514,  3516,  3518,  3520,  3522,  3524,  3526,
    3528,  3530,  3532,  3534,  3536,  3538,  3540,  3542,  3544,  3546,
    3548,  3550,  3552,  3555,  3557,  3564,  3569,  3573,  3578,  3580,
    3582,  3584,  3586,  3588,  3590,  3592,  3594,  3596,  3598,  3600,
    3602,  3604,  3606,  3608,  3610,  3612,  3614,  3616,  3619,  3621,
    3629,  3635,  3647,  3659,  3665,  3671,  3675,  3680,  3684,  3689,
    3695,  3706,  3713,  3717,  3722,  3728,  3731,  3742,  3752,  3758,
    3768,  3773,  3785,  3793,  3806,  3810,  3824
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
  "DO", "CALL", "CURSOR", "OPEN", "FETCH", "CLOSE", "NEXT", "PRIOR",
  "FIRST", "LAST", "ABSOLUTE", "RELATIVE", "ADD", "ANY", "ALL", "ALTER",
  "AS", "ASC", "BEGI", "BIGINT", "BINARY", "BOOLEAN", "BOTH", "BY",
  "CASCADE", "CASE", "CHARACTER", "CLUSTER", "COMMENT", "COMMIT",
  "CONSISTENT", "COLUMN", "COLUMNS", "CREATE", "CREATETIME",
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
  "REVOKE", "RIGHT", "ROLLBACK", "KILL", "READ_CONSISTENCY", "SCHEMA",
  "SCOPE", "SELECT", "SESSION", "SESSION_ALIAS", "SET", "SHOW", "SMALLINT",
  "SNAPSHOT", "SPFILE", "START", "STATIC", "SYSTEM", "STRONG",
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
  "case_default", "func_expr", "when_func", "when_func_name",
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
  "var_and_val", "to_or_eq", "argument", "execute_stmt", "opt_using_args",
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
     476,   477,   478,    59,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   235,   236,   237,   237,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   239,   239,
     240,   240,   240,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   245,   245,   246,   247,   247,   248,
     248,   249,   250,   250,   251,   251,   251,   251,   251,   251,
     252,   253,   254,   254,   254,   254,   255,   255,   256,   257,
     258,   258,   259,   260,   261,   262,   262,   263,   264,   264,
     264,   265,   266,   267,   268,   269,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   281,
     282,   283,   284,   285,   286,   286,   287,   287,   288,   288,
     289,   290,   290,   290,   290,   290,   290,   290,   290,   290,
     290,   290,   290,   290,   290,   290,   290,   290,   290,   290,
     290,   290,   291,   291,   291,   292,   292,   293,   293,   294,
     294,   295,   295,   296,   296,   297,   297,   297,   297,   297,
     298,   298,   298,   299,   299,   299,   299,   299,   299,   299,
     299,   299,   299,   300,   300,   301,   302,   302,   303,   303,
     304,   305,   305,   305,   306,   307,   307,   307,   308,   308,
     309,   309,   310,   310,   311,   311,   312,   312,   313,   313,
     314,   314,   315,   315,   316,   316,   316,   316,   317,   317,
     318,   318,   319,   320,   320,   320,   320,   321,   321,   321,
     322,   322,   322,   322,   322,   323,   323,   324,   324,   324,
     325,   325,   326,   326,   326,   326,   326,   326,   326,   326,
     327,   327,   328,   328,   329,   329,   330,   330,   330,   330,
     331,   331,   332,   332,   333,   333,   334,   334,   334,   334,
     334,   334,   334,   335,   335,   336,   336,   337,   338,   338,
     339,   340,   340,   340,   341,   341,   342,   342,   342,   343,
     343,   343,   343,   344,   344,   345,   345,   346,   346,   346,
     346,   346,   346,   346,   347,   348,   348,   348,   349,   349,
     349,   349,   350,   350,   351,   352,   352,   352,   352,   353,
     353,   354,   354,   354,   354,   354,   354,   354,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   355,   356,   356,
     356,   357,   357,   357,   358,   358,   358,   359,   359,   359,
     360,   360,   361,   361,   362,   363,   363,   364,   365,   366,
     367,   368,   368,   369,   369,   370,   370,   371,   372,   373,
     373,   374,   375,   375,   376,   376,   377,   377,   378,   378,
     379,   380,   381,   382,   382,   383,   383,   383,   384,   385,
     385,   386,   386,   386,   386,   386,   386,   386,   386,   386,
     386,   386,   387,   387,   388,   388,   389,   390,   390,   391,
     392,   393,   393,   393,   393,   394,   395,   395,   396,   396,
     396,   396,   396,   396,   396,   397,   397,   398,   399,   400,
     400,   401,   401,   402,   403,   403,   404,   404,   405,   405,
     406,   406,   406,   406,   407,   407,   408,   408,   408,   409,
     409,   409,   409,   410,   410,   410,   410,   410,   411,   411,
     412,   412,   413,   414,   414,   415,   415,   415,   415,   416,
     416,   416,   416,   417,   417,   417,   418,   418,   419,   419,
     420,   421,   421,   422,   422,   422,   422,   422,   422,   422,
     422,   422,   422,   422,   422,   422,   422,   422,   422,   422,
     422,   422,   422,   422,   422,   422,   422,   422,   423,   424,
     424,   425,   425,   426,   426,   426,   426,   427,   428,   428,
     429,   429,   430,   430,   430,   430,   430,   430,   430,   430,
     430,   430,   430,   430,   430,   430,   430,   430,   430,   430,
     430,   430,   430,   430,   430,   431,   432,   432,   433,   433,
     433,   433,   433,   433,   433,   433,   433,   433,   433,   433,
     433,   433,   433,   433,   433,   433,   433,   433,   433,   433,
     434,   434,   435,   436,   436,   436,   436,   437,   437,   438,
     439,   440,   441,   441,   442,   443,   443,   444,   445,   446,
     447,   447,   448,   448,   449,   449,   450
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
       1,     2,     1,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     1,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     4,
       3,     3,     2,     3,     4,     3,     4,     3,     4,     5,
       6,     3,     4,     3,     1,     3,     5,     1,     0,     1,
       2,     4,     2,     0,     4,     5,     4,     6,     4,     3,
       4,     1,     1,     1,     1,     1,     1,     1,     5,     7,
       1,     3,     3,     9,     3,     2,     0,     3,     1,     3,
       0,     1,     5,     1,     2,     2,     3,     4,     5,     5,
       5,     5,     6,     7,     3,     3,     3,     5,     1,     1,
       4,     6,     2,     8,     3,     0,     1,     3,     1,     5,
       3,     1,     1,     1,     1,     1,     2,     2,     1,     2,
       1,     2,     2,     1,     2,     2,     2,     2,     1,     1,
       1,     2,     5,     3,     0,     3,     0,     1,     0,     3,
       0,     3,     0,     2,     0,     2,     1,     2,     1,     2,
       1,     3,     0,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     0,     4,     0,     2,     1,     3,
       6,     0,     1,     3,     1,     7,     4,     7,     0,     2,
       1,     1,     3,     0,     1,     3,     3,     5,     1,     3,
       2,     1,     3,     3,     1,     2,     3,     4,     5,     8,
       1,     1,     8,     9,     4,     4,     4,     0,     2,     3,
       4,     4,     2,     2,     4,     0,     3,     1,     3,     0,
       1,     2,     1,     1,    14,     4,     5,     4,     3,     4,
       2,     0,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     0,     2,     3,     4,     4,     4,
       3,     3,     3,     0,     3,     1,     0,     3,     1,     3,
       2,     0,     1,     1,     0,     2,     0,     1,     1,     1,
       2,     3,     1,     1,     3,     1,     3,     1,     3,     2,
       3,     2,     1,     5,     1,     3,     6,     5,     2,     2,
       2,     1,     1,     0,     3,     1,     1,     1,     1,     1,
       0,     3,     5,     5,     5,     4,     4,     4,     2,     4,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     2,
       0,     1,     2,     4,     1,     1,     0,     0,     2,     2,
       0,     1,     0,     1,     3,     1,     3,     4,     1,     1,
       3,     1,     3,     5,     6,     2,     0,     3,     3,     1,
       3,     4,     1,     1,     1,     0,     3,     0,     2,     3,
       2,     2,     4,     0,     1,     0,     1,     1,     6,     1,
       3,     2,     1,     1,     2,     1,     1,     2,     1,     1,
       1,     1,     1,     0,     1,     1,     5,     2,     0,     4,
       1,     1,     1,     1,     1,     2,     1,     3,     3,     3,
       4,     4,     5,     5,     3,     1,     1,     1,     3,     2,
       0,     1,     3,     3,     1,     1,     4,     6,     1,     3,
       3,     4,     4,     5,     1,     0,     1,     1,     0,     3,
       3,     3,     2,     4,     7,     7,     6,     6,     0,     1,
       1,     3,     9,     2,     0,     3,     3,     3,     0,     1,
       1,     1,     1,     3,     6,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     6,
       5,     3,     1,     2,     3,     3,     3,     3,     0,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     1,
       4,     6,     3,     9,     8,     8,     7,     1,     2,     4,
       2,     7,     2,     1,     4,     0,     2,     5,     7,     1,
       2,     2,     5,     4,     5,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      47,     0,     0,     0,     0,     0,     0,     0,   425,   425,
       0,   484,     0,     0,     0,   485,     0,   370,     0,   251,
       0,     0,     0,   250,     0,   425,   433,   285,     0,   396,
       0,   285,     0,     0,     4,    24,    23,    22,     9,    10,
      11,    13,    14,    15,    16,    17,    18,    12,    21,    25,
      26,    20,     0,    19,   271,   248,   264,   326,   270,    27,
      28,    46,    35,    36,    37,    38,    39,    42,    43,    44,
      45,    40,    41,    29,    30,    31,    34,     0,    32,    33,
       5,     0,     6,     8,     7,   271,     0,   531,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   550,   549,   551,   552,   553,   554,
     555,   556,   557,     0,   153,   532,     0,   154,   155,   172,
     508,     0,     0,   424,   428,   430,     0,   175,     0,   175,
       0,   528,   400,   354,   529,   400,     0,   236,     0,   236,
     480,   460,   369,     0,   453,   442,   443,   445,   446,     0,
     448,   451,   450,   449,     0,   439,     0,     0,     0,   458,
     431,   434,   435,   289,   336,   526,     0,     0,     0,     0,
     416,     0,     0,   465,   466,     0,   527,   530,     0,     0,
       0,   403,   394,   397,   378,   395,     0,   397,     0,   416,
       0,   390,     0,     0,     0,     0,   427,     0,     1,     2,
      47,     0,     0,   260,   336,   336,   336,     0,     0,   314,
       0,   265,     0,   568,   558,   263,   262,     0,     0,   156,
     164,   165,   166,     0,     0,     0,   509,     0,     0,     0,
       0,     0,   408,     0,     0,     0,     0,   404,   405,     0,
       0,   277,   401,   381,   380,   645,     0,     0,     0,   411,
     410,   241,     0,   478,   366,   368,   367,   365,   364,   452,
     441,   444,   447,     0,     0,   387,     0,     0,   419,   417,
       0,     0,   436,   437,     0,     0,   301,   293,     0,     0,
     292,     0,     0,     0,   287,   290,   337,   338,     0,   476,
     475,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   646,     0,     0,     0,     0,     0,   385,   397,   371,
       0,     0,   384,   391,   397,     0,   382,   383,   397,   386,
       0,     0,   429,     0,     3,   253,   526,    53,    55,    54,
      57,    56,    58,    59,    61,    60,     0,     0,     0,     0,
     118,     0,     0,   543,    63,    64,    82,   249,    67,    68,
      69,     0,    70,    50,     0,   527,     0,     0,     0,     0,
       0,     0,   314,   266,   315,   483,     0,     0,     0,     0,
       0,     0,     0,     0,   285,     0,   639,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   569,   571,   576,   577,   572,   573,   575,
     574,   594,   593,     0,   643,     0,    48,   170,     0,     0,
     503,   510,     0,     0,     0,     0,     0,   495,   495,   495,
     495,   486,   488,     0,   422,   423,   421,     0,     0,     0,
       0,     0,     0,     0,   248,     0,   237,     0,   235,     0,
     238,   347,   352,     0,     0,   242,   477,   481,   479,   454,
       0,   455,   440,   464,   463,   462,   461,   459,     0,     0,
     457,     0,   432,     0,     0,     0,     0,     0,     0,   286,
       0,   291,   342,   339,   343,   312,   474,   468,     0,     0,
     415,     0,     0,     0,   467,   469,   397,   397,   379,   398,
     399,   375,   397,   392,   376,   389,   377,     0,   129,   136,
       0,   137,     0,     0,     0,    48,     0,     0,     0,     0,
       0,     0,   246,   102,    83,    84,     0,    48,    70,   117,
       0,    71,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   285,   271,   276,   270,
     274,   275,   331,   327,   328,   310,   311,   282,   283,   267,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   595,   597,
     602,   598,   599,   601,   600,   619,   618,   640,   641,     0,
       0,     0,     0,     0,   581,   580,   583,   584,   586,   587,
     588,   590,   589,   591,   592,   585,   579,   582,   578,   567,
     570,   152,   642,     0,     0,   167,     0,     0,     0,     0,
       0,     0,   494,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   560,     0,     0,     0,   562,   174,     0,   406,
       0,     0,     0,   278,   138,   644,   271,     0,   352,     0,
       0,   351,   363,   361,     0,   363,   363,     0,     0,   349,
     412,     0,     0,     0,     0,   418,   420,   456,     0,   298,
     300,   304,   305,     0,   302,     0,   309,   308,   307,   306,
       0,     0,   288,     0,   340,     0,     0,   313,   268,   470,
       0,   409,   413,   471,     0,   374,   373,   372,     0,     0,
     124,     0,     0,     0,     0,     0,     0,   126,     0,     0,
       0,   128,   426,   277,   140,     0,     0,   254,     0,     0,
      65,     0,   123,   119,    62,   101,   100,     0,     0,     0,
      97,    95,    96,    94,    93,    92,   113,    98,     0,     0,
      72,     0,     0,   111,   114,   105,   103,   107,     0,    85,
      86,    87,    88,    89,    91,    90,     0,   135,   134,   133,
     132,    52,    51,   336,   332,   333,   330,     0,     0,     0,
       0,   185,   212,   188,   212,   198,   200,   193,   204,   208,
     206,   184,   183,   199,   204,   190,   182,   210,   210,   181,
     212,   212,     0,     0,   606,   605,   608,   609,   611,   612,
     613,   615,   614,   616,   617,   610,   604,   607,   603,     0,
     596,   168,   169,     0,     0,     0,     0,     0,     0,   635,
     633,     0,     0,   622,    49,   171,   511,   514,   506,   507,
       0,     0,   490,     0,     0,   498,   487,     0,   495,   489,
     414,   563,     0,     0,     0,   559,     0,     0,     0,   176,
     178,   407,     0,   279,   355,   239,   350,   362,   358,     0,
     359,   360,     0,   348,   240,   244,   243,   482,   438,   297,
     299,     0,     0,   295,     0,   341,   277,   277,   345,   344,
     472,   473,   393,   388,   320,     0,   321,     0,   322,     0,
       0,   316,   125,     0,   248,     0,   252,     0,     0,   248,
      49,     0,     0,   120,     0,    99,     0,   112,    73,    74,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   106,
     104,   108,   130,     0,   329,   280,   284,   281,     0,   195,
     194,     0,   186,   207,   191,     0,   189,   187,     0,   201,
     192,   196,   197,     0,   620,     0,     0,     0,     0,     0,
       0,     0,   157,     0,     0,     0,   632,     0,     0,     0,
       0,   518,   504,   505,   214,     0,     0,   492,   496,   497,
     491,     0,   564,   565,   566,   561,     0,   222,     0,     0,
     146,     0,     0,     0,   303,     0,   296,   312,     0,   323,
     317,   318,   319,   127,   141,   139,   142,   247,   255,   258,
       0,     0,   245,    66,     0,   122,   116,     0,   109,    75,
      76,    77,    78,    79,    81,    80,   115,     0,     0,     0,
       0,     0,     0,     0,   637,   158,   160,   159,   161,     0,
       0,     0,   636,     0,     0,     0,     0,     0,   627,     0,
       0,   513,     0,     0,   180,     0,   502,     0,     0,   493,
       0,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   173,   220,   177,     0,     0,   150,   353,   357,     0,
       0,   269,   346,     0,   334,   256,     0,     0,   121,   110,
       0,   211,   203,     0,   205,   209,   621,     0,   162,     0,
     634,     0,     0,   630,     0,     0,   628,     0,     0,   277,
       0,     0,   216,     0,     0,     0,   218,   213,   500,   499,
     501,     0,   233,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   144,     0,   145,   143,   148,   151,
     356,     0,     0,     0,   273,   259,     0,     0,   638,   163,
     631,     0,   626,     0,     0,     0,   314,   517,   515,   516,
       0,   215,   217,   219,   179,   232,   229,   231,   224,   223,
     228,   227,   226,   225,   230,   221,     0,     0,     0,   324,
     335,   257,   202,   629,   624,     0,   625,   272,   521,   522,
     519,   520,   525,   147,   149,     0,   623,     0,     0,   512,
       0,     0,     0,     0,   523,     0,     0,     0,     0,     0,
     294,   524
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    32,    33,    34,   405,   344,   345,   346,   741,   473,
     743,   348,   520,   722,   723,   904,   349,   350,   351,   756,
     506,   562,   563,   713,   714,    37,   980,  1066,  1126,  1127,
    1128,   564,   113,   565,    40,   566,   567,   568,   569,   570,
     571,   572,    41,    42,    43,    44,   225,    45,    46,   573,
      48,   236,   848,   849,   850,   792,   932,   936,   934,   939,
     929,  1044,  1107,  1061,  1129,  1113,    49,   248,   438,    50,
     444,   864,   574,   203,    52,   511,   716,   899,  1000,   575,
     352,    55,    56,    57,   576,    58,   434,   687,   164,   283,
     284,   285,   464,   673,   674,   680,   557,   688,   211,   507,
    1074,   208,   209,   553,   554,   766,  1134,   288,   474,   475,
     877,   878,   441,   442,   657,   858,    59,   258,   143,    60,
      61,   316,   312,   193,   307,   243,   194,    62,   237,   238,
     249,   692,    63,   250,    64,   296,    65,   268,   269,    66,
     426,   124,   322,    67,    68,    69,    70,   162,   274,    71,
     154,   155,   260,   450,    72,   271,    73,   140,   457,    74,
     173,   174,   291,   447,    75,   253,   448,    76,    77,    78,
     421,   422,   627,   970,   967,    79,   230,   410,   411,   961,
    1043,  1182,  1189,   353,   354,   195,   114,   355,    80,    81,
     635,   636,   214,   392,   393,   394,   577,   578,   579,   395,
     580,   581,  1037,  1038,  1039,   582,   819,   820,   957,   583,
     584,   585,   586,    82,    83,    84
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -912
static const yytype_int16 yypact[] =
{
    3095,    39,  2665,   126,  2665,  2665,  2665,   164,   -43,   -43,
     180,  -912,   228,  2769,  2769,   219,  2665,   -79,   798,  -912,
     -19,  2665,   -26,  -912,   798,   -43,    67,    50,   577,   523,
     136,    50,   173,   -40,  -912,  -912,  -912,  -912,  -912,  -912,
    -912,  -912,  -912,  -912,  -912,  -912,  -912,  -912,  -912,  -912,
    -912,  -912,   232,  -912,    -7,   156,  -912,    88,    97,  -912,
    -912,  -912,  -912,  -912,  -912,  -912,  -912,  -912,  -912,  -912,
    -912,  -912,  -912,  -912,  -912,  -912,  -912,   234,  -912,  -912,
    -912,   300,  -912,  -912,  -912,   350,   358,  -912,  -912,  -912,
    -912,  -912,  -912,  -912,  -912,  -912,  -912,  -912,  -912,  -912,
    -912,  -912,  -912,  -912,  -912,  -912,  -912,  -912,  -912,  -912,
    -912,  -912,  -912,   351,  -912,  -912,   367,  -912,   672,  -912,
     314,  2769,   405,  -912,  -912,  -912,   417,   306,   405,   306,
    2769,  -912,   430,  -912,  -912,   430,    62,   312,   405,   312,
     256,  -912,  -912,    53,   305,  -912,   260,  -912,  -912,   323,
    -912,  -912,  -912,  -912,   -60,  -912,  2769,   361,   405,   -38,
    -912,  -912,   -57,   296,    23,  -912,    42,    42,  2794,   444,
     389,  2794,   452,   268,  -912,    42,  -912,  -912,   501,    65,
     337,  -912,  -912,    58,  -912,  -912,   294,    58,   377,   413,
     302,   398,   310,   321,   353,   522,   365,  2769,  -912,  -912,
    3095,  2769,  2433,  -912,    23,    23,    23,   492,     6,   246,
     388,  -912,  2665,   857,  -912,  -912,  -912,   476,  1684,   524,
     529,  -912,  -912,   583,   588,   531,  -912,  2794,   464,   429,
     356,    43,  -912,   202,   570,   591,  2769,   378,  -912,   496,
    2769,   419,  -912,  -912,  -912,  -912,   513,   519,   627,  -912,
     395,  2769,   618,  -912,  -912,  -912,  -912,  -912,  -912,  -912,
    -912,  -912,  -912,  1784,   798,  -912,    53,   445,  -912,   399,
    1784,   532,  -912,  -912,   635,   606,  -912,  -912,   613,   615,
    -912,   621,   623,   -50,   296,  -912,  -912,  -912,  1914,  -912,
    -912,  2433,  2433,    42,  2794,   405,   640,    42,  2794,  1182,
    2433,  -912,  2769,  2769,  2769,   668,  2433,  -912,    58,  -912,
    2769,    84,  -912,  -912,    58,   670,  -912,  -912,    58,  -912,
    1102,   600,  -912,   515,  -912,    54,   336,  -912,  -912,  -912,
    -912,  -912,  -912,  -912,  -912,  -912,  2433,  2433,  2433,  1947,
    2433,   646,   649,   655,  -912,  -912,  -912,  3516,  -912,  -912,
    -912,   656,  -912,  -912,   657,   658,   115,   115,   115,  2433,
     110,   110,   592,  -912,  -912,  -912,  2539,  2433,  2987,   465,
     470,  2665,  2433,  2433,  1651,  1182,  -912,   473,   474,   480,
     484,   488,   489,   491,   502,   504,   505,   506,   508,   521,
     530,   533,   626,   857,  -912,  -912,  -912,  -912,  -912,  -912,
    -912,  -912,  -912,    39,  -912,     5,  3516,  -912,   554,   744,
     550,  -912,   740,   806,   807,   681,   691,   684,   684,   684,
       0,   628,  -912,   759,  -912,  -912,  -912,   535,   756,   826,
     405,   792,   724,  2043,   156,   866,  -912,  1296,   637,  2475,
     516,  2599,  -912,   405,   190,  -912,  -912,  -912,   639,  -912,
     686,  -912,  -912,  -912,  -912,  -912,  -912,  -912,   405,   405,
    -912,   405,  -912,   874,    13,   269,  2769,   293,  2769,  -912,
     296,  -912,  -912,  1350,  -912,   -34,  3516,  3516,  2433,    42,
    -912,   875,  2433,    42,  -912,  3516,    58,    58,  -912,  -912,
    3516,  -912,    58,   840,  -912,   647,  -912,   841,  -912,  -912,
    2200,  -912,  2276,  2357,    17,  3347,  2433,   843,   713,  2794,
    1420,   693,  -912,  3555,  -912,  -912,   653,  3419,   371,  3516,
     692,  -912,  2794,  2433,  2433,   338,  2433,  2433,  2433,  2433,
    2433,  2433,  2433,  2433,  2514,   850,   748,  2433,  2433,  2433,
    2433,  2433,  2433,  2433,    53,  2632,    50,  -912,   877,  -912,
     877,  -912,  1712,   662,  -912,  -912,  -912,   -53,   758,  -912,
    2975,  1450,   666,   667,   676,   677,   678,   683,   685,   687,
     688,   689,   690,   695,   696,   697,   698,   800,  2987,  -912,
    -912,  -912,  -912,  -912,  -912,  -912,  -912,  -912,  -912,   469,
    1569,  2007,   -47,   227,  -912,  -912,  -912,  -912,  -912,  -912,
    -912,  -912,  -912,  -912,  -912,  -912,  -912,  -912,  -912,  -912,
    -912,  -912,  -912,  2433,   919,  -912,  2794,   706,   913,   922,
     908,   909,  -912,  2794,  2794,  2794,  2769,  2794,   277,   875,
    3169,   921,  -912,   923,   924,    21,  -912,  -912,  2713,  -912,
     875,  2769,  2433,  3516,  -912,  -912,  1612,   516,   898,   627,
    2769,  -912,   793,  -912,   627,   793,   793,   812,  2769,  -912,
    -912,  2769,  2769,   618,   405,  -912,  -912,   395,   910,  -912,
    -912,  -912,  -912,    26,  -912,   719,  -912,  -912,  -912,  -912,
     914,  2769,   296,  2665,  -912,  2114,  1914,  -912,  -912,  3516,
    2433,  -912,  -912,  3516,  2433,  -912,  -912,  -912,   918,   955,
    -912,  2433,  2755,  2433,  3368,  2433,  3398,  -912,  3169,  2433,
    3462,  -912,  -912,  -109,  -912,   937,    32,  -912,   925,  2433,
    -912,  2433,   -22,  -912,  -912,  3536,  3555,  2433,  2514,   850,
    1117,  1117,  1117,  1117,  1117,  1117,  1243,   782,  2514,  2514,
    -912,   738,  1947,  -912,  -912,  -912,  -912,  -912,   384,   510,
     510,   928,   928,   928,   928,  -912,   926,  -912,  -912,  -912,
    -912,  -912,  -912,    23,  -912,  -912,  -912,  2433,   110,   110,
     110,  -912,   930,  -912,   930,  -912,  -912,  -912,   931,   813,
     932,  -912,  -912,  -912,   931,  -912,  -912,   933,   933,  -912,
     930,   930,   -18,  2987,  -912,  -912,  -912,  -912,  -912,  -912,
    -912,  -912,  -912,  -912,  -912,  -912,  -912,  -912,  -912,   929,
    -912,   834,   846,   847,   852,   963,   618,   920,  2433,   225,
    -912,  2987,   618,  -912,  3516,  -912,  -912,   902,  -912,  -912,
     981,   983,  -912,  3169,    -9,   247,  -912,   801,   684,  -912,
    -912,  -912,  3169,  3169,  3169,  -912,   451,   858,    37,  -912,
    -912,  -912,   951,  3516,   934,   516,  -912,  -912,  -912,   362,
    -912,  -912,   627,  -912,  -912,  -912,  -912,  -912,   395,  -912,
    -912,   269,  2769,  -912,   952,  -912,   419,   -70,   516,  -912,
    3516,  3516,  -912,  -912,  3516,  2433,  3516,  2433,  3516,  2433,
     953,  3516,  -912,  2794,   156,  2433,    39,  2794,  2433,   -99,
    3492,  2066,  2433,  -912,   889,   782,   791,  -912,  -912,  -912,
    2514,  2514,  2514,  2514,  2514,  2514,  2514,  2514,    41,  -912,
    -912,  -912,  -912,  1914,  -912,  -912,  -912,  -912,   991,  -912,
    -912,   993,  -912,  -912,  -912,   994,  -912,  -912,   995,  -912,
    -912,  -912,  -912,   706,  -912,   900,   768,   618,   618,   618,
     618,   878,   639,  1000,  2880,  2987,  -912,   904,   313,   -12,
    1004,   844,  -912,  -912,  -912,    98,   309,  -912,  -912,  -912,
    -912,  2665,  -912,  -912,  -912,  -912,   970,   536,  2713,  2794,
     809,  2769,  2433,   525,  -912,   777,  -912,     6,   627,   894,
    3516,  3516,  3516,  -912,  -912,  -912,  3516,  -912,  -912,  3516,
      51,   975,  -912,  -912,  2433,  3516,  -912,  2514,   912,   743,
     743,   980,   980,   980,   980,  -912,  -912,    83,   978,    55,
     979,   986,   788,   974,  -912,   639,   639,   639,   639,   618,
     896,  2987,  -912,   956,  2433,  2987,   906,   409,  -912,   936,
     627,  -912,  1008,   814,    33,  1024,  -912,  1025,   706,  -912,
    2794,  1013,  1013,  1013,  1013,  1013,  1013,  1013,  1013,  1013,
    1013,   808,  -912,  -912,    61,  1001,   536,  -912,  3516,  2433,
    2769,  -912,   516,   965,   927,  -912,  2433,  2433,  3516,   912,
     627,  -912,  -912,  1038,  -912,  -912,  -912,   811,   639,   618,
    -912,   816,  2929,  -912,   817,   935,  -912,   948,   942,   -70,
     254,  1028,  -912,  1043,   706,   938,  -912,  -912,  -912,  -912,
    -912,    71,  -912,  1050,  1051,   882,  1054,  1056,  1062,  1065,
    1067,  1068,  1066,   536,  -912,  2794,  -912,   842,  -912,  -912,
    3516,  1035,  2433,  2433,  -912,  3516,    73,  1040,  -912,   639,
    -912,  2987,  -912,   849,   959,   854,   592,  -912,  -912,  -912,
     368,  -912,  -912,  -912,  -912,  -912,  -912,  -912,  -912,  -912,
    -912,  -912,  -912,  -912,  -912,  -912,    75,   536,  2769,   845,
    3516,  -912,  -912,  -912,  -912,   855,  -912,  -912,  -912,  -912,
    -912,  -912,    -4,  -912,  -912,   851,  -912,  1069,  1070,  -912,
    2769,  1084,  1087,  1053,  -912,   879,  2769,  1075,  1060,  1097,
    -912,  -912
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -912,  -912,  -912,   903,  -311,  -912,  -601,  -356,  -376,   725,
     380,  -912,  -912,  -912,   391,  -912,  1089,  -912,  -912,  -912,
    -912,    24,    45,  -912,   226,  -912,  -912,  -912,  -912,  -912,
     -46,    57,    31,    59,  -912,  -165,  -164,  -163,  -161,  -158,
    -157,  -128,  -912,  -912,  -912,  -912,   544,  -912,  -912,    63,
    -912,  1009,  -912,   159,   517,  -529,   355,  -912,  -912,   369,
    -657,  -912,  -912,  -912,  -905,    72,  -912,  1002,  -912,  -912,
    -912,  -912,    69,  -409,  -912,  -912,  -911,  -912,    79,     8,
      40,     9,  -912,   122,  -102,   213,  -686,   954,   -13,  -912,
     694,  -261,  -912,  -912,   288,  -912,  -328,   174,  -204,  -912,
    -912,  -912,  -912,  -912,   393,  -912,  -912,  -184,   477,  -359,
     125,  -235,    47,   730,  -912,  -146,  -912,  -912,  -912,  -912,
    -912,  -912,  -912,  -912,  -155,  1034,  -912,  -912,  -912,   741,
     -84,  -509,  -912,  -414,  -912,   984,  -912,   711,  -912,  -912,
    -912,    99,  -912,  -912,  -912,  -912,  -912,  -912,  -912,  -912,
    1148,   911,  -912,   907,  -912,  -912,  -912,    30,  -912,  -912,
     799,   881,  -136,   520,  -912,  -912,  -349,  -912,  -912,  -912,
    -912,   558,   155,  -912,  -912,  -912,  -912,  -912,   562,  -912,
    -912,  -912,  -912,   -21,    16,  -912,   -15,    -2,  -912,  -912,
    -912,   341,  -912,  -912,  -912,   789,  -751,  -912,   611,  -912,
    -100,   -90,  -912,   153,   154,   -83,  -912,   373,  -912,   -81,
     -77,   -72,   -71,  -912,  -912,  -912
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -531
static const yytype_int16 yytable[] =
{
     115,   141,   115,   115,   115,   363,   141,   175,    53,   504,
      86,   134,   134,   440,   115,   592,   827,   560,   197,   115,
     356,   357,   358,   471,    35,   644,   176,   894,   516,   133,
     133,   292,   309,   558,  -261,   117,   118,   119,   233,   300,
      54,    85,   945,  1102,   239,    36,   612,   667,   381,   382,
     383,   157,   384,  1103,   669,   385,   386,    38,   707,    39,
     132,   135,   845,    47,   199,   245,   289,   870,  1064,    51,
     958,   469,  1062,   896,   267,  1187,   943,   685,   977,     1,
     902,   822,  1016,   622,   263,   387,   305,   433,   232,   286,
     768,   965,  1075,     1,   510,   302,  1082,  -261,   202,  1040,
     360,   841,  1124,   204,   205,   206,   270,   417,   125,   361,
     418,   391,  1154,   396,  1171,   555,  1183,   930,  1045,   134,
     840,   287,   556,   397,   160,   893,   433,  1104,   134,   116,
     398,   851,   399,   941,   942,  1001,   400,   133,  -314,  1111,
     360,   401,   402,   419,   272,   273,   133,   293,    12,   361,
     297,   257,   142,   491,   134,     1,   123,   478,   559,   494,
     966,   482,   156,   496,   988,   158,   176,   254,   231,   176,
     163,   493,   133,   198,   264,   721,   303,   241,   740,   890,
      19,   769,   161,    54,   470,  1105,   246,   686,   255,   626,
     987,   989,  1046,   200,  1080,   134,   264,   141,   420,   134,
     686,  -314,   647,   265,  1032,    27,   412,   210,    53,    23,
     115,   480,   256,   133,  1166,   944,  1188,   133,  1165,    27,
      27,   390,   663,   126,    35,   176,  -261,   480,   381,   382,
     383,   290,   384,   207,   134,   385,   386,   377,   134,   613,
      54,  1106,   365,    31,   323,    36,   134,   670,   325,   134,
     868,   613,   133,    54,   306,   846,   133,    38,   378,    39,
     871,   134,   136,    47,   133,   387,   897,   133,   134,    51,
     379,   978,   380,   479,   456,   613,   388,   483,   175,   451,
    1090,   546,   389,   429,  1093,  1076,   451,   432,   439,  1083,
     453,   391,   176,   396,  -314,   897,   176,   176,   445,   275,
     134,   134,   134,   397,   964,   897,    54,  1076,   134,   897,
     398,   454,   399,   972,   973,   974,   400,   686,   133,   133,
     133,   401,   402,   968,   196,   423,   133,   955,  1147,  1047,
    -314,   695,   696,   512,   661,   455,   276,   697,   424,   130,
     120,   417,  1022,   690,   418,   121,   239,   694,    86,   486,
     487,   488,   906,   202,   175,   122,   210,   492,  1034,   660,
     201,   127,   908,   909,   115,    54,   727,   728,   729,   115,
     213,   128,   740,   176,   665,   267,  -530,   419,  -528,   518,
    -325,   521,   740,   740,   129,   212,  -271,  -271,  -271,  -325,
    1173,   215,   919,  1148,   920,   921,   547,   547,   547,   216,
     137,   390,   589,  1048,   969,   217,   676,   218,    54,   232,
     138,   611,   215,  1146,   855,  1035,  1036,   377,   277,   859,
     234,   471,   818,   139,   662,   278,   279,  1149,   226,   425,
     235,   918,   838,    54,   242,   134,   247,   134,   378,   134,
     925,   926,   927,    54,   415,   416,    86,  1110,   252,   280,
     379,   261,   380,   133,  1034,   651,   388,   659,   684,   281,
     823,   299,   389,   259,   134,   630,   134,   952,   677,   262,
     678,   115,   266,   959,   652,   671,   672,   646,   548,   550,
     551,   631,   133,   227,   133,   995,   294,   653,   715,   717,
    1002,   654,   228,   229,   298,   655,   679,   633,   634,   295,
     282,   724,   299,  1152,   301,  -271,   982,   176,   176,   860,
     861,  1035,  1095,   675,  -271,   681,  -271,   308,   304,    86,
     176,   310,   656,   311,   762,   314,   177,   811,   812,   813,
     814,   815,   315,   763,  1008,  1009,  1010,  1011,  1012,  1013,
    1014,  1015,   317,   176,   539,   540,   541,   542,   543,   630,
      85,   318,   760,   319,   740,   740,   740,   740,   740,   740,
     740,   740,   320,   321,  1017,   631,   178,   359,   757,   549,
     549,   549,   623,   624,   625,   744,   632,  1178,   364,   923,
     165,   633,   634,  1179,    54,  1180,   403,  -168,   407,   758,
     166,   167,  -169,   408,   409,   412,  1181,   816,  1025,  1026,
    1027,  1028,   833,   834,   835,   413,   837,   179,   180,   414,
     427,   428,   430,   759,   176,   433,  1051,   833,    54,   431,
     435,   176,   176,   176,   134,   176,   436,   983,   652,   443,
     131,  1079,   446,   459,   458,   181,   176,   652,   182,   134,
     462,   653,   133,   461,   134,   654,   463,   134,   134,   655,
     653,   740,   134,   465,   654,   466,   134,   133,   655,   134,
     134,   467,   651,   468,   481,   133,   856,   437,   875,  1069,
     133,   183,   489,   836,   863,   495,   656,   133,   133,   134,
    1088,   115,   508,   134,   509,   656,     1,   184,   852,   439,
     185,   522,   168,   169,   439,  -131,   544,   133,   587,   545,
    -529,   133,   210,   588,   186,   187,   594,   595,   865,   866,
     327,   328,   329,   596,   330,   331,   332,   597,   333,   334,
     335,   598,   599,  -402,   600,   439,   170,   188,   874,   609,
     219,   220,   221,   222,   223,   601,   189,   602,   603,   604,
    1139,   605,   190,   614,   171,   172,  1052,  1053,  1054,   615,
    1055,    86,  1056,  1072,   606,   191,   745,   910,   746,   747,
    1057,  1058,  1059,   607,   617,  1060,   608,   622,   748,   744,
     911,   912,   913,   914,   915,   916,   917,   913,   914,   915,
     916,   917,   518,   224,   616,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
    1007,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,  1169,   620,   911,   912,   913,   914,   915,   916,   917,
     618,   619,   621,    54,   629,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     134,    54,   628,   637,   144,   145,   638,   640,   641,   645,
     134,   649,   715,   663,   342,   664,   998,   668,   133,   691,
     698,   699,   700,   146,   711,   712,   718,   719,   133,   721,
     742,   176,   770,   147,   206,   176,   767,     1,   148,   794,
     795,   366,   439,   809,   997,   367,   368,   369,   370,   796,
     797,   798,     4,   371,     6,   149,   799,   828,   800,   985,
     801,   802,   803,   804,   825,   150,   829,   347,   805,   806,
     807,   808,   830,   831,   372,   842,    54,   843,   844,   854,
     857,   862,  1177,   406,   911,   912,   913,   914,   915,   916,
     917,   869,    12,   872,   151,   873,  1049,   833,   717,   882,
     883,   895,   947,   933,   152,   898,   543,   922,   951,   115,
     928,   931,   935,   938,   948,   949,   176,   176,   946,   134,
     950,   373,   960,   953,    19,   962,   134,   963,   153,   976,
     971,   979,  1006,   986,   993,    54,  1018,  1067,  1019,  1020,
    1021,  1024,   981,  1023,   133,  1030,  1029,  1033,  1041,  1042,
    1050,  1070,  1073,    23,  1065,  1077,   476,   477,   917,  1081,
    1084,  1086,  1087,   374,  1089,   485,   375,  1085,   439,   717,
    1094,   490,  1100,  1091,  1108,  1109,  1101,  1112,   134,  1098,
    1132,  1125,  1123,  1137,  1138,   505,  1133,    31,   176,  1140,
    1142,  1144,  1150,  1151,  1155,  1156,   133,  1157,  1158,  1143,
    1159,   513,   514,   515,   517,   519,  1145,  1160,   134,  1153,
    1161,    54,  1162,  1163,  1164,    54,  1167,  1168,   134,   613,
     439,  1172,  1174,  1175,   552,  1190,   133,  1176,  1186,  1194,
     376,  1195,   561,  1191,  1192,  1196,   133,   590,   591,  1199,
    1197,  1200,  1201,   324,   717,   326,   327,   328,   329,   907,
     330,   331,   332,   903,   333,   334,   335,  1131,   192,   994,
     439,  1184,   336,   176,  1114,  1115,  1116,  1117,  1118,  1119,
    1120,  1121,  1122,   817,   337,   338,   497,  1063,   240,   937,
     832,   251,   339,   498,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,  1136,   940,   643,   984,
     924,  1071,   362,   879,   682,  1099,   134,   648,   499,   244,
     666,   639,   159,   313,   593,   452,   500,   460,   826,   340,
     484,    54,   610,   867,   133,   165,   839,   975,   134,   810,
    1096,  1097,   956,     0,   134,   166,   167,     0,     0,     0,
     501,     0,     0,   689,     0,     0,   133,   693,     0,   341,
       0,     0,   133,     0,     0,  1185,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   702,     0,   704,   706,     0,
       0,   710,     0,     0,   502,     0,     0,  1193,     0,     0,
       0,     0,     0,  1198,     0,     0,     0,     0,   725,   726,
       0,   730,   731,   732,   733,   734,   735,   736,   737,     0,
       0,     0,   749,   750,   751,   752,   753,   754,   755,     0,
     342,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,     0,     0,     0,     0,     0,     0,     0,   503,
       0,     0,     0,     0,     0,     0,     0,   168,   169,   131,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
     343,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,     0,   437,     0,   824,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   171,
     172,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   853,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,     0,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   880,     0,     0,   683,   881,
       0,     0,     0,   165,     0,     0,   884,     0,   886,     0,
     888,     0,     0,     0,   891,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   900,     0,   901,     0,     0,     0,
       0,     0,   905,     0,     0,     0,     0,     0,     0,     0,
       1,     0,    27,     0,     0,     0,     0,   406,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,     0,
       0,     0,   552,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   793,     0,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   954,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,     0,     0,     0,    27,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,     0,     0,
     990,     0,   991,     0,   992,   131,     0,     0,     0,     0,
     996,     0,     0,   999,     0,     0,     0,  1005,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   215,   326,   327,   328,   329,     0,   330,
     331,   332,     0,   333,   334,   335,     0,     0,     0,     0,
       0,   336,     0,     0,     0,     0,     0,     0,     0,     0,
     650,     0,     0,   337,   338,   472,     0,   326,   327,   328,
     329,   339,   330,   331,   332,     0,   333,   334,   335,     0,
       0,     0,     0,     0,   336,     0,     0,  1068,     0,     0,
       0,     0,     0,     0,     0,     0,   337,   338,     0,     0,
       0,     0,     0,     0,   339,   404,     0,     0,   340,  1078,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,     0,     0,     0,     0,     0,     0,     0,   341,  1092,
       0,   340,     0,     0,     0,     0,   818,     0,     0,     0,
       0,   163,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   764,     0,     0,     0,     0,     0,   131,     0,     0,
       0,   341,     0,     0,  1130,     0,     0,     0,     0,     0,
       0,  1135,   999,     0,     0,     0,     0,     0,   765,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   449,   342,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,     0,     0,     0,     0,     0,
       0,     0,   342,     0,     0,     0,     0,   406,  1170,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,   343,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,     0,     0,     0,     0,     0,     0,
       0,     0,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   343,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   326,   327,   328,
     329,     0,   330,   331,   332,     0,   333,   334,   335,     0,
       0,     0,     0,     0,   336,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   337,   338,   472,     0,
     326,   327,   328,   329,   339,   330,   331,   332,     0,   333,
     334,   335,     0,     0,     0,     0,     0,   336,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   337,
     338,     0,     0,     0,     0,     0,     0,   339,     0,     0,
       0,   340,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,     0,     0,     0,
       0,   341,     0,     0,   340,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   326,   327,   328,   329,
     642,   330,   331,   332,   341,   333,   334,   335,     0,     0,
       0,     0,     0,   336,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   337,   338,     0,     0,     0,
       0,     0,   342,   339,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,   342,     0,   131,     0,     0,
     340,     0,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   343,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,     0,     0,     0,
     341,     0,     0,     0,   437,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,   343,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     821,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   326,   327,   328,   329,     0,   330,   331,
     332,   342,   333,   334,   335,   876,     0,     0,     0,     0,
     336,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   337,   338,     0,     0,     0,     0,     0,     0,
     339,     0,     0,     0,     0,     0,     0,     0,     0,  1004,
       0,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,   343,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,     0,   340,     0,   326,
     327,   328,   329,     0,   330,   331,   332,     0,   333,   334,
     335,     0,     0,     0,     0,     0,   336,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   341,   337,   338,
       0,   701,     0,     0,     0,     0,   339,     0,     0,     0,
       0,     0,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,     0,     0,     0,
       0,     0,     0,   340,     0,     0,     0,     0,     0,     0,
     326,   327,   328,   329,     0,   330,   331,   332,   342,   333,
     334,   335,     0,     0,     0,     0,     0,   336,     0,     0,
       0,     0,     0,   341,     0,     0,     0,   703,     0,   337,
     338,     0,     0,     0,     0,     0,     0,   339,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,   343,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,     0,   340,     0,   326,   327,   328,   329,
       0,   330,   331,   332,   342,   333,   334,   335,     0,     0,
       0,     0,     0,   336,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   341,   337,   338,     0,   705,     0,
       0,     0,     0,   339,     0,     0,     0,     0,   131,     0,
       0,     0,     0,     0,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,   343,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,     0,
     340,     0,     0,     0,     0,     0,     0,   326,   327,   328,
     329,     0,   330,   331,   332,   342,   333,   334,   335,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     341,     0,    87,   650,     0,     0,   738,   739,     0,     0,
       0,     0,     0,   446,   339,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,   343,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
       0,   340,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   342,   131,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   341,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   165,     0,     0,     0,     0,
       0,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,   343,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   761,   658,    87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   342,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,     0,     0,
       0,     0,     0,     0,     0,     0,   165,     0,     0,     0,
       0,     0,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   343,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   131,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,     0,     0,     0,   165,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,     0,     0,     0,     0,     0,     0,     0,     0,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   847,   885,     0,     0,     0,
       0,     0,     0,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,     0,
       0,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,     0,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,     1,     0,     0,
       0,     2,     0,     0,     0,   367,   368,   369,   370,     0,
       0,     0,     4,   371,     6,     0,   771,   772,   773,     0,
       0,     0,     0,   774,     0,     0,     0,     0,     0,     0,
       0,   775,     0,  1031,   372,   776,   777,     0,   778,     0,
       0,     0,     0,     0,   779,     0,     0,     0,     0,     0,
       0,     0,    12,     0,   780,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   781,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   373,  1141,   782,    19,   783,     0,   784,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   785,
       0,     0,     0,     0,     0,     1,     0,     0,     0,     2,
       0,     0,     0,    23,     0,     0,   786,     0,     3,     0,
       4,     5,     6,   374,     0,     0,   375,     0,     0,   787,
     788,   789,     7,     0,     0,     8,     0,     0,     0,   790,
     791,     0,     0,     0,     0,     0,     9,    31,     0,     0,
      10,     0,     0,     0,     0,     0,     0,    11,     0,     0,
      12,    13,    14,     0,     0,    15,     0,     0,     0,     0,
       0,    16,     0,    17,     0,     0,     0,     0,     0,   663,
       0,     0,    18,     0,     0,     0,     0,     0,     0,     0,
     376,     0,    19,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
     771,   772,   773,     0,     0,     0,    21,   774,     0,     0,
      22,    23,     0,     0,    24,   775,    25,    26,     0,   776,
     777,    27,   778,     0,    28,    29,     0,     0,   779,    30,
       0,     0,     0,     0,     0,     0,     0,     0,   780,     0,
       0,     0,     0,     0,     0,    31,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   781,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   782,     0,   783,
       0,   784,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   785,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     786,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   787,   788,   789,     0,     0,     0,     0,
       0,     0,     0,   790,   791,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,     0,     0,     0,
       0,     0,     0,     0,     0,   708,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   709,     0,
     720,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   887,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,     0,     0,   892,     0,     0,     0,     0,     0,   889,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,     0,     0,  1003,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   524,   525,   526,   527,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543
};

static const yytype_int16 yycheck[] =
{
       2,    16,     4,     5,     6,   209,    21,    28,     0,   320,
       1,    13,    14,   248,    16,   374,   617,   366,    31,    21,
     204,   205,   206,   284,     0,   434,    28,   713,   339,    13,
      14,   167,   187,   361,    41,     4,     5,     6,   122,   175,
       0,     1,   793,    10,   128,     0,    41,   461,   213,   213,
     213,    21,   213,    20,    41,   213,   213,     0,    41,     0,
      13,    14,    41,     0,   104,     3,    24,    41,   979,     0,
     821,   121,   977,    41,   158,    79,    94,   111,    41,    40,
     102,   128,    41,    83,   144,   213,    28,   196,     4,    66,
     143,   100,    41,    40,    40,    30,    41,   104,   197,   111,
     134,   630,    41,    15,    16,    17,   144,    64,     9,   143,
      67,   213,    41,   213,    41,     5,    41,   774,    20,   121,
     629,    98,    12,   213,    25,   234,   196,    94,   130,     3,
     213,   640,   213,   790,   791,   234,   213,   121,    41,  1050,
     134,   213,   213,   100,   201,   202,   130,   168,    95,   143,
     171,   143,   231,   308,   156,    40,   199,   293,   362,   314,
     169,   297,   181,   318,   234,   191,   168,   143,   121,   171,
     120,    87,   156,     0,   234,   197,   111,   130,   534,   708,
     127,   234,   115,   143,   234,   152,   124,   234,   143,   189,
     876,   877,    94,   233,   111,   197,   234,   212,   155,   201,
     234,   104,   437,   156,   955,   166,   227,   110,   200,   156,
     212,   295,   143,   197,  1125,   233,   220,   201,  1123,   166,
     166,   213,   234,    43,   200,   227,   233,   311,   393,   393,
     393,   189,   393,   145,   236,   393,   393,   213,   240,   234,
     200,   208,   212,   190,   197,   200,   248,   234,   201,   251,
     664,   234,   236,   213,   196,   234,   240,   200,   213,   200,
     234,   263,    43,   200,   248,   393,   234,   251,   270,   200,
     213,   234,   213,   294,   266,   234,   213,   298,   299,   263,
    1031,   166,   213,   236,  1035,   234,   270,   240,   248,   234,
     266,   393,   294,   393,   197,   234,   298,   299,   251,     3,
     302,   303,   304,   393,   833,   234,   266,   234,   310,   234,
     393,   266,   393,   842,   843,   844,   393,   234,   302,   303,
     304,   393,   393,    76,   188,   123,   310,   102,    74,    20,
     233,   486,   487,   325,   144,   266,    40,   492,   136,   111,
     176,    64,   943,   479,    67,   181,   430,   483,   339,   302,
     303,   304,   728,   197,   375,   191,   110,   310,    45,   443,
     128,   181,   738,   739,   366,   325,    28,    29,    30,   371,
      70,   191,   728,   375,   458,   459,    40,   100,    42,   339,
     134,   341,   738,   739,   204,   151,    15,    16,    17,   143,
    1141,    41,     8,   139,    10,    11,   356,   357,   358,    41,
     181,   393,   371,    94,   157,    54,   113,    40,   368,     4,
     191,   403,    41,  1099,   649,   102,   103,   393,   122,   654,
       3,   682,   197,   204,   234,   129,   130,   173,   114,   227,
     124,   742,   155,   393,     4,   437,   124,   439,   393,   441,
     768,   769,   770,   403,    88,    89,   437,  1048,   192,   153,
     393,   191,   393,   437,    45,   439,   393,   441,   473,   163,
     233,   234,   393,   158,   466,    14,   468,   816,   175,   146,
     177,   473,   111,   822,   112,   206,   207,   437,   356,   357,
     358,    30,   466,   169,   468,   894,    42,   125,   509,   510,
     899,   129,   178,   179,    42,   133,   203,    46,    47,   110,
     204,   522,   234,  1104,     3,   134,   144,   509,   510,   655,
     656,   102,   103,   466,   143,   468,   145,   223,   181,   510,
     522,   144,   160,   110,   545,   223,     3,    58,    59,    60,
      61,    62,   134,   546,   910,   911,   912,   913,   914,   915,
     916,   917,   232,   545,    34,    35,    36,    37,    38,    14,
     510,   230,   544,   200,   910,   911,   912,   913,   914,   915,
     916,   917,    40,   198,   923,    30,    43,    75,   544,   356,
     357,   358,   417,   418,   419,   535,    41,   209,   190,   763,
       3,    46,    47,   215,   544,   217,   110,    63,     5,   544,
      13,    14,    63,     5,    63,   616,   228,   128,   947,   948,
     949,   950,   623,   624,   625,   141,   627,    84,    85,   180,
      40,    20,   234,   544,   616,   196,    80,   638,   578,   123,
     107,   623,   624,   625,   626,   627,   107,   862,   112,   234,
       3,  1007,    14,   234,   189,   112,   638,   112,   115,   641,
       5,   125,   626,   111,   646,   129,    40,   649,   650,   133,
     125,  1007,   654,    40,   129,    40,   658,   641,   133,   661,
     662,    40,   646,    40,    24,   649,   650,    40,   683,   144,
     654,   148,     4,   626,   658,     5,   160,   661,   662,   681,
    1029,   683,    82,   685,   169,   160,    40,   164,   641,   649,
     167,    42,   115,   116,   654,    40,    40,   681,   233,    42,
      42,   685,   110,   233,   181,   182,   233,   233,   661,   662,
       4,     5,     6,   233,     8,     9,    10,   233,    12,    13,
      14,   233,   233,   200,   233,   685,   149,   204,   681,   103,
      58,    59,    60,    61,    62,   233,   213,   233,   233,   233,
    1089,   233,   219,   189,   167,   168,   210,   211,   212,     5,
     214,   742,   216,   988,   233,   232,     8,    19,    10,    11,
     224,   225,   226,   233,    24,   229,   233,    83,    20,   729,
      32,    33,    34,    35,    36,    37,    38,    34,    35,    36,
      37,    38,   742,   111,   234,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
      19,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,  1132,   141,    32,    33,    34,    35,    36,    37,    38,
      24,    24,   141,   793,    75,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     862,   821,   234,   107,    66,    67,    40,    75,   144,     3,
     872,   234,   893,   234,   168,   189,   897,     3,   862,     4,
      40,   234,    41,    85,    41,   172,   193,   234,   872,   197,
      40,   893,   134,    95,    17,   897,   234,    40,   100,   233,
     233,    44,   862,   103,   896,    48,    49,    50,    51,   233,
     233,   233,    55,    56,    57,   117,   233,     4,   233,   872,
     233,   233,   233,   233,     5,   127,     4,   202,   233,   233,
     233,   233,    24,    24,    77,    14,   896,    14,    14,    41,
     147,   129,  1146,   218,    32,    33,    34,    35,    36,    37,
      38,    41,    95,   234,   156,    41,   971,   978,   979,    41,
       5,    24,   128,   150,   166,    40,    38,    41,     5,   971,
      40,    40,    40,    40,   128,   128,   978,   979,    49,   981,
     128,   124,    80,    63,   127,     4,   988,     4,   190,   131,
     189,    40,   103,    41,    41,   955,     5,   981,     5,     5,
       5,   233,    68,   103,   988,     5,   128,   103,     4,   165,
      40,   234,   118,   156,   205,    40,   291,   292,    38,    41,
      41,   233,    48,   166,   128,   300,   169,    41,   988,  1050,
     124,   306,    24,    77,    10,    10,   222,    24,  1040,   103,
      75,    40,   234,     5,   233,   320,   119,   190,  1050,   233,
     233,   103,    24,    10,     4,     4,  1040,   175,     4,   124,
       4,   336,   337,   338,   339,   340,   124,     5,  1070,   131,
       5,  1031,     5,     5,     8,  1035,   234,    42,  1080,   234,
    1040,    41,   233,   124,   359,   234,  1070,   233,   233,     5,
     233,     4,   367,    24,    24,    42,  1080,   372,   373,    24,
     221,    41,     5,   200,  1125,     3,     4,     5,     6,   729,
       8,     9,    10,   722,    12,    13,    14,  1070,    29,   893,
    1080,  1167,    20,  1125,  1052,  1053,  1054,  1055,  1056,  1057,
    1058,  1059,  1060,   589,    32,    33,    34,   978,   129,   784,
     623,   139,    40,    41,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,  1077,   788,   433,   871,
     767,   987,   208,   686,   470,  1040,  1168,   437,    66,   135,
     459,   430,    24,   189,   375,   264,    74,   270,   616,    77,
     299,  1141,   393,   663,  1168,     3,   628,   846,  1190,   578,
    1037,  1037,   819,    -1,  1196,    13,    14,    -1,    -1,    -1,
      98,    -1,    -1,   478,    -1,    -1,  1190,   482,    -1,   107,
      -1,    -1,  1196,    -1,    -1,  1168,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   500,    -1,   502,   503,    -1,
      -1,   506,    -1,    -1,   132,    -1,    -1,  1190,    -1,    -1,
      -1,    -1,    -1,  1196,    -1,    -1,    -1,    -1,   523,   524,
      -1,   526,   527,   528,   529,   530,   531,   532,   533,    -1,
      -1,    -1,   537,   538,   539,   540,   541,   542,   543,    -1,
     168,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   187,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,   116,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,    -1,    40,    -1,   613,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,
     168,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   642,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   690,    -1,    -1,    68,   694,
      -1,    -1,    -1,     3,    -1,    -1,   701,    -1,   703,    -1,
     705,    -1,    -1,    -1,   709,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   719,    -1,   721,    -1,    -1,    -1,
      -1,    -1,   727,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,   166,    -1,    -1,    -1,    -1,   742,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    -1,   767,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   818,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,   166,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    -1,
     885,    -1,   887,    -1,   889,     3,    -1,    -1,    -1,    -1,
     895,    -1,    -1,   898,    -1,    -1,    -1,   902,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    41,     3,     4,     5,     6,    -1,     8,
       9,    10,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    32,    33,    34,    -1,     3,     4,     5,
       6,    40,     8,     9,    10,    -1,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,   982,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    -1,    -1,    77,  1004,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,  1034,
      -1,    77,    -1,    -1,    -1,    -1,   197,    -1,    -1,    -1,
      -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,   107,    -1,    -1,  1069,    -1,    -1,    -1,    -1,    -1,
      -1,  1076,  1077,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,   168,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   168,    -1,    -1,    -1,    -1,  1132,  1133,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,     3,     4,     5,
       6,    -1,     8,     9,    10,    -1,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    -1,
       3,     4,     5,     6,    40,     8,     9,    10,    -1,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    77,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,    -1,    -1,    -1,
      -1,   107,    -1,    -1,    77,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,     3,     4,     5,     6,
       7,     8,     9,    10,   107,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,   168,    40,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   166,    -1,   168,    -1,     3,    -1,    -1,
      77,    -1,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,    -1,    -1,    -1,
     107,    -1,    -1,    -1,    40,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,   168,    12,    13,    14,   101,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
      -1,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,    -1,    77,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    32,    33,
      -1,   111,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,   168,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,   107,    -1,    -1,    -1,   111,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,    -1,    77,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,   168,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   107,    32,    33,    -1,   111,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    10,   168,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     107,    -1,     3,    68,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    14,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   168,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,    34,    68,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   168,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,
      -1,    -1,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,     3,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   152,   111,    -1,    -1,    -1,
      -1,    -1,    -1,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,    40,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    48,    49,    50,    51,    -1,
      -1,    -1,    55,    56,    57,    -1,    71,    72,    73,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,   183,    77,    90,    91,    -1,    93,    -1,
      -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    -1,   109,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,   183,   138,   127,   140,    -1,   142,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    44,
      -1,    -1,    -1,   156,    -1,    -1,   171,    -1,    53,    -1,
      55,    56,    57,   166,    -1,    -1,   169,    -1,    -1,   184,
     185,   186,    67,    -1,    -1,    70,    -1,    -1,    -1,   194,
     195,    -1,    -1,    -1,    -1,    -1,    81,   190,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      95,    96,    97,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,    -1,    -1,    -1,    -1,    -1,   234,
      -1,    -1,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     233,    -1,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   137,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    72,    73,    -1,    -1,    -1,   151,    78,    -1,    -1,
     155,   156,    -1,    -1,   159,    86,   161,   162,    -1,    90,
      91,   166,    93,    -1,   169,   170,    -1,    -1,    99,   174,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,
      -1,    -1,    -1,    -1,    -1,   190,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,    -1,   140,
      -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   154,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   184,   185,   186,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   194,   195,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,   111,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,   111,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    -1,    -1,    41,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    40,    44,    53,    55,    56,    57,    67,    70,    81,
      85,    92,    95,    96,    97,   100,   106,   108,   117,   127,
     137,   151,   155,   156,   159,   161,   162,   166,   169,   170,
     174,   190,   236,   237,   238,   256,   257,   260,   266,   268,
     269,   277,   278,   279,   280,   282,   283,   284,   285,   301,
     304,   307,   309,   314,   315,   316,   317,   318,   320,   351,
     354,   355,   362,   367,   369,   371,   374,   378,   379,   380,
     381,   384,   389,   391,   394,   399,   402,   403,   404,   410,
     423,   424,   448,   449,   450,   315,   316,     3,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   267,   421,   422,     3,   267,   267,   267,
     176,   181,   191,   199,   376,   376,    43,   181,   191,   204,
     111,     3,   347,   419,   422,   347,    43,   181,   191,   204,
     392,   421,   231,   353,    66,    67,    85,    95,   100,   117,
     127,   156,   166,   190,   385,   386,   181,   392,   191,   385,
     376,   115,   382,   120,   323,     3,    13,    14,   115,   116,
     149,   167,   168,   395,   396,   418,   422,     3,    43,    84,
      85,   112,   115,   148,   164,   167,   181,   182,   204,   213,
     219,   232,   251,   358,   361,   420,   188,   323,     0,   104,
     233,   128,   197,   308,    15,    16,    17,   145,   336,   337,
     110,   333,   151,    70,   427,    41,    41,    54,    40,    58,
      59,    60,    61,    62,   111,   281,   114,   169,   178,   179,
     411,   347,     4,   365,     3,   124,   286,   363,   364,   365,
     286,   347,     4,   360,   360,     3,   124,   124,   302,   365,
     368,   302,   192,   400,   256,   257,   307,   314,   352,   158,
     387,   191,   146,   144,   234,   347,   111,   365,   372,   373,
     144,   390,   201,   202,   383,     3,    40,   122,   129,   130,
     153,   163,   204,   324,   325,   326,    66,    98,   342,    24,
     189,   397,   397,   418,    42,   110,   370,   418,    42,   234,
     397,     3,    30,   111,   181,    28,   196,   359,   223,   359,
     144,   110,   357,   370,   223,   134,   356,   232,   230,   200,
      40,   198,   377,   347,   238,   347,     3,     4,     5,     6,
       8,     9,    10,    12,    13,    14,    20,    32,    33,    40,
      77,   107,   168,   218,   240,   241,   242,   244,   246,   251,
     252,   253,   315,   418,   419,   422,   342,   342,   342,    75,
     134,   143,   322,   333,   190,   392,    44,    48,    49,    50,
      51,    56,    77,   124,   166,   169,   233,   256,   257,   266,
     268,   270,   271,   272,   273,   274,   275,   276,   284,   307,
     314,   319,   428,   429,   430,   434,   435,   436,   440,   444,
     445,   446,   447,   110,    41,   239,   244,     5,     5,    63,
     412,   413,   418,   141,   180,    88,    89,    64,    67,   100,
     155,   405,   406,   123,   136,   227,   375,    40,    20,   347,
     234,   123,   347,   196,   321,   107,   107,    40,   303,   315,
     346,   347,   348,   234,   305,   347,    14,   398,   401,    34,
     388,   419,   386,   256,   257,   307,   314,   393,   189,   234,
     388,   111,     5,    40,   327,    40,    40,    40,    40,   121,
     234,   326,    34,   244,   343,   344,   244,   244,   397,   418,
     365,    24,   397,   418,   396,   244,   347,   347,   347,     4,
     244,   359,   347,    87,   359,     5,   359,    34,    41,    66,
      74,    98,   132,   187,   239,   244,   255,   334,    82,   169,
      40,   310,   314,   244,   244,   244,   239,   244,   315,   244,
     247,   315,    42,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    40,    42,   166,   315,   318,   320,
     318,   318,   244,   338,   339,     5,    12,   331,   331,   333,
     401,   244,   256,   257,   266,   268,   270,   271,   272,   273,
     274,   275,   276,   284,   307,   314,   319,   431,   432,   433,
     435,   436,   440,   444,   445,   446,   447,   233,   233,   267,
     244,   244,   344,   395,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   103,
     430,   314,    41,   234,   189,     5,   234,    24,    24,    24,
     141,   141,    83,   407,   407,   407,   189,   407,   234,    75,
      14,    30,    41,    46,    47,   425,   426,   107,    40,   364,
      75,   144,     7,   244,   308,     3,   315,   346,   348,   234,
      68,   419,   112,   125,   129,   133,   160,   349,    68,   419,
     365,   144,   234,   234,   189,   365,   372,   368,     3,    41,
     234,   206,   207,   328,   329,   347,   113,   175,   177,   203,
     330,   347,   325,    68,   421,   111,   234,   322,   332,   244,
     397,     4,   366,   244,   397,   359,   359,   359,    40,   234,
      41,   111,   244,   111,   244,   111,   244,    41,    68,   111,
     244,    41,   172,   258,   259,   418,   311,   418,   193,   234,
      41,   197,   248,   249,   418,   244,   244,    28,    29,    30,
     244,   244,   244,   244,   244,   244,   244,   244,    32,    33,
     242,   243,    40,   245,   315,     8,    10,    11,    20,   244,
     244,   244,   244,   244,   244,   244,   254,   256,   257,   307,
     314,    34,   418,   323,    69,    96,   340,   234,   143,   234,
     134,    71,    72,    73,    78,    86,    90,    91,    93,    99,
     109,   126,   138,   140,   142,   154,   171,   184,   185,   186,
     194,   195,   290,    52,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   103,
     433,    58,    59,    60,    61,    62,   128,   281,   197,   441,
     442,   183,   128,   233,   244,     5,   413,   241,     4,     4,
      24,    24,   289,   418,   418,   418,   347,   418,   155,   406,
     366,   290,    14,    14,    14,    41,   234,   152,   287,   288,
     289,   366,   347,   244,    41,   346,   419,   147,   350,   346,
     350,   350,   129,   419,   306,   347,   347,   398,   368,    41,
      41,   234,   234,    41,   347,   421,   101,   345,   346,   343,
     244,   244,    41,     5,   244,   111,   244,   111,   244,   111,
     290,   244,    41,   234,   321,    24,    41,   234,    40,   312,
     244,   244,   102,   249,   250,   244,   243,   245,   243,   243,
      19,    32,    33,    34,    35,    36,    37,    38,   239,     8,
      10,    11,    41,   342,   339,   331,   331,   331,    40,   295,
     295,    40,   291,   150,   293,    40,   292,   291,    40,   294,
     294,   295,   295,    94,   233,   431,    49,   128,   128,   128,
     128,     5,   401,    63,   244,   102,   442,   443,   431,   401,
      80,   414,     4,     4,   290,   100,   169,   409,    76,   157,
     408,   189,   290,   290,   290,   426,   131,    41,   234,    40,
     261,    68,   144,   346,   329,   347,    41,   321,   234,   321,
     244,   244,   244,    41,   259,   308,   244,   314,   418,   244,
     313,   234,   308,    41,   183,   244,   103,    19,   243,   243,
     243,   243,   243,   243,   243,   243,    41,   344,     5,     5,
       5,     5,   241,   103,   233,   401,   401,   401,   401,   128,
       5,   183,   431,   103,    45,   102,   103,   437,   438,   439,
     111,     4,   165,   415,   296,    20,    94,    20,    94,   421,
      40,    80,   210,   211,   212,   214,   216,   224,   225,   226,
     229,   298,   299,   288,   311,   205,   262,   419,   244,   144,
     234,   332,   346,   118,   335,    41,   234,    40,   244,   243,
     111,    41,    41,   234,    41,    41,   233,    48,   401,   128,
     431,    77,   244,   431,   124,   103,   438,   439,   103,   345,
      24,   222,    10,    20,    94,   152,   208,   297,    10,    10,
     241,   311,    24,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   234,    41,    40,   263,   264,   265,   299,
     244,   347,    75,   119,   341,   244,   313,     5,   233,   401,
     233,   183,   233,   124,   103,   124,   321,    74,   139,   173,
      24,    10,   241,   131,    41,     4,     4,   175,     4,     4,
       5,     5,     5,     5,     8,   299,   311,   234,    42,   239,
     244,    41,    41,   431,   233,   124,   233,   333,   209,   215,
     217,   228,   416,    41,   265,   347,   233,    79,   220,   417,
     234,    24,    24,   347,     5,     4,    42,   221,   347,    24,
      41,     5
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
      case 236: /* "sql_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 237: /* "stmt_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 238: /* "stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 239: /* "expr_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 240: /* "column_ref" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 241: /* "expr_const" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 242: /* "simple_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 243: /* "arith_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 244: /* "expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 245: /* "in_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 246: /* "case_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 247: /* "case_arg" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 248: /* "when_clause_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 249: /* "when_clause" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 250: /* "case_default" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 251: /* "func_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 252: /* "when_func" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 253: /* "when_func_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 254: /* "when_func_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 255: /* "distinct_or_all" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 256: /* "delete_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 257: /* "update_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 258: /* "update_asgn_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 259: /* "update_asgn_factor" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 260: /* "create_index_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 261: /* "opt_index_columns" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 262: /* "opt_storing" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 263: /* "opt_storing_columns" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 264: /* "opt_index_option_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 265: /* "index_option" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 266: /* "cursor_declare_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 267: /* "cursor_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 268: /* "cursor_open_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 269: /* "cursor_fetch_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 270: /* "cursor_fetch_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 271: /* "cursor_fetch_next_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 272: /* "cursor_fetch_first_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 273: /* "cursor_fetch_prior_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 274: /* "cursor_fetch_last_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 275: /* "cursor_fetch_absolute_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 276: /* "cursor_fetch_relative_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 277: /* "fetch_prior_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 278: /* "fetch_first_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 279: /* "fetch_last_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 280: /* "fetch_relative_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 281: /* "next_or_prior" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 282: /* "fetch_absolute_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 283: /* "fetch_fromto_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 284: /* "cursor_close_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 285: /* "create_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 286: /* "opt_if_not_exists" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 287: /* "table_element_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 288: /* "table_element" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 289: /* "column_definition" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 290: /* "data_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 291: /* "opt_decimal" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 292: /* "opt_float" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 293: /* "opt_precision" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 294: /* "opt_time_precision" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 295: /* "opt_char_length" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 296: /* "opt_column_attribute_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 297: /* "column_attribute" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 298: /* "opt_table_option_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 299: /* "table_option" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 300: /* "opt_equal_mark" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 301: /* "drop_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 302: /* "opt_if_exists" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 303: /* "table_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 304: /* "drop_index_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 305: /* "index_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 306: /* "table_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 307: /* "insert_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 308: /* "opt_when" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 309: /* "replace_or_insert" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 310: /* "opt_insert_columns" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 311: /* "column_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 312: /* "insert_vals_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 313: /* "insert_vals" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 314: /* "select_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 315: /* "select_with_parens" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 316: /* "select_no_parens" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 317: /* "no_table_select" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 318: /* "select_clause" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 319: /* "select_into_clause" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 320: /* "simple_select" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 321: /* "opt_where" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 322: /* "select_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 323: /* "opt_hint" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 324: /* "opt_hint_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 325: /* "hint_options" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 326: /* "hint_option" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 327: /* "opt_comma_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 328: /* "join_op_type_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 329: /* "join_op_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 331: /* "limit_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 332: /* "opt_select_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 333: /* "opt_for_update" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 334: /* "parameterized_trim" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 335: /* "opt_groupby" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 336: /* "opt_order_by" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 337: /* "order_by" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 338: /* "sort_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 339: /* "sort_key" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 340: /* "opt_asc_desc" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 341: /* "opt_having" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 342: /* "opt_distinct" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 343: /* "projection" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 344: /* "select_expr_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 345: /* "from_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 346: /* "table_factor" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 347: /* "relation_factor" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 348: /* "joined_table" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 349: /* "join_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 350: /* "join_outer" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 351: /* "explain_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 352: /* "explainable_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 353: /* "opt_verbose" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 354: /* "show_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 355: /* "lock_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 356: /* "opt_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 357: /* "opt_for_grant_user" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 359: /* "opt_show_condition" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 360: /* "opt_like_condition" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 362: /* "create_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 363: /* "user_specification_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 364: /* "user_specification" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 365: /* "user" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 366: /* "password" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 367: /* "drop_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 368: /* "user_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 369: /* "set_password_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 370: /* "opt_for_user" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 371: /* "rename_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 372: /* "rename_info" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 373: /* "rename_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 374: /* "lock_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 375: /* "lock_spec" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 376: /* "opt_work" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 378: /* "begin_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 379: /* "commit_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 380: /* "rollback_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 381: /* "kill_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 382: /* "opt_is_global" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 383: /* "opt_flag" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 384: /* "grant_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 385: /* "priv_type_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 386: /* "priv_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 387: /* "opt_privilege" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 388: /* "priv_level" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 389: /* "revoke_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 390: /* "opt_on_priv_level" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 391: /* "prepare_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 392: /* "stmt_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 393: /* "preparable_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 394: /* "variable_set_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 395: /* "var_and_val_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 396: /* "var_and_val" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 397: /* "to_or_eq" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 398: /* "argument" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 399: /* "execute_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 400: /* "opt_using_args" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 401: /* "argument_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 402: /* "deallocate_prepare_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 403: /* "deallocate_or_drop" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 404: /* "alter_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 405: /* "alter_column_actions" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 406: /* "alter_column_action" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 407: /* "opt_column" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 409: /* "alter_column_behavior" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 410: /* "alter_system_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 411: /* "opt_force" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 412: /* "alter_system_actions" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 413: /* "alter_system_action" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 414: /* "opt_comment" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 416: /* "server_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 417: /* "opt_cluster_or_address" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 418: /* "column_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 419: /* "relation_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 420: /* "function_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 421: /* "column_label" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 423: /* "create_procedure_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 424: /* "proc_decl" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 425: /* "proc_parameter_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 426: /* "proc_parameter" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 427: /* "proc_block" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 428: /* "proc_sect" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 429: /* "proc_stmts" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 430: /* "proc_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 431: /* "control_sect" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 432: /* "control_stmts" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 433: /* "control_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 434: /* "stmt_declare" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 435: /* "stmt_assign" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 436: /* "stmt_if" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 437: /* "stmt_elsifs" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 438: /* "stmt_elsif" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 439: /* "stmt_else" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 440: /* "stmt_case" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 441: /* "case_when_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 442: /* "case_when" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 443: /* "case_else" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 444: /* "stmt_loop" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 445: /* "stmt_while" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 446: /* "stmt_null" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 447: /* "stmt_exit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 448: /* "exec_procedure_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 449: /* "drop_procedure_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 450: /* "show_procedure_stmt" */

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

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 73:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_POS, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 74:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NEG, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 75:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_ADD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 76:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MINUS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 77:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MUL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 78:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_DIV, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 79:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_REM, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 80:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_POW, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 81:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MOD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 82:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 83:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_POS, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 84:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NEG, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 85:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_ADD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 86:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MINUS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 87:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MUL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 88:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_DIV, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 89:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_REM, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 90:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_POW, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 91:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MOD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 92:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 93:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LT, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 94:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_EQ, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 95:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_GE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 96:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_GT, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 97:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 98:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 99:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NOT_LIKE, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 100:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_AND, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 101:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_OR, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 102:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NOT, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 103:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 104:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS_NOT, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
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
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_BTW, 3, (yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 110:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NOT_BTW, 3, (yyvsp[(1) - (6)].node), (yyvsp[(4) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 111:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IN, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 112:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NOT_IN, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 113:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_CNN, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 114:

    {
    	(yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 115:

    { merge_nodes((yyval.node), result->malloc_pool_, T_EXPR_LIST, (yyvsp[(2) - (3)].node)); ;}
    break;

  case 116:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_WHEN_LIST, (yyvsp[(3) - (5)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CASE, 3, (yyvsp[(2) - (5)].node), (yyval.node), (yyvsp[(4) - (5)].node));
    ;}
    break;

  case 117:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 118:

    { (yyval.node) = NULL; ;}
    break;

  case 119:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 120:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 121:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_WHEN, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 122:

    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 123:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_NULL); ;}
    break;

  case 124:

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

  case 125:

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

  case 126:

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

  case 127:

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

  case 128:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_FUN_SYS, 2, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));
    ;}
    break;

  case 129:

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

  case 130:

    {
      (yyval.node) = (yyvsp[(1) - (4)].node);
      (yyval.node)->children_[0] = (yyvsp[(3) - (4)].node);
    ;}
    break;

  case 131:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ROW_COUNT, 1, NULL);
    ;}
    break;

  case 136:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_ALL);
    ;}
    break;

  case 137:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_DISTINCT);
    ;}
    break;

  case 138:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_DELETE, 3, (yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 139:

    {
      ParseNode* assign_list = NULL;
      merge_nodes(assign_list, result->malloc_pool_, T_ASSIGN_LIST, (yyvsp[(5) - (7)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_UPDATE, 5, (yyvsp[(3) - (7)].node), assign_list, (yyvsp[(6) - (7)].node), (yyvsp[(7) - (7)].node), (yyvsp[(2) - (7)].node));
    ;}
    break;

  case 140:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 141:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 142:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ASSIGN_ITEM, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 143:

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

  case 144:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_COLUMN_LIST, (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 145:

    {
  		(yyval.node)=(yyvsp[(2) - (2)].node);
  	;}
    break;

  case 146:

    {
  		(yyval.node)=NULL;
  	;}
    break;

  case 147:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_COLUMN_LIST, (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 148:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 149:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 150:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 151:

    {
		(yyval.node) = (yyvsp[(1) - (1)].node);
	;}
    break;

  case 152:

    {					 
       malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_DECLARE, 2,
                                        (yyvsp[(2) - (5)].node),		/*cursor name*/
                                        (yyvsp[(5) - (5)].node)		/*result from select_stmt*/
					             ); 
	 ;}
    break;

  case 153:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 154:

    {
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_OPEN, 1,
            (yyvsp[(2) - (2)].node)     /* cursor_name*/
                                    );
            ;}
    break;

  case 155:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH, 1,
                   (yyvsp[(2) - (2)].node)     /* cursor_name*/
                                       );
            ;}
    break;

  case 156:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH, 1,
                   (yyvsp[(2) - (3)].node)     /* cursor_name*/
                                       );
            ;}
    break;

  case 157:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH, 1, (yyvsp[(2) - (4)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(4) - (4)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_INTO, 2, fetch, args);
            ;}
    break;

  case 158:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH_NEXT, 1, (yyvsp[(2) - (5)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(5) - (5)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_NEXT_INTO, 2, fetch, args);
            ;}
    break;

  case 159:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH_FIRST, 1, (yyvsp[(2) - (5)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(5) - (5)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_FIRST_INTO, 2, fetch, args);
            ;}
    break;

  case 160:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH_PRIOR, 1, (yyvsp[(2) - (5)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(5) - (5)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_PRIOR_INTO, 2, fetch, args);
            ;}
    break;

  case 161:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH_LAST, 1, (yyvsp[(2) - (5)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(5) - (5)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_LAST_INTO, 2, fetch, args);
            ;}
    break;

  case 162:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH_ABSOLUTE, 2, (yyvsp[(2) - (6)].node), (yyvsp[(4) - (6)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(6) - (6)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_ABS_INTO, 2, fetch, args);
            ;}
    break;

  case 163:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH_RELATIVE, 3, (yyvsp[(2) - (7)].node), (yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(7) - (7)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_RELATIVE_INTO, 2, fetch, args);
            ;}
    break;

  case 164:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_PRIOR, 1,
                   (yyvsp[(2) - (3)].node)     /* cursor_name*/
                    
                    
                    
                                       );
            ;}
    break;

  case 165:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_FIRST, 1,
                   (yyvsp[(2) - (3)].node)     /* cursor_name*/
                                       );
            ;}
    break;

  case 166:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_LAST, 1,
                   (yyvsp[(2) - (3)].node)     /* cursor_name*/
                                       );
            ;}
    break;

  case 167:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_RELATIVE, 3,
                   (yyvsp[(2) - (5)].node),     /* cursor_name*/
                   (yyvsp[(3) - (5)].node),                  
                   (yyvsp[(5) - (5)].node)                  
                                       );
            ;}
    break;

  case 168:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 169:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 170:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_ABSOLUTE, 2,
                   (yyvsp[(2) - (4)].node),     /* cursor_name*/
                   (yyvsp[(4) - (4)].node)
                                       );
            ;}
    break;

  case 171:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_FROMTO, 3,
                   (yyvsp[(2) - (6)].node),     /* cursor_name*/
                   (yyvsp[(4) - (6)].node),
                   (yyvsp[(6) - (6)].node)
                                       );
            ;}
    break;

  case 172:

    {
             malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_CLOSE, 1,
                   (yyvsp[(2) - (2)].node)     /* cursor_name*/
                                      );
             ;}
    break;

  case 173:

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

  case 174:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_IF_NOT_EXISTS); ;}
    break;

  case 175:

    { (yyval.node) = NULL; ;}
    break;

  case 176:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 177:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 178:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 179:

    {
      ParseNode* col_list= NULL;
      merge_nodes(col_list, result->malloc_pool_, T_COLUMN_LIST, (yyvsp[(4) - (5)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PRIMARY_KEY, 1, col_list);
    ;}
    break;

  case 180:

    {
      ParseNode *attributes = NULL;
      merge_nodes(attributes, result->malloc_pool_, T_COLUMN_ATTRIBUTES, (yyvsp[(3) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_DEFINITION, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), attributes);
    ;}
    break;

  case 181:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER ); ;}
    break;

  case 182:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER); ;}
    break;

  case 183:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER); ;}
    break;

  case 184:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER); ;}
    break;

  case 185:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER); ;}
    break;

  case 186:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DECIMAL);
      else
        merge_nodes((yyval.node), result->malloc_pool_, T_TYPE_DECIMAL, (yyvsp[(2) - (2)].node));
      yyerror(&(yylsp[(1) - (2)]), result, "DECIMAL type is not supported");
      YYABORT;
    ;}
    break;

  case 187:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DECIMAL);
      else
        merge_nodes((yyval.node), result->malloc_pool_, T_TYPE_DECIMAL, (yyvsp[(2) - (2)].node));
      yyerror(&(yylsp[(1) - (2)]), result, "NUMERIC type is not supported");
      YYABORT;
    ;}
    break;

  case 188:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_BOOLEAN ); ;}
    break;

  case 189:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_FLOAT, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 190:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DOUBLE); ;}
    break;

  case 191:

    {
      (void)((yyvsp[(2) - (2)].node)) ; /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DOUBLE);
    ;}
    break;

  case 192:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIMESTAMP);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIMESTAMP, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 193:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIMESTAMP); ;}
    break;

  case 194:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CHARACTER);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CHARACTER, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 195:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CHARACTER);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CHARACTER, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 196:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_VARCHAR);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_VARCHAR, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 197:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_VARCHAR);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_VARCHAR, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 198:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CREATETIME); ;}
    break;

  case 199:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_MODIFYTIME); ;}
    break;

  case 200:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DATE);
      yyerror(&(yylsp[(1) - (1)]), result, "DATE type is not supported");
      YYABORT;
    ;}
    break;

  case 201:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIME);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIME, 1, (yyvsp[(2) - (2)].node));
      yyerror(&(yylsp[(1) - (2)]), result, "TIME type is not supported");
      YYABORT;
    ;}
    break;

  case 202:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node)); ;}
    break;

  case 203:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 204:

    { (yyval.node) = NULL; ;}
    break;

  case 205:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 206:

    { (yyval.node) = NULL; ;}
    break;

  case 207:

    { (yyval.node) = NULL; ;}
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

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 212:

    { (yyval.node) = NULL; ;}
    break;

  case 213:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 214:

    { (yyval.node) = NULL; ;}
    break;

  case 215:

    {
      (void)((yyvsp[(2) - (2)].node)) ; /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NOT_NULL);
    ;}
    break;

  case 216:

    {
      (void)((yyvsp[(1) - (1)].node)) ; /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NULL);
    ;}
    break;

  case 217:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 218:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_AUTO_INCREMENT); ;}
    break;

  case 219:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_PRIMARY_KEY); ;}
    break;

  case 220:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 221:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 222:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 223:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_INFO, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 224:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPIRE_INFO, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 225:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLET_MAX_SIZE, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 226:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLET_BLOCK_SIZE, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 227:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLET_ID, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 228:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_REPLICA_NUM, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 229:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COMPRESS_METHOD, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 230:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_USE_BLOOM_FILTER, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 231:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSISTENT_MODE);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 232:

    {
      (void)((yyvsp[(2) - (3)].node)); /*  make bison mute*/
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COMMENT, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 233:

    { (yyval.node) = NULL; ;}
    break;

  case 234:

    { (yyval.node) = NULL; ;}
    break;

  case 235:

    {
      ParseNode *tables = NULL;
      merge_nodes(tables, result->malloc_pool_, T_TABLE_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_DROP_TABLE, 2, (yyvsp[(3) - (4)].node), tables);
    ;}
    break;

  case 236:

    { (yyval.node) = NULL; ;}
    break;

  case 237:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_IF_EXISTS); ;}
    break;

  case 238:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 239:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 240:

    {
      ParseNode *indexs = NULL;
      merge_nodes(indexs, result->malloc_pool_, T_INDEX_LIST, (yyvsp[(4) - (6)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_DROP_INDEX, 3, (yyvsp[(3) - (6)].node), indexs, (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 241:

    { (yyval.node) = NULL; ;}
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
	  (yyval.node) = (yyvsp[(1) - (1)].node);
	;}
    break;

  case 245:

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

  case 246:

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

  case 247:

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

  case 248:

    { (yyval.node) = NULL; ;}
    break;

  case 249:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 250:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 251:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 252:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_COLUMN_LIST, (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 253:

    { (yyval.node) = NULL; ;}
    break;

  case 254:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 255:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 256:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_VALUE_VECTOR, (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 257:

    {
    merge_nodes((yyvsp[(4) - (5)].node), result->malloc_pool_, T_VALUE_VECTOR, (yyvsp[(4) - (5)].node));
    malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (5)].node), (yyvsp[(4) - (5)].node));
  ;}
    break;

  case 258:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 259:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 260:

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

  case 261:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 262:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 263:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 264:

    {
      (yyval.node)= (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 265:

    {
      (yyval.node) = (yyvsp[(1) - (2)].node);
      (yyval.node)->children_[12] = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 266:

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

  case 267:

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

  case 268:

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

  case 269:

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

  case 270:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 271:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 272:

    {
						  ParseNode* project_list = NULL;
						  ParseNode* from_list = NULL;
						  ParseNode* select = NULL;
						  ParseNode* args = NULL;
						  merge_nodes(project_list, result->malloc_pool_, T_PROJECT_LIST, (yyvsp[(2) - (8)].node));
						  merge_nodes(from_list, result->malloc_pool_, T_FROM_LIST, (yyvsp[(6) - (8)].node));
						  malloc_non_terminal_node(select, result->malloc_pool_, T_SELECT, 16,
                              NULL,           /* 1. distinct */
                              project_list,   /* 2. select clause */
                              from_list,      /* 3. from clause */
                              (yyvsp[(7) - (8)].node),             /* 4. where */
                              NULL,           /* 5. group by */
                              NULL,           /* 6. having */
                              NULL,           /* 7. set operation */
                              NULL,           /* 8. all specified? */
                              NULL,           /* 9. former select stmt */
                              NULL,           /* 10. later select stmt */
                              NULL,           /* 11. order by */
                              NULL,             /* 12. limit */
                              (yyvsp[(8) - (8)].node),           /* 13. for update */
                              NULL,             /* 14 hints */
                              NULL            /* 15 when clause */
                              ,NULL
                              );
						  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(4) - (8)].node));
						  malloc_non_terminal_node((yyval.node),result->malloc_pool_, T_SELECT_INTO, 2, args, select);
						;}
    break;

  case 273:

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

  case 274:

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

  case 275:

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

  case 276:

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

  case 277:

    {(yyval.node) = NULL;;}
    break;

  case 278:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 279:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_WHERE_CLAUSE, 2, (yyvsp[(3) - (3)].node), (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 280:

    {
      if ((yyvsp[(2) - (4)].node)->type_ == T_QUESTIONMARK && (yyvsp[(4) - (4)].node)->type_ == T_QUESTIONMARK)
      {
        (yyvsp[(4) - (4)].node)->value_++;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 281:

    {
      if ((yyvsp[(2) - (4)].node)->type_ == T_QUESTIONMARK && (yyvsp[(4) - (4)].node)->type_ == T_QUESTIONMARK)
      {
        (yyvsp[(4) - (4)].node)->value_++;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, (yyvsp[(4) - (4)].node), (yyvsp[(2) - (4)].node));
    ;}
    break;

  case 282:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, (yyvsp[(2) - (2)].node), NULL);
    ;}
    break;

  case 283:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, NULL, (yyvsp[(2) - (2)].node));
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
      (yyval.node) = NULL;
    ;}
    break;

  case 286:

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

  case 287:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 288:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 289:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 290:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 291:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 292:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_READ_STATIC);
    ;}
    break;

  case 293:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_HOTSPOT);
    ;}
    break;

  case 294:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SEMI_JOIN, 6, (yyvsp[(3) - (14)].node), (yyvsp[(5) - (14)].node), (yyvsp[(7) - (14)].node), (yyvsp[(9) - (14)].node), (yyvsp[(11) - (14)].node), (yyvsp[(13) - (14)].node));
    ;}
    break;

  case 295:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_READ_CONSISTENCY);
      (yyval.node)->value_ = (yyvsp[(3) - (4)].ival);
    ;}
    break;

  case 296:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_USE_INDEX, 2, (yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].node));
    ;}
    break;

  case 297:

    {
	  (void)((yyvsp[(1) - (4)].node));
	  (void)((yyvsp[(3) - (4)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_UNKOWN_HINT);
    ;}
    break;

  case 298:

    {
      (yyval.node) = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 299:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_JOIN_OP_TYPE_LIST, (yyvsp[(3) - (4)].node));
    ;}
    break;

  case 300:

    {
      (yyval.node) = (yyvsp[(1) - (2)].node);
    ;}
    break;

  case 301:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 302:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 303:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 304:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BLOOMFILTER_JOIN);
    ;}
    break;

  case 305:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_MERGE_JOIN);
    ;}
    break;

  case 306:

    {
    (yyval.ival) = 3;
  ;}
    break;

  case 307:

    {
    (yyval.ival) = 4;
  ;}
    break;

  case 308:

    {
    (yyval.ival) = 1;
  ;}
    break;

  case 309:

    {
    (yyval.ival) = 2;
  ;}
    break;

  case 310:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 311:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 312:

    { (yyval.node) = NULL; ;}
    break;

  case 313:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 314:

    { (yyval.node) = NULL; ;}
    break;

  case 315:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 316:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 0;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 317:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 0;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 318:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 1;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 319:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 2;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 320:

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

  case 321:

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

  case 322:

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

  case 323:

    { (yyval.node) = NULL; ;}
    break;

  case 324:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_EXPR_LIST, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 325:

    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 326:

    { (yyval.node) = NULL; ;}
    break;

  case 327:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_SORT_LIST, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 328:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 329:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 330:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SORT_KEY, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 331:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_ASC); ;}
    break;

  case 332:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_ASC); ;}
    break;

  case 333:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_DESC); ;}
    break;

  case 334:

    { (yyval.node) = 0; ;}
    break;

  case 335:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 336:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 337:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_ALL);
    ;}
    break;

  case 338:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_DISTINCT);
    ;}
    break;

  case 339:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, (yyvsp[(1) - (1)].node));
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (1)]).first_column, (yylsp[(1) - (1)]).last_column);
    ;}
    break;

  case 340:

    {
      ParseNode* alias_node = NULL;
      malloc_non_terminal_node(alias_node, result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, alias_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (2)]).first_column, (yylsp[(1) - (2)]).last_column);
      dup_expr_string(alias_node->str_value_, result, (yylsp[(2) - (2)]).first_column, (yylsp[(2) - (2)]).last_column);
    ;}
    break;

  case 341:

    {
      ParseNode* alias_node = NULL;
      malloc_non_terminal_node(alias_node, result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, alias_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (3)]).first_column, (yylsp[(1) - (3)]).last_column);
      dup_expr_string(alias_node->str_value_, result, (yylsp[(3) - (3)]).first_column, (yylsp[(3) - (3)]).last_column);
    ;}
    break;

  case 342:

    {
      ParseNode* star_node = NULL;
      malloc_terminal_node(star_node, result->malloc_pool_, T_STAR);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, star_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (1)]).first_column, (yylsp[(1) - (1)]).last_column);
    ;}
    break;

  case 343:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 344:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 345:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 346:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 347:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 348:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 349:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 350:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 351:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 352:

    {
    	(yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 353:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(2) - (5)].node), (yyvsp[(5) - (5)].node));
    	yyerror(&(yylsp[(1) - (5)]), result, "qualied joined table can not be aliased!");
      YYABORT;
    ;}
    break;

  case 354:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 355:

    {
    	(yyval.node) = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 356:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOINED_TABLE, 4, (yyvsp[(2) - (6)].node), (yyvsp[(1) - (6)].node), (yyvsp[(4) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 357:

    {
      ParseNode* node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_JOIN_INNER);
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOINED_TABLE, 4, node, (yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 358:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_FULL);
    ;}
    break;

  case 359:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_LEFT);
    ;}
    break;

  case 360:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_RIGHT);
    ;}
    break;

  case 361:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_INNER);
    ;}
    break;

  case 362:

    { (yyval.node) = NULL; ;}
    break;

  case 363:

    { (yyval.node) = NULL; ;}
    break;

  case 364:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPLAIN, 1, (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = ((yyvsp[(2) - (3)].node) ? 1 : 0); /* positive: verbose */
    ;}
    break;

  case 365:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 366:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 367:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 368:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 369:

    { (yyval.node) = (ParseNode*)1; ;}
    break;

  case 370:

    { (yyval.node) = NULL; ;}
    break;

  case 371:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_TABLES, 1, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 372:

    {  malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_INDEX, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 373:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 374:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 375:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_TABLE_STATUS, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 376:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_SERVER_STATUS, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 377:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_VARIABLES, 1, (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = (yyvsp[(2) - (4)].ival);
    ;}
    break;

  case 378:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_SCHEMA); ;}
    break;

  case 379:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_CREATE_TABLE, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 380:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 381:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 382:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_WARNINGS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 383:

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

  case 384:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_GRANTS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 385:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_PARAMETERS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 386:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_PROCESSLIST);
      (yyval.node)->value_ = (yyvsp[(2) - (3)].ival);
    ;}
    break;

  case 387:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LOCK_TABLE, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 388:

    {
      if ((yyvsp[(2) - (4)].node)->value_ < 0 || (yyvsp[(4) - (4)].node)->value_ < 0)
      {
        yyerror(&(yylsp[(1) - (4)]), result, "OFFSET/COUNT must not be less than 0!");
        YYABORT;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_LIMIT, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 389:

    {
      if ((yyvsp[(2) - (2)].node)->value_ < 0)
      {
        yyerror(&(yylsp[(1) - (2)]), result, "COUNT must not be less than 0!");
        YYABORT;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_LIMIT, 2, NULL, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 390:

    { (yyval.node) = NULL; ;}
    break;

  case 391:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 392:

    { (yyval.node) = NULL; ;}
    break;

  case 393:

    { (yyval.node) = NULL; ;}
    break;

  case 394:

    { (yyval.ival) = 1; ;}
    break;

  case 395:

    { (yyval.ival) = 0; ;}
    break;

  case 396:

    { (yyval.ival) = 0; ;}
    break;

  case 397:

    { (yyval.node) = NULL; ;}
    break;

  case 398:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 399:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_WHERE_CLAUSE, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 400:

    { (yyval.node) = NULL; ;}
    break;

  case 401:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 1, (yyvsp[(1) - (1)].node)); ;}
    break;

  case 402:

    { (yyval.ival) = 0; ;}
    break;

  case 403:

    { (yyval.ival) = 1; ;}
    break;

  case 404:

    {
        merge_nodes((yyval.node), result->malloc_pool_, T_CREATE_USER, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 405:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 406:

    {
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 407:

    {
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CREATE_USER_SPEC, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 408:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 409:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 410:

    {
        merge_nodes((yyval.node), result->malloc_pool_, T_DROP_USER, (yyvsp[(3) - (3)].node));
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
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SET_PASSWORD, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 414:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SET_PASSWORD, 2, (yyvsp[(3) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 415:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 416:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 417:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_RENAME_USER, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 418:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_RENAME_INFO, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 419:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 420:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 421:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LOCK_USER, 2, (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 422:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 423:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 424:

    {
      (void)(yyval.node);
    ;}
    break;

  case 425:

    {
      (void)(yyval.node);
    ;}
    break;

  case 426:

    {
      (yyval.ival) = 1;
    ;}
    break;

  case 427:

    {
      (yyval.ival) = 0;
    ;}
    break;

  case 428:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BEGIN);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 429:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BEGIN);
      (yyval.node)->value_ = (yyvsp[(3) - (3)].ival);
    ;}
    break;

  case 430:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_COMMIT);
    ;}
    break;

  case 431:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_ROLLBACK);
    ;}
    break;

  case 432:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_KILL, 3, (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 433:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 434:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 435:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 436:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
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
      ParseNode *privileges_node = NULL;
      ParseNode *users_node = NULL;
      merge_nodes(privileges_node, result->malloc_pool_, T_PRIVILEGES, (yyvsp[(2) - (6)].node));
      merge_nodes(users_node, result->malloc_pool_, T_USERS, (yyvsp[(6) - (6)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_GRANT,
                                 3, privileges_node, (yyvsp[(4) - (6)].node), users_node);
    ;}
    break;

  case 439:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 440:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 441:

    {
      (void)(yyvsp[(2) - (2)].node);                 /* useless */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_ALL;
    ;}
    break;

  case 442:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_ALTER;
    ;}
    break;

  case 443:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_CREATE;
    ;}
    break;

  case 444:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_CREATE_USER;
    ;}
    break;

  case 445:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_DELETE;
    ;}
    break;

  case 446:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_DROP;
    ;}
    break;

  case 447:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_GRANT_OPTION;
    ;}
    break;

  case 448:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_INSERT;
    ;}
    break;

  case 449:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_UPDATE;
    ;}
    break;

  case 450:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_SELECT;
    ;}
    break;

  case 451:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_REPLACE;
    ;}
    break;

  case 452:

    {
      (void)(yyval.node);
    ;}
    break;

  case 453:

    {
      (void)(yyval.node);
    ;}
    break;

  case 454:

    {
      /* means global priv_level */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_LEVEL);
    ;}
    break;

  case 455:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_LEVEL, 1, (yyvsp[(1) - (1)].node));
    ;}
    break;

  case 456:

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

  case 457:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 458:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 459:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PREPARE, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 460:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 461:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 462:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 463:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 464:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 465:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_VARIABLE_SET, (yyvsp[(2) - (2)].node));;
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 466:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 467:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 468:

    {
      (void)((yyvsp[(2) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 469:

    {
      (void)((yyvsp[(2) - (3)].node));
      (yyvsp[(1) - (3)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 470:

    {
      (void)((yyvsp[(3) - (4)].node));
      (yyvsp[(2) - (4)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 471:

    {
      (void)((yyvsp[(3) - (4)].node));
      (yyvsp[(2) - (4)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 472:

    {
      (void)((yyvsp[(4) - (5)].node));
      (yyvsp[(3) - (5)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 473:

    {
      (void)((yyvsp[(4) - (5)].node));
      (yyvsp[(3) - (5)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
      (yyval.node)->value_ = 2;
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

    { (yyval.node) = NULL; ;}
    break;

  case 476:

    { (yyval.node) = NULL; ;}
    break;

  case 477:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 478:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXECUTE, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 479:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 480:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 481:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 482:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 483:

    {
      (void)((yyvsp[(1) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_DEALLOCATE, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 484:

    { (yyval.node) = NULL; ;}
    break;

  case 485:

    { (yyval.node) = NULL; ;}
    break;

  case 486:

    {
      ParseNode *alter_actions = NULL;
      merge_nodes(alter_actions, result->malloc_pool_, T_ALTER_ACTION_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_TABLE, 2, (yyvsp[(3) - (4)].node), alter_actions);
    ;}
    break;

  case 487:

    {
      yyerror(&(yylsp[(1) - (6)]), result, "Table rename is not supported now");
      YYABORT;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLE_RENAME, 1, (yyvsp[(6) - (6)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_ACTION_LIST, 1, (yyval.node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_TABLE, 2, (yyvsp[(3) - (6)].node), (yyval.node));
    ;}
    break;

  case 488:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 489:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 490:

    {
      (void)((yyvsp[(2) - (3)].node)); /* make bison mute */
      (yyval.node) = (yyvsp[(3) - (3)].node); /* T_COLUMN_DEFINITION */
    ;}
    break;

  case 491:

    {
      (void)((yyvsp[(2) - (4)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_DROP, 1, (yyvsp[(3) - (4)].node));
      (yyval.node)->value_ = (yyvsp[(4) - (4)].ival);
    ;}
    break;

  case 492:

    {
      (void)((yyvsp[(2) - (4)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_ALTER, 2, (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 493:

    {
      (void)((yyvsp[(2) - (5)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_RENAME, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 494:

    { (yyval.node) = NULL; ;}
    break;

  case 495:

    { (yyval.node) = NULL; ;}
    break;

  case 496:

    { (yyval.ival) = 2; ;}
    break;

  case 497:

    { (yyval.ival) = 1; ;}
    break;

  case 498:

    { (yyval.ival) = 0; ;}
    break;

  case 499:

    {
      (void)((yyvsp[(3) - (3)].node)); /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NOT_NULL);
    ;}
    break;

  case 500:

    {
      (void)((yyvsp[(3) - (3)].node)); /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NULL);
    ;}
    break;

  case 501:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 502:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_NULL);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyval.node));
    ;}
    break;

  case 503:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_SYTEM_ACTION_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_SYSTEM, 1, (yyval.node));
    ;}
    break;

  case 504:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 3, node, (yyvsp[(7) - (7)].node), (yyvsp[(3) - (7)].node));
    ;}
    break;

  case 505:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 3, node, (yyvsp[(7) - (7)].node), (yyvsp[(3) - (7)].node));
    ;}
    break;

  case 506:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 2, node, (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 507:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 2, node, (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 508:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 509:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_FORCE);
    ;}
    break;

  case 510:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 511:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 512:

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

  case 513:

    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 514:

    { (yyval.node) = NULL; ;}
    break;

  case 515:

    { (yyval.ival) = 0; ;}
    break;

  case 516:

    { (yyval.ival) = 1; ;}
    break;

  case 517:

    { (yyval.ival) = 2; ;}
    break;

  case 518:

    { (yyval.ival) = 2; ;}
    break;

  case 519:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 520:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 4;
    ;}
    break;

  case 521:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 522:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 3;
    ;}
    break;

  case 523:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CLUSTER, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 524:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SERVER_ADDRESS, 2, (yyvsp[(3) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 525:

    { (yyval.node) = NULL; ;}
    break;

  case 526:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 527:

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

  case 528:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 529:

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

  case 531:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 532:

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

  case 558:

    {
								malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CREATE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
							;}
    break;

  case 559:

    {
					ParseNode *params = NULL;
        			merge_nodes(params, result->malloc_pool_, T_PARAM_LIST, (yyvsp[(5) - (6)].node));
					malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECL, 2, (yyvsp[(3) - (6)].node), params);
				;}
    break;

  case 560:

    {
					ParseNode *params = NULL;
					malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECL, 2, (yyvsp[(3) - (5)].node), params);
				;}
    break;

  case 561:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
					;}
    break;

  case 562:

    {
						(yyval.node) = (yyvsp[(1) - (1)].node);
					;}
    break;

  case 563:

    {
      					malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PARAM_DEFINITION, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
					;}
    break;

  case 564:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_IN_PARAM_DEFINITION, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
					;}
    break;

  case 565:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OUT_PARAM_DEFINITION, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
					;}
    break;

  case 566:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_INOUT_PARAM_DEFINITION, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
					;}
    break;

  case 567:

    { 
					//malloc_non_terminal_node($$, result->malloc_pool_, T_PROCEDURE_BLOCK, 1, $2);
					(yyval.node)=(yyvsp[(2) - (3)].node);
				;}
    break;

  case 568:

    { 
					(yyval.node)=NULL;
				;}
    break;

  case 569:

    { 
        			merge_nodes((yyval.node), result->malloc_pool_, T_PROCEDURE_STMTS, (yyvsp[(1) - (1)].node));
				;}
    break;

  case 570:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
				;}
    break;

  case 571:

    {
					(yyval.node)=(yyvsp[(1) - (1)].node);
				;}
    break;

  case 572:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 573:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 574:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 575:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 576:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 577:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 578:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 579:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 580:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 581:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 582:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 583:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 584:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 585:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 586:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 587:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 588:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 589:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 590:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 591:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 592:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 593:

    { (yyval.node) =(yyvsp[(1) - (1)].node); ;}
    break;

  case 594:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 595:

    { 
        			merge_nodes((yyval.node), result->malloc_pool_, T_PROCEDURE_STMTS, (yyvsp[(1) - (1)].node));
				;}
    break;

  case 596:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
				;}
    break;

  case 597:

    {
					(yyval.node)=(yyvsp[(1) - (1)].node);
				;}
    break;

  case 598:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 599:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 600:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 601:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 602:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
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

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 613:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 614:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 615:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 616:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 617:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 618:

    { (yyval.node) =(yyvsp[(1) - (1)].node); ;}
    break;

  case 619:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 620:

    {
						ParseNode *args = NULL;
						merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (4)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECLARE, 3, args, (yyvsp[(3) - (4)].node), NULL);
					;}
    break;

  case 621:

    {
						ParseNode *args = NULL;
						merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (6)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECLARE, 3, args, (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node));
					;}
    break;

  case 622:

    {
						ParseNode *var_list = NULL;
						merge_nodes(var_list, result->malloc_pool_, T_VAR_VAL_LIST, (yyvsp[(2) - (3)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ASSGIN, 1,var_list);
					;}
    break;

  case 623:

    {
						ParseNode *elsifs = NULL;
						merge_nodes(elsifs, result->malloc_pool_, T_PROCEDURE_ELSEIFS, (yyvsp[(5) - (9)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (9)].node), (yyvsp[(4) - (9)].node), elsifs ,(yyvsp[(6) - (9)].node));
					;}
    break;

  case 624:

    {
						ParseNode *elsifs = NULL;
						merge_nodes(elsifs, result->malloc_pool_, T_PROCEDURE_ELSEIFS, (yyvsp[(5) - (8)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (8)].node), (yyvsp[(4) - (8)].node), elsifs ,NULL);
					;}
    break;

  case 625:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (8)].node), (yyvsp[(4) - (8)].node), NULL ,(yyvsp[(5) - (8)].node));
					;}
    break;

  case 626:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (7)].node), (yyvsp[(4) - (7)].node), NULL ,NULL);
					;}
    break;

  case 627:

    {
						(yyval.node)=(yyvsp[(1) - (1)].node);
					;}
    break;

  case 628:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
					;}
    break;

  case 629:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ELSEIF, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
					;}
    break;

  case 630:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ELSE, 1, (yyvsp[(2) - (2)].node));
						//$$ = $2;
					;}
    break;

  case 631:

    {
						ParseNode *casewhenlist = NULL;
						merge_nodes(casewhenlist, result->malloc_pool_, T_PROCEDURE_CASE_WHEN_LIST, (yyvsp[(3) - (7)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CASE, 3, (yyvsp[(2) - (7)].node), casewhenlist, (yyvsp[(4) - (7)].node));
					;}
    break;

  case 632:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
					;}
    break;

  case 633:

    {
						(yyval.node)=(yyvsp[(1) - (1)].node);
					;}
    break;

  case 634:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CASE_WHEN, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
					;}
    break;

  case 635:

    {
						(yyval.node) = NULL;
					;}
    break;

  case 636:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ELSE, 1, (yyvsp[(2) - (2)].node));
						//$$ = $2;
					;}
    break;

  case 637:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_LOOP, 1, (yyvsp[(2) - (5)].node));
					;}
    break;

  case 638:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_WHILE, 2, (yyvsp[(2) - (7)].node), (yyvsp[(4) - (7)].node));
					;}
    break;

  case 639:

    {
						/* We do not bother building a node for NULL */
						(yyval.node) = NULL;
					;}
    break;

  case 640:

    {
						malloc_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXIT);
						(yyval.node)->value_=1;
					;}
    break;

  case 641:

    {
						malloc_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CONTINUE);
						(yyval.node)->value_=0;
					;}
    break;

  case 642:

    {
        					ParseNode *param_list = NULL;
            				merge_nodes(param_list, result->malloc_pool_, T_EXPR_LIST, (yyvsp[(4) - (5)].node));
        					
							malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXEC, 2, (yyvsp[(2) - (5)].node), param_list);
						;}
    break;

  case 643:

    {
							ParseNode *params = NULL;
							malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXEC, 2, (yyvsp[(2) - (4)].node), params);
						;}
    break;

  case 644:

    {
							malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DROP, 2, (yyvsp[(5) - (5)].node),(yyvsp[(5) - (5)].node));
						;}
    break;

  case 645:

    {
							malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DROP, 1, (yyvsp[(3) - (3)].node));
						;}
    break;

  case 646:

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

