static void cpm2_cascade(unsigned int irq, struct irq_desc *desc)
static void __init tqm85xx_pic_init(void)
static void __init tqm85xx_setup_arch(void)
static void tqm85xx_show_cpuinfo(struct seq_file *m)
static void __init tqm85xx_ti1520_fixup(struct pci_dev *pdev)
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_TI, PCI_DEVICE_ID_TI_1520,
tqm85xx_ti1520_fixup);
static struct of_device_id __initdata of_bus_ids[] = ;
static int __init declare_of_platform_devices(void)
machine_device_initcall(tqm85xx, declare_of_platform_devices);
static const char *board[] __initdata = ;
static int __init tqm85xx_probe(void)
define_machine(tqm85xx) ;
