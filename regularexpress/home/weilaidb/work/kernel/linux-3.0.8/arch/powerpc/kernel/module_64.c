struct ppc64_stub_entry
;
static struct ppc64_stub_entry ppc64_stub =
;
static unsigned int count_relocs(const Elf64_Rela *rela, unsigned int num)
static int relacmp(const void *_x, const void *_y)
static void relaswap(void *_x, void *_y, int size)
static unsigned long get_stubs_size(const Elf64_Ehdr *hdr,
const Elf64_Shdr *sechdrs)
static void dedotify_versions(struct modversion_info *vers,
unsigned long size)
static void dedotify(Elf64_Sym *syms, unsigned int numsyms, char *strtab)
int module_frob_arch_sections(Elf64_Ehdr *hdr,
Elf64_Shdr *sechdrs,
char *secstrings,
struct module *me)
int apply_relocate(Elf64_Shdr *sechdrs,
const char *strtab,
unsigned int symindex,
unsigned int relsec,
struct module *me)
static inline unsigned long my_r2(Elf64_Shdr *sechdrs, struct module *me)
#define PPC_LO(v) ((v) & 0xffff)
#define PPC_HI(v) (((v) >> 16) & 0xffff)
#define PPC_HA(v) PPC_HI ((v) + 0x8000)
static inline int create_stub(Elf64_Shdr *sechdrs,
struct ppc64_stub_entry *entry,
struct ppc64_opd_entry *opd,
struct module *me)
static unsigned long stub_for_addr(Elf64_Shdr *sechdrs,
unsigned long opdaddr,
struct module *me)
static int restore_r2(u32 *instruction, struct module *me)
int apply_relocate_add(Elf64_Shdr *sechdrs,
const char *strtab,
unsigned int symindex,
unsigned int relsec,
struct module *me)
