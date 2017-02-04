#define YASM_LISTFMT_H
typedef struct yasm_listfmt_base  yasm_listfmt_base;
typedef struct yasm_listfmt_module  yasm_listfmt_module;
*yasm_listfmt_keyword; yasm_listfmt *yasm_listfmt_create
(const yasm_listfmt_module *module, const char *in_filename,
const char *obj_filename);
yasm_listfmt_destroy;
yasm_listfmt_output;
yasm_listfmt_keyword \
(((yasm_listfmt_base *)listfmt)->module->keyword)
yasm_listfmt_create \
module->create(in_filename, obj_filename)
yasm_listfmt_destroy \
((yasm_listfmt_base *)listfmt)->module->destroy(listfmt)
yasm_listfmt_output \
((yasm_listfmt_base *)listfmt)->module->output(listfmt, f, linemap, a)
