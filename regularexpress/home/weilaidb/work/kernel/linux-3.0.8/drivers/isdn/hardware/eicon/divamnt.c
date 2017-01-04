static DEFINE_MUTEX(maint_mutex);
static char *main_revision = "$Revision: 1.32.6.10 $";
static int major;
MODULE_DESCRIPTION("Maint driver for Eicon DIVA Server cards");
MODULE_AUTHOR("Cytronics & Melware, Eicon Networks");
MODULE_SUPPORTED_DEVICE("DIVA card driver");
MODULE_LICENSE("GPL");
static int buffer_length = 128;
module_param(buffer_length, int, 0);
static unsigned long diva_dbg_mem = 0;
module_param(diva_dbg_mem, ulong, 0);
static char *DRIVERNAME =
"Eicon DIVA - MAINT module (http:
static char *DRIVERLNAME = "diva_mnt";
static char *DEVNAME = "DivasMAINT";
char *DRIVERRELEASE_MNT = "2.0";
static wait_queue_head_t msgwaitq;
static unsigned long opened;
static struct timeval start_time;
extern int mntfunc_init(int *, void **, unsigned long);
extern void mntfunc_finit(void);
extern int maint_read_write(void __user *buf, int count);
static char *getrev(const char *revision)
int diva_os_copy_to_user(void *os_handle, void __user *dst, const void *src,
int length)
int diva_os_copy_from_user(void *os_handle, void *dst, const void __user *src,
int length)
void diva_os_get_time(dword * sec, dword * usec)
static unsigned int maint_poll(struct file *file, poll_table * wait)
static int maint_open(struct inode *ino, struct file *filep)
static int maint_close(struct inode *ino, struct file *filep)
static ssize_t divas_maint_write(struct file *file, const char __user *buf,
size_t count, loff_t * ppos)
static ssize_t divas_maint_read(struct file *file, char __user *buf,
size_t count, loff_t * ppos)
static const struct file_operations divas_maint_fops = ;
static void divas_maint_unregister_chrdev(void)
static int DIVA_INIT_FUNCTION divas_maint_register_chrdev(void)
void diva_maint_wakeup_read(void)
static int DIVA_INIT_FUNCTION maint_init(void)
static void DIVA_EXIT_FUNCTION maint_exit(void)
module_init(maint_init);
module_exit(maint_exit);
