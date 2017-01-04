extern void ipx_register_sysctl(void);
extern void ipx_unregister_sysctl(void);
#define ipx_register_sysctl()
#define ipx_unregister_sysctl()
static unsigned char ipxcfg_max_hops = 16;
static char ipxcfg_auto_select_primary;
static char ipxcfg_auto_create_interfaces;
int sysctl_ipx_pprop_broadcasting = 1;
static struct datalink_proto *p8022_datalink;
static struct datalink_proto *pEII_datalink;
static struct datalink_proto *p8023_datalink;
static struct datalink_proto *pSNAP_datalink;
static const struct proto_ops ipx_dgram_ops;
LIST_HEAD(ipx_interfaces);
DEFINE_SPINLOCK(ipx_interfaces_lock);
struct ipx_interface *ipx_primary_net;
struct ipx_interface *ipx_internal_net;
extern int ipxrtr_add_route(__be32 network, struct ipx_interface *intrfc,
unsigned char *node);
extern void ipxrtr_del_routes(struct ipx_interface *intrfc);
extern int ipxrtr_route_packet(struct sock *sk, struct sockaddr_ipx *usipx,
struct iovec *iov, size_t len, int noblock);
extern int ipxrtr_route_skb(struct sk_buff *skb);
extern struct ipx_route *ipxrtr_lookup(__be32 net);
extern int ipxrtr_ioctl(unsigned int cmd, void __user *arg);
struct ipx_interface *ipx_interfaces_head(void)
static void ipxcfg_set_auto_select(char val)
static int ipxcfg_get_config_data(struct ipx_config_data __user *arg)
static void ipx_remove_socket(struct sock *sk)
static void ipx_destroy_socket(struct sock *sk)
static void ipxitf_clear_primary_net(void)
static struct ipx_interface *__ipxitf_find_using_phys(struct net_device *dev,
__be16 datalink)
static struct ipx_interface *ipxitf_find_using_phys(struct net_device *dev,
__be16 datalink)
struct ipx_interface *ipxitf_find_using_net(__be32 net)
static void ipxitf_insert_socket(struct ipx_interface *intrfc, struct sock *sk)
static struct sock *__ipxitf_find_socket(struct ipx_interface *intrfc,
__be16 port)
static struct sock *ipxitf_find_socket(struct ipx_interface *intrfc,
__be16 port)
static struct sock *ipxitf_find_internal_socket(struct ipx_interface *intrfc,
unsigned char *ipx_node,
__be16 port)
static void __ipxitf_down(struct ipx_interface *intrfc)
void ipxitf_down(struct ipx_interface *intrfc)
static __inline__ void __ipxitf_put(struct ipx_interface *intrfc)
static int ipxitf_device_event(struct notifier_block *notifier,
unsigned long event, void *ptr)
static __exit void ipxitf_cleanup(void)
static void ipxitf_def_skb_handler(struct sock *sock, struct sk_buff *skb)
static int ipxitf_demux_socket(struct ipx_interface *intrfc,
struct sk_buff *skb, int copy)
static struct sock *ncp_connection_hack(struct ipx_interface *intrfc,
struct ipxhdr *ipx)
static int ipxitf_demux_socket(struct ipx_interface *intrfc,
struct sk_buff *skb, int copy)
static struct sk_buff *ipxitf_adjust_skbuff(struct ipx_interface *intrfc,
struct sk_buff *skb)
int ipxitf_send(struct ipx_interface *intrfc, struct sk_buff *skb, char *node)
static int ipxitf_add_local_route(struct ipx_interface *intrfc)
static void ipxitf_discover_netnum(struct ipx_interface *intrfc,
struct sk_buff *skb);
static int ipxitf_pprop(struct ipx_interface *intrfc, struct sk_buff *skb);
static int ipxitf_rcv(struct ipx_interface *intrfc, struct sk_buff *skb)
static void ipxitf_discover_netnum(struct ipx_interface *intrfc,
struct sk_buff *skb)
static int ipxitf_pprop(struct ipx_interface *intrfc, struct sk_buff *skb)
static void ipxitf_insert(struct ipx_interface *intrfc)
static struct ipx_interface *ipxitf_alloc(struct net_device *dev, __be32 netnum,
__be16 dlink_type,
struct datalink_proto *dlink,
unsigned char internal,
int ipx_offset)
static int ipxitf_create_internal(struct ipx_interface_definition *idef)
static __be16 ipx_map_frame_type(unsigned char type)
static int ipxitf_create(struct ipx_interface_definition *idef)
static int ipxitf_delete(struct ipx_interface_definition *idef)
static struct ipx_interface *ipxitf_auto_create(struct net_device *dev,
__be16 dlink_type)
static int ipxitf_ioctl(unsigned int cmd, void __user *arg)
__be16 ipx_cksum(struct ipxhdr *packet, int length)
const char *ipx_frame_name(__be16 frame)
const char *ipx_device_name(struct ipx_interface *intrfc)
static int ipx_setsockopt(struct socket *sock, int level, int optname,
char __user *optval, unsigned int optlen)
static int ipx_getsockopt(struct socket *sock, int level, int optname,
char __user *optval, int __user *optlen)
static struct proto ipx_proto = ;
static int ipx_create(struct net *net, struct socket *sock, int protocol,
int kern)
static int ipx_release(struct socket *sock)
static __be16 ipx_first_free_socketnum(struct ipx_interface *intrfc)
static int __ipx_bind(struct socket *sock,
struct sockaddr *uaddr, int addr_len)
static int ipx_bind(struct socket *sock, struct sockaddr *uaddr, int addr_len)
static int ipx_connect(struct socket *sock, struct sockaddr *uaddr,
int addr_len, int flags)
static int ipx_getname(struct socket *sock, struct sockaddr *uaddr,
int *uaddr_len, int peer)
static int ipx_rcv(struct sk_buff *skb, struct net_device *dev, struct packet_type *pt, struct net_device *orig_dev)
static int ipx_sendmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t len)
static int ipx_recvmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t size, int flags)
static int ipx_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
static int ipx_compat_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
static const struct net_proto_family ipx_family_ops = ;
static const struct proto_ops ipx_dgram_ops = ;
static struct packet_type ipx_8023_packet_type __read_mostly = ;
static struct packet_type ipx_dix_packet_type __read_mostly = ;
static struct notifier_block ipx_dev_notifier = ;
extern struct datalink_proto *make_EII_client(void);
extern void destroy_EII_client(struct datalink_proto *);
static const unsigned char ipx_8022_type = 0xE0;
static const unsigned char ipx_snap_id[5] = ;
static const char ipx_EII_err_msg[] __initconst =
KERN_CRIT "IPX: Unable to register with Ethernet II\n";
static const char ipx_8023_err_msg[] __initconst =
KERN_CRIT "IPX: Unable to register with 802.3\n";
static const char ipx_llc_err_msg[] __initconst =
KERN_CRIT "IPX: Unable to register with 802.2\n";
static const char ipx_snap_err_msg[] __initconst =
KERN_CRIT "IPX: Unable to register with SNAP\n";
static int __init ipx_init(void)
static void __exit ipx_proto_finito(void)
module_init(ipx_init);
module_exit(ipx_proto_finito);
MODULE_LICENSE("GPL");
MODULE_ALIAS_NETPROTO(PF_IPX);
