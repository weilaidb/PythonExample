static void psr2_spin(void)
static void psr2_restart(char *cmd)
static int psr2_probe_devices(void)
machine_arch_initcall(psr2_md, psr2_probe_devices);
static void __init psr2_setup_arch(void)
static int __init psr2_probe(void)
static void __init psr2_init_irq(void)
define_machine(psr2_md) ;
