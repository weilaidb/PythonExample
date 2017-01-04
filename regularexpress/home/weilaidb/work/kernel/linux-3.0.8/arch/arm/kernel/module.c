#undef MODULES_VADDR
#define MODULES_VADDR	(((unsigned long)_etext + ~PGDIR_MASK) & PGDIR_MASK)
void *module_alloc(unsigned long size)
void *module_alloc(unsigned long size)
void module_free(struct module *module, void *region)
int module_frob_arch_sections(Elf_Ehdr *hdr,
Elf_Shdr *sechdrs,
char *secstrings,
struct module *mod)
int
apply_relocate(Elf32_Shdr *sechdrs, const char *strtab, unsigned int symindex,
unsigned int relindex, struct module *module)
int
apply_relocate_add(Elf32_Shdr *sechdrs, const char *strtab,
unsigned int symindex, unsigned int relsec, struct module *module)
struct mod_unwind_map ;
static const Elf_Shdr *find_mod_section(const Elf32_Ehdr *hdr,
const Elf_Shdr *sechdrs, const char *name)
extern void fixup_pv_table(const void *, unsigned long);
extern void fixup_smp(const void *, unsigned long);
int module_finalize(const Elf32_Ehdr *hdr, const Elf_Shdr *sechdrs,
struct module *mod)
void
module_arch_cleanup(struct module *mod)
