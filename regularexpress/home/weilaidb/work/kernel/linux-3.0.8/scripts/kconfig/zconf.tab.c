#define YYBISON 1
#define YYBISON_VERSION "2.4.1"
#define YYSKELETON_NAME "yacc.c"
#define YYPURE 0
#define YYPUSH 0
#define YYPULL 1
#define YYLSP_NEEDED 0
#define yyparse         zconfparse
#define yylex           zconflex
#define yyerror         zconferror
#define yylval          zconflval
#define yychar          zconfchar
#define yydebug         zconfdebug
#define yynerrs         zconfnerrs
#define LKC_DIRECT_LINK
#define printd(mask, fmt...) if (cdebug & (mask)) printf(fmt)
#define PRINTD		0x0001
#define DEBUG_PARSE	0x0002
int cdebug = PRINTD;
extern int zconflex(void);
static void zconfprint(const char *err, ...);
static void zconf_error(const char *err, ...);
static void zconferror(const char *err);
static bool zconf_endtoken(struct kconf_id *id, int starttoken, int endtoken);
struct symbol *symbol_hash[SYMBOL_HASHSIZE];
static struct menu *current_menu, *current_entry;
#define YYDEBUG 0
#if YYDEBUG
#define YYERROR_VERBOSE
# define YYDEBUG 0
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
# define YYERROR_VERBOSE 0
# define YYTOKEN_TABLE 0
# define YYTOKENTYPE
enum yytokentype ;
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE
# define YYSTYPE_IS_DECLARED 1
# undef short
typedef YYTYPE_UINT8 yytype_uint8;
typedef unsigned char yytype_uint8;
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
|| defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
typedef short int yytype_int8;
typedef YYTYPE_UINT16 yytype_uint16;
typedef unsigned short int yytype_uint16;
typedef YYTYPE_INT16 yytype_int16;
typedef short int yytype_int16;
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
|| defined __cplusplus || defined _MSC_VER)
#  include <stddef.h>
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h>
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
# define YYUSE(e)
# define YYID(n) (n)
#if (defined __STDC__ || defined __C99__FUNC__ \
|| defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
static int
YYID (yyi)
int yyi;
#if ! defined yyoverflow || YYERROR_VERBOSE
# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h>
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h>
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
|| defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h>
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif
# ifdef YYSTACK_ALLOC
#  define YYSTACK_FREE(Ptr) do  while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM 4032
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
#   include <stdlib.h>
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
|| defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T);
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
|| defined __cplusplus || defined _MSC_VER)
void free (void *);
#   endif
#  endif
# endif
#if (! defined yyoverflow \
&& (! defined __cplusplus \
|| (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))
union yyalloc
;
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)
# define YYSTACK_BYTES(N) \
((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
+ YYSTACK_GAP_MAXIMUM)
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
__builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
do					\
\
while (YYID (0))
#  endif
# endif
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
do									\
\
while (YYID (0))
#define YYFINAL  11
#define YYLAST   290
#define YYNTOKENS  36
#define YYNNTS  50
#define YYNRULES  118
#define YYNSTATES  191
#define YYUNDEFTOK  2
#define YYMAXUTOK   290
#define YYTRANSLATE(YYX)						\
((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)
static const yytype_uint8 yytranslate[] =
;
#if YYDEBUG
static const yytype_uint16 yyprhs[] =
;
static const yytype_int8 yyrhs[] =
;
static const yytype_uint16 yyrline[] =
;
#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
static const char *const yytname[] =
;
# ifdef YYPRINT
static const yytype_uint16 yytoknum[] =
;
# endif
static const yytype_uint8 yyr1[] =
;
static const yytype_uint8 yyr2[] =
;
static const yytype_uint8 yydefact[] =
;
static const yytype_int16 yydefgoto[] =
;
#define YYPACT_NINF -90
static const yytype_int16 yypact[] =
;
static const yytype_int16 yypgoto[] =
;
#define YYTABLE_NINF -86
static const yytype_int16 yytable[] =
;
static const yytype_int16 yycheck[] =
;
static const yytype_uint8 yystos[] =
;
#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0
#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(Token, Value)					\
do								\
if (yychar == YYEMPTY && yylen == 1)				\
\
else								\
\
while (YYID (0))
#define YYTERROR	1
#define YYERRCODE	256
#define YYRHSLOC(Rhs, K) ((Rhs)[K])
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
do									\
if (YYID (N))                                                    \
\
else								\
\
while (YYID (0))
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
fprintf (File, "%d.%d-%d.%d",			\
(Loc).first_line, (Loc).first_column,	\
(Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
# define YYLEX yylex (YYLEX_PARAM)
# define YYLEX yylex ()
#if YYDEBUG
# ifndef YYFPRINTF
#  include <stdio.h>
#  define YYFPRINTF fprintf
# endif
# define YYDPRINTF(Args)			\
do  while (YYID (0))
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do  while (YYID (0))
#if (defined __STDC__ || defined __C99__FUNC__ \
|| defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
FILE *yyoutput;
int yytype;
YYSTYPE const * const yyvaluep;
#if (defined __STDC__ || defined __C99__FUNC__ \
|| defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
FILE *yyoutput;
int yytype;
YYSTYPE const * const yyvaluep;
#if (defined __STDC__ || defined __C99__FUNC__ \
|| defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
static void
yy_stack_print (yybottom, yytop)
yytype_int16 *yybottom;
yytype_int16 *yytop;
# define YY_STACK_PRINT(Bottom, Top)				\
do  while (YYID (0))
#if (defined __STDC__ || defined __C99__FUNC__ \
|| defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
static void
yy_reduce_print (yyvsp, yyrule)
YYSTYPE *yyvsp;
int yyrule;
# define YY_REDUCE_PRINT(Rule)		\
do  while (YYID (0))
int yydebug;
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
# define YYINITDEPTH 200
# define YYMAXDEPTH 10000
#if YYERROR_VERBOSE
# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
#if (defined __STDC__ || defined __C99__FUNC__ \
|| defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
static YYSIZE_T
yystrlen (yystr)
const char *yystr;
#  endif
# endif
# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
#if (defined __STDC__ || defined __C99__FUNC__ \
|| defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
static char *
yystpcpy (yydest, yysrc)
char *yydest;
const char *yysrc;
#  endif
# endif
# ifndef yytnamerr
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
# endif
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
#if (defined __STDC__ || defined __C99__FUNC__ \
|| defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
static void
yydestruct (yymsg, yytype, yyvaluep)
const char *yymsg;
int yytype;
YYSTYPE *yyvaluep;
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
int yyparse ();
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
int yyparse ();
int yychar;
YYSTYPE yylval;
int yynerrs;
#if (defined __STDC__ || defined __C99__FUNC__ \
|| defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
int
yyparse (YYPARSE_PARAM)
void *YYPARSE_PARAM;
#if (defined __STDC__ || defined __C99__FUNC__ \
|| defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
int
yyparse ()
void conf_parse(const char *name)
static const char *zconf_tokenname(int token)
static bool zconf_endtoken(struct kconf_id *id, int starttoken, int endtoken)
static void zconfprint(const char *err, ...)
static void zconf_error(const char *err, ...)
static void zconferror(const char *err)
static void print_quoted_string(FILE *out, const char *str)
static void print_symbol(FILE *out, struct menu *menu)
void zconfdump(FILE *out)
