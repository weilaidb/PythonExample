unsigned long pcicr_virt;
unsigned long PCI_IO_AREA;
static u32 __init r2p2(u32 num)
static irqreturn_t pcish5_err_irq(int irq, void *dev_id)
static irqreturn_t pcish5_serr_irq(int irq, void *dev_id)
static struct resource sh5_pci_resources[2];
static struct pci_channel sh5pci_controller = ;
static int __init sh5pci_init(void)
arch_initcall(sh5pci_init);
