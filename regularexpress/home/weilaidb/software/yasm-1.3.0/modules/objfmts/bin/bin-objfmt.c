#define REGULAR_OUTBUF_SIZE     1024
typedef struct bin_section_data  bin_section_data;
typedef struct yasm_objfmt_bin  yasm_objfmt_bin;
typedef struct bin_symrec_data  bin_symrec_data;
static void bin_section_data_destroy( void *d);
static void bin_section_data_print(void *data, FILE *f, int indent_level);
static const yasm_assoc_data_callback bin_section_data_cb = ;
static void bin_symrec_data_destroy( void *d);
static void bin_symrec_data_print(void *data, FILE *f, int indent_level);
static const yasm_assoc_data_callback bin_symrec_data_cb = ;
yasm_objfmt_module yasm_bin_LTX_objfmt;
static yasm_objfmt *
bin_objfmt_create(yasm_object *object)
typedef TAILQ_HEAD(bin_group_head, bin_group) bin_groups;
typedef struct bin_group  bin_group;
static bin_group *
find_group_by_name(bin_groups *groups, const char *name)
static bin_group *
find_group_by_section(bin_groups *groups, yasm_section *section)
static void
bin_group_destroy( bin_group *group)
typedef struct bin_objfmt_output_info  bin_objfmt_output_info;
static int
bin_objfmt_check_sym(yasm_symrec *sym, void *d)
static int
bin_lma_create_group(yasm_section *sect, void *d)
static int
bin_vma_create_group(yasm_section *sect, void *d)
static void
bin_objfmt_align(yasm_intnum *start, const yasm_intnum *align)
static void
group_assign_start_recurse(bin_group *group, yasm_intnum *start,
yasm_intnum *last, yasm_intnum *vdelta,
yasm_intnum *tmp, yasm_errwarns *errwarns)
static void
group_assign_vstart_recurse(bin_group *group, yasm_intnum *start,
yasm_errwarns *errwarns)
static const yasm_intnum *
get_ssym_value(yasm_symrec *sym)
static yasm_expr *
bin_objfmt_expr_xform( yasm_expr *e, void *d)
typedef struct map_output_info  map_output_info;
static int
map_prescan_bytes(yasm_section *sect, void *d)
static void
map_print_intnum(const yasm_intnum *intn, map_output_info *info)
static void
map_sections_summary(bin_groups *groups, map_output_info *info)
static void
map_sections_detail(bin_groups *groups, map_output_info *info)
static int
map_symrec_count(yasm_symrec *sym, void *d)
static int
map_symrec_output(yasm_symrec *sym, void *d)
static void
map_sections_symbols(bin_groups *groups, map_output_info *info)
static void
output_map(bin_objfmt_output_info *info)
static int
check_lma_overlap(yasm_section *sect, void *d)
static int
bin_objfmt_output_value(yasm_value *value, unsigned char *buf,
unsigned int destsize, unsigned long offset, yasm_bytecode *bc,
int warn, void *d)
static int
bin_objfmt_output_bytecode(yasm_bytecode *bc, void *d)
static int
bin_objfmt_no_output_bytecode(yasm_bytecode *bc, void *d)
static int
bin_objfmt_output_section(yasm_section *sect, void *d)
static void
bin_objfmt_cleanup(bin_objfmt_output_info *info)
static void
bin_objfmt_output(yasm_object *object, FILE *f, int all_syms,
yasm_errwarns *errwarns)
static void
bin_objfmt_destroy(yasm_objfmt *objfmt)
static void
define_section_symbol(yasm_symtab *symtab, yasm_section *sect,
const char *sectname, const char *suffix,
enum bin_ssym which, unsigned long line)
static void
bin_objfmt_init_new_section(yasm_section *sect, unsigned long line)
static yasm_section *
bin_objfmt_add_default_section(yasm_object *object)
static int
bin_helper_gasflags(void *obj, yasm_valparam *vp, unsigned long line, void *d, uintptr_t arg)
static yasm_section *
bin_objfmt_section_switch(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams,
unsigned long line)
static yasm_symrec *
bin_objfmt_get_special_sym(yasm_object *object, const char *name,
const char *parser)
static void
bin_objfmt_dir_org(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
struct bin_dir_map_data ;
static int
dir_map_filename(void *obj, yasm_valparam *vp, unsigned long line, void *data)
static void
bin_objfmt_dir_map(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
static void
bin_section_data_destroy(void *data)
static void
bin_section_data_print(void *data, FILE *f, int indent_level)
static void
bin_symrec_data_destroy(void *data)
static void
bin_symrec_data_print(void *data, FILE *f, int indent_level)
static const char *bin_objfmt_dbgfmt_keywords[] = ;
static const yasm_directive bin_objfmt_directives[] = ;
static const char *bin_nasm_stdmac[] = ;
static const yasm_stdmac bin_objfmt_stdmacs[] = ;
yasm_objfmt_module yasm_bin_LTX_objfmt = ;
#define EXE_HEADER_SIZE 0x200
yasm_objfmt_module yasm_dosexe_LTX_objfmt;
static yasm_objfmt *
dosexe_objfmt_create(yasm_object *object)
static unsigned long
get_sym(yasm_object *object, const char *name)
static void
dosexe_objfmt_output(yasm_object *object, FILE *f, int all_syms,
yasm_errwarns *errwarns)
yasm_objfmt_module yasm_dosexe_LTX_objfmt = ;
