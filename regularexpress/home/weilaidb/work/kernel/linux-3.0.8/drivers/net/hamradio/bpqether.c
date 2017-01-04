static const char banner[] __initdata = KERN_INFO \
"AX.25: bpqether driver version 004\n";
static char bcast_addr[6]=;
static char bpq_eth_addr[6];
static int bpq_rcv(struct sk_buff *, struct net_device *, struct packet_type *, struct net_device *);
static int bpq_device_event(struct notifier_block *, unsigned long, void *);
static struct packet_type bpq_packet_type __read_mostly = ;
static struct notifier_block bpq_dev_notifier = ;
struct bpqdev ;
static LIST_HEAD(bpq_devices);
static struct lock_class_key bpq_netdev_xmit_lock_key;
static struct lock_class_key bpq_netdev_addr_lock_key;
static void bpq_set_lockdep_class_one(struct net_device *dev,
struct netdev_queue *txq,
void *_unused)
static void bpq_set_lockdep_class(struct net_device *dev)
static inline struct net_device *bpq_get_ether_dev(struct net_device *dev)
static inline struct net_device *bpq_get_ax25_dev(struct net_device *dev)
static inline int dev_is_ethdev(struct net_device *dev)
static int bpq_rcv(struct sk_buff *skb, struct net_device *dev, struct packet_type *ptype, struct net_device *orig_dev)
static netdev_tx_t bpq_xmit(struct sk_buff *skb, struct net_device *dev)
static int bpq_set_mac_address(struct net_device *dev, void *addr)
static int bpq_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static int bpq_open(struct net_device *dev)
static int bpq_close(struct net_device *dev)
static void *bpq_seq_start(struct seq_file *seq, loff_t *pos)
__acquires(RCU)
static void *bpq_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void bpq_seq_stop(struct seq_file *seq, void *v)
__releases(RCU)
static int bpq_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations bpq_seqops = ;
static int bpq_info_open(struct inode *inode, struct file *file)
static const struct file_operations bpq_info_fops = ;
static const struct net_device_ops bpq_netdev_ops = ;
static void bpq_setup(struct net_device *dev)
static int bpq_new_device(struct net_device *edev)
static void bpq_free_device(struct net_device *ndev)
static int bpq_device_event(struct notifier_block *this,unsigned long event, void *ptr)
static int __init bpq_init_driver(void)
static void __exit bpq_cleanup_driver(void)
MODULE_AUTHOR("Joerg Reuter DL1BKE <jreuter@yaina.de>");
MODULE_DESCRIPTION("Transmit and receive AX.25 packets over Ethernet");
MODULE_LICENSE("GPL");
module_init(bpq_init_driver);
module_exit(bpq_cleanup_driver);
