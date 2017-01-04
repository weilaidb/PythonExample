LIST_HEAD(module_bug_list);
void *module_alloc(unsigned long size)
void module_free(struct module *mod, void *module_region)
static const Elf_Shdr *find_section(const Elf_Ehdr *hdr,
const Elf_Shdr *sechdrs,
const char *name)
int module_finalize(const Elf_Ehdr *hdr,
const Elf_Shdr *sechdrs, struct module *me)
void module_arch_cleanup(struct module *mod)
