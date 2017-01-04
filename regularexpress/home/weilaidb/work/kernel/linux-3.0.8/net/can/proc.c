#define CAN_PROC_VERSION     "version"
#define CAN_PROC_STATS       "stats"
#define CAN_PROC_RESET_STATS "reset_stats"
#define CAN_PROC_RCVLIST_ALL "rcvlist_all"
#define CAN_PROC_RCVLIST_FIL "rcvlist_fil"
#define CAN_PROC_RCVLIST_INV "rcvlist_inv"
#define CAN_PROC_RCVLIST_SFF "rcvlist_sff"
#define CAN_PROC_RCVLIST_EFF "rcvlist_eff"
#define CAN_PROC_RCVLIST_ERR "rcvlist_err"
static struct proc_dir_entry *can_dir;
static struct proc_dir_entry *pde_version;
static struct proc_dir_entry *pde_stats;
static struct proc_dir_entry *pde_reset_stats;
static struct proc_dir_entry *pde_rcvlist_all;
static struct proc_dir_entry *pde_rcvlist_fil;
static struct proc_dir_entry *pde_rcvlist_inv;
static struct proc_dir_entry *pde_rcvlist_sff;
static struct proc_dir_entry *pde_rcvlist_eff;
static struct proc_dir_entry *pde_rcvlist_err;
static int user_reset;
static const char rx_list_name[][8] = ;
extern struct dev_rcv_lists can_rx_alldev_list;
static void can_init_stats(void)
static unsigned long calc_rate(unsigned long oldjif, unsigned long newjif,
unsigned long count)
void can_stat_update(unsigned long data)
static void can_print_rcvlist(struct seq_file *m, struct hlist_head *rx_list,
struct net_device *dev)
static void can_print_recv_banner(struct seq_file *m)
static int can_stats_proc_show(struct seq_file *m, void *v)
static int can_stats_proc_open(struct inode *inode, struct file *file)
static const struct file_operations can_stats_proc_fops = ;
static int can_reset_stats_proc_show(struct seq_file *m, void *v)
static int can_reset_stats_proc_open(struct inode *inode, struct file *file)
static const struct file_operations can_reset_stats_proc_fops = ;
static int can_version_proc_show(struct seq_file *m, void *v)
static int can_version_proc_open(struct inode *inode, struct file *file)
static const struct file_operations can_version_proc_fops = ;
static inline void can_rcvlist_proc_show_one(struct seq_file *m, int idx,
struct net_device *dev,
struct dev_rcv_lists *d)
static int can_rcvlist_proc_show(struct seq_file *m, void *v)
static int can_rcvlist_proc_open(struct inode *inode, struct file *file)
static const struct file_operations can_rcvlist_proc_fops = ;
static inline void can_rcvlist_sff_proc_show_one(struct seq_file *m,
struct net_device *dev,
struct dev_rcv_lists *d)
static int can_rcvlist_sff_proc_show(struct seq_file *m, void *v)
static int can_rcvlist_sff_proc_open(struct inode *inode, struct file *file)
static const struct file_operations can_rcvlist_sff_proc_fops = ;
static void can_remove_proc_readentry(const char *name)
void can_init_proc(void)
void can_remove_proc(void)
