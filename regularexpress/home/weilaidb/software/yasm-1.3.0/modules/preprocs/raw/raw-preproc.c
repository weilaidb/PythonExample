#define BSIZE 512
typedef struct yasm_preproc_raw  yasm_preproc_raw;
yasm_preproc_module yasm_raw_LTX_preproc;
static yasm_preproc *
raw_preproc_create(const char *in_filename, yasm_symtab *symtab,
yasm_linemap *lm, yasm_errwarns *errwarns)
static void
raw_preproc_destroy(yasm_preproc *preproc)
static char *
raw_preproc_get_line(yasm_preproc *preproc)
static size_t
raw_preproc_get_included_file(yasm_preproc *preproc, char *buf,
size_t max_size)
static void
raw_preproc_add_include_file(yasm_preproc *preproc, const char *filename)
static void
raw_preproc_predefine_macro(yasm_preproc *preproc, const char *macronameval)
static void
raw_preproc_undefine_macro(yasm_preproc *preproc, const char *macroname)
static void
raw_preproc_define_builtin(yasm_preproc *preproc, const char *macronameval)
static void
raw_preproc_add_standard(yasm_preproc *preproc, const char **macros)
yasm_preproc_module yasm_raw_LTX_preproc = ;
