#define MODULE_VERS "1.0"
#define MODULE_NAME "scanlog"
#define SCANLOG_COMPLETE 0
#define SCANLOG_HWERROR -1
#define SCANLOG_CONTINUE 1
static unsigned int ibm_scan_log_dump;
static struct proc_dir_entry *proc_ppc64_scan_log_dump;
static ssize_t scanlog_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t scanlog_write(struct file * file, const char __user * buf,
size_t count, loff_t *ppos)
static int scanlog_open(struct inode * inode, struct file * file)
static int scanlog_release(struct inode * inode, struct file * file)
const struct file_operations scanlog_fops = ;
static int __init scanlog_init(void)
static void __exit scanlog_cleanup(void)
module_init(scanlog_init);
module_exit(scanlog_cleanup);
MODULE_LICENSE("GPL");
