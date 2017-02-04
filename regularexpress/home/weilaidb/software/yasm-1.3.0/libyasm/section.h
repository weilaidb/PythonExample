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
yasm_object_directive;
YASM_LIB_DECL
yasm_object_destroy;
YASM_LIB_DECL
yasm_object_print;
YASM_LIB_DECL
yasm_object_finalize;
YASM_LIB_DECL
int yasm_object_sections_traverse
(yasm_object *object, void *d,
int (*func) (yasm_section *sect, void *d));
YASM_LIB_DECL yasm_section *yasm_object_find_general
(yasm_object *object, const char *name);
YASM_LIB_DECL
yasm_object_set_source_fn;
YASM_LIB_DECL
yasm_object_set_global_prefix;
YASM_LIB_DECL
yasm_object_set_global_suffix;
YASM_LIB_DECL
yasm_object_optimize;
YASM_LIB_DECL
yasm_section_is_code;
YASM_LIB_DECL
yasm_section_get_opt_flags;
YASM_LIB_DECL
yasm_section_set_opt_flags;
YASM_LIB_DECL
yasm_section_is_default;
YASM_LIB_DECL
yasm_section_set_default;
YASM_LIB_DECL
*yasm_section_get_object;
YASM_LIB_DECL void *yasm_section_get_data
(yasm_section *sect, const yasm_assoc_data_callback *callback);
YASM_LIB_DECL
yasm_section_add_data;
YASM_LIB_DECL
yasm_section_add_reloc ( void *reloc));
*yasm_section_reloc_next;
yasm_section_reloc_next      STAILQ_NEXT((x), link)
YASM_LIB_DECL
yasm_reloc_get;
YASM_LIB_DECL
*yasm_section_bcs_first;
YASM_LIB_DECL
*yasm_section_bcs_last;
YASM_LIB_DECL yasm_bytecode *yasm_section_bcs_append
(yasm_section *sect, yasm_bytecode *bc);
YASM_LIB_DECL
int yasm_section_bcs_traverse
(yasm_section *sect, yasm_errwarns *errwarns, void *d, int (*func) (yasm_bytecode *bc, void *d));
*yasm_section_get_name;
YASM_LIB_DECL
yasm_section_set_align;
YASM_LIB_DECL
yasm_section_get_align;
YASM_LIB_DECL
yasm_section_print;
