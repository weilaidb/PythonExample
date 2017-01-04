#define YASM_OBJFMT_ELF_INTERNAL
static void elf_section_data_destroy(void *data);
static void elf_secthead_print(void *data, FILE *f, int indent_level);
const yasm_assoc_data_callback elf_section_data = ;
static void elf_symrec_data_destroy( void *d);
static void elf_symtab_entry_print(void *data, FILE *f, int indent_level);
static void elf_ssym_symtab_entry_print(void *data, FILE *f, int indent_level);
const yasm_assoc_data_callback elf_symrec_data = ;
const yasm_assoc_data_callback elf_ssym_symrec_data = ;
extern elf_machine_handler
elf_machine_handler_x86_x86,
elf_machine_handler_x86_amd64,
elf_machine_handler_x86_x32;
static const elf_machine_handler *elf_machine_handlers[] =
;
static const elf_machine_handler elf_null_machine = ;
static elf_machine_handler const *elf_march = &elf_null_machine;
static yasm_symrec **elf_ssyms;
const elf_machine_handler *
elf_set_arch(yasm_arch *arch, yasm_symtab *symtab, int bits_pref)
yasm_symrec *
elf_get_special_sym(const char *name, const char *parser)
int elf_ssym_has_flag(yasm_symrec *wrt, int flag);
int
elf_is_wrt_sym_relative(yasm_symrec *wrt)
int
elf_is_wrt_pos_adjusted(yasm_symrec *wrt)
int
elf_ssym_has_flag(yasm_symrec *wrt, int flag)
elf_reloc_entry *
elf_reloc_entry_create(yasm_symrec *sym,
yasm_symrec *wrt,
yasm_intnum *addr,
int rel,
size_t valsize,
int is_GOT_sym)
void
elf_reloc_entry_destroy(void *entry)
elf_strtab_entry *
elf_strtab_entry_create(const char *str)
void
elf_strtab_entry_set_str(elf_strtab_entry *entry, const char *str)
elf_strtab_head *
elf_strtab_create()
elf_strtab_entry *
elf_strtab_append_str(elf_strtab_head *strtab, const char *str)
void
elf_strtab_destroy(elf_strtab_head *strtab)
unsigned long
elf_strtab_output_to_file(FILE *f, elf_strtab_head *strtab)
elf_symtab_entry *
elf_symtab_entry_create(elf_strtab_entry *name,
yasm_symrec *sym)
static void
elf_symtab_entry_destroy(elf_symtab_entry *entry)
static void
elf_symrec_data_destroy(void *data)
static void
elf_symtab_entry_print(void *data, FILE *f, int indent_level)
static void
elf_ssym_symtab_entry_print(void *data, FILE *f, int indent_level)
elf_symtab_head *
elf_symtab_create()
void
elf_symtab_append_entry(elf_symtab_head *symtab, elf_symtab_entry *entry)
void
elf_symtab_insert_local_sym(elf_symtab_head *symtab, elf_symtab_entry *entry)
void
elf_symtab_destroy(elf_symtab_head *symtab)
unsigned long
elf_symtab_assign_indices(elf_symtab_head *symtab)
unsigned long
elf_symtab_write_to_file(FILE *f, elf_symtab_head *symtab,
yasm_errwarns *errwarns)
void elf_symtab_set_nonzero(elf_symtab_entry *entry,
yasm_section *sect,
elf_section_index sectidx,
elf_symbol_binding bind,
elf_symbol_type type,
yasm_expr *xsize,
elf_address *value)
void
elf_sym_set_visibility(elf_symtab_entry *entry,
elf_symbol_vis    vis)
void
elf_sym_set_type(elf_symtab_entry *entry,
elf_symbol_type   type)
void
elf_sym_set_size(elf_symtab_entry *entry,
struct yasm_expr *size)
int
elf_sym_in_table(elf_symtab_entry *entry)
elf_secthead *
elf_secthead_create(elf_strtab_entry    *name,
elf_section_type     type,
elf_section_flags    flags,
elf_address          offset,
elf_size             size)
void
elf_secthead_destroy(elf_secthead *shead)
static void
elf_section_data_destroy(void *data)
static void
elf_secthead_print(void *data, FILE *f, int indent_level)
unsigned long
elf_secthead_write_to_file(FILE *f, elf_secthead *shead,
elf_section_index sindex)
void
elf_secthead_append_reloc(yasm_section *sect, elf_secthead *shead,
elf_reloc_entry *reloc)
char *
elf_secthead_name_reloc_section(const char *basesect)
void
elf_handle_reloc_addend(yasm_intnum *intn,
elf_reloc_entry *reloc,
unsigned long offset)
unsigned long
elf_secthead_write_rel_to_file(FILE *f, elf_section_index symtab_idx,
yasm_section *sect, elf_secthead *shead,
elf_section_index sindex)
unsigned long
elf_secthead_write_relocs_to_file(FILE *f, yasm_section *sect,
elf_secthead *shead, yasm_errwarns *errwarns)
elf_section_type
elf_secthead_get_type(elf_secthead *shead)
void
elf_secthead_set_typeflags(elf_secthead *shead, elf_section_type type,
elf_section_flags flags)
int
elf_secthead_is_empty(elf_secthead *shead)
yasm_symrec *
elf_secthead_get_sym(elf_secthead *shead)
elf_section_index
elf_secthead_get_index(elf_secthead *shead)
unsigned long
elf_secthead_get_align(const elf_secthead *shead)
unsigned long
elf_secthead_set_align(elf_secthead *shead, unsigned long align)
elf_section_info
elf_secthead_set_info(elf_secthead *shead, elf_section_info info)
elf_section_index
elf_secthead_set_index(elf_secthead *shead, elf_section_index sectidx)
elf_section_index
elf_secthead_set_link(elf_secthead *shead, elf_section_index link)
elf_section_index
elf_secthead_set_rel_index(elf_secthead *shead, elf_section_index sectidx)
elf_strtab_entry *
elf_secthead_set_rel_name(elf_secthead *shead, elf_strtab_entry *entry)
elf_size
elf_secthead_set_entsize(elf_secthead *shead, elf_size size)
yasm_symrec *
elf_secthead_set_sym(elf_secthead *shead, yasm_symrec *sym)
void
elf_secthead_add_size(elf_secthead *shead, yasm_intnum *size)
long
elf_secthead_set_file_offset(elf_secthead *shead, long pos)
unsigned long
elf_proghead_get_size(void)
unsigned long
elf_proghead_write_to_file(FILE *f,
elf_offset secthead_addr,
unsigned long secthead_count,
elf_section_index shstrtab_index)
