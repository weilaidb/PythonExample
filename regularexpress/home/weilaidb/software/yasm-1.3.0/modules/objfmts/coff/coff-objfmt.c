#define REGULAR_OUTBUF_SIZE     1024
#define COFF_SET_VMA    (!objfmt_coff->win32)
#define COFF_MACHINE_I386       0x014C
#define COFF_MACHINE_AMD64      0x8664
#define COFF_F_LNNO     0x0004
#define COFF_F_LSYMS    0x0008
#define COFF_F_AR32WR   0x0100
typedef struct coff_reloc  coff_reloc;
#define COFF_STYP_TEXT          0x00000020UL
#define COFF_STYP_DATA          0x00000040UL
#define COFF_STYP_BSS           0x00000080UL
#define COFF_STYP_INFO          0x00000200UL
#define COFF_STYP_STD_MASK      0x000003FFUL
#define COFF_STYP_ALIGN_MASK    0x00F00000UL
#define COFF_STYP_ALIGN_SHIFT   20
#define COFF_STYP_NRELOC_OVFL   0x01000000UL
#define COFF_STYP_DISCARD       0x02000000UL
#define COFF_STYP_NOCACHE       0x04000000UL
#define COFF_STYP_NOPAGE        0x08000000UL
#define COFF_STYP_SHARED        0x10000000UL
#define COFF_STYP_EXECUTE       0x20000000UL
#define COFF_STYP_READ          0x40000000UL
#define COFF_STYP_WRITE         0x80000000UL
#define COFF_STYP_WIN32_MASK    0xFF000000UL
#define COFF_FLAG_NOBASE        (1UL<<0)
typedef struct coff_section_data  coff_section_data;
typedef enum coff_symrec_sclass  coff_symrec_sclass;
typedef union coff_symtab_auxent  coff_symtab_auxent;
typedef enum coff_symtab_auxtype  coff_symtab_auxtype;
typedef struct coff_symrec_data  coff_symrec_data;
typedef struct yasm_objfmt_coff  yasm_objfmt_coff;
typedef struct coff_objfmt_output_info  coff_objfmt_output_info;
coff_section_data_destroy;
coff_section_data_print;
static const yasm_assoc_data_callback coff_section_data_cb = ;
coff_symrec_data_destroy;
coff_symrec_data_print;
static const yasm_assoc_data_callback coff_symrec_data_cb = ;
win32_sxdata_bc_destroy;
win32_sxdata_bc_print;
static int win32_sxdata_bc_calc_len
(yasm_bytecode *bc, yasm_bc_add_span_func add_span, void *add_span_data);
static int win32_sxdata_bc_tobytes
(yasm_bytecode *bc, unsigned char **bufp, unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
static const yasm_bytecode_callback win32_sxdata_bc_callback = ;
yasm_objfmt_module yasm_coff_LTX_objfmt;
yasm_objfmt_module yasm_win32_LTX_objfmt;
yasm_objfmt_module yasm_win64_LTX_objfmt;
coff_objfmt_sym_set_data
coff_common_create
coff_objfmt_create
win32_objfmt_create
win64_objfmt_create
coff_objfmt_init_new_section
coff_objfmt_set_section_addr
coff_objfmt_output_value
coff_objfmt_output_bytecode
coff_objfmt_output_section
coff_objfmt_output_sectstr
coff_objfmt_output_secthead
coff_objfmt_count_sym
coff_objfmt_output_sym
coff_objfmt_output_str
coff_objfmt_output
coff_objfmt_destroy
coff_objfmt_add_default_section
struct coff_section_switch_data ;
coff_helper_gasflags
coff_objfmt_section_switch
coff_objfmt_get_special_sym
win64_objfmt_get_special_sym
coff_section_data_destroy
coff_section_data_print
coff_symrec_data_destroy
coff_symrec_data_print
dir_export
dir_safeseh
win32_sxdata_bc_destroy
win32_sxdata_bc_print
win32_sxdata_bc_calc_len
win32_sxdata_bc_tobytes
dir_ident
dir_secrel32
dir_def
dir_scl
dir_type
dir_endef
dir_proc_frame
procframe_checkstate
get_curpos
dir_pushreg
dir_setframe
dir_allocstack
dir_save_common
dir_savereg
dir_savexmm128
dir_pushframe
dir_endprolog
dir_endproc_frame
static const char *coff_objfmt_dbgfmt_keywords[] = ;
static const yasm_directive coff_objfmt_directives[] = ;
yasm_objfmt_module yasm_coff_LTX_objfmt = ;
static const char *winXX_objfmt_dbgfmt_keywords[] = ;
static const yasm_directive win32_objfmt_directives[] = ;
static const char *win32_nasm_stdmac[] = ;
static const yasm_stdmac win32_objfmt_stdmacs[] = ;
yasm_objfmt_module yasm_win32_LTX_objfmt = ;
static const yasm_directive win64_objfmt_directives[] = ;
static const yasm_stdmac win64_objfmt_stdmacs[] = ;
yasm_objfmt_module yasm_win64_LTX_objfmt = ;
yasm_objfmt_module yasm_x64_LTX_objfmt = ;
