#define DRV_NAME		"3c523"
#define DRV_VERSION		"17-Nov-2001"
#define DEBUG
#define SYSBUSVAL 0
#undef ELMC_MULTICAST
#define make32(ptr16) (p->memtop + (short) (ptr16) )
#define make24(ptr32) ((char *) (ptr32) - p->base)
#define make16(ptr32) ((unsigned short) ((unsigned long) (ptr32) - (unsigned long) p->memtop ))
static int irq_table[] __initdata = ;
static int csr_table[] __initdata = ;
static int shm_table[] __initdata = ;
#define RECV_BUFF_SIZE 1524
#define XMIT_BUFF_SIZE 1524
#define NUM_XMIT_BUFFS 1
#define NUM_RECV_BUFFS_8  4
#define NUM_RECV_BUFFS_16 9
#if (NUM_XMIT_BUFFS == 1)
#define NO_NOPCOMMANDS
#define DELAY(x)
#define DELAY_16();
#define WAIT_4_SCB_CMD()
static irqreturn_t elmc_interrupt(int irq, void *dev_id);
static int elmc_open(struct net_device *dev);
static int elmc_close(struct net_device *dev);
static netdev_tx_t elmc_send_packet(struct sk_buff *, struct net_device *);
static struct net_device_stats *elmc_get_stats(struct net_device *dev);
static void elmc_timeout(struct net_device *dev);
static void set_multicast_list(struct net_device *dev);
static const struct ethtool_ops netdev_ethtool_ops;
static int init586(struct net_device *dev);
static int check586(struct net_device *dev, unsigned long where, unsigned size);
static void alloc586(struct net_device *dev);
static void startrecv586(struct net_device *dev);
static void *alloc_rfa(struct net_device *dev, void *ptr);
static void elmc_rcv_int(struct net_device *dev);
static void elmc_xmt_int(struct net_device *dev);
static void elmc_rnr_int(struct net_device *dev);
struct priv ;
#define elmc_attn586()
#define elmc_reset586()
#define elmc_id_attn586()
#define elmc_id_reset586()
static void elmc_do_attn586(int ioaddr, int ints)
static void elmc_do_reset586(int ioaddr, int ints)
static int elmc_close(struct net_device *dev)
static int elmc_open(struct net_device *dev)
static int __init check586(struct net_device *dev, unsigned long where, unsigned size)
static void alloc586(struct net_device *dev)
static int elmc_getinfo(char *buf, int slot, void *d)
static const struct net_device_ops netdev_ops = ;
static int __init do_elmc_probe(struct net_device *dev)
static void cleanup_card(struct net_device *dev)
struct net_device * __init elmc_probe(int unit)
static int init586(struct net_device *dev)
static void *alloc_rfa(struct net_device *dev, void *ptr)
static irqreturn_t
elmc_interrupt(int irq, void *dev_id)
static void elmc_rcv_int(struct net_device *dev)
static void elmc_rnr_int(struct net_device *dev)
static void elmc_xmt_int(struct net_device *dev)
static void startrecv586(struct net_device *dev)
static void elmc_timeout(struct net_device *dev)
static netdev_tx_t elmc_send_packet(struct sk_buff *skb, struct net_device *dev)
static struct net_device_stats *elmc_get_stats(struct net_device *dev)
static void set_multicast_list(struct net_device *dev)
static void netdev_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static const struct ethtool_ops netdev_ethtool_ops = ;
#define MAX_3C523_CARDS 4
static struct net_device *dev_elmc[MAX_3C523_CARDS];
static int irq[MAX_3C523_CARDS];
static int io[MAX_3C523_CARDS];
module_param_array(irq, int, NULL, 0);
module_param_array(io, int, NULL, 0);
MODULE_PARM_DESC(io, "EtherLink/MC I/O base address(es)");
MODULE_PARM_DESC(irq, "EtherLink/MC IRQ number(s)");
MODULE_LICENSE("GPL");
int __init init_module(void)
void __exit cleanup_module(void)
