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
static int substitute_values(yasm_preproc_gas *pp, char **line_ptr);
static const char *starts_with(const char *big, const char *little)
static void skip_whitespace(const char **line)
static void skip_whitespace2(char **line)
static const char *matches(const char *line, const char *directive)
static int unquote(const char *arg, char *to, size_t to_size, char q, char expected, const char **remainder)
static char *read_line_from_file(yasm_preproc_gas *pp, FILE *file)
static char *read_line(yasm_preproc_gas *pp)
static const char *get_arg(yasm_preproc_gas *pp, const char *src, char *dest, size_t dest_size)
static char get_char(yasm_preproc_gas *pp)
static const char *get_str(yasm_preproc_gas *pp)
static void next_char(yasm_preproc_gas *pp)
static int ishex(char c)
static void gas_scan_init(yasm_preproc_gas *pp, struct tokenval *tokval, const char *arg1)
static void gas_scan_cleanup(yasm_preproc_gas *pp, struct tokenval *tokval)
static int gas_scan(void *preproc, struct tokenval *tokval)
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
static void gas_err(void *private_data, int severity, const char *fmt, ...)
static long eval_expr(yasm_preproc_gas *pp, const char *arg1)
static int handle_if(yasm_preproc_gas *pp, int is_true)
static int handle_endif(yasm_preproc_gas *pp)
static int handle_else(yasm_preproc_gas *pp, int is_elseif)
static int eval_if(yasm_preproc_gas *pp, int negate, const char *arg1)
static int eval_else(yasm_preproc_gas *pp, int unused)
static int eval_endif(yasm_preproc_gas *pp, int unused)
static int eval_elseif(yasm_preproc_gas *pp, int unused, const char *arg1)
static int eval_ifb(yasm_preproc_gas *pp, int negate, const char *arg1)
static int eval_ifc(yasm_preproc_gas *pp, int negate, const char *args)
static int eval_ifeqs(yasm_preproc_gas *pp, int negate, const char *args)
static int eval_ifdef(yasm_preproc_gas *pp, int negate, const char *name)
static int eval_ifge(yasm_preproc_gas *pp, int negate, const char *arg1)
static int eval_ifgt(yasm_preproc_gas *pp, int negate, const char *arg1)
static int eval_include(yasm_preproc_gas *pp, int unused, const char *arg1)
static int try_eval_expr(yasm_preproc_gas *pp, const char *value, long *result)
static int remove_define(yasm_preproc_gas *pp, const char *name, int allow_redefine)
static void add_define(yasm_preproc_gas *pp, const char *name, long value, int allow_redefine, int substitute)
static int eval_set(yasm_preproc_gas *pp, int allow_redefine, const char *name, const char *value)
static int eval_macro(yasm_preproc_gas *pp, int unused, char *args)
static int eval_endm(yasm_preproc_gas *pp, int unused)
static void get_param_value(macro_entry *macro, int param_index, const char *args, const char **value, int *length)
static void expand_macro(yasm_preproc_gas *pp, macro_entry *macro, const char *args)
static int eval_rept(yasm_preproc_gas *pp, int unused, const char *arg1)
static int eval_endr(yasm_preproc_gas *pp, int unused)
typedef int (*pp_fn0_t)(yasm_preproc_gas *pp, int param);
typedef int (*pp_fn1_t)(yasm_preproc_gas *pp, int param, const char *arg1);
typedef int (*pp_fn2_t)(yasm_preproc_gas *pp, int param, const char *arg1, const char *arg2);
#define FN(f) ((pp_fn0_t) &(f))
static void kill_comments(yasm_preproc_gas *pp, char *line)
if (pp->in_comment)  else
static yasm_preproc *
gas_preproc_create(const char *in_filename, yasm_symtab *symtab,
yasm_linemap *lm, yasm_errwarns *errwarns)
static void
gas_preproc_destroy(yasm_preproc *preproc)
static char *
gas_preproc_get_line(yasm_preproc *preproc)
static size_t
gas_preproc_get_included_file(yasm_preproc *preproc, char *buf,
size_t max_size)
static void
gas_preproc_add_include_file(yasm_preproc *preproc, const char *filename)
static void
gas_preproc_predefine_macro(yasm_preproc *preproc, const char *macronameval)
static void
gas_preproc_undefine_macro(yasm_preproc *preproc, const char *macroname)
static void
gas_preproc_define_builtin(yasm_preproc *preproc, const char *macronameval)
static void
gas_preproc_add_standard(yasm_preproc *preproc, const char **macros)
yasm_preproc_module yasm_gas_LTX_preproc = ;
