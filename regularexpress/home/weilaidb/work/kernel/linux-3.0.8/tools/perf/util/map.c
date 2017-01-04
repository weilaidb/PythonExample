const char *map_type__name[MAP__NR_TYPES] = ;
static inline int is_anon_memory(const char *filename)
void map__init(struct map *self, enum map_type type,
u64 start, u64 end, u64 pgoff, struct dso *dso)
struct map *map__new(struct list_head *dsos__list, u64 start, u64 len,
u64 pgoff, u32 pid, char *filename,
enum map_type type)
void map__delete(struct map *self)
void map__fixup_start(struct map *self)
void map__fixup_end(struct map *self)
#define DSO__DELETED "(deleted)"
int map__load(struct map *self, symbol_filter_t filter)
struct symbol *map__find_symbol(struct map *self, u64 addr,
symbol_filter_t filter)
struct symbol *map__find_symbol_by_name(struct map *self, const char *name,
symbol_filter_t filter)
struct map *map__clone(struct map *self)
int map__overlap(struct map *l, struct map *r)
size_t map__fprintf(struct map *self, FILE *fp)
u64 map__rip_2objdump(struct map *map, u64 rip)
u64 map__objdump_2ip(struct map *map, u64 addr)
void map_groups__init(struct map_groups *self)
static void maps__delete(struct rb_root *self)
static void maps__delete_removed(struct list_head *self)
void map_groups__exit(struct map_groups *self)
void map_groups__flush(struct map_groups *self)
struct symbol *map_groups__find_symbol(struct map_groups *self,
enum map_type type, u64 addr,
struct map **mapp,
symbol_filter_t filter)
struct symbol *map_groups__find_symbol_by_name(struct map_groups *self,
enum map_type type,
const char *name,
struct map **mapp,
symbol_filter_t filter)
size_t __map_groups__fprintf_maps(struct map_groups *self,
enum map_type type, int verbose, FILE *fp)
size_t map_groups__fprintf_maps(struct map_groups *self, int verbose, FILE *fp)
static size_t __map_groups__fprintf_removed_maps(struct map_groups *self,
enum map_type type,
int verbose, FILE *fp)
static size_t map_groups__fprintf_removed_maps(struct map_groups *self,
int verbose, FILE *fp)
size_t map_groups__fprintf(struct map_groups *self, int verbose, FILE *fp)
int map_groups__fixup_overlappings(struct map_groups *self, struct map *map,
int verbose, FILE *fp)
int map_groups__clone(struct map_groups *self,
struct map_groups *parent, enum map_type type)
static u64 map__reloc_map_ip(struct map *map, u64 ip)
static u64 map__reloc_unmap_ip(struct map *map, u64 ip)
void map__reloc_vmlinux(struct map *self)
void maps__insert(struct rb_root *maps, struct map *map)
void maps__remove(struct rb_root *self, struct map *map)
struct map *maps__find(struct rb_root *maps, u64 ip)
int machine__init(struct machine *self, const char *root_dir, pid_t pid)
static void dsos__delete(struct list_head *self)
void machine__exit(struct machine *self)
void machine__delete(struct machine *self)
struct machine *machines__add(struct rb_root *self, pid_t pid,
const char *root_dir)
struct machine *machines__find(struct rb_root *self, pid_t pid)
struct machine *machines__findnew(struct rb_root *self, pid_t pid)
void machines__process(struct rb_root *self, machine__process_t process, void *data)
char *machine__mmap_name(struct machine *self, char *bf, size_t size)
