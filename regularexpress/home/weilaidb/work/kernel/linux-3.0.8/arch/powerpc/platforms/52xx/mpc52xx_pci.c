#undef DEBUG
#define MPC52xx_PCI_GSCR_BM		0x40000000
#define MPC52xx_PCI_GSCR_PE		0x20000000
#define MPC52xx_PCI_GSCR_SE		0x10000000
#define MPC52xx_PCI_GSCR_XLB2PCI_MASK	0x07000000
#define MPC52xx_PCI_GSCR_XLB2PCI_SHIFT	24
#define MPC52xx_PCI_GSCR_IPG2PCI_MASK	0x00070000
#define MPC52xx_PCI_GSCR_IPG2PCI_SHIFT	16
#define MPC52xx_PCI_GSCR_BME		0x00004000
#define MPC52xx_PCI_GSCR_PEE		0x00002000
#define MPC52xx_PCI_GSCR_SEE		0x00001000
#define MPC52xx_PCI_GSCR_PR		0x00000001
#define MPC52xx_PCI_IWBTAR_TRANSLATION(proc_ad,pci_ad,size)	  \
( ( (proc_ad) & 0xff000000 )			| \
( (((size) - 1) >> 8) & 0x00ff0000 )		| \
( ((pci_ad) >> 16) & 0x0000ff00 ) )
#define MPC52xx_PCI_IWCR_PACK(win0,win1,win2)	(((win0) << 24) | \
((win1) << 16) | \
((win2) <<  8))
#define MPC52xx_PCI_IWCR_DISABLE	0x0
#define MPC52xx_PCI_IWCR_ENABLE		0x1
#define MPC52xx_PCI_IWCR_READ		0x0
#define MPC52xx_PCI_IWCR_READ_LINE	0x2
#define MPC52xx_PCI_IWCR_READ_MULTI	0x4
#define MPC52xx_PCI_IWCR_MEM		0x0
#define MPC52xx_PCI_IWCR_IO		0x8
#define MPC52xx_PCI_TCR_P		0x01000000
#define MPC52xx_PCI_TCR_LD		0x00010000
#define MPC52xx_PCI_TCR_WCT8		0x00000008
#define MPC52xx_PCI_TBATR_DISABLE	0x0
#define MPC52xx_PCI_TBATR_ENABLE	0x1
struct mpc52xx_pci ;
const struct of_device_id mpc52xx_pci_ids[] __initdata = ;
static int
mpc52xx_pci_read_config(struct pci_bus *bus, unsigned int devfn,
int offset, int len, u32 *val)
static int
mpc52xx_pci_write_config(struct pci_bus *bus, unsigned int devfn,
int offset, int len, u32 val)
static struct pci_ops mpc52xx_pci_ops = ;
static void __init
mpc52xx_pci_setup(struct pci_controller *hose,
struct mpc52xx_pci __iomem *pci_regs, phys_addr_t pci_phys)
static void
mpc52xx_pci_fixup_resources(struct pci_dev *dev)
int __init
mpc52xx_add_bridge(struct device_node *node)
void __init mpc52xx_setup_pci(void)
