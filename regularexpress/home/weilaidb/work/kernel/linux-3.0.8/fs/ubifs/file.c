static int read_block(struct inode *inode, void *addr, unsigned int block,
struct ubifs_data_node *dn)
static int do_readpage(struct page *page)
static void release_new_page_budget(struct ubifs_info *c)
static void release_existing_page_budget(struct ubifs_info *c)
static int write_begin_slow(struct address_space *mapping,
loff_t pos, unsigned len, struct page **pagep,
unsigned flags)
static int allocate_budget(struct ubifs_info *c, struct page *page,
struct ubifs_inode *ui, int appending)
static int ubifs_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static void cancel_budget(struct ubifs_info *c, struct page *page,
struct ubifs_inode *ui, int appending)
static int ubifs_write_end(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
static int populate_page(struct ubifs_info *c, struct page *page,
struct bu_info *bu, int *n)
static int ubifs_do_bulk_read(struct ubifs_info *c, struct bu_info *bu,
struct page *page1)
static int ubifs_bulk_read(struct page *page)
static int ubifs_readpage(struct file *file, struct page *page)
static int do_writepage(struct page *page, int len)
static int ubifs_writepage(struct page *page, struct writeback_control *wbc)
static void do_attr_changes(struct inode *inode, const struct iattr *attr)
static int do_truncation(struct ubifs_info *c, struct inode *inode,
const struct iattr *attr)
static int do_setattr(struct ubifs_info *c, struct inode *inode,
const struct iattr *attr)
int ubifs_setattr(struct dentry *dentry, struct iattr *attr)
static void ubifs_invalidatepage(struct page *page, unsigned long offset)
static void *ubifs_follow_link(struct dentry *dentry, struct nameidata *nd)
int ubifs_fsync(struct file *file, int datasync)
static inline int mctime_update_needed(const struct inode *inode,
const struct timespec *now)
static int update_mctime(struct ubifs_info *c, struct inode *inode)
static ssize_t ubifs_aio_write(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos)
static int ubifs_set_page_dirty(struct page *page)
static int ubifs_releasepage(struct page *page, gfp_t unused_gfp_flags)
static int ubifs_vm_page_mkwrite(struct vm_area_struct *vma,
struct vm_fault *vmf)
static const struct vm_operations_struct ubifs_file_vm_ops = ;
static int ubifs_file_mmap(struct file *file, struct vm_area_struct *vma)
const struct address_space_operations ubifs_file_address_operations = ;
const struct inode_operations ubifs_file_inode_operations = ;
const struct inode_operations ubifs_symlink_inode_operations = ;
const struct file_operations ubifs_file_operations = ;
