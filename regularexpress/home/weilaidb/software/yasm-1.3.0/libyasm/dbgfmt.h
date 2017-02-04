#define YASM_DBGFMT_H
typedef struct yasm_dbgfmt_base  yasm_dbgfmt_base;
struct yasm_dbgfmt_module ;
*yasm_dbgfmt_keyword; yasm_dbgfmt *yasm_dbgfmt_create
(const yasm_dbgfmt_module *module, yasm_object *object);
yasm_dbgfmt_destroy;
yasm_dbgfmt_generate;
yasm_dbgfmt_keyword \
(((yasm_dbgfmt_base *)dbgfmt)->module->keyword)
yasm_dbgfmt_create \
module->create(object)
yasm_dbgfmt_destroy \
((yasm_dbgfmt_base *)dbgfmt)->module->destroy(dbgfmt)
yasm_dbgfmt_generate \
((yasm_dbgfmt_base *)((object)->dbgfmt))->module->generate \
(object, linemap, ews)
