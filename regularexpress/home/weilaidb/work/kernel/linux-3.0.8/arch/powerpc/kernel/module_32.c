static unsigned int count_relocs(const Elf32_Rela *rela, unsigned int num)
static int relacmp(const void *_x, const void *_y)
static void relaswap(void *_x, void *_y, int size)
static unsigned long get_plt_size(const Elf32_Ehdr *hdr,
const Elf32_Shdr *sechdrs,
const char *secstrings,
int is_init)
int module_frob_arch_sections(Elf32_Ehdr *hdr,
Elf32_Shdr *sechdrs,
char *secstrings,
struct module *me)
int apply_relocate(Elf32_Shdr *sechdrs,
const char *strtab,
unsigned int symindex,
unsigned int relsec,
struct module *module)
static inline int entry_matches(struct ppc_plt_entry *entry, Elf32_Addr val)
static uint32_t do_plt_call(void *location,
Elf32_Addr val,
Elf32_Shdr *sechdrs,
struct module *mod)
int apply_relocate_add(Elf32_Shdr *sechdrs,
const char *strtab,
unsigned int symindex,
unsigned int relsec,
struct module *module)
