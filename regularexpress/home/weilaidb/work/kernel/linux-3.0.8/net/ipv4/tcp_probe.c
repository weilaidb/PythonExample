MODULE_AUTHOR("Stephen Hemminger <shemminger@linux-foundation.org>");
MODULE_DESCRIPTION("TCP cwnd snooper");
MODULE_LICENSE("GPL");
MODULE_VERSION("1.1");
static int port __read_mostly = 0;
MODULE_PARM_DESC(port, "Port to match (0=all)");
module_param(port, int, 0);
static unsigned int bufsize __read_mostly = 4096;
MODULE_PARM_DESC(bufsize, "Log buffer size in packets (4096)");
module_param(bufsize, uint, 0);
static int full __read_mostly;
MODULE_PARM_DESC(full, "Full log (1=every ack packet received,  0=only cwnd changes)");
module_param(full, int, 0);
static const char procname[] = "tcpprobe";
struct tcp_log ;
static struct  tcp_probe;
static inline int tcp_probe_used(void)
static inline int tcp_probe_avail(void)
static int jtcp_rcv_established(struct sock *sk, struct sk_buff *skb,
struct tcphdr *th, unsigned len)
static struct jprobe tcp_jprobe = ;
static int tcpprobe_open(struct inode * inode, struct file * file)
static int tcpprobe_sprint(char *tbuf, int n)
static ssize_t tcpprobe_read(struct file *file, char __user *buf,
size_t len, loff_t *ppos)
static const struct file_operations tcpprobe_fops = ;
static __init int tcpprobe_init(void)
module_init(tcpprobe_init);
static __exit void tcpprobe_exit(void)
module_exit(tcpprobe_exit);
