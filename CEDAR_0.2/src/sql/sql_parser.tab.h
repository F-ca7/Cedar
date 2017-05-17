
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
     LONG_TRANS = 413,
     SCHEMA = 414,
     SCOPE = 415,
     SELECT = 416,
     SESSION = 417,
     SESSION_ALIAS = 418,
     SET = 419,
     SHOW = 420,
     SMALLINT = 421,
     SNAPSHOT = 422,
     SPFILE = 423,
     START = 424,
     STATIC = 425,
     SYSTEM = 426,
     STRONG = 427,
     SET_MASTER_CLUSTER = 428,
     SET_SLAVE_CLUSTER = 429,
     SLAVE = 430,
     TABLE = 431,
     TABLES = 432,
     THEN = 433,
     TIME = 434,
     TIMESTAMP = 435,
     TINYINT = 436,
     TRAILING = 437,
     TRANSACTION = 438,
     TO = 439,
     UPDATE = 440,
     USER = 441,
     USING = 442,
     VALUES = 443,
     VARCHAR = 444,
     VARBINARY = 445,
     WHERE = 446,
     WHEN = 447,
     WITH = 448,
     WORK = 449,
     PROCESSLIST = 450,
     QUERY = 451,
     CONNECTION = 452,
     WEAK = 453,
     INDEX = 454,
     STORING = 455,
     BLOOMFILTER_JOIN = 456,
     MERGE_JOIN = 457,
     AUTO_INCREMENT = 458,
     CHUNKSERVER = 459,
     COMPRESS_METHOD = 460,
     CONSISTENT_MODE = 461,
     EXPIRE_INFO = 462,
     GRANTS = 463,
     JOIN_INFO = 464,
     MERGESERVER = 465,
     REPLICA_NUM = 466,
     ROOTSERVER = 467,
     ROW_COUNT = 468,
     SERVER = 469,
     SERVER_IP = 470,
     SERVER_PORT = 471,
     SERVER_TYPE = 472,
     STATUS = 473,
     TABLE_ID = 474,
     TABLET_BLOCK_SIZE = 475,
     TABLET_MAX_SIZE = 476,
     UNLOCKED = 477,
     UPDATESERVER = 478,
     USE_BLOOM_FILTER = 479,
     VARIABLES = 480,
     VERBOSE = 481,
     WARNINGS = 482
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



