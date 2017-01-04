#define FIEMAP_MAX_EXTENTS	(UINT_MAX / sizeof(struct fiemap_extent))
static long vfs_ioctl(struct file *filp, unsigned int cmd,
unsigned long arg)
static int ioctl_fibmap(struct file *filp, int __user *p)
#define SET_UNKNOWN_FLAGS	(FIEMAP_EXTENT_DELALLOC)
#define SET_NO_UNMOUNTED_IO_FLAGS	(FIEMAP_EXTENT_DATA_ENCRYPTED)
#define SET_NOT_ALIGNED_FLAGS	(FIEMAP_EXTENT_DATA_TAIL|FIEMAP_EXTENT_DATA_INLINE)
int fiemap_fill_next_extent(struct fiemap_extent_info *fieinfo, u64 logical,
u64 phys, u64 len, u32 flags)
EXPORT_SYMBOL(fiemap_fill_next_extent);
int fiemap_check_flags(struct fiemap_extent_info *fieinfo, u32 fs_flags)
EXPORT_SYMBOL(fiemap_check_flags);
static int fiemap_check_ranges(struct super_block *sb,
u64 start, u64 len, u64 *new_len)
static int ioctl_fiemap(struct file *filp, unsigned long arg)
static inline sector_t logical_to_blk(struct inode *inode, loff_t offset)
static inline loff_t blk_to_logical(struct inode *inode, sector_t blk)
int __generic_block_fiemap(struct inode *inode,
struct fiemap_extent_info *fieinfo, loff_t start,
loff_t len, get_block_t *get_block)
EXPORT_SYMBOL(__generic_block_fiemap);
int generic_block_fiemap(struct inode *inode,
struct fiemap_extent_info *fieinfo, u64 start,
u64 len, get_block_t *get_block)
EXPORT_SYMBOL(generic_block_fiemap);
int ioctl_preallocate(struct file *filp, void __user *argp)
static int file_ioctl(struct file *filp, unsigned int cmd,
unsigned long arg)
static int ioctl_fionbio(struct file *filp, int __user *argp)
static int ioctl_fioasync(unsigned int fd, struct file *filp,
int __user *argp)
static int ioctl_fsfreeze(struct file *filp)
static int ioctl_fsthaw(struct file *filp)
int do_vfs_ioctl(struct file *filp, unsigned int fd, unsigned int cmd,
unsigned long arg)
SYSCALL_DEFINE3(ioctl, unsigned int, fd, unsigned int, cmd, unsigned long, arg)
