
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
     AUTO_INCREMENT = 452,
     CHUNKSERVER = 453,
     COMPRESS_METHOD = 454,
     CONSISTENT_MODE = 455,
     EXPIRE_INFO = 456,
     GRANTS = 457,
     JOIN_INFO = 458,
     MERGESERVER = 459,
     REPLICA_NUM = 460,
     ROOTSERVER = 461,
     ROW_COUNT = 462,
     SERVER = 463,
     SERVER_IP = 464,
     SERVER_PORT = 465,
     SERVER_TYPE = 466,
     STATUS = 467,
     TABLE_ID = 468,
     TABLET_BLOCK_SIZE = 469,
     TABLET_MAX_SIZE = 470,
     UNLOCKED = 471,
     UPDATESERVER = 472,
     USE_BLOOM_FILTER = 473,
     VARIABLES = 474,
     VERBOSE = 475,
     WARNINGS = 476
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
#define YYLAST   3650

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  233
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  214
/* YYNRULES -- Number of rules.  */
#define YYNRULES  641
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1193

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   476

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    36,     2,     2,
      40,    41,    34,    32,   232,    33,    42,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   231,
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
     224,   225,   226,   227,   228,   229,   230
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
     998,   999,  1001,  1003,  1005,  1007,  1009,  1011,  1012,  1014,
    1015,  1018,  1022,  1027,  1032,  1037,  1041,  1045,  1049,  1050,
    1054,  1056,  1057,  1061,  1063,  1067,  1070,  1071,  1073,  1075,
    1076,  1079,  1080,  1082,  1084,  1086,  1089,  1093,  1095,  1097,
    1101,  1103,  1107,  1109,  1113,  1116,  1120,  1123,  1125,  1131,
    1133,  1137,  1144,  1150,  1153,  1156,  1159,  1161,  1163,  1164,
    1168,  1170,  1172,  1174,  1176,  1178,  1179,  1183,  1189,  1195,
    1201,  1206,  1211,  1216,  1219,  1224,  1228,  1232,  1236,  1240,
    1244,  1248,  1252,  1256,  1261,  1264,  1265,  1267,  1270,  1275,
    1277,  1279,  1280,  1281,  1284,  1287,  1288,  1290,  1291,  1293,
    1297,  1299,  1303,  1308,  1310,  1312,  1316,  1318,  1322,  1328,
    1335,  1338,  1339,  1343,  1347,  1349,  1353,  1358,  1360,  1362,
    1364,  1365,  1369,  1370,  1373,  1377,  1380,  1383,  1388,  1389,
    1391,  1392,  1394,  1396,  1403,  1405,  1409,  1412,  1414,  1416,
    1419,  1421,  1423,  1426,  1428,  1430,  1432,  1434,  1436,  1437,
    1439,  1441,  1447,  1450,  1451,  1456,  1458,  1460,  1462,  1464,
    1466,  1469,  1471,  1475,  1479,  1483,  1488,  1493,  1499,  1505,
    1509,  1511,  1513,  1515,  1519,  1522,  1523,  1525,  1529,  1533,
    1535,  1537,  1542,  1549,  1551,  1555,  1559,  1564,  1569,  1575,
    1577,  1578,  1580,  1582,  1583,  1587,  1591,  1595,  1598,  1603,
    1611,  1619,  1626,  1633,  1634,  1636,  1638,  1642,  1652,  1655,
    1656,  1660,  1664,  1668,  1669,  1671,  1673,  1675,  1677,  1681,
    1688,  1689,  1691,  1693,  1695,  1697,  1699,  1701,  1703,  1705,
    1707,  1709,  1711,  1713,  1715,  1717,  1719,  1721,  1723,  1725,
    1727,  1729,  1731,  1733,  1735,  1737,  1739,  1741,  1743,  1745,
    1747,  1749,  1751,  1753,  1756,  1763,  1769,  1773,  1775,  1778,
    1782,  1786,  1790,  1794,  1795,  1797,  1800,  1802,  1804,  1806,
    1808,  1810,  1812,  1814,  1817,  1820,  1823,  1826,  1829,  1832,
    1835,  1838,  1841,  1844,  1847,  1850,  1853,  1856,  1859,  1861,
    1863,  1865,  1868,  1870,  1872,  1874,  1876,  1878,  1880,  1883,
    1886,  1889,  1892,  1895,  1898,  1901,  1904,  1907,  1910,  1913,
    1916,  1919,  1922,  1925,  1927,  1929,  1934,  1941,  1945,  1955,
    1964,  1973,  1981,  1983,  1986,  1991,  1994,  2002,  2005,  2007,
    2012,  2013,  2016,  2022,  2030,  2032,  2035,  2038,  2044,  2049,
    2055,  2059
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     234,     0,    -1,   235,   104,    -1,   235,   231,   236,    -1,
     236,    -1,   419,    -1,   444,    -1,   446,    -1,   445,    -1,
     264,    -1,   266,    -1,   267,    -1,   282,    -1,   275,    -1,
     276,    -1,   277,    -1,   278,    -1,   280,    -1,   281,    -1,
     312,    -1,   305,    -1,   283,    -1,   258,    -1,   255,    -1,
     254,    -1,   299,    -1,   302,    -1,   347,    -1,   350,    -1,
     387,    -1,   390,    -1,   395,    -1,   400,    -1,   406,    -1,
     398,    -1,   358,    -1,   363,    -1,   365,    -1,   367,    -1,
     370,    -1,   380,    -1,   385,    -1,   374,    -1,   375,    -1,
     376,    -1,   377,    -1,   351,    -1,    -1,   242,    -1,   237,
     232,   242,    -1,   414,    -1,   415,    42,   414,    -1,   415,
      42,    34,    -1,     4,    -1,     6,    -1,     5,    -1,     9,
      -1,     8,    -1,    10,    -1,    12,    -1,    14,    -1,    13,
      -1,   168,    42,   414,    -1,   238,    -1,   239,    -1,    40,
     242,    41,    -1,    40,   237,   232,   242,    41,    -1,   244,
      -1,   249,    -1,   250,    -1,   313,    -1,   107,   313,    -1,
     240,    -1,    32,   241,    -1,    33,   241,    -1,   241,    32,
     241,    -1,   241,    33,   241,    -1,   241,    34,   241,    -1,
     241,    35,   241,    -1,   241,    36,   241,    -1,   241,    38,
     241,    -1,   241,    37,   241,    -1,   240,    -1,    32,   242,
      -1,    33,   242,    -1,   242,    32,   242,    -1,   242,    33,
     242,    -1,   242,    34,   242,    -1,   242,    35,   242,    -1,
     242,    36,   242,    -1,   242,    38,   242,    -1,   242,    37,
     242,    -1,   242,    26,   242,    -1,   242,    25,   242,    -1,
     242,    24,   242,    -1,   242,    22,   242,    -1,   242,    23,
     242,    -1,   242,    21,   242,    -1,   242,    28,   242,    -1,
     242,    20,    28,   242,    -1,   242,    19,   242,    -1,   242,
      18,   242,    -1,    20,   242,    -1,   242,    31,    10,    -1,
     242,    31,    20,    10,    -1,   242,    31,     8,    -1,   242,
      31,    20,     8,    -1,   242,    31,    11,    -1,   242,    31,
      20,    11,    -1,   242,    29,   241,    19,   241,    -1,   242,
      20,    29,   241,    19,   241,    -1,   242,    30,   243,    -1,
     242,    20,    30,   243,    -1,   242,    27,   242,    -1,   313,
      -1,    40,   237,    41,    -1,    77,   245,   246,   248,   103,
      -1,   242,    -1,    -1,   247,    -1,   246,   247,    -1,   197,
     242,   183,   242,    -1,   102,   242,    -1,    -1,   416,    40,
      34,    41,    -1,   416,    40,   253,   242,    41,    -1,   416,
      40,   237,    41,    -1,   416,    40,   242,    68,   288,    41,
      -1,   416,    40,   330,    41,    -1,   416,    40,    41,    -1,
     251,    40,   252,    41,    -1,   216,    -1,   312,    -1,   305,
      -1,   255,    -1,   254,    -1,    66,    -1,    98,    -1,    95,
     111,   343,   319,   306,    -1,   190,   321,   343,   169,   256,
     319,   306,    -1,   257,    -1,   256,   232,   257,    -1,   414,
      24,   242,    -1,    85,   204,   284,   343,   144,   343,   259,
     260,   262,    -1,    40,   309,    41,    -1,   205,   261,    -1,
      -1,    40,   309,    41,    -1,   263,    -1,   262,   232,   263,
      -1,    -1,   297,    -1,    44,   265,    54,   110,   312,    -1,
     417,    -1,    55,   265,    -1,    56,   265,    -1,    56,   265,
      58,    -1,    56,   265,   128,   397,    -1,    56,   265,    58,
     128,   397,    -1,    56,   265,    60,   128,   397,    -1,    56,
     265,    59,   128,   397,    -1,    56,   265,    61,   128,   397,
      -1,    56,   265,    62,     5,   128,   397,    -1,    56,   265,
     279,    63,     5,   128,   397,    -1,    56,   265,    59,    -1,
      56,   265,    60,    -1,    56,   265,    61,    -1,    56,   265,
     279,    63,     5,    -1,    58,    -1,    59,    -1,    56,   265,
      62,     5,    -1,    56,   265,   111,     5,   189,     5,    -1,
      57,   265,    -1,    85,   181,   284,   343,    40,   285,    41,
     296,    -1,   124,    20,   107,    -1,    -1,   286,    -1,   285,
     232,   286,    -1,   287,    -1,   152,   131,    40,   309,    41,
      -1,   414,   288,   294,    -1,   186,    -1,   171,    -1,   138,
      -1,   126,    -1,    71,    -1,    93,   289,    -1,   142,   289,
      -1,    73,    -1,   109,   290,    -1,   154,    -1,    99,   291,
      -1,   185,   292,    -1,    91,    -1,    78,   293,    -1,    72,
     293,    -1,   194,   293,    -1,   195,   293,    -1,    86,    -1,
     140,    -1,    90,    -1,   184,   292,    -1,    40,     5,   232,
       5,    41,    -1,    40,     5,    41,    -1,    -1,    40,     5,
      41,    -1,    -1,   150,    -1,    -1,    40,     5,    41,    -1,
      -1,    40,     5,    41,    -1,    -1,   294,   295,    -1,    -1,
      20,    10,    -1,    10,    -1,    94,   239,    -1,   206,    -1,
     152,   131,    -1,   297,    -1,   296,   232,   297,    -1,    -1,
     212,   298,     4,    -1,   210,   298,     4,    -1,   224,   298,
       5,    -1,   223,   298,     5,    -1,   222,   298,     5,    -1,
     214,   298,     5,    -1,   208,   298,     4,    -1,   227,   298,
       8,    -1,   209,   298,   175,    -1,    80,   298,     4,    -1,
      24,    -1,    -1,   100,   181,   300,   301,    -1,    -1,   124,
     107,    -1,   342,    -1,   301,   232,   342,    -1,   100,   204,
     300,   303,   144,   304,    -1,    -1,   343,    -1,   303,   232,
     343,    -1,   343,    -1,   307,   128,   343,   308,   193,   310,
     306,    -1,   307,   128,   343,   312,    -1,   307,   128,   343,
      40,   309,    41,   312,    -1,    -1,   197,   242,    -1,   156,
      -1,   127,    -1,    40,   309,    41,    -1,    -1,   414,    -1,
     309,   232,   414,    -1,    40,   311,    41,    -1,   310,   232,
      40,   311,    41,    -1,   242,    -1,   311,   232,   242,    -1,
     314,   306,    -1,   313,    -1,    40,   314,    41,    -1,    40,
     313,    41,    -1,   315,    -1,   318,   329,    -1,   316,   333,
     329,    -1,   316,   332,   320,   329,    -1,   166,   321,   338,
     340,   328,    -1,   166,   321,   338,   340,   111,   101,   319,
     328,    -1,   318,    -1,   313,    -1,   166,   340,   128,   397,
     111,   341,   319,   329,    -1,   166,   321,   338,   340,   111,
     341,   319,   331,   337,    -1,   316,    16,   338,   316,    -1,
     316,    17,   338,   316,    -1,   316,    15,   338,   316,    -1,
      -1,   196,   242,    -1,   196,     7,   242,    -1,   134,   327,
     143,   327,    -1,   143,   327,   134,   327,    -1,   134,   327,
      -1,   143,   327,    -1,   134,   327,   232,   327,    -1,    -1,
     120,   322,   121,    -1,   323,    -1,   322,   232,   323,    -1,
      -1,   324,    -1,   323,   324,    -1,   153,    -1,   122,    -1,
     130,    40,   343,   232,   343,   232,   343,    42,   343,   232,
     343,    42,   343,    41,    -1,   163,    40,   326,    41,    -1,
     204,    40,   343,   343,    41,    -1,     3,    40,     3,    41,
      -1,    40,   325,    41,    -1,   325,   232,    -1,    -1,   203,
      -1,   177,    -1,   175,    -1,   113,    -1,     5,    -1,    12,
      -1,    -1,   320,    -1,    -1,   110,   190,    -1,   242,   111,
     242,    -1,    74,   242,   111,   242,    -1,   132,   242,   111,
     242,    -1,   187,   242,   111,   242,    -1,    74,   111,   242,
      -1,   132,   111,   242,    -1,   187,   111,   242,    -1,    -1,
     118,    75,   237,    -1,   333,    -1,    -1,   145,    75,   334,
      -1,   335,    -1,   334,   232,   335,    -1,   242,   336,    -1,
      -1,    69,    -1,    96,    -1,    -1,   119,   242,    -1,    -1,
      66,    -1,    98,    -1,   242,    -1,   242,   417,    -1,   242,
      68,   417,    -1,    34,    -1,   339,    -1,   340,   232,   339,
      -1,   342,    -1,   341,   232,   342,    -1,   343,    -1,   343,
      68,   415,    -1,   343,   415,    -1,   313,    68,   415,    -1,
     313,   415,    -1,   344,    -1,    40,   344,    41,    68,   415,
      -1,   415,    -1,    40,   344,    41,    -1,   342,   345,   129,
     342,   144,   242,    -1,   342,   129,   342,   144,   242,    -1,
     112,   346,    -1,   133,   346,    -1,   160,   346,    -1,   125,
      -1,   147,    -1,    -1,   108,   349,   348,    -1,   312,    -1,
     254,    -1,   305,    -1,   255,    -1,   229,    -1,    -1,   170,
     182,   355,    -1,   170,   204,   144,   343,   355,    -1,   170,
      84,   111,   343,   355,    -1,   170,    84,    30,   343,   355,
      -1,   170,   181,   221,   355,    -1,   170,   217,   221,   355,
      -1,   170,   354,   228,   355,    -1,   170,   164,    -1,   170,
      85,   181,   343,    -1,    97,   343,   356,    -1,    96,   343,
     356,    -1,   170,   230,   352,    -1,   170,   249,   230,    -1,
     170,   211,   353,    -1,   170,   148,   355,    -1,   170,   357,
     200,    -1,   137,   181,   343,    -1,   134,     5,   232,     5,
      -1,   134,     5,    -1,    -1,   366,    -1,   110,    87,    -1,
     110,    87,    40,    41,    -1,   115,    -1,   167,    -1,    -1,
      -1,    28,     4,    -1,   196,   242,    -1,    -1,     4,    -1,
      -1,   112,    -1,    85,   191,   359,    -1,   360,    -1,   359,
     232,   360,    -1,   361,   123,    75,   362,    -1,     4,    -1,
       4,    -1,   100,   191,   364,    -1,   361,    -1,   364,   232,
     361,    -1,   169,   149,   366,    24,   362,    -1,    67,   191,
     361,   123,    75,   362,    -1,   110,   361,    -1,    -1,   155,
     191,   369,    -1,   361,   189,   361,    -1,   368,    -1,   369,
     232,   368,    -1,    67,   191,   361,   371,    -1,   136,    -1,
     225,    -1,   199,    -1,    -1,   198,    82,   172,    -1,    -1,
      70,   372,    -1,   174,   188,   373,    -1,    81,   372,    -1,
     161,   372,    -1,   162,   378,   379,     5,    -1,    -1,   115,
      -1,    -1,   201,    -1,   202,    -1,   117,   381,   144,   384,
     189,   364,    -1,   382,    -1,   381,   232,   382,    -1,    66,
     383,    -1,    67,    -1,    85,    -1,    85,   191,    -1,    95,
      -1,   100,    -1,   117,   146,    -1,   127,    -1,   190,    -1,
     166,    -1,   156,    -1,   158,    -1,    -1,    34,    -1,   415,
      -1,   159,   381,   386,   111,   364,    -1,   144,   384,    -1,
      -1,   151,   388,   111,   389,    -1,   417,    -1,   312,    -1,
     305,    -1,   255,    -1,   254,    -1,   169,   391,    -1,   392,
      -1,   391,   232,   392,    -1,    14,   393,   242,    -1,   414,
     393,   242,    -1,   115,   414,   393,   242,    -1,   167,   414,
     393,   242,    -1,   116,    42,   414,   393,   242,    -1,   168,
      42,   414,   393,   242,    -1,    13,   393,   242,    -1,   189,
      -1,    24,    -1,    14,    -1,   106,   388,   396,    -1,   192,
     397,    -1,    -1,   394,    -1,   397,   232,   394,    -1,   399,
     151,   388,    -1,    92,    -1,   100,    -1,    67,   181,   343,
     401,    -1,    67,   181,   343,   155,   189,   343,    -1,   402,
      -1,   401,   232,   402,    -1,    64,   403,   287,    -1,   100,
     403,   414,   404,    -1,    67,   403,   414,   405,    -1,   155,
     403,   414,   189,   417,    -1,    83,    -1,    -1,    76,    -1,
     157,    -1,    -1,   169,    20,    10,    -1,   100,    20,    10,
      -1,   169,    94,   239,    -1,   100,    94,    -1,    67,   176,
     169,   408,    -1,    67,   176,   407,    88,   141,    24,     4,
      -1,    67,   176,   407,    89,   141,    24,     4,    -1,    67,
     176,   178,   141,    24,     4,    -1,    67,   176,   179,   180,
      24,     4,    -1,    -1,   114,    -1,   409,    -1,   408,   232,
     409,    -1,   414,    24,   239,   410,   411,   220,    24,   412,
     413,    -1,    80,     4,    -1,    -1,   165,    24,   139,    -1,
     165,    24,   173,    -1,   165,    24,    74,    -1,    -1,   215,
      -1,   226,    -1,   207,    -1,   213,    -1,    79,    24,     5,
      -1,   218,    24,     4,   219,    24,     5,    -1,    -1,     3,
      -1,   418,    -1,     3,    -1,   418,    -1,     3,    -1,     3,
      -1,   418,    -1,   206,    -1,   207,    -1,   208,    -1,   209,
      -1,   210,    -1,   211,    -1,   212,    -1,   213,    -1,   214,
      -1,   215,    -1,   216,    -1,   217,    -1,   218,    -1,   219,
      -1,   220,    -1,   221,    -1,   223,    -1,   222,    -1,   224,
      -1,   225,    -1,   226,    -1,   227,    -1,   228,    -1,   229,
      -1,   230,    -1,   420,   423,    -1,    85,    43,     3,    40,
     421,    41,    -1,    85,    43,     3,    40,    41,    -1,   421,
     232,   422,    -1,   422,    -1,    14,   288,    -1,    30,    14,
     288,    -1,    46,    14,   288,    -1,    47,    14,   288,    -1,
      70,   424,   103,    -1,    -1,   425,    -1,   425,   426,    -1,
     426,    -1,   432,    -1,   436,    -1,   441,    -1,   440,    -1,
     430,    -1,   431,    -1,   317,   231,    -1,   305,   231,    -1,
     255,   231,    -1,   254,   231,    -1,   312,   231,    -1,   264,
     231,    -1,   266,   231,    -1,   282,   231,    -1,   268,   231,
      -1,   269,   231,    -1,   270,   231,    -1,   272,   231,    -1,
     271,   231,    -1,   273,   231,    -1,   274,   231,    -1,   443,
      -1,   442,    -1,   428,    -1,   428,   429,    -1,   429,    -1,
     432,    -1,   436,    -1,   441,    -1,   440,    -1,   431,    -1,
     317,   231,    -1,   305,   231,    -1,   255,   231,    -1,   254,
     231,    -1,   312,   231,    -1,   264,   231,    -1,   266,   231,
      -1,   282,   231,    -1,   268,   231,    -1,   269,   231,    -1,
     270,   231,    -1,   272,   231,    -1,   271,   231,    -1,   273,
     231,    -1,   274,   231,    -1,   443,    -1,   442,    -1,    44,
     397,   288,   231,    -1,    44,   397,   288,    94,   239,   231,
      -1,   169,   391,   231,    -1,   124,   242,   183,   427,   433,
     435,   103,   124,   231,    -1,   124,   242,   183,   427,   433,
     103,   124,   231,    -1,   124,   242,   183,   427,   435,   103,
     124,   231,    -1,   124,   242,   183,   427,   103,   124,   231,
      -1,   434,    -1,   433,   434,    -1,    45,   242,   183,   427,
      -1,   102,   427,    -1,    77,   242,   437,   439,   103,    77,
     231,    -1,   437,   438,    -1,   438,    -1,   197,   242,   183,
     427,    -1,    -1,   102,   427,    -1,    49,   427,   103,    49,
     231,    -1,    48,   242,    52,   427,   103,    48,   231,    -1,
     231,    -1,    50,   231,    -1,    51,   231,    -1,    53,     3,
      40,   237,    41,    -1,    53,     3,    40,    41,    -1,   100,
      43,   124,   107,     3,    -1,   100,    43,     3,    -1,   170,
      43,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   247,   247,   256,   263,   270,   271,   272,   273,   276,
     277,   278,   279,   280,   282,   283,   284,   285,   286,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   326,   330,
     337,   339,   345,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   367,   369,   371,   373,   379,   387,   391,
     395,   399,   407,   408,   412,   416,   417,   418,   419,   420,
     421,   422,   425,   426,   430,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   453,   457,   461,   465,   469,   473,   477,   481,   485,
     489,   493,   497,   501,   508,   512,   517,   525,   526,   530,
     532,   537,   544,   545,   549,   563,   591,   666,   682,   686,
     708,   716,   723,   724,   725,   726,   730,   734,   748,   762,
     772,   776,   783,   797,   813,   820,   826,   832,   839,   843,
     848,   854,   871,   882,   895,   911,   917,   931,   946,   961,
     977,   993,  1009,  1026,  1042,  1063,  1082,  1099,  1112,  1117,
    1132,  1149,  1169,  1189,  1206,  1209,  1213,  1217,  1224,  1228,
    1237,  1246,  1248,  1250,  1252,  1254,  1256,  1265,  1274,  1276,
    1278,  1280,  1285,  1292,  1294,  1301,  1308,  1315,  1322,  1324,
    1326,  1332,  1344,  1346,  1349,  1353,  1354,  1358,  1359,  1363,
    1364,  1368,  1369,  1373,  1376,  1380,  1385,  1390,  1392,  1394,
    1399,  1403,  1408,  1414,  1419,  1424,  1429,  1434,  1439,  1444,
    1449,  1454,  1460,  1468,  1469,  1480,  1490,  1491,  1496,  1500,
    1514,  1524,  1526,  1530,  1537,  1548,  1562,  1573,  1591,  1592,
    1599,  1604,  1612,  1617,  1621,  1622,  1629,  1633,  1639,  1640,
    1654,  1664,  1669,  1670,  1674,  1678,  1683,  1693,  1714,  1736,
    1762,  1763,  1771,  1803,  1829,  1851,  1873,  1899,  1900,  1904,
    1911,  1919,  1927,  1931,  1935,  1947,  1950,  1964,  1968,  1973,
    1979,  1983,  1990,  1994,  1998,  2002,  2008,  2014,  2021,  2028,
    2033,  2039,  2043,  2047,  2051,  2057,  2059,  2065,  2066,  2072,
    2073,  2081,  2088,  2095,  2102,  2109,  2120,  2131,  2146,  2147,
    2154,  2155,  2159,  2166,  2168,  2173,  2181,  2182,  2184,  2190,
    2191,  2199,  2202,  2206,  2213,  2218,  2226,  2234,  2244,  2248,
    2255,  2257,  2262,  2266,  2270,  2274,  2278,  2282,  2286,  2295,
    2303,  2307,  2311,  2320,  2326,  2332,  2338,  2345,  2346,  2356,
    2364,  2365,  2366,  2367,  2371,  2372,  2383,  2385,  2387,  2389,
    2391,  2393,  2395,  2400,  2402,  2404,  2406,  2408,  2412,  2425,
    2429,  2433,  2440,  2446,  2455,  2465,  2469,  2471,  2473,  2478,
    2479,  2480,  2485,  2486,  2488,  2494,  2495,  2500,  2501,  2511,
    2517,  2521,  2527,  2533,  2539,  2551,  2557,  2561,  2573,  2577,
    2583,  2588,  2599,  2605,  2611,  2615,  2627,  2633,  2638,  2652,
    2657,  2661,  2666,  2670,  2676,  2688,  2700,  2712,  2719,  2723,
    2731,  2735,  2740,  2754,  2765,  2769,  2775,  2781,  2786,  2791,
    2796,  2801,  2806,  2811,  2816,  2821,  2826,  2833,  2838,  2843,
    2848,  2860,  2900,  2905,  2917,  2924,  2929,  2931,  2933,  2935,
    2947,  2955,  2959,  2966,  2972,  2979,  2986,  2993,  3000,  3007,
    3016,  3017,  3021,  3032,  3039,  3044,  3049,  3053,  3066,  3074,
    3076,  3087,  3093,  3104,  3108,  3115,  3120,  3126,  3131,  3140,
    3141,  3145,  3146,  3147,  3151,  3156,  3161,  3165,  3179,  3185,
    3192,  3199,  3206,  3216,  3219,  3227,  3231,  3238,  3253,  3256,
    3260,  3262,  3264,  3267,  3271,  3276,  3281,  3286,  3294,  3298,
    3303,  3314,  3316,  3333,  3335,  3352,  3356,  3358,  3371,  3372,
    3373,  3374,  3375,  3376,  3377,  3378,  3379,  3380,  3381,  3382,
    3383,  3384,  3385,  3386,  3387,  3388,  3389,  3390,  3391,  3392,
    3393,  3394,  3395,  3405,  3410,  3417,  3425,  3429,  3434,  3438,
    3442,  3446,  3451,  3458,  3461,  3466,  3470,  3475,  3477,  3479,
    3481,  3483,  3485,  3487,  3489,  3491,  3493,  3495,  3497,  3499,
    3501,  3503,  3505,  3507,  3509,  3511,  3513,  3515,  3518,  3520,
    3527,  3532,  3536,  3541,  3543,  3545,  3547,  3549,  3551,  3553,
    3555,  3557,  3559,  3561,  3563,  3565,  3567,  3569,  3571,  3573,
    3575,  3577,  3579,  3582,  3584,  3592,  3598,  3610,  3622,  3628,
    3634,  3638,  3643,  3647,  3652,  3658,  3669,  3676,  3680,  3685,
    3691,  3694,  3705,  3715,  3721,  3731,  3736,  3748,  3756,  3769,
    3773,  3787
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
  "INDEX", "STORING", "AUTO_INCREMENT", "CHUNKSERVER", "COMPRESS_METHOD",
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
  "cursor_declare_stmt", "cursor_name", "cursor_open_stmt",
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
     476,    59,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   233,   234,   235,   235,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   237,   237,
     238,   238,   238,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   243,   243,   244,   245,   245,   246,
     246,   247,   248,   248,   249,   249,   249,   249,   249,   249,
     250,   251,   252,   252,   252,   252,   253,   253,   254,   255,
     256,   256,   257,   258,   259,   260,   260,   261,   262,   262,
     262,   263,   264,   265,   266,   267,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   279,
     280,   281,   282,   283,   284,   284,   285,   285,   286,   286,
     287,   288,   288,   288,   288,   288,   288,   288,   288,   288,
     288,   288,   288,   288,   288,   288,   288,   288,   288,   288,
     288,   288,   289,   289,   289,   290,   290,   291,   291,   292,
     292,   293,   293,   294,   294,   295,   295,   295,   295,   295,
     296,   296,   296,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   298,   298,   299,   300,   300,   301,   301,
     302,   303,   303,   303,   304,   305,   305,   305,   306,   306,
     307,   307,   308,   308,   309,   309,   310,   310,   311,   311,
     312,   312,   313,   313,   314,   314,   314,   314,   315,   315,
     316,   316,   317,   318,   318,   318,   318,   319,   319,   319,
     320,   320,   320,   320,   320,   321,   321,   322,   322,   322,
     323,   323,   324,   324,   324,   324,   324,   324,   324,   325,
     325,   326,   326,   326,   326,   327,   327,   328,   328,   329,
     329,   330,   330,   330,   330,   330,   330,   330,   331,   331,
     332,   332,   333,   334,   334,   335,   336,   336,   336,   337,
     337,   338,   338,   338,   339,   339,   339,   339,   340,   340,
     341,   341,   342,   342,   342,   342,   342,   342,   342,   343,
     344,   344,   344,   345,   345,   345,   345,   346,   346,   347,
     348,   348,   348,   348,   349,   349,   350,   350,   350,   350,
     350,   350,   350,   350,   350,   350,   350,   350,   350,   350,
     350,   350,   351,   352,   352,   352,   353,   353,   353,   354,
     354,   354,   355,   355,   355,   356,   356,   357,   357,   358,
     359,   359,   360,   361,   362,   363,   364,   364,   365,   365,
     366,   366,   367,   368,   369,   369,   370,   371,   371,   372,
     372,   373,   373,   374,   374,   375,   376,   377,   378,   378,
     379,   379,   379,   380,   381,   381,   382,   382,   382,   382,
     382,   382,   382,   382,   382,   382,   382,   383,   383,   384,
     384,   385,   386,   386,   387,   388,   389,   389,   389,   389,
     390,   391,   391,   392,   392,   392,   392,   392,   392,   392,
     393,   393,   394,   395,   396,   396,   397,   397,   398,   399,
     399,   400,   400,   401,   401,   402,   402,   402,   402,   403,
     403,   404,   404,   404,   405,   405,   405,   405,   406,   406,
     406,   406,   406,   407,   407,   408,   408,   409,   410,   410,
     411,   411,   411,   411,   412,   412,   412,   412,   413,   413,
     413,   414,   414,   415,   415,   416,   417,   417,   418,   418,
     418,   418,   418,   418,   418,   418,   418,   418,   418,   418,
     418,   418,   418,   418,   418,   418,   418,   418,   418,   418,
     418,   418,   418,   419,   420,   420,   421,   421,   422,   422,
     422,   422,   423,   424,   424,   425,   425,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     427,   428,   428,   429,   429,   429,   429,   429,   429,   429,
     429,   429,   429,   429,   429,   429,   429,   429,   429,   429,
     429,   429,   429,   429,   429,   430,   430,   431,   432,   432,
     432,   432,   433,   433,   434,   435,   436,   437,   437,   438,
     439,   439,   440,   441,   442,   443,   443,   444,   444,   445,
     445,   446
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
       1,     2,     1,     1,    14,     4,     5,     4,     3,     2,
       0,     1,     1,     1,     1,     1,     1,     0,     1,     0,
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
       2,     1,     3,     3,     3,     4,     4,     5,     5,     3,
       1,     1,     1,     3,     2,     0,     1,     3,     3,     1,
       1,     4,     6,     1,     3,     3,     4,     4,     5,     1,
       0,     1,     1,     0,     3,     3,     3,     2,     4,     7,
       7,     6,     6,     0,     1,     1,     3,     9,     2,     0,
       3,     3,     3,     0,     1,     1,     1,     1,     3,     6,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     6,     5,     3,     1,     2,     3,
       3,     3,     3,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     1,     4,     6,     3,     9,     8,
       8,     7,     1,     2,     4,     2,     7,     2,     1,     4,
       0,     2,     5,     7,     1,     2,     2,     5,     4,     5,
       3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      47,     0,     0,     0,     0,     0,     0,     0,   420,   420,
       0,   479,     0,     0,     0,   480,     0,   365,     0,   251,
       0,     0,     0,   250,     0,   420,   428,   285,     0,   391,
       0,   285,     0,     0,     4,    24,    23,    22,     9,    10,
      11,    13,    14,    15,    16,    17,    18,    12,    21,    25,
      26,    20,     0,    19,   271,   248,   264,   321,   270,    27,
      28,    46,    35,    36,    37,    38,    39,    42,    43,    44,
      45,    40,    41,    29,    30,    31,    34,     0,    32,    33,
       5,     0,     6,     8,     7,   271,     0,   526,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   545,   544,   546,   547,   548,   549,
     550,   551,   552,     0,   153,   527,     0,   154,   155,   172,
     503,     0,     0,   419,   423,   425,     0,   175,     0,   175,
       0,   523,   395,   349,   524,   395,     0,   236,     0,   236,
     475,   455,   364,     0,   448,   437,   438,   440,   441,     0,
     443,   446,   445,   444,     0,   434,     0,     0,     0,   453,
     426,   429,   430,   289,   331,   521,     0,     0,     0,     0,
     411,     0,     0,   460,   461,     0,   522,   525,     0,     0,
       0,   398,   389,   392,   373,   390,     0,   392,     0,   411,
       0,   385,     0,     0,     0,     0,   422,     0,     1,     2,
      47,     0,     0,   260,   331,   331,   331,     0,     0,   309,
       0,   265,     0,   563,   553,   263,   262,     0,     0,   156,
     164,   165,   166,     0,     0,     0,   504,     0,     0,     0,
       0,     0,   403,     0,     0,     0,     0,   399,   400,     0,
       0,   277,   396,   376,   375,   640,     0,     0,     0,   406,
     405,   241,     0,   473,   361,   363,   362,   360,   359,   447,
     436,   439,   442,     0,     0,   382,     0,     0,   414,   412,
       0,     0,   431,   432,     0,     0,   300,   293,     0,   292,
       0,     0,     0,   287,   290,   332,   333,     0,   471,   470,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     641,     0,     0,     0,     0,     0,   380,   392,   366,     0,
       0,   379,   386,   392,     0,   377,   378,   392,   381,     0,
       0,   424,     0,     3,   253,   521,    53,    55,    54,    57,
      56,    58,    59,    61,    60,     0,     0,     0,     0,   118,
       0,     0,   538,    63,    64,    82,   249,    67,    68,    69,
       0,    70,    50,     0,   522,     0,     0,     0,     0,     0,
       0,   309,   266,   310,   478,     0,     0,     0,     0,     0,
       0,     0,     0,   285,     0,   634,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   564,   566,   571,   572,   567,   568,   570,   569,
     589,   588,     0,   638,     0,    48,   170,     0,     0,   498,
     505,     0,     0,     0,     0,     0,   490,   490,   490,   490,
     481,   483,     0,   417,   418,   416,     0,     0,     0,     0,
       0,     0,     0,   248,     0,   237,     0,   235,     0,   238,
     342,   347,     0,     0,   242,   472,   476,   474,   449,     0,
     450,   435,   459,   458,   457,   456,   454,     0,     0,   452,
       0,   427,     0,     0,     0,     0,     0,   286,     0,   291,
     337,   334,   338,   307,   469,   463,     0,     0,   410,     0,
       0,     0,   462,   464,   392,   392,   374,   393,   394,   370,
     392,   387,   371,   384,   372,     0,   129,   136,     0,   137,
       0,     0,     0,    48,     0,     0,     0,     0,     0,     0,
     246,   102,    83,    84,     0,    48,    70,   117,     0,    71,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   285,   271,   276,   270,   274,   275,
     326,   322,   323,   305,   306,   282,   283,   267,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   590,   592,   597,   593,
     594,   596,   595,   614,   613,   635,   636,     0,     0,     0,
       0,     0,   576,   575,   578,   579,   581,   582,   583,   585,
     584,   586,   587,   580,   574,   577,   573,   562,   565,   152,
     637,     0,     0,   167,     0,     0,     0,     0,     0,     0,
     489,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     555,     0,     0,     0,   557,   174,     0,   401,     0,     0,
       0,   278,   138,   639,   271,     0,   347,     0,     0,   346,
     358,   356,     0,   358,   358,     0,     0,   344,   407,     0,
       0,     0,     0,   413,   415,   451,     0,   298,   299,     0,
     304,   303,   302,   301,     0,     0,   288,     0,   335,     0,
       0,   308,   268,   465,     0,   404,   408,   466,     0,   369,
     368,   367,     0,     0,   124,     0,     0,     0,     0,     0,
       0,   126,     0,     0,     0,   128,   421,   277,   140,     0,
       0,   254,     0,     0,    65,     0,   123,   119,    62,   101,
     100,     0,     0,     0,    97,    95,    96,    94,    93,    92,
     113,    98,     0,     0,    72,     0,     0,   111,   114,   105,
     103,   107,     0,    85,    86,    87,    88,    89,    91,    90,
       0,   135,   134,   133,   132,    52,    51,   331,   327,   328,
     325,     0,     0,     0,     0,   185,   212,   188,   212,   198,
     200,   193,   204,   208,   206,   184,   183,   199,   204,   190,
     182,   210,   210,   181,   212,   212,     0,     0,   601,   600,
     603,   604,   606,   607,   608,   610,   609,   611,   612,   605,
     599,   602,   598,     0,   591,   168,   169,     0,     0,     0,
       0,     0,     0,   630,   628,     0,     0,   617,    49,   171,
     506,   509,   501,   502,     0,     0,   485,     0,     0,   493,
     482,     0,   490,   484,   409,   558,     0,     0,     0,   554,
       0,     0,     0,   176,   178,   402,     0,   279,   350,   239,
     345,   357,   353,     0,   354,   355,     0,   343,   240,   244,
     243,   477,   433,   297,     0,   295,     0,   336,   277,   277,
     340,   339,   467,   468,   388,   383,   315,     0,   316,     0,
     317,     0,     0,   311,   125,     0,   248,     0,   252,     0,
       0,   248,    49,     0,     0,   120,     0,    99,     0,   112,
      73,    74,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   106,   104,   108,   130,     0,   324,   280,   284,   281,
       0,   195,   194,     0,   186,   207,   191,     0,   189,   187,
       0,   201,   192,   196,   197,     0,   615,     0,     0,     0,
       0,     0,     0,     0,   157,     0,     0,     0,   627,     0,
       0,     0,     0,   513,   499,   500,   214,     0,     0,   487,
     491,   492,   486,     0,   559,   560,   561,   556,     0,   222,
       0,     0,   146,     0,     0,     0,     0,   296,   307,     0,
     318,   312,   313,   314,   127,   141,   139,   142,   247,   255,
     258,     0,     0,   245,    66,     0,   122,   116,     0,   109,
      75,    76,    77,    78,    79,    81,    80,   115,     0,     0,
       0,     0,     0,     0,     0,   632,   158,   160,   159,   161,
       0,     0,     0,   631,     0,     0,     0,     0,     0,   622,
       0,     0,   508,     0,     0,   180,     0,   497,     0,     0,
     488,     0,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   173,   220,   177,     0,     0,   150,   348,   352,
       0,     0,   269,   341,     0,   329,   256,     0,     0,   121,
     110,     0,   211,   203,     0,   205,   209,   616,     0,   162,
       0,   629,     0,     0,   625,     0,     0,   623,     0,     0,
     277,     0,     0,   216,     0,     0,     0,   218,   213,   495,
     494,   496,     0,   233,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   144,     0,   145,   143,   148,
     151,   351,     0,     0,     0,   273,   259,     0,     0,   633,
     163,   626,     0,   621,     0,     0,     0,   309,   512,   510,
     511,     0,   215,   217,   219,   179,   232,   229,   231,   224,
     223,   228,   227,   226,   225,   230,   221,     0,     0,     0,
     319,   330,   257,   202,   624,   619,     0,   620,   272,   516,
     517,   514,   515,   520,   147,   149,     0,   618,     0,     0,
     507,     0,     0,     0,     0,   518,     0,     0,     0,     0,
       0,   294,   519
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    32,    33,    34,   404,   343,   344,   345,   735,   471,
     737,   347,   518,   716,   717,   896,   348,   349,   350,   750,
     504,   560,   561,   707,   708,    37,   972,  1057,  1117,  1118,
    1119,   562,   113,   563,    40,   564,   565,   566,   567,   568,
     569,   570,    41,    42,    43,    44,   225,    45,    46,   571,
      48,   236,   842,   843,   844,   786,   924,   928,   926,   931,
     921,  1035,  1098,  1052,  1120,  1104,    49,   248,   437,    50,
     443,   858,   572,   203,    52,   509,   710,   891,   991,   573,
     351,    55,    56,    57,   574,    58,   433,   681,   164,   282,
     283,   284,   463,   674,   555,   682,   211,   505,  1065,   208,
     209,   551,   552,   760,  1125,   287,   472,   473,   869,   870,
     440,   441,   655,   852,    59,   258,   143,    60,    61,   315,
     311,   193,   306,   243,   194,    62,   237,   238,   249,   686,
      63,   250,    64,   295,    65,   268,   269,    66,   425,   124,
     321,    67,    68,    69,    70,   162,   274,    71,   154,   155,
     260,   449,    72,   271,    73,   140,   456,    74,   173,   174,
     290,   446,    75,   253,   447,    76,    77,    78,   420,   421,
     625,   962,   959,    79,   230,   409,   410,   953,  1034,  1173,
    1180,   352,   353,   195,   114,   354,    80,    81,   633,   634,
     214,   391,   392,   393,   575,   576,   577,   394,   578,   579,
    1028,  1029,  1030,   580,   813,   814,   949,   581,   582,   583,
     584,    82,    83,    84
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -913
static const yytype_int16 yypact[] =
{
    3157,    22,  2769,    93,  2769,  2769,  2769,   -84,   -41,   -41,
     135,  -913,     5,  2849,  2849,   162,  2769,   -65,   585,  -913,
     147,  2769,   142,  -913,   585,   -41,   220,   225,  1308,   604,
     168,   225,   365,   -52,  -913,  -913,  -913,  -913,  -913,  -913,
    -913,  -913,  -913,  -913,  -913,  -913,  -913,  -913,  -913,  -913,
    -913,  -913,   253,  -913,    -5,   193,  -913,   121,    82,  -913,
    -913,  -913,  -913,  -913,  -913,  -913,  -913,  -913,  -913,  -913,
    -913,  -913,  -913,  -913,  -913,  -913,  -913,   245,  -913,  -913,
    -913,   330,  -913,  -913,  -913,   374,   377,  -913,  -913,  -913,
    -913,  -913,  -913,  -913,  -913,  -913,  -913,  -913,  -913,  -913,
    -913,  -913,  -913,  -913,  -913,  -913,  -913,  -913,  -913,  -913,
    -913,  -913,  -913,   373,  -913,  -913,   390,  -913,   491,  -913,
     288,  2849,   443,  -913,  -913,  -913,   452,   335,   443,   335,
    2849,  -913,   459,  -913,  -913,   459,    85,   344,   443,   344,
     278,  -913,  -913,    17,   314,  -913,   289,  -913,  -913,   350,
    -913,  -913,  -913,  -913,   -60,  -913,  2849,   399,   443,   -20,
    -913,  -913,   223,    60,   263,  -913,    26,    26,  2892,   472,
     409,  2892,   489,   304,  -913,    26,  -913,  -913,   539,    65,
     363,  -913,  -913,    25,  -913,  -913,   326,    25,   412,   447,
     337,   425,   334,   338,   367,   532,   376,  2849,  -913,  -913,
    3157,  2849,  2419,  -913,   263,   263,   263,   501,    -8,   224,
     387,  -913,  2769,   732,  -913,  -913,  -913,   468,  1704,   517,
     525,  -913,  -913,   587,   589,   543,  -913,  2892,   469,   429,
     388,   295,  -913,   195,   571,   593,  2849,   382,  -913,   492,
    2849,   422,  -913,  -913,  -913,  -913,   522,   526,  2097,  -913,
     400,  2849,   617,  -913,  -913,  -913,  -913,  -913,  -913,  -913,
    -913,  -913,  -913,  2541,   585,  -913,    17,   446,  -913,   404,
    2541,   527,  -913,  -913,   634,   600,  -913,  -913,   601,  -913,
     603,   608,     1,    60,  -913,  -913,  -913,  1796,  -913,  -913,
    2419,  2419,    26,  2892,   443,   620,    26,  2892,  2571,  2419,
    -913,  2849,  2849,  2849,   645,  2419,  -913,    25,  -913,  2849,
      73,  -913,  -913,    25,   648,  -913,  -913,    25,  -913,  1131,
     573,  -913,   487,  -913,    28,   101,  -913,  -913,  -913,  -913,
    -913,  -913,  -913,  -913,  -913,  2419,  2419,  2419,  1953,  2419,
     621,   618,   623,  -913,  -913,  -913,  3612,  -913,  -913,  -913,
     624,  -913,  -913,   625,   626,    62,    62,    62,  2419,   113,
     113,   555,  -913,  -913,  -913,  2596,  2419,   789,   438,   441,
    2769,  2419,  2419,  1671,  2571,  -913,   445,   450,   453,   455,
     462,   467,   473,   474,   477,   480,   482,   484,   490,   493,
     494,   575,   732,  -913,  -913,  -913,  -913,  -913,  -913,  -913,
    -913,  -913,    22,  -913,   -16,  3612,  -913,   510,   685,   471,
    -913,   676,   694,   696,   582,   588,   643,   643,   643,    84,
     499,  -913,   660,  -913,  -913,  -913,   524,   629,   697,   443,
     665,   598,  2029,   193,   741,  -913,  1333,   513,  2621,   268,
    2663,  -913,   443,   171,  -913,  -913,  -913,   514,  -913,   558,
    -913,  -913,  -913,  -913,  -913,  -913,  -913,   443,   443,  -913,
     443,  -913,   747,    -3,  2849,   211,  2849,  -913,    60,  -913,
    -913,  1375,  -913,   221,  3612,  3612,  2419,    26,  -913,   749,
    2419,    26,  -913,  3612,    25,    25,  -913,  -913,  3612,  -913,
      25,   714,  -913,   531,  -913,   723,  -913,  -913,  2186,  -913,
    2262,  2343,     3,   962,  2419,   725,   595,  2892,  1441,   576,
    -913,  2909,  -913,  -913,   538,  3540,   306,  3612,   577,  -913,
    2892,  2419,  2419,   118,  2419,  2419,  2419,  2419,  2419,  2419,
    2419,  2419,  2500,   733,   535,  2419,  2419,  2419,  2419,  2419,
    2419,  2419,    17,  2698,   225,  -913,   761,  -913,   761,  -913,
    3461,   547,  -913,  -913,  -913,   -69,   657,  -913,  3097,  3482,
     561,   562,   564,   565,   567,   568,   569,   586,   591,   592,
     597,   599,   611,   612,   616,   691,   789,  -913,  -913,  -913,
    -913,  -913,  -913,  -913,  -913,  -913,  -913,   433,  1590,  2982,
     -57,   257,  -913,  -913,  -913,  -913,  -913,  -913,  -913,  -913,
    -913,  -913,  -913,  -913,  -913,  -913,  -913,  -913,  -913,  -913,
    -913,  2419,   797,  -913,  2892,   503,   802,   803,   794,   795,
    -913,  2892,  2892,  2892,  2849,  2892,   378,   749,  3262,   806,
    -913,   810,   812,    23,  -913,  -913,  2742,  -913,   749,  2849,
    2419,  3612,  -913,  -913,  1867,   268,   790,  2097,  2849,  -913,
     688,  -913,  2097,   688,   688,   707,  2849,  -913,  -913,  2849,
    2849,   617,   443,  -913,  -913,   400,   807,  -913,  -913,   628,
    -913,  -913,  -913,  -913,   808,  2849,    60,  2769,  -913,  1638,
    1796,  -913,  -913,  3612,  2419,  -913,  -913,  3612,  2419,  -913,
    -913,  -913,   809,   847,  -913,  2419,  1731,  2419,  2120,  2419,
    3440,  -913,  3262,  2419,  3564,  -913,  -913,   -93,  -913,   829,
      24,  -913,   815,  2419,  -913,  2419,   -35,  -913,  -913,  1917,
    2909,  2419,  2500,   733,  1296,  1296,  1296,  1296,  1296,  1296,
    1351,  1210,  2500,  2500,  -913,   838,  1953,  -913,  -913,  -913,
    -913,  -913,   529,   563,   563,   820,   820,   820,   820,  -913,
     822,  -913,  -913,  -913,  -913,  -913,  -913,   263,  -913,  -913,
    -913,  2419,   113,   113,   113,  -913,   821,  -913,   821,  -913,
    -913,  -913,   824,   715,   827,  -913,  -913,  -913,   824,  -913,
    -913,   828,   828,  -913,   821,   821,   -38,   789,  -913,  -913,
    -913,  -913,  -913,  -913,  -913,  -913,  -913,  -913,  -913,  -913,
    -913,  -913,  -913,   830,  -913,   750,   753,   754,   757,   872,
     617,   817,  2419,   -29,  -913,   789,   617,  -913,  3612,  -913,
    -913,   813,  -913,  -913,   882,   886,  -913,  3262,   -14,     2,
    -913,   703,   643,  -913,  -913,  -913,  3262,  3262,  3262,  -913,
     451,   764,    38,  -913,  -913,  -913,   856,  3612,   832,   268,
    -913,  -913,  -913,   605,  -913,  -913,  2097,  -913,  -913,  -913,
    -913,  -913,   400,  -913,  2849,  -913,   868,  -913,   422,   -90,
     268,  -913,  3612,  3612,  -913,  -913,  3612,  2419,  3612,  2419,
    3612,  2419,   871,  3612,  -913,  2892,   193,  2419,    22,  2892,
    2419,   -45,  3588,  3003,  2419,  -913,   811,  1210,   870,  -913,
    -913,  -913,  2500,  2500,  2500,  2500,  2500,  2500,  2500,  2500,
      42,  -913,  -913,  -913,  -913,  1796,  -913,  -913,  -913,  -913,
     892,  -913,  -913,   906,  -913,  -913,  -913,   910,  -913,  -913,
     912,  -913,  -913,  -913,  -913,   503,  -913,   816,   687,   617,
     617,   617,   617,   792,   514,   916,  3105,   789,  -913,   823,
     280,   -21,   919,   759,  -913,  -913,  -913,   120,   297,  -913,
    -913,  -913,  -913,  2769,  -913,  -913,  -913,  -913,   885,   381,
    2742,  2892,   722,  2849,  2419,   672,   698,  -913,    -8,  2097,
     825,  3612,  3612,  3612,  -913,  -913,  -913,  3612,  -913,  -913,
    3612,    44,   888,  -913,  -913,  2419,  3612,  -913,  2500,   989,
     590,   590,   893,   893,   893,   893,  -913,  -913,   -10,   903,
      46,   905,   907,   716,   901,  -913,   514,   514,   514,   514,
     617,   831,   789,  -913,   873,  2419,   789,   833,   282,  -913,
     848,  2097,  -913,   929,   736,    56,   950,  -913,   952,   503,
    -913,  2892,   940,   940,   940,   940,   940,   940,   940,   940,
     940,   940,   734,  -913,  -913,    48,   925,   381,  -913,  3612,
    2419,  2849,  -913,   268,   897,   854,  -913,  2419,  2419,  3612,
     989,  2097,  -913,  -913,   969,  -913,  -913,  -913,   744,   514,
     617,  -913,   745,  3126,  -913,   771,   843,  -913,   875,   879,
     -90,   240,   980,  -913,   995,   503,   876,  -913,  -913,  -913,
    -913,  -913,    50,  -913,  1002,  1005,   835,  1007,  1008,  1010,
    1011,  1012,  1013,  1020,   381,  -913,  2892,  -913,   781,  -913,
    -913,  3612,   977,  2419,  2419,  -913,  3612,    52,   990,  -913,
     514,  -913,   789,  -913,   801,   911,   805,   555,  -913,  -913,
    -913,   228,  -913,  -913,  -913,  -913,  -913,  -913,  -913,  -913,
    -913,  -913,  -913,  -913,  -913,  -913,  -913,    53,   381,  2849,
     814,  3612,  -913,  -913,  -913,  -913,   818,  -913,  -913,  -913,
    -913,  -913,  -913,   -18,  -913,  -913,   826,  -913,  1014,  1016,
    -913,  2849,  1029,  1033,   999,  -913,   834,  2849,  1021,  1003,
    1042,  -913,  -913
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -913,  -913,  -913,   850,  -310,  -913,  -595,  -381,  -147,   752,
     325,  -913,  -913,  -913,   336,  -913,  1025,  -913,  -913,  -913,
    -913,    27,    31,  -913,   170,  -913,  -913,  -913,  -913,  -913,
     -97,    30,    29,    45,  -913,  -174,  -172,  -153,  -133,  -105,
    -104,  -103,  -913,  -913,  -913,  -913,   475,  -913,  -913,    47,
    -913,   927,  -913,    90,   442,  -585,   286,  -913,  -913,   283,
    -664,  -913,  -913,  -913,  -911,  -110,  -913,   928,  -913,  -913,
    -913,  -913,    37,  -412,  -913,  -913,  -912,  -913,     0,     6,
      54,    12,  -913,    18,  -102,   128,  -684,   862,    -9,  -913,
     607,  -259,  -913,  -913,  -331,    94,  -208,  -913,  -913,  -913,
    -913,  -913,   316,  -913,  -913,  -189,   401,  -355,    55,  -240,
      68,   646,  -913,  -124,  -913,  -913,  -913,  -913,  -913,  -913,
    -913,  -913,  -136,   944,  -913,  -913,  -913,   654,   -53,  -493,
    -913,  -414,  -913,   895,  -913,   635,  -913,  -913,  -913,    89,
    -913,  -913,  -913,  -913,  -913,  -913,  -913,  -913,  1068,   836,
    -913,   837,  -913,  -913,  -913,    51,  -913,  -913,   720,   799,
    -135,   434,  -913,  -913,  -358,  -913,  -913,  -913,  -913,   476,
      86,  -913,  -913,  -913,  -913,  -913,   485,  -913,  -913,  -913,
    -913,   189,    35,  -913,   -11,    -2,  -913,  -913,  -913,   258,
    -913,  -913,  -913,   709,  -745,  -913,   528,  -913,  -100,   -98,
    -913,    75,    77,   -86,  -913,   296,  -913,   -83,   -82,   -81,
     -80,  -913,  -913,  -913
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -526
static const yytype_int16 yytable[] =
{
     115,   362,   115,   115,   115,   141,    53,   558,   439,   502,
     141,   134,   134,    86,   115,   355,   356,   357,   590,   115,
     821,   642,   197,   886,   469,   610,   176,    35,   514,   556,
      38,    36,   291,   117,   118,   119,  -261,    51,   667,   380,
     299,   381,   937,   835,   701,    39,   665,    47,   133,   133,
     288,   308,   199,   304,    54,    85,   935,     1,  1053,  1055,
     382,  1178,     1,   275,   839,   888,  1093,   894,   508,   233,
     950,   816,   157,   947,   762,   239,  1094,   232,   960,   969,
     383,   132,   135,  1007,   263,  1066,   957,  1073,   245,  1115,
    1031,  1145,   120,  1162,  1174,   301,   116,   121,   125,  -261,
     276,  1071,     1,   432,   922,   267,   432,   122,   384,   385,
     386,   390,    12,   395,   160,   396,   130,   882,   553,   134,
     933,   934,   467,  -309,   270,   554,   359,   397,   134,  1102,
     398,   399,   400,   401,   834,   360,   204,   205,   206,   885,
    1036,  -525,   979,  -523,    19,   845,   721,   722,   723,   257,
    1095,   734,   202,   557,   134,   958,   133,   476,   123,   961,
     491,   480,   715,   763,   142,   133,   176,   620,   812,   176,
     254,   489,   264,    23,   255,   680,   302,   492,   126,   200,
     256,   494,   277,    27,   978,   980,  -309,   992,    27,   231,
     278,   133,   210,   936,    27,   134,   645,    54,   241,   134,
    1179,   141,  1023,  1156,  1157,   136,    53,    31,  1096,   246,
     115,   661,   264,   279,  1037,   289,   611,   175,   380,   389,
     381,   305,   680,   280,   265,   176,  -261,    35,   544,   668,
      38,    36,   133,   468,   134,   611,   133,    51,   134,   382,
     376,   478,   956,   378,   377,    39,   134,    47,   862,   134,
     388,   964,   965,   966,    54,   840,   889,   478,   379,   383,
     387,   134,  1097,   364,   281,   322,   207,    54,   134,   324,
     970,   133,   455,   624,   611,   133,  1067,  1081,  1074,  -309,
     889,  1084,   889,   133,  1067,   889,   133,   384,   385,   386,
     390,   176,   395,   452,   396,   176,   176,   453,   450,   134,
     134,   134,   438,   454,   428,   450,   397,   134,   431,   398,
     399,   400,   401,  -309,  1138,   659,   127,  1038,   422,   444,
      54,  -271,  -271,  -271,   670,  1025,   128,  1025,   156,   285,
     510,   423,   679,   158,   210,   161,   133,   133,   133,   129,
    1013,   734,   684,   137,   133,   163,   688,   215,   689,   690,
      86,   734,   734,   138,   691,   359,   196,   292,  -320,   416,
     296,   286,   417,   115,   360,   198,   139,  -320,   115,   484,
     485,   486,   176,   546,   548,   549,   239,   490,    54,  1139,
     650,   201,  1026,  1027,  1026,  1086,   671,  1164,   672,   658,
     202,  1039,   516,   651,   519,   418,   212,   652,   389,   587,
     213,   653,   226,   660,   663,   267,  1137,   849,   609,   545,
     545,   545,   853,  1140,   673,   215,   411,   469,   216,   376,
     424,    54,   378,   377,   272,   273,   910,   217,   654,   388,
     218,   917,   918,   919,   134,  1169,   134,   379,   134,   387,
    -271,  1170,   416,  1171,  1101,   417,    54,   232,    86,  -271,
     419,  -271,   944,   680,  1172,   234,    54,   227,   951,   235,
     678,  1042,   134,   242,   134,   628,   228,   229,   247,   115,
     252,   133,   259,   649,   986,   657,   414,   415,   418,   993,
     261,   629,   477,   547,   547,   547,   481,   175,   817,   298,
     644,   805,   806,   807,   808,   809,   262,   631,   632,   133,
    1143,   133,   621,   622,   623,   176,   176,   326,   327,   328,
     266,   329,   330,   331,   293,   332,   333,   334,   176,   294,
      86,   734,   734,   734,   734,   734,   734,   734,   734,   854,
     855,   297,   669,   832,   675,   757,   298,   911,   628,   912,
     913,   176,   300,   739,   303,   740,   741,   307,   754,   219,
     220,   221,   222,   223,   629,   742,   309,   310,   313,   314,
    1008,   810,    85,   175,   316,   630,   317,   318,   915,   751,
     631,   632,   319,   752,   320,   898,   358,   363,   402,   753,
    -168,  1016,  1017,  1018,  1019,   900,   901,   738,  -169,  1043,
    1044,  1045,   406,  1046,   407,  1047,    54,   537,   538,   539,
     540,   541,   224,  1048,  1049,  1050,   408,   177,  1051,   413,
     412,   426,   176,   427,   429,   430,   975,   734,   432,   176,
     176,   176,   134,   176,   905,   906,   907,   908,   909,   434,
      54,   445,   442,   435,   176,   457,   458,   134,   460,   461,
     462,   464,   134,   465,   479,   134,   134,   178,   466,   487,
     134,   144,   145,   493,   134,   506,   507,   134,   134,   133,
     520,     1,  1079,  -131,   542,   210,   867,   543,  -524,   585,
     146,   341,   586,   134,   133,   115,   592,   134,   607,   649,
     147,   593,   133,   850,   594,   148,   595,   133,   179,   180,
     613,   857,   830,   596,   133,   133,   709,   711,   597,   612,
     615,   438,   149,   614,   598,   599,   438,   846,   600,   718,
     133,   601,   150,   602,   133,   603,   181,   650,   616,   182,
     617,   604,  1130,   618,   605,   606,   620,   859,   860,   619,
     651,   626,   756,   438,   652,   627,   635,   636,   653,  1063,
     638,   151,   639,   866,   643,   647,   661,   662,    86,   974,
     666,   152,   183,   685,   692,   999,  1000,  1001,  1002,  1003,
    1004,  1005,  1006,   693,   694,   654,   705,   706,   184,   712,
     713,   185,     1,   736,   715,   153,   365,   738,   206,   761,
     366,   367,   368,   369,   650,   186,   187,     4,   370,     6,
     516,   764,   788,   789,   803,   790,   791,   651,   792,   793,
     794,   652,   819,   411,  -397,   653,   822,   823,   188,   371,
     827,   828,   829,  1160,   831,   189,  1060,   795,   824,   825,
     836,   190,   796,   797,   837,   827,   838,    12,   798,     1,
     799,   848,   654,     2,   191,   851,   856,   366,   367,   368,
     369,    54,   800,   801,     4,   370,     6,   802,   863,   865,
     874,  1070,   875,   887,   134,   890,   372,   902,   541,    19,
     864,   920,   134,   914,   923,   925,   371,   927,   930,    54,
     903,   904,   905,   906,   907,   908,   909,   943,   939,   938,
     945,   940,   941,   176,    12,   942,   954,   176,    23,   998,
     955,   133,   963,   952,   988,   968,   971,  1009,   373,   133,
     973,   374,   903,   904,   905,   906,   907,   908,   909,   977,
     438,  1010,   984,   372,   997,  1011,    19,  1012,  1015,  1014,
    1020,  1021,    31,  1032,  1033,  1041,  1024,  1056,  1068,  1168,
    1061,   909,   976,  1105,  1106,  1107,  1108,  1109,  1110,  1111,
    1112,  1113,    54,  1064,  1072,    23,  1075,  1077,  1076,  1078,
    1082,  1089,  1040,  1091,   346,   373,  1092,  1085,   374,  1080,
    1099,   115,  1100,   375,  1103,  1116,  1114,  1134,   176,   176,
     405,   134,  1123,  1124,  1128,  1129,  1131,   134,  1135,    31,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,    54,  1133,  1136,  1141,  1142,  1146,  1144,  1058,  1147,
    1148,  1149,  1150,  1158,   133,  1151,  1152,  1153,  1154,  1159,
     375,   903,   904,   905,   906,   907,   908,   909,  1155,   134,
     702,  1163,  1165,   438,  1185,  1166,  1167,  1186,  1182,   176,
    1183,  1187,   474,   475,  1191,  1190,   611,  1192,   899,  1177,
     323,   483,   895,  1188,   192,   985,   240,   488,  1181,   134,
    1054,  1175,   811,   826,   929,   932,   133,   251,  1127,   134,
     361,   503,  1062,   703,   709,   676,    54,   916,   989,   244,
      54,   871,   646,   637,   312,   438,  1090,   511,   512,   513,
     515,   517,   159,   664,   591,   861,   133,   482,   967,   820,
     451,   608,   833,  1087,   804,  1088,   133,   459,     0,   948,
     550,     0,     0,     0,   176,     0,     0,     0,   559,     0,
       0,     0,     0,   588,   589,   438,     0,     0,     0,  1122,
       0,     0,     0,     0,   325,   326,   327,   328,     0,   329,
     330,   331,     0,   332,   333,   334,     0,     0,     0,     0,
       0,   335,     0,     0,     0,     0,     0,   134,     0,   827,
     711,     0,     0,   336,   337,   495,     0,     0,     0,     0,
       0,   338,   496,     0,     0,     0,     0,     0,     0,   134,
       0,     0,     0,     0,   641,   134,    54,     0,     0,     0,
       0,     0,     0,     0,   133,     0,     0,   497,     0,     0,
       0,     0,     0,     0,     0,   498,     0,     0,   339,     0,
       0,     0,     0,     0,     0,     0,   133,     0,     0,     0,
       0,     0,   133,     0,     0,     0,     0,  1176,   683,   499,
     711,     0,   687,     0,     0,     0,     0,     0,   340,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,  1184,
     696,     0,   698,   700,     0,  1189,   704,     0,     0,     0,
       0,     0,     0,   500,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   719,   720,     0,   724,   725,   726,   727,
     728,   729,   730,   731,     0,     0,     0,   743,   744,   745,
     746,   747,   748,   749,     0,     0,     0,     0,     0,   341,
       0,     0,     0,     0,     0,   711,     0,     0,     0,     0,
       0,   165,     0,     0,     0,     0,     0,     0,   501,     0,
       0,   166,   167,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,     0,   131,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,   342,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,     0,   818,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   436,     0,     0,     0,     0,    87,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
       0,     0,   847,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   168,   169,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   872,     0,     0,     0,
     873,     0,     0,   677,   165,     0,     0,   876,     0,   878,
       0,   880,     0,     0,     0,   883,     0,   170,     0,     0,
       0,     0,     0,     0,     0,   892,     0,   893,     0,     0,
       0,     0,     0,   897,     0,   171,   172,     0,     0,     0,
       0,     1,     0,     0,     0,     0,     0,     0,   405,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   550,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   946,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,     0,    27,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   981,
       0,   982,     0,   983,     0,     0,     0,     0,     0,   987,
       0,   131,   990,     0,     0,     0,   996,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,     0,     0,   325,   326,   327,   328,   436,   329,
     330,   331,     0,   332,   333,   334,     0,     0,     0,     0,
       0,   335,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   336,   337,   470,     0,   325,   326,   327,
     328,   338,   329,   330,   331,     0,   332,   333,   334,     0,
       0,     0,     0,     0,   335,     0,  1059,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   336,   337,     0,   868,
       0,     0,     0,     0,   338,   403,     0,  1069,   339,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
       0,     0,     0,     0,     0,     0,     0,  1083,   340,     0,
       0,   339,     0,     0,     0,     0,     0,   812,     0,     0,
       0,   163,     0,     0,     0,     0,     0,     0,     0,   325,
     326,   327,   328,     0,   329,   330,   331,     0,   332,   333,
     334,   340,  1121,     0,     0,     0,   335,     0,     0,  1126,
     990,     0,     0,     0,     0,     0,     0,     0,   336,   337,
     470,     0,     0,     0,     0,     0,   338,     0,     0,   341,
       0,     0,   877,     0,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,     0,
     131,     0,   341,   339,     0,   405,  1161,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,   342,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,     0,   340,     0,     0,     0,     0,   215,     0,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
     342,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   648,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   325,   326,   327,   328,
       0,   329,   330,   331,   341,   332,   333,   334,     0,     0,
       0,     0,     0,   335,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   336,   337,     0,     0,     0,
       0,     0,     0,   338,     0,     0,     0,     0,     0,     0,
       0,     0,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   342,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,     0,     0,     0,
     339,     0,   325,   326,   327,   328,   640,   329,   330,   331,
       0,   332,   333,   334,     0,     0,     0,     0,     0,   335,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     340,   336,   337,     0,     0,     0,     0,     0,     0,   338,
       0,     0,     0,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,     0,     0,
     131,     0,     0,     0,     0,     0,   339,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,   341,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   340,   436,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,   342,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,     0,     0,     0,     0,     0,   325,
     326,   327,   328,     0,   329,   330,   331,   341,   332,   333,
     334,     0,     0,     0,     0,     0,   335,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   336,   337,
       0,     0,     0,     0,     0,     0,   338,     0,     0,     0,
       0,   879,     0,     0,     0,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,   342,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
       0,     0,     0,   339,     0,   325,   326,   327,   328,     0,
     329,   330,   331,     0,   332,   333,   334,     0,     0,     0,
       0,     0,   335,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   340,   336,   337,     0,   695,     0,     0,
       0,     0,   338,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   339,
       0,     0,     0,     0,     0,     0,   325,   326,   327,   328,
       0,   329,   330,   331,   341,   332,   333,   334,     0,     0,
       0,     0,     0,   335,     0,     0,     0,     0,     0,   340,
       0,     0,     0,   697,     0,   336,   337,     0,     0,     0,
       0,     0,     0,   338,     0,     0,     0,     0,     0,     0,
       0,     0,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   342,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,     0,     0,     0,
     339,     0,   325,   326,   327,   328,     0,   329,   330,   331,
     341,   332,   333,   334,     0,     0,     0,     0,     0,   335,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     340,   336,   337,     0,   699,     0,     0,     0,     0,   338,
       0,     0,     0,     0,     0,     0,     0,     0,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,   342,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,     0,     0,     0,   339,     0,     0,     0,
       0,     0,     0,   325,   326,   327,   328,     0,   329,   330,
     331,   341,   332,   333,   334,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   340,     0,     0,     0,
       0,     0,   732,   733,     0,     0,     0,     0,     0,     0,
     338,     0,     0,     0,   131,     0,     0,     0,     0,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,   342,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   165,   448,     0,   339,     0,     0,
       0,     0,     0,     0,   166,   167,     0,   341,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,   340,     0,     0,
     445,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   131,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,   342,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   131,     0,   341,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   168,   169,     0,   648,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   165,     0,     0,     0,     0,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,   342,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   656,   755,     0,     0,     0,     0,     0,   171,   172,
       0,     0,     0,     0,     0,   165,     0,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,    87,     0,     0,     0,     0,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   131,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   841,   165,     0,     0,     0,     0,
       0,     0,     0,     0,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   523,
     524,   525,   526,   527,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,     0,     0,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   815,     0,     0,   765,   766,
     767,     0,     0,     0,     0,   768,     0,     0,     0,     0,
       0,     0,     0,   769,     0,     0,   995,   770,   771,     0,
     772,     0,     0,     0,     0,     0,   773,     1,     0,     0,
       0,     2,     0,     0,     0,     0,   774,     0,     0,     0,
       3,     0,     4,     5,     6,     0,     0,     0,     0,     0,
       0,     0,     0,   775,     7,     0,     0,     8,     0,     0,
       0,     0,     0,     0,     0,   776,     0,   777,     9,   778,
       0,     0,    10,     0,     0,     0,     0,     0,     0,    11,
       0,   779,    12,    13,    14,     0,     0,    15,     0,     0,
       0,     0,     0,    16,     0,    17,     0,     0,   780,     0,
       0,     0,     0,     0,    18,     0,     0,     0,     0,     0,
       0,   781,   782,   783,    19,     0,     0,     0,  1022,     0,
       0,   784,   785,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,  1132,
       0,     0,    22,    23,     0,     0,    24,     0,    25,    26,
       0,     0,     0,    27,     0,     0,    28,    29,     0,   661,
       0,    30,     0,   765,   766,   767,     0,     0,     0,     0,
     768,     0,     0,     0,     0,     0,     0,    31,   769,     0,
       0,     0,   770,   771,     0,   772,     0,     0,     0,     0,
       0,   773,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   774,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   775,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     776,     0,   777,     0,   778,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   779,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   780,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   781,   782,   783,     0,
       0,     0,     0,     0,     0,     0,   784,   785,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     758,     0,     0,     0,   787,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   881,     0,     0,     0,     0,     0,   759,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,     0,
       0,   714,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,     0,     0,   884,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,     0,     0,   994,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541
};

static const yytype_int16 yycheck[] =
{
       2,   209,     4,     5,     6,    16,     0,   365,   248,   319,
      21,    13,    14,     1,    16,   204,   205,   206,   373,    21,
     615,   433,    31,   707,   283,    41,    28,     0,   338,   360,
       0,     0,   167,     4,     5,     6,    41,     0,    41,   213,
     175,   213,   787,   628,    41,     0,   460,     0,    13,    14,
      24,   187,   104,    28,     0,     1,    94,    40,   969,   971,
     213,    79,    40,     3,    41,    41,    10,   102,    40,   122,
     815,   128,    21,   102,   143,   128,    20,     4,    76,    41,
     213,    13,    14,    41,   144,    41,   100,    41,     3,    41,
     111,    41,   176,    41,    41,    30,     3,   181,     9,   104,
      40,   111,    40,   196,   768,   158,   196,   191,   213,   213,
     213,   213,    95,   213,    25,   213,   111,   702,     5,   121,
     784,   785,   121,    41,   144,    12,   134,   213,   130,  1041,
     213,   213,   213,   213,   627,   143,    15,    16,    17,   232,
      20,    40,   232,    42,   127,   638,    28,    29,    30,   143,
      94,   532,   197,   361,   156,   169,   121,   292,   199,   157,
      87,   296,   197,   232,   229,   130,   168,    83,   197,   171,
     143,   307,   232,   156,   143,   232,   111,   313,    43,   231,
     143,   317,   122,   166,   868,   869,   104,   232,   166,   121,
     130,   156,   110,   231,   166,   197,   436,   143,   130,   201,
     218,   212,   947,  1114,  1116,    43,   200,   190,   152,   124,
     212,   232,   232,   153,    94,   189,   232,    28,   392,   213,
     392,   196,   232,   163,   156,   227,   231,   200,   166,   232,
     200,   200,   197,   232,   236,   232,   201,   200,   240,   392,
     213,   294,   827,   213,   213,   200,   248,   200,   662,   251,
     213,   836,   837,   838,   200,   232,   232,   310,   213,   392,
     213,   263,   206,   212,   204,   197,   145,   213,   270,   201,
     232,   236,   266,   189,   232,   240,   232,  1022,   232,   197,
     232,  1026,   232,   248,   232,   232,   251,   392,   392,   392,
     392,   293,   392,   266,   392,   297,   298,   266,   263,   301,
     302,   303,   248,   266,   236,   270,   392,   309,   240,   392,
     392,   392,   392,   231,    74,   144,   181,    20,   123,   251,
     266,    15,    16,    17,   113,    45,   191,    45,   181,    66,
     324,   136,   111,   191,   110,   115,   301,   302,   303,   204,
     935,   722,   477,   181,   309,   120,   481,    41,   484,   485,
     338,   732,   733,   191,   490,   134,   188,   168,   134,    64,
     171,    98,    67,   365,   143,     0,   204,   143,   370,   301,
     302,   303,   374,   355,   356,   357,   429,   309,   324,   139,
     112,   128,   102,   103,   102,   103,   175,  1132,   177,   442,
     197,    94,   338,   125,   340,   100,   151,   129,   392,   370,
      70,   133,   114,   232,   457,   458,  1090,   647,   402,   355,
     356,   357,   652,   173,   203,    41,   227,   676,    41,   392,
     225,   367,   392,   392,   201,   202,   736,    54,   160,   392,
      40,   762,   763,   764,   436,   207,   438,   392,   440,   392,
     134,   213,    64,   215,  1039,    67,   392,     4,   436,   143,
     155,   145,   810,   232,   226,     3,   402,   169,   816,   124,
     471,    80,   464,     4,   466,    14,   178,   179,   124,   471,
     192,   436,   158,   438,   886,   440,    88,    89,   100,   891,
     191,    30,   293,   355,   356,   357,   297,   298,   231,   232,
     436,    58,    59,    60,    61,    62,   146,    46,    47,   464,
    1095,   466,   416,   417,   418,   507,   508,     4,     5,     6,
     111,     8,     9,    10,    42,    12,    13,    14,   520,   110,
     508,   902,   903,   904,   905,   906,   907,   908,   909,   653,
     654,    42,   464,   155,   466,   544,   232,     8,    14,    10,
      11,   543,     3,     8,   181,    10,    11,   221,   542,    58,
      59,    60,    61,    62,    30,    20,   144,   110,   221,   134,
     915,   128,   508,   374,   230,    41,   228,   200,   757,   542,
      46,    47,    40,   542,   198,   722,    75,   190,   110,   542,
      63,   939,   940,   941,   942,   732,   733,   533,    63,   208,
     209,   210,     5,   212,     5,   214,   542,    34,    35,    36,
      37,    38,   111,   222,   223,   224,    63,     3,   227,   180,
     141,    40,   614,    20,   232,   123,   856,   998,   196,   621,
     622,   623,   624,   625,    34,    35,    36,    37,    38,   107,
     576,    14,   232,   107,   636,   189,   232,   639,   111,     5,
      40,    40,   644,    40,    24,   647,   648,    43,    40,     4,
     652,    66,    67,     5,   656,    82,   169,   659,   660,   624,
      42,    40,  1020,    40,    40,   110,   677,    42,    42,   231,
      85,   168,   231,   675,   639,   677,   231,   679,   103,   644,
      95,   231,   647,   648,   231,   100,   231,   652,    84,    85,
       5,   656,   624,   231,   659,   660,   507,   508,   231,   189,
      24,   647,   117,   232,   231,   231,   652,   639,   231,   520,
     675,   231,   127,   231,   679,   231,   112,   112,    24,   115,
      24,   231,  1080,   141,   231,   231,    83,   659,   660,   141,
     125,   232,   543,   679,   129,    75,   107,    40,   133,   979,
      75,   156,   144,   675,     3,   232,   232,   189,   736,   144,
       3,   166,   148,     4,    40,   902,   903,   904,   905,   906,
     907,   908,   909,   232,    41,   160,    41,   172,   164,   193,
     232,   167,    40,    40,   197,   190,    44,   723,    17,   232,
      48,    49,    50,    51,   112,   181,   182,    55,    56,    57,
     736,   134,   231,   231,   103,   231,   231,   125,   231,   231,
     231,   129,     5,   614,   200,   133,     4,     4,   204,    77,
     621,   622,   623,  1123,   625,   211,   144,   231,    24,    24,
      14,   217,   231,   231,    14,   636,    14,    95,   231,    40,
     231,    41,   160,    44,   230,   147,   129,    48,    49,    50,
      51,   787,   231,   231,    55,    56,    57,   231,    41,    41,
      41,   998,     5,    24,   856,    40,   124,    19,    38,   127,
     232,    40,   864,    41,    40,   150,    77,    40,    40,   815,
      32,    33,    34,    35,    36,    37,    38,     5,   128,    49,
      63,   128,   128,   885,    95,   128,     4,   889,   156,    19,
       4,   856,   189,    80,   888,   131,    40,     5,   166,   864,
      68,   169,    32,    33,    34,    35,    36,    37,    38,    41,
     856,     5,    41,   124,   103,     5,   127,     5,   231,   103,
     128,     5,   190,     4,   165,    40,   103,   205,    40,  1137,
     232,    38,   864,  1043,  1044,  1045,  1046,  1047,  1048,  1049,
    1050,  1051,   888,   118,    41,   156,    41,   231,    41,    48,
      77,   103,   963,    24,   202,   166,   220,   124,   169,   128,
      10,   963,    10,   231,    24,    40,   232,   124,   970,   971,
     218,   973,    75,   119,     5,   231,   231,   979,   103,   190,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,   947,   231,   124,    24,    10,     4,   131,   973,     4,
     175,     4,     4,   232,   979,     5,     5,     5,     5,    42,
     231,    32,    33,    34,    35,    36,    37,    38,     8,  1031,
      68,    41,   231,   979,     5,   124,   231,     4,    24,  1041,
      24,    42,   290,   291,    41,    24,   232,     5,   723,   231,
     200,   299,   716,   219,    29,   885,   129,   305,   232,  1061,
     970,  1158,   587,   621,   778,   782,  1031,   139,  1068,  1071,
     208,   319,   978,   111,   885,   468,  1022,   761,   889,   135,
    1026,   680,   436,   429,   189,  1031,  1031,   335,   336,   337,
     338,   339,    24,   458,   374,   661,  1061,   298,   840,   614,
     264,   392,   626,  1028,   576,  1028,  1071,   270,    -1,   813,
     358,    -1,    -1,    -1,  1116,    -1,    -1,    -1,   366,    -1,
      -1,    -1,    -1,   371,   372,  1071,    -1,    -1,    -1,  1061,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    10,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,  1159,    -1,   970,
     971,    -1,    -1,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,  1181,
      -1,    -1,    -1,    -1,   432,  1187,  1132,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1159,    -1,    -1,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1181,    -1,    -1,    -1,
      -1,    -1,  1187,    -1,    -1,    -1,    -1,  1159,   476,    98,
    1041,    -1,   480,    -1,    -1,    -1,    -1,    -1,   107,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,  1181,
     498,    -1,   500,   501,    -1,  1187,   504,    -1,    -1,    -1,
      -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   521,   522,    -1,   524,   525,   526,   527,
     528,   529,   530,   531,    -1,    -1,    -1,   535,   536,   537,
     538,   539,   540,   541,    -1,    -1,    -1,    -1,    -1,   168,
      -1,    -1,    -1,    -1,    -1,  1116,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,   187,    -1,
      -1,    13,    14,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    -1,     3,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,    -1,   611,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,     3,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,    -1,   640,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   115,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   684,    -1,    -1,    -1,
     688,    -1,    -1,    68,     3,    -1,    -1,   695,    -1,   697,
      -1,   699,    -1,    -1,    -1,   703,    -1,   149,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   713,    -1,   715,    -1,    -1,
      -1,    -1,    -1,   721,    -1,   167,   168,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,   736,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   166,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   761,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   812,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,    -1,   166,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,   877,
      -1,   879,    -1,   881,    -1,    -1,    -1,    -1,    -1,   887,
      -1,     3,   890,    -1,    -1,    -1,   894,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,    -1,    -1,     3,     4,     5,     6,    40,     8,
       9,    10,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    34,    -1,     3,     4,     5,
       6,    40,     8,     9,    10,    -1,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    -1,   974,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,   101,
      -1,    -1,    -1,    -1,    40,    41,    -1,   995,    77,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1025,   107,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,   197,    -1,    -1,
      -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,    12,    13,
      14,   107,  1060,    -1,    -1,    -1,    20,    -1,    -1,  1067,
    1068,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,   168,
      -1,    -1,   111,    -1,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,    -1,
       3,    -1,   168,    77,    -1,  1123,  1124,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,    -1,   107,    -1,    -1,    -1,    -1,    41,    -1,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,    68,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,     3,     4,     5,     6,
      -1,     8,     9,    10,   168,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,    -1,    -1,    -1,
      77,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     107,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,    -1,    -1,
       3,    -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   166,
      -1,   168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   107,    40,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,   168,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,   111,    -1,    -1,    -1,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
      -1,    -1,    -1,    77,    -1,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,    32,    33,    -1,   111,    -1,    -1,
      -1,    -1,    40,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,   168,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,   107,
      -1,    -1,    -1,   111,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,    -1,    -1,    -1,
      77,    -1,     3,     4,     5,     6,    -1,     8,     9,    10,
     168,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     107,    32,    33,    -1,   111,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,   168,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,     3,    34,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    13,    14,    -1,   168,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,   168,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   115,   116,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    -1,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,    68,    34,    -1,    -1,    -1,    -1,    -1,   167,   168,
      -1,    -1,    -1,    -1,    -1,     3,    -1,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,     3,    -1,    -1,    -1,    -1,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   152,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,    -1,    -1,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,   183,    -1,    -1,    71,    72,
      73,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,   183,    90,    91,    -1,
      93,    -1,    -1,    -1,    -1,    -1,    99,    40,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,
      53,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   126,    67,    -1,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   138,    -1,   140,    81,   142,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      -1,   154,    95,    96,    97,    -1,    -1,   100,    -1,    -1,
      -1,    -1,    -1,   106,    -1,   108,    -1,    -1,   171,    -1,
      -1,    -1,    -1,    -1,   117,    -1,    -1,    -1,    -1,    -1,
      -1,   184,   185,   186,   127,    -1,    -1,    -1,   183,    -1,
      -1,   194,   195,    -1,   137,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   151,   183,
      -1,    -1,   155,   156,    -1,    -1,   159,    -1,   161,   162,
      -1,    -1,    -1,   166,    -1,    -1,   169,   170,    -1,   232,
      -1,   174,    -1,    71,    72,    73,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,   190,    86,    -1,
      -1,    -1,    90,    91,    -1,    93,    -1,    -1,    -1,    -1,
      -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     138,    -1,   140,    -1,   142,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   184,   185,   186,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   194,   195,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   111,    -1,    -1,    -1,    -1,    -1,    96,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    41,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    -1,    -1,    41,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    -1,    -1,    41,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    40,    44,    53,    55,    56,    57,    67,    70,    81,
      85,    92,    95,    96,    97,   100,   106,   108,   117,   127,
     137,   151,   155,   156,   159,   161,   162,   166,   169,   170,
     174,   190,   234,   235,   236,   254,   255,   258,   264,   266,
     267,   275,   276,   277,   278,   280,   281,   282,   283,   299,
     302,   305,   307,   312,   313,   314,   315,   316,   318,   347,
     350,   351,   358,   363,   365,   367,   370,   374,   375,   376,
     377,   380,   385,   387,   390,   395,   398,   399,   400,   406,
     419,   420,   444,   445,   446,   313,   314,     3,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   265,   417,   418,     3,   265,   265,   265,
     176,   181,   191,   199,   372,   372,    43,   181,   191,   204,
     111,     3,   343,   415,   418,   343,    43,   181,   191,   204,
     388,   417,   229,   349,    66,    67,    85,    95,   100,   117,
     127,   156,   166,   190,   381,   382,   181,   388,   191,   381,
     372,   115,   378,   120,   321,     3,    13,    14,   115,   116,
     149,   167,   168,   391,   392,   414,   418,     3,    43,    84,
      85,   112,   115,   148,   164,   167,   181,   182,   204,   211,
     217,   230,   249,   354,   357,   416,   188,   321,     0,   104,
     231,   128,   197,   306,    15,    16,    17,   145,   332,   333,
     110,   329,   151,    70,   423,    41,    41,    54,    40,    58,
      59,    60,    61,    62,   111,   279,   114,   169,   178,   179,
     407,   343,     4,   361,     3,   124,   284,   359,   360,   361,
     284,   343,     4,   356,   356,     3,   124,   124,   300,   361,
     364,   300,   192,   396,   254,   255,   305,   312,   348,   158,
     383,   191,   146,   144,   232,   343,   111,   361,   368,   369,
     144,   386,   201,   202,   379,     3,    40,   122,   130,   153,
     163,   204,   322,   323,   324,    66,    98,   338,    24,   189,
     393,   393,   414,    42,   110,   366,   414,    42,   232,   393,
       3,    30,   111,   181,    28,   196,   355,   221,   355,   144,
     110,   353,   366,   221,   134,   352,   230,   228,   200,    40,
     198,   373,   343,   236,   343,     3,     4,     5,     6,     8,
       9,    10,    12,    13,    14,    20,    32,    33,    40,    77,
     107,   168,   216,   238,   239,   240,   242,   244,   249,   250,
     251,   313,   414,   415,   418,   338,   338,   338,    75,   134,
     143,   320,   329,   190,   388,    44,    48,    49,    50,    51,
      56,    77,   124,   166,   169,   231,   254,   255,   264,   266,
     268,   269,   270,   271,   272,   273,   274,   282,   305,   312,
     317,   424,   425,   426,   430,   431,   432,   436,   440,   441,
     442,   443,   110,    41,   237,   242,     5,     5,    63,   408,
     409,   414,   141,   180,    88,    89,    64,    67,   100,   155,
     401,   402,   123,   136,   225,   371,    40,    20,   343,   232,
     123,   343,   196,   319,   107,   107,    40,   301,   313,   342,
     343,   344,   232,   303,   343,    14,   394,   397,    34,   384,
     415,   382,   254,   255,   305,   312,   389,   189,   232,   384,
     111,     5,    40,   325,    40,    40,    40,   121,   232,   324,
      34,   242,   339,   340,   242,   242,   393,   414,   361,    24,
     393,   414,   392,   242,   343,   343,   343,     4,   242,   355,
     343,    87,   355,     5,   355,    34,    41,    66,    74,    98,
     132,   187,   237,   242,   253,   330,    82,   169,    40,   308,
     312,   242,   242,   242,   237,   242,   313,   242,   245,   313,
      42,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    40,    42,   166,   313,   316,   318,   316,   316,
     242,   334,   335,     5,    12,   327,   327,   329,   397,   242,
     254,   255,   264,   266,   268,   269,   270,   271,   272,   273,
     274,   282,   305,   312,   317,   427,   428,   429,   431,   432,
     436,   440,   441,   442,   443,   231,   231,   265,   242,   242,
     340,   391,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   103,   426,   312,
      41,   232,   189,     5,   232,    24,    24,    24,   141,   141,
      83,   403,   403,   403,   189,   403,   232,    75,    14,    30,
      41,    46,    47,   421,   422,   107,    40,   360,    75,   144,
       7,   242,   306,     3,   313,   342,   344,   232,    68,   415,
     112,   125,   129,   133,   160,   345,    68,   415,   361,   144,
     232,   232,   189,   361,   368,   364,     3,    41,   232,   343,
     113,   175,   177,   203,   326,   343,   323,    68,   417,   111,
     232,   320,   328,   242,   393,     4,   362,   242,   393,   355,
     355,   355,    40,   232,    41,   111,   242,   111,   242,   111,
     242,    41,    68,   111,   242,    41,   172,   256,   257,   414,
     309,   414,   193,   232,    41,   197,   246,   247,   414,   242,
     242,    28,    29,    30,   242,   242,   242,   242,   242,   242,
     242,   242,    32,    33,   240,   241,    40,   243,   313,     8,
      10,    11,    20,   242,   242,   242,   242,   242,   242,   242,
     252,   254,   255,   305,   312,    34,   414,   321,    69,    96,
     336,   232,   143,   232,   134,    71,    72,    73,    78,    86,
      90,    91,    93,    99,   109,   126,   138,   140,   142,   154,
     171,   184,   185,   186,   194,   195,   288,    52,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   103,   429,    58,    59,    60,    61,    62,
     128,   279,   197,   437,   438,   183,   128,   231,   242,     5,
     409,   239,     4,     4,    24,    24,   287,   414,   414,   414,
     343,   414,   155,   402,   362,   288,    14,    14,    14,    41,
     232,   152,   285,   286,   287,   362,   343,   242,    41,   342,
     415,   147,   346,   342,   346,   346,   129,   415,   304,   343,
     343,   394,   364,    41,   232,    41,   343,   417,   101,   341,
     342,   339,   242,   242,    41,     5,   242,   111,   242,   111,
     242,   111,   288,   242,    41,   232,   319,    24,    41,   232,
      40,   310,   242,   242,   102,   247,   248,   242,   241,   243,
     241,   241,    19,    32,    33,    34,    35,    36,    37,    38,
     237,     8,    10,    11,    41,   338,   335,   327,   327,   327,
      40,   293,   293,    40,   289,   150,   291,    40,   290,   289,
      40,   292,   292,   293,   293,    94,   231,   427,    49,   128,
     128,   128,   128,     5,   397,    63,   242,   102,   438,   439,
     427,   397,    80,   410,     4,     4,   288,   100,   169,   405,
      76,   157,   404,   189,   288,   288,   288,   422,   131,    41,
     232,    40,   259,    68,   144,   342,   343,    41,   319,   232,
     319,   242,   242,   242,    41,   257,   306,   242,   312,   414,
     242,   311,   232,   306,    41,   183,   242,   103,    19,   241,
     241,   241,   241,   241,   241,   241,   241,    41,   340,     5,
       5,     5,     5,   239,   103,   231,   397,   397,   397,   397,
     128,     5,   183,   427,   103,    45,   102,   103,   433,   434,
     435,   111,     4,   165,   411,   294,    20,    94,    20,    94,
     417,    40,    80,   208,   209,   210,   212,   214,   222,   223,
     224,   227,   296,   297,   286,   309,   205,   260,   415,   242,
     144,   232,   328,   342,   118,   331,    41,   232,    40,   242,
     241,   111,    41,    41,   232,    41,    41,   231,    48,   397,
     128,   427,    77,   242,   427,   124,   103,   434,   435,   103,
     341,    24,   220,    10,    20,    94,   152,   206,   295,    10,
      10,   239,   309,    24,   298,   298,   298,   298,   298,   298,
     298,   298,   298,   298,   232,    41,    40,   261,   262,   263,
     297,   242,   343,    75,   119,   337,   242,   311,     5,   231,
     397,   231,   183,   231,   124,   103,   124,   319,    74,   139,
     173,    24,    10,   239,   131,    41,     4,     4,   175,     4,
       4,     5,     5,     5,     5,     8,   297,   309,   232,    42,
     237,   242,    41,    41,   427,   231,   124,   231,   329,   207,
     213,   215,   226,   412,    41,   263,   343,   231,    79,   218,
     413,   232,    24,    24,   343,     5,     4,    42,   219,   343,
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
      case 234: /* "sql_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 235: /* "stmt_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 236: /* "stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 237: /* "expr_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 238: /* "column_ref" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 239: /* "expr_const" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 240: /* "simple_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 241: /* "arith_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 242: /* "expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 243: /* "in_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 244: /* "case_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 245: /* "case_arg" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 246: /* "when_clause_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 247: /* "when_clause" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 248: /* "case_default" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 249: /* "func_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 250: /* "when_func" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 251: /* "when_func_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 252: /* "when_func_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 253: /* "distinct_or_all" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 254: /* "delete_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 255: /* "update_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 256: /* "update_asgn_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 257: /* "update_asgn_factor" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 258: /* "create_index_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 259: /* "opt_index_columns" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 260: /* "opt_storing" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 261: /* "opt_storing_columns" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 262: /* "opt_index_option_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 263: /* "index_option" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 264: /* "cursor_declare_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 265: /* "cursor_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 266: /* "cursor_open_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 267: /* "cursor_fetch_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 268: /* "cursor_fetch_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 269: /* "cursor_fetch_next_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 270: /* "cursor_fetch_first_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 271: /* "cursor_fetch_prior_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 272: /* "cursor_fetch_last_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 273: /* "cursor_fetch_absolute_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 274: /* "cursor_fetch_relative_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 275: /* "fetch_prior_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 276: /* "fetch_first_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 277: /* "fetch_last_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 278: /* "fetch_relative_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 279: /* "next_or_prior" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 280: /* "fetch_absolute_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 281: /* "fetch_fromto_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 282: /* "cursor_close_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 283: /* "create_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 284: /* "opt_if_not_exists" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 285: /* "table_element_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 286: /* "table_element" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 287: /* "column_definition" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 288: /* "data_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 289: /* "opt_decimal" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 290: /* "opt_float" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 291: /* "opt_precision" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 292: /* "opt_time_precision" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 293: /* "opt_char_length" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 294: /* "opt_column_attribute_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 295: /* "column_attribute" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 296: /* "opt_table_option_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 297: /* "table_option" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 298: /* "opt_equal_mark" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 299: /* "drop_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 300: /* "opt_if_exists" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 301: /* "table_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 302: /* "drop_index_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 303: /* "index_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 304: /* "table_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 305: /* "insert_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 306: /* "opt_when" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 307: /* "replace_or_insert" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 308: /* "opt_insert_columns" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 309: /* "column_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 310: /* "insert_vals_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 311: /* "insert_vals" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 312: /* "select_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 313: /* "select_with_parens" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 314: /* "select_no_parens" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 315: /* "no_table_select" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 316: /* "select_clause" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 317: /* "select_into_clause" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 318: /* "simple_select" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 319: /* "opt_where" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 320: /* "select_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 321: /* "opt_hint" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 322: /* "opt_hint_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 323: /* "hint_options" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 324: /* "hint_option" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 325: /* "opt_comma_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 327: /* "limit_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 328: /* "opt_select_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 329: /* "opt_for_update" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 330: /* "parameterized_trim" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 331: /* "opt_groupby" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 332: /* "opt_order_by" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 333: /* "order_by" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 334: /* "sort_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 335: /* "sort_key" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 336: /* "opt_asc_desc" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 337: /* "opt_having" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 338: /* "opt_distinct" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 339: /* "projection" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 340: /* "select_expr_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 341: /* "from_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 342: /* "table_factor" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 343: /* "relation_factor" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 344: /* "joined_table" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 345: /* "join_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 346: /* "join_outer" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 347: /* "explain_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 348: /* "explainable_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 349: /* "opt_verbose" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 350: /* "show_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 351: /* "lock_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 352: /* "opt_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 353: /* "opt_for_grant_user" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 355: /* "opt_show_condition" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 356: /* "opt_like_condition" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 358: /* "create_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 359: /* "user_specification_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 360: /* "user_specification" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 361: /* "user" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 362: /* "password" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 363: /* "drop_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 364: /* "user_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 365: /* "set_password_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 366: /* "opt_for_user" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 367: /* "rename_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 368: /* "rename_info" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 369: /* "rename_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 370: /* "lock_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 371: /* "lock_spec" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 372: /* "opt_work" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 374: /* "begin_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 375: /* "commit_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 376: /* "rollback_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 377: /* "kill_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 378: /* "opt_is_global" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 379: /* "opt_flag" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 380: /* "grant_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 381: /* "priv_type_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 382: /* "priv_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 383: /* "opt_privilege" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 384: /* "priv_level" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 385: /* "revoke_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 386: /* "opt_on_priv_level" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 387: /* "prepare_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 388: /* "stmt_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 389: /* "preparable_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 390: /* "variable_set_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 391: /* "var_and_val_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 392: /* "var_and_val" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 393: /* "to_or_eq" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 394: /* "argument" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 395: /* "execute_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 396: /* "opt_using_args" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 397: /* "argument_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 398: /* "deallocate_prepare_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 399: /* "deallocate_or_drop" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 400: /* "alter_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 401: /* "alter_column_actions" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 402: /* "alter_column_action" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 403: /* "opt_column" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 405: /* "alter_column_behavior" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 406: /* "alter_system_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 407: /* "opt_force" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 408: /* "alter_system_actions" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 409: /* "alter_system_action" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 410: /* "opt_comment" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 412: /* "server_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 413: /* "opt_cluster_or_address" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 414: /* "column_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 415: /* "relation_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 416: /* "function_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 417: /* "column_label" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 419: /* "create_procedure_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 420: /* "proc_decl" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 421: /* "proc_parameter_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 422: /* "proc_parameter" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 423: /* "proc_block" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 424: /* "proc_sect" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 425: /* "proc_stmts" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 426: /* "proc_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 427: /* "control_sect" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 428: /* "control_stmts" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 429: /* "control_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 430: /* "stmt_declare" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 431: /* "stmt_assign" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 432: /* "stmt_if" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 433: /* "stmt_elsifs" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 434: /* "stmt_elsif" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 435: /* "stmt_else" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 436: /* "stmt_case" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 437: /* "case_when_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 438: /* "case_when" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 439: /* "case_else" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 440: /* "stmt_loop" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 441: /* "stmt_while" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 442: /* "stmt_null" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 443: /* "stmt_exit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 444: /* "exec_procedure_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 445: /* "drop_procedure_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 446: /* "show_procedure_stmt" */

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
      (yyval.node) = (yyvsp[(1) - (2)].node);
    ;}
    break;

  case 300:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 301:

    {
    (yyval.ival) = 3;
  ;}
    break;

  case 302:

    {
    (yyval.ival) = 4;
  ;}
    break;

  case 303:

    {
    (yyval.ival) = 1;
  ;}
    break;

  case 304:

    {
    (yyval.ival) = 2;
  ;}
    break;

  case 305:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 306:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 307:

    { (yyval.node) = NULL; ;}
    break;

  case 308:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 309:

    { (yyval.node) = NULL; ;}
    break;

  case 310:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 311:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 0;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 312:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 0;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 313:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 1;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 314:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 2;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 315:

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

  case 316:

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

  case 317:

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

  case 318:

    { (yyval.node) = NULL; ;}
    break;

  case 319:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_EXPR_LIST, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 320:

    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 321:

    { (yyval.node) = NULL; ;}
    break;

  case 322:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_SORT_LIST, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 323:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 324:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 325:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SORT_KEY, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 326:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_ASC); ;}
    break;

  case 327:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_ASC); ;}
    break;

  case 328:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_DESC); ;}
    break;

  case 329:

    { (yyval.node) = 0; ;}
    break;

  case 330:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 331:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 332:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_ALL);
    ;}
    break;

  case 333:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_DISTINCT);
    ;}
    break;

  case 334:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, (yyvsp[(1) - (1)].node));
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (1)]).first_column, (yylsp[(1) - (1)]).last_column);
    ;}
    break;

  case 335:

    {
      ParseNode* alias_node = NULL;
      malloc_non_terminal_node(alias_node, result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, alias_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (2)]).first_column, (yylsp[(1) - (2)]).last_column);
      dup_expr_string(alias_node->str_value_, result, (yylsp[(2) - (2)]).first_column, (yylsp[(2) - (2)]).last_column);
    ;}
    break;

  case 336:

    {
      ParseNode* alias_node = NULL;
      malloc_non_terminal_node(alias_node, result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, alias_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (3)]).first_column, (yylsp[(1) - (3)]).last_column);
      dup_expr_string(alias_node->str_value_, result, (yylsp[(3) - (3)]).first_column, (yylsp[(3) - (3)]).last_column);
    ;}
    break;

  case 337:

    {
      ParseNode* star_node = NULL;
      malloc_terminal_node(star_node, result->malloc_pool_, T_STAR);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, star_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (1)]).first_column, (yylsp[(1) - (1)]).last_column);
    ;}
    break;

  case 338:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 339:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 340:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 341:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 342:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 343:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 344:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 345:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 346:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 347:

    {
    	(yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 348:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(2) - (5)].node), (yyvsp[(5) - (5)].node));
    	yyerror(&(yylsp[(1) - (5)]), result, "qualied joined table can not be aliased!");
      YYABORT;
    ;}
    break;

  case 349:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 350:

    {
    	(yyval.node) = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 351:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOINED_TABLE, 4, (yyvsp[(2) - (6)].node), (yyvsp[(1) - (6)].node), (yyvsp[(4) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 352:

    {
      ParseNode* node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_JOIN_INNER);
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOINED_TABLE, 4, node, (yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 353:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_FULL);
    ;}
    break;

  case 354:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_LEFT);
    ;}
    break;

  case 355:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_RIGHT);
    ;}
    break;

  case 356:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_INNER);
    ;}
    break;

  case 357:

    { (yyval.node) = NULL; ;}
    break;

  case 358:

    { (yyval.node) = NULL; ;}
    break;

  case 359:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPLAIN, 1, (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = ((yyvsp[(2) - (3)].node) ? 1 : 0); /* positive: verbose */
    ;}
    break;

  case 360:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 361:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 362:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 363:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 364:

    { (yyval.node) = (ParseNode*)1; ;}
    break;

  case 365:

    { (yyval.node) = NULL; ;}
    break;

  case 366:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_TABLES, 1, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 367:

    {  malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_INDEX, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 368:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 369:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 370:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_TABLE_STATUS, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 371:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_SERVER_STATUS, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 372:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_VARIABLES, 1, (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = (yyvsp[(2) - (4)].ival);
    ;}
    break;

  case 373:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_SCHEMA); ;}
    break;

  case 374:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_CREATE_TABLE, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 375:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 376:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 377:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_WARNINGS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 378:

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

  case 379:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_GRANTS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 380:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_PARAMETERS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 381:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_PROCESSLIST);
      (yyval.node)->value_ = (yyvsp[(2) - (3)].ival);
    ;}
    break;

  case 382:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LOCK_TABLE, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 383:

    {
      if ((yyvsp[(2) - (4)].node)->value_ < 0 || (yyvsp[(4) - (4)].node)->value_ < 0)
      {
        yyerror(&(yylsp[(1) - (4)]), result, "OFFSET/COUNT must not be less than 0!");
        YYABORT;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_LIMIT, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 384:

    {
      if ((yyvsp[(2) - (2)].node)->value_ < 0)
      {
        yyerror(&(yylsp[(1) - (2)]), result, "COUNT must not be less than 0!");
        YYABORT;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_LIMIT, 2, NULL, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 385:

    { (yyval.node) = NULL; ;}
    break;

  case 386:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 387:

    { (yyval.node) = NULL; ;}
    break;

  case 388:

    { (yyval.node) = NULL; ;}
    break;

  case 389:

    { (yyval.ival) = 1; ;}
    break;

  case 390:

    { (yyval.ival) = 0; ;}
    break;

  case 391:

    { (yyval.ival) = 0; ;}
    break;

  case 392:

    { (yyval.node) = NULL; ;}
    break;

  case 393:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 394:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_WHERE_CLAUSE, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 395:

    { (yyval.node) = NULL; ;}
    break;

  case 396:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 1, (yyvsp[(1) - (1)].node)); ;}
    break;

  case 397:

    { (yyval.ival) = 0; ;}
    break;

  case 398:

    { (yyval.ival) = 1; ;}
    break;

  case 399:

    {
        merge_nodes((yyval.node), result->malloc_pool_, T_CREATE_USER, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 400:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 401:

    {
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 402:

    {
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CREATE_USER_SPEC, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 403:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 404:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 405:

    {
        merge_nodes((yyval.node), result->malloc_pool_, T_DROP_USER, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 406:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 407:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 408:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SET_PASSWORD, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 409:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SET_PASSWORD, 2, (yyvsp[(3) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 410:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 411:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 412:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_RENAME_USER, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 413:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_RENAME_INFO, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 414:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 415:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 416:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LOCK_USER, 2, (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 417:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 418:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 419:

    {
      (void)(yyval.node);
    ;}
    break;

  case 420:

    {
      (void)(yyval.node);
    ;}
    break;

  case 421:

    {
      (yyval.ival) = 1;
    ;}
    break;

  case 422:

    {
      (yyval.ival) = 0;
    ;}
    break;

  case 423:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BEGIN);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 424:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BEGIN);
      (yyval.node)->value_ = (yyvsp[(3) - (3)].ival);
    ;}
    break;

  case 425:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_COMMIT);
    ;}
    break;

  case 426:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_ROLLBACK);
    ;}
    break;

  case 427:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_KILL, 3, (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
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
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
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
      ParseNode *privileges_node = NULL;
      ParseNode *users_node = NULL;
      merge_nodes(privileges_node, result->malloc_pool_, T_PRIVILEGES, (yyvsp[(2) - (6)].node));
      merge_nodes(users_node, result->malloc_pool_, T_USERS, (yyvsp[(6) - (6)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_GRANT,
                                 3, privileges_node, (yyvsp[(4) - (6)].node), users_node);
    ;}
    break;

  case 434:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 435:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 436:

    {
      (void)(yyvsp[(2) - (2)].node);                 /* useless */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_ALL;
    ;}
    break;

  case 437:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_ALTER;
    ;}
    break;

  case 438:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_CREATE;
    ;}
    break;

  case 439:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_CREATE_USER;
    ;}
    break;

  case 440:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_DELETE;
    ;}
    break;

  case 441:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_DROP;
    ;}
    break;

  case 442:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_GRANT_OPTION;
    ;}
    break;

  case 443:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_INSERT;
    ;}
    break;

  case 444:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_UPDATE;
    ;}
    break;

  case 445:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_SELECT;
    ;}
    break;

  case 446:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_REPLACE;
    ;}
    break;

  case 447:

    {
      (void)(yyval.node);
    ;}
    break;

  case 448:

    {
      (void)(yyval.node);
    ;}
    break;

  case 449:

    {
      /* means global priv_level */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_LEVEL);
    ;}
    break;

  case 450:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_LEVEL, 1, (yyvsp[(1) - (1)].node));
    ;}
    break;

  case 451:

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

  case 452:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 453:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 454:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PREPARE, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 455:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 456:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 457:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 458:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 459:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 460:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_VARIABLE_SET, (yyvsp[(2) - (2)].node));;
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 461:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 462:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 463:

    {
      (void)((yyvsp[(2) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 464:

    {
      (void)((yyvsp[(2) - (3)].node));
      (yyvsp[(1) - (3)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 465:

    {
      (void)((yyvsp[(3) - (4)].node));
      (yyvsp[(2) - (4)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 466:

    {
      (void)((yyvsp[(3) - (4)].node));
      (yyvsp[(2) - (4)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 467:

    {
      (void)((yyvsp[(4) - (5)].node));
      (yyvsp[(3) - (5)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 468:

    {
      (void)((yyvsp[(4) - (5)].node));
      (yyvsp[(3) - (5)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 469:

    {
      (void)((yyvsp[(2) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 470:

    { (yyval.node) = NULL; ;}
    break;

  case 471:

    { (yyval.node) = NULL; ;}
    break;

  case 472:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 473:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXECUTE, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 474:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 475:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 476:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 477:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 478:

    {
      (void)((yyvsp[(1) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_DEALLOCATE, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 479:

    { (yyval.node) = NULL; ;}
    break;

  case 480:

    { (yyval.node) = NULL; ;}
    break;

  case 481:

    {
      ParseNode *alter_actions = NULL;
      merge_nodes(alter_actions, result->malloc_pool_, T_ALTER_ACTION_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_TABLE, 2, (yyvsp[(3) - (4)].node), alter_actions);
    ;}
    break;

  case 482:

    {
      yyerror(&(yylsp[(1) - (6)]), result, "Table rename is not supported now");
      YYABORT;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLE_RENAME, 1, (yyvsp[(6) - (6)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_ACTION_LIST, 1, (yyval.node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_TABLE, 2, (yyvsp[(3) - (6)].node), (yyval.node));
    ;}
    break;

  case 483:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 484:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 485:

    {
      (void)((yyvsp[(2) - (3)].node)); /* make bison mute */
      (yyval.node) = (yyvsp[(3) - (3)].node); /* T_COLUMN_DEFINITION */
    ;}
    break;

  case 486:

    {
      (void)((yyvsp[(2) - (4)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_DROP, 1, (yyvsp[(3) - (4)].node));
      (yyval.node)->value_ = (yyvsp[(4) - (4)].ival);
    ;}
    break;

  case 487:

    {
      (void)((yyvsp[(2) - (4)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_ALTER, 2, (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 488:

    {
      (void)((yyvsp[(2) - (5)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_RENAME, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 489:

    { (yyval.node) = NULL; ;}
    break;

  case 490:

    { (yyval.node) = NULL; ;}
    break;

  case 491:

    { (yyval.ival) = 2; ;}
    break;

  case 492:

    { (yyval.ival) = 1; ;}
    break;

  case 493:

    { (yyval.ival) = 0; ;}
    break;

  case 494:

    {
      (void)((yyvsp[(3) - (3)].node)); /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NOT_NULL);
    ;}
    break;

  case 495:

    {
      (void)((yyvsp[(3) - (3)].node)); /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NULL);
    ;}
    break;

  case 496:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 497:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_NULL);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyval.node));
    ;}
    break;

  case 498:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_SYTEM_ACTION_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_SYSTEM, 1, (yyval.node));
    ;}
    break;

  case 499:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 3, node, (yyvsp[(7) - (7)].node), (yyvsp[(3) - (7)].node));
    ;}
    break;

  case 500:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 3, node, (yyvsp[(7) - (7)].node), (yyvsp[(3) - (7)].node));
    ;}
    break;

  case 501:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 2, node, (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 502:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 2, node, (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 503:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 504:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_FORCE);
    ;}
    break;

  case 505:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 506:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 507:

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

  case 508:

    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 509:

    { (yyval.node) = NULL; ;}
    break;

  case 510:

    { (yyval.ival) = 0; ;}
    break;

  case 511:

    { (yyval.ival) = 1; ;}
    break;

  case 512:

    { (yyval.ival) = 2; ;}
    break;

  case 513:

    { (yyval.ival) = 2; ;}
    break;

  case 514:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 515:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 4;
    ;}
    break;

  case 516:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 517:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 3;
    ;}
    break;

  case 518:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CLUSTER, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 519:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SERVER_ADDRESS, 2, (yyvsp[(3) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 520:

    { (yyval.node) = NULL; ;}
    break;

  case 521:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 522:

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

  case 523:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 524:

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
    ;}
    break;

  case 553:

    {
								malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CREATE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
							;}
    break;

  case 554:

    {
					ParseNode *params = NULL;
        			merge_nodes(params, result->malloc_pool_, T_PARAM_LIST, (yyvsp[(5) - (6)].node));
					malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECL, 2, (yyvsp[(3) - (6)].node), params);
				;}
    break;

  case 555:

    {
					ParseNode *params = NULL;
					malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECL, 2, (yyvsp[(3) - (5)].node), params);
				;}
    break;

  case 556:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
					;}
    break;

  case 557:

    {
						(yyval.node) = (yyvsp[(1) - (1)].node);
					;}
    break;

  case 558:

    {
      					malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PARAM_DEFINITION, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
					;}
    break;

  case 559:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_IN_PARAM_DEFINITION, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
					;}
    break;

  case 560:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OUT_PARAM_DEFINITION, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
					;}
    break;

  case 561:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_INOUT_PARAM_DEFINITION, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
					;}
    break;

  case 562:

    { 
					//malloc_non_terminal_node($$, result->malloc_pool_, T_PROCEDURE_BLOCK, 1, $2);
					(yyval.node)=(yyvsp[(2) - (3)].node);
				;}
    break;

  case 563:

    { 
					(yyval.node)=NULL;
				;}
    break;

  case 564:

    { 
        			merge_nodes((yyval.node), result->malloc_pool_, T_PROCEDURE_STMTS, (yyvsp[(1) - (1)].node));
				;}
    break;

  case 565:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
				;}
    break;

  case 566:

    {
					(yyval.node)=(yyvsp[(1) - (1)].node);
				;}
    break;

  case 567:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 568:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 569:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 570:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 571:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 572:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 573:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 574:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 575:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 576:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 577:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
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

    { (yyval.node) =(yyvsp[(1) - (1)].node); ;}
    break;

  case 589:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 590:

    { 
        			merge_nodes((yyval.node), result->malloc_pool_, T_PROCEDURE_STMTS, (yyvsp[(1) - (1)].node));
				;}
    break;

  case 591:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
				;}
    break;

  case 592:

    {
					(yyval.node)=(yyvsp[(1) - (1)].node);
				;}
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

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
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

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 613:

    { (yyval.node) =(yyvsp[(1) - (1)].node); ;}
    break;

  case 614:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 615:

    {
						ParseNode *args = NULL;
						merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (4)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECLARE, 3, args, (yyvsp[(3) - (4)].node), NULL);
					;}
    break;

  case 616:

    {
						ParseNode *args = NULL;
						merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (6)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECLARE, 3, args, (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node));
					;}
    break;

  case 617:

    {
						ParseNode *var_list = NULL;
						merge_nodes(var_list, result->malloc_pool_, T_VAR_VAL_LIST, (yyvsp[(2) - (3)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ASSGIN, 1,var_list);
					;}
    break;

  case 618:

    {
						ParseNode *elsifs = NULL;
						merge_nodes(elsifs, result->malloc_pool_, T_PROCEDURE_ELSEIFS, (yyvsp[(5) - (9)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (9)].node), (yyvsp[(4) - (9)].node), elsifs ,(yyvsp[(6) - (9)].node));
					;}
    break;

  case 619:

    {
						ParseNode *elsifs = NULL;
						merge_nodes(elsifs, result->malloc_pool_, T_PROCEDURE_ELSEIFS, (yyvsp[(5) - (8)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (8)].node), (yyvsp[(4) - (8)].node), elsifs ,NULL);
					;}
    break;

  case 620:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (8)].node), (yyvsp[(4) - (8)].node), NULL ,(yyvsp[(5) - (8)].node));
					;}
    break;

  case 621:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (7)].node), (yyvsp[(4) - (7)].node), NULL ,NULL);
					;}
    break;

  case 622:

    {
						(yyval.node)=(yyvsp[(1) - (1)].node);
					;}
    break;

  case 623:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
					;}
    break;

  case 624:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ELSEIF, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
					;}
    break;

  case 625:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ELSE, 1, (yyvsp[(2) - (2)].node));
						//$$ = $2;
					;}
    break;

  case 626:

    {
						ParseNode *casewhenlist = NULL;
						merge_nodes(casewhenlist, result->malloc_pool_, T_PROCEDURE_CASE_WHEN_LIST, (yyvsp[(3) - (7)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CASE, 3, (yyvsp[(2) - (7)].node), casewhenlist, (yyvsp[(4) - (7)].node));
					;}
    break;

  case 627:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
					;}
    break;

  case 628:

    {
						(yyval.node)=(yyvsp[(1) - (1)].node);
					;}
    break;

  case 629:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CASE_WHEN, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
					;}
    break;

  case 630:

    {
						(yyval.node) = NULL;
					;}
    break;

  case 631:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ELSE, 1, (yyvsp[(2) - (2)].node));
						//$$ = $2;
					;}
    break;

  case 632:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_LOOP, 1, (yyvsp[(2) - (5)].node));
					;}
    break;

  case 633:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_WHILE, 2, (yyvsp[(2) - (7)].node), (yyvsp[(4) - (7)].node));
					;}
    break;

  case 634:

    {
						/* We do not bother building a node for NULL */
						(yyval.node) = NULL;
					;}
    break;

  case 635:

    {
						malloc_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXIT);
						(yyval.node)->value_=1;
					;}
    break;

  case 636:

    {
						malloc_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CONTINUE);
						(yyval.node)->value_=0;
					;}
    break;

  case 637:

    {
        					ParseNode *param_list = NULL;
            				merge_nodes(param_list, result->malloc_pool_, T_EXPR_LIST, (yyvsp[(4) - (5)].node));
        					
							malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXEC, 2, (yyvsp[(2) - (5)].node), param_list);
						;}
    break;

  case 638:

    {
							ParseNode *params = NULL;
							malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXEC, 2, (yyvsp[(2) - (4)].node), params);
						;}
    break;

  case 639:

    {
							malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DROP, 2, (yyvsp[(5) - (5)].node),(yyvsp[(5) - (5)].node));
						;}
    break;

  case 640:

    {
							malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DROP, 1, (yyvsp[(3) - (3)].node));
						;}
    break;

  case 641:

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

