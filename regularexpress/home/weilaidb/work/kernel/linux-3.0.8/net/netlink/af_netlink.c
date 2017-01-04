#define NLGRPSZ(x)	(ALIGN(x, sizeof(unsigned long) * 8) / 8)
#define NLGRPLONGS(x)	(NLGRPSZ(x)/sizeof(unsigned long))
struct netlink_sock ;
struct listeners ;
#define NETLINK_KERNEL_SOCKET	0x1
#define NETLINK_RECV_PKTINFO	0x2
#define NETLINK_BROADCAST_SEND_ERROR	0x4
#define NETLINK_RECV_NO_ENOBUFS	0x8
static inline struct netlink_sock *nlk_sk(struct sock *sk)
static inline int netlink_is_kernel(struct sock *sk)
struct nl_pid_hash ;
struct netlink_table ;
static struct netlink_table *nl_table;
static DECLARE_WAIT_QUEUE_HEAD(nl_table_wait);
static int netlink_dump(struct sock *sk);
static void netlink_destroy_callback(struct netlink_callback *cb);
static DEFINE_RWLOCK(nl_table_lock);
static atomic_t nl_table_users = ATOMIC_INIT(0);
static ATOMIC_NOTIFIER_HEAD(netlink_chain);
static u32 netlink_group_mask(u32 group)
static struct hlist_head *nl_pid_hashfn(struct nl_pid_hash *hash, u32 pid)
static void netlink_sock_destruct(struct sock *sk)
void netlink_table_grab(void)
__acquires(nl_table_lock)
void netlink_table_ungrab(void)
__releases(nl_table_lock)
static inline void
netlink_lock_table(void)
static inline void
netlink_unlock_table(void)
static inline struct sock *netlink_lookup(struct net *net, int protocol,
u32 pid)
static inline struct hlist_head *nl_pid_hash_zalloc(size_t size)
static inline void nl_pid_hash_free(struct hlist_head *table, size_t size)
static int nl_pid_hash_rehash(struct nl_pid_hash *hash, int grow)
static inline int nl_pid_hash_dilute(struct nl_pid_hash *hash, int len)
static const struct proto_ops netlink_ops;
static void
netlink_update_listeners(struct sock *sk)
static int netlink_insert(struct sock *sk, struct net *net, u32 pid)
static void netlink_remove(struct sock *sk)
static struct proto netlink_proto = ;
static int __netlink_create(struct net *net, struct socket *sock,
struct mutex *cb_mutex, int protocol)
static int netlink_create(struct net *net, struct socket *sock, int protocol,
int kern)
static int netlink_release(struct socket *sock)
static int netlink_autobind(struct socket *sock)
static inline int netlink_capable(struct socket *sock, unsigned int flag)
static void
netlink_update_subscriptions(struct sock *sk, unsigned int subscriptions)
static int netlink_realloc_groups(struct sock *sk)
static int netlink_bind(struct socket *sock, struct sockaddr *addr,
int addr_len)
static int netlink_connect(struct socket *sock, struct sockaddr *addr,
int alen, int flags)
static int netlink_getname(struct socket *sock, struct sockaddr *addr,
int *addr_len, int peer)
static void netlink_overrun(struct sock *sk)
static struct sock *netlink_getsockbypid(struct sock *ssk, u32 pid)
struct sock *netlink_getsockbyfilp(struct file *filp)
int netlink_attachskb(struct sock *sk, struct sk_buff *skb,
long *timeo, struct sock *ssk)
int netlink_sendskb(struct sock *sk, struct sk_buff *skb)
void netlink_detachskb(struct sock *sk, struct sk_buff *skb)
static inline struct sk_buff *netlink_trim(struct sk_buff *skb,
gfp_t allocation)
static inline void netlink_rcv_wake(struct sock *sk)
static inline int netlink_unicast_kernel(struct sock *sk, struct sk_buff *skb)
int netlink_unicast(struct sock *ssk, struct sk_buff *skb,
u32 pid, int nonblock)
EXPORT_SYMBOL(netlink_unicast);
int netlink_has_listeners(struct sock *sk, unsigned int group)
EXPORT_SYMBOL_GPL(netlink_has_listeners);
static inline int netlink_broadcast_deliver(struct sock *sk,
struct sk_buff *skb)
struct netlink_broadcast_data ;
static inline int do_one_broadcast(struct sock *sk,
struct netlink_broadcast_data *p)
int netlink_broadcast_filtered(struct sock *ssk, struct sk_buff *skb, u32 pid,
u32 group, gfp_t allocation,
int (*filter)(struct sock *dsk, struct sk_buff *skb, void *data),
void *filter_data)
EXPORT_SYMBOL(netlink_broadcast_filtered);
int netlink_broadcast(struct sock *ssk, struct sk_buff *skb, u32 pid,
u32 group, gfp_t allocation)
EXPORT_SYMBOL(netlink_broadcast);
struct netlink_set_err_data ;
static inline int do_one_set_err(struct sock *sk,
struct netlink_set_err_data *p)
int netlink_set_err(struct sock *ssk, u32 pid, u32 group, int code)
EXPORT_SYMBOL(netlink_set_err);
static void netlink_update_socket_mc(struct netlink_sock *nlk,
unsigned int group,
int is_new)
static int netlink_setsockopt(struct socket *sock, int level, int optname,
char __user *optval, unsigned int optlen)
static int netlink_getsockopt(struct socket *sock, int level, int optname,
char __user *optval, int __user *optlen)
static void netlink_cmsg_recv_pktinfo(struct msghdr *msg, struct sk_buff *skb)
static int netlink_sendmsg(struct kiocb *kiocb, struct socket *sock,
struct msghdr *msg, size_t len)
static int netlink_recvmsg(struct kiocb *kiocb, struct socket *sock,
struct msghdr *msg, size_t len,
int flags)
static void netlink_data_ready(struct sock *sk, int len)
struct sock *
netlink_kernel_create(struct net *net, int unit, unsigned int groups,
void (*input)(struct sk_buff *skb),
struct mutex *cb_mutex, struct module *module)
EXPORT_SYMBOL(netlink_kernel_create);
void
netlink_kernel_release(struct sock *sk)
EXPORT_SYMBOL(netlink_kernel_release);
int __netlink_change_ngroups(struct sock *sk, unsigned int groups)
int netlink_change_ngroups(struct sock *sk, unsigned int groups)
void __netlink_clear_multicast_users(struct sock *ksk, unsigned int group)
void netlink_clear_multicast_users(struct sock *ksk, unsigned int group)
void netlink_set_nonroot(int protocol, unsigned int flags)
EXPORT_SYMBOL(netlink_set_nonroot);
static void netlink_destroy_callback(struct netlink_callback *cb)
static int netlink_dump(struct sock *sk)
int netlink_dump_start(struct sock *ssk, struct sk_buff *skb,
const struct nlmsghdr *nlh,
int (*dump)(struct sk_buff *skb,
struct netlink_callback *),
int (*done)(struct netlink_callback *))
EXPORT_SYMBOL(netlink_dump_start);
void netlink_ack(struct sk_buff *in_skb, struct nlmsghdr *nlh, int err)
EXPORT_SYMBOL(netlink_ack);
int netlink_rcv_skb(struct sk_buff *skb, int (*cb)(struct sk_buff *,
struct nlmsghdr *))
EXPORT_SYMBOL(netlink_rcv_skb);
int nlmsg_notify(struct sock *sk, struct sk_buff *skb, u32 pid,
unsigned int group, int report, gfp_t flags)
EXPORT_SYMBOL(nlmsg_notify);
struct nl_seq_iter ;
static struct sock *netlink_seq_socket_idx(struct seq_file *seq, loff_t pos)
static void *netlink_seq_start(struct seq_file *seq, loff_t *pos)
__acquires(nl_table_lock)
static void *netlink_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void netlink_seq_stop(struct seq_file *seq, void *v)
__releases(nl_table_lock)
static int netlink_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations netlink_seq_ops = ;
static int netlink_seq_open(struct inode *inode, struct file *file)
static const struct file_operations netlink_seq_fops = ;
int netlink_register_notifier(struct notifier_block *nb)
EXPORT_SYMBOL(netlink_register_notifier);
int netlink_unregister_notifier(struct notifier_block *nb)
EXPORT_SYMBOL(netlink_unregister_notifier);
static const struct proto_ops netlink_ops = ;
static const struct net_proto_family netlink_family_ops = ;
static int __net_init netlink_net_init(struct net *net)
static void __net_exit netlink_net_exit(struct net *net)
static void __init netlink_add_usersock_entry(void)
static struct pernet_operations __net_initdata netlink_net_ops = ;
static int __init netlink_proto_init(void)
core_initcall(netlink_proto_init);
