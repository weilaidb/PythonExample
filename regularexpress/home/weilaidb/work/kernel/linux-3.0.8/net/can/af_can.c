static __initdata const char banner[] = KERN_INFO
"can: controller area network core (" CAN_VERSION_STRING ")\n";
MODULE_DESCRIPTION("Controller Area Network PF_CAN core");
MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("Urs Thuermann <urs.thuermann@volkswagen.de>, "
"Oliver Hartkopp <oliver.hartkopp@volkswagen.de>");
MODULE_ALIAS_NETPROTO(PF_CAN);
static int stats_timer __read_mostly = 1;
module_param(stats_timer, int, S_IRUGO);
MODULE_PARM_DESC(stats_timer, "enable timer for statistics (default:on)");
struct dev_rcv_lists can_rx_alldev_list;
static DEFINE_SPINLOCK(can_rcvlists_lock);
static struct kmem_cache *rcv_cache __read_mostly;
static const struct can_proto *proto_tab[CAN_NPROTO] __read_mostly;
static DEFINE_MUTEX(proto_tab_lock);
struct timer_list can_stattimer;
struct s_stats    can_stats;
struct s_pstats   can_pstats;
int can_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
EXPORT_SYMBOL(can_ioctl);
static void can_sock_destruct(struct sock *sk)
static const struct can_proto *can_get_proto(int protocol)
static inline void can_put_proto(const struct can_proto *cp)
static int can_create(struct net *net, struct socket *sock, int protocol,
int kern)
int can_send(struct sk_buff *skb, int loop)
EXPORT_SYMBOL(can_send);
static struct dev_rcv_lists *find_dev_rcv_lists(struct net_device *dev)
static struct hlist_head *find_rcv_list(canid_t *can_id, canid_t *mask,
struct dev_rcv_lists *d)
int can_rx_register(struct net_device *dev, canid_t can_id, canid_t mask,
void (*func)(struct sk_buff *, void *), void *data,
char *ident)
EXPORT_SYMBOL(can_rx_register);
static void can_rx_delete_receiver(struct rcu_head *rp)
void can_rx_unregister(struct net_device *dev, canid_t can_id, canid_t mask,
void (*func)(struct sk_buff *, void *), void *data)
EXPORT_SYMBOL(can_rx_unregister);
static inline void deliver(struct sk_buff *skb, struct receiver *r)
static int can_rcv_filter(struct dev_rcv_lists *d, struct sk_buff *skb)
static int can_rcv(struct sk_buff *skb, struct net_device *dev,
struct packet_type *pt, struct net_device *orig_dev)
int can_proto_register(const struct can_proto *cp)
EXPORT_SYMBOL(can_proto_register);
void can_proto_unregister(const struct can_proto *cp)
EXPORT_SYMBOL(can_proto_unregister);
static int can_notifier(struct notifier_block *nb, unsigned long msg,
void *data)
static struct packet_type can_packet __read_mostly = ;
static const struct net_proto_family can_family_ops = ;
static struct notifier_block can_netdev_notifier __read_mostly = ;
static __init int can_init(void)
static __exit void can_exit(void)
module_init(can_init);
module_exit(can_exit);
