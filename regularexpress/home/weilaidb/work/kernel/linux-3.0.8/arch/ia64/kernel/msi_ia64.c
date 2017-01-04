static struct irq_chip	ia64_msi_chip;
static int ia64_set_msi_irq_affinity(struct irq_data *idata,
const cpumask_t *cpu_mask, bool force)
int ia64_setup_msi_irq(struct pci_dev *pdev, struct msi_desc *desc)
void ia64_teardown_msi_irq(unsigned int irq)
static void ia64_ack_msi_irq(struct irq_data *data)
static int ia64_msi_retrigger_irq(struct irq_data *data)
static struct irq_chip ia64_msi_chip = ;
int arch_setup_msi_irq(struct pci_dev *pdev, struct msi_desc *desc)
void arch_teardown_msi_irq(unsigned int irq)
static int dmar_msi_set_affinity(struct irq_data *data,
const struct cpumask *mask, bool force)
static struct irq_chip dmar_msi_type = ;
static int
msi_compose_msg(struct pci_dev *pdev, unsigned int irq, struct msi_msg *msg)
int arch_setup_dmar_msi(unsigned int irq)
