static u32 __iomem *bcsr, *bcsr5;
static void pcmcia_hw_setup(int slot, int enable)
static int pcmcia_set_voltage(int slot, int vcc, int vpp)
struct cpm_pin ;
static struct cpm_pin mpc885ads_pins[] = ;
static void __init init_ioports(void)
static void __init mpc885ads_setup_arch(void)
static int __init mpc885ads_probe(void)
static struct of_device_id __initdata of_bus_ids[] = ;
static int __init declare_of_platform_devices(void)
machine_device_initcall(mpc885_ads, declare_of_platform_devices);
define_machine(mpc885_ads) ;
