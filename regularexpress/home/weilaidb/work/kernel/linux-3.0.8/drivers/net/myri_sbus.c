static char version[] =
"myri_sbus.c:v2.0 June 23, 2006 David S. Miller (davem@davemloft.net)\n";
#define DET(x)   printk x
#define DET(x)
#define DIRQ(x)  printk x
#define DIRQ(x)
#define DTX(x)  printk x
#define DTX(x)
#define DRX(x)  printk x
#define DRX(x)
#define DHDR(x) printk x
#define DHDR(x)
#define FWNAME		"myricom/lanai.bin"
static void myri_reset_off(void __iomem *lp, void __iomem *cregs)
static void myri_reset_on(void __iomem *cregs)
static void myri_disable_irq(void __iomem *lp, void __iomem *cregs)
static void myri_enable_irq(void __iomem *lp, void __iomem *cregs)
static inline void bang_the_chip(struct myri_eth *mp)
static int myri_do_handshake(struct myri_eth *mp)
static int __devinit myri_load_lanai(struct myri_eth *mp)
static void myri_clean_rings(struct myri_eth *mp)
static void myri_init_rings(struct myri_eth *mp, int from_irq)
static int myri_init(struct myri_eth *mp, int from_irq)
static void myri_is_not_so_happy(struct myri_eth *mp)
static void dump_ehdr(struct ethhdr *ehdr)
static void dump_ehdr_and_myripad(unsigned char *stuff)
static void myri_tx(struct myri_eth *mp, struct net_device *dev)
static __be16 myri_type_trans(struct sk_buff *skb, struct net_device *dev)
static void myri_rx(struct myri_eth *mp, struct net_device *dev)
static irqreturn_t myri_interrupt(int irq, void *dev_id)
static int myri_open(struct net_device *dev)
static int myri_close(struct net_device *dev)
static void myri_tx_timeout(struct net_device *dev)
static int myri_start_xmit(struct sk_buff *skb, struct net_device *dev)
static int myri_header(struct sk_buff *skb, struct net_device *dev,
unsigned short type, const void *daddr,
const void *saddr, unsigned len)
static int myri_rebuild_header(struct sk_buff *skb)
static int myri_header_cache(const struct neighbour *neigh, struct hh_cache *hh)
void myri_header_cache_update(struct hh_cache *hh,
const struct net_device *dev,
const unsigned char * haddr)
static int myri_change_mtu(struct net_device *dev, int new_mtu)
static void myri_set_multicast(struct net_device *dev)
static inline void set_boardid_from_idprom(struct myri_eth *mp, int num)
static inline void determine_reg_space_size(struct myri_eth *mp)
static void dump_eeprom(struct myri_eth *mp)
static const struct header_ops myri_header_ops = ;
static const struct net_device_ops myri_ops = ;
static int __devinit myri_sbus_probe(struct platform_device *op)
static int __devexit myri_sbus_remove(struct platform_device *op)
static const struct of_device_id myri_sbus_match[] = ;
MODULE_DEVICE_TABLE(of, myri_sbus_match);
static struct platform_driver myri_sbus_driver = ;
static int __init myri_sbus_init(void)
static void __exit myri_sbus_exit(void)
module_init(myri_sbus_init);
module_exit(myri_sbus_exit);
MODULE_LICENSE("GPL");
MODULE_FIRMWARE(FWNAME);
