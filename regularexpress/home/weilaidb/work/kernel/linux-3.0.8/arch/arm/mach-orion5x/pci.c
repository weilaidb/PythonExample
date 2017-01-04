#define PCIE_BASE	((void __iomem *)ORION5X_PCIE_VIRT_BASE)
void __init orion5x_pcie_id(u32 *dev, u32 *rev)
static int pcie_valid_config(int bus, int dev)
static DEFINE_SPINLOCK(orion5x_pcie_lock);
static int pcie_rd_conf(struct pci_bus *bus, u32 devfn, int where,
int size, u32 *val)
static int pcie_rd_conf_wa(struct pci_bus *bus, u32 devfn,
int where, int size, u32 *val)
static int pcie_wr_conf(struct pci_bus *bus, u32 devfn,
int where, int size, u32 val)
static struct pci_ops pcie_ops = ;
static int __init pcie_setup(struct pci_sys_data *sys)
#define ORION5X_PCI_REG(x)	(ORION5X_PCI_VIRT_BASE | (x))
#define PCI_MODE		ORION5X_PCI_REG(0xd00)
#define PCI_CMD			ORION5X_PCI_REG(0xc00)
#define PCI_P2P_CONF		ORION5X_PCI_REG(0x1d14)
#define PCI_CONF_ADDR		ORION5X_PCI_REG(0xc78)
#define PCI_CONF_DATA		ORION5X_PCI_REG(0xc7c)
#define PCI_MODE_64BIT			(1 << 2)
#define PCI_MODE_PCIX			((1 << 4) | (1 << 5))
#define PCI_CMD_HOST_REORDER		(1 << 29)
#define PCI_P2P_BUS_OFFS		16
#define PCI_P2P_BUS_MASK		(0xff << PCI_P2P_BUS_OFFS)
#define PCI_P2P_DEV_OFFS		24
#define PCI_P2P_DEV_MASK		(0x1f << PCI_P2P_DEV_OFFS)
#define PCI_CONF_REG(reg)		((reg) & 0xfc)
#define PCI_CONF_FUNC(func)		(((func) & 0x3) << 8)
#define PCI_CONF_DEV(dev)		(((dev) & 0x1f) << 11)
#define PCI_CONF_BUS(bus)		(((bus) & 0xff) << 16)
#define PCI_CONF_ADDR_EN		(1 << 31)
#define PCI_CONF_FUNC_STAT_CMD		0
#define PCI_CONF_REG_STAT_CMD		4
#define PCIX_STAT			0x64
#define PCIX_STAT_BUS_OFFS		8
#define PCIX_STAT_BUS_MASK		(0xff << PCIX_STAT_BUS_OFFS)
#define PCI_BAR_SIZE_DDR_CS(n)	(((n) == 0) ? ORION5X_PCI_REG(0xc08) : \
((n) == 1) ? ORION5X_PCI_REG(0xd08) : \
((n) == 2) ? ORION5X_PCI_REG(0xc0c) : \
((n) == 3) ? ORION5X_PCI_REG(0xd0c) : 0)
#define PCI_BAR_REMAP_DDR_CS(n)	(((n) == 0) ? ORION5X_PCI_REG(0xc48) : \
((n) == 1) ? ORION5X_PCI_REG(0xd48) : \
((n) == 2) ? ORION5X_PCI_REG(0xc4c) : \
((n) == 3) ? ORION5X_PCI_REG(0xd4c) : 0)
#define PCI_BAR_ENABLE		ORION5X_PCI_REG(0xc3c)
#define PCI_ADDR_DECODE_CTRL	ORION5X_PCI_REG(0xd3c)
#define PCI_CONF_FUNC_BAR_CS(n)		((n) >> 1)
#define PCI_CONF_REG_BAR_LO_CS(n)	(((n) & 1) ? 0x18 : 0x10)
#define PCI_CONF_REG_BAR_HI_CS(n)	(((n) & 1) ? 0x1c : 0x14)
static DEFINE_SPINLOCK(orion5x_pci_lock);
static int orion5x_pci_cardbus_mode;
static int orion5x_pci_local_bus_nr(void)
static int orion5x_pci_hw_rd_conf(int bus, int dev, u32 func,
u32 where, u32 size, u32 *val)
static int orion5x_pci_hw_wr_conf(int bus, int dev, u32 func,
u32 where, u32 size, u32 val)
static int orion5x_pci_valid_config(int bus, u32 devfn)
static int orion5x_pci_rd_conf(struct pci_bus *bus, u32 devfn,
int where, int size, u32 *val)
static int orion5x_pci_wr_conf(struct pci_bus *bus, u32 devfn,
int where, int size, u32 val)
static struct pci_ops pci_ops = ;
static void __init orion5x_pci_set_bus_nr(int nr)
static void __init orion5x_pci_master_slave_enable(void)
static void __init orion5x_setup_pci_wins(struct mbus_dram_target_info *dram)
static int __init pci_setup(struct pci_sys_data *sys)
static void __devinit rc_pci_fixup(struct pci_dev *dev)
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_MARVELL, PCI_ANY_ID, rc_pci_fixup);
static int orion5x_pci_disabled __initdata;
void __init orion5x_pci_disable(void)
void __init orion5x_pci_set_cardbus_mode(void)
int __init orion5x_pci_sys_setup(int nr, struct pci_sys_data *sys)
struct pci_bus __init *orion5x_pci_sys_scan_bus(int nr, struct pci_sys_data *sys)
int __init orion5x_pci_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
