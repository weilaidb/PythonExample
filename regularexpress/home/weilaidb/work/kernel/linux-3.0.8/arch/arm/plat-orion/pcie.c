#define PCIE_DEV_ID_OFF		0x0000
#define PCIE_CMD_OFF		0x0004
#define PCIE_DEV_REV_OFF	0x0008
#define PCIE_BAR_LO_OFF(n)	(0x0010 + ((n) << 3))
#define PCIE_BAR_HI_OFF(n)	(0x0014 + ((n) << 3))
#define PCIE_HEADER_LOG_4_OFF	0x0128
#define PCIE_BAR_CTRL_OFF(n)	(0x1804 + ((n - 1) * 4))
#define PCIE_WIN04_CTRL_OFF(n)	(0x1820 + ((n) << 4))
#define PCIE_WIN04_BASE_OFF(n)	(0x1824 + ((n) << 4))
#define PCIE_WIN04_REMAP_OFF(n)	(0x182c + ((n) << 4))
#define PCIE_WIN5_CTRL_OFF	0x1880
#define PCIE_WIN5_BASE_OFF	0x1884
#define PCIE_WIN5_REMAP_OFF	0x188c
#define PCIE_CONF_ADDR_OFF	0x18f8
#define  PCIE_CONF_ADDR_EN		0x80000000
#define  PCIE_CONF_REG(r)		((((r) & 0xf00) << 16) | ((r) & 0xfc))
#define  PCIE_CONF_BUS(b)		(((b) & 0xff) << 16)
#define  PCIE_CONF_DEV(d)		(((d) & 0x1f) << 11)
#define  PCIE_CONF_FUNC(f)		(((f) & 0x7) << 8)
#define PCIE_CONF_DATA_OFF	0x18fc
#define PCIE_MASK_OFF		0x1910
#define PCIE_CTRL_OFF		0x1a00
#define  PCIE_CTRL_X1_MODE		0x0001
#define PCIE_STAT_OFF		0x1a04
#define  PCIE_STAT_DEV_OFFS		20
#define  PCIE_STAT_DEV_MASK		0x1f
#define  PCIE_STAT_BUS_OFFS		8
#define  PCIE_STAT_BUS_MASK		0xff
#define  PCIE_STAT_LINK_DOWN		1
#define PCIE_DEBUG_CTRL         0x1a60
#define  PCIE_DEBUG_SOFT_RESET		(1<<20)
u32 __init orion_pcie_dev_id(void __iomem *base)
u32 __init orion_pcie_rev(void __iomem *base)
int orion_pcie_link_up(void __iomem *base)
int __init orion_pcie_x4_mode(void __iomem *base)
int orion_pcie_get_local_bus_nr(void __iomem *base)
void __init orion_pcie_set_local_bus_nr(void __iomem *base, int nr)
void __init orion_pcie_reset(void __iomem *base)
static void __init orion_pcie_setup_wins(void __iomem *base,
struct mbus_dram_target_info *dram)
void __init orion_pcie_setup(void __iomem *base,
struct mbus_dram_target_info *dram)
int orion_pcie_rd_conf(void __iomem *base, struct pci_bus *bus,
u32 devfn, int where, int size, u32 *val)
int orion_pcie_rd_conf_tlp(void __iomem *base, struct pci_bus *bus,
u32 devfn, int where, int size, u32 *val)
int orion_pcie_rd_conf_wa(void __iomem *wa_base, struct pci_bus *bus,
u32 devfn, int where, int size, u32 *val)
int orion_pcie_wr_conf(void __iomem *base, struct pci_bus *bus,
u32 devfn, int where, int size, u32 val)
