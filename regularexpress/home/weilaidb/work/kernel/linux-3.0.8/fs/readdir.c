int vfs_readdir(struct file *file, filldir_t filler, void *buf)
EXPORT_SYMBOL(vfs_readdir);
struct old_linux_dirent ;
struct readdir_callback ;
static int fillonedir(void * __buf, const char * name, int namlen, loff_t offset,
u64 ino, unsigned int d_type)
SYSCALL_DEFINE3(old_readdir, unsigned int, fd,
struct old_linux_dirent __user *, dirent, unsigned int, count)
struct linux_dirent ;
struct getdents_callback ;
static int filldir(void * __buf, const char * name, int namlen, loff_t offset,
u64 ino, unsigned int d_type)
SYSCALL_DEFINE3(getdents, unsigned int, fd,
struct linux_dirent __user *, dirent, unsigned int, count)
struct getdents_callback64 ;
static int filldir64(void * __buf, const char * name, int namlen, loff_t offset,
u64 ino, unsigned int d_type)
SYSCALL_DEFINE3(getdents64, unsigned int, fd,
struct linux_dirent64 __user *, dirent, unsigned int, count)
