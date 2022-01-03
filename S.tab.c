
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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "S.y"

extern int yylineo;
int i=0,n,j=0,e=0,m;
int col=1;
char vars[20][9];
char types[20][9];
char buf[25];
char cstype[10];
char sigtype[10];
char *type;
int a=0;


/* Line 189 of yacc.c  */
#line 87 "S.tab.c"

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
     mc_ident = 258,
     mc_data = 259,
     mc_prog = 260,
     mc_work = 261,
     mc_proc = 262,
     mc_stopr = 263,
     mc_et = 264,
     mc_ou = 265,
     mc_non = 266,
     mc_sup = 267,
     mc_inf = 268,
     mc_supe = 269,
     mc_infe = 270,
     mc_equi = 271,
     mc_diff = 272,
     mc_const = 273,
     mc_int = 274,
     mc_float = 275,
     mc_char = 276,
     mc_str = 277,
     mc_line = 278,
     mc_size = 279,
     mc_acc = 280,
     mc_disp = 281,
     mc_if = 282,
     mc_else = 283,
     mc_move = 284,
     mc_to = 285,
     mc_end = 286,
     csti = 287,
     cstf = 288,
     cstch = 289,
     cstst = 290,
     aff = 291,
     add = 292,
     sous = 293,
     mult = 294,
     divi = 295,
     idff = 296,
     point = 297,
     parG = 298,
     parD = 299,
     sepv = 300,
     virg = 301,
     deup = 302,
     gui1 = 303,
     gui2 = 304,
     doll = 305,
     ecom = 306,
     arob = 307,
     pcen = 308,
     hash = 309,
     disp = 310
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 14 "S.y"

int entier;
float reel;
char* str;



