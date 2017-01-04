static ssize_t ecryptfs_read_update_atime(struct kiocb *iocb,
const struct iovec *iov,
unsigned long nr_segs, loff_t pos)
struct ecryptfs_getdents_callback ;
static int
ecryptfs_filldir(void *dirent, const char *lower_name, int lower_namelen,
loff_t offset, u64 ino, unsigned int d_type)
static int ecryptfs_readdir(struct file *file, void *dirent, filldir_t filldir)
struct kmem_cache *ecryptfs_file_info_cache;
static int ecryptfs_open(struct inode *inode, struct file *file)
static int ecryptfs_flush(struct file *file, fl_owner_t td)
static int ecryptfs_release(struct inode *inode, struct file *file)
static int
ecryptfs_fsync(struct file *file, int datasync)
static int ecryptfs_fasync(int fd, struct file *file, int flag)
static long
ecryptfs_unlocked_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static long
ecryptfs_compat_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
const struct file_operations ecryptfs_dir_fops = ;
const struct file_operations ecryptfs_main_fops = ;
