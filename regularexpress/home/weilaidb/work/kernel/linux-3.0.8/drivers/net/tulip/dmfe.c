#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRV_NAME	"dmfe"
#define DRV_VERSION	"1.36.4"
#define DRV_RELDATE	"2002-01-17"
#define PCI_DM9132_ID   0x91321282
#define PCI_DM9102_ID   0x91021282
#define PCI_DM9100_ID   0x91001282
#define PCI_DM9009_ID   0x90091282
#define DM9102_IO_SIZE  0x80
#define DM9102A_IO_SIZE 0x100
#define TX_MAX_SEND_CNT 0x1
#define TX_DESC_CNT     0x10
#define RX_DESC_CNT     0x20
#define TX_FREE_DESC_CNT (TX_DESC_CNT - 2)
#define TX_WAKE_DESC_CNT (TX_DESC_CNT - 3)
#define DESC_ALL_CNT    (TX_DESC_CNT + RX_DESC_CNT)
#define TX_BUF_ALLOC    0x600
#define RX_ALLOC_SIZE   0x620
#define DM910X_RESET    1
#define CR0_DEFAULT     0x00E00000
#define CR6_DEFAULT     0x00080000
#define CR7_DEFAULT     0x180c1
#define CR15_DEFAULT    0x06
#define TDES0_ERR_MASK  0x4302
#define MAX_PACKET_SIZE 1514
#define DMFE_MAX_MULTICAST 14
#define RX_COPY_SIZE	100
#define MAX_CHECK_PACKET 0x8000
#define DM9801_NOISE_FLOOR 8
#define DM9802_NOISE_FLOOR 5
#define DMFE_WOL_LINKCHANGE	0x20000000
#define DMFE_WOL_SAMPLEPACKET	0x10000000
#define DMFE_WOL_MAGICPACKET	0x08000000
#define DMFE_10MHF      0
#define DMFE_100MHF     1
#define DMFE_10MFD      4
#define DMFE_100MFD     5
#define DMFE_AUTO       8
#define DMFE_1M_HPNA    0x10
#define DMFE_TXTH_72	0x400000
#define DMFE_TXTH_96	0x404000
#define DMFE_TXTH_128	0x0000
#define DMFE_TXTH_256	0x4000
#define DMFE_TXTH_512	0x8000
#define DMFE_TXTH_1K	0xC000
#define DMFE_TIMER_WUT  (jiffies + HZ * 1)
#define DMFE_TX_TIMEOUT ((3*HZ)/2)
#define DMFE_TX_KICK 	(HZ/2)
#define DMFE_DBUG(dbug_now, msg, value)			\
do  while (0)
#define SHOW_MEDIA_TYPE(mode)				\
pr_info("Change Speed to %sMhz %s duplex\n" ,	\
(mode & 1) ? "100":"10",		\
(mode & 4) ? "full":"half");
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
#define SROM_CLK_WRITE(data, ioaddr) \
outl(data|CR9_SROM_READ|CR9_SRCS,ioaddr); \
udelay(5); \
outl(data|CR9_SROM_READ|CR9_SRCS|CR9_SRCLK,ioaddr); \
udelay(5); \
outl(data|CR9_SROM_READ|CR9_SRCS,ioaddr); \
udelay(5);
#define __CHK_IO_SIZE(pci_id, dev_rev) \
(( ((pci_id)==PCI_DM9132_ID) || ((dev_rev) >= 0x30) ) ? \
DM9102A_IO_SIZE: DM9102_IO_SIZE)
#define CHK_IO_SIZE(pci_dev) \
(__CHK_IO_SIZE(((pci_dev)->device << 16) | (pci_dev)->vendor, \
(pci_dev)->revision))
#define DEVICE net_device
struct tx_desc  __attribute__(( aligned(32) ));
struct rx_desc  __attribute__(( aligned(32) ));
struct dmfe_board_info ;
enum dmfe_offsets ;
enum dmfe_CR6_bits ;
static int __devinitdata printed_version;
static const char version[] __devinitconst =
"Davicom DM9xxx net driver, version " DRV_VERSION " (" DRV_RELDATE ")";
static int dmfe_debug;
static unsigned char dmfe_media_mode = DMFE_AUTO;
static u32 dmfe_cr6_user_set;
static int debug;
static u32 cr6set;
static unsigned char mode = 8;
static u8 chkmode = 1;
static u8 HPNA_mode;
static u8 HPNA_rx_cmd;
static u8 HPNA_tx_cmd;
static u8 HPNA_NoiseFloor;
static u8 SF_mode;
static int dmfe_open(struct DEVICE *);
static netdev_tx_t dmfe_start_xmit(struct sk_buff *, struct DEVICE *);
static int dmfe_stop(struct DEVICE *);
static void dmfe_set_filter_mode(struct DEVICE *);
static const struct ethtool_ops netdev_ethtool_ops;
static u16 read_srom_word(long ,int);
static irqreturn_t dmfe_interrupt(int , void *);
static void poll_dmfe (struct net_device *dev);
static void dmfe_descriptor_init(struct dmfe_board_info *, unsigned long);
static void allocate_rx_buffer(struct dmfe_board_info *);
static void update_cr6(u32, unsigned long);
static void send_filter_frame(struct DEVICE *);
static void dm9132_id_table(struct DEVICE *);
static u16 phy_read(unsigned long, u8, u8, u32);
static void phy_write(unsigned long, u8, u8, u16, u32);
static void phy_write_1bit(unsigned long, u32);
static u16 phy_read_1bit(unsigned long);
static u8 dmfe_sense_speed(struct dmfe_board_info *);
static void dmfe_process_mode(struct dmfe_board_info *);
static void dmfe_timer(unsigned long);
static inline u32 cal_CRC(unsigned char *, unsigned int, u8);
static void dmfe_rx_packet(struct DEVICE *, struct dmfe_board_info *);
static void dmfe_free_tx_pkt(struct DEVICE *, struct dmfe_board_info *);
static void dmfe_reuse_skb(struct dmfe_board_info *, struct sk_buff *);
static void dmfe_dynamic_reset(struct DEVICE *);
static void dmfe_free_rxbuffer(struct dmfe_board_info *);
static void dmfe_init_dm910x(struct DEVICE *);
static void dmfe_parse_srom(struct dmfe_board_info *);
static void dmfe_program_DM9801(struct dmfe_board_info *, int);
static void dmfe_program_DM9802(struct dmfe_board_info *);
static void dmfe_HPNA_remote_cmd_chk(struct dmfe_board_info * );
static void dmfe_set_phyxcer(struct dmfe_board_info *);
static const struct net_device_ops netdev_ops = ;
static int __devinit dmfe_init_one (struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit dmfe_remove_one (struct pci_dev *pdev)
static int dmfe_open(struct DEVICE *dev)
static void dmfe_init_dm910x(struct DEVICE *dev)
static netdev_tx_t dmfe_start_xmit(struct sk_buff *skb,
struct DEVICE *dev)
static int dmfe_stop(struct DEVICE *dev)
static irqreturn_t dmfe_interrupt(int irq, void *dev_id)
static void poll_dmfe (struct net_device *dev)
static void dmfe_free_tx_pkt(struct DEVICE *dev, struct dmfe_board_info * db)
static inline u32 cal_CRC(unsigned char * Data, unsigned int Len, u8 flag)
static void dmfe_rx_packet(struct DEVICE *dev, struct dmfe_board_info * db)
static void dmfe_set_filter_mode(struct DEVICE * dev)
static void dmfe_ethtool_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static int dmfe_ethtool_set_wol(struct net_device *dev,
struct ethtool_wolinfo *wolinfo)
static void dmfe_ethtool_get_wol(struct net_device *dev,
struct ethtool_wolinfo *wolinfo)
static const struct ethtool_ops netdev_ethtool_ops = ;
static void dmfe_timer(unsigned long data)
static void dmfe_dynamic_reset(struct DEVICE *dev)
static void dmfe_free_rxbuffer(struct dmfe_board_info * db)
static void dmfe_reuse_skb(struct dmfe_board_info *db, struct sk_buff * skb)
static void dmfe_descriptor_init(struct dmfe_board_info *db, unsigned long ioaddr)
static void update_cr6(u32 cr6_data, unsigned long ioaddr)
static void dm9132_id_table(struct DEVICE *dev)
static void send_filter_frame(struct DEVICE *dev)
static void allocate_rx_buffer(struct dmfe_board_info *db)
static u16 read_srom_word(long ioaddr, int offset)
static u8 dmfe_sense_speed(struct dmfe_board_info * db)
static void dmfe_set_phyxcer(struct dmfe_board_info *db)
static void dmfe_process_mode(struct dmfe_board_info *db)
static void phy_write(unsigned long iobase, u8 phy_addr, u8 offset,
u16 phy_data, u32 chip_id)
static u16 phy_read(unsigned long iobase, u8 phy_addr, u8 offset, u32 chip_id)
static void phy_write_1bit(unsigned long ioaddr, u32 phy_data)
static u16 phy_read_1bit(unsigned long ioaddr)
static void dmfe_parse_srom(struct dmfe_board_info * db)
static void dmfe_program_DM9801(struct dmfe_board_info * db, int HPNA_rev)
static void dmfe_program_DM9802(struct dmfe_board_info * db)
static void dmfe_HPNA_remote_cmd_chk(struct dmfe_board_info * db)
static DEFINE_PCI_DEVICE_TABLE(dmfe_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, dmfe_pci_tbl);
static int dmfe_suspend(struct pci_dev *pci_dev, pm_message_t state)
static int dmfe_resume(struct pci_dev *pci_dev)
#define dmfe_suspend NULL
#define dmfe_resume NULL
static struct pci_driver dmfe_driver = ;
MODULE_AUTHOR("Sten Wang, sten_wang@davicom.com.tw");
MODULE_DESCRIPTION("Davicom DM910X fast ethernet driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
module_param(debug, int, 0);
module_param(mode, byte, 0);
module_param(cr6set, int, 0);
module_param(chkmode, byte, 0);
module_param(HPNA_mode, byte, 0);
module_param(HPNA_rx_cmd, byte, 0);
module_param(HPNA_tx_cmd, byte, 0);
module_param(HPNA_NoiseFloor, byte, 0);
module_param(SF_mode, byte, 0);
MODULE_PARM_DESC(debug, "Davicom DM9xxx enable debugging (0-1)");
MODULE_PARM_DESC(mode, "Davicom DM9xxx: "
"Bit 0: 10/100Mbps, bit 2: duplex, bit 8: HomePNA");
MODULE_PARM_DESC(SF_mode, "Davicom DM9xxx special function "
"(bit 0: VLAN, bit 1 Flow Control, bit 2: TX pause packet)");
static int __init dmfe_init_module(void)
static void __exit dmfe_cleanup_module(void)
module_init(dmfe_init_module);
module_exit(dmfe_cleanup_module);
