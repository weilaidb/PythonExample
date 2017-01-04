struct l2tp_ip_sock ;
static DEFINE_RWLOCK(l2tp_ip_lock);
static struct hlist_head l2tp_ip_table;
static struct hlist_head l2tp_ip_bind_table;
static inline struct l2tp_ip_sock *l2tp_ip_sk(const struct sock *sk)
static struct sock *__l2tp_ip_bind_lookup(struct net *net, __be32 laddr, int dif, u32 tunnel_id)
static inline struct sock *l2tp_ip_bind_lookup(struct net *net, __be32 laddr, int dif, u32 tunnel_id)
static int l2tp_ip_recv(struct sk_buff *skb)
static int l2tp_ip_open(struct sock *sk)
static void l2tp_ip_close(struct sock *sk, long timeout)
static void l2tp_ip_destroy_sock(struct sock *sk)
static int l2tp_ip_bind(struct sock *sk, struct sockaddr *uaddr, int addr_len)
static int l2tp_ip_connect(struct sock *sk, struct sockaddr *uaddr, int addr_len)
static int l2tp_ip_getname(struct socket *sock, struct sockaddr *uaddr,
int *uaddr_len, int peer)
static int l2tp_ip_backlog_recv(struct sock *sk, struct sk_buff *skb)
static int l2tp_ip_sendmsg(struct kiocb *iocb, struct sock *sk, struct msghdr *msg, size_t len)
static int l2tp_ip_recvmsg(struct kiocb *iocb, struct sock *sk, struct msghdr *msg,
size_t len, int noblock, int flags, int *addr_len)
static struct proto l2tp_ip_prot = ;
static const struct proto_ops l2tp_ip_ops = ;
static struct inet_protosw l2tp_ip_protosw = ;
static struct net_protocol l2tp_ip_protocol __read_mostly = ;
static int __init l2tp_ip_init(void)
static void __exit l2tp_ip_exit(void)
module_init(l2tp_ip_init);
module_exit(l2tp_ip_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("James Chapman <jchapman@katalix.com>");
MODULE_DESCRIPTION("L2TP over IP");
MODULE_VERSION("1.0");
MODULE_ALIAS_NET_PF_PROTO_TYPE(PF_INET, 2, IPPROTO_L2TP);