/* Line 214 of yacc.c  */
#line 186 "S.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 198 "S.tab.c"

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
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   153

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  72
/* YYNRULES -- Number of states.  */
#define YYNSTATES  144

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   310

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,    14,    17,    18,    21,    23,    26,    30,
      32,    35,    38,    43,    45,    47,    49,    51,    53,    55,
      57,    59,    63,    70,    73,    74,    76,    78,    80,    82,
      84,    95,   103,   109,   113,   115,   117,   119,   121,   123,
     131,   133,   138,   145,   152,   159,   164,   168,   170,   176,
     178,   180,   182,   184,   186,   188,   190,   192,   194,   196,
     198,   204,   208,   212,   214,   219,   221,   223,   225,   227,
     229,   231,   233
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      57,     0,    -1,     3,     5,    41,    42,     4,     6,    58,
       7,    66,     8,    -1,    59,    58,    -1,    -1,    60,    63,
      -1,    61,    -1,    65,    63,    -1,    41,    45,    60,    -1,
      41,    -1,    18,    62,    -1,    41,    63,    -1,    41,    36,
      64,    42,    -1,    19,    -1,    20,    -1,    21,    -1,    22,
      -1,    32,    -1,    33,    -1,    34,    -1,    35,    -1,    41,
      45,    65,    -1,    41,    23,    32,    46,    24,    32,    -1,
      67,    66,    -1,    -1,    75,    -1,    72,    -1,    74,    -1,
      68,    -1,    69,    -1,    25,    43,    48,    71,    49,    47,
      52,    41,    44,    42,    -1,    26,    43,    55,    47,    70,
      44,    42,    -1,    26,    43,    55,    44,    42,    -1,    41,
      46,    70,    -1,    41,    -1,    51,    -1,    54,    -1,    53,
      -1,    50,    -1,    27,    43,    80,    44,    47,    66,    73,
      -1,    31,    -1,    28,    47,    66,    31,    -1,    29,    41,
      30,    41,    66,    31,    -1,    29,    41,    30,    32,    66,
      31,    -1,    29,    32,    30,    41,    66,    31,    -1,    41,
      36,    76,    42,    -1,    78,    77,    76,    -1,    78,    -1,
      78,    77,    43,    76,    44,    -1,    37,    -1,    38,    -1,
      39,    -1,    40,    -1,    41,    -1,    79,    -1,    32,    -1,
      33,    -1,    81,    -1,    82,    -1,    83,    -1,    43,    83,
      44,    85,    82,    -1,    43,    83,    44,    -1,    76,    84,
      76,    -1,    76,    -1,    11,    43,    76,    44,    -1,    12,
      -1,    13,    -1,    14,    -1,    15,    -1,    16,    -1,    17,
      -1,    10,    -1,     9,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    31,    31,    35,    36,    38,    43,    44,    51,    53,
      59,    62,    67,    75,    76,    77,    78,    81,    83,    85,
      87,    91,    94,   100,   101,   104,   104,   104,   104,   104,
     107,   111,   130,   137,   142,   150,   151,   152,   153,   156,
     159,   160,   163,   164,   165,   168,   201,   202,   203,   206,
     207,   208,   209,   212,   225,   229,   239,   251,   251,   255,
     259,   260,   264,   273,   282,   294,   295,   296,   297,   298,
     299,   303,   304
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "mc_ident", "mc_data", "mc_prog",
  "mc_work", "mc_proc", "mc_stopr", "mc_et", "mc_ou", "mc_non", "mc_sup",
  "mc_inf", "mc_supe", "mc_infe", "mc_equi", "mc_diff", "mc_const",
  "mc_int", "mc_float", "mc_char", "mc_str", "mc_line", "mc_size",
  "mc_acc", "mc_disp", "mc_if", "mc_else", "mc_move", "mc_to", "mc_end",
  "csti", "cstf", "cstch", "cstst", "aff", "add", "sous", "mult", "divi",
  "idff", "point", "parG", "parD", "sepv", "virg", "deup", "gui1", "gui2",
  "doll", "ecom", "arob", "pcen", "hash", "disp", "$accept", "S",
  "LIST_DEC", "DEC", "DEC_VAR", "DEC_CST", "A", "TYPE2", "CST", "DEC_TAB",
  "LIST_INSTR", "INSTR", "LECTURE", "ECRITURE", "LIST_IDF", "SIGNE",
  "IF_STAT", "B", "BOUCLE", "AFFECTATION", "EXPRESSION", "OPER", "C",
  "CSTE", "CONDITIONS", "CONDITION_SIMPLE", "CONDITION_COMPLEXE",
  "CONDITION", "EQ", "BETA", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    58,    58,    59,    59,    59,    60,    60,
      61,    62,    62,    63,    63,    63,    63,    64,    64,    64,
      64,    65,    65,    66,    66,    67,    67,    67,    67,    67,
      68,    69,    69,    70,    70,    71,    71,    71,    71,    72,
      73,    73,    74,    74,    74,    75,    76,    76,    76,    77,
      77,    77,    77,    78,    78,    79,    79,    80,    80,    81,
      82,    82,    83,    83,    83,    84,    84,    84,    84,    84,
      84,    85,    85
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    10,     2,     0,     2,     1,     2,     3,     1,
       2,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     6,     2,     0,     1,     1,     1,     1,     1,
      10,     7,     5,     3,     1,     1,     1,     1,     1,     7,
       1,     4,     6,     6,     6,     4,     3,     1,     5,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     3,     3,     1,     4,     1,     1,     1,     1,     1,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     4,     0,
       9,     0,     4,     0,     6,     0,     0,    10,     0,     0,
      24,     3,    13,    14,    15,    16,     5,     7,     0,    11,
       0,     8,    21,     0,     0,     0,     0,     0,     0,    24,
      28,    29,    26,    27,    25,    17,    18,    19,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     2,    23,    12,
       0,     0,     0,     0,    55,    56,    53,     0,    63,    47,
      54,     0,    57,    58,    59,     0,     0,     0,    22,    38,
      35,    37,    36,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,     0,    49,    50,    51,    52,     0,
       0,    24,    24,    24,    45,     0,    32,    34,     0,     0,
      61,    62,     0,    46,    24,     0,     0,     0,     0,     0,
       0,    64,    72,    71,     0,     0,     0,    44,    43,    42,
       0,    33,    31,    60,    48,     0,    40,    39,     0,    24,
       0,     0,    30,    41
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    11,    12,    13,    14,    17,    26,    49,    15,
      38,    39,    40,    41,   108,    83,    42,   137,    43,    44,
      68,    99,    69,    70,    71,    72,    73,    74,    94,   124
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -56
static const yytype_int8 yypact[] =
{
       6,    -1,    15,     0,   -56,    38,    49,    75,   -12,     2,
     -20,    76,   -12,    46,   -56,    46,    -8,   -56,    50,    43,
      11,   -56,   -56,   -56,   -56,   -56,   -56,   -56,    37,   -56,
      40,   -56,   -56,    42,    44,    45,   -22,    53,    82,    11,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,    52,
      67,    47,    41,    -9,    62,    63,   -11,   -56,   -56,   -56,
      65,     5,   -27,    55,   -56,   -56,   -56,    -6,    33,    39,
     -56,    57,   -56,   -56,   -56,    61,     1,    64,   -56,   -56,
     -56,   -56,   -56,    54,    66,    68,   -11,    60,   -56,   -56,
     -56,   -56,   -56,   -56,   -11,   -56,   -56,   -56,   -56,   -25,
      69,    11,    11,    11,   -56,    70,   -56,    59,    71,    74,
      51,   -56,   -11,   -56,    11,    79,    80,    81,    72,    68,
      77,   -56,   -56,   -56,    56,    78,    23,   -56,   -56,   -56,
      73,   -56,   -56,   -56,   -56,    83,   -56,   -56,    84,    11,
      85,    89,   -56,   -56
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -56,   -56,    95,   -56,    94,   -56,   -56,    58,   -56,   102,
     -39,   -56,   -56,   -56,     4,   -56,   -56,   -56,   -56,   -56,
     -55,   -56,   -56,   -56,   -56,   -56,     7,    86,   -56,   -56
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      58,    77,    63,    18,     3,    63,     9,    64,    65,     1,
      54,    22,    23,    24,    25,     4,    66,    84,   112,    55,
      85,    64,    65,    64,    65,    19,    64,    65,    28,    10,
      66,   109,    66,   102,    67,    66,    33,    34,    35,   111,
      36,     5,   103,    16,   113,    88,    89,    90,    91,    92,
      93,   135,    37,     7,   136,    79,    80,   125,    81,    82,
     122,   123,   115,   116,   117,    22,    23,    24,    25,    45,
      46,    47,    48,    27,    29,   126,    95,    96,    97,    98,
       6,     8,    30,    20,    10,    51,    50,    52,    53,    56,
      57,    60,    75,    76,    59,    61,    62,    78,    86,    67,
     141,   100,   101,   105,   110,   119,   104,    21,   106,   107,
     127,   128,   129,    31,   138,   120,   114,   118,   121,   132,
     143,    32,   134,   131,   130,     0,     0,   142,   140,     0,
     139,   133,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87
};

