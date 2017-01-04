#define YASM_PREPROC_H
typedef struct yasm_preproc_base  yasm_preproc_base;
typedef struct yasm_preproc_module  yasm_preproc_module; yasm_preproc *yasm_preproc_create
(yasm_preproc_module *module, const char *in_filename,
yasm_symtab *symtab, yasm_linemap *lm, yasm_errwarns *errwarns);
void yasm_preproc_destroy( yasm_preproc *preproc);
char *yasm_preproc_get_line(yasm_preproc *preproc);
size_t yasm_preproc_get_included_file(yasm_preproc *preproc, char *buf, size_t max_size);
void yasm_preproc_add_include_file(yasm_preproc *preproc,
const char *filename);
void yasm_preproc_predefine_macro(yasm_preproc *preproc,
const char *macronameval);
void yasm_preproc_undefine_macro(yasm_preproc *preproc, const char *macroname);
void yasm_preproc_define_builtin(yasm_preproc *preproc,
const char *macronameval);
void yasm_preproc_add_standard(yasm_preproc *preproc,
const char **macros);
#define yasm_preproc_create(module, in_filename, symtab, lm, ews) \
module->create(in_filename, symtab, lm, ews)
#define yasm_preproc_destroy(preproc) \
((yasm_preproc_base *)preproc)->module->destroy(preproc)
#define yasm_preproc_get_line(preproc) \
((yasm_preproc_base *)preproc)->module->get_line(preproc)
#define yasm_preproc_get_included_file(preproc, buf, max_size) \
((yasm_preproc_base *)preproc)->module->get_included_file(preproc, buf, max_size)
#define yasm_preproc_add_include_file(preproc, filename) \
((yasm_preproc_base *)preproc)->module->add_include_file(preproc, filename)
#define yasm_preproc_predefine_macro(preproc, macronameval) \
((yasm_preproc_base *)preproc)->module->predefine_macro(preproc, \
macronameval)
#define yasm_preproc_undefine_macro(preproc, macroname) \
((yasm_preproc_base *)preproc)->module->undefine_macro(preproc, macroname)
#define yasm_preproc_define_builtin(preproc, macronameval) \
((yasm_preproc_base *)preproc)->module->define_builtin(preproc, \
macronameval)
#define yasm_preproc_add_standard(preproc, macros) \
((yasm_preproc_base *)preproc)->module->add_standard(preproc, \
macros)
