#define VALID_FLAGS (SYNC_FILE_RANGE_WAIT_BEFORE|SYNC_FILE_RANGE_WRITE| \
SYNC_FILE_RANGE_WAIT_AFTER)
static int __sync_filesystem(struct super_block *sb, int wait)
int sync_filesystem(struct super_block *sb)
EXPORT_SYMBOL_GPL(sync_filesystem);
static void sync_one_sb(struct super_block *sb, void *arg)
static void sync_filesystems(int wait)
SYSCALL_DEFINE0(sync)
static void do_sync_work(struct work_struct *work)
void emergency_sync(void)
SYSCALL_DEFINE1(syncfs, int, fd)
int vfs_fsync_range(struct file *file, loff_t start, loff_t end, int datasync)
EXPORT_SYMBOL(vfs_fsync_range);
int vfs_fsync(struct file *file, int datasync)
EXPORT_SYMBOL(vfs_fsync);
static int do_fsync(unsigned int fd, int datasync)
SYSCALL_DEFINE1(fsync, unsigned int, fd)
SYSCALL_DEFINE1(fdatasync, unsigned int, fd)
int generic_write_sync(struct file *file, loff_t pos, loff_t count)
EXPORT_SYMBOL(generic_write_sync);
SYSCALL_DEFINE(sync_file_range)(int fd, loff_t offset, loff_t nbytes,
unsigned int flags)
asmlinkage long SyS_sync_file_range(long fd, loff_t offset, loff_t nbytes,
long flags)
SYSCALL_ALIAS(sys_sync_file_range, SyS_sync_file_range);
SYSCALL_DEFINE(sync_file_range2)(int fd, unsigned int flags,
loff_t offset, loff_t nbytes)
asmlinkage long SyS_sync_file_range2(long fd, long flags,
loff_t offset, loff_t nbytes)
SYSCALL_ALIAS(sys_sync_file_range2, SyS_sync_file_range2);
