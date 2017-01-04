#define UETH__VERSION	"29-May-2008"
struct eth_dev ;
#define RX_EXTRA	20
#define DEFAULT_QLEN	2
static unsigned qmult = 5;
module_param(qmult, uint, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(qmult, "queue length multiplier at high speed");
#define qmult		1
static inline int qlen(struct usb_gadget *gadget)
#undef DBG
#undef VDBG
#undef ERROR
#undef INFO
#define xprintk(d, level, fmt, args...) \
printk(level "%s: " fmt , (d)->net->name , ## args)
#undef DEBUG
#define DBG(dev, fmt, args...) \
xprintk(dev , KERN_DEBUG , fmt , ## args)
#define DBG(dev, fmt, args...) \
do  while (0)
#define VDBG	DBG
#define VDBG(dev, fmt, args...) \
do  while (0)
#define ERROR(dev, fmt, args...) \
xprintk(dev , KERN_ERR , fmt , ## args)
#define INFO(dev, fmt, args...) \
xprintk(dev , KERN_INFO , fmt , ## args)
static int ueth_change_mtu(struct net_device *net, int new_mtu)
static void eth_get_drvinfo(struct net_device *net, struct ethtool_drvinfo *p)
static const struct ethtool_ops ops = ;
static void defer_kevent(struct eth_dev *dev, int flag)
static void rx_complete(struct usb_ep *ep, struct usb_request *req);
static int
rx_submit(struct eth_dev *dev, struct usb_request *req, gfp_t gfp_flags)
static void rx_complete(struct usb_ep *ep, struct usb_request *req)
static int prealloc(struct list_head *list, struct usb_ep *ep, unsigned n)
static int alloc_requests(struct eth_dev *dev, struct gether *link, unsigned n)
static void rx_fill(struct eth_dev *dev, gfp_t gfp_flags)
static void eth_work(struct work_struct *work)
static void tx_complete(struct usb_ep *ep, struct usb_request *req)
static inline int is_promisc(u16 cdc_filter)
static netdev_tx_t eth_start_xmit(struct sk_buff *skb,
struct net_device *net)
static void eth_start(struct eth_dev *dev, gfp_t gfp_flags)
static int eth_open(struct net_device *net)
static int eth_stop(struct net_device *net)
static char *dev_addr;
module_param(dev_addr, charp, S_IRUGO);
MODULE_PARM_DESC(dev_addr, "Device Ethernet Address");
static char *host_addr;
module_param(host_addr, charp, S_IRUGO);
MODULE_PARM_DESC(host_addr, "Host Ethernet Address");
static int get_ether_addr(const char *str, u8 *dev_addr)
static struct eth_dev *the_dev;
static const struct net_device_ops eth_netdev_ops = ;
static struct device_type gadget_type = ;
int gether_setup(struct usb_gadget *g, u8 ethaddr[ETH_ALEN])
void gether_cleanup(void)
struct net_device *gether_connect(struct gether *link)
void gether_disconnect(struct gether *link)
