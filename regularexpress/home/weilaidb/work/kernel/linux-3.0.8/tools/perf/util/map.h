#define __PERF_MAP_H
enum map_type ;
#define MAP__NR_TYPES (MAP__VARIABLE + 1)
extern const char *map_type__name[MAP__NR_TYPES];
struct dso;
struct ref_reloc_sym;
struct map_groups;
struct machine;
struct map ;
struct kmap ;
struct map_groups ;
#define	HOST_KERNEL_ID			(-1)
#define	DEFAULT_GUEST_KERNEL_ID		(0)
struct machine ;
static inline
struct map *machine__kernel_map(struct machine *self, enum map_type type)
static inline struct kmap *map__kmap(struct map *self)
static inline u64 map__map_ip(struct map *map, u64 ip)
static inline u64 map__unmap_ip(struct map *map, u64 ip)
static inline u64 identity__map_ip(struct map *map __used, u64 ip)
u64 map__rip_2objdump(struct map *map, u64 rip);
u64 map__objdump_2ip(struct map *map, u64 addr);
struct symbol;
typedef int (*symbol_filter_t)(struct map *map, struct symbol *sym);
void map__init(struct map *self, enum map_type type,
u64 start, u64 end, u64 pgoff, struct dso *dso);
struct map *map__new(struct list_head *dsos__list, u64 start, u64 len,
u64 pgoff, u32 pid, char *filename,
enum map_type type);
void map__delete(struct map *self);
struct map *map__clone(struct map *self);
int map__overlap(struct map *l, struct map *r);
size_t map__fprintf(struct map *self, FILE *fp);
int map__load(struct map *self, symbol_filter_t filter);
struct symbol *map__find_symbol(struct map *self,
u64 addr, symbol_filter_t filter);
struct symbol *map__find_symbol_by_name(struct map *self, const char *name,
symbol_filter_t filter);
void map__fixup_start(struct map *self);
void map__fixup_end(struct map *self);
void map__reloc_vmlinux(struct map *self);
size_t __map_groups__fprintf_maps(struct map_groups *self,
enum map_type type, int verbose, FILE *fp);
void maps__insert(struct rb_root *maps, struct map *map);
void maps__remove(struct rb_root *self, struct map *map);
struct map *maps__find(struct rb_root *maps, u64 addr);
void map_groups__init(struct map_groups *self);
void map_groups__exit(struct map_groups *self);
int map_groups__clone(struct map_groups *self,
struct map_groups *parent, enum map_type type);
size_t map_groups__fprintf(struct map_groups *self, int verbose, FILE *fp);
size_t map_groups__fprintf_maps(struct map_groups *self, int verbose, FILE *fp);
typedef void (*machine__process_t)(struct machine *self, void *data);
void machines__process(struct rb_root *self, machine__process_t process, void *data);
struct machine *machines__add(struct rb_root *self, pid_t pid,
const char *root_dir);
struct machine *machines__find_host(struct rb_root *self);
struct machine *machines__find(struct rb_root *self, pid_t pid);
struct machine *machines__findnew(struct rb_root *self, pid_t pid);
char *machine__mmap_name(struct machine *self, char *bf, size_t size);
int machine__init(struct machine *self, const char *root_dir, pid_t pid);
void machine__exit(struct machine *self);
void machine__delete(struct machine *self);
static inline bool machine__is_default_guest(struct machine *self)
static inline bool machine__is_host(struct machine *self)
static inline void map_groups__insert(struct map_groups *self, struct map *map)
static inline void map_groups__remove(struct map_groups *self, struct map *map)
static inline struct map *map_groups__find(struct map_groups *self,
enum map_type type, u64 addr)
struct symbol *map_groups__find_symbol(struct map_groups *self,
enum map_type type, u64 addr,
struct map **mapp,
symbol_filter_t filter);
struct symbol *map_groups__find_symbol_by_name(struct map_groups *self,
enum map_type type,
const char *name,
struct map **mapp,
symbol_filter_t filter);
static inline
struct symbol *machine__find_kernel_symbol(struct machine *self,
enum map_type type, u64 addr,
struct map **mapp,
symbol_filter_t filter)
static inline
struct symbol *machine__find_kernel_function(struct machine *self, u64 addr,
struct map **mapp,
symbol_filter_t filter)
static inline
struct symbol *map_groups__find_function_by_name(struct map_groups *self,
const char *name, struct map **mapp,
symbol_filter_t filter)
static inline
struct symbol *machine__find_kernel_function_by_name(struct machine *self,
const char *name,
struct map **mapp,
symbol_filter_t filter)
int map_groups__fixup_overlappings(struct map_groups *self, struct map *map,
int verbose, FILE *fp);
struct map *map_groups__find_by_name(struct map_groups *self,
enum map_type type, const char *name);
struct map *machine__new_module(struct machine *self, u64 start, const char *filename);
void map_groups__flush(struct map_groups *self);
