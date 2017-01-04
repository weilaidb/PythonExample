static int jffs2_write_end(struct file *filp, struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *pg, void *fsdata);
static int jffs2_write_begin(struct file *filp, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata);
static int jffs2_readpage (struct file *filp, struct page *pg);
int jffs2_fsync(struct file *filp, int datasync)
const struct file_operations jffs2_file_operations =
;
const struct inode_operations jffs2_file_inode_operations =
;
const struct address_space_operations jffs2_file_address_operations =
;
static int jffs2_do_readpage_nolock (struct inode *inode, struct page *pg)
int jffs2_do_readpage_unlock(struct inode *inode, struct page *pg)
static int jffs2_readpage (struct file *filp, struct page *pg)
static int jffs2_write_begin(struct file *filp, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static int jffs2_write_end(struct file *filp, struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *pg, void *fsdata)
