#define EI_SHIFT(x)	(ei_local->reg_offset[x])
#define ei_inb(_p)	 readb((void __iomem *)_p)
#define ei_outb(_v,_p)	 writeb(_v,(void __iomem *)_p)
#define ei_inb_p(_p)	 readb((void __iomem *)_p)
#define ei_outb_p(_v,_p) writeb(_v,(void __iomem *)_p)
#define NET_DEBUG  0
#define DEBUG_INIT 2
#define DRV_NAME	"etherh"
#define DRV_VERSION	"1.11"
static char version[] __initdata =
"EtherH/EtherM Driver (c) 2002-2004 Russell King " DRV_VERSION "\n";
static unsigned int net_debug = NET_DEBUG;
struct etherh_priv ;
struct etherh_data ;
MODULE_AUTHOR("Russell King");
MODULE_DESCRIPTION("EtherH/EtherM driver");
MODULE_LICENSE("GPL");
#define ETHERH500_DATAPORT	0x800
#define ETHERH500_NS8390	0x000
#define ETHERH500_CTRLPORT	0x800
#define ETHERH600_DATAPORT	0x040
#define ETHERH600_NS8390	0x800
#define ETHERH600_CTRLPORT	0x200
#define ETHERH_CP_IE		1
#define ETHERH_CP_IF		2
#define ETHERH_CP_HEARTBEAT	2
#define ETHERH_TX_START_PAGE	1
#define ETHERH_STOP_PAGE	127
#define ETHERM_DATAPORT		0x200
#define ETHERM_NS8390		0x800
#define ETHERM_CTRLPORT		0x23c
#define ETHERM_TX_START_PAGE	64
#define ETHERM_STOP_PAGE	127
#define etherh_priv(dev) \
((struct etherh_priv *)(((char *)netdev_priv(dev)) + sizeof(struct ei_device)))
static inline void etherh_set_ctrl(struct etherh_priv *eh, unsigned char mask)
static inline void etherh_clr_ctrl(struct etherh_priv *eh, unsigned char mask)
static inline unsigned int etherh_get_stat(struct etherh_priv *eh)
static void etherh_irq_enable(ecard_t *ec, int irqnr)
static void etherh_irq_disable(ecard_t *ec, int irqnr)
static expansioncard_ops_t etherh_ops = ;
static void
etherh_setif(struct net_device *dev)
static int
etherh_getifstat(struct net_device *dev)
static int etherh_set_config(struct net_device *dev, struct ifmap *map)
static void
etherh_reset(struct net_device *dev)
static void
etherh_block_output (struct net_device *dev, int count, const unsigned char *buf, int start_page)
static void
etherh_block_input (struct net_device *dev, int count, struct sk_buff *skb, int ring_offset)
static void
etherh_get_header (struct net_device *dev, struct e8390_pkt_hdr *hdr, int ring_page)
static int
etherh_open(struct net_device *dev)
static int
etherh_close(struct net_device *dev)
static void __init etherh_banner(void)
static int __devinit etherh_addr(char *addr, struct expansion_card *ec)
static int __init etherm_addr(char *addr)
static void etherh_get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static int etherh_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int etherh_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static const struct ethtool_ops etherh_ethtool_ops = ;
static const struct net_device_ops etherh_netdev_ops = ;
static u32 etherh_regoffsets[16];
static u32 etherm_regoffsets[16];
static int __devinit
etherh_probe(struct expansion_card *ec, const struct ecard_id *id)
static void __devexit etherh_remove(struct expansion_card *ec)
static struct etherh_data etherm_data = ;
static struct etherh_data etherlan500_data = ;
static struct etherh_data etherlan600_data = ;
static struct etherh_data etherlan600a_data = ;
static const struct ecard_id etherh_ids[] = ;
static struct ecard_driver etherh_driver = ;
static int __init etherh_init(void)
static void __exit etherh_exit(void)
module_init(etherh_init);
module_exit(etherh_exit);
