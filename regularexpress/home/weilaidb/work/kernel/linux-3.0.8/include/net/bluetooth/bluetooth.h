#define __BLUETOOTH_H
#define AF_BLUETOOTH	31
#define PF_BLUETOOTH	AF_BLUETOOTH
#define BT_SKB_RESERVE	8
#define BTPROTO_L2CAP	0
#define BTPROTO_HCI	1
#define BTPROTO_SCO	2
#define BTPROTO_RFCOMM	3
#define BTPROTO_BNEP	4
#define BTPROTO_CMTP	5
#define BTPROTO_HIDP	6
#define BTPROTO_AVDTP	7
#define SOL_HCI		0
#define SOL_L2CAP	6
#define SOL_SCO		17
#define SOL_RFCOMM	18
#define BT_SECURITY	4
struct bt_security ;
#define BT_SECURITY_SDP		0
#define BT_SECURITY_LOW		1
#define BT_SECURITY_MEDIUM	2
#define BT_SECURITY_HIGH	3
#define BT_DEFER_SETUP	7
#define BT_FLUSHABLE	8
#define BT_FLUSHABLE_OFF	0
#define BT_FLUSHABLE_ON		1
#define BT_INFO(fmt, arg...) printk(KERN_INFO "Bluetooth: " fmt "\n" , ## arg)
#define BT_ERR(fmt, arg...)  printk(KERN_ERR "%s: " fmt "\n" , __func__ , ## arg)
#define BT_DBG(fmt, arg...)  pr_debug("%s: " fmt "\n" , __func__ , ## arg)
enum ;
typedef struct  __packed bdaddr_t;
#define BDADDR_ANY   (&(bdaddr_t) )
#define BDADDR_LOCAL (&(bdaddr_t) )
static inline int bacmp(bdaddr_t *ba1, bdaddr_t *ba2)
static inline void bacpy(bdaddr_t *dst, bdaddr_t *src)
void baswap(bdaddr_t *dst, bdaddr_t *src);
char *batostr(bdaddr_t *ba);
bdaddr_t *strtoba(char *str);
#define bt_sk(__sk) ((struct bt_sock *) __sk)
struct bt_sock ;
struct bt_sock_list ;
int  bt_sock_register(int proto, const struct net_proto_family *ops);
int  bt_sock_unregister(int proto);
void bt_sock_link(struct bt_sock_list *l, struct sock *s);
void bt_sock_unlink(struct bt_sock_list *l, struct sock *s);
int  bt_sock_recvmsg(struct kiocb *iocb, struct socket *sock, struct msghdr *msg, size_t len, int flags);
int  bt_sock_stream_recvmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t len, int flags);
uint bt_sock_poll(struct file * file, struct socket *sock, poll_table *wait);
int  bt_sock_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg);
int  bt_sock_wait_state(struct sock *sk, int state, unsigned long timeo);
void bt_accept_enqueue(struct sock *parent, struct sock *sk);
void bt_accept_unlink(struct sock *sk);
struct sock *bt_accept_dequeue(struct sock *parent, struct socket *newsock);
struct bt_skb_cb ;
#define bt_cb(skb) ((struct bt_skb_cb *)((skb)->cb))
static inline struct sk_buff *bt_skb_alloc(unsigned int len, gfp_t how)
static inline struct sk_buff *bt_skb_send_alloc(struct sock *sk, unsigned long len,
int nb, int *err)
int bt_err(__u16 code);
extern int hci_sock_init(void);
extern void hci_sock_cleanup(void);
extern int bt_sysfs_init(void);
extern void bt_sysfs_cleanup(void);
extern struct dentry *bt_debugfs;
int l2cap_init(void);
void l2cap_exit(void);
static inline int l2cap_init(void)
static inline void l2cap_exit(void)
int sco_init(void);
void sco_exit(void);
static inline int sco_init(void)
static inline void sco_exit(void)
