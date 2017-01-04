#define LINE_SIZE 80
#define FILE_FCOUNT(f) (((struct seq_file *)((f)->private_data))->private)
static const char *const mtrr_strings[MTRR_NUM_TYPES] =
;
const char *mtrr_attrib_to_str(int x)
static int
mtrr_file_add(unsigned long base, unsigned long size,
unsigned int type, bool increment, struct file *file, int page)
static int
mtrr_file_del(unsigned long base, unsigned long size,
struct file *file, int page)
static ssize_t
mtrr_write(struct file *file, const char __user *buf, size_t len, loff_t * ppos)
static long
mtrr_ioctl(struct file *file, unsigned int cmd, unsigned long __arg)
static int mtrr_close(struct inode *ino, struct file *file)
static int mtrr_seq_show(struct seq_file *seq, void *offset);
static int mtrr_open(struct inode *inode, struct file *file)
static const struct file_operations mtrr_fops = ;
static int mtrr_seq_show(struct seq_file *seq, void *offset)
static int __init mtrr_if_init(void)
arch_initcall(mtrr_if_init);
