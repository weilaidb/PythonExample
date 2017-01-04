#define REGULAR_OUTBUF_SIZE     1024
#define XDF_MAGIC       0x87654322
#define XDF_SYM_EXTERN  1
#define XDF_SYM_GLOBAL  2
#define XDF_SYM_EQU     4
typedef struct xdf_reloc  xdf_reloc;
typedef struct xdf_section_data  xdf_section_data;
typedef struct xdf_symrec_data  xdf_symrec_data;
typedef struct yasm_objfmt_xdf  yasm_objfmt_xdf;
typedef struct xdf_objfmt_output_info  xdf_objfmt_output_info;
static void xdf_section_data_destroy( void *d);
static void xdf_section_data_print(void *data, FILE *f, int indent_level);
static const yasm_assoc_data_callback xdf_section_data_cb = ;
static void xdf_symrec_data_destroy( void *d);
static void xdf_symrec_data_print(void *data, FILE *f, int indent_level);
static const yasm_assoc_data_callback xdf_symrec_data_cb = ;
yasm_objfmt_module yasm_xdf_LTX_objfmt;
static yasm_objfmt *
xdf_objfmt_create(yasm_object *object)
static int
xdf_objfmt_output_value(yasm_value *value, unsigned char *buf,
unsigned int destsize, unsigned long offset,
yasm_bytecode *bc, int warn, void *d)
static int
xdf_objfmt_output_bytecode(yasm_bytecode *bc, void *d)
static int
xdf_objfmt_output_section(yasm_section *sect, void *d)
static int
xdf_objfmt_output_secthead(yasm_section *sect, void *d)
static int
xdf_objfmt_count_sym(yasm_symrec *sym, void *d)
static int
xdf_objfmt_output_sym(yasm_symrec *sym, void *d)
static int
xdf_objfmt_output_str(yasm_symrec *sym, void *d)
static void
xdf_objfmt_output(yasm_object *object, FILE *f, int all_syms,
yasm_errwarns *errwarns)
static void
xdf_objfmt_destroy(yasm_objfmt *objfmt)
static void
xdf_objfmt_init_new_section(yasm_section *sect, unsigned long line)
static yasm_section *
xdf_objfmt_add_default_section(yasm_object *object)
static int
xdf_helper_use(void *obj, yasm_valparam *vp, unsigned long line, void *d,
uintptr_t bits)
static yasm_section *
xdf_objfmt_section_switch(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams,
unsigned long line)
static yasm_symrec *
xdf_objfmt_get_special_sym(yasm_object *object, const char *name,
const char *parser)
static void
xdf_section_data_destroy(void *data)
static void
xdf_section_data_print(void *data, FILE *f, int indent_level)
static void
xdf_symrec_data_destroy(void *data)
static void
xdf_symrec_data_print(void *data, FILE *f, int indent_level)
static const char *xdf_objfmt_dbgfmt_keywords[] = ;
yasm_objfmt_module yasm_xdf_LTX_objfmt = ;
