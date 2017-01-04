#define YASM_OBJFMT_ELF_INTERNAL
static elf_machine_ssym elf_x86_x86_ssyms[] = ;
static int
elf_x86_x86_accepts_reloc(size_t val, yasm_symrec *wrt)
static void
elf_x86_x86_write_symtab_entry(unsigned char *bufp,
elf_symtab_entry *entry,
yasm_intnum *value_intn,
yasm_intnum *size_intn)
static void
elf_x86_x86_write_secthead(unsigned char *bufp, elf_secthead *shead)
static void
elf_x86_x86_write_secthead_rel(unsigned char *bufp,
elf_secthead *shead,
elf_section_index symtab_idx,
elf_section_index sindex)
static void
elf_x86_x86_handle_reloc_addend(yasm_intnum *intn,
elf_reloc_entry *reloc,
unsigned long offset)
static unsigned int
elf_x86_x86_map_reloc_info_to_type(elf_reloc_entry *reloc)
static void
elf_x86_x86_write_reloc(unsigned char *bufp, elf_reloc_entry *reloc,
unsigned int r_type, unsigned int r_sym)
static void
elf_x86_x86_write_proghead(unsigned char **bufpp,
elf_offset secthead_addr,
unsigned long secthead_count,
elf_section_index shstrtab_index)
const elf_machine_handler
elf_machine_handler_x86_x86 = ;
