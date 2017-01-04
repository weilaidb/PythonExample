#define cacheconf (*(volatile unsigned int *)PCIMT_CACHECONF)
#define invspace (*(volatile unsigned int *)PCIMT_INVSPACE)
static void __init sni_pcimt_sc_init(void)
static inline void sni_pcimt_detect(void)
#define PORT(_base,_irq)				\
static struct plat_serial8250_port pcimt_data[] = ;
static struct platform_device pcimt_serial8250_device = ;
static struct resource pcimt_cmos_rsrc[] = ;
static struct platform_device pcimt_cmos_device = ;
static struct resource sni_io_resource = ;
static struct resource pcimt_io_resources[] = ;
static struct resource pcimt_mem_resources[] = ;
static struct resource sni_mem_resource = ;
static void __init sni_pcimt_resource_init(void)
extern struct pci_ops sni_pcimt_ops;
static struct pci_controller sni_controller = ;
static void enable_pcimt_irq(struct irq_data *d)
void disable_pcimt_irq(struct irq_data *d)
static struct irq_chip pcimt_irq_type = ;
static void pcimt_hwint0(void)
static void pcimt_hwint1(void)
static void pcimt_hwint3(void)
static void sni_pcimt_hwint(void)
void __init sni_pcimt_irq_init(void)
void __init sni_pcimt_init(void)
static int __init snirm_pcimt_setup_devinit(void)
device_initcall(snirm_pcimt_setup_devinit);
