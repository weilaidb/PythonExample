static int ss_get(void *data, u64 *val)
DEFINE_SIMPLE_ATTRIBUTE(fops_ss, ss_get, NULL, "%llu\n");
struct spin_multi_state ;
struct spin_multi_per_thread ;
static int multi_other(void *data)
static int multi_get(void *data, u64 *val)
DEFINE_SIMPLE_ATTRIBUTE(fops_multi, multi_get, NULL, "%llu\n");
extern struct dentry *mips_debugfs_dir;
static int __init spinlock_test(void)
device_initcall(spinlock_test);
