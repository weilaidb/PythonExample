#undef DEBUG_RELOCATE
void *module_alloc(unsigned long size)
void module_free(struct module *mod, void *module_region)
int module_frob_arch_sections(Elf32_Ehdr *hdr,
Elf32_Shdr *sechdrs,
char *secstrings,
struct module *mod)
static int
decode_calln_opcode (unsigned char *location)
static int
decode_l32r_opcode (unsigned char *location)
int apply_relocate(Elf32_Shdr *sechdrs,
const char *strtab,
unsigned int symindex,
unsigned int relsec,
struct module *mod)
int apply_relocate_add(Elf32_Shdr *sechdrs,
const char *strtab,
unsigned int symindex,
unsigned int relsec,
struct module *mod)
int module_finalize(const Elf_Ehdr *hdr,
const Elf_Shdr *sechdrs,
struct module *mod)
void module_arch_cleanup(struct module *mod)
