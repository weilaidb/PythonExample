#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_AUTHOR("Wei Yongjun <yjwei@cn.fujitsu.com>");
MODULE_DESCRIPTION("SCTP snooper");
MODULE_LICENSE("GPL");
static int port __read_mostly = 0;
MODULE_PARM_DESC(port, "Port to match (0=all)");
module_param(port, int, 0);
static int bufsize __read_mostly = 64 * 1024;
MODULE_PARM_DESC(bufsize, "Log buffer size (default 64k)");
module_param(bufsize, int, 0);
static int full __read_mostly = 1;
MODULE_PARM_DESC(full, "Full log (1=every ack packet received,  0=only cwnd changes)");
module_param(full, int, 0);
static const char procname[] = "sctpprobe";
static struct  sctpw;
static void printl(const char *fmt, ...)
static int sctpprobe_open(struct inode *inode, struct file *file)
static ssize_t sctpprobe_read(struct file *file, char __user *buf,
size_t len, loff_t *ppos)
static const struct file_operations sctpprobe_fops = ;
sctp_disposition_t jsctp_sf_eat_sack(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
static struct jprobe sctp_recv_probe = ;
static __init int sctpprobe_init(void)
static __exit void sctpprobe_exit(void)
module_init(sctpprobe_init);
module_exit(sctpprobe_exit);
