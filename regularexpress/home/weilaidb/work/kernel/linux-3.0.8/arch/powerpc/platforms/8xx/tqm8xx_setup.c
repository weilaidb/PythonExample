struct cpm_pin ;
static struct __initdata cpm_pin tqm8xx_pins[] = ;
static struct __initdata cpm_pin tqm8xx_fec_pins[] = ;
static void __init init_pins(int n, struct cpm_pin *pin)
static void __init init_ioports(void)
static void __init tqm8xx_setup_arch(void)
static int __init tqm8xx_probe(void)
static struct of_device_id __initdata of_bus_ids[] = ;
static int __init declare_of_platform_devices(void)
machine_device_initcall(tqm8xx, declare_of_platform_devices);
define_machine(tqm8xx) ;
