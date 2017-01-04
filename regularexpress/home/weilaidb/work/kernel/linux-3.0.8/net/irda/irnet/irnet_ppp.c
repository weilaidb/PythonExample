static const struct ppp_channel_ops irnet_ppp_ops = ;
static inline ssize_t
irnet_ctrl_write(irnet_socket *	ap,
const char __user *buf,
size_t		count)
static void
irnet_get_discovery_log(irnet_socket *	ap)
static inline int
irnet_read_discovery_log(irnet_socket *	ap,
char *		event)
static inline ssize_t
irnet_ctrl_read(irnet_socket *	ap,
struct file *	file,
char __user *	buf,
size_t		count)
static inline unsigned int
irnet_ctrl_poll(irnet_socket *	ap,
struct file *	file,
poll_table *	wait)
static int
dev_irnet_open(struct inode *	inode,
struct file *	file)
static int
dev_irnet_close(struct inode *	inode,
struct file *	file)
static ssize_t
dev_irnet_write(struct file *	file,
const char __user *buf,
size_t		count,
loff_t *	ppos)
static ssize_t
dev_irnet_read(struct file *	file,
char __user *	buf,
size_t		count,
loff_t *		ppos)
static unsigned int
dev_irnet_poll(struct file *	file,
poll_table *	wait)
static long
dev_irnet_ioctl(
struct file *	file,
unsigned int	cmd,
unsigned long	arg)
static inline struct sk_buff *
irnet_prepare_skb(irnet_socket *	ap,
struct sk_buff *	skb)
static int
ppp_irnet_send(struct ppp_channel *	chan,
struct sk_buff *		skb)
static int
ppp_irnet_ioctl(struct ppp_channel *	chan,
unsigned int		cmd,
unsigned long		arg)
static inline int __init
ppp_irnet_init(void)
static inline void __exit
ppp_irnet_cleanup(void)
static int __init
irnet_init(void)
static void __exit
irnet_cleanup(void)
module_init(irnet_init);
module_exit(irnet_cleanup);
MODULE_AUTHOR("Jean Tourrilhes <jt@hpl.hp.com>");
MODULE_DESCRIPTION("IrNET : Synchronous PPP over IrDA");
MODULE_LICENSE("GPL");
MODULE_ALIAS_CHARDEV(10, 187);
