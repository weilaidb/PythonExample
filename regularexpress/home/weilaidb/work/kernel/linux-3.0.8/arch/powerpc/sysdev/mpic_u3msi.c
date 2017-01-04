static struct mpic *msi_mpic;
static void mpic_u3msi_mask_irq(struct irq_data *data)
static void mpic_u3msi_unmask_irq(struct irq_data *data)
static struct irq_chip mpic_u3msi_chip = ;
static u64 read_ht_magic_addr(struct pci_dev *pdev, unsigned int pos)
static u64 find_ht_magic_addr(struct pci_dev *pdev, unsigned int hwirq)
static u64 find_u4_magic_addr(struct pci_dev *pdev, unsigned int hwirq)
static int u3msi_msi_check_device(struct pci_dev *pdev, int nvec, int type)
static void u3msi_teardown_msi_irqs(struct pci_dev *pdev)
static int u3msi_setup_msi_irqs(struct pci_dev *pdev, int nvec, int type)
int mpic_u3msi_init(struct mpic *mpic)
