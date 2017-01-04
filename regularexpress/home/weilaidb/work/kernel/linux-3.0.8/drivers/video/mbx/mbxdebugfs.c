#define BIG_BUFFER_SIZE	(1024)
static char big_buffer[BIG_BUFFER_SIZE];
struct mbxfb_debugfs_data ;
static int open_file_generic(struct inode *inode, struct file *file)
static ssize_t write_file_dummy(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static ssize_t sysconf_read_file(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t gsctl_read_file(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t display_read_file(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t clock_read_file(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t sdram_read_file(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t misc_read_file(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static const struct file_operations sysconf_fops = ;
static const struct file_operations clock_fops = ;
static const struct file_operations display_fops = ;
static const struct file_operations gsctl_fops = ;
static const struct file_operations sdram_fops = ;
static const struct file_operations misc_fops = ;
static void __devinit mbxfb_debugfs_init(struct fb_info *fbi)
static void __devexit mbxfb_debugfs_remove(struct fb_info *fbi)
