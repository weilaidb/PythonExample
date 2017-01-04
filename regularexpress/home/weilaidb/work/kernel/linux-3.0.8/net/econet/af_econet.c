static const struct proto_ops econet_ops;
static struct hlist_head econet_sklist;
static DEFINE_SPINLOCK(econet_lock);
static DEFINE_MUTEX(econet_mutex);
static struct net_device *net2dev_map[256];
#define EC_PORT_IP	0xd2
static DEFINE_SPINLOCK(aun_queue_lock);
static struct socket *udpsock;
#define AUN_PORT	0x8000
struct aunhdr
;
static unsigned long aun_seq;
static struct sk_buff_head aun_queue;
static struct timer_list ab_cleanup_timer;
struct ec_cb
;
static void econet_remove_socket(struct hlist_head *list, struct sock *sk)
static void econet_insert_socket(struct hlist_head *list, struct sock *sk)
static int econet_recvmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t len, int flags)
static int econet_bind(struct socket *sock, struct sockaddr *uaddr, int addr_len)
#if defined(CONFIG_ECONET_AUNUDP) || defined(CONFIG_ECONET_NATIVE)
static void tx_result(struct sock *sk, unsigned long cookie, int result)
static void ec_tx_done(struct sk_buff *skb, int result)
static int econet_sendmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t len)
static int econet_getname(struct socket *sock, struct sockaddr *uaddr,
int *uaddr_len, int peer)
static void econet_destroy_timer(unsigned long data)
static int econet_release(struct socket *sock)
static struct proto econet_proto = ;
static int econet_create(struct net *net, struct socket *sock, int protocol,
int kern)
static int ec_dev_ioctl(struct socket *sock, unsigned int cmd, void __user *arg)
static int econet_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
static const struct net_proto_family econet_family_ops = ;
static const struct proto_ops econet_ops = ;
#if defined(CONFIG_ECONET_AUNUDP) || defined(CONFIG_ECONET_NATIVE)
static struct sock *ec_listening_socket(unsigned char port, unsigned char
station, unsigned char net)
static int ec_queue_packet(struct sock *sk, struct sk_buff *skb,
unsigned char stn, unsigned char net,
unsigned char cb, unsigned char port)
static void aun_send_response(__u32 addr, unsigned long seq, int code, int cb)
static void aun_incoming(struct sk_buff *skb, struct aunhdr *ah, size_t len)
static void aun_tx_ack(unsigned long seq, int result)
static void aun_data_available(struct sock *sk, int slen)
static void ab_cleanup(unsigned long h)
static int __init aun_udp_initialise(void)
static int econet_rcv(struct sk_buff *skb, struct net_device *dev, struct packet_type *pt, struct net_device *orig_dev)
static struct packet_type econet_packet_type __read_mostly = ;
static void econet_hw_initialise(void)
static int econet_notifier(struct notifier_block *this, unsigned long msg, void *data)
static struct notifier_block econet_netdev_notifier = ;
static void __exit econet_proto_exit(void)
static int __init econet_proto_init(void)
module_init(econet_proto_init);
module_exit(econet_proto_exit);
MODULE_LICENSE("GPL");
MODULE_ALIAS_NETPROTO(PF_ECONET);
