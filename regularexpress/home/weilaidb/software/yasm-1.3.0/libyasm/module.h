#define YASM_MODULE_H
#define YASM_LIB_DECL
typedef enum yasm_module_type  yasm_module_type;
YASM_LIB_DECL void *yasm_load_module
(yasm_module_type type, const char *keyword);
yasm_load_arch \
yasm_load_module(YASM_MODULE_ARCH, keyword)
yasm_load_dbgfmt       \
yasm_load_module(YASM_MODULE_DBGFMT, keyword)
yasm_load_objfmt       \
yasm_load_module(YASM_MODULE_OBJFMT, keyword)
yasm_load_listfmt      \
yasm_load_module(YASM_MODULE_LISTFMT, keyword)
yasm_load_parser       \
yasm_load_module(YASM_MODULE_PARSER, keyword)
yasm_load_preproc      \
yasm_load_module(YASM_MODULE_PREPROC, keyword)
YASM_LIB_DECL
void yasm_list_modules
(yasm_module_type type,
void (*printfunc) (const char *name, const char *keyword));
yasm_list_arch            \
yasm_list_modules(YASM_MODULE_ARCH, func)
yasm_list_dbgfmt          \
yasm_list_modules(YASM_MODULE_DBGFMT, func)
yasm_list_objfmt          \
yasm_list_modules(YASM_MODULE_OBJFMT, func)
yasm_list_listfmt         \
yasm_list_modules(YASM_MODULE_LISTFMT, func)
yasm_list_parser          \
yasm_list_modules(YASM_MODULE_PARSER, func)
yasm_list_preproc         \
yasm_list_modules(YASM_MODULE_PREPROC, func)
YASM_LIB_DECL
yasm_register_module;
