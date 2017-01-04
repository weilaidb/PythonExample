void *module_alloc(unsigned long size)
void module_free(struct module *mod, void *module_region)
int module_frob_arch_sections(Elf_Ehdr *hdr,
Elf_Shdr *sechdrs,
char *secstrings,
struct module *mod)
static void reloc_put16(uint8_t *p, uint32_t val)
static void reloc_put24(uint8_t *p, uint32_t val)
static void reloc_put32(uint8_t *p, uint32_t val)
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
struct module *me)
void module_arch_cleanup(struct module *mod)
