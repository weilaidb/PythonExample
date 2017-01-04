#define	DEBUG		1
#define	STATS		1
#define	FORCED_DEBUG	1
#define	DEBUG		0
#define	STATS		0
#define	FORCED_DEBUG	0
#define	BYTES_PER_WORD		sizeof(void *)
#define	REDZONE_ALIGN		max(BYTES_PER_WORD, __alignof__(unsigned long long))
#define ARCH_KMALLOC_FLAGS SLAB_HWCACHE_ALIGN
#if DEBUG
# define CREATE_MASK	(SLAB_RED_ZONE | \
SLAB_POISON | SLAB_HWCACHE_ALIGN | \
SLAB_CACHE_DMA | \
SLAB_STORE_USER | \
SLAB_RECLAIM_ACCOUNT | SLAB_PANIC | \
SLAB_DESTROY_BY_RCU | SLAB_MEM_SPREAD | \
SLAB_DEBUG_OBJECTS | SLAB_NOLEAKTRACE | SLAB_NOTRACK)
# define CREATE_MASK	(SLAB_HWCACHE_ALIGN | \
SLAB_CACHE_DMA | \
SLAB_RECLAIM_ACCOUNT | SLAB_PANIC | \
SLAB_DESTROY_BY_RCU | SLAB_MEM_SPREAD | \
SLAB_DEBUG_OBJECTS | SLAB_NOLEAKTRACE | SLAB_NOTRACK)
typedef unsigned int kmem_bufctl_t;
#define BUFCTL_END	(((kmem_bufctl_t)(~0U))-0)
#define BUFCTL_FREE	(((kmem_bufctl_t)(~0U))-1)
#define	BUFCTL_ACTIVE	(((kmem_bufctl_t)(~0U))-2)
#define	SLAB_LIMIT	(((kmem_bufctl_t)(~0U))-3)
struct slab_rcu ;
struct slab ;
struct array_cache ;
#define BOOT_CPUCACHE_ENTRIES	1
struct arraycache_init ;
struct kmem_list3 ;
#define NUM_INIT_LISTS (3 * MAX_NUMNODES)
static struct kmem_list3 __initdata initkmem_list3[NUM_INIT_LISTS];
#define	CACHE_CACHE 0
#define	SIZE_AC MAX_NUMNODES
#define	SIZE_L3 (2 * MAX_NUMNODES)
static int drain_freelist(struct kmem_cache *cache,
struct kmem_list3 *l3, int tofree);
static void free_block(struct kmem_cache *cachep, void **objpp, int len,
int node);
static int enable_cpucache(struct kmem_cache *cachep, gfp_t gfp);
static void cache_reap(struct work_struct *unused);
static __always_inline int index_of(const size_t size)
static int slab_early_init = 1;
#define INDEX_AC index_of(sizeof(struct arraycache_init))
#define INDEX_L3 index_of(sizeof(struct kmem_list3))
static void kmem_list3_init(struct kmem_list3 *parent)
#define MAKE_LIST(cachep, listp, slab, nodeid)				\
do  while (0)
#define	MAKE_ALL_LISTS(cachep, ptr, nodeid)				\
do  while (0)
#define CFLGS_OFF_SLAB		(0x80000000UL)
#define	OFF_SLAB(x)	((x)->flags & CFLGS_OFF_SLAB)
#define BATCHREFILL_LIMIT	16
#define REAPTIMEOUT_CPUC	(2*HZ)
#define REAPTIMEOUT_LIST3	(4*HZ)
#if STATS
#define	STATS_INC_ACTIVE(x)	((x)->num_active++)
#define	STATS_DEC_ACTIVE(x)	((x)->num_active--)
#define	STATS_INC_ALLOCED(x)	((x)->num_allocations++)
#define	STATS_INC_GROWN(x)	((x)->grown++)
#define	STATS_ADD_REAPED(x,y)	((x)->reaped += (y))
#define	STATS_SET_HIGH(x)						\
do  while (0)
#define	STATS_INC_ERR(x)	((x)->errors++)
#define	STATS_INC_NODEALLOCS(x)	((x)->node_allocs++)
#define	STATS_INC_NODEFREES(x)	((x)->node_frees++)
#define STATS_INC_ACOVERFLOW(x)   ((x)->node_overflow++)
#define	STATS_SET_FREEABLE(x, i)					\
do  while (0)
#define STATS_INC_ALLOCHIT(x)	atomic_inc(&(x)->allochit)
#define STATS_INC_ALLOCMISS(x)	atomic_inc(&(x)->allocmiss)
#define STATS_INC_FREEHIT(x)	atomic_inc(&(x)->freehit)
#define STATS_INC_FREEMISS(x)	atomic_inc(&(x)->freemiss)
#define	STATS_INC_ACTIVE(x)	do  while (0)
#define	STATS_DEC_ACTIVE(x)	do  while (0)
#define	STATS_INC_ALLOCED(x)	do  while (0)
#define	STATS_INC_GROWN(x)	do  while (0)
#define	STATS_ADD_REAPED(x,y)	do  while (0)
#define	STATS_SET_HIGH(x)	do  while (0)
#define	STATS_INC_ERR(x)	do  while (0)
#define	STATS_INC_NODEALLOCS(x)	do  while (0)
#define	STATS_INC_NODEFREES(x)	do  while (0)
#define STATS_INC_ACOVERFLOW(x)   do  while (0)
#define	STATS_SET_FREEABLE(x, i) do  while (0)
#define STATS_INC_ALLOCHIT(x)	do  while (0)
#define STATS_INC_ALLOCMISS(x)	do  while (0)
#define STATS_INC_FREEHIT(x)	do  while (0)
#define STATS_INC_FREEMISS(x)	do  while (0)
#if DEBUG
static int obj_offset(struct kmem_cache *cachep)
static int obj_size(struct kmem_cache *cachep)
static unsigned long long *dbg_redzone1(struct kmem_cache *cachep, void *objp)
static unsigned long long *dbg_redzone2(struct kmem_cache *cachep, void *objp)
static void **dbg_userword(struct kmem_cache *cachep, void *objp)
#define obj_offset(x)			0
#define obj_size(cachep)		(cachep->buffer_size)
#define dbg_redzone1(cachep, objp)	()
#define dbg_redzone2(cachep, objp)	()
#define dbg_userword(cachep, objp)	()
size_t slab_buffer_size(struct kmem_cache *cachep)
EXPORT_SYMBOL(slab_buffer_size);
#define	BREAK_GFP_ORDER_HI	1
#define	BREAK_GFP_ORDER_LO	0
static int slab_break_gfp_order = BREAK_GFP_ORDER_LO;
static inline void page_set_cache(struct page *page, struct kmem_cache *cache)
static inline struct kmem_cache *page_get_cache(struct page *page)
static inline void page_set_slab(struct page *page, struct slab *slab)
static inline struct slab *page_get_slab(struct page *page)
static inline struct kmem_cache *virt_to_cache(const void *obj)
static inline struct slab *virt_to_slab(const void *obj)
static inline void *index_to_obj(struct kmem_cache *cache, struct slab *slab,
unsigned int idx)
static inline unsigned int obj_to_index(const struct kmem_cache *cache,
const struct slab *slab, void *obj)
struct cache_sizes malloc_sizes[] = ;
EXPORT_SYMBOL(malloc_sizes);
struct cache_names ;
static struct cache_names __initdata cache_names[] = ;
static struct arraycache_init initarray_cache __initdata =
;
static struct arraycache_init initarray_generic =
;
static struct kmem_cache cache_cache = ;
#define BAD_ALIEN_MAGIC 0x01020304ul
static enum  g_cpucache_up;
int slab_is_available(void)
static struct lock_class_key on_slab_l3_key;
static struct lock_class_key on_slab_alc_key;
static void init_node_lock_keys(int q)
static inline void init_lock_keys(void)
static void init_node_lock_keys(int q)
static inline void init_lock_keys(void)
static DEFINE_MUTEX(cache_chain_mutex);
static struct list_head cache_chain;
static DEFINE_PER_CPU(struct delayed_work, slab_reap_work);
static inline struct array_cache *cpu_cache_get(struct kmem_cache *cachep)
static inline struct kmem_cache *__find_general_cachep(size_t size,
gfp_t gfpflags)
static struct kmem_cache *kmem_find_general_cachep(size_t size, gfp_t gfpflags)
static size_t slab_mgmt_size(size_t nr_objs, size_t align)
static void cache_estimate(unsigned long gfporder, size_t buffer_size,
size_t align, int flags, size_t *left_over,
unsigned int *num)
#define slab_error(cachep, msg) __slab_error(__func__, cachep, msg)
static void __slab_error(const char *function, struct kmem_cache *cachep,
char *msg)
static int use_alien_caches __read_mostly = 1;
static int __init noaliencache_setup(char *s)
__setup("noaliencache", noaliencache_setup);
static DEFINE_PER_CPU(unsigned long, slab_reap_node);
static void init_reap_node(int cpu)
static void next_reap_node(void)
#define init_reap_node(cpu) do  while (0)
#define next_reap_node(void) do  while (0)
static void __cpuinit start_cpu_timer(int cpu)
static struct array_cache *alloc_arraycache(int node, int entries,
int batchcount, gfp_t gfp)
static int transfer_objects(struct array_cache *to,
struct array_cache *from, unsigned int max)
#define drain_alien_cache(cachep, alien) do  while (0)
#define reap_alien(cachep, l3) do  while (0)
static inline struct array_cache **alloc_alien_cache(int node, int limit, gfp_t gfp)
static inline void free_alien_cache(struct array_cache **ac_ptr)
static inline int cache_free_alien(struct kmem_cache *cachep, void *objp)
static inline void *alternate_node_alloc(struct kmem_cache *cachep,
gfp_t flags)
static inline void *____cache_alloc_node(struct kmem_cache *cachep,
gfp_t flags, int nodeid)
static void *____cache_alloc_node(struct kmem_cache *, gfp_t, int);
static void *alternate_node_alloc(struct kmem_cache *, gfp_t);
static struct array_cache **alloc_alien_cache(int node, int limit, gfp_t gfp)
static void free_alien_cache(struct array_cache **ac_ptr)
static void __drain_alien_cache(struct kmem_cache *cachep,
struct array_cache *ac, int node)
static void reap_alien(struct kmem_cache *cachep, struct kmem_list3 *l3)
static void drain_alien_cache(struct kmem_cache *cachep,
struct array_cache **alien)
static inline int cache_free_alien(struct kmem_cache *cachep, void *objp)
static int init_cache_nodelists_node(int node)
static void __cpuinit cpuup_canceled(long cpu)
static int __cpuinit cpuup_prepare(long cpu)
static int __cpuinit cpuup_callback(struct notifier_block *nfb,
unsigned long action, void *hcpu)
static struct notifier_block __cpuinitdata cpucache_notifier = ;
#if defined(CONFIG_NUMA) && defined(CONFIG_MEMORY_HOTPLUG)
static int __meminit drain_cache_nodelists_node(int node)
static int __meminit slab_memory_callback(struct notifier_block *self,
unsigned long action, void *arg)
static void __init init_list(struct kmem_cache *cachep, struct kmem_list3 *list,
int nodeid)
static void __init set_up_list3s(struct kmem_cache *cachep, int index)
void __init kmem_cache_init(void)
void __init kmem_cache_init_late(void)
static int __init cpucache_init(void)
__initcall(cpucache_init);
static void *kmem_getpages(struct kmem_cache *cachep, gfp_t flags, int nodeid)
static void kmem_freepages(struct kmem_cache *cachep, void *addr)
static void kmem_rcu_free(struct rcu_head *head)
#if DEBUG
static void store_stackinfo(struct kmem_cache *cachep, unsigned long *addr,
unsigned long caller)
static void poison_obj(struct kmem_cache *cachep, void *addr, unsigned char val)
static void dump_line(char *data, int offset, int limit)
#if DEBUG
static void print_objinfo(struct kmem_cache *cachep, void *objp, int lines)
static void check_poison_obj(struct kmem_cache *cachep, void *objp)
#if DEBUG
static void slab_destroy_debugcheck(struct kmem_cache *cachep, struct slab *slabp)
static void slab_destroy_debugcheck(struct kmem_cache *cachep, struct slab *slabp)
static void slab_destroy(struct kmem_cache *cachep, struct slab *slabp)
static void __kmem_cache_destroy(struct kmem_cache *cachep)
static size_t calculate_slab_order(struct kmem_cache *cachep,
size_t size, size_t align, unsigned long flags)
static int __init_refok setup_cpu_cache(struct kmem_cache *cachep, gfp_t gfp)
struct kmem_cache *
kmem_cache_create (const char *name, size_t size, size_t align,
unsigned long flags, void (*ctor)(void *))
EXPORT_SYMBOL(kmem_cache_create);
#if DEBUG
static void check_irq_off(void)
static void check_irq_on(void)
static void check_spinlock_acquired(struct kmem_cache *cachep)
static void check_spinlock_acquired_node(struct kmem_cache *cachep, int node)
#define check_irq_off()	do  while(0)
#define check_irq_on()	do  while(0)
#define check_spinlock_acquired(x) do  while(0)
#define check_spinlock_acquired_node(x, y) do  while(0)
static void drain_array(struct kmem_cache *cachep, struct kmem_list3 *l3,
struct array_cache *ac,
int force, int node);
static void do_drain(void *arg)
static void drain_cpu_caches(struct kmem_cache *cachep)
static int drain_freelist(struct kmem_cache *cache,
struct kmem_list3 *l3, int tofree)
static int __cache_shrink(struct kmem_cache *cachep)
int kmem_cache_shrink(struct kmem_cache *cachep)
EXPORT_SYMBOL(kmem_cache_shrink);
void kmem_cache_destroy(struct kmem_cache *cachep)
EXPORT_SYMBOL(kmem_cache_destroy);
static struct slab *alloc_slabmgmt(struct kmem_cache *cachep, void *objp,
int colour_off, gfp_t local_flags,
int nodeid)
static inline kmem_bufctl_t *slab_bufctl(struct slab *slabp)
static void cache_init_objs(struct kmem_cache *cachep,
struct slab *slabp)
static void kmem_flagcheck(struct kmem_cache *cachep, gfp_t flags)
static void *slab_get_obj(struct kmem_cache *cachep, struct slab *slabp,
int nodeid)
static void slab_put_obj(struct kmem_cache *cachep, struct slab *slabp,
void *objp, int nodeid)
static void slab_map_pages(struct kmem_cache *cache, struct slab *slab,
void *addr)
static int cache_grow(struct kmem_cache *cachep,
gfp_t flags, int nodeid, void *objp)
#if DEBUG
static void kfree_debugcheck(const void *objp)
static inline void verify_redzone_free(struct kmem_cache *cache, void *obj)
static void *cache_free_debugcheck(struct kmem_cache *cachep, void *objp,
void *caller)
static void check_slabp(struct kmem_cache *cachep, struct slab *slabp)
#define kfree_debugcheck(x) do  while(0)
#define cache_free_debugcheck(x,objp,z) (objp)
#define check_slabp(x,y) do  while(0)
static void *cache_alloc_refill(struct kmem_cache *cachep, gfp_t flags)
static inline void cache_alloc_debugcheck_before(struct kmem_cache *cachep,
gfp_t flags)
#if DEBUG
static void *cache_alloc_debugcheck_after(struct kmem_cache *cachep,
gfp_t flags, void *objp, void *caller)
#define cache_alloc_debugcheck_after(a,b,objp,d) (objp)
static bool slab_should_failslab(struct kmem_cache *cachep, gfp_t flags)
static inline void *____cache_alloc(struct kmem_cache *cachep, gfp_t flags)
static void *alternate_node_alloc(struct kmem_cache *cachep, gfp_t flags)
static void *fallback_alloc(struct kmem_cache *cache, gfp_t flags)
static void *____cache_alloc_node(struct kmem_cache *cachep, gfp_t flags,
int nodeid)
static __always_inline void *
__cache_alloc_node(struct kmem_cache *cachep, gfp_t flags, int nodeid,
void *caller)
static __always_inline void *
__do_cache_alloc(struct kmem_cache *cache, gfp_t flags)
static __always_inline void *
__do_cache_alloc(struct kmem_cache *cachep, gfp_t flags)
static __always_inline void *
__cache_alloc(struct kmem_cache *cachep, gfp_t flags, void *caller)
static void free_block(struct kmem_cache *cachep, void **objpp, int nr_objects,
int node)
static void cache_flusharray(struct kmem_cache *cachep, struct array_cache *ac)
static inline void __cache_free(struct kmem_cache *cachep, void *objp,
void *caller)
void *kmem_cache_alloc(struct kmem_cache *cachep, gfp_t flags)
EXPORT_SYMBOL(kmem_cache_alloc);
void *
kmem_cache_alloc_trace(size_t size, struct kmem_cache *cachep, gfp_t flags)
EXPORT_SYMBOL(kmem_cache_alloc_trace);
void *kmem_cache_alloc_node(struct kmem_cache *cachep, gfp_t flags, int nodeid)
EXPORT_SYMBOL(kmem_cache_alloc_node);
void *kmem_cache_alloc_node_trace(size_t size,
struct kmem_cache *cachep,
gfp_t flags,
int nodeid)
EXPORT_SYMBOL(kmem_cache_alloc_node_trace);
static __always_inline void *
__do_kmalloc_node(size_t size, gfp_t flags, int node, void *caller)
#if defined(CONFIG_DEBUG_SLAB) || defined(CONFIG_TRACING)
void *__kmalloc_node(size_t size, gfp_t flags, int node)
EXPORT_SYMBOL(__kmalloc_node);
void *__kmalloc_node_track_caller(size_t size, gfp_t flags,
int node, unsigned long caller)
EXPORT_SYMBOL(__kmalloc_node_track_caller);
void *__kmalloc_node(size_t size, gfp_t flags, int node)
EXPORT_SYMBOL(__kmalloc_node);
static __always_inline void *__do_kmalloc(size_t size, gfp_t flags,
void *caller)
#if defined(CONFIG_DEBUG_SLAB) || defined(CONFIG_TRACING)
void *__kmalloc(size_t size, gfp_t flags)
EXPORT_SYMBOL(__kmalloc);
void *__kmalloc_track_caller(size_t size, gfp_t flags, unsigned long caller)
EXPORT_SYMBOL(__kmalloc_track_caller);
void *__kmalloc(size_t size, gfp_t flags)
EXPORT_SYMBOL(__kmalloc);
void kmem_cache_free(struct kmem_cache *cachep, void *objp)
EXPORT_SYMBOL(kmem_cache_free);
void kfree(const void *objp)
EXPORT_SYMBOL(kfree);
unsigned int kmem_cache_size(struct kmem_cache *cachep)
EXPORT_SYMBOL(kmem_cache_size);
static int alloc_kmemlist(struct kmem_cache *cachep, gfp_t gfp)
struct ccupdate_struct ;
static void do_ccupdate_local(void *info)
static int do_tune_cpucache(struct kmem_cache *cachep, int limit,
int batchcount, int shared, gfp_t gfp)
static int enable_cpucache(struct kmem_cache *cachep, gfp_t gfp)
static void drain_array(struct kmem_cache *cachep, struct kmem_list3 *l3,
struct array_cache *ac, int force, int node)
static void cache_reap(struct work_struct *w)
static void print_slabinfo_header(struct seq_file *m)
static void *s_start(struct seq_file *m, loff_t *pos)
static void *s_next(struct seq_file *m, void *p, loff_t *pos)
static void s_stop(struct seq_file *m, void *p)
static int s_show(struct seq_file *m, void *p)
static const struct seq_operations slabinfo_op = ;
#define MAX_SLABINFO_WRITE 128
static ssize_t slabinfo_write(struct file *file, const char __user *buffer,
size_t count, loff_t *ppos)
static int slabinfo_open(struct inode *inode, struct file *file)
static const struct file_operations proc_slabinfo_operations = ;
static void *leaks_start(struct seq_file *m, loff_t *pos)
static inline int add_caller(unsigned long *n, unsigned long v)
static void handle_slab(unsigned long *n, struct kmem_cache *c, struct slab *s)
static void show_symbol(struct seq_file *m, unsigned long address)
static int leaks_show(struct seq_file *m, void *p)
static const struct seq_operations slabstats_op = ;
static int slabstats_open(struct inode *inode, struct file *file)
static const struct file_operations proc_slabstats_operations = ;
static int __init slab_proc_init(void)
module_init(slab_proc_init);
size_t ksize(const void *objp)
EXPORT_SYMBOL(ksize);
