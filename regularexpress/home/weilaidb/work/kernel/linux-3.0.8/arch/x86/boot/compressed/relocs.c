#define USE_BSD
static void die(char *fmt, ...);
#define ARRAY_SIZE(x) (sizeof(x) / sizeof((x)[0]))
static Elf32_Ehdr ehdr;
static unsigned long reloc_count, reloc_idx;
static unsigned long *relocs;
struct section ;
static struct section *secs;
static const char abs_sym_regex[] =
"^(xen_irq_disable_direct_reloc$|"
"xen_save_fl_direct_reloc$|"
"VDSO|"
"__crc_)";
static regex_t abs_sym_regex_c;
static int is_abs_reloc(const char *sym_name)
static const char rel_sym_regex[] =
"^_end$";
static regex_t rel_sym_regex_c;
static int is_rel_reloc(const char *sym_name)
static void regex_init(void)
static void die(char *fmt, ...)
static const char *sym_type(unsigned type)
static const char *sym_bind(unsigned bind)
static const char *sym_visibility(unsigned visibility)
static const char *rel_type(unsigned type)
static const char *sec_name(unsigned shndx)
static const char *sym_name(const char *sym_strtab, Elf32_Sym *sym)
#if BYTE_ORDER == LITTLE_ENDIAN
#define le16_to_cpu(val) (val)
#define le32_to_cpu(val) (val)
#if BYTE_ORDER == BIG_ENDIAN
#define le16_to_cpu(val) bswap_16(val)
#define le32_to_cpu(val) bswap_32(val)
static uint16_t elf16_to_cpu(uint16_t val)
static uint32_t elf32_to_cpu(uint32_t val)
static void read_ehdr(FILE *fp)
static void read_shdrs(FILE *fp)
static void read_strtabs(FILE *fp)
static void read_symtabs(FILE *fp)
static void read_relocs(FILE *fp)
static void print_absolute_symbols(void)
static void print_absolute_relocs(void)
static void walk_relocs(void (*visit)(Elf32_Rel *rel, Elf32_Sym *sym))
static void count_reloc(Elf32_Rel *rel, Elf32_Sym *sym)
static void collect_reloc(Elf32_Rel *rel, Elf32_Sym *sym)
static int cmp_relocs(const void *va, const void *vb)
static void emit_relocs(int as_text)
static void usage(void)
int main(int argc, char **argv)
