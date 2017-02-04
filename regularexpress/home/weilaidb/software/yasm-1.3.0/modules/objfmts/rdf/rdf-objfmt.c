#define REGULAR_OUTBUF_SIZE     1024
#define RDF_MAGIC
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
STAILQ_HEAD xdf_str_head;
typedef struct xdf_str  xdf_str;
typedef struct yasm_objfmt_rdf  yasm_objfmt_rdf;
typedef struct rdf_objfmt_output_info  rdf_objfmt_output_info;
rdf_section_data_destroy;
rdf_section_data_print;
static const yasm_assoc_data_callback rdf_section_data_cb = ;
rdf_symrec_data_destroy;
rdf_symrec_data_print;
static const yasm_assoc_data_callback rdf_symrec_data_cb = ;
yasm_objfmt_module yasm_rdf_LTX_objfmt;
rdf_objfmt_sym_set_data
rdf_objfmt_create
rdf_objfmt_output_value
rdf_objfmt_output_bytecode
rdf_objfmt_output_section_mem
rdf_objfmt_output_section_reloc
rdf_objfmt_output_section_file
#define FLAG_EXT    0x1000
#define FLAG_GLOB   0x2000
#define FLAG_SET    0x4000
#define FLAG_CLR    0x8000
#define FLAG_MASK   0x0fff
rdf_helper_flag
rdf_parse_flags
rdf_objfmt_output_sym
rdf_objfmt_output
rdf_objfmt_destroy
rdf_objfmt_init_new_section
rdf_objfmt_add_default_section
rdf_helper_set_type
struct rdf_section_switch_data ;
rdf_helper_set_reserved
rdf_objfmt_section_switch
rdf_objfmt_get_special_sym
rdf_section_data_destroy
rdf_section_data_print
rdf_symrec_data_destroy
rdf_symrec_data_print
rdf_objfmt_add_libmodule
dir_library
dir_module
static const char *rdf_objfmt_dbgfmt_keywords[] = ;
static const yasm_directive rdf_objfmt_directives[] = ;
static const char *rdf_nasm_stdmac[] = ;
static const yasm_stdmac rdf_objfmt_stdmacs[] = ;
yasm_objfmt_module yasm_rdf_LTX_objfmt = ;