static const yytype_int16 yycheck[] =
{
      39,    56,    11,    23,     5,    11,    18,    32,    33,     3,
      32,    19,    20,    21,    22,     0,    41,    44,    43,    41,
      47,    32,    33,    32,    33,    45,    32,    33,    36,    41,
      41,    86,    41,    32,    43,    41,    25,    26,    27,    94,
      29,    41,    41,    41,    99,    12,    13,    14,    15,    16,
      17,    28,    41,     4,    31,    50,    51,   112,    53,    54,
       9,    10,   101,   102,   103,    19,    20,    21,    22,    32,
      33,    34,    35,    15,    16,   114,    37,    38,    39,    40,
      42,     6,    32,     7,    41,    43,    46,    43,    43,    36,
       8,    24,    30,    30,    42,    48,    55,    32,    43,    43,
     139,    44,    41,    49,    44,    46,    42,    12,    42,    41,
      31,    31,    31,    19,    41,    44,    47,    47,    44,    42,
      31,    19,    44,   119,    52,    -1,    -1,    42,    44,    -1,
      47,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    57,     5,     0,    41,    42,     4,     6,    18,
      41,    58,    59,    60,    61,    65,    41,    62,    23,    45,
       7,    58,    19,    20,    21,    22,    63,    63,    36,    63,
      32,    60,    65,    25,    26,    27,    29,    41,    66,    67,
      68,    69,    72,    74,    75,    32,    33,    34,    35,    64,
      46,    43,    43,    43,    32,    41,    36,     8,    66,    42,
      24,    48,    55,    11,    32,    33,    41,    43,    76,    78,
      79,    80,    81,    82,    83,    30,    30,    76,    32,    50,
      51,    53,    54,    71,    44,    47,    43,    83,    12,    13,
      14,    15,    16,    17,    84,    37,    38,    39,    40,    77,
      44,    41,    32,    41,    42,    49,    42,    41,    70,    76,
      44,    76,    43,    76,    47,    66,    66,    66,    47,    46,
      44,    44,     9,    10,    85,    76,    66,    31,    31,    31,
      52,    70,    42,    82,    44,    28,    31,    73,    41,    47,
      44,    66,    42,    31
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
      yyerror (YY_("syntax error: cannot back up")); \
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
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
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
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
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
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

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
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



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
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
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

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

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
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 31 "S.y"
    {    printf ("\n\n\t\t\t\t\t --- Programme syntaxiquement correct --- \n\n");
                                                                                            printf ("\n\n\t\t --------------------------- Fin de la compilation --------------------------- \n\n");    YYACCEPT;;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 38 "S.y"
    {for(n=0;n<i;n++) {
                            if (doubleDeclaration(vars[n])==0) insererTYPE(vars[n],(yyvsp[(2) - (2)].str));
                            else  printf ("<< Erreur semantique ( Idf deja declaree ), ligne %d, colonne %d : %s >>\n",yylineo,col,vars[n]);
                          }
                          i=0;;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 44 "S.y"
    {for(n=0;n<i;n++) {
                            if (doubleDeclaration(vars[n])==0) insererTYPE(vars[n],(yyvsp[(2) - (2)].str));
                            else  printf ("<< Erreur semantique ( Idf deja declaree ), ligne %d, colonne %d : %s >>\n",yylineo,col,vars[n]);
                          }
                          i=0;;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 51 "S.y"
    { strcpy(vars[i],(yyvsp[(1) - (3)].str)); 
                                      i++;;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 53 "S.y"
    { strcpy(vars[i],(yyvsp[(1) - (1)].str));
                          i++; ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 62 "S.y"
    { if (doubleDeclaration((yyvsp[(1) - (2)].str))==0)          { insererTYPE((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));
                                                         insererCODE((yyvsp[(1) - (2)].str));      }
                else printf ("<< Erreur semantique ( Idf deja declaree ), ligne %d, colonne %d : %s >>\n",yylineo,col,(yyvsp[(1) - (2)].str));
                ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 67 "S.y"
    { if (doubleDeclaration((yyvsp[(1) - (4)].str))==0) { insererTYPE((yyvsp[(1) - (4)].str),cstype);
                                                         insererCODE((yyvsp[(1) - (4)].str));
                                                         modifier_val((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].str));  }
                        else printf ("<< Erreur semantique ( Idf deja declaree ), ligne %d, colonne %d : %s >>\n",yylineo,col,(yyvsp[(1) - (4)].str));
                        ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 75 "S.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 76 "S.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 77 "S.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 78 "S.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 81 "S.y"
    {strcpy(cstype,"INTEGER.");
                                        sprintf(buf,"%d",(yyvsp[(1) - (1)].entier));  (yyval.str)=buf;;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 83 "S.y"
    {strcpy(cstype,"FLOAT.");
                                        sprintf(buf,"%f",(yyvsp[(1) - (1)].reel));  (yyval.str)=buf;;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 85 "S.y"
    {strcpy(cstype,"CHAR.");
                                        (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 87 "S.y"
    {strcpy(cstype,"STRING.");
                                        (yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 91 "S.y"
    { strcpy(vars[i],(yyvsp[(1) - (3)].str));
                              i++;  ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 94 "S.y"
    {   if (((yyvsp[(3) - (6)].entier)<0)||((yyvsp[(6) - (6)].entier)<1)) printf ("<< Erreur semantique ( Taille du tableau ou borne inferieure hors limites ), ligne %d, colonne %d : %s ou %s >>\n",yylineo,col,(yyvsp[(3) - (6)].entier),(yyvsp[(6) - (6)].entier));
                                                  strcpy(vars[i],(yyvsp[(1) - (6)].str));
                                                  i++;;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 107 "S.y"
    { if (doubleDeclaration((yyvsp[(8) - (10)].str))==0)                   printf ("<< Erreur semantique ( Idf non declaree ), ligne %d, colonne %d : %s >>\n",yylineo,col,(yyvsp[(8) - (10)].str));
                                                                  if (strcmp((char*)TypeEntite((yyvsp[(8) - (10)].str)),sigtype)!=0)   printf ("<< Erreur semantique ( Incompatibilite de types dans ACCEPT), ligne %d, colonne %d : %s >>\n",yylineo,col,(yyvsp[(8) - (10)].str));
                                                                  ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 111 "S.y"
    { 
                                                        m=nbSIGNE((yyvsp[(3) - (7)].str),types);
                                                       //printf("nb de types dans display =%d\n",n);
                                                       //printf("nb de idf dans display =%d\n",j);
                                                        if(m>0){
                                                                if(m!=j) printf("<< Erreur semantique (Le nombre de signes ne corresponds aux nombres de variables a afficher) ligne %d, colonne %d >>\n",yylineo,col);
                                                                else {
                                                                      for(i=0;i<j;i++) 
                                                            {
                                                              //printf("vars[j] =%s, Type= %s, Type[i]=%s\n",vars[j-i-1],(char*)TypeEntite(vars[j-i-1]),types[i]);
                                                              if(strcmp((char*)TypeEntite(vars[j-i-1]),types[i])!=0) 
                                                                                                      printf ("<< Erreur semantique ( Incompatibilite de types dans DISPLAY), ligne %d, colonne %d : sur l'entite %s et type %s >>\n",yylineo,col,vars[j-i-1],types[i]);
                                                            }
                                                                      }
                                                          
                                                                }  
                                                        j=0;
                                                        m=0;
;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 130 "S.y"
    {
                                                        m=nbSIGNE((yyvsp[(3) - (5)].str),types);
                                                        if (m!=0) {printf("<< Erreur semantique ( Idf manquant ), ligne %d, colonne %d ",yylineo,col);}
          ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 137 "S.y"
    { strcpy(vars[j],(yyvsp[(1) - (3)].str)); 
                                if (doubleDeclaration((yyvsp[(1) - (3)].str))==0) printf ("<< Erreur semantique ( Idf non declaree ), ligne %d, colonne %d : %s >>\n",yylineo,col,(yyvsp[(1) - (3)].str));
                                                           
                                j++;
                                ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 142 "S.y"
    { strcpy(vars[j],(yyvsp[(1) - (1)].str)); 
                                if (doubleDeclaration((yyvsp[(1) - (1)].str))==0) printf ("<< Erreur semantique ( Idf non declaree ), ligne %d, colonne %d : %s >>\n",yylineo,col,(yyvsp[(1) - (1)].str));
                                j++;
                              ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 150 "S.y"
    { strcpy(sigtype,"STRING.");  ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 151 "S.y"
    { strcpy(sigtype,"CHAR.");    ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 152 "S.y"
    { strcpy(sigtype,"FLOAT.");   ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 153 "S.y"
    { strcpy(sigtype,"INTEGER."); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 163 "S.y"
    { if ((doubleDeclaration((yyvsp[(2) - (6)].str))==0)||(doubleDeclaration((yyvsp[(4) - (6)].str))==0)) printf ("<< Erreur semantique ( Idf non declaree ), ligne %d, colonne %d : %s ou %s >>\n",yylineo,col,(yyvsp[(2) - (6)].str),(yyvsp[(4) - (6)].str));;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 164 "S.y"
    { if (doubleDeclaration((yyvsp[(2) - (6)].str))==0)                               printf ("<< Erreur semantique ( Idf non declaree ), ligne %d, colonne %d : %s >>\n",yylineo,col,(yyvsp[(2) - (6)].str));;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 165 "S.y"
    { if (doubleDeclaration((yyvsp[(4) - (6)].str))==0)                               printf ("<< Erreur semantique ( Idf non declaree ), ligne %d, colonne %d : %s >>\n",yylineo,col,(yyvsp[(4) - (6)].str));;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 168 "S.y"
    { if (doubleDeclaration((yyvsp[(1) - (4)].str))==0) printf ("<< Erreur semantique ( Idf non declaree ), ligne %d, colonne %d : %s >>\n",yylineo,col,(yyvsp[(1) - (4)].str));
                                                else { if (verifIDF((yyvsp[(1) - (4)].str))==1)   printf ("<< Erreur semantique ( Constante ne peut pas changer de valeur), ligne %d, colonne %d : %s >>\n",yylineo,col,(yyvsp[(1) - (4)].str));
                                                       else { if (j==1) {       printf ("types de 0 : %s\n",types[0]);
                                                                                if(strcmp((char*)TypeEntite((yyvsp[(1) - (4)].str)),(char*)TypeEntite(types[0]))!=0) {
                                                                                        printf ("<< Erreur semantique ( Incompatibilite de types), ligne %d, colonne %d : entre %s et %s >>\n",yylineo,col,(yyvsp[(1) - (4)].str),types[0]);
                                                                                                                                                  }
                                                                                else {  modifier_val2((yyvsp[(1) - (4)].str),types[0]); }
                                                                                
                                                                                        strcpy(types[0],"");
                                                                                        printf("apres : %s\n",types[0]);
                                                                                      

                                                                        }

                                                                else { for(n=0;n<j;n++) {
                                                                                if(strcmp((char*)TypeEntite((yyvsp[(1) - (4)].str)),(char*)TypeEntite(types[n]))!=0) {
                                                                                        printf ("<< Erreur semantique ( Incompatibilite de types), ligne %d, colonne %d : entre %s et %s >>\n",yylineo,col,(yyvsp[(1) - (4)].str),types[n]);
                                                                                          }
                                                                                strcpy(types[n],"");
                                                                                        }
                                                                      
                                                                     
                                                                      }
                                                              
                                                            }
                                                              j=0;
                                                      }
                                              ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 206 "S.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);       ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 207 "S.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);       ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 208 "S.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);       ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 209 "S.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str); a=1;  ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 212 "S.y"
    { if (doubleDeclaration((yyvsp[(1) - (1)].str))==0) printf ("<< Erreur semantique ( Idf non declaree ), ligne %d, colonne %d : %s >>\n",yylineo,col,(yyvsp[(1) - (1)].str));
                else {
                      strcpy(types[j],(yyvsp[(1) - (1)].str));
                      j++;
                      if(a==1) {
                                if(recheche_val((yyvsp[(1) - (1)].str))==0) { printf("<< Erreur semantique ( division par 0 ), ligne %d, colonne %d : %s >>\n",yylineo,col,(yyvsp[(1) - (1)].str));}
                                }
                      if(a==1) a=0;
          
                     } 
          
              ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 225 "S.y"
    { strcpy(types[j],(yyvsp[(1) - (1)].str));
                j++;                ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 229 "S.y"
    { 
                if(((yyvsp[(1) - (1)].entier)==0) && (a==1)) {
                                      printf("<< Erreur semantique ( division par 0 ), ligne %d, colonne %d : %d >>\n",yylineo,col,(yyvsp[(1) - (1)].entier)); 
                                      a=0;
                                      }
                if(a==1) a=0;
              
                sprintf(buf,"%d",(yyvsp[(1) - (1)].entier)); (yyval.str)=buf;
               ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 239 "S.y"
    { 
                if(((yyvsp[(1) - (1)].reel)==0) && (a==1)) {
                                      printf("<< Erreur semantique ( division par 0 ), ligne %d, colonne %d : %f >>\n",yylineo,col,(yyvsp[(1) - (1)].reel)); 
                                      a=0;
                                      }
                if(a==1) a=0;
              
                sprintf(buf,"%lf",(yyvsp[(1) - (1)].reel));  (yyval.str)=buf;
              ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 264 "S.y"
    { for(n=1;n<j;n++) {
                                                                  if(strcmp((char*)TypeEntite(types[0]),(char*)TypeEntite(types[n]))!=0) {
                                                                            printf ("<< Erreur semantique ( Incompatibilite de types), ligne %d, colonne %d : entre %s et %s >>\n",yylineo,col,types[0],types[n]);
                                                                                                                                          }
                                                                  strcpy(types[n],"");
                                                                  }
                                                strcpy(types[0],"");
                                                j=0;
                                               ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 273 "S.y"
    { for(n=1;n<j;n++) {
                                                                  if(strcmp((char*)TypeEntite(types[0]),(char*)TypeEntite(types[n]))!=0) {
                                                                            printf ("<< Erreur semantique ( Incompatibilite de types), ligne %d, colonne %d : entre %s et %s >>\n",yylineo,col,types[0],types[n]);
                                                                                                                                          }
                                                                  strcpy(types[n],"");
                                                                 }
                                                strcpy(types[0],"");
                                                j=0;
                                               ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 282 "S.y"
    { for(n=1;n<j;n++) {
                                                                  if(strcmp((char*)TypeEntite(types[0]),(char*)TypeEntite(types[n]))!=0) {
                                                                            printf ("<< Erreur semantique ( Incompatibilite de types), ligne %d, colonne %d : entre %s et %s >>\n",yylineo,col,types[0],types[n]);
                                                                                                                                          }
                                                                  strcpy(types[n],"");
                                                                  }
                                                strcpy(types[0],"");
                                                j=0;
                                               ;}
    break;



/* Line 1455 of yacc.c  */
#line 1945 "S.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

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
      yyerror (YY_("syntax error"));
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
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



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
		      yytoken, &yylval);
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


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
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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



/* Line 1675 of yacc.c  */
#line 310 "S.y"

main ()
{
initialisation();
printf ("\n\n\t\t --------------------------- Debut de la compilation --------------------------- \n\n");
yyparse();
afficher();
}
yywrap()
{}
int yyerror (char *msg ) { 
        printf ("Erreur syntaxique, ligne %d, colonne %d \n",yylineo,col); 
        return 1; }
