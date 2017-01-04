char *rds_str_array(char **array, size_t elements, size_t index)
EXPORT_SYMBOL(rds_str_array);
static DEFINE_SPINLOCK(rds_sock_lock);
static unsigned long rds_sock_count;
static LIST_HEAD(rds_sock_list);
DECLARE_WAIT_QUEUE_HEAD(rds_poll_waitq);
static int rds_release(struct socket *sock)
void rds_wake_sk_sleep(struct rds_sock *rs)
static int rds_getname(struct socket *sock, struct sockaddr *uaddr,
int *uaddr_len, int peer)
static unsigned int rds_poll(struct file *file, struct socket *sock,
poll_table *wait)
static int rds_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
static int rds_cancel_sent_to(struct rds_sock *rs, char __user *optval,
int len)
static int rds_set_bool_option(unsigned char *optvar, char __user *optval,
int optlen)
static int rds_cong_monitor(struct rds_sock *rs, char __user *optval,
int optlen)
static int rds_setsockopt(struct socket *sock, int level, int optname,
char __user *optval, unsigned int optlen)
static int rds_getsockopt(struct socket *sock, int level, int optname,
char __user *optval, int __user *optlen)
static int rds_connect(struct socket *sock, struct sockaddr *uaddr,
int addr_len, int flags)
static struct proto rds_proto = ;
static const struct proto_ops rds_proto_ops = ;
static int __rds_create(struct socket *sock, struct sock *sk, int protocol)
static int rds_create(struct net *net, struct socket *sock, int protocol,
int kern)
void rds_sock_addref(struct rds_sock *rs)
void rds_sock_put(struct rds_sock *rs)
static const struct net_proto_family rds_family_ops = ;
static void rds_sock_inc_info(struct socket *sock, unsigned int len,
struct rds_info_iterator *iter,
struct rds_info_lengths *lens)
static void rds_sock_info(struct socket *sock, unsigned int len,
struct rds_info_iterator *iter,
struct rds_info_lengths *lens)
static void rds_exit(void)
module_exit(rds_exit);
static int rds_init(void)
module_init(rds_init);
#define DRV_VERSION     "4.0"
#define DRV_RELDATE     "Feb 12, 2009"
MODULE_AUTHOR("Oracle Corporation <rds-devel@oss.oracle.com>");
MODULE_DESCRIPTION("RDS: Reliable Datagram Sockets"
" v" DRV_VERSION " (" DRV_RELDATE ")");
MODULE_VERSION(DRV_VERSION);
MODULE_LICENSE("Dual BSD/GPL");
MODULE_ALIAS_NETPROTO(PF_RDS);
