#define KMSG_COMPONENT "af_iucv"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define VERSION "1.1"
static char iucv_userid[80];
static const struct proto_ops iucv_sock_ops;
static struct proto iucv_proto = ;
static const u8 iprm_shutdown[8] =
;
#define TRGCLS_SIZE	(sizeof(((struct iucv_message *)0)->class))
#define CB_TAG(skb)	((skb)->cb)
#define CB_TAG_LEN	(sizeof(((struct iucv_message *) 0)->tag))
#define CB_TRGCLS(skb)	((skb)->cb + CB_TAG_LEN)
#define CB_TRGCLS_LEN	(TRGCLS_SIZE)
#define __iucv_sock_wait(sk, condition, timeo, ret)			\
do  while (0)
#define iucv_sock_wait(sk, condition, timeo)				\
()
static void iucv_sock_kill(struct sock *sk);
static void iucv_sock_close(struct sock *sk);
static void iucv_callback_rx(struct iucv_path *, struct iucv_message *);
static void iucv_callback_txdone(struct iucv_path *, struct iucv_message *);
static void iucv_callback_connack(struct iucv_path *, u8 ipuser[16]);
static int iucv_callback_connreq(struct iucv_path *, u8 ipvmid[8],
u8 ipuser[16]);
static void iucv_callback_connrej(struct iucv_path *, u8 ipuser[16]);
static void iucv_callback_shutdown(struct iucv_path *, u8 ipuser[16]);
static struct iucv_sock_list iucv_sk_list = ;
static struct iucv_handler af_iucv_handler = ;
static inline void high_nmcpy(unsigned char *dst, char *src)
static inline void low_nmcpy(unsigned char *dst, char *src)
static int afiucv_pm_prepare(struct device *dev)
static void afiucv_pm_complete(struct device *dev)
static int afiucv_pm_freeze(struct device *dev)
static int afiucv_pm_restore_thaw(struct device *dev)
static const struct dev_pm_ops afiucv_pm_ops = ;
static struct device_driver af_iucv_driver = ;
static struct device *af_iucv_dev;
static inline size_t iucv_msg_length(struct iucv_message *msg)
static int iucv_sock_in_state(struct sock *sk, int state, int state2)
static inline int iucv_below_msglim(struct sock *sk)
static void iucv_sock_wake_msglim(struct sock *sk)
static void iucv_sock_timeout(unsigned long arg)
static void iucv_sock_clear_timer(struct sock *sk)
static struct sock *__iucv_get_sock_by_name(char *nm)
static void iucv_sock_destruct(struct sock *sk)
static void iucv_sock_cleanup_listen(struct sock *parent)
static void iucv_sock_kill(struct sock *sk)
static void iucv_sock_close(struct sock *sk)
static void iucv_sock_init(struct sock *sk, struct sock *parent)
static struct sock *iucv_sock_alloc(struct socket *sock, int proto, gfp_t prio)
static int iucv_sock_create(struct net *net, struct socket *sock, int protocol,
int kern)
void iucv_sock_link(struct iucv_sock_list *l, struct sock *sk)
void iucv_sock_unlink(struct iucv_sock_list *l, struct sock *sk)
void iucv_accept_enqueue(struct sock *parent, struct sock *sk)
void iucv_accept_unlink(struct sock *sk)
struct sock *iucv_accept_dequeue(struct sock *parent, struct socket *newsock)
static int iucv_sock_bind(struct socket *sock, struct sockaddr *addr,
int addr_len)
static int iucv_sock_autobind(struct sock *sk)
static int iucv_sock_connect(struct socket *sock, struct sockaddr *addr,
int alen, int flags)
static int iucv_sock_listen(struct socket *sock, int backlog)
static int iucv_sock_accept(struct socket *sock, struct socket *newsock,
int flags)
static int iucv_sock_getname(struct socket *sock, struct sockaddr *addr,
int *len, int peer)
static int iucv_send_iprm(struct iucv_path *path, struct iucv_message *msg,
struct sk_buff *skb)
static int iucv_sock_sendmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t len)
static int iucv_fragment_skb(struct sock *sk, struct sk_buff *skb, int len)
static void iucv_process_message(struct sock *sk, struct sk_buff *skb,
struct iucv_path *path,
struct iucv_message *msg)
static void iucv_process_message_q(struct sock *sk)
static int iucv_sock_recvmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t len, int flags)
static inline unsigned int iucv_accept_poll(struct sock *parent)
unsigned int iucv_sock_poll(struct file *file, struct socket *sock,
poll_table *wait)
static int iucv_sock_shutdown(struct socket *sock, int how)
static int iucv_sock_release(struct socket *sock)
static int iucv_sock_setsockopt(struct socket *sock, int level, int optname,
char __user *optval, unsigned int optlen)
static int iucv_sock_getsockopt(struct socket *sock, int level, int optname,
char __user *optval, int __user *optlen)
static int iucv_callback_connreq(struct iucv_path *path,
u8 ipvmid[8], u8 ipuser[16])
static void iucv_callback_connack(struct iucv_path *path, u8 ipuser[16])
static void iucv_callback_rx(struct iucv_path *path, struct iucv_message *msg)
static void iucv_callback_txdone(struct iucv_path *path,
struct iucv_message *msg)
static void iucv_callback_connrej(struct iucv_path *path, u8 ipuser[16])
static void iucv_callback_shutdown(struct iucv_path *path, u8 ipuser[16])
static const struct proto_ops iucv_sock_ops = ;
static const struct net_proto_family iucv_sock_family_ops = ;
static int __init afiucv_init(void)
static void __exit afiucv_exit(void)
module_init(afiucv_init);
module_exit(afiucv_exit);
MODULE_AUTHOR("Jennifer Hunt <jenhunt@us.ibm.com>");
MODULE_DESCRIPTION("IUCV Sockets ver " VERSION);
MODULE_VERSION(VERSION);
MODULE_LICENSE("GPL");
MODULE_ALIAS_NETPROTO(PF_IUCV);
