static int nr_ndevs = 4;
int sysctl_netrom_default_path_quality            = NR_DEFAULT_QUAL;
int sysctl_netrom_obsolescence_count_initialiser  = NR_DEFAULT_OBS;
int sysctl_netrom_network_ttl_initialiser         = NR_DEFAULT_TTL;
int sysctl_netrom_transport_timeout               = NR_DEFAULT_T1;
int sysctl_netrom_transport_maximum_tries         = NR_DEFAULT_N2;
int sysctl_netrom_transport_acknowledge_delay     = NR_DEFAULT_T2;
int sysctl_netrom_transport_busy_delay            = NR_DEFAULT_T4;
int sysctl_netrom_transport_requested_window_size = NR_DEFAULT_WINDOW;
int sysctl_netrom_transport_no_activity_timeout   = NR_DEFAULT_IDLE;
int sysctl_netrom_routing_control                 = NR_DEFAULT_ROUTING;
int sysctl_netrom_link_fails_count                = NR_DEFAULT_FAILS;
int sysctl_netrom_reset_circuit                   = NR_DEFAULT_RESET;
static unsigned short circuit = 0x101;
static HLIST_HEAD(nr_list);
static DEFINE_SPINLOCK(nr_list_lock);
static const struct proto_ops nr_proto_ops;
static struct lock_class_key nr_netdev_xmit_lock_key;
static struct lock_class_key nr_netdev_addr_lock_key;
static void nr_set_lockdep_one(struct net_device *dev,
struct netdev_queue *txq,
void *_unused)
static void nr_set_lockdep_key(struct net_device *dev)
static void nr_remove_socket(struct sock *sk)
static void nr_kill_by_device(struct net_device *dev)
static int nr_device_event(struct notifier_block *this, unsigned long event, void *ptr)
static void nr_insert_socket(struct sock *sk)
static struct sock *nr_find_listener(ax25_address *addr)
static struct sock *nr_find_socket(unsigned char index, unsigned char id)
static struct sock *nr_find_peer(unsigned char index, unsigned char id,
ax25_address *dest)
static unsigned short nr_find_next_circuit(void)
void nr_destroy_socket(struct sock *);
static void nr_destroy_timer(unsigned long data)
void nr_destroy_socket(struct sock *sk)
static int nr_setsockopt(struct socket *sock, int level, int optname,
char __user *optval, unsigned int optlen)
static int nr_getsockopt(struct socket *sock, int level, int optname,
char __user *optval, int __user *optlen)
static int nr_listen(struct socket *sock, int backlog)
static struct proto nr_proto = ;
static int nr_create(struct net *net, struct socket *sock, int protocol,
int kern)
static struct sock *nr_make_new(struct sock *osk)
static int nr_release(struct socket *sock)
static int nr_bind(struct socket *sock, struct sockaddr *uaddr, int addr_len)
static int nr_connect(struct socket *sock, struct sockaddr *uaddr,
int addr_len, int flags)
static int nr_accept(struct socket *sock, struct socket *newsock, int flags)
static int nr_getname(struct socket *sock, struct sockaddr *uaddr,
int *uaddr_len, int peer)
int nr_rx_frame(struct sk_buff *skb, struct net_device *dev)
static int nr_sendmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t len)
static int nr_recvmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t size, int flags)
static int nr_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
static void *nr_info_start(struct seq_file *seq, loff_t *pos)
static void *nr_info_next(struct seq_file *seq, void *v, loff_t *pos)
static void nr_info_stop(struct seq_file *seq, void *v)
static int nr_info_show(struct seq_file *seq, void *v)
static const struct seq_operations nr_info_seqops = ;
static int nr_info_open(struct inode *inode, struct file *file)
static const struct file_operations nr_info_fops = ;
static const struct net_proto_family nr_family_ops = ;
static const struct proto_ops nr_proto_ops = ;
static struct notifier_block nr_dev_notifier = ;
static struct net_device **dev_nr;
static struct ax25_protocol nr_pid = ;
static struct ax25_linkfail nr_linkfail_notifier = ;
static int __init nr_proto_init(void)
module_init(nr_proto_init);
module_param(nr_ndevs, int, 0);
MODULE_PARM_DESC(nr_ndevs, "number of NET/ROM devices");
MODULE_AUTHOR("Jonathan Naylor G4KLX <g4klx@g4klx.demon.co.uk>");
MODULE_DESCRIPTION("The amateur radio NET/ROM network and transport layer protocol");
MODULE_LICENSE("GPL");
MODULE_ALIAS_NETPROTO(PF_NETROM);
static void __exit nr_exit(void)
module_exit(nr_exit);
