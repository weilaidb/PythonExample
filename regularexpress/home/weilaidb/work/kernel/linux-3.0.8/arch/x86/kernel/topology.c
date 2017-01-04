static DEFINE_PER_CPU(struct x86_cpu, cpu_devices);
int __ref arch_register_cpu(int num)
EXPORT_SYMBOL(arch_register_cpu);
void arch_unregister_cpu(int num)
EXPORT_SYMBOL(arch_unregister_cpu);
static int __init arch_register_cpu(int num)
static int __init topology_init(void)
subsys_initcall(topology_init);
