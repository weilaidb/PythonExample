static int pn_socket_release(struct socket *sock)
#define PN_HASHSIZE	16
#define PN_HASHMASK	(PN_HASHSIZE-1)
static struct   pnsocks;
void __init pn_sock_init(void)
static struct hlist_head *pn_hash_list(u16 obj)
struct sock *pn_find_sock_by_sa(struct net *net, const struct sockaddr_pn *spn)
void pn_deliver_sock_broadcast(struct net *net, struct sk_buff *skb)
void pn_sock_hash(struct sock *sk)
EXPORT_SYMBOL(pn_sock_hash);
void pn_sock_unhash(struct sock *sk)
EXPORT_SYMBOL(pn_sock_unhash);
static DEFINE_MUTEX(port_mutex);
static int pn_socket_bind(struct socket *sock, struct sockaddr *addr, int len)
static int pn_socket_autobind(struct socket *sock)
static int pn_socket_connect(struct socket *sock, struct sockaddr *addr,
int len, int flags)
static int pn_socket_accept(struct socket *sock, struct socket *newsock,
int flags)
static int pn_socket_getname(struct socket *sock, struct sockaddr *addr,
int *sockaddr_len, int peer)
static unsigned int pn_socket_poll(struct file *file, struct socket *sock,
poll_table *wait)
static int pn_socket_ioctl(struct socket *sock, unsigned int cmd,
unsigned long arg)
static int pn_socket_listen(struct socket *sock, int backlog)
static int pn_socket_sendmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *m, size_t total_len)
const struct proto_ops phonet_dgram_ops = ;
const struct proto_ops phonet_stream_ops = ;
EXPORT_SYMBOL(phonet_stream_ops);
int pn_sock_get_port(struct sock *sk, unsigned short sport)
EXPORT_SYMBOL(pn_sock_get_port);
static struct sock *pn_sock_get_idx(struct seq_file *seq, loff_t pos)
static struct sock *pn_sock_get_next(struct seq_file *seq, struct sock *sk)
static void *pn_sock_seq_start(struct seq_file *seq, loff_t *pos)
__acquires(rcu)
static void *pn_sock_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void pn_sock_seq_stop(struct seq_file *seq, void *v)
__releases(rcu)
static int pn_sock_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations pn_sock_seq_ops = ;
static int pn_sock_open(struct inode *inode, struct file *file)
const struct file_operations pn_sock_seq_fops = ;
static struct   pnres;
struct sock *pn_find_sock_by_res(struct net *net, u8 res)
static DEFINE_MUTEX(resource_mutex);
int pn_sock_bind_res(struct sock *sk, u8 res)
int pn_sock_unbind_res(struct sock *sk, u8 res)
void pn_sock_unbind_all_res(struct sock *sk)
static struct sock **pn_res_get_idx(struct seq_file *seq, loff_t pos)
static struct sock **pn_res_get_next(struct seq_file *seq, struct sock **sk)
static void *pn_res_seq_start(struct seq_file *seq, loff_t *pos)
__acquires(resource_mutex)
static void *pn_res_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void pn_res_seq_stop(struct seq_file *seq, void *v)
__releases(resource_mutex)
static int pn_res_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations pn_res_seq_ops = ;
static int pn_res_open(struct inode *inode, struct file *file)
const struct file_operations pn_res_seq_fops = ;
