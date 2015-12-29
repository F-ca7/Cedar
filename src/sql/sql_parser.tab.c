
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
#define YYLAST   3543

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  231
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  208
/* YYNRULES -- Number of rules.  */
#define YYNRULES  637
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1171

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
     802,   804,   807,   811,   816,   822,   831,   833,   835,   844,
     854,   859,   864,   869,   870,   873,   877,   882,   887,   890,
     893,   898,   899,   903,   905,   909,   910,   912,   915,   917,
     919,   924,   928,   931,   932,   934,   936,   938,   940,   942,
     944,   945,   947,   948,   951,   955,   960,   965,   970,   974,
     978,   982,   983,   987,   989,   990,   994,   996,  1000,  1003,
    1004,  1006,  1008,  1009,  1012,  1013,  1015,  1017,  1019,  1022,
    1026,  1028,  1030,  1034,  1036,  1040,  1042,  1046,  1049,  1053,
    1056,  1058,  1064,  1066,  1070,  1077,  1083,  1086,  1089,  1092,
    1094,  1096,  1097,  1101,  1103,  1105,  1107,  1109,  1111,  1112,
    1116,  1122,  1128,  1133,  1138,  1143,  1146,  1151,  1155,  1159,
    1163,  1167,  1171,  1175,  1179,  1184,  1187,  1188,  1190,  1193,
    1198,  1200,  1202,  1203,  1204,  1207,  1210,  1211,  1213,  1214,
    1216,  1220,  1222,  1226,  1231,  1233,  1235,  1239,  1241,  1245,
    1251,  1258,  1261,  1262,  1266,  1270,  1272,  1276,  1281,  1283,
    1285,  1287,  1288,  1292,  1293,  1296,  1300,  1303,  1306,  1311,
    1312,  1314,  1315,  1317,  1319,  1326,  1328,  1332,  1335,  1337,
    1339,  1342,  1344,  1346,  1349,  1351,  1353,  1355,  1357,  1359,
    1360,  1362,  1364,  1370,  1373,  1374,  1379,  1381,  1383,  1385,
    1387,  1389,  1392,  1396,  1398,  1402,  1406,  1410,  1415,  1420,
    1426,  1432,  1436,  1440,  1444,  1446,  1448,  1450,  1452,  1456,
    1458,  1462,  1466,  1469,  1470,  1472,  1476,  1480,  1482,  1484,
    1489,  1496,  1498,  1502,  1506,  1511,  1516,  1522,  1524,  1525,
    1527,  1529,  1530,  1534,  1538,  1542,  1545,  1550,  1558,  1566,
    1573,  1580,  1581,  1583,  1585,  1589,  1599,  1602,  1603,  1607,
    1611,  1615,  1616,  1618,  1620,  1622,  1624,  1628,  1635,  1636,
    1638,  1640,  1642,  1644,  1646,  1648,  1650,  1652,  1654,  1656,
    1658,  1660,  1662,  1664,  1666,  1668,  1670,  1672,  1674,  1676,
    1678,  1680,  1682,  1684,  1686,  1688,  1690,  1692,  1694,  1696,
    1698,  1700,  1703,  1710,  1716,  1720,  1722,  1725,  1729,  1733,
    1737,  1741,  1746,  1751,  1756,  1760,  1761,  1763,  1766,  1768,
    1770,  1772,  1774,  1776,  1778,  1780,  1783,  1786,  1789,  1792,
    1795,  1798,  1801,  1804,  1807,  1810,  1813,  1816,  1819,  1822,
    1825,  1827,  1829,  1830,  1832,  1835,  1837,  1839,  1841,  1843,
    1845,  1847,  1850,  1853,  1856,  1859,  1862,  1865,  1868,  1871,
    1874,  1877,  1880,  1883,  1886,  1889,  1892,  1894,  1896,  1901,
    1908,  1914,  1918,  1927,  1935,  1943,  1950,  1952,  1955,  1960,
    1963,  1970,  1973,  1975,  1980,  1981,  1984,  1990,  2001,  2013,
    2020,  2022,  2025,  2028,  2034,  2039,  2045,  2049
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
      -1,   308,    -1,   303,    -1,   166,   330,   130,   389,   113,
     331,   309,   319,    -1,   166,   311,   328,   330,   113,   331,
     309,   321,   327,    -1,   306,    16,   328,   306,    -1,   306,
      17,   328,   306,    -1,   306,    15,   328,   306,    -1,    -1,
     196,   240,    -1,   196,     7,   240,    -1,   135,   317,   143,
     317,    -1,   143,   317,   135,   317,    -1,   135,   317,    -1,
     143,   317,    -1,   135,   317,   230,   317,    -1,    -1,   122,
     312,   123,    -1,   313,    -1,   312,   230,   313,    -1,    -1,
     314,    -1,   313,   314,    -1,   153,    -1,   124,    -1,   163,
      40,   316,    41,    -1,    40,   315,    41,    -1,   315,   230,
      -1,    -1,   203,    -1,   177,    -1,   175,    -1,   115,    -1,
       5,    -1,    12,    -1,    -1,   310,    -1,    -1,   112,   190,
      -1,   240,   113,   240,    -1,    76,   240,   113,   240,    -1,
     133,   240,   113,   240,    -1,   187,   240,   113,   240,    -1,
      76,   113,   240,    -1,   133,   113,   240,    -1,   187,   113,
     240,    -1,    -1,   120,    77,   235,    -1,   323,    -1,    -1,
     145,    77,   324,    -1,   325,    -1,   324,   230,   325,    -1,
     240,   326,    -1,    -1,    71,    -1,    98,    -1,    -1,   121,
     240,    -1,    -1,    68,    -1,   100,    -1,   240,    -1,   240,
     409,    -1,   240,    70,   409,    -1,    34,    -1,   329,    -1,
     330,   230,   329,    -1,   332,    -1,   331,   230,   332,    -1,
     333,    -1,   333,    70,   407,    -1,   333,   407,    -1,   303,
      70,   407,    -1,   303,   407,    -1,   334,    -1,    40,   334,
      41,    70,   407,    -1,   407,    -1,    40,   334,    41,    -1,
     332,   335,   131,   332,   144,   240,    -1,   332,   131,   332,
     144,   240,    -1,   114,   336,    -1,   134,   336,    -1,   160,
     336,    -1,   127,    -1,   147,    -1,    -1,   110,   339,   338,
      -1,   302,    -1,   253,    -1,   295,    -1,   254,    -1,   227,
      -1,    -1,   170,   182,   344,    -1,   170,    86,   113,   333,
     344,    -1,   170,    86,    30,   333,   344,    -1,   170,   181,
     219,   344,    -1,   170,   215,   219,   344,    -1,   170,   343,
     226,   344,    -1,   170,   164,    -1,   170,    87,   181,   333,
      -1,    99,   333,   345,    -1,    98,   333,   345,    -1,   170,
     228,   341,    -1,   170,   248,   228,    -1,   170,   209,   342,
      -1,   170,   148,   344,    -1,   170,   346,   200,    -1,   135,
       5,   230,     5,    -1,   135,     5,    -1,    -1,   355,    -1,
     112,    89,    -1,   112,    89,    40,    41,    -1,   117,    -1,
     167,    -1,    -1,    -1,    28,     4,    -1,   196,   240,    -1,
      -1,     4,    -1,    -1,   114,    -1,    87,   191,   348,    -1,
     349,    -1,   348,   230,   349,    -1,   350,   125,    77,   351,
      -1,     4,    -1,     4,    -1,   102,   191,   353,    -1,   350,
      -1,   353,   230,   350,    -1,   169,   149,   355,    24,   351,
      -1,    69,   191,   350,   125,    77,   351,    -1,   112,   350,
      -1,    -1,   155,   191,   358,    -1,   350,   189,   350,    -1,
     357,    -1,   358,   230,   357,    -1,    69,   191,   350,   360,
      -1,   137,    -1,   223,    -1,   199,    -1,    -1,   198,    84,
     172,    -1,    -1,    72,   361,    -1,   174,   188,   362,    -1,
      83,   361,    -1,   161,   361,    -1,   162,   367,   368,     5,
      -1,    -1,   117,    -1,    -1,   201,    -1,   202,    -1,   119,
     370,   144,   373,   189,   353,    -1,   371,    -1,   370,   230,
     371,    -1,    68,   372,    -1,    69,    -1,    87,    -1,    87,
     191,    -1,    97,    -1,   102,    -1,   119,   146,    -1,   129,
      -1,   190,    -1,   166,    -1,   156,    -1,   158,    -1,    -1,
      34,    -1,   407,    -1,   159,   370,   375,   113,   353,    -1,
     144,   373,    -1,    -1,   151,   377,   113,   378,    -1,   409,
      -1,   302,    -1,   295,    -1,   254,    -1,   253,    -1,   169,
     380,    -1,   169,   169,   382,    -1,   381,    -1,   380,   230,
     381,    -1,    14,   383,   240,    -1,   406,   383,   240,    -1,
     117,   406,   383,   240,    -1,   167,   406,   383,   240,    -1,
     118,    42,   406,   383,   240,    -1,   168,    42,   406,   383,
     240,    -1,    13,   383,   240,    -1,   247,   383,   240,    -1,
      14,   383,   385,    -1,   189,    -1,    24,    -1,    14,    -1,
     247,    -1,    40,   386,    41,    -1,   237,    -1,   386,   230,
     237,    -1,   108,   377,   388,    -1,   192,   389,    -1,    -1,
     384,    -1,   389,   230,   384,    -1,   391,   151,   377,    -1,
      94,    -1,   102,    -1,    69,   181,   333,   393,    -1,    69,
     181,   333,   155,   189,   333,    -1,   394,    -1,   393,   230,
     394,    -1,    66,   395,   280,    -1,   102,   395,   406,   396,
      -1,    69,   395,   406,   397,    -1,   155,   395,   406,   189,
     409,    -1,    85,    -1,    -1,    78,    -1,   157,    -1,    -1,
     169,    20,    10,    -1,   102,    20,    10,    -1,   169,    96,
     237,    -1,   102,    96,    -1,    69,   176,   169,   400,    -1,
      69,   176,   399,    90,   141,    24,     4,    -1,    69,   176,
     399,    91,   141,    24,     4,    -1,    69,   176,   178,   141,
      24,     4,    -1,    69,   176,   179,   180,    24,     4,    -1,
      -1,   116,    -1,   401,    -1,   400,   230,   401,    -1,   406,
      24,   237,   402,   403,   218,    24,   404,   405,    -1,    82,
       4,    -1,    -1,   165,    24,   139,    -1,   165,    24,   173,
      -1,   165,    24,    76,    -1,    -1,   213,    -1,   224,    -1,
     205,    -1,   211,    -1,    81,    24,     5,    -1,   216,    24,
       4,   217,    24,     5,    -1,    -1,     3,    -1,   410,    -1,
       3,    -1,   410,    -1,     3,    -1,     3,    -1,   410,    -1,
     204,    -1,   205,    -1,   206,    -1,   207,    -1,   208,    -1,
     209,    -1,   210,    -1,   211,    -1,   212,    -1,   213,    -1,
     214,    -1,   215,    -1,   216,    -1,   217,    -1,   218,    -1,
     219,    -1,   221,    -1,   220,    -1,   222,    -1,   223,    -1,
     224,    -1,   225,    -1,   226,    -1,   227,    -1,   228,    -1,
     412,   415,    -1,    87,    43,     3,    40,   413,    41,    -1,
      87,    43,     3,    40,    41,    -1,   413,   230,   414,    -1,
     414,    -1,    14,   281,    -1,    30,    14,   281,    -1,    46,
      14,   281,    -1,    47,    14,   281,    -1,    14,   281,    54,
      -1,    30,    14,   281,    54,    -1,    46,    14,   281,    54,
      -1,    47,    14,   281,    54,    -1,    72,   416,   105,    -1,
      -1,   417,    -1,   417,   418,    -1,   418,    -1,   424,    -1,
     428,    -1,   433,    -1,   432,    -1,   422,    -1,   423,    -1,
     307,   229,    -1,   295,   229,    -1,   254,   229,    -1,   253,
     229,    -1,   302,   229,    -1,   257,   229,    -1,   259,   229,
      -1,   275,   229,    -1,   261,   229,    -1,   262,   229,    -1,
     263,   229,    -1,   265,   229,    -1,   264,   229,    -1,   266,
     229,    -1,   267,   229,    -1,   435,    -1,   434,    -1,    -1,
     420,    -1,   420,   421,    -1,   421,    -1,   424,    -1,   428,
      -1,   433,    -1,   432,    -1,   423,    -1,   307,   229,    -1,
     295,   229,    -1,   254,   229,    -1,   253,   229,    -1,   302,
     229,    -1,   257,   229,    -1,   259,   229,    -1,   275,   229,
      -1,   261,   229,    -1,   262,   229,    -1,   263,   229,    -1,
     265,   229,    -1,   264,   229,    -1,   266,   229,    -1,   267,
     229,    -1,   435,    -1,   434,    -1,    44,   389,   281,   229,
      -1,    44,   389,   281,    96,   237,   229,    -1,    44,   389,
     281,    54,   229,    -1,   169,   380,   229,    -1,   126,   240,
     183,   419,   425,   427,   105,   126,    -1,   126,   240,   183,
     419,   425,   105,   126,    -1,   126,   240,   183,   419,   427,
     105,   126,    -1,   126,   240,   183,   419,   105,   126,    -1,
     426,    -1,   425,   426,    -1,    45,   240,   183,   419,    -1,
     104,   419,    -1,    79,   240,   429,   431,   105,    79,    -1,
     429,   430,    -1,   430,    -1,   197,   240,   183,   419,    -1,
      -1,   104,   419,    -1,    49,   419,   105,    49,   229,    -1,
     112,    14,    30,   237,   189,   237,    49,   419,   105,    49,
      -1,   112,    14,    30,    55,   237,   189,   237,    49,   419,
     105,    49,    -1,    48,   240,    52,   419,   105,    48,    -1,
     229,    -1,    50,   229,    -1,    51,   229,    -1,    53,     3,
      40,   235,    41,    -1,    53,     3,    40,    41,    -1,   102,
      43,   126,   109,     3,    -1,   102,    43,     3,    -1,   170,
      43,     3,    -1
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
    3713,  3723,  3728,  3740,  3748,  3761,  3765,  3779
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
       1,     2,     3,     4,     5,     8,     1,     1,     8,     9,
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
       5,     3,     8,     7,     7,     6,     1,     2,     4,     2,
       6,     2,     1,     4,     0,     2,     5,    10,    11,     6,
       1,     2,     2,     5,     4,     5,     3,     3
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
       0,     0,     0,     0,     0,     0,   271,     0,   630,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   556,   558,   563,   564,   559,
     560,   562,   561,   581,   580,     0,   634,     0,    45,   161,
       0,     0,   486,   493,     0,     0,     0,     0,     0,   478,
     478,   478,   478,   469,   471,     0,   398,   399,   397,     0,
       0,     0,     0,     0,     0,   234,     0,   228,     0,   226,
       0,   229,   325,   330,     0,   456,   457,   464,   462,   430,
       0,   431,   416,   440,   439,   438,   437,   435,     0,     0,
     433,     0,   408,     0,     0,   272,     0,   277,   320,   317,
     321,   290,   451,     0,     0,   445,     0,     0,   391,     0,
       0,     0,     0,   452,   444,   446,   373,   373,   356,   374,
     375,   352,   368,   353,   365,   354,     0,   129,   136,     0,
     137,     0,     0,     0,    45,     0,     0,     0,     0,     0,
       0,   232,   100,    81,    82,     0,    45,    67,   115,     0,
      68,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   271,   257,   262,   256,   260,
     261,   309,   305,   306,   288,   289,   268,   269,   253,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   583,   585,   590,
     586,   587,   589,   588,   607,   606,   631,   632,     0,     0,
       0,     0,     0,     0,   568,   567,   570,   571,   573,   574,
     575,   577,   576,   578,   579,   572,   566,   569,   565,   554,
     557,   143,   633,     0,     0,   158,     0,     0,     0,     0,
       0,     0,   477,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   543,     0,     0,     0,   545,   165,     0,   382,
       0,     0,   264,   138,   635,   257,     0,   330,     0,     0,
     329,   341,   339,     0,   341,   341,     0,     0,   327,   388,
       0,     0,   394,   396,   432,   281,   282,   287,   286,   285,
     284,     0,   274,     0,   318,     0,     0,   291,   254,   122,
     123,   447,     0,   385,   389,   448,     0,     0,   453,   351,
     350,     0,     0,   124,     0,     0,     0,     0,     0,     0,
     126,     0,     0,     0,   128,   402,   263,   140,     0,     0,
     240,     0,     0,    62,     0,   121,   117,    59,    99,    98,
       0,     0,     0,    95,    93,    94,    92,    91,    90,   111,
      96,     0,     0,    70,     0,     0,   109,   112,   103,   101,
     105,     0,    83,    84,    85,    86,    87,    89,    88,     0,
     135,   134,   133,   132,    49,    48,   314,   310,   311,   308,
       0,     0,     0,     0,   176,   203,   179,   203,   189,   191,
     184,   195,   199,   197,   175,   174,   190,   195,   181,   173,
     201,   201,   172,   203,   203,     0,   582,   594,   593,   596,
     597,   599,   600,   601,   603,   602,   604,   605,   598,   592,
     595,   591,     0,   584,   159,   160,     0,     0,     0,     0,
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
     188,     0,     0,   608,     0,     0,     0,     0,     0,     0,
       0,   148,     0,     0,   582,   621,     0,     0,     0,     0,
       0,     0,   501,   487,   488,   205,     0,     0,   475,   479,
     480,   474,     0,   550,   547,   548,   549,   544,     0,   213,
       0,     0,     0,     0,   290,     0,   301,   458,     0,   295,
     296,   297,   127,   141,   139,   142,   233,   241,   244,     0,
       0,   231,    63,     0,   120,   114,     0,   107,    73,    74,
      75,    76,    77,    79,    78,   113,     0,     0,     0,     0,
       0,   610,     0,     0,   626,   149,   151,   150,   152,     0,
       0,   582,   625,     0,     0,     0,     0,   582,     0,     0,
     616,     0,     0,   496,     0,     0,   171,     0,   485,     0,
       0,   476,   551,   552,   553,     0,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   164,   211,   168,   331,
     335,     0,   255,   324,     0,   312,   460,   242,     0,     0,
     119,   108,     0,   202,   194,     0,   196,   200,   609,   629,
     153,     0,   623,   620,     0,     0,     0,   619,   615,     0,
     617,     0,     0,   263,     0,     0,   207,     0,     0,     0,
     209,   204,   483,   482,   484,     0,   224,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   334,     0,
       0,   259,   245,     0,     0,   154,     0,   582,   582,   613,
       0,   614,   292,   500,   498,   499,     0,   206,   208,   210,
     170,   223,   220,   222,   215,   214,   219,   218,   217,   216,
     221,   212,   302,   313,   243,   193,   582,     0,   618,   612,
     258,   504,   505,   502,   503,   508,     0,     0,     0,     0,
     495,     0,   627,     0,     0,   628,   506,     0,     0,     0,
     507
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    31,    32,    33,   397,   334,   335,   336,   724,   459,
     726,   338,   509,   705,   706,   882,   339,   340,   341,   342,
     739,   495,   551,   552,   696,   697,   553,   109,   554,    38,
     555,   556,   557,   558,   559,   560,   561,    39,    40,    41,
      42,   219,    43,    44,   562,    46,   230,   833,   834,   835,
     775,   910,   914,   912,   917,   907,  1026,  1091,  1046,  1047,
    1097,    47,   241,   429,   563,   197,    49,   500,   699,   877,
     979,   564,   343,    52,    53,    54,   565,    55,   425,   667,
     157,   270,   271,   272,   453,   661,   546,   668,   205,   496,
    1055,   202,   203,   542,   543,   749,  1111,   275,   460,   461,
     853,   854,   432,   433,   646,   842,    56,   250,   137,    57,
     306,   302,   187,   298,   236,   188,    58,   231,   232,   242,
     674,    59,   243,    60,   284,    61,   259,   260,    62,   418,
     120,   312,    63,    64,    65,    66,   155,   265,    67,   148,
     149,   252,   440,    68,   262,    69,   134,   447,    70,   168,
     169,   288,   278,   437,   678,   859,    71,   245,   438,    72,
      73,    74,   413,   414,   617,   951,   948,    75,   224,   402,
     403,   942,  1025,  1155,  1160,   344,   345,   189,   110,   346,
      76,    77,   625,   626,   208,   384,   385,   386,   566,   567,
     568,   387,   569,   570,  1019,  1020,  1021,   571,   802,   803,
     936,   572,   573,   574,   575,    78,    79,    80
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -747
static const yytype_int16 yypact[] =
{
    3070,    14,  2706,    88,  2706,  2706,  2706,   369,    12,    12,
     139,  -747,   109,  2740,  2740,   160,  2706,  -106,   645,  -747,
    2706,   102,  -747,   645,    12,   202,   215,  1239,   500,   164,
     215,   354,   -56,  -747,  -747,  -747,  -747,  -747,  -747,  -747,
    -747,  -747,  -747,  -747,  -747,  -747,  -747,  -747,  -747,   226,
    -747,     4,   161,  -747,   159,    -6,  -747,  -747,  -747,  -747,
    -747,  -747,  -747,  -747,  -747,  -747,  -747,  -747,  -747,  -747,
    -747,  -747,  -747,   232,  -747,  -747,  -747,   329,  -747,  -747,
    -747,   364,   372,  -747,  -747,  -747,  -747,  -747,  -747,  -747,
    -747,  -747,  -747,  -747,  -747,  -747,  -747,  -747,  -747,  -747,
    -747,  -747,  -747,  -747,  -747,  -747,  -747,  -747,  -747,   359,
    -747,  -747,   392,  -747,   475,  -747,   273,  2740,   431,  -747,
    -747,  -747,   436,   321,   431,  2740,  -747,   446,  -747,  -747,
     446,    53,   327,   431,   279,  -747,  -747,   344,   349,  -747,
     324,  -747,  -747,   366,  -747,  -747,  -747,  -747,   -62,  -747,
     408,   431,   169,  -747,  -747,   -45,   348,    43,  -747,    19,
     123,  2780,   478,   411,  2780,   484,   542,    19,   332,  -747,
      19,  -747,  -747,   560,    92,   385,  -747,  -747,    98,  -747,
    -747,   350,    98,   456,   362,   448,   356,   370,   389,   555,
     399,  2740,  -747,  -747,  3070,  2740,  2206,  -747,    43,    43,
      43,   525,   -34,   227,   420,  -747,  2706,   701,  -747,  -747,
    -747,   501,  1587,   550,   551,  -747,  -747,   613,   619,   561,
    -747,  2780,   486,   451,   284,   291,  -747,   208,   592,   615,
    2740,   410,  -747,   517,   455,  -747,  -747,  -747,  -747,   538,
     545,  2395,  -747,   428,   646,  -747,  -747,  -747,  -747,  -747,
    -747,  -747,  -747,  -747,  -747,  2480,   645,   344,   472,  -747,
     440,  2480,   563,  -747,  -747,   663,  -747,  -747,  -747,   632,
     -70,   348,  -747,  -747,  -747,  1707,  -747,  -747,  2206,   407,
    2206,    19,  2780,   431,   654,    19,  2780,    19,  -747,  2206,
    2354,  2206,  -747,  2740,  2740,  2740,   675,  2206,  -747,    98,
    -747,    70,  -747,  -747,    98,   678,  -747,  -747,    98,  -747,
    1117,   596,  -747,   515,  -747,    18,   298,  -747,  -747,  -747,
    -747,  -747,  -747,  -747,  -747,   652,  2206,  2206,  2206,  1740,
    2206,   656,   655,   658,  -747,  -747,  -747,  3505,  -747,  -747,
    -747,  -747,   659,  -747,  -747,   660,   661,    24,    24,    24,
    2206,   382,   382,   589,  -747,  -747,  -747,  2580,  2206,   986,
     482,   488,  2706,  2206,   693,  2206,  1467,  2354,  -747,   493,
     497,   502,   505,   506,   509,   510,   514,   524,   527,   528,
     537,   540,   541,   543,   622,   701,  -747,  -747,  -747,  -747,
    -747,  -747,  -747,  -747,  -747,    14,  -747,     8,  3505,  -747,
     535,   732,   547,  -747,   720,   730,   743,   638,   640,   688,
     688,   688,   -17,   552,  -747,   698,  -747,  -747,  -747,   616,
     674,   744,   431,   714,  1828,   161,   790,  -747,  1901,   565,
    2514,   430,  2554,  -747,   431,   652,  -747,  -747,   566,  -747,
     608,  -747,  -747,  -747,  -747,  -747,  -747,  -747,   431,   431,
    -747,   431,  -747,    20,   299,  -747,   348,  -747,  -747,  1343,
    -747,     7,  3505,   758,   759,  3505,  2206,    19,  -747,   799,
    2206,    19,   764,  3505,  -747,  3505,    98,    98,  -747,  -747,
    3505,  -747,   782,  -747,   582,  -747,   784,  -747,  -747,  1978,
    -747,  2056,  2128,    22,  3243,  2206,   785,   651,  2780,  2319,
     631,  -747,  2355,  -747,  -747,   598,  3433,   363,  3505,   635,
    -747,  2780,  2206,  2206,   438,  2206,  2206,  2206,  2206,  2206,
    2206,  2206,  2206,  2285,   789,   562,  2206,  2206,  2206,  2206,
    2206,  2206,  2206,   344,  2641,   215,  -747,   814,  -747,   814,
    -747,  3317,   603,  -747,  -747,  -747,   -44,   699,  -747,  3023,
    3398,   609,   611,   612,   614,   618,   624,   625,   626,   636,
     637,   639,   642,   643,   644,   647,   737,   986,  -747,  -747,
    -747,  -747,  -747,  -747,  -747,  -747,  -747,  -747,   468,   459,
     821,  2991,   -28,   168,  -747,  -747,  -747,  -747,  -747,  -747,
    -747,  -747,  -747,  -747,  -747,  -747,  -747,  -747,  -747,  -747,
    -747,  -747,  -747,  2206,   839,  -747,  2780,   681,   871,   874,
     855,   856,  -747,  2780,  2780,  2780,  2740,  2780,   300,   799,
    1094,   868,  -747,   870,   876,    26,  -747,  -747,  2673,  -747,
     799,  2206,  3505,  -747,  -747,  1433,   430,   842,  2395,  2740,
    -747,   745,  -747,  2395,   745,   745,   762,  2740,  -747,  -747,
     646,   431,  -747,  -747,   428,  -747,  -747,  -747,  -747,  -747,
    -747,   853,   348,  2706,  -747,  2446,  1707,  -747,  -747,  -747,
    -747,  3505,  2206,  -747,  -747,  3505,  2206,   681,  -747,  -747,
    -747,   867,   905,  -747,  2206,  1858,  2206,  3264,  2206,  3296,
    -747,  1094,  2206,  3457,  -747,  -747,  -116,  -747,   887,    28,
    -747,   878,  2206,  -747,  2206,   -32,  -747,  -747,  1503,  2355,
    2206,  2285,   789,   869,   869,   869,   869,   869,   869,   944,
     955,  2285,  2285,  -747,   783,  1740,  -747,  -747,  -747,  -747,
    -747,   508,   752,   752,   881,   881,   881,   881,  -747,   875,
    -747,  -747,  -747,  -747,  -747,  -747,    43,  -747,  -747,  -747,
    2206,   382,   382,   382,  -747,   880,  -747,   880,  -747,  -747,
    -747,   883,   775,   886,  -747,  -747,  -747,   883,  -747,  -747,
     888,   888,  -747,   880,   880,    39,   986,  -747,  -747,  -747,
    -747,  -747,  -747,  -747,  -747,  -747,  -747,  -747,  -747,  -747,
    -747,  -747,   884,  -747,   797,   802,   806,   807,   924,   646,
     873,  2206,   -31,  -747,   595,   986,   646,  -747,  3505,  -747,
    -747,  -747,   857,  -747,  -747,   936,   948,  -747,  1094,    44,
       5,  -747,   765,   688,  -747,  -747,   899,  1094,  1094,  1094,
    -747,   495,   824,    30,  -747,  -747,  -747,  3505,   889,   430,
    -747,  -747,  -747,   602,  -747,  -747,  2395,  -747,  -747,   428,
    -747,  -747,   455,   -91,   430,  -747,  3505,  3505,  -747,    36,
    -747,  -747,  3505,  2206,  3505,  2206,  3505,  2206,   916,  3505,
    -747,  2780,   161,  2206,    14,  2780,  2206,   -89,  3481,  3012,
    2206,  -747,   858,   955,   826,  -747,  -747,  -747,  2285,  2285,
    2285,  2285,  2285,  2285,  2285,  2285,    40,  -747,  -747,  -747,
    -747,  1707,  -747,  -747,  -747,  -747,   956,  -747,  -747,   957,
    -747,  -747,  -747,   959,  -747,  -747,   963,  -747,  -747,  -747,
    -747,   731,   681,  -747,   864,   741,   646,   646,   646,   646,
     877,   566,   989,  3033,   986,  -747,   898,   681,   815,   230,
     -53,  1001,   841,  -747,  -747,  -747,    75,   114,  -747,  -747,
    -747,  -747,  2706,  -747,   954,   960,   961,  -747,   969,   498,
    2673,  2740,  2206,   634,   -34,  2395,   890,  -747,   681,  3505,
    3505,  3505,  -747,  -747,  -747,  3505,  -747,  -747,  3505,    47,
     973,  -747,  -747,  2206,  3505,  -747,  2285,   964,   772,   772,
     978,   978,   978,   978,  -747,  -747,   -47,   977,    49,   980,
     982,  -747,   795,   971,  -747,   566,   566,   566,   566,   646,
     897,   986,  -747,   952,   843,   681,  2206,   986,   907,   287,
    -747,   933,  2395,  -747,  1015,   822,    65,  1032,  -747,  1036,
     681,  -747,  -747,  -747,  -747,  2780,  1023,  1023,  1023,  1023,
    1023,  1023,  1023,  1023,  1023,  1023,   819,  -747,  -747,  -747,
    3505,  2206,  -747,   430,   976,   934,  -747,  -747,  2206,  2206,
    3505,   964,  2395,  -747,  -747,  1051,  -747,  -747,  -747,  -747,
     566,   646,  -747,  -747,   681,  1009,  3054,  -747,  -747,   935,
    -747,   958,   938,   -91,   238,  1035,  -747,  1050,   681,   937,
    -747,  -747,  -747,  -747,  -747,    56,  -747,  1062,  1063,   895,
    1069,  1078,  1079,  1087,  1088,  1089,  1091,   498,  3505,  2206,
    2206,  -747,  3505,    57,  1055,   566,  1048,   986,   986,  -747,
     974,  -747,   589,  -747,  -747,  -747,   -60,  -747,  -747,  -747,
    -747,  -747,  -747,  -747,  -747,  -747,  -747,  -747,  -747,  -747,
    -747,  -747,   872,  3505,  -747,  -747,   986,   996,  -747,  -747,
    -747,  -747,  -747,  -747,  -747,    13,   998,  1056,  1080,  1082,
    -747,  1058,  -747,  1103,  1105,  -747,  -747,   893,  1090,  1106,
    -747
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -747,  -747,  -747,   919,  -295,  -747,  -561,  -431,  -567,   559,
     404,  -747,  -747,  -747,   414,  -747,   -14,  1096,  -747,  -747,
    -747,  -747,    32,    41,  -747,   257,    25,    34,    48,  -747,
    -176,  -160,  -145,  -131,  -103,   -90,   -88,  -747,  -747,  -747,
    -747,   554,  -747,  -747,    55,  -747,  -747,  -747,   173,   521,
    -555,   368,  -747,  -747,   365,  -661,  -747,  -747,  -747,    31,
     -95,  -747,  -747,  -747,    52,  -402,  -747,  -747,   104,  -747,
      81,    21,     0,    15,  -747,   199,   -83,   204,  -654,   939,
     -13,  -747,   687,  -253,  -747,  -747,  -328,   180,  -201,  -747,
    -747,  -747,  -747,  -747,   395,  -747,  -747,  -171,   481,  -352,
     126,  -235,    23,   725,  -747,  -200,  -747,  -747,  -747,  -747,
    -747,  -747,  -747,  -112,  1024,  -747,  -747,  -747,   734,   -67,
    -481,  -747,  -407,  -747,   981,  -747,   710,  -747,  -747,  -747,
      94,  -747,  -747,  -747,  -747,  -747,  -747,  -747,  -747,  1137,
     909,  -747,   900,  -747,  -747,  -747,    58,  -747,  -747,   796,
     882,  -747,   -81,   516,  -747,  -747,  -747,  -747,  -350,  -747,
    -747,  -747,  -747,   553,   182,  -747,  -747,  -747,  -747,  -747,
     564,  -747,  -747,  -747,  -747,    60,   -10,  -747,   -11,     6,
    -747,  -747,  -747,   342,  -747,  -747,  -747,   792,  -746,  -747,
     617,  -747,   -82,   -80,  -747,   156,   162,   -79,  -747,   376,
    -747,   -78,   -77,   -75,   -74,  -747,  -747,  -747
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -514
static const yytype_int16 yytable[] =
{
      51,    81,   354,   128,   128,   135,   431,   549,   111,   135,
     111,   111,   111,   167,   582,   493,    82,   191,   457,   129,
     129,    50,   111,   633,   547,    36,   111,   347,   348,   349,
     924,   373,    34,   171,   505,  -292,   127,   130,   113,   114,
     115,    35,   872,   276,   654,  -247,   812,   374,    37,   602,
     193,   227,    48,   455,     1,    45,   238,   233,   499,   939,
    1022,   655,   375,   690,     1,   826,  1062,   830,   612,   874,
     300,   959,   880,   934,   226,  1086,   376,   967,   150,   280,
     424,   995,   255,   949,   258,  1087,   289,   170,  1057,   291,
    1064,   112,   723,   921,  1158,  1027,   908,  1130,  1144,   751,
    -292,   351,   806,   121,   377,   424,   204,   128,   196,   352,
    -247,   273,   919,   920,   871,   128,   858,   378,   153,   379,
     665,   136,   293,   129,   383,   388,   296,   389,   390,   391,
     392,   129,   393,   394,  1029,   922,   868,    51,   825,   965,
     225,   980,   351,   274,   884,  1151,   946,   276,   234,   836,
     352,  1152,   548,  1153,   886,   887,   263,   264,   249,   482,
     456,  1088,   950,   279,  1154,   704,   801,   171,   256,   246,
     171,  1028,   616,   194,   198,   199,   200,   650,   247,   239,
      26,   128,   122,   666,    26,   128,   752,   481,  1012,   248,
     535,  -292,   483,   636,    51,   135,   485,   129,   964,   966,
     466,   129,   666,   131,   470,   294,   472,    51,   277,   373,
    1030,   119,   111,   947,   313,    50,   468,  1089,   315,    36,
     128,   281,   125,  -292,   285,   374,    34,   171,   382,  1159,
     436,   128,   371,  -247,   468,    35,   129,   666,   603,   369,
     375,   430,    37,   938,   849,   441,    48,   129,   370,    45,
     656,   441,   603,   421,   376,   372,   831,    51,   875,   381,
     960,   129,   380,   945,   356,  1072,   968,   129,   923,  1090,
     603,  1077,   954,   955,   956,  1016,   167,  1058,   446,  1065,
     723,   404,   377,   128,   128,   128,   875,  1058,   171,   443,
     723,   723,   171,   151,   297,   378,   171,   379,   444,   129,
     129,   129,   383,   388,   201,   389,   390,   391,   392,   445,
     393,   394,   277,   261,  1123,    51,   476,   477,   478,   154,
     123,   987,   988,   989,   990,   991,   992,   993,   994,   507,
     124,   510,  1016,   415,  1017,  1018,   501,   156,  -513,   204,
    -511,   132,   467,   436,    82,   416,   471,   536,   536,   536,
     170,   133,   190,   167,   192,   233,   195,   409,   196,    51,
     410,  1002,  -303,   111,   679,   680,   409,   649,   111,   410,
    -303,  1147,  1148,   171,   407,   408,  1014,  1124,  -257,  -257,
    -257,   652,   258,   206,     1,    51,   672,   544,   266,   220,
     676,  1017,  1079,   411,   545,    51,   578,   807,   290,   256,
    1156,   207,   411,   839,   209,   209,   382,  1056,   843,   457,
     371,  1125,   463,   210,   657,   211,   601,   369,   128,  1061,
     640,   464,   648,   903,   904,   905,   370,   170,   635,  1122,
     896,   417,   212,   372,   129,   226,   129,   381,   129,   228,
     380,    12,   221,    82,   844,   845,   412,   229,   664,   931,
     235,   222,   223,   240,  1075,   823,   940,   723,   723,   723,
     723,   723,   723,   723,   723,   111,   710,   711,   712,  1094,
     974,   244,   267,    19,   658,   981,   659,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,  -257,    81,
      22,   268,   660,   172,   171,   171,  -257,   251,  -257,   620,
      26,   269,   254,  1116,    82,   253,   897,   171,   898,   899,
     282,   257,   746,   283,   727,   621,   286,  1128,   794,   795,
     796,   797,   798,    51,    30,   213,   214,   215,   216,   217,
     171,   623,   624,   173,   641,   116,   537,   539,   540,   996,
     117,   538,   538,   538,   743,   723,   287,   642,   698,   700,
     118,   643,   290,   292,   644,   740,   295,    51,   301,   299,
     728,   707,   729,   730,   741,   901,  1005,  1006,  1007,  1008,
    1036,   304,   731,   305,   307,   742,   174,   175,   218,   309,
     645,   613,   614,   615,   745,   310,   308,   311,   799,   317,
     318,   319,   350,   320,   321,   322,   128,   323,   324,   811,
     355,   963,   171,   395,   176,  -159,  -160,   177,   399,   171,
     171,   171,   129,   171,   400,   640,   401,   405,   128,   840,
     620,   406,   419,   128,   171,   420,   436,   847,   430,   821,
     422,   129,   423,   430,   129,   129,   621,   426,   178,   129,
     937,   424,   851,   129,   427,   128,   801,   622,   434,  1070,
     435,   448,   623,   624,   179,   430,   404,   180,   452,   111,
     449,   129,   454,   818,   819,   820,   451,   822,   469,   479,
     497,   181,   182,   484,   498,   317,   318,   319,   818,   320,
     321,   322,   279,   323,   324,   811,     1,   511,  -131,   533,
    -378,   204,   534,  -512,  1037,  1038,  1039,   580,  1040,   183,
    1041,   576,   727,   138,   139,   184,   641,   577,  1042,  1043,
    1044,  1115,   584,  1045,   604,   507,   585,   599,   185,   642,
    1053,   586,   140,   643,   587,   588,   644,   605,   589,   590,
      82,     1,   141,   591,   607,   357,   962,   142,   641,   358,
     359,   360,   361,   592,   608,   337,   593,   594,     4,   362,
       6,   642,   645,   332,   143,   643,   595,   609,   644,   596,
     597,   398,   598,   612,   144,   619,    51,   606,  1051,   610,
     363,   611,   618,   627,   628,   436,   528,   529,   530,   531,
     532,   630,   436,   634,   645,   638,   650,   651,    12,   669,
     670,   145,   888,   673,   677,    51,   891,   892,   893,   894,
     895,   146,   682,   364,  1142,   889,   890,   891,   892,   893,
     894,   895,   681,   695,   701,   683,   694,   365,   702,   725,
      19,   200,   704,   750,   753,   147,   128,   462,   777,   465,
     778,   779,   792,   780,   809,   986,   430,   781,   473,   332,
     475,   804,   129,   782,   783,   784,   480,    22,   889,   890,
     891,   892,   893,   894,   895,   785,   786,   366,   787,   494,
     367,   788,   789,   790,    51,   813,   791,   171,   814,   815,
     816,   171,   827,   838,   828,   502,   503,   504,   506,   508,
     829,    30,   841,   846,   850,   976,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   860,   541,
     861,   873,   436,   436,   436,   436,   900,   550,   876,   532,
     906,  1150,   579,   909,   581,   911,   913,   926,   916,   930,
     368,   698,   927,   925,    51,   977,   928,   929,   932,   941,
     943,  1031,  1098,  1099,  1100,  1101,  1102,  1103,  1104,  1105,
    1106,  1049,   944,   953,   952,   128,   958,   972,   111,   961,
    1001,   997,   998,   985,   999,   430,   171,   129,  1000,  1003,
    1004,   129,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   632,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   532,  1010,   436,   889,   890,   891,   892,
     893,   894,   895,  1013,  1015,  1023,  1024,  1009,  1032,  1035,
    1054,    51,   128,  1059,  1033,  1034,   895,    51,  1063,  1069,
     818,  1066,   430,  1067,  1068,   671,     1,  1071,   129,   675,
       2,  1073,  1074,  1078,   358,   359,   360,   361,  1082,  1084,
    1085,   171,  1092,     4,   362,     6,  1093,  1096,   685,  1107,
     687,   689,   128,  1109,   693,  1110,  1114,   436,  1117,  1126,
    1127,  1119,   430,  1120,  1121,   363,  1131,  1132,   129,  1129,
    1133,   708,   709,  1134,   713,   714,   715,   716,   717,   718,
     719,   720,  1135,    12,  1136,   732,   733,   734,   735,   736,
     737,   738,  1137,  1138,  1139,   700,  1145,  1146,   364,  1140,
    1149,  1157,   603,  1161,  1163,  1162,  1164,  1165,  1166,  1167,
    1168,  1170,   365,   314,  1169,    19,   885,    51,    51,   881,
     316,   317,   318,   319,   186,   320,   321,   322,   973,   323,
     324,   325,   800,  1048,   817,   915,   918,   326,  1141,  1095,
    1113,   353,    22,   662,  1052,   902,    51,   855,  1083,   327,
     328,   486,   366,   637,   237,   367,   629,   329,   487,   653,
     152,   450,   808,   583,   303,   442,   848,   754,   755,   756,
     810,   824,   474,   957,   757,  1080,    30,   600,   935,     0,
       0,  1081,   758,     0,   793,   488,   759,   760,     0,   761,
     837,     0,     0,   489,     0,   762,   330,     0,     0,     0,
       0,     0,     0,     0,     0,   763,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   368,     0,   490,     0,     0,
       0,     0,   764,     0,     0,     0,   331,     0,     0,     0,
       0,   856,   765,     0,   766,   857,   767,     0,     0,     0,
       0,     0,   158,   862,     0,   864,     0,   866,   768,     0,
     491,   869,   159,   160,     0,     0,     0,     0,     0,     0,
       0,   878,     0,   879,     0,   769,     0,     0,     0,   883,
       0,     0,     0,     0,     0,     0,     0,     0,   770,   771,
     772,     0,     0,     0,   398,   332,     0,     0,   773,   774,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   492,     0,     0,     0,     0,   541,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,   333,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   161,   162,     0,     0,
     933,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,     0,     0,     0,     0,     0,     0,   163,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   164,   165,   166,     0,
       0,     0,     0,   663,     0,     0,     0,     0,     0,     0,
       0,     0,   969,     0,   970,     0,   971,     0,     0,     0,
       0,     0,   975,     0,     0,   978,   126,     0,     0,   984,
       0,     0,     0,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,     0,     0,
     316,   317,   318,   319,   209,   320,   321,   322,     0,   323,
     324,   325,     0,     0,     0,     0,     0,   326,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   327,
     328,   458,     0,   639,     0,     0,     0,   329,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1050,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,  1060,     0,     0,     0,   330,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,     0,     0,     0,  1076,   331,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   156,
     316,   317,   318,   319,     0,   320,   321,   322,     0,   323,
     324,   325,     0,     0,     0,     0,     0,   326,     0,     0,
    1108,     0,     0,     0,     0,     0,     0,  1112,   978,   327,
     328,     0,     0,     0,     0,     0,     0,   329,   396,     0,
       0,     0,     0,     0,     0,   332,     0,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,     0,     0,     0,     0,   330,     0,   398,  1143,
       0,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,   333,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   331,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     316,   317,   318,   319,     0,   320,   321,   322,     0,   323,
     324,   325,     0,     0,     0,     0,     0,   326,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   327,
     328,   458,     0,   316,   317,   318,   319,   329,   320,   321,
     322,     0,   323,   324,   325,   332,     0,     0,     0,     0,
     326,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   327,   328,     0,     0,     0,     0,     0,     0,
     329,     0,     0,     0,     0,     0,   330,     0,     0,     0,
       0,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,   333,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   331,     0,     0,   330,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   316,   317,   318,   319,   631,   320,   321,   322,     0,
     323,   324,   325,     0,     0,     0,     0,     0,   326,   331,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     327,   328,     0,     0,     0,     0,     0,     0,   329,     0,
       0,     0,     0,     0,     0,   332,   512,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,     0,     0,     0,
       0,     0,     0,     0,   126,     0,    26,   330,   332,     0,
       0,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,   333,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,     0,   331,     0,     0,
       0,   428,     0,     0,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,   333,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,     0,
       0,   863,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   316,   317,   318,   319,     0,   320,   321,   322,     0,
     323,   324,   325,     0,     0,     0,   332,     0,   326,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     327,   328,     0,     0,     0,     0,     0,     0,   329,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,   333,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   330,     0,   316,
     317,   318,   319,     0,   320,   321,   322,    26,   323,   324,
     325,     0,     0,     0,     0,     0,   326,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   331,   327,   328,
       0,   684,     0,     0,     0,     0,   329,     0,     0,     0,
       0,     0,     0,     0,     0,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
       0,   316,   317,   318,   319,   330,   320,   321,   322,     0,
     323,   324,   325,     0,     0,     0,   332,     0,   326,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     327,   328,     0,     0,     0,   331,     0,     0,   329,   686,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,   333,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   330,     0,   316,
     317,   318,   319,     0,   320,   321,   322,     0,   323,   324,
     325,     0,     0,     0,   332,     0,   326,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   331,   327,   328,
       0,   688,     0,     0,     0,     0,   329,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
     333,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   330,     0,     0,   316,   317,
     318,   319,     0,   320,   321,   322,   332,   323,   324,   325,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   331,     0,   721,   722,     0,
       0,     0,   158,     0,     0,   329,     0,     0,     0,     0,
       0,     0,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,   333,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   158,     0,     1,
       0,     0,     0,     0,   330,     0,     0,   159,   160,     0,
       0,     0,     0,     0,   332,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   532,   331,     0,     0,     0,   126,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
     333,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   428,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   126,
       0,     0,     0,   332,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   161,   162,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   126,     0,    26,   428,     0,     0,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,   333,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   439,     0,     0,   126,     0,     0,
       0,   164,   165,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,     0,   852,
       0,     0,     0,     0,     0,     0,     0,   126,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,    83,   639,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   435,     0,     0,     0,     0,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   647,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   158,     0,     0,     0,     0,     0,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   744,   158,     0,     0,     0,
       0,     0,     0,     0,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,    83,
       0,     0,     0,     0,     0,     0,     0,     0,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   126,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   158,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   832,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
       0,     0,     0,     0,     0,     0,     0,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,     0,     0,     0,     0,     0,     0,     0,     0,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,     0,     0,     0,   754,   755,   756,     0,
       0,     0,     0,   757,     0,     0,     0,     0,     0,     0,
       1,   758,     0,     0,     2,   759,   760,     0,   761,     0,
       0,     0,     0,     3,   762,     0,     0,     4,     5,     6,
       0,     0,     0,     0,   763,     0,     0,     0,     0,     7,
       0,     0,     8,     0,     0,     0,     0,     0,     0,     0,
       0,   764,     0,     9,     0,     0,     0,    10,     0,     0,
       0,   765,     0,   766,    11,   767,     0,    12,    13,    14,
       0,     0,    15,     0,   805,     0,     0,   768,    16,     0,
      17,     0,     0,     0,     0,     0,     0,     0,     0,    18,
       0,     0,     0,     0,   769,   983,     0,     0,     0,    19,
       0,     0,     0,     0,     0,     0,     0,   770,   771,   772,
       0,     0,     0,     0,     0,     0,  1011,   773,   774,     0,
       0,    20,     0,     0,     0,    21,    22,     0,     0,    23,
       0,    24,    25,     0,     0,     0,    26,  1118,     0,    27,
      28,     0,     0,     0,    29,     0,     0,     0,     0,     0,
       0,     0,     0,   650,     0,     0,     0,     0,     0,     0,
      30,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   691,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   692,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   865,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   747,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   867,
       0,     0,     0,     0,     0,   748,   512,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     776,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,     0,     0,   703,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,     0,     0,   870,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
       0,     0,   982,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   532
};

static const yytype_int16 yycheck[] =
{
       0,     1,   203,    13,    14,    16,   241,   357,     2,    20,
       4,     5,     6,    27,   366,   310,     1,    30,   271,    13,
      14,     0,    16,   425,   352,     0,    20,   198,   199,   200,
     776,   207,     0,    27,   329,    41,    13,    14,     4,     5,
       6,     0,   696,    24,   451,    41,   607,   207,     0,    41,
     106,   118,     0,   123,    40,     0,     3,   124,    40,   805,
     113,    41,   207,    41,    40,   620,   113,    41,    85,    41,
     182,    41,   104,   104,     4,    10,   207,    41,    20,   160,
     196,    41,   144,    78,   151,    20,   167,    27,    41,   170,
      41,     3,   523,    54,    81,    20,   757,    41,    41,   143,
     106,   135,   130,     9,   207,   196,   112,   117,   197,   143,
     106,    68,   773,   774,   230,   125,   677,   207,    24,   207,
     113,   227,    30,   117,   207,   207,    28,   207,   207,   207,
     207,   125,   207,   207,    20,    96,   691,   137,   619,   230,
     117,   230,   135,   100,   711,   205,   102,    24,   125,   630,
     143,   211,   353,   213,   721,   722,   201,   202,   137,    89,
     230,    96,   157,    40,   224,   197,   197,   161,   230,   137,
     164,    96,   189,   229,    15,    16,    17,   230,   137,   126,
     166,   191,    43,   230,   166,   195,   230,   299,   934,   137,
     166,   197,   304,   428,   194,   206,   308,   191,   852,   853,
     281,   195,   230,    43,   285,   113,   287,   207,   189,   385,
      96,   199,   206,   169,   191,   194,   283,   152,   195,   194,
     230,   161,   113,   229,   164,   385,   194,   221,   207,   216,
     244,   241,   207,   229,   301,   194,   230,   230,   230,   207,
     385,   241,   194,   804,   651,   255,   194,   241,   207,   194,
     230,   261,   230,   230,   385,   207,   230,   257,   230,   207,
     230,   255,   207,   818,   206,  1011,   230,   261,   229,   204,
     230,  1017,   827,   828,   829,    45,   290,   230,   257,   230,
     711,   221,   385,   293,   294,   295,   230,   230,   282,   257,
     721,   722,   286,   191,   196,   385,   290,   385,   257,   293,
     294,   295,   385,   385,   145,   385,   385,   385,   385,   257,
     385,   385,   189,   144,    76,   315,   293,   294,   295,   117,
     181,   888,   889,   890,   891,   892,   893,   894,   895,   329,
     191,   331,    45,   125,   104,   105,   315,   122,    40,   112,
      42,   181,   282,   357,   329,   137,   286,   347,   348,   349,
     290,   191,   188,   367,     0,   422,   130,    66,   197,   359,
      69,   922,   135,   357,   476,   477,    66,   434,   362,    69,
     143,  1117,  1118,   367,    90,    91,   937,   139,    15,    16,
      17,   448,   449,   151,    40,   385,   467,     5,    40,   116,
     471,   104,   105,   102,    12,   395,   362,   229,   230,   230,
    1146,    72,   102,   638,    41,    41,   385,   968,   643,   662,
     385,   173,     5,    41,   115,    56,   395,   385,   428,   986,
     430,    14,   432,   751,   752,   753,   385,   367,   428,  1083,
     725,   223,    40,   385,   428,     4,   430,   385,   432,     3,
     385,    97,   169,   428,   644,   645,   155,   126,   459,   799,
       4,   178,   179,   126,  1015,   155,   806,   888,   889,   890,
     891,   892,   893,   894,   895,   459,    28,    29,    30,  1030,
     872,   192,   124,   129,   175,   877,   177,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,   135,   499,
     156,   153,   203,     3,   498,   499,   143,   158,   145,    14,
     166,   163,   146,  1074,   499,   191,     8,   511,    10,    11,
      42,   113,   535,   112,   524,    30,    42,  1088,    60,    61,
      62,    63,    64,   533,   190,    60,    61,    62,    63,    64,
     534,    46,    47,    43,   114,   176,   347,   348,   349,   901,
     181,   347,   348,   349,   533,   986,    14,   127,   498,   499,
     191,   131,   230,     3,   134,   533,   181,   567,   112,   219,
       8,   511,    10,    11,   533,   746,   926,   927,   928,   929,
      82,   219,    20,   135,   228,   533,    86,    87,   113,   200,
     160,   409,   410,   411,   534,    40,   226,   198,   130,     4,
       5,     6,    77,     8,     9,    10,   616,    12,    13,    14,
     190,   846,   606,   112,   114,    65,    65,   117,     5,   613,
     614,   615,   616,   617,     5,   635,    65,   141,   638,   639,
      14,   180,    40,   643,   628,    20,   650,   647,   638,   616,
     230,   635,   125,   643,   638,   639,    30,   109,   148,   643,
      55,   196,   663,   647,   109,   665,   197,    41,   230,  1009,
      14,   189,    46,    47,   164,   665,   606,   167,     5,   663,
     230,   665,    40,   613,   614,   615,   113,   617,    24,     4,
      84,   181,   182,     5,   169,     4,     5,     6,   628,     8,
       9,    10,    40,    12,    13,    14,    40,    42,    40,    40,
     200,   112,    42,    42,   206,   207,   208,    14,   210,   209,
     212,   229,   712,    68,    69,   215,   114,   229,   220,   221,
     222,  1071,   229,   225,   189,   725,   229,   105,   228,   127,
     965,   229,    87,   131,   229,   229,   134,     5,   229,   229,
     725,    40,    97,   229,    24,    44,   144,   102,   114,    48,
      49,    50,    51,   229,    24,   196,   229,   229,    57,    58,
      59,   127,   160,   168,   119,   131,   229,    24,   134,   229,
     229,   212,   229,    85,   129,    77,   776,   230,   144,   141,
      79,   141,   230,   109,    40,   799,    34,    35,    36,    37,
      38,    77,   806,     3,   160,   230,   230,   189,    97,    41,
      41,   156,    19,     4,    40,   805,    34,    35,    36,    37,
      38,   166,   230,   112,  1109,    32,    33,    34,    35,    36,
      37,    38,    40,   172,   193,    41,    41,   126,   230,    40,
     129,    17,   197,   230,   135,   190,   846,   278,   229,   280,
     229,   229,   105,   229,     5,    19,   846,   229,   289,   168,
     291,    30,   846,   229,   229,   229,   297,   156,    32,    33,
      34,    35,    36,    37,    38,   229,   229,   166,   229,   310,
     169,   229,   229,   229,   874,     4,   229,   871,     4,    24,
      24,   875,    14,    41,    14,   326,   327,   328,   329,   330,
      14,   190,   147,   131,    41,   874,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    41,   350,
       5,    24,   926,   927,   928,   929,    41,   358,    40,    38,
      40,  1122,   363,    40,   365,   150,    40,   130,    40,     5,
     229,   871,   130,    49,   934,   875,   130,   130,    65,    82,
       4,   952,  1037,  1038,  1039,  1040,  1041,  1042,  1043,  1044,
    1045,   961,     4,    54,   189,   965,   132,    41,   952,    70,
     229,     5,     5,   105,     5,   965,   960,   961,     5,   105,
     229,   965,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,   424,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,     5,  1009,    32,    33,    34,    35,
      36,    37,    38,   105,   189,     4,   165,   130,    54,    40,
     120,  1011,  1022,    40,    54,    54,    38,  1017,    41,    48,
     960,    41,  1022,    41,   229,   466,    40,   130,  1022,   470,
      44,    79,   189,   126,    48,    49,    50,    51,   105,    24,
     218,  1035,    10,    57,    58,    59,    10,    24,   489,   230,
     491,   492,  1062,    77,   495,   121,     5,  1071,    49,    24,
      10,   126,  1062,   105,   126,    79,     4,     4,  1062,   132,
     175,   512,   513,     4,   515,   516,   517,   518,   519,   520,
     521,   522,     4,    97,     5,   526,   527,   528,   529,   530,
     531,   532,     5,     5,     5,  1035,    41,    49,   112,     8,
     126,   105,   230,   105,    24,    49,    24,    49,     5,     4,
     217,     5,   126,   194,    24,   129,   712,  1117,  1118,   705,
       3,     4,     5,     6,    28,     8,     9,    10,   871,    12,
      13,    14,   578,   960,   613,   767,   771,    20,  1107,  1035,
    1059,   202,   156,   456,   964,   750,  1146,   666,  1022,    32,
      33,    34,   166,   428,   130,   169,   422,    40,    41,   449,
      23,   261,   603,   367,   183,   256,   650,    73,    74,    75,
     606,   618,   290,   831,    80,  1019,   190,   385,   802,    -1,
      -1,  1019,    88,    -1,   567,    68,    92,    93,    -1,    95,
     631,    -1,    -1,    76,    -1,   101,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   229,    -1,   100,    -1,    -1,
      -1,    -1,   128,    -1,    -1,    -1,   109,    -1,    -1,    -1,
      -1,   672,   138,    -1,   140,   676,   142,    -1,    -1,    -1,
      -1,    -1,     3,   684,    -1,   686,    -1,   688,   154,    -1,
     133,   692,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   702,    -1,   704,    -1,   171,    -1,    -1,    -1,   710,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   184,   185,
     186,    -1,    -1,    -1,   725,   168,    -1,    -1,   194,   195,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,   750,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,   118,    -1,    -1,
     801,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,   149,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   167,   168,   169,    -1,
      -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   863,    -1,   865,    -1,   867,    -1,    -1,    -1,
      -1,    -1,   873,    -1,    -1,   876,     3,    -1,    -1,   880,
      -1,    -1,    -1,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,    -1,    -1,
       3,     4,     5,     6,    41,     8,     9,    10,    -1,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    -1,    70,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   962,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,   983,    -1,    -1,    -1,    79,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,    -1,    -1,    -1,  1016,   109,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
    1051,    -1,    -1,    -1,    -1,    -1,    -1,  1058,  1059,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,   168,    -1,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,    -1,    -1,    -1,    -1,    79,    -1,  1109,  1110,
      -1,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   109,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    -1,     3,     4,     5,     6,    40,     8,     9,
      10,    -1,    12,    13,    14,   168,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      -1,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   109,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,   109,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,   168,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,   166,    79,   168,    -1,
      -1,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,    -1,   109,    -1,    -1,
      -1,    40,    -1,    -1,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,    -1,
      -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    13,    14,    -1,    -1,    -1,   168,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,    79,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,   166,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    32,    33,
      -1,   113,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
      -1,     3,     4,     5,     6,    79,     8,     9,    10,    -1,
      12,    13,    14,    -1,    -1,    -1,   168,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,   109,    -1,    -1,    40,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,    79,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,    12,    13,
      14,    -1,    -1,    -1,   168,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    32,    33,
      -1,   113,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,    79,    -1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,   168,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   109,    -1,    32,    33,    -1,
      -1,    -1,     3,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,     3,    -1,    40,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    13,    14,    -1,
      -1,    -1,    -1,    -1,   168,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,   109,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,    -1,    -1,   168,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,   166,    40,    -1,    -1,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,    34,    -1,    -1,     3,    -1,    -1,
      -1,   167,   168,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,     3,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,    34,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,     3,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    -1,    -1,    -1,    73,    74,    75,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    88,    -1,    -1,    44,    92,    93,    -1,    95,    -1,
      -1,    -1,    -1,    53,   101,    -1,    -1,    57,    58,    59,
      -1,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    69,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   128,    -1,    83,    -1,    -1,    -1,    87,    -1,    -1,
      -1,   138,    -1,   140,    94,   142,    -1,    97,    98,    99,
      -1,    -1,   102,    -1,   183,    -1,    -1,   154,   108,    -1,
     110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
      -1,    -1,    -1,    -1,   171,   183,    -1,    -1,    -1,   129,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   184,   185,   186,
      -1,    -1,    -1,    -1,    -1,    -1,   183,   194,   195,    -1,
      -1,   151,    -1,    -1,    -1,   155,   156,    -1,    -1,   159,
      -1,   161,   162,    -1,    -1,    -1,   166,   183,    -1,   169,
     170,    -1,    -1,    -1,   174,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   230,    -1,    -1,    -1,    -1,    -1,    -1,
     190,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
      -1,    -1,    -1,    -1,    -1,    98,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    -1,    -1,    41,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    -1,    41,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,    -1,    41,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38
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
      50,    51,    58,    79,   112,   126,   166,   169,   229,   253,
     254,   257,   259,   261,   262,   263,   264,   265,   266,   267,
     275,   295,   302,   307,   416,   417,   418,   422,   423,   424,
     428,   432,   433,   434,   435,   112,    41,   235,   240,     5,
       5,    65,   400,   401,   406,   141,   180,    90,    91,    66,
      69,   102,   155,   393,   394,   125,   137,   223,   360,    40,
      20,   333,   230,   125,   196,   309,   109,   109,    40,   294,
     303,   332,   333,   334,   230,    14,   247,   384,   389,    34,
     373,   407,   371,   253,   254,   295,   302,   378,   189,   230,
     373,   113,     5,   315,    40,   123,   230,   314,    34,   240,
     329,   330,   240,     5,    14,   240,   383,   406,   350,    24,
     383,   406,   383,   240,   381,   240,   333,   333,   333,     4,
     240,   344,    89,   344,     5,   344,    34,    41,    68,    76,
     100,   133,   187,   235,   240,   252,   320,    84,   169,    40,
     298,   302,   240,   240,   240,   235,   240,   303,   240,   243,
     303,    42,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    40,    42,   166,   303,   306,   308,   306,
     306,   240,   324,   325,     5,    12,   317,   317,   319,   389,
     240,   253,   254,   257,   259,   261,   262,   263,   264,   265,
     266,   267,   275,   295,   302,   307,   419,   420,   421,   423,
     424,   428,   432,   433,   434,   435,   229,   229,   258,   240,
      14,   240,   330,   380,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   105,
     418,   302,    41,   230,   189,     5,   230,    24,    24,    24,
     141,   141,    85,   395,   395,   395,   189,   395,   230,    77,
      14,    30,    41,    46,    47,   413,   414,   109,    40,   349,
      77,     7,   240,   296,     3,   303,   332,   334,   230,    70,
     407,   114,   127,   131,   134,   160,   335,    70,   407,   350,
     230,   189,   350,   357,   353,    41,   230,   115,   175,   177,
     203,   316,   313,    70,   409,   113,   230,   310,   318,    41,
      41,   240,   383,     4,   351,   240,   383,    40,   385,   344,
     344,    40,   230,    41,   113,   240,   113,   240,   113,   240,
      41,    70,   113,   240,    41,   172,   255,   256,   406,   299,
     406,   193,   230,    41,   197,   244,   245,   406,   240,   240,
      28,    29,    30,   240,   240,   240,   240,   240,   240,   240,
     240,    32,    33,   238,   239,    40,   241,   303,     8,    10,
      11,    20,   240,   240,   240,   240,   240,   240,   240,   251,
     253,   254,   295,   302,    34,   406,   311,    71,    98,   326,
     230,   143,   230,   135,    73,    74,    75,    80,    88,    92,
      93,    95,   101,   111,   128,   138,   140,   142,   154,   171,
     184,   185,   186,   194,   195,   281,    52,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   105,   421,    60,    61,    62,    63,    64,   130,
     272,   197,   429,   430,    30,   183,   130,   229,   240,     5,
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
     286,    54,    96,   229,   419,    49,   130,   130,   130,   130,
       5,   389,    65,   240,   104,   430,   431,    55,   237,   419,
     389,    82,   402,     4,     4,   281,   102,   169,   397,    78,
     157,   396,   189,    54,   281,   281,   281,   414,   132,    41,
     230,    70,   144,   332,   309,   230,   309,    41,   230,   240,
     240,   240,    41,   256,   296,   240,   302,   406,   240,   301,
     230,   296,    41,   183,   240,   105,    19,   239,   239,   239,
     239,   239,   239,   239,   239,    41,   330,     5,     5,     5,
       5,   229,   237,   105,   229,   389,   389,   389,   389,   130,
       5,   183,   419,   105,   237,   189,    45,   104,   105,   425,
     426,   427,   113,     4,   165,   403,   287,    20,    96,    20,
      96,   409,    54,    54,    54,    40,    82,   206,   207,   208,
     210,   212,   220,   221,   222,   225,   289,   290,   279,   407,
     240,   144,   318,   332,   120,   321,   237,    41,   230,    40,
     240,   239,   113,    41,    41,   230,    41,    41,   229,    48,
     389,   130,   419,    79,   189,   237,   240,   419,   126,   105,
     426,   427,   105,   331,    24,   218,    10,    20,    96,   152,
     204,   288,    10,    10,   237,   299,    24,   291,   291,   291,
     291,   291,   291,   291,   291,   291,   291,   230,   240,    77,
     121,   327,   240,   301,     5,   389,   237,    49,   183,   126,
     105,   126,   309,    76,   139,   173,    24,    10,   237,   132,
      41,     4,     4,   175,     4,     4,     5,     5,     5,     5,
       8,   290,   235,   240,    41,    41,    49,   419,   419,   126,
     319,   205,   211,   213,   224,   404,   419,   105,    81,   216,
     405,   105,    49,    24,    24,    49,     5,     4,   217,    24,
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
						merge_nodes(elsifs, result->malloc_pool_, T_PROCEDURE_ELSEIFS, (yyvsp[(5) - (8)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (8)].node), (yyvsp[(4) - (8)].node), elsifs ,(yyvsp[(6) - (8)].node));
					;}
    break;

  case 613:

    {
						ParseNode *elsifs = NULL;
						merge_nodes(elsifs, result->malloc_pool_, T_PROCEDURE_ELSEIFS, (yyvsp[(5) - (7)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (7)].node), (yyvsp[(4) - (7)].node), elsifs ,NULL);
					;}
    break;

  case 614:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (7)].node), (yyvsp[(4) - (7)].node), NULL ,(yyvsp[(5) - (7)].node));
					;}
    break;

  case 615:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (6)].node), (yyvsp[(4) - (6)].node), NULL ,NULL);
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
						merge_nodes(casewhenlist, result->malloc_pool_, T_PROCEDURE_CASE_WHEN_LIST, (yyvsp[(3) - (6)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CASE, 3, (yyvsp[(2) - (6)].node), casewhenlist, (yyvsp[(4) - (6)].node));
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
                                       (yyvsp[(2) - (10)].node),
                                       NULL,
                                       (yyvsp[(4) - (10)].node),
                                       (yyvsp[(6) - (10)].node),
                                       (yyvsp[(8) - (10)].node));
            ;}
    break;

  case 628:

    {
              ParseNode *rev_flag = NULL;
              malloc_terminal_node(rev_flag, result->malloc_pool_, T_BOOL);
              rev_flag->value_ = 1;
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_LOOP, 5,
                                       (yyvsp[(2) - (11)].node), 				//loop counter
                                       rev_flag,  //reverse loop
                                       (yyvsp[(5) - (11)].node),        //lowest_number
                                       (yyvsp[(7) - (11)].node),        //highest number
                                       (yyvsp[(9) - (11)].node));       //loop body
            ;}
    break;

  case 629:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_WHILE, 2, (yyvsp[(2) - (6)].node), (yyvsp[(4) - (6)].node));
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
						malloc_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXIT);
						(yyval.node)->value_=1;
					;}
    break;

  case 632:

    {
						malloc_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CONTINUE);
						(yyval.node)->value_=0;
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

