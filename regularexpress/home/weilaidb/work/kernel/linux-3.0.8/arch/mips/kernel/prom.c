int __init early_init_dt_scan_memory_arch(unsigned long node,
const char *uname, int depth,
void *data)
void __init early_init_dt_add_memory_arch(u64 base, u64 size)
int __init reserve_mem_mach(unsigned long addr, unsigned long size)
void __init free_mem_mach(unsigned long addr, unsigned long size)
void * __init early_init_dt_alloc_memory_arch(u64 size, u64 align)
void __init early_init_dt_setup_initrd_arch(unsigned long start,
unsigned long end)
unsigned int irq_create_of_mapping(struct device_node *controller,
const u32 *intspec, unsigned int intsize)
EXPORT_SYMBOL_GPL(irq_create_of_mapping);
void __init early_init_devtree(void *params)
void __init device_tree_init(void)
