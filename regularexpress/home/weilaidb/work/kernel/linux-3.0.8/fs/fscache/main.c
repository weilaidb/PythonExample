#define FSCACHE_DEBUG_LEVEL CACHE
MODULE_DESCRIPTION("FS Cache Manager");
MODULE_AUTHOR("Red Hat, Inc.");
MODULE_LICENSE("GPL");
unsigned fscache_defer_lookup = 1;
module_param_named(defer_lookup, fscache_defer_lookup, uint,
S_IWUSR | S_IRUGO);
MODULE_PARM_DESC(fscache_defer_lookup,
"Defer cookie lookup to background thread");
unsigned fscache_defer_create = 1;
module_param_named(defer_create, fscache_defer_create, uint,
S_IWUSR | S_IRUGO);
MODULE_PARM_DESC(fscache_defer_create,
"Defer cookie creation to background thread");
unsigned fscache_debug;
module_param_named(debug, fscache_debug, uint,
S_IWUSR | S_IRUGO);
MODULE_PARM_DESC(fscache_debug,
"FS-Cache debugging mask");
struct kobject *fscache_root;
struct workqueue_struct *fscache_object_wq;
struct workqueue_struct *fscache_op_wq;
DEFINE_PER_CPU(wait_queue_head_t, fscache_object_cong_wait);
static unsigned fscache_object_max_active = 4;
static unsigned fscache_op_max_active = 2;
static struct ctl_table_header *fscache_sysctl_header;
static int fscache_max_active_sysctl(struct ctl_table *table, int write,
void __user *buffer,
size_t *lenp, loff_t *ppos)
ctl_table fscache_sysctls[] = ;
ctl_table fscache_sysctls_root[] = ;
static int __init fscache_init(void)
fs_initcall(fscache_init);
static void __exit fscache_exit(void)
module_exit(fscache_exit);
int fscache_wait_bit(void *flags)
EXPORT_SYMBOL(fscache_wait_bit);
int fscache_wait_bit_interruptible(void *flags)
EXPORT_SYMBOL(fscache_wait_bit_interruptible);
