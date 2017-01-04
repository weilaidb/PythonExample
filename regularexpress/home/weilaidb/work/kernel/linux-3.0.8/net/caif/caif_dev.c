#define pr_fmt(fmt) KBUILD_MODNAME ":%s(): " fmt, __func__
MODULE_LICENSE("GPL");
struct caif_device_entry ;
struct caif_device_entry_list ;
struct caif_net ;
static int caif_net_id;
struct cfcnfg *get_cfcnfg(struct net *net)
EXPORT_SYMBOL(get_cfcnfg);
static struct caif_device_entry_list *caif_device_list(struct net *net)
static void caifd_put(struct caif_device_entry *e)
static void caifd_hold(struct caif_device_entry *e)
static int caifd_refcnt_read(struct caif_device_entry *e)
static struct caif_device_entry *caif_device_alloc(struct net_device *dev)
static struct caif_device_entry *caif_get(struct net_device *dev)
static int transmit(struct cflayer *layer, struct cfpkt *pkt)
static int receive(struct sk_buff *skb, struct net_device *dev,
struct packet_type *pkttype, struct net_device *orig_dev)
static struct packet_type caif_packet_type __read_mostly = ;
static void dev_flowctrl(struct net_device *dev, int on)
static int caif_device_notify(struct notifier_block *me, unsigned long what,
void *arg)
static struct notifier_block caif_device_notifier = ;
static int caif_init_net(struct net *net)
static void caif_exit_net(struct net *net)
static struct pernet_operations caif_net_ops = ;
static int __init caif_device_init(void)
static void __exit caif_device_exit(void)
module_init(caif_device_init);
module_exit(caif_device_exit);
