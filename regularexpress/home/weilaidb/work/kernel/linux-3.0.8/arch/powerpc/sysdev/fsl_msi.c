LIST_HEAD(msi_head);
struct fsl_msi_feature ;
struct fsl_msi_cascade_data ;
static inline u32 fsl_msi_read(u32 __iomem *base, unsigned int reg)
static void fsl_msi_end_irq(struct irq_data *d)
static struct irq_chip fsl_msi_chip = ;
static int fsl_msi_host_map(struct irq_host *h, unsigned int virq,
irq_hw_number_t hw)
static struct irq_host_ops fsl_msi_host_ops = ;
static int fsl_msi_init_allocator(struct fsl_msi *msi_data)
static int fsl_msi_check_device(struct pci_dev *pdev, int nvec, int type)
static void fsl_teardown_msi_irqs(struct pci_dev *pdev)
static void fsl_compose_msi_msg(struct pci_dev *pdev, int hwirq,
struct msi_msg *msg,
struct fsl_msi *fsl_msi_data)
static int fsl_setup_msi_irqs(struct pci_dev *pdev, int nvec, int type)
static void fsl_msi_cascade(unsigned int irq, struct irq_desc *desc)
static int fsl_of_msi_remove(struct platform_device *ofdev)
static int __devinit fsl_msi_setup_hwirq(struct fsl_msi *msi,
struct platform_device *dev,
int offset, int irq_index)
static const struct of_device_id fsl_of_msi_ids[];
static int __devinit fsl_of_msi_probe(struct platform_device *dev)
static const struct fsl_msi_feature mpic_msi_feature = ;
static const struct fsl_msi_feature ipic_msi_feature = ;
static const struct of_device_id fsl_of_msi_ids[] = ;
static struct platform_driver fsl_of_msi_driver = ;
static __init int fsl_of_msi_init(void)
subsys_initcall(fsl_of_msi_init);
