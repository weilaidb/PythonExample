static struct phonet_protocol *proto_tab[PHONET_NPROTO] __read_mostly;
static struct phonet_protocol *phonet_proto_get(unsigned int protocol)
static inline void phonet_proto_put(struct phonet_protocol *pp)
static int pn_socket_create(struct net *net, struct socket *sock, int protocol,
int kern)
static const struct net_proto_family phonet_proto_family = ;
static int pn_header_create(struct sk_buff *skb, struct net_device *dev,
unsigned short type, const void *daddr,
const void *saddr, unsigned len)
static int pn_header_parse(const struct sk_buff *skb, unsigned char *haddr)
struct header_ops phonet_header_ops = ;
EXPORT_SYMBOL(phonet_header_ops);
static int pn_send(struct sk_buff *skb, struct net_device *dev,
u16 dst, u16 src, u8 res, u8 irq)
static int pn_raw_send(const void *data, int len, struct net_device *dev,
u16 dst, u16 src, u8 res)
int pn_skb_send(struct sock *sk, struct sk_buff *skb,
const struct sockaddr_pn *target)
EXPORT_SYMBOL(pn_skb_send);
static inline int can_respond(struct sk_buff *skb)
static int send_obj_unreachable(struct sk_buff *rskb)
static int send_reset_indications(struct sk_buff *rskb)
static int phonet_rcv(struct sk_buff *skb, struct net_device *dev,
struct packet_type *pkttype,
struct net_device *orig_dev)
static struct packet_type phonet_packet_type __read_mostly = ;
static DEFINE_MUTEX(proto_tab_lock);
int __init_or_module phonet_proto_register(unsigned int protocol,
struct phonet_protocol *pp)
EXPORT_SYMBOL(phonet_proto_register);
void phonet_proto_unregister(unsigned int protocol, struct phonet_protocol *pp)
EXPORT_SYMBOL(phonet_proto_unregister);
static int __init phonet_init(void)
static void __exit phonet_exit(void)
module_init(phonet_init);
module_exit(phonet_exit);
MODULE_DESCRIPTION("Phonet protocol stack for Linux");
MODULE_LICENSE("GPL");
MODULE_ALIAS_NETPROTO(PF_PHONET);
