#define REGULAR_OUTBUF_SIZE     1024
#define RDF_MAGIC       "RDOFF2"
#define EXIM_LABEL_MAX          64
#define MODLIB_NAME_MAX         128
#define RDF_MAXSEGS             64
#define RDFREC_GENERIC          0
#define RDFREC_RELOC            1
#define RDFREC_IMPORT           2
#define RDFREC_GLOBAL           3
#define RDFREC_DLL              4
#define RDFREC_BSS              5
#define RDFREC_SEGRELOC         6
#define RDFREC_FARIMPORT        7
#define RDFREC_MODNAME          8
#define RDFREC_COMMON           10
#define SYM_DATA        1
#define SYM_FUNCTION    2
#define SYM_GLOBAL      4
#define SYM_IMPORT      8
#define SYM_FAR         16
typedef struct rdf_reloc  rdf_reloc;
typedef struct rdf_section_data  rdf_section_data;
typedef struct rdf_symrec_data  rdf_symrec_data;
typedef STAILQ_HEAD(xdf_str_head, xdf_str) xdf_str_head;
typedef struct xdf_str  xdf_str;
typedef struct yasm_objfmt_rdf  yasm_objfmt_rdf;
typedef struct rdf_objfmt_output_info  rdf_objfmt_output_info;
static void rdf_section_data_destroy( void *d);
static void rdf_section_data_print(void *data, FILE *f, int indent_level);
static const yasm_assoc_data_callback rdf_section_data_cb = ;
static void rdf_symrec_data_destroy( void *d);
static void rdf_symrec_data_print(void *data, FILE *f, int indent_level);
static const yasm_assoc_data_callback rdf_symrec_data_cb = ;
yasm_objfmt_module yasm_rdf_LTX_objfmt;
static rdf_symrec_data *
rdf_objfmt_sym_set_data(yasm_symrec *sym, unsigned int segment)
static yasm_objfmt *
rdf_objfmt_create(yasm_object *object)
static int
rdf_objfmt_output_value(yasm_value *value, unsigned char *buf,
unsigned int destsize, unsigned long offset,
yasm_bytecode *bc, int warn, void *d)
static int
rdf_objfmt_output_bytecode(yasm_bytecode *bc, void *d)
static int
rdf_objfmt_output_section_mem(yasm_section *sect, void *d)
static int
rdf_objfmt_output_section_reloc(yasm_section *sect, void *d)
static int
rdf_objfmt_output_section_file(yasm_section *sect, void *d)
#define FLAG_EXT    0x1000
#define FLAG_GLOB   0x2000
#define FLAG_SET    0x4000
#define FLAG_CLR    0x8000
#define FLAG_MASK   0x0fff
static int
rdf_helper_flag(void *obj, yasm_valparam *vp, unsigned long line, void *d,
uintptr_t flag)
static unsigned int
rdf_parse_flags(yasm_symrec *sym)
static int
rdf_objfmt_output_sym(yasm_symrec *sym, void *d)
static void
rdf_objfmt_output(yasm_object *object, FILE *f, int all_syms,
yasm_errwarns *errwarns)
static void
rdf_objfmt_destroy(yasm_objfmt *objfmt)
static void
rdf_objfmt_init_new_section(yasm_section *sect, unsigned long line)
static yasm_section *
rdf_objfmt_add_default_section(yasm_object *object)
static int
rdf_helper_set_type(void *obj, yasm_valparam *vp, unsigned long line,
void *d, uintptr_t newtype)
struct rdf_section_switch_data ;
static int
rdf_helper_set_reserved(void *obj, yasm_valparam *vp, unsigned long line,
void *d)
static yasm_section *
rdf_objfmt_section_switch(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams,
unsigned long line)
static yasm_symrec *
rdf_objfmt_get_special_sym(yasm_object *object, const char *name,
const char *parser)
static void
rdf_section_data_destroy(void *data)
static void
rdf_section_data_print(void *data, FILE *f, int indent_level)
static void
rdf_symrec_data_destroy(void *data)
static void
rdf_symrec_data_print(void *data, FILE *f, int indent_level)
static void
rdf_objfmt_add_libmodule(yasm_object *object, char *name, int lib)
static void
dir_library(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
static void
dir_module(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
static const char *rdf_objfmt_dbgfmt_keywords[] = ;
static const yasm_directive rdf_objfmt_directives[] = ;
static const char *rdf_nasm_stdmac[] = ;
static const yasm_stdmac rdf_objfmt_stdmacs[] = ;
yasm_objfmt_module yasm_rdf_LTX_objfmt = ;
