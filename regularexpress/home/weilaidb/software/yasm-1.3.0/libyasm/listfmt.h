#define YASM_LISTFMT_H
typedef struct yasm_listfmt_base  yasm_listfmt_base;
typedef struct yasm_listfmt_module  yasm_listfmt_module;
const char *yasm_listfmt_keyword(const yasm_listfmt *listfmt); yasm_listfmt *yasm_listfmt_create
(const yasm_listfmt_module *module, const char *in_filename,
const char *obj_filename);
void yasm_listfmt_destroy( yasm_listfmt *listfmt);
void yasm_listfmt_output(yasm_listfmt *listfmt, FILE *f,
yasm_linemap *linemap, yasm_arch *arch);
#define yasm_listfmt_keyword(listfmt) \
(((yasm_listfmt_base *)listfmt)->module->keyword)
#define yasm_listfmt_create(module, in_filename, obj_filename) \
module->create(in_filename, obj_filename)
#define yasm_listfmt_destroy(listfmt) \
((yasm_listfmt_base *)listfmt)->module->destroy(listfmt)
#define yasm_listfmt_output(listfmt, f, linemap, a) \
((yasm_listfmt_base *)listfmt)->module->output(listfmt, f, linemap, a)
