HLIST_HEAD(ax25_list);
DEFINE_SPINLOCK(ax25_list_lock);
static const struct proto_ops ax25_proto_ops;
static void ax25_free_sock(struct sock *sk)
static void ax25_cb_del(ax25_cb *ax25)
static void ax25_kill_by_device(struct net_device *dev)
static int ax25_device_event(struct notifier_block *this, unsigned long event,
void *ptr)
void ax25_cb_add(ax25_cb *ax25)
struct sock *ax25_find_listener(ax25_address *addr, int digi,
struct net_device *dev, int type)
struct sock *ax25_get_socket(ax25_address *my_addr, ax25_address *dest_addr,
int type)
ax25_cb *ax25_find_cb(ax25_address *src_addr, ax25_address *dest_addr,
ax25_digi *digi, struct net_device *dev)
EXPORT_SYMBOL(ax25_find_cb);
void ax25_send_to_raw(ax25_address *addr, struct sk_buff *skb, int proto)
void ax25_destroy_socket(ax25_cb *);
static void ax25_destroy_timer(unsigned long data)
void ax25_destroy_socket(ax25_cb *ax25)
static int ax25_ctl_ioctl(const unsigned int cmd, void __user *arg)
static void ax25_fillin_cb_from_dev(ax25_cb *ax25, ax25_dev *ax25_dev)
void ax25_fillin_cb(ax25_cb *ax25, ax25_dev *ax25_dev)
ax25_cb *ax25_create_cb(void)
static int ax25_setsockopt(struct socket *sock, int level, int optname,
char __user *optval, unsigned int optlen)
static int ax25_getsockopt(struct socket *sock, int level, int optname,
char __user *optval, int __user *optlen)
static int ax25_listen(struct socket *sock, int backlog)
static struct proto ax25_proto = ;
static int ax25_create(struct net *net, struct socket *sock, int protocol,
int kern)
struct sock *ax25_make_new(struct sock *osk, struct ax25_dev *ax25_dev)
static int ax25_release(struct socket *sock)
static int ax25_bind(struct socket *sock, struct sockaddr *uaddr, int addr_len)
static int __must_check ax25_connect(struct socket *sock,
struct sockaddr *uaddr, int addr_len, int flags)
static int ax25_accept(struct socket *sock, struct socket *newsock, int flags)
static int ax25_getname(struct socket *sock, struct sockaddr *uaddr,
int *uaddr_len, int peer)
static int ax25_sendmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t len)
static int ax25_recvmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t size, int flags)
static int ax25_shutdown(struct socket *sk, int how)
static int ax25_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
static void *ax25_info_start(struct seq_file *seq, loff_t *pos)
__acquires(ax25_list_lock)
static void *ax25_info_next(struct seq_file *seq, void *v, loff_t *pos)
static void ax25_info_stop(struct seq_file *seq, void *v)
__releases(ax25_list_lock)
static int ax25_info_show(struct seq_file *seq, void *v)
static const struct seq_operations ax25_info_seqops = ;
static int ax25_info_open(struct inode *inode, struct file *file)
static const struct file_operations ax25_info_fops = ;
static const struct net_proto_family ax25_family_ops = ;
static const struct proto_ops ax25_proto_ops = ;
static struct packet_type ax25_packet_type __read_mostly = ;
static struct notifier_block ax25_dev_notifier = ;
static int __init ax25_init(void)
module_init(ax25_init);
MODULE_AUTHOR("Jonathan Naylor G4KLX <g4klx@g4klx.demon.co.uk>");
MODULE_DESCRIPTION("The amateur radio AX.25 link layer protocol");
MODULE_LICENSE("GPL");
MODULE_ALIAS_NETPROTO(PF_AX25);
static void __exit ax25_exit(void)
module_exit(ax25_exit);
