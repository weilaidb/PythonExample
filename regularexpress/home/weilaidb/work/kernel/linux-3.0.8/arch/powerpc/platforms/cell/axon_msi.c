#define MSIC_CTRL_REG	0x0
#define MSIC_BASE_ADDR_HI_REG	0x3
#define MSIC_BASE_ADDR_LO_REG	0x4
#define MSIC_READ_OFFSET_REG	0x5
#define MSIC_WRITE_OFFSET_REG	0x6
#define MSIC_CTRL_ENABLE		0x0001
#define MSIC_CTRL_FIFO_FULL_ENABLE	0x0002
#define MSIC_CTRL_IRQ_ENABLE		0x0008
#define MSIC_CTRL_FULL_STOP_ENABLE	0x0010
#define MSIC_FIFO_SIZE_SHIFT	16
#define MSIC_FIFO_SIZE_BYTES	(1 << MSIC_FIFO_SIZE_SHIFT)
#define MSIC_CTRL_FIFO_SIZE	(((MSIC_FIFO_SIZE_SHIFT - 15) << 8) & 0x300)
#define MSIC_FIFO_SIZE_MASK	((MSIC_FIFO_SIZE_BYTES - 1) & ~0xFu)
#define MSIC_FIFO_ENTRY_SIZE	0x10
struct axon_msic ;
void axon_msi_debug_setup(struct device_node *dn, struct axon_msic *msic);
static inline void axon_msi_debug_setup(struct device_node *dn,
struct axon_msic *msic)
static void msic_dcr_write(struct axon_msic *msic, unsigned int dcr_n, u32 val)
static void axon_msi_cascade(unsigned int irq, struct irq_desc *desc)
static struct axon_msic *find_msi_translator(struct pci_dev *dev)
static int axon_msi_check_device(struct pci_dev *dev, int nvec, int type)
static int setup_msi_msg_address(struct pci_dev *dev, struct msi_msg *msg)
static int axon_msi_setup_msi_irqs(struct pci_dev *dev, int nvec, int type)
static void axon_msi_teardown_msi_irqs(struct pci_dev *dev)
static struct irq_chip msic_irq_chip = ;
static int msic_host_map(struct irq_host *h, unsigned int virq,
irq_hw_number_t hw)
static struct irq_host_ops msic_host_ops = ;
static void axon_msi_shutdown(struct platform_device *device)
static int axon_msi_probe(struct platform_device *device)
static const struct of_device_id axon_msi_device_id[] = ;
static struct platform_driver axon_msi_driver = ;
static int __init axon_msi_init(void)
subsys_initcall(axon_msi_init);
static int msic_set(void *data, u64 val)
static int msic_get(void *data, u64 *val)
DEFINE_SIMPLE_ATTRIBUTE(fops_msic, msic_get, msic_set, "%llu\n");
void axon_msi_debug_setup(struct device_node *dn, struct axon_msic *msic)
