typedef struct loaded_module  loaded_module;
static HAMT *loaded_modules[] = ;
static void
load_module_destroy( void *data)
void *
yasm_load_module(yasm_module_type type, const char *keyword)
void
yasm_register_module(yasm_module_type type, const char *keyword, void *data)
typedef struct  list_one_data;
static int
yasm_list_one_module(void *node, void *d)
void
yasm_list_modules(yasm_module_type type,
void (*printfunc) (const char *name, const char *keyword))
