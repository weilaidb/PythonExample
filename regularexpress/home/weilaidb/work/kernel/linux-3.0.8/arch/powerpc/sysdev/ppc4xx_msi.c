#define PEIH_TERMADH	0x00
#define PEIH_TERMADL	0x08
#define PEIH_MSIED	0x10
#define PEIH_MSIMK	0x18
#define PEIH_MSIASS	0x20
#define PEIH_FLUSH0	0x30
#define PEIH_FLUSH1	0x38
#define PEIH_CNTRST	0x48
#define NR_MSI_IRQS	4
struct ppc4xx_msi ;
static struct ppc4xx_msi ppc4xx_msi;
static int ppc4xx_msi_init_allocator(struct platform_device *dev,
struct ppc4xx_msi *msi_data)
static int ppc4xx_setup_msi_irqs(struct pci_dev *dev, int nvec, int type)
void ppc4xx_teardown_msi_irqs(struct pci_dev *dev)
static int ppc4xx_msi_check_device(struct pci_dev *pdev, int nvec, int type)
static int ppc4xx_setup_pcieh_hw(struct platform_device *dev,
struct resource res, struct ppc4xx_msi *msi)
static int ppc4xx_of_msi_remove(struct platform_device *dev)
static int __devinit ppc4xx_msi_probe(struct platform_device *dev)
static const struct of_device_id ppc4xx_msi_ids[] = ;
static struct platform_driver ppc4xx_msi_driver = ;
static __init int ppc4xx_msi_init(void)
subsys_initcall(ppc4xx_msi_init);
