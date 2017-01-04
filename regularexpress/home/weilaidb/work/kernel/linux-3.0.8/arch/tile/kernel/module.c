# define Elf_Rela Elf64_Rela
# define ELF_R_SYM ELF64_R_SYM
# define ELF_R_TYPE ELF64_R_TYPE
# define Elf_Rela Elf32_Rela
# define ELF_R_SYM ELF32_R_SYM
# define ELF_R_TYPE ELF32_R_TYPE
#define DEBUGP printk
#define DEBUGP(fmt...)
void *module_alloc(unsigned long size)
void module_free(struct module *mod, void *module_region)
int module_frob_arch_sections(Elf_Ehdr *hdr,
Elf_Shdr *sechdrs,
char *secstrings,
struct module *mod)
int apply_relocate(Elf_Shdr *sechdrs,
const char *strtab,
unsigned int symindex,
unsigned int relsec,
struct module *me)
static int validate_hw2_last(long value, struct module *me)
static int validate_jumpoff(long value)
int apply_relocate_add(Elf_Shdr *sechdrs,
const char *strtab,
unsigned int symindex,
unsigned int relsec,
struct module *me)
int module_finalize(const Elf_Ehdr *hdr,
const Elf_Shdr *sechdrs,
struct module *me)
void module_arch_cleanup(struct module *mod)
