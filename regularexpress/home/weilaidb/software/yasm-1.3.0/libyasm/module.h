#define YASM_MODULE_H
#define YASM_LIB_DECL
typedef enum yasm_module_type  yasm_module_type;
YASM_LIB_DECL void *yasm_load_module
(yasm_module_type type, const char *keyword);
#define yasm_load_arch(keyword) \
yasm_load_module(YASM_MODULE_ARCH, keyword)
#define yasm_load_dbgfmt(keyword)       \
yasm_load_module(YASM_MODULE_DBGFMT, keyword)
#define yasm_load_objfmt(keyword)       \
yasm_load_module(YASM_MODULE_OBJFMT, keyword)
#define yasm_load_listfmt(keyword)      \
yasm_load_module(YASM_MODULE_LISTFMT, keyword)
#define yasm_load_parser(keyword)       \
yasm_load_module(YASM_MODULE_PARSER, keyword)
#define yasm_load_preproc(keyword)      \
yasm_load_module(YASM_MODULE_PREPROC, keyword)
YASM_LIB_DECL
void yasm_list_modules
(yasm_module_type type,
void (*printfunc) (const char *name, const char *keyword));
#define yasm_list_arch(func)            \
yasm_list_modules(YASM_MODULE_ARCH, func)
#define yasm_list_dbgfmt(func)          \
yasm_list_modules(YASM_MODULE_DBGFMT, func)
#define yasm_list_objfmt(func)          \
yasm_list_modules(YASM_MODULE_OBJFMT, func)
#define yasm_list_listfmt(func)         \
yasm_list_modules(YASM_MODULE_LISTFMT, func)
#define yasm_list_parser(func)          \
yasm_list_modules(YASM_MODULE_PARSER, func)
#define yasm_list_preproc(func)         \
yasm_list_modules(YASM_MODULE_PREPROC, func)
YASM_LIB_DECL
void yasm_register_module(yasm_module_type type, const char *keyword,
void *data);
