
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
     KEY = 376,
     LEADING = 377,
     LEFT = 378,
     LIMIT = 379,
     LOCAL = 380,
     LOCKED = 381,
     MEDIUMINT = 382,
     MEMORY = 383,
     MODIFYTIME = 384,
     MASTER = 385,
     NUMERIC = 386,
     OFFSET = 387,
     ON = 388,
     ORDER = 389,
     OPTION = 390,
     OUTER = 391,
     PARAMETERS = 392,
     PASSWORD = 393,
     PRECISION = 394,
     PREPARE = 395,
     PRIMARY = 396,
     READ_STATIC = 397,
     REAL = 398,
     RENAME = 399,
     REPLACE = 400,
     RESTRICT = 401,
     PRIVILEGES = 402,
     REVOKE = 403,
     RIGHT = 404,
     ROLLBACK = 405,
     KILL = 406,
     READ_CONSISTENCY = 407,
     SCHEMA = 408,
     SCOPE = 409,
     SELECT = 410,
     SESSION = 411,
     SESSION_ALIAS = 412,
     SET = 413,
     SHOW = 414,
     SMALLINT = 415,
     SNAPSHOT = 416,
     SPFILE = 417,
     START = 418,
     STATIC = 419,
     SYSTEM = 420,
     STRONG = 421,
     SET_MASTER_CLUSTER = 422,
     SET_SLAVE_CLUSTER = 423,
     SLAVE = 424,
     TABLE = 425,
     TABLES = 426,
     THEN = 427,
     TIME = 428,
     TIMESTAMP = 429,
     TINYINT = 430,
     TRAILING = 431,
     TRANSACTION = 432,
     TO = 433,
     UPDATE = 434,
     USER = 435,
     USING = 436,
     VALUES = 437,
     VARCHAR = 438,
     VARBINARY = 439,
     WHERE = 440,
     WHEN = 441,
     WITH = 442,
     WORK = 443,
     PROCESSLIST = 444,
     QUERY = 445,
     CONNECTION = 446,
     WEAK = 447,
     AUTO_INCREMENT = 448,
     CHUNKSERVER = 449,
     COMPRESS_METHOD = 450,
     CONSISTENT_MODE = 451,
     EXPIRE_INFO = 452,
     GRANTS = 453,
     JOIN_INFO = 454,
     MERGESERVER = 455,
     REPLICA_NUM = 456,
     ROOTSERVER = 457,
     ROW_COUNT = 458,
     SERVER = 459,
     SERVER_IP = 460,
     SERVER_PORT = 461,
     SERVER_TYPE = 462,
     STATUS = 463,
     TABLE_ID = 464,
     TABLET_BLOCK_SIZE = 465,
     TABLET_MAX_SIZE = 466,
     UNLOCKED = 467,
     UPDATESERVER = 468,
     USE_BLOOM_FILTER = 469,
     VARIABLES = 470,
     VERBOSE = 471,
     WARNINGS = 472
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
#define YYFINAL  190
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3511

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  229
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  204
/* YYNRULES -- Number of rules.  */
#define YYNRULES  620
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1124

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   472

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    36,     2,     2,
      40,    41,    34,    32,   228,    33,    42,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   227,
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
     224,   225,   226
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
     156,   159,   162,   166,   170,   174,   178,   182,   186,   190,
     192,   195,   198,   202,   206,   210,   214,   218,   222,   226,
     230,   234,   238,   242,   246,   250,   254,   259,   263,   267,
     270,   274,   279,   283,   288,   292,   297,   303,   310,   314,
     319,   323,   325,   329,   335,   337,   338,   340,   343,   348,
     351,   352,   357,   363,   368,   375,   380,   384,   389,   391,
     393,   395,   397,   399,   401,   403,   409,   417,   419,   423,
     427,   433,   435,   438,   441,   445,   450,   456,   462,   468,
     474,   481,   489,   493,   497,   501,   507,   509,   511,   516,
     523,   526,   535,   539,   540,   542,   546,   548,   554,   558,
     560,   562,   564,   566,   568,   571,   574,   576,   579,   581,
     584,   587,   589,   592,   595,   598,   601,   603,   605,   607,
     610,   616,   620,   621,   625,   626,   628,   629,   633,   634,
     638,   639,   642,   643,   646,   648,   651,   653,   656,   658,
     662,   663,   667,   671,   675,   679,   683,   687,   691,   695,
     699,   703,   705,   706,   711,   712,   715,   717,   721,   729,
     734,   742,   743,   746,   748,   750,   754,   755,   757,   761,
     765,   771,   773,   777,   780,   782,   786,   790,   792,   795,
     799,   804,   810,   819,   821,   823,   831,   841,   846,   851,
     856,   857,   860,   864,   869,   874,   877,   880,   885,   886,
     890,   892,   896,   897,   899,   902,   904,   906,   911,   915,
     918,   919,   921,   923,   925,   927,   929,   931,   932,   934,
     935,   938,   942,   947,   952,   957,   961,   965,   969,   970,
     974,   976,   977,   981,   983,   987,   990,   991,   993,   995,
     996,   999,  1000,  1002,  1004,  1006,  1009,  1013,  1015,  1017,
    1021,  1023,  1027,  1029,  1033,  1036,  1040,  1043,  1045,  1051,
    1053,  1057,  1064,  1070,  1073,  1076,  1079,  1081,  1083,  1084,
    1088,  1090,  1092,  1094,  1096,  1098,  1099,  1103,  1109,  1115,
    1120,  1125,  1130,  1133,  1138,  1142,  1146,  1150,  1154,  1158,
    1162,  1166,  1171,  1174,  1175,  1177,  1180,  1185,  1187,  1189,
    1190,  1191,  1194,  1197,  1198,  1200,  1201,  1203,  1207,  1209,
    1213,  1218,  1220,  1222,  1226,  1228,  1232,  1238,  1245,  1248,
    1249,  1253,  1257,  1259,  1263,  1268,  1270,  1272,  1274,  1275,
    1279,  1280,  1283,  1287,  1290,  1293,  1298,  1299,  1301,  1302,
    1304,  1306,  1313,  1315,  1319,  1322,  1324,  1326,  1329,  1331,
    1333,  1336,  1338,  1340,  1342,  1344,  1346,  1347,  1349,  1351,
    1357,  1360,  1361,  1366,  1368,  1370,  1372,  1374,  1376,  1379,
    1381,  1385,  1389,  1393,  1398,  1403,  1409,  1415,  1419,  1421,
    1423,  1425,  1429,  1432,  1433,  1435,  1439,  1443,  1445,  1447,
    1452,  1459,  1461,  1465,  1469,  1474,  1479,  1485,  1487,  1488,
    1490,  1492,  1493,  1497,  1501,  1505,  1508,  1513,  1521,  1529,
    1536,  1543,  1544,  1546,  1548,  1552,  1562,  1565,  1566,  1570,
    1574,  1578,  1579,  1581,  1583,  1585,  1587,  1591,  1598,  1599,
    1601,  1603,  1605,  1607,  1609,  1611,  1613,  1615,  1617,  1619,
    1621,  1623,  1625,  1627,  1629,  1631,  1633,  1635,  1637,  1639,
    1641,  1643,  1645,  1647,  1649,  1651,  1653,  1655,  1657,  1659,
    1661,  1663,  1666,  1673,  1679,  1683,  1685,  1688,  1692,  1696,
    1700,  1704,  1705,  1707,  1710,  1712,  1714,  1716,  1718,  1720,
    1722,  1724,  1727,  1730,  1733,  1736,  1739,  1742,  1745,  1748,
    1751,  1754,  1757,  1760,  1763,  1766,  1769,  1771,  1773,  1774,
    1776,  1779,  1781,  1783,  1785,  1787,  1789,  1791,  1794,  1797,
    1800,  1803,  1806,  1809,  1812,  1815,  1818,  1821,  1824,  1827,
    1830,  1833,  1836,  1838,  1840,  1845,  1852,  1856,  1865,  1873,
    1881,  1888,  1890,  1893,  1898,  1901,  1908,  1911,  1913,  1918,
    1919,  1922,  1928,  1935,  1937,  1940,  1943,  1949,  1954,  1960,
    1964
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     230,     0,    -1,   231,   104,    -1,   231,   227,   232,    -1,
     232,    -1,   405,    -1,   430,    -1,   432,    -1,   431,    -1,
     254,    -1,   256,    -1,   257,    -1,   272,    -1,   265,    -1,
     266,    -1,   267,    -1,   268,    -1,   270,    -1,   271,    -1,
     299,    -1,   292,    -1,   273,    -1,   251,    -1,   250,    -1,
     289,    -1,   334,    -1,   337,    -1,   373,    -1,   376,    -1,
     381,    -1,   386,    -1,   392,    -1,   384,    -1,   344,    -1,
     349,    -1,   351,    -1,   353,    -1,   356,    -1,   366,    -1,
     371,    -1,   360,    -1,   361,    -1,   362,    -1,   363,    -1,
      -1,   238,    -1,   233,   228,   238,    -1,   400,    -1,   401,
      42,   400,    -1,   401,    42,    34,    -1,     4,    -1,     6,
      -1,     5,    -1,     9,    -1,     8,    -1,    10,    -1,    12,
      -1,    14,    -1,    13,    -1,   166,    42,   400,    -1,   234,
      -1,   235,    -1,    40,   238,    41,    -1,    40,   233,   228,
     238,    41,    -1,   240,    -1,   245,    -1,   246,    -1,   300,
      -1,   107,   300,    -1,   236,    -1,    32,   237,    -1,    33,
     237,    -1,   237,    32,   237,    -1,   237,    33,   237,    -1,
     237,    34,   237,    -1,   237,    35,   237,    -1,   237,    36,
     237,    -1,   237,    38,   237,    -1,   237,    37,   237,    -1,
     236,    -1,    32,   238,    -1,    33,   238,    -1,   238,    32,
     238,    -1,   238,    33,   238,    -1,   238,    34,   238,    -1,
     238,    35,   238,    -1,   238,    36,   238,    -1,   238,    38,
     238,    -1,   238,    37,   238,    -1,   238,    26,   238,    -1,
     238,    25,   238,    -1,   238,    24,   238,    -1,   238,    22,
     238,    -1,   238,    23,   238,    -1,   238,    21,   238,    -1,
     238,    28,   238,    -1,   238,    20,    28,   238,    -1,   238,
      19,   238,    -1,   238,    18,   238,    -1,    20,   238,    -1,
     238,    31,    10,    -1,   238,    31,    20,    10,    -1,   238,
      31,     8,    -1,   238,    31,    20,     8,    -1,   238,    31,
      11,    -1,   238,    31,    20,    11,    -1,   238,    29,   237,
      19,   237,    -1,   238,    20,    29,   237,    19,   237,    -1,
     238,    30,   239,    -1,   238,    20,    30,   239,    -1,   238,
      27,   238,    -1,   300,    -1,    40,   233,    41,    -1,    77,
     241,   242,   244,   103,    -1,   238,    -1,    -1,   243,    -1,
     242,   243,    -1,   195,   238,   181,   238,    -1,   102,   238,
      -1,    -1,   402,    40,    34,    41,    -1,   402,    40,   249,
     238,    41,    -1,   402,    40,   233,    41,    -1,   402,    40,
     238,    68,   278,    41,    -1,   402,    40,   317,    41,    -1,
     402,    40,    41,    -1,   247,    40,   248,    41,    -1,   212,
      -1,   299,    -1,   292,    -1,   251,    -1,   250,    -1,    66,
      -1,    98,    -1,    95,   111,   330,   306,   293,    -1,   188,
     308,   330,   167,   252,   306,   293,    -1,   253,    -1,   252,
     228,   253,    -1,   400,    24,   238,    -1,    44,   255,    54,
     110,   299,    -1,   403,    -1,    55,   255,    -1,    56,   255,
      -1,    56,   255,    58,    -1,    56,   255,   128,   383,    -1,
      56,   255,    58,   128,   383,    -1,    56,   255,    60,   128,
     383,    -1,    56,   255,    59,   128,   383,    -1,    56,   255,
      61,   128,   383,    -1,    56,   255,    62,     5,   128,   383,
      -1,    56,   255,   269,    63,     5,   128,   383,    -1,    56,
     255,    59,    -1,    56,   255,    60,    -1,    56,   255,    61,
      -1,    56,   255,   269,    63,     5,    -1,    58,    -1,    59,
      -1,    56,   255,    62,     5,    -1,    56,   255,   111,     5,
     187,     5,    -1,    57,   255,    -1,    85,   179,   274,   330,
      40,   275,    41,   286,    -1,   124,    20,   107,    -1,    -1,
     276,    -1,   275,   228,   276,    -1,   277,    -1,   150,   130,
      40,   296,    41,    -1,   400,   278,   284,    -1,   184,    -1,
     169,    -1,   136,    -1,   126,    -1,    71,    -1,    93,   279,
      -1,   140,   279,    -1,    73,    -1,   109,   280,    -1,   152,
      -1,    99,   281,    -1,   183,   282,    -1,    91,    -1,    78,
     283,    -1,    72,   283,    -1,   192,   283,    -1,   193,   283,
      -1,    86,    -1,   138,    -1,    90,    -1,   182,   282,    -1,
      40,     5,   228,     5,    41,    -1,    40,     5,    41,    -1,
      -1,    40,     5,    41,    -1,    -1,   148,    -1,    -1,    40,
       5,    41,    -1,    -1,    40,     5,    41,    -1,    -1,   284,
     285,    -1,    -1,    20,    10,    -1,    10,    -1,    94,   235,
      -1,   202,    -1,   150,   130,    -1,   287,    -1,   286,   228,
     287,    -1,    -1,   208,   288,     4,    -1,   206,   288,     4,
      -1,   220,   288,     5,    -1,   219,   288,     5,    -1,   218,
     288,     5,    -1,   210,   288,     5,    -1,   204,   288,     4,
      -1,   223,   288,     8,    -1,   205,   288,   173,    -1,    80,
     288,     4,    -1,    24,    -1,    -1,   100,   179,   290,   291,
      -1,    -1,   124,   107,    -1,   329,    -1,   291,   228,   329,
      -1,   294,   128,   330,   295,   191,   297,   293,    -1,   294,
     128,   330,   299,    -1,   294,   128,   330,    40,   296,    41,
     299,    -1,    -1,   195,   238,    -1,   154,    -1,   127,    -1,
      40,   296,    41,    -1,    -1,   400,    -1,   296,   228,   400,
      -1,    40,   298,    41,    -1,   297,   228,    40,   298,    41,
      -1,   238,    -1,   298,   228,   238,    -1,   301,   293,    -1,
     300,    -1,    40,   301,    41,    -1,    40,   300,    41,    -1,
     302,    -1,   305,   316,    -1,   303,   320,   316,    -1,   303,
     319,   307,   316,    -1,   164,   308,   325,   327,   315,    -1,
     164,   308,   325,   327,   111,   101,   306,   315,    -1,   305,
      -1,   300,    -1,   164,   327,   128,   383,   111,   328,   306,
      -1,   164,   308,   325,   327,   111,   328,   306,   318,   324,
      -1,   303,    16,   325,   303,    -1,   303,    17,   325,   303,
      -1,   303,    15,   325,   303,    -1,    -1,   194,   238,    -1,
     194,     7,   238,    -1,   133,   314,   141,   314,    -1,   141,
     314,   133,   314,    -1,   133,   314,    -1,   141,   314,    -1,
     133,   314,   228,   314,    -1,    -1,   120,   309,   121,    -1,
     310,    -1,   309,   228,   310,    -1,    -1,   311,    -1,   310,
     311,    -1,   151,    -1,   122,    -1,   161,    40,   313,    41,
      -1,    40,   312,    41,    -1,   312,   228,    -1,    -1,   201,
      -1,   175,    -1,   173,    -1,   113,    -1,     5,    -1,    12,
      -1,    -1,   307,    -1,    -1,   110,   188,    -1,   238,   111,
     238,    -1,    74,   238,   111,   238,    -1,   131,   238,   111,
     238,    -1,   185,   238,   111,   238,    -1,    74,   111,   238,
      -1,   131,   111,   238,    -1,   185,   111,   238,    -1,    -1,
     118,    75,   233,    -1,   320,    -1,    -1,   143,    75,   321,
      -1,   322,    -1,   321,   228,   322,    -1,   238,   323,    -1,
      -1,    69,    -1,    96,    -1,    -1,   119,   238,    -1,    -1,
      66,    -1,    98,    -1,   238,    -1,   238,   403,    -1,   238,
      68,   403,    -1,    34,    -1,   326,    -1,   327,   228,   326,
      -1,   329,    -1,   328,   228,   329,    -1,   330,    -1,   330,
      68,   401,    -1,   330,   401,    -1,   300,    68,   401,    -1,
     300,   401,    -1,   331,    -1,    40,   331,    41,    68,   401,
      -1,   401,    -1,    40,   331,    41,    -1,   329,   332,   129,
     329,   142,   238,    -1,   329,   129,   329,   142,   238,    -1,
     112,   333,    -1,   132,   333,    -1,   158,   333,    -1,   125,
      -1,   145,    -1,    -1,   108,   336,   335,    -1,   299,    -1,
     250,    -1,   292,    -1,   251,    -1,   225,    -1,    -1,   168,
     180,   341,    -1,   168,    84,   111,   330,   341,    -1,   168,
      84,    30,   330,   341,    -1,   168,   179,   217,   341,    -1,
     168,   213,   217,   341,    -1,   168,   340,   224,   341,    -1,
     168,   162,    -1,   168,    85,   179,   330,    -1,    97,   330,
     342,    -1,    96,   330,   342,    -1,   168,   226,   338,    -1,
     168,   245,   226,    -1,   168,   207,   339,    -1,   168,   146,
     341,    -1,   168,   343,   198,    -1,   133,     5,   228,     5,
      -1,   133,     5,    -1,    -1,   352,    -1,   110,    87,    -1,
     110,    87,    40,    41,    -1,   115,    -1,   165,    -1,    -1,
      -1,    28,     4,    -1,   194,   238,    -1,    -1,     4,    -1,
      -1,   112,    -1,    85,   189,   345,    -1,   346,    -1,   345,
     228,   346,    -1,   347,   123,    75,   348,    -1,     4,    -1,
       4,    -1,   100,   189,   350,    -1,   347,    -1,   350,   228,
     347,    -1,   167,   147,   352,    24,   348,    -1,    67,   189,
     347,   123,    75,   348,    -1,   110,   347,    -1,    -1,   153,
     189,   355,    -1,   347,   187,   347,    -1,   354,    -1,   355,
     228,   354,    -1,    67,   189,   347,   357,    -1,   135,    -1,
     221,    -1,   197,    -1,    -1,   196,    82,   170,    -1,    -1,
      70,   358,    -1,   172,   186,   359,    -1,    81,   358,    -1,
     159,   358,    -1,   160,   364,   365,     5,    -1,    -1,   115,
      -1,    -1,   199,    -1,   200,    -1,   117,   367,   142,   370,
     187,   350,    -1,   368,    -1,   367,   228,   368,    -1,    66,
     369,    -1,    67,    -1,    85,    -1,    85,   189,    -1,    95,
      -1,   100,    -1,   117,   144,    -1,   127,    -1,   188,    -1,
     164,    -1,   154,    -1,   156,    -1,    -1,    34,    -1,   401,
      -1,   157,   367,   372,   111,   350,    -1,   142,   370,    -1,
      -1,   149,   374,   111,   375,    -1,   403,    -1,   299,    -1,
     292,    -1,   251,    -1,   250,    -1,   167,   377,    -1,   378,
      -1,   377,   228,   378,    -1,    14,   379,   238,    -1,   400,
     379,   238,    -1,   115,   400,   379,   238,    -1,   165,   400,
     379,   238,    -1,   116,    42,   400,   379,   238,    -1,   166,
      42,   400,   379,   238,    -1,    13,   379,   238,    -1,   187,
      -1,    24,    -1,    14,    -1,   106,   374,   382,    -1,   190,
     383,    -1,    -1,   380,    -1,   383,   228,   380,    -1,   385,
     149,   374,    -1,    92,    -1,   100,    -1,    67,   179,   330,
     387,    -1,    67,   179,   330,   153,   187,   330,    -1,   388,
      -1,   387,   228,   388,    -1,    64,   389,   277,    -1,   100,
     389,   400,   390,    -1,    67,   389,   400,   391,    -1,   153,
     389,   400,   187,   403,    -1,    83,    -1,    -1,    76,    -1,
     155,    -1,    -1,   167,    20,    10,    -1,   100,    20,    10,
      -1,   167,    94,   235,    -1,   100,    94,    -1,    67,   174,
     167,   394,    -1,    67,   174,   393,    88,   139,    24,     4,
      -1,    67,   174,   393,    89,   139,    24,     4,    -1,    67,
     174,   176,   139,    24,     4,    -1,    67,   174,   177,   178,
      24,     4,    -1,    -1,   114,    -1,   395,    -1,   394,   228,
     395,    -1,   400,    24,   235,   396,   397,   216,    24,   398,
     399,    -1,    80,     4,    -1,    -1,   163,    24,   137,    -1,
     163,    24,   171,    -1,   163,    24,    74,    -1,    -1,   211,
      -1,   222,    -1,   203,    -1,   209,    -1,    79,    24,     5,
      -1,   214,    24,     4,   215,    24,     5,    -1,    -1,     3,
      -1,   404,    -1,     3,    -1,   404,    -1,     3,    -1,     3,
      -1,   404,    -1,   202,    -1,   203,    -1,   204,    -1,   205,
      -1,   206,    -1,   207,    -1,   208,    -1,   209,    -1,   210,
      -1,   211,    -1,   212,    -1,   213,    -1,   214,    -1,   215,
      -1,   216,    -1,   217,    -1,   219,    -1,   218,    -1,   220,
      -1,   221,    -1,   222,    -1,   223,    -1,   224,    -1,   225,
      -1,   226,    -1,   406,   409,    -1,    85,    43,     3,    40,
     407,    41,    -1,    85,    43,     3,    40,    41,    -1,   407,
     228,   408,    -1,   408,    -1,    14,   278,    -1,    30,    14,
     278,    -1,    46,    14,   278,    -1,    47,    14,   278,    -1,
      70,   410,   103,    -1,    -1,   411,    -1,   411,   412,    -1,
     412,    -1,   418,    -1,   422,    -1,   427,    -1,   426,    -1,
     416,    -1,   417,    -1,   304,   227,    -1,   292,   227,    -1,
     251,   227,    -1,   250,   227,    -1,   299,   227,    -1,   254,
     227,    -1,   256,   227,    -1,   272,   227,    -1,   258,   227,
      -1,   259,   227,    -1,   260,   227,    -1,   262,   227,    -1,
     261,   227,    -1,   263,   227,    -1,   264,   227,    -1,   429,
      -1,   428,    -1,    -1,   414,    -1,   414,   415,    -1,   415,
      -1,   418,    -1,   422,    -1,   427,    -1,   426,    -1,   417,
      -1,   304,   227,    -1,   292,   227,    -1,   251,   227,    -1,
     250,   227,    -1,   299,   227,    -1,   254,   227,    -1,   256,
     227,    -1,   272,   227,    -1,   258,   227,    -1,   259,   227,
      -1,   260,   227,    -1,   262,   227,    -1,   261,   227,    -1,
     263,   227,    -1,   264,   227,    -1,   429,    -1,   428,    -1,
      44,   383,   278,   227,    -1,    44,   383,   278,    94,   235,
     227,    -1,   167,   377,   227,    -1,   124,   238,   181,   413,
     419,   421,   103,   124,    -1,   124,   238,   181,   413,   419,
     103,   124,    -1,   124,   238,   181,   413,   421,   103,   124,
      -1,   124,   238,   181,   413,   103,   124,    -1,   420,    -1,
     419,   420,    -1,    45,   238,   181,   413,    -1,   102,   413,
      -1,    77,   238,   423,   425,   103,    77,    -1,   423,   424,
      -1,   424,    -1,   195,   238,   181,   413,    -1,    -1,   102,
     413,    -1,    49,   413,   103,    49,   227,    -1,    48,   238,
      52,   413,   103,    48,    -1,   227,    -1,    50,   227,    -1,
      51,   227,    -1,    53,     3,    40,   233,    41,    -1,    53,
       3,    40,    41,    -1,   100,    43,   124,   107,     3,    -1,
     100,    43,     3,    -1,   168,    43,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   238,   238,   247,   254,   261,   262,   263,   264,   267,
     268,   269,   270,   271,   273,   274,   275,   276,   277,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   314,   318,   325,   327,   333,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     355,   357,   359,   361,   367,   375,   379,   383,   387,   395,
     396,   400,   404,   405,   406,   407,   408,   409,   410,   413,
     414,   418,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,   432,   433,   434,   435,   436,   437,   441,   445,
     449,   453,   457,   461,   465,   469,   473,   477,   481,   485,
     489,   496,   500,   505,   513,   514,   518,   520,   525,   532,
     533,   537,   551,   579,   654,   670,   674,   696,   704,   711,
     712,   713,   714,   718,   722,   736,   750,   760,   764,   771,
     789,   800,   813,   829,   835,   849,   864,   879,   895,   911,
     927,   944,   960,   981,  1000,  1017,  1030,  1035,  1050,  1067,
    1087,  1107,  1124,  1127,  1131,  1135,  1142,  1146,  1155,  1164,
    1166,  1168,  1170,  1172,  1174,  1183,  1192,  1194,  1196,  1198,
    1203,  1210,  1212,  1219,  1226,  1233,  1240,  1242,  1244,  1250,
    1262,  1264,  1267,  1271,  1272,  1276,  1277,  1281,  1282,  1286,
    1287,  1291,  1294,  1298,  1303,  1308,  1310,  1312,  1317,  1321,
    1326,  1332,  1337,  1342,  1347,  1352,  1357,  1362,  1367,  1372,
    1378,  1386,  1387,  1398,  1408,  1409,  1414,  1418,  1431,  1445,
    1456,  1474,  1475,  1482,  1487,  1495,  1500,  1504,  1505,  1512,
    1516,  1522,  1523,  1537,  1547,  1552,  1553,  1557,  1561,  1566,
    1576,  1597,  1619,  1645,  1646,  1654,  1686,  1712,  1734,  1756,
    1782,  1783,  1787,  1794,  1802,  1810,  1814,  1818,  1830,  1833,
    1847,  1851,  1856,  1862,  1866,  1873,  1877,  1881,  1886,  1893,
    1898,  1904,  1908,  1912,  1916,  1922,  1924,  1930,  1931,  1937,
    1938,  1946,  1953,  1960,  1967,  1974,  1985,  1996,  2011,  2012,
    2019,  2020,  2024,  2031,  2033,  2038,  2046,  2047,  2049,  2055,
    2056,  2064,  2067,  2071,  2078,  2083,  2091,  2099,  2109,  2113,
    2120,  2122,  2127,  2131,  2135,  2139,  2143,  2147,  2151,  2160,
    2168,  2172,  2176,  2185,  2191,  2197,  2203,  2210,  2211,  2221,
    2229,  2230,  2231,  2232,  2236,  2237,  2247,  2249,  2251,  2253,
    2255,  2257,  2262,  2264,  2266,  2268,  2270,  2274,  2287,  2291,
    2295,  2303,  2312,  2322,  2326,  2328,  2330,  2335,  2336,  2337,
    2342,  2343,  2345,  2351,  2352,  2357,  2358,  2368,  2374,  2378,
    2384,  2390,  2396,  2408,  2414,  2418,  2430,  2434,  2440,  2445,
    2456,  2462,  2468,  2472,  2484,  2490,  2495,  2509,  2514,  2518,
    2523,  2527,  2533,  2545,  2557,  2569,  2576,  2580,  2588,  2592,
    2597,  2611,  2622,  2626,  2632,  2638,  2643,  2648,  2653,  2658,
    2663,  2668,  2673,  2678,  2683,  2690,  2695,  2700,  2705,  2717,
    2757,  2762,  2774,  2781,  2786,  2788,  2790,  2792,  2804,  2812,
    2816,  2823,  2829,  2836,  2843,  2850,  2857,  2864,  2873,  2874,
    2878,  2889,  2896,  2901,  2906,  2910,  2923,  2931,  2933,  2944,
    2950,  2961,  2965,  2972,  2977,  2983,  2988,  2997,  2998,  3002,
    3003,  3004,  3008,  3013,  3018,  3022,  3036,  3042,  3049,  3056,
    3063,  3073,  3076,  3084,  3088,  3095,  3110,  3113,  3117,  3119,
    3121,  3124,  3128,  3133,  3138,  3143,  3151,  3155,  3160,  3171,
    3173,  3190,  3192,  3209,  3213,  3215,  3228,  3229,  3230,  3231,
    3232,  3233,  3234,  3235,  3236,  3237,  3238,  3239,  3240,  3241,
    3242,  3243,  3244,  3245,  3246,  3247,  3248,  3249,  3250,  3251,
    3252,  3262,  3267,  3274,  3280,  3284,  3289,  3293,  3297,  3301,
    3306,  3313,  3316,  3321,  3325,  3330,  3332,  3334,  3336,  3338,
    3340,  3342,  3344,  3346,  3348,  3350,  3352,  3354,  3356,  3358,
    3360,  3362,  3364,  3366,  3368,  3370,  3373,  3375,  3382,  3385,
    3390,  3394,  3399,  3401,  3403,  3405,  3407,  3409,  3411,  3413,
    3415,  3417,  3419,  3421,  3423,  3425,  3427,  3429,  3431,  3433,
    3435,  3437,  3440,  3442,  3450,  3456,  3468,  3480,  3486,  3492,
    3496,  3501,  3505,  3510,  3516,  3527,  3534,  3538,  3543,  3549,
    3552,  3563,  3573,  3579,  3589,  3594,  3606,  3614,  3627,  3631,
    3645
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
  "when_clause_list", "when_clause", "case_default", "func_expr",
  "when_func", "when_func_name", "when_func_stmt", "distinct_or_all",
  "delete_stmt", "update_stmt", "update_asgn_list", "update_asgn_factor",
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
     466,   467,   468,   469,   470,   471,   472,    59,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   229,   230,   231,   231,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   233,   233,   234,   234,   234,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   239,   239,   240,   241,   241,   242,   242,   243,   244,
     244,   245,   245,   245,   245,   245,   245,   246,   247,   248,
     248,   248,   248,   249,   249,   250,   251,   252,   252,   253,
     254,   255,   256,   257,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   269,   270,   271,
     272,   273,   274,   274,   275,   275,   276,   276,   277,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     279,   279,   279,   280,   280,   281,   281,   282,   282,   283,
     283,   284,   284,   285,   285,   285,   285,   285,   286,   286,
     286,   287,   287,   287,   287,   287,   287,   287,   287,   287,
     287,   288,   288,   289,   290,   290,   291,   291,   292,   292,
     292,   293,   293,   294,   294,   295,   295,   296,   296,   297,
     297,   298,   298,   299,   299,   300,   300,   301,   301,   301,
     301,   302,   302,   303,   303,   304,   305,   305,   305,   305,
     306,   306,   306,   307,   307,   307,   307,   307,   308,   308,
     309,   309,   309,   310,   310,   311,   311,   311,   311,   312,
     312,   313,   313,   313,   313,   314,   314,   315,   315,   316,
     316,   317,   317,   317,   317,   317,   317,   317,   318,   318,
     319,   319,   320,   321,   321,   322,   323,   323,   323,   324,
     324,   325,   325,   325,   326,   326,   326,   326,   327,   327,
     328,   328,   329,   329,   329,   329,   329,   329,   329,   330,
     331,   331,   331,   332,   332,   332,   332,   333,   333,   334,
     335,   335,   335,   335,   336,   336,   337,   337,   337,   337,
     337,   337,   337,   337,   337,   337,   337,   337,   337,   337,
     337,   338,   338,   338,   339,   339,   339,   340,   340,   340,
     341,   341,   341,   342,   342,   343,   343,   344,   345,   345,
     346,   347,   348,   349,   350,   350,   351,   351,   352,   352,
     353,   354,   355,   355,   356,   357,   357,   358,   358,   359,
     359,   360,   360,   361,   362,   363,   364,   364,   365,   365,
     365,   366,   367,   367,   368,   368,   368,   368,   368,   368,
     368,   368,   368,   368,   368,   369,   369,   370,   370,   371,
     372,   372,   373,   374,   375,   375,   375,   375,   376,   377,
     377,   378,   378,   378,   378,   378,   378,   378,   379,   379,
     380,   381,   382,   382,   383,   383,   384,   385,   385,   386,
     386,   387,   387,   388,   388,   388,   388,   389,   389,   390,
     390,   390,   391,   391,   391,   391,   392,   392,   392,   392,
     392,   393,   393,   394,   394,   395,   396,   396,   397,   397,
     397,   397,   398,   398,   398,   398,   399,   399,   399,   400,
     400,   401,   401,   402,   403,   403,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   405,   406,   406,   407,   407,   408,   408,   408,   408,
     409,   410,   410,   411,   411,   412,   412,   412,   412,   412,
     412,   412,   412,   412,   412,   412,   412,   412,   412,   412,
     412,   412,   412,   412,   412,   412,   412,   412,   413,   413,
     414,   414,   415,   415,   415,   415,   415,   415,   415,   415,
     415,   415,   415,   415,   415,   415,   415,   415,   415,   415,
     415,   415,   415,   415,   416,   416,   417,   418,   418,   418,
     418,   419,   419,   420,   421,   422,   423,   423,   424,   425,
     425,   426,   427,   428,   429,   429,   430,   430,   431,   431,
     432
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
       2,     2,     3,     3,     3,     3,     3,     3,     3,     1,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     4,     3,     3,     2,
       3,     4,     3,     4,     3,     4,     5,     6,     3,     4,
       3,     1,     3,     5,     1,     0,     1,     2,     4,     2,
       0,     4,     5,     4,     6,     4,     3,     4,     1,     1,
       1,     1,     1,     1,     1,     5,     7,     1,     3,     3,
       5,     1,     2,     2,     3,     4,     5,     5,     5,     5,
       6,     7,     3,     3,     3,     5,     1,     1,     4,     6,
       2,     8,     3,     0,     1,     3,     1,     5,     3,     1,
       1,     1,     1,     1,     2,     2,     1,     2,     1,     2,
       2,     1,     2,     2,     2,     2,     1,     1,     1,     2,
       5,     3,     0,     3,     0,     1,     0,     3,     0,     3,
       0,     2,     0,     2,     1,     2,     1,     2,     1,     3,
       0,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     0,     4,     0,     2,     1,     3,     7,     4,
       7,     0,     2,     1,     1,     3,     0,     1,     3,     3,
       5,     1,     3,     2,     1,     3,     3,     1,     2,     3,
       4,     5,     8,     1,     1,     7,     9,     4,     4,     4,
       0,     2,     3,     4,     4,     2,     2,     4,     0,     3,
       1,     3,     0,     1,     2,     1,     1,     4,     3,     2,
       0,     1,     1,     1,     1,     1,     1,     0,     1,     0,
       2,     3,     4,     4,     4,     3,     3,     3,     0,     3,
       1,     0,     3,     1,     3,     2,     0,     1,     1,     0,
       2,     0,     1,     1,     1,     2,     3,     1,     1,     3,
       1,     3,     1,     3,     2,     3,     2,     1,     5,     1,
       3,     6,     5,     2,     2,     2,     1,     1,     0,     3,
       1,     1,     1,     1,     1,     0,     3,     5,     5,     4,
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
       2,     2,     2,     2,     2,     2,     1,     1,     0,     1,
       2,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     1,     4,     6,     3,     8,     7,     7,
       6,     1,     2,     4,     2,     6,     2,     1,     4,     0,
       2,     5,     6,     1,     2,     2,     5,     4,     5,     3,
       3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      44,     0,     0,     0,     0,     0,     0,     0,   398,   398,
       0,   457,     0,     0,     0,   458,     0,   345,     0,   234,
       0,     0,   233,     0,   398,   406,   268,     0,   369,     0,
     268,     0,     0,     4,    23,    22,     9,    10,    11,    13,
      14,    15,    16,    17,    18,    12,    21,    24,    20,     0,
      19,   254,   231,   247,   301,   253,    25,    26,    33,    34,
      35,    36,    37,    40,    41,    42,    43,    38,    39,    27,
      28,    29,    32,     0,    30,    31,     5,     0,     6,     8,
       7,   254,     0,   504,   506,   507,   508,   509,   510,   511,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     523,   522,   524,   525,   526,   527,   528,   529,   530,     0,
     141,   505,     0,   142,   143,   160,   481,     0,     0,   397,
     401,   403,     0,   163,     0,     0,   501,   373,   329,   502,
     373,     0,   224,     0,   453,   433,   344,     0,   426,   415,
     416,   418,   419,     0,   421,   424,   423,   422,     0,   412,
       0,     0,   431,   404,   407,   408,   272,   311,   499,     0,
       0,     0,     0,   389,     0,     0,   438,   439,     0,   500,
     503,     0,     0,     0,   376,   367,   370,   352,   368,     0,
     370,   389,     0,   363,     0,     0,     0,     0,   400,     0,
       1,     2,    44,     0,     0,   243,   311,   311,   311,     0,
       0,   289,     0,   248,     0,   541,   531,   246,   245,     0,
       0,   144,   152,   153,   154,     0,     0,     0,   482,     0,
       0,     0,     0,     0,   381,     0,     0,     0,     0,   377,
     378,     0,   260,   374,   355,   354,   619,     0,     0,     0,
     384,   383,     0,   451,   341,   343,   342,   340,   339,   425,
     414,   417,   420,     0,     0,     0,     0,   392,   390,     0,
       0,   409,   410,     0,   280,   276,   275,     0,     0,   270,
     273,   312,   313,     0,   449,   448,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   620,     0,     0,     0,
       0,     0,   359,   370,   346,     0,   358,   364,   370,     0,
     356,   357,   370,   360,     0,     0,   402,     0,     3,   236,
     499,    50,    52,    51,    54,    53,    55,    56,    58,    57,
       0,     0,     0,     0,   115,     0,     0,   516,    60,    61,
      79,   232,    64,    65,    66,     0,    67,    47,     0,   500,
       0,     0,     0,     0,     0,     0,   289,   249,   290,   456,
       0,     0,   568,     0,     0,     0,     0,     0,   268,     0,
     613,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   542,   544,   549,
     550,   545,   546,   548,   547,   567,   566,     0,   617,     0,
      45,   158,     0,     0,   476,   483,     0,     0,     0,     0,
       0,   468,   468,   468,   468,   459,   461,     0,   395,   396,
     394,     0,     0,     0,     0,     0,     0,   231,     0,   225,
       0,   223,     0,   226,   322,   327,     0,   450,   454,   452,
     427,     0,   428,   413,   437,   436,   435,   434,   432,     0,
       0,   430,     0,   405,     0,     0,   269,     0,   274,   317,
     314,   318,   287,   447,   441,     0,     0,   388,     0,     0,
       0,   440,   442,   370,   370,   353,   371,   372,   349,   365,
     350,   362,   351,     0,   126,   133,     0,   134,     0,     0,
       0,    45,     0,     0,     0,     0,     0,     0,   229,    99,
      80,    81,     0,    45,    67,   114,     0,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   268,   254,   259,   253,   257,   258,   306,   302,
     303,   285,   286,   265,   266,   250,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   569,   571,   576,   572,   573,   575,
     574,   593,   592,   614,   615,     0,     0,     0,     0,     0,
     554,   553,   556,   557,   559,   560,   561,   563,   562,   564,
     565,   558,   552,   555,   551,   540,   543,   140,   616,     0,
       0,   155,     0,     0,     0,     0,     0,     0,   467,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   533,     0,
       0,     0,   535,   162,     0,   379,     0,     0,   261,   135,
     618,   254,     0,   327,     0,     0,   326,   338,   336,     0,
     338,   338,     0,     0,   324,   385,     0,     0,   391,   393,
     429,   278,   279,   284,   283,   282,   281,     0,   271,     0,
     315,     0,     0,   288,   251,   443,     0,   382,   386,   444,
       0,   348,   347,     0,     0,   121,     0,     0,     0,     0,
       0,     0,   123,     0,     0,     0,   125,   399,   260,   137,
       0,     0,   237,     0,     0,    62,     0,   120,   116,    59,
      98,    97,     0,     0,     0,    94,    92,    93,    91,    90,
      89,   110,    95,     0,     0,    69,     0,     0,   108,   111,
     102,   100,   104,     0,    82,    83,    84,    85,    86,    88,
      87,     0,   132,   131,   130,   129,    49,    48,   311,   307,
     308,   305,     0,     0,     0,     0,   173,   200,   176,   200,
     186,   188,   181,   192,   196,   194,   172,   171,   187,   192,
     178,   170,   198,   198,   169,   200,   200,     0,   568,   580,
     579,   582,   583,   585,   586,   587,   589,   588,   590,   591,
     584,   578,   581,   577,     0,   570,   156,   157,     0,     0,
       0,     0,     0,     0,   609,   607,   568,     0,   596,    46,
     159,   484,   487,   479,   480,     0,     0,   463,     0,     0,
     471,   460,     0,   468,   462,   387,   536,     0,     0,     0,
     532,     0,     0,     0,   164,   166,   380,   262,   330,   227,
     325,   337,   333,     0,   334,   335,     0,   323,   455,   411,
     277,   316,   260,   260,   320,   319,   445,   446,   366,   361,
     295,     0,   296,     0,   297,     0,     0,   291,   122,     0,
     231,     0,   235,     0,     0,   231,    46,     0,     0,   117,
       0,    96,     0,   109,    70,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   103,   101,   105,   127,     0,
     304,   263,   267,   264,     0,   183,   182,     0,   174,   195,
     179,     0,   177,   175,     0,   189,   180,   184,   185,     0,
     594,     0,     0,     0,     0,     0,     0,     0,   145,     0,
       0,   568,   606,     0,     0,     0,     0,   491,   477,   478,
     202,     0,     0,   465,   469,   470,   464,     0,   537,   538,
     539,   534,     0,   210,     0,     0,     0,     0,   287,     0,
     298,   292,   293,   294,   124,   138,   136,   139,   230,   238,
     241,     0,     0,   228,    63,     0,   119,   113,     0,   106,
      72,    73,    74,    75,    76,    78,    77,   112,     0,     0,
       0,     0,     0,     0,     0,   611,   146,   148,   147,   149,
       0,     0,   568,   610,     0,     0,   568,     0,     0,   601,
       0,     0,   486,     0,     0,   168,     0,   475,     0,     0,
     466,     0,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   161,   208,   165,   328,   332,     0,   252,   321,
       0,   309,   239,     0,     0,   118,   107,     0,   199,   191,
       0,   193,   197,   595,   612,   150,     0,   608,   605,     0,
     604,   600,     0,   602,     0,     0,   260,     0,     0,   204,
       0,     0,     0,   206,   201,   473,   472,   474,     0,   221,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   331,     0,     0,   256,   242,     0,     0,   151,   568,
     598,     0,   599,   255,   490,   488,   489,     0,   203,   205,
     207,   167,   220,   217,   219,   212,   211,   216,   215,   214,
     213,   218,   209,   299,   310,   240,   190,   603,   597,   494,
     495,   492,   493,   498,     0,     0,   485,     0,     0,   496,
       0,     0,     0,   497
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    31,    32,    33,   389,   328,   329,   330,   706,   450,
     708,   332,   496,   687,   688,   860,   333,   334,   335,   721,
     482,   538,   539,   678,   679,   540,   109,   541,    38,   542,
     543,   544,   545,   546,   547,   548,    39,    40,    41,    42,
     217,    43,    44,   549,    46,   228,   813,   814,   815,   757,
     888,   892,   890,   895,   885,   995,  1054,  1012,  1013,  1060,
      47,   239,   421,   550,   195,    49,   487,   681,   855,   951,
     551,   336,    52,    53,    54,   552,    55,   417,   653,   157,
     268,   269,   270,   444,   647,   533,   654,   203,   483,  1021,
     200,   201,   529,   530,   731,  1074,   273,   451,   452,   833,
     834,   424,   425,   632,   822,    56,   248,   137,    57,   300,
     296,   185,   292,   234,   186,    58,   229,   230,   240,   658,
      59,   241,    60,   281,    61,   257,   258,    62,   410,   120,
     306,    63,    64,    65,    66,   155,   263,    67,   148,   149,
     250,   431,    68,   260,    69,   134,   438,    70,   166,   167,
     276,   428,    71,   243,   429,    72,    73,    74,   405,   406,
     603,   926,   923,    75,   222,   394,   395,   917,   994,  1113,
    1116,   337,   338,   187,   110,   339,    76,    77,   611,   612,
     206,   376,   377,   378,   553,   554,   555,   379,   556,   557,
     988,   989,   990,   558,   784,   785,   913,   559,   560,   561,
     562,    78,    79,    80
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -729
static const yytype_int16 yypact[] =
{
    2951,    36,  2458,    97,  2458,  2458,  2458,   273,   -75,   -75,
      32,  -729,     7,  2489,  2489,   122,  2458,   -91,   457,  -729,
    2458,   -51,  -729,   457,   -75,    26,   186,  1406,  1722,   126,
     186,   162,   -52,  -729,  -729,  -729,  -729,  -729,  -729,  -729,
    -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,   191,
    -729,    -3,   120,  -729,    55,    80,  -729,  -729,  -729,  -729,
    -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,
    -729,  -729,  -729,   175,  -729,  -729,  -729,   298,  -729,  -729,
    -729,   295,   297,  -729,  -729,  -729,  -729,  -729,  -729,  -729,
    -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,
    -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,   341,
    -729,  -729,   335,  -729,   527,  -729,   264,  2489,   399,  -729,
    -729,  -729,   396,   288,   399,  2489,  -729,   410,  -729,  -729,
     410,    62,   309,   399,   249,  -729,  -729,   290,   294,  -729,
     253,  -729,  -729,   313,  -729,  -729,  -729,  -729,   -54,  -729,
     361,   399,   -35,  -729,  -729,   148,   268,    91,  -729,    53,
      53,  2524,   404,   378,  2524,   447,   279,  -729,    53,  -729,
    -729,   491,    57,   331,  -729,  -729,    29,  -729,  -729,   314,
      29,   420,   318,   372,   310,   315,   345,   500,   354,  2489,
    -729,  -729,  2951,  2489,  2073,  -729,    91,    91,    91,   480,
     -28,   312,   368,  -729,  2458,  2007,  -729,  -729,  -729,   453,
    1375,   502,   505,  -729,  -729,   564,   570,   513,  -729,  2524,
     441,   412,   265,   262,  -729,   187,   542,   580,  2489,   373,
    -729,   489,   421,  -729,  -729,  -729,  -729,   496,   512,  2150,
    -729,   397,   609,  -729,  -729,  -729,  -729,  -729,  -729,  -729,
    -729,  -729,  -729,  2234,   457,   290,   439,  -729,   400,  2234,
     522,  -729,  -729,   629,  -729,  -729,  -729,   597,   -59,   268,
    -729,  -729,  -729,  1436,  -729,  -729,  2073,  2073,    53,  2524,
     399,   617,    53,  2524,  2185,  2073,  -729,  2489,  2489,  2489,
     638,  2073,  -729,    29,  -729,    89,  -729,  -729,    29,   639,
    -729,  -729,    29,  -729,   751,   568,  -729,   485,  -729,    42,
     118,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,
    2073,  2073,  2073,  1526,  2073,   606,   611,   616,  -729,  -729,
    -729,  3473,  -729,  -729,  -729,   666,  -729,  -729,   672,   674,
      49,    49,    49,  2073,   105,   105,   607,  -729,  -729,  -729,
     920,  2073,  2711,   493,   501,  2458,  2073,  2073,  1145,  2185,
    -729,   503,   504,   506,   507,   508,   509,   510,   511,   514,
     515,   516,   517,   520,   521,   523,   615,  2007,  -729,  -729,
    -729,  -729,  -729,  -729,  -729,  -729,  -729,    36,  -729,     2,
    3473,  -729,   552,   724,   524,  -729,   725,   727,   729,   623,
     627,   684,   684,   684,    16,   540,  -729,   694,  -729,  -729,
    -729,   602,   663,   748,   399,   714,  1750,   120,   787,  -729,
     992,   588,  2344,   409,  2423,  -729,   399,  -729,  -729,   590,
    -729,   632,  -729,  -729,  -729,  -729,  -729,  -729,  -729,   399,
     399,  -729,   399,  -729,    10,   201,  -729,   268,  -729,  -729,
    1079,  -729,   -37,  3473,  3473,  2073,    53,  -729,   816,  2073,
      53,  -729,  3473,    29,    29,  -729,  -729,  3473,  -729,   781,
    -729,   594,  -729,   782,  -729,  -729,  1783,  -729,  1816,  2040,
      13,  3199,  2073,   783,   659,  2524,  2264,   642,  -729,  2859,
    -729,  -729,   608,  3401,   328,  3473,   640,  -729,  2524,  2073,
    2073,   395,  2073,  2073,  2073,  2073,  2073,  2073,  2073,  2073,
    2106,   790,   538,  2073,  2073,  2073,  2073,  2073,  2073,  2073,
     290,  2299,   186,  -729,   817,  -729,   817,  -729,  3314,   610,
    -729,  -729,  -729,   -56,   704,  -729,  2889,  3366,   612,   613,
     614,   618,   619,   620,   624,   630,   633,   636,   637,   643,
     645,   646,   647,   739,  2711,  -729,  -729,  -729,  -729,  -729,
    -729,  -729,  -729,  -729,  -729,   321,  2585,  2789,   -55,   239,
    -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,
    -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  2073,
     838,  -729,  2524,   139,   846,   849,   830,   832,  -729,  2524,
    2524,  2524,  2489,  2524,   306,   816,  3023,   848,  -729,   852,
     855,    19,  -729,  -729,  2376,  -729,   816,  2073,  3473,  -729,
    -729,  1492,   409,   834,  2150,  2489,  -729,   731,  -729,  2150,
     731,   731,   749,  2489,  -729,  -729,   609,   399,  -729,  -729,
     397,  -729,  -729,  -729,  -729,  -729,  -729,   836,   268,  2458,
    -729,  1461,  1436,  -729,  -729,  3473,  2073,  -729,  -729,  3473,
    2073,  -729,  -729,   839,   874,  -729,  2073,  3220,  2073,  3250,
    2073,  3271,  -729,  3023,  2073,  3425,  -729,  -729,  -100,  -729,
     857,    22,  -729,   843,  2073,  -729,  2073,   -24,  -729,  -729,
    2195,  2859,  2073,  2106,   790,   766,   766,   766,   766,   766,
     766,   653,   744,  2106,  2106,  -729,   635,  1526,  -729,  -729,
    -729,  -729,  -729,   356,   559,   559,   847,   847,   847,   847,
    -729,   845,  -729,  -729,  -729,  -729,  -729,  -729,    91,  -729,
    -729,  -729,  2073,   105,   105,   105,  -729,   844,  -729,   844,
    -729,  -729,  -729,   850,   752,   859,  -729,  -729,  -729,   850,
    -729,  -729,   861,   861,  -729,   844,   844,   -33,  2711,  -729,
    -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,
    -729,  -729,  -729,  -729,   860,  -729,   759,   785,   786,   788,
     905,   609,   856,  2073,    31,  -729,  2711,   609,  -729,  3473,
    -729,  -729,   835,  -729,  -729,   914,   916,  -729,  3023,   217,
       8,  -729,   734,   684,  -729,  -729,  -729,  3023,  3023,  3023,
    -729,   479,   792,    23,  -729,  -729,  -729,  3473,   858,   409,
    -729,  -729,  -729,   326,  -729,  -729,  2150,  -729,  -729,   397,
    -729,  -729,   421,   -92,   409,  -729,  3473,  3473,  -729,  -729,
    3473,  2073,  3473,  2073,  3473,  2073,   886,  3473,  -729,  2524,
     120,  2073,    36,  2524,  2073,   -98,  3449,  2821,  2073,  -729,
     826,   744,   689,  -729,  -729,  -729,  2106,  2106,  2106,  2106,
    2106,  2106,  2106,  2106,    25,  -729,  -729,  -729,  -729,  1436,
    -729,  -729,  -729,  -729,   925,  -729,  -729,   926,  -729,  -729,
    -729,   927,  -729,  -729,   930,  -729,  -729,  -729,  -729,   139,
    -729,   840,   710,   609,   609,   609,   609,   810,   590,   937,
    2882,  2711,  -729,   841,   286,   -13,   942,   784,  -729,  -729,
    -729,    72,   266,  -729,  -729,  -729,  -729,  2458,  -729,  -729,
    -729,  -729,   908,   277,  2376,  2489,  2073,   348,   -28,  2150,
     831,  3473,  3473,  3473,  -729,  -729,  -729,  3473,  -729,  -729,
    3473,    28,   910,  -729,  -729,  2073,  3473,  -729,  2106,   626,
     641,   641,   913,   913,   913,   913,  -729,  -729,    -8,   911,
      38,   940,   943,   756,   939,  -729,   590,   590,   590,   590,
     609,   862,  2711,  -729,   912,  2073,  2711,   864,   289,  -729,
     882,  2150,  -729,   968,   777,    35,   984,  -729,   986,   139,
    -729,  2524,   974,   974,   974,   974,   974,   974,   974,   974,
     974,   974,   771,  -729,  -729,  -729,  3473,  2073,  -729,   409,
     928,   881,  -729,  2073,  2073,  3473,   626,  2150,  -729,  -729,
     996,  -729,  -729,  -729,  -729,   590,   609,  -729,  -729,  2921,
    -729,  -729,   878,  -729,   901,   884,   -92,   226,   981,  -729,
     999,   139,   880,  -729,  -729,  -729,  -729,  -729,    40,  -729,
    1007,  1008,   842,  1009,  1010,  1012,  1013,  1014,  1015,  1016,
     277,  3473,  2073,  2073,  -729,  3473,    45,   980,   590,  2711,
    -729,   898,  -729,  -729,  -729,  -729,  -729,   342,  -729,  -729,
    -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,
    -729,  -729,  -729,   795,  3473,  -729,  -729,  -729,  -729,  -729,
    -729,  -729,  -729,   -26,  1001,  1002,  -729,  1023,  1025,  -729,
     815,  1011,  1026,  -729
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -729,  -729,  -729,   851,  -300,  -729,  -572,  -354,  -171,   389,
     340,  -729,  -729,  -729,   349,  -729,  1018,  -729,  -729,  -729,
    -729,    17,    24,  -729,   188,    39,    43,    41,  -729,  -125,
    -114,  -110,   -97,   -96,   -94,   -93,  -729,  -729,  -729,  -729,
     473,  -729,  -729,    44,  -729,  -729,  -729,   106,   440,  -538,
     292,  -729,  -729,   291,  -423,  -729,  -729,  -729,   -23,  -197,
    -729,  -729,  -729,    27,  -385,  -729,  -729,    47,  -729,    18,
       9,     0,    12,  -729,   161,   -90,   231,  -653,   853,   -14,
    -729,   603,  -238,  -729,  -729,  -299,   113,  -159,  -729,  -729,
    -729,  -729,  -729,   320,  -729,  -729,  -162,   402,  -351,    65,
    -224,    15,   644,  -729,  -156,  -729,  -729,  -729,  -729,  -729,
    -729,  -729,  -143,   931,  -729,  -729,  -729,   648,   -68,  -398,
    -729,  -402,  -729,   877,  -729,   625,  -729,  -729,  -729,   304,
    -729,  -729,  -729,  -729,  -729,  -729,  -729,  -729,  1037,   812,
    -729,   808,  -729,  -729,  -729,    70,  -729,  -729,   709,   793,
    -101,   433,  -729,  -729,  -344,  -729,  -729,  -729,  -729,   466,
     302,  -729,  -729,  -729,  -729,  -729,   482,  -729,  -729,  -729,
    -729,   -22,   -11,  -729,    -2,     6,  -729,  -729,  -729,   260,
    -729,  -729,  -729,   695,  -728,  -729,   526,  -729,   -89,   -86,
    -729,    88,    90,   -85,  -729,   299,  -729,   -81,   -80,   -79,
     -78,  -729,  -729,  -729
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -504
static const yytype_int16 yytable[] =
{
      51,    81,   128,   128,   480,   168,   536,   568,   111,    50,
     111,   111,   111,    82,   135,   423,   189,    34,   135,   129,
     129,   792,   111,   492,    35,   850,   111,    48,   127,   130,
     901,   448,   619,   169,   340,   341,   342,   294,  -244,    36,
     640,    37,   347,   588,    45,  1049,   534,   113,   114,   115,
     225,   641,   191,  1114,   672,  1050,   231,   290,   914,   277,
     810,   899,   446,   852,   933,   236,   967,   285,   806,  1022,
     196,   197,   198,   787,   651,   122,     1,   274,   858,  1029,
     365,  1091,   486,   256,   924,   733,  1105,   287,   253,     1,
     150,   366,   996,   224,   416,   367,   344,   194,   991,   598,
     112,  -244,   416,  1027,   345,   344,   128,   259,   368,   369,
     531,   370,   371,   345,   128,   375,   380,   532,   125,   381,
     382,  -289,   119,   129,   383,   384,   385,   386,   849,  1051,
     952,   129,   223,   911,   136,   846,   939,    51,   151,   278,
     232,   154,   282,   311,   312,   313,   247,   314,   315,   316,
     468,   317,   318,   319,   244,   470,   705,   271,  -503,   472,
    -501,   245,   190,   925,   246,   131,   997,   169,   288,   447,
     169,   686,   734,   652,   254,   192,   469,   455,   128,   938,
     940,   459,   128,   983,  -289,  1052,   237,   535,  1115,   272,
     202,   652,    51,   254,   900,   129,   622,   396,   199,   129,
      26,    50,   135,   602,   307,    51,    26,   805,   309,    34,
     111,   123,   457,   522,   374,   636,    35,   128,   816,    48,
     652,   124,   361,   291,  -244,   169,   783,   457,   128,   362,
     589,    36,   373,    37,   129,   829,    45,  1053,   642,   422,
     275,   589,   432,   413,   363,   129,   364,   811,   432,   372,
     853,   934,   365,   589,  1037,    51,  1023,   456,  1040,   129,
     920,   460,   168,   366,   437,   129,  1030,   367,   853,   928,
     929,   930,   434,  1023,   349,  -289,   128,   128,   128,   435,
     368,   369,   436,   370,   371,   169,   998,   375,   380,   169,
     169,   381,   382,   129,   129,   129,   383,   384,   385,   386,
    1084,   132,   463,   464,   465,   326,   156,  -289,   264,    51,
     407,   133,   188,   121,   643,   194,   886,   921,   488,   193,
     661,   662,   408,   494,   204,   497,   401,   973,   153,   402,
       1,   985,   897,   898,   985,    82,   207,   168,   208,   705,
     523,   523,   523,  -254,  -254,  -254,   231,   261,   262,   705,
     705,  1107,    51,   399,   400,   656,   111,  1002,   635,   660,
     999,   111,   403,  1085,   875,   169,   876,   877,   205,   207,
     401,   638,   256,   402,   644,   210,   645,    51,   218,   776,
     777,   778,   779,   780,   922,    12,   374,    51,   986,   987,
     265,   986,  1042,  1083,   361,   209,   587,  1086,   565,   226,
     819,   362,   646,   224,   373,   823,   403,   874,   409,   128,
     448,   626,   227,   634,   233,   404,   363,    19,   364,   266,
     621,   372,   202,   692,   693,   694,   129,  1057,   129,   267,
     129,   219,    82,   238,   881,   882,   883,   908,   627,   242,
     220,   221,   251,   915,    22,  -300,   279,   116,   650,   781,
     249,   628,   117,  -300,    26,   629,   111,   252,   630,   803,
     627,  -254,   118,   680,   682,   946,   788,   284,   936,  -254,
     953,  -254,   255,   628,   824,   825,   689,   629,    30,  1089,
     630,  1003,  1004,  1005,   631,  1006,    81,  1007,   280,   283,
    1017,   169,   169,   606,   286,  1008,  1009,  1010,    82,   727,
    1011,   524,   526,   527,   169,   299,   631,   284,   728,   607,
     289,   709,   705,   705,   705,   705,   705,   705,   705,   705,
      51,   627,   862,   138,   139,   609,   610,   169,   968,   725,
     295,   293,   864,   865,   628,   298,   301,   722,   629,   302,
     304,   630,   140,   303,   723,  1109,   710,   724,   711,   712,
     305,  1110,   141,  1111,    51,   343,   348,   142,   713,   976,
     977,   978,   979,   387,  1112,  -156,   879,   631,  -157,   391,
     396,   525,   525,   525,   143,   392,   393,   798,   799,   800,
     397,   802,   411,   331,   144,   211,   212,   213,   214,   215,
     398,   128,   798,   515,   516,   517,   518,   519,   169,   390,
     412,   414,   937,   418,   705,   169,   169,   169,   129,   169,
     626,   145,   415,   128,   820,   416,   606,   801,   128,   419,
     169,   146,   827,   427,   422,   426,   439,   129,   440,   422,
     129,   129,   607,   442,   443,   129,  1035,   445,   216,   129,
     128,   458,   466,   608,   471,   147,     1,   831,   609,   610,
     484,   422,   485,   498,   866,   111,  -128,   129,   867,   868,
     869,   870,   871,   872,   873,   453,   454,   867,   868,   869,
     870,   871,   872,   873,   462,   869,   870,   871,   872,   873,
     467,   509,   510,   511,   512,   513,   514,   515,   516,   517,
     518,   519,  1078,   481,   709,   959,   960,   961,   962,   963,
     964,   965,   966,   599,   600,   601,   520,   494,   958,   489,
     490,   491,   493,   495,   521,  1019,  -502,   202,   585,    82,
     563,   867,   868,   869,   870,   871,   872,   873,   564,   591,
     570,   571,   528,   572,   573,   574,   575,   576,   577,   590,
     537,   578,   579,   580,   581,   566,   567,   582,   583,   593,
     584,   594,   592,   595,   310,   311,   312,   313,    51,   314,
     315,   316,   596,   317,   318,   319,   597,   598,   604,   605,
     613,   320,  1103,   510,   511,   512,   513,   514,   515,   516,
     517,   518,   519,   321,   322,   473,    51,  1026,   614,   616,
     620,   323,   474,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   618,  1061,  1062,  1063,  1064,
    1065,  1066,  1067,  1068,  1069,   128,   624,   475,   636,   637,
     657,   663,   664,   665,   676,   476,   422,   680,   324,   677,
     707,   949,   129,   683,   198,   686,   684,   735,   732,   759,
     760,   761,   774,   790,   655,   762,   763,   764,   659,   477,
     793,   765,    51,   794,   795,   169,   796,   766,   325,   169,
     767,   948,   807,   768,   769,   667,   808,   669,   671,   809,
     770,   675,   771,   772,   773,   818,   821,   830,   826,   839,
     838,   851,   478,   854,   884,   519,   878,   903,   690,   691,
     887,   695,   696,   697,   698,   699,   700,   701,   702,   891,
     889,   894,   714,   715,   716,   717,   718,   719,   720,   902,
     907,    51,   798,   904,   905,   916,   906,   326,   918,   909,
     919,   927,   932,    83,  1015,  1000,   935,   944,   128,   957,
     969,   970,   971,   111,   427,   972,   479,   975,   980,   422,
     169,   129,   981,   974,   984,   129,   992,   993,  1001,  1020,
    1024,   873,  1028,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,   327,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   789,   682,
     128,  1031,    51,  1033,  1032,  1045,    51,  1034,  1041,  1038,
    1036,   422,  1047,  1048,  1055,   126,  1056,   129,  1059,  1070,
    1073,  1077,  1080,  1072,  1081,  1087,   817,   169,  1082,  1088,
    1090,  1092,  1093,  1095,  1096,  1094,   128,  1097,  1098,  1099,
    1100,  1106,  1108,   589,  1101,  1117,  1118,   422,  1119,  1120,
    1121,  1123,   420,   129,   863,  1122,   859,   945,   782,   797,
    1014,   893,  1076,   308,   896,   836,   184,  1102,  1058,   837,
     648,  1018,   880,   346,   835,   840,  1046,   842,   297,   844,
     152,   235,   615,   847,   623,   639,   433,   441,   569,   828,
     804,   931,   586,   856,   791,   857,  1043,   461,  1044,    51,
     775,   861,    83,   912,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   390,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,   514,   515,   516,   517,   518,   519,     0,     0,
       0,   528,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   649,   310,   311,
     312,   313,     0,   314,   315,   316,    26,   317,   318,   319,
       0,     0,     0,     0,     0,   320,     0,     0,     0,     0,
       0,     0,   910,     0,     0,     0,     0,   321,   322,   449,
       0,     0,     0,     0,     0,   323,     0,     0,     0,     0,
       0,     0,     0,     0,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,     0,
       0,     0,   324,     0,     0,     0,     0,     0,     0,     0,
     941,     0,   942,     0,   943,     0,     0,     0,     0,     0,
     947,     0,     0,   950,     0,     0,     0,   956,     0,     0,
       0,     0,   325,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,     0,     0,     0,     0,
       0,   326,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1016,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1025,     0,     0,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,   327,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,     0,     0,  1039,     0,     0,     0,   310,   311,
     312,   313,     0,   314,   315,   316,     0,   317,   318,   319,
       0,     0,     0,     0,     0,   320,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1071,   321,   322,   158,
       0,     0,  1075,   950,     0,   323,   388,     0,     0,   159,
     160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   310,
     311,   312,   313,     0,   314,   315,   316,     0,   317,   318,
     319,     0,   324,     0,     0,     0,   320,     0,     0,     0,
       0,   390,  1104,     0,   126,     0,     0,     0,   321,   322,
     449,     0,     0,     0,     0,     0,   323,     0,     0,     0,
       0,     0,   325,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   126,     0,     0,     0,     0,
       0,   420,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   324,     0,     0,     0,     0,     0,     0,
       0,   161,   162,     0,     0,     0,     0,     0,     0,   310,
     311,   312,   313,   207,   314,   315,   316,     0,   317,   318,
     319,   326,     0,   325,     0,     0,   320,     0,     0,     0,
       0,     0,     0,   163,     0,     0,     0,     0,   321,   322,
     625,     0,   832,     0,     0,     0,   323,     0,     0,     0,
       0,   164,   165,     0,     0,     0,     0,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,   327,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   326,   324,     0,     0,     0,     0,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   325,     0,     0,     0,     0,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,   327,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,     0,     0,
      26,     0,   326,     0,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,     0,
       0,     0,     0,     0,     0,   170,     0,     0,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,   327,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   310,   311,   312,   313,   617,   314,   315,
     316,     0,   317,   318,   319,   171,     0,     0,     0,     0,
     320,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   321,   322,     0,     0,   310,   311,   312,   313,
     323,   314,   315,   316,     0,   317,   318,   319,     0,     0,
       0,     0,     0,   320,     0,     0,   172,   173,     0,     0,
       0,     0,     0,     0,     0,   321,   322,     0,     0,   310,
     311,   312,   313,   323,   314,   315,   316,   324,   317,   318,
     319,     0,     0,     0,   174,     0,   320,   175,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   321,   322,
       0,     0,     0,     0,     0,     0,   323,   325,     0,     0,
     324,     0,     0,     0,     0,     0,     0,     0,   176,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   177,     0,     0,   178,     0,     0,
     325,     0,     0,   324,   666,     0,     0,     0,     0,     0,
       0,   179,   180,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   326,     0,     0,     0,
    -375,     0,     0,   325,     0,     0,     0,   668,     0,   181,
       0,     0,     0,     0,     0,   182,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   183,   326,
       0,     0,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,   327,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,     0,     0,     0,
       0,     0,   326,     0,     0,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,   327,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
       0,     0,     0,     0,     0,     0,     0,     0,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,   327,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   310,   311,   312,   313,     1,   314,   315,
     316,   350,   317,   318,   319,   351,   352,   353,   354,     0,
     320,     0,     4,   355,     6,     0,     0,     0,     0,     0,
       0,     0,   321,   322,     0,     0,   310,   311,   312,   313,
     323,   314,   315,   316,   356,   317,   318,   319,     0,     0,
       0,     0,     0,   320,     0,     0,     0,     0,     0,     0,
       0,     0,    12,     0,     0,   321,   322,     0,     0,   310,
     311,   312,   313,   323,   314,   315,   316,   324,   317,   318,
     319,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   357,     0,     0,    19,     0,     0,     0,   703,   704,
       0,     0,     0,     0,     0,     0,   323,   325,     0,     0,
     324,   670,     0,   126,     0,     0,     0,     0,     0,     0,
       0,    22,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   358,     0,     0,   359,     0,     0,     0,     0,     0,
     325,     0,     0,   324,     0,     0,     0,     0,   158,     0,
     420,     0,     0,     0,     0,    30,     0,     0,   159,   160,
       0,     0,     0,     0,     0,     0,   326,     0,     0,     0,
       0,     0,     0,   325,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   513,   514,   515,
     516,   517,   518,   519,   360,     0,     0,   126,     0,   326,
       0,     0,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,   327,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   158,   430,     0,
       0,     0,   326,     0,     0,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,   327,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     161,   162,   158,     0,     1,     0,     0,     0,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,   327,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   726,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   126,     0,     0,
     164,   165,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,     0,     0,   158,
       0,     0,     0,     0,     0,     0,     0,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   625,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   126,     0,    26,     0,
       0,     0,     0,     0,     0,     0,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,    83,     0,     0,     0,     0,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   633,   126,     0,     0,     0,     0,     0,     0,     0,
       0,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   812,   158,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,     0,     0,     0,     0,     0,     0,     0,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   513,   514,   515,
     516,   517,   518,   519,     0,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,     0,     0,     0,     0,     0,
       0,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,     1,     0,     0,     0,     2,     0,     0,     0,   351,
     352,   353,   354,     0,     0,     0,     4,   355,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     783,     0,     0,     0,     0,     0,     0,     0,   356,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,   514,   515,   516,   517,   518,   519,     0,     0,
       0,     0,     0,     0,     0,   357,     0,     0,    19,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,   514,   515,   516,   517,   518,   519,
       0,     0,     0,     0,     0,    22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   358,     0,     0,   359,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,   514,   515,   516,   517,   518,   519,     0,    30,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,   514,   515,   516,   517,   518,
     519,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   360,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,   514,   515,   516,   517,   518,   519,
     736,   737,   738,     0,     0,     0,     0,   739,     0,     0,
     786,     0,     0,     0,     0,   740,     0,     0,     0,   741,
     742,     0,   743,     0,     0,     0,     0,     0,   744,     0,
       0,     1,     0,     0,     0,     2,     0,     0,   745,     0,
       0,     0,   955,     0,     3,     0,     4,     5,     6,     0,
       0,     0,     0,     0,     0,   746,     0,     0,     7,     0,
       0,     8,     0,     0,     0,   747,     0,   748,     0,   749,
       0,     0,     9,     0,     0,     0,    10,     0,     0,     0,
       0,   750,     0,    11,     0,     0,    12,    13,    14,     0,
       0,    15,     0,     0,     0,     0,     0,    16,   751,    17,
       0,     0,     0,   982,     0,     0,     0,     0,    18,     0,
       0,   752,   753,   754,     0,     0,     0,     0,    19,     0,
       0,   755,   756,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   736,   737,   738,     0,     0,     0,
      20,   739,  1079,     0,    21,    22,     0,     0,    23,   740,
      24,    25,     0,   741,   742,    26,   743,   636,    27,    28,
       0,     0,   744,    29,     0,     0,     0,     0,     0,     0,
       0,     0,   745,     0,     0,     0,     0,     0,     0,    30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   746,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   747,
       0,   748,     0,   749,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   750,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   751,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   752,   753,   754,     0,     0,
       0,     0,     0,     0,     0,   755,   756,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,   514,   515,   516,   517,   518,   519,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,   514,   515,   516,   517,   518,   519,     0,
       0,     0,     0,     0,     0,     0,     0,   673,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,   514,   515,   516,   517,   518,   519,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,   514,   515,   516,   517,   518,   519,
     674,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   841,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,   514,   515,   516,
     517,   518,   519,     0,     0,     0,     0,     0,     0,     0,
       0,   843,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   845,   729,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,     0,     0,     0,     0,     0,
     730,     0,     0,     0,     0,     0,     0,     0,   758,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,   514,   515,   516,   517,   518,   519,
       0,     0,   685,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   513,   514,   515,
     516,   517,   518,   519,     0,     0,   848,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,   514,   515,   516,   517,   518,   519,     0,     0,
     954,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,   514,   515,   516,   517,
     518,   519
};

static const yytype_int16 yycheck[] =
{
       0,     1,    13,    14,   304,    27,   350,   358,     2,     0,
       4,     5,     6,     1,    16,   239,    30,     0,    20,    13,
      14,   593,    16,   323,     0,   678,    20,     0,    13,    14,
     758,   269,   417,    27,   196,   197,   198,   180,    41,     0,
     442,     0,   201,    41,     0,    10,   345,     4,     5,     6,
     118,    41,   104,    79,    41,    20,   124,    28,   786,   160,
      41,    94,   121,    41,    41,     3,    41,   168,   606,    41,
      15,    16,    17,   128,   111,    43,    40,    24,   102,    41,
     205,    41,    40,   151,    76,   141,    41,    30,   142,    40,
      20,   205,    20,     4,   194,   205,   133,   195,   111,    83,
       3,   104,   194,   111,   141,   133,   117,   142,   205,   205,
       5,   205,   205,   141,   125,   205,   205,    12,   111,   205,
     205,    41,   197,   117,   205,   205,   205,   205,   228,    94,
     228,   125,   117,   102,   225,   673,   228,   137,   189,   161,
     125,   115,   164,     4,     5,     6,   137,     8,     9,    10,
     293,    12,    13,    14,   137,   298,   510,    66,    40,   302,
      42,   137,     0,   155,   137,    43,    94,   161,   111,   228,
     164,   195,   228,   228,   228,   227,    87,   278,   189,   832,
     833,   282,   193,   911,   104,   150,   124,   346,   214,    98,
     110,   228,   192,   228,   227,   189,   420,   219,   143,   193,
     164,   192,   204,   187,   189,   205,   164,   605,   193,   192,
     204,   179,   280,   164,   205,   228,   192,   228,   616,   192,
     228,   189,   205,   194,   227,   219,   195,   295,   239,   205,
     228,   192,   205,   192,   228,   637,   192,   202,   228,   239,
     187,   228,   253,   228,   205,   239,   205,   228,   259,   205,
     228,   228,   377,   228,   982,   255,   228,   279,   986,   253,
     798,   283,   284,   377,   255,   259,   228,   377,   228,   807,
     808,   809,   255,   228,   204,   195,   287,   288,   289,   255,
     377,   377,   255,   377,   377,   279,    20,   377,   377,   283,
     284,   377,   377,   287,   288,   289,   377,   377,   377,   377,
      74,   179,   287,   288,   289,   166,   120,   227,    40,   309,
     123,   189,   186,     9,   113,   195,   739,   100,   309,   128,
     463,   464,   135,   323,   149,   325,    64,   899,    24,    67,
      40,    45,   755,   756,    45,   323,    41,   359,    41,   693,
     340,   341,   342,    15,    16,    17,   414,   199,   200,   703,
     704,  1079,   352,    88,    89,   456,   350,    80,   426,   460,
      94,   355,   100,   137,     8,   359,    10,    11,    70,    41,
      64,   439,   440,    67,   173,    40,   175,   377,   114,    58,
      59,    60,    61,    62,   167,    95,   377,   387,   102,   103,
     122,   102,   103,  1046,   377,    54,   387,   171,   355,     3,
     624,   377,   201,     4,   377,   629,   100,   707,   221,   420,
     648,   422,   124,   424,     4,   153,   377,   127,   377,   151,
     420,   377,   110,    28,    29,    30,   420,   999,   422,   161,
     424,   167,   420,   124,   733,   734,   735,   781,   112,   190,
     176,   177,   189,   787,   154,   133,    42,   174,   450,   128,
     156,   125,   179,   141,   164,   129,   450,   144,   132,   153,
     112,   133,   189,   485,   486,   850,   227,   228,   142,   141,
     855,   143,   111,   125,   630,   631,   498,   129,   188,  1051,
     132,   204,   205,   206,   158,   208,   486,   210,   110,    42,
     142,   485,   486,    14,     3,   218,   219,   220,   486,   521,
     223,   340,   341,   342,   498,   133,   158,   228,   522,    30,
     179,   511,   866,   867,   868,   869,   870,   871,   872,   873,
     520,   112,   693,    66,    67,    46,    47,   521,   879,   520,
     110,   217,   703,   704,   125,   217,   226,   520,   129,   224,
      40,   132,    85,   198,   520,   203,     8,   520,    10,    11,
     196,   209,    95,   211,   554,    75,   188,   100,    20,   903,
     904,   905,   906,   110,   222,    63,   728,   158,    63,     5,
     592,   340,   341,   342,   117,     5,    63,   599,   600,   601,
     139,   603,    40,   194,   127,    58,    59,    60,    61,    62,
     178,   602,   614,    34,    35,    36,    37,    38,   592,   210,
      20,   228,   826,   107,   958,   599,   600,   601,   602,   603,
     621,   154,   123,   624,   625,   194,    14,   602,   629,   107,
     614,   164,   633,    14,   624,   228,   187,   621,   228,   629,
     624,   625,    30,   111,     5,   629,   980,    40,   111,   633,
     651,    24,     4,    41,     5,   188,    40,   649,    46,    47,
      82,   651,   167,    42,    19,   649,    40,   651,    32,    33,
      34,    35,    36,    37,    38,   276,   277,    32,    33,    34,
      35,    36,    37,    38,   285,    34,    35,    36,    37,    38,
     291,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,  1036,   304,   694,   866,   867,   868,   869,   870,
     871,   872,   873,   401,   402,   403,    40,   707,    19,   320,
     321,   322,   323,   324,    42,   939,    42,   110,   103,   707,
     227,    32,    33,    34,    35,    36,    37,    38,   227,     5,
     227,   227,   343,   227,   227,   227,   227,   227,   227,   187,
     351,   227,   227,   227,   227,   356,   357,   227,   227,    24,
     227,    24,   228,    24,     3,     4,     5,     6,   758,     8,
       9,    10,   139,    12,    13,    14,   139,    83,   228,    75,
     107,    20,  1072,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    32,    33,    34,   786,   958,    40,    75,
       3,    40,    41,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,   416,  1003,  1004,  1005,  1006,
    1007,  1008,  1009,  1010,  1011,   826,   228,    66,   228,   187,
       4,    40,   228,    41,    41,    74,   826,   849,    77,   170,
      40,   853,   826,   191,    17,   195,   228,   133,   228,   227,
     227,   227,   103,     5,   455,   227,   227,   227,   459,    98,
       4,   227,   852,     4,    24,   849,    24,   227,   107,   853,
     227,   852,    14,   227,   227,   476,    14,   478,   479,    14,
     227,   482,   227,   227,   227,    41,   145,    41,   129,     5,
      41,    24,   131,    40,    40,    38,    41,   128,   499,   500,
      40,   502,   503,   504,   505,   506,   507,   508,   509,    40,
     148,    40,   513,   514,   515,   516,   517,   518,   519,    49,
       5,   911,   934,   128,   128,    80,   128,   166,     4,    63,
       4,   187,   130,     3,   935,   927,    68,    41,   939,   103,
       5,     5,     5,   927,    14,     5,   185,   227,   128,   939,
     934,   935,     5,   103,   103,   939,     4,   163,    40,   118,
      40,    38,    41,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   589,  1001,
     991,    41,   982,   227,    41,   103,   986,    48,   124,    77,
     128,   991,    24,   216,    10,     3,    10,   991,    24,   228,
     119,     5,   124,    75,   103,    24,   617,  1001,   124,    10,
     130,     4,     4,     4,     4,   173,  1027,     5,     5,     5,
       5,    41,   124,   228,     8,    24,    24,  1027,     5,     4,
     215,     5,    40,  1027,   694,    24,   687,   849,   565,   599,
     934,   749,  1024,   192,   753,   656,    28,  1070,  1001,   660,
     447,   938,   732,   200,   652,   666,   991,   668,   181,   670,
      23,   130,   414,   674,   420,   440,   254,   259,   359,   636,
     604,   811,   377,   684,   592,   686,   988,   284,   988,  1079,
     554,   692,     3,   784,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   707,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    -1,
      -1,   732,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,    68,     3,     4,
       5,     6,    -1,     8,     9,    10,   164,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,   783,    -1,    -1,    -1,    -1,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     841,    -1,   843,    -1,   845,    -1,    -1,    -1,    -1,    -1,
     851,    -1,    -1,   854,    -1,    -1,    -1,   858,    -1,    -1,
      -1,    -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,    -1,    -1,    -1,    -1,
      -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   936,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   955,    -1,    -1,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,    -1,    -1,   985,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    10,    -1,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1017,    32,    33,     3,
      -1,    -1,  1023,  1024,    -1,    40,    41,    -1,    -1,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    10,    -1,    12,    13,
      14,    -1,    77,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,  1072,  1073,    -1,     3,    -1,    -1,    -1,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   115,   116,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    41,     8,     9,    10,    -1,    12,    13,
      14,   166,    -1,   107,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,    32,    33,
      68,    -1,   101,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,   165,   166,    -1,    -1,    -1,    -1,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   166,    77,    -1,    -1,    -1,    -1,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   107,    -1,    -1,    -1,    -1,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,    -1,    -1,
     164,    -1,   166,    -1,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    13,    14,    43,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,     3,     4,     5,     6,
      40,     8,     9,    10,    -1,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    84,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,     3,
       4,     5,     6,    40,     8,     9,    10,    77,    12,    13,
      14,    -1,    -1,    -1,   112,    -1,    20,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    40,   107,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   146,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   162,    -1,    -1,   165,    -1,    -1,
     107,    -1,    -1,    77,   111,    -1,    -1,    -1,    -1,    -1,
      -1,   179,   180,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   166,    -1,    -1,    -1,
     198,    -1,    -1,   107,    -1,    -1,    -1,   111,    -1,   207,
      -1,    -1,    -1,    -1,    -1,   213,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   166,
      -1,    -1,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,    -1,    -1,    -1,
      -1,    -1,   166,    -1,    -1,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,     3,     4,     5,     6,    40,     8,     9,
      10,    44,    12,    13,    14,    48,    49,    50,    51,    -1,
      20,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,     3,     4,     5,     6,
      40,     8,     9,    10,    77,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    -1,    -1,    32,    33,    -1,    -1,     3,
       4,     5,     6,    40,     8,     9,    10,    77,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,    -1,    -1,   127,    -1,    -1,    -1,    32,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    40,   107,    -1,    -1,
      77,   111,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   164,    -1,    -1,   167,    -1,    -1,    -1,    -1,    -1,
     107,    -1,    -1,    77,    -1,    -1,    -1,    -1,     3,    -1,
      40,    -1,    -1,    -1,    -1,   188,    -1,    -1,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,   166,    -1,    -1,    -1,
      -1,    -1,    -1,   107,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,   227,    -1,    -1,     3,    -1,   166,
      -1,    -1,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,     3,    34,    -1,
      -1,    -1,   166,    -1,    -1,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     115,   116,     3,    -1,    40,    -1,    -1,    -1,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
     165,   166,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,    -1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,   164,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,     3,    -1,    -1,    -1,    -1,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,    68,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   150,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,    -1,    -1,    -1,    -1,    -1,
      -1,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,    40,    -1,    -1,    -1,    44,    -1,    -1,    -1,    48,
      49,    50,    51,    -1,    -1,    -1,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,   127,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,    -1,    -1,    -1,    -1,   154,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,   167,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,   188,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   227,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      71,    72,    73,    -1,    -1,    -1,    -1,    78,    -1,    -1,
     181,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    90,
      91,    -1,    93,    -1,    -1,    -1,    -1,    -1,    99,    -1,
      -1,    40,    -1,    -1,    -1,    44,    -1,    -1,   109,    -1,
      -1,    -1,   181,    -1,    53,    -1,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,   126,    -1,    -1,    67,    -1,
      -1,    70,    -1,    -1,    -1,   136,    -1,   138,    -1,   140,
      -1,    -1,    81,    -1,    -1,    -1,    85,    -1,    -1,    -1,
      -1,   152,    -1,    92,    -1,    -1,    95,    96,    97,    -1,
      -1,   100,    -1,    -1,    -1,    -1,    -1,   106,   169,   108,
      -1,    -1,    -1,   181,    -1,    -1,    -1,    -1,   117,    -1,
      -1,   182,   183,   184,    -1,    -1,    -1,    -1,   127,    -1,
      -1,   192,   193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    72,    73,    -1,    -1,    -1,
     149,    78,   181,    -1,   153,   154,    -1,    -1,   157,    86,
     159,   160,    -1,    90,    91,   164,    93,   228,   167,   168,
      -1,    -1,    99,   172,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,   188,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,
      -1,   138,    -1,   140,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   182,   183,   184,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   192,   193,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
     111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   111,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   111,    69,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,    -1,    41,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    41,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    -1,
      41,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    40,    44,    53,    55,    56,    57,    67,    70,    81,
      85,    92,    95,    96,    97,   100,   106,   108,   117,   127,
     149,   153,   154,   157,   159,   160,   164,   167,   168,   172,
     188,   230,   231,   232,   250,   251,   254,   256,   257,   265,
     266,   267,   268,   270,   271,   272,   273,   289,   292,   294,
     299,   300,   301,   302,   303,   305,   334,   337,   344,   349,
     351,   353,   356,   360,   361,   362,   363,   366,   371,   373,
     376,   381,   384,   385,   386,   392,   405,   406,   430,   431,
     432,   300,   301,     3,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   255,
     403,   404,     3,   255,   255,   255,   174,   179,   189,   197,
     358,   358,    43,   179,   189,   111,     3,   330,   401,   404,
     330,    43,   179,   189,   374,   403,   225,   336,    66,    67,
      85,    95,   100,   117,   127,   154,   164,   188,   367,   368,
     374,   189,   367,   358,   115,   364,   120,   308,     3,    13,
      14,   115,   116,   147,   165,   166,   377,   378,   400,   404,
       3,    43,    84,    85,   112,   115,   146,   162,   165,   179,
     180,   207,   213,   226,   245,   340,   343,   402,   186,   308,
       0,   104,   227,   128,   195,   293,    15,    16,    17,   143,
     319,   320,   110,   316,   149,    70,   409,    41,    41,    54,
      40,    58,    59,    60,    61,    62,   111,   269,   114,   167,
     176,   177,   393,   330,     4,   347,     3,   124,   274,   345,
     346,   347,   330,     4,   342,   342,     3,   124,   124,   290,
     347,   350,   190,   382,   250,   251,   292,   299,   335,   156,
     369,   189,   144,   142,   228,   111,   347,   354,   355,   142,
     372,   199,   200,   365,    40,   122,   151,   161,   309,   310,
     311,    66,    98,   325,    24,   187,   379,   379,   400,    42,
     110,   352,   400,    42,   228,   379,     3,    30,   111,   179,
      28,   194,   341,   217,   341,   110,   339,   352,   217,   133,
     338,   226,   224,   198,    40,   196,   359,   330,   232,   330,
       3,     4,     5,     6,     8,     9,    10,    12,    13,    14,
      20,    32,    33,    40,    77,   107,   166,   212,   234,   235,
     236,   238,   240,   245,   246,   247,   300,   400,   401,   404,
     325,   325,   325,    75,   133,   141,   307,   316,   188,   374,
      44,    48,    49,    50,    51,    56,    77,   124,   164,   167,
     227,   250,   251,   254,   256,   258,   259,   260,   261,   262,
     263,   264,   272,   292,   299,   304,   410,   411,   412,   416,
     417,   418,   422,   426,   427,   428,   429,   110,    41,   233,
     238,     5,     5,    63,   394,   395,   400,   139,   178,    88,
      89,    64,    67,   100,   153,   387,   388,   123,   135,   221,
     357,    40,    20,   330,   228,   123,   194,   306,   107,   107,
      40,   291,   300,   329,   330,   331,   228,    14,   380,   383,
      34,   370,   401,   368,   250,   251,   292,   299,   375,   187,
     228,   370,   111,     5,   312,    40,   121,   228,   311,    34,
     238,   326,   327,   238,   238,   379,   400,   347,    24,   379,
     400,   378,   238,   330,   330,   330,     4,   238,   341,    87,
     341,     5,   341,    34,    41,    66,    74,    98,   131,   185,
     233,   238,   249,   317,    82,   167,    40,   295,   299,   238,
     238,   238,   233,   238,   300,   238,   241,   300,    42,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      40,    42,   164,   300,   303,   305,   303,   303,   238,   321,
     322,     5,    12,   314,   314,   316,   383,   238,   250,   251,
     254,   256,   258,   259,   260,   261,   262,   263,   264,   272,
     292,   299,   304,   413,   414,   415,   417,   418,   422,   426,
     427,   428,   429,   227,   227,   255,   238,   238,   327,   377,
     227,   227,   227,   227,   227,   227,   227,   227,   227,   227,
     227,   227,   227,   227,   227,   103,   412,   299,    41,   228,
     187,     5,   228,    24,    24,    24,   139,   139,    83,   389,
     389,   389,   187,   389,   228,    75,    14,    30,    41,    46,
      47,   407,   408,   107,    40,   346,    75,     7,   238,   293,
       3,   300,   329,   331,   228,    68,   401,   112,   125,   129,
     132,   158,   332,    68,   401,   347,   228,   187,   347,   354,
     350,    41,   228,   113,   173,   175,   201,   313,   310,    68,
     403,   111,   228,   307,   315,   238,   379,     4,   348,   238,
     379,   341,   341,    40,   228,    41,   111,   238,   111,   238,
     111,   238,    41,    68,   111,   238,    41,   170,   252,   253,
     400,   296,   400,   191,   228,    41,   195,   242,   243,   400,
     238,   238,    28,    29,    30,   238,   238,   238,   238,   238,
     238,   238,   238,    32,    33,   236,   237,    40,   239,   300,
       8,    10,    11,    20,   238,   238,   238,   238,   238,   238,
     238,   248,   250,   251,   292,   299,    34,   400,   308,    69,
      96,   323,   228,   141,   228,   133,    71,    72,    73,    78,
      86,    90,    91,    93,    99,   109,   126,   136,   138,   140,
     152,   169,   182,   183,   184,   192,   193,   278,    52,   227,
     227,   227,   227,   227,   227,   227,   227,   227,   227,   227,
     227,   227,   227,   227,   103,   415,    58,    59,    60,    61,
      62,   128,   269,   195,   423,   424,   181,   128,   227,   238,
       5,   395,   235,     4,     4,    24,    24,   277,   400,   400,
     400,   330,   400,   153,   388,   348,   278,    14,    14,    14,
      41,   228,   150,   275,   276,   277,   348,   238,    41,   329,
     401,   145,   333,   329,   333,   333,   129,   401,   380,   350,
      41,   403,   101,   328,   329,   326,   238,   238,    41,     5,
     238,   111,   238,   111,   238,   111,   278,   238,    41,   228,
     306,    24,    41,   228,    40,   297,   238,   238,   102,   243,
     244,   238,   237,   239,   237,   237,    19,    32,    33,    34,
      35,    36,    37,    38,   233,     8,    10,    11,    41,   325,
     322,   314,   314,   314,    40,   283,   283,    40,   279,   148,
     281,    40,   280,   279,    40,   282,   282,   283,   283,    94,
     227,   413,    49,   128,   128,   128,   128,     5,   383,    63,
     238,   102,   424,   425,   413,   383,    80,   396,     4,     4,
     278,   100,   167,   391,    76,   155,   390,   187,   278,   278,
     278,   408,   130,    41,   228,    68,   142,   329,   306,   228,
     306,   238,   238,   238,    41,   253,   293,   238,   299,   400,
     238,   298,   228,   293,    41,   181,   238,   103,    19,   237,
     237,   237,   237,   237,   237,   237,   237,    41,   327,     5,
       5,     5,     5,   235,   103,   227,   383,   383,   383,   383,
     128,     5,   181,   413,   103,    45,   102,   103,   419,   420,
     421,   111,     4,   163,   397,   284,    20,    94,    20,    94,
     403,    40,    80,   204,   205,   206,   208,   210,   218,   219,
     220,   223,   286,   287,   276,   401,   238,   142,   315,   329,
     118,   318,    41,   228,    40,   238,   237,   111,    41,    41,
     228,    41,    41,   227,    48,   383,   128,   413,    77,   238,
     413,   124,   103,   420,   421,   103,   328,    24,   216,    10,
      20,    94,   150,   202,   285,    10,    10,   235,   296,    24,
     288,   288,   288,   288,   288,   288,   288,   288,   288,   288,
     228,   238,    75,   119,   324,   238,   298,     5,   383,   181,
     124,   103,   124,   306,    74,   137,   171,    24,    10,   235,
     130,    41,     4,     4,   173,     4,     4,     5,     5,     5,
       5,     8,   287,   233,   238,    41,    41,   413,   124,   203,
     209,   211,   222,   398,    79,   214,   399,    24,    24,     5,
       4,   215,    24,     5
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
      case 230: /* "sql_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 231: /* "stmt_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 232: /* "stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 233: /* "expr_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 234: /* "column_ref" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 235: /* "expr_const" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 236: /* "simple_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 237: /* "arith_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 238: /* "expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 239: /* "in_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 240: /* "case_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 241: /* "case_arg" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 242: /* "when_clause_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 243: /* "when_clause" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 244: /* "case_default" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 245: /* "func_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 246: /* "when_func" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 247: /* "when_func_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 248: /* "when_func_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 249: /* "distinct_or_all" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 250: /* "delete_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 251: /* "update_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 252: /* "update_asgn_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 253: /* "update_asgn_factor" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 254: /* "cursor_declare_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 255: /* "cursor_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 256: /* "cursor_open_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 257: /* "cursor_fetch_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 258: /* "cursor_fetch_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 259: /* "cursor_fetch_next_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 260: /* "cursor_fetch_first_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 261: /* "cursor_fetch_prior_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 262: /* "cursor_fetch_last_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 263: /* "cursor_fetch_absolute_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 264: /* "cursor_fetch_relative_into_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 265: /* "fetch_prior_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 266: /* "fetch_first_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 267: /* "fetch_last_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 268: /* "fetch_relative_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 269: /* "next_or_prior" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 270: /* "fetch_absolute_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 271: /* "fetch_fromto_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 272: /* "cursor_close_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 273: /* "create_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 274: /* "opt_if_not_exists" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 275: /* "table_element_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 276: /* "table_element" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 277: /* "column_definition" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 278: /* "data_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 279: /* "opt_decimal" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 280: /* "opt_float" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 281: /* "opt_precision" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 282: /* "opt_time_precision" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 283: /* "opt_char_length" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 284: /* "opt_column_attribute_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 285: /* "column_attribute" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 286: /* "opt_table_option_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 287: /* "table_option" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 288: /* "opt_equal_mark" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 289: /* "drop_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 290: /* "opt_if_exists" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 291: /* "table_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 292: /* "insert_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 293: /* "opt_when" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 294: /* "replace_or_insert" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 295: /* "opt_insert_columns" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 296: /* "column_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 297: /* "insert_vals_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 298: /* "insert_vals" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 299: /* "select_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 300: /* "select_with_parens" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 301: /* "select_no_parens" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 302: /* "no_table_select" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 303: /* "select_clause" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 304: /* "select_into_clause" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 305: /* "simple_select" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 306: /* "opt_where" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 307: /* "select_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 308: /* "opt_hint" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 309: /* "opt_hint_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 310: /* "hint_options" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 311: /* "hint_option" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 312: /* "opt_comma_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 314: /* "limit_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 315: /* "opt_select_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 316: /* "opt_for_update" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 317: /* "parameterized_trim" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 318: /* "opt_groupby" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 319: /* "opt_order_by" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 320: /* "order_by" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 321: /* "sort_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 322: /* "sort_key" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 323: /* "opt_asc_desc" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 324: /* "opt_having" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 325: /* "opt_distinct" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 326: /* "projection" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 327: /* "select_expr_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 328: /* "from_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 329: /* "table_factor" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 330: /* "relation_factor" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 331: /* "joined_table" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 332: /* "join_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 333: /* "join_outer" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 334: /* "explain_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 335: /* "explainable_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 336: /* "opt_verbose" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 337: /* "show_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 338: /* "opt_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 339: /* "opt_for_grant_user" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 341: /* "opt_show_condition" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 342: /* "opt_like_condition" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 344: /* "create_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 345: /* "user_specification_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 346: /* "user_specification" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 347: /* "user" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 348: /* "password" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 349: /* "drop_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 350: /* "user_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 351: /* "set_password_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 352: /* "opt_for_user" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 353: /* "rename_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 354: /* "rename_info" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 355: /* "rename_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 356: /* "lock_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 357: /* "lock_spec" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 358: /* "opt_work" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 360: /* "begin_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 361: /* "commit_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 362: /* "rollback_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 363: /* "kill_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 364: /* "opt_is_global" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 365: /* "opt_flag" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 366: /* "grant_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 367: /* "priv_type_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 368: /* "priv_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 369: /* "opt_privilege" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 370: /* "priv_level" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 371: /* "revoke_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 372: /* "opt_on_priv_level" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 373: /* "prepare_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 374: /* "stmt_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 375: /* "preparable_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 376: /* "variable_set_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 377: /* "var_and_val_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 378: /* "var_and_val" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 379: /* "to_or_eq" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 380: /* "argument" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 381: /* "execute_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 382: /* "opt_using_args" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 383: /* "argument_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 384: /* "deallocate_prepare_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 385: /* "deallocate_or_drop" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 386: /* "alter_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 387: /* "alter_column_actions" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 388: /* "alter_column_action" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 389: /* "opt_column" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 391: /* "alter_column_behavior" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 392: /* "alter_system_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 393: /* "opt_force" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 394: /* "alter_system_actions" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 395: /* "alter_system_action" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 396: /* "opt_comment" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 398: /* "server_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 399: /* "opt_cluster_or_address" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 400: /* "column_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 401: /* "relation_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 402: /* "function_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 403: /* "column_label" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 405: /* "create_procedure_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 406: /* "proc_decl" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 407: /* "proc_parameter_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 408: /* "proc_parameter" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 409: /* "proc_block" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 410: /* "proc_sect" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 411: /* "proc_stmts" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 412: /* "proc_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 413: /* "control_sect" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 414: /* "control_stmts" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 415: /* "control_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 416: /* "stmt_declare" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 417: /* "stmt_assign" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 418: /* "stmt_if" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 419: /* "stmt_elsifs" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 420: /* "stmt_elsif" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 421: /* "stmt_else" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 422: /* "stmt_case" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 423: /* "case_when_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 424: /* "case_when" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 425: /* "case_else" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 426: /* "stmt_loop" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 427: /* "stmt_while" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 428: /* "stmt_null" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 429: /* "stmt_exit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 430: /* "exec_procedure_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 431: /* "drop_procedure_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 432: /* "show_procedure_stmt" */

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

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 70:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_POS, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 71:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NEG, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 72:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_ADD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 73:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MINUS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 74:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MUL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 75:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_DIV, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 76:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_REM, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 77:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_POW, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 78:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MOD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 79:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 80:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_POS, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 81:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NEG, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 82:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_ADD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 83:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MINUS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 84:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MUL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 85:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_DIV, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 86:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_REM, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 87:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_POW, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 88:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MOD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 89:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 90:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LT, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 91:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_EQ, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 92:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_GE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 93:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_GT, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 94:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 95:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 96:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NOT_LIKE, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 97:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_AND, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 98:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_OR, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 99:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NOT, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 100:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 101:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS_NOT, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
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
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_BTW, 3, (yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 107:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NOT_BTW, 3, (yyvsp[(1) - (6)].node), (yyvsp[(4) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 108:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IN, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 109:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NOT_IN, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 110:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_CNN, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 111:

    {
    	(yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 112:

    { merge_nodes((yyval.node), result->malloc_pool_, T_EXPR_LIST, (yyvsp[(2) - (3)].node)); ;}
    break;

  case 113:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_WHEN_LIST, (yyvsp[(3) - (5)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CASE, 3, (yyvsp[(2) - (5)].node), (yyval.node), (yyvsp[(4) - (5)].node));
    ;}
    break;

  case 114:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 115:

    { (yyval.node) = NULL; ;}
    break;

  case 116:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 117:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 118:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_WHEN, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 119:

    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 120:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_NULL); ;}
    break;

  case 121:

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

  case 122:

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

  case 123:

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

  case 124:

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

  case 125:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_FUN_SYS, 2, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));
    ;}
    break;

  case 126:

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

  case 127:

    {
      (yyval.node) = (yyvsp[(1) - (4)].node);
      (yyval.node)->children_[0] = (yyvsp[(3) - (4)].node);
    ;}
    break;

  case 128:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ROW_COUNT, 1, NULL);
    ;}
    break;

  case 133:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_ALL);
    ;}
    break;

  case 134:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_DISTINCT);
    ;}
    break;

  case 135:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_DELETE, 3, (yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 136:

    {
      ParseNode* assign_list = NULL;
      merge_nodes(assign_list, result->malloc_pool_, T_ASSIGN_LIST, (yyvsp[(5) - (7)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_UPDATE, 5, (yyvsp[(3) - (7)].node), assign_list, (yyvsp[(6) - (7)].node), (yyvsp[(7) - (7)].node), (yyvsp[(2) - (7)].node));
    ;}
    break;

  case 137:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 138:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 139:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ASSIGN_ITEM, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 140:

    {					 
       malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_DECLARE, 2,
                                        (yyvsp[(2) - (5)].node),		/*cursor name*/
                                        (yyvsp[(5) - (5)].node)		/*result from select_stmt*/
					             ); 
	 ;}
    break;

  case 141:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 142:

    {
            malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_OPEN, 1,
            (yyvsp[(2) - (2)].node)     /* cursor_name*/
                                    );
            ;}
    break;

  case 143:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH, 1,
                   (yyvsp[(2) - (2)].node)     /* cursor_name*/
                                       );
            ;}
    break;

  case 144:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH, 1,
                   (yyvsp[(2) - (3)].node)     /* cursor_name*/
                                       );
            ;}
    break;

  case 145:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH, 1, (yyvsp[(2) - (4)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(4) - (4)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_INTO, 2, fetch, args);
            ;}
    break;

  case 146:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH_NEXT, 1, (yyvsp[(2) - (5)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(5) - (5)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_NEXT_INTO, 2, fetch, args);
            ;}
    break;

  case 147:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH_FIRST, 1, (yyvsp[(2) - (5)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(5) - (5)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_FIRST_INTO, 2, fetch, args);
            ;}
    break;

  case 148:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH_PRIOR, 1, (yyvsp[(2) - (5)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(5) - (5)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_PRIOR_INTO, 2, fetch, args);
            ;}
    break;

  case 149:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH_LAST, 1, (yyvsp[(2) - (5)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(5) - (5)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_LAST_INTO, 2, fetch, args);
            ;}
    break;

  case 150:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH_ABSOLUTE, 2, (yyvsp[(2) - (6)].node), (yyvsp[(4) - (6)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(6) - (6)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_ABS_INTO, 2, fetch, args);
            ;}
    break;

  case 151:

    {
           	  ParseNode* args = NULL;
           	  ParseNode* fetch = NULL;
           	  malloc_non_terminal_node(fetch, result->malloc_pool_, T_CURSOR_FETCH_RELATIVE, 3, (yyvsp[(2) - (7)].node), (yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].node));
			  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(7) - (7)].node));
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_RELATIVE_INTO, 2, fetch, args);
            ;}
    break;

  case 152:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_PRIOR, 1,
                   (yyvsp[(2) - (3)].node)     /* cursor_name*/
                    
                    
                    
                                       );
            ;}
    break;

  case 153:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_FIRST, 1,
                   (yyvsp[(2) - (3)].node)     /* cursor_name*/
                                       );
            ;}
    break;

  case 154:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_LAST, 1,
                   (yyvsp[(2) - (3)].node)     /* cursor_name*/
                                       );
            ;}
    break;

  case 155:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_RELATIVE, 3,
                   (yyvsp[(2) - (5)].node),     /* cursor_name*/
                   (yyvsp[(3) - (5)].node),                  
                   (yyvsp[(5) - (5)].node)                  
                                       );
            ;}
    break;

  case 156:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 157:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 158:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_ABSOLUTE, 2,
                   (yyvsp[(2) - (4)].node),     /* cursor_name*/
                   (yyvsp[(4) - (4)].node)
                                       );
            ;}
    break;

  case 159:

    {
              malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_FETCH_FROMTO, 3,
                   (yyvsp[(2) - (6)].node),     /* cursor_name*/
                   (yyvsp[(4) - (6)].node),
                   (yyvsp[(6) - (6)].node)
                                       );
            ;}
    break;

  case 160:

    {
             malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CURSOR_CLOSE, 1,
                   (yyvsp[(2) - (2)].node)     /* cursor_name*/
                                      );
             ;}
    break;

  case 161:

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

  case 162:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_IF_NOT_EXISTS); ;}
    break;

  case 163:

    { (yyval.node) = NULL; ;}
    break;

  case 164:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 165:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 166:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 167:

    {
      ParseNode* col_list= NULL;
      merge_nodes(col_list, result->malloc_pool_, T_COLUMN_LIST, (yyvsp[(4) - (5)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PRIMARY_KEY, 1, col_list);
    ;}
    break;

  case 168:

    {
      ParseNode *attributes = NULL;
      merge_nodes(attributes, result->malloc_pool_, T_COLUMN_ATTRIBUTES, (yyvsp[(3) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_DEFINITION, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), attributes);
    ;}
    break;

  case 169:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER ); ;}
    break;

  case 170:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER); ;}
    break;

  case 171:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER); ;}
    break;

  case 172:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER); ;}
    break;

  case 173:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER); ;}
    break;

  case 174:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DECIMAL);
      else
        merge_nodes((yyval.node), result->malloc_pool_, T_TYPE_DECIMAL, (yyvsp[(2) - (2)].node));
      yyerror(&(yylsp[(1) - (2)]), result, "DECIMAL type is not supported");
      YYABORT;
    ;}
    break;

  case 175:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DECIMAL);
      else
        merge_nodes((yyval.node), result->malloc_pool_, T_TYPE_DECIMAL, (yyvsp[(2) - (2)].node));
      yyerror(&(yylsp[(1) - (2)]), result, "NUMERIC type is not supported");
      YYABORT;
    ;}
    break;

  case 176:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_BOOLEAN ); ;}
    break;

  case 177:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_FLOAT, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 178:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DOUBLE); ;}
    break;

  case 179:

    {
      (void)((yyvsp[(2) - (2)].node)) ; /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DOUBLE);
    ;}
    break;

  case 180:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIMESTAMP);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIMESTAMP, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 181:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIMESTAMP); ;}
    break;

  case 182:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CHARACTER);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CHARACTER, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 183:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CHARACTER);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CHARACTER, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 184:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_VARCHAR);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_VARCHAR, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 185:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_VARCHAR);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_VARCHAR, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 186:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CREATETIME); ;}
    break;

  case 187:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_MODIFYTIME); ;}
    break;

  case 188:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DATE);
      yyerror(&(yylsp[(1) - (1)]), result, "DATE type is not supported");
      YYABORT;
    ;}
    break;

  case 189:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIME);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIME, 1, (yyvsp[(2) - (2)].node));
      yyerror(&(yylsp[(1) - (2)]), result, "TIME type is not supported");
      YYABORT;
    ;}
    break;

  case 190:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node)); ;}
    break;

  case 191:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 192:

    { (yyval.node) = NULL; ;}
    break;

  case 193:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 194:

    { (yyval.node) = NULL; ;}
    break;

  case 195:

    { (yyval.node) = NULL; ;}
    break;

  case 196:

    { (yyval.node) = NULL; ;}
    break;

  case 197:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 198:

    { (yyval.node) = NULL; ;}
    break;

  case 199:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 200:

    { (yyval.node) = NULL; ;}
    break;

  case 201:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 202:

    { (yyval.node) = NULL; ;}
    break;

  case 203:

    {
      (void)((yyvsp[(2) - (2)].node)) ; /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NOT_NULL);
    ;}
    break;

  case 204:

    {
      (void)((yyvsp[(1) - (1)].node)) ; /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NULL);
    ;}
    break;

  case 205:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 206:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_AUTO_INCREMENT); ;}
    break;

  case 207:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_PRIMARY_KEY); ;}
    break;

  case 208:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 209:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 210:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 211:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_INFO, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 212:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPIRE_INFO, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 213:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLET_MAX_SIZE, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 214:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLET_BLOCK_SIZE, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 215:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLET_ID, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 216:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_REPLICA_NUM, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 217:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COMPRESS_METHOD, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 218:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_USE_BLOOM_FILTER, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 219:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSISTENT_MODE);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 220:

    {
      (void)((yyvsp[(2) - (3)].node)); /*  make bison mute*/
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COMMENT, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 221:

    { (yyval.node) = NULL; ;}
    break;

  case 222:

    { (yyval.node) = NULL; ;}
    break;

  case 223:

    {
      ParseNode *tables = NULL;
      merge_nodes(tables, result->malloc_pool_, T_TABLE_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_DROP_TABLE, 2, (yyvsp[(3) - (4)].node), tables);
    ;}
    break;

  case 224:

    { (yyval.node) = NULL; ;}
    break;

  case 225:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_IF_EXISTS); ;}
    break;

  case 226:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 227:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 228:

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

  case 229:

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

  case 230:

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

  case 231:

    { (yyval.node) = NULL; ;}
    break;

  case 232:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 233:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 234:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 235:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_COLUMN_LIST, (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 236:

    { (yyval.node) = NULL; ;}
    break;

  case 237:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 238:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 239:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_VALUE_VECTOR, (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 240:

    {
    merge_nodes((yyvsp[(4) - (5)].node), result->malloc_pool_, T_VALUE_VECTOR, (yyvsp[(4) - (5)].node));
    malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (5)].node), (yyvsp[(4) - (5)].node));
  ;}
    break;

  case 241:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 242:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 243:

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

  case 244:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 245:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 246:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 247:

    {
      (yyval.node)= (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 248:

    {
      (yyval.node) = (yyvsp[(1) - (2)].node);
      (yyval.node)->children_[12] = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 249:

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

  case 250:

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

  case 251:

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

  case 252:

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

  case 253:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 254:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 255:

    {
						  ParseNode* project_list = NULL;
						  ParseNode* from_list = NULL;
						  ParseNode* select = NULL;
						  ParseNode* args = NULL;
						  merge_nodes(project_list, result->malloc_pool_, T_PROJECT_LIST, (yyvsp[(2) - (7)].node));
						  merge_nodes(from_list, result->malloc_pool_, T_FROM_LIST, (yyvsp[(6) - (7)].node));
						  malloc_non_terminal_node(select, result->malloc_pool_, T_SELECT, 16,
                              NULL,           /* 1. distinct */
                              project_list,   /* 2. select clause */
                              from_list,      /* 3. from clause */
                              (yyvsp[(7) - (7)].node),             /* 4. where */
                              NULL,           /* 5. group by */
                              NULL,           /* 6. having */
                              NULL,           /* 7. set operation */
                              NULL,           /* 8. all specified? */
                              NULL,           /* 9. former select stmt */
                              NULL,           /* 10. later select stmt */
                              NULL,           /* 11. order by */
                              NULL,             /* 12. limit */
                              NULL,           /* 13. for update */
                              NULL,             /* 14 hints */
                              NULL            /* 15 when clause */
                              ,NULL
                              );
						  merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(4) - (7)].node));
						  malloc_non_terminal_node((yyval.node),result->malloc_pool_, T_SELECT_INTO, 2, args, select);
						;}
    break;

  case 256:

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

  case 257:

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

  case 258:

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

  case 259:

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

  case 260:

    {(yyval.node) = NULL;;}
    break;

  case 261:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 262:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_WHERE_CLAUSE, 2, (yyvsp[(3) - (3)].node), (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 263:

    {
      if ((yyvsp[(2) - (4)].node)->type_ == T_QUESTIONMARK && (yyvsp[(4) - (4)].node)->type_ == T_QUESTIONMARK)
      {
        (yyvsp[(4) - (4)].node)->value_++;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 264:

    {
      if ((yyvsp[(2) - (4)].node)->type_ == T_QUESTIONMARK && (yyvsp[(4) - (4)].node)->type_ == T_QUESTIONMARK)
      {
        (yyvsp[(4) - (4)].node)->value_++;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, (yyvsp[(4) - (4)].node), (yyvsp[(2) - (4)].node));
    ;}
    break;

  case 265:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, (yyvsp[(2) - (2)].node), NULL);
    ;}
    break;

  case 266:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, NULL, (yyvsp[(2) - (2)].node));
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
      (yyval.node) = NULL;
    ;}
    break;

  case 269:

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

  case 270:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 271:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 272:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 273:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 274:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 275:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_READ_STATIC);
    ;}
    break;

  case 276:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_HOTSPOT);
    ;}
    break;

  case 277:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_READ_CONSISTENCY);
      (yyval.node)->value_ = (yyvsp[(3) - (4)].ival);
    ;}
    break;

  case 278:

    {
      (yyval.node) = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 279:

    {
      (yyval.node) = (yyvsp[(1) - (2)].node);
    ;}
    break;

  case 280:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 281:

    {
    (yyval.ival) = 3;
  ;}
    break;

  case 282:

    {
    (yyval.ival) = 4;
  ;}
    break;

  case 283:

    {
    (yyval.ival) = 1;
  ;}
    break;

  case 284:

    {
    (yyval.ival) = 2;
  ;}
    break;

  case 285:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 286:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 287:

    { (yyval.node) = NULL; ;}
    break;

  case 288:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 289:

    { (yyval.node) = NULL; ;}
    break;

  case 290:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 291:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 0;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 292:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 0;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 293:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 1;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 294:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 2;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 295:

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

  case 296:

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

  case 297:

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

  case 298:

    { (yyval.node) = NULL; ;}
    break;

  case 299:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_EXPR_LIST, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 300:

    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 301:

    { (yyval.node) = NULL; ;}
    break;

  case 302:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_SORT_LIST, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 303:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 304:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 305:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SORT_KEY, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 306:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_ASC); ;}
    break;

  case 307:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_ASC); ;}
    break;

  case 308:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_DESC); ;}
    break;

  case 309:

    { (yyval.node) = 0; ;}
    break;

  case 310:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 311:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 312:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_ALL);
    ;}
    break;

  case 313:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_DISTINCT);
    ;}
    break;

  case 314:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, (yyvsp[(1) - (1)].node));
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (1)]).first_column, (yylsp[(1) - (1)]).last_column);
    ;}
    break;

  case 315:

    {
      ParseNode* alias_node = NULL;
      malloc_non_terminal_node(alias_node, result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, alias_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (2)]).first_column, (yylsp[(1) - (2)]).last_column);
      dup_expr_string(alias_node->str_value_, result, (yylsp[(2) - (2)]).first_column, (yylsp[(2) - (2)]).last_column);
    ;}
    break;

  case 316:

    {
      ParseNode* alias_node = NULL;
      malloc_non_terminal_node(alias_node, result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, alias_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (3)]).first_column, (yylsp[(1) - (3)]).last_column);
      dup_expr_string(alias_node->str_value_, result, (yylsp[(3) - (3)]).first_column, (yylsp[(3) - (3)]).last_column);
    ;}
    break;

  case 317:

    {
      ParseNode* star_node = NULL;
      malloc_terminal_node(star_node, result->malloc_pool_, T_STAR);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, star_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (1)]).first_column, (yylsp[(1) - (1)]).last_column);
    ;}
    break;

  case 318:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 319:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 320:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 321:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 322:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 323:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 324:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 325:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 326:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 327:

    {
    	(yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 328:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(2) - (5)].node), (yyvsp[(5) - (5)].node));
    	yyerror(&(yylsp[(1) - (5)]), result, "qualied joined table can not be aliased!");
      YYABORT;
    ;}
    break;

  case 329:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 330:

    {
    	(yyval.node) = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 331:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOINED_TABLE, 4, (yyvsp[(2) - (6)].node), (yyvsp[(1) - (6)].node), (yyvsp[(4) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 332:

    {
      ParseNode* node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_JOIN_INNER);
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOINED_TABLE, 4, node, (yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 333:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_FULL);
    ;}
    break;

  case 334:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_LEFT);
    ;}
    break;

  case 335:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_RIGHT);
    ;}
    break;

  case 336:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_INNER);
    ;}
    break;

  case 337:

    { (yyval.node) = NULL; ;}
    break;

  case 338:

    { (yyval.node) = NULL; ;}
    break;

  case 339:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPLAIN, 1, (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = ((yyvsp[(2) - (3)].node) ? 1 : 0); /* positive: verbose */
    ;}
    break;

  case 340:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 341:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 342:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 343:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 344:

    { (yyval.node) = (ParseNode*)1; ;}
    break;

  case 345:

    { (yyval.node) = NULL; ;}
    break;

  case 346:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_TABLES, 1, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 347:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 348:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 349:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_TABLE_STATUS, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 350:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_SERVER_STATUS, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 351:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_VARIABLES, 1, (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = (yyvsp[(2) - (4)].ival);
    ;}
    break;

  case 352:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_SCHEMA); ;}
    break;

  case 353:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_CREATE_TABLE, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 354:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 355:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 356:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_WARNINGS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 357:

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

  case 358:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_GRANTS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 359:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_PARAMETERS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 360:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_PROCESSLIST);
      (yyval.node)->value_ = (yyvsp[(2) - (3)].ival);
    ;}
    break;

  case 361:

    {
      if ((yyvsp[(2) - (4)].node)->value_ < 0 || (yyvsp[(4) - (4)].node)->value_ < 0)
      {
        yyerror(&(yylsp[(1) - (4)]), result, "OFFSET/COUNT must not be less than 0!");
        YYABORT;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_LIMIT, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 362:

    {
      if ((yyvsp[(2) - (2)].node)->value_ < 0)
      {
        yyerror(&(yylsp[(1) - (2)]), result, "COUNT must not be less than 0!");
        YYABORT;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_LIMIT, 2, NULL, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 363:

    { (yyval.node) = NULL; ;}
    break;

  case 364:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 365:

    { (yyval.node) = NULL; ;}
    break;

  case 366:

    { (yyval.node) = NULL; ;}
    break;

  case 367:

    { (yyval.ival) = 1; ;}
    break;

  case 368:

    { (yyval.ival) = 0; ;}
    break;

  case 369:

    { (yyval.ival) = 0; ;}
    break;

  case 370:

    { (yyval.node) = NULL; ;}
    break;

  case 371:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 372:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_WHERE_CLAUSE, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 373:

    { (yyval.node) = NULL; ;}
    break;

  case 374:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 1, (yyvsp[(1) - (1)].node)); ;}
    break;

  case 375:

    { (yyval.ival) = 0; ;}
    break;

  case 376:

    { (yyval.ival) = 1; ;}
    break;

  case 377:

    {
        merge_nodes((yyval.node), result->malloc_pool_, T_CREATE_USER, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 378:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 379:

    {
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 380:

    {
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CREATE_USER_SPEC, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 381:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 382:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 383:

    {
        merge_nodes((yyval.node), result->malloc_pool_, T_DROP_USER, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 384:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 385:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 386:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SET_PASSWORD, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 387:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SET_PASSWORD, 2, (yyvsp[(3) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 388:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 389:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 390:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_RENAME_USER, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 391:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_RENAME_INFO, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 392:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 393:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 394:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LOCK_USER, 2, (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 395:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 396:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 397:

    {
      (void)(yyval.node);
    ;}
    break;

  case 398:

    {
      (void)(yyval.node);
    ;}
    break;

  case 399:

    {
      (yyval.ival) = 1;
    ;}
    break;

  case 400:

    {
      (yyval.ival) = 0;
    ;}
    break;

  case 401:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BEGIN);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 402:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BEGIN);
      (yyval.node)->value_ = (yyvsp[(3) - (3)].ival);
    ;}
    break;

  case 403:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_COMMIT);
    ;}
    break;

  case 404:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_ROLLBACK);
    ;}
    break;

  case 405:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_KILL, 3, (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 406:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 407:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 408:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 409:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
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
      ParseNode *privileges_node = NULL;
      ParseNode *users_node = NULL;
      merge_nodes(privileges_node, result->malloc_pool_, T_PRIVILEGES, (yyvsp[(2) - (6)].node));
      merge_nodes(users_node, result->malloc_pool_, T_USERS, (yyvsp[(6) - (6)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_GRANT,
                                 3, privileges_node, (yyvsp[(4) - (6)].node), users_node);
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
      (void)(yyvsp[(2) - (2)].node);                 /* useless */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_ALL;
    ;}
    break;

  case 415:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_ALTER;
    ;}
    break;

  case 416:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_CREATE;
    ;}
    break;

  case 417:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_CREATE_USER;
    ;}
    break;

  case 418:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_DELETE;
    ;}
    break;

  case 419:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_DROP;
    ;}
    break;

  case 420:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_GRANT_OPTION;
    ;}
    break;

  case 421:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_INSERT;
    ;}
    break;

  case 422:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_UPDATE;
    ;}
    break;

  case 423:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_SELECT;
    ;}
    break;

  case 424:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_REPLACE;
    ;}
    break;

  case 425:

    {
      (void)(yyval.node);
    ;}
    break;

  case 426:

    {
      (void)(yyval.node);
    ;}
    break;

  case 427:

    {
      /* means global priv_level */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_LEVEL);
    ;}
    break;

  case 428:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_LEVEL, 1, (yyvsp[(1) - (1)].node));
    ;}
    break;

  case 429:

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

  case 430:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 431:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 432:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PREPARE, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 433:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 434:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 435:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 436:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 437:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 438:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_VARIABLE_SET, (yyvsp[(2) - (2)].node));;
      (yyval.node)->value_ = 2;
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
      (void)((yyvsp[(2) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 442:

    {
      (void)((yyvsp[(2) - (3)].node));
      (yyvsp[(1) - (3)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 443:

    {
      (void)((yyvsp[(3) - (4)].node));
      (yyvsp[(2) - (4)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 444:

    {
      (void)((yyvsp[(3) - (4)].node));
      (yyvsp[(2) - (4)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 445:

    {
      (void)((yyvsp[(4) - (5)].node));
      (yyvsp[(3) - (5)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 446:

    {
      (void)((yyvsp[(4) - (5)].node));
      (yyvsp[(3) - (5)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 447:

    {
      (void)((yyvsp[(2) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 448:

    { (yyval.node) = NULL; ;}
    break;

  case 449:

    { (yyval.node) = NULL; ;}
    break;

  case 450:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 451:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXECUTE, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 452:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 453:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 454:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 455:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 456:

    {
      (void)((yyvsp[(1) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_DEALLOCATE, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 457:

    { (yyval.node) = NULL; ;}
    break;

  case 458:

    { (yyval.node) = NULL; ;}
    break;

  case 459:

    {
      ParseNode *alter_actions = NULL;
      merge_nodes(alter_actions, result->malloc_pool_, T_ALTER_ACTION_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_TABLE, 2, (yyvsp[(3) - (4)].node), alter_actions);
    ;}
    break;

  case 460:

    {
      yyerror(&(yylsp[(1) - (6)]), result, "Table rename is not supported now");
      YYABORT;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLE_RENAME, 1, (yyvsp[(6) - (6)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_ACTION_LIST, 1, (yyval.node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_TABLE, 2, (yyvsp[(3) - (6)].node), (yyval.node));
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
      (void)((yyvsp[(2) - (3)].node)); /* make bison mute */
      (yyval.node) = (yyvsp[(3) - (3)].node); /* T_COLUMN_DEFINITION */
    ;}
    break;

  case 464:

    {
      (void)((yyvsp[(2) - (4)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_DROP, 1, (yyvsp[(3) - (4)].node));
      (yyval.node)->value_ = (yyvsp[(4) - (4)].ival);
    ;}
    break;

  case 465:

    {
      (void)((yyvsp[(2) - (4)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_ALTER, 2, (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 466:

    {
      (void)((yyvsp[(2) - (5)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_RENAME, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 467:

    { (yyval.node) = NULL; ;}
    break;

  case 468:

    { (yyval.node) = NULL; ;}
    break;

  case 469:

    { (yyval.ival) = 2; ;}
    break;

  case 470:

    { (yyval.ival) = 1; ;}
    break;

  case 471:

    { (yyval.ival) = 0; ;}
    break;

  case 472:

    {
      (void)((yyvsp[(3) - (3)].node)); /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NOT_NULL);
    ;}
    break;

  case 473:

    {
      (void)((yyvsp[(3) - (3)].node)); /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NULL);
    ;}
    break;

  case 474:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 475:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_NULL);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyval.node));
    ;}
    break;

  case 476:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_SYTEM_ACTION_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_SYSTEM, 1, (yyval.node));
    ;}
    break;

  case 477:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 3, node, (yyvsp[(7) - (7)].node), (yyvsp[(3) - (7)].node));
    ;}
    break;

  case 478:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 3, node, (yyvsp[(7) - (7)].node), (yyvsp[(3) - (7)].node));
    ;}
    break;

  case 479:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 2, node, (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 480:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 2, node, (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 481:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 482:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_FORCE);
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

  case 486:

    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 487:

    { (yyval.node) = NULL; ;}
    break;

  case 488:

    { (yyval.ival) = 0; ;}
    break;

  case 489:

    { (yyval.ival) = 1; ;}
    break;

  case 490:

    { (yyval.ival) = 2; ;}
    break;

  case 491:

    { (yyval.ival) = 2; ;}
    break;

  case 492:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 493:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 4;
    ;}
    break;

  case 494:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 495:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 3;
    ;}
    break;

  case 496:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CLUSTER, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 497:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SERVER_ADDRESS, 2, (yyvsp[(3) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 498:

    { (yyval.node) = NULL; ;}
    break;

  case 499:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 500:

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

  case 501:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 502:

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

  case 504:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 505:

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

  case 531:

    {
								malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CREATE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
							;}
    break;

  case 532:

    {
					ParseNode *params = NULL;
        			merge_nodes(params, result->malloc_pool_, T_PARAM_LIST, (yyvsp[(5) - (6)].node));
					malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECL, 2, (yyvsp[(3) - (6)].node), params);
				;}
    break;

  case 533:

    {
					ParseNode *params = NULL;
					malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECL, 2, (yyvsp[(3) - (5)].node), params);
				;}
    break;

  case 534:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
					;}
    break;

  case 535:

    {
						(yyval.node) = (yyvsp[(1) - (1)].node);
					;}
    break;

  case 536:

    {
      					malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PARAM_DEFINITION, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
					;}
    break;

  case 537:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_IN_PARAM_DEFINITION, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
					;}
    break;

  case 538:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OUT_PARAM_DEFINITION, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
					;}
    break;

  case 539:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_INOUT_PARAM_DEFINITION, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
					;}
    break;

  case 540:

    { 
					//malloc_non_terminal_node($$, result->malloc_pool_, T_PROCEDURE_BLOCK, 1, $2);
					(yyval.node)=(yyvsp[(2) - (3)].node);
				;}
    break;

  case 541:

    { 
					(yyval.node)=NULL;
				;}
    break;

  case 542:

    { 
        			merge_nodes((yyval.node), result->malloc_pool_, T_PROCEDURE_STMTS, (yyvsp[(1) - (1)].node));
				;}
    break;

  case 543:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
				;}
    break;

  case 544:

    {
					(yyval.node)=(yyvsp[(1) - (1)].node);
				;}
    break;

  case 545:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 546:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 547:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 548:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 549:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 550:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 551:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 552:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 553:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 554:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 555:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 556:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 557:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 558:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 559:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 560:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 561:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 562:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 563:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 564:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 565:

    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 566:

    { (yyval.node) =(yyvsp[(1) - (1)].node); ;}
    break;

  case 567:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
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

    { (yyval.node) =(yyvsp[(1) - (1)].node); ;}
    break;

  case 593:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 594:

    {
						ParseNode *args = NULL;
						merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (4)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECLARE, 3, args, (yyvsp[(3) - (4)].node), NULL);
					;}
    break;

  case 595:

    {
						ParseNode *args = NULL;
						merge_nodes(args, result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (6)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DECLARE, 3, args, (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node));
					;}
    break;

  case 596:

    {
						ParseNode *var_list = NULL;
						merge_nodes(var_list, result->malloc_pool_, T_VAR_VAL_LIST, (yyvsp[(2) - (3)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ASSGIN, 1,var_list);
					;}
    break;

  case 597:

    {
						ParseNode *elsifs = NULL;
						merge_nodes(elsifs, result->malloc_pool_, T_PROCEDURE_ELSEIFS, (yyvsp[(5) - (8)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (8)].node), (yyvsp[(4) - (8)].node), elsifs ,(yyvsp[(6) - (8)].node));
					;}
    break;

  case 598:

    {
						ParseNode *elsifs = NULL;
						merge_nodes(elsifs, result->malloc_pool_, T_PROCEDURE_ELSEIFS, (yyvsp[(5) - (7)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (7)].node), (yyvsp[(4) - (7)].node), elsifs ,NULL);
					;}
    break;

  case 599:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (7)].node), (yyvsp[(4) - (7)].node), NULL ,(yyvsp[(5) - (7)].node));
					;}
    break;

  case 600:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_IF, 4, (yyvsp[(2) - (6)].node), (yyvsp[(4) - (6)].node), NULL ,NULL);
					;}
    break;

  case 601:

    {
						(yyval.node)=(yyvsp[(1) - (1)].node);
					;}
    break;

  case 602:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
					;}
    break;

  case 603:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ELSEIF, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
					;}
    break;

  case 604:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ELSE, 1, (yyvsp[(2) - (2)].node));
						//$$ = $2;
					;}
    break;

  case 605:

    {
						ParseNode *casewhenlist = NULL;
						merge_nodes(casewhenlist, result->malloc_pool_, T_PROCEDURE_CASE_WHEN_LIST, (yyvsp[(3) - (6)].node));
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CASE, 3, (yyvsp[(2) - (6)].node), casewhenlist, (yyvsp[(4) - (6)].node));
					;}
    break;

  case 606:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
					;}
    break;

  case 607:

    {
						(yyval.node)=(yyvsp[(1) - (1)].node);
					;}
    break;

  case 608:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CASE_WHEN, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
					;}
    break;

  case 609:

    {
						(yyval.node) = NULL;
					;}
    break;

  case 610:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_ELSE, 1, (yyvsp[(2) - (2)].node));
						//$$ = $2;
					;}
    break;

  case 611:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_LOOP, 1, (yyvsp[(2) - (5)].node));
					;}
    break;

  case 612:

    {
						malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_WHILE, 2, (yyvsp[(2) - (6)].node), (yyvsp[(4) - (6)].node));
					;}
    break;

  case 613:

    {
						/* We do not bother building a node for NULL */
						(yyval.node) = NULL;
					;}
    break;

  case 614:

    {
						malloc_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXIT);
						(yyval.node)->value_=1;
					;}
    break;

  case 615:

    {
						malloc_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_CONTINUE);
						(yyval.node)->value_=0;
					;}
    break;

  case 616:

    {
        					ParseNode *param_list = NULL;
            				merge_nodes(param_list, result->malloc_pool_, T_EXPR_LIST, (yyvsp[(4) - (5)].node));
        					
							malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXEC, 2, (yyvsp[(2) - (5)].node), param_list);
						;}
    break;

  case 617:

    {
							ParseNode *params = NULL;
							malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_EXEC, 2, (yyvsp[(2) - (4)].node), params);
						;}
    break;

  case 618:

    {
							malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DROP, 2, (yyvsp[(5) - (5)].node),(yyvsp[(5) - (5)].node));
						;}
    break;

  case 619:

    {
							malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROCEDURE_DROP, 1, (yyvsp[(3) - (3)].node));
						;}
    break;

  case 620:

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

