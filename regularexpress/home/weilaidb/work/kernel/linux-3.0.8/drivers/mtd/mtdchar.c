#define MTD_INODE_FS_MAGIC 0x11307854
static DEFINE_MUTEX(mtd_mutex);
static struct vfsmount *mtd_inode_mnt __read_mostly;
struct mtd_file_info ;
static loff_t mtd_lseek (struct file *file, loff_t offset, int orig)
static int mtd_open(struct inode *inode, struct file *file)
static int mtd_close(struct inode *inode, struct file *file)
static ssize_t mtd_read(struct file *file, char __user *buf, size_t count,loff_t *ppos)
static ssize_t mtd_write(struct file *file, const char __user *buf, size_t count,loff_t *ppos)
static void mtdchar_erase_callback (struct erase_info *instr)
static int otp_select_filemode(struct mtd_file_info *mfi, int mode)
# define otp_select_filemode(f,m)	-EOPNOTSUPP
static int mtd_do_writeoob(struct file *file, struct mtd_info *mtd,
uint64_t start, uint32_t length, void __user *ptr,
uint32_t __user *retp)
static int mtd_do_readoob(struct mtd_info *mtd, uint64_t start,
uint32_t length, void __user *ptr, uint32_t __user *retp)
static int shrink_ecclayout(const struct nand_ecclayout *from,
struct nand_ecclayout_user *to)
static int mtd_blkpg_ioctl(struct mtd_info *mtd,
struct blkpg_ioctl_arg __user *arg)
static int mtd_ioctl(struct file *file, u_int cmd, u_long arg)
static long mtd_unlocked_ioctl(struct file *file, u_int cmd, u_long arg)
struct mtd_oob_buf32 ;
#define MEMWRITEOOB32		_IOWR('M', 3, struct mtd_oob_buf32)
#define MEMREADOOB32		_IOWR('M', 4, struct mtd_oob_buf32)
static long mtd_compat_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static unsigned long mtd_get_unmapped_area(struct file *file,
unsigned long addr,
unsigned long len,
unsigned long pgoff,
unsigned long flags)
static int mtd_mmap(struct file *file, struct vm_area_struct *vma)
static const struct file_operations mtd_fops = ;
static struct dentry *mtd_inodefs_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct file_system_type mtd_inodefs_type = ;
static void mtdchar_notify_add(struct mtd_info *mtd)
static void mtdchar_notify_remove(struct mtd_info *mtd)
static struct mtd_notifier mtdchar_notifier = ;
static int __init init_mtdchar(void)
static void __exit cleanup_mtdchar(void)
module_init(init_mtdchar);
module_exit(cleanup_mtdchar);
MODULE_ALIAS_CHARDEV_MAJOR(MTD_CHAR_MAJOR);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Woodhouse <dwmw2@infradead.org>");
MODULE_DESCRIPTION("Direct character-device access to MTD devices");
MODULE_ALIAS_CHARDEV_MAJOR(MTD_CHAR_MAJOR);
