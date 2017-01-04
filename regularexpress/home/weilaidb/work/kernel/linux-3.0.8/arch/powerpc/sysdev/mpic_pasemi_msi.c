#undef DEBUG
#define ALLOC_CHUNK 16
#define PASEMI_MSI_ADDR 0xfc080000
static struct mpic *msi_mpic;
static void mpic_pasemi_msi_mask_irq(struct irq_data *data)
static void mpic_pasemi_msi_unmask_irq(struct irq_data *data)
static struct irq_chip mpic_pasemi_msi_chip = ;
static int pasemi_msi_check_device(struct pci_dev *pdev, int nvec, int type)
static void pasemi_msi_teardown_msi_irqs(struct pci_dev *pdev)
static int pasemi_msi_setup_msi_irqs(struct pci_dev *pdev, int nvec, int type)
int mpic_pasemi_msi_init(struct mpic *mpic)
