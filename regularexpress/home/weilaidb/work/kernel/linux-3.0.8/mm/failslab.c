static struct  failslab = ;
bool should_failslab(size_t size, gfp_t gfpflags, unsigned long cache_flags)
static int __init setup_failslab(char *str)
__setup("failslab=", setup_failslab);
static int __init failslab_debugfs_init(void)
late_initcall(failslab_debugfs_init);
