struct flow_cache_entry ;
struct flow_cache_percpu ;
struct flow_flush_info ;
struct flow_cache ;
atomic_t flow_cache_genid = ATOMIC_INIT(0);
EXPORT_SYMBOL(flow_cache_genid);
static struct flow_cache flow_cache_global;
static struct kmem_cache *flow_cachep __read_mostly;
static DEFINE_SPINLOCK(flow_cache_gc_lock);
static LIST_HEAD(flow_cache_gc_list);
#define flow_cache_hash_size(cache)	(1 << (cache)->hash_shift)
#define FLOW_HASH_RND_PERIOD		(10 * 60 * HZ)
static void flow_cache_new_hashrnd(unsigned long arg)
static int flow_entry_valid(struct flow_cache_entry *fle)
static void flow_entry_kill(struct flow_cache_entry *fle)
static void flow_cache_gc_task(struct work_struct *work)
static DECLARE_WORK(flow_cache_gc_work, flow_cache_gc_task);
static void flow_cache_queue_garbage(struct flow_cache_percpu *fcp,
int deleted, struct list_head *gc_list)
static void __flow_cache_shrink(struct flow_cache *fc,
struct flow_cache_percpu *fcp,
int shrink_to)
static void flow_cache_shrink(struct flow_cache *fc,
struct flow_cache_percpu *fcp)
static void flow_new_hash_rnd(struct flow_cache *fc,
struct flow_cache_percpu *fcp)
static u32 flow_hash_code(struct flow_cache *fc,
struct flow_cache_percpu *fcp,
const struct flowi *key)
typedef unsigned long flow_compare_t;
static int flow_key_compare(const struct flowi *key1, const struct flowi *key2)
struct flow_cache_object *
flow_cache_lookup(struct net *net, const struct flowi *key, u16 family, u8 dir,
flow_resolve_t resolver, void *ctx)
EXPORT_SYMBOL(flow_cache_lookup);
static void flow_cache_flush_tasklet(unsigned long data)
static void flow_cache_flush_per_cpu(void *data)
void flow_cache_flush(void)
static int __cpuinit flow_cache_cpu_prepare(struct flow_cache *fc, int cpu)
static int __cpuinit flow_cache_cpu(struct notifier_block *nfb,
unsigned long action,
void *hcpu)
static int __init flow_cache_init(struct flow_cache *fc)
static int __init flow_cache_init_global(void)
module_init(flow_cache_init_global);
