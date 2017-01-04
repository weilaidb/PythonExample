#define LTQ_PCI_CFG_BASE		0x17000000
#define LTQ_PCI_CFG_SIZE		0x00008000
#define LTQ_PCI_MEM_BASE		0x18000000
#define LTQ_PCI_MEM_SIZE		0x02000000
#define LTQ_PCI_IO_BASE			0x1AE00000
#define LTQ_PCI_IO_SIZE			0x00200000
#define PCI_CR_FCI_ADDR_MAP0		0x00C0
#define PCI_CR_FCI_ADDR_MAP1		0x00C4
#define PCI_CR_FCI_ADDR_MAP2		0x00C8
#define PCI_CR_FCI_ADDR_MAP3		0x00CC
#define PCI_CR_FCI_ADDR_MAP4		0x00D0
#define PCI_CR_FCI_ADDR_MAP5		0x00D4
#define PCI_CR_FCI_ADDR_MAP6		0x00D8
#define PCI_CR_FCI_ADDR_MAP7		0x00DC
#define PCI_CR_CLK_CTRL			0x0000
#define PCI_CR_PCI_MOD			0x0030
#define PCI_CR_PC_ARB			0x0080
#define PCI_CR_FCI_ADDR_MAP11hg		0x00E4
#define PCI_CR_BAR11MASK		0x0044
#define PCI_CR_BAR12MASK		0x0048
#define PCI_CR_BAR13MASK		0x004C
#define PCI_CS_BASE_ADDR1		0x0010
#define PCI_CR_PCI_ADDR_MAP11		0x0064
#define PCI_CR_FCI_BURST_LENGTH		0x00E8
#define PCI_CR_PCI_EOI			0x002C
#define PCI_CS_STS_CMD			0x0004
#define PCI_MASTER0_REQ_MASK_2BITS	8
#define PCI_MASTER1_REQ_MASK_2BITS	10
#define PCI_MASTER2_REQ_MASK_2BITS	12
#define INTERNAL_ARB_ENABLE_BIT		0
#define LTQ_CGU_IFCCR		0x0018
#define LTQ_CGU_PCICR		0x0034
#define ltq_pci_w32(x, y)	ltq_w32((x), ltq_pci_membase + (y))
#define ltq_pci_r32(x)		ltq_r32(ltq_pci_membase + (x))
#define ltq_pci_cfg_w32(x, y)	ltq_w32((x), ltq_pci_mapped_cfg + (y))
#define ltq_pci_cfg_r32(x)	ltq_r32(ltq_pci_mapped_cfg + (x))
struct ltq_pci_gpio_map ;
static struct ltq_pci_gpio_map ltq_pci_gpio_map[] = ;
__iomem void *ltq_pci_mapped_cfg;
static __iomem void *ltq_pci_membase;
int (*ltqpci_plat_dev_init)(struct pci_dev *dev) = NULL;
static int ltq_pci_req_mask = 0xf;
static int *ltq_pci_irq_map;
struct pci_ops ltq_pci_ops = ;
static struct resource pci_io_resource = ;
static struct resource pci_mem_resource = ;
static struct pci_controller ltq_pci_controller = ;
int pcibios_plat_dev_init(struct pci_dev *dev)
static u32 ltq_calc_bar11mask(void)
static void ltq_pci_setup_gpio(int gpio)
static int __devinit ltq_pci_startup(struct ltq_pci_data *conf)
int __init pcibios_map_irq(const struct pci_dev *dev, u8 slot, u8 pin)
static int __devinit ltq_pci_probe(struct platform_device *pdev)
static struct platform_driver
ltq_pci_driver = ;
int __init pcibios_init(void)
arch_initcall(pcibios_init);
