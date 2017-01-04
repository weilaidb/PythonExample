struct mdesc_hdr  __attribute__((aligned(16)));
struct mdesc_elem ;
struct mdesc_mem_ops ;
struct mdesc_handle ;
static void mdesc_handle_init(struct mdesc_handle *hp,
unsigned int handle_size,
void *base)
static struct mdesc_handle * __init mdesc_memblock_alloc(unsigned int mdesc_size)
static void __init mdesc_memblock_free(struct mdesc_handle *hp)
static struct mdesc_mem_ops memblock_mdesc_ops = ;
static struct mdesc_handle *mdesc_kmalloc(unsigned int mdesc_size)
static void mdesc_kfree(struct mdesc_handle *hp)
static struct mdesc_mem_ops kmalloc_mdesc_memops = ;
static struct mdesc_handle *mdesc_alloc(unsigned int mdesc_size,
struct mdesc_mem_ops *mops)
static void mdesc_free(struct mdesc_handle *hp)
static struct mdesc_handle *cur_mdesc;
static LIST_HEAD(mdesc_zombie_list);
static DEFINE_SPINLOCK(mdesc_lock);
struct mdesc_handle *mdesc_grab(void)
EXPORT_SYMBOL(mdesc_grab);
void mdesc_release(struct mdesc_handle *hp)
EXPORT_SYMBOL(mdesc_release);
static DEFINE_MUTEX(mdesc_mutex);
static struct mdesc_notifier_client *client_list;
void mdesc_register_notifier(struct mdesc_notifier_client *client)
static const u64 *parent_cfg_handle(struct mdesc_handle *hp, u64 node)
static void invoke_on_missing(const char *name,
struct mdesc_handle *a,
struct mdesc_handle *b,
void (*func)(struct mdesc_handle *, u64))
static void notify_one(struct mdesc_notifier_client *p,
struct mdesc_handle *old_hp,
struct mdesc_handle *new_hp)
static void mdesc_notify_clients(struct mdesc_handle *old_hp,
struct mdesc_handle *new_hp)
void mdesc_update(void)
static struct mdesc_elem *node_block(struct mdesc_hdr *mdesc)
static void *name_block(struct mdesc_hdr *mdesc)
static void *data_block(struct mdesc_hdr *mdesc)
u64 mdesc_node_by_name(struct mdesc_handle *hp,
u64 from_node, const char *name)
EXPORT_SYMBOL(mdesc_node_by_name);
const void *mdesc_get_property(struct mdesc_handle *hp, u64 node,
const char *name, int *lenp)
EXPORT_SYMBOL(mdesc_get_property);
u64 mdesc_next_arc(struct mdesc_handle *hp, u64 from, const char *arc_type)
EXPORT_SYMBOL(mdesc_next_arc);
u64 mdesc_arc_target(struct mdesc_handle *hp, u64 arc)
EXPORT_SYMBOL(mdesc_arc_target);
const char *mdesc_node_name(struct mdesc_handle *hp, u64 node)
EXPORT_SYMBOL(mdesc_node_name);
static u64 max_cpus = 64;
static void __init report_platform_properties(void)
static void __cpuinit fill_in_one_cache(cpuinfo_sparc *c,
struct mdesc_handle *hp,
u64 mp)
static void __cpuinit mark_core_ids(struct mdesc_handle *hp, u64 mp, int core_id)
static void __cpuinit set_core_ids(struct mdesc_handle *hp)
static void __cpuinit mark_proc_ids(struct mdesc_handle *hp, u64 mp, int proc_id)
static void __cpuinit __set_proc_ids(struct mdesc_handle *hp, const char *exec_unit_name)
static void __cpuinit set_proc_ids(struct mdesc_handle *hp)
static void __cpuinit get_one_mondo_bits(const u64 *p, unsigned int *mask,
unsigned long def, unsigned long max)
static void __cpuinit get_mondo_data(struct mdesc_handle *hp, u64 mp,
struct trap_per_cpu *tb)
static void * __cpuinit mdesc_iterate_over_cpus(void *(*func)(struct mdesc_handle *, u64, int, void *), void *arg, cpumask_t *mask)
static void * __cpuinit record_one_cpu(struct mdesc_handle *hp, u64 mp, int cpuid, void *arg)
void __cpuinit mdesc_populate_present_mask(cpumask_t *mask)
static void * __cpuinit fill_in_one_cpu(struct mdesc_handle *hp, u64 mp, int cpuid, void *arg)
void __cpuinit mdesc_fill_in_cpu_data(cpumask_t *mask)
static ssize_t mdesc_read(struct file *file, char __user *buf,
size_t len, loff_t *offp)
static const struct file_operations mdesc_fops = ;
static struct miscdevice mdesc_misc = ;
static int __init mdesc_misc_init(void)
__initcall(mdesc_misc_init);
void __init sun4v_mdesc_init(void)
