MODULE_AUTHOR("Roland Dreier");
MODULE_DESCRIPTION("IP-over-InfiniBand net driver");
MODULE_LICENSE("Dual BSD/GPL");
int ipoib_sendq_size __read_mostly = IPOIB_TX_RING_SIZE;
int ipoib_recvq_size __read_mostly = IPOIB_RX_RING_SIZE;
module_param_named(send_queue_size, ipoib_sendq_size, int, 0444);
MODULE_PARM_DESC(send_queue_size, "Number of descriptors in send queue");
module_param_named(recv_queue_size, ipoib_recvq_size, int, 0444);
MODULE_PARM_DESC(recv_queue_size, "Number of descriptors in receive queue");
int ipoib_debug_level;
module_param_named(debug_level, ipoib_debug_level, int, 0644);
MODULE_PARM_DESC(debug_level, "Enable debug tracing if > 0");
struct ipoib_path_iter ;
static const u8 ipv4_bcast_addr[] = ;
struct workqueue_struct *ipoib_workqueue;
struct ib_sa_client ipoib_sa_client;
static void ipoib_add_one(struct ib_device *device);
static void ipoib_remove_one(struct ib_device *device);
static struct ib_client ipoib_client = ;
int ipoib_open(struct net_device *dev)
static int ipoib_stop(struct net_device *dev)
static u32 ipoib_fix_features(struct net_device *dev, u32 features)
static int ipoib_change_mtu(struct net_device *dev, int new_mtu)
static struct ipoib_path *__path_find(struct net_device *dev, void *gid)
static int __path_add(struct net_device *dev, struct ipoib_path *path)
static void path_free(struct net_device *dev, struct ipoib_path *path)
struct ipoib_path_iter *ipoib_path_iter_init(struct net_device *dev)
int ipoib_path_iter_next(struct ipoib_path_iter *iter)
void ipoib_path_iter_read(struct ipoib_path_iter *iter,
struct ipoib_path *path)
void ipoib_mark_paths_invalid(struct net_device *dev)
void ipoib_flush_paths(struct net_device *dev)
static void path_rec_completion(int status,
struct ib_sa_path_rec *pathrec,
void *path_ptr)
static struct ipoib_path *path_rec_create(struct net_device *dev, void *gid)
static int path_rec_start(struct net_device *dev,
struct ipoib_path *path)
static void neigh_add_path(struct sk_buff *skb, struct net_device *dev)
static void ipoib_path_lookup(struct sk_buff *skb, struct net_device *dev)
static void unicast_arp_send(struct sk_buff *skb, struct net_device *dev,
struct ipoib_pseudoheader *phdr)
static int ipoib_start_xmit(struct sk_buff *skb, struct net_device *dev)
static void ipoib_timeout(struct net_device *dev)
static int ipoib_hard_header(struct sk_buff *skb,
struct net_device *dev,
unsigned short type,
const void *daddr, const void *saddr, unsigned len)
static void ipoib_set_mcast_list(struct net_device *dev)
static void ipoib_neigh_cleanup(struct neighbour *n)
struct ipoib_neigh *ipoib_neigh_alloc(struct neighbour *neighbour,
struct net_device *dev)
void ipoib_neigh_free(struct net_device *dev, struct ipoib_neigh *neigh)
static int ipoib_neigh_setup_dev(struct net_device *dev, struct neigh_parms *parms)
int ipoib_dev_init(struct net_device *dev, struct ib_device *ca, int port)
void ipoib_dev_cleanup(struct net_device *dev)
static const struct header_ops ipoib_header_ops = ;
static const struct net_device_ops ipoib_netdev_ops = ;
static void ipoib_setup(struct net_device *dev)
struct ipoib_dev_priv *ipoib_intf_alloc(const char *name)
static ssize_t show_pkey(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(pkey, S_IRUGO, show_pkey, NULL);
static ssize_t show_umcast(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_umcast(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(umcast, S_IWUSR | S_IRUGO, show_umcast, set_umcast);
int ipoib_add_umcast_attr(struct net_device *dev)
static ssize_t create_child(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(create_child, S_IWUSR, NULL, create_child);
static ssize_t delete_child(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(delete_child, S_IWUSR, NULL, delete_child);
int ipoib_add_pkey_attr(struct net_device *dev)
int ipoib_set_dev_features(struct ipoib_dev_priv *priv, struct ib_device *hca)
static struct net_device *ipoib_add_port(const char *format,
struct ib_device *hca, u8 port)
static void ipoib_add_one(struct ib_device *device)
static void ipoib_remove_one(struct ib_device *device)
static int __init ipoib_init_module(void)
static void __exit ipoib_cleanup_module(void)
module_init(ipoib_init_module);
module_exit(ipoib_cleanup_module);
