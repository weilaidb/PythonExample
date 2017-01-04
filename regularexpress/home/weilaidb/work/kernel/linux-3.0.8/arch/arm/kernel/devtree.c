void __init early_init_dt_add_memory_arch(u64 base, u64 size)
void * __init early_init_dt_alloc_memory_arch(u64 size, u64 align)
void __init arm_dt_memblock_reserve(void)
struct machine_desc * __init setup_machine_fdt(unsigned int dt_phys)
unsigned int irq_create_of_mapping(struct device_node *controller,
const u32 *intspec, unsigned int intsize)
EXPORT_SYMBOL_GPL(irq_create_of_mapping);
