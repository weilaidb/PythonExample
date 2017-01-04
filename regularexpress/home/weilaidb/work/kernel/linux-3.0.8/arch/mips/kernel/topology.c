static DEFINE_PER_CPU(struct cpu, cpu_devices);
static int __init topology_init(void)
subsys_initcall(topology_init);
