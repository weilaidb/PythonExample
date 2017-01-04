#define NVRAM_VERSION	"1.3"
#define PC		1
#define ATARI		2
#if defined(CONFIG_ATARI)
#  define MACH ATARI
#elif defined(__i386__) || defined(__x86_64__) || defined(__arm__)
#  define MACH PC
#  error Cannot build nvram driver for this machine configuration.
#if MACH == PC
#define CHECK_DRIVER_INIT()	1
#define PC_CKS_RANGE_START	2
#define PC_CKS_RANGE_END	31
#define PC_CKS_LOC		32
#define NVRAM_BYTES		(128-NVRAM_FIRST_BYTE)
#define mach_check_checksum	pc_check_checksum
#define mach_set_checksum	pc_set_checksum
#define mach_proc_infos		pc_proc_infos
#if MACH == ATARI
#define RTC_PORT(x)		(TT_RTC_BAS + 2*(x))
#define CHECK_DRIVER_INIT()	(MACH_IS_ATARI && ATARIHW_PRESENT(TT_CLK))
#define NVRAM_BYTES		50
#define ATARI_CKS_RANGE_START	0
#define ATARI_CKS_RANGE_END	47
#define ATARI_CKS_LOC		48
#define mach_check_checksum	atari_check_checksum
#define mach_set_checksum	atari_set_checksum
#define mach_proc_infos		atari_proc_infos
static DEFINE_MUTEX(nvram_mutex);
static DEFINE_SPINLOCK(nvram_state_lock);
static int nvram_open_cnt;
static int nvram_open_mode;
#define NVRAM_WRITE		1
#define NVRAM_EXCL		2
static int mach_check_checksum(void);
static void mach_set_checksum(void);
static void mach_proc_infos(unsigned char *contents, struct seq_file *seq,
void *offset);
unsigned char __nvram_read_byte(int i)
EXPORT_SYMBOL(__nvram_read_byte);
unsigned char nvram_read_byte(int i)
EXPORT_SYMBOL(nvram_read_byte);
void __nvram_write_byte(unsigned char c, int i)
EXPORT_SYMBOL(__nvram_write_byte);
void nvram_write_byte(unsigned char c, int i)
EXPORT_SYMBOL(nvram_write_byte);
int __nvram_check_checksum(void)
EXPORT_SYMBOL(__nvram_check_checksum);
int nvram_check_checksum(void)
EXPORT_SYMBOL(nvram_check_checksum);
static void __nvram_set_checksum(void)
static loff_t nvram_llseek(struct file *file, loff_t offset, int origin)
static ssize_t nvram_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t nvram_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static long nvram_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int nvram_open(struct inode *inode, struct file *file)
static int nvram_release(struct inode *inode, struct file *file)
static int nvram_add_proc_fs(void)
static int nvram_proc_read(struct seq_file *seq, void *offset)
static int nvram_proc_open(struct inode *inode, struct file *file)
static const struct file_operations nvram_proc_fops = ;
static int nvram_add_proc_fs(void)
static const struct file_operations nvram_fops = ;
static struct miscdevice nvram_dev = ;
static int __init nvram_init(void)
static void __exit nvram_cleanup_module(void)
module_init(nvram_init);
module_exit(nvram_cleanup_module);
#if MACH == PC
static int pc_check_checksum(void)
static void pc_set_checksum(void)
static char *floppy_types[] = ;
static char *gfx_types[] = ;
static void pc_proc_infos(unsigned char *nvram, struct seq_file *seq,
void *offset)
#if MACH == ATARI
static int atari_check_checksum(void)
static void atari_set_checksum(void)
static struct  boot_prefs[] = ;
static char *languages[] = ;
static char *dateformat[] = ;
static char *colors[] = ;
static void atari_proc_infos(unsigned char *nvram, struct seq_file *seq,
void *offset)
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(NVRAM_MINOR);
