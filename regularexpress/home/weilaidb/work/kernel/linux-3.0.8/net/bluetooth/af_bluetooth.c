#define VERSION "2.16"
#define BT_MAX_PROTO	8
static const struct net_proto_family *bt_proto[BT_MAX_PROTO];
static DEFINE_RWLOCK(bt_proto_lock);
static struct lock_class_key bt_lock_key[BT_MAX_PROTO];
static const char *const bt_key_strings[BT_MAX_PROTO] = ;
static struct lock_class_key bt_slock_key[BT_MAX_PROTO];
static const char *const bt_slock_key_strings[BT_MAX_PROTO] = ;
static inline void bt_sock_reclassify_lock(struct socket *sock, int proto)
int bt_sock_register(int proto, const struct net_proto_family *ops)
EXPORT_SYMBOL(bt_sock_register);
int bt_sock_unregister(int proto)
EXPORT_SYMBOL(bt_sock_unregister);
static int bt_sock_create(struct net *net, struct socket *sock, int proto,
int kern)
void bt_sock_link(struct bt_sock_list *l, struct sock *sk)
EXPORT_SYMBOL(bt_sock_link);
void bt_sock_unlink(struct bt_sock_list *l, struct sock *sk)
EXPORT_SYMBOL(bt_sock_unlink);
void bt_accept_enqueue(struct sock *parent, struct sock *sk)
EXPORT_SYMBOL(bt_accept_enqueue);
void bt_accept_unlink(struct sock *sk)
EXPORT_SYMBOL(bt_accept_unlink);
struct sock *bt_accept_dequeue(struct sock *parent, struct socket *newsock)
EXPORT_SYMBOL(bt_accept_dequeue);
int bt_sock_recvmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t len, int flags)
EXPORT_SYMBOL(bt_sock_recvmsg);
static long bt_sock_data_wait(struct sock *sk, long timeo)
int bt_sock_stream_recvmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t size, int flags)
EXPORT_SYMBOL(bt_sock_stream_recvmsg);
static inline unsigned int bt_accept_poll(struct sock *parent)
unsigned int bt_sock_poll(struct file *file, struct socket *sock, poll_table *wait)
EXPORT_SYMBOL(bt_sock_poll);
int bt_sock_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
EXPORT_SYMBOL(bt_sock_ioctl);
int bt_sock_wait_state(struct sock *sk, int state, unsigned long timeo)
EXPORT_SYMBOL(bt_sock_wait_state);
static struct net_proto_family bt_sock_family_ops = ;
static int __init bt_init(void)
static void __exit bt_exit(void)
subsys_initcall(bt_init);
module_exit(bt_exit);
MODULE_AUTHOR("Marcel Holtmann <marcel@holtmann.org>");
MODULE_DESCRIPTION("Bluetooth Core ver " VERSION);
MODULE_VERSION(VERSION);
MODULE_LICENSE("GPL");
MODULE_ALIAS_NETPROTO(PF_BLUETOOTH);
