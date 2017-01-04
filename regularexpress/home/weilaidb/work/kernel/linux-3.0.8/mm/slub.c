#define SLAB_DEBUG_FLAGS (SLAB_RED_ZONE | SLAB_POISON | SLAB_STORE_USER | \
SLAB_TRACE | SLAB_DEBUG_FREE)
static inline int kmem_cache_debug(struct kmem_cache *s)
#undef SLUB_RESILIENCY_TEST
#define MIN_PARTIAL 5
#define MAX_PARTIAL 10
#define DEBUG_DEFAULT_FLAGS (SLAB_DEBUG_FREE | SLAB_RED_ZONE | \
SLAB_POISON | SLAB_STORE_USER)
#define DEBUG_METADATA_FLAGS (SLAB_RED_ZONE | SLAB_POISON | SLAB_STORE_USER)
#define SLUB_NEVER_MERGE (SLAB_RED_ZONE | SLAB_POISON | SLAB_STORE_USER | \
SLAB_TRACE | SLAB_DESTROY_BY_RCU | SLAB_NOLEAKTRACE | \
SLAB_FAILSLAB)
#define SLUB_MERGE_SAME (SLAB_DEBUG_FREE | SLAB_RECLAIM_ACCOUNT | \
SLAB_CACHE_DMA | SLAB_NOTRACK)
#define OO_SHIFT	16
#define OO_MASK		((1 << OO_SHIFT) - 1)
#define MAX_OBJS_PER_PAGE	65535
#define __OBJECT_POISON		0x80000000UL
static int kmem_size = sizeof(struct kmem_cache);
static struct notifier_block slab_notifier;
static enum  slab_state = DOWN;
static DECLARE_RWSEM(slub_lock);
static LIST_HEAD(slab_caches);
struct track ;
enum track_item ;
static int sysfs_slab_add(struct kmem_cache *);
static int sysfs_slab_alias(struct kmem_cache *, const char *);
static void sysfs_slab_remove(struct kmem_cache *);
static inline int sysfs_slab_add(struct kmem_cache *s)
static inline int sysfs_slab_alias(struct kmem_cache *s, const char *p)
static inline void sysfs_slab_remove(struct kmem_cache *s)
static inline void stat(const struct kmem_cache *s, enum stat_item si)
int slab_is_available(void)
static inline struct kmem_cache_node *get_node(struct kmem_cache *s, int node)
static inline int check_valid_pointer(struct kmem_cache *s,
struct page *page, const void *object)
static inline void *get_freepointer(struct kmem_cache *s, void *object)
static inline void *get_freepointer_safe(struct kmem_cache *s, void *object)
static inline void set_freepointer(struct kmem_cache *s, void *object, void *fp)
#define for_each_object(__p, __s, __addr, __objects) \
for (__p = (__addr); __p < (__addr) + (__objects) * (__s)->size;\
__p += (__s)->size)
static inline int slab_index(void *p, struct kmem_cache *s, void *addr)
static inline size_t slab_ksize(const struct kmem_cache *s)
static inline int order_objects(int order, unsigned long size, int reserved)
static inline struct kmem_cache_order_objects oo_make(int order,
unsigned long size, int reserved)
static inline int oo_order(struct kmem_cache_order_objects x)
static inline int oo_objects(struct kmem_cache_order_objects x)
static void get_map(struct kmem_cache *s, struct page *page, unsigned long *map)
static int slub_debug = DEBUG_DEFAULT_FLAGS;
static int slub_debug;
static char *slub_debug_slabs;
static int disable_higher_order_debug;
static void print_section(char *text, u8 *addr, unsigned int length)
static struct track *get_track(struct kmem_cache *s, void *object,
enum track_item alloc)
static void set_track(struct kmem_cache *s, void *object,
enum track_item alloc, unsigned long addr)
static void init_tracking(struct kmem_cache *s, void *object)
static void print_track(const char *s, struct track *t)
static void print_tracking(struct kmem_cache *s, void *object)
static void print_page_info(struct page *page)
static void slab_bug(struct kmem_cache *s, char *fmt, ...)
static void slab_fix(struct kmem_cache *s, char *fmt, ...)
static void print_trailer(struct kmem_cache *s, struct page *page, u8 *p)
static void object_err(struct kmem_cache *s, struct page *page,
u8 *object, char *reason)
static void slab_err(struct kmem_cache *s, struct page *page, char *fmt, ...)
static void init_object(struct kmem_cache *s, void *object, u8 val)
static u8 *check_bytes(u8 *start, unsigned int value, unsigned int bytes)
static void restore_bytes(struct kmem_cache *s, char *message, u8 data,
void *from, void *to)
static int check_bytes_and_report(struct kmem_cache *s, struct page *page,
u8 *object, char *what,
u8 *start, unsigned int value, unsigned int bytes)
static int check_pad_bytes(struct kmem_cache *s, struct page *page, u8 *p)
static int slab_pad_check(struct kmem_cache *s, struct page *page)
static int check_object(struct kmem_cache *s, struct page *page,
void *object, u8 val)
static int check_slab(struct kmem_cache *s, struct page *page)
static int on_freelist(struct kmem_cache *s, struct page *page, void *search)
static void trace(struct kmem_cache *s, struct page *page, void *object,
int alloc)
static inline int slab_pre_alloc_hook(struct kmem_cache *s, gfp_t flags)
static inline void slab_post_alloc_hook(struct kmem_cache *s, gfp_t flags, void *object)
static inline void slab_free_hook(struct kmem_cache *s, void *x)
static void add_full(struct kmem_cache_node *n, struct page *page)
static void remove_full(struct kmem_cache *s, struct page *page)
static inline unsigned long slabs_node(struct kmem_cache *s, int node)
static inline unsigned long node_nr_slabs(struct kmem_cache_node *n)
static inline void inc_slabs_node(struct kmem_cache *s, int node, int objects)
static inline void dec_slabs_node(struct kmem_cache *s, int node, int objects)
static void setup_object_debug(struct kmem_cache *s, struct page *page,
void *object)
static noinline int alloc_debug_processing(struct kmem_cache *s, struct page *page,
void *object, unsigned long addr)
static noinline int free_debug_processing(struct kmem_cache *s,
struct page *page, void *object, unsigned long addr)
static int __init setup_slub_debug(char *str)
__setup("slub_debug", setup_slub_debug);
static unsigned long kmem_cache_flags(unsigned long objsize,
unsigned long flags, const char *name,
void (*ctor)(void *))
static inline void setup_object_debug(struct kmem_cache *s,
struct page *page, void *object)
static inline int alloc_debug_processing(struct kmem_cache *s,
struct page *page, void *object, unsigned long addr)
static inline int free_debug_processing(struct kmem_cache *s,
struct page *page, void *object, unsigned long addr)
static inline int slab_pad_check(struct kmem_cache *s, struct page *page)
static inline int check_object(struct kmem_cache *s, struct page *page,
void *object, u8 val)
static inline void add_full(struct kmem_cache_node *n, struct page *page)
static inline unsigned long kmem_cache_flags(unsigned long objsize,
unsigned long flags, const char *name,
void (*ctor)(void *))
#define slub_debug 0
#define disable_higher_order_debug 0
static inline unsigned long slabs_node(struct kmem_cache *s, int node)
static inline unsigned long node_nr_slabs(struct kmem_cache_node *n)
static inline void inc_slabs_node(struct kmem_cache *s, int node,
int objects)
static inline void dec_slabs_node(struct kmem_cache *s, int node,
int objects)
static inline int slab_pre_alloc_hook(struct kmem_cache *s, gfp_t flags)
static inline void slab_post_alloc_hook(struct kmem_cache *s, gfp_t flags,
void *object)
static inline void slab_free_hook(struct kmem_cache *s, void *x)
static inline struct page *alloc_slab_page(gfp_t flags, int node,
struct kmem_cache_order_objects oo)
static struct page *allocate_slab(struct kmem_cache *s, gfp_t flags, int node)
static void setup_object(struct kmem_cache *s, struct page *page,
void *object)
static struct page *new_slab(struct kmem_cache *s, gfp_t flags, int node)
static void __free_slab(struct kmem_cache *s, struct page *page)
#define need_reserve_slab_rcu						\
(sizeof(((struct page *)NULL)->lru) < sizeof(struct rcu_head))
static void rcu_free_slab(struct rcu_head *h)
static void free_slab(struct kmem_cache *s, struct page *page)
static void discard_slab(struct kmem_cache *s, struct page *page)
static __always_inline void slab_lock(struct page *page)
static __always_inline void slab_unlock(struct page *page)
static __always_inline int slab_trylock(struct page *page)
static void add_partial(struct kmem_cache_node *n,
struct page *page, int tail)
static inline void __remove_partial(struct kmem_cache_node *n,
struct page *page)
static void remove_partial(struct kmem_cache *s, struct page *page)
static inline int lock_and_freeze_slab(struct kmem_cache_node *n,
struct page *page)
static struct page *get_partial_node(struct kmem_cache_node *n)
static struct page *get_any_partial(struct kmem_cache *s, gfp_t flags)
static struct page *get_partial(struct kmem_cache *s, gfp_t flags, int node)
static void unfreeze_slab(struct kmem_cache *s, struct page *page, int tail)
__releases(bitlock)
#define TID_STEP  roundup_pow_of_two(CONFIG_NR_CPUS)
#define TID_STEP 1
static inline unsigned long next_tid(unsigned long tid)
static inline unsigned int tid_to_cpu(unsigned long tid)
static inline unsigned long tid_to_event(unsigned long tid)
static inline unsigned int init_tid(int cpu)
static inline void note_cmpxchg_failure(const char *n,
const struct kmem_cache *s, unsigned long tid)
void init_kmem_cache_cpus(struct kmem_cache *s)
static void deactivate_slab(struct kmem_cache *s, struct kmem_cache_cpu *c)
__releases(bitlock)
static inline void flush_slab(struct kmem_cache *s, struct kmem_cache_cpu *c)
static inline void __flush_cpu_slab(struct kmem_cache *s, int cpu)
static void flush_cpu_slab(void *d)
static void flush_all(struct kmem_cache *s)
static inline int node_match(struct kmem_cache_cpu *c, int node)
static int count_free(struct page *page)
static unsigned long count_partial(struct kmem_cache_node *n,
int (*get_count)(struct page *))
static inline unsigned long node_nr_objs(struct kmem_cache_node *n)
static noinline void
slab_out_of_memory(struct kmem_cache *s, gfp_t gfpflags, int nid)
static void *__slab_alloc(struct kmem_cache *s, gfp_t gfpflags, int node,
unsigned long addr, struct kmem_cache_cpu *c)
static __always_inline void *slab_alloc(struct kmem_cache *s,
gfp_t gfpflags, int node, unsigned long addr)
void *kmem_cache_alloc(struct kmem_cache *s, gfp_t gfpflags)
EXPORT_SYMBOL(kmem_cache_alloc);
void *kmem_cache_alloc_trace(struct kmem_cache *s, gfp_t gfpflags, size_t size)
EXPORT_SYMBOL(kmem_cache_alloc_trace);
void *kmalloc_order_trace(size_t size, gfp_t flags, unsigned int order)
EXPORT_SYMBOL(kmalloc_order_trace);
void *kmem_cache_alloc_node(struct kmem_cache *s, gfp_t gfpflags, int node)
EXPORT_SYMBOL(kmem_cache_alloc_node);
void *kmem_cache_alloc_node_trace(struct kmem_cache *s,
gfp_t gfpflags,
int node, size_t size)
EXPORT_SYMBOL(kmem_cache_alloc_node_trace);
static void __slab_free(struct kmem_cache *s, struct page *page,
void *x, unsigned long addr)
static __always_inline void slab_free(struct kmem_cache *s,
struct page *page, void *x, unsigned long addr)
void kmem_cache_free(struct kmem_cache *s, void *x)
EXPORT_SYMBOL(kmem_cache_free);
static int slub_min_order;
static int slub_max_order = PAGE_ALLOC_COSTLY_ORDER;
static int slub_min_objects;
static int slub_nomerge;
static inline int slab_order(int size, int min_objects,
int max_order, int fract_leftover, int reserved)
static inline int calculate_order(int size, int reserved)
static unsigned long calculate_alignment(unsigned long flags,
unsigned long align, unsigned long size)
static void
init_kmem_cache_node(struct kmem_cache_node *n, struct kmem_cache *s)
static inline int alloc_kmem_cache_cpus(struct kmem_cache *s)
static struct kmem_cache *kmem_cache_node;
static void early_kmem_cache_node_alloc(int node)
static void free_kmem_cache_nodes(struct kmem_cache *s)
static int init_kmem_cache_nodes(struct kmem_cache *s)
static void set_min_partial(struct kmem_cache *s, unsigned long min)
static int calculate_sizes(struct kmem_cache *s, int forced_order)
static int kmem_cache_open(struct kmem_cache *s,
const char *name, size_t size,
size_t align, unsigned long flags,
void (*ctor)(void *))
unsigned int kmem_cache_size(struct kmem_cache *s)
EXPORT_SYMBOL(kmem_cache_size);
static void list_slab_objects(struct kmem_cache *s, struct page *page,
const char *text)
static void free_partial(struct kmem_cache *s, struct kmem_cache_node *n)
static inline int kmem_cache_close(struct kmem_cache *s)
void kmem_cache_destroy(struct kmem_cache *s)
EXPORT_SYMBOL(kmem_cache_destroy);
struct kmem_cache *kmalloc_caches[SLUB_PAGE_SHIFT];
EXPORT_SYMBOL(kmalloc_caches);
static struct kmem_cache *kmem_cache;
static struct kmem_cache *kmalloc_dma_caches[SLUB_PAGE_SHIFT];
static int __init setup_slub_min_order(char *str)
__setup("slub_min_order=", setup_slub_min_order);
static int __init setup_slub_max_order(char *str)
__setup("slub_max_order=", setup_slub_max_order);
static int __init setup_slub_min_objects(char *str)
__setup("slub_min_objects=", setup_slub_min_objects);
static int __init setup_slub_nomerge(char *str)
__setup("slub_nomerge", setup_slub_nomerge);
static struct kmem_cache *__init create_kmalloc_cache(const char *name,
int size, unsigned int flags)
static s8 size_index[24] = ;
static inline int size_index_elem(size_t bytes)
static struct kmem_cache *get_slab(size_t size, gfp_t flags)
void *__kmalloc(size_t size, gfp_t flags)
EXPORT_SYMBOL(__kmalloc);
static void *kmalloc_large_node(size_t size, gfp_t flags, int node)
void *__kmalloc_node(size_t size, gfp_t flags, int node)
EXPORT_SYMBOL(__kmalloc_node);
size_t ksize(const void *object)
EXPORT_SYMBOL(ksize);
void kfree(const void *x)
EXPORT_SYMBOL(kfree);
int kmem_cache_shrink(struct kmem_cache *s)
EXPORT_SYMBOL(kmem_cache_shrink);
#if defined(CONFIG_MEMORY_HOTPLUG)
static int slab_mem_going_offline_callback(void *arg)
static void slab_mem_offline_callback(void *arg)
static int slab_mem_going_online_callback(void *arg)
static int slab_memory_callback(struct notifier_block *self,
unsigned long action, void *arg)
static void __init kmem_cache_bootstrap_fixup(struct kmem_cache *s)
void __init kmem_cache_init(void)
void __init kmem_cache_init_late(void)
static int slab_unmergeable(struct kmem_cache *s)
static struct kmem_cache *find_mergeable(size_t size,
size_t align, unsigned long flags, const char *name,
void (*ctor)(void *))
struct kmem_cache *kmem_cache_create(const char *name, size_t size,
size_t align, unsigned long flags, void (*ctor)(void *))
EXPORT_SYMBOL(kmem_cache_create);
static int __cpuinit slab_cpuup_callback(struct notifier_block *nfb,
unsigned long action, void *hcpu)
static struct notifier_block __cpuinitdata slab_notifier = ;
void *__kmalloc_track_caller(size_t size, gfp_t gfpflags, unsigned long caller)
void *__kmalloc_node_track_caller(size_t size, gfp_t gfpflags,
int node, unsigned long caller)
static int count_inuse(struct page *page)
static int count_total(struct page *page)
static int validate_slab(struct kmem_cache *s, struct page *page,
unsigned long *map)
static void validate_slab_slab(struct kmem_cache *s, struct page *page,
unsigned long *map)
static int validate_slab_node(struct kmem_cache *s,
struct kmem_cache_node *n, unsigned long *map)
static long validate_slab_cache(struct kmem_cache *s)
struct location ;
struct loc_track ;
static void free_loc_track(struct loc_track *t)
static int alloc_loc_track(struct loc_track *t, unsigned long max, gfp_t flags)
static int add_location(struct loc_track *t, struct kmem_cache *s,
const struct track *track)
static void process_slab(struct loc_track *t, struct kmem_cache *s,
struct page *page, enum track_item alloc,
unsigned long *map)
static int list_locations(struct kmem_cache *s, char *buf,
enum track_item alloc)
static void resiliency_test(void)
static void resiliency_test(void) ;
enum slab_stat_type ;
#define SO_ALL		(1 << SL_ALL)
#define SO_PARTIAL	(1 << SL_PARTIAL)
#define SO_CPU		(1 << SL_CPU)
#define SO_OBJECTS	(1 << SL_OBJECTS)
#define SO_TOTAL	(1 << SL_TOTAL)
static ssize_t show_slab_objects(struct kmem_cache *s,
char *buf, unsigned long flags)
static int any_slab_objects(struct kmem_cache *s)
#define to_slab_attr(n) container_of(n, struct slab_attribute, attr)
#define to_slab(n) container_of(n, struct kmem_cache, kobj);
struct slab_attribute ;
#define SLAB_ATTR_RO(_name) \
static struct slab_attribute _name##_attr = __ATTR_RO(_name)
#define SLAB_ATTR(_name) \
static struct slab_attribute _name##_attr =  \
__ATTR(_name, 0644, _name##_show, _name##_store)
static ssize_t slab_size_show(struct kmem_cache *s, char *buf)
SLAB_ATTR_RO(slab_size);
static ssize_t align_show(struct kmem_cache *s, char *buf)
SLAB_ATTR_RO(align);
static ssize_t object_size_show(struct kmem_cache *s, char *buf)
SLAB_ATTR_RO(object_size);
static ssize_t objs_per_slab_show(struct kmem_cache *s, char *buf)
SLAB_ATTR_RO(objs_per_slab);
static ssize_t order_store(struct kmem_cache *s,
const char *buf, size_t length)
static ssize_t order_show(struct kmem_cache *s, char *buf)
SLAB_ATTR(order);
static ssize_t min_partial_show(struct kmem_cache *s, char *buf)
static ssize_t min_partial_store(struct kmem_cache *s, const char *buf,
size_t length)
SLAB_ATTR(min_partial);
static ssize_t ctor_show(struct kmem_cache *s, char *buf)
SLAB_ATTR_RO(ctor);
static ssize_t aliases_show(struct kmem_cache *s, char *buf)
SLAB_ATTR_RO(aliases);
static ssize_t partial_show(struct kmem_cache *s, char *buf)
SLAB_ATTR_RO(partial);
static ssize_t cpu_slabs_show(struct kmem_cache *s, char *buf)
SLAB_ATTR_RO(cpu_slabs);
static ssize_t objects_show(struct kmem_cache *s, char *buf)
SLAB_ATTR_RO(objects);
static ssize_t objects_partial_show(struct kmem_cache *s, char *buf)
SLAB_ATTR_RO(objects_partial);
static ssize_t reclaim_account_show(struct kmem_cache *s, char *buf)
static ssize_t reclaim_account_store(struct kmem_cache *s,
const char *buf, size_t length)
SLAB_ATTR(reclaim_account);
static ssize_t hwcache_align_show(struct kmem_cache *s, char *buf)
SLAB_ATTR_RO(hwcache_align);
static ssize_t cache_dma_show(struct kmem_cache *s, char *buf)
SLAB_ATTR_RO(cache_dma);
static ssize_t destroy_by_rcu_show(struct kmem_cache *s, char *buf)
SLAB_ATTR_RO(destroy_by_rcu);
static ssize_t reserved_show(struct kmem_cache *s, char *buf)
SLAB_ATTR_RO(reserved);
static ssize_t slabs_show(struct kmem_cache *s, char *buf)
SLAB_ATTR_RO(slabs);
static ssize_t total_objects_show(struct kmem_cache *s, char *buf)
SLAB_ATTR_RO(total_objects);
static ssize_t sanity_checks_show(struct kmem_cache *s, char *buf)
static ssize_t sanity_checks_store(struct kmem_cache *s,
const char *buf, size_t length)
SLAB_ATTR(sanity_checks);
static ssize_t trace_show(struct kmem_cache *s, char *buf)
static ssize_t trace_store(struct kmem_cache *s, const char *buf,
size_t length)
SLAB_ATTR(trace);
static ssize_t red_zone_show(struct kmem_cache *s, char *buf)
static ssize_t red_zone_store(struct kmem_cache *s,
const char *buf, size_t length)
SLAB_ATTR(red_zone);
static ssize_t poison_show(struct kmem_cache *s, char *buf)
static ssize_t poison_store(struct kmem_cache *s,
const char *buf, size_t length)
SLAB_ATTR(poison);
static ssize_t store_user_show(struct kmem_cache *s, char *buf)
static ssize_t store_user_store(struct kmem_cache *s,
const char *buf, size_t length)
SLAB_ATTR(store_user);
static ssize_t validate_show(struct kmem_cache *s, char *buf)
static ssize_t validate_store(struct kmem_cache *s,
const char *buf, size_t length)
SLAB_ATTR(validate);
static ssize_t alloc_calls_show(struct kmem_cache *s, char *buf)
SLAB_ATTR_RO(alloc_calls);
static ssize_t free_calls_show(struct kmem_cache *s, char *buf)
SLAB_ATTR_RO(free_calls);
static ssize_t failslab_show(struct kmem_cache *s, char *buf)
static ssize_t failslab_store(struct kmem_cache *s, const char *buf,
size_t length)
SLAB_ATTR(failslab);
static ssize_t shrink_show(struct kmem_cache *s, char *buf)
static ssize_t shrink_store(struct kmem_cache *s,
const char *buf, size_t length)
SLAB_ATTR(shrink);
static ssize_t remote_node_defrag_ratio_show(struct kmem_cache *s, char *buf)
static ssize_t remote_node_defrag_ratio_store(struct kmem_cache *s,
const char *buf, size_t length)
SLAB_ATTR(remote_node_defrag_ratio);
static int show_stat(struct kmem_cache *s, char *buf, enum stat_item si)
static void clear_stat(struct kmem_cache *s, enum stat_item si)
#define STAT_ATTR(si, text) 					\
static ssize_t text##_show(struct kmem_cache *s, char *buf)	\
\
static ssize_t text##_store(struct kmem_cache *s,		\
const char *buf, size_t length)	\
\
SLAB_ATTR(text);						\
STAT_ATTR(ALLOC_FASTPATH, alloc_fastpath);
STAT_ATTR(ALLOC_SLOWPATH, alloc_slowpath);
STAT_ATTR(FREE_FASTPATH, free_fastpath);
STAT_ATTR(FREE_SLOWPATH, free_slowpath);
STAT_ATTR(FREE_FROZEN, free_frozen);
STAT_ATTR(FREE_ADD_PARTIAL, free_add_partial);
STAT_ATTR(FREE_REMOVE_PARTIAL, free_remove_partial);
STAT_ATTR(ALLOC_FROM_PARTIAL, alloc_from_partial);
STAT_ATTR(ALLOC_SLAB, alloc_slab);
STAT_ATTR(ALLOC_REFILL, alloc_refill);
STAT_ATTR(FREE_SLAB, free_slab);
STAT_ATTR(CPUSLAB_FLUSH, cpuslab_flush);
STAT_ATTR(DEACTIVATE_FULL, deactivate_full);
STAT_ATTR(DEACTIVATE_EMPTY, deactivate_empty);
STAT_ATTR(DEACTIVATE_TO_HEAD, deactivate_to_head);
STAT_ATTR(DEACTIVATE_TO_TAIL, deactivate_to_tail);
STAT_ATTR(DEACTIVATE_REMOTE_FREES, deactivate_remote_frees);
STAT_ATTR(ORDER_FALLBACK, order_fallback);
static struct attribute *slab_attrs[] = ;
static struct attribute_group slab_attr_group = ;
static ssize_t slab_attr_show(struct kobject *kobj,
struct attribute *attr,
char *buf)
static ssize_t slab_attr_store(struct kobject *kobj,
struct attribute *attr,
const char *buf, size_t len)
static void kmem_cache_release(struct kobject *kobj)
static const struct sysfs_ops slab_sysfs_ops = ;
static struct kobj_type slab_ktype = ;
static int uevent_filter(struct kset *kset, struct kobject *kobj)
static const struct kset_uevent_ops slab_uevent_ops = ;
static struct kset *slab_kset;
#define ID_STR_LENGTH 64
static char *create_unique_id(struct kmem_cache *s)
static int sysfs_slab_add(struct kmem_cache *s)
static void sysfs_slab_remove(struct kmem_cache *s)
struct saved_alias ;
static struct saved_alias *alias_list;
static int sysfs_slab_alias(struct kmem_cache *s, const char *name)
static int __init slab_sysfs_init(void)
__initcall(slab_sysfs_init);
static void print_slabinfo_header(struct seq_file *m)
static void *s_start(struct seq_file *m, loff_t *pos)
static void *s_next(struct seq_file *m, void *p, loff_t *pos)
static void s_stop(struct seq_file *m, void *p)
static int s_show(struct seq_file *m, void *p)
static const struct seq_operations slabinfo_op = ;
static int slabinfo_open(struct inode *inode, struct file *file)
static const struct file_operations proc_slabinfo_operations = ;
static int __init slab_proc_init(void)
module_init(slab_proc_init);
