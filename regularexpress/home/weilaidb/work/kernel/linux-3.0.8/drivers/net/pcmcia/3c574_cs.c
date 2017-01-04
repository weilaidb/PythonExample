#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_AUTHOR("David Hinds <dahinds@users.sourceforge.net>");
MODULE_DESCRIPTION("3Com 3c574 series PCMCIA ethernet driver");
MODULE_LICENSE("GPL");
#define INT_MODULE_PARM(n, v) static int n = v; module_param(n, int, 0)
INT_MODULE_PARM(max_interrupt_work, 32);
INT_MODULE_PARM(full_duplex, 0);
INT_MODULE_PARM(auto_polarity, 1);
#define TX_TIMEOUT  ((800*HZ)/1000)
#define EL3_DATA	0x00
#define EL3_CMD		0x0e
#define EL3_STATUS	0x0e
#define EL3WINDOW(win_num) outw(SelectWindow + (win_num), ioaddr + EL3_CMD)
enum el3_cmds ;
enum elxl_status ;
enum RxFilter ;
enum Window0 ;
enum Win0_EEPROM_cmds ;
enum Window1 ;
enum Window3 ;
enum wn3_config ;
enum Window4 ;
#define MEDIA_TP	0x00C0
struct el3_private ;
static char mii_preamble_required = 0;
static int tc574_config(struct pcmcia_device *link);
static void tc574_release(struct pcmcia_device *link);
static void mdio_sync(unsigned int ioaddr, int bits);
static int mdio_read(unsigned int ioaddr, int phy_id, int location);
static void mdio_write(unsigned int ioaddr, int phy_id, int location,
int value);
static unsigned short read_eeprom(unsigned int ioaddr, int index);
static void tc574_wait_for_completion(struct net_device *dev, int cmd);
static void tc574_reset(struct net_device *dev);
static void media_check(unsigned long arg);
static int el3_open(struct net_device *dev);
static netdev_tx_t el3_start_xmit(struct sk_buff *skb,
struct net_device *dev);
static irqreturn_t el3_interrupt(int irq, void *dev_id);
static void update_stats(struct net_device *dev);
static struct net_device_stats *el3_get_stats(struct net_device *dev);
static int el3_rx(struct net_device *dev, int worklimit);
static int el3_close(struct net_device *dev);
static void el3_tx_timeout(struct net_device *dev);
static int el3_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
static void set_rx_mode(struct net_device *dev);
static void set_multicast_list(struct net_device *dev);
static void tc574_detach(struct pcmcia_device *p_dev);
static const struct net_device_ops el3_netdev_ops = ;
static int tc574_probe(struct pcmcia_device *link)
static void tc574_detach(struct pcmcia_device *link)
static const char *ram_split[] = ;
static int tc574_config(struct pcmcia_device *link)
static void tc574_release(struct pcmcia_device *link)
static int tc574_suspend(struct pcmcia_device *link)
static int tc574_resume(struct pcmcia_device *link)
static void dump_status(struct net_device *dev)
static void tc574_wait_for_completion(struct net_device *dev, int cmd)
static unsigned short read_eeprom(unsigned int ioaddr, int index)
#define MDIO_SHIFT_CLK	0x01
#define MDIO_DIR_WRITE	0x04
#define MDIO_DATA_WRITE0 (0x00 | MDIO_DIR_WRITE)
#define MDIO_DATA_WRITE1 (0x02 | MDIO_DIR_WRITE)
#define MDIO_DATA_READ	0x02
#define MDIO_ENB_IN		0x00
static void mdio_sync(unsigned int ioaddr, int bits)
static int mdio_read(unsigned int ioaddr, int phy_id, int location)
static void mdio_write(unsigned int ioaddr, int phy_id, int location, int value)
static void tc574_reset(struct net_device *dev)
static int el3_open(struct net_device *dev)
static void el3_tx_timeout(struct net_device *dev)
static void pop_tx_status(struct net_device *dev)
static netdev_tx_t el3_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static irqreturn_t el3_interrupt(int irq, void *dev_id)
static void media_check(unsigned long arg)
static struct net_device_stats *el3_get_stats(struct net_device *dev)
static void update_stats(struct net_device *dev)
static int el3_rx(struct net_device *dev, int worklimit)
static int el3_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static void set_rx_mode(struct net_device *dev)
static void set_multicast_list(struct net_device *dev)
static int el3_close(struct net_device *dev)
static const struct pcmcia_device_id tc574_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, tc574_ids);
static struct pcmcia_driver tc574_driver = ;
static int __init init_tc574(void)
static void __exit exit_tc574(void)
module_init(init_tc574);
module_exit(exit_tc574);
