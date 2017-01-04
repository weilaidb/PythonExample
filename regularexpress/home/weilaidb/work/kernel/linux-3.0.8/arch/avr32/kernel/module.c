void *module_alloc(unsigned long size)
void module_free(struct module *mod, void *module_region)
static inline int check_rela(Elf32_Rela *rela, struct module *module,
char *strings, Elf32_Sym *symbols)
int module_frob_arch_sections(Elf_Ehdr *hdr, Elf_Shdr *sechdrs,
char *secstrings, struct module *module)
static inline int reloc_overflow(struct module *module, const char *reloc_name,
Elf32_Addr relocation)
#define get_u16(loc)		(*((uint16_t *)loc))
#define put_u16(loc, val)	(*((uint16_t *)loc) = (val))
int apply_relocate_add(Elf32_Shdr *sechdrs, const char *strtab,
unsigned int symindex, unsigned int relindex,
struct module *module)
int apply_relocate(Elf32_Shdr *sechdrs, const char *strtab,
unsigned int symindex, unsigned int relindex,
struct module *module)
int module_finalize(const Elf_Ehdr *hdr, const Elf_Shdr *sechdrs,
struct module *module)
void module_arch_cleanup(struct module *module)
