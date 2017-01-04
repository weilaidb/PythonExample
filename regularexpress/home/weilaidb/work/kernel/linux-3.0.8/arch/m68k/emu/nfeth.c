#define DRV_VERSION	"0.3"
#define DRV_RELDATE	"10/12/2005"
#define pr_fmt(fmt)	KBUILD_MODNAME ": " fmt
enum ;
#define MAX_UNIT	8
static const char version[] __devinitdata =
KERN_INFO KBUILD_MODNAME ".c:v" DRV_VERSION " " DRV_RELDATE
" S.Opichal, M.Jurik, P.Stehlik\n"
KERN_INFO " http:
MODULE_AUTHOR("Milan Jurik");
MODULE_DESCRIPTION("Atari NFeth driver");
MODULE_LICENSE("GPL");
static long nfEtherID;
static int nfEtherIRQ;
struct nfeth_private ;
static struct net_device *nfeth_dev[MAX_UNIT];
static int nfeth_open(struct net_device *dev)
static int nfeth_stop(struct net_device *dev)
static inline void recv_packet(struct net_device *dev)
static irqreturn_t nfeth_interrupt(int irq, void *dev_id)
static int nfeth_xmit(struct sk_buff *skb, struct net_device *dev)
static void nfeth_tx_timeout(struct net_device *dev)
static const struct net_device_ops nfeth_netdev_ops = ;
static struct net_device * __init nfeth_probe(int unit)
static int __init nfeth_init(void)
static void __exit nfeth_cleanup(void)
module_init(nfeth_init);
module_exit(nfeth_cleanup);
