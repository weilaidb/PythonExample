#define DRV_NAME        "epic100"
#define DRV_VERSION     "2.1"
#define DRV_RELDATE     "Sept 11, 2006"
static int debug = 1;
#define MAX_UNITS 8
static int options[MAX_UNITS] = ;
static int full_duplex[MAX_UNITS] = ;
static int rx_copybreak;
#define TX_RING_SIZE	256
#define TX_QUEUE_LEN	240
#define RX_RING_SIZE	256
#define TX_TOTAL_SIZE	TX_RING_SIZE*sizeof(struct epic_tx_desc)
#define RX_TOTAL_SIZE	RX_RING_SIZE*sizeof(struct epic_rx_desc)
#define TX_TIMEOUT  (2*HZ)
#define PKT_BUF_SZ		1536
#define TX_FIFO_THRESH 256
#define RX_FIFO_THRESH 1
static char version[] __devinitdata =
DRV_NAME ".c:v1.11 1/7/2001 Written by Donald Becker <becker@scyld.com>\n";
static char version2[] __devinitdata =
"  (unofficial 2.4.x kernel port, version " DRV_VERSION ", " DRV_RELDATE ")\n";
MODULE_AUTHOR("Donald Becker <becker@scyld.com>");
MODULE_DESCRIPTION("SMC 83c170 EPIC series Ethernet driver");
MODULE_LICENSE("GPL");
module_param(debug, int, 0);
module_param(rx_copybreak, int, 0);
module_param_array(options, int, NULL, 0);
module_param_array(full_duplex, int, NULL, 0);
MODULE_PARM_DESC(debug, "EPIC/100 debug level (0-5)");
MODULE_PARM_DESC(options, "EPIC/100: Bits 0-3: media type, bit 4: full duplex");
MODULE_PARM_DESC(rx_copybreak, "EPIC/100 copy breakpoint for copy-only-tiny-frames");
MODULE_PARM_DESC(full_duplex, "EPIC/100 full duplex setting(s) (1)");
enum chip_capability_flags ;
#define EPIC_TOTAL_SIZE 0x100
#define USE_IO_OPS 1
typedef enum  chip_t;
struct epic_chip_info ;
static const struct epic_chip_info pci_id_tbl[] = ;
static DEFINE_PCI_DEVICE_TABLE(epic_pci_tbl) = ;
MODULE_DEVICE_TABLE (pci, epic_pci_tbl);
#undef inb
#undef inw
#undef inl
#undef outb
#undef outw
#undef outl
#define inb readb
#define inw readw
#define inl readl
#define outb writeb
#define outw writew
#define outl writel
enum epic_registers ;
enum IntrStatus ;
enum CommandBits ;
#define EpicRemoved	0xffffffff
#define EpicNapiEvent	(TxEmpty | TxDone | \
RxDone | RxStarted | RxEarlyWarn | RxOverflow | RxFull)
#define EpicNormalEvent	(0x0000ffff & ~EpicNapiEvent)
static const u16 media2miictl[16] = ;
struct epic_tx_desc ;
struct epic_rx_desc ;
enum desc_status_bits ;
#define PRIV_ALIGN	15
struct epic_private ;
static int epic_open(struct net_device *dev);
static int read_eeprom(long ioaddr, int location);
static int mdio_read(struct net_device *dev, int phy_id, int location);
static void mdio_write(struct net_device *dev, int phy_id, int loc, int val);
static void epic_restart(struct net_device *dev);
static void epic_timer(unsigned long data);
static void epic_tx_timeout(struct net_device *dev);
static void epic_init_ring(struct net_device *dev);
static netdev_tx_t epic_start_xmit(struct sk_buff *skb,
struct net_device *dev);
static int epic_rx(struct net_device *dev, int budget);
static int epic_poll(struct napi_struct *napi, int budget);
static irqreturn_t epic_interrupt(int irq, void *dev_instance);
static int netdev_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
static const struct ethtool_ops netdev_ethtool_ops;
static int epic_close(struct net_device *dev);
static struct net_device_stats *epic_get_stats(struct net_device *dev);
static void set_rx_mode(struct net_device *dev);
static const struct net_device_ops epic_netdev_ops = ;
static int __devinit epic_init_one (struct pci_dev *pdev,
const struct pci_device_id *ent)
#define EE_SHIFT_CLK	0x04
#define EE_CS			0x02
#define EE_DATA_WRITE	0x08
#define EE_WRITE_0		0x01
#define EE_WRITE_1		0x09
#define EE_DATA_READ	0x10
#define EE_ENB			(0x0001 | EE_CS)
#define eeprom_delay()	inl(ee_addr)
#define EE_WRITE_CMD	(5 << 6)
#define EE_READ64_CMD	(6 << 6)
#define EE_READ256_CMD	(6 << 8)
#define EE_ERASE_CMD	(7 << 6)
static void epic_disable_int(struct net_device *dev, struct epic_private *ep)
static inline void __epic_pci_commit(long ioaddr)
static inline void epic_napi_irq_off(struct net_device *dev,
struct epic_private *ep)
static inline void epic_napi_irq_on(struct net_device *dev,
struct epic_private *ep)
static int __devinit read_eeprom(long ioaddr, int location)
#define MII_READOP		1
#define MII_WRITEOP		2
static int mdio_read(struct net_device *dev, int phy_id, int location)
static void mdio_write(struct net_device *dev, int phy_id, int loc, int value)
static int epic_open(struct net_device *dev)
static void epic_pause(struct net_device *dev)
static void epic_restart(struct net_device *dev)
static void check_media(struct net_device *dev)
static void epic_timer(unsigned long data)
static void epic_tx_timeout(struct net_device *dev)
static void epic_init_ring(struct net_device *dev)
static netdev_tx_t epic_start_xmit(struct sk_buff *skb, struct net_device *dev)
static void epic_tx_error(struct net_device *dev, struct epic_private *ep,
int status)
static void epic_tx(struct net_device *dev, struct epic_private *ep)
static irqreturn_t epic_interrupt(int irq, void *dev_instance)
static int epic_rx(struct net_device *dev, int budget)
static void epic_rx_err(struct net_device *dev, struct epic_private *ep)
static int epic_poll(struct napi_struct *napi, int budget)
static int epic_close(struct net_device *dev)
static struct net_device_stats *epic_get_stats(struct net_device *dev)
static void set_rx_mode(struct net_device *dev)
static void netdev_get_drvinfo (struct net_device *dev, struct ethtool_drvinfo *info)
static int netdev_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int netdev_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int netdev_nway_reset(struct net_device *dev)
static u32 netdev_get_link(struct net_device *dev)
static u32 netdev_get_msglevel(struct net_device *dev)
static void netdev_set_msglevel(struct net_device *dev, u32 value)
static int ethtool_begin(struct net_device *dev)
static void ethtool_complete(struct net_device *dev)
static const struct ethtool_ops netdev_ethtool_ops = ;
static int netdev_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static void __devexit epic_remove_one (struct pci_dev *pdev)
static int epic_suspend (struct pci_dev *pdev, pm_message_t state)
static int epic_resume (struct pci_dev *pdev)
static struct pci_driver epic_driver = ;
static int __init epic_init (void)
static void __exit epic_cleanup (void)
module_init(epic_init);
module_exit(epic_cleanup);
