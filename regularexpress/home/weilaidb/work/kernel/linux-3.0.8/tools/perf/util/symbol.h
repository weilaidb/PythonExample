#define __PERF_SYMBOL 1
extern char *cplus_demangle(const char *, int);
static inline char *bfd_demangle(void __used *v, const char *c, int i)
static inline char *bfd_demangle(void __used *v, const char __used *c,
int __used i)
int hex2u64(const char *ptr, u64 *val);
char *strxfrchar(char *s, char from, char to);
# define PERF_ELF_C_READ_MMAP ELF_C_READ
# define PERF_ELF_C_READ_MMAP ELF_C_READ_MMAP
#define DMGL_PARAMS      (1 << 0)
#define DMGL_ANSI        (1 << 1)
#define BUILD_ID_SIZE 20
struct symbol ;
void symbol__delete(struct symbol *sym);
struct strlist;
struct symbol_conf ;
extern struct symbol_conf symbol_conf;
static inline void *symbol__priv(struct symbol *sym)
struct ref_reloc_sym ;
struct map_symbol ;
struct addr_location ;
enum dso_kernel_type ;
struct dso ;
struct dso *dso__new(const char *name);
struct dso *dso__new_kernel(const char *name);
void dso__delete(struct dso *dso);
int dso__name_len(const struct dso *dso);
bool dso__loaded(const struct dso *dso, enum map_type type);
bool dso__sorted_by_name(const struct dso *dso, enum map_type type);
static inline void dso__set_loaded(struct dso *dso, enum map_type type)
void dso__sort_by_name(struct dso *dso, enum map_type type);
struct dso *__dsos__findnew(struct list_head *head, const char *name);
int dso__load(struct dso *dso, struct map *map, symbol_filter_t filter);
int dso__load_vmlinux(struct dso *dso, struct map *map,
const char *vmlinux, symbol_filter_t filter);
int dso__load_vmlinux_path(struct dso *dso, struct map *map,
symbol_filter_t filter);
int dso__load_kallsyms(struct dso *dso, const char *filename, struct map *map,
symbol_filter_t filter);
int machine__load_kallsyms(struct machine *machine, const char *filename,
enum map_type type, symbol_filter_t filter);
int machine__load_vmlinux_path(struct machine *machine, enum map_type type,
symbol_filter_t filter);
size_t __dsos__fprintf(struct list_head *head, FILE *fp);
size_t machine__fprintf_dsos_buildid(struct machine *machine,
FILE *fp, bool with_hits);
size_t machines__fprintf_dsos(struct rb_root *machines, FILE *fp);
size_t machines__fprintf_dsos_buildid(struct rb_root *machines,
FILE *fp, bool with_hits);
size_t dso__fprintf_buildid(struct dso *dso, FILE *fp);
size_t dso__fprintf_symbols_by_name(struct dso *dso,
enum map_type type, FILE *fp);
size_t dso__fprintf(struct dso *dso, enum map_type type, FILE *fp);
enum symtab_type ;
char dso__symtab_origin(const struct dso *dso);
void dso__set_long_name(struct dso *dso, char *name);
void dso__set_build_id(struct dso *dso, void *build_id);
void dso__read_running_kernel_build_id(struct dso *dso,
struct machine *machine);
struct symbol *dso__find_symbol(struct dso *dso, enum map_type type,
u64 addr);
struct symbol *dso__find_symbol_by_name(struct dso *dso, enum map_type type,
const char *name);
int filename__read_build_id(const char *filename, void *bf, size_t size);
int sysfs__read_build_id(const char *filename, void *bf, size_t size);
bool __dsos__read_build_ids(struct list_head *head, bool with_hits);
int build_id__sprintf(const u8 *build_id, int len, char *bf);
int kallsyms__parse(const char *filename, void *arg,
int (*process_symbol)(void *arg, const char *name,
char type, u64 start, u64 end));
void machine__destroy_kernel_maps(struct machine *machine);
int __machine__create_kernel_maps(struct machine *machine, struct dso *kernel);
int machine__create_kernel_maps(struct machine *machine);
int machines__create_kernel_maps(struct rb_root *machines, pid_t pid);
int machines__create_guest_kernel_maps(struct rb_root *machines);
void machines__destroy_guest_kernel_maps(struct rb_root *machines);
int symbol__init(void);
void symbol__exit(void);
bool symbol_type__is_a(char symbol_type, enum map_type map_type);
size_t machine__fprintf_vmlinux_path(struct machine *machine, FILE *fp);
