static u64 msi_free_irq_bitmask[4];
static u64 msi_multiple_irq_bitmask[4];
static DEFINE_SPINLOCK(msi_free_irq_bitmask_lock);
static int msi_irq_size;
int arch_setup_msi_irq(struct pci_dev *dev, struct msi_desc *desc)
int arch_setup_msi_irqs(struct pci_dev *dev, int nvec, int type)
void arch_teardown_msi_irq(unsigned int irq)
static DEFINE_RAW_SPINLOCK(octeon_irq_msi_lock);
static u64 msi_rcv_reg[4];
static u64 mis_ena_reg[4];
static void octeon_irq_msi_enable_pcie(struct irq_data *data)
static void octeon_irq_msi_disable_pcie(struct irq_data *data)
static struct irq_chip octeon_irq_chip_msi_pcie = ;
static void octeon_irq_msi_enable_pci(struct irq_data *data)
static void octeon_irq_msi_disable_pci(struct irq_data *data)
static struct irq_chip octeon_irq_chip_msi_pci = ;
static irqreturn_t __octeon_msi_do_interrupt(int index, u64 msi_bits)
#define OCTEON_MSI_INT_HANDLER_X(x)					\
static irqreturn_t octeon_msi_interrupt##x(int cpl, void *dev_id)	\
OCTEON_MSI_INT_HANDLER_X(0);
OCTEON_MSI_INT_HANDLER_X(1);
OCTEON_MSI_INT_HANDLER_X(2);
OCTEON_MSI_INT_HANDLER_X(3);
int __init octeon_msi_initialize(void)
subsys_initcall(octeon_msi_initialize);
