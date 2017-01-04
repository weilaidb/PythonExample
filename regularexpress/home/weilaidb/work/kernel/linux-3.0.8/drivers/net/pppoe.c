#define PPPOE_HASH_BITS 4
#define PPPOE_HASH_SIZE (1 << PPPOE_HASH_BITS)
#define PPPOE_HASH_MASK	(PPPOE_HASH_SIZE - 1)
static int __pppoe_xmit(struct sock *sk, struct sk_buff *skb);
static const struct proto_ops pppoe_ops;
static const struct ppp_channel_ops pppoe_chan_ops;
static int pppoe_net_id __read_mostly;
struct pppoe_net ;
static inline bool stage_session(__be16 sid)
static inline struct pppoe_net *pppoe_pernet(struct net *net)
static inline int cmp_2_addr(struct pppoe_addr *a, struct pppoe_addr *b)
static inline int cmp_addr(struct pppoe_addr *a, __be16 sid, char *addr)
#if 8 % PPPOE_HASH_BITS
#error 8 must be a multiple of PPPOE_HASH_BITS
static int hash_item(__be16 sid, unsigned char *addr)
static struct pppox_sock *__get_item(struct pppoe_net *pn, __be16 sid,
unsigned char *addr, int ifindex)
static int __set_item(struct pppoe_net *pn, struct pppox_sock *po)
static struct pppox_sock *__delete_item(struct pppoe_net *pn, __be16 sid,
char *addr, int ifindex)
static inline struct pppox_sock *get_item(struct pppoe_net *pn, __be16 sid,
unsigned char *addr, int ifindex)
static inline struct pppox_sock *get_item_by_addr(struct net *net,
struct sockaddr_pppox *sp)
static inline struct pppox_sock *delete_item(struct pppoe_net *pn, __be16 sid,
char *addr, int ifindex)
static void pppoe_flush_dev(struct net_device *dev)
static int pppoe_device_event(struct notifier_block *this,
unsigned long event, void *ptr)
static struct notifier_block pppoe_notifier = ;
static int pppoe_rcv_core(struct sock *sk, struct sk_buff *skb)
static int pppoe_rcv(struct sk_buff *skb, struct net_device *dev,
struct packet_type *pt, struct net_device *orig_dev)
static int pppoe_disc_rcv(struct sk_buff *skb, struct net_device *dev,
struct packet_type *pt, struct net_device *orig_dev)
static struct packet_type pppoes_ptype __read_mostly = ;
static struct packet_type pppoed_ptype __read_mostly = ;
static struct proto pppoe_sk_proto __read_mostly = ;
static int pppoe_create(struct net *net, struct socket *sock)
static int pppoe_release(struct socket *sock)
static int pppoe_connect(struct socket *sock, struct sockaddr *uservaddr,
int sockaddr_len, int flags)
static int pppoe_getname(struct socket *sock, struct sockaddr *uaddr,
int *usockaddr_len, int peer)
static int pppoe_ioctl(struct socket *sock, unsigned int cmd,
unsigned long arg)
static int pppoe_sendmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *m, size_t total_len)
static int __pppoe_xmit(struct sock *sk, struct sk_buff *skb)
static int pppoe_xmit(struct ppp_channel *chan, struct sk_buff *skb)
static const struct ppp_channel_ops pppoe_chan_ops = ;
static int pppoe_recvmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *m, size_t total_len, int flags)
static int pppoe_seq_show(struct seq_file *seq, void *v)
static inline struct pppox_sock *pppoe_get_idx(struct pppoe_net *pn, loff_t pos)
static void *pppoe_seq_start(struct seq_file *seq, loff_t *pos)
__acquires(pn->hash_lock)
static void *pppoe_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void pppoe_seq_stop(struct seq_file *seq, void *v)
__releases(pn->hash_lock)
static const struct seq_operations pppoe_seq_ops = ;
static int pppoe_seq_open(struct inode *inode, struct file *file)
static const struct file_operations pppoe_seq_fops = ;
static const struct proto_ops pppoe_ops = ;
static const struct pppox_proto pppoe_proto = ;
static __net_init int pppoe_init_net(struct net *net)
static __net_exit void pppoe_exit_net(struct net *net)
static struct pernet_operations pppoe_net_ops = ;
static int __init pppoe_init(void)
static void __exit pppoe_exit(void)
module_init(pppoe_init);
module_exit(pppoe_exit);
MODULE_AUTHOR("Michal Ostrowski <mostrows@speakeasy.net>");
MODULE_DESCRIPTION("PPP over Ethernet driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_NETPROTO(PF_PPPOX);
