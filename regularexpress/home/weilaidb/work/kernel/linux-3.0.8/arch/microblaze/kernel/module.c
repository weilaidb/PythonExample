void *module_alloc(unsigned long size)
void module_free(struct module *module, void *region)
int module_frob_arch_sections(Elf_Ehdr *hdr,
Elf_Shdr *sechdrs,
char *secstrings,
struct module *mod)
int apply_relocate(Elf32_Shdr *sechdrs, const char *strtab,
unsigned int symindex, unsigned int relsec, struct module *module)
int apply_relocate_add(Elf32_Shdr *sechdrs, const char *strtab,
unsigned int symindex, unsigned int relsec, struct module *module)
int module_finalize(const Elf32_Ehdr *hdr, const Elf_Shdr *sechdrs,
struct module *module)
void module_arch_cleanup(struct module *mod)
