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
xdf_section_data_destroy;
xdf_section_data_print;
static const yasm_assoc_data_callback xdf_section_data_cb = ;
xdf_symrec_data_destroy;
xdf_symrec_data_print;
static const yasm_assoc_data_callback xdf_symrec_data_cb = ;
yasm_objfmt_module yasm_xdf_LTX_objfmt;
xdf_objfmt_create
xdf_objfmt_output_value
xdf_objfmt_output_bytecode
xdf_objfmt_output_section
xdf_objfmt_output_secthead
xdf_objfmt_count_sym
xdf_objfmt_output_sym
xdf_objfmt_output_str
xdf_objfmt_output
xdf_objfmt_destroy
xdf_objfmt_init_new_section
xdf_objfmt_add_default_section
xdf_helper_use
xdf_objfmt_section_switch
xdf_objfmt_get_special_sym
xdf_section_data_destroy
xdf_section_data_print
xdf_symrec_data_destroy
xdf_symrec_data_print
static const char *xdf_objfmt_dbgfmt_keywords[] = ;
yasm_objfmt_module yasm_xdf_LTX_objfmt = ;
