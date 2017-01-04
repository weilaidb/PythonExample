typedef struct yasm_objfmt_elf  yasm_objfmt_elf;
typedef struct  elf_objfmt_output_info;
typedef struct  build_symtab_info;
yasm_objfmt_module yasm_elf_LTX_objfmt;
yasm_objfmt_module yasm_elf32_LTX_objfmt;
yasm_objfmt_module yasm_elf64_LTX_objfmt;
yasm_objfmt_module yasm_elfx32_LTX_objfmt;
static elf_symtab_entry *
elf_objfmt_symtab_append(yasm_objfmt_elf *objfmt_elf, yasm_symrec *sym,
elf_section_index sectidx, elf_symbol_binding bind,
elf_symbol_type type, elf_symbol_vis vis,
yasm_expr *size, elf_address *value,
yasm_object *object)
static elf_symtab_entry *
build_extern(yasm_objfmt_elf *objfmt_elf, yasm_symrec *sym, yasm_object *object)
struct elf_build_global_data ;
static int
elf_global_helper_valparam(void *obj, yasm_valparam *vp, unsigned long line,
void *d)
static int
elf_global_helper_vis(void *obj, yasm_valparam *vp, unsigned long line,
void *d, uintptr_t vis)
static elf_symtab_entry *
build_global(yasm_objfmt_elf *objfmt_elf, yasm_symrec *sym, yasm_object *object)
static elf_symtab_entry *
build_common(yasm_objfmt_elf *objfmt_elf, yasm_symrec *sym, yasm_object *object)
static int
elf_objfmt_build_symtab(yasm_symrec *sym, void *d)
static yasm_objfmt *
elf_objfmt_create_common(yasm_object *object, yasm_objfmt_module *module,
int bits_pref,
const elf_machine_handler **elf_march_out)
static yasm_objfmt *
elf_objfmt_create(yasm_object *object)
static yasm_objfmt *
elf32_objfmt_create(yasm_object *object)
static yasm_objfmt *
elf64_objfmt_create(yasm_object *object)
static yasm_objfmt *
elfx32_objfmt_create(yasm_object *object)
static long
elf_objfmt_output_align(FILE *f, unsigned int align)
static int
elf_objfmt_output_reloc(yasm_symrec *sym, yasm_bytecode *bc,
unsigned char *buf, unsigned int destsize,
unsigned int valsize, int warn, void *d)
static int
elf_objfmt_output_value(yasm_value *value, unsigned char *buf,
unsigned int destsize, unsigned long offset,
yasm_bytecode *bc, int warn, void *d)
static int
elf_objfmt_output_bytecode(yasm_bytecode *bc, void *d)
static int
elf_objfmt_output_section(yasm_section *sect, void *d)
static int
elf_objfmt_output_secthead(yasm_section *sect, void *d)
static void
elf_objfmt_output(yasm_object *object, FILE *f, int all_syms,
yasm_errwarns *errwarns)
static void
elf_objfmt_destroy(yasm_objfmt *objfmt)
static void
elf_objfmt_init_new_section(yasm_section *sect, unsigned long line)
static yasm_section *
elf_objfmt_add_default_section(yasm_object *object)
struct elf_section_switch_data ;
static int
elf_helper_gasflags(void *obj, yasm_valparam *vp, unsigned long line, void *d, uintptr_t arg)
static yasm_section *
elf_objfmt_section_switch(yasm_object *object, yasm_valparamhead *valparams, yasm_valparamhead *objext_valparams,
unsigned long line)
static yasm_symrec *
elf_objfmt_get_special_sym(yasm_object *object, const char *name,
const char *parser)
static void
dir_type(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
static void
dir_size(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
static void
dir_weak(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
static void
dir_ident(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
static const char *elf_objfmt_dbgfmt_keywords[] = ;
static const yasm_directive elf_objfmt_directives[] = ;
static const char *elf_nasm_stdmac[] = ;
static const yasm_stdmac elf_objfmt_stdmacs[] = ;
yasm_objfmt_module yasm_elf_LTX_objfmt = ;
yasm_objfmt_module yasm_elf32_LTX_objfmt = ;
yasm_objfmt_module yasm_elf64_LTX_objfmt = ;
yasm_objfmt_module yasm_elfx32_LTX_objfmt = ;
