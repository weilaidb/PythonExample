static int rose_ndevs = 10;
int sysctl_rose_restart_request_timeout = ROSE_DEFAULT_T0;
int sysctl_rose_call_request_timeout    = ROSE_DEFAULT_T1;
int sysctl_rose_reset_request_timeout   = ROSE_DEFAULT_T2;
int sysctl_rose_clear_request_timeout   = ROSE_DEFAULT_T3;
int sysctl_rose_no_activity_timeout     = ROSE_DEFAULT_IDLE;
int sysctl_rose_ack_hold_back_timeout   = ROSE_DEFAULT_HB;
int sysctl_rose_routing_control         = ROSE_DEFAULT_ROUTING;
int sysctl_rose_link_fail_timeout       = ROSE_DEFAULT_FAIL_TIMEOUT;
int sysctl_rose_maximum_vcs             = ROSE_DEFAULT_MAXVC;
int sysctl_rose_window_size             = ROSE_DEFAULT_WINDOW_SIZE;
static HLIST_HEAD(rose_list);
static DEFINE_SPINLOCK(rose_list_lock);
static const struct proto_ops rose_proto_ops;
ax25_address rose_callsign;
static struct lock_class_key rose_netdev_xmit_lock_key;
static struct lock_class_key rose_netdev_addr_lock_key;
static void rose_set_lockdep_one(struct net_device *dev,
struct netdev_queue *txq,
void *_unused)
static void rose_set_lockdep_key(struct net_device *dev)
char *rose2asc(char *buf, const rose_address *addr)
int rosecmp(rose_address *addr1, rose_address *addr2)
int rosecmpm(rose_address *addr1, rose_address *addr2, unsigned short mask)
static void rose_remove_socket(struct sock *sk)
void rose_kill_by_neigh(struct rose_neigh *neigh)
static void rose_kill_by_device(struct net_device *dev)
static int rose_device_event(struct notifier_block *this, unsigned long event,
void *ptr)
static void rose_insert_socket(struct sock *sk)
static struct sock *rose_find_listener(rose_address *addr, ax25_address *call)
struct sock *rose_find_socket(unsigned int lci, struct rose_neigh *neigh)
unsigned int rose_new_lci(struct rose_neigh *neigh)
void rose_destroy_socket(struct sock *);
static void rose_destroy_timer(unsigned long data)
void rose_destroy_socket(struct sock *sk)
static int rose_setsockopt(struct socket *sock, int level, int optname,
char __user *optval, unsigned int optlen)
static int rose_getsockopt(struct socket *sock, int level, int optname,
char __user *optval, int __user *optlen)
static int rose_listen(struct socket *sock, int backlog)
static struct proto rose_proto = ;
static int rose_create(struct net *net, struct socket *sock, int protocol,
int kern)
static struct sock *rose_make_new(struct sock *osk)
static int rose_release(struct socket *sock)
static int rose_bind(struct socket *sock, struct sockaddr *uaddr, int addr_len)
static int rose_connect(struct socket *sock, struct sockaddr *uaddr, int addr_len, int flags)
static int rose_accept(struct socket *sock, struct socket *newsock, int flags)
static int rose_getname(struct socket *sock, struct sockaddr *uaddr,
int *uaddr_len, int peer)
int rose_rx_call_request(struct sk_buff *skb, struct net_device *dev, struct rose_neigh *neigh, unsigned int lci)
static int rose_sendmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t len)
static int rose_recvmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t size, int flags)
static int rose_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
static void *rose_info_start(struct seq_file *seq, loff_t *pos)
__acquires(rose_list_lock)
static void *rose_info_next(struct seq_file *seq, void *v, loff_t *pos)
static void rose_info_stop(struct seq_file *seq, void *v)
__releases(rose_list_lock)
static int rose_info_show(struct seq_file *seq, void *v)
static const struct seq_operations rose_info_seqops = ;
static int rose_info_open(struct inode *inode, struct file *file)
static const struct file_operations rose_info_fops = ;
static const struct net_proto_family rose_family_ops = ;
static const struct proto_ops rose_proto_ops = ;
static struct notifier_block rose_dev_notifier = ;
static struct net_device **dev_rose;
static struct ax25_protocol rose_pid = ;
static struct ax25_linkfail rose_linkfail_notifier = ;
static int __init rose_proto_init(void)
module_init(rose_proto_init);
module_param(rose_ndevs, int, 0);
MODULE_PARM_DESC(rose_ndevs, "number of ROSE devices");
MODULE_AUTHOR("Jonathan Naylor G4KLX <g4klx@g4klx.demon.co.uk>");
MODULE_DESCRIPTION("The amateur radio ROSE network layer protocol");
MODULE_LICENSE("GPL");
MODULE_ALIAS_NETPROTO(PF_ROSE);
static void __exit rose_exit(void)
module_exit(rose_exit);
