static unsigned long get_memblock_size(void)
unsigned long memory_block_size_bytes(void)
static int pseries_remove_memblock(unsigned long base, unsigned int memblock_size)
static int pseries_remove_memory(struct device_node *np)
static int pseries_add_memory(struct device_node *np)
static int pseries_drconf_memory(unsigned long *base, unsigned int action)
static int pseries_memory_notifier(struct notifier_block *nb,
unsigned long action, void *node)
static struct notifier_block pseries_mem_nb = ;
static int __init pseries_memory_hotplug_init(void)
machine_device_initcall(pseries, pseries_memory_hotplug_init);
