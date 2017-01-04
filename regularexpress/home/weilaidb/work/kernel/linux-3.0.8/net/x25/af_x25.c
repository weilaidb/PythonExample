int sysctl_x25_restart_request_timeout = X25_DEFAULT_T20;
int sysctl_x25_call_request_timeout    = X25_DEFAULT_T21;
int sysctl_x25_reset_request_timeout   = X25_DEFAULT_T22;
int sysctl_x25_clear_request_timeout   = X25_DEFAULT_T23;
int sysctl_x25_ack_holdback_timeout    = X25_DEFAULT_T2;
int sysctl_x25_forward                 = 0;
HLIST_HEAD(x25_list);
DEFINE_RWLOCK(x25_list_lock);
static const struct proto_ops x25_proto_ops;
static struct x25_address null_x25_address = ;
struct compat_x25_subscrip_struct ;
int x25_parse_address_block(struct sk_buff *skb,
struct x25_address *called_addr,
struct x25_address *calling_addr)
int x25_addr_ntoa(unsigned char *p, struct x25_address *called_addr,
struct x25_address *calling_addr)
int x25_addr_aton(unsigned char *p, struct x25_address *called_addr,
struct x25_address *calling_addr)
static void x25_remove_socket(struct sock *sk)
static void x25_kill_by_device(struct net_device *dev)
static int x25_device_event(struct notifier_block *this, unsigned long event,
void *ptr)
static void x25_insert_socket(struct sock *sk)
static struct sock *x25_find_listener(struct x25_address *addr,
struct sk_buff *skb)
static struct sock *__x25_find_socket(unsigned int lci, struct x25_neigh *nb)
struct sock *x25_find_socket(unsigned int lci, struct x25_neigh *nb)
static unsigned int x25_new_lci(struct x25_neigh *nb)
static void __x25_destroy_socket(struct sock *);
static void x25_destroy_timer(unsigned long data)
static void __x25_destroy_socket(struct sock *sk)
void x25_destroy_socket_from_timer(struct sock *sk)
static int x25_setsockopt(struct socket *sock, int level, int optname,
char __user *optval, unsigned int optlen)
static int x25_getsockopt(struct socket *sock, int level, int optname,
char __user *optval, int __user *optlen)
static int x25_listen(struct socket *sock, int backlog)
static struct proto x25_proto = ;
static struct sock *x25_alloc_socket(struct net *net)
static int x25_create(struct net *net, struct socket *sock, int protocol,
int kern)
static struct sock *x25_make_new(struct sock *osk)
static int x25_release(struct socket *sock)
static int x25_bind(struct socket *sock, struct sockaddr *uaddr, int addr_len)
static int x25_wait_for_connection_establishment(struct sock *sk)
static int x25_connect(struct socket *sock, struct sockaddr *uaddr,
int addr_len, int flags)
static int x25_wait_for_data(struct sock *sk, long timeout)
static int x25_accept(struct socket *sock, struct socket *newsock, int flags)
static int x25_getname(struct socket *sock, struct sockaddr *uaddr,
int *uaddr_len, int peer)
int x25_rx_call_request(struct sk_buff *skb, struct x25_neigh *nb,
unsigned int lci)
static int x25_sendmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t len)
static int x25_recvmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t size,
int flags)
static int x25_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
static const struct net_proto_family x25_family_ops = ;
static int compat_x25_subscr_ioctl(unsigned int cmd,
struct compat_x25_subscrip_struct __user *x25_subscr32)
static int compat_x25_ioctl(struct socket *sock, unsigned int cmd,
unsigned long arg)
static const struct proto_ops x25_proto_ops = ;
static struct packet_type x25_packet_type __read_mostly = ;
static struct notifier_block x25_dev_notifier = ;
void x25_kill_by_neigh(struct x25_neigh *nb)
static int __init x25_init(void)
module_init(x25_init);
static void __exit x25_exit(void)
module_exit(x25_exit);
MODULE_AUTHOR("Jonathan Naylor <g4klx@g4klx.demon.co.uk>");
MODULE_DESCRIPTION("The X.25 Packet Layer network layer protocol");
MODULE_LICENSE("GPL");
MODULE_ALIAS_NETPROTO(PF_X25);
