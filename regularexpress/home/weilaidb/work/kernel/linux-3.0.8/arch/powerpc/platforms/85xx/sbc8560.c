static void cpm2_cascade(unsigned int irq, struct irq_desc *desc)
static void __init sbc8560_pic_init(void)
struct cpm_pin ;
static const struct cpm_pin sbc8560_pins[] = ;
static void __init init_ioports(void)
static void __init sbc8560_setup_arch(void)
static void sbc8560_show_cpuinfo(struct seq_file *m)
static struct of_device_id __initdata of_bus_ids[] = ;
static int __init declare_of_platform_devices(void)
machine_device_initcall(sbc8560, declare_of_platform_devices);
static int __init sbc8560_probe(void)
static int __init sbc8560_rtc_init(void)
arch_initcall(sbc8560_rtc_init);
static __u8 __iomem *brstcr;
static int __init sbc8560_bdrstcr_init(void)
arch_initcall(sbc8560_bdrstcr_init);
void sbc8560_rstcr_restart(char * cmd)
define_machine(sbc8560) ;
