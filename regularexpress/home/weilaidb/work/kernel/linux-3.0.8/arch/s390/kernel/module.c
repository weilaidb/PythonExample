#define PLT_ENTRY_SIZE 12
#define PLT_ENTRY_SIZE 20
void *module_alloc(unsigned long size)
void module_free(struct module *mod, void *module_region)
static void
check_rela(Elf_Rela *rela, struct module *me)
int
module_frob_arch_sections(Elf_Ehdr *hdr, Elf_Shdr *sechdrs,
char *secstrings, struct module *me)
int
apply_relocate(Elf_Shdr *sechdrs, const char *strtab, unsigned int symindex,
unsigned int relsec, struct module *me)
static int
apply_rela(Elf_Rela *rela, Elf_Addr base, Elf_Sym *symtab,
struct module *me)
int
apply_relocate_add(Elf_Shdr *sechdrs, const char *strtab,
unsigned int symindex, unsigned int relsec,
struct module *me)
int module_finalize(const Elf_Ehdr *hdr,
const Elf_Shdr *sechdrs,
struct module *me)
void module_arch_cleanup(struct module *mod)
