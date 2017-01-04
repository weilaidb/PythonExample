static u32 debug_bank;
static u32 debug_address;
struct ab8500_reg_range ;
struct ab8500_i2c_ranges ;
#define AB8500_NAME_STRING "ab8500"
#define AB8500_NUM_BANKS 22
#define AB8500_REV_REG 0x80
static struct ab8500_i2c_ranges debug_ranges[AB8500_NUM_BANKS] = ;
static int ab8500_registers_print(struct seq_file *s, void *p)
static int ab8500_registers_open(struct inode *inode, struct file *file)
static const struct file_operations ab8500_registers_fops = ;
static int ab8500_bank_print(struct seq_file *s, void *p)
static int ab8500_bank_open(struct inode *inode, struct file *file)
static ssize_t ab8500_bank_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static int ab8500_address_print(struct seq_file *s, void *p)
static int ab8500_address_open(struct inode *inode, struct file *file)
static ssize_t ab8500_address_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static int ab8500_val_print(struct seq_file *s, void *p)
static int ab8500_val_open(struct inode *inode, struct file *file)
static ssize_t ab8500_val_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations ab8500_bank_fops = ;
static const struct file_operations ab8500_address_fops = ;
static const struct file_operations ab8500_val_fops = ;
static struct dentry *ab8500_dir;
static struct dentry *ab8500_reg_file;
static struct dentry *ab8500_bank_file;
static struct dentry *ab8500_address_file;
static struct dentry *ab8500_val_file;
static int __devinit ab8500_debug_probe(struct platform_device *plf)
static int __devexit ab8500_debug_remove(struct platform_device *plf)
static struct platform_driver ab8500_debug_driver = ;
static int __init ab8500_debug_init(void)
static void __exit ab8500_debug_exit(void)
subsys_initcall(ab8500_debug_init);
module_exit(ab8500_debug_exit);
MODULE_AUTHOR("Mattias WALLIN <mattias.wallin@stericsson.com");
MODULE_DESCRIPTION("AB8500 DEBUG");
MODULE_LICENSE("GPL v2");
