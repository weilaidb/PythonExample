static int udf_adinicb_readpage(struct file *file, struct page *page)
static int udf_adinicb_writepage(struct page *page,
struct writeback_control *wbc)
static int udf_adinicb_write_end(struct file *file,
struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
const struct address_space_operations udf_adinicb_aops = ;
static ssize_t udf_file_aio_write(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t ppos)
long udf_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
static int udf_release_file(struct inode *inode, struct file *filp)
const struct file_operations udf_file_operations = ;
static int udf_setattr(struct dentry *dentry, struct iattr *attr)
const struct inode_operations udf_file_inode_operations = ;
