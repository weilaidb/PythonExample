#define RELOC_REACHABLE(val, bits) \
(( ( !((val) & (1<<((bits)-1))) && ((val)>>(bits)) != 0 )  ||	\
( ((val) & (1<<((bits)-1))) && ((val)>>(bits)) != (((__typeof__(val))(~0))>>((bits)+2)))) ? \
0 : 1)
#define CHECK_RELOC(val, bits) \
if (!RELOC_REACHABLE(val, bits))
#define MAX_GOTS	4095
static inline int in_init(struct module *me, void *loc)
static inline int in_core(struct module *me, void *loc)
static inline int in_local(struct module *me, void *loc)
struct got_entry ;
struct stub_entry ;
struct got_entry ;
struct stub_entry ;
#define rnd(x)			(((x)+0x1000)&~0x1fff)
#define fsel(v,a)		((v)+(a))
#define lsel(v,a)		(((v)+(a))>>11)
#define rsel(v,a)		(((v)+(a))&0x7ff)
#define lrsel(v,a)		(((v)+rnd(a))>>11)
#define rrsel(v,a)		((((v)+rnd(a))&0x7ff)+((a)-rnd(a)))
#define mask(x,sz)		((x) & ~((1<<(sz))-1))
static inline int sign_unext(int x, int len)
static inline int low_sign_unext(int x, int len)
static inline int reassemble_14(int as14)
static inline int reassemble_16a(int as16)
static inline int reassemble_17(int as17)
static inline int reassemble_21(int as21)
static inline int reassemble_22(int as22)
void *module_alloc(unsigned long size)
static inline unsigned long count_gots(const Elf_Rela *rela, unsigned long n)
static inline unsigned long count_fdescs(const Elf_Rela *rela, unsigned long n)
static inline unsigned long count_stubs(const Elf_Rela *rela, unsigned long n)
static inline unsigned long count_gots(const Elf_Rela *rela, unsigned long n)
static inline unsigned long count_fdescs(const Elf_Rela *rela, unsigned long n)
static inline unsigned long count_stubs(const Elf_Rela *rela, unsigned long n)
void module_free(struct module *mod, void *module_region)
unsigned int arch_mod_section_prepend(struct module *mod,
unsigned int section)
#define CONST
int module_frob_arch_sections(CONST Elf_Ehdr *hdr,
CONST Elf_Shdr *sechdrs,
CONST char *secstrings,
struct module *me)
static Elf64_Word get_got(struct module *me, unsigned long value, long addend)
static Elf_Addr get_fdesc(struct module *me, unsigned long value)
enum elf_stub_type ;
static Elf_Addr get_stub(struct module *me, unsigned long value, long addend,
enum elf_stub_type stub_type, Elf_Addr loc0, unsigned int targetsec)
int apply_relocate(Elf_Shdr *sechdrs,
const char *strtab,
unsigned int symindex,
unsigned int relsec,
struct module *me)
int apply_relocate_add(Elf_Shdr *sechdrs,
const char *strtab,
unsigned int symindex,
unsigned int relsec,
struct module *me)
int apply_relocate_add(Elf_Shdr *sechdrs,
const char *strtab,
unsigned int symindex,
unsigned int relsec,
struct module *me)
static void
register_unwind_table(struct module *me,
const Elf_Shdr *sechdrs)
static void
deregister_unwind_table(struct module *me)
int module_finalize(const Elf_Ehdr *hdr,
const Elf_Shdr *sechdrs,
struct module *me)
void module_arch_cleanup(struct module *mod)
