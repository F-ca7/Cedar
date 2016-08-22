
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
     BLOOMFILTER_JOIN = 452,
     MERGE_JOIN = 453,
     AUTO_INCREMENT = 454,
     CHUNKSERVER = 455,
     COMPRESS_METHOD = 456,
     CONSISTENT_MODE = 457,
     EXPIRE_INFO = 458,
     GRANTS = 459,
     JOIN_INFO = 460,
     MERGESERVER = 461,
     REPLICA_NUM = 462,
     ROOTSERVER = 463,
     ROW_COUNT = 464,
     SERVER = 465,
     SERVER_IP = 466,
     SERVER_PORT = 467,
     SERVER_TYPE = 468,
     STATUS = 469,
     TABLE_ID = 470,
     TABLET_BLOCK_SIZE = 471,
     TABLET_MAX_SIZE = 472,
     UNLOCKED = 473,
     UPDATESERVER = 474,
     USE_BLOOM_FILTER = 475,
     VARIABLES = 476,
     VERBOSE = 477,
     WARNINGS = 478
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



