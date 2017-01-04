#define PROC_STATS_FORMAT "%30s: %12lu\n"
#define PROT_DECODE(prot) ((prot == WANCONFIG_FR) ? " FR" :\
(prot == WANCONFIG_X25) ? " X25" : \
(prot == WANCONFIG_PPP) ? " PPP" : \
(prot == WANCONFIG_CHDLC) ? " CHDLC": \
(prot == WANCONFIG_MPPP) ? " MPPP" : \
" Unknown" )
static DEFINE_MUTEX(config_mutex);
static struct proc_dir_entry *proc_router;
static void *r_start(struct seq_file *m, loff_t *pos)
__acquires(kernel_lock)
static void *r_next(struct seq_file *m, void *v, loff_t *pos)
static void r_stop(struct seq_file *m, void *v)
__releases(kernel_lock)
static int config_show(struct seq_file *m, void *v)
static int status_show(struct seq_file *m, void *v)
static const struct seq_operations config_op = ;
static const struct seq_operations status_op = ;
static int config_open(struct inode *inode, struct file *file)
static int status_open(struct inode *inode, struct file *file)
static const struct file_operations config_fops = ;
static const struct file_operations status_fops = ;
static int wandev_show(struct seq_file *m, void *v)
static int wandev_open(struct inode *inode, struct file *file)
static const struct file_operations wandev_fops = ;
int __init wanrouter_proc_init(void)
void wanrouter_proc_cleanup(void)
int wanrouter_proc_add(struct wan_device* wandev)
int wanrouter_proc_delete(struct wan_device* wandev)
int __init wanrouter_proc_init(void)
void wanrouter_proc_cleanup(void)
int wanrouter_proc_add(struct wan_device *wandev)
int wanrouter_proc_delete(struct wan_device *wandev)
