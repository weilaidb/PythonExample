struct datalink_proto *ddp_dl, *aarp_dl;
static const struct proto_ops atalk_dgram_ops;
HLIST_HEAD(atalk_sockets);
DEFINE_RWLOCK(atalk_sockets_lock);
static inline void __atalk_insert_socket(struct sock *sk)
static inline void atalk_remove_socket(struct sock *sk)
static struct sock *atalk_search_socket(struct sockaddr_at *to,
struct atalk_iface *atif)
static struct sock *atalk_find_or_insert_socket(struct sock *sk,
struct sockaddr_at *sat)
static void atalk_destroy_timer(unsigned long data)
static inline void atalk_destroy_socket(struct sock *sk)
struct atalk_route *atalk_routes;
DEFINE_RWLOCK(atalk_routes_lock);
struct atalk_iface *atalk_interfaces;
DEFINE_RWLOCK(atalk_interfaces_lock);
struct atalk_route atrtr_default;
static void atif_drop_device(struct net_device *dev)
static struct atalk_iface *atif_add_device(struct net_device *dev,
struct atalk_addr *sa)
static int atif_probe_device(struct atalk_iface *atif)
static int atif_proxy_probe_device(struct atalk_iface *atif,
struct atalk_addr* proxy_addr)
struct atalk_addr *atalk_find_dev_addr(struct net_device *dev)
static struct atalk_addr *atalk_find_primary(void)
static struct atalk_iface *atalk_find_anynet(int node, struct net_device *dev)
static struct atalk_iface *atalk_find_interface(__be16 net, int node)
static struct atalk_route *atrtr_find(struct atalk_addr *target)
struct net_device *atrtr_get_dev(struct atalk_addr *sa)
static void atrtr_set_default(struct net_device *dev)
static int atrtr_create(struct rtentry *r, struct net_device *devhint)
static int atrtr_delete(struct atalk_addr * addr)
static void atrtr_device_down(struct net_device *dev)
static inline void atalk_dev_down(struct net_device *dev)
static int ddp_device_event(struct notifier_block *this, unsigned long event,
void *ptr)
static int atif_ioctl(int cmd, void __user *arg)
static int atrtr_ioctl(unsigned int cmd, void __user *arg)
static unsigned long atalk_sum_partial(const unsigned char *data,
int len, unsigned long sum)
static unsigned long atalk_sum_skb(const struct sk_buff *skb, int offset,
int len, unsigned long sum)
static __be16 atalk_checksum(const struct sk_buff *skb, int len)
static struct proto ddp_proto = ;
static int atalk_create(struct net *net, struct socket *sock, int protocol,
int kern)
static int atalk_release(struct socket *sock)
static int atalk_pick_and_bind_port(struct sock *sk, struct sockaddr_at *sat)
static int atalk_autobind(struct sock *sk)
static int atalk_bind(struct socket *sock, struct sockaddr *uaddr, int addr_len)
static int atalk_connect(struct socket *sock, struct sockaddr *uaddr,
int addr_len, int flags)
static int atalk_getname(struct socket *sock, struct sockaddr *uaddr,
int *uaddr_len, int peer)
#if defined(CONFIG_IPDDP) || defined(CONFIG_IPDDP_MODULE)
static __inline__ int is_ip_over_ddp(struct sk_buff *skb)
static int handle_ip_over_ddp(struct sk_buff *skb)
#define is_ip_over_ddp(skb) 0
#define handle_ip_over_ddp(skb) 0
static int atalk_route_packet(struct sk_buff *skb, struct net_device *dev,
struct ddpehdr *ddp, __u16 len_hops, int origlen)
static int atalk_rcv(struct sk_buff *skb, struct net_device *dev,
struct packet_type *pt, struct net_device *orig_dev)
static int ltalk_rcv(struct sk_buff *skb, struct net_device *dev,
struct packet_type *pt, struct net_device *orig_dev)
static int atalk_sendmsg(struct kiocb *iocb, struct socket *sock, struct msghdr *msg,
size_t len)
static int atalk_recvmsg(struct kiocb *iocb, struct socket *sock, struct msghdr *msg,
size_t size, int flags)
static int atalk_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
static int atalk_compat_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
static const struct net_proto_family atalk_family_ops = ;
static const struct proto_ops atalk_dgram_ops = ;
static struct notifier_block ddp_notifier = ;
static struct packet_type ltalk_packet_type __read_mostly = ;
static struct packet_type ppptalk_packet_type __read_mostly = ;
static unsigned char ddp_snap_id[] = ;
EXPORT_SYMBOL(atrtr_get_dev);
EXPORT_SYMBOL(atalk_find_dev_addr);
static const char atalk_err_snap[] __initconst =
KERN_CRIT "Unable to register DDP with SNAP.\n";
static int __init atalk_init(void)
module_init(atalk_init);
static void __exit atalk_exit(void)
module_exit(atalk_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Alan Cox <alan@lxorguk.ukuu.org.uk>");
MODULE_DESCRIPTION("AppleTalk 0.20\n");
MODULE_ALIAS_NETPROTO(PF_APPLETALK);
