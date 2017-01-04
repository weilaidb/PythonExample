static char version[] __initdata =
"at1700.c:v1.16 9/11/06  Donald Becker (becker@cesdis.gsfc.nasa.gov)\n";
#define DRV_NAME "at1700"
#define MC_FILTERBREAK 64
static int fmv18x_probe_list[] __initdata = ;
static unsigned at1700_probe_list[] __initdata = ;
static int at1700_ioaddr_pattern[] __initdata = ;
static int at1700_mca_probe_list[] __initdata = ;
static int at1700_irq_pattern[] __initdata = ;
#define NET_DEBUG 1
static unsigned int net_debug = NET_DEBUG;
typedef unsigned char uchar;
struct net_local ;
#define STATUS			0
#define TX_STATUS		0
#define RX_STATUS		1
#define TX_INTR			2
#define RX_INTR			3
#define TX_MODE			4
#define RX_MODE			5
#define CONFIG_0		6
#define CONFIG_1		7
#define DATAPORT		8
#define TX_START		10
#define COL16CNTL		11
#define MODE13			13
#define RX_CTRL			14
#define EEPROM_Ctrl 	16
#define EEPROM_Data 	17
#define CARDSTATUS	16
#define CARDSTATUS1	17
#define IOCONFIG		18
#define IOCONFIG1		19
#define	SAPROM			20
#define MODE24			24
#define RESET			31
#define AT1700_IO_EXTENT	32
#define PORT_OFFSET(o) (o)
#define TX_TIMEOUT		(HZ/10)
static int at1700_probe1(struct net_device *dev, int ioaddr);
static int read_eeprom(long ioaddr, int location);
static int net_open(struct net_device *dev);
static netdev_tx_t net_send_packet(struct sk_buff *skb,
struct net_device *dev);
static irqreturn_t net_interrupt(int irq, void *dev_id);
static void net_rx(struct net_device *dev);
static int net_close(struct net_device *dev);
static void set_rx_mode(struct net_device *dev);
static void net_tx_timeout (struct net_device *dev);
struct at1720_mca_adapters_struct ;
static struct at1720_mca_adapters_struct at1720_mca_adapters[] __initdata = ;
static int io = 0x260;
static int irq;
static void cleanup_card(struct net_device *dev)
struct net_device * __init at1700_probe(int unit)
static const struct net_device_ops at1700_netdev_ops = ;
static int __init at1700_probe1(struct net_device *dev, int ioaddr)
#define EE_SHIFT_CLK	0x40
#define EE_CS			0x20
#define EE_DATA_WRITE	0x80
#define EE_DATA_READ	0x80
#define EE_WRITE_CMD	(5 << 6)
#define EE_READ_CMD		(6 << 6)
#define EE_ERASE_CMD	(7 << 6)
static int __init read_eeprom(long ioaddr, int location)
static int net_open(struct net_device *dev)
static void net_tx_timeout (struct net_device *dev)
static netdev_tx_t net_send_packet (struct sk_buff *skb,
struct net_device *dev)
static irqreturn_t net_interrupt(int irq, void *dev_id)
static void
net_rx(struct net_device *dev)
static int net_close(struct net_device *dev)
static void
set_rx_mode(struct net_device *dev)
static struct net_device *dev_at1700;
module_param(io, int, 0);
module_param(irq, int, 0);
module_param(net_debug, int, 0);
MODULE_PARM_DESC(io, "AT1700/FMV18X I/O base address");
MODULE_PARM_DESC(irq, "AT1700/FMV18X IRQ number");
MODULE_PARM_DESC(net_debug, "AT1700/FMV18X debug level (0-6)");
static int __init at1700_module_init(void)
static void __exit at1700_module_exit(void)
module_init(at1700_module_init);
module_exit(at1700_module_exit);
MODULE_LICENSE("GPL");
