typedef struct SMacro SMacro;
typedef struct MMacro MMacro;
typedef struct Context Context;
typedef struct Token Token;
typedef struct Blocks Blocks;
typedef struct Line Line;
typedef struct Include Include;
typedef struct Cond Cond;
struct SMacro
;
struct MMacro
;
struct Context
;
struct Token
;
enum
;
struct Line
;
struct Include
;
struct Cond
;
enum
;
#define emitting(x) ( (x) == COND_IF_TRUE || (x) == COND_ELSE_TRUE )
#define NO_DIRECTIVE_FOUND  0
#define DIRECTIVE_FOUND     1
static const char *conditions[] = ;
enum
;
static int inverse_ccs[] = ;
static const char *directives[] = ;
enum
;
static int is_condition(int arg)
#       define MAX(a,b) ( ((a) > (b)) ? (a) : (b))
enum
;
static const char *tasm_directives[] = ;
static int StackSize = 4;
static const char *StackPointer = "ebp";
static int ArgOffset = 8;
static int LocalOffset = 4;
static int Level = 0;
static Context *cstk;
static Include *istk;
static FILE *first_fp = NULL;
static efunc _error;
static evalfunc evaluate;
static int pass;
static unsigned long unique;
static Line *builtindef = NULL;
static Line *stddef = NULL;
static Line *predef = NULL;
static int first_line = 1;
static ListGen *list;
#define NHASH 4096
static MMacro *mmacros[NHASH];
static SMacro *smacros[NHASH];
static MMacro *defining;
#define PARAM_DELTA 16
static const char *tasm_compat_macros[] =
;
static int nested_mac_count, nested_rep_count;
#define TOKEN_BLOCKSIZE 4096
static Token *freeTokens = NULL;
struct Blocks ;
static Blocks blocks = ;
static Token *expand_mmac_params(Token * tline);
static Token *expand_smacro(Token * tline);
static Token *expand_id(Token * tline);
static Context *get_ctx(char *name, int all_contexts);
static void make_tok_num(Token * tok, yasm_intnum *val);
static void error(int severity, const char *fmt, ...);
static void *new_Block(size_t size);
static void delete_Blocks(void);
static Token *new_Token(Token * next, int type, const char *text,
size_t txtlen);
static Token *delete_Token(Token * t);
static Token *tokenise(char *line);
#define tok_type_(x,t) ((x) && (x)->type == (t))
#define skip_white_(x) if (tok_type_((x), TOK_WHITESPACE)) (x)=(x)->next
#define tok_is_(x,v) (tok_type_((x), TOK_OTHER) && !strcmp((x)->text,(v)))
#define tok_isnt_(x,v) ((x) && ((x)->type!=TOK_OTHER || strcmp((x)->text,(v))))
typedef struct TMEndItem  TMEndItem;
static TMEndItem *EndmStack = NULL, *EndsStack = NULL;
char **TMParameters;
struct TStrucField ;
struct TStruc ;
static struct TStruc *TStrucs = NULL;
static int inTstruc = 0;
struct TSegmentAssume ;
struct TSegmentAssume *TAssumes;
const char *tasm_get_segment_register(const char *segment)
static char *
check_tasm_directive(char *line)
static Token * tasm_join_tokens(Token *tline)
static char *
prepreproc(char *line)
static int
hash(char *s)
static void
free_tlist(Token * list_)
static void
free_llist(Line * list_)
static void
free_mmacro(MMacro * m)
static void
ctx_pop(void)
#define BUF_DELTA 512
static char *
read_line(void)
static Token *
tokenise(char *line)
static void *
new_Block(size_t size)
static void
delete_Blocks(void)
static Token *
new_Token(Token * next, int type, const char *text, size_t txtlen)
static Token *
delete_Token(Token * t)
static char *
detoken(Token * tlist, int expand_locals)
static int
ppscan(void *private_data, struct tokenval *tokval)
static int
mstrcmp(char *p, char *q, int casesense)
static Context *
get_ctx(char *name, int all_contexts)
static FILE *
inc_fopen(char *file, char **newname)
static int
smacro_defined(Context * ctx, char *name, int nparam, SMacro ** defn,
int nocase)
static void
count_mmac_params(Token * t, int *nparam, Token *** params)
static int
if_condition(Token * tline, int i)
static void
expand_macros_in_string(char **p)
static int
do_directive(Token * tline)
static int
find_cc(Token * t)
static Token *
expand_mmac_params(Token * tline)
static Token *
expand_smacro(Token * tline)
static Token *
expand_id(Token * tline)
static MMacro *
is_mmacro(Token * tline, Token *** params_array)
static int
expand_mmacro(Token * tline)
static void
error(int severity, const char *fmt, ...)
static void
pp_reset(FILE *f, const char *file, int apass, efunc errfunc, evalfunc eval,
ListGen * listgen)
static void
poke_predef(Line *predef_lines)
static char *
pp_getline(void)
static void
pp_cleanup(int pass_)
void
pp_pre_include(const char *fname)
void
pp_pre_define(char *definition)
void
pp_pre_undefine(char *definition)
void
pp_builtin_define(char *definition)
void
pp_extra_stdmac(const char **macros)
static void
make_tok_num(Token * tok, yasm_intnum *val)
Preproc nasmpp = ;
