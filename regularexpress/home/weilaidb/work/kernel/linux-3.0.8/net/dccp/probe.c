static int port;
static int bufsize = 64 * 1024;
static const char procname[] = "dccpprobe";
static struct  dccpw;
static void printl(const char *fmt, ...)
static int jdccp_sendmsg(struct kiocb *iocb, struct sock *sk,
struct msghdr *msg, size_t size)
static struct jprobe dccp_send_probe = ;
static int dccpprobe_open(struct inode *inode, struct file *file)
static ssize_t dccpprobe_read(struct file *file, char __user *buf,
size_t len, loff_t *ppos)
static const struct file_operations dccpprobe_fops = ;
static __init int dccpprobe_init(void)
module_init(dccpprobe_init);
static __exit void dccpprobe_exit(void)
module_exit(dccpprobe_exit);
MODULE_PARM_DESC(port, "Port to match (0=all)");
module_param(port, int, 0);
MODULE_PARM_DESC(bufsize, "Log buffer size (default 64k)");
module_param(bufsize, int, 0);
MODULE_AUTHOR("Ian McDonald <ian.mcdonald@jandi.co.nz>");
MODULE_DESCRIPTION("DCCP snooper");
MODULE_LICENSE("GPL");
