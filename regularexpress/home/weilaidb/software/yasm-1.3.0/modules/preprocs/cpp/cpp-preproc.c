#define CMDLINE_SIZE 32770
#define BSIZE 512
yasm_preproc_module yasm_cpp_LTX_preproc;
typedef struct cpp_arg_entry  cpp_arg_entry;
typedef struct yasm_preproc_cpp  yasm_preproc_cpp;
#define CPP_HAS_BEEN_INVOKED        0x01
#define CPP_HAS_GENERATED_DEPS      0x02
#define APPEND(s) do  while (0)
static char *
cpp_build_cmdline(yasm_preproc_cpp *pp, const char *extra)
static void
cpp_invoke(yasm_preproc_cpp *pp)
static void
cpp_destroy_args(yasm_preproc_cpp *pp)
static void
cpp_generate_deps(yasm_preproc_cpp *pp)
static yasm_preproc *
cpp_preproc_create(const char *in, yasm_symtab *symtab, yasm_linemap *lm,
yasm_errwarns *errwarns)
static void
cpp_preproc_destroy(yasm_preproc *preproc)
static char *
cpp_preproc_get_line(yasm_preproc *preproc)
static size_t
cpp_preproc_get_included_file(yasm_preproc *preproc, char *buf,
size_t max_size)
static void
cpp_preproc_add_include_file(yasm_preproc *preproc, const char *filename)
static void
cpp_preproc_predefine_macro(yasm_preproc *preproc, const char *macronameval)
static void
cpp_preproc_undefine_macro(yasm_preproc *preproc, const char *macroname)
static void
cpp_preproc_define_builtin(yasm_preproc *preproc, const char *macronameval)
static void
cpp_preproc_add_standard(yasm_preproc *preproc, const char **macros)
yasm_preproc_module yasm_cpp_LTX_preproc = ;
