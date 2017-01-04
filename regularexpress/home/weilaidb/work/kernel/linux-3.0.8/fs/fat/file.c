static int fat_ioctl_get_attributes(struct inode *inode, u32 __user *user_attr)
static int fat_ioctl_set_attributes(struct file *file, u32 __user *user_attr)
long fat_generic_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
static long fat_generic_compat_ioctl(struct file *filp, unsigned int cmd,
unsigned long arg)
static int fat_file_release(struct inode *inode, struct file *filp)
int fat_file_fsync(struct file *filp, int datasync)
const struct file_operations fat_file_operations = ;
static int fat_cont_expand(struct inode *inode, loff_t size)
static int fat_free(struct inode *inode, int skip)
void fat_truncate_blocks(struct inode *inode, loff_t offset)
int fat_getattr(struct vfsmount *mnt, struct dentry *dentry, struct kstat *stat)
EXPORT_SYMBOL_GPL(fat_getattr);
static int fat_sanitize_mode(const struct msdos_sb_info *sbi,
struct inode *inode, umode_t *mode_ptr)
static int fat_allow_set_time(struct msdos_sb_info *sbi, struct inode *inode)
#define TIMES_SET_FLAGS	(ATTR_MTIME_SET | ATTR_ATIME_SET | ATTR_TIMES_SET)
#define FAT_VALID_MODE	(S_IFREG | S_IFDIR | S_IRWXUGO)
int fat_setattr(struct dentry *dentry, struct iattr *attr)
EXPORT_SYMBOL_GPL(fat_setattr);
const struct inode_operations fat_file_inode_operations = ;
