
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
     SEMI_JOIN = 355,
     KEY = 356,
     LEADING = 357,
     LEFT = 358,
     LIMIT = 359,
     LOCAL = 360,
     LOCKED = 361,
     MEDIUMINT = 362,
     MEMORY = 363,
     MODIFYTIME = 364,
     MASTER = 365,
     NUMERIC = 366,
     OFFSET = 367,
     ON = 368,
     ORDER = 369,
     OPTION = 370,
     OUTER = 371,
     PARAMETERS = 372,
     PASSWORD = 373,
     PRECISION = 374,
     PREPARE = 375,
     PRIMARY = 376,
     READ_STATIC = 377,
     REAL = 378,
     RENAME = 379,
     REPLACE = 380,
     RESTRICT = 381,
     PRIVILEGES = 382,
     REVOKE = 383,
     RIGHT = 384,
     ROLLBACK = 385,
     KILL = 386,
     READ_CONSISTENCY = 387,
     SCHEMA = 388,
     SCOPE = 389,
     SELECT = 390,
     SESSION = 391,
     SESSION_ALIAS = 392,
     SET = 393,
     SHOW = 394,
     SMALLINT = 395,
     SNAPSHOT = 396,
     SPFILE = 397,
     START = 398,
     STATIC = 399,
     SYSTEM = 400,
     STRONG = 401,
     SET_MASTER_CLUSTER = 402,
     SET_SLAVE_CLUSTER = 403,
     SLAVE = 404,
     TABLE = 405,
     TABLES = 406,
     THEN = 407,
     TIME = 408,
     TIMESTAMP = 409,
     TINYINT = 410,
     TRAILING = 411,
     TRANSACTION = 412,
     TO = 413,
     UPDATE = 414,
     USER = 415,
     USING = 416,
     VALUES = 417,
     VARCHAR = 418,
     VARBINARY = 419,
     WHERE = 420,
     WHEN = 421,
     WITH = 422,
     WORK = 423,
     PROCESSLIST = 424,
     QUERY = 425,
     CONNECTION = 426,
     WEAK = 427,
     AUTO_INCREMENT = 428,
     CHUNKSERVER = 429,
     COMPRESS_METHOD = 430,
     CONSISTENT_MODE = 431,
     EXPIRE_INFO = 432,
     GRANTS = 433,
     JOIN_INFO = 434,
     MERGESERVER = 435,
     REPLICA_NUM = 436,
     ROOTSERVER = 437,
     ROW_COUNT = 438,
     SERVER = 439,
     SERVER_IP = 440,
     SERVER_PORT = 441,
     SERVER_TYPE = 442,
     STATUS = 443,
     TABLE_ID = 444,
     TABLET_BLOCK_SIZE = 445,
     TABLET_MAX_SIZE = 446,
     UNLOCKED = 447,
     UPDATESERVER = 448,
     USE_BLOOM_FILTER = 449,
     VARIABLES = 450,
     VERBOSE = 451,
     WARNINGS = 452
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
#define YYFINAL  161
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2813

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  209
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  156
/* YYNRULES -- Number of rules.  */
#define YYNRULES  495
/* YYNRULES -- Number of states.  */
#define YYNSTATES  885

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   452

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    36,     2,     2,
      40,    41,    34,    32,   208,    33,    42,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   207,
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
     204,   205,   206
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    12,    14,    16,    18,    20,
      22,    24,    26,    28,    30,    32,    34,    36,    38,    40,
      42,    44,    46,    48,    50,    52,    54,    56,    58,    60,
      62,    63,    65,    69,    71,    75,    79,    81,    83,    85,
      87,    89,    91,    93,    95,    97,   101,   103,   105,   109,
     115,   117,   119,   121,   123,   126,   128,   131,   134,   138,
     142,   146,   150,   154,   158,   162,   164,   167,   170,   174,
     178,   182,   186,   190,   194,   198,   202,   206,   210,   214,
     218,   222,   226,   231,   235,   239,   242,   246,   251,   255,
     260,   264,   269,   275,   282,   286,   291,   295,   297,   301,
     307,   309,   310,   312,   315,   320,   323,   324,   329,   335,
     340,   347,   352,   356,   361,   363,   365,   367,   369,   371,
     373,   375,   381,   389,   391,   395,   399,   408,   412,   413,
     415,   419,   421,   427,   431,   433,   435,   437,   439,   441,
     444,   447,   449,   452,   454,   457,   460,   462,   465,   468,
     471,   474,   476,   478,   480,   483,   489,   493,   494,   498,
     499,   501,   502,   506,   507,   511,   512,   515,   516,   519,
     521,   524,   526,   529,   531,   535,   536,   540,   544,   548,
     552,   556,   560,   564,   568,   572,   576,   578,   579,   584,
     585,   588,   590,   594,   602,   607,   615,   616,   619,   621,
     623,   627,   628,   630,   634,   638,   644,   646,   650,   653,
     655,   659,   663,   665,   668,   672,   677,   683,   692,   694,
     696,   706,   711,   716,   721,   722,   725,   729,   734,   739,
     742,   745,   750,   751,   755,   757,   761,   762,   764,   767,
     769,   771,   786,   791,   795,   798,   799,   801,   803,   805,
     807,   809,   811,   812,   814,   815,   818,   822,   827,   832,
     837,   841,   845,   849,   850,   854,   856,   857,   861,   863,
     867,   870,   871,   873,   875,   876,   879,   880,   882,   884,
     886,   889,   893,   895,   897,   901,   903,   907,   909,   913,
     916,   920,   923,   925,   931,   933,   937,   944,   950,   953,
     956,   959,   961,   963,   964,   968,   970,   972,   974,   976,
     978,   979,   983,   989,   995,  1000,  1005,  1010,  1013,  1018,
    1022,  1026,  1030,  1034,  1038,  1042,  1046,  1051,  1054,  1055,
    1057,  1060,  1065,  1067,  1069,  1070,  1071,  1074,  1077,  1078,
    1080,  1081,  1083,  1087,  1089,  1093,  1098,  1100,  1102,  1106,
    1108,  1112,  1118,  1125,  1128,  1129,  1133,  1137,  1139,  1143,
    1148,  1150,  1152,  1154,  1155,  1159,  1160,  1163,  1167,  1170,
    1173,  1178,  1179,  1181,  1182,  1184,  1186,  1193,  1195,  1199,
    1202,  1204,  1206,  1209,  1211,  1213,  1216,  1218,  1220,  1222,
    1224,  1226,  1227,  1229,  1231,  1237,  1240,  1241,  1246,  1248,
    1250,  1252,  1254,  1256,  1259,  1261,  1265,  1269,  1273,  1278,
    1283,  1289,  1295,  1299,  1301,  1303,  1305,  1309,  1312,  1313,
    1315,  1319,  1323,  1325,  1327,  1332,  1339,  1341,  1345,  1349,
    1354,  1359,  1365,  1367,  1368,  1370,  1372,  1373,  1377,  1381,
    1385,  1388,  1393,  1401,  1409,  1416,  1423,  1424,  1426,  1428,
    1432,  1442,  1445,  1446,  1450,  1454,  1458,  1459,  1461,  1463,
    1465,  1467,  1471,  1478,  1479,  1481,  1483,  1485,  1487,  1489,
    1491,  1493,  1495,  1497,  1499,  1501,  1503,  1505,  1507,  1509,
    1511,  1513,  1515,  1517,  1519,  1521,  1523,  1525,  1527,  1529,
    1531,  1533,  1535,  1537,  1539,  1541
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     210,     0,    -1,   211,    83,    -1,   211,   207,   212,    -1,
     212,    -1,   260,    -1,   253,    -1,   234,    -1,   231,    -1,
     230,    -1,   250,    -1,   294,    -1,   297,    -1,   333,    -1,
     336,    -1,   341,    -1,   346,    -1,   352,    -1,   344,    -1,
     304,    -1,   309,    -1,   311,    -1,   313,    -1,   316,    -1,
     326,    -1,   331,    -1,   320,    -1,   321,    -1,   322,    -1,
     323,    -1,    -1,   218,    -1,   213,   208,   218,    -1,   360,
      -1,   361,    42,   360,    -1,   361,    42,    34,    -1,     4,
      -1,     6,    -1,     5,    -1,     9,    -1,     8,    -1,    10,
      -1,    12,    -1,    14,    -1,    13,    -1,   146,    42,   360,
      -1,   214,    -1,   215,    -1,    40,   218,    41,    -1,    40,
     213,   208,   218,    41,    -1,   220,    -1,   225,    -1,   226,
      -1,   261,    -1,    86,   261,    -1,   216,    -1,    32,   217,
      -1,    33,   217,    -1,   217,    32,   217,    -1,   217,    33,
     217,    -1,   217,    34,   217,    -1,   217,    35,   217,    -1,
     217,    36,   217,    -1,   217,    38,   217,    -1,   217,    37,
     217,    -1,   216,    -1,    32,   218,    -1,    33,   218,    -1,
     218,    32,   218,    -1,   218,    33,   218,    -1,   218,    34,
     218,    -1,   218,    35,   218,    -1,   218,    36,   218,    -1,
     218,    38,   218,    -1,   218,    37,   218,    -1,   218,    26,
     218,    -1,   218,    25,   218,    -1,   218,    24,   218,    -1,
     218,    22,   218,    -1,   218,    23,   218,    -1,   218,    21,
     218,    -1,   218,    28,   218,    -1,   218,    20,    28,   218,
      -1,   218,    19,   218,    -1,   218,    18,   218,    -1,    20,
     218,    -1,   218,    31,    10,    -1,   218,    31,    20,    10,
      -1,   218,    31,     8,    -1,   218,    31,    20,     8,    -1,
     218,    31,    11,    -1,   218,    31,    20,    11,    -1,   218,
      29,   217,    19,   217,    -1,   218,    20,    29,   217,    19,
     217,    -1,   218,    30,   219,    -1,   218,    20,    30,   219,
      -1,   218,    27,   218,    -1,   261,    -1,    40,   213,    41,
      -1,    56,   221,   222,   224,    82,    -1,   218,    -1,    -1,
     223,    -1,   222,   223,    -1,   175,   218,   161,   218,    -1,
      81,   218,    -1,    -1,   362,    40,    34,    41,    -1,   362,
      40,   229,   218,    41,    -1,   362,    40,   213,    41,    -1,
     362,    40,   218,    47,   239,    41,    -1,   362,    40,   277,
      41,    -1,   362,    40,    41,    -1,   227,    40,   228,    41,
      -1,   192,    -1,   260,    -1,   253,    -1,   231,    -1,   230,
      -1,    45,    -1,    77,    -1,    74,    90,   290,   266,   254,
      -1,   168,   268,   290,   147,   232,   266,   254,    -1,   233,
      -1,   232,   208,   233,    -1,   360,    24,   218,    -1,    64,
     159,   235,   290,    40,   236,    41,   247,    -1,   103,    20,
      86,    -1,    -1,   237,    -1,   236,   208,   237,    -1,   238,
      -1,   130,   110,    40,   257,    41,    -1,   360,   239,   245,
      -1,   164,    -1,   149,    -1,   116,    -1,   105,    -1,    50,
      -1,    72,   240,    -1,   120,   240,    -1,    52,    -1,    88,
     241,    -1,   132,    -1,    78,   242,    -1,   163,   243,    -1,
      70,    -1,    57,   244,    -1,    51,   244,    -1,   172,   244,
      -1,   173,   244,    -1,    65,    -1,   118,    -1,    69,    -1,
     162,   243,    -1,    40,     5,   208,     5,    41,    -1,    40,
       5,    41,    -1,    -1,    40,     5,    41,    -1,    -1,   128,
      -1,    -1,    40,     5,    41,    -1,    -1,    40,     5,    41,
      -1,    -1,   245,   246,    -1,    -1,    20,    10,    -1,    10,
      -1,    73,   215,    -1,   182,    -1,   130,   110,    -1,   248,
      -1,   247,   208,   248,    -1,    -1,   188,   249,     4,    -1,
     186,   249,     4,    -1,   200,   249,     5,    -1,   199,   249,
       5,    -1,   198,   249,     5,    -1,   190,   249,     5,    -1,
     184,   249,     4,    -1,   203,   249,     8,    -1,   185,   249,
     153,    -1,    59,   249,     4,    -1,    24,    -1,    -1,    79,
     159,   251,   252,    -1,    -1,   103,    86,    -1,   289,    -1,
     252,   208,   289,    -1,   255,   107,   290,   256,   171,   258,
     254,    -1,   255,   107,   290,   260,    -1,   255,   107,   290,
      40,   257,    41,   260,    -1,    -1,   175,   218,    -1,   134,
      -1,   106,    -1,    40,   257,    41,    -1,    -1,   360,    -1,
     257,   208,   360,    -1,    40,   259,    41,    -1,   258,   208,
      40,   259,    41,    -1,   218,    -1,   259,   208,   218,    -1,
     262,   254,    -1,   261,    -1,    40,   262,    41,    -1,    40,
     261,    41,    -1,   263,    -1,   265,   276,    -1,   264,   280,
     276,    -1,   264,   279,   267,   276,    -1,   144,   268,   285,
     287,   275,    -1,   144,   268,   285,   287,    90,    80,   266,
     275,    -1,   265,    -1,   261,    -1,   144,   268,   285,   287,
      90,   288,   266,   278,   284,    -1,   264,    16,   285,   264,
      -1,   264,    17,   285,   264,    -1,   264,    15,   285,   264,
      -1,    -1,   174,   218,    -1,   174,     7,   218,    -1,   113,
     274,   121,   274,    -1,   121,   274,   113,   274,    -1,   113,
     274,    -1,   121,   274,    -1,   113,   274,   208,   274,    -1,
      -1,    99,   269,   100,    -1,   270,    -1,   269,   208,   270,
      -1,    -1,   271,    -1,   270,   271,    -1,   131,    -1,   101,
      -1,   109,    40,   290,   208,   290,   208,   290,    42,   290,
     208,   290,    42,   290,    41,    -1,   141,    40,   273,    41,
      -1,    40,   272,    41,    -1,   272,   208,    -1,    -1,   181,
      -1,   155,    -1,   153,    -1,    92,    -1,     5,    -1,    12,
      -1,    -1,   267,    -1,    -1,    89,   168,    -1,   218,    90,
     218,    -1,    53,   218,    90,   218,    -1,   111,   218,    90,
     218,    -1,   165,   218,    90,   218,    -1,    53,    90,   218,
      -1,   111,    90,   218,    -1,   165,    90,   218,    -1,    -1,
      97,    54,   213,    -1,   280,    -1,    -1,   123,    54,   281,
      -1,   282,    -1,   281,   208,   282,    -1,   218,   283,    -1,
      -1,    48,    -1,    75,    -1,    -1,    98,   218,    -1,    -1,
      45,    -1,    77,    -1,   218,    -1,   218,   363,    -1,   218,
      47,   363,    -1,    34,    -1,   286,    -1,   287,   208,   286,
      -1,   289,    -1,   288,   208,   289,    -1,   290,    -1,   290,
      47,   361,    -1,   290,   361,    -1,   261,    47,   361,    -1,
     261,   361,    -1,   291,    -1,    40,   291,    41,    47,   361,
      -1,   361,    -1,    40,   291,    41,    -1,   289,   292,   108,
     289,   122,   218,    -1,   289,   108,   289,   122,   218,    -1,
      91,   293,    -1,   112,   293,    -1,   138,   293,    -1,   104,
      -1,   125,    -1,    -1,    87,   296,   295,    -1,   260,    -1,
     230,    -1,   253,    -1,   231,    -1,   205,    -1,    -1,   148,
     160,   301,    -1,   148,    63,    90,   290,   301,    -1,   148,
      63,    30,   290,   301,    -1,   148,   159,   197,   301,    -1,
     148,   193,   197,   301,    -1,   148,   300,   204,   301,    -1,
     148,   142,    -1,   148,    64,   159,   290,    -1,    76,   290,
     302,    -1,    75,   290,   302,    -1,   148,   206,   298,    -1,
     148,   225,   206,    -1,   148,   187,   299,    -1,   148,   126,
     301,    -1,   148,   303,   178,    -1,   113,     5,   208,     5,
      -1,   113,     5,    -1,    -1,   312,    -1,    89,    66,    -1,
      89,    66,    40,    41,    -1,    94,    -1,   145,    -1,    -1,
      -1,    28,     4,    -1,   174,   218,    -1,    -1,     4,    -1,
      -1,    91,    -1,    64,   169,   305,    -1,   306,    -1,   305,
     208,   306,    -1,   307,   102,    54,   308,    -1,     4,    -1,
       4,    -1,    79,   169,   310,    -1,   307,    -1,   310,   208,
     307,    -1,   147,   127,   312,    24,   308,    -1,    46,   169,
     307,   102,    54,   308,    -1,    89,   307,    -1,    -1,   133,
     169,   315,    -1,   307,   167,   307,    -1,   314,    -1,   315,
     208,   314,    -1,    46,   169,   307,   317,    -1,   115,    -1,
     201,    -1,   177,    -1,    -1,   176,    61,   150,    -1,    -1,
      49,   318,    -1,   152,   166,   319,    -1,    60,   318,    -1,
     139,   318,    -1,   140,   324,   325,     5,    -1,    -1,    94,
      -1,    -1,   179,    -1,   180,    -1,    96,   327,   122,   330,
     167,   310,    -1,   328,    -1,   327,   208,   328,    -1,    45,
     329,    -1,    46,    -1,    64,    -1,    64,   169,    -1,    74,
      -1,    79,    -1,    96,   124,    -1,   106,    -1,   168,    -1,
     144,    -1,   134,    -1,   136,    -1,    -1,    34,    -1,   361,
      -1,   137,   327,   332,    90,   310,    -1,   122,   330,    -1,
      -1,   129,   334,    90,   335,    -1,   363,    -1,   260,    -1,
     253,    -1,   231,    -1,   230,    -1,   147,   337,    -1,   338,
      -1,   337,   208,   338,    -1,    14,   339,   218,    -1,   360,
     339,   218,    -1,    94,   360,   339,   218,    -1,   145,   360,
     339,   218,    -1,    95,    42,   360,   339,   218,    -1,   146,
      42,   360,   339,   218,    -1,    13,   339,   218,    -1,   167,
      -1,    24,    -1,    14,    -1,    85,   334,   342,    -1,   170,
     343,    -1,    -1,   340,    -1,   343,   208,   340,    -1,   345,
     129,   334,    -1,    71,    -1,    79,    -1,    46,   159,   290,
     347,    -1,    46,   159,   290,   133,   167,   290,    -1,   348,
      -1,   347,   208,   348,    -1,    43,   349,   238,    -1,    79,
     349,   360,   350,    -1,    46,   349,   360,   351,    -1,   133,
     349,   360,   167,   363,    -1,    62,    -1,    -1,    55,    -1,
     135,    -1,    -1,   147,    20,    10,    -1,    79,    20,    10,
      -1,   147,    73,   215,    -1,    79,    73,    -1,    46,   154,
     147,   354,    -1,    46,   154,   353,    67,   119,    24,     4,
      -1,    46,   154,   353,    68,   119,    24,     4,    -1,    46,
     154,   156,   119,    24,     4,    -1,    46,   154,   157,   158,
      24,     4,    -1,    -1,    93,    -1,   355,    -1,   354,   208,
     355,    -1,   360,    24,   215,   356,   357,   196,    24,   358,
     359,    -1,    59,     4,    -1,    -1,   143,    24,   117,    -1,
     143,    24,   151,    -1,   143,    24,    53,    -1,    -1,   191,
      -1,   202,    -1,   183,    -1,   189,    -1,    58,    24,     5,
      -1,   194,    24,     4,   195,    24,     5,    -1,    -1,     3,
      -1,   364,    -1,     3,    -1,   364,    -1,     3,    -1,     3,
      -1,   364,    -1,   182,    -1,   183,    -1,   184,    -1,   185,
      -1,   186,    -1,   187,    -1,   188,    -1,   189,    -1,   190,
      -1,   191,    -1,   192,    -1,   193,    -1,   194,    -1,   195,
      -1,   196,    -1,   197,    -1,   199,    -1,   198,    -1,   200,
      -1,   201,    -1,   202,    -1,   203,    -1,   204,    -1,   205,
      -1,   206,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   221,   221,   230,   237,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   279,   283,   290,   292,   298,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   320,   322,   324,   326,
     332,   340,   344,   348,   352,   360,   361,   365,   369,   370,
     371,   372,   373,   374,   375,   378,   379,   383,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   406,   410,   414,   418,   422,   426,
     430,   434,   438,   442,   446,   450,   454,   461,   465,   470,
     478,   479,   483,   485,   490,   497,   498,   502,   516,   544,
     619,   635,   639,   661,   669,   676,   677,   678,   679,   683,
     687,   701,   715,   725,   729,   736,   750,   767,   770,   774,
     778,   785,   789,   798,   807,   809,   811,   813,   815,   817,
     826,   835,   837,   839,   841,   846,   853,   855,   862,   869,
     876,   883,   885,   887,   893,   905,   907,   910,   914,   915,
     919,   920,   924,   925,   929,   930,   934,   937,   941,   946,
     951,   953,   955,   960,   964,   969,   975,   980,   985,   990,
     995,  1000,  1005,  1010,  1015,  1021,  1029,  1030,  1041,  1051,
    1052,  1057,  1061,  1074,  1088,  1099,  1117,  1118,  1125,  1130,
    1138,  1143,  1147,  1148,  1155,  1159,  1165,  1166,  1180,  1190,
    1195,  1196,  1200,  1204,  1209,  1219,  1240,  1262,  1288,  1289,
    1293,  1319,  1341,  1363,  1389,  1390,  1394,  1401,  1409,  1417,
    1421,  1425,  1437,  1440,  1454,  1458,  1463,  1469,  1473,  1480,
    1484,  1488,  1492,  1497,  1504,  1509,  1515,  1519,  1523,  1527,
    1533,  1535,  1541,  1542,  1548,  1549,  1557,  1564,  1571,  1578,
    1585,  1596,  1607,  1622,  1623,  1630,  1631,  1635,  1642,  1644,
    1649,  1657,  1658,  1660,  1666,  1667,  1675,  1678,  1682,  1689,
    1694,  1702,  1710,  1720,  1724,  1731,  1733,  1738,  1742,  1746,
    1750,  1754,  1758,  1762,  1771,  1779,  1783,  1787,  1796,  1802,
    1808,  1814,  1821,  1822,  1832,  1840,  1841,  1842,  1843,  1847,
    1848,  1858,  1860,  1862,  1864,  1866,  1868,  1873,  1875,  1877,
    1879,  1881,  1885,  1898,  1902,  1906,  1914,  1923,  1933,  1937,
    1939,  1941,  1946,  1947,  1948,  1953,  1954,  1956,  1962,  1963,
    1968,  1969,  1978,  1984,  1988,  1994,  2000,  2006,  2018,  2024,
    2028,  2040,  2044,  2050,  2055,  2065,  2071,  2077,  2081,  2092,
    2098,  2103,  2116,  2121,  2125,  2130,  2134,  2140,  2151,  2163,
    2175,  2182,  2186,  2194,  2198,  2203,  2217,  2228,  2232,  2238,
    2244,  2249,  2254,  2259,  2264,  2269,  2274,  2279,  2284,  2289,
    2296,  2301,  2306,  2311,  2322,  2362,  2367,  2378,  2385,  2390,
    2392,  2394,  2396,  2407,  2415,  2419,  2426,  2432,  2439,  2446,
    2453,  2460,  2467,  2476,  2477,  2481,  2492,  2499,  2504,  2509,
    2513,  2526,  2534,  2536,  2547,  2553,  2564,  2568,  2575,  2580,
    2586,  2591,  2600,  2601,  2605,  2606,  2607,  2611,  2616,  2621,
    2625,  2639,  2645,  2652,  2659,  2666,  2676,  2679,  2687,  2691,
    2698,  2713,  2716,  2720,  2722,  2724,  2727,  2731,  2736,  2741,
    2746,  2754,  2758,  2763,  2774,  2776,  2793,  2795,  2812,  2816,
    2818,  2831,  2832,  2833,  2834,  2835,  2836,  2837,  2838,  2839,
    2840,  2841,  2842,  2843,  2844,  2845,  2846,  2847,  2848,  2849,
    2850,  2851,  2852,  2853,  2854,  2855
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
     446,   447,   448,   449,   450,   451,   452,    59,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   209,   210,   211,   211,   212,   212,   212,   212,   212,
     212,   212,   212,   212,   212,   212,   212,   212,   212,   212,
     212,   212,   212,   212,   212,   212,   212,   212,   212,   212,
     212,   213,   213,   214,   214,   214,   215,   215,   215,   215,
     215,   215,   215,   215,   215,   215,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   219,   219,   220,
     221,   221,   222,   222,   223,   224,   224,   225,   225,   225,
     225,   225,   225,   226,   227,   228,   228,   228,   228,   229,
     229,   230,   231,   232,   232,   233,   234,   235,   235,   236,
     236,   237,   237,   238,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   240,   240,   240,   241,   241,
     242,   242,   243,   243,   244,   244,   245,   245,   246,   246,
     246,   246,   246,   247,   247,   247,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   249,   249,   250,   251,
     251,   252,   252,   253,   253,   253,   254,   254,   255,   255,
     256,   256,   257,   257,   258,   258,   259,   259,   260,   260,
     261,   261,   262,   262,   262,   262,   263,   263,   264,   264,
     265,   265,   265,   265,   266,   266,   266,   267,   267,   267,
     267,   267,   268,   268,   269,   269,   269,   270,   270,   271,
     271,   271,   271,   271,   272,   272,   273,   273,   273,   273,
     274,   274,   275,   275,   276,   276,   277,   277,   277,   277,
     277,   277,   277,   278,   278,   279,   279,   280,   281,   281,
     282,   283,   283,   283,   284,   284,   285,   285,   285,   286,
     286,   286,   286,   287,   287,   288,   288,   289,   289,   289,
     289,   289,   289,   289,   290,   291,   291,   291,   292,   292,
     292,   292,   293,   293,   294,   295,   295,   295,   295,   296,
     296,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   298,   298,   298,   299,
     299,   299,   300,   300,   300,   301,   301,   301,   302,   302,
     303,   303,   304,   305,   305,   306,   307,   308,   309,   310,
     310,   311,   311,   312,   312,   313,   314,   315,   315,   316,
     317,   317,   318,   318,   319,   319,   320,   320,   321,   322,
     323,   324,   324,   325,   325,   325,   326,   327,   327,   328,
     328,   328,   328,   328,   328,   328,   328,   328,   328,   328,
     329,   329,   330,   330,   331,   332,   332,   333,   334,   335,
     335,   335,   335,   336,   337,   337,   338,   338,   338,   338,
     338,   338,   338,   339,   339,   340,   341,   342,   342,   343,
     343,   344,   345,   345,   346,   346,   347,   347,   348,   348,
     348,   348,   349,   349,   350,   350,   350,   351,   351,   351,
     351,   352,   352,   352,   352,   352,   353,   353,   354,   354,
     355,   356,   356,   357,   357,   357,   357,   358,   358,   358,
     358,   359,   359,   359,   360,   360,   361,   361,   362,   363,
     363,   364,   364,   364,   364,   364,   364,   364,   364,   364,
     364,   364,   364,   364,   364,   364,   364,   364,   364,   364,
     364,   364,   364,   364,   364,   364
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     3,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     3,     5,
       1,     1,     1,     1,     2,     1,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     1,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     4,     3,     3,     2,     3,     4,     3,     4,
       3,     4,     5,     6,     3,     4,     3,     1,     3,     5,
       1,     0,     1,     2,     4,     2,     0,     4,     5,     4,
       6,     4,     3,     4,     1,     1,     1,     1,     1,     1,
       1,     5,     7,     1,     3,     3,     8,     3,     0,     1,
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
       1,    14,     4,     3,     2,     0,     1,     1,     1,     1,
       1,     1,     0,     1,     0,     2,     3,     4,     4,     4,
       3,     3,     3,     0,     3,     1,     0,     3,     1,     3,
       2,     0,     1,     1,     0,     2,     0,     1,     1,     1,
       2,     3,     1,     1,     3,     1,     3,     1,     3,     2,
       3,     2,     1,     5,     1,     3,     6,     5,     2,     2,
       2,     1,     1,     0,     3,     1,     1,     1,     1,     1,
       0,     3,     5,     5,     4,     4,     4,     2,     4,     3,
       3,     3,     3,     3,     3,     3,     4,     2,     0,     1,
       2,     4,     1,     1,     0,     0,     2,     2,     0,     1,
       0,     1,     3,     1,     3,     4,     1,     1,     3,     1,
       3,     5,     6,     2,     0,     3,     3,     1,     3,     4,
       1,     1,     1,     0,     3,     0,     2,     3,     2,     2,
       4,     0,     1,     0,     1,     1,     6,     1,     3,     2,
       1,     1,     2,     1,     1,     2,     1,     1,     1,     1,
       1,     0,     1,     1,     5,     2,     0,     4,     1,     1,
       1,     1,     1,     2,     1,     3,     3,     3,     4,     4,
       5,     5,     3,     1,     1,     1,     3,     2,     0,     1,
       3,     3,     1,     1,     4,     6,     1,     3,     3,     4,
       4,     5,     1,     0,     1,     1,     0,     3,     3,     3,
       2,     4,     7,     7,     6,     6,     0,     1,     1,     3,
       9,     2,     0,     3,     3,     3,     0,     1,     1,     1,
       1,     3,     6,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      30,     0,     0,   363,   363,     0,   422,     0,     0,     0,
     423,     0,   310,     0,   199,     0,     0,   198,     0,   363,
     371,   232,     0,   334,     0,   232,     0,     0,     4,     9,
       8,     7,    10,     6,     0,     5,   219,   196,   212,   266,
     218,    11,    12,    19,    20,    21,    22,    23,    26,    27,
      28,    29,    24,    25,    13,    14,    15,    18,     0,    16,
      17,   219,     0,   446,     0,     0,   362,   366,   368,   128,
       0,     0,   466,   471,   472,   473,   474,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,   488,
     487,   489,   490,   491,   492,   493,   494,   495,   338,   294,
     467,   338,   189,     0,   469,   418,   398,   470,   309,     0,
     391,   380,   381,   383,   384,     0,   386,   389,   388,   387,
       0,   377,     0,     0,   396,   369,   372,   373,   236,   276,
     464,     0,     0,     0,     0,   354,     0,     0,   403,   404,
       0,   465,   468,     0,     0,   341,   332,   335,   317,   333,
       0,   335,   354,     0,   328,     0,     0,     0,     0,   365,
       0,     1,     2,    30,     0,     0,   208,   276,   276,   276,
       0,     0,   254,     0,   213,     0,   211,   210,   447,     0,
       0,     0,     0,     0,   346,     0,     0,     0,   342,   343,
       0,   224,   339,   320,   319,     0,     0,   349,   348,     0,
     416,   306,   308,   307,   305,   304,   390,   379,   382,   385,
       0,     0,     0,     0,   357,   355,     0,     0,   374,   375,
       0,   245,   240,     0,   239,     0,     0,   234,   237,   277,
     278,     0,   414,   413,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   324,
     335,   311,     0,   323,   329,   335,     0,   321,   322,   335,
     325,     0,     0,   367,     0,     3,   201,   464,    36,    38,
      37,    40,    39,    41,    42,    44,    43,     0,     0,     0,
       0,   101,     0,     0,   481,    46,    47,    65,   197,    50,
      51,    52,     0,    53,    33,     0,   465,     0,     0,     0,
       0,     0,     0,   254,   214,   255,   421,   441,   448,     0,
       0,     0,     0,     0,   433,   433,   433,   433,   424,   426,
       0,   360,   361,   359,     0,     0,     0,     0,     0,   196,
     190,     0,   188,     0,   191,   287,   292,     0,   415,   419,
     417,   392,     0,   393,   378,   402,   401,   400,   399,   397,
       0,     0,   395,     0,   370,     0,     0,     0,   233,     0,
     238,   282,   279,   283,   252,   412,   406,     0,     0,   353,
       0,     0,     0,   405,   407,   335,   335,   318,   336,   337,
     314,   330,   315,   327,   316,     0,   112,   119,     0,   120,
       0,     0,     0,    31,     0,     0,     0,     0,     0,     0,
     194,    85,    66,    67,     0,    31,    53,   100,     0,    54,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   232,   219,   223,   218,   221,   222,
     271,   267,   268,   250,   251,   229,   230,   215,     0,     0,
       0,     0,     0,     0,   432,     0,     0,     0,     0,     0,
       0,     0,   127,     0,   344,     0,     0,   225,   121,   219,
       0,   292,     0,     0,   291,   303,   301,     0,   303,   303,
       0,     0,   289,   350,     0,     0,   356,   358,   394,   243,
     244,     0,   249,   248,   247,   246,     0,   235,     0,   280,
       0,     0,   253,   216,   408,     0,   347,   351,   409,     0,
     313,   312,     0,     0,   107,     0,     0,     0,     0,     0,
       0,   109,     0,     0,     0,     0,   111,   364,   224,   123,
       0,     0,   202,     0,     0,    48,     0,   106,   102,    45,
      84,    83,     0,     0,     0,    80,    78,    79,    77,    76,
      75,    96,    81,     0,     0,    55,     0,     0,    94,    97,
      88,    86,    90,     0,    68,    69,    70,    71,    72,    74,
      73,     0,   118,   117,   116,   115,    35,    34,   276,   272,
     273,   270,     0,     0,     0,     0,   449,   452,   444,   445,
       0,     0,   428,     0,     0,   436,   425,     0,   433,   427,
     352,     0,     0,   129,   131,   345,   226,   295,   192,   290,
     302,   298,     0,   299,   300,     0,   288,   420,   376,     0,
     242,   281,   224,   224,   285,   284,   410,   411,   331,   326,
     260,     0,   261,     0,   262,     0,    32,   138,   165,   141,
     165,   151,   153,   146,   157,   161,   159,   137,   136,   152,
     157,   143,   135,   163,   163,   134,   165,   165,     0,   256,
     108,     0,   196,     0,   200,     0,     0,   196,    32,     0,
       0,   103,     0,    82,     0,    95,    56,    57,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,    89,    87,
      91,   113,     0,   269,   227,   231,   228,     0,   456,   442,
     443,   167,     0,     0,   430,   434,   435,   429,     0,     0,
     175,     0,     0,     0,     0,     0,   252,     0,   263,   257,
     258,   259,     0,   148,   147,     0,   139,   160,   144,     0,
     142,   140,     0,   154,   145,   149,   150,   110,   124,   122,
     125,   195,   203,   206,     0,     0,   193,    49,     0,   105,
      99,     0,    92,    58,    59,    60,    61,    62,    64,    63,
      98,     0,   451,     0,     0,   133,     0,   440,     0,     0,
     431,     0,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   126,   173,   130,   293,   297,     0,     0,   217,
     286,     0,   274,     0,     0,     0,     0,   204,     0,     0,
     104,    93,     0,     0,     0,   169,     0,     0,     0,   171,
     166,   438,   437,   439,     0,   186,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   296,     0,     0,
       0,   220,   164,   156,     0,   158,   162,   207,     0,   455,
     453,   454,     0,   168,   170,   172,   132,   185,   182,   184,
     177,   176,   181,   180,   179,   178,   183,   174,     0,   264,
     275,     0,   205,   459,   460,   457,   458,   463,     0,   155,
       0,     0,   450,     0,     0,     0,     0,   461,     0,     0,
       0,     0,     0,   241,   462
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    26,    27,    28,   392,   285,   286,   287,   556,   362,
     558,   289,   408,   537,   538,   672,   290,   291,   292,   571,
     394,    29,    30,   528,   529,    31,   187,   602,   603,   604,
     658,   726,   730,   728,   733,   723,   765,   810,   782,   783,
     816,    32,   196,   332,    33,   166,    34,   399,   531,   667,
     744,    35,   293,    37,    38,    39,    40,   329,   502,   129,
     226,   227,   228,   355,   496,   445,   503,   174,   395,   792,
     171,   172,   441,   442,   581,   831,   231,   363,   364,   623,
     624,   335,   336,   480,   611,    41,   205,   109,    42,   257,
     253,   156,   249,   193,   157,    43,   188,   189,   197,   507,
      44,   198,    45,   239,    46,   214,   215,    47,   323,    67,
     263,    48,    49,    50,    51,   127,   220,    52,   120,   121,
     207,   342,    53,   217,    54,   105,   349,    55,   138,   139,
     234,   339,    56,   200,   340,    57,    58,    59,   318,   319,
     459,   707,   704,    60,   182,   307,   308,   698,   764,   867,
     872,   294,   295,   158,   106,   296
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -534
static const yytype_int16 yypact[] =
{
     908,    17,    71,  -100,  -100,   -43,  -534,   -25,  2028,  2028,
     -30,  2205,  -123,   388,  -534,  2205,   -28,  -534,   388,  -100,
     111,    54,  1824,   279,    47,    54,   223,   -29,  -534,  -534,
    -534,  -534,  -534,  -534,   125,  -534,    14,    66,  -534,    52,
      12,  -534,  -534,  -534,  -534,  -534,  -534,  -534,  -534,  -534,
    -534,  -534,  -534,  -534,  -534,  -534,  -534,  -534,   115,  -534,
    -534,   209,   239,   260,  2028,   282,  -534,  -534,  -534,   187,
     282,  2028,  -534,  -534,  -534,  -534,  -534,  -534,  -534,  -534,
    -534,  -534,  -534,  -534,  -534,  -534,  -534,  -534,  -534,  -534,
    -534,  -534,  -534,  -534,  -534,  -534,  -534,  -534,   289,  -534,
    -534,   289,   193,   282,  -534,   130,  -534,  -534,  -534,    59,
     170,  -534,   159,  -534,  -534,   206,  -534,  -534,  -534,  -534,
      16,  -534,   251,   282,    20,  -534,  -534,    85,   267,    35,
    -534,    19,    19,  2232,   297,   268,  2232,   302,   141,  -534,
      19,  -534,  -534,   120,   201,  -534,  -534,    18,  -534,  -534,
     165,    18,   275,   177,   256,   169,   173,   213,   355,   225,
    2028,  -534,  -534,   908,  2028,  1709,  -534,    35,    35,    35,
     361,     0,   178,   250,  -534,  2205,  -534,  -534,  -534,  2232,
     300,   269,   249,   255,  -534,   -44,   406,  2028,   221,  -534,
     334,   272,  -534,  -534,  -534,   367,  1377,  -534,   233,   440,
    -534,  -534,  -534,  -534,  -534,  -534,  -534,  -534,  -534,  -534,
    1969,   388,    59,   291,  -534,   248,  1969,   369,  -534,  -534,
     458,  -534,  -534,   430,  -534,   436,   -39,   267,  -534,  -534,
    -534,  1139,  -534,  -534,  1709,  1709,    19,  2232,   282,   456,
      19,  2232,  1855,  1709,  2028,  2028,  2028,   477,  1709,  -534,
      18,  -534,    56,  -534,  -534,    18,   484,  -534,  -534,    18,
    -534,   933,   432,  -534,   351,  -534,    36,   228,  -534,  -534,
    -534,  -534,  -534,  -534,  -534,  -534,  -534,  1709,  1709,  1709,
    1202,  1709,   460,   459,   463,  -534,  -534,  -534,  2775,  -534,
    -534,  -534,   464,  -534,  -534,   466,   475,    38,    38,    38,
    1709,   105,   105,   429,  -534,  -534,  -534,   312,  -534,   497,
     499,   500,   414,   415,   469,   469,   469,    -3,   327,  -534,
     482,  -534,  -534,  -534,   452,   501,   282,   485,  1263,    66,
    -534,  1173,   332,  2084,   131,  2129,  -534,   282,  -534,  -534,
     340,  -534,   383,  -534,  -534,  -534,  -534,  -534,  -534,  -534,
     282,   282,  -534,   282,  -534,   -14,  2028,   171,  -534,   267,
    -534,  -534,   556,  -534,   -49,  2775,  2775,  1709,    19,  -534,
     547,  1709,    19,  -534,  2775,    18,    18,  -534,  -534,  2775,
    -534,   512,  -534,   345,  -534,   513,  -534,  -534,  1467,  -534,
    1500,  1588,   -13,  2545,  1709,   514,   410,  2232,  1238,   396,
    -534,  2316,  -534,  -534,   365,  2700,   242,  2775,   394,  -534,
    2232,  1709,  1709,   357,  1709,  1709,  1709,  1709,  1709,  1709,
    1709,  1709,  1793,   531,   412,  1709,  1709,  1709,  1709,  1709,
    1709,  1709,    59,  2001,    54,  -534,   585,  -534,   585,  -534,
    2669,   397,  -534,  -534,  -534,   -17,   491,  -534,  2232,    80,
     602,   604,   586,   588,  -534,  2232,  2232,  2232,  2028,  2232,
     363,   547,  -534,  2174,  -534,   547,  1709,  2775,  -534,  1880,
     131,   572,  1377,  2028,  -534,   489,  -534,  1377,   489,   489,
     507,  2028,  -534,  -534,   440,   282,  -534,  -534,   233,  -534,
    -534,   408,  -534,  -534,  -534,  -534,   577,   267,  2205,  -534,
    1922,  1139,  -534,  -534,  2775,  1709,  -534,  -534,  2775,  1709,
    -534,  -534,   578,   625,  -534,  1709,  2575,  1709,  2596,  1709,
    2618,  -534,  1709,  2389,  1709,  2727,  -534,  -534,  -112,  -534,
     607,   -12,  -534,   594,  1709,  -534,  1709,    34,  -534,  -534,
     811,  2316,  1709,  1793,   531,   653,   653,   653,   653,   653,
     653,   699,   861,  1793,  1793,  -534,   478,  1202,  -534,  -534,
    -534,  -534,  -534,   241,   492,   492,   597,   597,   597,   597,
    -534,   595,  -534,  -534,  -534,  -534,  -534,  -534,    35,  -534,
    -534,  -534,  1709,   105,   105,   105,  -534,   579,  -534,  -534,
     633,   635,  -534,  2389,    53,    50,  -534,   473,   469,  -534,
    -534,   532,    -9,  -534,  -534,  -534,  2775,   596,   131,  -534,
    -534,  -534,   292,  -534,  -534,  1377,  -534,  -534,   233,  2028,
    -534,  -534,   272,   -99,   131,  -534,  2775,  2775,  -534,  -534,
    2775,  1709,  2775,  1709,  2775,  1709,  2775,  -534,   605,  -534,
     605,  -534,  -534,  -534,   608,   516,   609,  -534,  -534,  -534,
     608,  -534,  -534,   610,   610,  -534,   605,   605,   606,  2775,
    -534,  2232,    66,  1709,    17,  2232,  1709,  -105,  2751,  2220,
    1709,  -534,   569,   861,   590,  -534,  -534,  -534,  1793,  1793,
    1793,  1793,  1793,  1793,  1793,  1793,    -4,  2775,  -534,  -534,
    -534,  -534,  1139,  -534,  -534,  -534,  -534,   648,   511,  -534,
    -534,  -534,    63,   211,  -534,  -534,  -534,  -534,  2205,   615,
     194,  2174,  2028,  1709,   387,   448,     0,  1377,   561,  2775,
    2775,  2775,   665,  -534,  -534,   666,  -534,  -534,  -534,   667,
    -534,  -534,   668,  -534,  -534,  -534,  -534,  -534,  -534,  -534,
    2775,  -534,  -534,  2775,     3,   634,  -534,  -534,  1709,  2775,
    -534,  1793,   563,   509,   509,   654,   654,   654,   654,  -534,
    -534,   -48,  -534,   669,   498,    25,   685,  -534,   686,    80,
    -534,  2232,   673,   673,   673,   673,   673,   673,   673,   673,
     673,   673,   493,  -534,  -534,  -534,  2775,  1709,  2028,  -534,
     131,   645,   612,   661,     6,   664,   670,  -534,  1709,  1709,
    2775,   563,  1377,    26,   682,  -534,   697,    80,   598,  -534,
    -534,  -534,  -534,  -534,     7,  -534,   708,   709,   562,   712,
     713,   715,   716,   718,   719,   710,   194,  2775,   683,  1709,
    1709,  -534,  -534,  -534,   759,  -534,  -534,  2775,     8,  -534,
    -534,  -534,   -83,  -534,  -534,  -534,  -534,  -534,  -534,  -534,
    -534,  -534,  -534,  -534,  -534,  -534,  -534,  -534,  2028,   558,
    2775,   726,  -534,  -534,  -534,  -534,  -534,   -18,   560,  -534,
     747,   748,  -534,  2028,   768,   771,   734,  -534,   582,  2028,
     754,   738,   776,  -534,  -534
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -534,  -534,  -534,   619,  -268,  -534,  -440,  -370,  -406,   398,
     240,  -534,  -534,  -534,   246,  -534,   762,  -534,  -534,  -534,
    -534,  -101,   -92,  -534,   126,  -534,  -534,  -534,    82,   336,
     202,   147,  -534,  -534,   142,  -533,  -534,  -534,  -534,   -27,
    -113,  -534,  -534,  -534,   -85,  -306,  -534,  -534,    29,  -534,
       4,   -94,     5,     1,  -534,   113,   146,  -477,   630,   -21,
    -534,   443,  -202,  -534,  -534,  -263,    89,  -122,  -534,  -534,
    -534,  -534,  -534,   224,  -534,  -534,  -147,   307,   119,  -534,
    -180,    10,   490,  -534,  -107,  -534,  -534,  -534,  -534,  -534,
    -534,  -534,  -115,   721,  -534,  -534,  -534,   525,   -32,  -307,
    -534,  -322,  -534,   700,  -534,   502,  -534,  -534,  -534,    83,
    -534,  -534,  -534,  -534,  -534,  -534,  -534,  -534,   836,   644,
    -534,   640,  -534,  -534,  -534,    15,  -534,  -534,  -534,   616,
    -106,   373,  -534,  -534,  -534,  -534,  -534,  -534,  -534,   399,
     172,  -534,  -534,  -534,  -534,  -534,   413,  -534,  -534,  -534,
    -534,   109,     2,  -534,  -349,    -8
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -469
static const yytype_int16 yytable[] =
{
     100,   100,    62,   107,   160,    36,    61,   107,   201,   587,
      99,    99,   404,   499,   141,   204,   334,   202,    98,   101,
     297,   298,   299,   468,   203,   360,   235,   489,   521,   664,
     122,   488,   710,   185,   243,   805,   251,   760,   190,   446,
     870,   500,   802,   232,   797,   806,   247,   833,   846,   862,
     304,   662,   555,  -254,   162,  -209,   100,     1,   320,   454,
     184,   358,   328,   100,   301,    71,    99,   167,   168,   169,
     165,   321,   302,    99,   183,   328,   398,    66,     1,   839,
     229,   191,   108,   766,   268,   269,   270,    68,   271,   272,
     273,   213,   274,   275,   276,  -254,   661,  -209,   807,     1,
     863,   173,   125,   745,   583,   705,   864,   724,   865,   717,
     443,   345,   230,   301,    36,   670,    69,   444,   348,   866,
     346,   302,   381,   735,   736,   141,    70,   347,   141,   102,
     367,   140,   702,     7,   371,   380,   767,   674,   210,   103,
     382,   123,   216,   840,   384,   716,   718,   676,   677,   621,
     244,   470,   100,   128,   600,   808,   100,   322,   605,   501,
     501,    21,    99,   618,   458,    14,    99,   107,    36,   359,
     264,   141,   400,   555,   266,   170,   871,   841,   163,   100,
      21,   447,   434,   555,   555,   706,   233,  -254,   100,    99,
     306,   584,   248,    17,   490,   522,   665,   325,    99,   711,
     703,   333,   100,    21,   522,   126,   369,   809,   100,   536,
     245,   798,   343,   159,   834,   665,   798,    36,   343,  -254,
     369,  -209,   475,   161,   211,    63,   283,    25,   211,   141,
      64,   768,   164,   141,   141,   476,   100,   100,   100,   477,
      65,   165,   236,   478,   175,   240,    99,    99,    99,   688,
     176,   689,   690,   772,   375,   376,   377,  -219,  -219,  -219,
     510,   511,   505,   492,   218,   219,   509,   173,  -468,   479,
    -466,    36,   752,   753,   754,   755,   756,   757,   758,   759,
     177,    62,   142,   176,   769,   406,   184,   409,   309,   686,
     186,  -265,   608,   192,   190,   360,   195,   612,   314,  -265,
     199,   315,   435,   435,   435,   483,   206,   221,   555,   555,
     555,   555,   555,   555,   555,   555,   312,   313,   486,   213,
     694,   695,   696,   100,   493,   100,   494,   100,   208,   813,
     209,   572,    62,    99,   316,   474,   469,   482,   575,   237,
     573,   212,   143,   144,   241,   801,   368,   574,   100,   242,
     372,   140,   495,   178,   107,  -219,   739,   238,    99,   770,
     246,   746,   250,  -219,   252,  -219,   491,   844,   222,   256,
     145,   613,   614,   146,   255,   258,   223,   259,   773,   774,
     775,   555,   776,   475,   777,   542,   543,   544,   317,   141,
     141,   260,   778,   779,   780,   261,   476,   781,   224,    62,
     477,   262,   141,    61,   478,   147,   314,   179,   225,   315,
     436,   438,   439,   578,   713,   300,   180,   181,   305,   310,
     560,   148,   561,   562,   149,   141,   324,   311,   559,   326,
     479,   692,   563,   110,   111,   714,   327,    36,   150,   151,
     141,   337,   316,   437,   437,   437,   328,   141,   141,   141,
     100,   141,   112,   330,   338,   141,   351,  -340,   350,   353,
      99,   100,   113,   354,   100,   100,   152,   114,   596,   100,
     356,   474,   153,   100,    99,   609,   357,   333,   475,    99,
     370,   378,   333,   616,   115,   154,   455,   456,   457,   383,
     107,   476,   100,   396,   116,   477,   598,   678,   397,   478,
       1,   410,    99,  -114,   432,   333,   530,   532,   433,   787,
     679,   680,   681,   682,   683,   684,   685,  -467,   173,   539,
     448,   449,   117,   450,   451,   479,   427,   428,   429,   430,
     431,   454,   118,   452,   453,   460,   461,   790,   462,   465,
     472,   463,   577,   681,   682,   683,   684,   685,   484,   559,
     485,   506,   512,   513,   514,   526,   119,   309,    62,   104,
     527,   859,   406,   288,   593,   594,   595,   533,   597,   536,
     741,   557,   593,   534,   411,   412,   413,   414,   415,   416,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   426,
     427,   428,   429,   430,   431,   679,   680,   681,   682,   683,
     684,   685,   169,   498,   585,   582,   588,   100,   589,   751,
     590,   100,   591,   607,   610,   615,   619,    99,   620,   628,
     333,    99,   679,   680,   681,   682,   683,   684,   685,   715,
     629,   663,   365,   366,   666,   431,   691,   699,   697,   700,
     708,   374,   709,   712,   727,   722,   379,   737,   725,   729,
     732,   750,   762,   141,   763,   771,   788,   141,   791,   393,
     817,   818,   819,   820,   821,   822,   823,   824,   825,    36,
     793,   794,   795,   796,   799,   401,   402,   403,   405,   407,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,   685,   803,   804,   811,   812,   815,   440,   829,
     107,   826,   832,   141,   100,   835,   842,   843,   845,   100,
     830,   836,   847,   848,   785,   849,   850,   851,   856,    99,
     852,   853,   333,   854,   855,   858,   467,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,   141,   861,   504,   522,   869,   873,   508,
     530,   874,   875,   877,   742,   878,   879,   880,   882,   883,
     100,   884,   265,   671,   675,   155,   516,   738,   518,   520,
      99,   592,   525,   784,   100,   701,   734,   731,   828,   857,
     814,   303,   497,   838,    99,   789,   693,   333,   625,   540,
     541,   761,   545,   546,   547,   548,   549,   550,   551,   552,
     593,   471,   194,   564,   565,   566,   567,   568,   569,   570,
     412,   413,   414,   415,   416,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
     100,   464,   254,   487,   124,   344,   352,   617,   373,   599,
      99,   586,     0,     0,   606,   100,     0,     0,   868,     0,
       0,   100,     0,     0,     0,    99,     0,     0,     0,     0,
     532,    99,     0,   876,     0,     0,     0,     0,     0,   881,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
       0,     0,     0,   626,     0,     0,     0,   627,     0,     0,
       0,     0,     0,   630,     0,   632,     0,   634,     0,     0,
     636,     0,   659,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   668,     0,   669,     0,   267,   268,   269,   270,
     673,   271,   272,   273,     0,   274,   275,   276,     1,     0,
       0,     0,     0,   277,     2,   687,     0,     3,     0,     0,
       0,     0,     0,     0,     0,   278,   279,   385,     4,     0,
       0,     0,     5,   280,   386,     0,     0,     0,   387,     6,
     440,     0,     7,     8,     9,     0,   388,    10,     0,   281,
       0,     0,     0,    11,     0,    12,     0,     0,     0,     0,
       0,     0,     0,     0,    13,     0,     0,     0,     0,     0,
     389,     0,     0,     0,    14,     0,     0,     0,     0,   282,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   719,
       0,   720,     0,   721,     0,     0,     0,    15,     0,     0,
       0,    16,    17,     0,   390,    18,     0,    19,    20,     0,
       0,     0,    21,     0,     0,    22,    23,     0,     0,     0,
      24,   740,     0,     0,   743,     0,     0,     0,   749,     0,
       0,     0,     0,     0,     0,     0,    25,     0,     0,   283,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   391,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   786,     0,     0,     0,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,   284,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
       0,     0,   267,   268,   269,   270,   800,   271,   272,   273,
       0,   274,   275,   276,     0,     0,     0,     0,     0,   277,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   278,   279,   361,     0,     0,    72,     0,     0,   280,
       0,     0,     0,     0,     0,   827,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   281,   837,   743,     0,     0,
       0,     0,     0,     0,     0,   267,   268,   269,   270,     0,
     271,   272,   273,   331,   274,   275,   276,     0,     0,     0,
       0,     0,   277,     0,     0,   282,     0,   687,   860,     0,
       0,     0,     0,     0,   278,   279,     0,     0,     0,     0,
       0,   130,   280,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   281,     0,
       0,     0,     0,     0,     0,     0,   267,   268,   269,   270,
     466,   271,   272,   273,     0,   274,   275,   276,     1,     0,
       0,     0,     0,   277,     0,   283,     0,     0,   282,     0,
       0,     0,     0,     0,     0,   278,   279,     0,     0,     0,
       0,     0,     0,   280,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,     0,   281,
       0,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,   284,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    21,     0,   283,   282,
       0,     0,     0,     0,     0,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      72,     0,    21,     0,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,   284,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,   283,
       0,     0,     0,     0,     0,     0,     0,   331,     0,     0,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,   284,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
     267,   268,   269,   270,     0,   271,   272,   273,     0,   274,
     275,   276,     0,     0,     0,     0,     0,   277,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   278,
     279,     0,     0,   267,   268,   269,   270,   280,   271,   272,
     273,     0,   274,   275,   276,     0,     0,     0,     0,     0,
     277,     0,     0,   281,     0,     0,     0,     0,     0,     0,
       0,     0,   278,   279,     0,     0,     0,     0,     0,     0,
     280,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   282,     0,     0,   281,   515,     0,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,     0,     0,   282,     0,     0,     0,
     517,   267,   268,   269,   270,     0,   271,   272,   273,     0,
     274,   275,   276,     0,     0,     0,     0,     0,   277,     0,
       0,     0,     0,   283,     0,     0,     0,     0,     0,     0,
     278,   279,     0,     0,     0,     0,     0,     0,   280,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   281,     0,   283,     0,     0,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,   284,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,   282,     0,     0,     0,   519,     0,
       0,     0,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,   284,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,     0,     0,     0,
       0,     0,   267,   268,   269,   270,     0,   271,   272,   273,
       0,   274,   275,   276,     0,     0,     0,     0,     0,   277,
       0,     0,     0,     0,   283,     0,     0,     0,     0,     0,
       0,   278,   279,     0,     0,     0,     0,     0,     0,   280,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   281,     0,     0,     0,     0,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
     284,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,   282,   267,   268,   269,   270,
       0,   271,   272,   273,     0,   274,   275,   276,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   553,   554,   130,     0,     0,
       0,     0,     0,   280,     0,     0,     0,   131,   132,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   281,
       0,     0,     0,     0,     0,   283,     0,     0,   130,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   131,   132,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   282,
       0,     0,     0,    72,     0,     0,     0,     0,     0,     0,
       0,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,   284,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,     0,     0,   133,   134,
       0,   176,     0,     0,     0,    72,     0,   473,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   283,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   133,
     134,   135,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   331,     0,     0,     0,     0,     0,     0,   136,
     137,     0,    72,     0,     0,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,   284,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
     136,   137,   622,   341,   130,     0,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    72,     0,     0,     0,   576,     0,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    72,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,     0,
       0,   473,    72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,   481,   130,     0,     0,
       0,     0,     0,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,   104,     0,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,   130,     0,     0,   411,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   431,     0,
       0,     0,     0,     0,     0,     0,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   601,     0,     0,     0,     0,     0,
       0,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,   413,   414,   415,   416,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   426,
     427,   428,   429,   430,   431,     0,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,   748,     0,     0,     0,     0,     0,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,     0,     0,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,   637,
     638,   639,     0,     0,     0,     0,   640,     0,     0,     0,
       0,     0,     0,     0,   641,     0,     0,     0,   642,   643,
       0,   644,     0,     0,     0,     0,     0,   645,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   646,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   647,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   648,     0,   649,     0,   650,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   651,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   652,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   653,   654,   655,     0,     0,     0,     0,     0,     0,
       0,   656,   657,   411,   412,   413,   414,   415,   416,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,     0,     0,     0,     0,     0,     0,
       0,     0,   523,   411,   412,   413,   414,   415,   416,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,   411,   412,   413,   414,   415,   416,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   426,
     427,   428,   429,   430,   431,   524,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,     0,     0,     0,
       0,     0,     0,     0,     0,   631,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   633,   411,   412,   413,
     414,   415,   416,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   635,     0,
       0,     0,     0,     0,     0,     0,     0,   579,   411,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   431,     0,
       0,   535,     0,     0,   580,   411,   412,   413,   414,   415,
     416,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   430,   431,     0,     0,   660,   411,
     412,   413,   414,   415,   416,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
       0,     0,   747,   411,   412,   413,   414,   415,   416,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431
};

static const yytype_int16 yycheck[] =
{
       8,     9,     1,    11,    25,     0,     1,    15,   109,   449,
       8,     9,   280,   362,    22,   109,   196,   109,     8,     9,
     167,   168,   169,   329,   109,   227,   132,    41,    41,    41,
      15,   353,    41,    65,   140,    10,   151,    41,    70,   302,
      58,    90,    90,    24,    41,    20,    28,    41,    41,    41,
     172,   528,   422,    41,    83,    41,    64,    40,   102,    62,
       4,   100,   174,    71,   113,    90,    64,    15,    16,    17,
     175,   115,   121,    71,    64,   174,    40,   177,    40,    53,
      45,    71,   205,    20,     4,     5,     6,     4,     8,     9,
      10,   123,    12,    13,    14,    83,   208,    83,    73,    40,
     183,    89,    19,   208,   121,    55,   189,   640,   191,   208,
       5,   212,    77,   113,   109,    81,   159,    12,   212,   202,
     212,   121,    66,   656,   657,   133,   169,   212,   136,   159,
     236,    22,    79,    74,   240,   250,    73,   543,   122,   169,
     255,   169,   122,   117,   259,   622,   623,   553,   554,   498,
      30,   331,   160,    99,   461,   130,   164,   201,   465,   208,
     208,   144,   160,   485,   167,   106,   164,   175,   163,   208,
     160,   179,   266,   543,   164,   123,   194,   151,   207,   187,
     144,   303,   144,   553,   554,   135,   167,   175,   196,   187,
     175,   208,   174,   134,   208,   208,   208,   187,   196,   208,
     147,   196,   210,   144,   208,    94,   238,   182,   216,   175,
      90,   208,   210,   166,   208,   208,   208,   212,   216,   207,
     252,   207,    91,     0,   208,   154,   146,   168,   208,   237,
     159,    20,   107,   241,   242,   104,   244,   245,   246,   108,
     169,   175,   133,   112,   129,   136,   244,   245,   246,     8,
      41,    10,    11,    59,   244,   245,   246,    15,    16,    17,
     375,   376,   368,    92,   179,   180,   372,    89,    40,   138,
      42,   266,   678,   679,   680,   681,   682,   683,   684,   685,
      41,   280,     3,    41,    73,   280,     4,   282,   179,   557,
     103,   113,   472,     4,   326,   497,   103,   477,    43,   121,
     170,    46,   297,   298,   299,   337,   136,    40,   678,   679,
     680,   681,   682,   683,   684,   685,    67,    68,   350,   351,
     583,   584,   585,   331,   153,   333,   155,   335,   169,   769,
     124,   432,   331,   331,    79,   333,   331,   335,   432,    42,
     432,    90,    63,    64,    42,   751,   237,   432,   356,   208,
     241,   242,   181,    93,   362,   113,   662,    89,   356,   708,
     159,   667,   197,   121,    89,   123,   356,   807,   101,   113,
      91,   478,   479,    94,   197,   206,   109,   204,   184,   185,
     186,   751,   188,    91,   190,    28,    29,    30,   133,   397,
     398,   178,   198,   199,   200,    40,   104,   203,   131,   398,
     108,   176,   410,   398,   112,   126,    43,   147,   141,    46,
     297,   298,   299,   434,   122,    54,   156,   157,   168,   119,
       8,   142,    10,    11,   145,   433,    20,   158,   423,   208,
     138,   578,    20,    45,    46,   615,   102,   432,   159,   160,
     448,   208,    79,   297,   298,   299,   174,   455,   456,   457,
     458,   459,    64,    86,    14,   463,   208,   178,   167,    90,
     458,   469,    74,     5,   472,   473,   187,    79,   458,   477,
      40,   469,   193,   481,   472,   473,    40,   472,    91,   477,
      24,     4,   477,   481,    96,   206,   314,   315,   316,     5,
     498,   104,   500,    61,   106,   108,   133,    19,   147,   112,
      40,    42,   500,    40,    40,   500,   397,   398,    42,   122,
      32,    33,    34,    35,    36,    37,    38,    42,    89,   410,
     208,    24,   134,    24,    24,   138,    34,    35,    36,    37,
      38,    62,   144,   119,   119,   208,    54,   717,    86,    54,
     208,    40,   433,    34,    35,    36,    37,    38,   208,   544,
     167,     4,    40,   208,    41,    41,   168,   448,   557,     3,
     150,   829,   557,   165,   455,   456,   457,   171,   459,   175,
     664,    40,   463,   208,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    32,    33,    34,    35,    36,
      37,    38,    17,    47,   113,   208,     4,   615,     4,    19,
      24,   619,    24,    41,   125,   108,   208,   615,    41,    41,
     615,   619,    32,    33,    34,    35,    36,    37,    38,   619,
       5,    24,   234,   235,    40,    38,    41,     4,    59,     4,
     167,   243,   110,    47,   128,    40,   248,    41,    40,    40,
      40,    82,     4,   661,   143,    40,   208,   665,    97,   261,
     773,   774,   775,   776,   777,   778,   779,   780,   781,   664,
       5,     5,     5,     5,    40,   277,   278,   279,   280,   281,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    38,    24,   196,    10,    10,    24,   300,    54,
     708,   208,    41,   711,   712,    41,    24,    10,   110,   717,
      98,    41,     4,     4,   712,   153,     4,     4,     8,   717,
       5,     5,   717,     5,     5,    42,   328,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   771,     5,   367,   208,    41,   208,   371,
     661,    24,    24,     5,   665,     4,    42,   195,    24,    41,
     788,     5,   163,   537,   544,    23,   388,   661,   390,   391,
     788,   455,   394,   711,   802,   593,   654,   650,   788,   826,
     771,   171,   359,   799,   802,   716,   582,   802,   501,   411,
     412,   692,   414,   415,   416,   417,   418,   419,   420,   421,
     711,   331,   101,   425,   426,   427,   428,   429,   430,   431,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
     858,   326,   152,   351,    18,   211,   216,   484,   242,   460,
     858,   448,    -1,    -1,   466,   873,    -1,    -1,   858,    -1,
      -1,   879,    -1,    -1,    -1,   873,    -1,    -1,    -1,    -1,
     771,   879,    -1,   873,    -1,    -1,    -1,    -1,    -1,   879,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,    -1,    -1,   505,    -1,    -1,    -1,   509,    -1,    -1,
      -1,    -1,    -1,   515,    -1,   517,    -1,   519,    -1,    -1,
     522,    -1,   524,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   534,    -1,   536,    -1,     3,     4,     5,     6,
     542,     8,     9,    10,    -1,    12,    13,    14,    40,    -1,
      -1,    -1,    -1,    20,    46,   557,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    60,    -1,
      -1,    -1,    64,    40,    41,    -1,    -1,    -1,    45,    71,
     582,    -1,    74,    75,    76,    -1,    53,    79,    -1,    56,
      -1,    -1,    -1,    85,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   631,
      -1,   633,    -1,   635,    -1,    -1,    -1,   129,    -1,    -1,
      -1,   133,   134,    -1,   111,   137,    -1,   139,   140,    -1,
      -1,    -1,   144,    -1,    -1,   147,   148,    -1,    -1,    -1,
     152,   663,    -1,    -1,   666,    -1,    -1,    -1,   670,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,   146,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   713,    -1,    -1,    -1,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
      -1,    -1,     3,     4,     5,     6,   748,     8,     9,    10,
      -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    -1,    -1,     3,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,   787,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,   798,   799,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    10,    40,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    86,    -1,   829,   830,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,     3,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    13,    14,    40,    -1,
      -1,    -1,    -1,    20,    -1,   146,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,    -1,    56,
      -1,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   144,    -1,   146,    86,
      -1,    -1,    -1,    -1,    -1,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
       3,    -1,   144,    -1,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   146,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
       3,     4,     5,     6,    -1,     8,     9,    10,    -1,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    -1,     3,     4,     5,     6,    40,     8,     9,
      10,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    56,    90,    -1,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,    -1,    -1,    86,    -1,    -1,    -1,
      90,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    -1,   146,    -1,    -1,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,    86,    -1,    -1,    -1,    90,    -1,
      -1,    -1,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,     8,     9,    10,
      -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,    86,     3,     4,     5,     6,
      -1,     8,     9,    10,    -1,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,     3,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    13,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,   146,    -1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,    -1,    -1,    94,    95,
      -1,    41,    -1,    -1,    -1,     3,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   146,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,
      95,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,   145,
     146,    -1,     3,    -1,    -1,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     145,   146,    80,    34,     3,    -1,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,     3,    -1,    -1,    -1,    34,    -1,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,    -1,
      -1,    47,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,    47,     3,    -1,    -1,
      -1,    -1,    -1,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,     3,    -1,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,     3,    -1,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   130,    -1,    -1,    -1,    -1,    -1,
      -1,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    -1,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   161,    -1,    -1,    -1,    -1,    -1,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,    -1,    -1,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,    50,
      51,    52,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    69,    70,
      -1,    72,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    -1,   118,    -1,   120,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   149,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   162,   163,   164,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   172,   173,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    90,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    41,    -1,    -1,    75,    18,    19,    20,    21,    22,
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
       0,    40,    46,    49,    60,    64,    71,    74,    75,    76,
      79,    85,    87,    96,   106,   129,   133,   134,   137,   139,
     140,   144,   147,   148,   152,   168,   210,   211,   212,   230,
     231,   234,   250,   253,   255,   260,   261,   262,   263,   264,
     265,   294,   297,   304,   309,   311,   313,   316,   320,   321,
     322,   323,   326,   331,   333,   336,   341,   344,   345,   346,
     352,   261,   262,   154,   159,   169,   177,   318,   318,   159,
     169,    90,     3,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   290,   361,
     364,   290,   159,   169,     3,   334,   363,   364,   205,   296,
      45,    46,    64,    74,    79,    96,   106,   134,   144,   168,
     327,   328,   334,   169,   327,   318,    94,   324,    99,   268,
       3,    13,    14,    94,    95,   127,   145,   146,   337,   338,
     360,   364,     3,    63,    64,    91,    94,   126,   142,   145,
     159,   160,   187,   193,   206,   225,   300,   303,   362,   166,
     268,     0,    83,   207,   107,   175,   254,    15,    16,    17,
     123,   279,   280,    89,   276,   129,    41,    41,    93,   147,
     156,   157,   353,   290,     4,   307,   103,   235,   305,   306,
     307,   290,     4,   302,   302,   103,   251,   307,   310,   170,
     342,   230,   231,   253,   260,   295,   136,   329,   169,   124,
     122,   208,    90,   307,   314,   315,   122,   332,   179,   180,
     325,    40,   101,   109,   131,   141,   269,   270,   271,    45,
      77,   285,    24,   167,   339,   339,   360,    42,    89,   312,
     360,    42,   208,   339,    30,    90,   159,    28,   174,   301,
     197,   301,    89,   299,   312,   197,   113,   298,   206,   204,
     178,    40,   176,   319,   290,   212,   290,     3,     4,     5,
       6,     8,     9,    10,    12,    13,    14,    20,    32,    33,
      40,    56,    86,   146,   192,   214,   215,   216,   218,   220,
     225,   226,   227,   261,   360,   361,   364,   285,   285,   285,
      54,   113,   121,   267,   276,   168,   334,   354,   355,   360,
     119,   158,    67,    68,    43,    46,    79,   133,   347,   348,
     102,   115,   201,   317,    20,   290,   208,   102,   174,   266,
      86,    40,   252,   261,   289,   290,   291,   208,    14,   340,
     343,    34,   330,   361,   328,   230,   231,   253,   260,   335,
     167,   208,   330,    90,     5,   272,    40,    40,   100,   208,
     271,    34,   218,   286,   287,   218,   218,   339,   360,   307,
      24,   339,   360,   338,   218,   290,   290,   290,     4,   218,
     301,    66,   301,     5,   301,    34,    41,    45,    53,    77,
     111,   165,   213,   218,   229,   277,    61,   147,    40,   256,
     260,   218,   218,   218,   213,   218,   261,   218,   221,   261,
      42,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    40,    42,   144,   261,   264,   265,   264,   264,
     218,   281,   282,     5,    12,   274,   274,   276,   208,    24,
      24,    24,   119,   119,    62,   349,   349,   349,   167,   349,
     208,    54,    86,    40,   306,    54,     7,   218,   254,   261,
     289,   291,   208,    47,   361,    91,   104,   108,   112,   138,
     292,    47,   361,   307,   208,   167,   307,   314,   310,    41,
     208,   290,    92,   153,   155,   181,   273,   270,    47,   363,
      90,   208,   267,   275,   218,   339,     4,   308,   218,   339,
     301,   301,    40,   208,    41,    90,   218,    90,   218,    90,
     218,    41,   208,    47,    90,   218,    41,   150,   232,   233,
     360,   257,   360,   171,   208,    41,   175,   222,   223,   360,
     218,   218,    28,    29,    30,   218,   218,   218,   218,   218,
     218,   218,   218,    32,    33,   216,   217,    40,   219,   261,
       8,    10,    11,    20,   218,   218,   218,   218,   218,   218,
     218,   228,   230,   231,   253,   260,    34,   360,   268,    48,
      75,   283,   208,   121,   208,   113,   355,   215,     4,     4,
      24,    24,   238,   360,   360,   360,   290,   360,   133,   348,
     308,   130,   236,   237,   238,   308,   218,    41,   289,   361,
     125,   293,   289,   293,   293,   108,   361,   340,   310,   208,
      41,   363,    80,   288,   289,   286,   218,   218,    41,     5,
     218,    90,   218,    90,   218,    90,   218,    50,    51,    52,
      57,    65,    69,    70,    72,    78,    88,   105,   116,   118,
     120,   132,   149,   162,   163,   164,   172,   173,   239,   218,
      41,   208,   266,    24,    41,   208,    40,   258,   218,   218,
      81,   223,   224,   218,   217,   219,   217,   217,    19,    32,
      33,    34,    35,    36,    37,    38,   213,   218,     8,    10,
      11,    41,   285,   282,   274,   274,   274,    59,   356,     4,
       4,   239,    79,   147,   351,    55,   135,   350,   167,   110,
      41,   208,    47,   122,   289,   290,   266,   208,   266,   218,
     218,   218,    40,   244,   244,    40,   240,   128,   242,    40,
     241,   240,    40,   243,   243,   244,   244,    41,   233,   254,
     218,   260,   360,   218,   259,   208,   254,    41,   161,   218,
      82,    19,   217,   217,   217,   217,   217,   217,   217,   217,
      41,   287,     4,   143,   357,   245,    20,    73,    20,    73,
     363,    40,    59,   184,   185,   186,   188,   190,   198,   199,
     200,   203,   247,   248,   237,   361,   218,   122,   208,   275,
     289,    97,   278,     5,     5,     5,     5,    41,   208,    40,
     218,   217,    90,    24,   196,    10,    20,    73,   130,   182,
     246,    10,    10,   215,   257,    24,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   208,   218,   290,    54,
      98,   284,    41,    41,   208,    41,    41,   218,   259,    53,
     117,   151,    24,    10,   215,   110,    41,     4,     4,   153,
       4,     4,     5,     5,     5,     5,     8,   248,    42,   213,
     218,     5,    41,   183,   189,   191,   202,   358,   290,    41,
      58,   194,   359,   208,    24,    24,   290,     5,     4,    42,
     195,   290,    24,    41,     5
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
      case 210: /* "sql_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 211: /* "stmt_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 212: /* "stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 213: /* "expr_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 214: /* "column_ref" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 215: /* "expr_const" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 216: /* "simple_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 217: /* "arith_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 218: /* "expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 219: /* "in_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 220: /* "case_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 221: /* "case_arg" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 222: /* "when_clause_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 223: /* "when_clause" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 224: /* "case_default" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 225: /* "func_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 226: /* "when_func" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 227: /* "when_func_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 228: /* "when_func_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 229: /* "distinct_or_all" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 230: /* "delete_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 231: /* "update_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 232: /* "update_asgn_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 233: /* "update_asgn_factor" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 234: /* "create_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 235: /* "opt_if_not_exists" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 236: /* "table_element_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 237: /* "table_element" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 238: /* "column_definition" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 239: /* "data_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 240: /* "opt_decimal" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 241: /* "opt_float" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 242: /* "opt_precision" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 243: /* "opt_time_precision" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 244: /* "opt_char_length" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 245: /* "opt_column_attribute_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 246: /* "column_attribute" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 247: /* "opt_table_option_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 248: /* "table_option" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 249: /* "opt_equal_mark" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 250: /* "drop_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 251: /* "opt_if_exists" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 252: /* "table_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 253: /* "insert_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 254: /* "opt_when" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 255: /* "replace_or_insert" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 256: /* "opt_insert_columns" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 257: /* "column_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 258: /* "insert_vals_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 259: /* "insert_vals" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 260: /* "select_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 261: /* "select_with_parens" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 262: /* "select_no_parens" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 263: /* "no_table_select" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 264: /* "select_clause" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 265: /* "simple_select" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 266: /* "opt_where" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 267: /* "select_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 268: /* "opt_hint" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 269: /* "opt_hint_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 270: /* "hint_options" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 271: /* "hint_option" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 272: /* "opt_comma_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 274: /* "limit_expr" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 275: /* "opt_select_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 276: /* "opt_for_update" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 277: /* "parameterized_trim" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 278: /* "opt_groupby" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 279: /* "opt_order_by" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 280: /* "order_by" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 281: /* "sort_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 282: /* "sort_key" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 283: /* "opt_asc_desc" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 284: /* "opt_having" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 285: /* "opt_distinct" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 286: /* "projection" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 287: /* "select_expr_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 288: /* "from_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 289: /* "table_factor" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 290: /* "relation_factor" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 291: /* "joined_table" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 292: /* "join_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 293: /* "join_outer" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 294: /* "explain_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 295: /* "explainable_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 296: /* "opt_verbose" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 297: /* "show_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 298: /* "opt_limit" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 299: /* "opt_for_grant_user" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 301: /* "opt_show_condition" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 302: /* "opt_like_condition" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 304: /* "create_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 305: /* "user_specification_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 306: /* "user_specification" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 307: /* "user" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 308: /* "password" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 309: /* "drop_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 310: /* "user_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 311: /* "set_password_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 312: /* "opt_for_user" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 313: /* "rename_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 314: /* "rename_info" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 315: /* "rename_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 316: /* "lock_user_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 317: /* "lock_spec" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 318: /* "opt_work" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 320: /* "begin_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 321: /* "commit_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 322: /* "rollback_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 323: /* "kill_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 324: /* "opt_is_global" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 325: /* "opt_flag" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 326: /* "grant_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 327: /* "priv_type_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 328: /* "priv_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 329: /* "opt_privilege" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 330: /* "priv_level" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 331: /* "revoke_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 332: /* "opt_on_priv_level" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 333: /* "prepare_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 334: /* "stmt_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 335: /* "preparable_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 336: /* "variable_set_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 337: /* "var_and_val_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 338: /* "var_and_val" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 339: /* "to_or_eq" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 340: /* "argument" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 341: /* "execute_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 342: /* "opt_using_args" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 343: /* "argument_list" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 344: /* "deallocate_prepare_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 345: /* "deallocate_or_drop" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 346: /* "alter_table_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 347: /* "alter_column_actions" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 348: /* "alter_column_action" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 349: /* "opt_column" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 351: /* "alter_column_behavior" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 352: /* "alter_system_stmt" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 353: /* "opt_force" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 354: /* "alter_system_actions" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 355: /* "alter_system_action" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 356: /* "opt_comment" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 358: /* "server_type" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 359: /* "opt_cluster_or_address" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 360: /* "column_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 361: /* "relation_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 362: /* "function_name" */

	{destroy_tree((yyvaluep->node));};

	break;
      case 363: /* "column_label" */

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

    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
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

    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 29:

    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 30:

    { (yyval.node) = NULL; ;}
    break;

  case 31:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 32:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 33:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 34:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NAME_FIELD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(3) - (3)]).first_column, (yylsp[(3) - (3)]).last_column);
    ;}
    break;

  case 35:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_STAR);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NAME_FIELD, 2, (yyvsp[(1) - (3)].node), node);
    ;}
    break;

  case 36:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
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

    { (yyvsp[(3) - (3)].node)->type_ = T_SYSTEM_VARIABLE; (yyval.node) = (yyvsp[(3) - (3)].node); ;}
    break;

  case 46:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 47:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 48:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 49:

    {
      ParseNode *node = NULL;
      malloc_non_terminal_node(node, result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node));
      merge_nodes((yyval.node), result->malloc_pool_, T_EXPR_LIST, node);
    ;}
    break;

  case 50:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
      /*
      yyerror(&@1, result, "CASE expression is not supported yet!");
      YYABORT;
      */
    ;}
    break;

  case 51:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
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
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_EXISTS, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 55:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 56:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_POS, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 57:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NEG, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 58:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_ADD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 59:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MINUS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 60:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MUL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 61:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_DIV, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 62:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_REM, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 63:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_POW, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 64:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MOD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 65:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 66:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_POS, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 67:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NEG, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 68:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_ADD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 69:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MINUS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 70:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MUL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 71:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_DIV, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 72:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_REM, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 73:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_POW, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 74:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_MOD, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 75:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 76:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LT, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 77:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_EQ, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 78:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_GE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 79:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_GT, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 80:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 81:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 82:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NOT_LIKE, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 83:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_AND, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 84:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_OR, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 85:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NOT, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 86:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 87:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS_NOT, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 88:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 89:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS_NOT, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 90:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 91:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IS_NOT, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 92:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_BTW, 3, (yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 93:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NOT_BTW, 3, (yyvsp[(1) - (6)].node), (yyvsp[(4) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 94:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_IN, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 95:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_NOT_IN, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 96:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_CNN, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 97:

    {
    	(yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 98:

    { merge_nodes((yyval.node), result->malloc_pool_, T_EXPR_LIST, (yyvsp[(2) - (3)].node)); ;}
    break;

  case 99:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_WHEN_LIST, (yyvsp[(3) - (5)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CASE, 3, (yyvsp[(2) - (5)].node), (yyval.node), (yyvsp[(4) - (5)].node));
    ;}
    break;

  case 100:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 101:

    { (yyval.node) = NULL; ;}
    break;

  case 102:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 103:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 104:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_WHEN, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 105:

    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 106:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_NULL); ;}
    break;

  case 107:

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

  case 108:

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

  case 109:

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

  case 110:

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

  case 111:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_FUN_SYS, 2, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));
    ;}
    break;

  case 112:

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

  case 113:

    {
      (yyval.node) = (yyvsp[(1) - (4)].node);
      (yyval.node)->children_[0] = (yyvsp[(3) - (4)].node);
    ;}
    break;

  case 114:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ROW_COUNT, 1, NULL);
    ;}
    break;

  case 119:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_ALL);
    ;}
    break;

  case 120:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_DISTINCT);
    ;}
    break;

  case 121:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_DELETE, 3, (yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 122:

    {
      ParseNode* assign_list = NULL;
      merge_nodes(assign_list, result->malloc_pool_, T_ASSIGN_LIST, (yyvsp[(5) - (7)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_UPDATE, 5, (yyvsp[(3) - (7)].node), assign_list, (yyvsp[(6) - (7)].node), (yyvsp[(7) - (7)].node), (yyvsp[(2) - (7)].node));
    ;}
    break;

  case 123:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 124:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 125:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ASSIGN_ITEM, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 126:

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

  case 127:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_IF_NOT_EXISTS); ;}
    break;

  case 128:

    { (yyval.node) = NULL; ;}
    break;

  case 129:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 130:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 131:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 132:

    {
      ParseNode* col_list= NULL;
      merge_nodes(col_list, result->malloc_pool_, T_COLUMN_LIST, (yyvsp[(4) - (5)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PRIMARY_KEY, 1, col_list);
    ;}
    break;

  case 133:

    {
      ParseNode *attributes = NULL;
      merge_nodes(attributes, result->malloc_pool_, T_COLUMN_ATTRIBUTES, (yyvsp[(3) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_DEFINITION, 3, (yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node), attributes);
    ;}
    break;

  case 134:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER ); ;}
    break;

  case 135:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER); ;}
    break;

  case 136:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER); ;}
    break;

  case 137:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER); ;}
    break;

  case 138:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_INTEGER); ;}
    break;

  case 139:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DECIMAL);
      else
        merge_nodes((yyval.node), result->malloc_pool_, T_TYPE_DECIMAL, (yyvsp[(2) - (2)].node));
      yyerror(&(yylsp[(1) - (2)]), result, "DECIMAL type is not supported");
      YYABORT;
    ;}
    break;

  case 140:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DECIMAL);
      else
        merge_nodes((yyval.node), result->malloc_pool_, T_TYPE_DECIMAL, (yyvsp[(2) - (2)].node));
      yyerror(&(yylsp[(1) - (2)]), result, "NUMERIC type is not supported");
      YYABORT;
    ;}
    break;

  case 141:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_BOOLEAN ); ;}
    break;

  case 142:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_FLOAT, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 143:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DOUBLE); ;}
    break;

  case 144:

    {
      (void)((yyvsp[(2) - (2)].node)) ; /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DOUBLE);
    ;}
    break;

  case 145:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIMESTAMP);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIMESTAMP, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 146:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIMESTAMP); ;}
    break;

  case 147:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CHARACTER);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CHARACTER, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 148:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CHARACTER);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CHARACTER, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 149:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_VARCHAR);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_VARCHAR, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 150:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_VARCHAR);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_VARCHAR, 1, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 151:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_CREATETIME); ;}
    break;

  case 152:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_MODIFYTIME); ;}
    break;

  case 153:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_DATE);
      yyerror(&(yylsp[(1) - (1)]), result, "DATE type is not supported");
      YYABORT;
    ;}
    break;

  case 154:

    {
      if ((yyvsp[(2) - (2)].node) == NULL)
        malloc_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIME);
      else
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TYPE_TIME, 1, (yyvsp[(2) - (2)].node));
      yyerror(&(yylsp[(1) - (2)]), result, "TIME type is not supported");
      YYABORT;
    ;}
    break;

  case 155:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node)); ;}
    break;

  case 156:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 157:

    { (yyval.node) = NULL; ;}
    break;

  case 158:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 159:

    { (yyval.node) = NULL; ;}
    break;

  case 160:

    { (yyval.node) = NULL; ;}
    break;

  case 161:

    { (yyval.node) = NULL; ;}
    break;

  case 162:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 163:

    { (yyval.node) = NULL; ;}
    break;

  case 164:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 165:

    { (yyval.node) = NULL; ;}
    break;

  case 166:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 167:

    { (yyval.node) = NULL; ;}
    break;

  case 168:

    {
      (void)((yyvsp[(2) - (2)].node)) ; /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NOT_NULL);
    ;}
    break;

  case 169:

    {
      (void)((yyvsp[(1) - (1)].node)) ; /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NULL);
    ;}
    break;

  case 170:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 171:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_AUTO_INCREMENT); ;}
    break;

  case 172:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_PRIMARY_KEY); ;}
    break;

  case 173:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 174:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 175:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 176:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_INFO, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 177:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPIRE_INFO, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 178:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLET_MAX_SIZE, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 179:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLET_BLOCK_SIZE, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 180:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLET_ID, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 181:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_REPLICA_NUM, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 182:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COMPRESS_METHOD, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 183:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_USE_BLOOM_FILTER, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 184:

    {
      (void)((yyvsp[(2) - (3)].node)) ; /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSISTENT_MODE);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 185:

    {
      (void)((yyvsp[(2) - (3)].node)); /*  make bison mute*/
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COMMENT, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 186:

    { (yyval.node) = NULL; ;}
    break;

  case 187:

    { (yyval.node) = NULL; ;}
    break;

  case 188:

    {
      ParseNode *tables = NULL;
      merge_nodes(tables, result->malloc_pool_, T_TABLE_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_DROP_TABLE, 2, (yyvsp[(3) - (4)].node), tables);
    ;}
    break;

  case 189:

    { (yyval.node) = NULL; ;}
    break;

  case 190:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_IF_EXISTS); ;}
    break;

  case 191:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 192:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 193:

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

  case 194:

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

  case 195:

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

  case 196:

    { (yyval.node) = NULL; ;}
    break;

  case 197:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 198:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 199:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 200:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_COLUMN_LIST, (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 201:

    { (yyval.node) = NULL; ;}
    break;

  case 202:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 203:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 204:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_VALUE_VECTOR, (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 205:

    {
    merge_nodes((yyvsp[(4) - (5)].node), result->malloc_pool_, T_VALUE_VECTOR, (yyvsp[(4) - (5)].node));
    malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (5)].node), (yyvsp[(4) - (5)].node));
  ;}
    break;

  case 206:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 207:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 208:

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

  case 209:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 210:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 211:

    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 212:

    {
      (yyval.node)= (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 213:

    {
      (yyval.node) = (yyvsp[(1) - (2)].node);
      (yyval.node)->children_[12] = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 214:

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

  case 215:

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

  case 216:

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

  case 217:

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

  case 218:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 219:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 220:

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

  case 221:

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

  case 222:

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

  case 223:

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

  case 224:

    {(yyval.node) = NULL;;}
    break;

  case 225:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 226:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_WHERE_CLAUSE, 2, (yyvsp[(3) - (3)].node), (yyvsp[(2) - (3)].node));
    ;}
    break;

  case 227:

    {
      if ((yyvsp[(2) - (4)].node)->type_ == T_QUESTIONMARK && (yyvsp[(4) - (4)].node)->type_ == T_QUESTIONMARK)
      {
        (yyvsp[(4) - (4)].node)->value_++;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 228:

    {
      if ((yyvsp[(2) - (4)].node)->type_ == T_QUESTIONMARK && (yyvsp[(4) - (4)].node)->type_ == T_QUESTIONMARK)
      {
        (yyvsp[(4) - (4)].node)->value_++;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, (yyvsp[(4) - (4)].node), (yyvsp[(2) - (4)].node));
    ;}
    break;

  case 229:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, (yyvsp[(2) - (2)].node), NULL);
    ;}
    break;

  case 230:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, NULL, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 231:

    {
      if ((yyvsp[(2) - (4)].node)->type_ == T_QUESTIONMARK && (yyvsp[(4) - (4)].node)->type_ == T_QUESTIONMARK)
      {
        (yyvsp[(4) - (4)].node)->value_++;
      }
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LIMIT_CLAUSE, 2, (yyvsp[(4) - (4)].node), (yyvsp[(2) - (4)].node));
    ;}
    break;

  case 232:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 233:

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

  case 234:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 235:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 236:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 237:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 238:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 239:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_READ_STATIC);
    ;}
    break;

  case 240:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_HOTSPOT);
    ;}
    break;

  case 241:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SEMI_JOIN, 6, (yyvsp[(3) - (14)].node), (yyvsp[(5) - (14)].node), (yyvsp[(7) - (14)].node), (yyvsp[(9) - (14)].node), (yyvsp[(11) - (14)].node), (yyvsp[(13) - (14)].node));
    ;}
    break;

  case 242:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_READ_CONSISTENCY);
      (yyval.node)->value_ = (yyvsp[(3) - (4)].ival);
    ;}
    break;

  case 243:

    {
      (yyval.node) = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 244:

    {
      (yyval.node) = (yyvsp[(1) - (2)].node);
    ;}
    break;

  case 245:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 246:

    {
    (yyval.ival) = 3;
  ;}
    break;

  case 247:

    {
    (yyval.ival) = 4;
  ;}
    break;

  case 248:

    {
    (yyval.ival) = 1;
  ;}
    break;

  case 249:

    {
    (yyval.ival) = 2;
  ;}
    break;

  case 250:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 251:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 252:

    { (yyval.node) = NULL; ;}
    break;

  case 253:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 254:

    { (yyval.node) = NULL; ;}
    break;

  case 255:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 256:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 0;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 257:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 0;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 258:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 1;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 259:

    {
      ParseNode *default_type = NULL;
      malloc_terminal_node(default_type, result->malloc_pool_, T_INT);
      default_type->value_ = 2;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPR_LIST, 3, default_type, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 260:

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

  case 261:

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

  case 262:

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

  case 263:

    { (yyval.node) = NULL; ;}
    break;

  case 264:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_EXPR_LIST, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 265:

    { (yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 266:

    { (yyval.node) = NULL; ;}
    break;

  case 267:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_SORT_LIST, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 268:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 269:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 270:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SORT_KEY, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 271:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_ASC); ;}
    break;

  case 272:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_ASC); ;}
    break;

  case 273:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SORT_DESC); ;}
    break;

  case 274:

    { (yyval.node) = 0; ;}
    break;

  case 275:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 276:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 277:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_ALL);
    ;}
    break;

  case 278:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_DISTINCT);
    ;}
    break;

  case 279:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, (yyvsp[(1) - (1)].node));
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (1)]).first_column, (yylsp[(1) - (1)]).last_column);
    ;}
    break;

  case 280:

    {
      ParseNode* alias_node = NULL;
      malloc_non_terminal_node(alias_node, result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, alias_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (2)]).first_column, (yylsp[(1) - (2)]).last_column);
      dup_expr_string(alias_node->str_value_, result, (yylsp[(2) - (2)]).first_column, (yylsp[(2) - (2)]).last_column);
    ;}
    break;

  case 281:

    {
      ParseNode* alias_node = NULL;
      malloc_non_terminal_node(alias_node, result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, alias_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (3)]).first_column, (yylsp[(1) - (3)]).last_column);
      dup_expr_string(alias_node->str_value_, result, (yylsp[(3) - (3)]).first_column, (yylsp[(3) - (3)]).last_column);
    ;}
    break;

  case 282:

    {
      ParseNode* star_node = NULL;
      malloc_terminal_node(star_node, result->malloc_pool_, T_STAR);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PROJECT_STRING, 1, star_node);
      dup_expr_string((yyval.node)->str_value_, result, (yylsp[(1) - (1)]).first_column, (yylsp[(1) - (1)]).last_column);
    ;}
    break;

  case 283:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 284:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 285:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 286:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 287:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 288:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 289:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 290:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 291:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 292:

    {
    	(yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 293:

    {
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALIAS, 2, (yyvsp[(2) - (5)].node), (yyvsp[(5) - (5)].node));
    	yyerror(&(yylsp[(1) - (5)]), result, "qualied joined table can not be aliased!");
      YYABORT;
    ;}
    break;

  case 294:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 295:

    {
    	(yyval.node) = (yyvsp[(2) - (3)].node);
    ;}
    break;

  case 296:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOINED_TABLE, 4, (yyvsp[(2) - (6)].node), (yyvsp[(1) - (6)].node), (yyvsp[(4) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 297:

    {
      ParseNode* node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_JOIN_INNER);
    	malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_JOINED_TABLE, 4, node, (yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 298:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_FULL);
    ;}
    break;

  case 299:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_LEFT);
    ;}
    break;

  case 300:

    {
      /* make bison mute */
      (void)((yyvsp[(2) - (2)].node));
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_RIGHT);
    ;}
    break;

  case 301:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_JOIN_INNER);
    ;}
    break;

  case 302:

    { (yyval.node) = NULL; ;}
    break;

  case 303:

    { (yyval.node) = NULL; ;}
    break;

  case 304:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXPLAIN, 1, (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = ((yyvsp[(2) - (3)].node) ? 1 : 0); /* positive: verbose */
    ;}
    break;

  case 305:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 306:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 307:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 308:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 309:

    { (yyval.node) = (ParseNode*)1; ;}
    break;

  case 310:

    { (yyval.node) = NULL; ;}
    break;

  case 311:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_TABLES, 1, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 312:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 313:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 314:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_TABLE_STATUS, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 315:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_SERVER_STATUS, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 316:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_VARIABLES, 1, (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = (yyvsp[(2) - (4)].ival);
    ;}
    break;

  case 317:

    { malloc_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_SCHEMA); ;}
    break;

  case 318:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_CREATE_TABLE, 1, (yyvsp[(4) - (4)].node)); ;}
    break;

  case 319:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 320:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_COLUMNS, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 321:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_WARNINGS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 322:

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

  case 323:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_GRANTS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 324:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_PARAMETERS, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 325:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_PROCESSLIST);
      (yyval.node)->value_ = (yyvsp[(2) - (3)].ival);
    ;}
    break;

  case 326:

    {
      if ((yyvsp[(2) - (4)].node)->value_ < 0 || (yyvsp[(4) - (4)].node)->value_ < 0)
      {
        yyerror(&(yylsp[(1) - (4)]), result, "OFFSET/COUNT must not be less than 0!");
        YYABORT;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_LIMIT, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 327:

    {
      if ((yyvsp[(2) - (2)].node)->value_ < 0)
      {
        yyerror(&(yylsp[(1) - (2)]), result, "COUNT must not be less than 0!");
        YYABORT;
      }
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SHOW_LIMIT, 2, NULL, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 328:

    { (yyval.node) = NULL; ;}
    break;

  case 329:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 330:

    { (yyval.node) = NULL; ;}
    break;

  case 331:

    { (yyval.node) = NULL; ;}
    break;

  case 332:

    { (yyval.ival) = 1; ;}
    break;

  case 333:

    { (yyval.ival) = 0; ;}
    break;

  case 334:

    { (yyval.ival) = 0; ;}
    break;

  case 335:

    { (yyval.node) = NULL; ;}
    break;

  case 336:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 337:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_WHERE_CLAUSE, 1, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 338:

    { (yyval.node) = NULL; ;}
    break;

  case 339:

    { malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_OP_LIKE, 1, (yyvsp[(1) - (1)].node)); ;}
    break;

  case 340:

    { (yyval.ival) = 0; ;}
    break;

  case 341:

    { (yyval.ival) = 1; ;}
    break;

  case 342:

    {
        merge_nodes((yyval.node), result->malloc_pool_, T_CREATE_USER, (yyvsp[(3) - (3)].node));
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

    {
        malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CREATE_USER_SPEC, 2, (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 346:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 347:

    {
        (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 348:

    {
        merge_nodes((yyval.node), result->malloc_pool_, T_DROP_USER, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 349:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 350:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 351:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SET_PASSWORD, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 352:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SET_PASSWORD, 2, (yyvsp[(3) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 353:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 354:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 355:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_RENAME_USER, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 356:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_RENAME_INFO, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 357:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 358:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 359:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LOCK_USER, 2, (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 360:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 361:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 362:

    {
      (void)(yyval.node);
    ;}
    break;

  case 363:

    {
      (void)(yyval.node);
    ;}
    break;

  case 364:

    {
      (yyval.ival) = 1;
    ;}
    break;

  case 365:

    {
      (yyval.ival) = 0;
    ;}
    break;

  case 366:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BEGIN);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 367:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BEGIN);
      (yyval.node)->value_ = (yyvsp[(3) - (3)].ival);
    ;}
    break;

  case 368:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_COMMIT);
    ;}
    break;

  case 369:

    {
      (void)(yyvsp[(2) - (2)].node);
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_ROLLBACK);
    ;}
    break;

  case 370:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_KILL, 3, (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 371:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 372:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 373:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 374:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 375:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_BOOL);
      (yyval.node)->value_ = 0;
    ;}
    break;

  case 376:

    {
      ParseNode *privileges_node = NULL;
      ParseNode *users_node = NULL;
      merge_nodes(privileges_node, result->malloc_pool_, T_PRIVILEGES, (yyvsp[(2) - (6)].node));
      merge_nodes(users_node, result->malloc_pool_, T_USERS, (yyvsp[(6) - (6)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_GRANT,
                                 3, privileges_node, (yyvsp[(4) - (6)].node), users_node);
    ;}
    break;

  case 377:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 378:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 379:

    {
      (void)(yyvsp[(2) - (2)].node);                 /* useless */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_ALL;
    ;}
    break;

  case 380:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_ALTER;
    ;}
    break;

  case 381:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_CREATE;
    ;}
    break;

  case 382:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_CREATE_USER;
    ;}
    break;

  case 383:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_DELETE;
    ;}
    break;

  case 384:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_DROP;
    ;}
    break;

  case 385:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_GRANT_OPTION;
    ;}
    break;

  case 386:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_INSERT;
    ;}
    break;

  case 387:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_UPDATE;
    ;}
    break;

  case 388:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_SELECT;
    ;}
    break;

  case 389:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_TYPE);
      (yyval.node)->value_ = OB_PRIV_REPLACE;
    ;}
    break;

  case 390:

    {
      (void)(yyval.node);
    ;}
    break;

  case 391:

    {
      (void)(yyval.node);
    ;}
    break;

  case 392:

    {
      /* means global priv_level */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_LEVEL);
    ;}
    break;

  case 393:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PRIV_LEVEL, 1, (yyvsp[(1) - (1)].node));
    ;}
    break;

  case 394:

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

  case 395:

    {
      (yyval.node) = (yyvsp[(2) - (2)].node);
    ;}
    break;

  case 396:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 397:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_PREPARE, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 398:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 399:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 400:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 401:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 402:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 403:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_VARIABLE_SET, (yyvsp[(2) - (2)].node));;
      (yyval.node)->value_ = 2;
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
      (void)((yyvsp[(2) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 407:

    {
      (void)((yyvsp[(2) - (3)].node));
      (yyvsp[(1) - (3)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 408:

    {
      (void)((yyvsp[(3) - (4)].node));
      (yyvsp[(2) - (4)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 409:

    {
      (void)((yyvsp[(3) - (4)].node));
      (yyvsp[(2) - (4)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 410:

    {
      (void)((yyvsp[(4) - (5)].node));
      (yyvsp[(3) - (5)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 411:

    {
      (void)((yyvsp[(4) - (5)].node));
      (yyvsp[(3) - (5)].node)->type_ = T_SYSTEM_VARIABLE;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 412:

    {
      (void)((yyvsp[(2) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_VAR_VAL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 413:

    { (yyval.node) = NULL; ;}
    break;

  case 414:

    { (yyval.node) = NULL; ;}
    break;

  case 415:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 416:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_EXECUTE, 2, (yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 417:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_ARGUMENT_LIST, (yyvsp[(2) - (2)].node));
    ;}
    break;

  case 418:

    {
      (yyval.node) = NULL;
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
      (void)((yyvsp[(1) - (3)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_DEALLOCATE, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 422:

    { (yyval.node) = NULL; ;}
    break;

  case 423:

    { (yyval.node) = NULL; ;}
    break;

  case 424:

    {
      ParseNode *alter_actions = NULL;
      merge_nodes(alter_actions, result->malloc_pool_, T_ALTER_ACTION_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_TABLE, 2, (yyvsp[(3) - (4)].node), alter_actions);
    ;}
    break;

  case 425:

    {
      yyerror(&(yylsp[(1) - (6)]), result, "Table rename is not supported now");
      YYABORT;
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_TABLE_RENAME, 1, (yyvsp[(6) - (6)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_ACTION_LIST, 1, (yyval.node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_TABLE, 2, (yyvsp[(3) - (6)].node), (yyval.node));
    ;}
    break;

  case 426:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 427:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 428:

    {
      (void)((yyvsp[(2) - (3)].node)); /* make bison mute */
      (yyval.node) = (yyvsp[(3) - (3)].node); /* T_COLUMN_DEFINITION */
    ;}
    break;

  case 429:

    {
      (void)((yyvsp[(2) - (4)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_DROP, 1, (yyvsp[(3) - (4)].node));
      (yyval.node)->value_ = (yyvsp[(4) - (4)].ival);
    ;}
    break;

  case 430:

    {
      (void)((yyvsp[(2) - (4)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_ALTER, 2, (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
    ;}
    break;

  case 431:

    {
      (void)((yyvsp[(2) - (5)].node)); /* make bison mute */
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_COLUMN_RENAME, 2, (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 432:

    { (yyval.node) = NULL; ;}
    break;

  case 433:

    { (yyval.node) = NULL; ;}
    break;

  case 434:

    { (yyval.ival) = 2; ;}
    break;

  case 435:

    { (yyval.ival) = 1; ;}
    break;

  case 436:

    { (yyval.ival) = 0; ;}
    break;

  case 437:

    {
      (void)((yyvsp[(3) - (3)].node)); /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NOT_NULL);
    ;}
    break;

  case 438:

    {
      (void)((yyvsp[(3) - (3)].node)); /* make bison mute */
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_NULL);
    ;}
    break;

  case 439:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 440:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_NULL);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CONSTR_DEFAULT, 1, (yyval.node));
    ;}
    break;

  case 441:

    {
      merge_nodes((yyval.node), result->malloc_pool_, T_SYTEM_ACTION_LIST, (yyvsp[(4) - (4)].node));
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_ALTER_SYSTEM, 1, (yyval.node));
    ;}
    break;

  case 442:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 3, node, (yyvsp[(7) - (7)].node), (yyvsp[(3) - (7)].node));
    ;}
    break;

  case 443:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 3, node, (yyvsp[(7) - (7)].node), (yyvsp[(3) - (7)].node));
    ;}
    break;

  case 444:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_MASTER);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 2, node, (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 445:

    {
      ParseNode *node = NULL;
      malloc_terminal_node(node, result->malloc_pool_, T_SET_SLAVE);
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CHANGE_OBI, 2, node, (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 446:

    {
      (yyval.node) = NULL;
    ;}
    break;

  case 447:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_FORCE);
    ;}
    break;

  case 448:

    {
      (yyval.node) = (yyvsp[(1) - (1)].node);
    ;}
    break;

  case 449:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_LINK_NODE, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 450:

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

  case 451:

    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 452:

    { (yyval.node) = NULL; ;}
    break;

  case 453:

    { (yyval.ival) = 0; ;}
    break;

  case 454:

    { (yyval.ival) = 1; ;}
    break;

  case 455:

    { (yyval.ival) = 2; ;}
    break;

  case 456:

    { (yyval.ival) = 2; ;}
    break;

  case 457:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 1;
    ;}
    break;

  case 458:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 4;
    ;}
    break;

  case 459:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 2;
    ;}
    break;

  case 460:

    {
      malloc_terminal_node((yyval.node), result->malloc_pool_, T_INT);
      (yyval.node)->value_ = 3;
    ;}
    break;

  case 461:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_CLUSTER, 1, (yyvsp[(3) - (3)].node));
    ;}
    break;

  case 462:

    {
      malloc_non_terminal_node((yyval.node), result->malloc_pool_, T_SERVER_ADDRESS, 2, (yyvsp[(3) - (6)].node), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 463:

    { (yyval.node) = NULL; ;}
    break;

  case 464:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 465:

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

  case 466:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 467:

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

  case 469:

    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 470:

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

