#define YASM_SECTION_H
#define YASM_LIB_DECL
typedef struct yasm_reloc yasm_reloc;
struct yasm_reloc ;
struct yasm_object ;
YASM_LIB_DECL yasm_object *yasm_object_create
(const char *src_filename, const char *obj_filename, yasm_arch *arch,
const yasm_objfmt_module *objfmt_module,
const yasm_dbgfmt_module *dbgfmt_module);
YASM_LIB_DECL yasm_section *yasm_object_get_general
(yasm_object *object, const char *name, unsigned long align, int code,
int res_only, int *isnew, unsigned long line);
YASM_LIB_DECL
int yasm_object_directive(yasm_object *object, const char *name,
const char *parser, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams,
unsigned long line);
YASM_LIB_DECL
void yasm_object_destroy( yasm_object *object);
YASM_LIB_DECL
void yasm_object_print(const yasm_object *object, FILE *f, int indent_level);
YASM_LIB_DECL
void yasm_object_finalize(yasm_object *object, yasm_errwarns *errwarns);
YASM_LIB_DECL
int yasm_object_sections_traverse
(yasm_object *object, void *d,
int (*func) (yasm_section *sect, void *d));
YASM_LIB_DECL yasm_section *yasm_object_find_general
(yasm_object *object, const char *name);
YASM_LIB_DECL
void yasm_object_set_source_fn(yasm_object *object, const char *src_filename);
YASM_LIB_DECL
void yasm_object_set_global_prefix(yasm_object *object, const char *prefix);
YASM_LIB_DECL
void yasm_object_set_global_suffix(yasm_object *object, const char *suffix);
YASM_LIB_DECL
void yasm_object_optimize(yasm_object *object, yasm_errwarns *errwarns);
YASM_LIB_DECL
int yasm_section_is_code(yasm_section *sect);
YASM_LIB_DECL
unsigned long yasm_section_get_opt_flags(const yasm_section *sect);
YASM_LIB_DECL
void yasm_section_set_opt_flags(yasm_section *sect, unsigned long opt_flags);
YASM_LIB_DECL
int yasm_section_is_default(const yasm_section *sect);
YASM_LIB_DECL
void yasm_section_set_default(yasm_section *sect, int def);
YASM_LIB_DECL
yasm_object *yasm_section_get_object(const yasm_section *sect);
YASM_LIB_DECL void *yasm_section_get_data
(yasm_section *sect, const yasm_assoc_data_callback *callback);
YASM_LIB_DECL
void yasm_section_add_data(yasm_section *sect,
const yasm_assoc_data_callback *callback, void *data);
YASM_LIB_DECL
void yasm_section_add_reloc(yasm_section *sect, yasm_reloc *reloc,
void (*destroy_func) ( void *reloc));
YASM_LIB_DECL yasm_reloc *yasm_section_relocs_first(yasm_section *sect); yasm_reloc *yasm_section_reloc_next(yasm_reloc *reloc);
#define yasm_section_reloc_next(x)      STAILQ_NEXT((x), link)
YASM_LIB_DECL
void yasm_reloc_get(yasm_reloc *reloc, yasm_intnum **addrp, yasm_symrec **symp);
YASM_LIB_DECL
yasm_bytecode *yasm_section_bcs_first(yasm_section *sect);
YASM_LIB_DECL
yasm_bytecode *yasm_section_bcs_last(yasm_section *sect);
YASM_LIB_DECL yasm_bytecode *yasm_section_bcs_append
(yasm_section *sect, yasm_bytecode *bc);
YASM_LIB_DECL
int yasm_section_bcs_traverse
(yasm_section *sect, yasm_errwarns *errwarns, void *d, int (*func) (yasm_bytecode *bc, void *d));
YASM_LIB_DECL const char *yasm_section_get_name(const yasm_section *sect);
YASM_LIB_DECL
void yasm_section_set_align(yasm_section *sect, unsigned long align,
unsigned long line);
YASM_LIB_DECL
unsigned long yasm_section_get_align(const yasm_section *sect);
YASM_LIB_DECL
void yasm_section_print( const yasm_section *sect, FILE *f,
int indent_level, int print_bcs);
