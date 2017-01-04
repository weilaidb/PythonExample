#define PPPOL2TP_DRV_VERSION	"V2.0"
#define PPPOL2TP_HEADER_OVERHEAD	40
#define PRINTK(_mask, _type, _lvl, _fmt, args...)			\
do  while (0)
#define PPPOL2TP_L2TP_HDR_SIZE_SEQ		10
#define PPPOL2TP_L2TP_HDR_SIZE_NOSEQ		6
struct pppol2tp_session ;
static int pppol2tp_xmit(struct ppp_channel *chan, struct sk_buff *skb);
static const struct ppp_channel_ops pppol2tp_chan_ops = ;
static const struct proto_ops pppol2tp_ops;
static inline struct l2tp_session *pppol2tp_sock_to_session(struct sock *sk)
static int pppol2tp_recv_payload_hook(struct sk_buff *skb)
static int pppol2tp_recvmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t len,
int flags)
static void pppol2tp_recv(struct l2tp_session *session, struct sk_buff *skb, int data_len)
static void pppol2tp_session_sock_hold(struct l2tp_session *session)
static void pppol2tp_session_sock_put(struct l2tp_session *session)
static int pppol2tp_sendmsg(struct kiocb *iocb, struct socket *sock, struct msghdr *m,
size_t total_len)
static int pppol2tp_xmit(struct ppp_channel *chan, struct sk_buff *skb)
static void pppol2tp_session_close(struct l2tp_session *session)
static void pppol2tp_session_destruct(struct sock *sk)
static int pppol2tp_release(struct socket *sock)
static struct proto pppol2tp_sk_proto = ;
static int pppol2tp_backlog_recv(struct sock *sk, struct sk_buff *skb)
static int pppol2tp_create(struct net *net, struct socket *sock)
#if defined(CONFIG_L2TP_DEBUGFS) || defined(CONFIG_L2TP_DEBUGFS_MODULE)
static void pppol2tp_show(struct seq_file *m, void *arg)
static int pppol2tp_connect(struct socket *sock, struct sockaddr *uservaddr,
int sockaddr_len, int flags)
static int pppol2tp_session_create(struct net *net, u32 tunnel_id, u32 session_id, u32 peer_session_id, struct l2tp_session_cfg *cfg)
static int pppol2tp_session_delete(struct l2tp_session *session)
static int pppol2tp_getname(struct socket *sock, struct sockaddr *uaddr,
int *usockaddr_len, int peer)
static void pppol2tp_copy_stats(struct pppol2tp_ioc_stats *dest,
struct l2tp_stats *stats)
static int pppol2tp_session_ioctl(struct l2tp_session *session,
unsigned int cmd, unsigned long arg)
static int pppol2tp_tunnel_ioctl(struct l2tp_tunnel *tunnel,
unsigned int cmd, unsigned long arg)
static int pppol2tp_ioctl(struct socket *sock, unsigned int cmd,
unsigned long arg)
static int pppol2tp_tunnel_setsockopt(struct sock *sk,
struct l2tp_tunnel *tunnel,
int optname, int val)
static int pppol2tp_session_setsockopt(struct sock *sk,
struct l2tp_session *session,
int optname, int val)
static int pppol2tp_setsockopt(struct socket *sock, int level, int optname,
char __user *optval, unsigned int optlen)
static int pppol2tp_tunnel_getsockopt(struct sock *sk,
struct l2tp_tunnel *tunnel,
int optname, int *val)
static int pppol2tp_session_getsockopt(struct sock *sk,
struct l2tp_session *session,
int optname, int *val)
static int pppol2tp_getsockopt(struct socket *sock, int level,
int optname, char __user *optval, int __user *optlen)
static unsigned int pppol2tp_net_id;
struct pppol2tp_seq_data ;
static void pppol2tp_next_tunnel(struct net *net, struct pppol2tp_seq_data *pd)
static void pppol2tp_next_session(struct net *net, struct pppol2tp_seq_data *pd)
static void *pppol2tp_seq_start(struct seq_file *m, loff_t *offs)
static void *pppol2tp_seq_next(struct seq_file *m, void *v, loff_t *pos)
static void pppol2tp_seq_stop(struct seq_file *p, void *v)
static void pppol2tp_seq_tunnel_show(struct seq_file *m, void *v)
static void pppol2tp_seq_session_show(struct seq_file *m, void *v)
static int pppol2tp_seq_show(struct seq_file *m, void *v)
static const struct seq_operations pppol2tp_seq_ops = ;
static int pppol2tp_proc_open(struct inode *inode, struct file *file)
static const struct file_operations pppol2tp_proc_fops = ;
static __net_init int pppol2tp_init_net(struct net *net)
static __net_exit void pppol2tp_exit_net(struct net *net)
static struct pernet_operations pppol2tp_net_ops = ;
static const struct proto_ops pppol2tp_ops = ;
static const struct pppox_proto pppol2tp_proto = ;
static const struct l2tp_nl_cmd_ops pppol2tp_nl_cmd_ops = ;
static int __init pppol2tp_init(void)
static void __exit pppol2tp_exit(void)
module_init(pppol2tp_init);
module_exit(pppol2tp_exit);
MODULE_AUTHOR("James Chapman <jchapman@katalix.com>");
MODULE_DESCRIPTION("PPP over L2TP over UDP");
MODULE_LICENSE("GPL");
MODULE_VERSION(PPPOL2TP_DRV_VERSION);
