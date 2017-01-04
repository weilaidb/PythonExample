static int clock_debug_rate_set(void *data, u64 val)
static int clock_debug_rate_get(void *data, u64 *val)
DEFINE_SIMPLE_ATTRIBUTE(clock_rate_fops, clock_debug_rate_get,
clock_debug_rate_set, "%llu\n");
static int clock_debug_enable_set(void *data, u64 val)
static int clock_debug_enable_get(void *data, u64 *val)
DEFINE_SIMPLE_ATTRIBUTE(clock_enable_fops, clock_debug_enable_get,
clock_debug_enable_set, "%llu\n");
static int clock_debug_local_get(void *data, u64 *val)
DEFINE_SIMPLE_ATTRIBUTE(clock_local_fops, clock_debug_local_get,
NULL, "%llu\n");
static struct dentry *debugfs_base;
int __init clock_debug_init(void)
int __init clock_debug_add(struct clk *clock)
