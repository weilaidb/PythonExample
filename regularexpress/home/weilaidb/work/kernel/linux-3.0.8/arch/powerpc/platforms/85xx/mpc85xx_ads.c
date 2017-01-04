static int mpc85xx_exclude_device(struct pci_controller *hose,
u_char bus, u_char devfn)
static void cpm2_cascade(unsigned int irq, struct irq_desc *desc)
static void __init mpc85xx_ads_pic_init(void)
struct cpm_pin ;
static const struct cpm_pin mpc8560_ads_pins[] = ;
static void __init init_ioports(void)
static void __init mpc85xx_ads_setup_arch(void)
static void mpc85xx_ads_show_cpuinfo(struct seq_file *m)
static struct of_device_id __initdata of_bus_ids[] = ;
static int __init declare_of_platform_devices(void)
machine_device_initcall(mpc85xx_ads, declare_of_platform_devices);
static int __init mpc85xx_ads_probe(void)
define_machine(mpc85xx_ads) ;
