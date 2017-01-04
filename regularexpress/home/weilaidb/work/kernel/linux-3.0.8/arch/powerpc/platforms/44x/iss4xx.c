static __initdata struct of_device_id iss4xx_of_bus[] = ;
static int __init iss4xx_device_probe(void)
machine_device_initcall(iss4xx, iss4xx_device_probe);
static void __init iss4xx_init_irq(void)
static void __cpuinit smp_iss4xx_setup_cpu(int cpu)
static int __cpuinit smp_iss4xx_kick_cpu(int cpu)
static struct smp_ops_t iss_smp_ops = ;
static void __init iss4xx_smp_init(void)
static void __init iss4xx_smp_init(void)
static void __init iss4xx_setup_arch(void)
static int __init iss4xx_probe(void)
define_machine(iss4xx) ;
