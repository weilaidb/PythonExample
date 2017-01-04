unsigned long mmap_min_addr;
unsigned long dac_mmap_min_addr = CONFIG_DEFAULT_MMAP_MIN_ADDR;
static void update_mmap_min_addr(void)
int mmap_min_addr_handler(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
static int __init init_mmap_min_addr(void)
pure_initcall(init_mmap_min_addr);
