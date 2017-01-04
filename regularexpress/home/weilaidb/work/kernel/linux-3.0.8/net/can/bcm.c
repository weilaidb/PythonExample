#define MAX_NFRAMES 256
#define RX_RECV    0x40
#define RX_THR     0x80
#define BCM_CAN_DLC_MASK 0x0F
#define REGMASK(id) ((id & CAN_EFF_FLAG) ? \
(CAN_EFF_MASK | CAN_EFF_FLAG | CAN_RTR_FLAG) : \
(CAN_SFF_MASK | CAN_EFF_FLAG | CAN_RTR_FLAG))
#define CAN_BCM_VERSION CAN_VERSION
static __initdata const char banner[] = KERN_INFO
"can: broadcast manager protocol (rev " CAN_BCM_VERSION " t)\n";
MODULE_DESCRIPTION("PF_CAN broadcast manager protocol");
MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("Oliver Hartkopp <oliver.hartkopp@volkswagen.de>");
MODULE_ALIAS("can-proto-2");
static inline u64 GET_U64(const struct can_frame *cp)
struct bcm_op ;
static struct proc_dir_entry *proc_dir;
struct bcm_sock ;
static inline struct bcm_sock *bcm_sk(const struct sock *sk)
#define CFSIZ sizeof(struct can_frame)
#define OPSIZ sizeof(struct bcm_op)
#define MHSIZ sizeof(struct bcm_msg_head)
static char *bcm_proc_getifname(char *result, int ifindex)
static int bcm_proc_show(struct seq_file *m, void *v)
static int bcm_proc_open(struct inode *inode, struct file *file)
static const struct file_operations bcm_proc_fops = ;
static void bcm_can_tx(struct bcm_op *op)
static void bcm_send_to_user(struct bcm_op *op, struct bcm_msg_head *head,
struct can_frame *frames, int has_timestamp)
static void bcm_tx_timeout_tsklet(unsigned long data)
static enum hrtimer_restart bcm_tx_timeout_handler(struct hrtimer *hrtimer)
static void bcm_rx_changed(struct bcm_op *op, struct can_frame *data)
static void bcm_rx_update_and_send(struct bcm_op *op,
struct can_frame *lastdata,
const struct can_frame *rxdata)
static void bcm_rx_cmp_to_index(struct bcm_op *op, unsigned int index,
const struct can_frame *rxdata)
static void bcm_rx_starttimer(struct bcm_op *op)
static void bcm_rx_timeout_tsklet(unsigned long data)
static enum hrtimer_restart bcm_rx_timeout_handler(struct hrtimer *hrtimer)
static inline int bcm_rx_do_flush(struct bcm_op *op, int update,
unsigned int index)
static int bcm_rx_thr_flush(struct bcm_op *op, int update)
static void bcm_rx_thr_tsklet(unsigned long data)
static enum hrtimer_restart bcm_rx_thr_handler(struct hrtimer *hrtimer)
static void bcm_rx_handler(struct sk_buff *skb, void *data)
static struct bcm_op *bcm_find_op(struct list_head *ops, canid_t can_id,
int ifindex)
static void bcm_remove_op(struct bcm_op *op)
static void bcm_rx_unreg(struct net_device *dev, struct bcm_op *op)
static int bcm_delete_rx_op(struct list_head *ops, canid_t can_id, int ifindex)
static int bcm_delete_tx_op(struct list_head *ops, canid_t can_id, int ifindex)
static int bcm_read_op(struct list_head *ops, struct bcm_msg_head *msg_head,
int ifindex)
static int bcm_tx_setup(struct bcm_msg_head *msg_head, struct msghdr *msg,
int ifindex, struct sock *sk)
static int bcm_rx_setup(struct bcm_msg_head *msg_head, struct msghdr *msg,
int ifindex, struct sock *sk)
static int bcm_tx_send(struct msghdr *msg, int ifindex, struct sock *sk)
static int bcm_sendmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t size)
static int bcm_notifier(struct notifier_block *nb, unsigned long msg,
void *data)
static int bcm_init(struct sock *sk)
static int bcm_release(struct socket *sock)
static int bcm_connect(struct socket *sock, struct sockaddr *uaddr, int len,
int flags)
static int bcm_recvmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *msg, size_t size, int flags)
static const struct proto_ops bcm_ops = ;
static struct proto bcm_proto __read_mostly = ;
static const struct can_proto bcm_can_proto = ;
static int __init bcm_module_init(void)
static void __exit bcm_module_exit(void)
module_init(bcm_module_init);
module_exit(bcm_module_exit);
