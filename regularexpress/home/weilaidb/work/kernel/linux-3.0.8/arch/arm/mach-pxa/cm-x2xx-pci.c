unsigned long it8152_base_address;
static int cmx2xx_it8152_irq_gpio;
static void cmx2xx_it8152_irq_demux(unsigned int irq, struct irq_desc *desc)
void __cmx2xx_pci_init_irq(int irq_gpio)
static unsigned long sleep_save_ite[10];
void __cmx2xx_pci_suspend(void)
void __cmx2xx_pci_resume(void)
void cmx2xx_pci_suspend(void)
void cmx2xx_pci_resume(void)
static int __init cmx2xx_pci_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static void cmx2xx_pci_preinit(void)
static struct hw_pci cmx2xx_pci __initdata = ;
static int __init cmx2xx_init_pci(void)
subsys_initcall(cmx2xx_init_pci);
