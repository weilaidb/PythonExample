#define ARCH_MODULE_DEBUG 0
#if ARCH_MODULE_DEBUG
# define DEBUGP printk
# define inline
# define DEBUGP(fmt , a...)
# define USE_BRL	0
# define USE_BRL	1
#define MAX_LTOFF	((uint64_t) (1 << 22))
#define FORMAT_SHIFT	0
#define FORMAT_BITS	3
#define FORMAT_MASK	((1 << FORMAT_BITS) - 1)
#define VALUE_SHIFT	3
#define VALUE_BITS	5
#define VALUE_MASK	((1 << VALUE_BITS) - 1)
enum reloc_target_format ;
enum reloc_value_formula ;
#define N(reloc)	[R_IA64_##reloc] = #reloc
static const char *reloc_name[256] = ;
#undef N
struct insn;
static inline uint64_t
bundle (const struct insn *insn)
static inline int
slot (const struct insn *insn)
static int
apply_imm64 (struct module *mod, struct insn *insn, uint64_t val)
static int
apply_imm60 (struct module *mod, struct insn *insn, uint64_t val)
static int
apply_imm22 (struct module *mod, struct insn *insn, uint64_t val)
static int
apply_imm21b (struct module *mod, struct insn *insn, uint64_t val)
#if USE_BRL
struct plt_entry ;
static const struct plt_entry ia64_plt_template = ;
static int
patch_plt (struct module *mod, struct plt_entry *plt, long target_ip, unsigned long target_gp)
unsigned long
plt_target (struct plt_entry *plt)
struct plt_entry ;
static const struct plt_entry ia64_plt_template = ;
static int
patch_plt (struct module *mod, struct plt_entry *plt, long target_ip, unsigned long target_gp)
unsigned long
plt_target (struct plt_entry *plt)
void *
module_alloc (unsigned long size)
void
module_free (struct module *mod, void *module_region)
static int
duplicate_reloc (const Elf64_Rela *rela, unsigned int num)
static unsigned int
count_gots (const Elf64_Rela *rela, unsigned int num)
static unsigned int
count_plts (const Elf64_Rela *rela, unsigned int num)
static unsigned int
count_fdescs (const Elf64_Rela *rela, unsigned int num)
int
module_frob_arch_sections (Elf_Ehdr *ehdr, Elf_Shdr *sechdrs, char *secstrings,
struct module *mod)
static inline int
in_init (const struct module *mod, uint64_t addr)
static inline int
in_core (const struct module *mod, uint64_t addr)
static inline int
is_internal (const struct module *mod, uint64_t value)
static uint64_t
get_ltoff (struct module *mod, uint64_t value, int *okp)
static inline int
gp_addressable (struct module *mod, uint64_t value)
static uint64_t
get_plt (struct module *mod, const struct insn *insn, uint64_t value, int *okp)
static uint64_t
get_fdesc (struct module *mod, uint64_t value, int *okp)
static inline int
do_reloc (struct module *mod, uint8_t r_type, Elf64_Sym *sym, uint64_t addend,
Elf64_Shdr *sec, void *location)
int
apply_relocate_add (Elf64_Shdr *sechdrs, const char *strtab, unsigned int symindex,
unsigned int relsec, struct module *mod)
int
apply_relocate (Elf64_Shdr *sechdrs, const char *strtab, unsigned int symindex,
unsigned int relsec, struct module *mod)
static void
register_unwind_table (struct module *mod)
int
module_finalize (const Elf_Ehdr *hdr, const Elf_Shdr *sechdrs, struct module *mod)
void
module_arch_cleanup (struct module *mod)
