#define LOCKUP16 1
#define LOCKUP16 0
#define NET_DEBUG 4
#define EEXP_IO_EXTENT  16
struct net_local
;
static unsigned short start_code[] = ;
static char irqrmap[] = ;
static unsigned short mca_iomap[] = ;
static char mca_irqmap[] = ;
static int eexp_open(struct net_device *dev);
static int eexp_close(struct net_device *dev);
static void eexp_timeout(struct net_device *dev);
static netdev_tx_t eexp_xmit(struct sk_buff *buf,
struct net_device *dev);
static irqreturn_t eexp_irq(int irq, void *dev_addr);
static void eexp_set_multicast(struct net_device *dev);
static void eexp_hw_rx_pio(struct net_device *dev);
static void eexp_hw_tx_pio(struct net_device *dev, unsigned short *buf,
unsigned short len);
static int eexp_hw_probe(struct net_device *dev,unsigned short ioaddr);
static unsigned short eexp_hw_readeeprom(unsigned short ioaddr,
unsigned char location);
static unsigned short eexp_hw_lasttxstat(struct net_device *dev);
static void eexp_hw_txrestart(struct net_device *dev);
static void eexp_hw_txinit    (struct net_device *dev);
static void eexp_hw_rxinit    (struct net_device *dev);
static void eexp_hw_init586   (struct net_device *dev);
static void eexp_setup_filter (struct net_device *dev);
static char *eexp_ifmap[]=;
enum eexp_iftype ;
#define STARTED_RU      2
#define STARTED_CU      1
static inline unsigned short scb_status(struct net_device *dev)
static inline unsigned short scb_rdcmd(struct net_device *dev)
static inline void scb_command(struct net_device *dev, unsigned short cmd)
static inline void scb_wrcbl(struct net_device *dev, unsigned short val)
static inline void scb_wrrfa(struct net_device *dev, unsigned short val)
static inline void set_loopback(struct net_device *dev)
static inline void clear_loopback(struct net_device *dev)
static inline unsigned short int SHADOW(short int addr)
static int __init do_express_probe(struct net_device *dev)
struct net_device * __init express_probe(int unit)
static int eexp_open(struct net_device *dev)
static int eexp_close(struct net_device *dev)
static void unstick_cu(struct net_device *dev)
static void eexp_timeout(struct net_device *dev)
static netdev_tx_t eexp_xmit(struct sk_buff *buf, struct net_device *dev)
static unsigned short eexp_start_irq(struct net_device *dev,
unsigned short status)
static void eexp_cmd_clear(struct net_device *dev)
static irqreturn_t eexp_irq(int dummy, void *dev_info)
static void eexp_hw_set_interface(struct net_device *dev)
static void eexp_hw_rx_pio(struct net_device *dev)
static void eexp_hw_tx_pio(struct net_device *dev, unsigned short *buf,
unsigned short len)
static const struct net_device_ops eexp_netdev_ops = ;
static int __init eexp_hw_probe(struct net_device *dev, unsigned short ioaddr)
static unsigned short __init eexp_hw_readeeprom(unsigned short ioaddr,
unsigned char location)
static unsigned short eexp_hw_lasttxstat(struct net_device *dev)
static void eexp_hw_txrestart(struct net_device *dev)
static void eexp_hw_txinit(struct net_device *dev)
static void eexp_hw_rxinit(struct net_device *dev)
static void eexp_hw_init586(struct net_device *dev)
static void eexp_setup_filter(struct net_device *dev)
static void
eexp_set_multicast(struct net_device *dev)
#define EEXP_MAX_CARDS     4
static struct net_device *dev_eexp[EEXP_MAX_CARDS];
static int irq[EEXP_MAX_CARDS];
static int io[EEXP_MAX_CARDS];
module_param_array(io, int, NULL, 0);
module_param_array(irq, int, NULL, 0);
MODULE_PARM_DESC(io, "EtherExpress 16 I/O base address(es)");
MODULE_PARM_DESC(irq, "EtherExpress 16 IRQ number(s)");
MODULE_LICENSE("GPL");
int __init init_module(void)
void __exit cleanup_module(void)
