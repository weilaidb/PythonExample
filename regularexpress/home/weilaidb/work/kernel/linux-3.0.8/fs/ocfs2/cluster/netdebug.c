#define MLOG_MASK_PREFIX ML_TCP
#define O2NET_DEBUG_DIR		"o2net"
#define SC_DEBUG_NAME		"sock_containers"
#define NST_DEBUG_NAME		"send_tracking"
#define STATS_DEBUG_NAME	"stats"
#define SHOW_SOCK_CONTAINERS	0
#define SHOW_SOCK_STATS		1
static struct dentry *o2net_dentry;
static struct dentry *sc_dentry;
static struct dentry *nst_dentry;
static struct dentry *stats_dentry;
static DEFINE_SPINLOCK(o2net_debug_lock);
static LIST_HEAD(sock_containers);
static LIST_HEAD(send_tracking);
void o2net_debug_add_nst(struct o2net_send_tracking *nst)
void o2net_debug_del_nst(struct o2net_send_tracking *nst)
static struct o2net_send_tracking
*next_nst(struct o2net_send_tracking *nst_start)
static void *nst_seq_start(struct seq_file *seq, loff_t *pos)
static void *nst_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static int nst_seq_show(struct seq_file *seq, void *v)
static void nst_seq_stop(struct seq_file *seq, void *v)
static const struct seq_operations nst_seq_ops = ;
static int nst_fop_open(struct inode *inode, struct file *file)
static int nst_fop_release(struct inode *inode, struct file *file)
static const struct file_operations nst_seq_fops = ;
void o2net_debug_add_sc(struct o2net_sock_container *sc)
void o2net_debug_del_sc(struct o2net_sock_container *sc)
struct o2net_sock_debug ;
static struct o2net_sock_container
*next_sc(struct o2net_sock_container *sc_start)
static void *sc_seq_start(struct seq_file *seq, loff_t *pos)
static void *sc_seq_next(struct seq_file *seq, void *v, loff_t *pos)
# define sc_send_count(_s)		((_s)->sc_send_count)
# define sc_recv_count(_s)		((_s)->sc_recv_count)
# define sc_tv_acquiry_total_ns(_s)	(ktime_to_ns((_s)->sc_tv_acquiry_total))
# define sc_tv_send_total_ns(_s)	(ktime_to_ns((_s)->sc_tv_send_total))
# define sc_tv_status_total_ns(_s)	(ktime_to_ns((_s)->sc_tv_status_total))
# define sc_tv_process_total_ns(_s)	(ktime_to_ns((_s)->sc_tv_process_total))
# define sc_send_count(_s)		(0U)
# define sc_recv_count(_s)		(0U)
# define sc_tv_acquiry_total_ns(_s)	(0LL)
# define sc_tv_send_total_ns(_s)	(0LL)
# define sc_tv_status_total_ns(_s)	(0LL)
# define sc_tv_process_total_ns(_s)	(0LL)
#define O2NET_STATS_STR_VERSION		1
static void sc_show_sock_stats(struct seq_file *seq,
struct o2net_sock_container *sc)
static void sc_show_sock_container(struct seq_file *seq,
struct o2net_sock_container *sc)
static int sc_seq_show(struct seq_file *seq, void *v)
static void sc_seq_stop(struct seq_file *seq, void *v)
static const struct seq_operations sc_seq_ops = ;
static int sc_common_open(struct file *file, struct o2net_sock_debug *sd)
static int sc_fop_release(struct inode *inode, struct file *file)
static int stats_fop_open(struct inode *inode, struct file *file)
static const struct file_operations stats_seq_fops = ;
static int sc_fop_open(struct inode *inode, struct file *file)
static const struct file_operations sc_seq_fops = ;
int o2net_debugfs_init(void)
void o2net_debugfs_exit(void)
