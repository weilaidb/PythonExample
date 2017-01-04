static LIST_HEAD(snap_list);
static DEFINE_SPINLOCK(snap_lock);
static struct llc_sap *snap_sap;
static struct datalink_proto *find_snap_client(const unsigned char *desc)
static int snap_rcv(struct sk_buff *skb, struct net_device *dev,
struct packet_type *pt, struct net_device *orig_dev)
static int snap_request(struct datalink_proto *dl,
struct sk_buff *skb, u8 *dest)
EXPORT_SYMBOL(register_snap_client);
EXPORT_SYMBOL(unregister_snap_client);
static const char snap_err_msg[] __initconst =
KERN_CRIT "SNAP - unable to register with 802.2\n";
static int __init snap_init(void)
module_init(snap_init);
static void __exit snap_exit(void)
module_exit(snap_exit);
struct datalink_proto *register_snap_client(const unsigned char *desc,
int (*rcvfunc)(struct sk_buff *,
struct net_device *,
struct packet_type *,
struct net_device *))
void unregister_snap_client(struct datalink_proto *proto)
MODULE_LICENSE("GPL");
