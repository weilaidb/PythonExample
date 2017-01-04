static int disable_esco;
static const struct proto_ops sco_sock_ops;
static struct bt_sock_list sco_sk_list = ;
static void __sco_chan_add(struct sco_conn *conn, struct sock *sk, struct sock *parent);
static void sco_chan_del(struct sock *sk, int err);
static int  sco_conn_del(struct hci_conn *conn, int err);
static void sco_sock_close(struct sock *sk);
static void sco_sock_kill(struct sock *sk);
static void sco_sock_timeout(unsigned long arg)
static void sco_sock_set_timer(struct sock *sk, long timeout)
static void sco_sock_clear_timer(struct sock *sk)
static struct sco_conn *sco_conn_add(struct hci_conn *hcon, __u8 status)
static inline struct sock *sco_chan_get(struct sco_conn *conn)
static int sco_conn_del(struct hci_conn *hcon, int err)
static inline int sco_chan_add(struct sco_conn *conn, struct sock *sk, struct sock *parent)
static int sco_connect(struct sock *sk)
static inline int sco_send_frame(struct sock *sk, struct msghdr *msg, int len)
static inline void sco_recv_frame(struct sco_conn *conn, struct sk_buff *skb)
static struct sock *__sco_get_sock_by_addr(bdaddr_t *ba)
static struct sock *sco_get_sock_listen(bdaddr_t *src)
static void sco_sock_destruct(struct sock *sk)
static void sco_sock_cleanup_listen(struct sock *parent)
static void sco_sock_kill(struct sock *sk)
static void __sco_sock_close(struct sock *sk)
static void sco_sock_close(struct sock *sk)
static void sco_sock_init(struct sock *sk, struct sock *parent)
static struct proto sco_proto = ;
static struct sock *sco_sock_alloc(struct net *net, struct socket *sock, int proto, gfp_t prio)
static int sco_sock_create(struct net *net, struct socket *sock, int protocol,
int kern)
static int sco_sock_bind(struct socket *sock, struct sockaddr *addr, int addr_len)
static int sco_sock_connect(struct socket *sock, struct sockaddr *addr, int alen, int flags)
static int sco_sock_listen(struct socket *sock, int backlog)
static int sco_sock_accept(struct socket *sock, struct socket *newsock, int flags)
static int sco_sock_getname(struct socket *sock, struct sockaddr *addr, int *len, int peer)
static int sco_sock_sendmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t len)
static int sco_sock_setsockopt(struct socket *sock, int level, int optname, char __user *optval, unsigned int optlen)
static int sco_sock_getsockopt_old(struct socket *sock, int optname, char __user *optval, int __user *optlen)
static int sco_sock_getsockopt(struct socket *sock, int level, int optname, char __user *optval, int __user *optlen)
static int sco_sock_shutdown(struct socket *sock, int how)
static int sco_sock_release(struct socket *sock)
static void __sco_chan_add(struct sco_conn *conn, struct sock *sk, struct sock *parent)
static void sco_chan_del(struct sock *sk, int err)
static void sco_conn_ready(struct sco_conn *conn)
static int sco_connect_ind(struct hci_dev *hdev, bdaddr_t *bdaddr, __u8 type)
static int sco_connect_cfm(struct hci_conn *hcon, __u8 status)
static int sco_disconn_cfm(struct hci_conn *hcon, __u8 reason)
static int sco_recv_scodata(struct hci_conn *hcon, struct sk_buff *skb)
static int sco_debugfs_show(struct seq_file *f, void *p)
static int sco_debugfs_open(struct inode *inode, struct file *file)
static const struct file_operations sco_debugfs_fops = ;
static struct dentry *sco_debugfs;
static const struct proto_ops sco_sock_ops = ;
static const struct net_proto_family sco_sock_family_ops = ;
static struct hci_proto sco_hci_proto = ;
int __init sco_init(void)
void __exit sco_exit(void)
module_param(disable_esco, bool, 0644);
MODULE_PARM_DESC(disable_esco, "Disable eSCO connection creation");
