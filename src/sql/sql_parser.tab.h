
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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



