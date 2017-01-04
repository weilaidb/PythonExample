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
static void coff_section_data_destroy( void *d);
static void coff_section_data_print(void *data, FILE *f, int indent_level);
static const yasm_assoc_data_callback coff_section_data_cb = ;
static void coff_symrec_data_destroy( void *d);
static void coff_symrec_data_print(void *data, FILE *f, int indent_level);
static const yasm_assoc_data_callback coff_symrec_data_cb = ;
static void win32_sxdata_bc_destroy(void *contents);
static void win32_sxdata_bc_print(const void *contents, FILE *f,
int indent_level);
static int win32_sxdata_bc_calc_len
(yasm_bytecode *bc, yasm_bc_add_span_func add_span, void *add_span_data);
static int win32_sxdata_bc_tobytes
(yasm_bytecode *bc, unsigned char **bufp, unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
static const yasm_bytecode_callback win32_sxdata_bc_callback = ;
yasm_objfmt_module yasm_coff_LTX_objfmt;
yasm_objfmt_module yasm_win32_LTX_objfmt;
yasm_objfmt_module yasm_win64_LTX_objfmt;
static coff_symrec_data *
coff_objfmt_sym_set_data(yasm_symrec *sym, coff_symrec_sclass sclass,
int numaux, coff_symtab_auxtype auxtype)
static yasm_objfmt_coff *
coff_common_create(yasm_object *object)
static yasm_objfmt *
coff_objfmt_create(yasm_object *object)
static yasm_objfmt *
win32_objfmt_create(yasm_object *object)
static yasm_objfmt *
win64_objfmt_create(yasm_object *object)
static void
coff_objfmt_init_new_section(yasm_section *sect, unsigned long line)
static int
coff_objfmt_set_section_addr(yasm_section *sect, void *d)
static int
coff_objfmt_output_value(yasm_value *value, unsigned char *buf,
unsigned int destsize, unsigned long offset,
yasm_bytecode *bc, int warn, void *d)
static int
coff_objfmt_output_bytecode(yasm_bytecode *bc, void *d)
static int
coff_objfmt_output_section(yasm_section *sect, void *d)
static int
coff_objfmt_output_sectstr(yasm_section *sect, void *d)
static int
coff_objfmt_output_secthead(yasm_section *sect, void *d)
static int
coff_objfmt_count_sym(yasm_symrec *sym, void *d)
static int
coff_objfmt_output_sym(yasm_symrec *sym, void *d)
static int
coff_objfmt_output_str(yasm_symrec *sym, void *d)
static void
coff_objfmt_output(yasm_object *object, FILE *f, int all_syms,
yasm_errwarns *errwarns)
static void
coff_objfmt_destroy(yasm_objfmt *objfmt)
static yasm_section *
coff_objfmt_add_default_section(yasm_object *object)
struct coff_section_switch_data ;
static int
coff_helper_gasflags(void *obj, yasm_valparam *vp, unsigned long line, void *d, uintptr_t arg)
static yasm_section *
coff_objfmt_section_switch(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams,
unsigned long line)
static yasm_symrec *
coff_objfmt_get_special_sym(yasm_object *object, const char *name,
const char *parser)
static yasm_symrec *
win64_objfmt_get_special_sym(yasm_object *object, const char *name,
const char *parser)
static void
coff_section_data_destroy(void *data)
static void
coff_section_data_print(void *data, FILE *f, int indent_level)
static void
coff_symrec_data_destroy(void *data)
static void
coff_symrec_data_print(void *data, FILE *f, int indent_level)
static void
dir_export(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
static void
dir_safeseh(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
static void
win32_sxdata_bc_destroy(void *contents)
static void
win32_sxdata_bc_print(const void *contents, FILE *f, int indent_level)
static int
win32_sxdata_bc_calc_len(yasm_bytecode *bc, yasm_bc_add_span_func add_span,
void *add_span_data)
static int
win32_sxdata_bc_tobytes(yasm_bytecode *bc, unsigned char **bufp,
unsigned char *bufstart, void *d,
yasm_output_value_func output_value,
yasm_output_reloc_func output_reloc)
static void
dir_ident(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
static void
dir_secrel32(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
static void
dir_def(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
static void
dir_scl(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
static void
dir_type(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
static void
dir_endef(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
static void
dir_proc_frame(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
static int
procframe_checkstate(yasm_objfmt_coff *objfmt_coff, const char *dirname)
static yasm_symrec *
get_curpos(yasm_object *object, const char *dirname, unsigned long line)
static void
dir_pushreg(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
static void
dir_setframe(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
static void
dir_allocstack(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
static void
dir_save_common(yasm_object *object, yasm_valparamhead *valparams,
unsigned long line, const char *name, int op)
static void
dir_savereg(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
static void
dir_savexmm128(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
static void
dir_pushframe(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
static void
dir_endprolog(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
static void
dir_endproc_frame(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
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
