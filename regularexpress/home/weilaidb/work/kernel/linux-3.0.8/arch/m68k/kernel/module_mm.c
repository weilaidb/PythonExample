void *module_alloc(unsigned long size)
void module_free(struct module *mod, void *module_region)
int module_frob_arch_sections(Elf_Ehdr *hdr,
Elf_Shdr *sechdrs,
char *secstrings,
struct module *mod)
int apply_relocate(Elf32_Shdr *sechdrs,
const char *strtab,
unsigned int symindex,
unsigned int relsec,
struct module *me)
int apply_relocate_add(Elf32_Shdr *sechdrs,
const char *strtab,
unsigned int symindex,
unsigned int relsec,
struct module *me)
int module_finalize(const Elf_Ehdr *hdr,
const Elf_Shdr *sechdrs,
struct module *mod)
void module_arch_cleanup(struct module *mod)
void module_fixup(struct module *mod, struct m68k_fixup_info *start,
struct m68k_fixup_info *end)
