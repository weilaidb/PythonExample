#define PORT(_base,_irq)				\
static struct plat_serial8250_port pcit_data[] = ;
static struct platform_device pcit_serial8250_device = ;
static struct plat_serial8250_port pcit_cplus_data[] = ;
static struct platform_device pcit_cplus_serial8250_device = ;
static struct resource pcit_cmos_rsrc[] = ;
static struct platform_device pcit_cmos_device = ;
static struct platform_device pcit_pcspeaker_pdev = ;
static struct resource sni_io_resource = ;
static struct resource pcit_io_resources[] = ;
static struct resource sni_mem_resource = ;
static void __init sni_pcit_resource_init(void)
extern struct pci_ops sni_pcit_ops;
static struct pci_controller sni_pcit_controller = ;
static void enable_pcit_irq(struct irq_data *d)
void disable_pcit_irq(struct irq_data *d)
static struct irq_chip pcit_irq_type = ;
static void pcit_hwint1(void)
static void pcit_hwint0(void)
static void sni_pcit_hwint(void)
static void sni_pcit_hwint_cplus(void)
void __init sni_pcit_irq_init(void)
void __init sni_pcit_cplus_irq_init(void)
void __init sni_pcit_init(void)
static int __init snirm_pcit_setup_devinit(void)
device_initcall(snirm_pcit_setup_devinit);
