
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
     KEY = 378,
     LEADING = 379,
     LEFT = 380,
     LIMIT = 381,
     LOCAL = 382,
     LOCKED = 383,
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
     AUTO_INCREMENT = 450,
     CHUNKSERVER = 451,
     COMPRESS_METHOD = 452,
     CONSISTENT_MODE = 453,
     EXPIRE_INFO = 454,
     GRANTS = 455,
     JOIN_INFO = 456,
     MERGESERVER = 457,
     REPLICA_NUM = 458,
     ROOTSERVER = 459,
     ROW_COUNT = 460,
     SERVER = 461,
     SERVER_IP = 462,
     SERVER_PORT = 463,
     SERVER_TYPE = 464,
     STATUS = 465,
     TABLE_ID = 466,
     TABLET_BLOCK_SIZE = 467,
     TABLET_MAX_SIZE = 468,
     UNLOCKED = 469,
     UPDATESERVER = 470,
     USE_BLOOM_FILTER = 471,
     VARIABLES = 472,
     VERBOSE = 473,
     WARNINGS = 474
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
#define YYFINAL  192
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3598

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  231
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  208
/* YYNRULES -- Number of rules.  */
#define YYNRULES  637
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1181

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   474

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    36,     2,     2,
      40,    41,    34,    32,   230,    33,    42,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   229,
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
     224,   225,   226,   227,   228
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
      82,    84,    86,    88,    90,    91,    93,    97,    99,   103,
     107,   109,   111,   113,   115,   117,   119,   121,   123,   125,
     129,   131,   133,   137,   143,   145,   147,   149,   151,   154,
     156,   158,   161,   164,   168,   172,   176,   180,   184,   188,
     192,   194,   197,   200,   204,   208,   212,   216,   220,   224,
     228,   232,   236,   240,   244,   248,   252,   256,   261,   265,
     269,   272,   276,   281,   285,   290,   294,   299,   305,   312,
     316,   321,   325,   327,   331,   337,   339,   340,   342,   345,
     350,   353,   354,   359,   364,   369,   375,   380,   387,   392,
     396,   401,   403,   405,   407,   409,   411,   413,   415,   421,
     429,   431,   435,   439,   445,   447,   450,   453,   457,   462,
     468,   474,   480,   486,   493,   501,   505,   509,   513,   519,
     521,   523,   528,   535,   538,   547,   551,   552,   554,   558,
     560,   566,   570,   572,   574,   576,   578,   580,   583,   586,
     588,   591,   593,   596,   599,   601,   604,   607,   610,   613,
     615,   617,   619,   622,   628,   632,   633,   637,   638,   640,
     641,   645,   646,   650,   651,   654,   655,   658,   660,   663,
     665,   668,   670,   674,   675,   679,   683,   687,   691,   695,
     699,   703,   707,   711,   715,   717,   718,   723,   724,   727,
     729,   733,   741,   746,   754,   755,   758,   760,   762,   766,
     767,   769,   773,   777,   783,   785,   789,   792,   794,   798,
     802,   804,   807,   811,   816,   822,   831,   833,   835,   845,
     855,   860,   865,   870,   871,   874,   878,   883,   888,   891,
     894,   899,   900,   904,   906,   910,   911,   913,   916,   918,
     920,   925,   929,   932,   933,   935,   937,   939,   941,   943,
     945,   946,   948,   949,   952,   956,   961,   966,   971,   975,
     979,   983,   984,   988,   990,   991,   995,   997,  1001,  1004,
    1005,  1007,  1009,  1010,  1013,  1014,  1016,  1018,  1020,  1023,
    1027,  1029,  1031,  1035,  1037,  1041,  1043,  1047,  1050,  1054,
    1057,  1059,  1065,  1067,  1071,  1078,  1084,  1087,  1090,  1093,
    1095,  1097,  1098,  1102,  1104,  1106,  1108,  1110,  1112,  1113,
    1117,  1123,  1129,  1134,  1139,  1144,  1147,  1152,  1156,  1160,
    1164,  1168,  1172,  1176,  1180,  1185,  1188,  1189,  1191,  1194,
    1199,  1201,  1203,  1204,  1205,  1208,  1211,  1212,  1214,  1215,
    1217,  1221,  1223,  1227,  1232,  1234,  1236,  1240,  1242,  1246,
    1252,  1259,  1262,  1263,  1267,  1271,  1273,  1277,  1282,  1284,
    1286,  1288,  1289,  1293,  1294,  1297,  1301,  1304,  1307,  1312,
    1313,  1315,  1316,  1318,  1320,  1327,  1329,  1333,  1336,  1338,
    1340,  1343,  1345,  1347,  1350,  1352,  1354,  1356,  1358,  1360,
    1361,  1363,  1365,  1371,  1374,  1375,  1380,  1382,  1384,  1386,
    1388,  1390,  1393,  1397,  1399,  1403,  1407,  1411,  1416,  1421,
    1427,  1433,  1437,  1441,  1445,  1447,  1449,  1451,  1453,  1457,
    1459,  1463,  1467,  1470,  1471,  1473,  1477,  1481,  1483,  1485,
    1490,  1497,  1499,  1503,  1507,  1512,  1517,  1523,  1525,  1526,
    1528,  1530,  1531,  1535,  1539,  1543,  1546,  1551,  1559,  1567,
    1574,  1581,  1582,  1584,  1586,  1590,  1600,  1603,  1604,  1608,
    1612,  1616,  1617,  1619,  1621,  1623,  1625,  1629,  1636,  1637,
    1639,  1641,  1643,  1645,  1647,  1649,  1651,  1653,  1655,  1657,
    1659,  1661,  1663,  1665,  1667,  1669,  1671,  1673,  1675,  1677,
    1679,  1681,  1683,  1685,  1687,  1689,  1691,  1693,  1695,  1697,
    1699,  1701,  1704,  1711,  1717,  1721,  1723,  1726,  1730,  1734,
    1738,  1742,  1747,  1752,  1757,  1761,  1762,  1764,  1767,  1769,
    1771,  1773,  1775,  1777,  1779,  1781,  1784,  1787,  1790,  1793,
    1796,  1799,  1802,  1805,  1808,  1811,  1814,  1817,  1820,  1823,
    1826,  1828,  1830,  1831,  1833,  1836,  1838,  1840,  1842,  1844,
    1846,  1848,  1851,  1854,  1857,  1860,  1863,  1866,  1869,  1872,
    1875,  1878,  1881,  1884,  1887,  1890,  1893,  1895,  1897,  1902,
    1909,  1915,  1919,  1929,  1938,  1947,  1955,  1957,  1960,  1965,
    1968,  1976,  1979,  1981,  1986,  1987,  1990,  1996,  2008,  2021,
    2029,  2031,  2034,  2039,  2045,  2050,  2056,  2060
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     232,     0,    -1,   233,   106,    -1,   233,   229,   234,    -1,
     234,    -1,   411,    -1,   436,    -1,   438,    -1,   437,    -1,
     257,    -1,   259,    -1,   260,    -1,   275,    -1,   268,    -1,
     269,    -1,   270,    -1,   271,    -1,   273,    -1,   274,    -1,
     302,    -1,   295,    -1,   276,    -1,   254,    -1,   253,    -1,
     292,    -1,   337,    -1,   340,    -1,   376,    -1,   379,    -1,
     387,    -1,   392,    -1,   398,    -1,   390,    -1,   347,    -1,
     352,    -1,   354,    -1,   356,    -1,   359,    -1,   369,    -1,
     374,    -1,   363,    -1,   364,    -1,   365,    -1,   366,    -1,
      -1,   240,    -1,   235,   230,   240,    -1,   406,    -1,   407,
      42,   406,    -1,   407,    42,    34,    -1,     4,    -1,     6,
      -1,     5,    -1,     9,    -1,     8,    -1,    10,    -1,    12,
      -1,    14,    -1,    13,    -1,   168,    42,   406,    -1,   236,
      -1,   237,    -1,    40,   240,    41,    -1,    40,   235,   230,
     240,    41,    -1,   242,    -1,   248,    -1,   249,    -1,   303,
      -1,   109,   303,    -1,   247,    -1,   238,    -1,    32,   239,
      -1,    33,   239,    -1,   239,    32,   239,    -1,   239,    33,
     239,    -1,   239,    34,   239,    -1,   239,    35,   239,    -1,
     239,    36,   239,    -1,   239,    38,   239,    -1,   239,    37,
     239,    -1,   238,    -1,    32,   240,    -1,    33,   240,    -1,
     240,    32,   240,    -1,   240,    33,   240,    -1,   240,    34,
     240,    -1,   240,    35,   240,    -1,   240,    36,   240,    -1,
     240,    38,   240,    -1,   240,    37,   240,    -1,   240,    26,
     240,    -1,   240,    25,   240,    -1,   240,    24,   240,    -1,
     240,    22,   240,    -1,   240,    23,   240,    -1,   240,    21,
     240,    -1,   240,    28,   240,    -1,   240,    20,    28,   240,
      -1,   240,    19,   240,    -1,   240,    18,   240,    -1,    20,
     240,    -1,   240,    31,    10,    -1,   240,    31,    20,    10,
      -1,   240,    31,     8,    -1,   240,    31,    20,     8,    -1,
     240,    31,    11,    -1,   240,    31,    20,    11,    -1,   240,
      29,   239,    19,   239,    -1,   240,    20,    29,   239,    19,
     239,    -1,   240,    30,   241,    -1,   240,    20,    30,   241,
      -1,   240,    27,   240,    -1,   303,    -1,    40,   235,    41,
      -1,    79,   243,   244,   246,   105,    -1,   240,    -1,    -1,
     245,    -1,   244,   245,    -1,   197,   240,   183,   240,    -1,
     104,   240,    -1,    -1,    14,    40,     5,    41,    -1,    14,
      40,    14,    41,    -1,   408,    40,    34,    41,    -1,   408,
      40,   252,   240,    41,    -1,   408,    40,   235,    41,    -1,
     408,    40,   240,    70,   281,    41,    -1,   408,    40,   320,
      41,    -1,   408,    40,    41,    -1,   250,    40,   251,    41,
      -1,   214,    -1,   302,    -1,   295,    -1,   254,    -1,   253,
      -1,    68,    -1,   100,    -1,    97,   113,   333,   309,   296,
      -1,   190,   311,   333,   169,   255,   309,   296,    -1,   256,
      -1,   255,   230,   256,    -1,   406,    24,   240,    -1,    44,
     258,    56,   112,   302,    -1,   409,    -1,    57,   258,    -1,
      58,   258,    -1,    58,   258,    60,    -1,    58,   258,   130,
     389,    -1,    58,   258,    60,   130,   389,    -1,    58,   258,
      62,   130,   389,    -1,    58,   258,    61,   130,   389,    -1,
      58,   258,    63,   130,   389,    -1,    58,   258,    64,     5,
     130,   389,    -1,    58,   258,   272,    65,     5,   130,   389,
      -1,    58,   258,    61,    -1,    58,   258,    62,    -1,    58,
     258,    63,    -1,    58,   258,   272,    65,     5,    -1,    60,
      -1,    61,    -1,    58,   258,    64,     5,    -1,    58,   258,
     113,     5,   189,     5,    -1,    59,   258,    -1,    87,   181,
     277,   333,    40,   278,    41,   289,    -1,   126,    20,   109,
      -1,    -1,   279,    -1,   278,   230,   279,    -1,   280,    -1,
     152,   132,    40,   299,    41,    -1,   406,   281,   287,    -1,
     186,    -1,   171,    -1,   138,    -1,   128,    -1,    73,    -1,
      95,   282,    -1,   142,   282,    -1,    75,    -1,   111,   283,
      -1,   154,    -1,   101,   284,    -1,   185,   285,    -1,    93,
      -1,    80,   286,    -1,    74,   286,    -1,   194,   286,    -1,
     195,   286,    -1,    88,    -1,   140,    -1,    92,    -1,   184,
     285,    -1,    40,     5,   230,     5,    41,    -1,    40,     5,
      41,    -1,    -1,    40,     5,    41,    -1,    -1,   150,    -1,
      -1,    40,     5,    41,    -1,    -1,    40,     5,    41,    -1,
      -1,   287,   288,    -1,    -1,    20,    10,    -1,    10,    -1,
      96,   237,    -1,   204,    -1,   152,   132,    -1,   290,    -1,
     289,   230,   290,    -1,    -1,   210,   291,     4,    -1,   208,
     291,     4,    -1,   222,   291,     5,    -1,   221,   291,     5,
      -1,   220,   291,     5,    -1,   212,   291,     5,    -1,   206,
     291,     4,    -1,   225,   291,     8,    -1,   207,   291,   175,
      -1,    82,   291,     4,    -1,    24,    -1,    -1,   102,   181,
     293,   294,    -1,    -1,   126,   109,    -1,   332,    -1,   294,
     230,   332,    -1,   297,   130,   333,   298,   193,   300,   296,
      -1,   297,   130,   333,   302,    -1,   297,   130,   333,    40,
     299,    41,   302,    -1,    -1,   197,   240,    -1,   156,    -1,
     129,    -1,    40,   299,    41,    -1,    -1,   406,    -1,   299,
     230,   406,    -1,    40,   301,    41,    -1,   300,   230,    40,
     301,    41,    -1,   240,    -1,   301,   230,   240,    -1,   304,
     296,    -1,   303,    -1,    40,   304,    41,    -1,    40,   303,
      41,    -1,   305,    -1,   308,   319,    -1,   306,   323,   319,
      -1,   306,   322,   310,   319,    -1,   166,   311,   328,   330,
     318,    -1,   166,   311,   328,   330,   113,   103,   309,   318,
      -1,   308,    -1,   303,    -1,   166,   311,   330,   130,   389,
     113,   331,   309,   319,    -1,   166,   311,   328,   330,   113,
     331,   309,   321,   327,    -1,   306,    16,   328,   306,    -1,
     306,    17,   328,   306,    -1,   306,    15,   328,   306,    -1,
      -1,   196,   240,    -1,   196,     7,   240,    -1,   135,   317,
     143,   317,    -1,   143,   317,   135,   317,    -1,   135,   317,
      -1,   143,   317,    -1,   135,   317,   230,   317,    -1,    -1,
     122,   312,   123,    -1,   313,    -1,   312,   230,   313,    -1,
      -1,   314,    -1,   313,   314,    -1,   153,    -1,   124,    -1,
     163,    40,   316,    41,    -1,    40,   315,    41,    -1,   315,
     230,    -1,    -1,   203,    -1,   177,    -1,   175,    -1,   115,
      -1,     5,    -1,    12,    -1,    -1,   310,    -1,    -1,   112,
     190,    -1,   240,   113,   240,    -1,    76,   240,   113,   240,
      -1,   133,   240,   113,   240,    -1,   187,   240,   113,   240,
      -1,    76,   113,   240,    -1,   133,   113,   240,    -1,   187,
     113,   240,    -1,    -1,   120,    77,   235,    -1,   323,    -1,
      -1,   145,    77,   324,    -1,   325,    -1,   324,   230,   325,
      -1,   240,   326,    -1,    -1,    71,    -1,    98,    -1,    -1,
     121,   240,    -1,    -1,    68,    -1,   100,    -1,   240,    -1,
     240,   409,    -1,   240,    70,   409,    -1,    34,    -1,   329,
      -1,   330,   230,   329,    -1,   332,    -1,   331,   230,   332,
      -1,   333,    -1,   333,    70,   407,    -1,   333,   407,    -1,
     303,    70,   407,    -1,   303,   407,    -1,   334,    -1,    40,
     334,    41,    70,   407,    -1,   407,    -1,    40,   334,    41,
      -1,   332,   335,   131,   332,   144,   240,    -1,   332,   131,
     332,   144,   240,    -1,   114,   336,    -1,   134,   336,    -1,
     160,   336,    -1,   127,    -1,   147,    -1,    -1,   110,   339,
     338,    -1,   302,    -1,   253,    -1,   295,    -1,   254,    -1,
     227,    -1,    -1,   170,   182,   344,    -1,   170,    86,   113,
     333,   344,    -1,   170,    86,    30,   333,   344,    -1,   170,
     181,   219,   344,    -1,   170,   215,   219,   344,    -1,   170,
     343,   226,   344,    -1,   170,   164,    -1,   170,    87,   181,
     333,    -1,    99,   333,   345,    -1,    98,   333,   345,    -1,
     170,   228,   341,    -1,   170,   248,   228,    -1,   170,   209,
     342,    -1,   170,   148,   344,    -1,   170,   346,   200,    -1,
     135,     5,   230,     5,    -1,   135,     5,    -1,    -1,   355,
      -1,   112,    89,    -1,   112,    89,    40,    41,    -1,   117,
      -1,   167,    -1,    -1,    -1,    28,     4,    -1,   196,   240,
      -1,    -1,     4,    -1,    -1,   114,    -1,    87,   191,   348,
      -1,   349,    -1,   348,   230,   349,    -1,   350,   125,    77,
     351,    -1,     4,    -1,     4,    -1,   102,   191,   353,    -1,
     350,    -1,   353,   230,   350,    -1,   169,   149,   355,    24,
     351,    -1,    69,   191,   350,   125,    77,   351,    -1,   112,
     350,    -1,    -1,   155,   191,   358,    -1,   350,   189,   350,
      -1,   357,    -1,   358,   230,   357,    -1,    69,   191,   350,
     360,    -1,   137,    -1,   223,    -1,   199,    -1,    -1,   198,
      84,   172,    -1,    -1,    72,   361,    -1,   174,   188,   362,
      -1,    83,   361,    -1,   161,   361,    -1,   162,   367,   368,
       5,    -1,    -1,   117,    -1,    -1,   201,    -1,   202,    -1,
     119,   370,   144,   373,   189,   353,    -1,   371,    -1,   370,
     230,   371,    -1,    68,   372,    -1,    69,    -1,    87,    -1,
      87,   191,    -1,    97,    -1,   102,    -1,   119,   146,    -1,
     129,    -1,   190,    -1,   166,    -1,   156,    -1,   158,    -1,
      -1,    34,    -1,   407,    -1,   159,   370,   375,   113,   353,
      -1,   144,   373,    -1,    -1,   151,   377,   113,   378,    -1,
     409,    -1,   302,    -1,   295,    -1,   254,    -1,   253,    -1,
     169,   380,    -1,   169,   169,   382,    -1,   381,    -1,   380,
     230,   381,    -1,    14,   383,   240,    -1,   406,   383,   240,
      -1,   117,   406,   383,   240,    -1,   167,   406,   383,   240,
      -1,   118,    42,   406,   383,   240,    -1,   168,    42,   406,
     383,   240,    -1,    13,   383,   240,    -1,   247,   383,   240,
      -1,    14,   383,   385,    -1,   189,    -1,    24,    -1,    14,
      -1,   247,    -1,    40,   386,    41,    -1,   237,    -1,   386,
     230,   237,    -1,   108,   377,   388,    -1,   192,   389,    -1,
      -1,   384,    -1,   389,   230,   384,    -1,   391,   151,   377,
      -1,    94,    -1,   102,    -1,    69,   181,   333,   393,    -1,
      69,   181,   333,   155,   189,   333,    -1,   394,    -1,   393,
     230,   394,    -1,    66,   395,   280,    -1,   102,   395,   406,
     396,    -1,    69,   395,   406,   397,    -1,   155,   395,   406,
     189,   409,    -1,    85,    -1,    -1,    78,    -1,   157,    -1,
      -1,   169,    20,    10,    -1,   102,    20,    10,    -1,   169,
      96,   237,    -1,   102,    96,    -1,    69,   176,   169,   400,
      -1,    69,   176,   399,    90,   141,    24,     4,    -1,    69,
     176,   399,    91,   141,    24,     4,    -1,    69,   176,   178,
     141,    24,     4,    -1,    69,   176,   179,   180,    24,     4,
      -1,    -1,   116,    -1,   401,    -1,   400,   230,   401,    -1,
     406,    24,   237,   402,   403,   218,    24,   404,   405,    -1,
      82,     4,    -1,    -1,   165,    24,   139,    -1,   165,    24,
     173,    -1,   165,    24,    76,    -1,    -1,   213,    -1,   224,
      -1,   205,    -1,   211,    -1,    81,    24,     5,    -1,   216,
      24,     4,   217,    24,     5,    -1,    -1,     3,    -1,   410,
      -1,     3,    -1,   410,    -1,     3,    -1,     3,    -1,   410,
      -1,   204,    -1,   205,    -1,   206,    -1,   207,    -1,   208,
      -1,   209,    -1,   210,    -1,   211,    -1,   212,    -1,   213,
      -1,   214,    -1,   215,    -1,   216,    -1,   217,    -1,   218,
      -1,   219,    -1,   221,    -1,   220,    -1,   222,    -1,   223,
      -1,   224,    -1,   225,    -1,   226,    -1,   227,    -1,   228,
      -1,   412,   415,    -1,    87,    43,     3,    40,   413,    41,
      -1,    87,    43,     3,    40,    41,    -1,   413,   230,   414,
      -1,   414,    -1,    14,   281,    -1,    30,    14,   281,    -1,
      46,    14,   281,    -1,    47,    14,   281,    -1,    14,   281,
      54,    -1,    30,    14,   281,    54,    -1,    46,    14,   281,
      54,    -1,    47,    14,   281,    54,    -1,    72,   416,   105,
      -1,    -1,   417,    -1,   417,   418,    -1,   418,    -1,   424,
      -1,   428,    -1,   433,    -1,   432,    -1,   422,    -1,   423,
      -1,   307,   229,    -1,   295,   229,    -1,   254,   229,    -1,
     253,   229,    -1,   302,   229,    -1,   257,   229,    -1,   259,
     229,    -1,   275,   229,    -1,   261,   229,    -1,   262,   229,
      -1,   263,   229,    -1,   265,   229,    -1,   264,   229,    -1,
     266,   229,    -1,   267,   229,    -1,   435,    -1,   434,    -1,
      -1,   420,    -1,   420,   421,    -1,   421,    -1,   424,    -1,
     428,    -1,   433,    -1,   432,    -1,   423,    -1,   307,   229,
      -1,   295,   229,    -1,   254,   229,    -1,   253,   229,    -1,
     302,   229,    -1,   257,   229,    -1,   259,   229,    -1,   275,
     229,    -1,   261,   229,    -1,   262,   229,    -1,   263,   229,
      -1,   265,   229,    -1,   264,   229,    -1,   266,   229,    -1,
     267,   229,    -1,   435,    -1,   434,    -1,    44,   389,   281,
     229,    -1,    44,   389,   281,    96,   237,   229,    -1,    44,
     389,   281,    54,   229,    -1,   169,   380,   229,    -1,   126,
     240,   183,   419,   425,   427,   105,   126,   229,    -1,   126,
     240,   183,   419,   425,   105,   126,   229,    -1,   126,   240,
     183,   419,   427,   105,   126,   229,    -1,   126,   240,   183,
     419,   105,   126,   229,    -1,   426,    -1,   425,   426,    -1,
      45,   240,   183,   419,    -1,   104,   419,    -1,    79,   240,
     429,   431,   105,    79,   229,    -1,   429,   430,    -1,   430,
      -1,   197,   240,   183,   419,    -1,    -1,   104,   419,    -1,
      49,   419,   105,    49,   229,    -1,   112,    14,    30,   239,
     189,   239,    49,   419,   105,    49,   229,    -1,   112,    14,
      30,    55,   239,   189,   239,    49,   419,   105,    49,   229,
      -1,    48,   240,    52,   419,   105,    48,   229,    -1,   229,
      -1,    50,   229,    -1,    50,   197,   240,   229,    -1,    53,
       3,    40,   235,    41,    -1,    53,     3,    40,    41,    -1,
     102,    43,   126,   109,     3,    -1,   102,    43,     3,    -1,
     170,    43,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   241,   241,   250,   257,   264,   265,   266,   267,   270,
     271,   272,   273,   274,   276,   277,   278,   279,   280,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   317,   321,   328,   330,   336,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     358,   360,   362,   364,   370,   378,   382,   386,   390,   394,
     402,   403,   407,   411,   412,   413,   414,   415,   416,   417,
     420,   421,   425,   429,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   448,
     452,   456,   460,   464,   468,   472,   476,   480,   484,   488,
     492,   496,   503,   507,   512,   520,   521,   525,   527,   532,
     539,   540,   545,   549,   557,   571,   599,   674,   690,   694,
     716,   724,   731,   732,   733,   734,   738,   742,   756,   770,
     780,   784,   791,   809,   820,   833,   849,   855,   869,   884,
     899,   915,   931,   947,   964,   980,  1001,  1020,  1037,  1050,
    1055,  1070,  1087,  1107,  1127,  1144,  1147,  1151,  1155,  1162,
    1166,  1175,  1184,  1186,  1188,  1190,  1192,  1194,  1203,  1212,
    1214,  1216,  1218,  1223,  1230,  1232,  1239,  1246,  1253,  1260,
    1262,  1264,  1270,  1282,  1284,  1287,  1291,  1292,  1296,  1297,
    1301,  1302,  1306,  1307,  1311,  1314,  1318,  1323,  1328,  1330,
    1332,  1337,  1341,  1346,  1352,  1357,  1362,  1367,  1372,  1377,
    1382,  1387,  1392,  1398,  1406,  1407,  1418,  1428,  1429,  1434,
    1438,  1451,  1465,  1476,  1494,  1495,  1502,  1507,  1515,  1520,
    1524,  1525,  1532,  1536,  1542,  1543,  1557,  1567,  1572,  1573,
    1577,  1581,  1586,  1596,  1617,  1639,  1665,  1666,  1674,  1706,
    1732,  1754,  1776,  1802,  1803,  1807,  1814,  1822,  1830,  1834,
    1838,  1850,  1853,  1867,  1871,  1876,  1882,  1886,  1893,  1897,
    1901,  1906,  1913,  1918,  1924,  1928,  1932,  1936,  1942,  1944,
    1950,  1951,  1957,  1958,  1966,  1973,  1980,  1987,  1994,  2005,
    2016,  2031,  2032,  2039,  2040,  2044,  2051,  2053,  2058,  2066,
    2067,  2069,  2075,  2076,  2084,  2087,  2091,  2098,  2103,  2111,
    2119,  2129,  2133,  2140,  2142,  2147,  2151,  2155,  2159,  2163,
    2167,  2171,  2180,  2188,  2192,  2196,  2205,  2211,  2217,  2223,
    2230,  2231,  2241,  2249,  2250,  2251,  2252,  2256,  2257,  2267,
    2269,  2271,  2273,  2275,  2277,  2282,  2284,  2286,  2288,  2290,
    2294,  2307,  2311,  2315,  2323,  2332,  2342,  2346,  2348,  2350,
    2355,  2356,  2357,  2362,  2363,  2365,  2371,  2372,  2377,  2378,
    2388,  2394,  2398,  2404,  2410,  2416,  2428,  2434,  2438,  2450,
    2454,  2460,  2465,  2476,  2482,  2488,  2492,  2504,  2510,  2515,
    2529,  2534,  2538,  2543,  2547,  2553,  2565,  2577,  2589,  2596,
    2600,  2608,  2612,  2617,  2631,  2642,  2646,  2652,  2658,  2663,
    2668,  2673,  2678,  2683,  2688,  2693,  2698,  2703,  2710,  2715,
    2720,  2725,  2737,  2777,  2782,  2794,  2801,  2806,  2808,  2810,
    2812,  2824,  2830,  2838,  2842,  2849,  2855,  2862,  2869,  2876,
    2883,  2890,  2897,  2908,  2918,  2919,  2923,  2926,  2932,  2939,
    2940,  2955,  2962,  2967,  2972,  2976,  2989,  2997,  2999,  3010,
    3016,  3027,  3031,  3038,  3043,  3049,  3054,  3063,  3064,  3068,
    3069,  3070,  3074,  3079,  3084,  3088,  3102,  3108,  3115,  3122,
    3129,  3139,  3142,  3150,  3154,  3161,  3176,  3179,  3183,  3185,
    3187,  3190,  3194,  3199,  3204,  3209,  3217,  3221,  3226,  3237,
    3239,  3256,  3258,  3275,  3279,  3281,  3294,  3295,  3296,  3297,
    3298,  3299,  3300,  3301,  3302,  3303,  3304,  3305,  3306,  3307,
    3308,  3309,  3310,  3311,  3312,  3313,  3314,  3315,  3316,  3317,
    3318,  3328,  3333,  3340,  3346,  3350,  3355,  3359,  3363,  3367,
    3371,  3378,  3385,  3392,  3400,  3407,  3410,  3415,  3419,  3424,
    3426,  3428,  3430,  3432,  3434,  3436,  3438,  3440,  3442,  3444,
    3446,  3448,  3450,  3452,  3454,  3456,  3458,  3460,  3462,  3464,
    3467,  3469,  3476,  3479,  3484,  3488,  3493,  3495,  3497,  3499,
    3501,  3503,  3505,  3507,  3509,  3511,  3513,  3515,  3517,  3519,
    3521,  3523,  3525,  3527,  3529,  3531,  3534,  3536,  3544,  3550,
    3556,  3576,  3588,  3594,  3600,  3604,  3609,  3613,  3618,  3624,
    3635,  3642,  3646,  3651,  3657,  3660,  3671,  3680,  3689,  3707,
    3713,  3723,  3733,  3744,  3752,  3765,  3769,  3783
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
  "WITH", "WORK", "PROCESSLIST", "QUERY", "CONNECTION", "WEAK",
  "AUTO_INCREMENT", "CHUNKSERVER", "COMPRESS_METHOD", "CONSISTENT_MODE",
  "EXPIRE_INFO", "GRANTS", "JOIN_INFO", "MERGESERVER", "REPLICA_NUM",
  "ROOTSERVER", "ROW_COUNT", "SERVER", "SERVER_IP", "SERVER_PORT",
  "SERVER_TYPE", "STATUS", "TABLE_ID", "TABLET_BLOCK_SIZE",
  "TABLET_MAX_SIZE", "UNLOCKED", "UPDATESERVER", "USE_BLOOM_FILTER",
  "VARIABLES", "VERBOSE", "WARNINGS", "';'", "','", "$accept", "sql_stmt",
  "stmt_list", "stmt", "expr_list", "column_ref", "expr_const",
  "simple_expr", "arith_expr", "expr", "in_expr", "case_expr", "case_arg",
  "when_clause_list", "when_clause", "case_default", "array_expr",
  "func_expr", "when_func", "when_func_name", "when_func_stmt",
  "distinct_or_all", "delete_stmt", "update_stmt", "update_asgn_list",
  "update_asgn_factor", "cursor_declare_stmt", "cursor_name",
  "cursor_open_stmt", "cursor_fetch_stmt", "cursor_fetch_into_stmt",
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
  "table_list", "insert_stmt", "opt_when", "replace_or_insert",
  "opt_insert_columns", "column_list", "insert_vals_list", "insert_vals",
  "select_stmt", "select_with_parens", "select_no_parens",
  "no_table_select", "select_clause", "select_into_clause",
  "simple_select", "opt_where", "select_limit", "opt_hint",
  "opt_hint_list", "hint_options", "hint_option", "opt_comma_list",
  "consistency_level", "limit_expr", "opt_select_limit", "opt_for_update",
  "parameterized_trim", "opt_groupby", "opt_order_by", "order_by",
  "sort_list", "sort_key", "opt_asc_desc", "opt_having", "opt_distinct",
  "projection", "select_expr_list", "from_list", "table_factor",
  "relation_factor", "joined_table", "join_type", "join_outer",
  "explain_stmt", "explainable_stmt", "opt_verbose", "show_stmt",
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
     466,   467,   468,   469,   470,   471,   472,   473,   474,    59,
      44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   231,   232,   233,   233,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   235,   235,   236,   236,   236,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   241,   241,   242,   243,   243,   244,   244,   245,
     246,   246,   247,   247,   248,   248,   248,   248,   248,   248,
     249,   250,   251,   251,   251,   251,   252,   252,   253,   254,
     255,   255,   256,   257,   258,   259,   260,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     272,   273,   274,   275,   276,   277,   277,   278,   278,   279,
     279,   280,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   282,   282,   282,   283,   283,   284,   284,
     285,   285,   286,   286,   287,   287,   288,   288,   288,   288,
     288,   289,   289,   289,   290,   290,   290,   290,   290,   290,
     290,   290,   290,   290,   291,   291,   292,   293,   293,   294,
     294,   295,   295,   295,   296,   296,   297,   297,   298,   298,
     299,   299,   300,   300,   301,   301,   302,   302,   303,   303,
     304,   304,   304,   304,   305,   305,   306,   306,   307,   308,
     308,   308,   308,   309,   309,   309,   310,   310,   310,   310,
     310,   311,   311,   312,   312,   312,   313,   313,   314,   314,
     314,   314,   315,   315,   316,   316,   316,   316,   317,   317,
     318,   318,   319,   319,   320,   320,   320,   320,   320,   320,
     320,   321,   321,   322,   322,   323,   324,   324,   325,   326,
     326,   326,   327,   327,   328,   328,   328,   329,   329,   329,
     329,   330,   330,   331,   331,   332,   332,   332,   332,   332,
     332,   332,   333,   334,   334,   334,   335,   335,   335,   335,
     336,   336,   337,   338,   338,   338,   338,   339,   339,   340,
     340,   340,   340,   340,   340,   340,   340,   340,   340,   340,
     340,   340,   340,   340,   341,   341,   341,   342,   342,   342,
     343,   343,   343,   344,   344,   344,   345,   345,   346,   346,
     347,   348,   348,   349,   350,   351,   352,   353,   353,   354,
     354,   355,   355,   356,   357,   358,   358,   359,   360,   360,
     361,   361,   362,   362,   363,   363,   364,   365,   366,   367,
     367,   368,   368,   368,   369,   370,   370,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   372,   372,
     373,   373,   374,   375,   375,   376,   377,   378,   378,   378,
     378,   379,   379,   380,   380,   381,   381,   381,   381,   381,
     381,   381,   381,   382,   383,   383,   384,   384,   385,   386,
     386,   387,   388,   388,   389,   389,   390,   391,   391,   392,
     392,   393,   393,   394,   394,   394,   394,   395,   395,   396,
     396,   396,   397,   397,   397,   397,   398,   398,   398,   398,
     398,   399,   399,   400,   400,   401,   402,   402,   403,   403,
     403,   403,   404,   404,   404,   404,   405,   405,   405,   406,
     406,   407,   407,   408,   409,   409,   410,   410,   410,   410,
     410,   410,   410,   410,   410,   410,   410,   410,   410,   410,
     410,   410,   410,   410,   410,   410,   410,   410,   410,   410,
     410,   411,   412,   412,   413,   413,   414,   414,   414,   414,
     414,   414,   414,   414,   415,   416,   416,   417,   417,   418,
     418,   418,   418,   418,   418,   418,   418,   418,   418,   418,
     418,   418,   418,   418,   418,   418,   418,   418,   418,   418,
     418,   418,   419,   419,   420,   420,   421,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   422,   422,
     422,   423,   424,   424,   424,   424,   425,   425,   426,   427,
     428,   429,   429,   430,   431,   431,   432,   432,   432,   433,
     434,   435,   435,   436,   436,   437,   437,   438
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     3,     1,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     3,     5,     1,     1,     1,     1,     2,     1,
       1,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       1,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     4,     3,     3,
       2,     3,     4,     3,     4,     3,     4,     5,     6,     3,
       4,     3,     1,     3,     5,     1,     0,     1,     2,     4,
       2,     0,     4,     4,     4,     5,     4,     6,     4,     3,
       4,     1,     1,     1,     1,     1,     1,     1,     5,     7,
       1,     3,     3,     5,     1,     2,     2,     3,     4,     5,
       5,     5,     5,     6,     7,     3,     3,     3,     5,     1,
       1,     4,     6,     2,     8,     3,     0,     1,     3,     1,
       5,     3,     1,     1,     1,     1,     1,     2,     2,     1,
       2,     1,     2,     2,     1,     2,     2,     2,     2,     1,
       1,     1,     2,     5,     3,     0,     3,     0,     1,     0,
       3,     0,     3,     0,     2,     0,     2,     1,     2,     1,
       2,     1,     3,     0,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     0,     4,     0,     2,     1,
       3,     7,     4,     7,     0,     2,     1,     1,     3,     0,
       1,     3,     3,     5,     1,     3,     2,     1,     3,     3,
       1,     2,     3,     4,     5,     8,     1,     1,     9,     9,
       4,     4,     4,     0,     2,     3,     4,     4,     2,     2,
       4,     0,     3,     1,     3,     0,     1,     2,     1,     1,
       4,     3,     2,     0,     1,     1,     1,     1,     1,     1,
       0,     1,     0,     2,     3,     4,     4,     4,     3,     3,
       3,     0,     3,     1,     0,     3,     1,     3,     2,     0,
       1,     1,     0,     2,     0,     1,     1,     1,     2,     3,
       1,     1,     3,     1,     3,     1,     3,     2,     3,     2,
       1,     5,     1,     3,     6,     5,     2,     2,     2,     1,
       1,     0,     3,     1,     1,     1,     1,     1,     0,     3,
       5,     5,     4,     4,     4,     2,     4,     3,     3,     3,
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
       1,     2,     4,     5,     4,     5,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      44,     0,     0,     0,     0,     0,     0,     0,   401,   401,
       0,   467,     0,     0,     0,   468,     0,   348,     0,   237,
       0,     0,   236,     0,   401,   409,   271,     0,   372,     0,
     271,     0,     0,     4,    23,    22,     9,    10,    11,    13,
      14,    15,    16,    17,    18,    12,    21,    24,    20,     0,
      19,   257,   234,   250,   304,   256,    25,    26,    33,    34,
      35,    36,    37,    40,    41,    42,    43,    38,    39,    27,
      28,    29,    32,     0,    30,    31,     5,     0,     6,     8,
       7,   257,     0,   514,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     533,   532,   534,   535,   536,   537,   538,   539,   540,     0,
     144,   515,     0,   145,   146,   163,   491,     0,     0,   400,
     404,   406,     0,   166,     0,     0,   511,   376,   332,   512,
     376,     0,   227,     0,   463,   436,   347,     0,   429,   418,
     419,   421,   422,     0,   424,   427,   426,   425,     0,   415,
       0,     0,   434,   407,   410,   411,   275,   314,   509,     0,
       0,     0,     0,   392,     0,     0,     0,     0,   441,   443,
       0,   510,   513,     0,     0,     0,   379,   370,   373,   355,
     371,     0,   373,   392,     0,   366,     0,     0,     0,     0,
     403,     0,     1,     2,    44,     0,     0,   246,   314,   314,
     314,     0,     0,   292,     0,   251,     0,   555,   541,   249,
     248,     0,     0,   147,   155,   156,   157,     0,     0,     0,
     492,     0,     0,     0,     0,     0,   384,     0,     0,     0,
       0,   380,   381,     0,   263,   377,   358,   357,   636,     0,
       0,     0,   387,   386,     0,   461,   344,   346,   345,   343,
     342,   428,   417,   420,   423,     0,     0,     0,     0,   395,
     393,     0,     0,   412,   413,     0,   283,   279,   278,     0,
       0,   273,   276,   315,   316,     0,   455,   454,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   442,     0,
       0,     0,   637,     0,     0,     0,     0,     0,   362,   373,
     349,     0,   361,   367,   373,     0,   359,   360,   373,   363,
       0,     0,   405,     0,     3,   239,   509,    50,    52,    51,
      54,    53,    55,    56,    58,    57,     0,     0,     0,     0,
     116,     0,     0,   526,    60,    61,    80,   235,    64,    69,
      65,    66,     0,    67,    47,     0,   510,     0,     0,     0,
       0,     0,     0,   292,   252,   293,   466,     0,     0,   582,
       0,     0,     0,     0,     0,   271,     0,   630,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   556,   558,   563,   564,   559,   560,
     562,   561,   581,   580,     0,   634,     0,    45,   161,     0,
       0,   486,   493,     0,     0,     0,     0,     0,   478,   478,
     478,   478,   469,   471,     0,   398,   399,   397,     0,     0,
       0,     0,     0,     0,   234,     0,   228,     0,   226,     0,
     229,   325,   330,     0,   456,   457,   464,   462,   430,     0,
     431,   416,   440,   439,   438,   437,   435,     0,     0,   433,
       0,   408,     0,     0,   272,     0,   277,   320,   317,   321,
     290,   451,     0,     0,   445,     0,     0,   391,     0,     0,
       0,     0,   452,   444,   446,   373,   373,   356,   374,   375,
     352,   368,   353,   365,   354,     0,   129,   136,     0,   137,
       0,     0,     0,    45,     0,     0,     0,     0,     0,     0,
     232,   100,    81,    82,     0,    45,    67,   115,     0,    68,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   271,   257,   262,   256,   260,   261,
     309,   305,   306,   288,   289,   268,   269,   253,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   583,   585,   590,   586,
     587,   589,   588,   607,   606,     0,   631,     0,     0,     0,
       0,     0,     0,   568,   567,   570,   571,   573,   574,   575,
     577,   576,   578,   579,   572,   566,   569,   565,   554,   557,
     143,   633,     0,     0,   158,     0,     0,     0,     0,     0,
       0,   477,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   543,     0,     0,     0,   545,   165,     0,   382,     0,
       0,   264,   138,   635,   257,     0,   330,     0,     0,   329,
     341,   339,     0,   341,   341,     0,     0,   327,   388,     0,
       0,   394,   396,   432,   281,   282,   287,   286,   285,   284,
       0,   274,     0,   318,     0,     0,   291,   254,   122,   123,
     447,     0,   385,   389,   448,     0,     0,   453,   351,   350,
       0,     0,   124,     0,     0,     0,     0,     0,     0,   126,
       0,     0,     0,   128,   402,   263,   140,     0,     0,   240,
       0,     0,    62,     0,   121,   117,    59,    99,    98,     0,
       0,     0,    95,    93,    94,    92,    91,    90,   111,    96,
       0,     0,    70,     0,     0,   109,   112,   103,   101,   105,
       0,    83,    84,    85,    86,    87,    89,    88,     0,   135,
     134,   133,   132,    49,    48,   314,   310,   311,   308,     0,
       0,     0,     0,   176,   203,   179,   203,   189,   191,   184,
     195,   199,   197,   175,   174,   190,   195,   181,   173,   201,
     201,   172,   203,   203,     0,   582,   594,   593,   596,   597,
     599,   600,   601,   603,   602,   604,   605,   598,   592,   595,
     591,     0,   584,     0,   159,   160,     0,     0,     0,     0,
       0,     0,   624,   622,     0,   582,     0,   611,    46,   162,
     494,    57,   497,   489,   490,     0,     0,   473,     0,     0,
     481,   470,     0,   478,   472,   390,   546,     0,     0,     0,
     542,     0,     0,     0,   167,   169,   383,   265,   333,   230,
     328,   340,   336,     0,   337,   338,     0,   326,   465,   414,
     280,   319,   263,   263,   323,   322,   449,   450,   459,     0,
     369,   364,   298,     0,   299,     0,   300,     0,     0,   294,
     125,     0,   234,     0,   238,     0,     0,   234,    46,     0,
       0,   118,     0,    97,     0,   110,    71,    72,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   104,   102,   106,
     130,     0,   307,   266,   270,   267,     0,   186,   185,     0,
     177,   198,   182,     0,   180,   178,     0,   192,   183,   187,
     188,     0,     0,   608,     0,     0,   632,     0,     0,     0,
       0,     0,   148,     0,     0,   582,   621,     0,     0,     0,
       0,     0,     0,   501,   487,   488,   205,     0,     0,   475,
     479,   480,   474,     0,   550,   547,   548,   549,   544,     0,
     213,     0,     0,     0,     0,   290,     0,   301,   458,     0,
     295,   296,   297,   127,   141,   139,   142,   233,   241,   244,
       0,     0,   231,    63,     0,   120,   114,     0,   107,    73,
      74,    75,    76,    77,    79,    78,   113,     0,     0,     0,
       0,     0,   610,     0,     0,   626,   149,   151,   150,   152,
       0,     0,   582,   625,     0,     0,     0,     0,   582,     0,
       0,   616,     0,     0,   496,     0,     0,   171,     0,   485,
       0,     0,   476,   551,   552,   553,     0,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   164,   211,   168,
     331,   335,     0,   255,   324,     0,   312,   460,   242,     0,
       0,   119,   108,     0,   202,   194,     0,   196,   200,   609,
       0,   153,     0,   623,     0,     0,     0,     0,   619,     0,
       0,   617,     0,     0,     0,     0,     0,   207,     0,     0,
       0,   209,   204,   483,   482,   484,     0,   224,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   334,
       0,     0,   259,   245,     0,     0,   629,   154,   620,     0,
     582,   582,   615,     0,     0,     0,   263,   500,   498,   499,
       0,   206,   208,   210,   170,   223,   220,   222,   215,   214,
     219,   218,   217,   216,   221,   212,   302,   313,   243,   193,
     582,     0,   618,   613,     0,   614,   292,   504,   505,   502,
     503,   508,     0,     0,   612,   258,     0,     0,   495,     0,
       0,     0,     0,     0,   627,   506,     0,   628,     0,     0,
     507
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    31,    32,    33,   396,   334,   335,   336,   723,   458,
     725,   338,   508,   704,   705,   882,   339,   340,   341,   342,
     738,   494,   550,   551,   695,   696,   552,   109,   553,    38,
     554,   555,   556,   557,   558,   559,   560,    39,    40,    41,
      42,   219,    43,    44,   561,    46,   230,   833,   834,   835,
     774,   910,   914,   912,   917,   907,  1027,  1092,  1047,  1048,
    1098,    47,   241,   428,   562,   197,    49,   499,   698,   877,
     980,   563,   343,    52,    53,    54,   564,    55,   424,   666,
     157,   270,   271,   272,   452,   660,   545,   667,   205,   495,
    1056,   202,   203,   541,   542,   748,  1112,   275,   459,   460,
     853,   854,   431,   432,   645,   842,    56,   250,   137,    57,
     306,   302,   187,   298,   236,   188,    58,   231,   232,   242,
     673,    59,   243,    60,   284,    61,   259,   260,    62,   417,
     120,   312,    63,    64,    65,    66,   155,   265,    67,   148,
     149,   252,   439,    68,   262,    69,   134,   446,    70,   168,
     169,   288,   278,   436,   677,   859,    71,   245,   437,    72,
      73,    74,   412,   413,   616,   952,   949,    75,   224,   401,
     402,   943,  1026,  1161,  1168,   344,   345,   189,   110,   346,
      76,    77,   624,   625,   208,   383,   384,   385,   565,   566,
     567,   386,   568,   569,  1020,  1021,  1022,   570,   802,   803,
     937,   571,   572,   573,   574,    78,    79,    80
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -710
static const yytype_int16 yypact[] =
{
    3061,    42,  2592,    99,  2592,  2592,  2592,   165,   -92,   -92,
     131,  -710,    -1,  2637,  2637,   152,  2592,  -103,   746,  -710,
    2592,   -34,  -710,   746,   -92,    52,    76,  2445,   781,    25,
      76,   166,   -48,  -710,  -710,  -710,  -710,  -710,  -710,  -710,
    -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,   205,
    -710,    30,   140,  -710,    72,    94,  -710,  -710,  -710,  -710,
    -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,
    -710,  -710,  -710,   204,  -710,  -710,  -710,   301,  -710,  -710,
    -710,   334,   336,  -710,  -710,  -710,  -710,  -710,  -710,  -710,
    -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,
    -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,   323,
    -710,  -710,   345,  -710,   480,  -710,   376,  2637,   383,  -710,
    -710,  -710,   388,   267,   383,  2637,  -710,   396,  -710,  -710,
     396,   168,   281,   383,   227,  -710,  -710,   324,   268,  -710,
     243,  -710,  -710,   290,  -710,  -710,  -710,  -710,   -26,  -710,
     347,   383,   112,  -710,  -710,   -41,   233,    82,  -710,   117,
      69,  2671,   416,   351,  2671,   428,   459,   117,   266,  -710,
     117,  -710,  -710,   510,   289,   337,  -710,  -710,    28,  -710,
    -710,   296,    28,   407,   312,   402,   339,   346,   349,   525,
     373,  2637,  -710,  -710,  3061,  2637,  2106,  -710,    82,    82,
      82,   505,   239,   359,   406,  -710,  2592,    20,  -710,  -710,
    -710,   485,  1498,   537,   545,  -710,  -710,   608,   610,   559,
    -710,  2671,   484,   449,   341,   258,  -710,   201,   590,   612,
    2637,   404,  -710,   511,   443,  -710,  -710,  -710,  -710,   536,
     549,  2488,  -710,   433,   632,  -710,  -710,  -710,  -710,  -710,
    -710,  -710,  -710,  -710,  -710,   543,   746,   324,   476,  -710,
     439,   543,   558,  -710,  -710,   667,  -710,  -710,  -710,   642,
     -68,   233,  -710,  -710,  -710,  1648,  -710,  -710,  2106,   142,
    2106,   117,  2671,   383,   686,   117,  2671,   117,  -710,  2106,
    1215,  2106,  -710,  2637,  2637,  2637,   679,  2106,  -710,    28,
    -710,   321,  -710,  -710,    28,   710,  -710,  -710,    28,  -710,
    1093,   633,  -710,   550,  -710,    63,   292,  -710,  -710,  -710,
    -710,  -710,  -710,  -710,  -710,   681,  2106,  2106,  2106,  1727,
    2106,   682,   688,   700,  -710,  -710,  -710,  3560,  -710,  -710,
    -710,  -710,   702,  -710,  -710,   703,   732,    65,    65,    65,
    2106,   316,   316,   664,  -710,  -710,  -710,  2211,  2106,  1098,
     -78,  2592,  2106,   730,  2106,    76,  1215,  -710,   548,   551,
     552,   554,   556,   560,   563,   565,   567,   569,   571,   577,
     581,   584,   588,   674,    20,  -710,  -710,  -710,  -710,  -710,
    -710,  -710,  -710,  -710,    42,  -710,    13,  3560,  -710,   598,
     783,   591,  -710,   773,   798,   799,   684,   689,   742,   742,
     742,    16,   599,  -710,   754,  -710,  -710,  -710,   534,   723,
     794,   383,   759,  1805,   140,   837,  -710,   481,   611,  1407,
     677,  2072,  -710,   383,   681,  -710,  -710,   614,  -710,   649,
    -710,  -710,  -710,  -710,  -710,  -710,  -710,   383,   383,  -710,
     383,  -710,    24,   335,  -710,   233,  -710,  -710,  1343,  -710,
     263,  3560,   801,   804,  3560,  2106,   117,  -710,   843,  2106,
     117,   810,  3560,  -710,  3560,    28,    28,  -710,  -710,  3560,
    -710,   811,  -710,   624,  -710,   820,  -710,  -710,  1877,  -710,
    1955,  2034,    32,  3282,  2106,   821,   691,  2671,  1241,   671,
    -710,  3376,  -710,  -710,   636,  3488,   354,  3560,   683,  -710,
    2671,  2106,  2106,   479,  2106,  2106,  2106,  2106,  2106,  2106,
    2106,  2106,  2365,   836,   646,  2106,  2106,  2106,  2106,  2106,
    2106,  2106,   324,  2527,    76,  -710,   861,  -710,   861,  -710,
    3399,   658,  -710,  -710,  -710,   -28,   755,  -710,  2956,  3453,
     663,   665,   670,   672,   675,   676,   699,   704,   705,   708,
     711,   712,   713,   714,   715,   791,  1098,  -710,  -710,  -710,
    -710,  -710,  -710,  -710,  -710,  2106,  -710,   405,  2903,   867,
    2924,  1570,   222,  -710,  -710,  -710,  -710,  -710,  -710,  -710,
    -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,
    -710,  -710,  2106,   898,  -710,  2671,   473,   906,   907,   908,
     922,  -710,  2671,  2671,  2671,  2637,  2671,   299,   843,  3104,
     916,  -710,   917,   933,    35,  -710,  -710,  2565,  -710,   843,
    2106,  3560,  -710,  -710,  2411,   677,   912,  2488,  2637,  -710,
     802,  -710,  2488,   802,   802,   823,  2637,  -710,  -710,   632,
     383,  -710,  -710,   433,  -710,  -710,  -710,  -710,  -710,  -710,
     915,   233,  2592,  -710,  2299,  1648,  -710,  -710,  -710,  -710,
    3560,  2106,  -710,  -710,  3560,  2106,   473,  -710,  -710,  -710,
     919,   953,  -710,  2106,  3303,  2106,  3335,  2106,  3356,  -710,
    3104,  2106,  3512,  -710,  -710,   -85,  -710,   937,    40,  -710,
     924,  2106,  -710,  2106,   -54,  -710,  -710,  2802,  3376,  2106,
    2365,   836,   997,   997,   997,   997,   997,   997,  1150,   970,
    2365,  2365,  -710,   701,  1727,  -710,  -710,  -710,  -710,  -710,
     568,   835,   835,   927,   927,   927,   927,  -710,   928,  -710,
    -710,  -710,  -710,  -710,  -710,    82,  -710,  -710,  -710,  2106,
     316,   316,   316,  -710,   930,  -710,   930,  -710,  -710,  -710,
     931,   842,   955,  -710,  -710,  -710,   931,  -710,  -710,   957,
     957,  -710,   930,   930,    26,  1098,  -710,  -710,  -710,  -710,
    -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,
    -710,   944,  -710,  2882,   880,   883,   885,   886,   968,   632,
     946,  2106,   -32,  -710,  2332,  1098,   -47,  -710,  3560,  -710,
    -710,  -710,   939,  -710,  -710,  1018,  1032,  -710,  3104,   259,
     235,  -710,   849,   742,  -710,  -710,   983,  3104,  3104,  3104,
    -710,   522,   921,    44,  -710,  -710,  -710,  3560,   969,   677,
    -710,  -710,  -710,   659,  -710,  -710,  2488,  -710,  -710,   433,
    -710,  -710,   443,   -75,   677,  -710,  3560,  3560,  -710,    49,
    -710,  -710,  3560,  2106,  3560,  2106,  3560,  2106,  1020,  3560,
    -710,  2671,   140,  2106,    42,  2671,  2106,   -71,  3536,  2945,
    2106,  -710,   959,   970,   881,  -710,  -710,  -710,  2365,  2365,
    2365,  2365,  2365,  2365,  2365,  2365,    50,  -710,  -710,  -710,
    -710,  1648,  -710,  -710,  -710,  -710,  1057,  -710,  -710,  1060,
    -710,  -710,  -710,  1061,  -710,  -710,  1062,  -710,  -710,  -710,
    -710,   839,   473,  -710,   965,   854,  -710,   632,   632,   632,
     632,   941,   614,  1067,  2966,  1098,  -710,   980,  2365,   410,
     429,   632,  1082,   923,  -710,  -710,  -710,   124,   294,  -710,
    -710,  -710,  -710,  2592,  -710,  1033,  1035,  1037,  -710,  1052,
     506,  2565,  2637,  2106,   668,   239,  2488,   973,  -710,   473,
    3560,  3560,  3560,  -710,  -710,  -710,  3560,  -710,  -710,  3560,
      51,  1054,  -710,  -710,  2106,  3560,  -710,  2365,   950,   848,
     848,  1070,  1070,  1070,  1070,  -710,  -710,   -38,  1059,    56,
    1068,  1069,  -710,   866,  1063,  -710,   614,   614,   614,   614,
     632,   982,  1098,  -710,  1036,   492,  2365,  2106,  1098,   988,
     446,  -710,  1011,    78,  -710,  1094,   899,    33,  1109,  -710,
    1112,   473,  -710,  -710,  -710,  -710,  2671,  1099,  1099,  1099,
    1099,  1099,  1099,  1099,  1099,  1099,  1099,   894,  -710,  -710,
    -710,  3560,  2106,  -710,   677,  1051,  1008,  -710,  -710,  2106,
    2106,  3560,   950,  2488,  -710,  -710,  1125,  -710,  -710,  -710,
     903,   614,   632,  -710,   910,  2365,   889,  2987,  -710,   911,
    1009,  -710,  1031,  1015,  2488,   244,  1113,  -710,  1133,   473,
    1012,  -710,  -710,  -710,  -710,  -710,    57,  -710,  1141,  1145,
     976,  1148,  1149,  1153,  1155,  1157,  1158,  1146,   506,  3560,
    2106,  2106,  -710,  3560,    59,  1123,  -710,   614,  -710,   942,
    1098,  1098,  -710,   936,  1040,   938,   -75,  -710,  -710,  -710,
     390,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,
    -710,  -710,  -710,  -710,  -710,  -710,   940,  3560,  -710,  -710,
    1098,  1066,  -710,  -710,   945,  -710,   664,  -710,  -710,  -710,
    -710,   -20,  1071,  1119,  -710,  -710,  1151,  1165,  -710,  1124,
     961,  1186,  1188,   967,  -710,  -710,   977,  -710,  1173,  1193,
    -710
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -710,  -710,  -710,  1005,  -294,  -710,  -572,  -332,  -215,   529,
     490,  -710,  -710,  -710,   499,  -710,   -21,  1177,  -710,  -710,
    -710,  -710,    21,    38,  -710,   338,    31,    43,    39,  -710,
    -163,  -144,  -133,  -121,  -113,   -99,   -94,  -710,  -710,  -710,
    -710,   629,  -710,  -710,    45,  -710,  -710,  -710,   246,   596,
    -552,   445,  -710,  -710,   447,  -156,  -710,  -710,  -710,   105,
      36,  -710,  -710,  -710,    41,  -415,  -710,  -710,   179,  -710,
     159,    15,     0,    22,  -710,   260,   -91,   302,  -665,  1019,
     -12,  -710,   767,  -247,  -710,  -710,  -312,   269,  -199,  -710,
    -710,  -710,  -710,  -710,   474,  -710,  -710,  -171,   566,  -549,
     141,  -234,    23,   806,  -710,  -143,  -710,  -710,  -710,  -710,
    -710,  -710,  -710,  -136,  1105,  -710,  -710,  -710,   815,   -67,
    -465,  -710,  -408,  -710,  1056,  -710,   789,  -710,  -710,  -710,
      86,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  -710,  1217,
     985,  -710,   981,  -710,  -710,  -710,     5,  -710,  -710,   877,
     956,  -710,  -108,   600,  -710,  -710,  -710,  -710,  -343,  -710,
    -710,  -710,  -710,   628,   252,  -710,  -710,  -710,  -710,  -710,
     643,  -710,  -710,  -710,  -710,   -22,   -11,  -710,    -3,     6,
    -710,  -710,  -710,   419,  -710,  -710,  -710,   863,  -709,  -710,
     685,  -710,   -87,   -82,  -710,   232,   236,   -80,  -710,   453,
    -710,   -79,   -77,   -74,   -73,  -710,  -710,  -710
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -514
static const yytype_int16 yytable[] =
{
      51,    81,   128,   128,   354,   170,   167,   430,   111,   632,
     111,   111,   111,   135,   548,    50,   492,   135,   191,   129,
     129,    34,   111,    82,   456,   150,   111,   347,   348,   349,
     872,    36,   806,   171,   812,   504,   127,   130,    35,    37,
     546,    48,   653,  1087,   372,    45,   300,   113,   114,   115,
     880,   227,   280,  1088,   601,   454,   296,   233,   193,   289,
       1,  1166,   291,   373,   357,   654,   924,   826,   358,   359,
     360,  -247,   935,   689,   374,  1063,   830,     4,   361,     6,
     921,   874,     1,   941,   258,   960,   375,   198,   199,   200,
     968,   996,  1058,   276,   376,   121,   940,  1065,  1134,   362,
    1148,   611,   112,   498,   858,     1,   128,   119,   377,   279,
     153,   423,   125,   378,   128,   750,   382,    12,   255,   575,
     387,   423,   922,   129,   136,   388,   196,   389,   390,  1089,
     391,   129,   363,   392,   393,  -292,  -247,    51,   868,   281,
     225,   276,   285,   703,  1028,   871,   364,   462,   234,    19,
     273,   576,   249,   825,   547,   966,   463,   151,   246,   981,
     263,   264,   455,   480,   836,   801,   192,   171,   482,   154,
     171,   238,   484,   465,   122,   247,    22,   469,   248,   471,
     128,   194,   274,   665,   128,  1090,   365,   965,   967,   366,
     722,  1084,   665,   635,    51,   131,  1167,   129,   156,   403,
    -292,   129,   751,   135,   256,   615,   204,    51,    26,    50,
      30,   356,   111,   190,   313,    34,   467,   201,   315,   128,
    1029,   372,   381,   435,   297,    36,  1013,   171,   368,    26,
     128,   534,    35,    37,   467,    48,   129,  1091,   370,    45,
     373,   429,   849,   602,   440,   369,   371,   129,   380,   367,
     440,   374,   379,   420,   655,   923,   261,    51,   277,  -247,
     466,   129,   602,   375,   470,   831,   946,   129,   170,   167,
     875,   376,   445,   266,   961,   955,   956,   957,   442,   969,
     602,  1059,   128,   128,   128,   377,  1066,   875,   171,  1059,
     378,  -292,   171,   382,   239,   443,   171,   387,   444,   129,
     129,   129,   388,  1073,   389,   390,   277,   391,   649,  1078,
     392,   393,   123,   950,  1030,    51,   475,   476,   477,   293,
    1127,   543,   124,  -292,   408,   226,   414,   409,   544,   506,
     500,   509,  -513,   132,  -511,   195,   435,   196,   415,   678,
     679,   116,   256,   133,   170,   167,   117,   535,   535,   535,
    1003,    82,   997,   581,   233,   206,   118,   267,   671,    51,
     410,   947,   675,   111,     1,   408,   648,   111,   409,  -257,
    -257,  -257,   171,   207,   351,   209,   664,   210,   722,   211,
     651,   258,   352,  1128,    51,   212,   268,   226,   722,   722,
    1031,   228,   951,   229,    51,   209,   269,  1057,   351,   381,
     235,   410,   294,   839,   577,   368,   352,   240,   843,   600,
     481,  1151,  1152,   411,   456,   370,   128,  1129,   639,   244,
     647,    12,   369,   371,   416,   380,   251,   634,   948,   379,
     896,   406,   407,   129,   253,   129,   254,   129,   903,   904,
     905,  1162,   889,   890,   891,   892,   893,   894,   895,    82,
     656,   807,   290,    19,   823,   663,   932,   975,   282,  1095,
     257,  1156,   982,   283,   111,   794,   795,   796,   797,   798,
     286,   204,   722,   287,  1017,   697,   699,   317,   318,   319,
      22,   320,   321,   322,   126,   323,   324,   811,   706,  -257,
      26,  1017,   220,   665,  -303,   884,   290,  -257,    81,  -257,
     844,   845,  -303,   171,   171,   886,   887,   709,   710,   711,
     657,   744,   658,   292,    30,   299,   171,  1132,   295,   301,
      82,   427,   745,   726,   889,   890,   891,   892,   893,   894,
     895,   304,    51,  1018,  1019,   799,   619,   305,   659,   171,
     213,   214,   215,   216,   217,   221,   126,   742,   619,   309,
    1018,  1080,   620,   739,   222,   223,   722,   722,   722,   722,
     722,   722,   722,   722,   620,   310,    51,   307,   622,   623,
     740,   311,   308,   741,   901,   621,   897,   438,   898,   899,
     622,   623,   350,   403,  1006,  1007,  1008,  1009,  1037,   939,
     818,   819,   820,   218,   822,  1157,   355,   394,  1023,  1016,
     908,  1158,  -159,  1159,   128,   818,   722,   536,   538,   539,
    -160,   171,   964,   398,  1160,   399,   919,   920,   171,   171,
     171,   129,   171,   639,   400,   404,   128,   840,   435,   405,
     418,   128,   419,   171,   421,   847,   422,   429,   821,   423,
     129,   332,   429,   129,   129,   425,   434,    26,   129,   537,
     537,   537,   129,   128,   727,   722,   728,   729,   426,   851,
     612,   613,   614,   433,   429,   447,   730,  1071,   111,   448,
     129,   450,   451,   988,   989,   990,   991,   992,   993,   994,
     995,  1075,   453,   478,   722,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     468,   726,  1038,  1039,  1040,   483,  1041,   496,  1042,   497,
     888,   279,     1,  1015,   506,   337,  1043,  1044,  1045,  1117,
     510,  1046,  1054,   889,   890,   891,   892,   893,   894,   895,
    -131,   397,   532,   722,   579,   533,    82,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,  1062,   640,  -512,    51,   204,   583,   435,   598,
     584,   585,   640,   586,   172,   587,   641,   603,   604,   588,
     642,   640,   589,   643,   590,   641,   591,   606,   592,   642,
     593,  1076,   643,   963,   641,    51,   594,   461,   642,   464,
     595,   643,  1052,   596,   138,   139,  1146,   597,   472,   644,
     474,   605,   607,   608,   173,   609,   479,   611,   644,   617,
     610,   618,   626,   140,   627,   128,   629,   644,   650,   493,
     633,   637,   668,   141,   649,   669,   429,   672,   142,   697,
     676,   680,   129,   978,   681,   501,   502,   503,   505,   507,
    1119,   682,   693,   694,   700,   143,   701,   174,   175,   527,
     528,   529,   530,   531,    51,   144,   724,   171,   200,   540,
     703,   171,   891,   892,   893,   894,   895,   549,   749,   977,
     752,   578,   776,   580,   777,   176,   791,   804,   177,   778,
     987,   779,   145,   809,   780,   781,   435,   435,   435,   435,
     813,   814,   146,   889,   890,   891,   892,   893,   894,   895,
     435,   889,   890,   891,   892,   893,   894,   895,   782,   178,
     827,   828,   815,   783,   784,    51,   147,   785,  1120,   818,
     786,   787,   788,   789,   790,   179,   816,   829,   180,   841,
    1032,  1050,   631,   838,   846,   128,   850,  1165,   861,   111,
     860,   873,   181,   182,   876,   531,   429,   171,   129,   900,
     906,   909,   129,   931,   889,   890,   891,   892,   893,   894,
     895,  -378,   889,   890,   891,   892,   893,   894,   895,   435,
     183,  1150,   911,   925,   670,   913,   184,   916,   674,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   185,
     927,   933,    51,   928,   699,   929,   930,   684,    51,   686,
     688,   942,   944,   692,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   945,   954,   953,   962,
     707,   708,   171,   712,   713,   714,   715,   716,   717,   718,
     719,   435,   128,   959,   731,   732,   733,   734,   735,   736,
     737,   973,   998,   429,   986,   999,  1000,  1001,  1002,   129,
    1004,  1010,  1011,   128,  1099,  1100,  1101,  1102,  1103,  1104,
    1105,  1106,  1107,  1005,   429,  1014,  1024,  1033,  1025,  1034,
     129,  1035,  1036,  1055,  1060,  1069,   316,   317,   318,   319,
    1064,   320,   321,   322,   793,   323,   324,   325,   895,  1067,
    1068,  1070,  1072,   326,  1079,  1074,  1083,  1086,  1085,  1093,
      51,    51,  1094,  1097,  1108,   327,   328,   485,  1110,  1111,
    1115,   808,  1116,   329,   486,  1123,  1124,  1130,     1,  1118,
    1122,  1125,     2,  1131,  1133,  1135,   358,   359,   360,  1136,
      51,  1137,  1138,  1139,  1144,     4,   361,     6,  1140,   837,
    1141,   487,  1142,  1143,  1149,  1153,  1154,  1155,  1170,   488,
     602,  1163,   330,  1173,  1164,  1171,  1169,   362,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,  1172,
    1174,  1175,  1176,   489,  1178,    12,  1177,  1179,  1180,   314,
     856,   885,   331,   881,   857,   186,   800,  1049,   817,   974,
     363,   915,   862,  1145,   864,  1096,   866,   918,   158,  1114,
     869,   353,   661,   902,   364,  1126,   490,    19,   159,   160,
     878,   855,   879,   636,  1053,   237,   628,   652,   883,   303,
     152,   441,   449,   582,   158,   824,   473,   599,   810,   848,
     958,   792,  1081,   397,    22,   936,  1082,     0,     0,     0,
       0,   332,     0,     0,   365,     0,     0,   366,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   540,     0,
     491,     1,     0,     0,     0,     0,     0,     0,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,   333,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,     0,     0,     0,     0,     0,   367,     0,     0,
     934,     0,   161,   162,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   511,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   164,   165,     0,     0,     0,     0,     0,     0,
       0,     0,   970,     0,   971,     0,   972,     0,     0,     0,
       0,     0,   976,     0,     0,   979,     0,    26,     0,   985,
     126,     0,     0,   662,     0,     0,     0,     0,     0,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,     0,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
       0,     0,     0,     0,     0,     0,     0,   638,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1051,     0,     0,     0,     0,     0,     0,     0,
       0,   316,   317,   318,   319,     0,   320,   321,   322,     0,
     323,   324,   325,  1061,     0,     0,     0,     0,   326,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     327,   328,     0,     0,     0,     0,     0,     0,   329,   395,
       0,     0,     0,     0,     0,     0,  1077,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,     0,   316,   317,   318,   319,   330,   320,   321,
     322,  1109,   323,   324,   325,     0,     0,     0,  1113,   979,
     326,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   327,   328,   457,     0,     0,   331,     0,     0,
     329,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,     0,     0,   273,   397,
    1147,     0,     0,     0,     0,     0,     0,     0,     0,   330,
       0,   316,   317,   318,   319,     0,   320,   321,   322,     0,
     323,   324,   325,     0,     0,     0,   332,     0,   326,     0,
     274,     0,     0,     0,     0,     0,     0,     0,     0,   331,
     327,   328,   457,     0,     0,     0,     0,     0,   329,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,   333,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   330,     0,     0,
     316,   317,   318,   319,     0,   320,   321,   322,   332,   323,
     324,   325,     0,     0,     0,     0,     0,   326,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   331,     0,   327,
     328,     0,     0,     0,     0,     0,     0,   329,     0,     0,
       0,     0,     0,     0,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,   333,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,     0,
       0,     0,     0,     0,     0,     0,   330,     0,   316,   317,
     318,   319,   630,   320,   321,   322,   332,   323,   324,   325,
       0,     0,     0,     0,     0,   326,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   331,   327,   328,     0,
       0,     0,     0,     0,     0,   329,     0,     0,     0,     0,
       0,     0,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,   333,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,     0,     0,     0,
     316,   317,   318,   319,   330,   320,   321,   322,     0,   323,
     324,   325,     0,    26,     0,   332,     0,   326,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   327,
     328,     0,     0,     0,   331,     0,     0,   329,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,   333,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   330,     0,   316,   317,
     318,   319,     0,   320,   321,   322,     0,   323,   324,   325,
       0,     0,     0,   332,     0,   326,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   331,   327,   328,     0,
     683,     0,     0,     0,     0,   329,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,   333,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   330,     0,     0,   316,   317,   318,
     319,     0,   320,   321,   322,   332,   323,   324,   325,     0,
       0,     0,     0,     0,   326,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   331,     0,   327,   328,   685,     0,
       0,     0,     0,     0,   329,   126,     0,     0,     0,     0,
       0,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,   333,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,     0,     0,     0,   316,
     317,   318,   319,   330,   320,   321,   322,     0,   323,   324,
     325,     0,     0,   332,     0,     0,   326,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   327,   328,
       0,     0,   646,   331,     0,     0,   329,   687,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,   333,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,     0,   330,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   332,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    83,   331,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   434,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,   333,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   332,     0,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,     0,   126,     0,     0,     0,     0,     0,     0,     0,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
     333,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   316,   317,   318,   319,   427,
     320,   321,   322,     0,   323,   324,   325,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   720,   721,     0,     0,   316,   317,
     318,   319,   329,   320,   321,   322,     0,   323,   324,   325,
       0,     0,     0,     0,     0,     0,     0,   938,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   720,   721,     0,
       0,     0,   852,     0,     0,   329,     0,     0,     0,     0,
       0,   330,     0,     0,   126,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
       0,   331,     0,     0,   330,     0,     0,     0,   158,     0,
       0,     0,   209,     0,     0,     0,     0,     0,   159,   160,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   331,     0,     0,     0,     0,     0,
       0,   638,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   126,     0,     0,     0,     0,     0,     0,     0,     0,
     332,     0,     0,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   427,     0,
     158,     0,     0,   332,     0,     0,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,   333,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   743,   161,   162,     0,     0,     0,     0,   158,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,   333,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   163,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   164,   165,   166,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     126,     0,     0,     0,     0,     0,     0,     0,     0,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   158,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   832,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,     0,     0,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     511,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   511,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   511,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   511,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   511,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   511,   512,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,     0,     0,     0,   753,
     754,   755,     0,     0,     0,     0,   756,     0,     0,     0,
       0,     0,     0,     0,   757,     0,     0,     0,   758,   759,
       0,   760,     0,     0,     0,     0,     0,   761,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   762,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   763,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   764,     0,   765,     0,   766,     0,
     801,     1,     0,     0,     0,     2,     0,   805,     0,     0,
     767,   926,     0,     0,     3,     0,     0,     0,     4,     5,
       6,     0,     0,     0,     0,     0,     0,   768,   984,     0,
       7,     0,     0,     8,     0,     0,     0,     0,     0,     0,
     769,   770,   771,     0,     9,     0,     0,     0,    10,  1012,
     772,   773,     0,     0,     0,    11,     0,     0,    12,    13,
      14,     0,     0,    15,     0,     0,     0,     0,     0,    16,
    1121,    17,     0,     0,     0,     0,     0,   753,   754,   755,
      18,     0,     0,     0,   756,     0,   649,     0,     0,     0,
      19,     0,   757,     0,     0,     0,   758,   759,     0,   760,
       0,     0,     0,     0,     0,   761,     0,     0,     0,     0,
       0,     0,    20,     0,     0,   762,    21,    22,     0,     0,
      23,     0,    24,    25,     0,     0,     0,    26,     0,     0,
      27,    28,   763,     0,     0,    29,     0,     0,     0,     0,
       0,     0,   764,     0,   765,     0,   766,     0,     0,     0,
       0,    30,     0,     0,     0,     0,     0,     0,   767,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   768,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   769,   770,
     771,     0,     0,     0,     0,     0,     0,     0,   772,   773,
     511,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   511,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   690,   511,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   511,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   691,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,     0,   863,   511,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,   531,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   865,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   867,
     746,   511,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,     0,     0,     0,     0,     0,   747,     0,     0,
       0,     0,     0,     0,     0,   775,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,     0,     0,   702,
     511,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,     0,     0,   870,   511,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,     0,     0,   983,   511,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531
};

static const yytype_int16 yycheck[] =
{
       0,     1,    13,    14,   203,    27,    27,   241,     2,   424,
       4,     5,     6,    16,   357,     0,   310,    20,    30,    13,
      14,     0,    16,     1,   271,    20,    20,   198,   199,   200,
     695,     0,   581,    27,   606,   329,    13,    14,     0,     0,
     352,     0,   450,    10,   207,     0,   182,     4,     5,     6,
     104,   118,   160,    20,    41,   123,    28,   124,   106,   167,
      40,    81,   170,   207,    44,    41,   775,   619,    48,    49,
      50,    41,   104,    41,   207,   113,    41,    57,    58,    59,
      54,    41,    40,   130,   151,    41,   207,    15,    16,    17,
      41,    41,    41,    24,   207,     9,   805,    41,    41,    79,
      41,    85,     3,    40,   676,    40,   117,   199,   207,    40,
      24,   196,   113,   207,   125,   143,   207,    97,   144,   197,
     207,   196,    96,   117,   227,   207,   197,   207,   207,    96,
     207,   125,   112,   207,   207,    41,   106,   137,   690,   161,
     117,    24,   164,   197,    20,   230,   126,     5,   125,   129,
      68,   229,   137,   618,   353,   230,    14,   191,   137,   230,
     201,   202,   230,   299,   629,   197,     0,   161,   304,   117,
     164,     3,   308,   281,    43,   137,   156,   285,   137,   287,
     191,   229,   100,   230,   195,   152,   166,   852,   853,   169,
     522,   113,   230,   427,   194,    43,   216,   191,   122,   221,
     106,   195,   230,   206,   230,   189,   112,   207,   166,   194,
     190,   206,   206,   188,   191,   194,   283,   145,   195,   230,
      96,   384,   207,   244,   196,   194,   935,   221,   207,   166,
     241,   166,   194,   194,   301,   194,   230,   204,   207,   194,
     384,   241,   650,   230,   255,   207,   207,   241,   207,   229,
     261,   384,   207,   230,   230,   229,   144,   257,   189,   229,
     282,   255,   230,   384,   286,   230,   818,   261,   290,   290,
     230,   384,   257,    40,   230,   827,   828,   829,   257,   230,
     230,   230,   293,   294,   295,   384,   230,   230,   282,   230,
     384,   197,   286,   384,   126,   257,   290,   384,   257,   293,
     294,   295,   384,  1012,   384,   384,   189,   384,   230,  1018,
     384,   384,   181,    78,    20,   315,   293,   294,   295,    30,
      76,     5,   191,   229,    66,     4,   125,    69,    12,   329,
     315,   331,    40,   181,    42,   130,   357,   197,   137,   475,
     476,   176,   230,   191,   366,   366,   181,   347,   348,   349,
     922,   329,   901,   365,   421,   151,   191,   124,   466,   359,
     102,   102,   470,   357,    40,    66,   433,   361,    69,    15,
      16,    17,   366,    72,   135,    41,   113,    41,   710,    56,
     447,   448,   143,   139,   384,    40,   153,     4,   720,   721,
      96,     3,   157,   126,   394,    41,   163,   969,   135,   384,
       4,   102,   113,   637,   361,   384,   143,   126,   642,   394,
      89,  1120,  1121,   155,   661,   384,   427,   173,   429,   192,
     431,    97,   384,   384,   223,   384,   158,   427,   169,   384,
     724,    90,    91,   427,   191,   429,   146,   431,   750,   751,
     752,  1150,    32,    33,    34,    35,    36,    37,    38,   427,
     115,   229,   230,   129,   155,   458,   799,   872,    42,  1031,
     113,  1126,   877,   112,   458,    60,    61,    62,    63,    64,
      42,   112,   804,    14,    45,   497,   498,     4,     5,     6,
     156,     8,     9,    10,     3,    12,    13,    14,   510,   135,
     166,    45,   116,   230,   135,   710,   230,   143,   498,   145,
     643,   644,   143,   497,   498,   720,   721,    28,    29,    30,
     175,   533,   177,     3,   190,   219,   510,  1089,   181,   112,
     498,    40,   534,   523,    32,    33,    34,    35,    36,    37,
      38,   219,   532,   104,   105,   130,    14,   135,   203,   533,
      60,    61,    62,    63,    64,   169,     3,   532,    14,   200,
     104,   105,    30,   532,   178,   179,   888,   889,   890,   891,
     892,   893,   894,   895,    30,    40,   566,   228,    46,    47,
     532,   198,   226,   532,   745,    41,     8,    34,    10,    11,
      46,    47,    77,   605,   927,   928,   929,   930,    82,   804,
     612,   613,   614,   113,   616,   205,   190,   112,   941,   189,
     756,   211,    65,   213,   615,   627,   938,   347,   348,   349,
      65,   605,   846,     5,   224,     5,   772,   773,   612,   613,
     614,   615,   616,   634,    65,   141,   637,   638,   649,   180,
      40,   642,    20,   627,   230,   646,   125,   637,   615,   196,
     634,   168,   642,   637,   638,   109,    14,   166,   642,   347,
     348,   349,   646,   664,     8,   987,    10,    11,   109,   662,
     408,   409,   410,   230,   664,   189,    20,  1010,   662,   230,
     664,   113,     5,   888,   889,   890,   891,   892,   893,   894,
     895,   189,    40,     4,  1016,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
      24,   711,   206,   207,   208,     5,   210,    84,   212,   169,
      19,    40,    40,   938,   724,   196,   220,   221,   222,  1072,
      42,   225,   966,    32,    33,    34,    35,    36,    37,    38,
      40,   212,    40,  1075,    14,    42,   724,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   987,   114,    42,   775,   112,   229,   799,   105,
     229,   229,   114,   229,     3,   229,   127,   189,     5,   229,
     131,   114,   229,   134,   229,   127,   229,    24,   229,   131,
     229,  1016,   134,   144,   127,   805,   229,   278,   131,   280,
     229,   134,   144,   229,    68,    69,  1110,   229,   289,   160,
     291,   230,    24,    24,    43,   141,   297,    85,   160,   230,
     141,    77,   109,    87,    40,   846,    77,   160,   189,   310,
       3,   230,    41,    97,   230,    41,   846,     4,   102,   871,
      40,    40,   846,   875,   230,   326,   327,   328,   329,   330,
    1075,    41,    41,   172,   193,   119,   230,    86,    87,    34,
      35,    36,    37,    38,   874,   129,    40,   871,    17,   350,
     197,   875,    34,    35,    36,    37,    38,   358,   230,   874,
     135,   362,   229,   364,   229,   114,   105,    30,   117,   229,
      19,   229,   156,     5,   229,   229,   927,   928,   929,   930,
       4,     4,   166,    32,    33,    34,    35,    36,    37,    38,
     941,    32,    33,    34,    35,    36,    37,    38,   229,   148,
      14,    14,    24,   229,   229,   935,   190,   229,    49,   961,
     229,   229,   229,   229,   229,   164,    24,    14,   167,   147,
     953,   962,   423,    41,   131,   966,    41,  1156,     5,   953,
      41,    24,   181,   182,    40,    38,   966,   961,   962,    41,
      40,    40,   966,     5,    32,    33,    34,    35,    36,    37,
      38,   200,    32,    33,    34,    35,    36,    37,    38,  1010,
     209,    49,   150,    49,   465,    40,   215,    40,   469,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,   228,
     130,    65,  1012,   130,  1036,   130,   130,   488,  1018,   490,
     491,    82,     4,   494,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,     4,    54,   189,    70,
     511,   512,  1036,   514,   515,   516,   517,   518,   519,   520,
     521,  1072,  1063,   132,   525,   526,   527,   528,   529,   530,
     531,    41,     5,  1063,   105,     5,     5,     5,   229,  1063,
     105,   130,     5,  1084,  1038,  1039,  1040,  1041,  1042,  1043,
    1044,  1045,  1046,   229,  1084,   105,     4,    54,   165,    54,
    1084,    54,    40,   120,    40,   229,     3,     4,     5,     6,
      41,     8,     9,    10,   575,    12,    13,    14,    38,    41,
      41,    48,   130,    20,   126,    79,   105,   218,    24,    10,
    1120,  1121,    10,    24,   230,    32,    33,    34,    77,   121,
       5,   602,   229,    40,    41,   126,   105,    24,    40,   229,
     229,   126,    44,    10,   132,     4,    48,    49,    50,     4,
    1150,   175,     4,     4,     8,    57,    58,    59,     5,   630,
       5,    68,     5,     5,    41,   229,   126,   229,    49,    76,
     230,   105,    79,    49,   229,    24,   105,    79,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    24,
     229,     5,     4,   100,   217,    97,   229,    24,     5,   194,
     671,   711,   109,   704,   675,    28,   577,   961,   612,   871,
     112,   766,   683,  1108,   685,  1036,   687,   770,     3,  1060,
     691,   202,   455,   749,   126,  1084,   133,   129,    13,    14,
     701,   665,   703,   427,   965,   130,   421,   448,   709,   183,
      23,   256,   261,   366,     3,   617,   290,   384,   605,   649,
     831,   566,  1020,   724,   156,   802,  1020,    -1,    -1,    -1,
      -1,   168,    -1,    -1,   166,    -1,    -1,   169,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   749,    -1,
     187,    40,    -1,    -1,    -1,    -1,    -1,    -1,   190,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,    -1,    -1,    -1,    -1,    -1,   229,    -1,    -1,
     801,    -1,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,   167,   168,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   863,    -1,   865,    -1,   867,    -1,    -1,    -1,
      -1,    -1,   873,    -1,    -1,   876,    -1,   166,    -1,   880,
       3,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,    -1,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   963,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    13,    14,   984,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,  1017,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,    -1,     3,     4,     5,     6,    79,     8,     9,
      10,  1052,    12,    13,    14,    -1,    -1,    -1,  1059,  1060,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    34,    -1,    -1,   109,    -1,    -1,
      40,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,    -1,    -1,    68,  1110,
    1111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    13,    14,    -1,    -1,    -1,   168,    -1,    20,    -1,
     100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,    79,    -1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,   168,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,   168,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   109,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,    -1,    -1,    -1,
       3,     4,     5,     6,    79,     8,     9,    10,    -1,    12,
      13,    14,    -1,   166,    -1,   168,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    -1,    -1,   109,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,    79,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    14,
      -1,    -1,    -1,   168,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   109,    32,    33,    -1,
     113,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,    79,    -1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    10,   168,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    -1,    32,    33,   113,    -1,
      -1,    -1,    -1,    -1,    40,     3,    -1,    -1,    -1,    -1,
      -1,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,    -1,    -1,    -1,     3,
       4,     5,     6,    79,     8,     9,    10,    -1,    12,    13,
      14,    -1,    -1,   168,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      -1,    -1,    70,   109,    -1,    -1,    40,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,   109,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   168,    -1,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,     3,     4,     5,     6,    40,
       8,     9,    10,    -1,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,     3,     4,
       5,     6,    40,     8,     9,    10,    -1,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,   103,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,     3,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
      -1,   109,    -1,    -1,    79,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     168,    -1,    -1,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,    40,    -1,
       3,    -1,    -1,   168,    -1,    -1,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,    34,   117,   118,    -1,    -1,    -1,    -1,     3,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   149,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   167,   168,   169,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,     3,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   152,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,    -1,    -1,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    -1,    -1,    73,
      74,    75,    -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,    92,    93,
      -1,    95,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   128,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   138,    -1,   140,    -1,   142,    -1,
     197,    40,    -1,    -1,    -1,    44,    -1,   183,    -1,    -1,
     154,   229,    -1,    -1,    53,    -1,    -1,    -1,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,   171,   183,    -1,
      69,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,
     184,   185,   186,    -1,    83,    -1,    -1,    -1,    87,   183,
     194,   195,    -1,    -1,    -1,    94,    -1,    -1,    97,    98,
      99,    -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,   108,
     183,   110,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
     119,    -1,    -1,    -1,    80,    -1,   230,    -1,    -1,    -1,
     129,    -1,    88,    -1,    -1,    -1,    92,    93,    -1,    95,
      -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
      -1,    -1,   151,    -1,    -1,   111,   155,   156,    -1,    -1,
     159,    -1,   161,   162,    -1,    -1,    -1,   166,    -1,    -1,
     169,   170,   128,    -1,    -1,   174,    -1,    -1,    -1,    -1,
      -1,    -1,   138,    -1,   140,    -1,   142,    -1,    -1,    -1,
      -1,   190,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   184,   185,
     186,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,   195,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,   113,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    -1,   113,    18,    19,    20,
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
     151,   155,   156,   159,   161,   162,   166,   169,   170,   174,
     190,   232,   233,   234,   253,   254,   257,   259,   260,   268,
     269,   270,   271,   273,   274,   275,   276,   292,   295,   297,
     302,   303,   304,   305,   306,   308,   337,   340,   347,   352,
     354,   356,   359,   363,   364,   365,   366,   369,   374,   376,
     379,   387,   390,   391,   392,   398,   411,   412,   436,   437,
     438,   303,   304,     3,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   258,
     409,   410,     3,   258,   258,   258,   176,   181,   191,   199,
     361,   361,    43,   181,   191,   113,     3,   333,   407,   410,
     333,    43,   181,   191,   377,   409,   227,   339,    68,    69,
      87,    97,   102,   119,   129,   156,   166,   190,   370,   371,
     377,   191,   370,   361,   117,   367,   122,   311,     3,    13,
      14,   117,   118,   149,   167,   168,   169,   247,   380,   381,
     406,   410,     3,    43,    86,    87,   114,   117,   148,   164,
     167,   181,   182,   209,   215,   228,   248,   343,   346,   408,
     188,   311,     0,   106,   229,   130,   197,   296,    15,    16,
      17,   145,   322,   323,   112,   319,   151,    72,   415,    41,
      41,    56,    40,    60,    61,    62,    63,    64,   113,   272,
     116,   169,   178,   179,   399,   333,     4,   350,     3,   126,
     277,   348,   349,   350,   333,     4,   345,   345,     3,   126,
     126,   293,   350,   353,   192,   388,   253,   254,   295,   302,
     338,   158,   372,   191,   146,   144,   230,   113,   350,   357,
     358,   144,   375,   201,   202,   368,    40,   124,   153,   163,
     312,   313,   314,    68,   100,   328,    24,   189,   383,    40,
     383,   406,    42,   112,   355,   406,    42,    14,   382,   383,
     230,   383,     3,    30,   113,   181,    28,   196,   344,   219,
     344,   112,   342,   355,   219,   135,   341,   228,   226,   200,
      40,   198,   362,   333,   234,   333,     3,     4,     5,     6,
       8,     9,    10,    12,    13,    14,    20,    32,    33,    40,
      79,   109,   168,   214,   236,   237,   238,   240,   242,   247,
     248,   249,   250,   303,   406,   407,   410,   328,   328,   328,
      77,   135,   143,   310,   319,   190,   377,    44,    48,    49,
      50,    58,    79,   112,   126,   166,   169,   229,   253,   254,
     257,   259,   261,   262,   263,   264,   265,   266,   267,   275,
     295,   302,   307,   416,   417,   418,   422,   423,   424,   428,
     432,   433,   434,   435,   112,    41,   235,   240,     5,     5,
      65,   400,   401,   406,   141,   180,    90,    91,    66,    69,
     102,   155,   393,   394,   125,   137,   223,   360,    40,    20,
     333,   230,   125,   196,   309,   109,   109,    40,   294,   303,
     332,   333,   334,   230,    14,   247,   384,   389,    34,   373,
     407,   371,   253,   254,   295,   302,   378,   189,   230,   373,
     113,     5,   315,    40,   123,   230,   314,    34,   240,   329,
     330,   240,     5,    14,   240,   383,   406,   350,    24,   383,
     406,   383,   240,   381,   240,   333,   333,   333,     4,   240,
     344,    89,   344,     5,   344,    34,    41,    68,    76,   100,
     133,   187,   235,   240,   252,   320,    84,   169,    40,   298,
     302,   240,   240,   240,   235,   240,   303,   240,   243,   303,
      42,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    40,    42,   166,   303,   306,   308,   306,   306,
     240,   324,   325,     5,    12,   317,   317,   319,   389,   240,
     253,   254,   257,   259,   261,   262,   263,   264,   265,   266,
     267,   275,   295,   302,   307,   419,   420,   421,   423,   424,
     428,   432,   433,   434,   435,   197,   229,   258,   240,    14,
     240,   311,   380,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   105,   418,
     302,    41,   230,   189,     5,   230,    24,    24,    24,   141,
     141,    85,   395,   395,   395,   189,   395,   230,    77,    14,
      30,    41,    46,    47,   413,   414,   109,    40,   349,    77,
       7,   240,   296,     3,   303,   332,   334,   230,    70,   407,
     114,   127,   131,   134,   160,   335,    70,   407,   350,   230,
     189,   350,   357,   353,    41,   230,   115,   175,   177,   203,
     316,   313,    70,   409,   113,   230,   310,   318,    41,    41,
     240,   383,     4,   351,   240,   383,    40,   385,   344,   344,
      40,   230,    41,   113,   240,   113,   240,   113,   240,    41,
      70,   113,   240,    41,   172,   255,   256,   406,   299,   406,
     193,   230,    41,   197,   244,   245,   406,   240,   240,    28,
      29,    30,   240,   240,   240,   240,   240,   240,   240,   240,
      32,    33,   238,   239,    40,   241,   303,     8,    10,    11,
      20,   240,   240,   240,   240,   240,   240,   240,   251,   253,
     254,   295,   302,    34,   406,   311,    71,    98,   326,   230,
     143,   230,   135,    73,    74,    75,    80,    88,    92,    93,
      95,   101,   111,   128,   138,   140,   142,   154,   171,   184,
     185,   186,   194,   195,   281,    52,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   105,   421,   240,    60,    61,    62,    63,    64,   130,
     272,   197,   429,   430,    30,   183,   330,   229,   240,     5,
     401,    14,   237,     4,     4,    24,    24,   280,   406,   406,
     406,   333,   406,   155,   394,   351,   281,    14,    14,    14,
      41,   230,   152,   278,   279,   280,   351,   240,    41,   332,
     407,   147,   336,   332,   336,   336,   131,   407,   384,   353,
      41,   409,   103,   331,   332,   329,   240,   240,   237,   386,
      41,     5,   240,   113,   240,   113,   240,   113,   281,   240,
      41,   230,   309,    24,    41,   230,    40,   300,   240,   240,
     104,   245,   246,   240,   239,   241,   239,   239,    19,    32,
      33,    34,    35,    36,    37,    38,   235,     8,    10,    11,
      41,   328,   325,   317,   317,   317,    40,   286,   286,    40,
     282,   150,   284,    40,   283,   282,    40,   285,   285,   286,
     286,    54,    96,   229,   419,    49,   229,   130,   130,   130,
     130,     5,   389,    65,   240,   104,   430,   431,    55,   239,
     419,   130,    82,   402,     4,     4,   281,   102,   169,   397,
      78,   157,   396,   189,    54,   281,   281,   281,   414,   132,
      41,   230,    70,   144,   332,   309,   230,   309,    41,   230,
     240,   240,   240,    41,   256,   296,   240,   302,   406,   240,
     301,   230,   296,    41,   183,   240,   105,    19,   239,   239,
     239,   239,   239,   239,   239,   239,    41,   330,     5,     5,
       5,     5,   229,   237,   105,   229,   389,   389,   389,   389,
     130,     5,   183,   419,   105,   239,   189,    45,   104,   105,
     425,   426,   427,   389,     4,   165,   403,   287,    20,    96,
      20,    96,   409,    54,    54,    54,    40,    82,   206,   207,
     208,   210,   212,   220,   221,   222,   225,   289,   290,   279,
     407,   240,   144,   318,   332,   120,   321,   237,    41,   230,
      40,   240,   239,   113,    41,    41,   230,    41,    41,   229,
      48,   389,   130,   419,    79,   189,   239,   240,   419,   126,
     105,   426,   427,   105,   113,    24,   218,    10,    20,    96,
     152,   204,   288,    10,    10,   237,   299,    24,   291,   291,
     291,   291,   291,   291,   291,   291,   291,   291,   230,   240,
      77,   121,   327,   240,   301,     5,   229,   389,   229,   239,
      49,   183,   229,   126,   105,   126,   331,    76,   139,   173,
      24,    10,   237,   132,    41,     4,     4,   175,     4,     4,
       5,     5,     5,     5,     8,   290,   235,   240,    41,    41,
      49,   419,   419,   229,   126,   229,   309,   205,   211,   213,
     224,   404,   419,   105,   229,   319,    81,   216,   405,   105,
      49,    24,    24,    49,   229,     5,     4,   229,   217,    24,
       5
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
      case 232: /* "sql_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 233: /* "stmt_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 234: /* "stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 235: /* "expr_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 236: /* "column_ref" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 237: /* "expr_const" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 238: /* "simple_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 239: /* "arith_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 240: /* "expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 241: /* "in_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 242: /* "case_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 243: /* "case_arg" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 244: /* "when_clause_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 245: /* "when_clause" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 246: /* "case_default" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 247: /* "array_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 248: /* "func_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 249: /* "when_func" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 250: /* "when_func_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 251: /* "when_func_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 252: /* "distinct_or_all" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 253: /* "delete_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 254: /* "update_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 255: /* "update_asgn_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 256: /* "update_asgn_factor" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 257: /* "cursor_declare_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 258: /* "cursor_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 259: /* "cursor_open_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 260: /* "cursor_fetch_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 261: /* "cursor_fetch_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 262: /* "cursor_fetch_next_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 263: /* "cursor_fetch_first_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 264: /* "cursor_fetch_prior_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 265: /* "cursor_fetch_last_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 266: /* "cursor_fetch_absolute_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 267: /* "cursor_fetch_relative_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 268: /* "fetch_prior_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 269: /* "fetch_first_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 270: /* "fetch_last_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 271: /* "fetch_relative_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 272: /* "next_or_prior" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 273: /* "fetch_absolute_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 274: /* "fetch_fromto_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 275: /* "cursor_close_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 276: /* "create_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 277: /* "opt_if_not_exists" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 278: /* "table_element_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 279: /* "table_element" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 280: /* "column_definition" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 281: /* "data_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 282: /* "opt_decimal" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 283: /* "opt_float" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 284: /* "opt_precision" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 285: /* "opt_time_precision" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 286: /* "opt_char_length" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 287: /* "opt_column_attribute_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 288: /* "column_attribute" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 289: /* "opt_table_option_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 290: /* "table_option" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 291: /* "opt_equal_mark" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 292: /* "drop_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 293: /* "opt_if_exists" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 294: /* "table_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 295: /* "insert_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 296: /* "opt_when" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 297: /* "replace_or_insert" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 298: /* "opt_insert_columns" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 299: /* "column_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 300: /* "insert_vals_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 301: /* "insert_vals" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 302: /* "select_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 303: /* "select_with_parens" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 304: /* "select_no_parens" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 305: /* "no_table_select" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 306: /* "select_clause" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 307: /* "select_into_clause" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 308: /* "simple_select" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 309: /* "opt_where" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 310: /* "select_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 311: /* "opt_hint" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 312: /* "opt_hint_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 313: /* "hint_options" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 314: /* "hint_option" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 315: /* "opt_comma_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 317: /* "limit_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 318: /* "opt_select_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 319: /* "opt_for_update" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 320: /* "parameterized_trim" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 321: /* "opt_groupby" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 322: /* "opt_order_by" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 323: /* "order_by" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 324: /* "sort_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 325: /* "sort_key" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 326: /* "opt_asc_desc" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 327: /* "opt_having" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 328: /* "opt_distinct" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 329: /* "projection" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 330: /* "select_expr_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 331: /* "from_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 332: /* "table_factor" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 333: /* "relation_factor" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 334: /* "joined_table" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 335: /* "join_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 336: /* "join_outer" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 337: /* "explain_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 338: /* "explainable_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 339: /* "opt_verbose" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 340: /* "show_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 341: /* "opt_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 342: /* "opt_for_grant_user" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 344: /* "opt_show_condition" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 345: /* "opt_like_condition" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 347: /* "create_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 348: /* "user_specification_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 349: /* "user_specification" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 350: /* "user" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 351: /* "password" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 352: /* "drop_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 353: /* "user_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 354: /* "set_password_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 355: /* "opt_for_user" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 356: /* "rename_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 357: /* "rename_info" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 358: /* "rename_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 359: /* "lock_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 360: /* "lock_spec" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 361: /* "opt_work" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 363: /* "begin_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 364: /* "commit_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 365: /* "rollback_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 366: /* "kill_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 367: /* "opt_is_global" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 368: /* "opt_flag" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 369: /* "grant_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 370: /* "priv_type_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 371: /* "priv_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 372: /* "opt_privilege" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 373: /* "priv_level" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 374: /* "revoke_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 375: /* "opt_on_priv_level" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 376: /* "prepare_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 377: /* "stmt_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 378: /* "preparable_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 379: /* "variable_set_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 380: /* "var_and_val_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 381: /* "var_and_val" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 382: /* "var_and_array_val" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 383: /* "to_or_eq" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 384: /* "argument" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 385: /* "array_vals_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 386: /* "array_val_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 387: /* "execute_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 388: /* "opt_using_args" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 389: /* "argument_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 390: /* "deallocate_prepare_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 391: /* "deallocate_or_drop" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 392: /* "alter_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 393: /* "alter_column_actions" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 394: /* "alter_column_action" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 395: /* "opt_column" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 397: /* "alter_column_behavior" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 398: /* "alter_system_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 399: /* "opt_force" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 400: /* "alter_system_actions" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 401: /* "alter_system_action" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 402: /* "opt_comment" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 404: /* "server_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 405: /* "opt_cluster_or_address" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 406: /* "column_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 407: /* "relation_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 408: /* "function_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 409: /* "column_label" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 411: /* "create_procedure_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 412: /* "proc_decl" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 413: /* "proc_parameter_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 414: /* "proc_parameter" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 415: /* "proc_block" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 416: /* "proc_sect" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 417: /* "proc_stmts" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 418: /* "proc_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 419: /* "control_sect" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 420: /* "control_stmts" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 421: /* "control_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 422: /* "stmt_declare" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 423: /* "stmt_assign" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 424: /* "stmt_if" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 425: /* "stmt_elsifs" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 426: /* "stmt_elsif" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 427: /* "stmt_else" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 428: /* "stmt_case" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 429: /* "case_when_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 430: /* "case_when" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 431: /* "case_else" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 432: /* "stmt_loop" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 433: /* "stmt_while" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 434: /* "stmt_null" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 435: /* "stmt_exit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 436: /* "exec_procedure_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 437: /* "drop_procedure_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 438: /* "show_procedure_stmt" */

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

    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 35:

    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
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

    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 43:

    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 44:

    { (yyval.node) = NULL; ;}
    break;

  case 45:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 46:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 47:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 48:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NAME_FIELD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(3) - (3)]).first_column, (yylsp[(3) - (3)]).last_column);
    ;}
    break;

  case 49:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_STAR);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NAME_FIELD, 2, (yyvsp[(1) - (3)].node), node);
    ;}
    break;

  case 50:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 51:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 52:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
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

    { (yyvsp[(3) - (3)].node)->type_ = T_SYSTEM_VARIABLE; (yyval.node) = (yyvsp[(3) - (3)].node); ;}
    break;

  case 60:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 61:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 62:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 63:

    {
      ParseNode *node = NULL;
      malloc_non_terminal_node(node, result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node));
      merge_nodes((yyval.node), result->malloc_pool_, T_EXPR_LIST, node);
    ;}
    break;

  case 64:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
      /*
      yyerror(&@1, result, "CASE expression is not supported yet!");
      YYABORT;
      */
    ;}
    break;

  case 65:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 66:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 67:

    {
    	(yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 68:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_EXISTS, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 69:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 70:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 71:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_POS, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 72:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NEG, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 73:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_ADD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 74:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MINUS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 75:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MUL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 76:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_DIV, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 77:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_REM, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 78:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_POW, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 79:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MOD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 80:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 81:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_POS, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 82:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NEG, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 83:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_ADD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 84:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MINUS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 85:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MUL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 86:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_DIV, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 87:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_REM, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 88:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_POW, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 89:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MOD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 90:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 91:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LT, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 92:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_EQ, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 93:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_GE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 94:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_GT, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 95:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 96:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 97:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NOT_LIKE, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 98:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_AND, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 99:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_OR, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 100:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NOT, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 101:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 102:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS_NOT, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
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
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_BTW, 3, (yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 108:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NOT_BTW, 3, (yyvsp[(1) - (6)].node), (yyvsp[(4) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 109:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IN, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 110:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NOT_IN, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 111:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_CNN, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 112:

    {
    	(yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 113:

    { merge_nodes((yyval.node), result->malloc_pool_, T_EXPR_LIST, (yyvsp[(2) - (3)].node)); ;}
    break;

  case 114:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_WHEN_LIST, (yyvsp[(3) - (5)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CASE, 3, (yyvsp[(2) - (5)].node), (yyval.node), (yyvsp[(4) - (5)].node));
    ;}
    break;

  case 115:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 116:

    { (yyval.node) = NULL; ;}
    break;

  case 117:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 118:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 119:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_WHEN, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 120:

    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 121:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_NULL); ;}
    break;

  case 122:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ARRAY, 2, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));
    ;}
    break;

  case 123:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ARRAY, 2, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));
    ;}
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
       malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_DECLARE, 2,
                                        (yyvsp[(2) - (5)].node),		/*cursor name*/
                                        (yyvsp[(5) - (5)].node)		/*result from select_stmt*/
					             ); 
	 ;}
    break;

  case 144:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 145:

    {
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_OPEN, 1,
            (yyvsp[(2) - (2)].node)     /* cursor_name*/
                                    );
            ;}
    break;

  case 146:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH, 1,
                   (yyvsp[(2) - (2)].node)     /* cursor_name*/
                                       );
            ;}
    break;

  case 147:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH, 1,
                   (yyvsp[(2) - (3)].node)     /* cursor_name*/
                                       );
            ;}
    break;

  case 148:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH, 1, (yyvsp[(2) - (4)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(4) - (4)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_INTO, 2, fetch, args);
            ;}
    break;

  case 149:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH_NEXT, 1, (yyvsp[(2) - (5)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(5) - (5)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_NEXT_INTO, 2, fetch, args);
            ;}
    break;

  case 150:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH_FIRST, 1, (yyvsp[(2) - (5)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(5) - (5)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_FIRST_INTO, 2, fetch, args);
            ;}
    break;

  case 151:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH_PRIOR, 1, (yyvsp[(2) - (5)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(5) - (5)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_PRIOR_INTO, 2, fetch, args);
            ;}
    break;

  case 152:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH_LAST, 1, (yyvsp[(2) - (5)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(5) - (5)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_LAST_INTO, 2, fetch, args);
            ;}
    break;

  case 153:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH_ABSOLUTE, 2, (yyvsp[(2) - (6)].node), (yyvsp[(4) - (6)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(6) - (6)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_ABS_INTO, 2, fetch, args);
            ;}
    break;

  case 154:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH_RELATIVE, 3, (yyvsp[(2) - (7)].node), (yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(7) - (7)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_RELATIVE_INTO, 2, fetch, args);
            ;}
    break;

  case 155:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_PRIOR, 1,
                   (yyvsp[(2) - (3)].node)     /* cursor_name*/
                    
                    
                    
                                       );
            ;}
    break;

  case 156:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_FIRST, 1,
                   (yyvsp[(2) - (3)].node)     /* cursor_name*/
                                       );
            ;}
    break;

  case 157:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_LAST, 1,
                   (yyvsp[(2) - (3)].node)     /* cursor_name*/
                                       );
            ;}
    break;

  case 158:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_RELATIVE, 3,
                   (yyvsp[(2) - (5)].node),     /* cursor_name*/
                   (yyvsp[(3) - (5)].node),                  
                   (yyvsp[(5) - (5)].node)                  
                                       );
            ;}
    break;

  case 159:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 160:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 161:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_ABSOLUTE, 2,
                   (yyvsp[(2) - (4)].node),     /* cursor_name*/
                   (yyvsp[(4) - (4)].node)
                                       );
            ;}
    break;

  case 162:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_FROMTO, 3,
                   (yyvsp[(2) - (6)].node),     /* cursor_name*/
                   (yyvsp[(4) - (6)].node),
                   (yyvsp[(6) - (6)].node)
                                       );
            ;}
    break;

  case 163:

    {
             malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_CLOSE, 1,
                   (yyvsp[(2) - (2)].node)     /* cursor_name*/
                                      );
             ;}
    break;

  case 164:

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

  case 165:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_IF_NOT_EXISTS); ;}
    break;

  case 166:

    { (yyval.node) = NULL; ;}
    break;

  case 167:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 168:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 169:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 170:

    {
      ParseNode* col_list= NULL;
      merge_nodes(col_list, result->malloc_pool_, T_COLUMN_LIST, (yyvsp[(4) - (5)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PRIMARY_KEY, 1, col_list);
    ;}
    break;

  case 171:

    {
      ParseNode *attributes = NULL;
      merge_nodes(attributes, result->malloc_pool_, T_COLUMN_ATTRIBUTES, (yyvsp[(3) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_DEFINITION, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), attributes);
    ;}
    break;

  case 172:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER ); ;}
    break;

  case 173:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER); ;}
    break;

  case 174:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER); ;}
    break;

  case 175:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER); ;}
    break;

  case 176:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER); ;}
    break;

  case 177:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DECIMAL);
      else
        merge_nodes((yyval.node), result->malloc_pool_, T_TYPE_DECIMAL, (yyvsp[(2) - (2)].node));
      yyerror(&(yylsp[(1) - (2)]), result, "DECIMAL type is not supported");
      YYABORT;
    ;}
    break;

  case 178:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DECIMAL);
      else
        merge_nodes((yyval.node), result->malloc_pool_, T_TYPE_DECIMAL, (yyvsp[(2) - (2)].node));
      yyerror(&(yylsp[(1) - (2)]), result, "NUMERIC type is not supported");
      YYABORT;
    ;}
    break;

  case 179:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_BOOLEAN ); ;}
    break;

  case 180:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_FLOAT, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 181:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DOUBLE); ;}
    break;

  case 182:

    {
      (void)((yyvsp[(2) - (2)].node)) ; /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DOUBLE);
    ;}
    break;

  case 183:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIMESTAMP);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIMESTAMP, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 184:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIMESTAMP); ;}
    break;

  case 185:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CHARACTER);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CHARACTER, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 186:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CHARACTER);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CHARACTER, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 187:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_VARCHAR);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_VARCHAR, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 188:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_VARCHAR);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_VARCHAR, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 189:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CREATETIME); ;}
    break;

  case 190:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_MODIFYTIME); ;}
    break;

  case 191:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DATE);
      yyerror(&(yylsp[(1) - (1)]), result, "DATE type is not supported");
      YYABORT;
    ;}
    break;

  case 192:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIME);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIME, 1, (yyvsp[(2) - (2)].node));
      yyerror(&(yylsp[(1) - (2)]), result, "TIME type is not supported");
      YYABORT;
    ;}
    break;

  case 193:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node)); ;}
    break;

  case 194:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 195:

    { (yyval.node) = NULL; ;}
    break;

  case 196:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 197:

    { (yyval.node) = NULL; ;}
    break;

  case 198:

    { (yyval.node) = NULL; ;}
    break;

  case 199:

    { (yyval.node) = NULL; ;}
    break;

  case 200:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 201:

    { (yyval.node) = NULL; ;}
    break;

  case 202:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 203:

    { (yyval.node) = NULL; ;}
    break;

  case 204:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 205:

    { (yyval.node) = NULL; ;}
    break;

  case 206:

    {
      (void)((yyvsp[(2) - (2)].node)) ; /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NOT_NULL);
    ;}
    break;

  case 207:

    {
      (void)((yyvsp[(1) - (1)].node)) ; /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NULL);
    ;}
    break;

  case 208:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 209:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_AUTO_INCREMENT); ;}
    break;

  case 210:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_PRIMARY_KEY); ;}
    break;

  case 211:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 212:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 213:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 214:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_INFO, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 215:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPIRE_INFO, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 216:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLET_MAX_SIZE, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 217:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLET_BLOCK_SIZE, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 218:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLET_ID, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 219:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_REPLICA_NUM, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 220:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COMPRESS_METHOD, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 221:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_USE_BLOOM_FILTER, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 222:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSISTENT_MODE);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 223:

    {
      (void)((yyvsp[(2) - (3)].node)); /*  make bison mute*/
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COMMENT, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 224:

    { (yyval.node) = NULL; ;}
    break;

  case 225:

    { (yyval.node) = NULL; ;}
    break;

  case 226:

    {
      ParseNode *tables = NULL;
      merge_nodes(tables, result->malloc_pool_, T_TABLE_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_DROP_TABLE, 2, (yyvsp[(3) - (4)].node), tables);
    ;}
    break;

  case 227:

    { (yyval.node) = NULL; ;}
    break;

  case 228:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_IF_EXISTS); ;}
    break;

  case 229:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 230:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 231:

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

  case 232:

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

  case 233:

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

  case 234:

    { (yyval.node) = NULL; ;}
    break;

  case 235:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 236:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 237:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 238:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_COLUMN_LIST, (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 239:

    { (yyval.node) = NULL; ;}
    break;

  case 240:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 241:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 242:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_VALUE_VECTOR, (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 243:

    {
    merge_nodes((yyvsp[(4) - (5)].node), result->malloc_pool_, T_VALUE_VECTOR, (yyvsp[(4) - (5)].node));
    malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (5)].node), (yyvsp[(4) - (5)].node));
  ;}
    break;

  case 244:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 245:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 246:

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

  case 247:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 248:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 249:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 250:

    {
      (yyval.node)= (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 251:

    {
      (yyval.node) = (yyvsp[(1) - (2)].node);
      (yyval.node)->children_[12] = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 252:

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

  case 253:

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

  case 254:

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

  case 255:

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

  case 256:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 257:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 258:

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

  case 259:

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

  case 260:

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

  case 261:

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

  case 262:

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

  case 263:

    {(yyval.node) = NULL;;}
    break;

  case 264:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 265:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_WHERE_CLAUSE, 2, (yyvsp[(3) - (3)].node), (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 266:

    {
      if ((yyvsp[(2) - (4)].node)->type_ == T_QUESTIONMARK && (yyvsp[(4) - (4)].node)->type_ == T_QUESTIONMARK)
      {
        (yyvsp[(4) - (4)].node)->value_++;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 267:

    {
      if ((yyvsp[(2) - (4)].node)->type_ == T_QUESTIONMARK && (yyvsp[(4) - (4)].node)->type_ == T_QUESTIONMARK)
      {
        (yyvsp[(4) - (4)].node)->value_++;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, (yyvsp[(4) - (4)].node), (yyvsp[(2) - (4)].node));
    ;}
    break;

  case 268:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, (yyvsp[(2) - (2)].node), NULL);
    ;}
    break;

  case 269:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, NULL, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 270:

    {
      if ((yyvsp[(2) - (4)].node)->type_ == T_QUESTIONMARK && (yyvsp[(4) - (4)].node)->type_ == T_QUESTIONMARK)
      {
        (yyvsp[(4) - (4)].node)->value_++;
      }
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, (yyvsp[(4) - (4)].node), (yyvsp[(2) - (4)].node));
    ;}
    break;

  case 271:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 272:

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

  case 273:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 274:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 275:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 276:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 277:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 278:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_READ_STATIC);
    ;}
    break;

  case 279:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_HOTSPOT);
    ;}
    break;

  case 280:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_READ_CONSISTENCY);
      (yyval.node)->value_ = (yyvsp[(3) - (4)].ival);
    ;}
    break;

  case 281:

    {
      (yyval.node) = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 282:

    {
      (yyval.node) = (yyvsp[(1) - (2)].node);
    ;}
    break;

  case 283:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 284:

    {
    (yyval.ival) = 3;
  ;}
    break;

  case 285:

    {
    (yyval.ival) = 4;
  ;}
    break;

  case 286:

    {
    (yyval.ival) = 1;
  ;}
    break;

  case 287:

    {
    (yyval.ival) = 2;
  ;}
    break;

  case 288:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 289:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 290:

    { (yyval.node) = NULL; ;}
    break;

  case 291:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 292:

    { (yyval.node) = NULL; ;}
    break;

  case 293:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 294:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 0;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 295:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 0;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 296:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 1;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 297:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 2;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 298:

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

  case 299:

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

  case 300:

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

  case 301:

    { (yyval.node) = NULL; ;}
    break;

  case 302:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_EXPR_LIST, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 303:

    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 304:

    { (yyval.node) = NULL; ;}
    break;

  case 305:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_SORT_LIST, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 306:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 307:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 308:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SORT_KEY, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 309:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_ASC); ;}
    break;

  case 310:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_ASC); ;}
    break;

  case 311:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_DESC); ;}
    break;

  case 312:

    { (yyval.node) = 0; ;}
    break;

  case 313:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 314:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 315:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_ALL);
    ;}
    break;

  case 316:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_DISTINCT);
    ;}
    break;

  case 317:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, (yyvsp[(1) - (1)].node));
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (1)]).first_column, (yylsp[(1) - (1)]).last_column);
    ;}
    break;

  case 318:

    {
      ParseNode* alias_node = NULL;
      malloc_non_terminal_node(alias_node, result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, alias_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (2)]).first_column, (yylsp[(1) - (2)]).last_column);
      dup_expr_string(alias_node->str_value_, result, (yylsp[(2) - (2)]).first_column, (yylsp[(2) - (2)]).last_column);
    ;}
    break;

  case 319:

    {
      ParseNode* alias_node = NULL;
      malloc_non_terminal_node(alias_node, result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, alias_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (3)]).first_column, (yylsp[(1) - (3)]).last_column);
      dup_expr_string(alias_node->str_value_, result, (yylsp[(3) - (3)]).first_column, (yylsp[(3) - (3)]).last_column);
    ;}
    break;

  case 320:

    {
      ParseNode* star_node = NULL;
      malloc_terminal_node(star_node, result->malloc_pool_, T_STAR);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, star_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (1)]).first_column, (yylsp[(1) - (1)]).last_column);
    ;}
    break;

  case 321:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 322:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
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
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 326:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 327:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 328:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 329:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 330:

    {
    	(yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 331:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(2) - (5)].node), (yyvsp[(5) - (5)].node));
    	yyerror(&(yylsp[(1) - (5)]), result, "qualied joined table can not be aliased!");
      YYABORT;
    ;}
    break;

  case 332:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 333:

    {
    	(yyval.node) = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 334:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOINED_TABLE, 4, (yyvsp[(2) - (6)].node), (yyvsp[(1) - (6)].node), (yyvsp[(4) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 335:

    {
      ParseNode* node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_JOIN_INNER);
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOINED_TABLE, 4, node, (yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 336:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_FULL);
    ;}
    break;

  case 337:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_LEFT);
    ;}
    break;

  case 338:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_RIGHT);
    ;}
    break;

  case 339:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_INNER);
    ;}
    break;

  case 340:

    { (yyval.node) = NULL; ;}
    break;

  case 341:

    { (yyval.node) = NULL; ;}
    break;

  case 342:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPLAIN, 1, (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = ((yyvsp[(2) - (3)].node) ? 1 : 0); /* positive: verbose */
    ;}
    break;

  case 343:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 344:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 345:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 346:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 347:

    { (yyval.node) = (ParseNode*)1; ;}
    break;

  case 348:

    { (yyval.node) = NULL; ;}
    break;

  case 349:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_TABLES, 1, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 350:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 351:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 352:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_TABLE_STATUS, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 353:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_SERVER_STATUS, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 354:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_VARIABLES, 1, (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = (yyvsp[(2) - (4)].ival);
    ;}
    break;

  case 355:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_SCHEMA); ;}
    break;

  case 356:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_CREATE_TABLE, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 357:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 358:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 359:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_WARNINGS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 360:

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

  case 361:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_GRANTS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 362:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_PARAMETERS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 363:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_PROCESSLIST);
      (yyval.node)->value_ = (yyvsp[(2) - (3)].ival);
    ;}
    break;

  case 364:

    {
      if ((yyvsp[(2) - (4)].node)->value_ < 0 || (yyvsp[(4) - (4)].node)->value_ < 0)
      {
        yyerror(&(yylsp[(1) - (4)]), result, "OFFSET/COUNT must not be less than 0!");
        YYABORT;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_LIMIT, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 365:

    {
      if ((yyvsp[(2) - (2)].node)->value_ < 0)
      {
        yyerror(&(yylsp[(1) - (2)]), result, "COUNT must not be less than 0!");
        YYABORT;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_LIMIT, 2, NULL, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 366:

    { (yyval.node) = NULL; ;}
    break;

  case 367:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 368:

    { (yyval.node) = NULL; ;}
    break;

  case 369:

    { (yyval.node) = NULL; ;}
    break;

  case 370:

    { (yyval.ival) = 1; ;}
    break;

  case 371:

    { (yyval.ival) = 0; ;}
    break;

  case 372:

    { (yyval.ival) = 0; ;}
    break;

  case 373:

    { (yyval.node) = NULL; ;}
    break;

  case 374:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 375:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_WHERE_CLAUSE, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 376:

    { (yyval.node) = NULL; ;}
    break;

  case 377:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 1, (yyvsp[(1) - (1)].node)); ;}
    break;

  case 378:

    { (yyval.ival) = 0; ;}
    break;

  case 379:

    { (yyval.ival) = 1; ;}
    break;

  case 380:

    {
        merge_nodes((yyval.node), result->malloc_pool_, T_CREATE_USER, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 381:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 382:

    {
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 383:

    {
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CREATE_USER_SPEC, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 384:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 385:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 386:

    {
        merge_nodes((yyval.node), result->malloc_pool_, T_DROP_USER, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 387:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 388:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 389:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SET_PASSWORD, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 390:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SET_PASSWORD, 2, (yyvsp[(3) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 391:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 392:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 393:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_RENAME_USER, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 394:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_RENAME_INFO, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 395:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 396:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 397:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LOCK_USER, 2, (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 398:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 399:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 400:

    {
      (void)(yyval.node);
    ;}
    break;

  case 401:

    {
      (void)(yyval.node);
    ;}
    break;

  case 402:

    {
      (yyval.ival) = 1;
    ;}
    break;

  case 403:

    {
      (yyval.ival) = 0;
    ;}
    break;

  case 404:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BEGIN);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 405:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BEGIN);
      (yyval.node)->value_ = (yyvsp[(3) - (3)].ival);
    ;}
    break;

  case 406:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_COMMIT);
    ;}
    break;

  case 407:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_ROLLBACK);
    ;}
    break;

  case 408:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_KILL, 3, (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 409:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 410:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 411:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 412:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 413:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 414:

    {
      ParseNode *privileges_node = NULL;
      ParseNode *users_node = NULL;
      merge_nodes(privileges_node, result->malloc_pool_, T_PRIVILEGES, (yyvsp[(2) - (6)].node));
      merge_nodes(users_node, result->malloc_pool_, T_USERS, (yyvsp[(6) - (6)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_GRANT,
                                 3, privileges_node, (yyvsp[(4) - (6)].node), users_node);
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
      (void)(yyvsp[(2) - (2)].node);                 /* useless */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_ALL;
    ;}
    break;

  case 418:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_ALTER;
    ;}
    break;

  case 419:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_CREATE;
    ;}
    break;

  case 420:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_CREATE_USER;
    ;}
    break;

  case 421:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_DELETE;
    ;}
    break;

  case 422:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_DROP;
    ;}
    break;

  case 423:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_GRANT_OPTION;
    ;}
    break;

  case 424:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_INSERT;
    ;}
    break;

  case 425:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_UPDATE;
    ;}
    break;

  case 426:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_SELECT;
    ;}
    break;

  case 427:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_REPLACE;
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
      /* means global priv_level */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_LEVEL);
    ;}
    break;

  case 431:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_LEVEL, 1, (yyvsp[(1) - (1)].node));
    ;}
    break;

  case 432:

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

  case 433:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 434:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 435:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PREPARE, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 436:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 437:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 438:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 439:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 440:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 441:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_VARIABLE_SET, (yyvsp[(2) - (2)].node));;
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 442:

    {
      (yyval.node) = (yyvsp[(3) - (3)].node);
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
      (void)((yyvsp[(2) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 446:

    {
      (void)((yyvsp[(2) - (3)].node));
      (yyvsp[(1) - (3)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 447:

    {
      (void)((yyvsp[(3) - (4)].node));
      (yyvsp[(2) - (4)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 448:

    {
      (void)((yyvsp[(3) - (4)].node));
      (yyvsp[(2) - (4)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 449:

    {
      (void)((yyvsp[(4) - (5)].node));
      (yyvsp[(3) - (5)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 450:

    {
      (void)((yyvsp[(4) - (5)].node));
      (yyvsp[(3) - (5)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 451:

    {
      (void)((yyvsp[(2) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 452:

    {
      (void)((yyvsp[(2) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 453:

    {
      (void)((yyvsp[(2) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_ARRAY_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 454:

    { (yyval.node) = NULL; ;}
    break;

  case 455:

    { (yyval.node) = NULL; ;}
    break;

  case 456:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 457:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 458:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_ARRAY_VAL, (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 459:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 460:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 461:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXECUTE, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 462:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 463:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 464:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 465:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 466:

    {
      (void)((yyvsp[(1) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_DEALLOCATE, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 467:

    { (yyval.node) = NULL; ;}
    break;

  case 468:

    { (yyval.node) = NULL; ;}
    break;

  case 469:

    {
      ParseNode *alter_actions = NULL;
      merge_nodes(alter_actions, result->malloc_pool_, T_ALTER_ACTION_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_TABLE, 2, (yyvsp[(3) - (4)].node), alter_actions);
    ;}
    break;

  case 470:

    {
      yyerror(&(yylsp[(1) - (6)]), result, "Table rename is not supported now");
      YYABORT;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLE_RENAME, 1, (yyvsp[(6) - (6)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_ACTION_LIST, 1, (yyval.node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_TABLE, 2, (yyvsp[(3) - (6)].node), (yyval.node));
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
      (void)((yyvsp[(2) - (3)].node)); /* make bison mute */
      (yyval.node) = (yyvsp[(3) - (3)].node); /* T_COLUMN_DEFINITION */
    ;}
    break;

  case 474:

    {
      (void)((yyvsp[(2) - (4)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_DROP, 1, (yyvsp[(3) - (4)].node));
      (yyval.node)->value_ = (yyvsp[(4) - (4)].ival);
    ;}
    break;

  case 475:

    {
      (void)((yyvsp[(2) - (4)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_ALTER, 2, (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 476:

    {
      (void)((yyvsp[(2) - (5)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_RENAME, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 477:

    { (yyval.node) = NULL; ;}
    break;

  case 478:

    { (yyval.node) = NULL; ;}
    break;

  case 479:

    { (yyval.ival) = 2; ;}
    break;

  case 480:

    { (yyval.ival) = 1; ;}
    break;

  case 481:

    { (yyval.ival) = 0; ;}
    break;

  case 482:

    {
      (void)((yyvsp[(3) - (3)].node)); /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NOT_NULL);
    ;}
    break;

  case 483:

    {
      (void)((yyvsp[(3) - (3)].node)); /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NULL);
    ;}
    break;

  case 484:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 485:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_NULL);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyval.node));
    ;}
    break;

  case 486:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_SYTEM_ACTION_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_SYSTEM, 1, (yyval.node));
    ;}
    break;

  case 487:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 3, node, (yyvsp[(7) - (7)].node), (yyvsp[(3) - (7)].node));
    ;}
    break;

  case 488:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 3, node, (yyvsp[(7) - (7)].node), (yyvsp[(3) - (7)].node));
    ;}
    break;

  case 489:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 2, node, (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 490:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 2, node, (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 491:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 492:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_FORCE);
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

  case 496:

    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 497:

    { (yyval.node) = NULL; ;}
    break;

  case 498:

    { (yyval.ival) = 0; ;}
    break;

  case 499:

    { (yyval.ival) = 1; ;}
    break;

  case 500:

    { (yyval.ival) = 2; ;}
    break;

  case 501:

    { (yyval.ival) = 2; ;}
    break;

  case 502:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 503:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 4;
    ;}
    break;

  case 504:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 505:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 3;
    ;}
    break;

  case 506:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CLUSTER, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 507:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SERVER_ADDRESS, 2, (yyvsp[(3) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 508:

    { (yyval.node) = NULL; ;}
    break;

  case 509:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 510:

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

  case 511:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 512:

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

  case 514:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 515:

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

  case 541:

    {
								malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CREATE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
							;}
    break;

  case 542:

    {
					ParseNode *params = NULL;
        			merge_nodes(params, result->malloc_pool_, T_PARAM_LIST, (yyvsp[(5) - (6)].node));
					malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECL, 2, (yyvsp[(3) - (6)].node), params);
				;}
    break;

  case 543:

    {
					ParseNode *params = NULL;
					malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECL, 2, (yyvsp[(3) - (5)].node), params);
				;}
    break;

  case 544:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
					;}
    break;

  case 545:

    {
						(yyval.node) = (yyvsp[(1) - (1)].node);
					;}
    break;

  case 546:

    {
                malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PARAM_DEFINITION, 3, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node), NULL);
					;}
    break;

  case 547:

    {
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_IN_PARAM_DEFINITION, 3, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node), NULL);
					;}
    break;

  case 548:

    {
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OUT_PARAM_DEFINITION, 3, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node), NULL);
					;}
    break;

  case 549:

    {
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_INOUT_PARAM_DEFINITION, 3, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node), NULL);
          ;}
    break;

  case 550:

    {
          ParseNode *array_flag = NULL;
          malloc_terminal_node(array_flag, result->malloc_pool_, T_BOOL);
          array_flag->value_ = 1;
          malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PARAM_DEFINITION, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), array_flag);
        ;}
    break;

  case 551:

    {
          ParseNode *array_flag = NULL;
          malloc_terminal_node(array_flag, result->malloc_pool_, T_BOOL);
          array_flag->value_ = 1;
          malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_IN_PARAM_DEFINITION, 3, (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), array_flag);
        ;}
    break;

  case 552:

    {
          ParseNode *array_flag = NULL;
          malloc_terminal_node(array_flag, result->malloc_pool_, T_BOOL);
          array_flag->value_ = 1;
          malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OUT_PARAM_DEFINITION, 3, (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), array_flag);
        ;}
    break;

  case 553:

    {
          ParseNode *array_flag = NULL;
          malloc_terminal_node(array_flag, result->malloc_pool_, T_BOOL);
          array_flag->value_ = 1;
          malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_INOUT_PARAM_DEFINITION, 3, (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), array_flag);
        ;}
    break;

  case 554:

    { 
					//malloc_non_terminal_node($$, result->malloc_pool_, T_PROCEDURE_BLOCK, 1, $2);
					(yyval.node)=(yyvsp[(2) - (3)].node);
				;}
    break;

  case 555:

    { 
					(yyval.node)=NULL;
				;}
    break;

  case 556:

    { 
        			merge_nodes((yyval.node), result->malloc_pool_, T_PROCEDURE_STMTS, (yyvsp[(1) - (1)].node));
				;}
    break;

  case 557:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
				;}
    break;

  case 558:

    {
					(yyval.node)=(yyvsp[(1) - (1)].node);
				;}
    break;

  case 559:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 560:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 561:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 562:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 563:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 564:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 565:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 566:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 567:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 568:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 569:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 570:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 571:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 572:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
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

    { (yyval.node) =(yyvsp[(1) - (1)].node); ;}
    break;

  case 581:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 582:

    { 
					(yyval.node)=NULL;
				;}
    break;

  case 583:

    { 
        			merge_nodes((yyval.node), result->malloc_pool_, T_PROCEDURE_STMTS, (yyvsp[(1) - (1)].node));
				;}
    break;

  case 584:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
				;}
    break;

  case 585:

    {
					(yyval.node)=(yyvsp[(1) - (1)].node);
				;}
    break;

  case 586:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
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

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 604:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 605:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 606:

    { (yyval.node) =(yyvsp[(1) - (1)].node); ;}
    break;

  case 607:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 608:

    {
						ParseNode *args = NULL;
						merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (4)].node));
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECLARE, 4, args, (yyvsp[(3) - (4)].node), NULL, NULL);
					;}
    break;

  case 609:

    {
						ParseNode *args = NULL;
						merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (6)].node));
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECLARE, 4, args, (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node), NULL);
          ;}
    break;

  case 610:

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

  case 611:

    {
						ParseNode *var_list = NULL;
						merge_nodes(var_list, result->malloc_pool_, T_VAR_VAL_LIST, (yyvsp[(2) - (3)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ASSGIN, 1,var_list);
					;}
    break;

  case 612:

    {
						ParseNode *elsifs = NULL;
						merge_nodes(elsifs, result->malloc_pool_, T_PROCEDURE_ELSEIFS, (yyvsp[(5) - (9)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (9)].node), (yyvsp[(4) - (9)].node), elsifs ,(yyvsp[(6) - (9)].node));
					;}
    break;

  case 613:

    {
						ParseNode *elsifs = NULL;
						merge_nodes(elsifs, result->malloc_pool_, T_PROCEDURE_ELSEIFS, (yyvsp[(5) - (8)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (8)].node), (yyvsp[(4) - (8)].node), elsifs ,NULL);
					;}
    break;

  case 614:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (8)].node), (yyvsp[(4) - (8)].node), NULL ,(yyvsp[(5) - (8)].node));
					;}
    break;

  case 615:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (7)].node), (yyvsp[(4) - (7)].node), NULL ,NULL);
					;}
    break;

  case 616:

    {
						(yyval.node)=(yyvsp[(1) - (1)].node);
					;}
    break;

  case 617:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
					;}
    break;

  case 618:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ELSEIF, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
					;}
    break;

  case 619:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ELSE, 1, (yyvsp[(2) - (2)].node));
						//$$ = $2;
					;}
    break;

  case 620:

    {
						ParseNode *casewhenlist = NULL;
						merge_nodes(casewhenlist, result->malloc_pool_, T_PROCEDURE_CASE_WHEN_LIST, (yyvsp[(3) - (7)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CASE, 3, (yyvsp[(2) - (7)].node), casewhenlist, (yyvsp[(4) - (7)].node));
					;}
    break;

  case 621:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
					;}
    break;

  case 622:

    {
						(yyval.node)=(yyvsp[(1) - (1)].node);
					;}
    break;

  case 623:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CASE_WHEN, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
					;}
    break;

  case 624:

    {
						(yyval.node) = NULL;
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
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_LOOP, 5,
                                     NULL,
                                     NULL,
                                     NULL,
                                     NULL,
                                     (yyvsp[(2) - (5)].node));
          ;}
    break;

  case 627:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_LOOP, 5,
                                       (yyvsp[(2) - (11)].node),
                                       NULL,
                                       (yyvsp[(4) - (11)].node),
                                       (yyvsp[(6) - (11)].node),
                                       (yyvsp[(8) - (11)].node));
            ;}
    break;

  case 628:

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

  case 629:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_WHILE, 2, (yyvsp[(2) - (7)].node), (yyvsp[(4) - (7)].node));
					;}
    break;

  case 630:

    {
						/* We do not bother building a node for NULL */
						(yyval.node) = NULL;
					;}
    break;

  case 631:

    {
                        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXIT, 1, NULL);
						(yyval.node)->value_=1;
					;}
    break;

  case 632:

    {
                        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXIT, 1, (yyvsp[(3) - (4)].node));//when_expr
                    ;}
    break;

  case 633:

    {
        					ParseNode *param_list = NULL;
            				merge_nodes(param_list, result->malloc_pool_, T_EXPR_LIST, (yyvsp[(4) - (5)].node));
        					
							malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXEC, 2, (yyvsp[(2) - (5)].node), param_list);
						;}
    break;

  case 634:

    {
							ParseNode *params = NULL;
							malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXEC, 2, (yyvsp[(2) - (4)].node), params);
						;}
    break;

  case 635:

    {
							malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DROP, 2, (yyvsp[(5) - (5)].node),(yyvsp[(5) - (5)].node));
						;}
    break;

  case 636:

    {
							malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DROP, 1, (yyvsp[(3) - (3)].node));
						;}
    break;

  case 637:

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

