
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
     AUTO_INCREMENT = 455,
     CHUNKSERVER = 456,
     COMPRESS_METHOD = 457,
     CONSISTENT_MODE = 458,
     EXPIRE_INFO = 459,
     GRANTS = 460,
     JOIN_INFO = 461,
     MERGESERVER = 462,
     REPLICA_NUM = 463,
     ROOTSERVER = 464,
     ROW_COUNT = 465,
     SERVER = 466,
     SERVER_IP = 467,
     SERVER_PORT = 468,
     SERVER_TYPE = 469,
     STATUS = 470,
     TABLE_ID = 471,
     TABLET_BLOCK_SIZE = 472,
     TABLET_MAX_SIZE = 473,
     UNLOCKED = 474,
     UPDATESERVER = 475,
     USE_BLOOM_FILTER = 476,
     VARIABLES = 477,
     VERBOSE = 478,
     WARNINGS = 479
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
#define YYLAST   3896

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  236
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  218
/* YYNRULES -- Number of rules.  */
#define YYNRULES  660
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1246

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   479

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    36,     2,     2,
      40,    41,    34,    32,   235,    33,    42,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   234,
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
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233
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
     999,  1004,  1008,  1010,  1013,  1014,  1016,  1018,  1020,  1022,
    1024,  1026,  1027,  1029,  1030,  1033,  1037,  1042,  1047,  1052,
    1056,  1060,  1064,  1065,  1069,  1071,  1072,  1076,  1078,  1082,
    1085,  1086,  1088,  1090,  1091,  1094,  1095,  1097,  1099,  1101,
    1104,  1108,  1110,  1112,  1116,  1118,  1122,  1124,  1128,  1131,
    1135,  1138,  1140,  1146,  1148,  1152,  1159,  1165,  1168,  1171,
    1174,  1176,  1178,  1179,  1183,  1185,  1187,  1189,  1191,  1193,
    1194,  1198,  1204,  1210,  1216,  1221,  1226,  1231,  1234,  1239,
    1243,  1247,  1251,  1255,  1259,  1263,  1267,  1271,  1276,  1279,
    1280,  1282,  1285,  1290,  1292,  1294,  1295,  1296,  1299,  1302,
    1303,  1305,  1306,  1308,  1312,  1314,  1318,  1323,  1325,  1327,
    1331,  1333,  1337,  1343,  1350,  1353,  1354,  1358,  1362,  1364,
    1368,  1373,  1375,  1377,  1379,  1380,  1384,  1385,  1388,  1392,
    1395,  1398,  1403,  1404,  1406,  1407,  1409,  1411,  1418,  1420,
    1424,  1427,  1429,  1431,  1434,  1436,  1438,  1441,  1443,  1445,
    1447,  1449,  1451,  1452,  1454,  1456,  1462,  1465,  1466,  1471,
    1473,  1475,  1477,  1479,  1481,  1484,  1488,  1490,  1494,  1498,
    1502,  1507,  1512,  1518,  1524,  1528,  1532,  1536,  1538,  1540,
    1542,  1544,  1548,  1550,  1554,  1558,  1561,  1562,  1564,  1568,
    1572,  1574,  1576,  1581,  1588,  1590,  1594,  1598,  1603,  1608,
    1614,  1616,  1617,  1619,  1621,  1622,  1626,  1630,  1634,  1637,
    1642,  1650,  1658,  1665,  1672,  1673,  1675,  1677,  1681,  1691,
    1694,  1695,  1699,  1703,  1707,  1708,  1710,  1712,  1714,  1716,
    1720,  1727,  1728,  1730,  1732,  1734,  1736,  1738,  1740,  1742,
    1744,  1746,  1748,  1750,  1752,  1754,  1756,  1758,  1760,  1762,
    1764,  1766,  1768,  1770,  1772,  1774,  1776,  1778,  1780,  1782,
    1784,  1786,  1788,  1790,  1792,  1795,  1802,  1808,  1812,  1814,
    1817,  1821,  1825,  1829,  1833,  1838,  1843,  1848,  1852,  1853,
    1855,  1858,  1860,  1862,  1864,  1866,  1868,  1870,  1872,  1875,
    1878,  1881,  1884,  1887,  1890,  1893,  1896,  1899,  1902,  1905,
    1908,  1911,  1914,  1917,  1919,  1921,  1922,  1924,  1927,  1929,
    1931,  1933,  1935,  1937,  1939,  1942,  1945,  1948,  1951,  1954,
    1957,  1960,  1963,  1966,  1969,  1972,  1975,  1978,  1981,  1984,
    1986,  1988,  1993,  2000,  2006,  2010,  2020,  2029,  2038,  2046,
    2048,  2051,  2056,  2059,  2067,  2070,  2072,  2077,  2078,  2081,
    2087,  2099,  2112,  2120,  2122,  2125,  2130,  2137,  2143,  2149,
    2153
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     237,     0,    -1,   238,   106,    -1,   238,   234,   239,    -1,
     239,    -1,   426,    -1,   451,    -1,   453,    -1,   452,    -1,
     268,    -1,   270,    -1,   271,    -1,   286,    -1,   279,    -1,
     280,    -1,   281,    -1,   282,    -1,   284,    -1,   285,    -1,
     316,    -1,   309,    -1,   287,    -1,   262,    -1,   259,    -1,
     258,    -1,   303,    -1,   306,    -1,   351,    -1,   354,    -1,
     391,    -1,   394,    -1,   402,    -1,   407,    -1,   413,    -1,
     405,    -1,   362,    -1,   367,    -1,   369,    -1,   371,    -1,
     374,    -1,   384,    -1,   389,    -1,   378,    -1,   379,    -1,
     380,    -1,   381,    -1,   355,    -1,    -1,   245,    -1,   240,
     235,   245,    -1,   421,    -1,   422,    42,   421,    -1,   422,
      42,    34,    -1,     4,    -1,     6,    -1,     5,    -1,     9,
      -1,     8,    -1,    10,    -1,    12,    -1,    14,    -1,    13,
      -1,   171,    42,   421,    -1,   241,    -1,   242,    -1,    40,
     245,    41,    -1,    40,   240,   235,   245,    41,    -1,   247,
      -1,   253,    -1,   254,    -1,   317,    -1,   109,   317,    -1,
     252,    -1,   243,    -1,    32,   244,    -1,    33,   244,    -1,
     244,    32,   244,    -1,   244,    33,   244,    -1,   244,    34,
     244,    -1,   244,    35,   244,    -1,   244,    36,   244,    -1,
     244,    38,   244,    -1,   244,    37,   244,    -1,   243,    -1,
      32,   245,    -1,    33,   245,    -1,   245,    32,   245,    -1,
     245,    33,   245,    -1,   245,    34,   245,    -1,   245,    35,
     245,    -1,   245,    36,   245,    -1,   245,    38,   245,    -1,
     245,    37,   245,    -1,   245,    26,   245,    -1,   245,    25,
     245,    -1,   245,    24,   245,    -1,   245,    22,   245,    -1,
     245,    23,   245,    -1,   245,    21,   245,    -1,   245,    28,
     245,    -1,   245,    20,    28,   245,    -1,   245,    19,   245,
      -1,   245,    18,   245,    -1,    20,   245,    -1,   245,    31,
      10,    -1,   245,    31,    20,    10,    -1,   245,    31,     8,
      -1,   245,    31,    20,     8,    -1,   245,    31,    11,    -1,
     245,    31,    20,    11,    -1,   245,    29,   244,    19,   244,
      -1,   245,    20,    29,   244,    19,   244,    -1,   245,    30,
     246,    -1,   245,    20,    30,   246,    -1,   245,    27,   245,
      -1,   317,    -1,    40,   240,    41,    -1,    79,   248,   249,
     251,   105,    -1,   245,    -1,    -1,   250,    -1,   249,   250,
      -1,   200,   245,   186,   245,    -1,   104,   245,    -1,    -1,
      14,    40,     5,    41,    -1,    14,    40,    14,    41,    -1,
     423,    40,    34,    41,    -1,   423,    40,   257,   245,    41,
      -1,   423,    40,   240,    41,    -1,   423,    40,   245,    70,
     292,    41,    -1,   423,    40,   334,    41,    -1,   423,    40,
      41,    -1,   255,    40,   256,    41,    -1,   219,    -1,   316,
      -1,   309,    -1,   259,    -1,   258,    -1,    68,    -1,   100,
      -1,    97,   113,   347,   323,   310,    -1,   193,   325,   347,
     172,   260,   323,   310,    -1,   261,    -1,   260,   235,   261,
      -1,   421,    24,   245,    -1,    87,   207,   288,   347,   146,
     347,   263,   264,   266,    -1,    40,   313,    41,    -1,   208,
     265,    -1,    -1,    40,   313,    41,    -1,   267,    -1,   266,
     235,   267,    -1,    -1,   301,    -1,    44,   269,    56,   112,
     316,    -1,   424,    -1,    57,   269,    -1,    58,   269,    -1,
      58,   269,    60,    -1,    58,   269,   130,   404,    -1,    58,
     269,    60,   130,   404,    -1,    58,   269,    62,   130,   404,
      -1,    58,   269,    61,   130,   404,    -1,    58,   269,    63,
     130,   404,    -1,    58,   269,    64,     5,   130,   404,    -1,
      58,   269,   283,    65,     5,   130,   404,    -1,    58,   269,
      61,    -1,    58,   269,    62,    -1,    58,   269,    63,    -1,
      58,   269,   283,    65,     5,    -1,    60,    -1,    61,    -1,
      58,   269,    64,     5,    -1,    58,   269,   113,     5,   192,
       5,    -1,    59,   269,    -1,    87,   184,   288,   347,    40,
     289,    41,   300,    -1,   126,    20,   109,    -1,    -1,   290,
      -1,   289,   235,   290,    -1,   291,    -1,   154,   133,    40,
     313,    41,    -1,   421,   292,   298,    -1,   189,    -1,   174,
      -1,   140,    -1,   128,    -1,    73,    -1,    95,   293,    -1,
     144,   293,    -1,    75,    -1,   111,   294,    -1,   156,    -1,
     101,   295,    -1,   188,   296,    -1,    93,    -1,    80,   297,
      -1,    74,   297,    -1,   197,   297,    -1,   198,   297,    -1,
      88,    -1,   142,    -1,    92,    -1,   187,   296,    -1,    40,
       5,   235,     5,    41,    -1,    40,     5,    41,    -1,    -1,
      40,     5,    41,    -1,    -1,   152,    -1,    -1,    40,     5,
      41,    -1,    -1,    40,     5,    41,    -1,    -1,   298,   299,
      -1,    -1,    20,    10,    -1,    10,    -1,    96,   242,    -1,
     209,    -1,   154,   133,    -1,   301,    -1,   300,   235,   301,
      -1,    -1,   215,   302,     4,    -1,   213,   302,     4,    -1,
     227,   302,     5,    -1,   226,   302,     5,    -1,   225,   302,
       5,    -1,   217,   302,     5,    -1,   211,   302,     4,    -1,
     230,   302,     8,    -1,   212,   302,   178,    -1,    82,   302,
       4,    -1,    24,    -1,    -1,   102,   184,   304,   305,    -1,
      -1,   126,   109,    -1,   346,    -1,   305,   235,   346,    -1,
     102,   207,   304,   307,   146,   308,    -1,    -1,   347,    -1,
     307,   235,   347,    -1,   347,    -1,   311,   130,   347,   312,
     196,   314,   310,    -1,   311,   130,   347,   316,    -1,   311,
     130,   347,    40,   313,    41,   316,    -1,    -1,   200,   245,
      -1,   158,    -1,   129,    -1,    40,   313,    41,    -1,    -1,
     421,    -1,   313,   235,   421,    -1,    40,   315,    41,    -1,
     314,   235,    40,   315,    41,    -1,   245,    -1,   315,   235,
     245,    -1,   318,   310,    -1,   317,    -1,    40,   318,    41,
      -1,    40,   317,    41,    -1,   319,    -1,   322,   333,    -1,
     320,   337,   333,    -1,   320,   336,   324,   333,    -1,   169,
     325,   342,   344,   332,    -1,   169,   325,   342,   344,   113,
     103,   323,   332,    -1,   322,    -1,   317,    -1,   169,   325,
     344,   130,   404,   113,   345,   323,   333,    -1,   169,   325,
     342,   344,   113,   345,   323,   335,   341,    -1,   320,    16,
     342,   320,    -1,   320,    17,   342,   320,    -1,   320,    15,
     342,   320,    -1,    -1,   199,   245,    -1,   199,     7,   245,
      -1,   136,   331,   145,   331,    -1,   145,   331,   136,   331,
      -1,   136,   331,    -1,   145,   331,    -1,   136,   331,   235,
     331,    -1,    -1,   122,   326,   123,    -1,   327,    -1,   326,
     235,   327,    -1,    -1,   328,    -1,   327,   328,    -1,   155,
      -1,   124,    -1,   132,    40,   347,   235,   347,   235,   347,
      42,   347,   235,   347,    42,   347,    41,    -1,   165,    40,
     330,    41,    -1,   207,    40,   347,   347,    41,    -1,     3,
      40,     3,    41,    -1,    40,   329,    41,    -1,   166,    -1,
     329,   235,    -1,    -1,   206,    -1,   180,    -1,   178,    -1,
     115,    -1,     5,    -1,    12,    -1,    -1,   324,    -1,    -1,
     112,   193,    -1,   245,   113,   245,    -1,    76,   245,   113,
     245,    -1,   134,   245,   113,   245,    -1,   190,   245,   113,
     245,    -1,    76,   113,   245,    -1,   134,   113,   245,    -1,
     190,   113,   245,    -1,    -1,   120,    77,   240,    -1,   337,
      -1,    -1,   147,    77,   338,    -1,   339,    -1,   338,   235,
     339,    -1,   245,   340,    -1,    -1,    71,    -1,    98,    -1,
      -1,   121,   245,    -1,    -1,    68,    -1,   100,    -1,   245,
      -1,   245,   424,    -1,   245,    70,   424,    -1,    34,    -1,
     343,    -1,   344,   235,   343,    -1,   346,    -1,   345,   235,
     346,    -1,   347,    -1,   347,    70,   422,    -1,   347,   422,
      -1,   317,    70,   422,    -1,   317,   422,    -1,   348,    -1,
      40,   348,    41,    70,   422,    -1,   422,    -1,    40,   348,
      41,    -1,   346,   349,   131,   346,   146,   245,    -1,   346,
     131,   346,   146,   245,    -1,   114,   350,    -1,   135,   350,
      -1,   162,   350,    -1,   127,    -1,   149,    -1,    -1,   110,
     353,   352,    -1,   316,    -1,   258,    -1,   309,    -1,   259,
      -1,   232,    -1,    -1,   173,   185,   359,    -1,   173,   207,
     146,   347,   359,    -1,   173,    86,   113,   347,   359,    -1,
     173,    86,    30,   347,   359,    -1,   173,   184,   224,   359,
      -1,   173,   220,   224,   359,    -1,   173,   358,   231,   359,
      -1,   173,   167,    -1,   173,    87,   184,   347,    -1,    99,
     347,   360,    -1,    98,   347,   360,    -1,   173,   233,   356,
      -1,   173,   253,   233,    -1,   173,   214,   357,    -1,   173,
     150,   359,    -1,   173,   361,   203,    -1,   139,   184,   347,
      -1,   136,     5,   235,     5,    -1,   136,     5,    -1,    -1,
     370,    -1,   112,    89,    -1,   112,    89,    40,    41,    -1,
     117,    -1,   170,    -1,    -1,    -1,    28,     4,    -1,   199,
     245,    -1,    -1,     4,    -1,    -1,   114,    -1,    87,   194,
     363,    -1,   364,    -1,   363,   235,   364,    -1,   365,   125,
      77,   366,    -1,     4,    -1,     4,    -1,   102,   194,   368,
      -1,   365,    -1,   368,   235,   365,    -1,   172,   151,   370,
      24,   366,    -1,    69,   194,   365,   125,    77,   366,    -1,
     112,   365,    -1,    -1,   157,   194,   373,    -1,   365,   192,
     365,    -1,   372,    -1,   373,   235,   372,    -1,    69,   194,
     365,   375,    -1,   138,    -1,   228,    -1,   202,    -1,    -1,
     201,    84,   175,    -1,    -1,    72,   376,    -1,   177,   191,
     377,    -1,    83,   376,    -1,   163,   376,    -1,   164,   382,
     383,     5,    -1,    -1,   117,    -1,    -1,   204,    -1,   205,
      -1,   119,   385,   146,   388,   192,   368,    -1,   386,    -1,
     385,   235,   386,    -1,    68,   387,    -1,    69,    -1,    87,
      -1,    87,   194,    -1,    97,    -1,   102,    -1,   119,   148,
      -1,   129,    -1,   193,    -1,   169,    -1,   158,    -1,   160,
      -1,    -1,    34,    -1,   422,    -1,   161,   385,   390,   113,
     368,    -1,   146,   388,    -1,    -1,   153,   392,   113,   393,
      -1,   424,    -1,   316,    -1,   309,    -1,   259,    -1,   258,
      -1,   172,   395,    -1,   172,   172,   397,    -1,   396,    -1,
     395,   235,   396,    -1,    14,   398,   245,    -1,   421,   398,
     245,    -1,   117,   421,   398,   245,    -1,   170,   421,   398,
     245,    -1,   118,    42,   421,   398,   245,    -1,   171,    42,
     421,   398,   245,    -1,    13,   398,   245,    -1,   252,   398,
     245,    -1,    14,   398,   400,    -1,   192,    -1,    24,    -1,
      14,    -1,   252,    -1,    40,   401,    41,    -1,   242,    -1,
     401,   235,   242,    -1,   108,   392,   403,    -1,   195,   404,
      -1,    -1,   399,    -1,   404,   235,   399,    -1,   406,   153,
     392,    -1,    94,    -1,   102,    -1,    69,   184,   347,   408,
      -1,    69,   184,   347,   157,   192,   347,    -1,   409,    -1,
     408,   235,   409,    -1,    66,   410,   291,    -1,   102,   410,
     421,   411,    -1,    69,   410,   421,   412,    -1,   157,   410,
     421,   192,   424,    -1,    85,    -1,    -1,    78,    -1,   159,
      -1,    -1,   172,    20,    10,    -1,   102,    20,    10,    -1,
     172,    96,   242,    -1,   102,    96,    -1,    69,   179,   172,
     415,    -1,    69,   179,   414,    90,   143,    24,     4,    -1,
      69,   179,   414,    91,   143,    24,     4,    -1,    69,   179,
     181,   143,    24,     4,    -1,    69,   179,   182,   183,    24,
       4,    -1,    -1,   116,    -1,   416,    -1,   415,   235,   416,
      -1,   421,    24,   242,   417,   418,   223,    24,   419,   420,
      -1,    82,     4,    -1,    -1,   168,    24,   141,    -1,   168,
      24,   176,    -1,   168,    24,    76,    -1,    -1,   218,    -1,
     229,    -1,   210,    -1,   216,    -1,    81,    24,     5,    -1,
     221,    24,     4,   222,    24,     5,    -1,    -1,     3,    -1,
     425,    -1,     3,    -1,   425,    -1,     3,    -1,     3,    -1,
     425,    -1,   209,    -1,   210,    -1,   211,    -1,   212,    -1,
     213,    -1,   214,    -1,   215,    -1,   216,    -1,   217,    -1,
     218,    -1,   219,    -1,   220,    -1,   221,    -1,   222,    -1,
     223,    -1,   224,    -1,   226,    -1,   225,    -1,   227,    -1,
     228,    -1,   229,    -1,   230,    -1,   231,    -1,   232,    -1,
     233,    -1,   427,   430,    -1,    87,    43,     3,    40,   428,
      41,    -1,    87,    43,     3,    40,    41,    -1,   428,   235,
     429,    -1,   429,    -1,    14,   292,    -1,    30,    14,   292,
      -1,    46,    14,   292,    -1,    47,    14,   292,    -1,    14,
     292,    54,    -1,    30,    14,   292,    54,    -1,    46,    14,
     292,    54,    -1,    47,    14,   292,    54,    -1,    72,   431,
     105,    -1,    -1,   432,    -1,   432,   433,    -1,   433,    -1,
     439,    -1,   443,    -1,   448,    -1,   447,    -1,   437,    -1,
     438,    -1,   321,   234,    -1,   309,   234,    -1,   259,   234,
      -1,   258,   234,    -1,   316,   234,    -1,   268,   234,    -1,
     270,   234,    -1,   286,   234,    -1,   272,   234,    -1,   273,
     234,    -1,   274,   234,    -1,   276,   234,    -1,   275,   234,
      -1,   277,   234,    -1,   278,   234,    -1,   450,    -1,   449,
      -1,    -1,   435,    -1,   435,   436,    -1,   436,    -1,   439,
      -1,   443,    -1,   448,    -1,   447,    -1,   438,    -1,   321,
     234,    -1,   309,   234,    -1,   259,   234,    -1,   258,   234,
      -1,   316,   234,    -1,   268,   234,    -1,   270,   234,    -1,
     286,   234,    -1,   272,   234,    -1,   273,   234,    -1,   274,
     234,    -1,   276,   234,    -1,   275,   234,    -1,   277,   234,
      -1,   278,   234,    -1,   450,    -1,   449,    -1,    44,   404,
     292,   234,    -1,    44,   404,   292,    96,   242,   234,    -1,
      44,   404,   292,    54,   234,    -1,   172,   395,   234,    -1,
     126,   245,   186,   434,   440,   442,   105,   126,   234,    -1,
     126,   245,   186,   434,   440,   105,   126,   234,    -1,   126,
     245,   186,   434,   442,   105,   126,   234,    -1,   126,   245,
     186,   434,   105,   126,   234,    -1,   441,    -1,   440,   441,
      -1,    45,   245,   186,   434,    -1,   104,   434,    -1,    79,
     245,   444,   446,   105,    79,   234,    -1,   444,   445,    -1,
     445,    -1,   200,   245,   186,   434,    -1,    -1,   104,   434,
      -1,    49,   434,   105,    49,   234,    -1,   112,    14,    30,
     244,   192,   244,    49,   434,   105,    49,   234,    -1,   112,
      14,    30,    55,   244,   192,   244,    49,   434,   105,    49,
     234,    -1,    48,   245,    52,   434,   105,    48,   234,    -1,
     234,    -1,    50,   234,    -1,    50,   200,   245,   234,    -1,
      53,     3,    40,   240,    41,   325,    -1,    53,     3,    40,
      41,   325,    -1,   102,    43,   126,   109,     3,    -1,   102,
      43,     3,    -1,   173,    43,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   251,   251,   260,   267,   274,   275,   276,   277,   279,
     280,   281,   282,   283,   285,   286,   287,   288,   289,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   329,   333,
     340,   342,   348,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   370,   372,   374,   376,   382,   390,   394,
     398,   402,   406,   414,   415,   419,   423,   424,   425,   426,
     427,   428,   429,   432,   433,   437,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   460,   464,   468,   472,   476,   480,   484,   488,
     492,   496,   500,   504,   508,   515,   519,   524,   532,   533,
     537,   539,   544,   551,   552,   557,   561,   569,   583,   611,
     686,   702,   706,   728,   736,   743,   744,   745,   746,   750,
     754,   768,   782,   792,   796,   803,   817,   833,   840,   846,
     852,   859,   863,   868,   874,   891,   902,   915,   931,   937,
     951,   966,   981,   997,  1013,  1029,  1046,  1062,  1083,  1102,
    1119,  1132,  1137,  1152,  1169,  1189,  1209,  1226,  1229,  1233,
    1237,  1244,  1248,  1257,  1266,  1268,  1270,  1272,  1274,  1276,
    1285,  1294,  1296,  1298,  1300,  1305,  1312,  1314,  1321,  1328,
    1335,  1342,  1344,  1346,  1352,  1364,  1366,  1369,  1373,  1374,
    1378,  1379,  1383,  1384,  1388,  1389,  1393,  1396,  1400,  1405,
    1410,  1412,  1414,  1419,  1423,  1428,  1434,  1439,  1444,  1449,
    1454,  1459,  1464,  1469,  1474,  1480,  1488,  1489,  1500,  1510,
    1511,  1516,  1520,  1534,  1544,  1546,  1550,  1557,  1568,  1582,
    1593,  1611,  1612,  1619,  1624,  1632,  1637,  1641,  1642,  1649,
    1653,  1659,  1660,  1674,  1684,  1689,  1690,  1694,  1698,  1703,
    1713,  1734,  1756,  1782,  1783,  1791,  1823,  1849,  1871,  1893,
    1919,  1920,  1924,  1931,  1939,  1947,  1951,  1955,  1967,  1970,
    1984,  1988,  1993,  1999,  2003,  2010,  2014,  2018,  2022,  2028,
    2034,  2041,  2045,  2052,  2057,  2063,  2067,  2071,  2075,  2081,
    2083,  2089,  2090,  2096,  2097,  2105,  2112,  2119,  2126,  2133,
    2144,  2155,  2170,  2171,  2178,  2179,  2183,  2190,  2192,  2197,
    2205,  2206,  2208,  2214,  2215,  2223,  2226,  2230,  2237,  2242,
    2250,  2258,  2268,  2272,  2279,  2281,  2286,  2290,  2294,  2298,
    2302,  2306,  2310,  2319,  2327,  2331,  2335,  2344,  2350,  2356,
    2362,  2369,  2370,  2380,  2388,  2389,  2390,  2391,  2395,  2396,
    2407,  2409,  2411,  2413,  2415,  2417,  2419,  2424,  2426,  2428,
    2430,  2432,  2436,  2449,  2453,  2457,  2464,  2470,  2479,  2489,
    2493,  2495,  2497,  2502,  2503,  2504,  2509,  2510,  2512,  2518,
    2519,  2524,  2525,  2535,  2541,  2545,  2551,  2557,  2563,  2575,
    2581,  2585,  2597,  2601,  2607,  2612,  2623,  2629,  2635,  2639,
    2651,  2657,  2662,  2676,  2681,  2685,  2690,  2694,  2700,  2712,
    2724,  2736,  2743,  2747,  2755,  2759,  2764,  2778,  2789,  2793,
    2799,  2805,  2810,  2815,  2820,  2825,  2830,  2835,  2840,  2845,
    2850,  2857,  2862,  2867,  2872,  2884,  2924,  2929,  2941,  2948,
    2953,  2955,  2957,  2959,  2972,  2978,  2986,  2990,  2997,  3003,
    3010,  3017,  3024,  3031,  3038,  3045,  3056,  3066,  3067,  3071,
    3074,  3080,  3087,  3088,  3103,  3110,  3115,  3120,  3124,  3137,
    3145,  3147,  3158,  3164,  3175,  3179,  3186,  3191,  3197,  3202,
    3211,  3212,  3216,  3217,  3218,  3222,  3227,  3232,  3236,  3250,
    3256,  3263,  3270,  3277,  3287,  3290,  3298,  3302,  3309,  3324,
    3327,  3331,  3333,  3335,  3338,  3342,  3347,  3352,  3357,  3365,
    3369,  3374,  3385,  3387,  3404,  3406,  3423,  3427,  3429,  3442,
    3443,  3444,  3445,  3446,  3447,  3448,  3449,  3450,  3451,  3452,
    3453,  3454,  3455,  3456,  3457,  3458,  3459,  3460,  3461,  3462,
    3463,  3464,  3465,  3466,  3476,  3481,  3488,  3494,  3498,  3503,
    3507,  3511,  3515,  3519,  3526,  3533,  3540,  3548,  3555,  3558,
    3563,  3567,  3572,  3574,  3576,  3578,  3580,  3582,  3584,  3586,
    3588,  3590,  3592,  3594,  3596,  3598,  3600,  3602,  3604,  3606,
    3608,  3610,  3612,  3615,  3617,  3624,  3627,  3632,  3636,  3641,
    3643,  3645,  3647,  3649,  3651,  3653,  3655,  3657,  3659,  3661,
    3663,  3665,  3667,  3669,  3671,  3673,  3675,  3677,  3679,  3682,
    3684,  3692,  3698,  3704,  3724,  3736,  3742,  3748,  3752,  3757,
    3761,  3766,  3772,  3783,  3790,  3794,  3799,  3805,  3808,  3819,
    3828,  3837,  3855,  3861,  3871,  3881,  3892,  3900,  3913,  3917,
    3931
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
  "INDEX", "STORING", "AUTO_INCREMENT", "CHUNKSERVER", "COMPRESS_METHOD",
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
  "hint_option", "opt_comma_list", "consistency_level", "limit_expr",
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
     476,   477,   478,   479,    59,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   236,   237,   238,   238,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   240,   240,
     241,   241,   241,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   246,   246,   247,   248,   248,
     249,   249,   250,   251,   251,   252,   252,   253,   253,   253,
     253,   253,   253,   254,   255,   256,   256,   256,   256,   257,
     257,   258,   259,   260,   260,   261,   262,   263,   264,   264,
     265,   266,   266,   266,   267,   268,   269,   270,   271,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   283,   284,   285,   286,   287,   288,   288,   289,
     289,   290,   290,   291,   292,   292,   292,   292,   292,   292,
     292,   292,   292,   292,   292,   292,   292,   292,   292,   292,
     292,   292,   292,   292,   292,   293,   293,   293,   294,   294,
     295,   295,   296,   296,   297,   297,   298,   298,   299,   299,
     299,   299,   299,   300,   300,   300,   301,   301,   301,   301,
     301,   301,   301,   301,   301,   301,   302,   302,   303,   304,
     304,   305,   305,   306,   307,   307,   307,   308,   309,   309,
     309,   310,   310,   311,   311,   312,   312,   313,   313,   314,
     314,   315,   315,   316,   316,   317,   317,   318,   318,   318,
     318,   319,   319,   320,   320,   321,   322,   322,   322,   322,
     323,   323,   323,   324,   324,   324,   324,   324,   325,   325,
     326,   326,   326,   327,   327,   328,   328,   328,   328,   328,
     328,   328,   328,   329,   329,   330,   330,   330,   330,   331,
     331,   332,   332,   333,   333,   334,   334,   334,   334,   334,
     334,   334,   335,   335,   336,   336,   337,   338,   338,   339,
     340,   340,   340,   341,   341,   342,   342,   342,   343,   343,
     343,   343,   344,   344,   345,   345,   346,   346,   346,   346,
     346,   346,   346,   347,   348,   348,   348,   349,   349,   349,
     349,   350,   350,   351,   352,   352,   352,   352,   353,   353,
     354,   354,   354,   354,   354,   354,   354,   354,   354,   354,
     354,   354,   354,   354,   354,   354,   355,   356,   356,   356,
     357,   357,   357,   358,   358,   358,   359,   359,   359,   360,
     360,   361,   361,   362,   363,   363,   364,   365,   366,   367,
     368,   368,   369,   369,   370,   370,   371,   372,   373,   373,
     374,   375,   375,   376,   376,   377,   377,   378,   378,   379,
     380,   381,   382,   382,   383,   383,   383,   384,   385,   385,
     386,   386,   386,   386,   386,   386,   386,   386,   386,   386,
     386,   387,   387,   388,   388,   389,   390,   390,   391,   392,
     393,   393,   393,   393,   394,   394,   395,   395,   396,   396,
     396,   396,   396,   396,   396,   396,   397,   398,   398,   399,
     399,   400,   401,   401,   402,   403,   403,   404,   404,   405,
     406,   406,   407,   407,   408,   408,   409,   409,   409,   409,
     410,   410,   411,   411,   411,   412,   412,   412,   412,   413,
     413,   413,   413,   413,   414,   414,   415,   415,   416,   417,
     417,   418,   418,   418,   418,   419,   419,   419,   419,   420,
     420,   420,   421,   421,   422,   422,   423,   424,   424,   425,
     425,   425,   425,   425,   425,   425,   425,   425,   425,   425,
     425,   425,   425,   425,   425,   425,   425,   425,   425,   425,
     425,   425,   425,   425,   426,   427,   427,   428,   428,   429,
     429,   429,   429,   429,   429,   429,   429,   430,   431,   431,
     432,   432,   433,   433,   433,   433,   433,   433,   433,   433,
     433,   433,   433,   433,   433,   433,   433,   433,   433,   433,
     433,   433,   433,   433,   433,   434,   434,   435,   435,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   437,   437,   437,   438,   439,   439,   439,   439,   440,
     440,   441,   442,   443,   444,   444,   445,   446,   446,   447,
     447,   447,   448,   449,   450,   450,   451,   451,   452,   452,
     453
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
       4,     3,     1,     2,     0,     1,     1,     1,     1,     1,
       1,     0,     1,     0,     2,     3,     4,     4,     4,     3,
       3,     3,     0,     3,     1,     0,     3,     1,     3,     2,
       0,     1,     1,     0,     2,     0,     1,     1,     1,     2,
       3,     1,     1,     3,     1,     3,     1,     3,     2,     3,
       2,     1,     5,     1,     3,     6,     5,     2,     2,     2,
       1,     1,     0,     3,     1,     1,     1,     1,     1,     0,
       3,     5,     5,     5,     4,     4,     4,     2,     4,     3,
       3,     3,     3,     3,     3,     3,     3,     4,     2,     0,
       1,     2,     4,     1,     1,     0,     0,     2,     2,     0,
       1,     0,     1,     3,     1,     3,     4,     1,     1,     3,
       1,     3,     5,     6,     2,     0,     3,     3,     1,     3,
       4,     1,     1,     1,     0,     3,     0,     2,     3,     2,
       2,     4,     0,     1,     0,     1,     1,     6,     1,     3,
       2,     1,     1,     2,     1,     1,     2,     1,     1,     1,
       1,     1,     0,     1,     1,     5,     2,     0,     4,     1,
       1,     1,     1,     1,     2,     3,     1,     3,     3,     3,
       4,     4,     5,     5,     3,     3,     3,     1,     1,     1,
       1,     3,     1,     3,     3,     2,     0,     1,     3,     3,
       1,     1,     4,     6,     1,     3,     3,     4,     4,     5,
       1,     0,     1,     1,     0,     3,     3,     3,     2,     4,
       7,     7,     6,     6,     0,     1,     1,     3,     9,     2,
       0,     3,     3,     3,     0,     1,     1,     1,     1,     3,
       6,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     6,     5,     3,     1,     2,
       3,     3,     3,     3,     4,     4,     4,     3,     0,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     1,     0,     1,     2,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       1,     4,     6,     5,     3,     9,     8,     8,     7,     1,
       2,     4,     2,     7,     2,     1,     4,     0,     2,     5,
      11,    12,     7,     1,     2,     4,     6,     5,     5,     3,
       3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      47,     0,     0,     0,     0,     0,     0,     0,   424,   424,
       0,   490,     0,     0,     0,   491,     0,   369,     0,   254,
       0,     0,     0,   253,     0,   424,   432,   288,     0,   395,
       0,   288,     0,     0,     4,    24,    23,    22,     9,    10,
      11,    13,    14,    15,    16,    17,    18,    12,    21,    25,
      26,    20,     0,    19,   274,   251,   267,   325,   273,    27,
      28,    46,    35,    36,    37,    38,    39,    42,    43,    44,
      45,    40,    41,    29,    30,    31,    34,     0,    32,    33,
       5,     0,     6,     8,     7,   274,     0,   537,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   556,   555,   557,   558,   559,   560,
     561,   562,   563,     0,   156,   538,     0,   157,   158,   175,
     514,     0,     0,   423,   427,   429,     0,   178,     0,   178,
       0,   534,   399,   353,   535,   399,     0,   239,     0,   239,
     486,   459,   368,     0,   452,   441,   442,   444,   445,     0,
     447,   450,   449,   448,     0,   438,     0,     0,     0,   457,
     430,   433,   434,   292,   335,   532,     0,     0,     0,     0,
     415,     0,     0,     0,     0,   464,   466,     0,   533,   536,
       0,     0,     0,   402,   393,   396,   377,   394,     0,   396,
       0,   415,     0,   389,     0,     0,     0,     0,   426,     0,
       1,     2,    47,     0,     0,   263,   335,   335,   335,     0,
       0,   313,     0,   268,     0,   578,   564,   266,   265,     0,
       0,   159,   167,   168,   169,     0,     0,     0,   515,     0,
       0,     0,     0,     0,   407,     0,     0,     0,     0,   403,
     404,     0,     0,   280,   400,   380,   379,   659,     0,     0,
       0,   410,   409,   244,     0,   484,   365,   367,   366,   364,
     363,   451,   440,   443,   446,     0,     0,   386,     0,     0,
     418,   416,     0,     0,   435,   436,     0,     0,   304,   296,
       0,   295,     0,   302,     0,     0,   290,   293,   336,   337,
       0,   478,   477,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   465,     0,     0,     0,   660,     0,     0,
       0,     0,     0,   384,   396,   370,     0,     0,   383,   390,
     396,     0,   381,   382,   396,   385,     0,     0,   428,     0,
       3,   256,   532,    53,    55,    54,    57,    56,    58,    59,
      61,    60,     0,     0,     0,     0,   119,     0,     0,   549,
      63,    64,    83,   252,    67,    72,    68,    69,     0,    70,
      50,     0,   533,     0,     0,     0,     0,     0,     0,   313,
     269,   314,   489,     0,     0,   605,     0,     0,     0,     0,
       0,   288,     0,   653,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     579,   581,   586,   587,   582,   583,   585,   584,   604,   603,
       0,   288,     0,    48,   173,     0,     0,   509,   516,     0,
       0,     0,     0,     0,   501,   501,   501,   501,   492,   494,
       0,   421,   422,   420,     0,     0,     0,     0,     0,     0,
       0,   251,     0,   240,     0,   238,     0,   241,   346,   351,
       0,     0,   245,   479,   480,   487,   485,   453,     0,   454,
     439,   463,   462,   461,   460,   458,     0,     0,   456,     0,
     431,     0,     0,     0,     0,     0,   289,     0,   294,   341,
     338,   342,   311,   474,     0,     0,   468,     0,     0,   414,
       0,     0,     0,     0,   475,   467,   469,   396,   396,   378,
     397,   398,   374,   396,   391,   375,   388,   376,     0,   132,
     139,     0,   140,     0,     0,     0,    48,     0,     0,     0,
       0,     0,     0,   249,   103,    84,    85,     0,    48,    70,
     118,     0,    71,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   288,   274,   279,
     273,   277,   278,   330,   326,   327,   309,   310,   285,   286,
     270,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   606,
     608,   613,   609,   610,   612,   611,   630,   629,     0,   654,
       0,     0,     0,     0,     0,     0,   591,   590,   593,   594,
     596,   597,   598,   600,   599,   601,   602,   595,   589,   592,
     588,   577,   580,   155,   657,   288,     0,     0,   170,     0,
       0,     0,     0,     0,     0,   500,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   566,     0,     0,     0,   568,
     177,     0,   405,     0,     0,     0,   281,   141,   658,   274,
       0,   351,     0,     0,   350,   362,   360,     0,   362,   362,
       0,     0,   348,   411,     0,     0,     0,     0,   417,   419,
     455,     0,   301,   303,     0,   308,   307,   306,   305,     0,
       0,   291,     0,   339,     0,     0,   312,   271,   125,   126,
     470,     0,   408,   412,   471,     0,     0,   476,   373,   372,
     371,     0,     0,   127,     0,     0,     0,     0,     0,     0,
     129,     0,     0,     0,   131,   425,   280,   143,     0,     0,
     257,     0,     0,    65,     0,   124,   120,    62,   102,   101,
       0,     0,     0,    98,    96,    97,    95,    94,    93,   114,
      99,     0,     0,    73,     0,     0,   112,   115,   106,   104,
     108,     0,    86,    87,    88,    89,    90,    92,    91,     0,
     138,   137,   136,   135,    52,    51,   335,   331,   332,   329,
       0,     0,     0,     0,   188,   215,   191,   215,   201,   203,
     196,   207,   211,   209,   187,   186,   202,   207,   193,   185,
     213,   213,   184,   215,   215,     0,   605,   617,   616,   619,
     620,   622,   623,   624,   626,   625,   627,   628,   621,   615,
     618,   614,     0,   607,     0,   171,   172,     0,     0,     0,
       0,     0,     0,   647,   645,     0,   605,     0,   634,   656,
      49,   174,   517,    60,   520,   512,   513,     0,     0,   496,
       0,     0,   504,   493,     0,   501,   495,   413,   569,     0,
       0,     0,   565,     0,     0,     0,   179,   181,   406,     0,
     282,   354,   242,   349,   361,   357,     0,   358,   359,     0,
     347,   243,   247,   246,   488,   437,   300,     0,   298,     0,
     340,   280,   280,   344,   343,   472,   473,   482,     0,   392,
     387,   319,     0,   320,     0,   321,     0,     0,   315,   128,
       0,   251,     0,   255,     0,     0,   251,    49,     0,     0,
     121,     0,   100,     0,   113,    74,    75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   107,   105,   109,   133,
       0,   328,   283,   287,   284,     0,   198,   197,     0,   189,
     210,   194,     0,   192,   190,     0,   204,   195,   199,   200,
       0,     0,   631,     0,     0,   655,     0,     0,     0,     0,
       0,   160,     0,     0,   605,   644,     0,     0,     0,     0,
       0,     0,   524,   510,   511,   217,     0,     0,   498,   502,
     503,   497,     0,   573,   570,   571,   572,   567,     0,   225,
       0,     0,   149,     0,     0,     0,     0,   299,   311,     0,
     322,   481,     0,   316,   317,   318,   130,   144,   142,   145,
     250,   258,   261,     0,     0,   248,    66,     0,   123,   117,
       0,   110,    76,    77,    78,    79,    80,    82,    81,   116,
       0,     0,     0,     0,     0,   633,     0,     0,   649,   161,
     163,   162,   164,     0,     0,   605,   648,     0,     0,     0,
       0,   605,     0,     0,   639,     0,     0,   519,     0,     0,
     183,     0,   508,     0,     0,   499,   574,   575,   576,     0,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     176,   223,   180,     0,     0,   153,   352,   356,     0,     0,
     272,   345,     0,   333,   483,   259,     0,     0,   122,   111,
       0,   214,   206,     0,   208,   212,   632,     0,   165,     0,
     646,     0,     0,     0,     0,   642,     0,     0,   640,     0,
       0,     0,     0,     0,   219,     0,     0,     0,   221,   216,
     506,   505,   507,     0,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   147,     0,   148,   146,
     151,   154,   355,     0,     0,     0,   276,   262,     0,     0,
     652,   166,   643,     0,   605,   605,   638,     0,     0,     0,
     280,   523,   521,   522,     0,   218,   220,   222,   182,   235,
     232,   234,   227,   226,   231,   230,   229,   228,   233,   224,
       0,     0,     0,   323,   334,   260,   205,   605,     0,   641,
     636,     0,   637,   313,   527,   528,   525,   526,   531,   150,
     152,     0,     0,     0,   635,   275,     0,     0,   518,     0,
       0,     0,     0,     0,     0,     0,   650,   529,     0,     0,
     651,     0,     0,     0,   297,   530
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    32,    33,    34,   412,   350,   351,   352,   754,   480,
     756,   354,   531,   735,   736,   921,   355,   356,   357,   358,
     769,   517,   573,   574,   726,   727,    37,  1002,  1095,  1158,
    1159,  1160,   575,   113,   576,    40,   577,   578,   579,   580,
     581,   582,   583,    41,    42,    43,    44,   227,    45,    46,
     584,    48,   238,   865,   866,   867,   805,   949,   953,   951,
     956,   946,  1070,  1139,  1090,  1161,  1145,    49,   250,   445,
      50,   451,   881,   585,   205,    52,   522,   729,   916,  1023,
     586,   359,    55,    56,    57,   587,    58,   441,   696,   164,
     285,   286,   287,   472,   689,   568,   697,   213,   518,  1103,
     210,   211,   564,   565,   779,  1166,   290,   481,   482,   892,
     893,   448,   449,   670,   875,    59,   260,   143,    60,    61,
     322,   318,   195,   313,   245,   196,    62,   239,   240,   251,
     703,    63,   252,    64,   299,    65,   270,   271,    66,   433,
     124,   328,    67,    68,    69,    70,   162,   276,    71,   154,
     155,   262,   458,    72,   273,    73,   140,   465,    74,   175,
     176,   303,   293,   455,   707,   898,    75,   255,   456,    76,
      77,    78,   428,   429,   640,   991,   988,    79,   232,   417,
     418,   982,  1069,  1218,  1228,   360,   361,   197,   114,   362,
      80,    81,   648,   649,   216,   399,   400,   401,   588,   589,
     590,   402,   591,   592,  1063,  1064,  1065,   593,   833,   834,
     976,   594,   595,   596,   597,    82,    83,    84
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -942
static const yytype_int16 yypact[] =
{
    3364,    22,  2892,    98,  2892,  2892,  2892,   301,   -53,   -53,
     178,  -942,    -7,  2930,  2930,   295,  2892,  -114,   695,  -942,
     -58,  2892,    50,  -942,   695,   -53,   100,   182,   806,   320,
     138,   182,   337,   -27,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,   240,  -942,     4,   173,  -942,   344,     8,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,   257,  -942,  -942,
    -942,   328,  -942,  -942,  -942,   377,   383,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,   376,  -942,  -942,   408,  -942,   555,  -942,
     396,  2930,   468,  -942,  -942,  -942,   478,   357,   468,   357,
    2930,  -942,   510,  -942,  -942,   510,    79,   391,   468,   391,
     347,  -942,  -942,   247,   392,  -942,   369,  -942,  -942,   403,
    -942,  -942,  -942,  -942,   -37,  -942,  2930,   442,   468,   -25,
    -942,  -942,   163,   162,   245,  -942,    37,    60,  2962,   528,
     462,  2962,   541,   572,    37,   360,  -942,    37,  -942,  -942,
     591,    58,   414,  -942,  -942,    14,  -942,  -942,   379,    14,
     458,   496,   387,   486,   390,   397,   427,   592,   432,  2930,
    -942,  -942,  3364,  2930,  2532,  -942,   245,   245,   245,   577,
      11,   -14,   463,  -942,  2892,   737,  -942,  -942,  -942,   546,
    1754,   594,   598,  -942,  -942,   659,   666,   615,  -942,  2962,
     532,   504,   331,   318,  -942,   -39,   649,   671,  2930,   460,
    -942,   568,  2930,   497,  -942,  -942,  -942,  -942,   597,   600,
    2499,  -942,   465,  2930,   696,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  2699,   695,  -942,   247,   520,
    -942,   482,  2699,   612,  -942,  -942,   726,   692,  -942,  -942,
     697,  -942,   698,  -942,   700,   -60,   162,  -942,  -942,  -942,
    1817,  -942,  -942,  2532,   384,  2532,    37,  2962,   468,   711,
      37,  2962,    37,  -942,  2532,  2079,  2532,  -942,  2930,  2930,
    2930,   732,  2532,  -942,    14,  -942,  2930,    83,  -942,  -942,
      14,   736,  -942,  -942,    14,  -942,  1078,   665,  -942,   578,
    -942,    68,   312,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,   725,  2532,  2532,  2532,  2048,  2532,   738,   709,   739,
    -942,  -942,  -942,  3858,  -942,  -942,  -942,  -942,   743,  -942,
    -942,   719,   734,    72,    72,    72,  2532,   143,   143,   654,
    -942,  -942,  -942,  1656,  2532,  3156,   -77,  2892,  2532,   770,
    2532,   182,  2079,  -942,   554,   556,   557,   559,   564,   576,
     579,   581,   583,   588,   589,   603,   605,   606,   607,   684,
     737,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
      22,   182,   -17,  3858,  -942,   619,   794,   613,  -942,   788,
     821,   823,   713,   715,   767,   767,   767,    -9,   625,  -942,
     784,  -942,  -942,  -942,   637,   753,   825,   468,   790,   722,
    2111,   173,   866,  -942,  1183,   638,  2636,   277,  2821,  -942,
     468,   129,  -942,   725,  -942,  -942,   639,  -942,   683,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,   468,   468,  -942,   468,
    -942,   873,     0,  2930,   221,  2930,  -942,   162,  -942,  -942,
    1418,  -942,   361,  3858,   842,   843,  3858,  2532,    37,  -942,
     883,  2532,    37,   849,  3858,  -942,  3858,    14,    14,  -942,
    -942,  3858,  -942,    14,   850,  -942,   656,  -942,   851,  -942,
    -942,  2174,  -942,  2405,  2438,    15,  3612,  2532,   852,   723,
    2962,  2145,   701,  -942,  1309,  -942,  -942,   661,  3783,   484,
    3858,   694,  -942,  2962,  2532,  2532,   430,  2532,  2532,  2532,
    2532,  2532,  2532,  2532,  2532,  2796,   859,   565,  2532,  2532,
    2532,  2532,  2532,  2532,  2532,   247,  2867,   182,  -942,   884,
    -942,   884,  -942,  3729,   669,  -942,  -942,  -942,   -73,   769,
    -942,  3299,  2560,   673,   677,   679,   680,   681,   682,   687,
     691,   706,   707,   708,   712,   714,   717,   718,   812,  3156,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  2532,  -942,
     475,  1698,   888,  1881,  1481,   259,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,   182,  2532,   915,  -942,  2962,
     172,   922,   924,   905,   907,  -942,  2962,  2962,  2962,  2930,
    2962,   359,   883,  3431,   929,  -942,   930,   933,    29,  -942,
    -942,  2731,  -942,   883,  2930,  2532,  3858,  -942,  -942,  2014,
     277,   908,  2499,  2930,  -942,   804,  -942,  2499,   804,   804,
     824,  2930,  -942,  -942,  2930,  2930,   696,   468,  -942,  -942,
     465,   913,  -942,  -942,   727,  -942,  -942,  -942,  -942,   917,
    2930,   162,  2892,  -942,  2463,  1817,  -942,  -942,  -942,  -942,
    3858,  2532,  -942,  -942,  3858,  2532,   172,  -942,  -942,  -942,
    -942,   918,   951,  -942,  2532,  3633,  2532,  3665,  2532,  3686,
    -942,  3431,  2532,  3810,  -942,  -942,  -130,  -942,   936,    34,
    -942,   921,  2532,  -942,  2532,    25,  -942,  -942,  1445,  1309,
    2532,  2796,   859,  1285,  1285,  1285,  1285,  1285,  1285,  1394,
    1473,  2796,  2796,  -942,   686,  2048,  -942,  -942,  -942,  -942,
    -942,   457,   610,   610,   926,   926,   926,   926,  -942,   925,
    -942,  -942,  -942,  -942,  -942,  -942,   245,  -942,  -942,  -942,
    2532,   143,   143,   143,  -942,   927,  -942,   927,  -942,  -942,
    -942,   928,   813,   940,  -942,  -942,  -942,   928,  -942,  -942,
     942,   942,  -942,   927,   927,    -4,  3156,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,   920,  -942,  1575,   840,   853,   854,   855,   982,
     696,   923,  2532,    28,  -942,  2763,  3156,   -47,  -942,  -942,
    3858,  -942,  -942,  -942,   909,  -942,  -942,   985,   988,  -942,
    3431,   -29,    64,  -942,   801,   767,  -942,  -942,   943,  3431,
    3431,  3431,  -942,   596,   861,    36,  -942,  -942,  -942,   956,
    3858,   932,   277,  -942,  -942,  -942,   539,  -942,  -942,  2499,
    -942,  -942,  -942,  -942,  -942,   465,  -942,  2930,  -942,   959,
    -942,   497,   -72,   277,  -942,  3858,  3858,  -942,    44,  -942,
    -942,  3858,  2532,  3858,  2532,  3858,  2532,   963,  3858,  -942,
    2962,   173,  2532,    22,  2962,  2532,   146,  3834,  3037,  2532,
    -942,   900,  1473,   710,  -942,  -942,  -942,  2796,  2796,  2796,
    2796,  2796,  2796,  2796,  2796,    48,  -942,  -942,  -942,  -942,
    1817,  -942,  -942,  -942,  -942,  1001,  -942,  -942,  1003,  -942,
    -942,  -942,  1004,  -942,  -942,  1005,  -942,  -942,  -942,  -942,
     777,   172,  -942,   937,   778,  -942,   696,   696,   696,   696,
     914,   639,  1008,  3268,  3156,  -942,   941,  2796,   512,   310,
     696,  1010,   877,  -942,  -942,  -942,    71,   282,  -942,  -942,
    -942,  -942,  2892,  -942,   993,   994,  1006,  -942,  1021,   354,
    2731,  2962,   856,  2930,  2532,   724,   827,  -942,    11,  2499,
     938,  -942,   172,  3858,  3858,  3858,  -942,  -942,  -942,  3858,
    -942,  -942,  3858,    49,  1023,  -942,  -942,  2532,  3858,  -942,
    2796,   721,   844,   844,  1027,  1027,  1027,  1027,  -942,  -942,
     -48,  1025,    53,  1028,  1029,  -942,   834,  1024,  -942,   639,
     639,   639,   639,   696,   944,  3156,  -942,   992,   524,  2796,
    2532,  3156,   947,   345,  -942,   971,   -45,  -942,  1054,   857,
      38,  1069,  -942,  1075,   172,  -942,  -942,  -942,  -942,  2962,
    1065,  1065,  1065,  1065,  1065,  1065,  1065,  1065,  1065,  1065,
     858,  -942,  -942,    54,  1055,   354,  -942,  3858,  2532,  2930,
    -942,   277,  1017,   975,  -942,  -942,  2532,  2532,  3858,   721,
    2499,  -942,  -942,  1094,  -942,  -942,  -942,   867,   639,   696,
    -942,   868,  2796,   901,  3332,  -942,   869,   974,  -942,   999,
     979,  2499,   -30,  1082,  -942,  1097,   172,   976,  -942,  -942,
    -942,  -942,  -942,    56,  -942,  1109,  1110,   939,  1111,  1119,
    1121,  1123,  1126,  1128,  1116,   354,  -942,  2962,  -942,   899,
    -942,  -942,  3858,  1093,  2532,  2532,  -942,  3858,    61,  1095,
    -942,   639,  -942,  1018,  3156,  3156,  -942,   903,  1012,   906,
     -72,  -942,  -942,  -942,   314,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
      62,   354,  2930,   910,  3858,  -942,  -942,  3156,  1037,  -942,
    -942,   919,  -942,   654,  -942,  -942,  -942,  -942,   -22,  -942,
    -942,   912,  1039,  1099,  -942,  -942,  1127,  1132,  -942,  2930,
    1103,   931,  1153,  1155,  1118,   934,  -942,  -942,   945,  2930,
    -942,  1137,  1125,  1157,  -942,  -942
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -942,  -942,  -942,   962,  -310,  -942,  -610,  -159,  -127,   837,
     428,  -942,  -942,  -942,   434,  -942,     6,  1143,  -942,  -942,
    -942,  -942,    17,    51,  -942,   263,  -942,  -942,  -942,  -942,
    -942,   -26,    43,    26,    47,  -942,  -108,  -102,  -100,   -99,
     -91,   -90,   -85,  -942,  -942,  -942,  -942,   574,  -942,  -942,
      57,  -942,  1048,  -942,   184,   549,  -604,   393,  -942,  -942,
     388,  -295,  -942,  -942,  -942,  -935,  -256,  -942,  1049,  -942,
    -942,  -942,  -942,    52,  -434,  -942,  -942,  -941,  -942,    84,
       9,    66,    12,  -942,   157,   -82,   226,  -718,   983,   -16,
    -942,   728,  -268,  -942,  -942,  -328,   186,  -210,  -942,  -942,
    -942,  -942,  -942,   412,  -942,  -942,  -179,   500,  -582,    65,
    -229,    23,   754,  -942,  -140,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -156,  1064,  -942,  -942,  -942,   764,   -84,
    -549,  -942,  -446,  -942,  1011,  -942,   741,  -942,  -942,  -942,
     126,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  1180,
     948,  -942,   946,  -942,  -942,  -942,    59,  -942,  -942,   828,
     904,  -942,   -96,   537,  -942,  -942,  -942,  -942,  -367,  -942,
    -942,  -942,  -942,   575,   215,  -942,  -942,  -942,  -942,  -942,
     590,  -942,  -942,  -942,  -942,   206,    40,  -942,   -11,    -2,
    -942,  -942,  -942,   358,  -942,  -942,  -942,   820,  -781,  -942,
     633,  -942,   -79,   -78,  -942,   161,   165,   -76,  -942,   398,
    -942,   -75,   -74,   -70,   -65,  -942,  -942,  -942
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -537
static const yytype_int16 yytable[] =
{
     115,   370,   115,   115,   115,   141,   571,   657,   911,    53,
     141,   134,   134,    86,   115,   199,   515,    35,   478,   115,
     844,   447,   837,   680,   625,   963,   178,   363,   364,   365,
     117,   118,   119,   315,   174,   527,   132,   135,   235,   858,
     569,   682,   311,    38,   241,  -264,  1181,    39,  1134,  -313,
     960,    36,    51,   133,   133,   979,   720,    47,  1135,  1226,
    1093,   291,     1,   476,  1091,  1110,    54,    85,  1131,   440,
     862,   295,   781,   986,   269,   913,   635,   999,   304,   201,
     157,   306,   247,   980,   291,  1011,   430,   234,   308,  1039,
    1105,  1071,   961,   857,  1112,  1156,   897,  1188,   212,   431,
     294,   116,  1205,  1219,   868,   910,   130,   388,   521,   265,
    -264,  1182,     1,   389,  -313,   390,   391,   907,   142,   134,
     212,   272,  -324,   598,   392,   393,   156,   440,   134,   919,
     394,  -324,   974,   398,  1136,   125,   403,   404,  1143,   405,
     406,   407,   989,   987,   233,   408,  1183,   367,   566,   123,
     409,   160,   259,   243,   134,   567,   368,   599,   502,   570,
     256,   133,   782,  1009,   505,   277,   178,  1072,   507,   178,
     133,   309,   504,  1008,  1010,   477,   333,   334,   335,   267,
     336,   337,   338,   639,   339,   340,   843,   695,   695,   432,
     676,    27,  1137,  1056,   257,   258,   133,   134,   266,  1227,
     487,   134,   278,   141,   491,   248,   493,   202,  -313,    54,
     266,    53,   115,   312,   489,   660,  1200,   161,   626,    35,
    1199,   126,   329,   990,   397,   734,   331,   178,   832,   292,
     962,   885,   384,   489,   177,   683,   134,    27,  -264,   133,
     134,   557,  -313,   133,   158,    38,   985,  1138,   134,    39,
     626,   134,   292,    36,    51,   994,   995,   996,   386,    47,
     454,   436,   387,   134,   863,   439,   385,   396,    54,   914,
     134,  1000,   395,   372,  1120,   674,   452,   464,   133,  1012,
    1125,    54,   133,   626,  1106,   461,   279,     1,  1113,   914,
     133,   914,   388,   133,   280,   178,  1106,   914,   389,   178,
     390,   391,  1073,   178,   163,   459,   134,   134,   134,   392,
     393,   174,   459,   288,   134,   394,   446,   281,   398,   462,
     463,   403,   404,   179,   405,   406,   407,   282,   283,   198,
     408,   497,   498,   499,    54,   409,   685,   200,   136,   503,
     523,   708,   709,   348,    12,   289,   204,   710,   133,   133,
     133,  1046,  -536,   241,  -534,  1060,   133,    86,  1040,   206,
     207,   208,   127,   180,   675,   604,   673,   274,   275,   284,
     203,   115,   128,   204,   296,   115,    19,   300,  1074,   454,
     178,  1024,   678,   269,   424,   129,   753,   425,   174,   484,
    1060,   665,   701,  1208,  1209,   624,   705,    54,   485,   686,
     215,   687,  1104,   600,   666,    23,   181,   182,   667,   397,
     214,   529,   668,   532,  1061,  1062,    27,   384,   217,   623,
     426,   422,   423,   478,   218,   424,  1222,   688,   425,   558,
     558,   558,   219,   872,   183,   419,  1080,   184,   876,   669,
      31,    54,   134,   386,   134,   935,   134,   387,   220,  1061,
    1127,   385,   396,   942,   943,   944,    86,   395,   740,   741,
     742,   426,  1213,   971,  1142,   936,    54,   937,   938,   693,
     185,   134,   234,   134,   694,   427,    54,  1018,   115,   137,
     120,   236,  1025,   237,   133,   121,   664,   186,   672,   138,
     187,   209,   947,   838,   305,   122,   684,   367,   690,  -274,
    -274,  -274,   139,   488,   188,   189,   368,   492,   958,   959,
     659,   177,   228,   133,   244,   133,   855,   249,   178,   178,
     559,   561,   562,  -401,  1214,   217,  1186,   190,   877,   878,
    1215,   178,  1216,    86,   191,   825,   826,   827,   828,   829,
     192,   776,   254,  1217,   928,   929,   930,   931,   932,   933,
     934,   264,   261,   193,   178,   268,   928,   929,   930,   931,
     932,   933,   934,   263,   773,  1081,  1082,  1083,   229,  1084,
     297,  1085,   770,   758,   298,   759,   760,   230,   231,  1086,
    1087,  1088,   753,   301,  1089,   761,   302,    85,   177,   560,
     560,   560,   753,   753,   307,   305,   695,   940,   310,  1049,
    1050,  1051,  1052,   314,   316,   830,   771,   772,   317,   839,
     643,   320,   757,  1066,   923,   221,   222,   223,   224,   225,
    -274,    54,   321,   323,   925,   926,   644,   178,   324,  -274,
     325,  -274,   326,   327,   178,   178,   178,   134,   178,   636,
     637,   638,   646,   647,   550,   551,   552,   553,   554,   178,
    1005,   643,   134,   665,   366,    54,   371,   134,   410,  -171,
     134,   134,   853,  -172,   414,   134,   666,   644,   226,   134,
     667,   415,   134,   134,   668,   420,   753,   869,   645,   133,
     416,   890,   454,   646,   647,  1004,  1118,   421,   134,   434,
     115,   435,   134,   438,   133,   437,   440,   882,   883,   664,
     450,   669,   133,   873,  1059,   927,   442,   133,   978,   443,
     453,   880,   466,   889,   133,   133,  1122,   467,   928,   929,
     930,   931,   932,   933,   934,   469,   728,   730,   446,  1030,
     133,   470,   471,   446,   133,   490,   500,   473,   474,   737,
     475,   506,   928,   929,   930,   931,   932,   933,   934,   519,
     520,   533,  1171,   928,   929,   930,   931,   932,   933,   934,
     446,   556,   775,   144,   145,   294,   212,    86,   753,   753,
     753,   753,   753,   753,   753,   753,  -535,     1,     1,  -134,
    1101,   373,   146,   555,   602,   374,   375,   376,   606,   621,
     607,   608,   147,   609,     4,   377,     6,   148,   610,   628,
    1031,  1032,  1033,  1034,  1035,  1036,  1037,  1038,   757,   165,
     611,   627,   630,   612,   149,   613,   378,   614,   753,   166,
     167,   529,   615,   616,   150,  1146,  1147,  1148,  1149,  1150,
    1151,  1152,  1153,  1154,    12,   419,   454,   617,   665,   618,
     619,   620,   850,   851,   852,   631,   854,   632,   629,   379,
    1058,   666,   635,   151,  1203,   667,   633,   850,   634,   668,
     641,   642,   650,   380,   152,   651,    19,   653,   654,   658,
    1098,   753,    54,   662,   676,   677,   681,   134,   930,   931,
     932,   933,   934,   698,   699,   134,   669,   702,   153,   706,
     711,   712,   713,   724,   734,    23,   732,   731,   725,   755,
     753,   208,    54,  1109,   780,   783,   381,   807,   178,   382,
    1006,   808,   178,   809,   810,   811,   812,   822,   835,   133,
     841,   813,  1020,   168,   169,   814,   845,   133,   846,   847,
      31,   848,  1123,   928,   929,   930,   931,   932,   933,   934,
     815,   816,   817,   859,   860,   446,   818,   861,   819,   871,
    1174,   820,   821,   874,   886,   879,   900,   170,   888,   899,
     912,   915,   887,   753,   554,   950,   939,   945,   948,   964,
     966,   383,   454,   454,   454,   454,   171,   172,   173,    54,
     952,  1075,   955,   967,   968,   969,   454,   970,   972,   983,
     115,   981,   984,   992,   998,  1173,  1001,   993,   178,   178,
    1007,   134,  1003,  1225,  1016,  1029,  1041,   134,  1042,  1043,
    1044,  1045,  1048,  1054,  1067,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
      54,   353,  1047,  1096,  1053,  1068,  1057,  1076,  1077,   133,
     928,   929,   930,   931,   932,   933,   934,   413,  1102,   454,
    1078,  1079,  1099,  1107,  1094,   934,  1111,  1207,  1116,  1114,
    1115,  1121,  1117,  1126,  1119,   446,  1130,   178,  1132,  1140,
    1133,   332,   333,   334,   335,  1141,   336,   337,   338,  1144,
     339,   340,   341,  1155,  1164,  1157,  1165,   134,   342,  1169,
    1177,  1170,  1172,  1176,  1178,  1179,  1184,  1185,   134,  1187,
     343,   344,   508,  1189,  1190,  1192,   728,  1191,   345,   509,
    1021,    54,  1163,  1193,  1198,   454,  1194,    54,  1195,   134,
     483,  1196,   486,  1197,  1201,  1202,  1206,  1210,  1211,   133,
    1212,   494,  1223,   496,  1230,   626,   510,  1229,  1231,   501,
     133,  1232,  1235,  1224,   511,   178,  1233,   346,  1237,  1238,
    1239,  1243,  1245,   516,   330,  1236,  1244,  1241,  1240,   920,
     924,   133,   194,  1017,   831,  1220,   446,   242,   512,   524,
     525,   526,   528,   530,  1092,   849,   131,   347,   253,   957,
     954,  1168,   941,   369,  1100,   894,  1180,   446,   661,   246,
     134,   652,   319,   563,   159,   691,   850,   730,   679,   495,
     605,   572,   513,   884,   460,   601,   856,   603,   468,   842,
     622,   997,   823,   444,  1128,  1221,     0,   134,  1129,     0,
       0,   975,     0,     0,     0,     0,     0,   134,     0,     0,
      54,    54,   133,     0,     0,     0,     0,     0,     0,   348,
       0,     0,  1234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1242,     0,     0,     0,     0,     0,   514,   133,
       0,     0,     0,    54,     0,     0,     0,   656,     0,   133,
       0,     0,     0,     0,     0,   730,     0,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,   349,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   700,     0,     0,     0,   704,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   715,     0,
     717,   719,    27,     0,   723,     0,     0,     0,     0,     0,
       0,     0,     0,   730,     0,     0,     0,     0,     0,     0,
       0,   738,   739,     0,   743,   744,   745,   746,   747,   748,
     749,   750,     0,     0,     0,   762,   763,   764,   765,   766,
     767,   768,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,     0,     0,     0,
       0,    87,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,     0,     0,   824,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553,   554,     0,     0,     0,
       0,     0,     0,   840,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   332,   333,   334,   335,   692,   336,
     337,   338,   870,   339,   340,   341,     0,     0,     0,     0,
       0,   342,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,     0,   343,   344,   479,     0,     0,     0,     0,
       0,   345,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   895,     0,
       0,     0,   896,     0,     0,     0,     0,     0,     0,   288,
       0,   901,     0,   903,     0,   905,     0,     0,     0,   908,
     346,     0,     0,     0,     0,     0,     0,     0,     0,   917,
       0,   918,     0,     0,     0,     0,     0,   922,     0,     0,
       0,   289,     0,     0,     0,     0,     0,     0,     0,     0,
     347,     0,   413,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,     0,     0,     0,   563,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   348,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   973,
     453,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
     349,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,     0,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553,   554,     0,     0,  1013,
       0,  1014,     0,  1015,     0,     0,     0,     0,     0,  1019,
       0,     0,  1022,     0,     0,     0,  1028,   332,   333,   334,
     335,     0,   336,   337,   338,     0,   339,   340,   341,     0,
       0,     0,     0,     0,   342,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   343,   344,     0,     0,
       0,     0,     0,     0,   345,   411,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   965,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     332,   333,   334,   335,     0,   336,   337,   338,     0,   339,
     340,   341,     0,   346,     0,     0,     0,   342,     0,     0,
       0,  1097,     0,     0,     0,     0,     0,     0,     0,   343,
     344,   479,     0,     0,     0,     0,     0,   345,     0,     0,
       0,     0,     0,   347,  1108,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
       0,     0,     0,     0,     0,     0,   346,  1124,   832,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
       0,     0,     0,     0,     0,   348,   347,     0,     0,     0,
       0,     0,     0,     0,     0,  1162,     0,     0,     0,     0,
       0,     0,     0,  1167,  1022,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,   349,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   348,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   413,  1204,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   131,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,   349,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   332,   333,   334,   335,   217,   336,   337,   338,     0,
     339,   340,   341,     0,     0,     0,     0,   836,   342,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     343,   344,   165,     0,   663,     0,     0,     0,   345,     0,
       0,     0,   166,   167,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   332,   333,   334,   335,   655,   336,
     337,   338,     0,   339,   340,   341,     0,   346,     0,     0,
       0,   342,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   343,   344,     0,     0,     0,   165,     0,
       0,   345,     0,     0,     0,     0,     0,   347,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   332,   333,   334,
     335,     0,   336,   337,   338,     1,   339,   340,   341,     0,
     346,     0,     0,     0,   342,     0,   168,   169,     0,     0,
       0,     0,     0,     0,     0,     0,   343,   344,     0,     0,
       0,     0,     0,     0,   345,     0,     0,    27,     0,   348,
     347,     0,     0,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,     0,   171,
     172,     0,     0,   346,     0,     0,     0,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,   349,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   348,   347,     0,     0,     0,   714,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,     0,    27,     0,     0,     0,     0,     0,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
     349,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   348,     0,     0,     0,     0,
       0,     0,     0,     0,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,     0,
       0,     0,     0,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,   349,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   332,   333,
     334,   335,     0,   336,   337,   338,     0,   339,   340,   341,
       0,     0,     0,     0,     0,   342,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   343,   344,     0,
       0,   332,   333,   334,   335,   345,   336,   337,   338,     0,
     339,   340,   341,     0,     0,     0,     0,     0,   342,     0,
       0,     0,     0,     0,     0,     0,   131,     0,     0,     0,
     343,   344,     0,     0,     0,     0,     0,     0,   345,     0,
       0,     0,     0,     0,   346,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   131,   444,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   347,     0,     0,   346,   716,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   332,   333,   334,   335,   444,
     336,   337,   338,     0,   339,   340,   341,   347,     0,     0,
       0,   718,   342,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   343,   344,   891,     0,     0,     0,
       0,     0,   345,     0,     0,     0,   348,     0,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   554,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   348,
       0,   346,   806,     0,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,   349,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   131,
       0,   347,     0,     0,     0,     0,     0,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,   349,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,     0,     0,     0,
       0,     0,   131,   348,     0,     0,   663,     0,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   457,   165,     0,     0,     0,     0,     0,
       0,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,   349,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   332,   333,   334,   335,
       0,   336,   337,   338,     0,   339,   340,   341,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   751,   752,     0,     0,   332,
     333,   334,   335,   345,   336,   337,   338,     0,   339,   340,
     341,     0,     0,     0,     0,     0,     0,     0,   977,     0,
       0,     0,     0,     0,   131,     0,     0,     0,   751,   752,
       0,     0,     0,     0,     0,     0,   345,     0,     0,     0,
       0,     0,   346,     0,     0,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     165,     0,   347,     0,     0,   346,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   864,     0,     0,     0,     0,
       0,   671,     0,     0,     0,    87,     0,     0,     0,     0,
       0,   774,     0,     0,     0,   347,     0,     0,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   131,   348,     0,     0,     0,     0,     0,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   165,     0,   348,     0,     0,
       0,     0,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   349,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,   349,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,     0,     0,     0,     0,     0,     0,
       0,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,     1,     0,     0,     0,
       2,     0,     0,     0,   374,   375,   376,     0,     0,     0,
       0,     0,     0,     4,   377,     6,     0,     0,     0,     0,
       0,     0,     0,  1027,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   378,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   379,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   380,     0,     0,    19,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553,   554,     0,     0,     0,
       0,     0,     0,     0,    23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   381,     0,     0,   382,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,     0,   784,   785,   786,     0,     0,     0,     0,   787,
       0,     0,     0,     0,     0,     0,     0,   788,     0,     0,
     383,   789,   790,     0,   791,     0,     0,     0,     0,     0,
     792,     0,     0,     0,     1,     0,     0,     0,     2,     0,
     793,     0,     0,     0,     0,     0,     0,     3,     0,     0,
       0,     4,     5,     6,     0,     0,     0,   794,     0,     0,
       0,     0,     0,     7,     0,     0,     8,     0,     0,   795,
       0,   796,     0,   797,     0,     0,     0,     9,     0,     0,
       0,    10,     0,     0,  1055,   798,     0,     0,    11,     0,
       0,    12,    13,    14,     0,     0,    15,     0,     0,     0,
       0,     0,    16,   799,    17,     0,     0,     0,     0,     0,
       0,     0,     0,    18,     0,     0,   800,   801,   802,     0,
       0,     0,     0,    19,     0,     0,   803,   804,     0,     0,
       0,     0,     0,    20,   784,   785,   786,     0,     0,     0,
       0,   787,     0,     0,     0,     0,     0,    21,  1175,   788,
       0,    22,    23,   789,   790,    24,   791,    25,    26,     0,
       0,     0,   792,    27,   676,     0,    28,    29,     0,     0,
       0,    30,   793,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     0,   794,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   795,     0,   796,     0,   797,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   798,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   799,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   800,   801,
     802,     0,     0,     0,     0,     0,     0,     0,   803,   804,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   721,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   722,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   902,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   904,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   906,
     777,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,     0,     0,   733,     0,     0,   778,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   554,     0,
       0,   909,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,     0,     0,  1026,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553,   554
};

static const yytype_int16 yycheck[] =
{
       2,   211,     4,     5,     6,    16,   373,   441,   726,     0,
      21,    13,    14,     1,    16,    31,   326,     0,   286,    21,
     630,   250,   604,   469,    41,   806,    28,   206,   207,   208,
       4,     5,     6,   189,    28,   345,    13,    14,   122,   643,
     368,    41,    28,     0,   128,    41,    76,     0,    10,    41,
      54,     0,     0,    13,    14,   836,    41,     0,    20,    81,
    1001,    24,    40,   123,   999,   113,     0,     1,   113,   199,
      41,   167,   145,   102,   158,    41,    85,    41,   174,   106,
      21,   177,     3,   130,    24,    41,   125,     4,    30,    41,
      41,    20,    96,   642,    41,    41,   706,    41,   112,   138,
      40,     3,    41,    41,   653,   235,   113,   215,    40,   146,
     106,   141,    40,   215,   106,   215,   215,   721,   232,   121,
     112,   146,   136,   200,   215,   215,   184,   199,   130,   104,
     215,   145,   104,   215,    96,     9,   215,   215,  1079,   215,
     215,   215,    78,   172,   121,   215,   176,   136,     5,   202,
     215,    25,   143,   130,   156,    12,   145,   234,   314,   369,
     143,   121,   235,   235,   320,     3,   168,    96,   324,   171,
     130,   113,    89,   891,   892,   235,     4,     5,     6,   156,
       8,     9,    10,   192,    12,    13,    14,   235,   235,   228,
     235,   169,   154,   974,   143,   143,   156,   199,   235,   221,
     296,   203,    40,   214,   300,   126,   302,   234,   200,   143,
     235,   202,   214,   199,   298,   444,  1157,   117,   235,   202,
    1155,    43,   199,   159,   215,   200,   203,   229,   200,   192,
     234,   677,   215,   317,    28,   235,   238,   169,   234,   199,
     242,   169,   234,   203,   194,   202,   850,   209,   250,   202,
     235,   253,   192,   202,   202,   859,   860,   861,   215,   202,
     254,   238,   215,   265,   235,   242,   215,   215,   202,   235,
     272,   235,   215,   214,  1055,   146,   253,   268,   238,   235,
    1061,   215,   242,   235,   235,   268,   124,    40,   235,   235,
     250,   235,   400,   253,   132,   297,   235,   235,   400,   301,
     400,   400,    20,   305,   122,   265,   308,   309,   310,   400,
     400,   305,   272,    68,   316,   400,   250,   155,   400,   268,
     268,   400,   400,     3,   400,   400,   400,   165,   166,   191,
     400,   308,   309,   310,   268,   400,   115,     0,    43,   316,
     331,   497,   498,   171,    97,   100,   200,   503,   308,   309,
     310,   961,    40,   437,    42,    45,   316,   345,   940,    15,
      16,    17,   184,    43,   235,   381,   450,   204,   205,   207,
     130,   373,   194,   200,   168,   377,   129,   171,    96,   373,
     382,   235,   466,   467,    66,   207,   545,    69,   382,     5,
      45,   114,   488,  1174,  1175,   411,   492,   331,    14,   178,
      72,   180,  1012,   377,   127,   158,    86,    87,   131,   400,
     153,   345,   135,   347,   104,   105,   169,   400,    41,   410,
     102,    90,    91,   691,    41,    66,  1207,   206,    69,   363,
     364,   365,    56,   662,   114,   229,    82,   117,   667,   162,
     193,   375,   444,   400,   446,   755,   448,   400,    40,   104,
     105,   400,   400,   781,   782,   783,   444,   400,    28,    29,
      30,   102,  1180,   830,  1074,     8,   400,    10,    11,   480,
     150,   473,     4,   475,   113,   157,   410,   911,   480,   184,
     179,     3,   916,   126,   444,   184,   446,   167,   448,   194,
     170,   147,   787,   234,   235,   194,   473,   136,   475,    15,
      16,    17,   207,   297,   184,   185,   145,   301,   803,   804,
     444,   305,   116,   473,     4,   475,   157,   126,   520,   521,
     363,   364,   365,   203,   210,    41,  1136,   207,   668,   669,
     216,   533,   218,   521,   214,    60,    61,    62,    63,    64,
     220,   557,   195,   229,    32,    33,    34,    35,    36,    37,
      38,   148,   160,   233,   556,   113,    32,    33,    34,    35,
      36,    37,    38,   194,   555,   211,   212,   213,   172,   215,
      42,   217,   555,     8,   112,    10,    11,   181,   182,   225,
     226,   227,   741,    42,   230,    20,    14,   521,   382,   363,
     364,   365,   751,   752,     3,   235,   235,   776,   184,   966,
     967,   968,   969,   224,   146,   130,   555,   555,   112,   625,
      14,   224,   546,   980,   741,    60,    61,    62,    63,    64,
     136,   555,   136,   233,   751,   752,    30,   629,   231,   145,
     203,   147,    40,   201,   636,   637,   638,   639,   640,   424,
     425,   426,    46,    47,    34,    35,    36,    37,    38,   651,
     879,    14,   654,   114,    77,   589,   193,   659,   112,    65,
     662,   663,   639,    65,     5,   667,   127,    30,   113,   671,
     131,     5,   674,   675,   135,   143,   835,   654,    41,   639,
      65,   692,   676,    46,    47,   146,  1053,   183,   690,    40,
     692,    20,   694,   125,   654,   235,   199,   674,   675,   659,
     235,   162,   662,   663,   192,    19,   109,   667,   835,   109,
      14,   671,   192,   690,   674,   675,   192,   235,    32,    33,
      34,    35,    36,    37,    38,   113,   520,   521,   662,    19,
     690,     5,    40,   667,   694,    24,     4,    40,    40,   533,
      40,     5,    32,    33,    34,    35,    36,    37,    38,    84,
     172,    42,  1119,    32,    33,    34,    35,    36,    37,    38,
     694,    42,   556,    68,    69,    40,   112,   755,   927,   928,
     929,   930,   931,   932,   933,   934,    42,    40,    40,    40,
    1009,    44,    87,    40,    14,    48,    49,    50,   234,   105,
     234,   234,    97,   234,    57,    58,    59,   102,   234,     5,
     927,   928,   929,   930,   931,   932,   933,   934,   742,     3,
     234,   192,    24,   234,   119,   234,    79,   234,   977,    13,
      14,   755,   234,   234,   129,  1081,  1082,  1083,  1084,  1085,
    1086,  1087,  1088,  1089,    97,   629,   830,   234,   114,   234,
     234,   234,   636,   637,   638,    24,   640,    24,   235,   112,
     977,   127,    85,   158,  1164,   131,   143,   651,   143,   135,
     235,    77,   109,   126,   169,    40,   129,    77,   146,     3,
     146,  1030,   806,   235,   235,   192,     3,   879,    34,    35,
      36,    37,    38,    41,    41,   887,   162,     4,   193,    40,
      40,   235,    41,    41,   200,   158,   235,   196,   175,    40,
    1059,    17,   836,  1030,   235,   136,   169,   234,   910,   172,
     887,   234,   914,   234,   234,   234,   234,   105,    30,   879,
       5,   234,   913,   117,   118,   234,     4,   887,     4,    24,
     193,    24,  1059,    32,    33,    34,    35,    36,    37,    38,
     234,   234,   234,    14,    14,   879,   234,    14,   234,    41,
      49,   234,   234,   149,    41,   131,     5,   151,    41,    41,
      24,    40,   235,  1122,    38,   152,    41,    40,    40,    49,
     130,   234,   966,   967,   968,   969,   170,   171,   172,   913,
      40,   992,    40,   130,   130,   130,   980,     5,    65,     4,
     992,    82,     4,   192,   133,  1122,    40,    54,  1000,  1001,
      41,  1003,    70,  1213,    41,   105,     5,  1009,     5,     5,
       5,   234,   234,     5,     4,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     974,   204,   105,  1003,   130,   168,   105,    54,    54,  1009,
      32,    33,    34,    35,    36,    37,    38,   220,   120,  1053,
      54,    40,   235,    40,   208,    38,    41,    49,   234,    41,
      41,    79,    48,   126,   130,  1009,   105,  1079,    24,    10,
     223,     3,     4,     5,     6,    10,     8,     9,    10,    24,
      12,    13,    14,   235,    77,    40,   121,  1099,    20,     5,
     126,   234,   234,   234,   105,   126,    24,    10,  1110,   133,
      32,    33,    34,     4,     4,     4,   910,   178,    40,    41,
     914,  1055,  1099,     4,     8,  1119,     5,  1061,     5,  1131,
     293,     5,   295,     5,   235,    42,    41,   234,   126,  1099,
     234,   304,   105,   306,   105,   235,    68,   235,    49,   312,
    1110,    24,    49,   234,    76,  1157,    24,    79,     5,     4,
      42,    24,     5,   326,   202,   234,    41,   222,   234,   735,
     742,  1131,    29,   910,   600,  1201,  1110,   129,   100,   342,
     343,   344,   345,   346,  1000,   636,     3,   109,   139,   801,
     797,  1107,   780,   210,  1008,   695,  1131,  1131,   444,   135,
    1202,   437,   191,   366,    24,   477,  1000,  1001,   467,   305,
     382,   374,   134,   676,   266,   378,   641,   380,   272,   629,
     400,   863,   589,    40,  1063,  1202,    -1,  1229,  1063,    -1,
      -1,   833,    -1,    -1,    -1,    -1,    -1,  1239,    -1,    -1,
    1174,  1175,  1202,    -1,    -1,    -1,    -1,    -1,    -1,   171,
      -1,    -1,  1229,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1239,    -1,    -1,    -1,    -1,    -1,   190,  1229,
      -1,    -1,    -1,  1207,    -1,    -1,    -1,   440,    -1,  1239,
      -1,    -1,    -1,    -1,    -1,  1079,    -1,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,   487,    -1,    -1,    -1,   491,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,   511,    -1,
     513,   514,   169,    -1,   517,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1157,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   534,   535,    -1,   537,   538,   539,   540,   541,   542,
     543,   544,    -1,    -1,    -1,   548,   549,   550,   551,   552,
     553,   554,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,     3,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    -1,    -1,   598,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,   626,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,     3,     4,     5,     6,    70,     8,
       9,    10,   655,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    20,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    -1,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   701,    -1,
      -1,    -1,   705,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,   714,    -1,   716,    -1,   718,    -1,    -1,    -1,   722,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   732,
      -1,   734,    -1,    -1,    -1,    -1,    -1,   740,    -1,    -1,
      -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     109,    -1,   755,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    -1,   780,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   171,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   832,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    -1,    -1,   902,
      -1,   904,    -1,   906,    -1,    -1,    -1,    -1,    -1,   912,
      -1,    -1,   915,    -1,    -1,    -1,   919,     3,     4,     5,
       6,    -1,     8,     9,    10,    -1,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    14,    -1,    79,    -1,    -1,    -1,    20,    -1,    -1,
      -1,  1004,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,   109,  1027,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
      -1,    -1,    -1,    -1,    -1,    -1,    79,  1060,   200,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,    -1,    -1,    -1,    -1,   171,   109,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1098,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1106,  1107,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   171,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1164,  1165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,     3,     4,     5,     6,    41,     8,     9,    10,    -1,
      12,    13,    14,    -1,    -1,    -1,    -1,   186,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,     3,    -1,    70,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    13,    14,    -1,    79,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,     3,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    10,    40,    12,    13,    14,    -1,
      79,    -1,    -1,    -1,    20,    -1,   117,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,   169,    -1,   171,
     109,    -1,    -1,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,    -1,   170,
     171,    -1,    -1,    79,    -1,    -1,    -1,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   171,   109,    -1,    -1,    -1,   113,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,    -1,   169,    -1,    -1,    -1,    -1,    -1,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   171,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,    -1,
      -1,    -1,    -1,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,     3,     4,     5,     6,    40,     8,     9,    10,    -1,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    -1,    -1,    79,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    40,
       8,     9,    10,    -1,    12,    13,    14,   109,    -1,    -1,
      -1,   113,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,   103,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,   171,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   171,
      -1,    79,    52,    -1,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,     3,
      -1,   109,    -1,    -1,    -1,    -1,    -1,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,    -1,     3,   171,    -1,    -1,    70,    -1,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,    34,     3,    -1,    -1,    -1,    -1,    -1,
      -1,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,     3,
       4,     5,     6,    40,     8,     9,    10,    -1,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
       3,    -1,   109,    -1,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   154,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,   109,    -1,    -1,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,     3,   171,    -1,    -1,    -1,    -1,    -1,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,     3,    -1,   171,    -1,    -1,
      -1,    -1,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,    40,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    48,    49,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   186,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   126,    -1,    -1,   129,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   158,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   169,    -1,    -1,   172,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    -1,    73,    74,    75,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,
     234,    92,    93,    -1,    95,    -1,    -1,    -1,    -1,    -1,
     101,    -1,    -1,    -1,    40,    -1,    -1,    -1,    44,    -1,
     111,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    57,    58,    59,    -1,    -1,    -1,   128,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    72,    -1,    -1,   140,
      -1,   142,    -1,   144,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    87,    -1,    -1,   186,   156,    -1,    -1,    94,    -1,
      -1,    97,    98,    99,    -1,    -1,   102,    -1,    -1,    -1,
      -1,    -1,   108,   174,   110,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   119,    -1,    -1,   187,   188,   189,    -1,
      -1,    -1,    -1,   129,    -1,    -1,   197,   198,    -1,    -1,
      -1,    -1,    -1,   139,    73,    74,    75,    -1,    -1,    -1,
      -1,    80,    -1,    -1,    -1,    -1,    -1,   153,   186,    88,
      -1,   157,   158,    92,    93,   161,    95,   163,   164,    -1,
      -1,    -1,   101,   169,   235,    -1,   172,   173,    -1,    -1,
      -1,   177,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,    -1,   128,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,    -1,   142,    -1,   144,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   156,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   174,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   187,   188,
     189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,   198,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
      71,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    -1,    -1,    41,    -1,    -1,    98,    18,    19,
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
       0,    40,    44,    53,    57,    58,    59,    69,    72,    83,
      87,    94,    97,    98,    99,   102,   108,   110,   119,   129,
     139,   153,   157,   158,   161,   163,   164,   169,   172,   173,
     177,   193,   237,   238,   239,   258,   259,   262,   268,   270,
     271,   279,   280,   281,   282,   284,   285,   286,   287,   303,
     306,   309,   311,   316,   317,   318,   319,   320,   322,   351,
     354,   355,   362,   367,   369,   371,   374,   378,   379,   380,
     381,   384,   389,   391,   394,   402,   405,   406,   407,   413,
     426,   427,   451,   452,   453,   317,   318,     3,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   269,   424,   425,     3,   269,   269,   269,
     179,   184,   194,   202,   376,   376,    43,   184,   194,   207,
     113,     3,   347,   422,   425,   347,    43,   184,   194,   207,
     392,   424,   232,   353,    68,    69,    87,    97,   102,   119,
     129,   158,   169,   193,   385,   386,   184,   392,   194,   385,
     376,   117,   382,   122,   325,     3,    13,    14,   117,   118,
     151,   170,   171,   172,   252,   395,   396,   421,   425,     3,
      43,    86,    87,   114,   117,   150,   167,   170,   184,   185,
     207,   214,   220,   233,   253,   358,   361,   423,   191,   325,
       0,   106,   234,   130,   200,   310,    15,    16,    17,   147,
     336,   337,   112,   333,   153,    72,   430,    41,    41,    56,
      40,    60,    61,    62,    63,    64,   113,   283,   116,   172,
     181,   182,   414,   347,     4,   365,     3,   126,   288,   363,
     364,   365,   288,   347,     4,   360,   360,     3,   126,   126,
     304,   365,   368,   304,   195,   403,   258,   259,   309,   316,
     352,   160,   387,   194,   148,   146,   235,   347,   113,   365,
     372,   373,   146,   390,   204,   205,   383,     3,    40,   124,
     132,   155,   165,   166,   207,   326,   327,   328,    68,   100,
     342,    24,   192,   398,    40,   398,   421,    42,   112,   370,
     421,    42,    14,   397,   398,   235,   398,     3,    30,   113,
     184,    28,   199,   359,   224,   359,   146,   112,   357,   370,
     224,   136,   356,   233,   231,   203,    40,   201,   377,   347,
     239,   347,     3,     4,     5,     6,     8,     9,    10,    12,
      13,    14,    20,    32,    33,    40,    79,   109,   171,   219,
     241,   242,   243,   245,   247,   252,   253,   254,   255,   317,
     421,   422,   425,   342,   342,   342,    77,   136,   145,   324,
     333,   193,   392,    44,    48,    49,    50,    58,    79,   112,
     126,   169,   172,   234,   258,   259,   268,   270,   272,   273,
     274,   275,   276,   277,   278,   286,   309,   316,   321,   431,
     432,   433,   437,   438,   439,   443,   447,   448,   449,   450,
     112,    41,   240,   245,     5,     5,    65,   415,   416,   421,
     143,   183,    90,    91,    66,    69,   102,   157,   408,   409,
     125,   138,   228,   375,    40,    20,   347,   235,   125,   347,
     199,   323,   109,   109,    40,   305,   317,   346,   347,   348,
     235,   307,   347,    14,   252,   399,   404,    34,   388,   422,
     386,   258,   259,   309,   316,   393,   192,   235,   388,   113,
       5,    40,   329,    40,    40,    40,   123,   235,   328,    34,
     245,   343,   344,   245,     5,    14,   245,   398,   421,   365,
      24,   398,   421,   398,   245,   396,   245,   347,   347,   347,
       4,   245,   359,   347,    89,   359,     5,   359,    34,    41,
      68,    76,   100,   134,   190,   240,   245,   257,   334,    84,
     172,    40,   312,   316,   245,   245,   245,   240,   245,   317,
     245,   248,   317,    42,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    40,    42,   169,   317,   320,
     322,   320,   320,   245,   338,   339,     5,    12,   331,   331,
     333,   404,   245,   258,   259,   268,   270,   272,   273,   274,
     275,   276,   277,   278,   286,   309,   316,   321,   434,   435,
     436,   438,   439,   443,   447,   448,   449,   450,   200,   234,
     269,   245,    14,   245,   325,   395,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   105,   433,   316,   325,    41,   235,   192,     5,   235,
      24,    24,    24,   143,   143,    85,   410,   410,   410,   192,
     410,   235,    77,    14,    30,    41,    46,    47,   428,   429,
     109,    40,   364,    77,   146,     7,   245,   310,     3,   317,
     346,   348,   235,    70,   422,   114,   127,   131,   135,   162,
     349,    70,   422,   365,   146,   235,   235,   192,   365,   372,
     368,     3,    41,   235,   347,   115,   178,   180,   206,   330,
     347,   327,    70,   424,   113,   235,   324,   332,    41,    41,
     245,   398,     4,   366,   245,   398,    40,   400,   359,   359,
     359,    40,   235,    41,   113,   245,   113,   245,   113,   245,
      41,    70,   113,   245,    41,   175,   260,   261,   421,   313,
     421,   196,   235,    41,   200,   249,   250,   421,   245,   245,
      28,    29,    30,   245,   245,   245,   245,   245,   245,   245,
     245,    32,    33,   243,   244,    40,   246,   317,     8,    10,
      11,    20,   245,   245,   245,   245,   245,   245,   245,   256,
     258,   259,   309,   316,    34,   421,   325,    71,    98,   340,
     235,   145,   235,   136,    73,    74,    75,    80,    88,    92,
      93,    95,   101,   111,   128,   140,   142,   144,   156,   174,
     187,   188,   189,   197,   198,   292,    52,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   105,   436,   245,    60,    61,    62,    63,    64,
     130,   283,   200,   444,   445,    30,   186,   344,   234,   325,
     245,     5,   416,    14,   242,     4,     4,    24,    24,   291,
     421,   421,   421,   347,   421,   157,   409,   366,   292,    14,
      14,    14,    41,   235,   154,   289,   290,   291,   366,   347,
     245,    41,   346,   422,   149,   350,   346,   350,   350,   131,
     422,   308,   347,   347,   399,   368,    41,   235,    41,   347,
     424,   103,   345,   346,   343,   245,   245,   242,   401,    41,
       5,   245,   113,   245,   113,   245,   113,   292,   245,    41,
     235,   323,    24,    41,   235,    40,   314,   245,   245,   104,
     250,   251,   245,   244,   246,   244,   244,    19,    32,    33,
      34,    35,    36,    37,    38,   240,     8,    10,    11,    41,
     342,   339,   331,   331,   331,    40,   297,   297,    40,   293,
     152,   295,    40,   294,   293,    40,   296,   296,   297,   297,
      54,    96,   234,   434,    49,   234,   130,   130,   130,   130,
       5,   404,    65,   245,   104,   445,   446,    55,   244,   434,
     130,    82,   417,     4,     4,   292,   102,   172,   412,    78,
     159,   411,   192,    54,   292,   292,   292,   429,   133,    41,
     235,    40,   263,    70,   146,   346,   347,    41,   323,   235,
     323,    41,   235,   245,   245,   245,    41,   261,   310,   245,
     316,   421,   245,   315,   235,   310,    41,   186,   245,   105,
      19,   244,   244,   244,   244,   244,   244,   244,   244,    41,
     344,     5,     5,     5,     5,   234,   242,   105,   234,   404,
     404,   404,   404,   130,     5,   186,   434,   105,   244,   192,
      45,   104,   105,   440,   441,   442,   404,     4,   168,   418,
     298,    20,    96,    20,    96,   424,    54,    54,    54,    40,
      82,   211,   212,   213,   215,   217,   225,   226,   227,   230,
     300,   301,   290,   313,   208,   264,   422,   245,   146,   235,
     332,   346,   120,   335,   242,    41,   235,    40,   245,   244,
     113,    41,    41,   235,    41,    41,   234,    48,   404,   130,
     434,    79,   192,   244,   245,   434,   126,   105,   441,   442,
     105,   113,    24,   223,    10,    20,    96,   154,   209,   299,
      10,    10,   242,   313,    24,   302,   302,   302,   302,   302,
     302,   302,   302,   302,   302,   235,    41,    40,   265,   266,
     267,   301,   245,   347,    77,   121,   341,   245,   315,     5,
     234,   404,   234,   244,    49,   186,   234,   126,   105,   126,
     345,    76,   141,   176,    24,    10,   242,   133,    41,     4,
       4,   178,     4,     4,     5,     5,     5,     5,     8,   301,
     313,   235,    42,   240,   245,    41,    41,    49,   434,   434,
     234,   126,   234,   323,   210,   216,   218,   229,   419,    41,
     267,   347,   434,   105,   234,   333,    81,   221,   420,   235,
     105,    49,    24,    24,   347,    49,   234,     5,     4,    42,
     234,   222,   347,    24,    41,     5
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
      case 237: /* "sql_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 238: /* "stmt_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 239: /* "stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 240: /* "expr_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 241: /* "column_ref" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 242: /* "expr_const" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 243: /* "simple_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 244: /* "arith_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 245: /* "expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 246: /* "in_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 247: /* "case_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 248: /* "case_arg" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 249: /* "when_clause_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 250: /* "when_clause" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 251: /* "case_default" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 252: /* "array_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 253: /* "func_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 254: /* "when_func" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 255: /* "when_func_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 256: /* "when_func_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 257: /* "distinct_or_all" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 258: /* "delete_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 259: /* "update_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 260: /* "update_asgn_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 261: /* "update_asgn_factor" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 262: /* "create_index_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 263: /* "opt_index_columns" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 264: /* "opt_storing" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 265: /* "opt_storing_columns" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 266: /* "opt_index_option_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 267: /* "index_option" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 268: /* "cursor_declare_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 269: /* "cursor_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 270: /* "cursor_open_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 271: /* "cursor_fetch_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 272: /* "cursor_fetch_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 273: /* "cursor_fetch_next_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 274: /* "cursor_fetch_first_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 275: /* "cursor_fetch_prior_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 276: /* "cursor_fetch_last_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 277: /* "cursor_fetch_absolute_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 278: /* "cursor_fetch_relative_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 279: /* "fetch_prior_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 280: /* "fetch_first_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 281: /* "fetch_last_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 282: /* "fetch_relative_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 283: /* "next_or_prior" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 284: /* "fetch_absolute_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 285: /* "fetch_fromto_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 286: /* "cursor_close_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 287: /* "create_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 288: /* "opt_if_not_exists" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 289: /* "table_element_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 290: /* "table_element" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 291: /* "column_definition" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 292: /* "data_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 293: /* "opt_decimal" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 294: /* "opt_float" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 295: /* "opt_precision" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 296: /* "opt_time_precision" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 297: /* "opt_char_length" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 298: /* "opt_column_attribute_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 299: /* "column_attribute" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 300: /* "opt_table_option_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 301: /* "table_option" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 302: /* "opt_equal_mark" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 303: /* "drop_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 304: /* "opt_if_exists" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 305: /* "table_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 306: /* "drop_index_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 307: /* "index_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 308: /* "table_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 309: /* "insert_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 310: /* "opt_when" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 311: /* "replace_or_insert" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 312: /* "opt_insert_columns" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 313: /* "column_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 314: /* "insert_vals_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 315: /* "insert_vals" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 316: /* "select_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 317: /* "select_with_parens" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 318: /* "select_no_parens" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 319: /* "no_table_select" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 320: /* "select_clause" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 321: /* "select_into_clause" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 322: /* "simple_select" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 323: /* "opt_where" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 324: /* "select_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 325: /* "opt_hint" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 326: /* "opt_hint_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 327: /* "hint_options" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 328: /* "hint_option" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 329: /* "opt_comma_list" */

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
      case 397: /* "var_and_array_val" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 398: /* "to_or_eq" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 399: /* "argument" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 400: /* "array_vals_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 401: /* "array_val_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 402: /* "execute_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 403: /* "opt_using_args" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 404: /* "argument_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 405: /* "deallocate_prepare_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 406: /* "deallocate_or_drop" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 407: /* "alter_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 408: /* "alter_column_actions" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 409: /* "alter_column_action" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 410: /* "opt_column" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 412: /* "alter_column_behavior" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 413: /* "alter_system_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 414: /* "opt_force" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 415: /* "alter_system_actions" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 416: /* "alter_system_action" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 417: /* "opt_comment" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 419: /* "server_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 420: /* "opt_cluster_or_address" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 421: /* "column_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 422: /* "relation_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 423: /* "function_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 424: /* "column_label" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 426: /* "create_procedure_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 427: /* "proc_decl" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 428: /* "proc_parameter_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 429: /* "proc_parameter" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 430: /* "proc_block" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 431: /* "proc_sect" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 432: /* "proc_stmts" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 433: /* "proc_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 434: /* "control_sect" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 435: /* "control_stmts" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 436: /* "control_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 437: /* "stmt_declare" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 438: /* "stmt_assign" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 439: /* "stmt_if" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 440: /* "stmt_elsifs" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 441: /* "stmt_elsif" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 442: /* "stmt_else" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 443: /* "stmt_case" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 444: /* "case_when_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 445: /* "case_when" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 446: /* "case_else" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 447: /* "stmt_loop" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 448: /* "stmt_while" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 449: /* "stmt_null" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 450: /* "stmt_exit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 451: /* "exec_procedure_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 452: /* "drop_procedure_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 453: /* "show_procedure_stmt" */

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
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_NO_GROUP);
    ;}
    break;

  case 303:

    {
      (yyval.node) = (yyvsp[(1) - (2)].node);
    ;}
    break;

  case 304:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 305:

    {
    (yyval.ival) = 3;
  ;}
    break;

  case 306:

    {
    (yyval.ival) = 4;
  ;}
    break;

  case 307:

    {
    (yyval.ival) = 1;
  ;}
    break;

  case 308:

    {
    (yyval.ival) = 2;
  ;}
    break;

  case 309:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 310:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 311:

    { (yyval.node) = NULL; ;}
    break;

  case 312:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 313:

    { (yyval.node) = NULL; ;}
    break;

  case 314:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 315:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 0;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 316:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 0;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 317:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 1;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 318:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 2;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 319:

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

  case 320:

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

  case 321:

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

  case 322:

    { (yyval.node) = NULL; ;}
    break;

  case 323:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_EXPR_LIST, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 324:

    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 325:

    { (yyval.node) = NULL; ;}
    break;

  case 326:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_SORT_LIST, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 327:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 328:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 329:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SORT_KEY, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 330:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_ASC); ;}
    break;

  case 331:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_ASC); ;}
    break;

  case 332:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_DESC); ;}
    break;

  case 333:

    { (yyval.node) = 0; ;}
    break;

  case 334:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 335:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 336:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_ALL);
    ;}
    break;

  case 337:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_DISTINCT);
    ;}
    break;

  case 338:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, (yyvsp[(1) - (1)].node));
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (1)]).first_column, (yylsp[(1) - (1)]).last_column);
    ;}
    break;

  case 339:

    {
      ParseNode* alias_node = NULL;
      malloc_non_terminal_node(alias_node, result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, alias_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (2)]).first_column, (yylsp[(1) - (2)]).last_column);
      dup_expr_string(alias_node->str_value_, result, (yylsp[(2) - (2)]).first_column, (yylsp[(2) - (2)]).last_column);
    ;}
    break;

  case 340:

    {
      ParseNode* alias_node = NULL;
      malloc_non_terminal_node(alias_node, result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, alias_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (3)]).first_column, (yylsp[(1) - (3)]).last_column);
      dup_expr_string(alias_node->str_value_, result, (yylsp[(3) - (3)]).first_column, (yylsp[(3) - (3)]).last_column);
    ;}
    break;

  case 341:

    {
      ParseNode* star_node = NULL;
      malloc_terminal_node(star_node, result->malloc_pool_, T_STAR);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, star_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (1)]).first_column, (yylsp[(1) - (1)]).last_column);
    ;}
    break;

  case 342:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 343:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 344:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 345:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 346:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 347:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 348:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 349:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 350:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 351:

    {
    	(yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 352:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(2) - (5)].node), (yyvsp[(5) - (5)].node));
    	yyerror(&(yylsp[(1) - (5)]), result, "qualied joined table can not be aliased!");
      YYABORT;
    ;}
    break;

  case 353:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 354:

    {
    	(yyval.node) = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 355:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOINED_TABLE, 4, (yyvsp[(2) - (6)].node), (yyvsp[(1) - (6)].node), (yyvsp[(4) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 356:

    {
      ParseNode* node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_JOIN_INNER);
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOINED_TABLE, 4, node, (yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 357:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_FULL);
    ;}
    break;

  case 358:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_LEFT);
    ;}
    break;

  case 359:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_RIGHT);
    ;}
    break;

  case 360:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_INNER);
    ;}
    break;

  case 361:

    { (yyval.node) = NULL; ;}
    break;

  case 362:

    { (yyval.node) = NULL; ;}
    break;

  case 363:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPLAIN, 1, (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = ((yyvsp[(2) - (3)].node) ? 1 : 0); /* positive: verbose */
    ;}
    break;

  case 364:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
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

    { (yyval.node) = (ParseNode*)1; ;}
    break;

  case 369:

    { (yyval.node) = NULL; ;}
    break;

  case 370:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_TABLES, 1, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 371:

    {  malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_INDEX, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 372:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 373:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 374:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_TABLE_STATUS, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 375:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_SERVER_STATUS, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 376:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_VARIABLES, 1, (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = (yyvsp[(2) - (4)].ival);
    ;}
    break;

  case 377:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_SCHEMA); ;}
    break;

  case 378:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_CREATE_TABLE, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 379:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 380:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 381:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_WARNINGS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 382:

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

  case 383:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_GRANTS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 384:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_PARAMETERS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 385:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_PROCESSLIST);
      (yyval.node)->value_ = (yyvsp[(2) - (3)].ival);
    ;}
    break;

  case 386:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LOCK_TABLE, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 387:

    {
      if ((yyvsp[(2) - (4)].node)->value_ < 0 || (yyvsp[(4) - (4)].node)->value_ < 0)
      {
        yyerror(&(yylsp[(1) - (4)]), result, "OFFSET/COUNT must not be less than 0!");
        YYABORT;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_LIMIT, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 388:

    {
      if ((yyvsp[(2) - (2)].node)->value_ < 0)
      {
        yyerror(&(yylsp[(1) - (2)]), result, "COUNT must not be less than 0!");
        YYABORT;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_LIMIT, 2, NULL, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 389:

    { (yyval.node) = NULL; ;}
    break;

  case 390:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 391:

    { (yyval.node) = NULL; ;}
    break;

  case 392:

    { (yyval.node) = NULL; ;}
    break;

  case 393:

    { (yyval.ival) = 1; ;}
    break;

  case 394:

    { (yyval.ival) = 0; ;}
    break;

  case 395:

    { (yyval.ival) = 0; ;}
    break;

  case 396:

    { (yyval.node) = NULL; ;}
    break;

  case 397:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 398:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_WHERE_CLAUSE, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 399:

    { (yyval.node) = NULL; ;}
    break;

  case 400:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 1, (yyvsp[(1) - (1)].node)); ;}
    break;

  case 401:

    { (yyval.ival) = 0; ;}
    break;

  case 402:

    { (yyval.ival) = 1; ;}
    break;

  case 403:

    {
        merge_nodes((yyval.node), result->malloc_pool_, T_CREATE_USER, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 404:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 405:

    {
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 406:

    {
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CREATE_USER_SPEC, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 407:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 408:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 409:

    {
        merge_nodes((yyval.node), result->malloc_pool_, T_DROP_USER, (yyvsp[(3) - (3)].node));
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
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SET_PASSWORD, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 413:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SET_PASSWORD, 2, (yyvsp[(3) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 414:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 415:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 416:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_RENAME_USER, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 417:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_RENAME_INFO, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
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
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LOCK_USER, 2, (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 421:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 422:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 423:

    {
      (void)(yyval.node);
    ;}
    break;

  case 424:

    {
      (void)(yyval.node);
    ;}
    break;

  case 425:

    {
      (yyval.ival) = 1;
    ;}
    break;

  case 426:

    {
      (yyval.ival) = 0;
    ;}
    break;

  case 427:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BEGIN);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 428:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BEGIN);
      (yyval.node)->value_ = (yyvsp[(3) - (3)].ival);
    ;}
    break;

  case 429:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_COMMIT);
    ;}
    break;

  case 430:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_ROLLBACK);
    ;}
    break;

  case 431:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_KILL, 3, (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 432:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 433:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 434:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 435:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 436:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 437:

    {
      ParseNode *privileges_node = NULL;
      ParseNode *users_node = NULL;
      merge_nodes(privileges_node, result->malloc_pool_, T_PRIVILEGES, (yyvsp[(2) - (6)].node));
      merge_nodes(users_node, result->malloc_pool_, T_USERS, (yyvsp[(6) - (6)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_GRANT,
                                 3, privileges_node, (yyvsp[(4) - (6)].node), users_node);
    ;}
    break;

  case 438:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 439:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 440:

    {
      (void)(yyvsp[(2) - (2)].node);                 /* useless */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_ALL;
    ;}
    break;

  case 441:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_ALTER;
    ;}
    break;

  case 442:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_CREATE;
    ;}
    break;

  case 443:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_CREATE_USER;
    ;}
    break;

  case 444:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_DELETE;
    ;}
    break;

  case 445:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_DROP;
    ;}
    break;

  case 446:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_GRANT_OPTION;
    ;}
    break;

  case 447:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_INSERT;
    ;}
    break;

  case 448:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_UPDATE;
    ;}
    break;

  case 449:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_SELECT;
    ;}
    break;

  case 450:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_REPLACE;
    ;}
    break;

  case 451:

    {
      (void)(yyval.node);
    ;}
    break;

  case 452:

    {
      (void)(yyval.node);
    ;}
    break;

  case 453:

    {
      /* means global priv_level */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_LEVEL);
    ;}
    break;

  case 454:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_LEVEL, 1, (yyvsp[(1) - (1)].node));
    ;}
    break;

  case 455:

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

  case 456:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 457:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 458:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PREPARE, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 459:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
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

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_VARIABLE_SET, (yyvsp[(2) - (2)].node));;
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 465:

    {
      (yyval.node) = (yyvsp[(3) - (3)].node);
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

    {
      (void)((yyvsp[(2) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 476:

    {
      (void)((yyvsp[(2) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_ARRAY_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 477:

    { (yyval.node) = NULL; ;}
    break;

  case 478:

    { (yyval.node) = NULL; ;}
    break;

  case 479:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 480:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 481:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_ARRAY_VAL, (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 482:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 483:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 484:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXECUTE, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 485:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 486:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 487:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 488:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 489:

    {
      (void)((yyvsp[(1) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_DEALLOCATE, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 490:

    { (yyval.node) = NULL; ;}
    break;

  case 491:

    { (yyval.node) = NULL; ;}
    break;

  case 492:

    {
      ParseNode *alter_actions = NULL;
      merge_nodes(alter_actions, result->malloc_pool_, T_ALTER_ACTION_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_TABLE, 2, (yyvsp[(3) - (4)].node), alter_actions);
    ;}
    break;

  case 493:

    {
      yyerror(&(yylsp[(1) - (6)]), result, "Table rename is not supported now");
      YYABORT;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLE_RENAME, 1, (yyvsp[(6) - (6)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_ACTION_LIST, 1, (yyval.node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_TABLE, 2, (yyvsp[(3) - (6)].node), (yyval.node));
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
      (void)((yyvsp[(2) - (3)].node)); /* make bison mute */
      (yyval.node) = (yyvsp[(3) - (3)].node); /* T_COLUMN_DEFINITION */
    ;}
    break;

  case 497:

    {
      (void)((yyvsp[(2) - (4)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_DROP, 1, (yyvsp[(3) - (4)].node));
      (yyval.node)->value_ = (yyvsp[(4) - (4)].ival);
    ;}
    break;

  case 498:

    {
      (void)((yyvsp[(2) - (4)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_ALTER, 2, (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 499:

    {
      (void)((yyvsp[(2) - (5)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_RENAME, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 500:

    { (yyval.node) = NULL; ;}
    break;

  case 501:

    { (yyval.node) = NULL; ;}
    break;

  case 502:

    { (yyval.ival) = 2; ;}
    break;

  case 503:

    { (yyval.ival) = 1; ;}
    break;

  case 504:

    { (yyval.ival) = 0; ;}
    break;

  case 505:

    {
      (void)((yyvsp[(3) - (3)].node)); /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NOT_NULL);
    ;}
    break;

  case 506:

    {
      (void)((yyvsp[(3) - (3)].node)); /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NULL);
    ;}
    break;

  case 507:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 508:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_NULL);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyval.node));
    ;}
    break;

  case 509:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_SYTEM_ACTION_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_SYSTEM, 1, (yyval.node));
    ;}
    break;

  case 510:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 3, node, (yyvsp[(7) - (7)].node), (yyvsp[(3) - (7)].node));
    ;}
    break;

  case 511:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 3, node, (yyvsp[(7) - (7)].node), (yyvsp[(3) - (7)].node));
    ;}
    break;

  case 512:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 2, node, (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 513:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 2, node, (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 514:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 515:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_FORCE);
    ;}
    break;

  case 516:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 517:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 518:

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

  case 519:

    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 520:

    { (yyval.node) = NULL; ;}
    break;

  case 521:

    { (yyval.ival) = 0; ;}
    break;

  case 522:

    { (yyval.ival) = 1; ;}
    break;

  case 523:

    { (yyval.ival) = 2; ;}
    break;

  case 524:

    { (yyval.ival) = 2; ;}
    break;

  case 525:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 526:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 4;
    ;}
    break;

  case 527:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 528:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 3;
    ;}
    break;

  case 529:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CLUSTER, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 530:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SERVER_ADDRESS, 2, (yyvsp[(3) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 531:

    { (yyval.node) = NULL; ;}
    break;

  case 532:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 533:

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

  case 534:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 535:

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
    ;}
    break;

  case 564:

    {
								malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CREATE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
							;}
    break;

  case 565:

    {
					ParseNode *params = NULL;
        			merge_nodes(params, result->malloc_pool_, T_PARAM_LIST, (yyvsp[(5) - (6)].node));
					malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECL, 2, (yyvsp[(3) - (6)].node), params);
				;}
    break;

  case 566:

    {
					ParseNode *params = NULL;
					malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECL, 2, (yyvsp[(3) - (5)].node), params);
				;}
    break;

  case 567:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
					;}
    break;

  case 568:

    {
						(yyval.node) = (yyvsp[(1) - (1)].node);
					;}
    break;

  case 569:

    {
                malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PARAM_DEFINITION, 3, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node), NULL);
					;}
    break;

  case 570:

    {
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_IN_PARAM_DEFINITION, 3, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node), NULL);
					;}
    break;

  case 571:

    {
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OUT_PARAM_DEFINITION, 3, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node), NULL);
					;}
    break;

  case 572:

    {
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_INOUT_PARAM_DEFINITION, 3, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node), NULL);
          ;}
    break;

  case 573:

    {
          ParseNode *array_flag = NULL;
          malloc_terminal_node(array_flag, result->malloc_pool_, T_BOOL);
          array_flag->value_ = 1;
          malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PARAM_DEFINITION, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), array_flag);
        ;}
    break;

  case 574:

    {
          ParseNode *array_flag = NULL;
          malloc_terminal_node(array_flag, result->malloc_pool_, T_BOOL);
          array_flag->value_ = 1;
          malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_IN_PARAM_DEFINITION, 3, (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), array_flag);
        ;}
    break;

  case 575:

    {
          ParseNode *array_flag = NULL;
          malloc_terminal_node(array_flag, result->malloc_pool_, T_BOOL);
          array_flag->value_ = 1;
          malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OUT_PARAM_DEFINITION, 3, (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), array_flag);
        ;}
    break;

  case 576:

    {
          ParseNode *array_flag = NULL;
          malloc_terminal_node(array_flag, result->malloc_pool_, T_BOOL);
          array_flag->value_ = 1;
          malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_INOUT_PARAM_DEFINITION, 3, (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), array_flag);
        ;}
    break;

  case 577:

    { 
					//malloc_non_terminal_node($$, result->malloc_pool_, T_PROCEDURE_BLOCK, 1, $2);
					(yyval.node)=(yyvsp[(2) - (3)].node);
				;}
    break;

  case 578:

    { 
					(yyval.node)=NULL;
				;}
    break;

  case 579:

    { 
        			merge_nodes((yyval.node), result->malloc_pool_, T_PROCEDURE_STMTS, (yyvsp[(1) - (1)].node));
				;}
    break;

  case 580:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
				;}
    break;

  case 581:

    {
					(yyval.node)=(yyvsp[(1) - (1)].node);
				;}
    break;

  case 582:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 583:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 584:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 585:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 586:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 587:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
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

    { (yyval.node) =(yyvsp[(1) - (1)].node); ;}
    break;

  case 604:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 605:

    { 
					(yyval.node)=NULL;
				;}
    break;

  case 606:

    { 
        			merge_nodes((yyval.node), result->malloc_pool_, T_PROCEDURE_STMTS, (yyvsp[(1) - (1)].node));
				;}
    break;

  case 607:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
				;}
    break;

  case 608:

    {
					(yyval.node)=(yyvsp[(1) - (1)].node);
				;}
    break;

  case 609:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 610:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 611:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 612:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 613:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
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

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
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

    { (yyval.node) =(yyvsp[(1) - (1)].node); ;}
    break;

  case 630:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 631:

    {
						ParseNode *args = NULL;
						merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (4)].node));
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECLARE, 4, args, (yyvsp[(3) - (4)].node), NULL, NULL);
					;}
    break;

  case 632:

    {
						ParseNode *args = NULL;
						merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (6)].node));
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECLARE, 4, args, (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node), NULL);
          ;}
    break;

  case 633:

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

  case 634:

    {
						ParseNode *var_list = NULL;
						merge_nodes(var_list, result->malloc_pool_, T_VAR_VAL_LIST, (yyvsp[(2) - (3)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ASSGIN, 1,var_list);
					;}
    break;

  case 635:

    {
						ParseNode *elsifs = NULL;
						merge_nodes(elsifs, result->malloc_pool_, T_PROCEDURE_ELSEIFS, (yyvsp[(5) - (9)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (9)].node), (yyvsp[(4) - (9)].node), elsifs ,(yyvsp[(6) - (9)].node));
					;}
    break;

  case 636:

    {
						ParseNode *elsifs = NULL;
						merge_nodes(elsifs, result->malloc_pool_, T_PROCEDURE_ELSEIFS, (yyvsp[(5) - (8)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (8)].node), (yyvsp[(4) - (8)].node), elsifs ,NULL);
					;}
    break;

  case 637:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (8)].node), (yyvsp[(4) - (8)].node), NULL ,(yyvsp[(5) - (8)].node));
					;}
    break;

  case 638:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (7)].node), (yyvsp[(4) - (7)].node), NULL ,NULL);
					;}
    break;

  case 639:

    {
						(yyval.node)=(yyvsp[(1) - (1)].node);
					;}
    break;

  case 640:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
					;}
    break;

  case 641:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ELSEIF, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
					;}
    break;

  case 642:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ELSE, 1, (yyvsp[(2) - (2)].node));
						//$$ = $2;
					;}
    break;

  case 643:

    {
						ParseNode *casewhenlist = NULL;
						merge_nodes(casewhenlist, result->malloc_pool_, T_PROCEDURE_CASE_WHEN_LIST, (yyvsp[(3) - (7)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CASE, 3, (yyvsp[(2) - (7)].node), casewhenlist, (yyvsp[(4) - (7)].node));
					;}
    break;

  case 644:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
					;}
    break;

  case 645:

    {
						(yyval.node)=(yyvsp[(1) - (1)].node);
					;}
    break;

  case 646:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CASE_WHEN, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
					;}
    break;

  case 647:

    {
						(yyval.node) = NULL;
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
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_LOOP, 5,
                                     NULL,
                                     NULL,
                                     NULL,
                                     NULL,
                                     (yyvsp[(2) - (5)].node));
          ;}
    break;

  case 650:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_LOOP, 5,
                                       (yyvsp[(2) - (11)].node),
                                       NULL,
                                       (yyvsp[(4) - (11)].node),
                                       (yyvsp[(6) - (11)].node),
                                       (yyvsp[(8) - (11)].node));
            ;}
    break;

  case 651:

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

  case 652:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_WHILE, 2, (yyvsp[(2) - (7)].node), (yyvsp[(4) - (7)].node));
					;}
    break;

  case 653:

    {
						/* We do not bother building a node for NULL */
						(yyval.node) = NULL;
					;}
    break;

  case 654:

    {
                        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXIT, 1, NULL);
						(yyval.node)->value_=1;
					;}
    break;

  case 655:

    {
                        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXIT, 1, (yyvsp[(3) - (4)].node));//when_expr
                    ;}
    break;

  case 656:

    {
        					ParseNode *param_list = NULL;
            				merge_nodes(param_list, result->malloc_pool_, T_EXPR_LIST, (yyvsp[(4) - (6)].node));
        					
                            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXEC, 3, (yyvsp[(2) - (6)].node), param_list, (yyvsp[(6) - (6)].node));
						;}
    break;

  case 657:

    {
							ParseNode *params = NULL;
                            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXEC, 3, (yyvsp[(2) - (5)].node), params, (yyvsp[(5) - (5)].node));
                        ;}
    break;

  case 658:

    {
							malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DROP, 2, (yyvsp[(5) - (5)].node),(yyvsp[(5) - (5)].node));
						;}
    break;

  case 659:

    {
							malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DROP, 1, (yyvsp[(3) - (3)].node));
						;}
    break;

  case 660:

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

