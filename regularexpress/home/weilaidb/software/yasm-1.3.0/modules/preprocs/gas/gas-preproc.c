#define FALSE 0
#define TRUE  1
#define BSIZE 512
#define MAXPATHLEN 1024
typedef struct buffered_line  buffered_line;
typedef struct included_file  included_file;
typedef struct macro_entry  macro_entry;
typedef struct deferred_define  deferred_define;
typedef struct expr_state  expr_state;
typedef struct yasm_preproc_gas  yasm_preproc_gas;
yasm_preproc_module yasm_gas_LTX_preproc;
substitute_values;
*starts_with
skip_whitespace
skip_whitespace2
*matches
unquote
*read_line_from_file
*read_line
*get_arg
get_char
*get_str
next_char
ishex
gas_scan_init
gas_scan_cleanup
gas_scan
{
yasm_preproc_gas *pp = (yasm_preproc_gas *) preproc;
char c = get_char(pp);
const char *str;
tokval->t_charptr = NULL;
if (c == '\0')
if (isspace(c))
if (isdigit(c))
tokval->t_type = TOKEN_INVALID;
str = get_str(pp);
gas_err
eval_expr
handle_if
handle_endif
handle_else
eval_if
eval_else
eval_endif
eval_elseif
eval_ifb
eval_ifc
eval_ifeqs
eval_ifdef
eval_ifge
eval_ifgt
eval_include
try_eval_expr
remove_define
add_define
eval_set
eval_macro
eval_endm
get_param_value
expand_macro
eval_rept
eval_endr
typedef int (*pp_fn0_t)(yasm_preproc_gas *pp, int param);
typedef int (*pp_fn1_t)(yasm_preproc_gas *pp, int param, const char *arg1);
typedef int (*pp_fn2_t)(yasm_preproc_gas *pp, int param, const char *arg1, const char *arg2);
FN ((pp_fn0_t) &(f))
kill_comments
if (pp->in_comment)  else
gas_preproc_create
gas_preproc_destroy
gas_preproc_get_line
gas_preproc_get_included_file
gas_preproc_add_include_file
gas_preproc_predefine_macro
gas_preproc_undefine_macro
gas_preproc_define_builtin
gas_preproc_add_standard
yasm_preproc_module yasm_gas_LTX_preproc = ;
