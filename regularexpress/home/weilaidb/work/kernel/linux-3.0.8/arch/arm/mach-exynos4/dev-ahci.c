#define SATA_CTRL0		0x0
#define SATA_CTRL1		0x4
#define SATA_PHY_STATUS		0x8
#define SATA_CTRL0_RX_DATA_VALID(x)	(x << 27)
#define SATA_CTRL0_SPEED_MODE		(1 << 26)
#define SATA_CTRL0_M_PHY_CAL		(1 << 19)
#define SATA_CTRL0_PHY_CMU_RST_N	(1 << 10)
#define SATA_CTRL0_M_PHY_LN_RST_N	(1 << 9)
#define SATA_CTRL0_PHY_POR_N		(1 << 8)
#define SATA_CTRL1_RST_PMALIVE_N	(1 << 8)
#define SATA_CTRL1_RST_RXOOB_N		(1 << 7)
#define SATA_CTRL1_RST_RX_N		(1 << 6)
#define SATA_CTRL1_RST_TX_N		(1 << 5)
#define SATA_PHY_STATUS_CMU_OK		(1 << 18)
#define SATA_PHY_STATUS_LANE_OK		(1 << 16)
#define LANE0		0x200
#define COM_LANE	0xA00
#define HOST_PORTS_IMPL	0xC
#define SCLK_SATA_FREQ	(67 * MHZ)
static void __iomem *phy_base, *phy_ctrl;
struct phy_reg ;
static const struct phy_reg exynos4_sataphy_cmu[] = ;
static const struct phy_reg exynos4_sataphy_lane[] = ;
static const struct phy_reg exynos4_sataphy_comlane[] = ;
static int wait_for_phy_ready(void __iomem *reg, unsigned long bit)
static int ahci_phy_init(void __iomem *mmio)
static int exynos4_ahci_init(struct device *dev, void __iomem *mmio)
static struct ahci_platform_data exynos4_ahci_pdata = ;
static struct resource exynos4_ahci_resource[] = ;
static u64 exynos4_ahci_dmamask = DMA_BIT_MASK(32);
struct platform_device exynos4_device_ahci = ;
