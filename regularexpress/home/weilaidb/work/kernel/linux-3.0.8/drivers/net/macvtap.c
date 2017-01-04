struct macvtap_queue ;
static struct proto macvtap_proto = ;
static dev_t macvtap_major;
#define MACVTAP_NUM_DEVS 65536
static struct class *macvtap_class;
static struct cdev macvtap_cdev;
static const struct proto_ops macvtap_socket_ops;
static DEFINE_SPINLOCK(macvtap_lock);
static int get_slot(struct macvlan_dev *vlan, struct macvtap_queue *q)
static int macvtap_set_queue(struct net_device *dev, struct file *file,
struct macvtap_queue *q)
static void macvtap_put_queue(struct macvtap_queue *q)
static struct macvtap_queue *macvtap_get_queue(struct net_device *dev,
struct sk_buff *skb)
static void macvtap_del_queues(struct net_device *dev)
static int macvtap_forward(struct net_device *dev, struct sk_buff *skb)
static int macvtap_receive(struct sk_buff *skb)
static int macvtap_newlink(struct net *src_net,
struct net_device *dev,
struct nlattr *tb[],
struct nlattr *data[])
static void macvtap_dellink(struct net_device *dev,
struct list_head *head)
static void macvtap_setup(struct net_device *dev)
static struct rtnl_link_ops macvtap_link_ops __read_mostly = ;
static void macvtap_sock_write_space(struct sock *sk)
static int macvtap_open(struct inode *inode, struct file *file)
static int macvtap_release(struct inode *inode, struct file *file)
static unsigned int macvtap_poll(struct file *file, poll_table * wait)
static inline struct sk_buff *macvtap_alloc_skb(struct sock *sk, size_t prepad,
size_t len, size_t linear,
int noblock, int *err)
static int macvtap_skb_from_vnet_hdr(struct sk_buff *skb,
struct virtio_net_hdr *vnet_hdr)
static int macvtap_skb_to_vnet_hdr(const struct sk_buff *skb,
struct virtio_net_hdr *vnet_hdr)
static ssize_t macvtap_get_user(struct macvtap_queue *q,
const struct iovec *iv, size_t count,
int noblock)
static ssize_t macvtap_aio_write(struct kiocb *iocb, const struct iovec *iv,
unsigned long count, loff_t pos)
static ssize_t macvtap_put_user(struct macvtap_queue *q,
const struct sk_buff *skb,
const struct iovec *iv, int len)
static ssize_t macvtap_do_read(struct macvtap_queue *q, struct kiocb *iocb,
const struct iovec *iv, unsigned long len,
int noblock)
static ssize_t macvtap_aio_read(struct kiocb *iocb, const struct iovec *iv,
unsigned long count, loff_t pos)
static long macvtap_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static long macvtap_compat_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static const struct file_operations macvtap_fops = ;
static int macvtap_sendmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *m, size_t total_len)
static int macvtap_recvmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *m, size_t total_len,
int flags)
static const struct proto_ops macvtap_socket_ops = ;
struct socket *macvtap_get_socket(struct file *file)
EXPORT_SYMBOL_GPL(macvtap_get_socket);
static int macvtap_init(void)
module_init(macvtap_init);
static void macvtap_exit(void)
module_exit(macvtap_exit);
MODULE_ALIAS_RTNL_LINK("macvtap");
MODULE_AUTHOR("Arnd Bergmann <arnd@arndb.de>");
MODULE_LICENSE("GPL");
