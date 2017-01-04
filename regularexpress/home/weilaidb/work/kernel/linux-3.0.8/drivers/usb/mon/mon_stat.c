#define STAT_BUF_SIZE  80
struct snap ;
static int mon_stat_open(struct inode *inode, struct file *file)
static ssize_t mon_stat_read(struct file *file, char __user *buf,
size_t nbytes, loff_t *ppos)
static int mon_stat_release(struct inode *inode, struct file *file)
const struct file_operations mon_fops_stat = ;
