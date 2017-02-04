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
emitting ( (x) == COND_IF_TRUE || (x) == COND_ELSE_TRUE )
#define NO_DIRECTIVE_FOUND  0
#define DIRECTIVE_FOUND     1
static const char *conditions[] = ;
enum
;
static int inverse_ccs[] = ;
static const char *directives[] = ;
enum
;
is_condition
MAX ( ((a) > (b)) ? (a) : (b))
enum
;
static const char *tasm_directives[] = ;
static int StackSize = 4;
static const char *StackPointer = ;
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
*expand_mmac_params;
*expand_smacro;
*expand_id;
*get_ctx;
make_tok_num;
error;
*new_Block;
delete_Blocks;
*new_Token;
*delete_Token;
*tokenise;
tok_type_ ((x) && (x)->type == (t))
skip_white_ if (tok_type_((x), TOK_WHITESPACE)) (x)=(x)->next
tok_is_ (tok_type_((x), TOK_OTHER) && !strcmp((x)->text,(v)))
tok_isnt_ ((x) && ((x)->type!=TOK_OTHER || strcmp((x)->text,(v))))
typedef struct TMEndItem  TMEndItem;
static TMEndItem *EndmStack = NULL, *EndsStack = NULL;
char **TMParameters;
struct TStrucField ;
struct TStruc ;
static struct TStruc *TStrucs = NULL;
static int inTstruc = 0;
struct TSegmentAssume ;
struct TSegmentAssume *TAssumes;
*tasm_get_segment_register
check_tasm_directive
tasm_join_tokens
prepreproc
hash
free_tlist
free_llist
free_mmacro
ctx_pop
#define BUF_DELTA 512
read_line
tokenise
new_Block
delete_Blocks
new_Token
delete_Token
detoken
ppscan
mstrcmp
get_ctx
inc_fopen
smacro_defined
count_mmac_params
if_condition
expand_macros_in_string
do_directive
find_cc
expand_mmac_params
expand_smacro
expand_id
is_mmacro
expand_mmacro
error
pp_reset
poke_predef
pp_getline
pp_cleanup
pp_pre_include
pp_pre_define
pp_pre_undefine
pp_builtin_define
pp_extra_stdmac
make_tok_num
Preproc nasmpp = ;
