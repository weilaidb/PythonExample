#define _GNU_SOURCE
#define KSYM_NAME_LEN 128
#define NT_GNU_BUILD_ID 3
static bool dso__build_id_equal(const struct dso *dso, u8 *build_id);
static int elf_read_build_id(Elf *elf, void *bf, size_t size);
static void dsos__add(struct list_head *head, struct dso *dso);
static struct map *map__new2(u64 start, struct dso *dso, enum map_type type);
static int dso__load_kernel_sym(struct dso *dso, struct map *map,
symbol_filter_t filter);
static int dso__load_guest_kernel_sym(struct dso *dso, struct map *map,
symbol_filter_t filter);
static int vmlinux_path__nr_entries;
static char **vmlinux_path;
struct symbol_conf symbol_conf = ;
int dso__name_len(const struct dso *dso)
bool dso__loaded(const struct dso *dso, enum map_type type)
bool dso__sorted_by_name(const struct dso *dso, enum map_type type)
static void dso__set_sorted_by_name(struct dso *dso, enum map_type type)
bool symbol_type__is_a(char symbol_type, enum map_type map_type)
static void symbols__fixup_end(struct rb_root *symbols)
static void __map_groups__fixup_end(struct map_groups *mg, enum map_type type)
static void map_groups__fixup_end(struct map_groups *mg)
static struct symbol *symbol__new(u64 start, u64 len, u8 binding,
const char *name)
void symbol__delete(struct symbol *sym)
static size_t symbol__fprintf(struct symbol *sym, FILE *fp)
void dso__set_long_name(struct dso *dso, char *name)
static void dso__set_short_name(struct dso *dso, const char *name)
static void dso__set_basename(struct dso *dso)
struct dso *dso__new(const char *name)
static void symbols__delete(struct rb_root *symbols)
void dso__delete(struct dso *dso)
void dso__set_build_id(struct dso *dso, void *build_id)
static void symbols__insert(struct rb_root *symbols, struct symbol *sym)
static struct symbol *symbols__find(struct rb_root *symbols, u64 ip)
struct symbol_name_rb_node ;
static void symbols__insert_by_name(struct rb_root *symbols, struct symbol *sym)
static void symbols__sort_by_name(struct rb_root *symbols,
struct rb_root *source)
static struct symbol *symbols__find_by_name(struct rb_root *symbols,
const char *name)
struct symbol *dso__find_symbol(struct dso *dso,
enum map_type type, u64 addr)
struct symbol *dso__find_symbol_by_name(struct dso *dso, enum map_type type,
const char *name)
void dso__sort_by_name(struct dso *dso, enum map_type type)
int build_id__sprintf(const u8 *build_id, int len, char *bf)
size_t dso__fprintf_buildid(struct dso *dso, FILE *fp)
size_t dso__fprintf_symbols_by_name(struct dso *dso,
enum map_type type, FILE *fp)
size_t dso__fprintf(struct dso *dso, enum map_type type, FILE *fp)
int kallsyms__parse(const char *filename, void *arg,
int (*process_symbol)(void *arg, const char *name,
char type, u64 start, u64 end))
struct process_kallsyms_args ;
static u8 kallsyms2elf_type(char type)
static int map__process_kallsym_symbol(void *arg, const char *name,
char type, u64 start, u64 end)
static int dso__load_all_kallsyms(struct dso *dso, const char *filename,
struct map *map)
static int dso__split_kallsyms(struct dso *dso, struct map *map,
symbol_filter_t filter)
static bool symbol__restricted_filename(const char *filename,
const char *restricted_filename)
int dso__load_kallsyms(struct dso *dso, const char *filename,
struct map *map, symbol_filter_t filter)
static int dso__load_perf_map(struct dso *dso, struct map *map,
symbol_filter_t filter)
#define elf_symtab__for_each_symbol(syms, nr_syms, idx, sym) \
for (idx = 0, gelf_getsym(syms, idx, &sym);\
idx < nr_syms; \
idx++, gelf_getsym(syms, idx, &sym))
static inline uint8_t elf_sym__type(const GElf_Sym *sym)
static inline int elf_sym__is_function(const GElf_Sym *sym)
static inline bool elf_sym__is_object(const GElf_Sym *sym)
static inline int elf_sym__is_label(const GElf_Sym *sym)
static inline const char *elf_sec__name(const GElf_Shdr *shdr,
const Elf_Data *secstrs)
static inline int elf_sec__is_text(const GElf_Shdr *shdr,
const Elf_Data *secstrs)
static inline bool elf_sec__is_data(const GElf_Shdr *shdr,
const Elf_Data *secstrs)
static inline const char *elf_sym__name(const GElf_Sym *sym,
const Elf_Data *symstrs)
static Elf_Scn *elf_section_by_name(Elf *elf, GElf_Ehdr *ep,
GElf_Shdr *shp, const char *name,
size_t *idx)
#define elf_section__for_each_rel(reldata, pos, pos_mem, idx, nr_entries) \
for (idx = 0, pos = gelf_getrel(reldata, 0, &pos_mem); \
idx < nr_entries; \
++idx, pos = gelf_getrel(reldata, idx, &pos_mem))
#define elf_section__for_each_rela(reldata, pos, pos_mem, idx, nr_entries) \
for (idx = 0, pos = gelf_getrela(reldata, 0, &pos_mem); \
idx < nr_entries; \
++idx, pos = gelf_getrela(reldata, idx, &pos_mem))
static int dso__synthesize_plt_symbols(struct  dso *dso, struct map *map,
symbol_filter_t filter)
static bool elf_sym__is_a(GElf_Sym *sym, enum map_type type)
static bool elf_sec__is_a(GElf_Shdr *shdr, Elf_Data *secstrs,
enum map_type type)
static size_t elf_addr_to_index(Elf *elf, GElf_Addr addr)
static int dso__load_sym(struct dso *dso, struct map *map, const char *name,
int fd, symbol_filter_t filter, int kmodule,
int want_symtab)
static bool dso__build_id_equal(const struct dso *dso, u8 *build_id)
bool __dsos__read_build_ids(struct list_head *head, bool with_hits)
#define NOTE_ALIGN(n) (((n) + 3) & -4U)
static int elf_read_build_id(Elf *elf, void *bf, size_t size)
int filename__read_build_id(const char *filename, void *bf, size_t size)
int sysfs__read_build_id(const char *filename, void *build_id, size_t size)
char dso__symtab_origin(const struct dso *dso)
int dso__load(struct dso *dso, struct map *map, symbol_filter_t filter)
struct map *map_groups__find_by_name(struct map_groups *mg,
enum map_type type, const char *name)
static int dso__kernel_module_get_build_id(struct dso *dso,
const char *root_dir)
static int map_groups__set_modules_path_dir(struct map_groups *mg,
const char *dir_name)
static char *get_kernel_version(const char *root_dir)
static int machine__set_modules_path(struct machine *machine)
static struct map *map__new2(u64 start, struct dso *dso, enum map_type type)
struct map *machine__new_module(struct machine *machine, u64 start,
const char *filename)
static int machine__create_modules(struct machine *machine)
int dso__load_vmlinux(struct dso *dso, struct map *map,
const char *vmlinux, symbol_filter_t filter)
int dso__load_vmlinux_path(struct dso *dso, struct map *map,
symbol_filter_t filter)
static int dso__load_kernel_sym(struct dso *dso, struct map *map,
symbol_filter_t filter)
static int dso__load_guest_kernel_sym(struct dso *dso, struct map *map,
symbol_filter_t filter)
static void dsos__add(struct list_head *head, struct dso *dso)
static struct dso *dsos__find(struct list_head *head, const char *name)
struct dso *__dsos__findnew(struct list_head *head, const char *name)
size_t __dsos__fprintf(struct list_head *head, FILE *fp)
size_t machines__fprintf_dsos(struct rb_root *machines, FILE *fp)
static size_t __dsos__fprintf_buildid(struct list_head *head, FILE *fp,
bool with_hits)
size_t machine__fprintf_dsos_buildid(struct machine *machine, FILE *fp,
bool with_hits)
size_t machines__fprintf_dsos_buildid(struct rb_root *machines,
FILE *fp, bool with_hits)
struct dso *dso__new_kernel(const char *name)
static struct dso *dso__new_guest_kernel(struct machine *machine,
const char *name)
void dso__read_running_kernel_build_id(struct dso *dso, struct machine *machine)
static struct dso *machine__create_kernel(struct machine *machine)
struct process_args ;
static int symbol__in_kernel(void *arg, const char *name,
char type __used, u64 start, u64 end __used)
static u64 machine__get_kernel_start_addr(struct machine *machine)
int __machine__create_kernel_maps(struct machine *machine, struct dso *kernel)
void machine__destroy_kernel_maps(struct machine *machine)
int machine__create_kernel_maps(struct machine *machine)
static void vmlinux_path__exit(void)
static int vmlinux_path__init(void)
size_t machine__fprintf_vmlinux_path(struct machine *machine, FILE *fp)
static int setup_list(struct strlist **list, const char *list_str,
const char *list_name)
static bool symbol__read_kptr_restrict(void)
int symbol__init(void)
void symbol__exit(void)
int machines__create_kernel_maps(struct rb_root *machines, pid_t pid)
static int hex(char ch)
int hex2u64(const char *ptr, u64 *long_val)
char *strxfrchar(char *s, char from, char to)
int machines__create_guest_kernel_maps(struct rb_root *machines)
void machines__destroy_guest_kernel_maps(struct rb_root *machines)
int machine__load_kallsyms(struct machine *machine, const char *filename,
enum map_type type, symbol_filter_t filter)
int machine__load_vmlinux_path(struct machine *machine, enum map_type type,
symbol_filter_t filter)
