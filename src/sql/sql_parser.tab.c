
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
     NO_GROUP = 410,
     SCHEMA = 411,
     SCOPE = 412,
     SELECT = 413,
     SESSION = 414,
     SESSION_ALIAS = 415,
     SET = 416,
     SHOW = 417,
     SMALLINT = 418,
     SNAPSHOT = 419,
     SPFILE = 420,
     START = 421,
     STATIC = 422,
     SYSTEM = 423,
     STRONG = 424,
     SET_MASTER_CLUSTER = 425,
     SET_SLAVE_CLUSTER = 426,
     SLAVE = 427,
     TABLE = 428,
     TABLES = 429,
     THEN = 430,
     TIME = 431,
     TIMESTAMP = 432,
     TINYINT = 433,
     TRAILING = 434,
     TRANSACTION = 435,
     TO = 436,
     UPDATE = 437,
     USER = 438,
     USING = 439,
     VALUES = 440,
     VARCHAR = 441,
     VARBINARY = 442,
     WHERE = 443,
     WHEN = 444,
     WITH = 445,
     WORK = 446,
     PROCESSLIST = 447,
     QUERY = 448,
     CONNECTION = 449,
     WEAK = 450,
     AUTO_INCREMENT = 451,
     CHUNKSERVER = 452,
     COMPRESS_METHOD = 453,
     CONSISTENT_MODE = 454,
     EXPIRE_INFO = 455,
     GRANTS = 456,
     JOIN_INFO = 457,
     MERGESERVER = 458,
     REPLICA_NUM = 459,
     ROOTSERVER = 460,
     ROW_COUNT = 461,
     SERVER = 462,
     SERVER_IP = 463,
     SERVER_PORT = 464,
     SERVER_TYPE = 465,
     STATUS = 466,
     TABLE_ID = 467,
     TABLET_BLOCK_SIZE = 468,
     TABLET_MAX_SIZE = 469,
     UNLOCKED = 470,
     UPDATESERVER = 471,
     USE_BLOOM_FILTER = 472,
     VARIABLES = 473,
     VERBOSE = 474,
     WARNINGS = 475
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
#define YYLAST   3708

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  232
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  208
/* YYNRULES -- Number of rules.  */
#define YYNRULES  638
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1184

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   475

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    36,     2,     2,
      40,    41,    34,    32,   231,    33,    42,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   230,
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
     224,   225,   226,   227,   228,   229
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
     920,   925,   929,   931,   934,   935,   937,   939,   941,   943,
     945,   947,   948,   950,   951,   954,   958,   963,   968,   973,
     977,   981,   985,   986,   990,   992,   993,   997,   999,  1003,
    1006,  1007,  1009,  1011,  1012,  1015,  1016,  1018,  1020,  1022,
    1025,  1029,  1031,  1033,  1037,  1039,  1043,  1045,  1049,  1052,
    1056,  1059,  1061,  1067,  1069,  1073,  1080,  1086,  1089,  1092,
    1095,  1097,  1099,  1100,  1104,  1106,  1108,  1110,  1112,  1114,
    1115,  1119,  1125,  1131,  1136,  1141,  1146,  1149,  1154,  1158,
    1162,  1166,  1170,  1174,  1178,  1182,  1187,  1190,  1191,  1193,
    1196,  1201,  1203,  1205,  1206,  1207,  1210,  1213,  1214,  1216,
    1217,  1219,  1223,  1225,  1229,  1234,  1236,  1238,  1242,  1244,
    1248,  1254,  1261,  1264,  1265,  1269,  1273,  1275,  1279,  1284,
    1286,  1288,  1290,  1291,  1295,  1296,  1299,  1303,  1306,  1309,
    1314,  1315,  1317,  1318,  1320,  1322,  1329,  1331,  1335,  1338,
    1340,  1342,  1345,  1347,  1349,  1352,  1354,  1356,  1358,  1360,
    1362,  1363,  1365,  1367,  1373,  1376,  1377,  1382,  1384,  1386,
    1388,  1390,  1392,  1395,  1399,  1401,  1405,  1409,  1413,  1418,
    1423,  1429,  1435,  1439,  1443,  1447,  1449,  1451,  1453,  1455,
    1459,  1461,  1465,  1469,  1472,  1473,  1475,  1479,  1483,  1485,
    1487,  1492,  1499,  1501,  1505,  1509,  1514,  1519,  1525,  1527,
    1528,  1530,  1532,  1533,  1537,  1541,  1545,  1548,  1553,  1561,
    1569,  1576,  1583,  1584,  1586,  1588,  1592,  1602,  1605,  1606,
    1610,  1614,  1618,  1619,  1621,  1623,  1625,  1627,  1631,  1638,
    1639,  1641,  1643,  1645,  1647,  1649,  1651,  1653,  1655,  1657,
    1659,  1661,  1663,  1665,  1667,  1669,  1671,  1673,  1675,  1677,
    1679,  1681,  1683,  1685,  1687,  1689,  1691,  1693,  1695,  1697,
    1699,  1701,  1703,  1706,  1713,  1719,  1723,  1725,  1728,  1732,
    1736,  1740,  1744,  1749,  1754,  1759,  1763,  1764,  1766,  1769,
    1771,  1773,  1775,  1777,  1779,  1781,  1783,  1786,  1789,  1792,
    1795,  1798,  1801,  1804,  1807,  1810,  1813,  1816,  1819,  1822,
    1825,  1828,  1830,  1832,  1833,  1835,  1838,  1840,  1842,  1844,
    1846,  1848,  1850,  1853,  1856,  1859,  1862,  1865,  1868,  1871,
    1874,  1877,  1880,  1883,  1886,  1889,  1892,  1895,  1897,  1899,
    1904,  1911,  1917,  1921,  1931,  1940,  1949,  1957,  1959,  1962,
    1967,  1970,  1978,  1981,  1983,  1988,  1989,  1992,  1998,  2010,
    2023,  2031,  2033,  2036,  2041,  2048,  2054,  2060,  2064
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     233,     0,    -1,   234,   106,    -1,   234,   230,   235,    -1,
     235,    -1,   412,    -1,   437,    -1,   439,    -1,   438,    -1,
     258,    -1,   260,    -1,   261,    -1,   276,    -1,   269,    -1,
     270,    -1,   271,    -1,   272,    -1,   274,    -1,   275,    -1,
     303,    -1,   296,    -1,   277,    -1,   255,    -1,   254,    -1,
     293,    -1,   338,    -1,   341,    -1,   377,    -1,   380,    -1,
     388,    -1,   393,    -1,   399,    -1,   391,    -1,   348,    -1,
     353,    -1,   355,    -1,   357,    -1,   360,    -1,   370,    -1,
     375,    -1,   364,    -1,   365,    -1,   366,    -1,   367,    -1,
      -1,   241,    -1,   236,   231,   241,    -1,   407,    -1,   408,
      42,   407,    -1,   408,    42,    34,    -1,     4,    -1,     6,
      -1,     5,    -1,     9,    -1,     8,    -1,    10,    -1,    12,
      -1,    14,    -1,    13,    -1,   169,    42,   407,    -1,   237,
      -1,   238,    -1,    40,   241,    41,    -1,    40,   236,   231,
     241,    41,    -1,   243,    -1,   249,    -1,   250,    -1,   304,
      -1,   109,   304,    -1,   248,    -1,   239,    -1,    32,   240,
      -1,    33,   240,    -1,   240,    32,   240,    -1,   240,    33,
     240,    -1,   240,    34,   240,    -1,   240,    35,   240,    -1,
     240,    36,   240,    -1,   240,    38,   240,    -1,   240,    37,
     240,    -1,   239,    -1,    32,   241,    -1,    33,   241,    -1,
     241,    32,   241,    -1,   241,    33,   241,    -1,   241,    34,
     241,    -1,   241,    35,   241,    -1,   241,    36,   241,    -1,
     241,    38,   241,    -1,   241,    37,   241,    -1,   241,    26,
     241,    -1,   241,    25,   241,    -1,   241,    24,   241,    -1,
     241,    22,   241,    -1,   241,    23,   241,    -1,   241,    21,
     241,    -1,   241,    28,   241,    -1,   241,    20,    28,   241,
      -1,   241,    19,   241,    -1,   241,    18,   241,    -1,    20,
     241,    -1,   241,    31,    10,    -1,   241,    31,    20,    10,
      -1,   241,    31,     8,    -1,   241,    31,    20,     8,    -1,
     241,    31,    11,    -1,   241,    31,    20,    11,    -1,   241,
      29,   240,    19,   240,    -1,   241,    20,    29,   240,    19,
     240,    -1,   241,    30,   242,    -1,   241,    20,    30,   242,
      -1,   241,    27,   241,    -1,   304,    -1,    40,   236,    41,
      -1,    79,   244,   245,   247,   105,    -1,   241,    -1,    -1,
     246,    -1,   245,   246,    -1,   198,   241,   184,   241,    -1,
     104,   241,    -1,    -1,    14,    40,     5,    41,    -1,    14,
      40,    14,    41,    -1,   409,    40,    34,    41,    -1,   409,
      40,   253,   241,    41,    -1,   409,    40,   236,    41,    -1,
     409,    40,   241,    70,   282,    41,    -1,   409,    40,   321,
      41,    -1,   409,    40,    41,    -1,   251,    40,   252,    41,
      -1,   215,    -1,   303,    -1,   296,    -1,   255,    -1,   254,
      -1,    68,    -1,   100,    -1,    97,   113,   334,   310,   297,
      -1,   191,   312,   334,   170,   256,   310,   297,    -1,   257,
      -1,   256,   231,   257,    -1,   407,    24,   241,    -1,    44,
     259,    56,   112,   303,    -1,   410,    -1,    57,   259,    -1,
      58,   259,    -1,    58,   259,    60,    -1,    58,   259,   130,
     390,    -1,    58,   259,    60,   130,   390,    -1,    58,   259,
      62,   130,   390,    -1,    58,   259,    61,   130,   390,    -1,
      58,   259,    63,   130,   390,    -1,    58,   259,    64,     5,
     130,   390,    -1,    58,   259,   273,    65,     5,   130,   390,
      -1,    58,   259,    61,    -1,    58,   259,    62,    -1,    58,
     259,    63,    -1,    58,   259,   273,    65,     5,    -1,    60,
      -1,    61,    -1,    58,   259,    64,     5,    -1,    58,   259,
     113,     5,   190,     5,    -1,    59,   259,    -1,    87,   182,
     278,   334,    40,   279,    41,   290,    -1,   126,    20,   109,
      -1,    -1,   280,    -1,   279,   231,   280,    -1,   281,    -1,
     152,   132,    40,   300,    41,    -1,   407,   282,   288,    -1,
     187,    -1,   172,    -1,   138,    -1,   128,    -1,    73,    -1,
      95,   283,    -1,   142,   283,    -1,    75,    -1,   111,   284,
      -1,   154,    -1,   101,   285,    -1,   186,   286,    -1,    93,
      -1,    80,   287,    -1,    74,   287,    -1,   195,   287,    -1,
     196,   287,    -1,    88,    -1,   140,    -1,    92,    -1,   185,
     286,    -1,    40,     5,   231,     5,    41,    -1,    40,     5,
      41,    -1,    -1,    40,     5,    41,    -1,    -1,   150,    -1,
      -1,    40,     5,    41,    -1,    -1,    40,     5,    41,    -1,
      -1,   288,   289,    -1,    -1,    20,    10,    -1,    10,    -1,
      96,   238,    -1,   205,    -1,   152,   132,    -1,   291,    -1,
     290,   231,   291,    -1,    -1,   211,   292,     4,    -1,   209,
     292,     4,    -1,   223,   292,     5,    -1,   222,   292,     5,
      -1,   221,   292,     5,    -1,   213,   292,     5,    -1,   207,
     292,     4,    -1,   226,   292,     8,    -1,   208,   292,   176,
      -1,    82,   292,     4,    -1,    24,    -1,    -1,   102,   182,
     294,   295,    -1,    -1,   126,   109,    -1,   333,    -1,   295,
     231,   333,    -1,   298,   130,   334,   299,   194,   301,   297,
      -1,   298,   130,   334,   303,    -1,   298,   130,   334,    40,
     300,    41,   303,    -1,    -1,   198,   241,    -1,   156,    -1,
     129,    -1,    40,   300,    41,    -1,    -1,   407,    -1,   300,
     231,   407,    -1,    40,   302,    41,    -1,   301,   231,    40,
     302,    41,    -1,   241,    -1,   302,   231,   241,    -1,   305,
     297,    -1,   304,    -1,    40,   305,    41,    -1,    40,   304,
      41,    -1,   306,    -1,   309,   320,    -1,   307,   324,   320,
      -1,   307,   323,   311,   320,    -1,   167,   312,   329,   331,
     319,    -1,   167,   312,   329,   331,   113,   103,   310,   319,
      -1,   309,    -1,   304,    -1,   167,   312,   331,   130,   390,
     113,   332,   310,   320,    -1,   167,   312,   329,   331,   113,
     332,   310,   322,   328,    -1,   307,    16,   329,   307,    -1,
     307,    17,   329,   307,    -1,   307,    15,   329,   307,    -1,
      -1,   197,   241,    -1,   197,     7,   241,    -1,   135,   318,
     143,   318,    -1,   143,   318,   135,   318,    -1,   135,   318,
      -1,   143,   318,    -1,   135,   318,   231,   318,    -1,    -1,
     122,   313,   123,    -1,   314,    -1,   313,   231,   314,    -1,
      -1,   315,    -1,   314,   315,    -1,   153,    -1,   124,    -1,
     163,    40,   317,    41,    -1,    40,   316,    41,    -1,   164,
      -1,   316,   231,    -1,    -1,   204,    -1,   178,    -1,   176,
      -1,   115,    -1,     5,    -1,    12,    -1,    -1,   311,    -1,
      -1,   112,   191,    -1,   241,   113,   241,    -1,    76,   241,
     113,   241,    -1,   133,   241,   113,   241,    -1,   188,   241,
     113,   241,    -1,    76,   113,   241,    -1,   133,   113,   241,
      -1,   188,   113,   241,    -1,    -1,   120,    77,   236,    -1,
     324,    -1,    -1,   145,    77,   325,    -1,   326,    -1,   325,
     231,   326,    -1,   241,   327,    -1,    -1,    71,    -1,    98,
      -1,    -1,   121,   241,    -1,    -1,    68,    -1,   100,    -1,
     241,    -1,   241,   410,    -1,   241,    70,   410,    -1,    34,
      -1,   330,    -1,   331,   231,   330,    -1,   333,    -1,   332,
     231,   333,    -1,   334,    -1,   334,    70,   408,    -1,   334,
     408,    -1,   304,    70,   408,    -1,   304,   408,    -1,   335,
      -1,    40,   335,    41,    70,   408,    -1,   408,    -1,    40,
     335,    41,    -1,   333,   336,   131,   333,   144,   241,    -1,
     333,   131,   333,   144,   241,    -1,   114,   337,    -1,   134,
     337,    -1,   160,   337,    -1,   127,    -1,   147,    -1,    -1,
     110,   340,   339,    -1,   303,    -1,   254,    -1,   296,    -1,
     255,    -1,   228,    -1,    -1,   171,   183,   345,    -1,   171,
      86,   113,   334,   345,    -1,   171,    86,    30,   334,   345,
      -1,   171,   182,   220,   345,    -1,   171,   216,   220,   345,
      -1,   171,   344,   227,   345,    -1,   171,   165,    -1,   171,
      87,   182,   334,    -1,    99,   334,   346,    -1,    98,   334,
     346,    -1,   171,   229,   342,    -1,   171,   249,   229,    -1,
     171,   210,   343,    -1,   171,   148,   345,    -1,   171,   347,
     201,    -1,   135,     5,   231,     5,    -1,   135,     5,    -1,
      -1,   356,    -1,   112,    89,    -1,   112,    89,    40,    41,
      -1,   117,    -1,   168,    -1,    -1,    -1,    28,     4,    -1,
     197,   241,    -1,    -1,     4,    -1,    -1,   114,    -1,    87,
     192,   349,    -1,   350,    -1,   349,   231,   350,    -1,   351,
     125,    77,   352,    -1,     4,    -1,     4,    -1,   102,   192,
     354,    -1,   351,    -1,   354,   231,   351,    -1,   170,   149,
     356,    24,   352,    -1,    69,   192,   351,   125,    77,   352,
      -1,   112,   351,    -1,    -1,   155,   192,   359,    -1,   351,
     190,   351,    -1,   358,    -1,   359,   231,   358,    -1,    69,
     192,   351,   361,    -1,   137,    -1,   224,    -1,   200,    -1,
      -1,   199,    84,   173,    -1,    -1,    72,   362,    -1,   175,
     189,   363,    -1,    83,   362,    -1,   161,   362,    -1,   162,
     368,   369,     5,    -1,    -1,   117,    -1,    -1,   202,    -1,
     203,    -1,   119,   371,   144,   374,   190,   354,    -1,   372,
      -1,   371,   231,   372,    -1,    68,   373,    -1,    69,    -1,
      87,    -1,    87,   192,    -1,    97,    -1,   102,    -1,   119,
     146,    -1,   129,    -1,   191,    -1,   167,    -1,   156,    -1,
     158,    -1,    -1,    34,    -1,   408,    -1,   159,   371,   376,
     113,   354,    -1,   144,   374,    -1,    -1,   151,   378,   113,
     379,    -1,   410,    -1,   303,    -1,   296,    -1,   255,    -1,
     254,    -1,   170,   381,    -1,   170,   170,   383,    -1,   382,
      -1,   381,   231,   382,    -1,    14,   384,   241,    -1,   407,
     384,   241,    -1,   117,   407,   384,   241,    -1,   168,   407,
     384,   241,    -1,   118,    42,   407,   384,   241,    -1,   169,
      42,   407,   384,   241,    -1,    13,   384,   241,    -1,   248,
     384,   241,    -1,    14,   384,   386,    -1,   190,    -1,    24,
      -1,    14,    -1,   248,    -1,    40,   387,    41,    -1,   238,
      -1,   387,   231,   238,    -1,   108,   378,   389,    -1,   193,
     390,    -1,    -1,   385,    -1,   390,   231,   385,    -1,   392,
     151,   378,    -1,    94,    -1,   102,    -1,    69,   182,   334,
     394,    -1,    69,   182,   334,   155,   190,   334,    -1,   395,
      -1,   394,   231,   395,    -1,    66,   396,   281,    -1,   102,
     396,   407,   397,    -1,    69,   396,   407,   398,    -1,   155,
     396,   407,   190,   410,    -1,    85,    -1,    -1,    78,    -1,
     157,    -1,    -1,   170,    20,    10,    -1,   102,    20,    10,
      -1,   170,    96,   238,    -1,   102,    96,    -1,    69,   177,
     170,   401,    -1,    69,   177,   400,    90,   141,    24,     4,
      -1,    69,   177,   400,    91,   141,    24,     4,    -1,    69,
     177,   179,   141,    24,     4,    -1,    69,   177,   180,   181,
      24,     4,    -1,    -1,   116,    -1,   402,    -1,   401,   231,
     402,    -1,   407,    24,   238,   403,   404,   219,    24,   405,
     406,    -1,    82,     4,    -1,    -1,   166,    24,   139,    -1,
     166,    24,   174,    -1,   166,    24,    76,    -1,    -1,   214,
      -1,   225,    -1,   206,    -1,   212,    -1,    81,    24,     5,
      -1,   217,    24,     4,   218,    24,     5,    -1,    -1,     3,
      -1,   411,    -1,     3,    -1,   411,    -1,     3,    -1,     3,
      -1,   411,    -1,   205,    -1,   206,    -1,   207,    -1,   208,
      -1,   209,    -1,   210,    -1,   211,    -1,   212,    -1,   213,
      -1,   214,    -1,   215,    -1,   216,    -1,   217,    -1,   218,
      -1,   219,    -1,   220,    -1,   222,    -1,   221,    -1,   223,
      -1,   224,    -1,   225,    -1,   226,    -1,   227,    -1,   228,
      -1,   229,    -1,   413,   416,    -1,    87,    43,     3,    40,
     414,    41,    -1,    87,    43,     3,    40,    41,    -1,   414,
     231,   415,    -1,   415,    -1,    14,   282,    -1,    30,    14,
     282,    -1,    46,    14,   282,    -1,    47,    14,   282,    -1,
      14,   282,    54,    -1,    30,    14,   282,    54,    -1,    46,
      14,   282,    54,    -1,    47,    14,   282,    54,    -1,    72,
     417,   105,    -1,    -1,   418,    -1,   418,   419,    -1,   419,
      -1,   425,    -1,   429,    -1,   434,    -1,   433,    -1,   423,
      -1,   424,    -1,   308,   230,    -1,   296,   230,    -1,   255,
     230,    -1,   254,   230,    -1,   303,   230,    -1,   258,   230,
      -1,   260,   230,    -1,   276,   230,    -1,   262,   230,    -1,
     263,   230,    -1,   264,   230,    -1,   266,   230,    -1,   265,
     230,    -1,   267,   230,    -1,   268,   230,    -1,   436,    -1,
     435,    -1,    -1,   421,    -1,   421,   422,    -1,   422,    -1,
     425,    -1,   429,    -1,   434,    -1,   433,    -1,   424,    -1,
     308,   230,    -1,   296,   230,    -1,   255,   230,    -1,   254,
     230,    -1,   303,   230,    -1,   258,   230,    -1,   260,   230,
      -1,   276,   230,    -1,   262,   230,    -1,   263,   230,    -1,
     264,   230,    -1,   266,   230,    -1,   265,   230,    -1,   267,
     230,    -1,   268,   230,    -1,   436,    -1,   435,    -1,    44,
     390,   282,   230,    -1,    44,   390,   282,    96,   238,   230,
      -1,    44,   390,   282,    54,   230,    -1,   170,   381,   230,
      -1,   126,   241,   184,   420,   426,   428,   105,   126,   230,
      -1,   126,   241,   184,   420,   426,   105,   126,   230,    -1,
     126,   241,   184,   420,   428,   105,   126,   230,    -1,   126,
     241,   184,   420,   105,   126,   230,    -1,   427,    -1,   426,
     427,    -1,    45,   241,   184,   420,    -1,   104,   420,    -1,
      79,   241,   430,   432,   105,    79,   230,    -1,   430,   431,
      -1,   431,    -1,   198,   241,   184,   420,    -1,    -1,   104,
     420,    -1,    49,   420,   105,    49,   230,    -1,   112,    14,
      30,   240,   190,   240,    49,   420,   105,    49,   230,    -1,
     112,    14,    30,    55,   240,   190,   240,    49,   420,   105,
      49,   230,    -1,    48,   241,    52,   420,   105,    48,   230,
      -1,   230,    -1,    50,   230,    -1,    50,   198,   241,   230,
      -1,    53,     3,    40,   236,    41,   312,    -1,    53,     3,
      40,    41,   312,    -1,   102,    43,   126,   109,     3,    -1,
     102,    43,     3,    -1,   171,    43,     3,    -1
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
    1901,  1906,  1910,  1917,  1922,  1928,  1932,  1936,  1940,  1946,
    1948,  1954,  1955,  1961,  1962,  1970,  1977,  1984,  1991,  1998,
    2009,  2020,  2035,  2036,  2043,  2044,  2048,  2055,  2057,  2062,
    2070,  2071,  2073,  2079,  2080,  2088,  2091,  2095,  2102,  2107,
    2115,  2123,  2133,  2137,  2144,  2146,  2151,  2155,  2159,  2163,
    2167,  2171,  2175,  2184,  2192,  2196,  2200,  2209,  2215,  2221,
    2227,  2234,  2235,  2245,  2253,  2254,  2255,  2256,  2260,  2261,
    2271,  2273,  2275,  2277,  2279,  2281,  2286,  2288,  2290,  2292,
    2294,  2298,  2311,  2315,  2319,  2327,  2336,  2346,  2350,  2352,
    2354,  2359,  2360,  2361,  2366,  2367,  2369,  2375,  2376,  2381,
    2382,  2392,  2398,  2402,  2408,  2414,  2420,  2432,  2438,  2442,
    2454,  2458,  2464,  2469,  2480,  2486,  2492,  2496,  2508,  2514,
    2519,  2533,  2538,  2542,  2547,  2551,  2557,  2569,  2581,  2593,
    2600,  2604,  2612,  2616,  2621,  2635,  2646,  2650,  2656,  2662,
    2667,  2672,  2677,  2682,  2687,  2692,  2697,  2702,  2707,  2714,
    2719,  2724,  2729,  2741,  2781,  2786,  2798,  2805,  2810,  2812,
    2814,  2816,  2828,  2834,  2842,  2846,  2853,  2859,  2866,  2873,
    2880,  2887,  2894,  2901,  2912,  2922,  2923,  2927,  2930,  2936,
    2943,  2944,  2959,  2966,  2971,  2976,  2980,  2993,  3001,  3003,
    3014,  3020,  3031,  3035,  3042,  3047,  3053,  3058,  3067,  3068,
    3072,  3073,  3074,  3078,  3083,  3088,  3092,  3106,  3112,  3119,
    3126,  3133,  3143,  3146,  3154,  3158,  3165,  3180,  3183,  3187,
    3189,  3191,  3194,  3198,  3203,  3208,  3213,  3221,  3225,  3230,
    3241,  3243,  3260,  3262,  3279,  3283,  3285,  3298,  3299,  3300,
    3301,  3302,  3303,  3304,  3305,  3306,  3307,  3308,  3309,  3310,
    3311,  3312,  3313,  3314,  3315,  3316,  3317,  3318,  3319,  3320,
    3321,  3322,  3332,  3337,  3344,  3350,  3354,  3359,  3363,  3367,
    3371,  3375,  3382,  3389,  3396,  3404,  3411,  3414,  3419,  3423,
    3428,  3430,  3432,  3434,  3436,  3438,  3440,  3442,  3444,  3446,
    3448,  3450,  3452,  3454,  3456,  3458,  3460,  3462,  3464,  3466,
    3468,  3471,  3473,  3480,  3483,  3488,  3492,  3497,  3499,  3501,
    3503,  3505,  3507,  3509,  3511,  3513,  3515,  3517,  3519,  3521,
    3523,  3525,  3527,  3529,  3531,  3533,  3535,  3538,  3540,  3548,
    3554,  3560,  3580,  3592,  3598,  3604,  3608,  3613,  3617,  3622,
    3628,  3639,  3646,  3650,  3655,  3661,  3664,  3675,  3684,  3693,
    3711,  3717,  3727,  3737,  3748,  3756,  3769,  3773,  3787
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
  "ROLLBACK", "KILL", "READ_CONSISTENCY", "NO_GROUP", "SCHEMA", "SCOPE",
  "SELECT", "SESSION", "SESSION_ALIAS", "SET", "SHOW", "SMALLINT",
  "SNAPSHOT", "SPFILE", "START", "STATIC", "SYSTEM", "STRONG",
  "SET_MASTER_CLUSTER", "SET_SLAVE_CLUSTER", "SLAVE", "TABLE", "TABLES",
  "THEN", "TIME", "TIMESTAMP", "TINYINT", "TRAILING", "TRANSACTION", "TO",
  "UPDATE", "USER", "USING", "VALUES", "VARCHAR", "VARBINARY", "WHERE",
  "WHEN", "WITH", "WORK", "PROCESSLIST", "QUERY", "CONNECTION", "WEAK",
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
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
      59,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   232,   233,   234,   234,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   236,   236,   237,   237,   237,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   242,   242,   243,   244,   244,   245,   245,   246,
     247,   247,   248,   248,   249,   249,   249,   249,   249,   249,
     250,   251,   252,   252,   252,   252,   253,   253,   254,   255,
     256,   256,   257,   258,   259,   260,   261,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     273,   274,   275,   276,   277,   278,   278,   279,   279,   280,
     280,   281,   282,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   283,   283,   283,   284,   284,   285,   285,
     286,   286,   287,   287,   288,   288,   289,   289,   289,   289,
     289,   290,   290,   290,   291,   291,   291,   291,   291,   291,
     291,   291,   291,   291,   292,   292,   293,   294,   294,   295,
     295,   296,   296,   296,   297,   297,   298,   298,   299,   299,
     300,   300,   301,   301,   302,   302,   303,   303,   304,   304,
     305,   305,   305,   305,   306,   306,   307,   307,   308,   309,
     309,   309,   309,   310,   310,   310,   311,   311,   311,   311,
     311,   312,   312,   313,   313,   313,   314,   314,   315,   315,
     315,   315,   315,   316,   316,   317,   317,   317,   317,   318,
     318,   319,   319,   320,   320,   321,   321,   321,   321,   321,
     321,   321,   322,   322,   323,   323,   324,   325,   325,   326,
     327,   327,   327,   328,   328,   329,   329,   329,   330,   330,
     330,   330,   331,   331,   332,   332,   333,   333,   333,   333,
     333,   333,   333,   334,   335,   335,   335,   336,   336,   336,
     336,   337,   337,   338,   339,   339,   339,   339,   340,   340,
     341,   341,   341,   341,   341,   341,   341,   341,   341,   341,
     341,   341,   341,   341,   341,   342,   342,   342,   343,   343,
     343,   344,   344,   344,   345,   345,   345,   346,   346,   347,
     347,   348,   349,   349,   350,   351,   352,   353,   354,   354,
     355,   355,   356,   356,   357,   358,   359,   359,   360,   361,
     361,   362,   362,   363,   363,   364,   364,   365,   366,   367,
     368,   368,   369,   369,   369,   370,   371,   371,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   373,
     373,   374,   374,   375,   376,   376,   377,   378,   379,   379,
     379,   379,   380,   380,   381,   381,   382,   382,   382,   382,
     382,   382,   382,   382,   383,   384,   384,   385,   385,   386,
     387,   387,   388,   389,   389,   390,   390,   391,   392,   392,
     393,   393,   394,   394,   395,   395,   395,   395,   396,   396,
     397,   397,   397,   398,   398,   398,   398,   399,   399,   399,
     399,   399,   400,   400,   401,   401,   402,   403,   403,   404,
     404,   404,   404,   405,   405,   405,   405,   406,   406,   406,
     407,   407,   408,   408,   409,   410,   410,   411,   411,   411,
     411,   411,   411,   411,   411,   411,   411,   411,   411,   411,
     411,   411,   411,   411,   411,   411,   411,   411,   411,   411,
     411,   411,   412,   413,   413,   414,   414,   415,   415,   415,
     415,   415,   415,   415,   415,   416,   417,   417,   418,   418,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   420,   420,   421,   421,   422,   422,   422,
     422,   422,   422,   422,   422,   422,   422,   422,   422,   422,
     422,   422,   422,   422,   422,   422,   422,   422,   422,   423,
     423,   423,   424,   425,   425,   425,   425,   426,   426,   427,
     428,   429,   430,   430,   431,   432,   432,   433,   433,   433,
     434,   435,   436,   436,   437,   437,   438,   438,   439
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
       4,     3,     1,     2,     0,     1,     1,     1,     1,     1,
       1,     0,     1,     0,     2,     3,     4,     4,     4,     3,
       3,     3,     0,     3,     1,     0,     3,     1,     3,     2,
       0,     1,     1,     0,     2,     0,     1,     1,     1,     2,
       3,     1,     1,     3,     1,     3,     1,     3,     2,     3,
       2,     1,     5,     1,     3,     6,     5,     2,     2,     2,
       1,     1,     0,     3,     1,     1,     1,     1,     1,     0,
       3,     5,     5,     4,     4,     4,     2,     4,     3,     3,
       3,     3,     3,     3,     3,     4,     2,     0,     1,     2,
       4,     1,     1,     0,     0,     2,     2,     0,     1,     0,
       1,     3,     1,     3,     4,     1,     1,     3,     1,     3,
       5,     6,     2,     0,     3,     3,     1,     3,     4,     1,
       1,     1,     0,     3,     0,     2,     3,     2,     2,     4,
       0,     1,     0,     1,     1,     6,     1,     3,     2,     1,
       1,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       0,     1,     1,     5,     2,     0,     4,     1,     1,     1,
       1,     1,     2,     3,     1,     3,     3,     3,     4,     4,
       5,     5,     3,     3,     3,     1,     1,     1,     1,     3,
       1,     3,     3,     2,     0,     1,     3,     3,     1,     1,
       4,     6,     1,     3,     3,     4,     4,     5,     1,     0,
       1,     1,     0,     3,     3,     3,     2,     4,     7,     7,
       6,     6,     0,     1,     1,     3,     9,     2,     0,     3,
       3,     3,     0,     1,     1,     1,     1,     3,     6,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     6,     5,     3,     1,     2,     3,     3,
       3,     3,     4,     4,     4,     3,     0,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     1,     4,
       6,     5,     3,     9,     8,     8,     7,     1,     2,     4,
       2,     7,     2,     1,     4,     0,     2,     5,    11,    12,
       7,     1,     2,     4,     6,     5,     5,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      44,     0,     0,     0,     0,     0,     0,     0,   402,   402,
       0,   468,     0,     0,     0,   469,     0,   349,     0,   237,
       0,     0,   236,     0,   402,   410,   271,     0,   373,     0,
     271,     0,     0,     4,    23,    22,     9,    10,    11,    13,
      14,    15,    16,    17,    18,    12,    21,    24,    20,     0,
      19,   257,   234,   250,   305,   256,    25,    26,    33,    34,
      35,    36,    37,    40,    41,    42,    43,    38,    39,    27,
      28,    29,    32,     0,    30,    31,     5,     0,     6,     8,
       7,   257,     0,   515,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     534,   533,   535,   536,   537,   538,   539,   540,   541,     0,
     144,   516,     0,   145,   146,   163,   492,     0,     0,   401,
     405,   407,     0,   166,     0,     0,   512,   377,   333,   513,
     377,     0,   227,     0,   464,   437,   348,     0,   430,   419,
     420,   422,   423,     0,   425,   428,   427,   426,     0,   416,
       0,     0,   435,   408,   411,   412,   275,   315,   510,     0,
       0,     0,     0,   393,     0,     0,     0,     0,   442,   444,
       0,   511,   514,     0,     0,     0,   380,   371,   374,   356,
     372,     0,   374,   393,     0,   367,     0,     0,     0,     0,
     404,     0,     1,     2,    44,     0,     0,   246,   315,   315,
     315,     0,     0,   293,     0,   251,     0,   556,   542,   249,
     248,     0,     0,   147,   155,   156,   157,     0,     0,     0,
     493,     0,     0,     0,     0,     0,   385,     0,     0,     0,
       0,   381,   382,     0,   263,   378,   359,   358,   637,     0,
       0,     0,   388,   387,     0,   462,   345,   347,   346,   344,
     343,   429,   418,   421,   424,     0,     0,     0,     0,   396,
     394,     0,     0,   413,   414,     0,   284,   279,   278,     0,
     282,     0,   273,   276,   316,   317,     0,   456,   455,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   443,
       0,     0,     0,   638,     0,     0,     0,     0,     0,   363,
     374,   350,     0,   362,   368,   374,     0,   360,   361,   374,
     364,     0,     0,   406,     0,     3,   239,   510,    50,    52,
      51,    54,    53,    55,    56,    58,    57,     0,     0,     0,
       0,   116,     0,     0,   527,    60,    61,    80,   235,    64,
      69,    65,    66,     0,    67,    47,     0,   511,     0,     0,
       0,     0,     0,     0,   293,   252,   294,   467,     0,     0,
     583,     0,     0,     0,     0,     0,   271,     0,   631,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   557,   559,   564,   565,   560,
     561,   563,   562,   582,   581,     0,   271,     0,    45,   161,
       0,     0,   487,   494,     0,     0,     0,     0,     0,   479,
     479,   479,   479,   470,   472,     0,   399,   400,   398,     0,
       0,     0,     0,     0,     0,   234,     0,   228,     0,   226,
       0,   229,   326,   331,     0,   457,   458,   465,   463,   431,
       0,   432,   417,   441,   440,   439,   438,   436,     0,     0,
     434,     0,   409,     0,     0,   272,     0,   277,   321,   318,
     322,   291,   452,     0,     0,   446,     0,     0,   392,     0,
       0,     0,     0,   453,   445,   447,   374,   374,   357,   375,
     376,   353,   369,   354,   366,   355,     0,   129,   136,     0,
     137,     0,     0,     0,    45,     0,     0,     0,     0,     0,
       0,   232,   100,    81,    82,     0,    45,    67,   115,     0,
      68,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   271,   257,   262,   256,   260,
     261,   310,   306,   307,   289,   290,   268,   269,   253,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   584,   586,   591,
     587,   588,   590,   589,   608,   607,     0,   632,     0,     0,
       0,     0,     0,     0,   569,   568,   571,   572,   574,   575,
     576,   578,   577,   579,   580,   573,   567,   570,   566,   555,
     558,   143,   635,   271,     0,     0,   158,     0,     0,     0,
       0,     0,     0,   478,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   544,     0,     0,     0,   546,   165,     0,
     383,     0,     0,   264,   138,   636,   257,     0,   331,     0,
       0,   330,   342,   340,     0,   342,   342,     0,     0,   328,
     389,     0,     0,   395,   397,   433,   281,   283,   288,   287,
     286,   285,     0,   274,     0,   319,     0,     0,   292,   254,
     122,   123,   448,     0,   386,   390,   449,     0,     0,   454,
     352,   351,     0,     0,   124,     0,     0,     0,     0,     0,
       0,   126,     0,     0,     0,   128,   403,   263,   140,     0,
       0,   240,     0,     0,    62,     0,   121,   117,    59,    99,
      98,     0,     0,     0,    95,    93,    94,    92,    91,    90,
     111,    96,     0,     0,    70,     0,     0,   109,   112,   103,
     101,   105,     0,    83,    84,    85,    86,    87,    89,    88,
       0,   135,   134,   133,   132,    49,    48,   315,   311,   312,
     309,     0,     0,     0,     0,   176,   203,   179,   203,   189,
     191,   184,   195,   199,   197,   175,   174,   190,   195,   181,
     173,   201,   201,   172,   203,   203,     0,   583,   595,   594,
     597,   598,   600,   601,   602,   604,   603,   605,   606,   599,
     593,   596,   592,     0,   585,     0,   159,   160,     0,     0,
       0,     0,     0,     0,   625,   623,     0,   583,     0,   612,
     634,    46,   162,   495,    57,   498,   490,   491,     0,     0,
     474,     0,     0,   482,   471,     0,   479,   473,   391,   547,
       0,     0,     0,   543,     0,     0,     0,   167,   169,   384,
     265,   334,   230,   329,   341,   337,     0,   338,   339,     0,
     327,   466,   415,   280,   320,   263,   263,   324,   323,   450,
     451,   460,     0,   370,   365,   299,     0,   300,     0,   301,
       0,     0,   295,   125,     0,   234,     0,   238,     0,     0,
     234,    46,     0,     0,   118,     0,    97,     0,   110,    71,
      72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     104,   102,   106,   130,     0,   308,   266,   270,   267,     0,
     186,   185,     0,   177,   198,   182,     0,   180,   178,     0,
     192,   183,   187,   188,     0,     0,   609,     0,     0,   633,
       0,     0,     0,     0,     0,   148,     0,     0,   583,   622,
       0,     0,     0,     0,     0,     0,   502,   488,   489,   205,
       0,     0,   476,   480,   481,   475,     0,   551,   548,   549,
     550,   545,     0,   213,     0,     0,     0,     0,   291,     0,
     302,   459,     0,   296,   297,   298,   127,   141,   139,   142,
     233,   241,   244,     0,     0,   231,    63,     0,   120,   114,
       0,   107,    73,    74,    75,    76,    77,    79,    78,   113,
       0,     0,     0,     0,     0,   611,     0,     0,   627,   149,
     151,   150,   152,     0,     0,   583,   626,     0,     0,     0,
       0,   583,     0,     0,   617,     0,     0,   497,     0,     0,
     171,     0,   486,     0,     0,   477,   552,   553,   554,     0,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     164,   211,   168,   332,   336,     0,   255,   325,     0,   313,
     461,   242,     0,     0,   119,   108,     0,   202,   194,     0,
     196,   200,   610,     0,   153,     0,   624,     0,     0,     0,
       0,   620,     0,     0,   618,     0,     0,     0,     0,     0,
     207,     0,     0,     0,   209,   204,   484,   483,   485,     0,
     224,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   335,     0,     0,   259,   245,     0,     0,   630,
     154,   621,     0,   583,   583,   616,     0,     0,     0,   263,
     501,   499,   500,     0,   206,   208,   210,   170,   223,   220,
     222,   215,   214,   219,   218,   217,   216,   221,   212,   303,
     314,   243,   193,   583,     0,   619,   614,     0,   615,   293,
     505,   506,   503,   504,   509,     0,     0,   613,   258,     0,
       0,   496,     0,     0,     0,     0,     0,   628,   507,     0,
     629,     0,     0,   508
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    31,    32,    33,   397,   335,   336,   337,   725,   459,
     727,   339,   509,   706,   707,   885,   340,   341,   342,   343,
     740,   495,   551,   552,   697,   698,   553,   109,   554,    38,
     555,   556,   557,   558,   559,   560,   561,    39,    40,    41,
      42,   219,    43,    44,   562,    46,   230,   836,   837,   838,
     776,   913,   917,   915,   920,   910,  1030,  1095,  1050,  1051,
    1101,    47,   241,   429,   563,   197,    49,   500,   700,   880,
     983,   564,   344,    52,    53,    54,   565,    55,   425,   668,
     157,   271,   272,   273,   453,   662,   546,   669,   205,   496,
    1059,   202,   203,   542,   543,   750,  1115,   276,   460,   461,
     856,   857,   432,   433,   647,   845,    56,   250,   137,    57,
     307,   303,   187,   299,   236,   188,    58,   231,   232,   242,
     675,    59,   243,    60,   285,    61,   259,   260,    62,   418,
     120,   313,    63,    64,    65,    66,   155,   265,    67,   148,
     149,   252,   440,    68,   262,    69,   134,   447,    70,   168,
     169,   289,   279,   437,   679,   862,    71,   245,   438,    72,
      73,    74,   413,   414,   618,   955,   952,    75,   224,   402,
     403,   946,  1029,  1164,  1171,   345,   346,   189,   110,   347,
      76,    77,   626,   627,   208,   384,   385,   386,   566,   567,
     568,   387,   569,   570,  1023,  1024,  1025,   571,   804,   805,
     940,   572,   573,   574,   575,    78,    79,    80
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -736
static const yytype_int16 yypact[] =
{
    3293,    15,  2860,    91,  2860,  2860,  2860,   324,   -49,   -49,
     130,  -736,    -5,  2889,  2889,   131,  2860,   -67,   714,  -736,
    2860,   -33,  -736,   714,   -49,    54,    98,  2515,   466,   -24,
      98,   262,   -52,  -736,  -736,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,   145,
    -736,     7,   135,  -736,    47,    26,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,   177,  -736,  -736,  -736,   273,  -736,  -736,
    -736,   315,   320,  -736,  -736,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,   313,
    -736,  -736,   332,  -736,   412,  -736,   -16,  2889,   377,  -736,
    -736,  -736,   381,   260,   377,  2889,  -736,   386,  -736,  -736,
     386,    72,   289,   377,   236,  -736,  -736,   356,   277,  -736,
     269,  -736,  -736,   285,  -736,  -736,  -736,  -736,   -92,  -736,
     373,   377,   -65,  -736,  -736,   207,   397,   257,  -736,     1,
     120,  2938,   455,   390,  2938,   465,   496,     1,   304,  -736,
       1,  -736,  -736,   517,   122,   359,  -736,  -736,    13,  -736,
    -736,   328,    13,   439,   339,   427,   340,   343,   380,   542,
     385,  2889,  -736,  -736,  3293,  2889,  2174,  -736,   257,   257,
     257,   508,   186,    -1,   400,  -736,  2860,  3128,  -736,  -736,
    -736,   480,  1473,   534,   538,  -736,  -736,   593,   599,   551,
    -736,  2938,   477,   445,   404,   296,  -736,   189,   587,   616,
    2889,   407,  -736,   516,   446,  -736,  -736,  -736,  -736,   544,
     556,  2558,  -736,   416,   642,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,  -736,  -736,  2597,   714,   356,   481,  -736,
     444,  2597,   564,  -736,  -736,   675,  -736,  -736,  -736,   643,
    -736,   -42,   397,  -736,  -736,  -736,  1564,  -736,  -736,  2174,
     353,  2174,     1,  2938,   377,   672,     1,  2938,     1,  -736,
    2174,  1153,  2174,  -736,  2889,  2889,  2889,   693,  2174,  -736,
      13,  -736,    97,  -736,  -736,    13,   699,  -736,  -736,    13,
    -736,  1086,   621,  -736,   539,  -736,    16,   105,  -736,  -736,
    -736,  -736,  -736,  -736,  -736,  -736,   668,  2174,  2174,  2174,
    1715,  2174,   670,   691,   674,  -736,  -736,  -736,  3670,  -736,
    -736,  -736,  -736,   677,  -736,  -736,   692,   733,    28,    28,
      28,  2174,   395,   395,   600,  -736,  -736,  -736,  2662,  2174,
    3140,   157,  2860,  2174,   715,  2174,    98,  1153,  -736,   505,
     546,   548,   549,   554,   573,   575,   576,   578,   579,   583,
     588,   589,   590,   592,   680,  3128,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,  -736,  -736,    15,    98,     9,  3670,  -736,
     612,   799,   594,  -736,   790,   800,   802,   686,   689,   743,
     743,   743,    10,   601,  -736,   754,  -736,  -736,  -736,   638,
     725,   795,   377,   759,  1793,   135,   834,  -736,  1866,   608,
    2757,   547,  2785,  -736,   377,   668,  -736,  -736,   609,  -736,
     651,  -736,  -736,  -736,  -736,  -736,  -736,  -736,   377,   377,
    -736,   377,  -736,    17,   221,  -736,   397,  -736,  -736,  1317,
    -736,   239,  3670,   803,   804,  3670,  2174,     1,  -736,   842,
    2174,     1,   807,  3670,  -736,  3670,    13,    13,  -736,  -736,
    3670,  -736,   808,  -736,   619,  -736,   810,  -736,  -736,  1944,
    -736,  2022,  2106,    32,  1437,  2174,   811,   681,  2938,  2141,
     659,  -736,  3623,  -736,  -736,   625,  3571,   472,  3670,   665,
    -736,  2938,  2174,  2174,   509,  2174,  2174,  2174,  2174,  2174,
    2174,  2174,  2174,  2434,   817,   555,  2174,  2174,  2174,  2174,
    2174,  2174,  2174,   356,  2711,    98,  -736,   847,  -736,   847,
    -736,  1816,   634,  -736,  -736,  -736,   -69,   731,  -736,  3188,
    2467,   637,   639,   641,   645,   646,   648,   649,   653,   655,
     656,   657,   658,   661,   662,   663,   763,  3140,  -736,  -736,
    -736,  -736,  -736,  -736,  -736,  -736,  2174,  -736,   533,  1629,
     843,  2236,  1412,   284,  -736,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,    98,  2174,   867,  -736,  2938,   450,   885,
     891,   880,   882,  -736,  2938,  2938,  2938,  2889,  2938,   424,
     842,  3350,   893,  -736,   899,   901,    37,  -736,  -736,  2835,
    -736,   842,  2174,  3670,  -736,  -736,  2481,   547,   875,  2558,
    2889,  -736,   770,  -736,  2558,   770,   770,   788,  2889,  -736,
    -736,   642,   377,  -736,  -736,   416,  -736,  -736,  -736,  -736,
    -736,  -736,   879,   397,  2860,  -736,  2368,  1564,  -736,  -736,
    -736,  -736,  3670,  2174,  -736,  -736,  3670,  2174,   450,  -736,
    -736,  -736,   895,   916,  -736,  2174,  2875,  2174,  3529,  2174,
    3550,  -736,  3350,  2174,  3595,  -736,  -736,   -90,  -736,   913,
      41,  -736,   911,  2174,  -736,  2174,    -8,  -736,  -736,  2923,
    3623,  2174,  2434,   817,   897,   897,   897,   897,   897,   897,
     948,   910,  2434,  2434,  -736,   755,  1715,  -736,  -736,  -736,
    -736,  -736,   393,   574,   574,   912,   912,   912,   912,  -736,
     915,  -736,  -736,  -736,  -736,  -736,  -736,   257,  -736,  -736,
    -736,  2174,   395,   395,   395,  -736,   917,  -736,   917,  -736,
    -736,  -736,   919,   813,   921,  -736,  -736,  -736,   919,  -736,
    -736,   924,   924,  -736,   917,   917,    61,  3140,  -736,  -736,
    -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,   903,  -736,   735,   823,   836,   837,   838,
     967,   642,   908,  2174,    -2,  -736,  2401,  3140,   -25,  -736,
    -736,  3670,  -736,  -736,  -736,   892,  -736,  -736,   983,   984,
    -736,  3350,    34,    52,  -736,   801,   743,  -736,  -736,   935,
    3350,  3350,  3350,  -736,   103,   858,    42,  -736,  -736,  -736,
    3670,   923,   547,  -736,  -736,  -736,   572,  -736,  -736,  2558,
    -736,  -736,   416,  -736,  -736,   446,   -75,   547,  -736,  3670,
    3670,  -736,    43,  -736,  -736,  3670,  2174,  3670,  2174,  3670,
    2174,   953,  3670,  -736,  2938,   135,  2174,    15,  2938,  2174,
     -88,  3646,  2266,  2174,  -736,   890,   910,   762,  -736,  -736,
    -736,  2434,  2434,  2434,  2434,  2434,  2434,  2434,  2434,    45,
    -736,  -736,  -736,  -736,  1564,  -736,  -736,  -736,  -736,   991,
    -736,  -736,   993,  -736,  -736,  -736,   994,  -736,  -736,   995,
    -736,  -736,  -736,  -736,   772,   450,  -736,   898,   774,  -736,
     642,   642,   642,   642,   876,   609,  1000,  2997,  3140,  -736,
     902,  2434,   306,   275,   642,  1005,   844,  -736,  -736,  -736,
      73,   295,  -736,  -736,  -736,  -736,  2860,  -736,   957,   958,
     959,  -736,   974,   323,  2835,  2889,  2174,   584,   186,  2558,
     896,  -736,   450,  3670,  3670,  3670,  -736,  -736,  -736,  3670,
    -736,  -736,  3670,    46,   977,  -736,  -736,  2174,  3670,  -736,
    2434,   713,   704,   704,   980,   980,   980,   980,  -736,  -736,
     -15,   978,    48,   996,   997,  -736,   794,   988,  -736,   609,
     609,   609,   609,   642,   909,  3140,  -736,   946,   411,  2434,
    2174,  3140,   914,   363,  -736,   936,    80,  -736,  1018,   845,
      50,  1046,  -736,  1055,   450,  -736,  -736,  -736,  -736,  2938,
    1043,  1043,  1043,  1043,  1043,  1043,  1043,  1043,  1043,  1043,
     839,  -736,  -736,  -736,  3670,  2174,  -736,   547,   992,   947,
    -736,  -736,  2174,  2174,  3670,   713,  2558,  -736,  -736,  1066,
    -736,  -736,  -736,   848,   609,   642,  -736,   849,  2434,   687,
    3101,  -736,   850,   949,  -736,   968,   951,  2558,    14,  1050,
    -736,  1071,   450,   950,  -736,  -736,  -736,  -736,  -736,    51,
    -736,  1080,  1081,   925,  1082,  1084,  1092,  1097,  1098,  1099,
    1100,   323,  3670,  2174,  2174,  -736,  3670,    56,  1064,  -736,
     609,  -736,   865,  3140,  3140,  -736,   881,   986,   883,   -75,
    -736,  -736,  -736,   286,  -736,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,   878,
    3670,  -736,  -736,  3140,  1009,  -736,  -736,   886,  -736,   600,
    -736,  -736,  -736,  -736,   -38,  1010,  1061,  -736,  -736,  1093,
    1101,  -736,  1072,   900,  1117,  1124,   904,  -736,  -736,   918,
    -736,  1105,  1126,  -736
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -736,  -736,  -736,   938,  -296,  -736,  -601,  -414,  -204,   531,
     420,  -736,  -736,  -736,   431,  -736,   -21,  1110,  -736,  -736,
    -736,  -736,    21,    35,  -736,   265,    27,    40,    39,  -736,
    -146,  -142,  -131,  -119,  -116,  -104,   -95,  -736,  -736,  -736,
    -736,   562,  -736,  -736,    57,  -736,  -736,  -736,   178,   527,
    -572,   375,  -736,  -736,   372,  -399,  -736,  -736,  -736,    36,
     -14,  -736,  -736,  -736,    38,  -409,  -736,  -736,   106,  -736,
      83,    31,     0,     4,  -736,   208,   -91,   224,  -679,   955,
     -13,  -736,   694,  -249,  -736,  -736,  -313,   180,  -199,  -736,
    -736,  -736,  -736,  -736,   398,  -736,  -736,  -170,   484,  -550,
      68,  -217,    23,   724,  -736,  -117,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,   -83,  1028,  -736,  -736,  -736,   737,   -71,
    -496,  -736,  -400,  -736,   981,  -736,   711,  -736,  -736,  -736,
      95,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  1138,
     920,  -736,   907,  -736,  -736,  -736,    65,  -736,  -736,   805,
     884,  -736,  -101,   518,  -736,  -736,  -736,  -736,  -344,  -736,
    -736,  -736,  -736,   552,   291,  -736,  -736,  -736,  -736,  -736,
     563,  -736,  -736,  -736,  -736,    44,   -11,  -736,    -7,     6,
    -736,  -736,  -736,   344,  -736,  -736,  -736,   789,  -735,  -736,
     606,  -736,   -89,   -86,  -736,   154,   156,   -82,  -736,   376,
    -736,   -81,   -80,   -79,   -78,  -736,  -736,  -736
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -515
static const yytype_int16 yytable[] =
{
      51,    81,   128,   128,   355,    82,   167,   815,   111,   135,
     111,   111,   111,   135,   549,   493,   634,   191,   875,   129,
     129,    34,   111,   457,   431,   277,   111,    36,   348,   349,
     350,    50,   808,   171,   505,    35,   127,   130,    48,    37,
     547,   297,   927,  1169,   113,   114,   115,   227,  -247,   829,
     603,   655,   255,   233,   193,     1,   499,    45,   656,   281,
    1090,   373,   198,   199,   200,   374,   290,  -293,     1,   292,
    1091,   170,   943,   691,   752,   238,   375,   861,   833,   261,
     258,   455,   877,   963,   971,   150,   999,  1061,   376,  1068,
    1130,   377,  1137,  1031,   112,   613,   883,  1151,  1066,   301,
     220,   226,   938,   378,   121,   944,   128,   424,   125,   724,
     196,   204,   379,  -247,   128,   924,   383,   621,   388,   153,
     871,   389,   424,   129,   828,   390,   391,   392,   393,   394,
     953,   129,  -293,   622,  -304,   839,   950,    51,   204,   256,
     225,   874,  -304,   984,   277,  -514,  1092,  -512,   234,   624,
     625,   119,   294,  1131,   221,   548,   969,   925,   246,   151,
     280,   136,   753,   222,   223,   190,   256,   171,   249,  1032,
     171,   154,   247,   122,   131,   248,   968,   970,   194,  1170,
     128,   466,    26,    26,   128,   470,   482,   472,  1132,   456,
     705,   278,   201,  1087,    51,   535,   803,   129,   239,   135,
     617,   129,  1093,  1016,   951,   282,   667,    51,   286,   954,
     298,   637,   111,   468,   314,    34,   667,   481,   316,   128,
     156,    36,   483,   436,  -293,    50,   485,   171,   369,    35,
     128,   468,    48,    37,   371,   295,   129,  -247,   382,   373,
     604,   430,   370,   374,   441,   381,   372,   129,   657,   949,
     441,    45,   852,   421,   375,  1094,  -293,    51,   958,   959,
     960,   129,   192,   604,   380,   404,   376,   129,   834,   377,
     167,   357,   878,   964,   972,   195,   604,  1062,   443,  1069,
    1076,   378,   878,   128,   128,   128,  1081,  1062,   446,   171,
     379,   926,   444,   171,   383,   445,   388,   171,   724,   389,
     129,   129,   129,   390,   391,   392,   393,   394,   724,   724,
     278,   651,   123,   132,   415,  1033,    51,   476,   477,   478,
    1020,   352,   124,   133,  1006,   274,   416,   467,   206,   353,
     507,   471,   510,   196,    82,   170,   658,   436,   892,   893,
     894,   895,   896,   897,   898,   207,   167,   501,   536,   536,
     536,   233,   666,   582,  1000,   576,   209,   275,   463,   911,
      51,   210,   409,   650,   111,   410,   673,   464,   111,   211,
     677,  1060,   212,   171,   352,   922,   923,   653,   258,  1021,
    1022,   226,   353,   602,   228,    51,   229,   577,  1154,  1155,
     235,  1034,   724,   680,   681,    51,     1,   659,   411,   660,
     544,   900,   578,   901,   902,  1040,   369,   545,  1020,   263,
     264,   170,   371,   417,   457,   240,   382,   128,  1165,   641,
     370,   649,   842,   381,   372,   661,   601,   846,   636,   244,
     899,   254,    82,  1098,   129,   251,   129,   266,   129,   906,
     907,   908,   380,   892,   893,   894,   895,   896,   897,   898,
    1159,   412,   665,    12,   318,   319,   320,   935,   321,   322,
     323,   253,   324,   325,   814,   111,   978,  1021,  1083,   172,
     667,   985,   213,   214,   215,   216,   217,   724,   724,   724,
     724,   724,   724,   724,   724,    19,   257,  -257,  -257,  -257,
     409,  1135,  1160,   410,   407,   408,  1019,   283,  1161,    81,
    1162,   116,   284,    82,   171,   171,   117,   287,   887,   173,
     288,  1163,    22,   209,   809,   291,   118,   171,   889,   890,
     293,   267,   747,    26,   728,   218,   411,   724,   847,   848,
    1041,  1042,  1043,    51,  1044,   291,  1045,   711,   712,   713,
     171,   296,   699,   701,  1046,  1047,  1048,    30,   300,  1049,
     268,   302,   174,   175,   741,   708,   537,   539,   540,   305,
     269,   270,   306,   729,   744,   730,   731,    51,   742,   308,
     309,   743,   538,   538,   538,   732,   724,   904,   746,   826,
     176,   310,   311,   177,   312,   351,  1009,  1010,  1011,  1012,
     810,   356,   395,   796,   797,   798,   799,   800,   399,  -159,
    1026,  1078,   942,  -160,   400,   724,   128,  -257,   528,   529,
     530,   531,   532,   171,   178,  -257,   401,  -257,   405,   333,
     171,   171,   171,   129,   171,   641,   406,   419,   128,   843,
     436,   179,   967,   128,   180,   171,   420,   850,   422,   430,
     824,   423,   129,   424,   430,   129,   129,   434,   181,   182,
     129,   404,   621,   426,   129,   128,   435,   854,   821,   822,
     823,   642,   825,   801,   724,   427,   430,  -379,   622,  1074,
     111,   448,   129,   821,   643,   449,   183,   451,   644,   623,
     452,   645,   184,   454,   624,   625,   642,   991,   992,   993,
     994,   995,   996,   997,   998,   185,   469,   479,   642,   643,
     614,   615,   616,   644,   484,   497,   645,   646,   280,   498,
       1,   643,   204,   728,  -131,   644,   966,   533,   645,   892,
     893,   894,   895,   896,   897,   898,   507,   338,  1055,   580,
      82,  1120,   646,   511,   534,   584,  1123,  1018,   894,   895,
     896,   897,   898,   398,   646,   892,   893,   894,   895,   896,
     897,   898,  1057,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   532,   891,  -513,   585,    51,   586,   587,
     436,   990,   138,   139,   588,   599,  1065,   892,   893,   894,
     895,   896,   897,   898,   892,   893,   894,   895,   896,   897,
     898,   140,   605,   589,   606,   590,   591,    51,   592,   593,
     462,   141,   465,   594,   608,  1079,   142,  1149,   595,   596,
     597,   473,   598,   475,   609,   607,   610,   611,   613,   480,
     612,   620,   619,   143,   628,   629,   631,   635,   128,   639,
     651,   652,   494,   144,   670,   671,   674,   678,   682,   430,
     683,   684,   695,   702,   696,   129,   703,   726,   502,   503,
     504,   506,   508,   705,   200,   751,   754,   778,   793,   779,
     145,   780,   812,   806,  1122,   781,   782,    51,   783,   784,
     171,   146,   541,   785,   171,   786,   787,   788,   789,   816,
     550,   790,   791,   792,   579,   817,   581,   892,   893,   894,
     895,   896,   897,   898,   818,   147,   819,   830,   980,   436,
     436,   436,   436,   831,  1153,   832,   841,   844,   699,   849,
     853,   864,   981,   436,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   863,   876,    51,   523,
     524,   525,   526,   527,   528,   529,   530,   531,   532,  1035,
     532,   879,   928,   930,  1053,   633,   903,   909,   128,   912,
    1168,   916,   111,   914,   919,   929,   931,   932,   933,   430,
     171,   129,   934,   936,   945,   129,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   947,   948,   957,
     962,   956,   436,   965,   976,   989,  1001,   672,  1002,  1003,
    1004,   676,  1005,  1007,  1008,  1014,  1013,  1017,   821,  1027,
    1028,  1036,  1037,  1038,  1039,    51,  1058,  1063,   898,  1067,
     686,    51,   688,   690,  1072,  1077,   694,  1102,  1103,  1104,
    1105,  1106,  1107,  1108,  1109,  1110,  1073,  1070,  1071,  1075,
    1082,  1086,  1088,   709,   710,   171,   714,   715,   716,   717,
     718,   719,   720,   721,   436,   128,  1096,   733,   734,   735,
     736,   737,   738,   739,  1089,  1097,   430,  1100,  1114,  1113,
    1111,  1118,   129,  1127,  1133,  1126,   128,  1128,  1119,  1121,
    1125,  1134,  1136,   701,  1138,  1139,  1141,   430,  1142,   317,
     318,   319,   320,   129,   321,   322,   323,  1143,   324,   325,
     326,  1140,  1144,  1145,  1146,  1152,   327,   795,  1147,   604,
    1173,  1156,  1157,  1158,  1166,  1172,  1167,  1174,   328,   329,
     486,  1176,  1178,    51,    51,  1175,   330,   487,  1179,  1182,
    1177,  1183,   315,   888,  1180,   811,  1181,   884,   186,   977,
     802,   820,  1052,   918,   921,  1099,  1117,  1148,  1056,   905,
     663,   858,   638,    51,   488,  1129,   158,   354,   237,   630,
     654,   152,   489,   840,   304,   331,   159,   160,   450,   851,
     813,   827,   583,   794,   600,   474,   442,  1084,   961,  1085,
     939,     0,     0,     0,     0,     0,   490,     0,     0,     0,
       0,     0,     0,     0,     0,   332,     0,     0,     0,     0,
       0,     0,     0,     0,   859,     0,     0,     0,   860,     0,
       0,     0,     0,     0,     0,     0,   865,     0,   867,   491,
     869,     0,     0,     0,   872,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   881,     0,   882,     0,     0,     0,
       0,     0,   886,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   333,     0,   398,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     161,   162,     0,     0,   492,     0,     0,     0,     0,     0,
       0,     0,   541,     0,     0,     0,     0,     0,     0,     0,
       0,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,   334,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,     0,     0,     0,     0,
      83,   164,   165,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   937,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,     0,     0,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,     0,     0,     0,     0,   664,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   973,     0,   974,
       0,   975,     0,     0,     0,     0,     0,   979,     0,     0,
     982,     0,     0,     0,   988,   317,   318,   319,   320,     0,
     321,   322,   323,     0,   324,   325,   326,     0,     0,     0,
       0,     0,   327,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   328,   329,   458,     0,     0,     0,
       0,     0,   330,     0,     0,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   317,   318,   319,   320,
     274,   321,   322,   323,     0,   324,   325,   326,     0,     0,
       0,   331,     0,   327,     0,     0,     0,  1054,     0,     0,
       0,     0,     0,     0,     0,   328,   329,   692,     0,     0,
       0,     0,   275,   330,   396,     0,     0,     0,  1064,     0,
       0,   332,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,     0,     0,     0,
     693,  1080,   331,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   317,   318,   319,
     320,     0,   321,   322,   323,     0,   324,   325,   326,     0,
       0,   333,   332,     0,   327,     0,  1112,     0,     0,     0,
       0,     0,     0,  1116,   982,     0,   328,   329,   458,     0,
       0,     0,     0,     0,   330,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,   334,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   333,   331,   398,  1150,     0,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,     0,     0,
       0,     0,     0,   332,     0,     0,     0,     0,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,   334,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   317,   318,
     319,   320,     0,   321,   322,   323,     0,   324,   325,   326,
       0,     0,     0,   333,     0,   327,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   328,   329,     0,
       0,     0,     0,     0,     0,   330,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,   334,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   331,     0,   317,   318,   319,   320,
     632,   321,   322,   323,     0,   324,   325,   326,     0,     0,
       0,     0,     0,   327,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   332,   328,   329,   803,     0,     0,
       0,     0,     0,   330,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   126,
       0,     0,   331,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,   333,     0,     0,   748,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   332,     0,     0,     0,   428,     0,     0,     0,
       0,     0,     0,     0,   749,     0,     0,     0,     0,     0,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
     334,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,     0,     0,   317,   318,   319,
     320,     0,   321,   322,   323,     0,   324,   325,   326,     0,
       0,     0,   333,     0,   327,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   328,   329,     0,     0,
       0,     0,     0,     0,   330,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,   334,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   331,     0,   317,   318,   319,   320,     0,
     321,   322,   323,    26,   324,   325,   326,     0,     0,     0,
       0,     0,   327,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   332,   328,   329,     0,   685,     0,     0,
       0,     0,   330,     0,     0,     0,     0,     0,     0,     0,
       0,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,     0,     0,     0,     0,
       0,   331,     0,     0,     0,     0,     0,     0,     0,   317,
     318,   319,   320,   333,   321,   322,   323,     0,   324,   325,
     326,     0,     0,     0,     0,     0,   327,     0,     0,     0,
       0,   332,     0,     0,     0,   687,     0,     0,   328,   329,
       0,     0,     0,     0,   158,     0,   330,     0,     0,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,   334,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,     0,     0,     0,   317,   318,   319,
     320,     1,   321,   322,   323,   331,   324,   325,   326,     0,
       0,   333,     0,     0,   327,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   328,   329,     0,     0,
       0,     0,     0,     0,   330,   332,     0,     0,     0,   689,
       0,     0,     0,     0,     0,     0,     0,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,   334,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,     0,   331,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   333,     0,     0,     0,     0,
       0,     0,     0,   332,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,     0,     0,     0,    26,     0,
       0,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,   334,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,     0,     0,     0,     0,
       0,     0,     0,   333,     0,     0,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   126,     0,     0,     0,     0,     0,     0,     0,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,   334,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   317,   318,   319,   320,   428,   321,
     322,   323,     0,   324,   325,   326,     0,     0,     0,     0,
     807,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   722,   723,     0,     0,   317,   318,   319,
     320,   330,   321,   322,   323,     0,   324,   325,   326,     0,
     987,     0,     0,     0,     0,     0,   941,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   722,   723,     0,     0,
       0,   855,     0,     0,   330,     0,     0,     0,     0,     0,
     331,     0,     0,     0,   126,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,     0,     0,     0,     0,
     332,     0,     0,   331,     0,     0,     0,     0,   158,   777,
       0,     0,   209,     0,     0,     0,     0,     0,   159,   160,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   332,     0,     0,     0,     0,     0,     0,
       0,   640,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   126,     0,     0,     0,     0,     0,     0,     0,     0,
     333,     0,     0,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   428,     0,
     126,     0,     0,   333,     0,     0,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,   334,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   439,   161,   162,     0,     0,     0,     0,     0,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,   334,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   163,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   435,     0,     0,     0,
       0,     0,     0,   164,   165,   166,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,     0,     0,     0,   158,     0,     0,     0,     0,     0,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   745,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     126,     0,     0,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   126,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   640,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   158,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   648,     0,     0,     0,     0,
       0,     0,     0,    83,     0,     0,     0,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   126,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   532,     0,     0,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   158,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   835,   866,     0,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,     0,     0,     0,     0,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
       0,     0,     0,     0,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
       0,     0,     0,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,     1,     0,
       0,     0,   358,     0,     0,     0,   359,   360,   361,     0,
       1,  1015,     0,     0,     2,     4,   362,     6,   359,   360,
     361,     0,     0,     0,     0,     0,     0,     4,   362,     6,
       0,     0,     0,     0,     0,     0,     0,   363,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   363,
       0,     0,     0,     0,     0,    12,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,     0,     0,
     364,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   364,     0,   365,     0,     0,    19,     0,     0,
       0,   755,   756,   757,     0,     0,   365,     0,   758,    19,
       0,     0,     0,     0,     0,     0,   759,     0,     0,     0,
     760,   761,     0,   762,    22,  1124,     0,     0,     0,   763,
       0,     0,     0,     0,     0,   366,    22,     0,   367,   764,
       0,     0,     0,     0,     0,     0,     0,   366,     0,     0,
     367,     0,     0,     0,     0,     0,   765,     0,     0,    30,
       0,     0,     0,     0,     0,     0,   766,     0,   767,     0,
     768,    30,     0,     1,     0,     0,     0,     2,     0,     0,
       0,     0,   769,     0,     0,     0,     3,     0,     0,     0,
       4,     5,     6,     0,     0,     0,     0,     0,   368,     0,
     770,     0,     7,     0,     0,     8,     0,     0,     0,     0,
     368,     0,     0,   771,   772,   773,     9,     0,     0,     0,
      10,     0,     0,   774,   775,     0,     0,    11,     0,     0,
      12,    13,    14,     0,     0,    15,     0,     0,     0,     0,
       0,    16,     0,    17,     0,     0,     0,     0,     0,     0,
       0,     0,    18,     0,     0,     0,     0,     0,     0,   651,
       0,     0,    19,   755,   756,   757,     0,     0,     0,     0,
     758,     0,     0,     0,     0,     0,     0,     0,   759,     0,
       0,     0,   760,   761,    20,   762,     0,     0,    21,    22,
       0,   763,    23,     0,    24,    25,     0,     0,     0,     0,
      26,   764,     0,    27,    28,     0,     0,     0,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   765,     0,
       0,     0,     0,     0,    30,     0,     0,     0,   766,     0,
     767,     0,   768,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   769,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   770,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   771,   772,   773,     0,     0,
       0,     0,     0,     0,     0,   774,   775,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,   531,   532,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
       0,     0,   704,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   532,     0,     0,   873,     0,     0,     0,
       0,     0,   868,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,     0,   870,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,     0,     0,   986,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,   531,   532
};

static const yytype_int16 yycheck[] =
{
       0,     1,    13,    14,   203,     1,    27,   608,     2,    16,
       4,     5,     6,    20,   358,   311,   425,    30,   697,    13,
      14,     0,    16,   272,   241,    24,    20,     0,   198,   199,
     200,     0,   582,    27,   330,     0,    13,    14,     0,     0,
     353,    28,   777,    81,     4,     5,     6,   118,    41,   621,
      41,   451,   144,   124,   106,    40,    40,     0,    41,   160,
      10,   207,    15,    16,    17,   207,   167,    41,    40,   170,
      20,    27,   807,    41,   143,     3,   207,   678,    41,   144,
     151,   123,    41,    41,    41,    20,    41,    41,   207,    41,
      76,   207,    41,    20,     3,    85,   104,    41,   113,   182,
     116,     4,   104,   207,     9,   130,   117,   197,   113,   523,
     198,   112,   207,   106,   125,    54,   207,    14,   207,    24,
     692,   207,   197,   117,   620,   207,   207,   207,   207,   207,
      78,   125,   106,    30,   135,   631,   102,   137,   112,   231,
     117,   231,   143,   231,    24,    40,    96,    42,   125,    46,
      47,   200,    30,   139,   170,   354,   231,    96,   137,   192,
      40,   228,   231,   179,   180,   189,   231,   161,   137,    96,
     164,   117,   137,    43,    43,   137,   855,   856,   230,   217,
     191,   282,   167,   167,   195,   286,    89,   288,   174,   231,
     198,   190,   145,   113,   194,   167,   198,   191,   126,   206,
     190,   195,   152,   938,   170,   161,   231,   207,   164,   157,
     197,   428,   206,   284,   191,   194,   231,   300,   195,   230,
     122,   194,   305,   244,   198,   194,   309,   221,   207,   194,
     241,   302,   194,   194,   207,   113,   230,   230,   207,   385,
     231,   241,   207,   385,   255,   207,   207,   241,   231,   821,
     261,   194,   652,   230,   385,   205,   230,   257,   830,   831,
     832,   255,     0,   231,   207,   221,   385,   261,   231,   385,
     291,   206,   231,   231,   231,   130,   231,   231,   257,   231,
    1015,   385,   231,   294,   295,   296,  1021,   231,   257,   283,
     385,   230,   257,   287,   385,   257,   385,   291,   712,   385,
     294,   295,   296,   385,   385,   385,   385,   385,   722,   723,
     190,   231,   182,   182,   125,    20,   316,   294,   295,   296,
      45,   135,   192,   192,   925,    68,   137,   283,   151,   143,
     330,   287,   332,   198,   330,   291,   115,   358,    32,    33,
      34,    35,    36,    37,    38,    72,   367,   316,   348,   349,
     350,   422,   113,   366,   904,   198,    41,   100,     5,   758,
     360,    41,    66,   434,   358,    69,   467,    14,   362,    56,
     471,   972,    40,   367,   135,   774,   775,   448,   449,   104,
     105,     4,   143,   396,     3,   385,   126,   230,  1123,  1124,
       4,    96,   806,   476,   477,   395,    40,   176,   102,   178,
       5,     8,   362,    10,    11,    82,   385,    12,    45,   202,
     203,   367,   385,   224,   663,   126,   385,   428,  1153,   430,
     385,   432,   639,   385,   385,   204,   395,   644,   428,   193,
     726,   146,   428,  1034,   428,   158,   430,    40,   432,   752,
     753,   754,   385,    32,    33,    34,    35,    36,    37,    38,
    1129,   155,   459,    97,     4,     5,     6,   801,     8,     9,
      10,   192,    12,    13,    14,   459,   875,   104,   105,     3,
     231,   880,    60,    61,    62,    63,    64,   891,   892,   893,
     894,   895,   896,   897,   898,   129,   113,    15,    16,    17,
      66,  1092,   206,    69,    90,    91,   190,    42,   212,   499,
     214,   177,   112,   499,   498,   499,   182,    42,   712,    43,
      14,   225,   156,    41,   230,   231,   192,   511,   722,   723,
       3,   124,   535,   167,   524,   113,   102,   941,   645,   646,
     207,   208,   209,   533,   211,   231,   213,    28,    29,    30,
     534,   182,   498,   499,   221,   222,   223,   191,   220,   226,
     153,   112,    86,    87,   533,   511,   348,   349,   350,   220,
     163,   164,   135,     8,   533,    10,    11,   567,   533,   229,
     227,   533,   348,   349,   350,    20,   990,   747,   534,   155,
     114,   201,    40,   117,   199,    77,   930,   931,   932,   933,
     603,   191,   112,    60,    61,    62,    63,    64,     5,    65,
     944,   190,   806,    65,     5,  1019,   617,   135,    34,    35,
      36,    37,    38,   607,   148,   143,    65,   145,   141,   169,
     614,   615,   616,   617,   618,   636,   181,    40,   639,   640,
     651,   165,   849,   644,   168,   629,    20,   648,   231,   639,
     617,   125,   636,   197,   644,   639,   640,   231,   182,   183,
     644,   607,    14,   109,   648,   666,    14,   664,   614,   615,
     616,   114,   618,   130,  1078,   109,   666,   201,    30,  1013,
     664,   190,   666,   629,   127,   231,   210,   113,   131,    41,
       5,   134,   216,    40,    46,    47,   114,   891,   892,   893,
     894,   895,   896,   897,   898,   229,    24,     4,   114,   127,
     409,   410,   411,   131,     5,    84,   134,   160,    40,   170,
      40,   127,   112,   713,    40,   131,   144,    40,   134,    32,
      33,    34,    35,    36,    37,    38,   726,   196,   144,    14,
     726,  1075,   160,    42,    42,   230,    49,   941,    34,    35,
      36,    37,    38,   212,   160,    32,    33,    34,    35,    36,
      37,    38,   969,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    19,    42,   230,   777,   230,   230,
     801,    19,    68,    69,   230,   105,   990,    32,    33,    34,
      35,    36,    37,    38,    32,    33,    34,    35,    36,    37,
      38,    87,   190,   230,     5,   230,   230,   807,   230,   230,
     279,    97,   281,   230,    24,  1019,   102,  1113,   230,   230,
     230,   290,   230,   292,    24,   231,    24,   141,    85,   298,
     141,    77,   231,   119,   109,    40,    77,     3,   849,   231,
     231,   190,   311,   129,    41,    41,     4,    40,    40,   849,
     231,    41,    41,   194,   173,   849,   231,    40,   327,   328,
     329,   330,   331,   198,    17,   231,   135,   230,   105,   230,
     156,   230,     5,    30,  1078,   230,   230,   877,   230,   230,
     874,   167,   351,   230,   878,   230,   230,   230,   230,     4,
     359,   230,   230,   230,   363,     4,   365,    32,    33,    34,
      35,    36,    37,    38,    24,   191,    24,    14,   877,   930,
     931,   932,   933,    14,    49,    14,    41,   147,   874,   131,
      41,     5,   878,   944,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    41,    24,   938,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,   956,
      38,    40,    49,   130,   965,   424,    41,    40,   969,    40,
    1159,    40,   956,   150,    40,   230,   130,   130,   130,   969,
     964,   965,     5,    65,    82,   969,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,     4,     4,    54,
     132,   190,  1013,    70,    41,   105,     5,   466,     5,     5,
       5,   470,   230,   105,   230,     5,   130,   105,   964,     4,
     166,    54,    54,    54,    40,  1015,   120,    40,    38,    41,
     489,  1021,   491,   492,   230,    79,   495,  1041,  1042,  1043,
    1044,  1045,  1046,  1047,  1048,  1049,    48,    41,    41,   130,
     126,   105,    24,   512,   513,  1039,   515,   516,   517,   518,
     519,   520,   521,   522,  1075,  1066,    10,   526,   527,   528,
     529,   530,   531,   532,   219,    10,  1066,    24,   121,    77,
     231,     5,  1066,   105,    24,   126,  1087,   126,   230,   230,
     230,    10,   132,  1039,     4,     4,     4,  1087,     4,     3,
       4,     5,     6,  1087,     8,     9,    10,     5,    12,    13,
      14,   176,     5,     5,     5,    41,    20,   576,     8,   231,
      49,   230,   126,   230,   105,   105,   230,    24,    32,    33,
      34,    49,     5,  1123,  1124,    24,    40,    41,     4,    24,
     230,     5,   194,   713,   230,   604,   218,   706,    28,   874,
     578,   614,   964,   768,   772,  1039,  1063,  1111,   968,   751,
     456,   667,   428,  1153,    68,  1087,     3,   202,   130,   422,
     449,    23,    76,   632,   183,    79,    13,    14,   261,   651,
     607,   619,   367,   567,   385,   291,   256,  1023,   834,  1023,
     804,    -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   673,    -1,    -1,    -1,   677,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   685,    -1,   687,   133,
     689,    -1,    -1,    -1,   693,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   703,    -1,   705,    -1,    -1,    -1,
      -1,    -1,   711,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   169,    -1,   726,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     117,   118,    -1,    -1,   188,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   751,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,    -1,    -1,    -1,    -1,
       3,   168,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   803,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    -1,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   866,    -1,   868,
      -1,   870,    -1,    -1,    -1,    -1,    -1,   876,    -1,    -1,
     879,    -1,    -1,    -1,   883,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,     3,     4,     5,     6,
      68,     8,     9,    10,    -1,    12,    13,    14,    -1,    -1,
      -1,    79,    -1,    20,    -1,    -1,    -1,   966,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    70,    -1,    -1,
      -1,    -1,   100,    40,    41,    -1,    -1,    -1,   987,    -1,
      -1,   109,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,    -1,    -1,    -1,
     113,  1020,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    10,    -1,    12,    13,    14,    -1,
      -1,   169,   109,    -1,    20,    -1,  1055,    -1,    -1,    -1,
      -1,    -1,    -1,  1062,  1063,    -1,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   169,    79,  1113,  1114,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    -1,
      -1,    -1,    -1,   109,    -1,    -1,    -1,    -1,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    14,
      -1,    -1,    -1,   169,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,    79,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    32,    33,   198,    -1,    -1,
      -1,    -1,    -1,    40,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   167,    -1,   169,    -1,    -1,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   109,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,    -1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    10,    -1,    12,    13,    14,    -1,
      -1,    -1,   169,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,    79,    -1,     3,     4,     5,     6,    -1,
       8,     9,    10,   167,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   109,    32,    33,    -1,   113,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,   169,     8,     9,    10,    -1,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,   109,    -1,    -1,    -1,   113,    -1,    -1,    32,    33,
      -1,    -1,    -1,    -1,     3,    -1,    40,    -1,    -1,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,    -1,    -1,    -1,     3,     4,     5,
       6,    40,     8,     9,    10,    79,    12,    13,    14,    -1,
      -1,   169,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    40,   109,    -1,    -1,    -1,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,    -1,    79,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,   169,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   109,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    -1,    -1,    -1,   167,    -1,
      -1,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   169,    -1,    -1,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,     3,     4,     5,     6,    40,     8,
       9,    10,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,
     184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,     3,     4,     5,
       6,    40,     8,     9,    10,    -1,    12,    13,    14,    -1,
     184,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,   103,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,     3,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    -1,    -1,    -1,
     109,    -1,    -1,    79,    -1,    -1,    -1,    -1,     3,    52,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     169,    -1,    -1,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,    40,    -1,
       3,    -1,    -1,   169,    -1,    -1,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,    34,   117,   118,    -1,    -1,    -1,    -1,    -1,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   149,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,   168,   169,   170,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    -1,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,     3,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,     3,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   152,   113,    -1,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    -1,    -1,    -1,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
      -1,    -1,    -1,    -1,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,    -1,    -1,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,    40,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    48,    49,    50,    -1,
      40,   184,    -1,    -1,    44,    57,    58,    59,    48,    49,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,    -1,    -1,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,    -1,   126,    -1,    -1,   129,    -1,    -1,
      -1,    73,    74,    75,    -1,    -1,   126,    -1,    80,   129,
      -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,
      92,    93,    -1,    95,   156,   184,    -1,    -1,    -1,   101,
      -1,    -1,    -1,    -1,    -1,   167,   156,    -1,   170,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,    -1,    -1,
     170,    -1,    -1,    -1,    -1,    -1,   128,    -1,    -1,   191,
      -1,    -1,    -1,    -1,    -1,    -1,   138,    -1,   140,    -1,
     142,   191,    -1,    40,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,   154,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      57,    58,    59,    -1,    -1,    -1,    -1,    -1,   230,    -1,
     172,    -1,    69,    -1,    -1,    72,    -1,    -1,    -1,    -1,
     230,    -1,    -1,   185,   186,   187,    83,    -1,    -1,    -1,
      87,    -1,    -1,   195,   196,    -1,    -1,    94,    -1,    -1,
      97,    98,    99,    -1,    -1,   102,    -1,    -1,    -1,    -1,
      -1,   108,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,   231,
      -1,    -1,   129,    73,    74,    75,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,
      -1,    -1,    92,    93,   151,    95,    -1,    -1,   155,   156,
      -1,   101,   159,    -1,   161,   162,    -1,    -1,    -1,    -1,
     167,   111,    -1,   170,   171,    -1,    -1,    -1,   175,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   128,    -1,
      -1,    -1,    -1,    -1,   191,    -1,    -1,    -1,   138,    -1,
     140,    -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   154,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   185,   186,   187,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   195,   196,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,    -1,    41,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,   113,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    -1,   113,    18,    19,    20,    21,    22,    23,
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
     151,   155,   156,   159,   161,   162,   167,   170,   171,   175,
     191,   233,   234,   235,   254,   255,   258,   260,   261,   269,
     270,   271,   272,   274,   275,   276,   277,   293,   296,   298,
     303,   304,   305,   306,   307,   309,   338,   341,   348,   353,
     355,   357,   360,   364,   365,   366,   367,   370,   375,   377,
     380,   388,   391,   392,   393,   399,   412,   413,   437,   438,
     439,   304,   305,     3,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   259,
     410,   411,     3,   259,   259,   259,   177,   182,   192,   200,
     362,   362,    43,   182,   192,   113,     3,   334,   408,   411,
     334,    43,   182,   192,   378,   410,   228,   340,    68,    69,
      87,    97,   102,   119,   129,   156,   167,   191,   371,   372,
     378,   192,   371,   362,   117,   368,   122,   312,     3,    13,
      14,   117,   118,   149,   168,   169,   170,   248,   381,   382,
     407,   411,     3,    43,    86,    87,   114,   117,   148,   165,
     168,   182,   183,   210,   216,   229,   249,   344,   347,   409,
     189,   312,     0,   106,   230,   130,   198,   297,    15,    16,
      17,   145,   323,   324,   112,   320,   151,    72,   416,    41,
      41,    56,    40,    60,    61,    62,    63,    64,   113,   273,
     116,   170,   179,   180,   400,   334,     4,   351,     3,   126,
     278,   349,   350,   351,   334,     4,   346,   346,     3,   126,
     126,   294,   351,   354,   193,   389,   254,   255,   296,   303,
     339,   158,   373,   192,   146,   144,   231,   113,   351,   358,
     359,   144,   376,   202,   203,   369,    40,   124,   153,   163,
     164,   313,   314,   315,    68,   100,   329,    24,   190,   384,
      40,   384,   407,    42,   112,   356,   407,    42,    14,   383,
     384,   231,   384,     3,    30,   113,   182,    28,   197,   345,
     220,   345,   112,   343,   356,   220,   135,   342,   229,   227,
     201,    40,   199,   363,   334,   235,   334,     3,     4,     5,
       6,     8,     9,    10,    12,    13,    14,    20,    32,    33,
      40,    79,   109,   169,   215,   237,   238,   239,   241,   243,
     248,   249,   250,   251,   304,   407,   408,   411,   329,   329,
     329,    77,   135,   143,   311,   320,   191,   378,    44,    48,
      49,    50,    58,    79,   112,   126,   167,   170,   230,   254,
     255,   258,   260,   262,   263,   264,   265,   266,   267,   268,
     276,   296,   303,   308,   417,   418,   419,   423,   424,   425,
     429,   433,   434,   435,   436,   112,    41,   236,   241,     5,
       5,    65,   401,   402,   407,   141,   181,    90,    91,    66,
      69,   102,   155,   394,   395,   125,   137,   224,   361,    40,
      20,   334,   231,   125,   197,   310,   109,   109,    40,   295,
     304,   333,   334,   335,   231,    14,   248,   385,   390,    34,
     374,   408,   372,   254,   255,   296,   303,   379,   190,   231,
     374,   113,     5,   316,    40,   123,   231,   315,    34,   241,
     330,   331,   241,     5,    14,   241,   384,   407,   351,    24,
     384,   407,   384,   241,   382,   241,   334,   334,   334,     4,
     241,   345,    89,   345,     5,   345,    34,    41,    68,    76,
     100,   133,   188,   236,   241,   253,   321,    84,   170,    40,
     299,   303,   241,   241,   241,   236,   241,   304,   241,   244,
     304,    42,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    40,    42,   167,   304,   307,   309,   307,
     307,   241,   325,   326,     5,    12,   318,   318,   320,   390,
     241,   254,   255,   258,   260,   262,   263,   264,   265,   266,
     267,   268,   276,   296,   303,   308,   420,   421,   422,   424,
     425,   429,   433,   434,   435,   436,   198,   230,   259,   241,
      14,   241,   312,   381,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   105,
     419,   303,   312,    41,   231,   190,     5,   231,    24,    24,
      24,   141,   141,    85,   396,   396,   396,   190,   396,   231,
      77,    14,    30,    41,    46,    47,   414,   415,   109,    40,
     350,    77,     7,   241,   297,     3,   304,   333,   335,   231,
      70,   408,   114,   127,   131,   134,   160,   336,    70,   408,
     351,   231,   190,   351,   358,   354,    41,   231,   115,   176,
     178,   204,   317,   314,    70,   410,   113,   231,   311,   319,
      41,    41,   241,   384,     4,   352,   241,   384,    40,   386,
     345,   345,    40,   231,    41,   113,   241,   113,   241,   113,
     241,    41,    70,   113,   241,    41,   173,   256,   257,   407,
     300,   407,   194,   231,    41,   198,   245,   246,   407,   241,
     241,    28,    29,    30,   241,   241,   241,   241,   241,   241,
     241,   241,    32,    33,   239,   240,    40,   242,   304,     8,
      10,    11,    20,   241,   241,   241,   241,   241,   241,   241,
     252,   254,   255,   296,   303,    34,   407,   312,    71,    98,
     327,   231,   143,   231,   135,    73,    74,    75,    80,    88,
      92,    93,    95,   101,   111,   128,   138,   140,   142,   154,
     172,   185,   186,   187,   195,   196,   282,    52,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   105,   422,   241,    60,    61,    62,    63,
      64,   130,   273,   198,   430,   431,    30,   184,   331,   230,
     312,   241,     5,   402,    14,   238,     4,     4,    24,    24,
     281,   407,   407,   407,   334,   407,   155,   395,   352,   282,
      14,    14,    14,    41,   231,   152,   279,   280,   281,   352,
     241,    41,   333,   408,   147,   337,   333,   337,   337,   131,
     408,   385,   354,    41,   410,   103,   332,   333,   330,   241,
     241,   238,   387,    41,     5,   241,   113,   241,   113,   241,
     113,   282,   241,    41,   231,   310,    24,    41,   231,    40,
     301,   241,   241,   104,   246,   247,   241,   240,   242,   240,
     240,    19,    32,    33,    34,    35,    36,    37,    38,   236,
       8,    10,    11,    41,   329,   326,   318,   318,   318,    40,
     287,   287,    40,   283,   150,   285,    40,   284,   283,    40,
     286,   286,   287,   287,    54,    96,   230,   420,    49,   230,
     130,   130,   130,   130,     5,   390,    65,   241,   104,   431,
     432,    55,   240,   420,   130,    82,   403,     4,     4,   282,
     102,   170,   398,    78,   157,   397,   190,    54,   282,   282,
     282,   415,   132,    41,   231,    70,   144,   333,   310,   231,
     310,    41,   231,   241,   241,   241,    41,   257,   297,   241,
     303,   407,   241,   302,   231,   297,    41,   184,   241,   105,
      19,   240,   240,   240,   240,   240,   240,   240,   240,    41,
     331,     5,     5,     5,     5,   230,   238,   105,   230,   390,
     390,   390,   390,   130,     5,   184,   420,   105,   240,   190,
      45,   104,   105,   426,   427,   428,   390,     4,   166,   404,
     288,    20,    96,    20,    96,   410,    54,    54,    54,    40,
      82,   207,   208,   209,   211,   213,   221,   222,   223,   226,
     290,   291,   280,   408,   241,   144,   319,   333,   120,   322,
     238,    41,   231,    40,   241,   240,   113,    41,    41,   231,
      41,    41,   230,    48,   390,   130,   420,    79,   190,   240,
     241,   420,   126,   105,   427,   428,   105,   113,    24,   219,
      10,    20,    96,   152,   205,   289,    10,    10,   238,   300,
      24,   292,   292,   292,   292,   292,   292,   292,   292,   292,
     292,   231,   241,    77,   121,   328,   241,   302,     5,   230,
     390,   230,   240,    49,   184,   230,   126,   105,   126,   332,
      76,   139,   174,    24,    10,   238,   132,    41,     4,     4,
     176,     4,     4,     5,     5,     5,     5,     8,   291,   236,
     241,    41,    41,    49,   420,   420,   230,   126,   230,   310,
     206,   212,   214,   225,   405,   420,   105,   230,   320,    81,
     217,   406,   105,    49,    24,    24,    49,   230,     5,     4,
     230,   218,    24,     5
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
      case 233: /* "sql_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 234: /* "stmt_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 235: /* "stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 236: /* "expr_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 237: /* "column_ref" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 238: /* "expr_const" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 239: /* "simple_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 240: /* "arith_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 241: /* "expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 242: /* "in_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 243: /* "case_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 244: /* "case_arg" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 245: /* "when_clause_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 246: /* "when_clause" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 247: /* "case_default" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 248: /* "array_expr" */

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
      case 258: /* "cursor_declare_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 259: /* "cursor_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 260: /* "cursor_open_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 261: /* "cursor_fetch_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 262: /* "cursor_fetch_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 263: /* "cursor_fetch_next_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 264: /* "cursor_fetch_first_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 265: /* "cursor_fetch_prior_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 266: /* "cursor_fetch_last_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 267: /* "cursor_fetch_absolute_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 268: /* "cursor_fetch_relative_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 269: /* "fetch_prior_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 270: /* "fetch_first_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 271: /* "fetch_last_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 272: /* "fetch_relative_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 273: /* "next_or_prior" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 274: /* "fetch_absolute_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 275: /* "fetch_fromto_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 276: /* "cursor_close_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 277: /* "create_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 278: /* "opt_if_not_exists" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 279: /* "table_element_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 280: /* "table_element" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 281: /* "column_definition" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 282: /* "data_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 283: /* "opt_decimal" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 284: /* "opt_float" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 285: /* "opt_precision" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 286: /* "opt_time_precision" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 287: /* "opt_char_length" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 288: /* "opt_column_attribute_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 289: /* "column_attribute" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 290: /* "opt_table_option_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 291: /* "table_option" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 292: /* "opt_equal_mark" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 293: /* "drop_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 294: /* "opt_if_exists" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 295: /* "table_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 296: /* "insert_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 297: /* "opt_when" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 298: /* "replace_or_insert" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 299: /* "opt_insert_columns" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 300: /* "column_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 301: /* "insert_vals_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 302: /* "insert_vals" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 303: /* "select_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 304: /* "select_with_parens" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 305: /* "select_no_parens" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 306: /* "no_table_select" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 307: /* "select_clause" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 308: /* "select_into_clause" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 309: /* "simple_select" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 310: /* "opt_where" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 311: /* "select_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 312: /* "opt_hint" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 313: /* "opt_hint_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 314: /* "hint_options" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 315: /* "hint_option" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 316: /* "opt_comma_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 318: /* "limit_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 319: /* "opt_select_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 320: /* "opt_for_update" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 321: /* "parameterized_trim" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 322: /* "opt_groupby" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 323: /* "opt_order_by" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 324: /* "order_by" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 325: /* "sort_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 326: /* "sort_key" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 327: /* "opt_asc_desc" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 328: /* "opt_having" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 329: /* "opt_distinct" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 330: /* "projection" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 331: /* "select_expr_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 332: /* "from_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 333: /* "table_factor" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 334: /* "relation_factor" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 335: /* "joined_table" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 336: /* "join_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 337: /* "join_outer" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 338: /* "explain_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 339: /* "explainable_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 340: /* "opt_verbose" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 341: /* "show_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 342: /* "opt_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 343: /* "opt_for_grant_user" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 345: /* "opt_show_condition" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 346: /* "opt_like_condition" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 348: /* "create_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 349: /* "user_specification_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 350: /* "user_specification" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 351: /* "user" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 352: /* "password" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 353: /* "drop_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 354: /* "user_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 355: /* "set_password_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 356: /* "opt_for_user" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 357: /* "rename_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 358: /* "rename_info" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 359: /* "rename_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 360: /* "lock_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 361: /* "lock_spec" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 362: /* "opt_work" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 364: /* "begin_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 365: /* "commit_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 366: /* "rollback_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 367: /* "kill_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 368: /* "opt_is_global" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 369: /* "opt_flag" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 370: /* "grant_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 371: /* "priv_type_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 372: /* "priv_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 373: /* "opt_privilege" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 374: /* "priv_level" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 375: /* "revoke_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 376: /* "opt_on_priv_level" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 377: /* "prepare_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 378: /* "stmt_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 379: /* "preparable_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 380: /* "variable_set_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 381: /* "var_and_val_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 382: /* "var_and_val" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 383: /* "var_and_array_val" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 384: /* "to_or_eq" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 385: /* "argument" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 386: /* "array_vals_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 387: /* "array_val_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 388: /* "execute_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 389: /* "opt_using_args" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 390: /* "argument_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 391: /* "deallocate_prepare_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 392: /* "deallocate_or_drop" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 393: /* "alter_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 394: /* "alter_column_actions" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 395: /* "alter_column_action" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 396: /* "opt_column" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 398: /* "alter_column_behavior" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 399: /* "alter_system_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 400: /* "opt_force" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 401: /* "alter_system_actions" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 402: /* "alter_system_action" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 403: /* "opt_comment" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 405: /* "server_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 406: /* "opt_cluster_or_address" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 407: /* "column_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 408: /* "relation_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 409: /* "function_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 410: /* "column_label" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 412: /* "create_procedure_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 413: /* "proc_decl" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 414: /* "proc_parameter_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 415: /* "proc_parameter" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 416: /* "proc_block" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 417: /* "proc_sect" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 418: /* "proc_stmts" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 419: /* "proc_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 420: /* "control_sect" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 421: /* "control_stmts" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 422: /* "control_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 423: /* "stmt_declare" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 424: /* "stmt_assign" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 425: /* "stmt_if" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 426: /* "stmt_elsifs" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 427: /* "stmt_elsif" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 428: /* "stmt_else" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 429: /* "stmt_case" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 430: /* "case_when_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 431: /* "case_when" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 432: /* "case_else" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 433: /* "stmt_loop" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 434: /* "stmt_while" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 435: /* "stmt_null" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 436: /* "stmt_exit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 437: /* "exec_procedure_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 438: /* "drop_procedure_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 439: /* "show_procedure_stmt" */

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
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_NO_GROUP);
    ;}
    break;

  case 283:

    {
      (yyval.node) = (yyvsp[(1) - (2)].node);
    ;}
    break;

  case 284:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 285:

    {
    (yyval.ival) = 3;
  ;}
    break;

  case 286:

    {
    (yyval.ival) = 4;
  ;}
    break;

  case 287:

    {
    (yyval.ival) = 1;
  ;}
    break;

  case 288:

    {
    (yyval.ival) = 2;
  ;}
    break;

  case 289:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 290:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 291:

    { (yyval.node) = NULL; ;}
    break;

  case 292:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 293:

    { (yyval.node) = NULL; ;}
    break;

  case 294:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 295:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 0;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 296:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 0;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 297:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 1;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 298:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 2;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 299:

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

  case 300:

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

  case 301:

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

  case 302:

    { (yyval.node) = NULL; ;}
    break;

  case 303:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_EXPR_LIST, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 304:

    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 305:

    { (yyval.node) = NULL; ;}
    break;

  case 306:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_SORT_LIST, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 307:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 308:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 309:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SORT_KEY, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 310:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_ASC); ;}
    break;

  case 311:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_ASC); ;}
    break;

  case 312:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_DESC); ;}
    break;

  case 313:

    { (yyval.node) = 0; ;}
    break;

  case 314:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 315:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 316:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_ALL);
    ;}
    break;

  case 317:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_DISTINCT);
    ;}
    break;

  case 318:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, (yyvsp[(1) - (1)].node));
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (1)]).first_column, (yylsp[(1) - (1)]).last_column);
    ;}
    break;

  case 319:

    {
      ParseNode* alias_node = NULL;
      malloc_non_terminal_node(alias_node, result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, alias_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (2)]).first_column, (yylsp[(1) - (2)]).last_column);
      dup_expr_string(alias_node->str_value_, result, (yylsp[(2) - (2)]).first_column, (yylsp[(2) - (2)]).last_column);
    ;}
    break;

  case 320:

    {
      ParseNode* alias_node = NULL;
      malloc_non_terminal_node(alias_node, result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, alias_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (3)]).first_column, (yylsp[(1) - (3)]).last_column);
      dup_expr_string(alias_node->str_value_, result, (yylsp[(3) - (3)]).first_column, (yylsp[(3) - (3)]).last_column);
    ;}
    break;

  case 321:

    {
      ParseNode* star_node = NULL;
      malloc_terminal_node(star_node, result->malloc_pool_, T_STAR);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, star_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (1)]).first_column, (yylsp[(1) - (1)]).last_column);
    ;}
    break;

  case 322:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 323:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 324:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 325:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 326:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 327:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 328:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 329:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 330:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 331:

    {
    	(yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 332:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(2) - (5)].node), (yyvsp[(5) - (5)].node));
    	yyerror(&(yylsp[(1) - (5)]), result, "qualied joined table can not be aliased!");
      YYABORT;
    ;}
    break;

  case 333:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 334:

    {
    	(yyval.node) = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 335:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOINED_TABLE, 4, (yyvsp[(2) - (6)].node), (yyvsp[(1) - (6)].node), (yyvsp[(4) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 336:

    {
      ParseNode* node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_JOIN_INNER);
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOINED_TABLE, 4, node, (yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 337:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_FULL);
    ;}
    break;

  case 338:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_LEFT);
    ;}
    break;

  case 339:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_RIGHT);
    ;}
    break;

  case 340:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_INNER);
    ;}
    break;

  case 341:

    { (yyval.node) = NULL; ;}
    break;

  case 342:

    { (yyval.node) = NULL; ;}
    break;

  case 343:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPLAIN, 1, (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = ((yyvsp[(2) - (3)].node) ? 1 : 0); /* positive: verbose */
    ;}
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

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 348:

    { (yyval.node) = (ParseNode*)1; ;}
    break;

  case 349:

    { (yyval.node) = NULL; ;}
    break;

  case 350:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_TABLES, 1, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 351:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 352:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 353:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_TABLE_STATUS, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 354:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_SERVER_STATUS, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 355:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_VARIABLES, 1, (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = (yyvsp[(2) - (4)].ival);
    ;}
    break;

  case 356:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_SCHEMA); ;}
    break;

  case 357:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_CREATE_TABLE, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 358:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 359:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 360:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_WARNINGS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 361:

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

  case 362:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_GRANTS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 363:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_PARAMETERS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 364:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_PROCESSLIST);
      (yyval.node)->value_ = (yyvsp[(2) - (3)].ival);
    ;}
    break;

  case 365:

    {
      if ((yyvsp[(2) - (4)].node)->value_ < 0 || (yyvsp[(4) - (4)].node)->value_ < 0)
      {
        yyerror(&(yylsp[(1) - (4)]), result, "OFFSET/COUNT must not be less than 0!");
        YYABORT;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_LIMIT, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 366:

    {
      if ((yyvsp[(2) - (2)].node)->value_ < 0)
      {
        yyerror(&(yylsp[(1) - (2)]), result, "COUNT must not be less than 0!");
        YYABORT;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_LIMIT, 2, NULL, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 367:

    { (yyval.node) = NULL; ;}
    break;

  case 368:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 369:

    { (yyval.node) = NULL; ;}
    break;

  case 370:

    { (yyval.node) = NULL; ;}
    break;

  case 371:

    { (yyval.ival) = 1; ;}
    break;

  case 372:

    { (yyval.ival) = 0; ;}
    break;

  case 373:

    { (yyval.ival) = 0; ;}
    break;

  case 374:

    { (yyval.node) = NULL; ;}
    break;

  case 375:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 376:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_WHERE_CLAUSE, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 377:

    { (yyval.node) = NULL; ;}
    break;

  case 378:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 1, (yyvsp[(1) - (1)].node)); ;}
    break;

  case 379:

    { (yyval.ival) = 0; ;}
    break;

  case 380:

    { (yyval.ival) = 1; ;}
    break;

  case 381:

    {
        merge_nodes((yyval.node), result->malloc_pool_, T_CREATE_USER, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 382:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 383:

    {
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 384:

    {
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CREATE_USER_SPEC, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 385:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 386:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 387:

    {
        merge_nodes((yyval.node), result->malloc_pool_, T_DROP_USER, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 388:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 389:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 390:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SET_PASSWORD, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 391:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SET_PASSWORD, 2, (yyvsp[(3) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 392:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 393:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 394:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_RENAME_USER, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 395:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_RENAME_INFO, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 396:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 397:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 398:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LOCK_USER, 2, (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 399:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 400:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 401:

    {
      (void)(yyval.node);
    ;}
    break;

  case 402:

    {
      (void)(yyval.node);
    ;}
    break;

  case 403:

    {
      (yyval.ival) = 1;
    ;}
    break;

  case 404:

    {
      (yyval.ival) = 0;
    ;}
    break;

  case 405:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BEGIN);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 406:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BEGIN);
      (yyval.node)->value_ = (yyvsp[(3) - (3)].ival);
    ;}
    break;

  case 407:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_COMMIT);
    ;}
    break;

  case 408:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_ROLLBACK);
    ;}
    break;

  case 409:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_KILL, 3, (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 410:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 411:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 412:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 413:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 414:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 415:

    {
      ParseNode *privileges_node = NULL;
      ParseNode *users_node = NULL;
      merge_nodes(privileges_node, result->malloc_pool_, T_PRIVILEGES, (yyvsp[(2) - (6)].node));
      merge_nodes(users_node, result->malloc_pool_, T_USERS, (yyvsp[(6) - (6)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_GRANT,
                                 3, privileges_node, (yyvsp[(4) - (6)].node), users_node);
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
      (void)(yyvsp[(2) - (2)].node);                 /* useless */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_ALL;
    ;}
    break;

  case 419:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_ALTER;
    ;}
    break;

  case 420:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_CREATE;
    ;}
    break;

  case 421:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_CREATE_USER;
    ;}
    break;

  case 422:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_DELETE;
    ;}
    break;

  case 423:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_DROP;
    ;}
    break;

  case 424:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_GRANT_OPTION;
    ;}
    break;

  case 425:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_INSERT;
    ;}
    break;

  case 426:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_UPDATE;
    ;}
    break;

  case 427:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_SELECT;
    ;}
    break;

  case 428:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_REPLACE;
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
      /* means global priv_level */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_LEVEL);
    ;}
    break;

  case 432:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_LEVEL, 1, (yyvsp[(1) - (1)].node));
    ;}
    break;

  case 433:

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

  case 434:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 435:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 436:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PREPARE, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
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

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 442:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_VARIABLE_SET, (yyvsp[(2) - (2)].node));;
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 443:

    {
      (yyval.node) = (yyvsp[(3) - (3)].node);
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
      (void)((yyvsp[(2) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 447:

    {
      (void)((yyvsp[(2) - (3)].node));
      (yyvsp[(1) - (3)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 448:

    {
      (void)((yyvsp[(3) - (4)].node));
      (yyvsp[(2) - (4)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 449:

    {
      (void)((yyvsp[(3) - (4)].node));
      (yyvsp[(2) - (4)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 450:

    {
      (void)((yyvsp[(4) - (5)].node));
      (yyvsp[(3) - (5)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 451:

    {
      (void)((yyvsp[(4) - (5)].node));
      (yyvsp[(3) - (5)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
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
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 454:

    {
      (void)((yyvsp[(2) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_ARRAY_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 455:

    { (yyval.node) = NULL; ;}
    break;

  case 456:

    { (yyval.node) = NULL; ;}
    break;

  case 457:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 458:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 459:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_ARRAY_VAL, (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 460:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 461:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 462:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXECUTE, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 463:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 464:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 465:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 466:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 467:

    {
      (void)((yyvsp[(1) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_DEALLOCATE, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 468:

    { (yyval.node) = NULL; ;}
    break;

  case 469:

    { (yyval.node) = NULL; ;}
    break;

  case 470:

    {
      ParseNode *alter_actions = NULL;
      merge_nodes(alter_actions, result->malloc_pool_, T_ALTER_ACTION_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_TABLE, 2, (yyvsp[(3) - (4)].node), alter_actions);
    ;}
    break;

  case 471:

    {
      yyerror(&(yylsp[(1) - (6)]), result, "Table rename is not supported now");
      YYABORT;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLE_RENAME, 1, (yyvsp[(6) - (6)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_ACTION_LIST, 1, (yyval.node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_TABLE, 2, (yyvsp[(3) - (6)].node), (yyval.node));
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
      (void)((yyvsp[(2) - (3)].node)); /* make bison mute */
      (yyval.node) = (yyvsp[(3) - (3)].node); /* T_COLUMN_DEFINITION */
    ;}
    break;

  case 475:

    {
      (void)((yyvsp[(2) - (4)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_DROP, 1, (yyvsp[(3) - (4)].node));
      (yyval.node)->value_ = (yyvsp[(4) - (4)].ival);
    ;}
    break;

  case 476:

    {
      (void)((yyvsp[(2) - (4)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_ALTER, 2, (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 477:

    {
      (void)((yyvsp[(2) - (5)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_RENAME, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 478:

    { (yyval.node) = NULL; ;}
    break;

  case 479:

    { (yyval.node) = NULL; ;}
    break;

  case 480:

    { (yyval.ival) = 2; ;}
    break;

  case 481:

    { (yyval.ival) = 1; ;}
    break;

  case 482:

    { (yyval.ival) = 0; ;}
    break;

  case 483:

    {
      (void)((yyvsp[(3) - (3)].node)); /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NOT_NULL);
    ;}
    break;

  case 484:

    {
      (void)((yyvsp[(3) - (3)].node)); /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NULL);
    ;}
    break;

  case 485:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 486:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_NULL);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyval.node));
    ;}
    break;

  case 487:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_SYTEM_ACTION_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_SYSTEM, 1, (yyval.node));
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
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 3, node, (yyvsp[(7) - (7)].node), (yyvsp[(3) - (7)].node));
    ;}
    break;

  case 490:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 2, node, (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 491:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 2, node, (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 492:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 493:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_FORCE);
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

  case 497:

    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 498:

    { (yyval.node) = NULL; ;}
    break;

  case 499:

    { (yyval.ival) = 0; ;}
    break;

  case 500:

    { (yyval.ival) = 1; ;}
    break;

  case 501:

    { (yyval.ival) = 2; ;}
    break;

  case 502:

    { (yyval.ival) = 2; ;}
    break;

  case 503:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 504:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 4;
    ;}
    break;

  case 505:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 506:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 3;
    ;}
    break;

  case 507:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CLUSTER, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 508:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SERVER_ADDRESS, 2, (yyvsp[(3) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 509:

    { (yyval.node) = NULL; ;}
    break;

  case 510:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 511:

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

  case 512:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 513:

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

  case 515:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 516:

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

  case 542:

    {
								malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CREATE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
							;}
    break;

  case 543:

    {
					ParseNode *params = NULL;
        			merge_nodes(params, result->malloc_pool_, T_PARAM_LIST, (yyvsp[(5) - (6)].node));
					malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECL, 2, (yyvsp[(3) - (6)].node), params);
				;}
    break;

  case 544:

    {
					ParseNode *params = NULL;
					malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECL, 2, (yyvsp[(3) - (5)].node), params);
				;}
    break;

  case 545:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
					;}
    break;

  case 546:

    {
						(yyval.node) = (yyvsp[(1) - (1)].node);
					;}
    break;

  case 547:

    {
                malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PARAM_DEFINITION, 3, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node), NULL);
					;}
    break;

  case 548:

    {
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_IN_PARAM_DEFINITION, 3, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node), NULL);
					;}
    break;

  case 549:

    {
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OUT_PARAM_DEFINITION, 3, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node), NULL);
					;}
    break;

  case 550:

    {
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_INOUT_PARAM_DEFINITION, 3, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node), NULL);
          ;}
    break;

  case 551:

    {
          ParseNode *array_flag = NULL;
          malloc_terminal_node(array_flag, result->malloc_pool_, T_BOOL);
          array_flag->value_ = 1;
          malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PARAM_DEFINITION, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), array_flag);
        ;}
    break;

  case 552:

    {
          ParseNode *array_flag = NULL;
          malloc_terminal_node(array_flag, result->malloc_pool_, T_BOOL);
          array_flag->value_ = 1;
          malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_IN_PARAM_DEFINITION, 3, (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), array_flag);
        ;}
    break;

  case 553:

    {
          ParseNode *array_flag = NULL;
          malloc_terminal_node(array_flag, result->malloc_pool_, T_BOOL);
          array_flag->value_ = 1;
          malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OUT_PARAM_DEFINITION, 3, (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), array_flag);
        ;}
    break;

  case 554:

    {
          ParseNode *array_flag = NULL;
          malloc_terminal_node(array_flag, result->malloc_pool_, T_BOOL);
          array_flag->value_ = 1;
          malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_INOUT_PARAM_DEFINITION, 3, (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), array_flag);
        ;}
    break;

  case 555:

    { 
					//malloc_non_terminal_node($$, result->malloc_pool_, T_PROCEDURE_BLOCK, 1, $2);
					(yyval.node)=(yyvsp[(2) - (3)].node);
				;}
    break;

  case 556:

    { 
					(yyval.node)=NULL;
				;}
    break;

  case 557:

    { 
        			merge_nodes((yyval.node), result->malloc_pool_, T_PROCEDURE_STMTS, (yyvsp[(1) - (1)].node));
				;}
    break;

  case 558:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
				;}
    break;

  case 559:

    {
					(yyval.node)=(yyvsp[(1) - (1)].node);
				;}
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

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
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

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 581:

    { (yyval.node) =(yyvsp[(1) - (1)].node); ;}
    break;

  case 582:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
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

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 607:

    { (yyval.node) =(yyvsp[(1) - (1)].node); ;}
    break;

  case 608:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 609:

    {
						ParseNode *args = NULL;
						merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (4)].node));
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECLARE, 4, args, (yyvsp[(3) - (4)].node), NULL, NULL);
					;}
    break;

  case 610:

    {
						ParseNode *args = NULL;
						merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (6)].node));
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECLARE, 4, args, (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node), NULL);
          ;}
    break;

  case 611:

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

  case 612:

    {
						ParseNode *var_list = NULL;
						merge_nodes(var_list, result->malloc_pool_, T_VAR_VAL_LIST, (yyvsp[(2) - (3)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ASSGIN, 1,var_list);
					;}
    break;

  case 613:

    {
						ParseNode *elsifs = NULL;
						merge_nodes(elsifs, result->malloc_pool_, T_PROCEDURE_ELSEIFS, (yyvsp[(5) - (9)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (9)].node), (yyvsp[(4) - (9)].node), elsifs ,(yyvsp[(6) - (9)].node));
					;}
    break;

  case 614:

    {
						ParseNode *elsifs = NULL;
						merge_nodes(elsifs, result->malloc_pool_, T_PROCEDURE_ELSEIFS, (yyvsp[(5) - (8)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (8)].node), (yyvsp[(4) - (8)].node), elsifs ,NULL);
					;}
    break;

  case 615:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (8)].node), (yyvsp[(4) - (8)].node), NULL ,(yyvsp[(5) - (8)].node));
					;}
    break;

  case 616:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (7)].node), (yyvsp[(4) - (7)].node), NULL ,NULL);
					;}
    break;

  case 617:

    {
						(yyval.node)=(yyvsp[(1) - (1)].node);
					;}
    break;

  case 618:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
					;}
    break;

  case 619:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ELSEIF, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
					;}
    break;

  case 620:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ELSE, 1, (yyvsp[(2) - (2)].node));
						//$$ = $2;
					;}
    break;

  case 621:

    {
						ParseNode *casewhenlist = NULL;
						merge_nodes(casewhenlist, result->malloc_pool_, T_PROCEDURE_CASE_WHEN_LIST, (yyvsp[(3) - (7)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CASE, 3, (yyvsp[(2) - (7)].node), casewhenlist, (yyvsp[(4) - (7)].node));
					;}
    break;

  case 622:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
					;}
    break;

  case 623:

    {
						(yyval.node)=(yyvsp[(1) - (1)].node);
					;}
    break;

  case 624:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CASE_WHEN, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
					;}
    break;

  case 625:

    {
						(yyval.node) = NULL;
					;}
    break;

  case 626:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ELSE, 1, (yyvsp[(2) - (2)].node));
						//$$ = $2;
					;}
    break;

  case 627:

    {
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_LOOP, 5,
                                     NULL,
                                     NULL,
                                     NULL,
                                     NULL,
                                     (yyvsp[(2) - (5)].node));
          ;}
    break;

  case 628:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_LOOP, 5,
                                       (yyvsp[(2) - (11)].node),
                                       NULL,
                                       (yyvsp[(4) - (11)].node),
                                       (yyvsp[(6) - (11)].node),
                                       (yyvsp[(8) - (11)].node));
            ;}
    break;

  case 629:

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

  case 630:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_WHILE, 2, (yyvsp[(2) - (7)].node), (yyvsp[(4) - (7)].node));
					;}
    break;

  case 631:

    {
						/* We do not bother building a node for NULL */
						(yyval.node) = NULL;
					;}
    break;

  case 632:

    {
                        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXIT, 1, NULL);
						(yyval.node)->value_=1;
					;}
    break;

  case 633:

    {
                        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXIT, 1, (yyvsp[(3) - (4)].node));//when_expr
                    ;}
    break;

  case 634:

    {
        					ParseNode *param_list = NULL;
            				merge_nodes(param_list, result->malloc_pool_, T_EXPR_LIST, (yyvsp[(4) - (6)].node));
        					
                            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXEC, 3, (yyvsp[(2) - (6)].node), param_list, (yyvsp[(6) - (6)].node));
						;}
    break;

  case 635:

    {
							ParseNode *params = NULL;
                            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXEC, 3, (yyvsp[(2) - (5)].node), params, (yyvsp[(5) - (5)].node));
                        ;}
    break;

  case 636:

    {
							malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DROP, 2, (yyvsp[(5) - (5)].node),(yyvsp[(5) - (5)].node));
						;}
    break;

  case 637:

    {
							malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DROP, 1, (yyvsp[(3) - (3)].node));
						;}
    break;

  case 638:

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

