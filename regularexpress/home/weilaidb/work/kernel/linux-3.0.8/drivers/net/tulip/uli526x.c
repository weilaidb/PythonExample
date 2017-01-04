#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRV_NAME	"uli526x"
#define DRV_VERSION	"0.9.3"
#define DRV_RELDATE	"2005-7-29"
#define PCI_ULI5261_ID  0x526110B9
#define PCI_ULI5263_ID  0x526310B9
#define ULI526X_IO_SIZE 0x100
#define TX_DESC_CNT     0x20
#define RX_DESC_CNT     0x30
#define TX_FREE_DESC_CNT (TX_DESC_CNT - 2)
#define TX_WAKE_DESC_CNT (TX_DESC_CNT - 3)
#define DESC_ALL_CNT    (TX_DESC_CNT + RX_DESC_CNT)
#define TX_BUF_ALLOC    0x600
#define RX_ALLOC_SIZE   0x620
#define ULI526X_RESET    1
#define CR0_DEFAULT     0
#define CR6_DEFAULT     0x22200000
#define CR7_DEFAULT     0x180c1
#define CR15_DEFAULT    0x06
#define TDES0_ERR_MASK  0x4302
#define MAX_PACKET_SIZE 1514
#define ULI5261_MAX_MULTICAST 14
#define RX_COPY_SIZE	100
#define MAX_CHECK_PACKET 0x8000
#define ULI526X_10MHF      0
#define ULI526X_100MHF     1
#define ULI526X_10MFD      4
#define ULI526X_100MFD     5
#define ULI526X_AUTO       8
#define ULI526X_TXTH_72	0x400000
#define ULI526X_TXTH_96	0x404000
#define ULI526X_TXTH_128	0x0000
#define ULI526X_TXTH_256	0x4000
#define ULI526X_TXTH_512	0x8000
#define ULI526X_TXTH_1K	0xC000
#define ULI526X_TIMER_WUT  (jiffies + HZ * 1)
#define ULI526X_TX_TIMEOUT ((16*HZ)/2)
#define ULI526X_TX_KICK 	(4*HZ/2)
#define ULI526X_DBUG(dbug_now, msg, value)			\
do  while (0)
#define SHOW_MEDIA_TYPE(mode)					\
pr_err("Change Speed to %sMhz %s duplex\n",		\
mode & 1 ? "100" : "10",				\
mode & 4 ? "full" : "half");
#define CR9_SROM_READ   0x4800
#define CR9_SRCS        0x1
#define CR9_SRCLK       0x2
#define CR9_CRDOUT      0x8
#define SROM_DATA_0     0x0
#define SROM_DATA_1     0x4
#define PHY_DATA_1      0x20000
#define PHY_DATA_0      0x00000
#define MDCLKH          0x10000
#define PHY_POWER_DOWN	0x800
#define SROM_V41_CODE   0x14
#define SROM_CLK_WRITE(data, ioaddr)					\
outl(data|CR9_SROM_READ|CR9_SRCS,ioaddr);		\
udelay(5);						\
outl(data|CR9_SROM_READ|CR9_SRCS|CR9_SRCLK,ioaddr);	\
udelay(5);						\
outl(data|CR9_SROM_READ|CR9_SRCS,ioaddr);		\
udelay(5);
struct tx_desc  __attribute__(( aligned(32) ));
struct rx_desc  __attribute__(( aligned(32) ));
struct uli526x_board_info ;
enum uli526x_offsets ;
enum uli526x_CR6_bits ;
static int __devinitdata printed_version;
static const char version[] __devinitconst =
"ULi M5261/M5263 net driver, version " DRV_VERSION " (" DRV_RELDATE ")";
static int uli526x_debug;
static unsigned char uli526x_media_mode = ULI526X_AUTO;
static u32 uli526x_cr6_user_set;
static int debug;
static u32 cr6set;
static int mode = 8;
static int uli526x_open(struct net_device *);
static netdev_tx_t uli526x_start_xmit(struct sk_buff *,
struct net_device *);
static int uli526x_stop(struct net_device *);
static void uli526x_set_filter_mode(struct net_device *);
static const struct ethtool_ops netdev_ethtool_ops;
static u16 read_srom_word(long, int);
static irqreturn_t uli526x_interrupt(int, void *);
static void uli526x_poll(struct net_device *dev);
static void uli526x_descriptor_init(struct uli526x_board_info *, unsigned long);
static void allocate_rx_buffer(struct uli526x_board_info *);
static void update_cr6(u32, unsigned long);
static void send_filter_frame(struct net_device *, int);
static u16 phy_read(unsigned long, u8, u8, u32);
static u16 phy_readby_cr10(unsigned long, u8, u8);
static void phy_write(unsigned long, u8, u8, u16, u32);
static void phy_writeby_cr10(unsigned long, u8, u8, u16);
static void phy_write_1bit(unsigned long, u32, u32);
static u16 phy_read_1bit(unsigned long, u32);
static u8 uli526x_sense_speed(struct uli526x_board_info *);
static void uli526x_process_mode(struct uli526x_board_info *);
static void uli526x_timer(unsigned long);
static void uli526x_rx_packet(struct net_device *, struct uli526x_board_info *);
static void uli526x_free_tx_pkt(struct net_device *, struct uli526x_board_info *);
static void uli526x_reuse_skb(struct uli526x_board_info *, struct sk_buff *);
static void uli526x_dynamic_reset(struct net_device *);
static void uli526x_free_rxbuffer(struct uli526x_board_info *);
static void uli526x_init(struct net_device *);
static void uli526x_set_phyxcer(struct uli526x_board_info *);
static const struct net_device_ops netdev_ops = ;
static int __devinit uli526x_init_one (struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit uli526x_remove_one (struct pci_dev *pdev)
static int uli526x_open(struct net_device *dev)
static void uli526x_init(struct net_device *dev)
static netdev_tx_t uli526x_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static int uli526x_stop(struct net_device *dev)
static irqreturn_t uli526x_interrupt(int irq, void *dev_id)
static void uli526x_poll(struct net_device *dev)
static void uli526x_free_tx_pkt(struct net_device *dev,
struct uli526x_board_info * db)
static void uli526x_rx_packet(struct net_device *dev, struct uli526x_board_info * db)
static void uli526x_set_filter_mode(struct net_device * dev)
static void
ULi_ethtool_gset(struct uli526x_board_info *db, struct ethtool_cmd *ecmd)
static void netdev_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static int netdev_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static u32 netdev_get_link(struct net_device *dev)
static void uli526x_get_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static const struct ethtool_ops netdev_ethtool_ops = ;
static void uli526x_timer(unsigned long data)
static void uli526x_reset_prepare(struct net_device *dev)
static void uli526x_dynamic_reset(struct net_device *dev)
static int uli526x_suspend(struct pci_dev *pdev, pm_message_t state)
static int uli526x_resume(struct pci_dev *pdev)
#define uli526x_suspend	NULL
#define uli526x_resume	NULL
static void uli526x_free_rxbuffer(struct uli526x_board_info * db)
static void uli526x_reuse_skb(struct uli526x_board_info *db, struct sk_buff * skb)
static void uli526x_descriptor_init(struct uli526x_board_info *db, unsigned long ioaddr)
static void update_cr6(u32 cr6_data, unsigned long ioaddr)
#define FLT_SHIFT 16
#define FLT_SHIFT 0
static void send_filter_frame(struct net_device *dev, int mc_cnt)
static void allocate_rx_buffer(struct uli526x_board_info *db)
static u16 read_srom_word(long ioaddr, int offset)
static u8 uli526x_sense_speed(struct uli526x_board_info * db)
static void uli526x_set_phyxcer(struct uli526x_board_info *db)
static void uli526x_process_mode(struct uli526x_board_info *db)
static void phy_write(unsigned long iobase, u8 phy_addr, u8 offset, u16 phy_data, u32 chip_id)
static u16 phy_read(unsigned long iobase, u8 phy_addr, u8 offset, u32 chip_id)
static u16 phy_readby_cr10(unsigned long iobase, u8 phy_addr, u8 offset)
static void phy_writeby_cr10(unsigned long iobase, u8 phy_addr, u8 offset, u16 phy_data)
static void phy_write_1bit(unsigned long ioaddr, u32 phy_data, u32 chip_id)
static u16 phy_read_1bit(unsigned long ioaddr, u32 chip_id)
static DEFINE_PCI_DEVICE_TABLE(uli526x_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, uli526x_pci_tbl);
static struct pci_driver uli526x_driver = ;
MODULE_AUTHOR("Peer Chen, peer.chen@uli.com.tw");
MODULE_DESCRIPTION("ULi M5261/M5263 fast ethernet driver");
MODULE_LICENSE("GPL");
module_param(debug, int, 0644);
module_param(mode, int, 0);
module_param(cr6set, int, 0);
MODULE_PARM_DESC(debug, "ULi M5261/M5263 enable debugging (0-1)");
MODULE_PARM_DESC(mode, "ULi M5261/M5263: Bit 0: 10/100Mbps, bit 2: duplex, bit 8: HomePNA");
static int __init uli526x_init_module(void)
static void __exit uli526x_cleanup_module(void)
module_init(uli526x_init_module);
module_exit(uli526x_cleanup_module);
