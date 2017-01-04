void *
module_alloc(unsigned long size)
void
module_free(struct module *mod, void *module_region)
struct got_entry ;
static inline void
process_reloc_for_got(Elf64_Rela *rela,
struct got_entry *chains, Elf64_Xword *poffset)
int
module_frob_arch_sections(Elf64_Ehdr *hdr, Elf64_Shdr *sechdrs,
char *secstrings, struct module *me)
int
apply_relocate(Elf64_Shdr *sechdrs, const char *strtab, unsigned int symindex,
unsigned int relsec, struct module *me)
int
apply_relocate_add(Elf64_Shdr *sechdrs, const char *strtab,
unsigned int symindex, unsigned int relsec,
struct module *me)
int
module_finalize(const Elf_Ehdr *hdr, const Elf_Shdr *sechdrs,
struct module *me)
void
module_arch_cleanup(struct module *mod)
