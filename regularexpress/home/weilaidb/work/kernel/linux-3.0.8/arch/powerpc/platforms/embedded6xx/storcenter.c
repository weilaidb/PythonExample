static __initdata struct of_device_id storcenter_of_bus[] = ;
static int __init storcenter_device_probe(void)
machine_device_initcall(storcenter, storcenter_device_probe);
static int __init storcenter_add_bridge(struct device_node *dev)
static void __init storcenter_setup_arch(void)
static void __init storcenter_init_IRQ(void)
static void storcenter_restart(char *cmd)
static int __init storcenter_probe(void)
define_machine(storcenter);
