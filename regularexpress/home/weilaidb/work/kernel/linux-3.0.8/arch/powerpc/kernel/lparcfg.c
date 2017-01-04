#define MODULE_VERS "1.9"
#define MODULE_NAME "lparcfg"
static struct proc_dir_entry *proc_ppc64_lparcfg;
static unsigned long get_purr(void)
static int iseries_lparcfg_data(struct seq_file *m, void *v)
static int iseries_lparcfg_data(struct seq_file *m, void *v)
struct hvcall_ppp_data ;
static unsigned int h_get_ppp(struct hvcall_ppp_data *ppp_data)
static unsigned h_pic(unsigned long *pool_idle_time,
unsigned long *num_procs)
static void parse_ppp_data(struct seq_file *m)
static void parse_mpp_data(struct seq_file *m)
static void parse_mpp_x_data(struct seq_file *m)
#define SPLPAR_CHARACTERISTICS_TOKEN 20
#define SPLPAR_MAXLENGTH 1026*(sizeof(char))
static void parse_system_parameter_string(struct seq_file *m)
static int lparcfg_count_active_processors(void)
static void pseries_cmo_data(struct seq_file *m)
static void splpar_dispatch_data(struct seq_file *m)
static void parse_em_data(struct seq_file *m)
static int pseries_lparcfg_data(struct seq_file *m, void *v)
static ssize_t update_ppp(u64 *entitlement, u8 *weight)
static ssize_t update_mpp(u64 *entitlement, u8 *weight)
static ssize_t lparcfg_write(struct file *file, const char __user * buf,
size_t count, loff_t * off)
static int pseries_lparcfg_data(struct seq_file *m, void *v)
static ssize_t lparcfg_write(struct file *file, const char __user * buf,
size_t count, loff_t * off)
static int lparcfg_data(struct seq_file *m, void *v)
static int lparcfg_open(struct inode *inode, struct file *file)
static const struct file_operations lparcfg_fops = ;
static int __init lparcfg_init(void)
static void __exit lparcfg_cleanup(void)
module_init(lparcfg_init);
module_exit(lparcfg_cleanup);
MODULE_DESCRIPTION("Interface for LPAR configuration data");
MODULE_AUTHOR("Dave Engebretsen");
MODULE_LICENSE("GPL");
