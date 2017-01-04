#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRV_NAME	"8139too"
#define DRV_VERSION	"0.9.28"
#define RTL8139_DRIVER_NAME   DRV_NAME " Fast Ethernet driver " DRV_VERSION
#define RTL8139_DEF_MSG_ENABLE   (NETIF_MSG_DRV   | \
NETIF_MSG_PROBE  | \
NETIF_MSG_LINK)
#define RTL8139_DEBUG 0
#undef RTL8139_NDEBUG
#  define assert(expr) do  while (0)
#  define assert(expr) \
if (unlikely(!(expr)))
#define MAX_UNITS 8
static int media[MAX_UNITS] = ;
static int full_duplex[MAX_UNITS] = ;
static int use_io = 1;
static int use_io = 0;
static int multicast_filter_limit = 32;
static int debug = -1;
#if defined(CONFIG_SH_DREAMCAST)
#define RX_BUF_IDX 0
#define RX_BUF_IDX	2
#define RX_BUF_LEN	(8192 << RX_BUF_IDX)
#define RX_BUF_PAD	16
#define RX_BUF_WRAP_PAD 2048
#if RX_BUF_LEN == 65536
#define RX_BUF_TOT_LEN	RX_BUF_LEN
#define RX_BUF_TOT_LEN	(RX_BUF_LEN + RX_BUF_PAD + RX_BUF_WRAP_PAD)
#define NUM_TX_DESC	4
#define MAX_ETH_FRAME_SIZE	1536
#define TX_BUF_SIZE	MAX_ETH_FRAME_SIZE
#define TX_BUF_TOT_LEN	(TX_BUF_SIZE * NUM_TX_DESC)
#define TX_FIFO_THRESH 256
#define RX_FIFO_THRESH	7
#define RX_DMA_BURST	7
#define TX_DMA_BURST	6
#define TX_RETRY	8
#define TX_TIMEOUT  (6*HZ)
enum ;
#define RTL_NUM_STATS 4
#define RTL_REGS_VER 1
#define RTL_MIN_IO_SIZE 0x80
#define RTL8139B_IO_SIZE 256
#define RTL8129_CAPS	HAS_MII_XCVR
#define RTL8139_CAPS	(HAS_CHIP_XCVR|HAS_LNK_CHNG)
typedef enum  board_t;
static const struct  board_info[] __devinitdata = ;
static DEFINE_PCI_DEVICE_TABLE(rtl8139_pci_tbl) = ;
MODULE_DEVICE_TABLE (pci, rtl8139_pci_tbl);
static struct  ethtool_stats_keys[] = ;
enum RTL8139_registers ;
enum ClearBitMasks ;
enum ChipCmdBits ;
enum IntrStatusBits ;
enum TxStatusBits ;
enum RxStatusBits ;
enum rx_mode_bits ;
enum tx_config_bits ;
enum Config1Bits ;
enum Config3Bits ;
enum Config4Bits ;
enum Config5Bits ;
enum RxConfigBits ;
enum CSCRBits ;
enum Cfg9346Bits ;
typedef enum  chip_t;
enum chip_flags ;
#define HW_REVID(b30, b29, b28, b27, b26, b23, b22) \
(b30<<30 | b29<<29 | b28<<28 | b27<<27 | b26<<26 | b23<<23 | b22<<22)
#define HW_REVID_MASK	HW_REVID(1, 1, 1, 1, 1, 1, 1)
static const struct  rtl_chip_info[] = ;
struct rtl_extra_stats ;
struct rtl8139_private ;
MODULE_AUTHOR ("Jeff Garzik <jgarzik@pobox.com>");
MODULE_DESCRIPTION ("RealTek RTL-8139 Fast Ethernet driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
module_param(use_io, int, 0);
MODULE_PARM_DESC(use_io, "Force use of I/O access mode. 0=MMIO 1=PIO");
module_param(multicast_filter_limit, int, 0);
module_param_array(media, int, NULL, 0);
module_param_array(full_duplex, int, NULL, 0);
module_param(debug, int, 0);
MODULE_PARM_DESC (debug, "8139too bitmapped message enable number");
MODULE_PARM_DESC (multicast_filter_limit, "8139too maximum number of filtered multicast addresses");
MODULE_PARM_DESC (media, "8139too: Bits 4+9: force full duplex, bit 5: 100Mbps");
MODULE_PARM_DESC (full_duplex, "8139too: Force full duplex for board(s) (1)");
static int read_eeprom (void __iomem *ioaddr, int location, int addr_len);
static int rtl8139_open (struct net_device *dev);
static int mdio_read (struct net_device *dev, int phy_id, int location);
static void mdio_write (struct net_device *dev, int phy_id, int location,
int val);
static void rtl8139_start_thread(struct rtl8139_private *tp);
static void rtl8139_tx_timeout (struct net_device *dev);
static void rtl8139_init_ring (struct net_device *dev);
static netdev_tx_t rtl8139_start_xmit (struct sk_buff *skb,
struct net_device *dev);
static void rtl8139_poll_controller(struct net_device *dev);
static int rtl8139_set_mac_address(struct net_device *dev, void *p);
static int rtl8139_poll(struct napi_struct *napi, int budget);
static irqreturn_t rtl8139_interrupt (int irq, void *dev_instance);
static int rtl8139_close (struct net_device *dev);
static int netdev_ioctl (struct net_device *dev, struct ifreq *rq, int cmd);
static struct net_device_stats *rtl8139_get_stats (struct net_device *dev);
static void rtl8139_set_rx_mode (struct net_device *dev);
static void __set_rx_mode (struct net_device *dev);
static void rtl8139_hw_start (struct net_device *dev);
static void rtl8139_thread (struct work_struct *work);
static void rtl8139_tx_timeout_task(struct work_struct *work);
static const struct ethtool_ops rtl8139_ethtool_ops;
#define RTL_W8_F(reg, val8)	do  while (0)
#define RTL_W16_F(reg, val16)	do  while (0)
#define RTL_W32_F(reg, val32)	do  while (0)
#define RTL_W8(reg, val8)	iowrite8 ((val8), ioaddr + (reg))
#define RTL_W16(reg, val16)	iowrite16 ((val16), ioaddr + (reg))
#define RTL_W32(reg, val32)	iowrite32 ((val32), ioaddr + (reg))
#define RTL_R8(reg)		ioread8 (ioaddr + (reg))
#define RTL_R16(reg)		ioread16 (ioaddr + (reg))
#define RTL_R32(reg)		ioread32 (ioaddr + (reg))
static const u16 rtl8139_intr_mask =
PCIErr | PCSTimeout | RxUnderrun | RxOverflow | RxFIFOOver |
TxErr | TxOK | RxErr | RxOK;
static const u16 rtl8139_norx_intr_mask =
PCIErr | PCSTimeout | RxUnderrun |
TxErr | TxOK | RxErr ;
#if RX_BUF_IDX == 0
static const unsigned int rtl8139_rx_config =
RxCfgRcv8K | RxNoWrap |
(RX_FIFO_THRESH << RxCfgFIFOShift) |
(RX_DMA_BURST << RxCfgDMAShift);
#elif RX_BUF_IDX == 1
static const unsigned int rtl8139_rx_config =
RxCfgRcv16K | RxNoWrap |
(RX_FIFO_THRESH << RxCfgFIFOShift) |
(RX_DMA_BURST << RxCfgDMAShift);
#elif RX_BUF_IDX == 2
static const unsigned int rtl8139_rx_config =
RxCfgRcv32K | RxNoWrap |
(RX_FIFO_THRESH << RxCfgFIFOShift) |
(RX_DMA_BURST << RxCfgDMAShift);
#elif RX_BUF_IDX == 3
static const unsigned int rtl8139_rx_config =
RxCfgRcv64K |
(RX_FIFO_THRESH << RxCfgFIFOShift) |
(RX_DMA_BURST << RxCfgDMAShift);
#error "Invalid configuration for 8139_RXBUF_IDX"
static const unsigned int rtl8139_tx_config =
TxIFG96 | (TX_DMA_BURST << TxDMAShift) | (TX_RETRY << TxRetryShift);
static void __rtl8139_cleanup_dev (struct net_device *dev)
static void rtl8139_chip_reset (void __iomem *ioaddr)
static __devinit struct net_device * rtl8139_init_board (struct pci_dev *pdev)
static const struct net_device_ops rtl8139_netdev_ops = ;
static int __devinit rtl8139_init_one (struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit rtl8139_remove_one (struct pci_dev *pdev)
#define EE_SHIFT_CLK	0x04
#define EE_CS			0x08
#define EE_DATA_WRITE	0x02
#define EE_WRITE_0		0x00
#define EE_WRITE_1		0x02
#define EE_DATA_READ	0x01
#define EE_ENB			(0x80 | EE_CS)
#define eeprom_delay()	(void)RTL_R32(Cfg9346)
#define EE_WRITE_CMD	(5)
#define EE_READ_CMD		(6)
#define EE_ERASE_CMD	(7)
static int __devinit read_eeprom (void __iomem *ioaddr, int location, int addr_len)
#define MDIO_DIR		0x80
#define MDIO_DATA_OUT	0x04
#define MDIO_DATA_IN	0x02
#define MDIO_CLK		0x01
#define MDIO_WRITE0 (MDIO_DIR)
#define MDIO_WRITE1 (MDIO_DIR | MDIO_DATA_OUT)
#define mdio_delay()	RTL_R8(Config4)
static const char mii_2_8139_map[8] = ;
static void mdio_sync (void __iomem *ioaddr)
static int mdio_read (struct net_device *dev, int phy_id, int location)
static void mdio_write (struct net_device *dev, int phy_id, int location,
int value)
static int rtl8139_open (struct net_device *dev)
static void rtl_check_media (struct net_device *dev, unsigned int init_media)
static void rtl8139_hw_start (struct net_device *dev)
static void rtl8139_init_ring (struct net_device *dev)
static int next_tick = 3 * HZ;
static inline void rtl8139_tune_twister (struct net_device *dev,
struct rtl8139_private *tp)
enum TwisterParamVals ;
static const unsigned long param[4][4] = ;
static void rtl8139_tune_twister (struct net_device *dev,
struct rtl8139_private *tp)
static inline void rtl8139_thread_iter (struct net_device *dev,
struct rtl8139_private *tp,
void __iomem *ioaddr)
static void rtl8139_thread (struct work_struct *work)
static void rtl8139_start_thread(struct rtl8139_private *tp)
static inline void rtl8139_tx_clear (struct rtl8139_private *tp)
static void rtl8139_tx_timeout_task (struct work_struct *work)
static void rtl8139_tx_timeout (struct net_device *dev)
static netdev_tx_t rtl8139_start_xmit (struct sk_buff *skb,
struct net_device *dev)
static void rtl8139_tx_interrupt (struct net_device *dev,
struct rtl8139_private *tp,
void __iomem *ioaddr)
static void rtl8139_rx_err (u32 rx_status, struct net_device *dev,
struct rtl8139_private *tp, void __iomem *ioaddr)
#if RX_BUF_IDX == 3
static inline void wrap_copy(struct sk_buff *skb, const unsigned char *ring,
u32 offset, unsigned int size)
static void rtl8139_isr_ack(struct rtl8139_private *tp)
static int rtl8139_rx(struct net_device *dev, struct rtl8139_private *tp,
int budget)
static void rtl8139_weird_interrupt (struct net_device *dev,
struct rtl8139_private *tp,
void __iomem *ioaddr,
int status, int link_changed)
static int rtl8139_poll(struct napi_struct *napi, int budget)
static irqreturn_t rtl8139_interrupt (int irq, void *dev_instance)
static void rtl8139_poll_controller(struct net_device *dev)
static int rtl8139_set_mac_address(struct net_device *dev, void *p)
static int rtl8139_close (struct net_device *dev)
static void rtl8139_get_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static int rtl8139_set_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static void rtl8139_get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static int rtl8139_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int rtl8139_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int rtl8139_nway_reset(struct net_device *dev)
static u32 rtl8139_get_link(struct net_device *dev)
static u32 rtl8139_get_msglevel(struct net_device *dev)
static void rtl8139_set_msglevel(struct net_device *dev, u32 datum)
static int rtl8139_get_regs_len(struct net_device *dev)
static void rtl8139_get_regs(struct net_device *dev, struct ethtool_regs *regs, void *regbuf)
static int rtl8139_get_sset_count(struct net_device *dev, int sset)
static void rtl8139_get_ethtool_stats(struct net_device *dev, struct ethtool_stats *stats, u64 *data)
static void rtl8139_get_strings(struct net_device *dev, u32 stringset, u8 *data)
static const struct ethtool_ops rtl8139_ethtool_ops = ;
static int netdev_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static struct net_device_stats *rtl8139_get_stats (struct net_device *dev)
static void __set_rx_mode (struct net_device *dev)
static void rtl8139_set_rx_mode (struct net_device *dev)
static int rtl8139_suspend (struct pci_dev *pdev, pm_message_t state)
static int rtl8139_resume (struct pci_dev *pdev)
static struct pci_driver rtl8139_pci_driver = ;
static int __init rtl8139_init_module (void)
static void __exit rtl8139_cleanup_module (void)
module_init(rtl8139_init_module);
module_exit(rtl8139_cleanup_module);
