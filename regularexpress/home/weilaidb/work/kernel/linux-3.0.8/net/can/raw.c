#define CAN_RAW_VERSION CAN_VERSION
static __initdata const char banner[] =
KERN_INFO "can: raw protocol (rev " CAN_RAW_VERSION ")\n";
MODULE_DESCRIPTION("PF_CAN raw protocol");
MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("Urs Thuermann <urs.thuermann@volkswagen.de>");
MODULE_ALIAS("can-proto-1");
#define MASK_ALL 0
struct raw_sock ;
static inline unsigned int *raw_flags(struct sk_buff *skb)
static inline struct raw_sock *raw_sk(const struct sock *sk)
static void raw_rcv(struct sk_buff *oskb, void *data)
static int raw_enable_filters(struct net_device *dev, struct sock *sk,
struct can_filter *filter, int count)
static int raw_enable_errfilter(struct net_device *dev, struct sock *sk,
can_err_mask_t err_mask)
static void raw_disable_filters(struct net_device *dev, struct sock *sk,
struct can_filter *filter, int count)
static inline void raw_disable_errfilter(struct net_device *dev,
struct sock *sk,
can_err_mask_t err_mask)
static inline void raw_disable_allfilters(struct net_device *dev,
struct sock *sk)
static int raw_enable_allfilters(struct net_device *dev, struct sock *sk)
static int raw_notifier(struct notifier_block *nb,
unsigned long msg, void *data)
static int raw_init(struct sock *sk)
static int raw_release(struct socket *sock)
static int raw_bind(struct socket *sock, struct sockaddr *uaddr, int len)
static int raw_getname(struct socket *sock, struct sockaddr *uaddr,
int *len, int peer)
static int raw_setsockopt(struct socket *sock, int level, int optname,
char __user *optval, unsigned int optlen)
static int raw_getsockopt(struct socket *sock, int level, int optname,
char __user *optval, int __user *optlen)
static int raw_sendmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t size)
static int raw_recvmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t size, int flags)
static const struct proto_ops raw_ops = ;
static struct proto raw_proto __read_mostly = ;
static const struct can_proto raw_can_proto = ;
static __init int raw_module_init(void)
static __exit void raw_module_exit(void)
module_init(raw_module_init);
module_exit(raw_module_exit);
