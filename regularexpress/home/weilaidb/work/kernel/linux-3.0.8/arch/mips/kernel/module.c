#undef DEBUG
struct mips_hi16 ;
static struct mips_hi16 *mips_hi16_list;
static LIST_HEAD(dbe_list);
static DEFINE_SPINLOCK(dbe_lock);
void *module_alloc(unsigned long size)
void module_free(struct module *mod, void *module_region)
int module_frob_arch_sections(Elf_Ehdr *hdr, Elf_Shdr *sechdrs,
char *secstrings, struct module *mod)
static int apply_r_mips_none(struct module *me, u32 *location, Elf_Addr v)
static int apply_r_mips_32_rel(struct module *me, u32 *location, Elf_Addr v)
static int apply_r_mips_32_rela(struct module *me, u32 *location, Elf_Addr v)
static int apply_r_mips_26_rel(struct module *me, u32 *location, Elf_Addr v)
static int apply_r_mips_26_rela(struct module *me, u32 *location, Elf_Addr v)
static int apply_r_mips_hi16_rel(struct module *me, u32 *location, Elf_Addr v)
static int apply_r_mips_hi16_rela(struct module *me, u32 *location, Elf_Addr v)
static int apply_r_mips_lo16_rel(struct module *me, u32 *location, Elf_Addr v)
static int apply_r_mips_lo16_rela(struct module *me, u32 *location, Elf_Addr v)
static int apply_r_mips_64_rela(struct module *me, u32 *location, Elf_Addr v)
static int apply_r_mips_higher_rela(struct module *me, u32 *location,
Elf_Addr v)
static int apply_r_mips_highest_rela(struct module *me, u32 *location,
Elf_Addr v)
static int (*reloc_handlers_rel[]) (struct module *me, u32 *location,
Elf_Addr v) = ;
static int (*reloc_handlers_rela[]) (struct module *me, u32 *location,
Elf_Addr v) = ;
int apply_relocate(Elf_Shdr *sechdrs, const char *strtab,
unsigned int symindex, unsigned int relsec,
struct module *me)
int apply_relocate_add(Elf_Shdr *sechdrs, const char *strtab,
unsigned int symindex, unsigned int relsec,
struct module *me)
const struct exception_table_entry *search_module_dbetables(unsigned long addr)
int module_finalize(const Elf_Ehdr *hdr,
const Elf_Shdr *sechdrs,
struct module *me)
void module_arch_cleanup(struct module *mod)
