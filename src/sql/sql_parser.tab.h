
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



