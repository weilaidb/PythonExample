#define YASM_PREPROC_H
typedef struct yasm_preproc_base  yasm_preproc_base;
typedef struct yasm_preproc_module  yasm_preproc_module; yasm_preproc *yasm_preproc_create
(yasm_preproc_module *module, const char *in_filename,
yasm_symtab *symtab, yasm_linemap *lm, yasm_errwarns *errwarns);
yasm_preproc_destroy;
*yasm_preproc_get_line;
yasm_preproc_get_included_file;
yasm_preproc_add_include_file;
yasm_preproc_predefine_macro;
yasm_preproc_undefine_macro;
yasm_preproc_define_builtin;
yasm_preproc_add_standard;
yasm_preproc_create \
module->create(in_filename, symtab, lm, ews)
yasm_preproc_destroy \
((yasm_preproc_base *)preproc)->module->destroy(preproc)
yasm_preproc_get_line \
((yasm_preproc_base *)preproc)->module->get_line(preproc)
yasm_preproc_get_included_file \
((yasm_preproc_base *)preproc)->module->get_included_file(preproc, buf, max_size)
yasm_preproc_add_include_file \
((yasm_preproc_base *)preproc)->module->add_include_file(preproc, filename)
yasm_preproc_predefine_macro \
((yasm_preproc_base *)preproc)->module->predefine_macro(preproc, \
macronameval)
yasm_preproc_undefine_macro \
((yasm_preproc_base *)preproc)->module->undefine_macro(preproc, macroname)
yasm_preproc_define_builtin \
((yasm_preproc_base *)preproc)->module->define_builtin(preproc, \
macronameval)
yasm_preproc_add_standard \
((yasm_preproc_base *)preproc)->module->add_standard(preproc, \
macros)
