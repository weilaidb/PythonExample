#define _GNU_SOURCE
#define MODULE_SYMBOL_PREFIX CONFIG_SYMBOL_PREFIX
#define MODULE_SYMBOL_PREFIX ""
int modversions = 0;
int have_vmlinux = 0;
static int all_versions = 0;
static int external_module = 0;
static int vmlinux_section_warnings = 1;
static int warn_unresolved = 0;
static int sec_mismatch_count = 0;
static int sec_mismatch_verbose = 1;
enum export ;
#define PRINTF __attribute__ ((format (printf, 1, 2)))
PRINTF void fatal(const char *fmt, ...)
PRINTF void warn(const char *fmt, ...)
PRINTF void merror(const char *fmt, ...)
static int is_vmlinux(const char *modname)
void *do_nofail(void *ptr, const char *expr)
static struct module *modules;
static struct module *find_module(char *modname)
static struct module *new_module(char *modname)
#define SYMBOL_HASH_SIZE 1024
struct symbol ;
static struct symbol *symbolhash[SYMBOL_HASH_SIZE];
static inline unsigned int tdb_hash(const char *name)
static struct symbol *alloc_symbol(const char *name, unsigned int weak,
struct symbol *next)
static struct symbol *new_symbol(const char *name, struct module *module,
enum export export)
static struct symbol *find_symbol(const char *name)
static struct  export_list[] = ;
static const char *export_str(enum export ex)
static enum export export_no(const char *s)
static enum export export_from_sec(struct elf_info *elf, unsigned int sec)
static struct symbol *sym_add_exported(const char *name, struct module *mod,
enum export export)
static void sym_update_crc(const char *name, struct module *mod,
unsigned int crc, enum export export)
void *grab_file(const char *filename, unsigned long *size)
char *get_next_line(unsigned long *pos, void *file, unsigned long size)
void release_file(void *file, unsigned long size)
static int parse_elf(struct elf_info *info, const char *filename)
static void parse_elf_finish(struct elf_info *info)
static int ignore_undef_symbol(struct elf_info *info, const char *symname)
#define CRC_PFX     MODULE_SYMBOL_PREFIX "__crc_"
#define KSYMTAB_PFX MODULE_SYMBOL_PREFIX "__ksymtab_"
static void handle_modversions(struct module *mod, struct elf_info *info,
Elf_Sym *sym, const char *symname)
static char *next_string(char *string, unsigned long *secsize)
static char *get_next_modinfo(void *modinfo, unsigned long modinfo_len,
const char *tag, char *info)
static char *get_modinfo(void *modinfo, unsigned long modinfo_len,
const char *tag)
static int strrcmp(const char *s, const char *sub)
static const char *sym_name(struct elf_info *elf, Elf_Sym *sym)
static const char *sec_name(struct elf_info *elf, int secindex)
static const char *sech_name(struct elf_info *elf, Elf_Shdr *sechdr)
static int number_prefix(const char *sym)
static int match(const char *sym, const char * const pat[])
static const char *section_white_list[] =
;
static void check_section(const char *modname, struct elf_info *elf,
Elf_Shdr *sechdr)
#define ALL_INIT_DATA_SECTIONS \
".init.setup$", ".init.rodata$", \
".devinit.rodata$", ".cpuinit.rodata$", ".meminit.rodata$" \
".init.data$", ".devinit.data$", ".cpuinit.data$", ".meminit.data$"
#define ALL_EXIT_DATA_SECTIONS \
".exit.data$", ".devexit.data$", ".cpuexit.data$", ".memexit.data$"
#define ALL_INIT_TEXT_SECTIONS \
".init.text$", ".devinit.text$", ".cpuinit.text$", ".meminit.text$"
#define ALL_EXIT_TEXT_SECTIONS \
".exit.text$", ".devexit.text$", ".cpuexit.text$", ".memexit.text$"
#define ALL_XXXINIT_SECTIONS DEV_INIT_SECTIONS, CPU_INIT_SECTIONS, \
MEM_INIT_SECTIONS
#define ALL_XXXEXIT_SECTIONS DEV_EXIT_SECTIONS, CPU_EXIT_SECTIONS, \
MEM_EXIT_SECTIONS
#define ALL_INIT_SECTIONS INIT_SECTIONS, ALL_XXXINIT_SECTIONS
#define ALL_EXIT_SECTIONS EXIT_SECTIONS, ALL_XXXEXIT_SECTIONS
#define DATA_SECTIONS ".data$", ".data.rel$"
#define TEXT_SECTIONS ".text$"
#define INIT_SECTIONS      ".init.*"
#define DEV_INIT_SECTIONS  ".devinit.*"
#define CPU_INIT_SECTIONS  ".cpuinit.*"
#define MEM_INIT_SECTIONS  ".meminit.*"
#define EXIT_SECTIONS      ".exit.*"
#define DEV_EXIT_SECTIONS  ".devexit.*"
#define CPU_EXIT_SECTIONS  ".cpuexit.*"
#define MEM_EXIT_SECTIONS  ".memexit.*"
static const char *init_data_sections[] = ;
static const char *init_sections[] = ;
static const char *init_exit_sections[] =
;
static const char *data_sections[] = ;
#define DEFAULT_SYMBOL_WHITE_LIST					\
"*driver",							\
"*_template",			\
"*_timer",	\
"*_sht",		\
"*_ops",							\
"*_probe",							\
"*_probe_one",							\
"*_console"
static const char *head_sections[] = ;
static const char *linker_symbols[] =
;
enum mismatch ;
struct sectioncheck ;
const struct sectioncheck sectioncheck[] = ;
static const struct sectioncheck *section_mismatch(
const char *fromsec, const char *tosec)
static int secref_whitelist(const struct sectioncheck *mismatch,
const char *fromsec, const char *fromsym,
const char *tosec, const char *tosym)
static Elf_Sym *find_elf_symbol(struct elf_info *elf, Elf64_Sword addr,
Elf_Sym *relsym)
static inline int is_arm_mapping_symbol(const char *str)
static inline int is_valid_name(struct elf_info *elf, Elf_Sym *sym)
static Elf_Sym *find_elf_symbol2(struct elf_info *elf, Elf_Addr addr,
const char *sec)
static char *sec2annotation(const char *s)
static int is_function(Elf_Sym *sym)
static void print_section_list(const char * const list[20])
static void report_sec_mismatch(const char *modname,
const struct sectioncheck *mismatch,
const char *fromsec,
unsigned long long fromaddr,
const char *fromsym,
int from_is_func,
const char *tosec, const char *tosym,
int to_is_func)
static void check_section_mismatch(const char *modname, struct elf_info *elf,
Elf_Rela *r, Elf_Sym *sym, const char *fromsec)
static unsigned int *reloc_location(struct elf_info *elf,
Elf_Shdr *sechdr, Elf_Rela *r)
static int addend_386_rel(struct elf_info *elf, Elf_Shdr *sechdr, Elf_Rela *r)
static int addend_arm_rel(struct elf_info *elf, Elf_Shdr *sechdr, Elf_Rela *r)
static int addend_mips_rel(struct elf_info *elf, Elf_Shdr *sechdr, Elf_Rela *r)
static void section_rela(const char *modname, struct elf_info *elf,
Elf_Shdr *sechdr)
static void section_rel(const char *modname, struct elf_info *elf,
Elf_Shdr *sechdr)
static void check_sec_ref(struct module *mod, const char *modname,
struct elf_info *elf)
static void read_symbols(char *modname)
#define SZ 500
void __attribute__((format(printf, 2, 3))) buf_printf(struct buffer *buf,
const char *fmt, ...)
void buf_write(struct buffer *buf, const char *s, int len)
static void check_for_gpl_usage(enum export exp, const char *m, const char *s)
static void check_for_unused(enum export exp, const char *m, const char *s)
static void check_exports(struct module *mod)
static void add_header(struct buffer *b, struct module *mod)
static void add_staging_flag(struct buffer *b, const char *name)
static int add_versions(struct buffer *b, struct module *mod)
static void add_depends(struct buffer *b, struct module *mod,
struct module *modules)
static void add_srcversion(struct buffer *b, struct module *mod)
static void write_if_changed(struct buffer *b, const char *fname)
static void read_dump(const char *fname, unsigned int kernel)
static int dump_sym(struct symbol *sym)
static void write_dump(const char *fname)
struct ext_sym_list ;
int main(int argc, char **argv)
