#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRV_NAME	"3c589_cs"
#define DRV_VERSION	"1.162-ac"
#define EL3_DATA	0x00
#define EL3_TIMER	0x0a
#define EL3_CMD		0x0e
#define EL3_STATUS	0x0e
#define EEPROM_READ	0x0080
#define EEPROM_BUSY	0x8000
#define EL3WINDOW(win_num) outw(SelectWindow + (win_num), ioaddr + EL3_CMD)
enum c509cmd ;
enum c509status ;
enum RxFilter ;
#define TX_FIFO		0x00
#define RX_FIFO		0x00
#define RX_STATUS	0x08
#define TX_STATUS	0x0B
#define TX_FREE		0x0C
#define WN0_IRQ		0x08
#define WN4_MEDIA	0x0A
#define MEDIA_TP	0x00C0
#define MEDIA_LED	0x0001
#define TX_TIMEOUT	((400*HZ)/1000)
struct el3_private ;
static const char *if_names[] = ;
MODULE_AUTHOR("David Hinds <dahinds@users.sourceforge.net>");
MODULE_DESCRIPTION("3Com 3c589 series PCMCIA ethernet driver");
MODULE_LICENSE("GPL");
#define INT_MODULE_PARM(n, v) static int n = v; module_param(n, int, 0)
INT_MODULE_PARM(if_port, 0);
static int tc589_config(struct pcmcia_device *link);
static void tc589_release(struct pcmcia_device *link);
static u16 read_eeprom(unsigned int ioaddr, int index);
static void tc589_reset(struct net_device *dev);
static void media_check(unsigned long arg);
static int el3_config(struct net_device *dev, struct ifmap *map);
static int el3_open(struct net_device *dev);
static netdev_tx_t el3_start_xmit(struct sk_buff *skb,
struct net_device *dev);
static irqreturn_t el3_interrupt(int irq, void *dev_id);
static void update_stats(struct net_device *dev);
static struct net_device_stats *el3_get_stats(struct net_device *dev);
static int el3_rx(struct net_device *dev);
static int el3_close(struct net_device *dev);
static void el3_tx_timeout(struct net_device *dev);
static void set_rx_mode(struct net_device *dev);
static void set_multicast_list(struct net_device *dev);
static const struct ethtool_ops netdev_ethtool_ops;
static void tc589_detach(struct pcmcia_device *p_dev);
static const struct net_device_ops el3_netdev_ops = ;
static int tc589_probe(struct pcmcia_device *link)
static void tc589_detach(struct pcmcia_device *link)
static int tc589_config(struct pcmcia_device *link)
static void tc589_release(struct pcmcia_device *link)
static int tc589_suspend(struct pcmcia_device *link)
static int tc589_resume(struct pcmcia_device *link)
static void tc589_wait_for_completion(struct net_device *dev, int cmd)
static u16 read_eeprom(unsigned int ioaddr, int index)
static void tc589_set_xcvr(struct net_device *dev, int if_port)
static void dump_status(struct net_device *dev)
static void tc589_reset(struct net_device *dev)
static void netdev_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static const struct ethtool_ops netdev_ethtool_ops = ;
static int el3_config(struct net_device *dev, struct ifmap *map)
static int el3_open(struct net_device *dev)
static void el3_tx_timeout(struct net_device *dev)
static void pop_tx_status(struct net_device *dev)
static netdev_tx_t el3_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static irqreturn_t el3_interrupt(int irq, void *dev_id)
static void media_check(unsigned long arg)
static struct net_device_stats *el3_get_stats(struct net_device *dev)
static void update_stats(struct net_device *dev)
static int el3_rx(struct net_device *dev)
static void set_rx_mode(struct net_device *dev)
static void set_multicast_list(struct net_device *dev)
static int el3_close(struct net_device *dev)
static const struct pcmcia_device_id tc589_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, tc589_ids);
static struct pcmcia_driver tc589_driver = ;
static int __init init_tc589(void)
static void __exit exit_tc589(void)
module_init(init_tc589);
module_exit(exit_tc589);
