static long ocd_count;
static spinlock_t ocd_lock;
void ocd_enable(struct task_struct *child)
void ocd_disable(struct task_struct *child)
static struct dentry *ocd_debugfs_root;
static struct dentry *ocd_debugfs_DC;
static struct dentry *ocd_debugfs_DS;
static struct dentry *ocd_debugfs_count;
static int ocd_DC_get(void *data, u64 *val)
static int ocd_DC_set(void *data, u64 val)
DEFINE_SIMPLE_ATTRIBUTE(fops_DC, ocd_DC_get, ocd_DC_set, "0x%08llx\n");
static int ocd_DS_get(void *data, u64 *val)
DEFINE_SIMPLE_ATTRIBUTE(fops_DS, ocd_DS_get, NULL, "0x%08llx\n");
static int ocd_count_get(void *data, u64 *val)
DEFINE_SIMPLE_ATTRIBUTE(fops_count, ocd_count_get, NULL, "%lld\n");
static void ocd_debugfs_init(void)
static inline void ocd_debugfs_init(void)
static int __init ocd_init(void)
arch_initcall(ocd_init);
