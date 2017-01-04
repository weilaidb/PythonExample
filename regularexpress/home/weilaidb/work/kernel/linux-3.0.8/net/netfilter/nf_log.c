#define NF_LOG_PREFIXLEN		128
#define NFLOGGER_NAME_LEN		64
static const struct nf_logger __rcu *nf_loggers[NFPROTO_NUMPROTO] __read_mostly;
static struct list_head nf_loggers_l[NFPROTO_NUMPROTO] __read_mostly;
static DEFINE_MUTEX(nf_log_mutex);
static struct nf_logger *__find_logger(int pf, const char *str_logger)
int nf_log_register(u_int8_t pf, struct nf_logger *logger)
EXPORT_SYMBOL(nf_log_register);
void nf_log_unregister(struct nf_logger *logger)
EXPORT_SYMBOL(nf_log_unregister);
int nf_log_bind_pf(u_int8_t pf, const struct nf_logger *logger)
EXPORT_SYMBOL(nf_log_bind_pf);
void nf_log_unbind_pf(u_int8_t pf)
EXPORT_SYMBOL(nf_log_unbind_pf);
void nf_log_packet(u_int8_t pf,
unsigned int hooknum,
const struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
const struct nf_loginfo *loginfo,
const char *fmt, ...)
EXPORT_SYMBOL(nf_log_packet);
static void *seq_start(struct seq_file *seq, loff_t *pos)
static void *seq_next(struct seq_file *s, void *v, loff_t *pos)
static void seq_stop(struct seq_file *s, void *v)
static int seq_show(struct seq_file *s, void *v)
static const struct seq_operations nflog_seq_ops = ;
static int nflog_open(struct inode *inode, struct file *file)
static const struct file_operations nflog_file_ops = ;
static struct ctl_path nf_log_sysctl_path[] = ;
static char nf_log_sysctl_fnames[NFPROTO_NUMPROTO-NFPROTO_UNSPEC][3];
static struct ctl_table nf_log_sysctl_table[NFPROTO_NUMPROTO+1];
static struct ctl_table_header *nf_log_dir_header;
static int nf_log_proc_dostring(ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
static __init int netfilter_log_sysctl_init(void)
static __init int netfilter_log_sysctl_init(void)
int __init netfilter_log_init(void)
