#define THERM_USE_PROC
#define THERM_START_CONVERT	0xee
#define THERM_RESET		0xaf
#define THERM_READ_CONFIG	0xac
#define THERM_READ_TEMP		0xaa
#define THERM_READ_TL		0xa2
#define THERM_READ_TH		0xa1
#define THERM_WRITE_CONFIG	0x0c
#define THERM_WRITE_TL		0x02
#define THERM_WRITE_TH		0x01
#define CFG_CPU			2
#define CFG_1SHOT		1
static DEFINE_MUTEX(ds1620_mutex);
static const char *fan_state[] = ;
extern unsigned int system_rev;
static inline void netwinder_ds1620_set_clk(int clk)
static inline void netwinder_ds1620_set_data(int dat)
static inline int netwinder_ds1620_get_data(void)
static inline void netwinder_ds1620_set_data_dir(int dir)
static inline void netwinder_ds1620_reset(void)
static inline void netwinder_lock(unsigned long *flags)
static inline void netwinder_unlock(unsigned long *flags)
static inline void netwinder_set_fan(int i)
static inline int netwinder_get_fan(void)
static void ds1620_send_bits(int nr, int value)
static unsigned int ds1620_recv_bits(int nr)
static void ds1620_out(int cmd, int bits, int value)
static unsigned int ds1620_in(int cmd, int bits)
static int cvt_9_to_int(unsigned int val)
static void ds1620_write_state(struct therm *therm)
static void ds1620_read_state(struct therm *therm)
static int ds1620_open(struct inode *inode, struct file *file)
static ssize_t
ds1620_read(struct file *file, char __user *buf, size_t count, loff_t *ptr)
static int
ds1620_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static long
ds1620_unlocked_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int
proc_therm_ds1620_read(char *buf, char **start, off_t offset,
int len, int *eof, void *unused)
static struct proc_dir_entry *proc_therm_ds1620;
static const struct file_operations ds1620_fops = ;
static struct miscdevice ds1620_miscdev = ;
static int __init ds1620_init(void)
static void __exit ds1620_exit(void)
module_init(ds1620_init);
module_exit(ds1620_exit);
MODULE_LICENSE("GPL");
