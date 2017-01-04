static struct dentry *jz4740_clock_debugfs;
static int jz4740_clock_debugfs_show_enabled(void *data, uint64_t *value)
static int jz4740_clock_debugfs_set_enabled(void *data, uint64_t value)
DEFINE_SIMPLE_ATTRIBUTE(jz4740_clock_debugfs_ops_enabled,
jz4740_clock_debugfs_show_enabled,
jz4740_clock_debugfs_set_enabled,
"%llu\n");
static int jz4740_clock_debugfs_show_rate(void *data, uint64_t *value)
DEFINE_SIMPLE_ATTRIBUTE(jz4740_clock_debugfs_ops_rate,
jz4740_clock_debugfs_show_rate,
NULL,
"%llu\n");
void jz4740_clock_debugfs_add_clk(struct clk *clk)
void jz4740_clock_debugfs_update_parent(struct clk *clk)
void jz4740_clock_debugfs_init(void)
