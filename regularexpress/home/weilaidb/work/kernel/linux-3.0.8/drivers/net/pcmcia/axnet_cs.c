#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define AXNET_CMD	0x00
#define AXNET_DATAPORT	0x10
#define AXNET_RESET	0x1f
#define AXNET_MII_EEP	0x14
#define AXNET_TEST	0x15
#define AXNET_GPIO	0x17
#define AXNET_START_PG	0x40
#define AXNET_STOP_PG	0x80
#define AXNET_RDC_TIMEOUT 0x02
#define IS_AX88190	0x0001
#define IS_AX88790	0x0002
MODULE_AUTHOR("David Hinds <dahinds@users.sourceforge.net>");
MODULE_DESCRIPTION("Asix AX88190 PCMCIA ethernet driver");
MODULE_LICENSE("GPL");
static int axnet_config(struct pcmcia_device *link);
static void axnet_release(struct pcmcia_device *link);
static int axnet_open(struct net_device *dev);
static int axnet_close(struct net_device *dev);
static int axnet_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
static netdev_tx_t axnet_start_xmit(struct sk_buff *skb,
struct net_device *dev);
static struct net_device_stats *get_stats(struct net_device *dev);
static void set_multicast_list(struct net_device *dev);
static void axnet_tx_timeout(struct net_device *dev);
static irqreturn_t ei_irq_wrapper(int irq, void *dev_id);
static void ei_watchdog(u_long arg);
static void axnet_reset_8390(struct net_device *dev);
static int mdio_read(unsigned int addr, int phy_id, int loc);
static void mdio_write(unsigned int addr, int phy_id, int loc, int value);
static void get_8390_hdr(struct net_device *,
struct e8390_pkt_hdr *, int);
static void block_input(struct net_device *dev, int count,
struct sk_buff *skb, int ring_offset);
static void block_output(struct net_device *dev, int count,
const u_char *buf, const int start_page);
static void axnet_detach(struct pcmcia_device *p_dev);
static void AX88190_init(struct net_device *dev, int startp);
static int ax_open(struct net_device *dev);
static int ax_close(struct net_device *dev);
static irqreturn_t ax_interrupt(int irq, void *dev_id);
typedef struct axnet_dev_t  axnet_dev_t;
static inline axnet_dev_t *PRIV(struct net_device *dev)
static const struct net_device_ops axnet_netdev_ops = ;
static int axnet_probe(struct pcmcia_device *link)
static void axnet_detach(struct pcmcia_device *link)
static int get_prom(struct pcmcia_device *link)
static int try_io_port(struct pcmcia_device *link)
static int axnet_configcheck(struct pcmcia_device *p_dev, void *priv_data)
static int axnet_config(struct pcmcia_device *link)
static void axnet_release(struct pcmcia_device *link)
static int axnet_suspend(struct pcmcia_device *link)
static int axnet_resume(struct pcmcia_device *link)
#define MDIO_SHIFT_CLK		0x01
#define MDIO_DATA_WRITE0	0x00
#define MDIO_DATA_WRITE1	0x08
#define MDIO_DATA_READ		0x04
#define MDIO_MASK		0x0f
#define MDIO_ENB_IN		0x02
static void mdio_sync(unsigned int addr)
static int mdio_read(unsigned int addr, int phy_id, int loc)
static void mdio_write(unsigned int addr, int phy_id, int loc, int value)
static int axnet_open(struct net_device *dev)
static int axnet_close(struct net_device *dev)
static void axnet_reset_8390(struct net_device *dev)
static irqreturn_t ei_irq_wrapper(int irq, void *dev_id)
static void ei_watchdog(u_long arg)
static int axnet_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static void get_8390_hdr(struct net_device *dev,
struct e8390_pkt_hdr *hdr,
int ring_page)
static void block_input(struct net_device *dev, int count,
struct sk_buff *skb, int ring_offset)
static void block_output(struct net_device *dev, int count,
const u_char *buf, const int start_page)
static const struct pcmcia_device_id axnet_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, axnet_ids);
static struct pcmcia_driver axnet_cs_driver = ;
static int __init init_axnet_cs(void)
static void __exit exit_axnet_cs(void)
module_init(init_axnet_cs);
module_exit(exit_axnet_cs);
#define BUG_83C690
#define ei_reset_8390 (ei_local->reset_8390)
#define ei_block_output (ei_local->block_output)
#define ei_block_input (ei_local->block_input)
#define ei_get_8390_hdr (ei_local->get_8390_hdr)
int ei_debug = 1;
static void ei_tx_intr(struct net_device *dev);
static void ei_tx_err(struct net_device *dev);
static void ei_receive(struct net_device *dev);
static void ei_rx_overrun(struct net_device *dev);
static void NS8390_trigger_send(struct net_device *dev, unsigned int length,
int start_page);
static void do_set_multicast_list(struct net_device *dev);
static int ax_open(struct net_device *dev)
#define dev_lock(dev) (((struct ei_device *)netdev_priv(dev))->page_lock)
static int ax_close(struct net_device *dev)
static void axnet_tx_timeout(struct net_device *dev)
static netdev_tx_t axnet_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static irqreturn_t ax_interrupt(int irq, void *dev_id)
static void ei_tx_err(struct net_device *dev)
static void ei_tx_intr(struct net_device *dev)
static void ei_receive(struct net_device *dev)
static void ei_rx_overrun(struct net_device *dev)
static struct net_device_stats *get_stats(struct net_device *dev)
static inline void make_mc_bits(u8 *bits, struct net_device *dev)
static void do_set_multicast_list(struct net_device *dev)
static void set_multicast_list(struct net_device *dev)
static void AX88190_init(struct net_device *dev, int startp)
static void NS8390_trigger_send(struct net_device *dev, unsigned int length,
int start_page)
