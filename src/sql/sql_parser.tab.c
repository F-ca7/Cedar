
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
     ADD = 289,
     ANY = 290,
     ALL = 291,
     ALTER = 292,
     AS = 293,
     ASC = 294,
     BEGI = 295,
     BIGINT = 296,
     BINARY = 297,
     BOOLEAN = 298,
     BOTH = 299,
     BY = 300,
     CASCADE = 301,
     CASE = 302,
     CHARACTER = 303,
     CLUSTER = 304,
     COMMENT = 305,
     COMMIT = 306,
     CONSISTENT = 307,
     COLUMN = 308,
     COLUMNS = 309,
     CREATE = 310,
     CREATETIME = 311,
     CURRENT_USER = 312,
     CHANGE_OBI = 313,
     SWITCH_CLUSTER = 314,
     DATE = 315,
     DATETIME = 316,
     DEALLOCATE = 317,
     DECIMAL = 318,
     DEFAULT = 319,
     DELETE = 320,
     DESC = 321,
     DESCRIBE = 322,
     DISTINCT = 323,
     DOUBLE = 324,
     DROP = 325,
     DUAL = 326,
     ELSE = 327,
     END = 328,
     END_P = 329,
     ERROR = 330,
     EXECUTE = 331,
     EXISTS = 332,
     EXPLAIN = 333,
     FLOAT = 334,
     FOR = 335,
     FROM = 336,
     FULL = 337,
     FROZEN = 338,
     FORCE = 339,
     GLOBAL = 340,
     GLOBAL_ALIAS = 341,
     GRANT = 342,
     GROUP = 343,
     HAVING = 344,
     HINT_BEGIN = 345,
     HINT_END = 346,
     HOTSPOT = 347,
     IDENTIFIED = 348,
     IF = 349,
     INNER = 350,
     INTEGER = 351,
     INSERT = 352,
     INTO = 353,
     JOIN = 354,
     KEY = 355,
     LEADING = 356,
     LEFT = 357,
     LIMIT = 358,
     LOCAL = 359,
     LOCKED = 360,
     MEDIUMINT = 361,
     MEMORY = 362,
     MODIFYTIME = 363,
     MASTER = 364,
     NUMERIC = 365,
     OFFSET = 366,
     ON = 367,
     ORDER = 368,
     OPTION = 369,
     OUTER = 370,
     PARAMETERS = 371,
     PASSWORD = 372,
     PRECISION = 373,
     PREPARE = 374,
     PRIMARY = 375,
     READ_STATIC = 376,
     REAL = 377,
     RENAME = 378,
     REPLACE = 379,
     RESTRICT = 380,
     PRIVILEGES = 381,
     REVOKE = 382,
     RIGHT = 383,
     ROLLBACK = 384,
     KILL = 385,
     READ_CONSISTENCY = 386,
     SCHEMA = 387,
     SCOPE = 388,
     SELECT = 389,
     SESSION = 390,
     SESSION_ALIAS = 391,
     SET = 392,
     SHOW = 393,
     SMALLINT = 394,
     SNAPSHOT = 395,
     SPFILE = 396,
     START = 397,
     STATIC = 398,
     SYSTEM = 399,
     STRONG = 400,
     SET_MASTER_CLUSTER = 401,
     SET_SLAVE_CLUSTER = 402,
     SLAVE = 403,
     TABLE = 404,
     TABLES = 405,
     THEN = 406,
     TIME = 407,
     TIMESTAMP = 408,
     TINYINT = 409,
     TRAILING = 410,
     TRANSACTION = 411,
     TO = 412,
     UPDATE = 413,
     USER = 414,
     USING = 415,
     VALUES = 416,
     VARCHAR = 417,
     VARBINARY = 418,
     WHERE = 419,
     WHEN = 420,
     WITH = 421,
     WORK = 422,
     PROCESSLIST = 423,
     QUERY = 424,
     CONNECTION = 425,
     WEAK = 426,
     INDEX = 427,
     STORING = 428,
     AUTO_INCREMENT = 429,
     CHUNKSERVER = 430,
     COMPRESS_METHOD = 431,
     CONSISTENT_MODE = 432,
     EXPIRE_INFO = 433,
     GRANTS = 434,
     JOIN_INFO = 435,
     MERGESERVER = 436,
     REPLICA_NUM = 437,
     ROOTSERVER = 438,
     ROW_COUNT = 439,
     SERVER = 440,
     SERVER_IP = 441,
     SERVER_PORT = 442,
     SERVER_TYPE = 443,
     STATUS = 444,
     TABLE_ID = 445,
     TABLET_BLOCK_SIZE = 446,
     TABLET_MAX_SIZE = 447,
     UNLOCKED = 448,
     UPDATESERVER = 449,
     USE_BLOOM_FILTER = 450,
     VARIABLES = 451,
     VERBOSE = 452,
     WARNINGS = 453
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
#define YYFINAL  163
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2838

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  210
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  162
/* YYNRULES -- Number of rules.  */
#define YYNRULES  504
/* YYNRULES -- Number of states.  */
#define YYNSTATES  892

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   453

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    36,     2,     2,
      40,    41,    34,    32,   209,    33,    42,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   208,
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
     204,   205,   206,   207
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    12,    14,    16,    18,    20,
      22,    24,    26,    28,    30,    32,    34,    36,    38,    40,
      42,    44,    46,    48,    50,    52,    54,    56,    58,    60,
      62,    64,    65,    67,    71,    73,    77,    81,    83,    85,
      87,    89,    91,    93,    95,    97,    99,   103,   105,   107,
     111,   117,   119,   121,   123,   125,   128,   130,   133,   136,
     140,   144,   148,   152,   156,   160,   164,   166,   169,   172,
     176,   180,   184,   188,   192,   196,   200,   204,   208,   212,
     216,   220,   224,   228,   233,   237,   241,   244,   248,   253,
     257,   262,   266,   271,   277,   284,   288,   293,   297,   299,
     303,   309,   311,   312,   314,   317,   322,   325,   326,   331,
     337,   342,   349,   354,   358,   363,   365,   367,   369,   371,
     373,   375,   377,   383,   391,   393,   397,   401,   411,   415,
     418,   419,   423,   425,   429,   430,   432,   441,   445,   446,
     448,   452,   454,   460,   464,   466,   468,   470,   472,   474,
     477,   480,   482,   485,   487,   490,   493,   495,   498,   501,
     504,   507,   509,   511,   513,   516,   522,   526,   527,   531,
     532,   534,   535,   539,   540,   544,   545,   548,   549,   552,
     554,   557,   559,   562,   564,   568,   569,   573,   577,   581,
     585,   589,   593,   597,   601,   605,   609,   611,   612,   617,
     618,   621,   623,   627,   635,   640,   648,   649,   652,   654,
     656,   660,   661,   663,   667,   671,   677,   679,   683,   686,
     688,   692,   696,   698,   701,   705,   710,   716,   725,   727,
     729,   739,   744,   749,   754,   755,   758,   762,   767,   772,
     775,   778,   783,   784,   788,   790,   794,   795,   797,   800,
     802,   804,   809,   813,   816,   817,   819,   821,   823,   825,
     827,   829,   830,   832,   833,   836,   840,   845,   850,   855,
     859,   863,   867,   868,   872,   874,   875,   879,   881,   885,
     888,   889,   891,   893,   894,   897,   898,   900,   902,   904,
     907,   911,   913,   915,   919,   921,   925,   927,   931,   934,
     938,   941,   943,   949,   951,   955,   962,   968,   971,   974,
     977,   979,   981,   982,   986,   988,   990,   992,   994,   996,
     997,  1001,  1007,  1013,  1018,  1023,  1028,  1031,  1036,  1040,
    1044,  1048,  1052,  1056,  1060,  1064,  1069,  1072,  1073,  1075,
    1078,  1083,  1085,  1087,  1088,  1089,  1092,  1095,  1096,  1098,
    1099,  1101,  1105,  1107,  1111,  1116,  1118,  1120,  1124,  1126,
    1130,  1136,  1143,  1146,  1147,  1151,  1155,  1157,  1161,  1166,
    1168,  1170,  1172,  1173,  1177,  1178,  1181,  1185,  1188,  1191,
    1196,  1197,  1199,  1200,  1202,  1204,  1211,  1213,  1217,  1220,
    1222,  1224,  1227,  1229,  1231,  1234,  1236,  1238,  1240,  1242,
    1244,  1245,  1247,  1249,  1255,  1258,  1259,  1264,  1266,  1268,
    1270,  1272,  1274,  1277,  1279,  1283,  1287,  1291,  1296,  1301,
    1307,  1313,  1317,  1319,  1321,  1323,  1327,  1330,  1331,  1333,
    1337,  1341,  1343,  1345,  1350,  1357,  1359,  1363,  1367,  1372,
    1377,  1383,  1385,  1386,  1388,  1390,  1391,  1395,  1399,  1403,
    1406,  1411,  1419,  1427,  1434,  1441,  1442,  1444,  1446,  1450,
    1460,  1463,  1464,  1468,  1472,  1476,  1477,  1479,  1481,  1483,
    1485,  1489,  1496,  1497,  1499,  1501,  1503,  1505,  1507,  1509,
    1511,  1513,  1515,  1517,  1519,  1521,  1523,  1525,  1527,  1529,
    1531,  1533,  1535,  1537,  1539,  1541,  1543,  1545,  1547,  1549,
    1551,  1553,  1555,  1557,  1559
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     211,     0,    -1,   212,    83,    -1,   212,   208,   213,    -1,
     213,    -1,   267,    -1,   260,    -1,   241,    -1,   235,    -1,
     232,    -1,   231,    -1,   257,    -1,   301,    -1,   304,    -1,
     340,    -1,   343,    -1,   348,    -1,   353,    -1,   359,    -1,
     351,    -1,   311,    -1,   316,    -1,   318,    -1,   320,    -1,
     323,    -1,   333,    -1,   338,    -1,   327,    -1,   328,    -1,
     329,    -1,   330,    -1,    -1,   219,    -1,   214,   209,   219,
      -1,   367,    -1,   368,    42,   367,    -1,   368,    42,    34,
      -1,     4,    -1,     6,    -1,     5,    -1,     9,    -1,     8,
      -1,    10,    -1,    12,    -1,    14,    -1,    13,    -1,   145,
      42,   367,    -1,   215,    -1,   216,    -1,    40,   219,    41,
      -1,    40,   214,   209,   219,    41,    -1,   221,    -1,   226,
      -1,   227,    -1,   268,    -1,    86,   268,    -1,   217,    -1,
      32,   218,    -1,    33,   218,    -1,   218,    32,   218,    -1,
     218,    33,   218,    -1,   218,    34,   218,    -1,   218,    35,
     218,    -1,   218,    36,   218,    -1,   218,    38,   218,    -1,
     218,    37,   218,    -1,   217,    -1,    32,   219,    -1,    33,
     219,    -1,   219,    32,   219,    -1,   219,    33,   219,    -1,
     219,    34,   219,    -1,   219,    35,   219,    -1,   219,    36,
     219,    -1,   219,    38,   219,    -1,   219,    37,   219,    -1,
     219,    26,   219,    -1,   219,    25,   219,    -1,   219,    24,
     219,    -1,   219,    22,   219,    -1,   219,    23,   219,    -1,
     219,    21,   219,    -1,   219,    28,   219,    -1,   219,    20,
      28,   219,    -1,   219,    19,   219,    -1,   219,    18,   219,
      -1,    20,   219,    -1,   219,    31,    10,    -1,   219,    31,
      20,    10,    -1,   219,    31,     8,    -1,   219,    31,    20,
       8,    -1,   219,    31,    11,    -1,   219,    31,    20,    11,
      -1,   219,    29,   218,    19,   218,    -1,   219,    20,    29,
     218,    19,   218,    -1,   219,    30,   220,    -1,   219,    20,
      30,   220,    -1,   219,    27,   219,    -1,   268,    -1,    40,
     214,    41,    -1,    56,   222,   223,   225,    82,    -1,   219,
      -1,    -1,   224,    -1,   223,   224,    -1,   174,   219,   160,
     219,    -1,    81,   219,    -1,    -1,   369,    40,    34,    41,
      -1,   369,    40,   230,   219,    41,    -1,   369,    40,   214,
      41,    -1,   369,    40,   219,    47,   246,    41,    -1,   369,
      40,   284,    41,    -1,   369,    40,    41,    -1,   228,    40,
     229,    41,    -1,   193,    -1,   267,    -1,   260,    -1,   232,
      -1,   231,    -1,    45,    -1,    77,    -1,    74,    90,   297,
     273,   261,    -1,   167,   275,   297,   146,   233,   273,   261,
      -1,   234,    -1,   233,   209,   234,    -1,   367,    24,   219,
      -1,    64,   181,   242,   297,   121,   297,   236,   237,   239,
      -1,    40,   264,    41,    -1,   182,   238,    -1,    -1,    40,
     264,    41,    -1,   240,    -1,   239,   209,   240,    -1,    -1,
     255,    -1,    64,   158,   242,   297,    40,   243,    41,   254,
      -1,   103,    20,    86,    -1,    -1,   244,    -1,   243,   209,
     244,    -1,   245,    -1,   129,   109,    40,   264,    41,    -1,
     367,   246,   252,    -1,   163,    -1,   148,    -1,   115,    -1,
     105,    -1,    50,    -1,    72,   247,    -1,   119,   247,    -1,
      52,    -1,    88,   248,    -1,   131,    -1,    78,   249,    -1,
     162,   250,    -1,    70,    -1,    57,   251,    -1,    51,   251,
      -1,   171,   251,    -1,   172,   251,    -1,    65,    -1,   117,
      -1,    69,    -1,   161,   250,    -1,    40,     5,   209,     5,
      41,    -1,    40,     5,    41,    -1,    -1,    40,     5,    41,
      -1,    -1,   127,    -1,    -1,    40,     5,    41,    -1,    -1,
      40,     5,    41,    -1,    -1,   252,   253,    -1,    -1,    20,
      10,    -1,    10,    -1,    73,   216,    -1,   183,    -1,   129,
     109,    -1,   255,    -1,   254,   209,   255,    -1,    -1,   189,
     256,     4,    -1,   187,   256,     4,    -1,   201,   256,     5,
      -1,   200,   256,     5,    -1,   199,   256,     5,    -1,   191,
     256,     5,    -1,   185,   256,     4,    -1,   204,   256,     8,
      -1,   186,   256,   152,    -1,    59,   256,     4,    -1,    24,
      -1,    -1,    79,   158,   258,   259,    -1,    -1,   103,    86,
      -1,   296,    -1,   259,   209,   296,    -1,   262,   107,   297,
     263,   170,   265,   261,    -1,   262,   107,   297,   267,    -1,
     262,   107,   297,    40,   264,    41,   267,    -1,    -1,   174,
     219,    -1,   133,    -1,   106,    -1,    40,   264,    41,    -1,
      -1,   367,    -1,   264,   209,   367,    -1,    40,   266,    41,
      -1,   265,   209,    40,   266,    41,    -1,   219,    -1,   266,
     209,   219,    -1,   269,   261,    -1,   268,    -1,    40,   269,
      41,    -1,    40,   268,    41,    -1,   270,    -1,   272,   283,
      -1,   271,   287,   283,    -1,   271,   286,   274,   283,    -1,
     143,   275,   292,   294,   282,    -1,   143,   275,   292,   294,
      90,    80,   273,   282,    -1,   272,    -1,   268,    -1,   143,
     275,   292,   294,    90,   295,   273,   285,   291,    -1,   271,
      16,   292,   271,    -1,   271,    17,   292,   271,    -1,   271,
      15,   292,   271,    -1,    -1,   173,   219,    -1,   173,     7,
     219,    -1,   112,   281,   120,   281,    -1,   120,   281,   112,
     281,    -1,   112,   281,    -1,   120,   281,    -1,   112,   281,
     209,   281,    -1,    -1,    99,   276,   100,    -1,   277,    -1,
     276,   209,   277,    -1,    -1,   278,    -1,   277,   278,    -1,
     130,    -1,   101,    -1,   140,    40,   280,    41,    -1,    40,
     279,    41,    -1,   279,   209,    -1,    -1,   180,    -1,   154,
      -1,   152,    -1,    92,    -1,     5,    -1,    12,    -1,    -1,
     274,    -1,    -1,    89,   167,    -1,   219,    90,   219,    -1,
      53,   219,    90,   219,    -1,   110,   219,    90,   219,    -1,
     164,   219,    90,   219,    -1,    53,    90,   219,    -1,   110,
      90,   219,    -1,   164,    90,   219,    -1,    -1,    97,    54,
     214,    -1,   287,    -1,    -1,   122,    54,   288,    -1,   289,
      -1,   288,   209,   289,    -1,   219,   290,    -1,    -1,    48,
      -1,    75,    -1,    -1,    98,   219,    -1,    -1,    45,    -1,
      77,    -1,   219,    -1,   219,   370,    -1,   219,    47,   370,
      -1,    34,    -1,   293,    -1,   294,   209,   293,    -1,   296,
      -1,   295,   209,   296,    -1,   297,    -1,   297,    47,   368,
      -1,   297,   368,    -1,   268,    47,   368,    -1,   268,   368,
      -1,   298,    -1,    40,   298,    41,    47,   368,    -1,   368,
      -1,    40,   298,    41,    -1,   296,   299,   108,   296,   121,
     219,    -1,   296,   108,   296,   121,   219,    -1,    91,   300,
      -1,   111,   300,    -1,   137,   300,    -1,   104,    -1,   124,
      -1,    -1,    87,   303,   302,    -1,   267,    -1,   231,    -1,
     260,    -1,   232,    -1,   206,    -1,    -1,   147,   159,   308,
      -1,   147,    63,    90,   297,   308,    -1,   147,    63,    30,
     297,   308,    -1,   147,   158,   198,   308,    -1,   147,   194,
     198,   308,    -1,   147,   307,   205,   308,    -1,   147,   141,
      -1,   147,    64,   158,   297,    -1,    76,   297,   309,    -1,
      75,   297,   309,    -1,   147,   207,   305,    -1,   147,   226,
     207,    -1,   147,   188,   306,    -1,   147,   125,   308,    -1,
     147,   310,   177,    -1,   112,     5,   209,     5,    -1,   112,
       5,    -1,    -1,   319,    -1,    89,    66,    -1,    89,    66,
      40,    41,    -1,    94,    -1,   144,    -1,    -1,    -1,    28,
       4,    -1,   173,   219,    -1,    -1,     4,    -1,    -1,    91,
      -1,    64,   168,   312,    -1,   313,    -1,   312,   209,   313,
      -1,   314,   102,    54,   315,    -1,     4,    -1,     4,    -1,
      79,   168,   317,    -1,   314,    -1,   317,   209,   314,    -1,
     146,   126,   319,    24,   315,    -1,    46,   168,   314,   102,
      54,   315,    -1,    89,   314,    -1,    -1,   132,   168,   322,
      -1,   314,   166,   314,    -1,   321,    -1,   322,   209,   321,
      -1,    46,   168,   314,   324,    -1,   114,    -1,   202,    -1,
     176,    -1,    -1,   175,    61,   149,    -1,    -1,    49,   325,
      -1,   151,   165,   326,    -1,    60,   325,    -1,   138,   325,
      -1,   139,   331,   332,     5,    -1,    -1,    94,    -1,    -1,
     178,    -1,   179,    -1,    96,   334,   121,   337,   166,   317,
      -1,   335,    -1,   334,   209,   335,    -1,    45,   336,    -1,
      46,    -1,    64,    -1,    64,   168,    -1,    74,    -1,    79,
      -1,    96,   123,    -1,   106,    -1,   167,    -1,   143,    -1,
     133,    -1,   135,    -1,    -1,    34,    -1,   368,    -1,   136,
     334,   339,    90,   317,    -1,   121,   337,    -1,    -1,   128,
     341,    90,   342,    -1,   370,    -1,   267,    -1,   260,    -1,
     232,    -1,   231,    -1,   146,   344,    -1,   345,    -1,   344,
     209,   345,    -1,    14,   346,   219,    -1,   367,   346,   219,
      -1,    94,   367,   346,   219,    -1,   144,   367,   346,   219,
      -1,    95,    42,   367,   346,   219,    -1,   145,    42,   367,
     346,   219,    -1,    13,   346,   219,    -1,   166,    -1,    24,
      -1,    14,    -1,    85,   341,   349,    -1,   169,   350,    -1,
      -1,   347,    -1,   350,   209,   347,    -1,   352,   128,   341,
      -1,    71,    -1,    79,    -1,    46,   158,   297,   354,    -1,
      46,   158,   297,   132,   166,   297,    -1,   355,    -1,   354,
     209,   355,    -1,    43,   356,   245,    -1,    79,   356,   367,
     357,    -1,    46,   356,   367,   358,    -1,   132,   356,   367,
     166,   370,    -1,    62,    -1,    -1,    55,    -1,   134,    -1,
      -1,   146,    20,    10,    -1,    79,    20,    10,    -1,   146,
      73,   216,    -1,    79,    73,    -1,    46,   153,   146,   361,
      -1,    46,   153,   360,    67,   118,    24,     4,    -1,    46,
     153,   360,    68,   118,    24,     4,    -1,    46,   153,   155,
     118,    24,     4,    -1,    46,   153,   156,   157,    24,     4,
      -1,    -1,    93,    -1,   362,    -1,   361,   209,   362,    -1,
     367,    24,   216,   363,   364,   197,    24,   365,   366,    -1,
      59,     4,    -1,    -1,   142,    24,   116,    -1,   142,    24,
     150,    -1,   142,    24,    53,    -1,    -1,   192,    -1,   203,
      -1,   184,    -1,   190,    -1,    58,    24,     5,    -1,   195,
      24,     4,   196,    24,     5,    -1,    -1,     3,    -1,   371,
      -1,     3,    -1,   371,    -1,     3,    -1,     3,    -1,   371,
      -1,   183,    -1,   184,    -1,   185,    -1,   186,    -1,   187,
      -1,   188,    -1,   189,    -1,   190,    -1,   191,    -1,   192,
      -1,   193,    -1,   194,    -1,   195,    -1,   196,    -1,   197,
      -1,   198,    -1,   200,    -1,   199,    -1,   201,    -1,   202,
      -1,   203,    -1,   204,    -1,   205,    -1,   206,    -1,   207,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   226,   226,   235,   242,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   285,   289,   296,   298,   304,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   326,   328,   330,
     332,   338,   346,   350,   354,   358,   366,   367,   371,   375,
     376,   377,   378,   379,   380,   381,   384,   385,   389,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   412,   416,   420,   424,   428,
     432,   436,   440,   444,   448,   452,   456,   460,   467,   471,
     476,   484,   485,   489,   491,   496,   503,   504,   508,   522,
     550,   625,   641,   645,   667,   675,   682,   683,   684,   685,
     689,   693,   707,   721,   731,   735,   742,   756,   772,   779,
     785,   791,   798,   802,   807,   813,   827,   844,   847,   851,
     855,   862,   866,   875,   884,   886,   888,   890,   892,   894,
     903,   912,   914,   916,   918,   923,   930,   932,   939,   946,
     953,   960,   962,   964,   970,   982,   984,   987,   991,   992,
     996,   997,  1001,  1002,  1006,  1007,  1011,  1014,  1018,  1023,
    1028,  1030,  1032,  1037,  1041,  1046,  1052,  1057,  1062,  1067,
    1072,  1077,  1082,  1087,  1092,  1098,  1106,  1107,  1118,  1128,
    1129,  1134,  1138,  1151,  1165,  1176,  1194,  1195,  1202,  1207,
    1215,  1220,  1224,  1225,  1232,  1236,  1242,  1243,  1257,  1267,
    1272,  1273,  1277,  1281,  1286,  1296,  1317,  1339,  1365,  1366,
    1370,  1396,  1418,  1440,  1466,  1467,  1471,  1478,  1486,  1494,
    1498,  1502,  1514,  1517,  1531,  1535,  1540,  1546,  1550,  1557,
    1561,  1565,  1570,  1577,  1582,  1588,  1592,  1596,  1600,  1606,
    1608,  1614,  1615,  1621,  1622,  1630,  1637,  1644,  1651,  1658,
    1669,  1680,  1695,  1696,  1703,  1704,  1708,  1715,  1717,  1722,
    1730,  1731,  1733,  1739,  1740,  1748,  1751,  1755,  1762,  1767,
    1775,  1783,  1793,  1797,  1804,  1806,  1811,  1815,  1819,  1823,
    1827,  1831,  1835,  1844,  1852,  1856,  1860,  1869,  1875,  1881,
    1887,  1894,  1895,  1905,  1913,  1914,  1915,  1916,  1920,  1921,
    1931,  1933,  1935,  1937,  1939,  1941,  1946,  1948,  1950,  1952,
    1954,  1958,  1971,  1975,  1979,  1987,  1996,  2006,  2010,  2012,
    2014,  2019,  2020,  2021,  2026,  2027,  2029,  2035,  2036,  2041,
    2042,  2051,  2057,  2061,  2067,  2073,  2079,  2091,  2097,  2101,
    2113,  2117,  2123,  2128,  2138,  2144,  2150,  2154,  2165,  2171,
    2176,  2189,  2194,  2198,  2203,  2207,  2213,  2224,  2236,  2248,
    2255,  2259,  2267,  2271,  2276,  2290,  2301,  2305,  2311,  2317,
    2322,  2327,  2332,  2337,  2342,  2347,  2352,  2357,  2362,  2369,
    2374,  2379,  2384,  2395,  2435,  2440,  2451,  2458,  2463,  2465,
    2467,  2469,  2480,  2488,  2492,  2499,  2505,  2512,  2519,  2526,
    2533,  2540,  2549,  2550,  2554,  2565,  2572,  2577,  2582,  2586,
    2599,  2607,  2609,  2620,  2626,  2637,  2641,  2648,  2653,  2659,
    2664,  2673,  2674,  2678,  2679,  2680,  2684,  2689,  2694,  2698,
    2712,  2718,  2725,  2732,  2739,  2749,  2752,  2760,  2764,  2771,
    2786,  2789,  2793,  2795,  2797,  2800,  2804,  2809,  2814,  2819,
    2827,  2831,  2836,  2847,  2849,  2866,  2868,  2885,  2889,  2891,
    2904,  2905,  2906,  2907,  2908,  2909,  2910,  2911,  2912,  2913,
    2914,  2915,  2916,  2917,  2918,  2919,  2920,  2921,  2922,  2923,
    2924,  2925,  2926,  2927,  2928
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
  "'/'", "'%'", "MOD", "'^'", "UMINUS", "'('", "')'", "'.'", "ADD", "ANY",
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
  "WITH", "WORK", "PROCESSLIST", "QUERY", "CONNECTION", "WEAK", "INDEX",
  "STORING", "AUTO_INCREMENT", "CHUNKSERVER", "COMPRESS_METHOD",
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
  "create_table_stmt", "opt_if_not_exists", "table_element_list",
  "table_element", "column_definition", "data_type", "opt_decimal",
  "opt_float", "opt_precision", "opt_time_precision", "opt_char_length",
  "opt_column_attribute_list", "column_attribute", "opt_table_option_list",
  "table_option", "opt_equal_mark", "drop_table_stmt", "opt_if_exists",
  "table_list", "insert_stmt", "opt_when", "replace_or_insert",
  "opt_insert_columns", "column_list", "insert_vals_list", "insert_vals",
  "select_stmt", "select_with_parens", "select_no_parens",
  "no_table_select", "select_clause", "simple_select", "opt_where",
  "select_limit", "opt_hint", "opt_hint_list", "hint_options",
  "hint_option", "opt_comma_list", "consistency_level", "limit_expr",
  "opt_select_limit", "opt_for_update", "parameterized_trim",
  "opt_groupby", "opt_order_by", "order_by", "sort_list", "sort_key",
  "opt_asc_desc", "opt_having", "opt_distinct", "projection",
  "select_expr_list", "from_list", "table_factor", "relation_factor",
  "joined_table", "join_type", "join_outer", "explain_stmt",
  "explainable_stmt", "opt_verbose", "show_stmt", "opt_limit",
  "opt_for_grant_user", "opt_scope", "opt_show_condition",
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
  "function_name", "column_label", "unreserved_keyword", 0
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
     446,   447,   448,   449,   450,   451,   452,   453,    59,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   210,   211,   212,   212,   213,   213,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   214,   214,   215,   215,   215,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   220,   220,
     221,   222,   222,   223,   223,   224,   225,   225,   226,   226,
     226,   226,   226,   226,   227,   228,   229,   229,   229,   229,
     230,   230,   231,   232,   233,   233,   234,   235,   236,   237,
     237,   238,   239,   239,   239,   240,   241,   242,   242,   243,
     243,   244,   244,   245,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   247,   247,   247,   248,   248,
     249,   249,   250,   250,   251,   251,   252,   252,   253,   253,
     253,   253,   253,   254,   254,   254,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   256,   256,   257,   258,
     258,   259,   259,   260,   260,   260,   261,   261,   262,   262,
     263,   263,   264,   264,   265,   265,   266,   266,   267,   267,
     268,   268,   269,   269,   269,   269,   270,   270,   271,   271,
     272,   272,   272,   272,   273,   273,   273,   274,   274,   274,
     274,   274,   275,   275,   276,   276,   276,   277,   277,   278,
     278,   278,   278,   279,   279,   280,   280,   280,   280,   281,
     281,   282,   282,   283,   283,   284,   284,   284,   284,   284,
     284,   284,   285,   285,   286,   286,   287,   288,   288,   289,
     290,   290,   290,   291,   291,   292,   292,   292,   293,   293,
     293,   293,   294,   294,   295,   295,   296,   296,   296,   296,
     296,   296,   296,   297,   298,   298,   298,   299,   299,   299,
     299,   300,   300,   301,   302,   302,   302,   302,   303,   303,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   305,   305,   305,   306,   306,
     306,   307,   307,   307,   308,   308,   308,   309,   309,   310,
     310,   311,   312,   312,   313,   314,   315,   316,   317,   317,
     318,   318,   319,   319,   320,   321,   322,   322,   323,   324,
     324,   325,   325,   326,   326,   327,   327,   328,   329,   330,
     331,   331,   332,   332,   332,   333,   334,   334,   335,   335,
     335,   335,   335,   335,   335,   335,   335,   335,   335,   336,
     336,   337,   337,   338,   339,   339,   340,   341,   342,   342,
     342,   342,   343,   344,   344,   345,   345,   345,   345,   345,
     345,   345,   346,   346,   347,   348,   349,   349,   350,   350,
     351,   352,   352,   353,   353,   354,   354,   355,   355,   355,
     355,   356,   356,   357,   357,   357,   358,   358,   358,   358,
     359,   359,   359,   359,   359,   360,   360,   361,   361,   362,
     363,   363,   364,   364,   364,   364,   365,   365,   365,   365,
     366,   366,   366,   367,   367,   368,   368,   369,   370,   370,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     3,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     3,
       5,     1,     1,     1,     1,     2,     1,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     1,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     4,     3,     3,     2,     3,     4,     3,
       4,     3,     4,     5,     6,     3,     4,     3,     1,     3,
       5,     1,     0,     1,     2,     4,     2,     0,     4,     5,
       4,     6,     4,     3,     4,     1,     1,     1,     1,     1,
       1,     1,     5,     7,     1,     3,     3,     9,     3,     2,
       0,     3,     1,     3,     0,     1,     8,     3,     0,     1,
       3,     1,     5,     3,     1,     1,     1,     1,     1,     2,
       2,     1,     2,     1,     2,     2,     1,     2,     2,     2,
       2,     1,     1,     1,     2,     5,     3,     0,     3,     0,
       1,     0,     3,     0,     3,     0,     2,     0,     2,     1,
       2,     1,     2,     1,     3,     0,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     0,     4,     0,
       2,     1,     3,     7,     4,     7,     0,     2,     1,     1,
       3,     0,     1,     3,     3,     5,     1,     3,     2,     1,
       3,     3,     1,     2,     3,     4,     5,     8,     1,     1,
       9,     4,     4,     4,     0,     2,     3,     4,     4,     2,
       2,     4,     0,     3,     1,     3,     0,     1,     2,     1,
       1,     4,     3,     2,     0,     1,     1,     1,     1,     1,
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
       1,     1,     2,     1,     3,     3,     3,     4,     4,     5,
       5,     3,     1,     1,     1,     3,     2,     0,     1,     3,
       3,     1,     1,     4,     6,     1,     3,     3,     4,     4,
       5,     1,     0,     1,     1,     0,     3,     3,     3,     2,
       4,     7,     7,     6,     6,     0,     1,     1,     3,     9,
       2,     0,     3,     3,     3,     0,     1,     1,     1,     1,
       3,     6,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      31,     0,     0,   372,   372,     0,   431,     0,     0,     0,
     432,     0,   319,     0,   209,     0,     0,   208,     0,   372,
     380,   242,     0,   343,     0,   242,     0,     0,     4,    10,
       9,     8,     7,    11,     6,     0,     5,   229,   206,   222,
     275,   228,    12,    13,    20,    21,    22,    23,    24,    27,
      28,    29,    30,    25,    26,    14,    15,    16,    19,     0,
      17,    18,   229,     0,   455,     0,     0,   371,   375,   377,
     138,     0,   138,     0,   475,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   497,   496,   498,   499,   500,   501,   502,   503,   504,
     347,   303,   476,   347,   199,     0,   478,   427,   407,   479,
     318,     0,   400,   389,   390,   392,   393,     0,   395,   398,
     397,   396,     0,   386,     0,     0,   405,   378,   381,   382,
     246,   285,   473,     0,     0,     0,     0,   363,     0,     0,
     412,   413,     0,   474,   477,     0,     0,   350,   341,   344,
     326,   342,     0,   344,   363,     0,   337,     0,     0,     0,
       0,   374,     0,     1,     2,    31,     0,     0,   218,   285,
     285,   285,     0,     0,   263,     0,   223,     0,   221,   220,
     456,     0,     0,     0,     0,     0,   355,     0,     0,     0,
     351,   352,     0,     0,   234,   348,   329,   328,     0,     0,
     358,   357,     0,   425,   315,   317,   316,   314,   313,   399,
     388,   391,   394,     0,     0,     0,     0,   366,   364,     0,
       0,   383,   384,     0,   254,   250,   249,     0,     0,   244,
     247,   286,   287,     0,   423,   422,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   333,   344,   320,     0,   332,   338,   344,     0,   330,
     331,   344,   334,     0,     0,   376,     0,     3,   211,   473,
      37,    39,    38,    41,    40,    42,    43,    45,    44,     0,
       0,     0,     0,   102,     0,     0,   490,    47,    48,    66,
     207,    51,    52,    53,     0,    54,    34,     0,   474,     0,
       0,     0,     0,     0,     0,   263,   224,   264,   430,   450,
     457,     0,     0,     0,     0,     0,   442,   442,   442,   442,
     433,   435,     0,   369,   370,   368,     0,     0,     0,     0,
       0,     0,   206,   200,     0,   198,     0,   201,   296,   301,
       0,   424,   428,   426,   401,     0,   402,   387,   411,   410,
     409,   408,   406,     0,     0,   404,     0,   379,     0,     0,
     243,     0,   248,   291,   288,   292,   261,   421,   415,     0,
       0,   362,     0,     0,     0,   414,   416,   344,   344,   327,
     345,   346,   323,   339,   324,   336,   325,     0,   113,   120,
       0,   121,     0,     0,     0,    32,     0,     0,     0,     0,
       0,     0,   204,    86,    67,    68,     0,    32,    54,   101,
       0,    55,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   242,   229,   233,   228,
     231,   232,   280,   276,   277,   259,   260,   239,   240,   225,
       0,     0,     0,     0,     0,     0,   441,     0,     0,     0,
       0,     0,     0,     0,   137,     0,   353,     0,     0,     0,
     235,   122,   229,     0,   301,     0,     0,   300,   312,   310,
       0,   312,   312,     0,     0,   298,   359,     0,     0,   365,
     367,   403,   252,   253,   258,   257,   256,   255,     0,   245,
       0,   289,     0,     0,   262,   226,   417,     0,   356,   360,
     418,     0,   322,   321,     0,     0,   108,     0,     0,     0,
       0,     0,     0,   110,     0,     0,     0,     0,   112,   373,
     234,   124,     0,     0,   212,     0,     0,    49,     0,   107,
     103,    46,    85,    84,     0,     0,     0,    81,    79,    80,
      78,    77,    76,    97,    82,     0,     0,    56,     0,     0,
      95,    98,    89,    87,    91,     0,    69,    70,    71,    72,
      73,    75,    74,     0,   119,   118,   117,   116,    36,    35,
     285,   281,   282,   279,     0,     0,     0,     0,   458,   461,
     453,   454,     0,     0,   437,     0,     0,   445,   434,     0,
     442,   436,   361,     0,     0,   139,   141,   354,     0,   236,
     304,   202,   299,   311,   307,     0,   308,   309,     0,   297,
     429,   385,   251,   290,   234,   234,   294,   293,   419,   420,
     340,   335,   269,     0,   270,     0,   271,     0,    33,   148,
     175,   151,   175,   161,   163,   156,   167,   171,   169,   147,
     146,   162,   167,   153,   145,   173,   173,   144,   175,   175,
       0,   265,   109,     0,   206,     0,   210,     0,     0,   206,
      33,     0,     0,   104,     0,    83,     0,    96,    57,    58,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    32,
      90,    88,    92,   114,     0,   278,   237,   241,   238,     0,
     465,   451,   452,   177,     0,     0,   439,   443,   444,   438,
       0,     0,   185,     0,     0,   130,     0,     0,     0,   261,
       0,   272,   266,   267,   268,     0,   158,   157,     0,   149,
     170,   154,     0,   152,   150,     0,   164,   155,   159,   160,
     111,   125,   123,   126,   205,   213,   216,     0,     0,   203,
      50,     0,   106,   100,     0,    93,    59,    60,    61,    62,
      63,    65,    64,    99,     0,   460,     0,     0,   143,     0,
     449,     0,     0,   440,     0,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   136,   183,   140,     0,     0,
     134,   302,   306,     0,   227,   295,     0,   283,     0,     0,
       0,     0,   214,     0,     0,   105,    94,     0,     0,     0,
     179,     0,     0,     0,   181,   176,   447,   446,   448,     0,
     196,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   128,     0,   129,   127,   132,   135,   305,     0,
       0,   230,   174,   166,     0,   168,   172,   217,     0,   464,
     462,   463,     0,   178,   180,   182,   142,   195,   192,   194,
     187,   186,   191,   190,   189,   188,   193,   184,     0,     0,
     273,   284,     0,   215,   468,   469,   466,   467,   472,   131,
     133,   165,     0,     0,   459,     0,     0,   470,     0,     0,
       0,   471
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    26,    27,    28,   394,   287,   288,   289,   558,   364,
     560,   291,   410,   539,   540,   674,   292,   293,   294,   573,
     396,    29,    30,   530,   531,    31,   715,   790,   834,   835,
     836,    32,   189,   604,   605,   606,   660,   729,   733,   731,
     736,   726,   768,   815,   785,   837,   821,    33,   199,   335,
      34,   168,    35,   401,   533,   669,   747,    36,   295,    38,
      39,    40,    41,   332,   504,   131,   228,   229,   230,   358,
     498,   447,   505,   176,   397,   797,   173,   174,   443,   444,
     583,   841,   233,   365,   366,   625,   626,   338,   339,   483,
     614,    42,   208,   111,    43,   259,   255,   158,   251,   196,
     159,    44,   190,   191,   200,   509,    45,   201,    46,   241,
      47,   217,   218,    48,   325,    68,   265,    49,    50,    51,
      52,   129,   223,    53,   122,   123,   210,   345,    54,   220,
      55,   107,   352,    56,   140,   141,   236,   342,    57,   203,
     343,    58,    59,    60,   320,   321,   461,   709,   706,    61,
     184,   309,   310,   700,   767,   878,   884,   296,   297,   160,
     108,   298
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -646
static const yytype_int16 yypact[] =
{
    2409,    -3,   100,  -114,  -114,   106,  -646,    28,  2174,  2174,
     101,  2212,  -138,   706,  -646,  2212,   -97,  -646,   706,  -114,
     151,    14,  1830,   650,   -16,    14,   234,   -25,  -646,  -646,
    -646,  -646,  -646,  -646,  -646,   147,  -646,   -11,    96,  -646,
     119,   -13,  -646,  -646,  -646,  -646,  -646,  -646,  -646,  -646,
    -646,  -646,  -646,  -646,  -646,  -646,  -646,  -646,  -646,   144,
    -646,  -646,   243,   256,   -24,  2174,   298,  -646,  -646,  -646,
     216,   298,   216,  2174,  -646,  -646,  -646,  -646,  -646,  -646,
    -646,  -646,  -646,  -646,  -646,  -646,  -646,  -646,  -646,  -646,
    -646,  -646,  -646,  -646,  -646,  -646,  -646,  -646,  -646,  -646,
     318,  -646,  -646,   318,   220,   298,  -646,   156,  -646,  -646,
    -646,    37,   197,  -646,   165,  -646,  -646,   227,  -646,  -646,
    -646,  -646,   -22,  -646,   264,   298,    -6,  -646,  -646,   -41,
      54,   202,  -646,    10,    10,  2240,   320,   280,  2240,   330,
     162,  -646,    10,  -646,  -646,    49,   226,  -646,  -646,    27,
    -646,  -646,   187,    27,   300,   195,   284,   190,   201,   246,
     367,   250,  2174,  -646,  -646,  2409,  2174,  1715,  -646,   202,
     202,   202,   372,   176,   161,   262,  -646,  2212,  -646,  -646,
    -646,  2240,   312,   287,    24,    35,  -646,     5,   418,  2174,
     237,  -646,   356,  2174,   286,  -646,  -646,  -646,   375,  1969,
    -646,   254,   452,  -646,  -646,  -646,  -646,  -646,  -646,  -646,
    -646,  -646,  -646,   428,   706,    37,   299,  -646,   266,   428,
     381,  -646,  -646,   468,  -646,  -646,  -646,   438,   -57,    54,
    -646,  -646,  -646,  1093,  -646,  -646,  1715,  1715,    10,  2240,
     298,   467,    10,  2240,  1863,  1715,  2174,  2174,  2174,   489,
    1715,  -646,    27,  -646,   214,  -646,  -646,    27,   498,  -646,
    -646,    27,  -646,   876,   443,  -646,   365,  -646,    21,   378,
    -646,  -646,  -646,  -646,  -646,  -646,  -646,  -646,  -646,  1715,
    1715,  1715,  1177,  1715,   472,   471,   475,  -646,  -646,  -646,
    2780,  -646,  -646,  -646,   476,  -646,  -646,   477,   479,    23,
      23,    23,  1715,   281,   281,   429,  -646,  -646,  -646,   308,
    -646,   499,   500,   502,   404,   409,   466,   466,   466,    22,
     322,  -646,   487,  -646,  -646,  -646,   456,   505,   298,   492,
     408,  1299,    96,  -646,  1928,   339,  1469,   311,  2098,  -646,
     298,  -646,  -646,   340,  -646,   384,  -646,  -646,  -646,  -646,
    -646,  -646,  -646,   298,   298,  -646,   298,  -646,   -19,   140,
    -646,    54,  -646,  -646,   970,  -646,   -37,  2780,  2780,  1715,
      10,  -646,   547,  1715,    10,  -646,  2780,    27,    27,  -646,
    -646,  2780,  -646,   513,  -646,   345,  -646,   514,  -646,  -646,
    1383,  -646,  1505,  1593,    -1,  1224,  1715,   515,   410,  2240,
    2035,   391,  -646,  2679,  -646,  -646,   355,  2708,   283,  2780,
     392,  -646,  2240,  1715,  1715,   426,  1715,  1715,  1715,  1715,
    1715,  1715,  1715,  1715,  1799,   527,   329,  1715,  1715,  1715,
    1715,  1715,  1715,  1715,    37,  2007,    14,  -646,   551,  -646,
     551,  -646,  2650,   360,  -646,  -646,  -646,   -56,   473,  -646,
    2240,    92,   601,   602,   584,   612,  -646,  2240,  2240,  2240,
    2174,  2240,    42,   547,  -646,  2148,  -646,   547,  2174,  1715,
    2780,  -646,  1893,   311,   596,  1969,  2174,  -646,   516,  -646,
    1969,   516,   516,   531,  2174,  -646,  -646,   452,   298,  -646,
    -646,   254,  -646,  -646,  -646,  -646,  -646,  -646,   600,    54,
    2212,  -646,  2069,  1093,  -646,  -646,  2780,  1715,  -646,  -646,
    2780,  1715,  -646,  -646,   603,   637,  -646,  1715,  1430,  1715,
    2607,  1715,  2628,  -646,  1715,  2452,  1715,  2732,  -646,  -646,
    -100,  -646,   619,     0,  -646,   606,  1715,  -646,  1715,   -15,
    -646,  -646,  2800,  2679,  1715,  1799,   527,   565,   565,   565,
     565,   565,   565,   636,   451,  1799,  1799,  -646,   539,  1177,
    -646,  -646,  -646,  -646,  -646,   347,   376,   376,   609,   609,
     609,   609,  -646,   610,  -646,  -646,  -646,  -646,  -646,  -646,
     202,  -646,  -646,  -646,  1715,   281,   281,   281,  -646,   591,
    -646,  -646,   648,   652,  -646,  2452,    47,    55,  -646,   488,
     466,  -646,  -646,   548,     3,  -646,  -646,  -646,   618,  2780,
     613,   311,  -646,  -646,  -646,   230,  -646,  -646,  1969,  -646,
    -646,   254,  -646,  -646,   286,   -93,   311,  -646,  2780,  2780,
    -646,  -646,  2780,  1715,  2780,  1715,  2780,  1715,  2780,  -646,
     621,  -646,   621,  -646,  -646,  -646,   622,   550,   635,  -646,
    -646,  -646,   622,  -646,  -646,   638,   638,  -646,   621,   621,
     649,  2780,  -646,  2240,    96,  1715,    -3,  2240,  1715,   -84,
    2756,  2288,  1715,  -646,   597,   451,   546,  -646,  -646,  -646,
    1799,  1799,  1799,  1799,  1799,  1799,  1799,  1799,     7,  2780,
    -646,  -646,  -646,  -646,  1093,  -646,  -646,  -646,  -646,   687,
     552,  -646,  -646,  -646,   157,   222,  -646,  -646,  -646,  -646,
    2212,   653,   174,  2148,  2240,   510,  2174,  1715,   279,   176,
    1969,   604,  2780,  2780,  2780,   693,  -646,  -646,   699,  -646,
    -646,  -646,   702,  -646,  -646,   704,  -646,  -646,  -646,  -646,
    -646,  -646,  -646,  2780,  -646,  -646,  2780,     8,   670,  -646,
    -646,  1715,  2780,  -646,  1799,   725,   399,   399,   677,   677,
     677,   677,  -646,  -646,   -61,  -646,   692,   520,    16,   708,
    -646,   709,    92,  -646,  2240,   698,   698,   698,   698,   698,
     698,   698,   698,   698,   698,   522,  -646,  -646,    11,   703,
     174,  -646,  2780,  1715,  -646,   311,   678,   644,   707,    13,
     712,   713,  -646,  1715,  1715,  2780,   725,  1969,    98,   721,
    -646,   723,    92,   640,  -646,  -646,  -646,  -646,  -646,    15,
    -646,   743,   751,   615,   760,   764,   766,   767,   768,   769,
     761,   174,  -646,  2240,  -646,   568,  -646,  -646,  2780,  1715,
    1715,  -646,  -646,  -646,   773,  -646,  -646,  2780,    18,  -646,
    -646,  -646,   196,  -646,  -646,  -646,  -646,  -646,  -646,  -646,
    -646,  -646,  -646,  -646,  -646,  -646,  -646,  -646,    19,   174,
     570,  2780,   740,  -646,  -646,  -646,  -646,  -646,   -35,  -646,
    -646,  -646,   758,   759,  -646,   779,   782,  -646,   592,   763,
     784,  -646
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -646,  -646,  -646,   625,  -277,  -646,  -436,  -377,  -147,   307,
     247,  -646,  -646,  -646,   253,  -646,   772,  -646,  -646,  -646,
    -646,   -92,   -91,  -646,   133,  -646,  -646,  -646,  -646,  -646,
     -72,  -646,   726,  -646,    87,   344,   209,   153,  -646,  -646,
     150,  -396,  -646,  -646,  -646,  -645,   -95,  -646,  -646,  -646,
     -87,  -316,  -646,  -646,  -627,  -646,     6,  -103,    45,     1,
    -646,   200,   208,  -373,   630,   -12,  -646,   446,  -208,  -646,
    -646,  -269,    94,  -143,  -646,  -646,  -646,  -646,  -646,   232,
    -646,  -646,  -159,   314,   117,  -646,  -190,     9,   485,  -646,
    -170,  -646,  -646,  -646,  -646,  -646,  -646,  -646,  -111,   717,
    -646,  -646,  -646,   493,   -39,  -192,  -646,  -306,  -646,   668,
    -646,   469,  -646,  -646,  -646,    89,  -646,  -646,  -646,  -646,
    -646,  -646,  -646,  -646,   811,   616,  -646,   617,  -646,  -646,
    -646,    36,  -646,  -646,  -646,   588,  -109,   348,  -646,  -646,
    -646,  -646,  -646,  -646,  -646,   379,   179,  -646,  -646,  -646,
    -646,  -646,   390,  -646,  -646,  -646,  -646,   -18,    30,  -646,
    -358,    -8
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -478
static const yytype_int16 yytable[] =
{
     102,   102,    63,   109,   142,   406,   501,   109,   207,   337,
     299,   300,   301,   162,   143,   589,   471,   100,   103,   204,
     205,   362,   492,   882,   206,   237,   810,   187,  -263,   807,
    -219,   306,   192,   245,   234,   448,   811,     1,   101,   101,
     523,   666,   253,   360,   712,    37,    62,   557,   763,   802,
     491,   124,   832,   502,   843,   249,   856,   102,   164,   873,
     879,   400,    67,     1,   585,   102,   672,   786,   110,   180,
    -263,   125,  -219,   331,   185,   303,   175,     1,   316,   246,
     331,   317,   194,   304,   456,   316,   216,   788,   317,   812,
     167,   314,   315,    69,   224,   101,   270,   271,   272,   213,
     273,   274,   275,   101,   276,   277,   278,   322,   127,   663,
     707,     7,   351,   130,   318,   219,   720,   238,    73,   323,
     242,   318,   181,   348,   349,   748,   704,   143,   350,   369,
     143,   182,   183,   373,   169,   170,   171,   221,   222,   247,
      21,   382,   623,    14,   473,   813,   384,   819,   503,   161,
     386,   849,   361,   586,   102,   225,    37,   664,   102,   538,
     883,  -263,   449,   311,    21,   402,   436,   319,   557,   109,
      17,   266,   503,   143,   600,   268,   235,   769,   557,   557,
      21,   102,   621,   165,   226,   102,   867,   214,   460,   708,
     493,   102,   101,   705,   227,  -263,   101,  -219,   327,   814,
     250,   371,   330,   214,    25,   102,   868,   324,   524,   667,
      37,   102,   713,   308,   850,   371,   524,   803,   186,   101,
     667,   370,   844,   101,   667,   374,   142,   803,   667,   101,
     770,   143,   494,   775,   163,   143,   143,   285,   102,   102,
     102,   172,   771,   346,   336,   128,   727,   231,   851,   346,
     175,   719,   721,    64,   166,   377,   378,   379,    65,   104,
      37,   507,   738,   739,    70,   511,   512,   513,    66,   105,
     167,   602,   177,  -274,    71,   607,   101,   101,   101,   232,
     383,  -274,   688,    63,   178,   611,   445,    72,   303,   192,
     615,   362,   495,   446,   496,   772,   304,   179,  -229,  -229,
    -229,   486,   186,   557,   557,   557,   557,   557,   557,   557,
     557,   616,   617,    37,   489,   216,   696,   697,   698,   188,
     497,   478,   195,   198,   178,   202,   102,   408,   102,   411,
     102,   577,   209,   211,   479,    63,   818,   562,   480,   563,
     564,   481,   574,   575,   437,   437,   437,   576,   742,   565,
     212,   717,   773,   749,   215,   690,   109,   691,   692,   776,
     777,   778,   239,   779,   101,   780,   477,   482,   485,   240,
     478,   244,   243,   781,   782,   783,   854,   557,   784,   472,
     874,   532,   534,   479,   248,   252,   875,   480,   876,   254,
     481,   143,   143,   257,   541,  -229,   258,   260,   676,   877,
     793,    63,   478,  -229,   143,  -229,   261,   263,   678,   679,
     429,   430,   431,   432,   433,   479,   482,   579,  -477,   480,
    -475,   694,   481,   262,   580,   264,   302,   143,   718,   307,
     312,    74,   311,   683,   684,   685,   686,   687,   326,   595,
     596,   597,   143,   599,   313,    62,   328,   595,   482,   143,
     143,   143,   102,   143,   544,   545,   546,   143,   329,   331,
     102,   333,   344,   340,   102,   353,   341,   102,   102,   598,
     561,   356,   102,   357,   290,   354,   102,   608,   359,    37,
     424,   425,   426,   427,   428,   429,   430,   431,   432,   433,
     101,   372,   109,   380,   102,   457,   458,   459,   101,   438,
     440,   441,   477,   385,   398,   101,   612,   439,   439,   439,
     101,   399,     1,   412,   619,  -115,   434,   450,   175,   435,
     336,  -476,   454,   451,   452,   336,   453,   455,   456,   468,
     795,   462,   101,   755,   756,   757,   758,   759,   760,   761,
     762,   463,   464,   367,   368,   465,   467,   336,   475,   487,
     488,   508,   376,   514,   515,   516,   528,   381,   680,   529,
      63,   535,   870,   744,   536,   754,   538,   559,   171,   584,
     395,   681,   682,   683,   684,   685,   686,   687,   681,   682,
     683,   684,   685,   686,   687,   587,   403,   404,   405,   407,
     409,   561,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,   432,   433,   408,   590,   591,   806,   592,   442,
     102,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   593,   610,   470,   618,
     613,   622,   631,   665,   630,   532,   668,   433,   101,   745,
     699,   693,   701,   144,   710,   143,   702,   711,   714,   143,
     716,   725,   728,   336,   423,   424,   425,   426,   427,   428,
     429,   430,   431,   432,   433,   732,   506,   730,   735,   753,
     510,   822,   823,   824,   825,   826,   827,   828,   829,   830,
     740,   765,   789,   774,   766,   595,   534,   518,   798,   520,
     522,   796,   109,   527,   799,   143,   143,   800,   102,   801,
     804,    37,   102,   145,   146,   687,   808,   809,   816,   817,
     542,   543,   820,   547,   548,   549,   550,   551,   552,   553,
     554,   831,   839,   853,   566,   567,   568,   569,   570,   571,
     572,   147,   840,   833,   148,   852,   791,   857,   842,   855,
     101,   112,   113,   845,   846,   858,   534,   681,   682,   683,
     684,   685,   686,   687,   860,   336,   143,   859,   861,   866,
     114,   862,   863,   864,   865,   149,   609,   869,   872,   524,
     115,   881,   885,   886,   887,   116,   888,   890,   889,   891,
     267,   150,   673,   677,   151,   157,   741,   880,   193,   102,
     787,   594,   117,   305,   703,   734,   737,   499,   152,   153,
     848,   764,   118,   794,   628,   534,   695,   627,   629,   474,
     197,   466,   256,   490,   632,   143,   634,  -349,   636,   126,
     347,   638,   375,   661,     0,   620,   355,   101,   154,   119,
     588,   601,     0,   670,   155,   671,     0,     0,     0,   120,
       0,   675,   336,     0,     0,     0,     0,   156,     0,     0,
       0,     0,     0,     0,     0,     0,   689,     0,     0,     0,
       0,     0,     0,   121,     0,     0,     0,     0,     0,   269,
     270,   271,   272,     0,   273,   274,   275,     0,   276,   277,
     278,   442,     0,     0,     0,     0,   279,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   280,   281,
     387,     0,     0,     0,     0,     0,   282,   388,     0,     0,
       0,   389,     0,     0,     0,     0,     0,     0,     0,   390,
       0,     0,   283,     0,     0,     0,     0,     0,     0,     0,
     722,     0,   723,     0,   724,     0,     0,     0,     0,     0,
       0,     0,     0,   391,     0,     0,     0,     0,     0,     0,
       0,     0,   284,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   743,   106,     0,   746,     0,     0,     0,   752,
       0,     0,     0,     0,     0,     0,   392,     0,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,     0,
       0,     0,     0,     0,     0,     0,     0,   500,     0,     0,
       0,   285,     0,     0,   792,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     393,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   805,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,   286,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   269,   270,   271,   272,
     838,   273,   274,   275,     0,   276,   277,   278,     0,     0,
     847,   746,     0,   279,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   280,   281,   363,     0,     0,
       0,     0,     0,   282,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   689,   871,     0,   283,
       0,     0,     0,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,     0,   284,
     269,   270,   271,   272,     0,   273,   274,   275,     0,   276,
     277,   278,     0,     0,     0,     0,     0,   279,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   280,
     281,     0,     0,     0,     0,     0,     0,   282,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   283,     0,     0,     0,     0,   285,     0,
       0,     0,   413,   414,   415,   416,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,   432,   433,   284,     0,     0,     0,     0,     0,     0,
       0,   525,     0,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,   286,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,     0,   269,   270,   271,   272,   469,   273,   274,   275,
       0,   276,   277,   278,   526,     0,     0,     0,     0,   279,
      21,     0,   285,     0,     0,     0,     0,     0,     0,     0,
       0,   280,   281,     0,     0,     0,     0,     0,     0,   282,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   283,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
     286,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   284,   269,   270,   271,   272,
       0,   273,   274,   275,     0,   276,   277,   278,     0,     0,
       0,     0,     0,   279,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   280,   281,     0,     0,     0,
       0,     0,     0,   282,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   283,
       0,     0,     0,     0,   285,     0,     0,     0,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   284,
       0,     0,    74,   517,     0,     0,     0,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,   286,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,     0,   269,   270,
     271,   272,     0,   273,   274,   275,   476,   276,   277,   278,
     633,     0,     0,     0,     0,   279,     0,     0,   285,     0,
       0,     0,     0,     0,     0,     0,     0,   280,   281,     0,
       0,     0,     0,     0,     0,   282,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   283,     0,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,   286,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   284,     0,     0,     0,   519,   269,   270,   271,   272,
       0,   273,   274,   275,     0,   276,   277,   278,     0,     0,
       0,     0,     0,   279,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   280,   281,     0,     0,     0,
       0,     0,     0,   282,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   283,
     285,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,     0,     0,   284,
       0,     0,     0,   521,     0,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,   286,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,     0,     0,     0,     0,     0,   269,   270,
     271,   272,     0,   273,   274,   275,     0,   276,   277,   278,
       0,     0,     0,     0,     0,   279,     0,     0,   285,     0,
       0,     0,     0,     0,     0,     0,     0,   280,   281,     0,
       0,     0,     0,     0,     0,   282,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   283,     0,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,   286,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   284,   269,   270,   271,   272,     0,   273,   274,   275,
       0,   276,   277,   278,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   555,   556,   132,     0,     0,     0,     0,     0,   282,
       0,     0,     0,   133,   134,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   283,     0,     0,     0,     0,
     285,     0,     0,     0,     0,     0,   132,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   133,   134,     0,     0,
       0,     0,     0,     0,     0,   284,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    74,     0,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,   286,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,     0,   135,   136,     0,     0,     0,     0,
       0,    74,     0,     0,   178,     0,     0,     0,     0,     0,
     476,     0,     0,     0,   285,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   137,   135,   136,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   334,     0,
       0,     0,    74,     0,   138,   139,     0,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,   286,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   138,   139,   334,
     132,     0,     0,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   132,     0,
       0,   578,     0,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    21,    74,     0,     0,     1,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    74,     0,     0,     0,     0,     0,     0,     0,   334,
       0,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   484,     0,     0,     0,   624,
       0,   132,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,    74,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   106,     0,     0,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   132,     0,     0,     0,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   603,     0,     0,
       0,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   413,   414,   415,   416,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   426,
     427,   428,   429,   430,   431,   432,   433,     0,     0,     0,
       0,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,     0,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
       0,     0,     0,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   751,     1,
       0,     0,     0,     0,     0,     2,     0,     0,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       0,     0,     0,     5,     0,     0,     0,     0,     0,     0,
       6,     0,     0,     7,     8,     9,     0,     0,    10,     0,
       0,     0,     0,     0,    11,     0,    12,     0,     0,     0,
       0,     0,   639,   640,   641,    13,     0,     0,     0,   642,
       0,     0,     0,     0,     0,    14,     0,   643,     0,     0,
       0,   644,   645,     0,   646,     0,     0,     0,     0,     0,
     647,     0,     0,     0,     0,     0,     0,    15,     0,     0,
     648,    16,    17,     0,     0,    18,     0,    19,    20,     0,
       0,     0,    21,     0,     0,    22,    23,   649,     0,     0,
      24,     0,     0,     0,     0,     0,     0,   650,     0,   651,
       0,   652,     0,     0,     0,     0,    25,     0,     0,     0,
       0,     0,     0,   653,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     654,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   655,   656,   657,     0,     0,     0,     0,
       0,     0,     0,   658,   659,   413,   414,   415,   416,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,   432,   433,   413,   414,   415,   416,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   426,
     427,   428,   429,   430,   431,   432,   433,     0,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,     0,
       0,     0,     0,     0,     0,     0,     0,   635,   581,   415,
     416,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   432,   433,   637,     0,
       0,     0,     0,     0,     0,   582,   413,   414,   415,   416,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   426,
     427,   428,   429,   430,   431,   432,   433,     0,     0,   537,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   431,   432,
     433,     0,     0,   662,   413,   414,   415,   416,   417,   418,
     419,   420,   421,   422,   423,   424,   425,   426,   427,   428,
     429,   430,   431,   432,   433,     0,     0,   750,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433
};

static const yytype_int16 yycheck[] =
{
       8,     9,     1,    11,    22,   282,   364,    15,   111,   199,
     169,   170,   171,    25,    22,   451,   332,     8,     9,   111,
     111,   229,    41,    58,   111,   134,    10,    66,    41,    90,
      41,   174,    71,   142,    24,   304,    20,    40,     8,     9,
      41,    41,   153,   100,    41,     0,     1,   424,    41,    41,
     356,    15,    41,    90,    41,    28,    41,    65,    83,    41,
      41,    40,   176,    40,   120,    73,    81,   712,   206,    93,
      83,   168,    83,   173,    65,   112,    89,    40,    43,    30,
     173,    46,    73,   120,    62,    43,   125,   714,    46,    73,
     174,    67,    68,     4,    40,    65,     4,     5,     6,   121,
       8,     9,    10,    73,    12,    13,    14,   102,    19,   209,
      55,    74,   215,    99,    79,   121,   209,   135,    90,   114,
     138,    79,   146,   215,   215,   209,    79,   135,   215,   238,
     138,   155,   156,   242,    15,    16,    17,   178,   179,    90,
     143,   252,   500,   106,   334,   129,   257,   774,   209,   165,
     261,    53,   209,   209,   162,   101,   111,   530,   166,   174,
     195,   174,   305,   181,   143,   268,   143,   132,   545,   177,
     133,   162,   209,   181,   132,   166,   166,    20,   555,   556,
     143,   189,   488,   208,   130,   193,   831,   209,   166,   134,
     209,   199,   162,   146,   140,   208,   166,   208,   189,   183,
     173,   240,   193,   209,   167,   213,   833,   202,   209,   209,
     165,   219,   209,   177,   116,   254,   209,   209,     4,   189,
     209,   239,   209,   193,   209,   243,   244,   209,   209,   199,
      73,   239,    92,    59,     0,   243,   244,   145,   246,   247,
     248,   122,    20,   213,   199,    94,   642,    45,   150,   219,
      89,   624,   625,   153,   107,   246,   247,   248,   158,   158,
     215,   370,   658,   659,   158,   374,   377,   378,   168,   168,
     174,   463,   128,   112,   168,   467,   246,   247,   248,    77,
      66,   120,   559,   282,    41,   475,     5,   181,   112,   328,
     480,   499,   152,    12,   154,    73,   120,    41,    15,    16,
      17,   340,     4,   680,   681,   682,   683,   684,   685,   686,
     687,   481,   482,   268,   353,   354,   585,   586,   587,   103,
     180,    91,     4,   103,    41,   169,   334,   282,   336,   284,
     338,   434,   135,   168,   104,   334,   772,     8,   108,    10,
      11,   111,   434,   434,   299,   300,   301,   434,   664,    20,
     123,   121,   710,   669,    90,     8,   364,    10,    11,   185,
     186,   187,    42,   189,   334,   191,   336,   137,   338,    89,
      91,   209,    42,   199,   200,   201,   812,   754,   204,   334,
     184,   399,   400,   104,   158,   198,   190,   108,   192,    89,
     111,   399,   400,   198,   412,   112,   112,   207,   545,   203,
     121,   400,    91,   120,   412,   122,   205,    40,   555,   556,
      34,    35,    36,    37,    38,   104,   137,   435,    40,   108,
      42,   580,   111,   177,   436,   175,    54,   435,   618,   167,
     118,     3,   450,    34,    35,    36,    37,    38,    20,   457,
     458,   459,   450,   461,   157,   400,   209,   465,   137,   457,
     458,   459,   460,   461,    28,    29,    30,   465,   102,   173,
     468,    86,    34,   209,   472,   166,    14,   475,   476,   460,
     425,    90,   480,     5,   167,   209,   484,   468,    40,   434,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
     460,    24,   500,     4,   502,   316,   317,   318,   468,   299,
     300,   301,   472,     5,    61,   475,   476,   299,   300,   301,
     480,   146,    40,    42,   484,    40,    40,   209,    89,    42,
     475,    42,   118,    24,    24,   480,    24,   118,    62,   121,
     720,   209,   502,   680,   681,   682,   683,   684,   685,   686,
     687,    54,    86,   236,   237,    40,    54,   502,   209,   209,
     166,     4,   245,    40,   209,    41,    41,   250,    19,   149,
     559,   170,   839,   666,   209,    19,   174,    40,    17,   209,
     263,    32,    33,    34,    35,    36,    37,    38,    32,    33,
      34,    35,    36,    37,    38,   112,   279,   280,   281,   282,
     283,   546,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,   559,     4,     4,   754,    24,   302,
     618,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,    24,    41,   331,   108,
     124,    41,     5,    24,    41,   663,    40,    38,   618,   667,
      59,    41,     4,     3,   166,   663,     4,   109,    40,   667,
      47,    40,    40,   618,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    40,   369,   127,    40,    82,
     373,   776,   777,   778,   779,   780,   781,   782,   783,   784,
      41,     4,   182,    40,   142,   713,   714,   390,     5,   392,
     393,    97,   710,   396,     5,   713,   714,     5,   716,     5,
      40,   666,   720,    63,    64,    38,    24,   197,    10,    10,
     413,   414,    24,   416,   417,   418,   419,   420,   421,   422,
     423,   209,    54,    10,   427,   428,   429,   430,   431,   432,
     433,    91,    98,    40,    94,    24,   716,     4,    41,   109,
     720,    45,    46,    41,    41,     4,   774,    32,    33,    34,
      35,    36,    37,    38,     4,   720,   774,   152,     4,     8,
      64,     5,     5,     5,     5,   125,   469,   209,     5,   209,
      74,    41,    24,    24,     5,    79,     4,    24,   196,     5,
     165,   141,   539,   546,   144,    23,   663,   869,    72,   807,
     713,   457,    96,   173,   595,   652,   656,   361,   158,   159,
     804,   694,   106,   719,   507,   833,   584,   503,   511,   334,
     103,   328,   154,   354,   517,   833,   519,   177,   521,    18,
     214,   524,   244,   526,    -1,   487,   219,   807,   188,   133,
     450,   462,    -1,   536,   194,   538,    -1,    -1,    -1,   143,
      -1,   544,   807,    -1,    -1,    -1,    -1,   207,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   559,    -1,    -1,    -1,
      -1,    -1,    -1,   167,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,    12,    13,
      14,   584,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     633,    -1,   635,    -1,   637,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   665,     3,    -1,   668,    -1,    -1,    -1,   672,
      -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,
      -1,   145,    -1,    -1,   717,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   751,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
     793,     8,     9,    10,    -1,    12,    13,    14,    -1,    -1,
     803,   804,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   839,   840,    -1,    56,
      -1,    -1,    -1,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,    -1,    86,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,   145,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    -1,    -1,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    13,    14,    90,    -1,    -1,    -1,    -1,    20,
     143,    -1,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,    86,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,   145,    -1,    -1,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    86,
      -1,    -1,     3,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    47,    12,    13,    14,
      90,    -1,    -1,    -1,    -1,    20,    -1,    -1,   145,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    -1,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,    86,    -1,    -1,    -1,    90,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
     145,    -1,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,    -1,    -1,    86,
      -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,   145,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    -1,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,    86,     3,     4,     5,     6,    -1,     8,     9,    10,
      -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,     3,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,
     145,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,    -1,    94,    95,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   126,    94,    95,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,     3,    -1,   144,   145,    -1,    -1,    -1,    -1,
      -1,    -1,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   144,   145,    40,
       3,    -1,    -1,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,     3,    -1,
      -1,    34,    -1,    -1,    -1,    -1,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   143,     3,    -1,    -1,    40,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    80,
      -1,     3,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,     3,   143,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,     3,    -1,    -1,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   129,    -1,    -1,
      -1,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,    -1,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
      -1,    -1,    -1,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   160,    40,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    74,    75,    76,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    50,    51,    52,    96,    -1,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,   106,    -1,    65,    -1,    -1,
      -1,    69,    70,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,   128,    -1,    -1,
      88,   132,   133,    -1,    -1,   136,    -1,   138,   139,    -1,
      -1,    -1,   143,    -1,    -1,   146,   147,   105,    -1,    -1,
     151,    -1,    -1,    -1,    -1,    -1,    -1,   115,    -1,   117,
      -1,   119,    -1,    -1,    -1,    -1,   167,    -1,    -1,    -1,
      -1,    -1,    -1,   131,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   161,   162,   163,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   171,   172,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    48,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    -1,    -1,    41,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    -1,    -1,    41,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    -1,    -1,    41,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    40,    46,    49,    60,    64,    71,    74,    75,    76,
      79,    85,    87,    96,   106,   128,   132,   133,   136,   138,
     139,   143,   146,   147,   151,   167,   211,   212,   213,   231,
     232,   235,   241,   257,   260,   262,   267,   268,   269,   270,
     271,   272,   301,   304,   311,   316,   318,   320,   323,   327,
     328,   329,   330,   333,   338,   340,   343,   348,   351,   352,
     353,   359,   268,   269,   153,   158,   168,   176,   325,   325,
     158,   168,   181,    90,     3,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     297,   368,   371,   297,   158,   168,     3,   341,   370,   371,
     206,   303,    45,    46,    64,    74,    79,    96,   106,   133,
     143,   167,   334,   335,   341,   168,   334,   325,    94,   331,
      99,   275,     3,    13,    14,    94,    95,   126,   144,   145,
     344,   345,   367,   371,     3,    63,    64,    91,    94,   125,
     141,   144,   158,   159,   188,   194,   207,   226,   307,   310,
     369,   165,   275,     0,    83,   208,   107,   174,   261,    15,
      16,    17,   122,   286,   287,    89,   283,   128,    41,    41,
      93,   146,   155,   156,   360,   297,     4,   314,   103,   242,
     312,   313,   314,   242,   297,     4,   309,   309,   103,   258,
     314,   317,   169,   349,   231,   232,   260,   267,   302,   135,
     336,   168,   123,   121,   209,    90,   314,   321,   322,   121,
     339,   178,   179,   332,    40,   101,   130,   140,   276,   277,
     278,    45,    77,   292,    24,   166,   346,   346,   367,    42,
      89,   319,   367,    42,   209,   346,    30,    90,   158,    28,
     173,   308,   198,   308,    89,   306,   319,   198,   112,   305,
     207,   205,   177,    40,   175,   326,   297,   213,   297,     3,
       4,     5,     6,     8,     9,    10,    12,    13,    14,    20,
      32,    33,    40,    56,    86,   145,   193,   215,   216,   217,
     219,   221,   226,   227,   228,   268,   367,   368,   371,   292,
     292,   292,    54,   112,   120,   274,   283,   167,   341,   361,
     362,   367,   118,   157,    67,    68,    43,    46,    79,   132,
     354,   355,   102,   114,   202,   324,    20,   297,   209,   102,
     297,   173,   273,    86,    40,   259,   268,   296,   297,   298,
     209,    14,   347,   350,    34,   337,   368,   335,   231,   232,
     260,   267,   342,   166,   209,   337,    90,     5,   279,    40,
     100,   209,   278,    34,   219,   293,   294,   219,   219,   346,
     367,   314,    24,   346,   367,   345,   219,   297,   297,   297,
       4,   219,   308,    66,   308,     5,   308,    34,    41,    45,
      53,    77,   110,   164,   214,   219,   230,   284,    61,   146,
      40,   263,   267,   219,   219,   219,   214,   219,   268,   219,
     222,   268,    42,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    40,    42,   143,   268,   271,   272,
     271,   271,   219,   288,   289,     5,    12,   281,   281,   283,
     209,    24,    24,    24,   118,   118,    62,   356,   356,   356,
     166,   356,   209,    54,    86,    40,   313,    54,   121,     7,
     219,   261,   268,   296,   298,   209,    47,   368,    91,   104,
     108,   111,   137,   299,    47,   368,   314,   209,   166,   314,
     321,   317,    41,   209,    92,   152,   154,   180,   280,   277,
      47,   370,    90,   209,   274,   282,   219,   346,     4,   315,
     219,   346,   308,   308,    40,   209,    41,    90,   219,    90,
     219,    90,   219,    41,   209,    47,    90,   219,    41,   149,
     233,   234,   367,   264,   367,   170,   209,    41,   174,   223,
     224,   367,   219,   219,    28,    29,    30,   219,   219,   219,
     219,   219,   219,   219,   219,    32,    33,   217,   218,    40,
     220,   268,     8,    10,    11,    20,   219,   219,   219,   219,
     219,   219,   219,   229,   231,   232,   260,   267,    34,   367,
     275,    48,    75,   290,   209,   120,   209,   112,   362,   216,
       4,     4,    24,    24,   245,   367,   367,   367,   297,   367,
     132,   355,   315,   129,   243,   244,   245,   315,   297,   219,
      41,   296,   368,   124,   300,   296,   300,   300,   108,   368,
     347,   317,    41,   370,    80,   295,   296,   293,   219,   219,
      41,     5,   219,    90,   219,    90,   219,    90,   219,    50,
      51,    52,    57,    65,    69,    70,    72,    78,    88,   105,
     115,   117,   119,   131,   148,   161,   162,   163,   171,   172,
     246,   219,    41,   209,   273,    24,    41,   209,    40,   265,
     219,   219,    81,   224,   225,   219,   218,   220,   218,   218,
      19,    32,    33,    34,    35,    36,    37,    38,   214,   219,
       8,    10,    11,    41,   292,   289,   281,   281,   281,    59,
     363,     4,     4,   246,    79,   146,   358,    55,   134,   357,
     166,   109,    41,   209,    40,   236,    47,   121,   296,   273,
     209,   273,   219,   219,   219,    40,   251,   251,    40,   247,
     127,   249,    40,   248,   247,    40,   250,   250,   251,   251,
      41,   234,   261,   219,   267,   367,   219,   266,   209,   261,
      41,   160,   219,    82,    19,   218,   218,   218,   218,   218,
     218,   218,   218,    41,   294,     4,   142,   364,   252,    20,
      73,    20,    73,   370,    40,    59,   185,   186,   187,   189,
     191,   199,   200,   201,   204,   254,   255,   244,   264,   182,
     237,   368,   219,   121,   282,   296,    97,   285,     5,     5,
       5,     5,    41,   209,    40,   219,   218,    90,    24,   197,
      10,    20,    73,   129,   183,   253,    10,    10,   216,   264,
      24,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   209,    41,    40,   238,   239,   240,   255,   219,    54,
      98,   291,    41,    41,   209,    41,    41,   219,   266,    53,
     116,   150,    24,    10,   216,   109,    41,     4,     4,   152,
       4,     4,     5,     5,     5,     5,     8,   255,   264,   209,
     214,   219,     5,    41,   184,   190,   192,   203,   365,    41,
     240,    41,    58,   195,   366,    24,    24,     5,     4,   196,
      24,     5
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
      case 211: /* "sql_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 212: /* "stmt_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 213: /* "stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 214: /* "expr_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 215: /* "column_ref" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 216: /* "expr_const" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 217: /* "simple_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 218: /* "arith_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 219: /* "expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 220: /* "in_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 221: /* "case_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 222: /* "case_arg" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 223: /* "when_clause_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 224: /* "when_clause" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 225: /* "case_default" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 226: /* "func_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 227: /* "when_func" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 228: /* "when_func_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 229: /* "when_func_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 230: /* "distinct_or_all" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 231: /* "delete_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 232: /* "update_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 233: /* "update_asgn_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 234: /* "update_asgn_factor" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 235: /* "create_index_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 236: /* "opt_index_columns" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 237: /* "opt_storing" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 238: /* "opt_storing_columns" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 239: /* "opt_index_option_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 240: /* "index_option" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 241: /* "create_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 242: /* "opt_if_not_exists" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 243: /* "table_element_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 244: /* "table_element" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 245: /* "column_definition" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 246: /* "data_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 247: /* "opt_decimal" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 248: /* "opt_float" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 249: /* "opt_precision" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 250: /* "opt_time_precision" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 251: /* "opt_char_length" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 252: /* "opt_column_attribute_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 253: /* "column_attribute" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 254: /* "opt_table_option_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 255: /* "table_option" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 256: /* "opt_equal_mark" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 257: /* "drop_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 258: /* "opt_if_exists" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 259: /* "table_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 260: /* "insert_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 261: /* "opt_when" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 262: /* "replace_or_insert" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 263: /* "opt_insert_columns" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 264: /* "column_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 265: /* "insert_vals_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 266: /* "insert_vals" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 267: /* "select_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 268: /* "select_with_parens" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 269: /* "select_no_parens" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 270: /* "no_table_select" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 271: /* "select_clause" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 272: /* "simple_select" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 273: /* "opt_where" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 274: /* "select_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 275: /* "opt_hint" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 276: /* "opt_hint_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 277: /* "hint_options" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 278: /* "hint_option" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 279: /* "opt_comma_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 281: /* "limit_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 282: /* "opt_select_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 283: /* "opt_for_update" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 284: /* "parameterized_trim" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 285: /* "opt_groupby" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 286: /* "opt_order_by" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 287: /* "order_by" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 288: /* "sort_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 289: /* "sort_key" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 290: /* "opt_asc_desc" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 291: /* "opt_having" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 292: /* "opt_distinct" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 293: /* "projection" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 294: /* "select_expr_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 295: /* "from_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 296: /* "table_factor" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 297: /* "relation_factor" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 298: /* "joined_table" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 299: /* "join_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 300: /* "join_outer" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 301: /* "explain_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 302: /* "explainable_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 303: /* "opt_verbose" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 304: /* "show_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 305: /* "opt_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 306: /* "opt_for_grant_user" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 308: /* "opt_show_condition" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 309: /* "opt_like_condition" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 311: /* "create_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 312: /* "user_specification_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 313: /* "user_specification" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 314: /* "user" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 315: /* "password" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 316: /* "drop_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 317: /* "user_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 318: /* "set_password_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 319: /* "opt_for_user" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 320: /* "rename_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 321: /* "rename_info" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 322: /* "rename_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 323: /* "lock_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 324: /* "lock_spec" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 325: /* "opt_work" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 327: /* "begin_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 328: /* "commit_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 329: /* "rollback_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 330: /* "kill_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 331: /* "opt_is_global" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 332: /* "opt_flag" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 333: /* "grant_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 334: /* "priv_type_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 335: /* "priv_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 336: /* "opt_privilege" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 337: /* "priv_level" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 338: /* "revoke_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 339: /* "opt_on_priv_level" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 340: /* "prepare_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 341: /* "stmt_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 342: /* "preparable_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 343: /* "variable_set_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 344: /* "var_and_val_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 345: /* "var_and_val" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 346: /* "to_or_eq" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 347: /* "argument" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 348: /* "execute_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 349: /* "opt_using_args" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 350: /* "argument_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 351: /* "deallocate_prepare_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 352: /* "deallocate_or_drop" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 353: /* "alter_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 354: /* "alter_column_actions" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 355: /* "alter_column_action" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 356: /* "opt_column" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 358: /* "alter_column_behavior" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 359: /* "alter_system_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 360: /* "opt_force" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 361: /* "alter_system_actions" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 362: /* "alter_system_action" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 363: /* "opt_comment" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 365: /* "server_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 366: /* "opt_cluster_or_address" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 367: /* "column_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 368: /* "relation_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 369: /* "function_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 370: /* "column_label" */

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

    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 22:

    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 23:

    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 24:

    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 25:

    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 26:

    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 27:

    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 28:

    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 29:

    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 30:

    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 31:

    { (yyval.node) = NULL; ;}
    break;

  case 32:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 33:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 34:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 35:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NAME_FIELD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(3) - (3)]).first_column, (yylsp[(3) - (3)]).last_column);
    ;}
    break;

  case 36:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_STAR);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NAME_FIELD, 2, (yyvsp[(1) - (3)].node), node);
    ;}
    break;

  case 37:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 38:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 39:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 40:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 41:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 42:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 43:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 44:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 45:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 46:

    { (yyvsp[(3) - (3)].node)->type_ = T_SYSTEM_VARIABLE; (yyval.node) = (yyvsp[(3) - (3)].node); ;}
    break;

  case 47:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 48:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 49:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 50:

    {
      ParseNode *node = NULL;
      malloc_non_terminal_node(node, result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node));
      merge_nodes((yyval.node), result->malloc_pool_, T_EXPR_LIST, node);
    ;}
    break;

  case 51:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
      /*
      yyerror(&@1, result, "CASE expression is not supported yet!");
      YYABORT;
      */
    ;}
    break;

  case 52:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 53:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 54:

    {
    	(yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 55:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_EXISTS, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 56:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 57:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_POS, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 58:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NEG, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 59:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_ADD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 60:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MINUS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 61:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MUL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 62:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_DIV, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 63:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_REM, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 64:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_POW, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 65:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MOD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 66:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 67:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_POS, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 68:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NEG, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 69:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_ADD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 70:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MINUS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 71:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MUL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 72:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_DIV, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 73:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_REM, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 74:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_POW, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 75:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MOD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 76:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 77:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LT, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 78:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_EQ, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 79:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_GE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 80:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_GT, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 81:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 82:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 83:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NOT_LIKE, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 84:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_AND, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 85:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_OR, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 86:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NOT, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 87:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 88:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS_NOT, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 89:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 90:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS_NOT, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 91:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 92:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS_NOT, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 93:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_BTW, 3, (yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 94:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NOT_BTW, 3, (yyvsp[(1) - (6)].node), (yyvsp[(4) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 95:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IN, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 96:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NOT_IN, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 97:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_CNN, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 98:

    {
    	(yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 99:

    { merge_nodes((yyval.node), result->malloc_pool_, T_EXPR_LIST, (yyvsp[(2) - (3)].node)); ;}
    break;

  case 100:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_WHEN_LIST, (yyvsp[(3) - (5)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CASE, 3, (yyvsp[(2) - (5)].node), (yyval.node), (yyvsp[(4) - (5)].node));
    ;}
    break;

  case 101:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 102:

    { (yyval.node) = NULL; ;}
    break;

  case 103:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 104:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 105:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_WHEN, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 106:

    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 107:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_NULL); ;}
    break;

  case 108:

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

  case 109:

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

  case 110:

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

  case 111:

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

  case 112:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_FUN_SYS, 2, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));
    ;}
    break;

  case 113:

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

  case 114:

    {
      (yyval.node) = (yyvsp[(1) - (4)].node);
      (yyval.node)->children_[0] = (yyvsp[(3) - (4)].node);
    ;}
    break;

  case 115:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ROW_COUNT, 1, NULL);
    ;}
    break;

  case 120:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_ALL);
    ;}
    break;

  case 121:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_DISTINCT);
    ;}
    break;

  case 122:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_DELETE, 3, (yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 123:

    {
      ParseNode* assign_list = NULL;
      merge_nodes(assign_list, result->malloc_pool_, T_ASSIGN_LIST, (yyvsp[(5) - (7)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_UPDATE, 5, (yyvsp[(3) - (7)].node), assign_list, (yyvsp[(6) - (7)].node), (yyvsp[(7) - (7)].node), (yyvsp[(2) - (7)].node));
    ;}
    break;

  case 124:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 125:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 126:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ASSIGN_ITEM, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 127:

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

  case 128:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_COLUMN_LIST, (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 129:

    {
  		(yyval.node)=(yyvsp[(2) - (2)].node);
  	;}
    break;

  case 130:

    {
  		(yyval.node)=NULL;
  	;}
    break;

  case 131:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_COLUMN_LIST, (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 132:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 133:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 134:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 135:

    {
		(yyval.node) = (yyvsp[(1) - (1)].node);
	;}
    break;

  case 136:

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

  case 137:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_IF_NOT_EXISTS); ;}
    break;

  case 138:

    { (yyval.node) = NULL; ;}
    break;

  case 139:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 140:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 141:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 142:

    {
      ParseNode* col_list= NULL;
      merge_nodes(col_list, result->malloc_pool_, T_COLUMN_LIST, (yyvsp[(4) - (5)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PRIMARY_KEY, 1, col_list);
    ;}
    break;

  case 143:

    {
      ParseNode *attributes = NULL;
      merge_nodes(attributes, result->malloc_pool_, T_COLUMN_ATTRIBUTES, (yyvsp[(3) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_DEFINITION, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), attributes);
    ;}
    break;

  case 144:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER ); ;}
    break;

  case 145:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER); ;}
    break;

  case 146:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER); ;}
    break;

  case 147:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER); ;}
    break;

  case 148:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER); ;}
    break;

  case 149:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DECIMAL);
      else
        merge_nodes((yyval.node), result->malloc_pool_, T_TYPE_DECIMAL, (yyvsp[(2) - (2)].node));
      yyerror(&(yylsp[(1) - (2)]), result, "DECIMAL type is not supported");
      YYABORT;
    ;}
    break;

  case 150:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DECIMAL);
      else
        merge_nodes((yyval.node), result->malloc_pool_, T_TYPE_DECIMAL, (yyvsp[(2) - (2)].node));
      yyerror(&(yylsp[(1) - (2)]), result, "NUMERIC type is not supported");
      YYABORT;
    ;}
    break;

  case 151:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_BOOLEAN ); ;}
    break;

  case 152:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_FLOAT, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 153:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DOUBLE); ;}
    break;

  case 154:

    {
      (void)((yyvsp[(2) - (2)].node)) ; /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DOUBLE);
    ;}
    break;

  case 155:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIMESTAMP);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIMESTAMP, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 156:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIMESTAMP); ;}
    break;

  case 157:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CHARACTER);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CHARACTER, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 158:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CHARACTER);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CHARACTER, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 159:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_VARCHAR);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_VARCHAR, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 160:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_VARCHAR);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_VARCHAR, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 161:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CREATETIME); ;}
    break;

  case 162:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_MODIFYTIME); ;}
    break;

  case 163:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DATE);
      yyerror(&(yylsp[(1) - (1)]), result, "DATE type is not supported");
      YYABORT;
    ;}
    break;

  case 164:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIME);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIME, 1, (yyvsp[(2) - (2)].node));
      yyerror(&(yylsp[(1) - (2)]), result, "TIME type is not supported");
      YYABORT;
    ;}
    break;

  case 165:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node)); ;}
    break;

  case 166:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 167:

    { (yyval.node) = NULL; ;}
    break;

  case 168:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 169:

    { (yyval.node) = NULL; ;}
    break;

  case 170:

    { (yyval.node) = NULL; ;}
    break;

  case 171:

    { (yyval.node) = NULL; ;}
    break;

  case 172:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 173:

    { (yyval.node) = NULL; ;}
    break;

  case 174:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 175:

    { (yyval.node) = NULL; ;}
    break;

  case 176:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 177:

    { (yyval.node) = NULL; ;}
    break;

  case 178:

    {
      (void)((yyvsp[(2) - (2)].node)) ; /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NOT_NULL);
    ;}
    break;

  case 179:

    {
      (void)((yyvsp[(1) - (1)].node)) ; /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NULL);
    ;}
    break;

  case 180:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 181:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_AUTO_INCREMENT); ;}
    break;

  case 182:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_PRIMARY_KEY); ;}
    break;

  case 183:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 184:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 185:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 186:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_INFO, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 187:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPIRE_INFO, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 188:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLET_MAX_SIZE, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 189:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLET_BLOCK_SIZE, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 190:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLET_ID, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 191:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_REPLICA_NUM, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 192:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COMPRESS_METHOD, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 193:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_USE_BLOOM_FILTER, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 194:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSISTENT_MODE);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 195:

    {
      (void)((yyvsp[(2) - (3)].node)); /*  make bison mute*/
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COMMENT, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 196:

    { (yyval.node) = NULL; ;}
    break;

  case 197:

    { (yyval.node) = NULL; ;}
    break;

  case 198:

    {
      ParseNode *tables = NULL;
      merge_nodes(tables, result->malloc_pool_, T_TABLE_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_DROP_TABLE, 2, (yyvsp[(3) - (4)].node), tables);
    ;}
    break;

  case 199:

    { (yyval.node) = NULL; ;}
    break;

  case 200:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_IF_EXISTS); ;}
    break;

  case 201:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 202:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 203:

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

  case 204:

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

  case 205:

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

  case 206:

    { (yyval.node) = NULL; ;}
    break;

  case 207:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 208:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 209:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 210:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_COLUMN_LIST, (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 211:

    { (yyval.node) = NULL; ;}
    break;

  case 212:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 213:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 214:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_VALUE_VECTOR, (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 215:

    {
    merge_nodes((yyvsp[(4) - (5)].node), result->malloc_pool_, T_VALUE_VECTOR, (yyvsp[(4) - (5)].node));
    malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (5)].node), (yyvsp[(4) - (5)].node));
  ;}
    break;

  case 216:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 217:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 218:

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

  case 219:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 220:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 221:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 222:

    {
      (yyval.node)= (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 223:

    {
      (yyval.node) = (yyvsp[(1) - (2)].node);
      (yyval.node)->children_[12] = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 224:

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

  case 225:

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

  case 226:

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

  case 227:

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

  case 228:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 229:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 230:

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

  case 231:

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

  case 232:

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

  case 233:

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

  case 234:

    {(yyval.node) = NULL;;}
    break;

  case 235:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 236:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_WHERE_CLAUSE, 2, (yyvsp[(3) - (3)].node), (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 237:

    {
      if ((yyvsp[(2) - (4)].node)->type_ == T_QUESTIONMARK && (yyvsp[(4) - (4)].node)->type_ == T_QUESTIONMARK)
      {
        (yyvsp[(4) - (4)].node)->value_++;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 238:

    {
      if ((yyvsp[(2) - (4)].node)->type_ == T_QUESTIONMARK && (yyvsp[(4) - (4)].node)->type_ == T_QUESTIONMARK)
      {
        (yyvsp[(4) - (4)].node)->value_++;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, (yyvsp[(4) - (4)].node), (yyvsp[(2) - (4)].node));
    ;}
    break;

  case 239:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, (yyvsp[(2) - (2)].node), NULL);
    ;}
    break;

  case 240:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, NULL, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 241:

    {
      if ((yyvsp[(2) - (4)].node)->type_ == T_QUESTIONMARK && (yyvsp[(4) - (4)].node)->type_ == T_QUESTIONMARK)
      {
        (yyvsp[(4) - (4)].node)->value_++;
      }
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, (yyvsp[(4) - (4)].node), (yyvsp[(2) - (4)].node));
    ;}
    break;

  case 242:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 243:

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

  case 244:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 245:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 246:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 247:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 248:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 249:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_READ_STATIC);
    ;}
    break;

  case 250:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_HOTSPOT);
    ;}
    break;

  case 251:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_READ_CONSISTENCY);
      (yyval.node)->value_ = (yyvsp[(3) - (4)].ival);
    ;}
    break;

  case 252:

    {
      (yyval.node) = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 253:

    {
      (yyval.node) = (yyvsp[(1) - (2)].node);
    ;}
    break;

  case 254:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 255:

    {
    (yyval.ival) = 3;
  ;}
    break;

  case 256:

    {
    (yyval.ival) = 4;
  ;}
    break;

  case 257:

    {
    (yyval.ival) = 1;
  ;}
    break;

  case 258:

    {
    (yyval.ival) = 2;
  ;}
    break;

  case 259:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 260:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 261:

    { (yyval.node) = NULL; ;}
    break;

  case 262:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 263:

    { (yyval.node) = NULL; ;}
    break;

  case 264:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 265:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 0;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 266:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 0;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 267:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 1;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 268:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 2;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 269:

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

  case 270:

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

  case 271:

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

  case 272:

    { (yyval.node) = NULL; ;}
    break;

  case 273:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_EXPR_LIST, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 274:

    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 275:

    { (yyval.node) = NULL; ;}
    break;

  case 276:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_SORT_LIST, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 277:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 278:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 279:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SORT_KEY, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 280:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_ASC); ;}
    break;

  case 281:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_ASC); ;}
    break;

  case 282:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_DESC); ;}
    break;

  case 283:

    { (yyval.node) = 0; ;}
    break;

  case 284:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 285:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 286:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_ALL);
    ;}
    break;

  case 287:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_DISTINCT);
    ;}
    break;

  case 288:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, (yyvsp[(1) - (1)].node));
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (1)]).first_column, (yylsp[(1) - (1)]).last_column);
    ;}
    break;

  case 289:

    {
      ParseNode* alias_node = NULL;
      malloc_non_terminal_node(alias_node, result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, alias_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (2)]).first_column, (yylsp[(1) - (2)]).last_column);
      dup_expr_string(alias_node->str_value_, result, (yylsp[(2) - (2)]).first_column, (yylsp[(2) - (2)]).last_column);
    ;}
    break;

  case 290:

    {
      ParseNode* alias_node = NULL;
      malloc_non_terminal_node(alias_node, result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, alias_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (3)]).first_column, (yylsp[(1) - (3)]).last_column);
      dup_expr_string(alias_node->str_value_, result, (yylsp[(3) - (3)]).first_column, (yylsp[(3) - (3)]).last_column);
    ;}
    break;

  case 291:

    {
      ParseNode* star_node = NULL;
      malloc_terminal_node(star_node, result->malloc_pool_, T_STAR);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, star_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (1)]).first_column, (yylsp[(1) - (1)]).last_column);
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

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 295:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 296:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 297:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 298:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 299:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 300:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 301:

    {
    	(yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 302:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(2) - (5)].node), (yyvsp[(5) - (5)].node));
    	yyerror(&(yylsp[(1) - (5)]), result, "qualied joined table can not be aliased!");
      YYABORT;
    ;}
    break;

  case 303:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 304:

    {
    	(yyval.node) = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 305:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOINED_TABLE, 4, (yyvsp[(2) - (6)].node), (yyvsp[(1) - (6)].node), (yyvsp[(4) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 306:

    {
      ParseNode* node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_JOIN_INNER);
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOINED_TABLE, 4, node, (yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 307:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_FULL);
    ;}
    break;

  case 308:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_LEFT);
    ;}
    break;

  case 309:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_RIGHT);
    ;}
    break;

  case 310:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_INNER);
    ;}
    break;

  case 311:

    { (yyval.node) = NULL; ;}
    break;

  case 312:

    { (yyval.node) = NULL; ;}
    break;

  case 313:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPLAIN, 1, (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = ((yyvsp[(2) - (3)].node) ? 1 : 0); /* positive: verbose */
    ;}
    break;

  case 314:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 315:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 316:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 317:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 318:

    { (yyval.node) = (ParseNode*)1; ;}
    break;

  case 319:

    { (yyval.node) = NULL; ;}
    break;

  case 320:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_TABLES, 1, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 321:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 322:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 323:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_TABLE_STATUS, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 324:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_SERVER_STATUS, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 325:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_VARIABLES, 1, (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = (yyvsp[(2) - (4)].ival);
    ;}
    break;

  case 326:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_SCHEMA); ;}
    break;

  case 327:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_CREATE_TABLE, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 328:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 329:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 330:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_WARNINGS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 331:

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

  case 332:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_GRANTS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 333:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_PARAMETERS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 334:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_PROCESSLIST);
      (yyval.node)->value_ = (yyvsp[(2) - (3)].ival);
    ;}
    break;

  case 335:

    {
      if ((yyvsp[(2) - (4)].node)->value_ < 0 || (yyvsp[(4) - (4)].node)->value_ < 0)
      {
        yyerror(&(yylsp[(1) - (4)]), result, "OFFSET/COUNT must not be less than 0!");
        YYABORT;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_LIMIT, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 336:

    {
      if ((yyvsp[(2) - (2)].node)->value_ < 0)
      {
        yyerror(&(yylsp[(1) - (2)]), result, "COUNT must not be less than 0!");
        YYABORT;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_LIMIT, 2, NULL, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 337:

    { (yyval.node) = NULL; ;}
    break;

  case 338:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 339:

    { (yyval.node) = NULL; ;}
    break;

  case 340:

    { (yyval.node) = NULL; ;}
    break;

  case 341:

    { (yyval.ival) = 1; ;}
    break;

  case 342:

    { (yyval.ival) = 0; ;}
    break;

  case 343:

    { (yyval.ival) = 0; ;}
    break;

  case 344:

    { (yyval.node) = NULL; ;}
    break;

  case 345:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 346:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_WHERE_CLAUSE, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 347:

    { (yyval.node) = NULL; ;}
    break;

  case 348:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 1, (yyvsp[(1) - (1)].node)); ;}
    break;

  case 349:

    { (yyval.ival) = 0; ;}
    break;

  case 350:

    { (yyval.ival) = 1; ;}
    break;

  case 351:

    {
        merge_nodes((yyval.node), result->malloc_pool_, T_CREATE_USER, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 352:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 353:

    {
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 354:

    {
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CREATE_USER_SPEC, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 355:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 356:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 357:

    {
        merge_nodes((yyval.node), result->malloc_pool_, T_DROP_USER, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 358:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 359:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 360:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SET_PASSWORD, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 361:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SET_PASSWORD, 2, (yyvsp[(3) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 362:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 363:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 364:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_RENAME_USER, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 365:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_RENAME_INFO, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 366:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 367:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 368:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LOCK_USER, 2, (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 369:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 370:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 371:

    {
      (void)(yyval.node);
    ;}
    break;

  case 372:

    {
      (void)(yyval.node);
    ;}
    break;

  case 373:

    {
      (yyval.ival) = 1;
    ;}
    break;

  case 374:

    {
      (yyval.ival) = 0;
    ;}
    break;

  case 375:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BEGIN);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 376:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BEGIN);
      (yyval.node)->value_ = (yyvsp[(3) - (3)].ival);
    ;}
    break;

  case 377:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_COMMIT);
    ;}
    break;

  case 378:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_ROLLBACK);
    ;}
    break;

  case 379:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_KILL, 3, (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 380:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 381:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 382:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 383:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 384:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 385:

    {
      ParseNode *privileges_node = NULL;
      ParseNode *users_node = NULL;
      merge_nodes(privileges_node, result->malloc_pool_, T_PRIVILEGES, (yyvsp[(2) - (6)].node));
      merge_nodes(users_node, result->malloc_pool_, T_USERS, (yyvsp[(6) - (6)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_GRANT,
                                 3, privileges_node, (yyvsp[(4) - (6)].node), users_node);
    ;}
    break;

  case 386:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 387:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 388:

    {
      (void)(yyvsp[(2) - (2)].node);                 /* useless */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_ALL;
    ;}
    break;

  case 389:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_ALTER;
    ;}
    break;

  case 390:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_CREATE;
    ;}
    break;

  case 391:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_CREATE_USER;
    ;}
    break;

  case 392:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_DELETE;
    ;}
    break;

  case 393:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_DROP;
    ;}
    break;

  case 394:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_GRANT_OPTION;
    ;}
    break;

  case 395:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_INSERT;
    ;}
    break;

  case 396:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_UPDATE;
    ;}
    break;

  case 397:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_SELECT;
    ;}
    break;

  case 398:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_REPLACE;
    ;}
    break;

  case 399:

    {
      (void)(yyval.node);
    ;}
    break;

  case 400:

    {
      (void)(yyval.node);
    ;}
    break;

  case 401:

    {
      /* means global priv_level */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_LEVEL);
    ;}
    break;

  case 402:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_LEVEL, 1, (yyvsp[(1) - (1)].node));
    ;}
    break;

  case 403:

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

  case 404:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 405:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 406:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PREPARE, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 407:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 408:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 409:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 410:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 411:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 412:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_VARIABLE_SET, (yyvsp[(2) - (2)].node));;
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 413:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 414:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 415:

    {
      (void)((yyvsp[(2) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 416:

    {
      (void)((yyvsp[(2) - (3)].node));
      (yyvsp[(1) - (3)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 417:

    {
      (void)((yyvsp[(3) - (4)].node));
      (yyvsp[(2) - (4)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 418:

    {
      (void)((yyvsp[(3) - (4)].node));
      (yyvsp[(2) - (4)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 419:

    {
      (void)((yyvsp[(4) - (5)].node));
      (yyvsp[(3) - (5)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 420:

    {
      (void)((yyvsp[(4) - (5)].node));
      (yyvsp[(3) - (5)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 421:

    {
      (void)((yyvsp[(2) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 422:

    { (yyval.node) = NULL; ;}
    break;

  case 423:

    { (yyval.node) = NULL; ;}
    break;

  case 424:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 425:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXECUTE, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 426:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 427:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 428:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 429:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 430:

    {
      (void)((yyvsp[(1) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_DEALLOCATE, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 431:

    { (yyval.node) = NULL; ;}
    break;

  case 432:

    { (yyval.node) = NULL; ;}
    break;

  case 433:

    {
      ParseNode *alter_actions = NULL;
      merge_nodes(alter_actions, result->malloc_pool_, T_ALTER_ACTION_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_TABLE, 2, (yyvsp[(3) - (4)].node), alter_actions);
    ;}
    break;

  case 434:

    {
      yyerror(&(yylsp[(1) - (6)]), result, "Table rename is not supported now");
      YYABORT;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLE_RENAME, 1, (yyvsp[(6) - (6)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_ACTION_LIST, 1, (yyval.node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_TABLE, 2, (yyvsp[(3) - (6)].node), (yyval.node));
    ;}
    break;

  case 435:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 436:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 437:

    {
      (void)((yyvsp[(2) - (3)].node)); /* make bison mute */
      (yyval.node) = (yyvsp[(3) - (3)].node); /* T_COLUMN_DEFINITION */
    ;}
    break;

  case 438:

    {
      (void)((yyvsp[(2) - (4)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_DROP, 1, (yyvsp[(3) - (4)].node));
      (yyval.node)->value_ = (yyvsp[(4) - (4)].ival);
    ;}
    break;

  case 439:

    {
      (void)((yyvsp[(2) - (4)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_ALTER, 2, (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 440:

    {
      (void)((yyvsp[(2) - (5)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_RENAME, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 441:

    { (yyval.node) = NULL; ;}
    break;

  case 442:

    { (yyval.node) = NULL; ;}
    break;

  case 443:

    { (yyval.ival) = 2; ;}
    break;

  case 444:

    { (yyval.ival) = 1; ;}
    break;

  case 445:

    { (yyval.ival) = 0; ;}
    break;

  case 446:

    {
      (void)((yyvsp[(3) - (3)].node)); /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NOT_NULL);
    ;}
    break;

  case 447:

    {
      (void)((yyvsp[(3) - (3)].node)); /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NULL);
    ;}
    break;

  case 448:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 449:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_NULL);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyval.node));
    ;}
    break;

  case 450:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_SYTEM_ACTION_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_SYSTEM, 1, (yyval.node));
    ;}
    break;

  case 451:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 3, node, (yyvsp[(7) - (7)].node), (yyvsp[(3) - (7)].node));
    ;}
    break;

  case 452:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 3, node, (yyvsp[(7) - (7)].node), (yyvsp[(3) - (7)].node));
    ;}
    break;

  case 453:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 2, node, (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 454:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 2, node, (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 455:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 456:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_FORCE);
    ;}
    break;

  case 457:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 458:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 459:

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

  case 460:

    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 461:

    { (yyval.node) = NULL; ;}
    break;

  case 462:

    { (yyval.ival) = 0; ;}
    break;

  case 463:

    { (yyval.ival) = 1; ;}
    break;

  case 464:

    { (yyval.ival) = 2; ;}
    break;

  case 465:

    { (yyval.ival) = 2; ;}
    break;

  case 466:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 467:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 4;
    ;}
    break;

  case 468:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 469:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 3;
    ;}
    break;

  case 470:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CLUSTER, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 471:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SERVER_ADDRESS, 2, (yyvsp[(3) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 472:

    { (yyval.node) = NULL; ;}
    break;

  case 473:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 474:

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

  case 475:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 476:

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

  case 478:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 479:

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

