#define KMSG_COMPONENT "zdump"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define TRACE(x...) debug_sprintf_event(zcore_dbf, 1, x)
#define TO_USER		0
#define TO_KERNEL	1
#define CHUNK_INFO_SIZE	34
enum arch_id ;
struct sys_info ;
struct ipib_info   __attribute__((packed));
static struct sys_info sys_info;
static struct debug_info *zcore_dbf;
static int hsa_available;
static struct dentry *zcore_dir;
static struct dentry *zcore_file;
static struct dentry *zcore_memmap_file;
static struct dentry *zcore_reipl_file;
static struct ipl_parameter_block *ipl_block;
static int memcpy_hsa(void *dest, unsigned long src, size_t count, int mode)
static int memcpy_hsa_user(void __user *dest, unsigned long src, size_t count)
static int memcpy_hsa_kernel(void *dest, unsigned long src, size_t count)
static int memcpy_real_user(void __user *dest, unsigned long src, size_t count)
static int __init init_cpu_info(enum arch_id arch)
static DEFINE_MUTEX(zcore_mutex);
#define DUMP_VERSION	0x5
#define DUMP_MAGIC	0xa8190173618f23fdULL
#define DUMP_ARCH_S390X	2
#define DUMP_ARCH_S390	1
#define HEADER_SIZE	4096
struct zcore_header  __attribute__((packed,__aligned__(16)));
static struct zcore_header zcore_header = ;
static int copy_lc(void __user *buf, void *sa, int sa_off, int len)
static int zcore_add_lc(char __user *buf, unsigned long start, size_t count)
static ssize_t zcore_read(struct file *file, char __user *buf, size_t count,
loff_t *ppos)
static int zcore_open(struct inode *inode, struct file *filp)
static int zcore_release(struct inode *inode, struct file *filep)
static loff_t zcore_lseek(struct file *file, loff_t offset, int orig)
static const struct file_operations zcore_fops = ;
static ssize_t zcore_memmap_read(struct file *filp, char __user *buf,
size_t count, loff_t *ppos)
static int zcore_memmap_open(struct inode *inode, struct file *filp)
static int zcore_memmap_release(struct inode *inode, struct file *filp)
static const struct file_operations zcore_memmap_fops = ;
static ssize_t zcore_reipl_write(struct file *filp, const char __user *buf,
size_t count, loff_t *ppos)
static int zcore_reipl_open(struct inode *inode, struct file *filp)
static int zcore_reipl_release(struct inode *inode, struct file *filp)
static const struct file_operations zcore_reipl_fops = ;
static void __init set_lc_mask(struct save_area *map)
static void __init set_lc_mask(struct save_area *map)
static int __init sys_info_init(enum arch_id arch)
static int __init check_sdias(void)
static int __init get_mem_size(unsigned long *mem)
static int __init zcore_header_init(int arch, struct zcore_header *hdr)
static int __init zcore_reipl_init(void)
static int __init zcore_init(void)
static void __exit zcore_exit(void)
MODULE_AUTHOR("Copyright IBM Corp. 2003,2008");
MODULE_DESCRIPTION("zcore module for zfcpdump support");
MODULE_LICENSE("GPL");
subsys_initcall(zcore_init);
module_exit(zcore_exit);
