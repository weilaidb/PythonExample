#define YASM_DBGFMT_H
typedef struct yasm_dbgfmt_base  yasm_dbgfmt_base;
struct yasm_dbgfmt_module ;
const char *yasm_dbgfmt_keyword(const yasm_dbgfmt *dbgfmt); yasm_dbgfmt *yasm_dbgfmt_create
(const yasm_dbgfmt_module *module, yasm_object *object);
void yasm_dbgfmt_destroy( yasm_dbgfmt *dbgfmt);
void yasm_dbgfmt_generate(yasm_object *object, yasm_linemap *linemap,
yasm_errwarns *errwarns);
#define yasm_dbgfmt_keyword(dbgfmt) \
(((yasm_dbgfmt_base *)dbgfmt)->module->keyword)
#define yasm_dbgfmt_create(module, object) \
module->create(object)
#define yasm_dbgfmt_destroy(dbgfmt) \
((yasm_dbgfmt_base *)dbgfmt)->module->destroy(dbgfmt)
#define yasm_dbgfmt_generate(object, linemap, ews) \
((yasm_dbgfmt_base *)((object)->dbgfmt))->module->generate \
(object, linemap, ews)
