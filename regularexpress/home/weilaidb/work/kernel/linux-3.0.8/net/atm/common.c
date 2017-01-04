#define pr_fmt(fmt) KBUILD_MODNAME ":%s: " fmt, __func__
struct hlist_head vcc_hash[VCC_HTABLE_SIZE];
EXPORT_SYMBOL(vcc_hash);
DEFINE_RWLOCK(vcc_sklist_lock);
EXPORT_SYMBOL(vcc_sklist_lock);
static ATOMIC_NOTIFIER_HEAD(atm_dev_notify_chain);
static void __vcc_insert_socket(struct sock *sk)
void vcc_insert_socket(struct sock *sk)
EXPORT_SYMBOL(vcc_insert_socket);
static void vcc_remove_socket(struct sock *sk)
static struct sk_buff *alloc_tx(struct atm_vcc *vcc, unsigned int size)
static void vcc_sock_destruct(struct sock *sk)
static void vcc_def_wakeup(struct sock *sk)
static inline int vcc_writable(struct sock *sk)
static void vcc_write_space(struct sock *sk)
static struct proto vcc_proto = ;
int vcc_create(struct net *net, struct socket *sock, int protocol, int family)
static void vcc_destroy_socket(struct sock *sk)
int vcc_release(struct socket *sock)
void vcc_release_async(struct atm_vcc *vcc, int reply)
EXPORT_SYMBOL(vcc_release_async);
void atm_dev_signal_change(struct atm_dev *dev, char signal)
EXPORT_SYMBOL(atm_dev_signal_change);
void atm_dev_release_vccs(struct atm_dev *dev)
EXPORT_SYMBOL(atm_dev_release_vccs);
static int adjust_tp(struct atm_trafprm *tp, unsigned char aal)
static int check_ci(const struct atm_vcc *vcc, short vpi, int vci)
static int find_ci(const struct atm_vcc *vcc, short *vpi, int *vci)
static int __vcc_connect(struct atm_vcc *vcc, struct atm_dev *dev, short vpi,
int vci)
int vcc_connect(struct socket *sock, int itf, short vpi, int vci)
int vcc_recvmsg(struct kiocb *iocb, struct socket *sock, struct msghdr *msg,
size_t size, int flags)
int vcc_sendmsg(struct kiocb *iocb, struct socket *sock, struct msghdr *m,
size_t total_len)
unsigned int vcc_poll(struct file *file, struct socket *sock, poll_table *wait)
static int atm_change_qos(struct atm_vcc *vcc, struct atm_qos *qos)
static int check_tp(const struct atm_trafprm *tp)
static int check_qos(const struct atm_qos *qos)
int vcc_setsockopt(struct socket *sock, int level, int optname,
char __user *optval, unsigned int optlen)
int vcc_getsockopt(struct socket *sock, int level, int optname,
char __user *optval, int __user *optlen)
int register_atmdevice_notifier(struct notifier_block *nb)
EXPORT_SYMBOL_GPL(register_atmdevice_notifier);
void unregister_atmdevice_notifier(struct notifier_block *nb)
EXPORT_SYMBOL_GPL(unregister_atmdevice_notifier);
static int __init atm_init(void)
static void __exit atm_exit(void)
subsys_initcall(atm_init);
module_exit(atm_exit);
MODULE_LICENSE("GPL");
MODULE_ALIAS_NETPROTO(PF_ATMPVC);
MODULE_ALIAS_NETPROTO(PF_ATMSVC);
