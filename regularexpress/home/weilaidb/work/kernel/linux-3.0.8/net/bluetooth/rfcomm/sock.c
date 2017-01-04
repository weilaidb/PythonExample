static const struct proto_ops rfcomm_sock_ops;
static struct bt_sock_list rfcomm_sk_list = ;
static void rfcomm_sock_close(struct sock *sk);
static void rfcomm_sock_kill(struct sock *sk);
static void rfcomm_sk_data_ready(struct rfcomm_dlc *d, struct sk_buff *skb)
static void rfcomm_sk_state_change(struct rfcomm_dlc *d, int err)
static struct sock *__rfcomm_get_sock_by_addr(u8 channel, bdaddr_t *src)
static struct sock *rfcomm_get_sock_by_channel(int state, u8 channel, bdaddr_t *src)
static void rfcomm_sock_destruct(struct sock *sk)
static void rfcomm_sock_cleanup_listen(struct sock *parent)
static void rfcomm_sock_kill(struct sock *sk)
static void __rfcomm_sock_close(struct sock *sk)
static void rfcomm_sock_close(struct sock *sk)
static void rfcomm_sock_init(struct sock *sk, struct sock *parent)
static struct proto rfcomm_proto = ;
static struct sock *rfcomm_sock_alloc(struct net *net, struct socket *sock, int proto, gfp_t prio)
static int rfcomm_sock_create(struct net *net, struct socket *sock,
int protocol, int kern)
static int rfcomm_sock_bind(struct socket *sock, struct sockaddr *addr, int addr_len)
static int rfcomm_sock_connect(struct socket *sock, struct sockaddr *addr, int alen, int flags)
static int rfcomm_sock_listen(struct socket *sock, int backlog)
static int rfcomm_sock_accept(struct socket *sock, struct socket *newsock, int flags)
static int rfcomm_sock_getname(struct socket *sock, struct sockaddr *addr, int *len, int peer)
static int rfcomm_sock_sendmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t len)
static int rfcomm_sock_recvmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t size, int flags)
static int rfcomm_sock_setsockopt_old(struct socket *sock, int optname, char __user *optval, unsigned int optlen)
static int rfcomm_sock_setsockopt(struct socket *sock, int level, int optname, char __user *optval, unsigned int optlen)
static int rfcomm_sock_getsockopt_old(struct socket *sock, int optname, char __user *optval, int __user *optlen)
static int rfcomm_sock_getsockopt(struct socket *sock, int level, int optname, char __user *optval, int __user *optlen)
static int rfcomm_sock_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
static int rfcomm_sock_shutdown(struct socket *sock, int how)
static int rfcomm_sock_release(struct socket *sock)
int rfcomm_connect_ind(struct rfcomm_session *s, u8 channel, struct rfcomm_dlc **d)
static int rfcomm_sock_debugfs_show(struct seq_file *f, void *p)
static int rfcomm_sock_debugfs_open(struct inode *inode, struct file *file)
static const struct file_operations rfcomm_sock_debugfs_fops = ;
static struct dentry *rfcomm_sock_debugfs;
static const struct proto_ops rfcomm_sock_ops = ;
static const struct net_proto_family rfcomm_sock_family_ops = ;
int __init rfcomm_init_sockets(void)
void __exit rfcomm_cleanup_sockets(void)
