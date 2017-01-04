struct sn_msi_info ;
static struct sn_msi_info sn_msi_info[NR_IRQS];
static struct irq_chip sn_msi_chip;
void sn_teardown_msi_irq(unsigned int irq)
int sn_setup_msi_irq(struct pci_dev *pdev, struct msi_desc *entry)
static int sn_set_msi_irq_affinity(struct irq_data *data,
const struct cpumask *cpu_mask, bool force)
static void sn_ack_msi_irq(struct irq_data *data)
static int sn_msi_retrigger_irq(struct irq_data *data)
static struct irq_chip sn_msi_chip = ;
