const char copyright[] =
"@(#) $Version: unifdef-2.5 $\n"
"@(#) $Author: Tony Finch (dot@dotat.at) $\n"
"@(#) $URL: http:
;
typedef enum  Linetype;
static char const * const linetype_name[] = ;
typedef enum  Ifstate;
static char const * const ifstate_name[] = ;
typedef enum  Comment_state;
static char const * const comment_name[] = ;
typedef enum  Line_state;
static char const * const linestate_name[] = ;
#define	MAXDEPTH        64
#define	MAXLINE         4096
#define	MAXSYMS         4096
#define	EDITSLOP        10
#define TEMPLATE        "unifdef.XXXXXX"
static bool             compblank;
static bool             lnblank;
static bool             complement;
static bool             debugging;
static bool             iocccok;
static bool             strictlogic;
static bool             killconsts;
static bool             lnnum;
static bool             symlist;
static bool             symdepth;
static bool             text;
static const char      *symname[MAXSYMS];
static const char      *value[MAXSYMS];
static bool             ignore[MAXSYMS];
static int              nsyms;
static FILE            *input;
static const char      *filename;
static int              linenum;
static FILE            *output;
static const char      *ofilename;
static bool             overwriting;
static char             tempname[FILENAME_MAX];
static char             tline[MAXLINE+EDITSLOP];
static char            *keyword;
static const char      *newline;
static const char       newline_unix[] = "\n";
static const char       newline_crlf[] = "\r\n";
static Comment_state    incomment;
static Line_state       linestate;
static Ifstate          ifstate[MAXDEPTH];
static bool             ignoring[MAXDEPTH];
static int              stifline[MAXDEPTH];
static int              depth;
static int              delcount;
static unsigned         blankcount;
static unsigned         blankmax;
static bool             constexpr;
static bool             zerosyms = true;
static bool             firstsym;
static int              exitstat;
static void             addsym(bool, bool, char *);
static void             closeout(void);
static void             debug(const char *, ...);
static void             done(void);
static void             error(const char *);
static int              findsym(const char *);
static void             flushline(bool);
static Linetype         parseline(void);
static Linetype         ifeval(const char **);
static void             ignoreoff(void);
static void             ignoreon(void);
static void             keywordedit(const char *);
static void             nest(void);
static void             process(void);
static const char      *skipargs(const char *);
static const char      *skipcomment(const char *);
static const char      *skipsym(const char *);
static void             state(Ifstate);
static int              strlcmp(const char *, const char *, size_t);
static void             unnest(void);
static void             usage(void);
static void             version(void);
#define endsym(c) (!isalnum((unsigned char)c) && c != '_')
int
main(int argc, char *argv[])
static void
version(void)
static void
usage(void)
typedef void state_fn(void);
static void Eelif (void)
static void Eelse (void)
static void Eendif(void)
static void Eeof  (void)
static void Eioccc(void)
static void print (void)
static void drop  (void)
static void Strue (void)
static void Sfalse(void)
static void Selse (void)
static void Pelif (void)
static void Pelse (void)
static void Pendif(void)
static void Dfalse(void)
static void Delif (void)
static void Delse (void)
static void Dendif(void)
static void Fdrop (void)
static void Fpass (void)
static void Ftrue (void)
static void Ffalse(void)
static void Oiffy (void)
static void Oif   (void)
static void Oelif (void)
static void Idrop (void)
static void Itrue (void)
static void Ifalse(void)
static void Mpass (void)
static void Mtrue (void)
static void Melif (void)
static void Melse (void)
static state_fn * const trans_table[IS_COUNT][LT_COUNT] = ;
static void
ignoreoff(void)
static void
ignoreon(void)
static void
keywordedit(const char *replacement)
static void
nest(void)
static void
unnest(void)
static void
state(Ifstate is)
static void
flushline(bool keep)
static void
process(void)
static void
closeout(void)
static void
done(void)
static Linetype
parseline(void)
static Linetype op_strict(int *p, int v, Linetype at, Linetype bt)
static Linetype op_lt(int *p, Linetype at, int a, Linetype bt, int b)
static Linetype op_gt(int *p, Linetype at, int a, Linetype bt, int b)
static Linetype op_le(int *p, Linetype at, int a, Linetype bt, int b)
static Linetype op_ge(int *p, Linetype at, int a, Linetype bt, int b)
static Linetype op_eq(int *p, Linetype at, int a, Linetype bt, int b)
static Linetype op_ne(int *p, Linetype at, int a, Linetype bt, int b)
static Linetype op_or(int *p, Linetype at, int a, Linetype bt, int b)
static Linetype op_and(int *p, Linetype at, int a, Linetype bt, int b)
struct ops;
typedef Linetype eval_fn(const struct ops *, int *, const char **);
static eval_fn eval_table, eval_unary;
static const struct ops  eval_ops[] = ;
static Linetype
eval_unary(const struct ops *ops, int *valp, const char **cpp)
static Linetype
eval_table(const struct ops *ops, int *valp, const char **cpp)
static Linetype
ifeval(const char **cpp)
static const char *
skipcomment(const char *cp)
static const char *
skipargs(const char *cp)
static const char *
skipsym(const char *cp)
static int
findsym(const char *str)
static void
addsym(bool ignorethis, bool definethis, char *sym)
static int
strlcmp(const char *s, const char *t, size_t n)
static void
debug(const char *msg, ...)
static void
error(const char *msg)
