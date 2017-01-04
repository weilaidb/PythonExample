#define AFI_OFFSET	0x3800
#define PADS_OFFSET	0x3000
#define RP0_OFFSET	0x0000
#define RP1_OFFSET	0x1000
#define AFI_AXI_BAR0_SZ	0x00
#define AFI_AXI_BAR1_SZ	0x04
#define AFI_AXI_BAR2_SZ	0x08
#define AFI_AXI_BAR3_SZ	0x0c
#define AFI_AXI_BAR4_SZ	0x10
#define AFI_AXI_BAR5_SZ	0x14
#define AFI_AXI_BAR0_START	0x18
#define AFI_AXI_BAR1_START	0x1c
#define AFI_AXI_BAR2_START	0x20
#define AFI_AXI_BAR3_START	0x24
#define AFI_AXI_BAR4_START	0x28
#define AFI_AXI_BAR5_START	0x2c
#define AFI_FPCI_BAR0	0x30
#define AFI_FPCI_BAR1	0x34
#define AFI_FPCI_BAR2	0x38
#define AFI_FPCI_BAR3	0x3c
#define AFI_FPCI_BAR4	0x40
#define AFI_FPCI_BAR5	0x44
#define AFI_CACHE_BAR0_SZ	0x48
#define AFI_CACHE_BAR0_ST	0x4c
#define AFI_CACHE_BAR1_SZ	0x50
#define AFI_CACHE_BAR1_ST	0x54
#define AFI_MSI_BAR_SZ		0x60
#define AFI_MSI_FPCI_BAR_ST	0x64
#define AFI_MSI_AXI_BAR_ST	0x68
#define AFI_CONFIGURATION		0xac
#define  AFI_CONFIGURATION_EN_FPCI	(1 << 0)
#define AFI_FPCI_ERROR_MASKS	0xb0
#define AFI_INTR_MASK		0xb4
#define  AFI_INTR_MASK_INT_MASK	(1 << 0)
#define  AFI_INTR_MASK_MSI_MASK	(1 << 8)
#define AFI_INTR_CODE		0xb8
#define  AFI_INTR_CODE_MASK	0xf
#define  AFI_INTR_MASTER_ABORT	4
#define  AFI_INTR_LEGACY	6
#define AFI_INTR_SIGNATURE	0xbc
#define AFI_SM_INTR_ENABLE	0xc4
#define AFI_AFI_INTR_ENABLE		0xc8
#define  AFI_INTR_EN_INI_SLVERR		(1 << 0)
#define  AFI_INTR_EN_INI_DECERR		(1 << 1)
#define  AFI_INTR_EN_TGT_SLVERR		(1 << 2)
#define  AFI_INTR_EN_TGT_DECERR		(1 << 3)
#define  AFI_INTR_EN_TGT_WRERR		(1 << 4)
#define  AFI_INTR_EN_DFPCI_DECERR	(1 << 5)
#define  AFI_INTR_EN_AXI_DECERR		(1 << 6)
#define  AFI_INTR_EN_FPCI_TIMEOUT	(1 << 7)
#define AFI_PCIE_CONFIG					0x0f8
#define  AFI_PCIE_CONFIG_PCIEC0_DISABLE_DEVICE		(1 << 1)
#define  AFI_PCIE_CONFIG_PCIEC1_DISABLE_DEVICE		(1 << 2)
#define  AFI_PCIE_CONFIG_SM2TMS0_XBAR_CONFIG_MASK	(0xf << 20)
#define  AFI_PCIE_CONFIG_SM2TMS0_XBAR_CONFIG_SINGLE	(0x0 << 20)
#define  AFI_PCIE_CONFIG_SM2TMS0_XBAR_CONFIG_DUAL	(0x1 << 20)
#define AFI_FUSE			0x104
#define  AFI_FUSE_PCIE_T0_GEN2_DIS	(1 << 2)
#define AFI_PEX0_CTRL			0x110
#define AFI_PEX1_CTRL			0x118
#define  AFI_PEX_CTRL_RST		(1 << 0)
#define  AFI_PEX_CTRL_REFCLK_EN		(1 << 3)
#define RP_VEND_XP	0x00000F00
#define  RP_VEND_XP_DL_UP	(1 << 30)
#define RP_LINK_CONTROL_STATUS			0x00000090
#define  RP_LINK_CONTROL_STATUS_LINKSTAT_MASK	0x3fff0000
#define PADS_CTL_SEL		0x0000009C
#define PADS_CTL		0x000000A0
#define  PADS_CTL_IDDQ_1L	(1 << 0)
#define  PADS_CTL_TX_DATA_EN_1L	(1 << 6)
#define  PADS_CTL_RX_DATA_EN_1L	(1 << 10)
#define PADS_PLL_CTL				0x000000B8
#define  PADS_PLL_CTL_RST_B4SM			(1 << 1)
#define  PADS_PLL_CTL_LOCKDET			(1 << 8)
#define  PADS_PLL_CTL_REFCLK_MASK		(0x3 << 16)
#define  PADS_PLL_CTL_REFCLK_INTERNAL_CML	(0 << 16)
#define  PADS_PLL_CTL_REFCLK_INTERNAL_CMOS	(1 << 16)
#define  PADS_PLL_CTL_REFCLK_EXTERNAL		(2 << 16)
#define  PADS_PLL_CTL_TXCLKREF_MASK		(0x1 << 20)
#define  PADS_PLL_CTL_TXCLKREF_DIV10		(0 << 20)
#define  PADS_PLL_CTL_TXCLKREF_DIV5		(1 << 20)
#define PMC_SCRATCH42		0x144
#define PMC_SCRATCH42_PCX_CLAMP	(1 << 0)
static void __iomem *reg_pmc_base = IO_ADDRESS(TEGRA_PMC_BASE);
#define pmc_writel(value, reg) \
__raw_writel(value, (u32)reg_pmc_base + (reg))
#define pmc_readl(reg) \
__raw_readl((u32)reg_pmc_base + (reg))
#define TEGRA_PCIE_BASE		0x80000000
#define PCIE_REGS_SZ		SZ_16K
#define PCIE_CFG_OFF		PCIE_REGS_SZ
#define PCIE_CFG_SZ		SZ_1M
#define PCIE_EXT_CFG_OFF	(PCIE_CFG_SZ + PCIE_CFG_OFF)
#define PCIE_EXT_CFG_SZ		SZ_1M
#define PCIE_IOMAP_SZ		(PCIE_REGS_SZ + PCIE_CFG_SZ + PCIE_EXT_CFG_SZ)
#define MMIO_BASE		(TEGRA_PCIE_BASE + SZ_4M)
#define MMIO_SIZE		SZ_64K
#define MEM_BASE_0		(TEGRA_PCIE_BASE + SZ_256M)
#define MEM_SIZE_0		SZ_128M
#define MEM_BASE_1		(MEM_BASE_0 + MEM_SIZE_0)
#define MEM_SIZE_1		SZ_128M
#define PREFETCH_MEM_BASE_0	(MEM_BASE_1 + MEM_SIZE_1)
#define PREFETCH_MEM_SIZE_0	SZ_128M
#define PREFETCH_MEM_BASE_1	(PREFETCH_MEM_BASE_0 + PREFETCH_MEM_SIZE_0)
#define PREFETCH_MEM_SIZE_1	SZ_128M
#define  PCIE_CONF_BUS(b)	((b) << 16)
#define  PCIE_CONF_DEV(d)	((d) << 11)
#define  PCIE_CONF_FUNC(f)	((f) << 8)
#define  PCIE_CONF_REG(r)	\
(((r) & ~0x3) | (((r) < 256) ? PCIE_CFG_OFF : PCIE_EXT_CFG_OFF))
struct tegra_pcie_port ;
struct tegra_pcie_info ;
static struct tegra_pcie_info tegra_pcie = ;
void __iomem *tegra_pcie_io_base;
EXPORT_SYMBOL(tegra_pcie_io_base);
static inline void afi_writel(u32 value, unsigned long offset)
static inline u32 afi_readl(unsigned long offset)
static inline void pads_writel(u32 value, unsigned long offset)
static inline u32 pads_readl(unsigned long offset)
static struct tegra_pcie_port *bus_to_port(int bus)
static int tegra_pcie_read_conf(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 *val)
static int tegra_pcie_write_conf(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 val)
static struct pci_ops tegra_pcie_ops = ;
static void __devinit tegra_pcie_fixup_bridge(struct pci_dev *dev)
DECLARE_PCI_FIXUP_FINAL(PCI_ANY_ID, PCI_ANY_ID, tegra_pcie_fixup_bridge);
static void __devinit tegra_pcie_fixup_class(struct pci_dev *dev)
DECLARE_PCI_FIXUP_EARLY(PCI_VENDOR_ID_NVIDIA, 0x0bf0, tegra_pcie_fixup_class);
DECLARE_PCI_FIXUP_EARLY(PCI_VENDOR_ID_NVIDIA, 0x0bf1, tegra_pcie_fixup_class);
static void __devinit tegra_pcie_relax_enable(struct pci_dev *dev)
DECLARE_PCI_FIXUP_FINAL(PCI_ANY_ID, PCI_ANY_ID, tegra_pcie_relax_enable);
static int tegra_pcie_setup(int nr, struct pci_sys_data *sys)
static int tegra_pcie_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static struct pci_bus __init *tegra_pcie_scan_bus(int nr,
struct pci_sys_data *sys)
static struct hw_pci tegra_pcie_hw __initdata = ;
static irqreturn_t tegra_pcie_isr(int irq, void *arg)
static void tegra_pcie_setup_translations(void)
static void tegra_pcie_enable_controller(void)
static void tegra_pcie_xclk_clamp(bool clamp)
static void tegra_pcie_power_off(void)
static int tegra_pcie_power_regate(void)
static int tegra_pcie_clocks_get(void)
static void tegra_pcie_clocks_put(void)
static int __init tegra_pcie_get_resources(void)
#define TEGRA_PCIE_LINKUP_TIMEOUT	200
static bool tegra_pcie_check_link(struct tegra_pcie_port *pp, int idx,
u32 reset_reg)
static void __init tegra_pcie_add_port(int index, u32 offset, u32 reset_reg)
int __init tegra_pcie_init(bool init_port0, bool init_port1)
