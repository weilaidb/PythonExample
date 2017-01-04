static struct ceph_mds_request *
prepare_open_request(struct super_block *sb, int flags, int create_mode)
static int ceph_init_file(struct inode *inode, struct file *file, int fmode)
int ceph_open(struct inode *inode, struct file *file)
struct dentry *ceph_lookup_open(struct inode *dir, struct dentry *dentry,
struct nameidata *nd, int mode,
int locked_dir)
int ceph_release(struct inode *inode, struct file *file)
static int striped_read(struct inode *inode,
u64 off, u64 len,
struct page **pages, int num_pages,
int *checkeof, bool o_direct,
unsigned long buf_align)
static ssize_t ceph_sync_read(struct file *file, char __user *data,
unsigned len, loff_t *poff, int *checkeof)
static void sync_write_commit(struct ceph_osd_request *req,
struct ceph_msg *msg)
static ssize_t ceph_sync_write(struct file *file, const char __user *data,
size_t left, loff_t *offset)
static ssize_t ceph_aio_read(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos)
static ssize_t ceph_aio_write(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos)
static loff_t ceph_llseek(struct file *file, loff_t offset, int origin)
const struct file_operations ceph_file_fops = ;
