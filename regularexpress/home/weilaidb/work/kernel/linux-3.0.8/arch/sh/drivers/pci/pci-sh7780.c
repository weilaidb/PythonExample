static struct resource sh7785_pci_resources[] = ;
static struct pci_channel sh7780_pci_controller = ;
struct pci_errors  pci_arbiter_errors[] = , pci_interrupt_errors[] = ;
static irqreturn_t sh7780_pci_err_irq(int irq, void *dev_id)
static irqreturn_t sh7780_pci_serr_irq(int irq, void *dev_id)
static int __init sh7780_pci_setup_irqs(struct pci_channel *hose)
static inline void __init sh7780_pci_teardown_irqs(struct pci_channel *hose)
static void __init sh7780_pci66_init(struct pci_channel *hose)
static int __init sh7780_pci_init(void)
arch_initcall(sh7780_pci_init);
