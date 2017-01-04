#define pr_fmt(fmt) KBUILD_MODNAME ":%s: " fmt, __func__
#if 1
#define dprintk(format, args...)					\
printk(KERN_DEBUG "mpoa:%s: " format, __FILE__, ##args)
#define dprintk(format, args...)					\
do  while (0)
#define STAT_FILE_NAME "mpc"
extern struct mpoa_client *mpcs;
extern struct proc_dir_entry *atm_proc_root;
static int proc_mpc_open(struct inode *inode, struct file *file);
static ssize_t proc_mpc_write(struct file *file, const char __user *buff,
size_t nbytes, loff_t *ppos);
static int parse_qos(const char *buff);
static const struct file_operations mpc_file_operations = ;
static const char *ingress_state_string(int state)
static const char *egress_state_string(int state)
static void *mpc_start(struct seq_file *m, loff_t *pos)
static void *mpc_next(struct seq_file *m, void *v, loff_t *pos)
static void mpc_stop(struct seq_file *m, void *v)
static int mpc_show(struct seq_file *m, void *v)
static const struct seq_operations mpc_op = ;
static int proc_mpc_open(struct inode *inode, struct file *file)
static ssize_t proc_mpc_write(struct file *file, const char __user *buff,
size_t nbytes, loff_t *ppos)
static int parse_qos(const char *buff)
int mpc_proc_init(void)
void mpc_proc_clean(void)
