#   if defined(_WIN32) || defined(WIN32)
#       define __WIN32__
#   endif
extern int access(const char *path, int mode);
#define PRIVATE
#define MAXRHS 5
#define MAXRHS 1000
static int showPrecedenceConflict = 0;
static char *msort(char*,char**,int(*)(const char*,const char*));
#define lemonStrlen(X)   ((int)strlen(X))
static void lemon_addtext(
char *zBuf,
int *pnUsed,
const char *zIn,
int nIn,
int iWidth
)
static int lemon_vsprintf(char *str, const char *zFormat, va_list ap)
static int lemon_sprintf(char *str, const char *format, ...)
static void lemon_strcpy(char *dest, const char *src)
static void lemon_strcat(char *dest, const char *src)
struct rule;
struct lemon;
struct action;
static struct action *Action_new(void);
static struct action *Action_sort(struct action *);
void FindRulePrecedences();
void FindFirstSets();
void FindStates();
void FindLinks();
void FindFollowSets();
void FindActions();
void Configlist_init(void);
struct config *Configlist_add(struct rule *, int);
struct config *Configlist_addbasis(struct rule *, int);
void Configlist_closure(struct lemon *);
void Configlist_sort(void);
void Configlist_sortbasis(void);
struct config *Configlist_return(void);
struct config *Configlist_basis(void);
void Configlist_eat(struct config *);
void Configlist_reset(void);
void ErrorMsg(const char *, int,const char *, ...);
enum option_type ;
struct s_options ;
int    OptInit(char**,struct s_options*,FILE*);
int    OptNArgs(void);
char  *OptArg(int);
void   OptErr(int);
void   OptPrint(void);
void Parse(struct lemon *lemp);
struct plink *Plink_new(void);
void Plink_add(struct plink **, struct config *);
void Plink_copy(struct plink **, struct plink *);
void Plink_delete(struct plink *);
void Reprint(struct lemon *);
void ReportOutput(struct lemon *);
void ReportTable(struct lemon *, int);
void ReportHeader(struct lemon *);
void CompressTables(struct lemon *);
void ResortStates(struct lemon *);
void  SetSize(int);
char *SetNew(void);
void  SetFree(char*);
int SetAdd(char*,int);
int SetUnion(char *,char *);
#define SetFind(X,Y) (X[Y])
typedef enum  Boolean;
enum symbol_type ;
enum e_assoc ;
struct symbol ;
struct rule ;
enum cfgstatus ;
struct config ;
enum e_action ;
struct action ;
struct state ;
#define NO_OFFSET (-2147483647)
struct plink ;
struct lemon ;
#define MemoryCheck(X) if((X)==0)
const char *Strsafe(const char *);
void Strsafe_init(void);
int Strsafe_insert(const char *);
const char *Strsafe_find(const char *);
struct symbol *Symbol_new(const char *);
int Symbolcmpp(const void *, const void *);
void Symbol_init(void);
int Symbol_insert(struct symbol *, const char *);
struct symbol *Symbol_find(const char *);
struct symbol *Symbol_Nth(int);
int Symbol_count(void);
struct symbol **Symbol_arrayof(void);
int Configcmp(const char *, const char *);
struct state *State_new(void);
void State_init(void);
int State_insert(struct state *, struct config *);
struct state *State_find(struct config *);
struct state **State_arrayof();
void Configtable_init(void);
int Configtable_insert(struct config *);
struct config *Configtable_find(struct config *);
void Configtable_clear(int(*)(struct config *));
static struct action *Action_new(void)
static int actioncmp(
struct action *ap1,
struct action *ap2
)
static struct action *Action_sort(
struct action *ap
)
void Action_add(
struct action **app,
enum e_action type,
struct symbol *sp,
char *arg
)
struct lookahead_action ;
typedef struct acttab acttab;
struct acttab ;
#define acttab_size(X) ((X)->nAction)
#define acttab_yyaction(X,N)  ((X)->aAction[N].action)
#define acttab_yylookahead(X,N)  ((X)->aAction[N].lookahead)
void acttab_free(acttab *p)
acttab *acttab_alloc(void)
void acttab_action(acttab *p, int lookahead, int action)
int acttab_insert(acttab *p)
void FindRulePrecedences(struct lemon *xp)
void FindFirstSets(struct lemon *lemp)
PRIVATE struct state *getstate(struct lemon *);
void FindStates(struct lemon *lemp)
PRIVATE void buildshifts(struct lemon *, struct state *);
PRIVATE struct state *getstate(struct lemon *lemp)
int same_symbol(struct symbol *a, struct symbol *b)
PRIVATE void buildshifts(struct lemon *lemp, struct state *stp)
void FindLinks(struct lemon *lemp)
void FindFollowSets(struct lemon *lemp)
static int resolve_conflict(struct action *,struct action *);
void FindActions(struct lemon *lemp)
static int resolve_conflict(
struct action *apx,
struct action *apy
)
static struct config *freelist = 0;
static struct config *current = 0;
static struct config **currentend = 0;
static struct config *basis = 0;
static struct config **basisend = 0;
PRIVATE struct config *newconfig()
PRIVATE void deleteconfig(struct config *old)
void Configlist_init()
void Configlist_reset()
struct config *Configlist_add(
struct rule *rp,
int dot
)
struct config *Configlist_addbasis(struct rule *rp, int dot)
void Configlist_closure(struct lemon *lemp)
void Configlist_sort()
void Configlist_sortbasis()
struct config *Configlist_return()
struct config *Configlist_basis()
void Configlist_eat(struct config *cfp)
void ErrorMsg(const char *filename, int lineno, const char *format, ...)
void memory_error()
static int nDefine = 0;
static char **azDefine = 0;
static void handle_D_option(char *z)
static char *user_templatename = NULL;
static void handle_T_option(char *z)
int main(int argc, char **argv)
#define NEXT(A) (*(char**)(((char*)A)+offset))
static char *merge(
char *a,
char *b,
int (*cmp)(const char*,const char*),
int offset
)
#define LISTSIZE 30
static char *msort(
char *list,
char **next,
int (*cmp)(const char*,const char*)
)
static char **argv;
static struct s_options *op;
static FILE *errstream;
#define ISOPT(X) ((X)[0]=='-'||(X)[0]=='+'||strchr((X),'=')!=0)
static void errline(int n, int k, FILE *err)
static int argindex(int n)
static char emsg[] = "Command line syntax error: ";
static int handleflags(int i, FILE *err)
static int handleswitch(int i, FILE *err)
int OptInit(char **a, struct s_options *o, FILE *err)
int OptNArgs()
char *OptArg(int n)
void OptErr(int n)
void OptPrint()
enum e_state ;
struct pstate ;
static void parseonetoken(struct pstate *psp)
{
const char *x;
x = Strsafe(psp->tokenstart);
switch( psp->state ){
case INITIALIZE:
psp->prevrule = 0;
psp->preccounter = 0;
psp->firstrule = psp->lastrule = 0;
psp->gp->nrule = 0;
case WAITING_FOR_DECL_OR_RULE:
if( x[0]=='%' )else if( islower(x[0]) )else if( x[0]=='{' )else if( x[0]=='[' )else
break;
case PRECEDENCE_MARK_1:
if( !isupper(x[0]) )else if( psp->prevrule==0 )else if( psp->prevrule->precsym!=0 )else
psp->state = PRECEDENCE_MARK_2;
break;
case PRECEDENCE_MARK_2:
if( x[0]!=']' )
psp->state = WAITING_FOR_DECL_OR_RULE;
break;
case WAITING_FOR_ARROW:
if( x[0]==':' && x[1]==':' && x[2]=='=' )else if( x[0]=='(' )else
break;
case LHS_ALIAS_1:
if( isalpha(x[0]) )else
break;
case LHS_ALIAS_2:
if( x[0]==')' )else
break;
case LHS_ALIAS_3:
if( x[0]==':' && x[1]==':' && x[2]=='=' )else
break;
case IN_RHS:
if( x[0]=='.' )else if( isalpha(x[0]) )else if( (x[0]=='|' || x[0]=='/') && psp->nrhs>0 )else if( x[0]=='(' && psp->nrhs>0 )else
break;
case RHS_ALIAS_1:
if( isalpha(x[0]) )else
break;
case RHS_ALIAS_2:
if( x[0]==')' )else
break;
case WAITING_FOR_DECL_KEYWORD:
if( isalpha(x[0]) )else
break;
case WAITING_FOR_DESTRUCTOR_SYMBOL:
if( !isalpha(x[0]) )else
break;
case WAITING_FOR_DATATYPE_SYMBOL:
if( !isalpha(x[0]) )else
break;
case WAITING_FOR_PRECEDENCE_SYMBOL:
if( x[0]=='.' )else if( isupper(x[0]) )else
break;
case WAITING_FOR_DECL_ARG:
if( x[0]=='
static void preprocess_input(char *z)
void Parse(struct lemon *gp)
static struct plink *plink_freelist = 0;
struct plink *Plink_new()
void Plink_add(struct plink **plpp, struct config *cfp)
void Plink_copy(struct plink **to, struct plink *from)
void Plink_delete(struct plink *plp)
PRIVATE char *file_makename(struct lemon *lemp, const char *suffix)
PRIVATE FILE *file_open(
struct lemon *lemp,
const char *suffix,
const char *mode
)
void Reprint(struct lemon *lemp)
void ConfigPrint(FILE *fp, struct config *cfp)
int PrintAction(struct action *ap, FILE *fp, int indent)
void ReportOutput(struct lemon *lemp)
PRIVATE char *pathsearch(char *argv0, char *name, int modemask)
PRIVATE int compute_action(struct lemon *lemp, struct action *ap)
#define LINESIZE 1000
PRIVATE void tplt_xfer(char *name, FILE *in, FILE *out, int *lineno)
PRIVATE FILE *tplt_open(struct lemon *lemp)
PRIVATE void tplt_linedir(FILE *out, int lineno, char *filename)
PRIVATE void tplt_print(FILE *out, struct lemon *lemp, char *str, int *lineno)
void emit_destructor_code(
FILE *out,
struct symbol *sp,
struct lemon *lemp,
int *lineno
){
char *cp = 0;
if( sp->type==TERMINAL ){
cp = lemp->tokendest;
if( cp==0 ) return;
fprintf(out,"else if( sp->destructor )
int has_destructor(struct symbol *sp, struct lemon *lemp)
PRIVATE char *append_str(const char *zText, int n, int p1, int p2)
PRIVATE void translate_code(struct lemon *lemp, struct rule *rp)
PRIVATE void emit_code(
FILE *out,
struct rule *rp,
struct lemon *lemp,
int *lineno
)
void print_stack_union(
FILE *out,
struct lemon *lemp,
int *plineno,
int mhflag
)
static const char *minimum_size_type(int lwr, int upr)
struct axset ;
static int axset_compare(const void *a, const void *b)
static void writeRuleText(FILE *out, struct rule *rp)
void ReportTable(
struct lemon *lemp,
int mhflag
)
void ReportHeader(struct lemon *lemp)
void CompressTables(struct lemon *lemp)
static int stateResortCompare(const void *a, const void *b)
void ResortStates(struct lemon *lemp)
static int size = 0;
void SetSize(int n)
char *SetNew()
void SetFree(char *s)
int SetAdd(char *s, int e)
int SetUnion(char *s1, char *s2)
PRIVATE unsigned strhash(const char *x)
const char *Strsafe(const char *y)
struct s_x1 ;
typedef struct s_x1node  x1node;
static struct s_x1 *x1a;
void Strsafe_init()
int Strsafe_insert(const char *data)
const char *Strsafe_find(const char *key)
struct symbol *Symbol_new(const char *x)
int Symbolcmpp(const void *_a, const void *_b)
struct s_x2 ;
typedef struct s_x2node  x2node;
static struct s_x2 *x2a;
void Symbol_init()
int Symbol_insert(struct symbol *data, const char *key)
struct symbol *Symbol_find(const char *key)
struct symbol *Symbol_Nth(int n)
int Symbol_count()
struct symbol **Symbol_arrayof()
int Configcmp(const char *_a,const char *_b)
PRIVATE int statecmp(struct config *a, struct config *b)
PRIVATE unsigned statehash(struct config *a)
struct state *State_new()
struct s_x3 ;
typedef struct s_x3node  x3node;
static struct s_x3 *x3a;
void State_init()
int State_insert(struct state *data, struct config *key)
struct state *State_find(struct config *key)
struct state **State_arrayof()
PRIVATE unsigned confighash(struct config *a)
struct s_x4 ;
typedef struct s_x4node  x4node;
static struct s_x4 *x4a;
void Configtable_init()
int Configtable_insert(struct config *data)
struct config *Configtable_find(struct config *key)
void Configtable_clear(int(*f)(struct config *))
