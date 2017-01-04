#define DRV_NAME		"3c515"
#define DRV_VERSION		"0.99t-ac"
#define DRV_RELDATE		"28-Oct-2002"
static char *version =
DRV_NAME ".c:v" DRV_VERSION " " DRV_RELDATE " becker@scyld.com and others\n";
#define CORKSCREW 1
static int rx_copybreak = 200;
static const int mtu = 1500;
static int max_interrupt_work = 20;
#define AUTOMEDIA 1
#define VORTEX_BUS_MASTER
#define TX_RING_SIZE	16
#define RX_RING_SIZE	16
#define PKT_BUF_SZ		1536
#define NEW_MULTICAST
#define MAX_UNITS 8
MODULE_AUTHOR("Donald Becker <becker@scyld.com>");
MODULE_DESCRIPTION("3Com 3c515 Corkscrew driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
#define DRIVER_DEBUG 1
static int rx_nocopy, rx_copy, queued_packet;
#define WAIT_TX_AVAIL 200
#define TX_TIMEOUT  ((4*HZ)/10)
#define CORKSCREW_TOTAL_SIZE 0x20
static int corkscrew_debug = DRIVER_DEBUG;
static int corkscrew_debug = 1;
#define CORKSCREW_ID 10
#define EL3WINDOW(win_num) outw(SelectWindow + (win_num), ioaddr + EL3_CMD)
#define EL3_CMD 0x0e
#define EL3_STATUS 0x0e
enum corkscrew_cmd ;
enum RxFilter ;
enum corkscrew_status ;
enum Window1 ;
enum Window0 ;
enum Win0_EEPROM_bits ;
enum eeprom_offset ;
enum Window3 ;
enum wn3_config ;
enum Window4 ;
enum Win4_Media_bits ;
enum Window7 ;
enum MasterCtrl ;
struct boom_rx_desc ;
enum rx_desc_status ;
struct boom_tx_desc ;
struct corkscrew_private ;
enum xcvr_types ;
static struct media_table  media_tbl[] = ;
static struct isapnp_device_id corkscrew_isapnp_adapters[] = ;
MODULE_DEVICE_TABLE(isapnp, corkscrew_isapnp_adapters);
static int nopnp;
static struct net_device *corkscrew_scan(int unit);
static int corkscrew_setup(struct net_device *dev, int ioaddr,
struct pnp_dev *idev, int card_number);
static int corkscrew_open(struct net_device *dev);
static void corkscrew_timer(unsigned long arg);
static netdev_tx_t corkscrew_start_xmit(struct sk_buff *skb,
struct net_device *dev);
static int corkscrew_rx(struct net_device *dev);
static void corkscrew_timeout(struct net_device *dev);
static int boomerang_rx(struct net_device *dev);
static irqreturn_t corkscrew_interrupt(int irq, void *dev_id);
static int corkscrew_close(struct net_device *dev);
static void update_stats(int addr, struct net_device *dev);
static struct net_device_stats *corkscrew_get_stats(struct net_device *dev);
static void set_rx_mode(struct net_device *dev);
static const struct ethtool_ops netdev_ethtool_ops;
static int options[MAX_UNITS] = ;
static int debug = -1;
module_param(debug, int, 0);
module_param_array(options, int, NULL, 0);
module_param(rx_copybreak, int, 0);
module_param(max_interrupt_work, int, 0);
MODULE_PARM_DESC(debug, "3c515 debug level (0-6)");
MODULE_PARM_DESC(options, "3c515: Bits 0-2: media type, bit 3: full duplex, bit 4: bus mastering");
MODULE_PARM_DESC(rx_copybreak, "3c515 copy breakpoint for copy-only-tiny-frames");
MODULE_PARM_DESC(max_interrupt_work, "3c515 maximum events handled per interrupt");
static LIST_HEAD(root_corkscrew_dev);
int init_module(void)
struct net_device *tc515_probe(int unit)
static int check_device(unsigned ioaddr)
static void cleanup_card(struct net_device *dev)
static struct net_device *corkscrew_scan(int unit)
static const struct net_device_ops netdev_ops = ;
static int corkscrew_setup(struct net_device *dev, int ioaddr,
struct pnp_dev *idev, int card_number)
static int corkscrew_open(struct net_device *dev)
static void corkscrew_timer(unsigned long data)
static void corkscrew_timeout(struct net_device *dev)
static netdev_tx_t corkscrew_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static irqreturn_t corkscrew_interrupt(int irq, void *dev_id)
static int corkscrew_rx(struct net_device *dev)
static int boomerang_rx(struct net_device *dev)
static int corkscrew_close(struct net_device *dev)
static struct net_device_stats *corkscrew_get_stats(struct net_device *dev)
static void update_stats(int ioaddr, struct net_device *dev)
static void set_rx_mode(struct net_device *dev)
static void netdev_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static u32 netdev_get_msglevel(struct net_device *dev)
static void netdev_set_msglevel(struct net_device *dev, u32 level)
static const struct ethtool_ops netdev_ethtool_ops = ;
void cleanup_module(void)
