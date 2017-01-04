struct net_device *ieee802154_get_dev(struct net *net,
struct ieee802154_addr *addr)
static int ieee802154_sock_release(struct socket *sock)
static int ieee802154_sock_sendmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t len)
static int ieee802154_sock_bind(struct socket *sock, struct sockaddr *uaddr,
int addr_len)
static int ieee802154_sock_connect(struct socket *sock, struct sockaddr *uaddr,
int addr_len, int flags)
static int ieee802154_dev_ioctl(struct sock *sk, struct ifreq __user *arg,
unsigned int cmd)
static int ieee802154_sock_ioctl(struct socket *sock, unsigned int cmd,
unsigned long arg)
static const struct proto_ops ieee802154_raw_ops = ;
static const struct proto_ops ieee802154_dgram_ops = ;
static int ieee802154_create(struct net *net, struct socket *sock,
int protocol, int kern)
static const struct net_proto_family ieee802154_family_ops = ;
static int ieee802154_rcv(struct sk_buff *skb, struct net_device *dev,
struct packet_type *pt, struct net_device *orig_dev)
static struct packet_type ieee802154_packet_type = ;
static int __init af_ieee802154_init(void)
static void __exit af_ieee802154_remove(void)
module_init(af_ieee802154_init);
module_exit(af_ieee802154_remove);
MODULE_LICENSE("GPL");
MODULE_ALIAS_NETPROTO(PF_IEEE802154);
