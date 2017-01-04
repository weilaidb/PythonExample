static int nilfs_ioctl_wrap_copy(struct the_nilfs *nilfs,
struct nilfs_argv *argv, int dir,
ssize_t (*dofunc)(struct the_nilfs *,
__u64 *, int,
void *, size_t, size_t))
static int nilfs_ioctl_getflags(struct inode *inode, void __user *argp)
static int nilfs_ioctl_setflags(struct inode *inode, struct file *filp,
void __user *argp)
static int nilfs_ioctl_getversion(struct inode *inode, void __user *argp)
static int nilfs_ioctl_change_cpmode(struct inode *inode, struct file *filp,
unsigned int cmd, void __user *argp)
static int
nilfs_ioctl_delete_checkpoint(struct inode *inode, struct file *filp,
unsigned int cmd, void __user *argp)
static ssize_t
nilfs_ioctl_do_get_cpinfo(struct the_nilfs *nilfs, __u64 *posp, int flags,
void *buf, size_t size, size_t nmembs)
static int nilfs_ioctl_get_cpstat(struct inode *inode, struct file *filp,
unsigned int cmd, void __user *argp)
static ssize_t
nilfs_ioctl_do_get_suinfo(struct the_nilfs *nilfs, __u64 *posp, int flags,
void *buf, size_t size, size_t nmembs)
static int nilfs_ioctl_get_sustat(struct inode *inode, struct file *filp,
unsigned int cmd, void __user *argp)
static ssize_t
nilfs_ioctl_do_get_vinfo(struct the_nilfs *nilfs, __u64 *posp, int flags,
void *buf, size_t size, size_t nmembs)
static ssize_t
nilfs_ioctl_do_get_bdescs(struct the_nilfs *nilfs, __u64 *posp, int flags,
void *buf, size_t size, size_t nmembs)
static int nilfs_ioctl_get_bdescs(struct inode *inode, struct file *filp,
unsigned int cmd, void __user *argp)
static int nilfs_ioctl_move_inode_block(struct inode *inode,
struct nilfs_vdesc *vdesc,
struct list_head *buffers)
static int nilfs_ioctl_move_blocks(struct super_block *sb,
struct nilfs_argv *argv, void *buf)
static int nilfs_ioctl_delete_checkpoints(struct the_nilfs *nilfs,
struct nilfs_argv *argv, void *buf)
static int nilfs_ioctl_free_vblocknrs(struct the_nilfs *nilfs,
struct nilfs_argv *argv, void *buf)
static int nilfs_ioctl_mark_blocks_dirty(struct the_nilfs *nilfs,
struct nilfs_argv *argv, void *buf)
int nilfs_ioctl_prepare_clean_segments(struct the_nilfs *nilfs,
struct nilfs_argv *argv, void **kbufs)
static int nilfs_ioctl_clean_segments(struct inode *inode, struct file *filp,
unsigned int cmd, void __user *argp)
static int nilfs_ioctl_sync(struct inode *inode, struct file *filp,
unsigned int cmd, void __user *argp)
static int nilfs_ioctl_resize(struct inode *inode, struct file *filp,
void __user *argp)
static int nilfs_ioctl_set_alloc_range(struct inode *inode, void __user *argp)
static int nilfs_ioctl_get_info(struct inode *inode, struct file *filp,
unsigned int cmd, void __user *argp,
size_t membsz,
ssize_t (*dofunc)(struct the_nilfs *,
__u64 *, int,
void *, size_t, size_t))
long nilfs_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
long nilfs_compat_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
