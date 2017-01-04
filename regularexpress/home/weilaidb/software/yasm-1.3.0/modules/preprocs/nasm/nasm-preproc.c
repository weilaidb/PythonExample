typedef struct yasm_preproc_nasm  yasm_preproc_nasm;
yasm_symtab *nasm_symtab;
static yasm_linemap *cur_lm;
static yasm_errwarns *cur_errwarns;
int tasm_compatible_mode = 0;
int tasm_locals;
const char *tasm_segment;
typedef struct preproc_dep  preproc_dep;
static STAILQ_HEAD(preproc_dep_head, preproc_dep) *preproc_deps;
static int done_dep_preproc;
yasm_preproc_module yasm_nasm_LTX_preproc;
static void
nil_listgen_init(char *p, efunc e)
static void
nil_listgen_cleanup(void)
static void
nil_listgen_output(long v, const void *d, unsigned long v2)
static void
nil_listgen_line(int v, char *p)
static void
nil_listgen_uplevel(int v)
static void
nil_listgen_downlevel(int v)
static ListGen nil_list = ;
static void
nasm_efunc(int severity, const char *fmt, ...)
static yasm_preproc *
nasm_preproc_create(const char *in_filename, yasm_symtab *symtab,
yasm_linemap *lm, yasm_errwarns *errwarns)
static void
nasm_preproc_destroy(yasm_preproc *preproc)
static char *
nasm_preproc_get_line(yasm_preproc *preproc)
void
nasm_preproc_add_dep(char *name)
static size_t
nasm_preproc_get_included_file(yasm_preproc *preproc, char *buf,
size_t max_size)
static void
nasm_preproc_add_include_file(yasm_preproc *preproc, const char *filename)
static void
nasm_preproc_predefine_macro(yasm_preproc *preproc, const char *macronameval)
static void
nasm_preproc_undefine_macro(yasm_preproc *preproc, const char *macroname)
static void
nasm_preproc_define_builtin(yasm_preproc *preproc, const char *macronameval)
static void
nasm_preproc_add_standard(yasm_preproc *preproc, const char **macros)
yasm_preproc_module yasm_nasm_LTX_preproc = ;
static yasm_preproc *
tasm_preproc_create(const char *in_filename, yasm_symtab *symtab,
yasm_linemap *lm, yasm_errwarns *errwarns)
yasm_preproc_module yasm_tasm_LTX_preproc = ;
