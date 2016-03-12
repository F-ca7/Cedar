
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
     MEDIUMINT = 383,
     MEMORY = 384,
     MODIFYTIME = 385,
     MASTER = 386,
     NUMERIC = 387,
     OFFSET = 388,
     ON = 389,
     ORDER = 390,
     OPTION = 391,
     OUTER = 392,
     PARAMETERS = 393,
     PASSWORD = 394,
     PRECISION = 395,
     PREPARE = 396,
     PRIMARY = 397,
     READ_STATIC = 398,
     REAL = 399,
     RENAME = 400,
     REPLACE = 401,
     RESTRICT = 402,
     PRIVILEGES = 403,
     REVOKE = 404,
     RIGHT = 405,
     ROLLBACK = 406,
     KILL = 407,
     READ_CONSISTENCY = 408,
     SCHEMA = 409,
     SCOPE = 410,
     SELECT = 411,
     SESSION = 412,
     SESSION_ALIAS = 413,
     SET = 414,
     SHOW = 415,
     SMALLINT = 416,
     SNAPSHOT = 417,
     SPFILE = 418,
     START = 419,
     STATIC = 420,
     SYSTEM = 421,
     STRONG = 422,
     SET_MASTER_CLUSTER = 423,
     SET_SLAVE_CLUSTER = 424,
     SLAVE = 425,
     TABLE = 426,
     TABLES = 427,
     THEN = 428,
     TIME = 429,
     TIMESTAMP = 430,
     TINYINT = 431,
     TRAILING = 432,
     TRANSACTION = 433,
     TO = 434,
     UPDATE = 435,
     USER = 436,
     USING = 437,
     VALUES = 438,
     VARCHAR = 439,
     VARBINARY = 440,
     WHERE = 441,
     WHEN = 442,
     WITH = 443,
     WORK = 444,
     PROCESSLIST = 445,
     QUERY = 446,
     CONNECTION = 447,
     WEAK = 448,
     INDEX = 449,
     STORING = 450,
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
#define YYFINAL  195
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3608

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  232
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  213
/* YYNRULES -- Number of rules.  */
#define YYNRULES  639
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1189

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
      82,    84,    86,    88,    90,    92,    94,    95,    97,   101,
     103,   107,   111,   113,   115,   117,   119,   121,   123,   125,
     127,   129,   133,   135,   137,   141,   147,   149,   151,   153,
     155,   158,   160,   163,   166,   170,   174,   178,   182,   186,
     190,   194,   196,   199,   202,   206,   210,   214,   218,   222,
     226,   230,   234,   238,   242,   246,   250,   254,   258,   263,
     267,   271,   274,   278,   283,   287,   292,   296,   301,   307,
     314,   318,   323,   327,   329,   333,   339,   341,   342,   344,
     347,   352,   355,   356,   361,   367,   372,   379,   384,   388,
     393,   395,   397,   399,   401,   403,   405,   407,   413,   421,
     423,   427,   431,   441,   445,   448,   449,   453,   455,   459,
     460,   462,   468,   470,   473,   476,   480,   485,   491,   497,
     503,   509,   516,   524,   528,   532,   536,   542,   544,   546,
     551,   558,   561,   570,   574,   575,   577,   581,   583,   589,
     593,   595,   597,   599,   601,   603,   606,   609,   611,   614,
     616,   619,   622,   624,   627,   630,   633,   636,   638,   640,
     642,   645,   651,   655,   656,   660,   661,   663,   664,   668,
     669,   673,   674,   677,   678,   681,   683,   686,   688,   691,
     693,   697,   698,   702,   706,   710,   714,   718,   722,   726,
     730,   734,   738,   740,   741,   746,   747,   750,   752,   756,
     763,   764,   766,   770,   772,   780,   785,   793,   794,   797,
     799,   801,   805,   806,   808,   812,   816,   822,   824,   828,
     831,   833,   837,   841,   843,   846,   850,   855,   861,   870,
     872,   874,   883,   893,   898,   903,   908,   909,   912,   916,
     921,   926,   929,   932,   937,   938,   942,   944,   948,   949,
     951,   954,   956,   958,   973,   978,   984,   989,   993,   996,
     997,   999,  1001,  1003,  1005,  1007,  1009,  1010,  1012,  1013,
    1016,  1020,  1025,  1030,  1035,  1039,  1043,  1047,  1048,  1052,
    1054,  1055,  1059,  1061,  1065,  1068,  1069,  1071,  1073,  1074,
    1077,  1078,  1080,  1082,  1084,  1087,  1091,  1093,  1095,  1099,
    1101,  1105,  1107,  1111,  1114,  1118,  1121,  1123,  1129,  1131,
    1135,  1142,  1148,  1151,  1154,  1157,  1159,  1161,  1162,  1166,
    1168,  1170,  1172,  1174,  1176,  1177,  1181,  1187,  1193,  1199,
    1204,  1209,  1214,  1217,  1222,  1226,  1230,  1234,  1238,  1242,
    1246,  1250,  1255,  1258,  1259,  1261,  1264,  1269,  1271,  1273,
    1274,  1275,  1278,  1281,  1282,  1284,  1285,  1287,  1291,  1293,
    1297,  1302,  1304,  1306,  1310,  1312,  1316,  1322,  1329,  1332,
    1333,  1337,  1341,  1343,  1347,  1352,  1354,  1356,  1358,  1359,
    1363,  1364,  1367,  1371,  1374,  1377,  1382,  1383,  1385,  1386,
    1388,  1390,  1397,  1399,  1403,  1406,  1408,  1410,  1413,  1415,
    1417,  1420,  1422,  1424,  1426,  1428,  1430,  1431,  1433,  1435,
    1441,  1444,  1445,  1450,  1452,  1454,  1456,  1458,  1460,  1463,
    1465,  1469,  1473,  1477,  1482,  1487,  1493,  1499,  1503,  1505,
    1507,  1509,  1513,  1516,  1517,  1519,  1523,  1527,  1529,  1531,
    1536,  1543,  1545,  1549,  1553,  1558,  1563,  1569,  1571,  1572,
    1574,  1576,  1577,  1581,  1585,  1589,  1592,  1597,  1605,  1613,
    1620,  1627,  1628,  1630,  1632,  1636,  1646,  1649,  1650,  1654,
    1658,  1662,  1663,  1665,  1667,  1669,  1671,  1675,  1682,  1683,
    1685,  1687,  1689,  1691,  1693,  1695,  1697,  1699,  1701,  1703,
    1705,  1707,  1709,  1711,  1713,  1715,  1717,  1719,  1721,  1723,
    1725,  1727,  1729,  1731,  1733,  1735,  1737,  1739,  1741,  1743,
    1745,  1747,  1750,  1757,  1763,  1767,  1769,  1772,  1776,  1780,
    1784,  1788,  1789,  1791,  1794,  1796,  1798,  1800,  1802,  1804,
    1806,  1808,  1811,  1814,  1817,  1820,  1823,  1826,  1829,  1832,
    1835,  1838,  1841,  1844,  1847,  1850,  1853,  1855,  1857,  1859,
    1862,  1864,  1866,  1868,  1870,  1872,  1874,  1877,  1880,  1883,
    1886,  1889,  1892,  1895,  1898,  1901,  1904,  1907,  1910,  1913,
    1916,  1919,  1921,  1923,  1928,  1935,  1939,  1949,  1958,  1967,
    1975,  1977,  1980,  1985,  1988,  1996,  1999,  2001,  2006,  2007,
    2010,  2016,  2024,  2026,  2029,  2032,  2038,  2043,  2049,  2053
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     233,     0,    -1,   234,   104,    -1,   234,   230,   235,    -1,
     235,    -1,   417,    -1,   442,    -1,   444,    -1,   443,    -1,
     263,    -1,   265,    -1,   266,    -1,   281,    -1,   274,    -1,
     275,    -1,   276,    -1,   277,    -1,   279,    -1,   280,    -1,
     311,    -1,   304,    -1,   282,    -1,   257,    -1,   254,    -1,
     253,    -1,   298,    -1,   301,    -1,   346,    -1,   349,    -1,
     385,    -1,   388,    -1,   393,    -1,   398,    -1,   404,    -1,
     396,    -1,   356,    -1,   361,    -1,   363,    -1,   365,    -1,
     368,    -1,   378,    -1,   383,    -1,   372,    -1,   373,    -1,
     374,    -1,   375,    -1,    -1,   241,    -1,   236,   231,   241,
      -1,   412,    -1,   413,    42,   412,    -1,   413,    42,    34,
      -1,     4,    -1,     6,    -1,     5,    -1,     9,    -1,     8,
      -1,    10,    -1,    12,    -1,    14,    -1,    13,    -1,   167,
      42,   412,    -1,   237,    -1,   238,    -1,    40,   241,    41,
      -1,    40,   236,   231,   241,    41,    -1,   243,    -1,   248,
      -1,   249,    -1,   312,    -1,   107,   312,    -1,   239,    -1,
      32,   240,    -1,    33,   240,    -1,   240,    32,   240,    -1,
     240,    33,   240,    -1,   240,    34,   240,    -1,   240,    35,
     240,    -1,   240,    36,   240,    -1,   240,    38,   240,    -1,
     240,    37,   240,    -1,   239,    -1,    32,   241,    -1,    33,
     241,    -1,   241,    32,   241,    -1,   241,    33,   241,    -1,
     241,    34,   241,    -1,   241,    35,   241,    -1,   241,    36,
     241,    -1,   241,    38,   241,    -1,   241,    37,   241,    -1,
     241,    26,   241,    -1,   241,    25,   241,    -1,   241,    24,
     241,    -1,   241,    22,   241,    -1,   241,    23,   241,    -1,
     241,    21,   241,    -1,   241,    28,   241,    -1,   241,    20,
      28,   241,    -1,   241,    19,   241,    -1,   241,    18,   241,
      -1,    20,   241,    -1,   241,    31,    10,    -1,   241,    31,
      20,    10,    -1,   241,    31,     8,    -1,   241,    31,    20,
       8,    -1,   241,    31,    11,    -1,   241,    31,    20,    11,
      -1,   241,    29,   240,    19,   240,    -1,   241,    20,    29,
     240,    19,   240,    -1,   241,    30,   242,    -1,   241,    20,
      30,   242,    -1,   241,    27,   241,    -1,   312,    -1,    40,
     236,    41,    -1,    77,   244,   245,   247,   103,    -1,   241,
      -1,    -1,   246,    -1,   245,   246,    -1,   196,   241,   182,
     241,    -1,   102,   241,    -1,    -1,   414,    40,    34,    41,
      -1,   414,    40,   252,   241,    41,    -1,   414,    40,   236,
      41,    -1,   414,    40,   241,    68,   287,    41,    -1,   414,
      40,   329,    41,    -1,   414,    40,    41,    -1,   250,    40,
     251,    41,    -1,   215,    -1,   311,    -1,   304,    -1,   254,
      -1,   253,    -1,    66,    -1,    98,    -1,    95,   111,   342,
     318,   305,    -1,   189,   320,   342,   168,   255,   318,   305,
      -1,   256,    -1,   255,   231,   256,    -1,   412,    24,   241,
      -1,    85,   203,   283,   342,   143,   342,   258,   259,   261,
      -1,    40,   308,    41,    -1,   204,   260,    -1,    -1,    40,
     308,    41,    -1,   262,    -1,   261,   231,   262,    -1,    -1,
     296,    -1,    44,   264,    54,   110,   311,    -1,   415,    -1,
      55,   264,    -1,    56,   264,    -1,    56,   264,    58,    -1,
      56,   264,   128,   395,    -1,    56,   264,    58,   128,   395,
      -1,    56,   264,    60,   128,   395,    -1,    56,   264,    59,
     128,   395,    -1,    56,   264,    61,   128,   395,    -1,    56,
     264,    62,     5,   128,   395,    -1,    56,   264,   278,    63,
       5,   128,   395,    -1,    56,   264,    59,    -1,    56,   264,
      60,    -1,    56,   264,    61,    -1,    56,   264,   278,    63,
       5,    -1,    58,    -1,    59,    -1,    56,   264,    62,     5,
      -1,    56,   264,   111,     5,   188,     5,    -1,    57,   264,
      -1,    85,   180,   283,   342,    40,   284,    41,   295,    -1,
     124,    20,   107,    -1,    -1,   285,    -1,   284,   231,   285,
      -1,   286,    -1,   151,   131,    40,   308,    41,    -1,   412,
     287,   293,    -1,   185,    -1,   170,    -1,   137,    -1,   126,
      -1,    71,    -1,    93,   288,    -1,   141,   288,    -1,    73,
      -1,   109,   289,    -1,   153,    -1,    99,   290,    -1,   184,
     291,    -1,    91,    -1,    78,   292,    -1,    72,   292,    -1,
     193,   292,    -1,   194,   292,    -1,    86,    -1,   139,    -1,
      90,    -1,   183,   291,    -1,    40,     5,   231,     5,    41,
      -1,    40,     5,    41,    -1,    -1,    40,     5,    41,    -1,
      -1,   149,    -1,    -1,    40,     5,    41,    -1,    -1,    40,
       5,    41,    -1,    -1,   293,   294,    -1,    -1,    20,    10,
      -1,    10,    -1,    94,   238,    -1,   205,    -1,   151,   131,
      -1,   296,    -1,   295,   231,   296,    -1,    -1,   211,   297,
       4,    -1,   209,   297,     4,    -1,   223,   297,     5,    -1,
     222,   297,     5,    -1,   221,   297,     5,    -1,   213,   297,
       5,    -1,   207,   297,     4,    -1,   226,   297,     8,    -1,
     208,   297,   174,    -1,    80,   297,     4,    -1,    24,    -1,
      -1,   100,   180,   299,   300,    -1,    -1,   124,   107,    -1,
     341,    -1,   300,   231,   341,    -1,   100,   203,   299,   302,
     143,   303,    -1,    -1,   342,    -1,   302,   231,   342,    -1,
     342,    -1,   306,   128,   342,   307,   192,   309,   305,    -1,
     306,   128,   342,   311,    -1,   306,   128,   342,    40,   308,
      41,   311,    -1,    -1,   196,   241,    -1,   155,    -1,   127,
      -1,    40,   308,    41,    -1,    -1,   412,    -1,   308,   231,
     412,    -1,    40,   310,    41,    -1,   309,   231,    40,   310,
      41,    -1,   241,    -1,   310,   231,   241,    -1,   313,   305,
      -1,   312,    -1,    40,   313,    41,    -1,    40,   312,    41,
      -1,   314,    -1,   317,   328,    -1,   315,   332,   328,    -1,
     315,   331,   319,   328,    -1,   165,   320,   337,   339,   327,
      -1,   165,   320,   337,   339,   111,   101,   318,   327,    -1,
     317,    -1,   312,    -1,   165,   339,   128,   395,   111,   340,
     318,   328,    -1,   165,   320,   337,   339,   111,   340,   318,
     330,   336,    -1,   315,    16,   337,   315,    -1,   315,    17,
     337,   315,    -1,   315,    15,   337,   315,    -1,    -1,   195,
     241,    -1,   195,     7,   241,    -1,   134,   326,   142,   326,
      -1,   142,   326,   134,   326,    -1,   134,   326,    -1,   142,
     326,    -1,   134,   326,   231,   326,    -1,    -1,   120,   321,
     121,    -1,   322,    -1,   321,   231,   322,    -1,    -1,   323,
      -1,   322,   323,    -1,   152,    -1,   122,    -1,   130,    40,
     342,   231,   342,   231,   342,    42,   342,   231,   342,    42,
     342,    41,    -1,   162,    40,   325,    41,    -1,   203,    40,
     342,   342,    41,    -1,     3,    40,     3,    41,    -1,    40,
     324,    41,    -1,   324,   231,    -1,    -1,   202,    -1,   176,
      -1,   174,    -1,   113,    -1,     5,    -1,    12,    -1,    -1,
     319,    -1,    -1,   110,   189,    -1,   241,   111,   241,    -1,
      74,   241,   111,   241,    -1,   132,   241,   111,   241,    -1,
     186,   241,   111,   241,    -1,    74,   111,   241,    -1,   132,
     111,   241,    -1,   186,   111,   241,    -1,    -1,   118,    75,
     236,    -1,   332,    -1,    -1,   144,    75,   333,    -1,   334,
      -1,   333,   231,   334,    -1,   241,   335,    -1,    -1,    69,
      -1,    96,    -1,    -1,   119,   241,    -1,    -1,    66,    -1,
      98,    -1,   241,    -1,   241,   415,    -1,   241,    68,   415,
      -1,    34,    -1,   338,    -1,   339,   231,   338,    -1,   341,
      -1,   340,   231,   341,    -1,   342,    -1,   342,    68,   413,
      -1,   342,   413,    -1,   312,    68,   413,    -1,   312,   413,
      -1,   343,    -1,    40,   343,    41,    68,   413,    -1,   413,
      -1,    40,   343,    41,    -1,   341,   344,   129,   341,   143,
     241,    -1,   341,   129,   341,   143,   241,    -1,   112,   345,
      -1,   133,   345,    -1,   159,   345,    -1,   125,    -1,   146,
      -1,    -1,   108,   348,   347,    -1,   311,    -1,   253,    -1,
     304,    -1,   254,    -1,   228,    -1,    -1,   169,   181,   353,
      -1,   169,   203,   143,   342,   353,    -1,   169,    84,   111,
     342,   353,    -1,   169,    84,    30,   342,   353,    -1,   169,
     180,   220,   353,    -1,   169,   216,   220,   353,    -1,   169,
     352,   227,   353,    -1,   169,   163,    -1,   169,    85,   180,
     342,    -1,    97,   342,   354,    -1,    96,   342,   354,    -1,
     169,   229,   350,    -1,   169,   248,   229,    -1,   169,   210,
     351,    -1,   169,   147,   353,    -1,   169,   355,   199,    -1,
     134,     5,   231,     5,    -1,   134,     5,    -1,    -1,   364,
      -1,   110,    87,    -1,   110,    87,    40,    41,    -1,   115,
      -1,   166,    -1,    -1,    -1,    28,     4,    -1,   195,   241,
      -1,    -1,     4,    -1,    -1,   112,    -1,    85,   190,   357,
      -1,   358,    -1,   357,   231,   358,    -1,   359,   123,    75,
     360,    -1,     4,    -1,     4,    -1,   100,   190,   362,    -1,
     359,    -1,   362,   231,   359,    -1,   168,   148,   364,    24,
     360,    -1,    67,   190,   359,   123,    75,   360,    -1,   110,
     359,    -1,    -1,   154,   190,   367,    -1,   359,   188,   359,
      -1,   366,    -1,   367,   231,   366,    -1,    67,   190,   359,
     369,    -1,   136,    -1,   224,    -1,   198,    -1,    -1,   197,
      82,   171,    -1,    -1,    70,   370,    -1,   173,   187,   371,
      -1,    81,   370,    -1,   160,   370,    -1,   161,   376,   377,
       5,    -1,    -1,   115,    -1,    -1,   200,    -1,   201,    -1,
     117,   379,   143,   382,   188,   362,    -1,   380,    -1,   379,
     231,   380,    -1,    66,   381,    -1,    67,    -1,    85,    -1,
      85,   190,    -1,    95,    -1,   100,    -1,   117,   145,    -1,
     127,    -1,   189,    -1,   165,    -1,   155,    -1,   157,    -1,
      -1,    34,    -1,   413,    -1,   158,   379,   384,   111,   362,
      -1,   143,   382,    -1,    -1,   150,   386,   111,   387,    -1,
     415,    -1,   311,    -1,   304,    -1,   254,    -1,   253,    -1,
     168,   389,    -1,   390,    -1,   389,   231,   390,    -1,    14,
     391,   241,    -1,   412,   391,   241,    -1,   115,   412,   391,
     241,    -1,   166,   412,   391,   241,    -1,   116,    42,   412,
     391,   241,    -1,   167,    42,   412,   391,   241,    -1,    13,
     391,   241,    -1,   188,    -1,    24,    -1,    14,    -1,   106,
     386,   394,    -1,   191,   395,    -1,    -1,   392,    -1,   395,
     231,   392,    -1,   397,   150,   386,    -1,    92,    -1,   100,
      -1,    67,   180,   342,   399,    -1,    67,   180,   342,   154,
     188,   342,    -1,   400,    -1,   399,   231,   400,    -1,    64,
     401,   286,    -1,   100,   401,   412,   402,    -1,    67,   401,
     412,   403,    -1,   154,   401,   412,   188,   415,    -1,    83,
      -1,    -1,    76,    -1,   156,    -1,    -1,   168,    20,    10,
      -1,   100,    20,    10,    -1,   168,    94,   238,    -1,   100,
      94,    -1,    67,   175,   168,   406,    -1,    67,   175,   405,
      88,   140,    24,     4,    -1,    67,   175,   405,    89,   140,
      24,     4,    -1,    67,   175,   177,   140,    24,     4,    -1,
      67,   175,   178,   179,    24,     4,    -1,    -1,   114,    -1,
     407,    -1,   406,   231,   407,    -1,   412,    24,   238,   408,
     409,   219,    24,   410,   411,    -1,    80,     4,    -1,    -1,
     164,    24,   138,    -1,   164,    24,   172,    -1,   164,    24,
      74,    -1,    -1,   214,    -1,   225,    -1,   206,    -1,   212,
      -1,    79,    24,     5,    -1,   217,    24,     4,   218,    24,
       5,    -1,    -1,     3,    -1,   416,    -1,     3,    -1,   416,
      -1,     3,    -1,     3,    -1,   416,    -1,   205,    -1,   206,
      -1,   207,    -1,   208,    -1,   209,    -1,   210,    -1,   211,
      -1,   212,    -1,   213,    -1,   214,    -1,   215,    -1,   216,
      -1,   217,    -1,   218,    -1,   219,    -1,   220,    -1,   222,
      -1,   221,    -1,   223,    -1,   224,    -1,   225,    -1,   226,
      -1,   227,    -1,   228,    -1,   229,    -1,   418,   421,    -1,
      85,    43,     3,    40,   419,    41,    -1,    85,    43,     3,
      40,    41,    -1,   419,   231,   420,    -1,   420,    -1,    14,
     287,    -1,    30,    14,   287,    -1,    46,    14,   287,    -1,
      47,    14,   287,    -1,    70,   422,   103,    -1,    -1,   423,
      -1,   423,   424,    -1,   424,    -1,   430,    -1,   434,    -1,
     439,    -1,   438,    -1,   428,    -1,   429,    -1,   316,   230,
      -1,   304,   230,    -1,   254,   230,    -1,   253,   230,    -1,
     311,   230,    -1,   263,   230,    -1,   265,   230,    -1,   281,
     230,    -1,   267,   230,    -1,   268,   230,    -1,   269,   230,
      -1,   271,   230,    -1,   270,   230,    -1,   272,   230,    -1,
     273,   230,    -1,   441,    -1,   440,    -1,   426,    -1,   426,
     427,    -1,   427,    -1,   430,    -1,   434,    -1,   439,    -1,
     438,    -1,   429,    -1,   316,   230,    -1,   304,   230,    -1,
     254,   230,    -1,   253,   230,    -1,   311,   230,    -1,   263,
     230,    -1,   265,   230,    -1,   281,   230,    -1,   267,   230,
      -1,   268,   230,    -1,   269,   230,    -1,   271,   230,    -1,
     270,   230,    -1,   272,   230,    -1,   273,   230,    -1,   441,
      -1,   440,    -1,    44,   395,   287,   230,    -1,    44,   395,
     287,    94,   238,   230,    -1,   168,   389,   230,    -1,   124,
     241,   182,   425,   431,   433,   103,   124,   230,    -1,   124,
     241,   182,   425,   431,   103,   124,   230,    -1,   124,   241,
     182,   425,   433,   103,   124,   230,    -1,   124,   241,   182,
     425,   103,   124,   230,    -1,   432,    -1,   431,   432,    -1,
      45,   241,   182,   425,    -1,   102,   425,    -1,    77,   241,
     435,   437,   103,    77,   230,    -1,   435,   436,    -1,   436,
      -1,   196,   241,   182,   425,    -1,    -1,   102,   425,    -1,
      49,   425,   103,    49,   230,    -1,    48,   241,    52,   425,
     103,    48,   230,    -1,   230,    -1,    50,   230,    -1,    51,
     230,    -1,    53,     3,    40,   236,    41,    -1,    53,     3,
      40,    41,    -1,   100,    43,   124,   107,     3,    -1,   100,
      43,     3,    -1,   169,    43,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   246,   246,   255,   262,   269,   270,   271,   272,   275,
     276,   277,   278,   279,   281,   282,   283,   284,   285,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   324,   328,   335,
     337,   343,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   365,   367,   369,   371,   377,   385,   389,   393,
     397,   405,   406,   410,   414,   415,   416,   417,   418,   419,
     420,   423,   424,   428,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     451,   455,   459,   463,   467,   471,   475,   479,   483,   487,
     491,   495,   499,   506,   510,   515,   523,   524,   528,   530,
     535,   542,   543,   547,   561,   589,   664,   680,   684,   706,
     714,   721,   722,   723,   724,   728,   732,   746,   760,   770,
     774,   781,   795,   811,   818,   824,   830,   837,   841,   846,
     852,   869,   880,   893,   909,   915,   929,   944,   959,   975,
     991,  1007,  1024,  1040,  1061,  1080,  1097,  1110,  1115,  1130,
    1147,  1167,  1187,  1204,  1207,  1211,  1215,  1222,  1226,  1235,
    1244,  1246,  1248,  1250,  1252,  1254,  1263,  1272,  1274,  1276,
    1278,  1283,  1290,  1292,  1299,  1306,  1313,  1320,  1322,  1324,
    1330,  1342,  1344,  1347,  1351,  1352,  1356,  1357,  1361,  1362,
    1366,  1367,  1371,  1374,  1378,  1383,  1388,  1390,  1392,  1397,
    1401,  1406,  1412,  1417,  1422,  1427,  1432,  1437,  1442,  1447,
    1452,  1458,  1466,  1467,  1478,  1488,  1489,  1494,  1498,  1512,
    1522,  1524,  1528,  1535,  1546,  1560,  1571,  1589,  1590,  1597,
    1602,  1610,  1615,  1619,  1620,  1627,  1631,  1637,  1638,  1652,
    1662,  1667,  1668,  1672,  1676,  1681,  1691,  1712,  1734,  1760,
    1761,  1769,  1801,  1827,  1849,  1871,  1897,  1898,  1902,  1909,
    1917,  1925,  1929,  1933,  1945,  1948,  1962,  1966,  1971,  1977,
    1981,  1988,  1992,  1996,  2000,  2006,  2012,  2019,  2026,  2031,
    2037,  2041,  2045,  2049,  2055,  2057,  2063,  2064,  2070,  2071,
    2079,  2086,  2093,  2100,  2107,  2118,  2129,  2144,  2145,  2152,
    2153,  2157,  2164,  2166,  2171,  2179,  2180,  2182,  2188,  2189,
    2197,  2200,  2204,  2211,  2216,  2224,  2232,  2242,  2246,  2253,
    2255,  2260,  2264,  2268,  2272,  2276,  2280,  2284,  2293,  2301,
    2305,  2309,  2318,  2324,  2330,  2336,  2343,  2344,  2354,  2362,
    2363,  2364,  2365,  2369,  2370,  2381,  2383,  2385,  2387,  2389,
    2391,  2393,  2398,  2400,  2402,  2404,  2406,  2410,  2423,  2427,
    2431,  2439,  2448,  2458,  2462,  2464,  2466,  2471,  2472,  2473,
    2478,  2479,  2481,  2487,  2488,  2493,  2494,  2504,  2510,  2514,
    2520,  2526,  2532,  2544,  2550,  2554,  2566,  2570,  2576,  2581,
    2592,  2598,  2604,  2608,  2620,  2626,  2631,  2645,  2650,  2654,
    2659,  2663,  2669,  2681,  2693,  2705,  2712,  2716,  2724,  2728,
    2733,  2747,  2758,  2762,  2768,  2774,  2779,  2784,  2789,  2794,
    2799,  2804,  2809,  2814,  2819,  2826,  2831,  2836,  2841,  2853,
    2893,  2898,  2910,  2917,  2922,  2924,  2926,  2928,  2940,  2948,
    2952,  2959,  2965,  2972,  2979,  2986,  2993,  3000,  3009,  3010,
    3014,  3025,  3032,  3037,  3042,  3046,  3059,  3067,  3069,  3080,
    3086,  3097,  3101,  3108,  3113,  3119,  3124,  3133,  3134,  3138,
    3139,  3140,  3144,  3149,  3154,  3158,  3172,  3178,  3185,  3192,
    3199,  3209,  3212,  3220,  3224,  3231,  3246,  3249,  3253,  3255,
    3257,  3260,  3264,  3269,  3274,  3279,  3287,  3291,  3296,  3307,
    3309,  3326,  3328,  3345,  3349,  3351,  3364,  3365,  3366,  3367,
    3368,  3369,  3370,  3371,  3372,  3373,  3374,  3375,  3376,  3377,
    3378,  3379,  3380,  3381,  3382,  3383,  3384,  3385,  3386,  3387,
    3388,  3398,  3403,  3410,  3418,  3422,  3427,  3431,  3435,  3439,
    3444,  3451,  3454,  3459,  3463,  3468,  3470,  3472,  3474,  3476,
    3478,  3480,  3482,  3484,  3486,  3488,  3490,  3492,  3494,  3496,
    3498,  3500,  3502,  3504,  3506,  3508,  3511,  3513,  3520,  3525,
    3529,  3534,  3536,  3538,  3540,  3542,  3544,  3546,  3548,  3550,
    3552,  3554,  3556,  3558,  3560,  3562,  3564,  3566,  3568,  3570,
    3572,  3575,  3577,  3585,  3591,  3603,  3615,  3621,  3627,  3631,
    3636,  3640,  3645,  3651,  3662,  3669,  3673,  3678,  3684,  3687,
    3698,  3708,  3714,  3724,  3729,  3741,  3749,  3762,  3766,  3780
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
  "LEFT", "LIMIT", "LOCAL", "LOCKED", "MEDIUMINT", "MEMORY", "MODIFYTIME",
  "MASTER", "NUMERIC", "OFFSET", "ON", "ORDER", "OPTION", "OUTER",
  "PARAMETERS", "PASSWORD", "PRECISION", "PREPARE", "PRIMARY",
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
     235,   235,   235,   235,   235,   235,   235,   236,   236,   237,
     237,   237,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   242,   242,   243,   244,   244,   245,   245,
     246,   247,   247,   248,   248,   248,   248,   248,   248,   249,
     250,   251,   251,   251,   251,   252,   252,   253,   254,   255,
     255,   256,   257,   258,   259,   259,   260,   261,   261,   261,
     262,   263,   264,   265,   266,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   278,   279,
     280,   281,   282,   283,   283,   284,   284,   285,   285,   286,
     287,   287,   287,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   287,   287,   287,   287,   287,   287,   287,
     287,   288,   288,   288,   289,   289,   290,   290,   291,   291,
     292,   292,   293,   293,   294,   294,   294,   294,   294,   295,
     295,   295,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   297,   297,   298,   299,   299,   300,   300,   301,
     302,   302,   302,   303,   304,   304,   304,   305,   305,   306,
     306,   307,   307,   308,   308,   309,   309,   310,   310,   311,
     311,   312,   312,   313,   313,   313,   313,   314,   314,   315,
     315,   316,   317,   317,   317,   317,   318,   318,   318,   319,
     319,   319,   319,   319,   320,   320,   321,   321,   321,   322,
     322,   323,   323,   323,   323,   323,   323,   323,   324,   324,
     325,   325,   325,   325,   326,   326,   327,   327,   328,   328,
     329,   329,   329,   329,   329,   329,   329,   330,   330,   331,
     331,   332,   333,   333,   334,   335,   335,   335,   336,   336,
     337,   337,   337,   338,   338,   338,   338,   339,   339,   340,
     340,   341,   341,   341,   341,   341,   341,   341,   342,   343,
     343,   343,   344,   344,   344,   344,   345,   345,   346,   347,
     347,   347,   347,   348,   348,   349,   349,   349,   349,   349,
     349,   349,   349,   349,   349,   349,   349,   349,   349,   349,
     349,   350,   350,   350,   351,   351,   351,   352,   352,   352,
     353,   353,   353,   354,   354,   355,   355,   356,   357,   357,
     358,   359,   360,   361,   362,   362,   363,   363,   364,   364,
     365,   366,   367,   367,   368,   369,   369,   370,   370,   371,
     371,   372,   372,   373,   374,   375,   376,   376,   377,   377,
     377,   378,   379,   379,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   381,   381,   382,   382,   383,
     384,   384,   385,   386,   387,   387,   387,   387,   388,   389,
     389,   390,   390,   390,   390,   390,   390,   390,   391,   391,
     392,   393,   394,   394,   395,   395,   396,   397,   397,   398,
     398,   399,   399,   400,   400,   400,   400,   401,   401,   402,
     402,   402,   403,   403,   403,   403,   404,   404,   404,   404,
     404,   405,   405,   406,   406,   407,   408,   408,   409,   409,
     409,   409,   410,   410,   410,   410,   411,   411,   411,   412,
     412,   413,   413,   414,   415,   415,   416,   416,   416,   416,
     416,   416,   416,   416,   416,   416,   416,   416,   416,   416,
     416,   416,   416,   416,   416,   416,   416,   416,   416,   416,
     416,   417,   418,   418,   419,   419,   420,   420,   420,   420,
     421,   422,   422,   423,   423,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   425,   426,
     426,   427,   427,   427,   427,   427,   427,   427,   427,   427,
     427,   427,   427,   427,   427,   427,   427,   427,   427,   427,
     427,   427,   427,   428,   428,   429,   430,   430,   430,   430,
     431,   431,   432,   433,   434,   435,   435,   436,   437,   437,
     438,   439,   440,   441,   441,   442,   442,   443,   443,   444
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     3,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     3,     5,     1,     1,     1,     1,
       2,     1,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     1,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     3,
       3,     2,     3,     4,     3,     4,     3,     4,     5,     6,
       3,     4,     3,     1,     3,     5,     1,     0,     1,     2,
       4,     2,     0,     4,     5,     4,     6,     4,     3,     4,
       1,     1,     1,     1,     1,     1,     1,     5,     7,     1,
       3,     3,     9,     3,     2,     0,     3,     1,     3,     0,
       1,     5,     1,     2,     2,     3,     4,     5,     5,     5,
       5,     6,     7,     3,     3,     3,     5,     1,     1,     4,
       6,     2,     8,     3,     0,     1,     3,     1,     5,     3,
       1,     1,     1,     1,     1,     2,     2,     1,     2,     1,
       2,     2,     1,     2,     2,     2,     2,     1,     1,     1,
       2,     5,     3,     0,     3,     0,     1,     0,     3,     0,
       3,     0,     2,     0,     2,     1,     2,     1,     2,     1,
       3,     0,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     0,     4,     0,     2,     1,     3,     6,
       0,     1,     3,     1,     7,     4,     7,     0,     2,     1,
       1,     3,     0,     1,     3,     3,     5,     1,     3,     2,
       1,     3,     3,     1,     2,     3,     4,     5,     8,     1,
       1,     8,     9,     4,     4,     4,     0,     2,     3,     4,
       4,     2,     2,     4,     0,     3,     1,     3,     0,     1,
       2,     1,     1,    14,     4,     5,     4,     3,     2,     0,
       1,     1,     1,     1,     1,     1,     0,     1,     0,     2,
       3,     4,     4,     4,     3,     3,     3,     0,     3,     1,
       0,     3,     1,     3,     2,     0,     1,     1,     0,     2,
       0,     1,     1,     1,     2,     3,     1,     1,     3,     1,
       3,     1,     3,     2,     3,     2,     1,     5,     1,     3,
       6,     5,     2,     2,     2,     1,     1,     0,     3,     1,
       1,     1,     1,     1,     0,     3,     5,     5,     5,     4,
       4,     4,     2,     4,     3,     3,     3,     3,     3,     3,
       3,     4,     2,     0,     1,     2,     4,     1,     1,     0,
       0,     2,     2,     0,     1,     0,     1,     3,     1,     3,
       4,     1,     1,     3,     1,     3,     5,     6,     2,     0,
       3,     3,     1,     3,     4,     1,     1,     1,     0,     3,
       0,     2,     3,     2,     2,     4,     0,     1,     0,     1,
       1,     6,     1,     3,     2,     1,     1,     2,     1,     1,
       2,     1,     1,     1,     1,     1,     0,     1,     1,     5,
       2,     0,     4,     1,     1,     1,     1,     1,     2,     1,
       3,     3,     3,     4,     4,     5,     5,     3,     1,     1,
       1,     3,     2,     0,     1,     3,     3,     1,     1,     4,
       6,     1,     3,     3,     4,     4,     5,     1,     0,     1,
       1,     0,     3,     3,     3,     2,     4,     7,     7,     6,
       6,     0,     1,     1,     3,     9,     2,     0,     3,     3,
       3,     0,     1,     1,     1,     1,     3,     6,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     6,     5,     3,     1,     2,     3,     3,     3,
       3,     0,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     1,     4,     6,     3,     9,     8,     8,     7,
       1,     2,     4,     2,     7,     2,     1,     4,     0,     2,
       5,     7,     1,     2,     2,     5,     4,     5,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      46,     0,     0,     0,     0,     0,     0,     0,   418,   418,
       0,   477,     0,     0,     0,   478,     0,   364,     0,   250,
       0,     0,   249,     0,   418,   426,   284,     0,   389,     0,
     284,     0,     0,     4,    24,    23,    22,     9,    10,    11,
      13,    14,    15,    16,    17,    18,    12,    21,    25,    26,
      20,     0,    19,   270,   247,   263,   320,   269,    27,    28,
      35,    36,    37,    38,    39,    42,    43,    44,    45,    40,
      41,    29,    30,    31,    34,     0,    32,    33,     5,     0,
       6,     8,     7,   270,     0,   524,   526,   527,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   543,   542,   544,   545,   546,   547,   548,   549,
     550,     0,   152,   525,     0,   153,   154,   171,   501,     0,
       0,   417,   421,   423,     0,   174,     0,   174,     0,   521,
     393,   348,   522,   393,     0,   235,     0,   235,   473,   453,
     363,     0,   446,   435,   436,   438,   439,     0,   441,   444,
     443,   442,     0,   432,     0,     0,   451,   424,   427,   428,
     288,   330,   519,     0,     0,     0,     0,   409,     0,     0,
     458,   459,     0,   520,   523,     0,     0,     0,   396,   387,
     390,   372,   388,     0,   390,     0,   409,     0,   383,     0,
       0,     0,     0,   420,     0,     1,     2,    46,     0,     0,
     259,   330,   330,   330,     0,     0,   308,     0,   264,     0,
     561,   551,   262,   261,     0,     0,   155,   163,   164,   165,
       0,     0,     0,   502,     0,     0,     0,     0,     0,   401,
       0,     0,     0,     0,   397,   398,     0,     0,   276,   394,
     375,   374,   638,     0,     0,     0,   404,   403,   240,     0,
     471,   360,   362,   361,   359,   358,   445,   434,   437,   440,
       0,     0,     0,     0,   412,   410,     0,     0,   429,   430,
       0,     0,   299,   292,     0,   291,     0,     0,     0,   286,
     289,   331,   332,     0,   469,   468,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   639,     0,     0,     0,
       0,     0,   379,   390,   365,     0,     0,   378,   384,   390,
       0,   376,   377,   390,   380,     0,     0,   422,     0,     3,
     252,   519,    52,    54,    53,    56,    55,    57,    58,    60,
      59,     0,     0,     0,     0,   117,     0,     0,   536,    62,
      63,    81,   248,    66,    67,    68,     0,    69,    49,     0,
     520,     0,     0,     0,     0,     0,     0,   308,   265,   309,
     476,     0,     0,     0,     0,     0,     0,     0,     0,   284,
       0,   632,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   562,   564,
     569,   570,   565,   566,   568,   567,   587,   586,     0,   636,
       0,    47,   169,     0,     0,   496,   503,     0,     0,     0,
       0,     0,   488,   488,   488,   488,   479,   481,     0,   415,
     416,   414,     0,     0,     0,     0,     0,     0,     0,   247,
       0,   236,     0,   234,     0,   237,   341,   346,     0,     0,
     241,   470,   474,   472,   447,     0,   448,   433,   457,   456,
     455,   454,   452,     0,     0,   450,     0,   425,     0,     0,
       0,     0,     0,   285,     0,   290,   336,   333,   337,   306,
     467,   461,     0,     0,   408,     0,     0,     0,   460,   462,
     390,   390,   373,   391,   392,   369,   390,   385,   370,   382,
     371,     0,   128,   135,     0,   136,     0,     0,     0,    47,
       0,     0,     0,     0,     0,     0,   245,   101,    82,    83,
       0,    47,    69,   116,     0,    70,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     284,   270,   275,   269,   273,   274,   325,   321,   322,   304,
     305,   281,   282,   266,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   588,   590,   595,   591,   592,   594,   593,   612,
     611,   633,   634,     0,     0,     0,     0,     0,   574,   573,
     576,   577,   579,   580,   581,   583,   582,   584,   585,   578,
     572,   575,   571,   560,   563,   151,   635,     0,     0,   166,
       0,     0,     0,     0,     0,     0,   487,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   553,     0,     0,     0,
     555,   173,     0,   399,     0,     0,     0,   277,   137,   637,
     270,     0,   346,     0,     0,   345,   357,   355,     0,   357,
     357,     0,     0,   343,   405,     0,     0,     0,     0,   411,
     413,   449,     0,   297,   298,     0,   303,   302,   301,   300,
       0,     0,   287,     0,   334,     0,     0,   307,   267,   463,
       0,   402,   406,   464,     0,   368,   367,   366,     0,     0,
     123,     0,     0,     0,     0,     0,     0,   125,     0,     0,
       0,   127,   419,   276,   139,     0,     0,   253,     0,     0,
      64,     0,   122,   118,    61,   100,    99,     0,     0,     0,
      96,    94,    95,    93,    92,    91,   112,    97,     0,     0,
      71,     0,     0,   110,   113,   104,   102,   106,     0,    84,
      85,    86,    87,    88,    90,    89,     0,   134,   133,   132,
     131,    51,    50,   330,   326,   327,   324,     0,     0,     0,
       0,   184,   211,   187,   211,   197,   199,   192,   203,   207,
     205,   183,   182,   198,   203,   189,   181,   209,   209,   180,
     211,   211,     0,     0,   599,   598,   601,   602,   604,   605,
     606,   608,   607,   609,   610,   603,   597,   600,   596,     0,
     589,   167,   168,     0,     0,     0,     0,     0,     0,   628,
     626,     0,     0,   615,    48,   170,   504,   507,   499,   500,
       0,     0,   483,     0,     0,   491,   480,     0,   488,   482,
     407,   556,     0,     0,     0,   552,     0,     0,     0,   175,
     177,   400,     0,   278,   349,   238,   344,   356,   352,     0,
     353,   354,     0,   342,   239,   243,   242,   475,   431,   296,
       0,   294,     0,   335,   276,   276,   339,   338,   465,   466,
     386,   381,   314,     0,   315,     0,   316,     0,     0,   310,
     124,     0,   247,     0,   251,     0,     0,   247,    48,     0,
       0,   119,     0,    98,     0,   111,    72,    73,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   105,   103,   107,
     129,     0,   323,   279,   283,   280,     0,   194,   193,     0,
     185,   206,   190,     0,   188,   186,     0,   200,   191,   195,
     196,     0,   613,     0,     0,     0,     0,     0,     0,     0,
     156,     0,     0,     0,   625,     0,     0,     0,     0,   511,
     497,   498,   213,     0,     0,   485,   489,   490,   484,     0,
     557,   558,   559,   554,     0,   221,     0,     0,   145,     0,
       0,     0,     0,   295,   306,     0,   317,   311,   312,   313,
     126,   140,   138,   141,   246,   254,   257,     0,     0,   244,
      65,     0,   121,   115,     0,   108,    74,    75,    76,    77,
      78,    80,    79,   114,     0,     0,     0,     0,     0,     0,
       0,   630,   157,   159,   158,   160,     0,     0,     0,   629,
       0,     0,     0,     0,     0,   620,     0,     0,   506,     0,
       0,   179,     0,   495,     0,     0,   486,     0,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   172,   219,
     176,     0,     0,   149,   347,   351,     0,     0,   268,   340,
       0,   328,   255,     0,     0,   120,   109,     0,   210,   202,
       0,   204,   208,   614,     0,   161,     0,   627,     0,     0,
     623,     0,     0,   621,     0,     0,   276,     0,     0,   215,
       0,     0,     0,   217,   212,   493,   492,   494,     0,   232,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   143,     0,   144,   142,   147,   150,   350,     0,     0,
       0,   272,   258,     0,     0,   631,   162,   624,     0,   619,
       0,     0,     0,   308,   510,   508,   509,     0,   214,   216,
     218,   178,   231,   228,   230,   223,   222,   227,   226,   225,
     224,   229,   220,     0,     0,     0,   318,   329,   256,   201,
     622,   617,     0,   618,   271,   514,   515,   512,   513,   518,
     146,   148,     0,   616,     0,     0,   505,     0,     0,     0,
       0,   516,     0,     0,     0,     0,     0,   293,   517
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    31,    32,    33,   400,   339,   340,   341,   731,   467,
     733,   343,   514,   712,   713,   892,   344,   345,   346,   746,
     500,   556,   557,   703,   704,    36,   968,  1053,  1113,  1114,
    1115,   558,   111,   559,    39,   560,   561,   562,   563,   564,
     565,   566,    40,    41,    42,    43,   222,    44,    45,   567,
      47,   233,   838,   839,   840,   782,   920,   924,   922,   927,
     917,  1031,  1094,  1048,  1116,  1100,    48,   245,   433,    49,
     439,   854,   568,   200,    51,   505,   706,   887,   987,   569,
     347,    54,    55,    56,   570,    57,   429,   677,   161,   278,
     279,   280,   459,   670,   551,   678,   208,   501,  1061,   205,
     206,   547,   548,   756,  1121,   283,   468,   469,   865,   866,
     436,   437,   651,   848,    58,   255,   141,    59,   311,   307,
     190,   302,   240,   191,    60,   234,   235,   246,   682,    61,
     247,    62,   291,    63,   264,   265,    64,   421,   122,   317,
      65,    66,    67,    68,   159,   270,    69,   152,   153,   257,
     445,    70,   267,    71,   138,   452,    72,   170,   171,   286,
     442,    73,   250,   443,    74,    75,    76,   416,   417,   621,
     958,   955,    77,   227,   405,   406,   949,  1030,  1169,  1176,
     348,   349,   192,   112,   350,    78,    79,   629,   630,   211,
     387,   388,   389,   571,   572,   573,   390,   574,   575,  1024,
    1025,  1026,   576,   809,   810,   945,   577,   578,   579,   580,
      80,    81,    82
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -936
static const yytype_int16 yypact[] =
{
    3118,    36,  2767,   150,  2767,  2767,  2767,   276,    -8,    -8,
     145,  -936,   107,  2891,  2891,   171,  2767,   104,   581,  -936,
    2767,   160,  -936,   581,    -8,   264,   273,  1279,   637,   196,
     273,   417,   -41,  -936,  -936,  -936,  -936,  -936,  -936,  -936,
    -936,  -936,  -936,  -936,  -936,  -936,  -936,  -936,  -936,  -936,
    -936,   294,  -936,    14,   233,  -936,    96,    -3,  -936,  -936,
    -936,  -936,  -936,  -936,  -936,  -936,  -936,  -936,  -936,  -936,
    -936,  -936,  -936,  -936,  -936,   281,  -936,  -936,  -936,   363,
    -936,  -936,  -936,   402,   412,  -936,  -936,  -936,  -936,  -936,
    -936,  -936,  -936,  -936,  -936,  -936,  -936,  -936,  -936,  -936,
    -936,  -936,  -936,  -936,  -936,  -936,  -936,  -936,  -936,  -936,
    -936,   405,  -936,  -936,   424,  -936,   447,  -936,    -9,  2891,
     477,  -936,  -936,  -936,   487,   380,   477,   380,  2891,  -936,
     509,  -936,  -936,   509,    63,   391,   477,   391,   334,  -936,
    -936,   421,   381,  -936,   349,  -936,  -936,   404,  -936,  -936,
    -936,  -936,   -52,  -936,   443,   477,   -45,  -936,  -936,  -104,
      90,   268,  -936,    41,    41,  2927,   508,   449,  2927,   519,
     332,  -936,    41,  -936,  -936,   561,   258,   400,  -936,  -936,
      21,  -936,  -936,   370,    21,   450,   491,   386,   473,   384,
     393,   422,   584,   429,  2891,  -936,  -936,  3118,  2891,  2386,
    -936,   268,   268,   268,   554,   185,   263,   445,  -936,  2767,
    1112,  -936,  -936,  -936,   522,  1647,   574,   576,  -936,  -936,
     638,   639,   586,  -936,  2927,   511,   480,   120,    52,  -936,
     192,   620,   642,  2891,   432,  -936,   541,  2891,   470,  -936,
    -936,  -936,  -936,   563,   565,  2576,  -936,   437,  2891,   660,
    -936,  -936,  -936,  -936,  -936,  -936,  -936,  -936,  -936,  -936,
    2614,   581,   421,   490,  -936,   444,  2614,   568,  -936,  -936,
     677,   644,  -936,  -936,   645,  -936,   646,   649,   -48,    90,
    -936,  -936,  -936,  1874,  -936,  -936,  2386,  2386,    41,  2927,
     477,   666,    41,  2927,   769,  2386,  -936,  2891,  2891,  2891,
     687,  2386,  -936,    21,  -936,  2891,    83,  -936,  -936,    21,
     688,  -936,  -936,    21,  -936,  1099,   612,  -936,   527,  -936,
      48,    82,  -936,  -936,  -936,  -936,  -936,  -936,  -936,  -936,
    -936,  2386,  2386,  2386,  1907,  2386,   656,   664,   662,  -936,
    -936,  -936,  3550,  -936,  -936,  -936,   667,  -936,  -936,   668,
     669,    97,    97,    97,  2386,   115,   115,   619,  -936,  -936,
    -936,  2639,  2386,  1538,   500,   503,  2767,  2386,  2386,  1614,
     769,  -936,   504,   505,   507,   512,   514,   517,   520,   521,
     523,   538,   539,   543,   544,   546,   547,   635,  1112,  -936,
    -936,  -936,  -936,  -936,  -936,  -936,  -936,  -936,    36,  -936,
      -7,  3550,  -936,   551,   766,   548,  -936,   754,   756,   757,
     647,   650,   702,   702,   702,   187,   555,  -936,   714,  -936,
    -936,  -936,   109,   690,   755,   477,   719,   653,  1998,   233,
     796,  -936,  2067,   570,  2664,   351,  2700,  -936,   477,   183,
    -936,  -936,  -936,   571,  -936,   616,  -936,  -936,  -936,  -936,
    -936,  -936,  -936,   477,   477,  -936,   477,  -936,   802,     7,
    2891,   208,  2891,  -936,    90,  -936,  -936,  1345,  -936,   211,
    3550,  3550,  2386,    41,  -936,   803,  2386,    41,  -936,  3550,
      21,    21,  -936,  -936,  3550,  -936,    21,   768,  -936,   578,
    -936,   773,  -936,  -936,  2154,  -936,  2230,  2310,    10,  3348,
    2386,   774,   659,  2927,  2500,   624,  -936,  2118,  -936,  -936,
     600,  3478,   433,  3550,   636,  -936,  2927,  2386,  2386,   439,
    2386,  2386,  2386,  2386,  2386,  2386,  2386,  2386,  2466,   793,
     545,  2386,  2386,  2386,  2386,  2386,  2386,  2386,   421,  2735,
     273,  -936,   817,  -936,   817,  -936,  3399,   604,  -936,  -936,
    -936,   -56,   703,  -936,   720,  3420,   608,   611,   613,   614,
     615,   618,   621,   622,   625,   626,   632,   633,   640,   641,
     648,   739,  1538,  -936,  -936,  -936,  -936,  -936,  -936,  -936,
    -936,  -936,  -936,   438,  1441,  1491,   -51,   247,  -936,  -936,
    -936,  -936,  -936,  -936,  -936,  -936,  -936,  -936,  -936,  -936,
    -936,  -936,  -936,  -936,  -936,  -936,  -936,  2386,   844,  -936,
    2927,   390,   850,   861,   845,   848,  -936,  2927,  2927,  2927,
    2891,  2927,   357,   803,  3171,   854,  -936,   860,   862,    17,
    -936,  -936,  2814,  -936,   803,  2891,  2386,  3550,  -936,  -936,
    1747,   351,   834,  2576,  2891,  -936,   731,  -936,  2576,   731,
     731,   751,  2891,  -936,  -936,  2891,  2891,   660,   477,  -936,
    -936,   437,   840,  -936,  -936,   651,  -936,  -936,  -936,  -936,
     846,  2891,    90,  2767,  -936,  2538,  1874,  -936,  -936,  3550,
    2386,  -936,  -936,  3550,  2386,  -936,  -936,  -936,   847,   881,
    -936,  2386,  1774,  2386,  2026,  2386,  3369,  -936,  3171,  2386,
    3502,  -936,  -936,  -106,  -936,   865,    26,  -936,   851,  2386,
    -936,  2386,   -23,  -936,  -936,  3570,  2118,  2386,  2466,   793,
     973,   973,   973,   973,   973,   973,  1014,  1113,  2466,  2466,
    -936,   722,  1907,  -936,  -936,  -936,  -936,  -936,   138,   486,
     486,   855,   855,   855,   855,  -936,   853,  -936,  -936,  -936,
    -936,  -936,  -936,   268,  -936,  -936,  -936,  2386,   115,   115,
     115,  -936,   856,  -936,   856,  -936,  -936,  -936,   858,   746,
     859,  -936,  -936,  -936,   858,  -936,  -936,   866,   866,  -936,
     856,   856,   -19,  1538,  -936,  -936,  -936,  -936,  -936,  -936,
    -936,  -936,  -936,  -936,  -936,  -936,  -936,  -936,  -936,   852,
    -936,   772,   779,   782,   783,   897,   660,   849,  2386,   -22,
    -936,  1538,   660,  -936,  3550,  -936,  -936,   835,  -936,  -936,
     912,   914,  -936,  3171,    -6,   270,  -936,   732,   702,  -936,
    -936,  -936,  3171,  3171,  3171,  -936,   425,   788,    43,  -936,
    -936,  -936,   882,  3550,   863,   351,  -936,  -936,  -936,   466,
    -936,  -936,  2576,  -936,  -936,  -936,  -936,  -936,   437,  -936,
    2891,  -936,   880,  -936,   470,   -91,   351,  -936,  3550,  3550,
    -936,  -936,  3550,  2386,  3550,  2386,  3550,  2386,   883,  3550,
    -936,  2927,   233,  2386,    36,  2927,  2386,   -90,  3526,  2979,
    2386,  -936,   820,  1113,   729,  -936,  -936,  -936,  2466,  2466,
    2466,  2466,  2466,  2466,  2466,  2466,    51,  -936,  -936,  -936,
    -936,  1874,  -936,  -936,  -936,  -936,   921,  -936,  -936,   922,
    -936,  -936,  -936,   923,  -936,  -936,   924,  -936,  -936,  -936,
    -936,   390,  -936,   827,   707,   660,   660,   660,   660,   804,
     571,   928,  3026,  1538,  -936,   836,   275,   -59,   934,   778,
    -936,  -936,  -936,    70,   101,  -936,  -936,  -936,  -936,  2767,
    -936,  -936,  -936,  -936,   903,   361,  2814,  2927,   743,  2891,
    2386,   502,   717,  -936,   185,  2576,   831,  3550,  3550,  3550,
    -936,  -936,  -936,  3550,  -936,  -936,  3550,    54,   910,  -936,
    -936,  2386,  3550,  -936,  2466,   682,   689,   689,   915,   915,
     915,   915,  -936,  -936,   -47,   911,    58,   913,   917,   725,
     908,  -936,   571,   571,   571,   571,   660,   832,  1538,  -936,
     884,  2386,  1538,   838,   343,  -936,   867,  2576,  -936,   935,
     744,    49,   956,  -936,   958,   390,  -936,  2927,   945,   945,
     945,   945,   945,   945,   945,   945,   945,   945,   740,  -936,
    -936,    67,   932,   361,  -936,  3550,  2386,  2891,  -936,   351,
     939,   896,  -936,  2386,  2386,  3550,   682,  2576,  -936,  -936,
    1012,  -936,  -936,  -936,   789,   571,   660,  -936,   790,  3047,
    -936,   792,   894,  -936,   920,   900,   -91,   234,  1004,  -936,
    1019,   390,   899,  -936,  -936,  -936,  -936,  -936,    68,  -936,
    1029,  1030,   864,  1032,  1033,  1034,  1035,  1048,  1049,  1054,
     361,  -936,  2927,  -936,   825,  -936,  -936,  3550,  1021,  2386,
    2386,  -936,  3550,    69,  1023,  -936,   571,  -936,  1538,  -936,
     837,   942,   839,   619,  -936,  -936,  -936,   367,  -936,  -936,
    -936,  -936,  -936,  -936,  -936,  -936,  -936,  -936,  -936,  -936,
    -936,  -936,  -936,    73,   361,  2891,   841,  3550,  -936,  -936,
    -936,  -936,   843,  -936,  -936,  -936,  -936,  -936,  -936,   -36,
    -936,  -936,   868,  -936,  1044,  1046,  -936,  2891,  1066,  1071,
    1037,  -936,   869,  2891,  1052,  1036,  1076,  -936,  -936
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -936,  -936,  -936,   885,  -307,  -936,  -588,  -371,  -358,   726,
     366,  -936,  -936,  -936,   374,  -936,  1062,  -936,  -936,  -936,
    -936,    24,    50,  -936,   214,  -936,  -936,  -936,  -936,  -936,
     -62,    35,    25,    39,  -936,  -169,  -149,  -132,  -129,  -127,
    -125,  -107,  -936,  -936,  -936,  -936,   513,  -936,  -936,    40,
    -936,   970,  -936,   132,   483,  -556,   327,  -936,  -936,   328,
    -440,  -936,  -936,  -936,  -905,  -219,  -936,   978,  -936,  -936,
    -936,  -936,    74,  -412,  -936,  -936,  -935,  -936,    53,    13,
      56,     8,  -936,    34,   -82,   134,  -666,   916,   -14,  -936,
     652,  -257,  -936,  -936,  -323,   144,  -199,  -936,  -936,  -936,
    -936,  -936,   365,  -936,  -936,  -182,   451,  -359,    93,  -230,
      32,   693,  -936,  -114,  -936,  -936,  -936,  -936,  -936,  -936,
    -936,  -142,   993,  -936,  -936,  -936,   704,   -73,  -489,  -936,
    -430,  -936,   944,  -936,   674,  -936,  -936,  -936,    91,  -936,
    -936,  -936,  -936,  -936,  -936,  -936,  -936,  1111,   874,  -936,
     870,  -936,  -936,  -936,    16,  -936,  -936,   767,   872,  -110,
     481,  -936,  -936,  -333,  -936,  -936,  -936,  -936,   533,   243,
    -936,  -936,  -936,  -936,  -936,   531,  -936,  -936,  -936,  -936,
     -21,    57,  -936,   -15,    -2,  -936,  -936,  -936,   321,  -936,
    -936,  -936,   770,  -739,  -936,   587,  -936,   -81,   -79,  -936,
     140,   146,   -78,  -936,   362,  -936,   -77,   -75,   -74,   -72,
    -936,  -936,  -936
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -524
static const yytype_int16 yytable[] =
{
     113,   139,   113,   113,   113,   139,   172,   358,   498,    84,
     586,   132,   132,    52,   113,   435,   194,   638,   113,   351,
     352,   353,   465,   817,    34,   173,   661,   510,   554,   115,
     116,   117,  1051,   552,   606,    37,   154,   882,  -308,    38,
      46,   376,   304,  1174,   933,   130,   133,   230,   663,   300,
      35,   697,  1027,   236,   287,  -260,    53,    83,   835,  1089,
    1049,   377,   295,   196,  1067,   284,   242,   884,   831,  1090,
     131,   131,   946,   463,    50,   931,     1,   812,   378,   890,
     943,   379,   263,   380,   965,   381,   758,   229,   504,   428,
    1032,   260,  1003,   271,   953,  1062,   268,   269,   266,  1069,
     123,  -308,  1098,   382,   428,   223,   199,   207,  1111,  1141,
    1158,   201,   202,   203,  1170,   157,   412,   132,  -260,   413,
     549,  1034,  -523,   624,  -521,   881,   132,   550,   386,   391,
     272,   392,   393,   394,   830,   395,   396,     1,   397,   625,
     975,   988,   878,  1091,   288,   841,   907,   292,   908,   909,
     626,   228,   414,   114,   254,   627,   628,   730,   553,   224,
     238,   485,   954,   173,  1033,   251,   173,   488,   225,   226,
     487,   490,   657,   711,   808,   759,   131,  1153,   472,   261,
     676,  1175,   476,   464,   676,   131,   261,   243,   124,   197,
     121,   252,   132,  -308,   139,  1035,   132,    53,   974,   976,
    1092,    26,   641,   407,  1019,  1152,   415,   113,   410,   411,
      52,   932,   273,    26,   134,   253,   301,   474,   128,   376,
     274,    34,   173,   385,   607,   360,   318,  -308,   858,   285,
     320,   132,    37,   474,   372,   132,    38,    46,   664,   377,
     204,   607,   275,   132,  -260,   374,   132,    35,   836,   375,
     383,   131,   276,    53,  1093,   131,   378,   885,   132,   379,
     373,   380,   540,   381,   132,   424,    53,   952,   473,   427,
     616,    50,   477,   172,   966,   451,   960,   961,   962,  1077,
     440,   382,   607,  1080,   384,  1063,   448,   173,   297,  1070,
     131,   173,   173,   277,   131,   132,   132,   132,   885,   885,
    1063,   434,   131,   132,   885,   131,   386,   391,  1134,   392,
     393,   394,   449,   395,   396,   418,   397,   446,    53,   355,
    1021,   666,   675,   446,   918,   125,   655,   356,   419,   480,
     481,   482,   140,   506,   281,   126,   450,   486,   685,   686,
     929,   930,    84,  1009,   687,   355,   956,   730,   127,   172,
     155,   135,   236,   356,   131,   131,   131,   730,   730,   113,
     894,   136,   131,   680,   113,   654,   282,   684,   173,   298,
     896,   897,  1135,   207,   137,   620,    53,  1022,  1023,   158,
     659,   263,   667,   193,   668,   542,   544,   545,  1021,  1160,
     512,   583,   515,   160,   322,   323,   324,  -319,   325,   326,
     327,   385,   328,   329,   330,  -319,  1136,   541,   541,   541,
     669,   605,   372,   845,   656,   465,   420,   195,   849,    53,
    1133,   412,   198,   374,   413,   906,   957,   375,   383,   199,
     132,   209,   132,   210,   132,   913,   914,   915,   373,   624,
      84,  1038,   676,   212,    53,  1022,  1082,  1097,  -270,  -270,
    -270,   118,   674,   213,    53,   625,   119,   414,   132,   214,
     132,     1,   384,   646,   215,   113,   120,   717,   718,   719,
     982,   627,   628,   940,   212,   989,   647,   813,   294,   947,
     648,   229,   705,   707,   649,   543,   543,   543,   640,   131,
     231,   645,   665,   653,   671,   714,   801,   802,   803,   804,
     805,   173,   173,  1139,   232,   216,   217,   218,   219,   220,
     650,   828,    84,   239,   173,   244,    12,   131,   752,   131,
     533,   534,   535,   536,   537,   249,   753,   730,   730,   730,
     730,   730,   730,   730,   730,   850,   851,   173,   256,   258,
     995,   996,   997,   998,   999,  1000,  1001,  1002,    19,   259,
     289,   750,  1004,   735,   262,   736,   737,   337,   221,   290,
      83,   293,   747,   294,   296,   738,   806,  -270,  1039,  1040,
    1041,   911,  1042,  1165,  1043,  -270,    22,  -270,   646,  1166,
     299,  1167,  1044,  1045,  1046,   734,    26,  1047,   748,   407,
     303,   647,  1168,   305,    53,   648,   823,   824,   825,   649,
     827,   306,  1012,  1013,  1014,  1015,   309,   310,   173,   970,
      30,   823,   749,   312,   646,   173,   173,   173,   132,   173,
     313,   314,   971,   730,   315,   650,   316,   647,    53,   354,
     173,   648,   398,   132,   359,   649,  1066,  -167,   132,  -168,
     174,   132,   132,   402,   403,  1056,   132,   142,   143,   404,
     132,   408,   826,   132,   132,   617,   618,   619,   863,   409,
     422,   650,   423,   425,   426,   428,   144,   842,   438,   132,
     430,   113,   431,   132,   441,   454,   145,   131,   453,   456,
     175,   146,   457,  1075,   458,   460,   461,   855,   856,   462,
     475,   483,   131,   489,   502,   503,     1,   645,   147,   434,
     131,   846,  -130,   862,   434,   131,   516,   538,   148,   853,
     539,  -522,   131,   131,   899,   900,   901,   902,   903,   904,
     905,   176,   177,   901,   902,   903,   904,   905,   131,   207,
     581,   434,   131,   582,   588,   589,   149,   590,   603,   608,
      84,   898,   591,  1126,   592,  1059,   150,   593,   994,   178,
     594,   595,   179,   596,   899,   900,   901,   902,   903,   904,
     905,   899,   900,   901,   902,   903,   904,   905,   597,   598,
     151,   609,   162,   599,   600,   734,   601,   602,   611,   610,
     612,   613,   163,   164,   180,   616,   622,   614,   512,   623,
     615,   761,   762,   763,   634,   632,   635,   631,   764,   639,
     181,   643,   657,   182,   658,   662,   765,   681,   688,   689,
     766,   767,  1156,   768,   690,   701,   708,   183,   184,   769,
    1101,  1102,  1103,  1104,  1105,  1106,  1107,  1108,  1109,   770,
     702,   709,   711,   732,   203,   757,  -395,   760,   784,    53,
     185,   785,   799,   786,   787,   788,   771,   186,   789,   815,
     132,   790,   791,   187,   818,   792,   793,   772,   132,   773,
     705,   774,   794,   795,   985,   819,   188,    53,   832,   820,
     796,   797,   821,   775,   833,   844,   834,   847,   798,   173,
     852,   859,   860,   173,   165,   166,   871,   861,   870,   883,
     776,   886,   972,   537,   910,   921,   916,   984,   919,   923,
     935,   934,   939,   777,   778,   779,   926,   936,   434,   131,
     937,   938,   941,   780,   781,   948,   950,   131,   951,   964,
     959,   973,   967,   993,   980,   342,  1005,  1006,  1007,  1008,
    1010,   969,  1016,  1017,  1164,   168,   169,  1011,  1028,  1020,
      53,   401,  1029,  1037,  1036,   823,   707,  1052,  1057,  1060,
    1064,   657,  1068,   905,  1071,  1073,  1074,   113,  1072,  1087,
    1076,  1078,  1081,  1088,   173,   173,  1095,   132,  1096,  1099,
    1085,  1110,  1112,   132,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,    53,
     526,   527,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   470,   471,  1119,  1120,   707,  1124,  1130,  1125,
    1127,   479,  1129,  1131,  1132,   132,  1054,   484,  1137,  1138,
    1140,   434,   131,  1142,  1143,   173,  1145,  1146,  1144,  1147,
    1148,   499,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,  1149,  1150,   132,  1154,   507,   508,   509,
     511,   513,  1151,  1155,  1159,   132,  1162,  1161,  1178,  1163,
    1179,  1181,   607,  1173,    53,  1182,  1186,  1187,    53,  1183,
     546,  1188,   319,   434,   131,   895,   891,  1184,   555,  1118,
     189,   707,  1171,   584,   585,   981,   807,   237,  1050,  1177,
     822,   925,   321,   322,   323,   324,   928,   325,   326,   327,
     173,   328,   329,   330,   131,   248,   672,  1123,  1058,   331,
    1086,   357,   912,   434,   131,   642,   241,   867,   660,   633,
     308,   332,   333,   491,   156,   447,   455,   587,   857,   334,
     492,   816,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,     1,   132,   637,   829,   361,   963,   604,   800,
     362,   363,   364,   365,  1083,   493,   478,     4,   366,     6,
    1084,   944,     0,   494,     0,   132,   335,     0,     0,     0,
       0,   132,     0,     0,    53,     0,     0,  1172,     0,   367,
       0,     0,     0,     0,     0,     0,     0,   495,   679,     0,
       0,     0,   683,     0,     0,     0,   336,    12,     0,  1180,
       0,     0,   131,     0,     0,  1185,     0,     0,     0,     0,
     692,     0,   694,   696,     0,     0,   700,     0,     0,     0,
       0,   496,     0,     0,   131,     0,   368,     0,     0,    19,
     131,     0,     0,   715,   716,     0,   720,   721,   722,   723,
     724,   725,   726,   727,     0,     0,     0,   739,   740,   741,
     742,   743,   744,   745,     0,     0,   337,    22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   369,     0,     0,
     370,     0,   162,     0,     0,   497,     0,     0,     0,     0,
       0,     0,   163,   164,     0,     0,     0,     0,     0,     0,
       0,    30,     0,     0,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,   338,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,     0,
       0,     0,     0,   814,     0,     0,     0,     0,     0,     0,
       0,     0,   371,     0,     0,     0,     0,     0,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   843,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   165,   166,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   868,     0,     0,     0,
     869,     0,     0,   673,     0,     0,     0,   872,     0,   874,
       0,   876,     0,     0,     0,   879,     0,   167,     0,     0,
       0,     0,     0,     0,     0,   888,     0,   889,     0,     0,
       0,     0,     0,   893,     0,   168,   169,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   401,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
       0,     0,     0,   546,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
       0,     0,     0,     0,   942,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,     0,     0,     0,     1,     0,
       0,     0,     2,     0,     0,     0,   362,   363,   364,   365,
       0,     0,     0,     4,   366,     6,     0,     0,     0,   977,
       0,   978,     0,   979,     0,     0,     0,     0,     0,   983,
       0,     0,   986,     0,     0,   367,   992,   321,   322,   323,
     324,     0,   325,   326,   327,     0,   328,   329,   330,     0,
       0,     0,     0,    12,   331,     0,     0,   808,     0,     0,
       0,     0,     0,     0,     0,     0,   332,   333,   466,     0,
     321,   322,   323,   324,   334,   325,   326,   327,     0,   328,
     329,   330,   368,     0,     0,    19,     0,   331,     0,     0,
       0,     0,     0,   811,     0,     0,     0,     0,     0,   332,
     333,     0,     0,     0,     0,     0,     0,   334,   399,     0,
       0,   335,     0,    22,     0,     0,  1055,     0,     0,     0,
       0,     0,     0,   369,     0,     0,   370,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1065,     0,     0,
       0,   336,     0,     0,   335,     0,     0,    30,     0,     0,
       0,     0,     0,     0,   160,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1079,     0,     0,
     129,     0,     0,     0,   336,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   371,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   337,  1117,     0,     0,     0,     0,     0,   212,  1122,
     986,     0,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,     0,   337,   644,     0,     0,     0,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,   338,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,     0,   401,  1157,     0,     0,     0,
       0,     0,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,   338,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   321,   322,   323,
     324,     0,   325,   326,   327,   873,   328,   329,   330,     0,
       0,     0,     0,     0,   331,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   332,   333,   466,     0,
     321,   322,   323,   324,   334,   325,   326,   327,     0,   328,
     329,   330,     0,     0,     0,     0,     0,   331,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   332,
     333,     0,     0,     0,     0,     0,     0,   334,     0,     0,
       0,   335,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,     0,     0,     0,
       0,   336,     0,     0,   335,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   321,   322,   323,   324,   636,   325,   326,   327,     0,
     328,   329,   330,     0,   336,     0,     0,     0,   331,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     332,   333,     0,     0,     0,     0,     0,     0,   334,     0,
       0,   337,     0,     0,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,     0,     0,     0,     0,     0,
     129,     0,    26,     0,   337,   335,     0,     0,     0,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,   338,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,     0,   336,     0,   432,     0,     0,
       0,     0,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,   338,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   875,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   321,   322,   323,
     324,     0,   325,   326,   327,   337,   328,   329,   330,     0,
       0,     0,     0,     0,   331,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   332,   333,     0,     0,
       0,     0,     0,     0,   334,     0,     0,     0,     0,     0,
       0,     0,     0,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,   338,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,     0,     0,
       0,   335,    26,   321,   322,   323,   324,     0,   325,   326,
     327,     0,   328,   329,   330,     0,     0,     0,     0,     0,
     331,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   336,   332,   333,     0,   691,     0,     0,     0,     0,
     334,     0,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   335,     0,     0,
       0,     0,     0,   321,   322,   323,   324,     0,   325,   326,
     327,   337,   328,   329,   330,     0,     0,     0,     0,     0,
     331,     0,     0,     0,     0,     0,     0,   336,     0,     0,
       0,   693,   332,   333,     0,     0,     0,     0,     0,     0,
     334,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,   338,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,     0,     0,     0,   335,     0,   321,
     322,   323,   324,     0,   325,   326,   327,   337,   328,   329,
     330,     0,     0,     0,     0,     0,   331,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   336,   332,   333,
       0,   695,     0,     0,     0,     0,   334,     0,     0,     0,
       0,     0,     0,     0,     0,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,   338,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
       0,     0,     0,   335,     0,     0,     0,     0,     0,   321,
     322,   323,   324,     0,   325,   326,   327,   337,   328,   329,
     330,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   336,     0,     0,     0,     0,   728,   729,
       0,     0,     0,   162,     0,     0,   334,     0,     0,     0,
       0,     0,     0,     0,     0,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,   338,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
       1,   129,     0,   335,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   337,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   336,     0,     0,     0,     0,   432,   129,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,   338,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   432,   129,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   337,     0,     0,     0,     0,     0,   864,
       0,     0,    85,     0,     0,     0,     0,     0,   444,     0,
       0,     0,     0,   441,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,   129,     0,     0,
       0,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,   338,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,     0,     0,     0,     0,
       0,     0,     0,   129,     0,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
       0,     0,   644,     0,     0,     0,     0,     0,   162,     0,
       0,     0,     0,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   652,   751,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   162,     0,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   129,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     162,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   837,     0,     0,     0,     0,
       0,     0,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,     0,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,     0,     1,     0,
       0,   991,     2,     0,     0,     0,     0,     0,     0,     0,
       0,     3,     0,     4,     5,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     0,     0,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
       0,     0,     0,    10,     0,     0,     0,     0,  1018,     0,
      11,     0,     0,    12,    13,    14,     0,     0,    15,     0,
       0,     0,     0,     0,    16,     0,    17,     0,     0,  1128,
       0,     0,     0,     0,     0,    18,     0,     0,     0,     0,
       0,     0,   761,   762,   763,    19,     0,     0,     0,   764,
       0,     0,     0,     0,     0,     0,     0,   765,     0,     0,
       0,   766,   767,     0,   768,     0,     0,     0,    20,     0,
     769,     0,    21,    22,     0,     0,    23,     0,    24,    25,
     770,     0,     0,    26,     0,     0,    27,    28,     0,     0,
       0,    29,     0,     0,     0,     0,     0,   771,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    30,   772,     0,
     773,     0,   774,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   775,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   776,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   777,   778,   779,     0,     0,     0,
       0,     0,     0,     0,   780,   781,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,     0,     0,
       0,     0,     0,     0,     0,     0,   698,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   699,
       0,     0,     0,     0,     0,     0,     0,     0,   754,     0,
       0,     0,   783,     0,     0,     0,     0,     0,     0,     0,
     877,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   755,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,     0,     0,   710,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,     0,     0,   880,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,     0,     0,   990,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537
};

static const yytype_int16 yycheck[] =
{
       2,    16,     4,     5,     6,    20,    27,   206,   315,     1,
     369,    13,    14,     0,    16,   245,    30,   429,    20,   201,
     202,   203,   279,   611,     0,    27,   456,   334,   361,     4,
       5,     6,   967,   356,    41,     0,    20,   703,    41,     0,
       0,   210,   184,    79,   783,    13,    14,   120,    41,    28,
       0,    41,   111,   126,   164,    41,     0,     1,    41,    10,
     965,   210,   172,   104,   111,    24,     3,    41,   624,    20,
      13,    14,   811,   121,     0,    94,    40,   128,   210,   102,
     102,   210,   155,   210,    41,   210,   142,     4,    40,   195,
      20,   143,    41,     3,   100,    41,   200,   201,   143,    41,
       9,   104,  1037,   210,   195,   114,   196,   110,    41,    41,
      41,    15,    16,    17,    41,    24,    64,   119,   104,    67,
       5,    20,    40,    14,    42,   231,   128,    12,   210,   210,
      40,   210,   210,   210,   623,   210,   210,    40,   210,    30,
     231,   231,   698,    94,   165,   634,     8,   168,    10,    11,
      41,   119,   100,     3,   141,    46,    47,   528,   357,   168,
     128,   303,   168,   165,    94,   141,   168,   309,   177,   178,
      87,   313,   231,   196,   196,   231,   119,  1112,   288,   231,
     231,   217,   292,   231,   231,   128,   231,   124,    43,   230,
     198,   141,   194,   196,   209,    94,   198,   141,   864,   865,
     151,   165,   432,   224,   943,  1110,   154,   209,    88,    89,
     197,   230,   122,   165,    43,   141,   195,   290,   111,   388,
     130,   197,   224,   210,   231,   209,   194,   230,   658,   188,
     198,   233,   197,   306,   210,   237,   197,   197,   231,   388,
     144,   231,   152,   245,   230,   210,   248,   197,   231,   210,
     210,   194,   162,   197,   205,   198,   388,   231,   260,   388,
     210,   388,   165,   388,   266,   233,   210,   823,   289,   237,
      83,   197,   293,   294,   231,   262,   832,   833,   834,  1018,
     248,   388,   231,  1022,   210,   231,   262,   289,    30,   231,
     233,   293,   294,   203,   237,   297,   298,   299,   231,   231,
     231,   245,   245,   305,   231,   248,   388,   388,    74,   388,
     388,   388,   262,   388,   388,   123,   388,   260,   262,   134,
      45,   113,   111,   266,   764,   180,   143,   142,   136,   297,
     298,   299,   228,   320,    66,   190,   262,   305,   480,   481,
     780,   781,   334,   931,   486,   134,    76,   718,   203,   370,
     190,   180,   425,   142,   297,   298,   299,   728,   729,   361,
     718,   190,   305,   473,   366,   438,    98,   477,   370,   111,
     728,   729,   138,   110,   203,   188,   320,   102,   103,   115,
     453,   454,   174,   187,   176,   351,   352,   353,    45,  1128,
     334,   366,   336,   120,     4,     5,     6,   134,     8,     9,
      10,   388,    12,    13,    14,   142,   172,   351,   352,   353,
     202,   398,   388,   643,   231,   672,   224,     0,   648,   363,
    1086,    64,   128,   388,    67,   732,   156,   388,   388,   196,
     432,   150,   434,    70,   436,   758,   759,   760,   388,    14,
     432,    80,   231,    41,   388,   102,   103,  1035,    15,    16,
      17,   175,   467,    41,   398,    30,   180,   100,   460,    54,
     462,    40,   388,   112,    40,   467,   190,    28,    29,    30,
     882,    46,    47,   806,    41,   887,   125,   230,   231,   812,
     129,     4,   503,   504,   133,   351,   352,   353,   432,   432,
       3,   434,   460,   436,   462,   516,    58,    59,    60,    61,
      62,   503,   504,  1091,   124,    58,    59,    60,    61,    62,
     159,   154,   504,     4,   516,   124,    95,   460,   539,   462,
      34,    35,    36,    37,    38,   191,   540,   898,   899,   900,
     901,   902,   903,   904,   905,   649,   650,   539,   157,   190,
     898,   899,   900,   901,   902,   903,   904,   905,   127,   145,
      42,   538,   911,     8,   111,    10,    11,   167,   111,   110,
     504,    42,   538,   231,     3,    20,   128,   134,   207,   208,
     209,   753,   211,   206,   213,   142,   155,   144,   112,   212,
     180,   214,   221,   222,   223,   529,   165,   226,   538,   610,
     220,   125,   225,   143,   538,   129,   617,   618,   619,   133,
     621,   110,   935,   936,   937,   938,   220,   134,   610,   143,
     189,   632,   538,   229,   112,   617,   618,   619,   620,   621,
     227,   199,   852,   994,    40,   159,   197,   125,   572,    75,
     632,   129,   110,   635,   189,   133,   994,    63,   640,    63,
       3,   643,   644,     5,     5,   143,   648,    66,    67,    63,
     652,   140,   620,   655,   656,   412,   413,   414,   673,   179,
      40,   159,    20,   231,   123,   195,    85,   635,   231,   671,
     107,   673,   107,   675,    14,   231,    95,   620,   188,   111,
      43,   100,     5,  1016,    40,    40,    40,   655,   656,    40,
      24,     4,   635,     5,    82,   168,    40,   640,   117,   643,
     643,   644,    40,   671,   648,   648,    42,    40,   127,   652,
      42,    42,   655,   656,    32,    33,    34,    35,    36,    37,
      38,    84,    85,    34,    35,    36,    37,    38,   671,   110,
     230,   675,   675,   230,   230,   230,   155,   230,   103,   188,
     732,    19,   230,  1076,   230,   975,   165,   230,    19,   112,
     230,   230,   115,   230,    32,    33,    34,    35,    36,    37,
      38,    32,    33,    34,    35,    36,    37,    38,   230,   230,
     189,     5,     3,   230,   230,   719,   230,   230,    24,   231,
      24,    24,    13,    14,   147,    83,   231,   140,   732,    75,
     140,    71,    72,    73,    75,    40,   143,   107,    78,     3,
     163,   231,   231,   166,   188,     3,    86,     4,    40,   231,
      90,    91,  1119,    93,    41,    41,   192,   180,   181,    99,
    1039,  1040,  1041,  1042,  1043,  1044,  1045,  1046,  1047,   109,
     171,   231,   196,    40,    17,   231,   199,   134,   230,   783,
     203,   230,   103,   230,   230,   230,   126,   210,   230,     5,
     852,   230,   230,   216,     4,   230,   230,   137,   860,   139,
     881,   141,   230,   230,   885,     4,   229,   811,    14,    24,
     230,   230,    24,   153,    14,    41,    14,   146,   230,   881,
     129,    41,   231,   885,   115,   116,     5,    41,    41,    24,
     170,    40,   860,    38,    41,   149,    40,   884,    40,    40,
     128,    49,     5,   183,   184,   185,    40,   128,   852,   852,
     128,   128,    63,   193,   194,    80,     4,   860,     4,   131,
     188,    41,    40,   103,    41,   199,     5,     5,     5,     5,
     103,    68,   128,     5,  1133,   166,   167,   230,     4,   103,
     884,   215,   164,    40,   959,   966,   967,   204,   231,   118,
      40,   231,    41,    38,    41,   230,    48,   959,    41,    24,
     128,    77,   124,   219,   966,   967,    10,   969,    10,    24,
     103,   231,    40,   975,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   943,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,   286,   287,    75,   119,  1037,     5,   124,   230,
     230,   295,   230,   103,   124,  1027,   969,   301,    24,    10,
     131,   975,   975,     4,     4,  1037,     4,     4,   174,     5,
       5,   315,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,     5,     5,  1057,   231,   331,   332,   333,
     334,   335,     8,    42,    41,  1067,   124,   230,    24,   230,
      24,     5,   231,   230,  1018,     4,    24,    41,  1022,    42,
     354,     5,   197,  1027,  1027,   719,   712,   218,   362,  1057,
      28,  1112,  1154,   367,   368,   881,   583,   127,   966,   231,
     617,   774,     3,     4,     5,     6,   778,     8,     9,    10,
    1112,    12,    13,    14,  1057,   137,   464,  1064,   974,    20,
    1027,   205,   757,  1067,  1067,   432,   133,   676,   454,   425,
     186,    32,    33,    34,    23,   261,   266,   370,   657,    40,
      41,   610,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    40,  1155,   428,   622,    44,   836,   388,   572,
      48,    49,    50,    51,  1024,    66,   294,    55,    56,    57,
    1024,   809,    -1,    74,    -1,  1177,    77,    -1,    -1,    -1,
      -1,  1183,    -1,    -1,  1128,    -1,    -1,  1155,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,   472,    -1,
      -1,    -1,   476,    -1,    -1,    -1,   107,    95,    -1,  1177,
      -1,    -1,  1155,    -1,    -1,  1183,    -1,    -1,    -1,    -1,
     494,    -1,   496,   497,    -1,    -1,   500,    -1,    -1,    -1,
      -1,   132,    -1,    -1,  1177,    -1,   124,    -1,    -1,   127,
    1183,    -1,    -1,   517,   518,    -1,   520,   521,   522,   523,
     524,   525,   526,   527,    -1,    -1,    -1,   531,   532,   533,
     534,   535,   536,   537,    -1,    -1,   167,   155,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,    -1,
     168,    -1,     3,    -1,    -1,   186,    -1,    -1,    -1,    -1,
      -1,    -1,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   189,    -1,    -1,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,    -1,
      -1,    -1,    -1,   607,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   230,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   636,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   115,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   680,    -1,    -1,    -1,
     684,    -1,    -1,    68,    -1,    -1,    -1,   691,    -1,   693,
      -1,   695,    -1,    -1,    -1,   699,    -1,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   709,    -1,   711,    -1,    -1,
      -1,    -1,    -1,   717,    -1,   166,   167,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   732,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,    -1,    -1,   757,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,    -1,    -1,    -1,   808,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    48,    49,    50,    51,
      -1,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,   873,
      -1,   875,    -1,   877,    -1,    -1,    -1,    -1,    -1,   883,
      -1,    -1,   886,    -1,    -1,    77,   890,     3,     4,     5,
       6,    -1,     8,     9,    10,    -1,    12,    13,    14,    -1,
      -1,    -1,    -1,    95,    20,    -1,    -1,   196,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    -1,
       3,     4,     5,     6,    40,     8,     9,    10,    -1,    12,
      13,    14,   124,    -1,    -1,   127,    -1,    20,    -1,    -1,
      -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,
      -1,    77,    -1,   155,    -1,    -1,   970,    -1,    -1,    -1,
      -1,    -1,    -1,   165,    -1,    -1,   168,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   991,    -1,    -1,
      -1,   107,    -1,    -1,    77,    -1,    -1,   189,    -1,    -1,
      -1,    -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1021,    -1,    -1,
       3,    -1,    -1,    -1,   107,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   230,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   167,  1056,    -1,    -1,    -1,    -1,    -1,    41,  1063,
    1064,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    -1,   167,    68,    -1,    -1,    -1,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,    -1,  1119,  1120,    -1,    -1,    -1,
      -1,    -1,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,     3,     4,     5,
       6,    -1,     8,     9,    10,   111,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    -1,
       3,     4,     5,     6,    40,     8,     9,    10,    -1,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    77,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,    -1,    -1,    -1,
      -1,   107,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    -1,   107,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,   167,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,
       3,    -1,   165,    -1,   167,    77,    -1,    -1,    -1,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,    -1,   107,    -1,    40,    -1,    -1,
      -1,    -1,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   111,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,     3,     4,     5,
       6,    -1,     8,     9,    10,   167,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,    -1,    -1,
      -1,    77,   165,     3,     4,     5,     6,    -1,     8,     9,
      10,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   107,    32,    33,    -1,   111,    -1,    -1,    -1,    -1,
      40,    -1,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      10,   167,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,
      -1,   111,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,    -1,    -1,    -1,    77,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,   167,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    32,    33,
      -1,   111,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,   167,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,    -1,    -1,    -1,    -1,    32,    33,
      -1,    -1,    -1,     3,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
      40,     3,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,    -1,    -1,    -1,    -1,    40,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,    40,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   167,    -1,    -1,    -1,    -1,    -1,   101,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   165,    -1,     3,    -1,    -1,
      -1,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,    68,    34,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,     3,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   151,    -1,    -1,    -1,    -1,
      -1,    -1,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,    -1,    40,    -1,
      -1,   182,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,   182,    -1,
      92,    -1,    -1,    95,    96,    97,    -1,    -1,   100,    -1,
      -1,    -1,    -1,    -1,   106,    -1,   108,    -1,    -1,   182,
      -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    73,   127,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    90,    91,    -1,    93,    -1,    -1,    -1,   150,    -1,
      99,    -1,   154,   155,    -1,    -1,   158,    -1,   160,   161,
     109,    -1,    -1,   165,    -1,    -1,   168,   169,    -1,    -1,
      -1,   173,    -1,    -1,    -1,    -1,    -1,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,   137,    -1,
     139,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   183,   184,   185,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   193,   194,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    18,    19,    20,    21,
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
       0,    40,    44,    53,    55,    56,    57,    67,    70,    81,
      85,    92,    95,    96,    97,   100,   106,   108,   117,   127,
     150,   154,   155,   158,   160,   161,   165,   168,   169,   173,
     189,   233,   234,   235,   253,   254,   257,   263,   265,   266,
     274,   275,   276,   277,   279,   280,   281,   282,   298,   301,
     304,   306,   311,   312,   313,   314,   315,   317,   346,   349,
     356,   361,   363,   365,   368,   372,   373,   374,   375,   378,
     383,   385,   388,   393,   396,   397,   398,   404,   417,   418,
     442,   443,   444,   312,   313,     3,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   264,   415,   416,     3,   264,   264,   264,   175,   180,
     190,   198,   370,   370,    43,   180,   190,   203,   111,     3,
     342,   413,   416,   342,    43,   180,   190,   203,   386,   415,
     228,   348,    66,    67,    85,    95,   100,   117,   127,   155,
     165,   189,   379,   380,   386,   190,   379,   370,   115,   376,
     120,   320,     3,    13,    14,   115,   116,   148,   166,   167,
     389,   390,   412,   416,     3,    43,    84,    85,   112,   115,
     147,   163,   166,   180,   181,   203,   210,   216,   229,   248,
     352,   355,   414,   187,   320,     0,   104,   230,   128,   196,
     305,    15,    16,    17,   144,   331,   332,   110,   328,   150,
      70,   421,    41,    41,    54,    40,    58,    59,    60,    61,
      62,   111,   278,   114,   168,   177,   178,   405,   342,     4,
     359,     3,   124,   283,   357,   358,   359,   283,   342,     4,
     354,   354,     3,   124,   124,   299,   359,   362,   299,   191,
     394,   253,   254,   304,   311,   347,   157,   381,   190,   145,
     143,   231,   111,   359,   366,   367,   143,   384,   200,   201,
     377,     3,    40,   122,   130,   152,   162,   203,   321,   322,
     323,    66,    98,   337,    24,   188,   391,   391,   412,    42,
     110,   364,   412,    42,   231,   391,     3,    30,   111,   180,
      28,   195,   353,   220,   353,   143,   110,   351,   364,   220,
     134,   350,   229,   227,   199,    40,   197,   371,   342,   235,
     342,     3,     4,     5,     6,     8,     9,    10,    12,    13,
      14,    20,    32,    33,    40,    77,   107,   167,   215,   237,
     238,   239,   241,   243,   248,   249,   250,   312,   412,   413,
     416,   337,   337,   337,    75,   134,   142,   319,   328,   189,
     386,    44,    48,    49,    50,    51,    56,    77,   124,   165,
     168,   230,   253,   254,   263,   265,   267,   268,   269,   270,
     271,   272,   273,   281,   304,   311,   316,   422,   423,   424,
     428,   429,   430,   434,   438,   439,   440,   441,   110,    41,
     236,   241,     5,     5,    63,   406,   407,   412,   140,   179,
      88,    89,    64,    67,   100,   154,   399,   400,   123,   136,
     224,   369,    40,    20,   342,   231,   123,   342,   195,   318,
     107,   107,    40,   300,   312,   341,   342,   343,   231,   302,
     342,    14,   392,   395,    34,   382,   413,   380,   253,   254,
     304,   311,   387,   188,   231,   382,   111,     5,    40,   324,
      40,    40,    40,   121,   231,   323,    34,   241,   338,   339,
     241,   241,   391,   412,   359,    24,   391,   412,   390,   241,
     342,   342,   342,     4,   241,   353,   342,    87,   353,     5,
     353,    34,    41,    66,    74,    98,   132,   186,   236,   241,
     252,   329,    82,   168,    40,   307,   311,   241,   241,   241,
     236,   241,   312,   241,   244,   312,    42,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    40,    42,
     165,   312,   315,   317,   315,   315,   241,   333,   334,     5,
      12,   326,   326,   328,   395,   241,   253,   254,   263,   265,
     267,   268,   269,   270,   271,   272,   273,   281,   304,   311,
     316,   425,   426,   427,   429,   430,   434,   438,   439,   440,
     441,   230,   230,   264,   241,   241,   339,   389,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   103,   424,   311,    41,   231,   188,     5,
     231,    24,    24,    24,   140,   140,    83,   401,   401,   401,
     188,   401,   231,    75,    14,    30,    41,    46,    47,   419,
     420,   107,    40,   358,    75,   143,     7,   241,   305,     3,
     312,   341,   343,   231,    68,   413,   112,   125,   129,   133,
     159,   344,    68,   413,   359,   143,   231,   231,   188,   359,
     366,   362,     3,    41,   231,   342,   113,   174,   176,   202,
     325,   342,   322,    68,   415,   111,   231,   319,   327,   241,
     391,     4,   360,   241,   391,   353,   353,   353,    40,   231,
      41,   111,   241,   111,   241,   111,   241,    41,    68,   111,
     241,    41,   171,   255,   256,   412,   308,   412,   192,   231,
      41,   196,   245,   246,   412,   241,   241,    28,    29,    30,
     241,   241,   241,   241,   241,   241,   241,   241,    32,    33,
     239,   240,    40,   242,   312,     8,    10,    11,    20,   241,
     241,   241,   241,   241,   241,   241,   251,   253,   254,   304,
     311,    34,   412,   320,    69,    96,   335,   231,   142,   231,
     134,    71,    72,    73,    78,    86,    90,    91,    93,    99,
     109,   126,   137,   139,   141,   153,   170,   183,   184,   185,
     193,   194,   287,    52,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   103,
     427,    58,    59,    60,    61,    62,   128,   278,   196,   435,
     436,   182,   128,   230,   241,     5,   407,   238,     4,     4,
      24,    24,   286,   412,   412,   412,   342,   412,   154,   400,
     360,   287,    14,    14,    14,    41,   231,   151,   284,   285,
     286,   360,   342,   241,    41,   341,   413,   146,   345,   341,
     345,   345,   129,   413,   303,   342,   342,   392,   362,    41,
     231,    41,   342,   415,   101,   340,   341,   338,   241,   241,
      41,     5,   241,   111,   241,   111,   241,   111,   287,   241,
      41,   231,   318,    24,    41,   231,    40,   309,   241,   241,
     102,   246,   247,   241,   240,   242,   240,   240,    19,    32,
      33,    34,    35,    36,    37,    38,   236,     8,    10,    11,
      41,   337,   334,   326,   326,   326,    40,   292,   292,    40,
     288,   149,   290,    40,   289,   288,    40,   291,   291,   292,
     292,    94,   230,   425,    49,   128,   128,   128,   128,     5,
     395,    63,   241,   102,   436,   437,   425,   395,    80,   408,
       4,     4,   287,   100,   168,   403,    76,   156,   402,   188,
     287,   287,   287,   420,   131,    41,   231,    40,   258,    68,
     143,   341,   342,    41,   318,   231,   318,   241,   241,   241,
      41,   256,   305,   241,   311,   412,   241,   310,   231,   305,
      41,   182,   241,   103,    19,   240,   240,   240,   240,   240,
     240,   240,   240,    41,   339,     5,     5,     5,     5,   238,
     103,   230,   395,   395,   395,   395,   128,     5,   182,   425,
     103,    45,   102,   103,   431,   432,   433,   111,     4,   164,
     409,   293,    20,    94,    20,    94,   415,    40,    80,   207,
     208,   209,   211,   213,   221,   222,   223,   226,   295,   296,
     285,   308,   204,   259,   413,   241,   143,   231,   327,   341,
     118,   330,    41,   231,    40,   241,   240,   111,    41,    41,
     231,    41,    41,   230,    48,   395,   128,   425,    77,   241,
     425,   124,   103,   432,   433,   103,   340,    24,   219,    10,
      20,    94,   151,   205,   294,    10,    10,   238,   308,    24,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     231,    41,    40,   260,   261,   262,   296,   241,   342,    75,
     119,   336,   241,   310,     5,   230,   395,   230,   182,   230,
     124,   103,   124,   318,    74,   138,   172,    24,    10,   238,
     131,    41,     4,     4,   174,     4,     4,     5,     5,     5,
       5,     8,   296,   308,   231,    42,   236,   241,    41,    41,
     425,   230,   124,   230,   328,   206,   212,   214,   225,   410,
      41,   262,   342,   230,    79,   217,   411,   231,    24,    24,
     342,     5,     4,    42,   218,   342,    24,    41,     5
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
      case 257: /* "create_index_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 258: /* "opt_index_columns" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 259: /* "opt_storing" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 260: /* "opt_storing_columns" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 261: /* "opt_index_option_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 262: /* "index_option" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 263: /* "cursor_declare_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 264: /* "cursor_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 265: /* "cursor_open_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 266: /* "cursor_fetch_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 267: /* "cursor_fetch_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 268: /* "cursor_fetch_next_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 269: /* "cursor_fetch_first_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 270: /* "cursor_fetch_prior_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 271: /* "cursor_fetch_last_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 272: /* "cursor_fetch_absolute_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 273: /* "cursor_fetch_relative_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 274: /* "fetch_prior_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 275: /* "fetch_first_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 276: /* "fetch_last_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 277: /* "fetch_relative_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 278: /* "next_or_prior" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 279: /* "fetch_absolute_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 280: /* "fetch_fromto_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 281: /* "cursor_close_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 282: /* "create_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 283: /* "opt_if_not_exists" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 284: /* "table_element_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 285: /* "table_element" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 286: /* "column_definition" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 287: /* "data_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 288: /* "opt_decimal" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 289: /* "opt_float" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 290: /* "opt_precision" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 291: /* "opt_time_precision" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 292: /* "opt_char_length" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 293: /* "opt_column_attribute_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 294: /* "column_attribute" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 295: /* "opt_table_option_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 296: /* "table_option" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 297: /* "opt_equal_mark" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 298: /* "drop_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 299: /* "opt_if_exists" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 300: /* "table_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 301: /* "drop_index_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 302: /* "index_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 303: /* "table_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 304: /* "insert_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 305: /* "opt_when" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 306: /* "replace_or_insert" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 307: /* "opt_insert_columns" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 308: /* "column_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 309: /* "insert_vals_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 310: /* "insert_vals" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 311: /* "select_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 312: /* "select_with_parens" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 313: /* "select_no_parens" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 314: /* "no_table_select" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 315: /* "select_clause" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 316: /* "select_into_clause" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 317: /* "simple_select" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 318: /* "opt_where" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 319: /* "select_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 320: /* "opt_hint" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 321: /* "opt_hint_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 322: /* "hint_options" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 323: /* "hint_option" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 324: /* "opt_comma_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 326: /* "limit_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 327: /* "opt_select_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 328: /* "opt_for_update" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 329: /* "parameterized_trim" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 330: /* "opt_groupby" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 331: /* "opt_order_by" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 332: /* "order_by" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 333: /* "sort_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 334: /* "sort_key" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 335: /* "opt_asc_desc" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 336: /* "opt_having" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 337: /* "opt_distinct" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 338: /* "projection" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 339: /* "select_expr_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 340: /* "from_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 341: /* "table_factor" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 342: /* "relation_factor" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 343: /* "joined_table" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 344: /* "join_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 345: /* "join_outer" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 346: /* "explain_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 347: /* "explainable_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 348: /* "opt_verbose" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 349: /* "show_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 350: /* "opt_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 351: /* "opt_for_grant_user" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 353: /* "opt_show_condition" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 354: /* "opt_like_condition" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 356: /* "create_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 357: /* "user_specification_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 358: /* "user_specification" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 359: /* "user" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 360: /* "password" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 361: /* "drop_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 362: /* "user_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 363: /* "set_password_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 364: /* "opt_for_user" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 365: /* "rename_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 366: /* "rename_info" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 367: /* "rename_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 368: /* "lock_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 369: /* "lock_spec" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 370: /* "opt_work" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 372: /* "begin_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 373: /* "commit_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 374: /* "rollback_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 375: /* "kill_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 376: /* "opt_is_global" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 377: /* "opt_flag" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 378: /* "grant_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 379: /* "priv_type_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 380: /* "priv_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 381: /* "opt_privilege" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 382: /* "priv_level" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 383: /* "revoke_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 384: /* "opt_on_priv_level" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 385: /* "prepare_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 386: /* "stmt_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 387: /* "preparable_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 388: /* "variable_set_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 389: /* "var_and_val_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 390: /* "var_and_val" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 391: /* "to_or_eq" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 392: /* "argument" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 393: /* "execute_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 394: /* "opt_using_args" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 395: /* "argument_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 396: /* "deallocate_prepare_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 397: /* "deallocate_or_drop" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 398: /* "alter_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 399: /* "alter_column_actions" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 400: /* "alter_column_action" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 401: /* "opt_column" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 403: /* "alter_column_behavior" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 404: /* "alter_system_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 405: /* "opt_force" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 406: /* "alter_system_actions" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 407: /* "alter_system_action" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 408: /* "opt_comment" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 410: /* "server_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 411: /* "opt_cluster_or_address" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 412: /* "column_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 413: /* "relation_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 414: /* "function_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 415: /* "column_label" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 417: /* "create_procedure_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 418: /* "proc_decl" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 419: /* "proc_parameter_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 420: /* "proc_parameter" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 421: /* "proc_block" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 422: /* "proc_sect" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 423: /* "proc_stmts" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 424: /* "proc_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 425: /* "control_sect" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 426: /* "control_stmts" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 427: /* "control_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 428: /* "stmt_declare" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 429: /* "stmt_assign" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 430: /* "stmt_if" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 431: /* "stmt_elsifs" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 432: /* "stmt_elsif" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 433: /* "stmt_else" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 434: /* "stmt_case" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 435: /* "case_when_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 436: /* "case_when" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 437: /* "case_else" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 438: /* "stmt_loop" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 439: /* "stmt_while" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 440: /* "stmt_null" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 441: /* "stmt_exit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 442: /* "exec_procedure_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 443: /* "drop_procedure_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 444: /* "show_procedure_stmt" */

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

    { (yyval.node) = NULL; ;}
    break;

  case 47:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 48:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 49:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 50:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NAME_FIELD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(3) - (3)]).first_column, (yylsp[(3) - (3)]).last_column);
    ;}
    break;

  case 51:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_STAR);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NAME_FIELD, 2, (yyvsp[(1) - (3)].node), node);
    ;}
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

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 60:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 61:

    { (yyvsp[(3) - (3)].node)->type_ = T_SYSTEM_VARIABLE; (yyval.node) = (yyvsp[(3) - (3)].node); ;}
    break;

  case 62:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 63:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 64:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 65:

    {
      ParseNode *node = NULL;
      malloc_non_terminal_node(node, result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node));
      merge_nodes((yyval.node), result->malloc_pool_, T_EXPR_LIST, node);
    ;}
    break;

  case 66:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
      /*
      yyerror(&@1, result, "CASE expression is not supported yet!");
      YYABORT;
      */
    ;}
    break;

  case 67:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
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
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_EXISTS, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 71:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 72:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_POS, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 73:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NEG, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 74:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_ADD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 75:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MINUS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 76:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MUL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 77:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_DIV, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 78:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_REM, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 79:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_POW, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 80:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MOD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 81:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 82:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_POS, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 83:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NEG, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 84:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_ADD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 85:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MINUS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 86:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MUL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 87:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_DIV, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 88:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_REM, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 89:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_POW, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 90:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MOD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 91:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 92:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LT, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 93:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_EQ, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 94:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_GE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 95:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_GT, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 96:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 97:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 98:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NOT_LIKE, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 99:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_AND, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 100:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_OR, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 101:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NOT, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 102:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 103:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS_NOT, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
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
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_BTW, 3, (yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 109:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NOT_BTW, 3, (yyvsp[(1) - (6)].node), (yyvsp[(4) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 110:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IN, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 111:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NOT_IN, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 112:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_CNN, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 113:

    {
    	(yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 114:

    { merge_nodes((yyval.node), result->malloc_pool_, T_EXPR_LIST, (yyvsp[(2) - (3)].node)); ;}
    break;

  case 115:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_WHEN_LIST, (yyvsp[(3) - (5)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CASE, 3, (yyvsp[(2) - (5)].node), (yyval.node), (yyvsp[(4) - (5)].node));
    ;}
    break;

  case 116:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 117:

    { (yyval.node) = NULL; ;}
    break;

  case 118:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 119:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 120:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_WHEN, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 121:

    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 122:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_NULL); ;}
    break;

  case 123:

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

  case 124:

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

  case 125:

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

  case 126:

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

  case 127:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_FUN_SYS, 2, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));
    ;}
    break;

  case 128:

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

  case 129:

    {
      (yyval.node) = (yyvsp[(1) - (4)].node);
      (yyval.node)->children_[0] = (yyvsp[(3) - (4)].node);
    ;}
    break;

  case 130:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ROW_COUNT, 1, NULL);
    ;}
    break;

  case 135:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_ALL);
    ;}
    break;

  case 136:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_DISTINCT);
    ;}
    break;

  case 137:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_DELETE, 3, (yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 138:

    {
      ParseNode* assign_list = NULL;
      merge_nodes(assign_list, result->malloc_pool_, T_ASSIGN_LIST, (yyvsp[(5) - (7)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_UPDATE, 5, (yyvsp[(3) - (7)].node), assign_list, (yyvsp[(6) - (7)].node), (yyvsp[(7) - (7)].node), (yyvsp[(2) - (7)].node));
    ;}
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
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ASSIGN_ITEM, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 142:

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

  case 143:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_COLUMN_LIST, (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 144:

    {
  		(yyval.node)=(yyvsp[(2) - (2)].node);
  	;}
    break;

  case 145:

    {
  		(yyval.node)=NULL;
  	;}
    break;

  case 146:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_COLUMN_LIST, (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 147:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 148:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 149:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 150:

    {
		(yyval.node) = (yyvsp[(1) - (1)].node);
	;}
    break;

  case 151:

    {					 
       malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_DECLARE, 2,
                                        (yyvsp[(2) - (5)].node),		/*cursor name*/
                                        (yyvsp[(5) - (5)].node)		/*result from select_stmt*/
					             ); 
	 ;}
    break;

  case 152:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 153:

    {
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_OPEN, 1,
            (yyvsp[(2) - (2)].node)     /* cursor_name*/
                                    );
            ;}
    break;

  case 154:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH, 1,
                   (yyvsp[(2) - (2)].node)     /* cursor_name*/
                                       );
            ;}
    break;

  case 155:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH, 1,
                   (yyvsp[(2) - (3)].node)     /* cursor_name*/
                                       );
            ;}
    break;

  case 156:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH, 1, (yyvsp[(2) - (4)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(4) - (4)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_INTO, 2, fetch, args);
            ;}
    break;

  case 157:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH_NEXT, 1, (yyvsp[(2) - (5)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(5) - (5)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_NEXT_INTO, 2, fetch, args);
            ;}
    break;

  case 158:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH_FIRST, 1, (yyvsp[(2) - (5)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(5) - (5)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_FIRST_INTO, 2, fetch, args);
            ;}
    break;

  case 159:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH_PRIOR, 1, (yyvsp[(2) - (5)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(5) - (5)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_PRIOR_INTO, 2, fetch, args);
            ;}
    break;

  case 160:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH_LAST, 1, (yyvsp[(2) - (5)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(5) - (5)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_LAST_INTO, 2, fetch, args);
            ;}
    break;

  case 161:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH_ABSOLUTE, 2, (yyvsp[(2) - (6)].node), (yyvsp[(4) - (6)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(6) - (6)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_ABS_INTO, 2, fetch, args);
            ;}
    break;

  case 162:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH_RELATIVE, 3, (yyvsp[(2) - (7)].node), (yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(7) - (7)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_RELATIVE_INTO, 2, fetch, args);
            ;}
    break;

  case 163:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_PRIOR, 1,
                   (yyvsp[(2) - (3)].node)     /* cursor_name*/
                    
                    
                    
                                       );
            ;}
    break;

  case 164:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_FIRST, 1,
                   (yyvsp[(2) - (3)].node)     /* cursor_name*/
                                       );
            ;}
    break;

  case 165:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_LAST, 1,
                   (yyvsp[(2) - (3)].node)     /* cursor_name*/
                                       );
            ;}
    break;

  case 166:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_RELATIVE, 3,
                   (yyvsp[(2) - (5)].node),     /* cursor_name*/
                   (yyvsp[(3) - (5)].node),                  
                   (yyvsp[(5) - (5)].node)                  
                                       );
            ;}
    break;

  case 167:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 168:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 169:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_ABSOLUTE, 2,
                   (yyvsp[(2) - (4)].node),     /* cursor_name*/
                   (yyvsp[(4) - (4)].node)
                                       );
            ;}
    break;

  case 170:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_FROMTO, 3,
                   (yyvsp[(2) - (6)].node),     /* cursor_name*/
                   (yyvsp[(4) - (6)].node),
                   (yyvsp[(6) - (6)].node)
                                       );
            ;}
    break;

  case 171:

    {
             malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_CLOSE, 1,
                   (yyvsp[(2) - (2)].node)     /* cursor_name*/
                                      );
             ;}
    break;

  case 172:

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

  case 173:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_IF_NOT_EXISTS); ;}
    break;

  case 174:

    { (yyval.node) = NULL; ;}
    break;

  case 175:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 176:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 177:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 178:

    {
      ParseNode* col_list= NULL;
      merge_nodes(col_list, result->malloc_pool_, T_COLUMN_LIST, (yyvsp[(4) - (5)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PRIMARY_KEY, 1, col_list);
    ;}
    break;

  case 179:

    {
      ParseNode *attributes = NULL;
      merge_nodes(attributes, result->malloc_pool_, T_COLUMN_ATTRIBUTES, (yyvsp[(3) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_DEFINITION, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), attributes);
    ;}
    break;

  case 180:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER ); ;}
    break;

  case 181:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER); ;}
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

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DECIMAL);
      else
        merge_nodes((yyval.node), result->malloc_pool_, T_TYPE_DECIMAL, (yyvsp[(2) - (2)].node));
      yyerror(&(yylsp[(1) - (2)]), result, "DECIMAL type is not supported");
      YYABORT;
    ;}
    break;

  case 186:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DECIMAL);
      else
        merge_nodes((yyval.node), result->malloc_pool_, T_TYPE_DECIMAL, (yyvsp[(2) - (2)].node));
      yyerror(&(yylsp[(1) - (2)]), result, "NUMERIC type is not supported");
      YYABORT;
    ;}
    break;

  case 187:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_BOOLEAN ); ;}
    break;

  case 188:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_FLOAT, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 189:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DOUBLE); ;}
    break;

  case 190:

    {
      (void)((yyvsp[(2) - (2)].node)) ; /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DOUBLE);
    ;}
    break;

  case 191:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIMESTAMP);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIMESTAMP, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 192:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIMESTAMP); ;}
    break;

  case 193:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CHARACTER);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CHARACTER, 1, (yyvsp[(2) - (2)].node));
    ;}
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
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_VARCHAR);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_VARCHAR, 1, (yyvsp[(2) - (2)].node));
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

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CREATETIME); ;}
    break;

  case 198:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_MODIFYTIME); ;}
    break;

  case 199:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DATE);
      yyerror(&(yylsp[(1) - (1)]), result, "DATE type is not supported");
      YYABORT;
    ;}
    break;

  case 200:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIME);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIME, 1, (yyvsp[(2) - (2)].node));
      yyerror(&(yylsp[(1) - (2)]), result, "TIME type is not supported");
      YYABORT;
    ;}
    break;

  case 201:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node)); ;}
    break;

  case 202:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 203:

    { (yyval.node) = NULL; ;}
    break;

  case 204:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 205:

    { (yyval.node) = NULL; ;}
    break;

  case 206:

    { (yyval.node) = NULL; ;}
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

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 211:

    { (yyval.node) = NULL; ;}
    break;

  case 212:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 213:

    { (yyval.node) = NULL; ;}
    break;

  case 214:

    {
      (void)((yyvsp[(2) - (2)].node)) ; /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NOT_NULL);
    ;}
    break;

  case 215:

    {
      (void)((yyvsp[(1) - (1)].node)) ; /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NULL);
    ;}
    break;

  case 216:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 217:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_AUTO_INCREMENT); ;}
    break;

  case 218:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_PRIMARY_KEY); ;}
    break;

  case 219:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 220:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 221:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 222:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_INFO, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 223:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPIRE_INFO, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 224:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLET_MAX_SIZE, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 225:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLET_BLOCK_SIZE, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 226:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLET_ID, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 227:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_REPLICA_NUM, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 228:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COMPRESS_METHOD, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 229:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_USE_BLOOM_FILTER, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 230:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSISTENT_MODE);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 231:

    {
      (void)((yyvsp[(2) - (3)].node)); /*  make bison mute*/
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COMMENT, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 232:

    { (yyval.node) = NULL; ;}
    break;

  case 233:

    { (yyval.node) = NULL; ;}
    break;

  case 234:

    {
      ParseNode *tables = NULL;
      merge_nodes(tables, result->malloc_pool_, T_TABLE_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_DROP_TABLE, 2, (yyvsp[(3) - (4)].node), tables);
    ;}
    break;

  case 235:

    { (yyval.node) = NULL; ;}
    break;

  case 236:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_IF_EXISTS); ;}
    break;

  case 237:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 238:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 239:

    {
      ParseNode *indexs = NULL;
      merge_nodes(indexs, result->malloc_pool_, T_INDEX_LIST, (yyvsp[(4) - (6)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_DROP_INDEX, 3, (yyvsp[(3) - (6)].node), indexs, (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 240:

    { (yyval.node) = NULL; ;}
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
	  (yyval.node) = (yyvsp[(1) - (1)].node);
	;}
    break;

  case 244:

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

  case 245:

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

  case 246:

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

  case 247:

    { (yyval.node) = NULL; ;}
    break;

  case 248:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 249:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 250:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 251:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_COLUMN_LIST, (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 252:

    { (yyval.node) = NULL; ;}
    break;

  case 253:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 254:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 255:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_VALUE_VECTOR, (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 256:

    {
    merge_nodes((yyvsp[(4) - (5)].node), result->malloc_pool_, T_VALUE_VECTOR, (yyvsp[(4) - (5)].node));
    malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (5)].node), (yyvsp[(4) - (5)].node));
  ;}
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
      (yyval.node) = (yyvsp[(1) - (2)].node);
      (yyval.node)->children_[14] = (yyvsp[(2) - (2)].node);
      if ((yyval.node)->children_[12] == NULL && (yyvsp[(2) - (2)].node) != NULL)
      {
        malloc_terminal_node((yyval.node)->children_[12], result->malloc_pool_, T_BOOL);
        (yyval.node)->children_[12]->value_ = 1;
      }
    ;}
    break;

  case 260:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 261:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 262:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 263:

    {
      (yyval.node)= (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 264:

    {
      (yyval.node) = (yyvsp[(1) - (2)].node);
      (yyval.node)->children_[12] = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 265:

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

  case 266:

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

  case 267:

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

  case 268:

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

  case 269:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 270:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 271:

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

  case 272:

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

  case 273:

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

  case 274:

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

  case 275:

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

  case 276:

    {(yyval.node) = NULL;;}
    break;

  case 277:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 278:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_WHERE_CLAUSE, 2, (yyvsp[(3) - (3)].node), (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 279:

    {
      if ((yyvsp[(2) - (4)].node)->type_ == T_QUESTIONMARK && (yyvsp[(4) - (4)].node)->type_ == T_QUESTIONMARK)
      {
        (yyvsp[(4) - (4)].node)->value_++;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 280:

    {
      if ((yyvsp[(2) - (4)].node)->type_ == T_QUESTIONMARK && (yyvsp[(4) - (4)].node)->type_ == T_QUESTIONMARK)
      {
        (yyvsp[(4) - (4)].node)->value_++;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, (yyvsp[(4) - (4)].node), (yyvsp[(2) - (4)].node));
    ;}
    break;

  case 281:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, (yyvsp[(2) - (2)].node), NULL);
    ;}
    break;

  case 282:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, NULL, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 283:

    {
      if ((yyvsp[(2) - (4)].node)->type_ == T_QUESTIONMARK && (yyvsp[(4) - (4)].node)->type_ == T_QUESTIONMARK)
      {
        (yyvsp[(4) - (4)].node)->value_++;
      }
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, (yyvsp[(4) - (4)].node), (yyvsp[(2) - (4)].node));
    ;}
    break;

  case 284:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 285:

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

  case 286:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 287:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 288:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 289:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 290:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 291:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_READ_STATIC);
    ;}
    break;

  case 292:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_HOTSPOT);
    ;}
    break;

  case 293:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SEMI_JOIN, 6, (yyvsp[(3) - (14)].node), (yyvsp[(5) - (14)].node), (yyvsp[(7) - (14)].node), (yyvsp[(9) - (14)].node), (yyvsp[(11) - (14)].node), (yyvsp[(13) - (14)].node));
    ;}
    break;

  case 294:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_READ_CONSISTENCY);
      (yyval.node)->value_ = (yyvsp[(3) - (4)].ival);
    ;}
    break;

  case 295:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_USE_INDEX, 2, (yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].node));
    ;}
    break;

  case 296:

    {
	  (void)((yyvsp[(1) - (4)].node));
	  (void)((yyvsp[(3) - (4)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_UNKOWN_HINT);
    ;}
    break;

  case 297:

    {
      (yyval.node) = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 298:

    {
      (yyval.node) = (yyvsp[(1) - (2)].node);
    ;}
    break;

  case 299:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 300:

    {
    (yyval.ival) = 3;
  ;}
    break;

  case 301:

    {
    (yyval.ival) = 4;
  ;}
    break;

  case 302:

    {
    (yyval.ival) = 1;
  ;}
    break;

  case 303:

    {
    (yyval.ival) = 2;
  ;}
    break;

  case 304:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 305:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 306:

    { (yyval.node) = NULL; ;}
    break;

  case 307:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 308:

    { (yyval.node) = NULL; ;}
    break;

  case 309:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 310:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 0;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 311:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 0;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 312:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 1;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 313:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 2;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 314:

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

  case 315:

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

  case 316:

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

  case 317:

    { (yyval.node) = NULL; ;}
    break;

  case 318:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_EXPR_LIST, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 319:

    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 320:

    { (yyval.node) = NULL; ;}
    break;

  case 321:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_SORT_LIST, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 322:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 323:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 324:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SORT_KEY, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 325:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_ASC); ;}
    break;

  case 326:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_ASC); ;}
    break;

  case 327:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_DESC); ;}
    break;

  case 328:

    { (yyval.node) = 0; ;}
    break;

  case 329:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 330:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 331:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_ALL);
    ;}
    break;

  case 332:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_DISTINCT);
    ;}
    break;

  case 333:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, (yyvsp[(1) - (1)].node));
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (1)]).first_column, (yylsp[(1) - (1)]).last_column);
    ;}
    break;

  case 334:

    {
      ParseNode* alias_node = NULL;
      malloc_non_terminal_node(alias_node, result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, alias_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (2)]).first_column, (yylsp[(1) - (2)]).last_column);
      dup_expr_string(alias_node->str_value_, result, (yylsp[(2) - (2)]).first_column, (yylsp[(2) - (2)]).last_column);
    ;}
    break;

  case 335:

    {
      ParseNode* alias_node = NULL;
      malloc_non_terminal_node(alias_node, result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, alias_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (3)]).first_column, (yylsp[(1) - (3)]).last_column);
      dup_expr_string(alias_node->str_value_, result, (yylsp[(3) - (3)]).first_column, (yylsp[(3) - (3)]).last_column);
    ;}
    break;

  case 336:

    {
      ParseNode* star_node = NULL;
      malloc_terminal_node(star_node, result->malloc_pool_, T_STAR);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, star_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (1)]).first_column, (yylsp[(1) - (1)]).last_column);
    ;}
    break;

  case 337:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 338:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 339:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 340:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 341:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 342:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 343:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 344:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 345:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 346:

    {
    	(yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 347:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(2) - (5)].node), (yyvsp[(5) - (5)].node));
    	yyerror(&(yylsp[(1) - (5)]), result, "qualied joined table can not be aliased!");
      YYABORT;
    ;}
    break;

  case 348:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 349:

    {
    	(yyval.node) = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 350:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOINED_TABLE, 4, (yyvsp[(2) - (6)].node), (yyvsp[(1) - (6)].node), (yyvsp[(4) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 351:

    {
      ParseNode* node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_JOIN_INNER);
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOINED_TABLE, 4, node, (yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 352:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_FULL);
    ;}
    break;

  case 353:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_LEFT);
    ;}
    break;

  case 354:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_RIGHT);
    ;}
    break;

  case 355:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_INNER);
    ;}
    break;

  case 356:

    { (yyval.node) = NULL; ;}
    break;

  case 357:

    { (yyval.node) = NULL; ;}
    break;

  case 358:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPLAIN, 1, (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = ((yyvsp[(2) - (3)].node) ? 1 : 0); /* positive: verbose */
    ;}
    break;

  case 359:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
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

    { (yyval.node) = (ParseNode*)1; ;}
    break;

  case 364:

    { (yyval.node) = NULL; ;}
    break;

  case 365:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_TABLES, 1, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 366:

    {  malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_INDEX, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 367:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 368:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 369:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_TABLE_STATUS, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 370:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_SERVER_STATUS, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 371:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_VARIABLES, 1, (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = (yyvsp[(2) - (4)].ival);
    ;}
    break;

  case 372:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_SCHEMA); ;}
    break;

  case 373:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_CREATE_TABLE, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 374:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 375:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 376:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_WARNINGS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 377:

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

  case 378:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_GRANTS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 379:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_PARAMETERS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 380:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_PROCESSLIST);
      (yyval.node)->value_ = (yyvsp[(2) - (3)].ival);
    ;}
    break;

  case 381:

    {
      if ((yyvsp[(2) - (4)].node)->value_ < 0 || (yyvsp[(4) - (4)].node)->value_ < 0)
      {
        yyerror(&(yylsp[(1) - (4)]), result, "OFFSET/COUNT must not be less than 0!");
        YYABORT;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_LIMIT, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 382:

    {
      if ((yyvsp[(2) - (2)].node)->value_ < 0)
      {
        yyerror(&(yylsp[(1) - (2)]), result, "COUNT must not be less than 0!");
        YYABORT;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_LIMIT, 2, NULL, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 383:

    { (yyval.node) = NULL; ;}
    break;

  case 384:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 385:

    { (yyval.node) = NULL; ;}
    break;

  case 386:

    { (yyval.node) = NULL; ;}
    break;

  case 387:

    { (yyval.ival) = 1; ;}
    break;

  case 388:

    { (yyval.ival) = 0; ;}
    break;

  case 389:

    { (yyval.ival) = 0; ;}
    break;

  case 390:

    { (yyval.node) = NULL; ;}
    break;

  case 391:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 392:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_WHERE_CLAUSE, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 393:

    { (yyval.node) = NULL; ;}
    break;

  case 394:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 1, (yyvsp[(1) - (1)].node)); ;}
    break;

  case 395:

    { (yyval.ival) = 0; ;}
    break;

  case 396:

    { (yyval.ival) = 1; ;}
    break;

  case 397:

    {
        merge_nodes((yyval.node), result->malloc_pool_, T_CREATE_USER, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 398:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 399:

    {
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 400:

    {
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CREATE_USER_SPEC, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 401:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 402:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 403:

    {
        merge_nodes((yyval.node), result->malloc_pool_, T_DROP_USER, (yyvsp[(3) - (3)].node));
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
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SET_PASSWORD, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 407:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SET_PASSWORD, 2, (yyvsp[(3) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 408:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 409:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 410:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_RENAME_USER, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 411:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_RENAME_INFO, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
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
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LOCK_USER, 2, (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 415:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 416:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 417:

    {
      (void)(yyval.node);
    ;}
    break;

  case 418:

    {
      (void)(yyval.node);
    ;}
    break;

  case 419:

    {
      (yyval.ival) = 1;
    ;}
    break;

  case 420:

    {
      (yyval.ival) = 0;
    ;}
    break;

  case 421:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BEGIN);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 422:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BEGIN);
      (yyval.node)->value_ = (yyvsp[(3) - (3)].ival);
    ;}
    break;

  case 423:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_COMMIT);
    ;}
    break;

  case 424:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_ROLLBACK);
    ;}
    break;

  case 425:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_KILL, 3, (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 426:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 427:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
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
      ParseNode *privileges_node = NULL;
      ParseNode *users_node = NULL;
      merge_nodes(privileges_node, result->malloc_pool_, T_PRIVILEGES, (yyvsp[(2) - (6)].node));
      merge_nodes(users_node, result->malloc_pool_, T_USERS, (yyvsp[(6) - (6)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_GRANT,
                                 3, privileges_node, (yyvsp[(4) - (6)].node), users_node);
    ;}
    break;

  case 432:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 433:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 434:

    {
      (void)(yyvsp[(2) - (2)].node);                 /* useless */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_ALL;
    ;}
    break;

  case 435:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_ALTER;
    ;}
    break;

  case 436:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_CREATE;
    ;}
    break;

  case 437:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_CREATE_USER;
    ;}
    break;

  case 438:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_DELETE;
    ;}
    break;

  case 439:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_DROP;
    ;}
    break;

  case 440:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_GRANT_OPTION;
    ;}
    break;

  case 441:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_INSERT;
    ;}
    break;

  case 442:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_UPDATE;
    ;}
    break;

  case 443:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_SELECT;
    ;}
    break;

  case 444:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_REPLACE;
    ;}
    break;

  case 445:

    {
      (void)(yyval.node);
    ;}
    break;

  case 446:

    {
      (void)(yyval.node);
    ;}
    break;

  case 447:

    {
      /* means global priv_level */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_LEVEL);
    ;}
    break;

  case 448:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_LEVEL, 1, (yyvsp[(1) - (1)].node));
    ;}
    break;

  case 449:

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

  case 450:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 451:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 452:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PREPARE, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 453:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 454:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
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

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_VARIABLE_SET, (yyvsp[(2) - (2)].node));;
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 459:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 460:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 461:

    {
      (void)((yyvsp[(2) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 462:

    {
      (void)((yyvsp[(2) - (3)].node));
      (yyvsp[(1) - (3)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 463:

    {
      (void)((yyvsp[(3) - (4)].node));
      (yyvsp[(2) - (4)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 464:

    {
      (void)((yyvsp[(3) - (4)].node));
      (yyvsp[(2) - (4)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 465:

    {
      (void)((yyvsp[(4) - (5)].node));
      (yyvsp[(3) - (5)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 466:

    {
      (void)((yyvsp[(4) - (5)].node));
      (yyvsp[(3) - (5)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 467:

    {
      (void)((yyvsp[(2) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 468:

    { (yyval.node) = NULL; ;}
    break;

  case 469:

    { (yyval.node) = NULL; ;}
    break;

  case 470:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 471:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXECUTE, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 472:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 473:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 474:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 475:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 476:

    {
      (void)((yyvsp[(1) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_DEALLOCATE, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 477:

    { (yyval.node) = NULL; ;}
    break;

  case 478:

    { (yyval.node) = NULL; ;}
    break;

  case 479:

    {
      ParseNode *alter_actions = NULL;
      merge_nodes(alter_actions, result->malloc_pool_, T_ALTER_ACTION_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_TABLE, 2, (yyvsp[(3) - (4)].node), alter_actions);
    ;}
    break;

  case 480:

    {
      yyerror(&(yylsp[(1) - (6)]), result, "Table rename is not supported now");
      YYABORT;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLE_RENAME, 1, (yyvsp[(6) - (6)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_ACTION_LIST, 1, (yyval.node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_TABLE, 2, (yyvsp[(3) - (6)].node), (yyval.node));
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
      (void)((yyvsp[(2) - (3)].node)); /* make bison mute */
      (yyval.node) = (yyvsp[(3) - (3)].node); /* T_COLUMN_DEFINITION */
    ;}
    break;

  case 484:

    {
      (void)((yyvsp[(2) - (4)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_DROP, 1, (yyvsp[(3) - (4)].node));
      (yyval.node)->value_ = (yyvsp[(4) - (4)].ival);
    ;}
    break;

  case 485:

    {
      (void)((yyvsp[(2) - (4)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_ALTER, 2, (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 486:

    {
      (void)((yyvsp[(2) - (5)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_RENAME, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 487:

    { (yyval.node) = NULL; ;}
    break;

  case 488:

    { (yyval.node) = NULL; ;}
    break;

  case 489:

    { (yyval.ival) = 2; ;}
    break;

  case 490:

    { (yyval.ival) = 1; ;}
    break;

  case 491:

    { (yyval.ival) = 0; ;}
    break;

  case 492:

    {
      (void)((yyvsp[(3) - (3)].node)); /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NOT_NULL);
    ;}
    break;

  case 493:

    {
      (void)((yyvsp[(3) - (3)].node)); /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NULL);
    ;}
    break;

  case 494:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 495:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_NULL);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyval.node));
    ;}
    break;

  case 496:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_SYTEM_ACTION_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_SYSTEM, 1, (yyval.node));
    ;}
    break;

  case 497:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 3, node, (yyvsp[(7) - (7)].node), (yyvsp[(3) - (7)].node));
    ;}
    break;

  case 498:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 3, node, (yyvsp[(7) - (7)].node), (yyvsp[(3) - (7)].node));
    ;}
    break;

  case 499:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 2, node, (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 500:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 2, node, (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 501:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 502:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_FORCE);
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

  case 506:

    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 507:

    { (yyval.node) = NULL; ;}
    break;

  case 508:

    { (yyval.ival) = 0; ;}
    break;

  case 509:

    { (yyval.ival) = 1; ;}
    break;

  case 510:

    { (yyval.ival) = 2; ;}
    break;

  case 511:

    { (yyval.ival) = 2; ;}
    break;

  case 512:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 513:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 4;
    ;}
    break;

  case 514:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 515:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 3;
    ;}
    break;

  case 516:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CLUSTER, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 517:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SERVER_ADDRESS, 2, (yyvsp[(3) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 518:

    { (yyval.node) = NULL; ;}
    break;

  case 519:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 520:

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

  case 524:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 525:

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

  case 551:

    {
								malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CREATE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
							;}
    break;

  case 552:

    {
					ParseNode *params = NULL;
        			merge_nodes(params, result->malloc_pool_, T_PARAM_LIST, (yyvsp[(5) - (6)].node));
					malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECL, 2, (yyvsp[(3) - (6)].node), params);
				;}
    break;

  case 553:

    {
					ParseNode *params = NULL;
					malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECL, 2, (yyvsp[(3) - (5)].node), params);
				;}
    break;

  case 554:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
					;}
    break;

  case 555:

    {
						(yyval.node) = (yyvsp[(1) - (1)].node);
					;}
    break;

  case 556:

    {
      					malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PARAM_DEFINITION, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
					;}
    break;

  case 557:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_IN_PARAM_DEFINITION, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
					;}
    break;

  case 558:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OUT_PARAM_DEFINITION, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
					;}
    break;

  case 559:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_INOUT_PARAM_DEFINITION, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
					;}
    break;

  case 560:

    { 
					//malloc_non_terminal_node($$, result->malloc_pool_, T_PROCEDURE_BLOCK, 1, $2);
					(yyval.node)=(yyvsp[(2) - (3)].node);
				;}
    break;

  case 561:

    { 
					(yyval.node)=NULL;
				;}
    break;

  case 562:

    { 
        			merge_nodes((yyval.node), result->malloc_pool_, T_PROCEDURE_STMTS, (yyvsp[(1) - (1)].node));
				;}
    break;

  case 563:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
				;}
    break;

  case 564:

    {
					(yyval.node)=(yyvsp[(1) - (1)].node);
				;}
    break;

  case 565:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 566:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
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

    { (yyval.node) =(yyvsp[(1) - (1)].node); ;}
    break;

  case 587:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
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

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 611:

    { (yyval.node) =(yyvsp[(1) - (1)].node); ;}
    break;

  case 612:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 613:

    {
						ParseNode *args = NULL;
						merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (4)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECLARE, 3, args, (yyvsp[(3) - (4)].node), NULL);
					;}
    break;

  case 614:

    {
						ParseNode *args = NULL;
						merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (6)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECLARE, 3, args, (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node));
					;}
    break;

  case 615:

    {
						ParseNode *var_list = NULL;
						merge_nodes(var_list, result->malloc_pool_, T_VAR_VAL_LIST, (yyvsp[(2) - (3)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ASSGIN, 1,var_list);
					;}
    break;

  case 616:

    {
						ParseNode *elsifs = NULL;
						merge_nodes(elsifs, result->malloc_pool_, T_PROCEDURE_ELSEIFS, (yyvsp[(5) - (9)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (9)].node), (yyvsp[(4) - (9)].node), elsifs ,(yyvsp[(6) - (9)].node));
					;}
    break;

  case 617:

    {
						ParseNode *elsifs = NULL;
						merge_nodes(elsifs, result->malloc_pool_, T_PROCEDURE_ELSEIFS, (yyvsp[(5) - (8)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (8)].node), (yyvsp[(4) - (8)].node), elsifs ,NULL);
					;}
    break;

  case 618:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (8)].node), (yyvsp[(4) - (8)].node), NULL ,(yyvsp[(5) - (8)].node));
					;}
    break;

  case 619:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (7)].node), (yyvsp[(4) - (7)].node), NULL ,NULL);
					;}
    break;

  case 620:

    {
						(yyval.node)=(yyvsp[(1) - (1)].node);
					;}
    break;

  case 621:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
					;}
    break;

  case 622:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ELSEIF, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
					;}
    break;

  case 623:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ELSE, 1, (yyvsp[(2) - (2)].node));
						//$$ = $2;
					;}
    break;

  case 624:

    {
						ParseNode *casewhenlist = NULL;
						merge_nodes(casewhenlist, result->malloc_pool_, T_PROCEDURE_CASE_WHEN_LIST, (yyvsp[(3) - (7)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CASE, 3, (yyvsp[(2) - (7)].node), casewhenlist, (yyvsp[(4) - (7)].node));
					;}
    break;

  case 625:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
					;}
    break;

  case 626:

    {
						(yyval.node)=(yyvsp[(1) - (1)].node);
					;}
    break;

  case 627:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CASE_WHEN, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
					;}
    break;

  case 628:

    {
						(yyval.node) = NULL;
					;}
    break;

  case 629:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ELSE, 1, (yyvsp[(2) - (2)].node));
						//$$ = $2;
					;}
    break;

  case 630:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_LOOP, 1, (yyvsp[(2) - (5)].node));
					;}
    break;

  case 631:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_WHILE, 2, (yyvsp[(2) - (7)].node), (yyvsp[(4) - (7)].node));
					;}
    break;

  case 632:

    {
						/* We do not bother building a node for NULL */
						(yyval.node) = NULL;
					;}
    break;

  case 633:

    {
						malloc_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXIT);
						(yyval.node)->value_=1;
					;}
    break;

  case 634:

    {
						malloc_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CONTINUE);
						(yyval.node)->value_=0;
					;}
    break;

  case 635:

    {
        					ParseNode *param_list = NULL;
            				merge_nodes(param_list, result->malloc_pool_, T_EXPR_LIST, (yyvsp[(4) - (5)].node));
        					
							malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXEC, 2, (yyvsp[(2) - (5)].node), param_list);
						;}
    break;

  case 636:

    {
							ParseNode *params = NULL;
							malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXEC, 2, (yyvsp[(2) - (4)].node), params);
						;}
    break;

  case 637:

    {
							malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DROP, 2, (yyvsp[(5) - (5)].node),(yyvsp[(5) - (5)].node));
						;}
    break;

  case 638:

    {
							malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DROP, 1, (yyvsp[(3) - (3)].node));
						;}
    break;

  case 639:

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

