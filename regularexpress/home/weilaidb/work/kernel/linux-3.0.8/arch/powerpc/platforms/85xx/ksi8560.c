#define KSI8560_CPLD_HVR		0x04
#define KSI8560_CPLD_PVR		0x08
#define KSI8560_CPLD_RCR1		0x30
#define KSI8560_CPLD_RCR1_CPUHR		0x80
static void __iomem *cpld_base = NULL;
static void machine_restart(char *cmd)
static void cpm2_cascade(unsigned int irq, struct irq_desc *desc)
static void __init ksi8560_pic_init(void)
struct cpm_pin ;
static struct cpm_pin __initdata ksi8560_pins[] = ;
static void __init init_ioports(void)
static void __init ksi8560_setup_arch(void)
static void ksi8560_show_cpuinfo(struct seq_file *m)
static struct of_device_id __initdata of_bus_ids[] = ;
static int __init declare_of_platform_devices(void)
machine_device_initcall(ksi8560, declare_of_platform_devices);
static int __init ksi8560_probe(void)
define_machine(ksi8560) ;
