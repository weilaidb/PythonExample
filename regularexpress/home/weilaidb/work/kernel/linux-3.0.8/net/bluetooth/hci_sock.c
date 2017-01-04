static int enable_mgmt;
static inline int hci_test_bit(int nr, void *addr)
static struct hci_sec_filter hci_sec_filter = ;
static struct bt_sock_list hci_sk_list = ;
void hci_send_to_sock(struct hci_dev *hdev, struct sk_buff *skb,
struct sock *skip_sk)
static int hci_sock_release(struct socket *sock)
struct bdaddr_list *hci_blacklist_lookup(struct hci_dev *hdev, bdaddr_t *bdaddr)
static int hci_blacklist_add(struct hci_dev *hdev, void __user *arg)
int hci_blacklist_clear(struct hci_dev *hdev)
static int hci_blacklist_del(struct hci_dev *hdev, void __user *arg)
static inline int hci_sock_bound_ioctl(struct sock *sk, unsigned int cmd, unsigned long arg)
static int hci_sock_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
static int hci_sock_bind(struct socket *sock, struct sockaddr *addr, int addr_len)
static int hci_sock_getname(struct socket *sock, struct sockaddr *addr, int *addr_len, int peer)
static inline void hci_sock_cmsg(struct sock *sk, struct msghdr *msg, struct sk_buff *skb)
static int hci_sock_recvmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t len, int flags)
static int hci_sock_sendmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t len)
static int hci_sock_setsockopt(struct socket *sock, int level, int optname, char __user *optval, unsigned int len)
static int hci_sock_getsockopt(struct socket *sock, int level, int optname, char __user *optval, int __user *optlen)
static const struct proto_ops hci_sock_ops = ;
static struct proto hci_sk_proto = ;
static int hci_sock_create(struct net *net, struct socket *sock, int protocol,
int kern)
static int hci_sock_dev_event(struct notifier_block *this, unsigned long event, void *ptr)
static const struct net_proto_family hci_sock_family_ops = ;
static struct notifier_block hci_sock_nblock = ;
int __init hci_sock_init(void)
void hci_sock_cleanup(void)
module_param(enable_mgmt, bool, 0644);
MODULE_PARM_DESC(enable_mgmt, "Enable Management interface");
