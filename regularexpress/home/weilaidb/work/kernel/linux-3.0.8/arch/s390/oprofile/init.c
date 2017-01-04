extern void s390_backtrace(struct pt_regs * const regs, unsigned int depth);
#define DEFAULT_INTERVAL	4127518
#define DEFAULT_SDBT_BLOCKS	1
#define DEFAULT_SDB_BLOCKS	511
static unsigned long oprofile_hw_interval = DEFAULT_INTERVAL;
static unsigned long oprofile_min_interval;
static unsigned long oprofile_max_interval;
static unsigned long oprofile_sdbt_blocks = DEFAULT_SDBT_BLOCKS;
static unsigned long oprofile_sdb_blocks = DEFAULT_SDB_BLOCKS;
static int hwsampler_file;
static int hwsampler_running;
static struct oprofile_operations timer_ops;
static int oprofile_hwsampler_start(void)
static void oprofile_hwsampler_stop(void)
static ssize_t hwsampler_read(struct file *file, char __user *buf,
size_t count, loff_t *offset)
static ssize_t hwsampler_write(struct file *file, char const __user *buf,
size_t count, loff_t *offset)
static const struct file_operations hwsampler_fops = ;
static int oprofile_create_hwsampling_files(struct super_block *sb,
struct dentry *root)
static int oprofile_hwsampler_init(struct oprofile_operations *ops)
static void oprofile_hwsampler_exit(void)
int __init oprofile_arch_init(struct oprofile_operations *ops)
void oprofile_arch_exit(void)
