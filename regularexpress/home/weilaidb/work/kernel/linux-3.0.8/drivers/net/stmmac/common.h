#if defined(CONFIG_VLAN_8021Q) || defined(CONFIG_VLAN_8021Q_MODULE)
#define STMMAC_VLAN_TAG_USED
#undef CHIP_DEBUG_PRINT
#define CHIP_DBG(fmt, args...)  printk(fmt, ## args)
#define CHIP_DBG(fmt, args...)  do  while (0)
#undef FRAME_FILTER_DEBUG
struct stmmac_extra_stats ;
#define HASH_TABLE_SIZE 64
#define PAUSE_TIME 0x200
#define FLOW_OFF	0
#define FLOW_RX		1
#define FLOW_TX		2
#define FLOW_AUTO	(FLOW_TX | FLOW_RX)
#define SF_DMA_MODE 1
enum rx_frame_status ;
enum tx_dma_irq_status ;
#define BUF_SIZE_16KiB 16384
#define BUF_SIZE_8KiB 8192
#define BUF_SIZE_4KiB 4096
#define BUF_SIZE_2KiB 2048
#define PMT_NOT_SUPPORTED 0
#define PMT_SUPPORTED 1
#define MAC_CTRL_REG		0x00000000
#define MAC_ENABLE_TX		0x00000008
#define MAC_RNABLE_RX		0x00000004
#define MMC_CONTROL		0x00000100
#define MMC_HIGH_INTR		0x00000104
#define MMC_LOW_INTR		0x00000108
#define MMC_HIGH_INTR_MASK	0x0000010c
#define MMC_LOW_INTR_MASK	0x00000110
#define MMC_CONTROL_MAX_FRM_MASK	0x0003ff8
#define MMC_CONTROL_MAX_FRM_SHIFT	3
#define MMC_CONTROL_MAX_FRAME		0x7FF
struct stmmac_desc_ops ;
struct stmmac_dma_ops ;
struct stmmac_ops ;
struct mac_link ;
struct mii_regs ;
struct mac_device_info ;
struct mac_device_info *dwmac1000_setup(void __iomem *ioaddr);
struct mac_device_info *dwmac100_setup(void __iomem *ioaddr);
extern void stmmac_set_mac_addr(void __iomem *ioaddr, u8 addr[6],
unsigned int high, unsigned int low);
extern void stmmac_get_mac_addr(void __iomem *ioaddr, unsigned char *addr,
unsigned int high, unsigned int low);
extern void dwmac_dma_flush_tx_fifo(void __iomem *ioaddr);
