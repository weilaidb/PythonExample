#define JSFIDSZ		(sizeof(struct jsflash_ident_arg))
#define JSFPRGSZ	(sizeof(struct jsflash_program_arg))
#define JSF_MINOR	178
#define JSF_MAX		 3
#define JSF_NPART	 3
#define JSF_PART_BITS	 2
#define JSF_PART_MASK	 0x3
static DEFINE_MUTEX(jsf_mutex);
static unsigned int jsf_inl(unsigned long addr)
static void jsf_outl(unsigned long addr, __u32 data)
struct jsfd_part ;
struct jsflash ;
#define JSF_BASE_TOP	0x30000000
#define JSF_BASE_ALL	0x20000000
#define JSF_BASE_JK	0x20400000
static struct gendisk *jsfd_disk[JSF_MAX];
static struct jsflash jsf0;
static void jsf_wait(unsigned long p)
static void jsf_write4(unsigned long fa, u32 data)
static void jsfd_read(char *buf, unsigned long p, size_t togo)
static void jsfd_do_request(struct request_queue *q)
static loff_t jsf_lseek(struct file * file, loff_t offset, int orig)
static ssize_t jsf_read(struct file * file, char __user * buf,
size_t togo, loff_t *ppos)
static ssize_t jsf_write(struct file * file, const char __user * buf,
size_t count, loff_t *ppos)
static int jsf_ioctl_erase(unsigned long arg)
static int jsf_ioctl_program(void __user *arg)
static long jsf_ioctl(struct file *f, unsigned int cmd, unsigned long arg)
static int jsf_mmap(struct file * file, struct vm_area_struct * vma)
static int jsf_open(struct inode * inode, struct file * filp)
static int jsf_release(struct inode *inode, struct file *file)
static const struct file_operations jsf_fops = ;
static struct miscdevice jsf_dev = ;
static const struct block_device_operations jsfd_fops = ;
static int jsflash_init(void)
static struct request_queue *jsf_queue;
static int jsfd_init(void)
MODULE_LICENSE("GPL");
static int __init jsflash_init_module(void)
static void __exit jsflash_cleanup_module(void)
module_init(jsflash_init_module);
module_exit(jsflash_cleanup_module);
