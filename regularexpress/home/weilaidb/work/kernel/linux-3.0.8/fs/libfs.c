static inline int simple_positive(struct dentry *dentry)
int simple_getattr(struct vfsmount *mnt, struct dentry *dentry,
struct kstat *stat)
int simple_statfs(struct dentry *dentry, struct kstatfs *buf)
static int simple_delete_dentry(const struct dentry *dentry)
struct dentry *simple_lookup(struct inode *dir, struct dentry *dentry, struct nameidata *nd)
int dcache_dir_open(struct inode *inode, struct file *file)
int dcache_dir_close(struct inode *inode, struct file *file)
loff_t dcache_dir_lseek(struct file *file, loff_t offset, int origin)
static inline unsigned char dt_type(struct inode *inode)
int dcache_readdir(struct file * filp, void * dirent, filldir_t filldir)
ssize_t generic_read_dir(struct file *filp, char __user *buf, size_t siz, loff_t *ppos)
const struct file_operations simple_dir_operations = ;
const struct inode_operations simple_dir_inode_operations = ;
static const struct super_operations simple_super_operations = ;
struct dentry *mount_pseudo(struct file_system_type *fs_type, char *name,
const struct super_operations *ops,
const struct dentry_operations *dops, unsigned long magic)
int simple_link(struct dentry *old_dentry, struct inode *dir, struct dentry *dentry)
int simple_empty(struct dentry *dentry)
int simple_unlink(struct inode *dir, struct dentry *dentry)
int simple_rmdir(struct inode *dir, struct dentry *dentry)
int simple_rename(struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir, struct dentry *new_dentry)
int simple_setattr(struct dentry *dentry, struct iattr *iattr)
EXPORT_SYMBOL(simple_setattr);
int simple_readpage(struct file *file, struct page *page)
int simple_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
int simple_write_end(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
int simple_fill_super(struct super_block *s, unsigned long magic,
struct tree_descr *files)
static DEFINE_SPINLOCK(pin_fs_lock);
int simple_pin_fs(struct file_system_type *type, struct vfsmount **mount, int *count)
void simple_release_fs(struct vfsmount **mount, int *count)
ssize_t simple_read_from_buffer(void __user *to, size_t count, loff_t *ppos,
const void *from, size_t available)
ssize_t simple_write_to_buffer(void *to, size_t available, loff_t *ppos,
const void __user *from, size_t count)
ssize_t memory_read_from_buffer(void *to, size_t count, loff_t *ppos,
const void *from, size_t available)
void simple_transaction_set(struct file *file, size_t n)
char *simple_transaction_get(struct file *file, const char __user *buf, size_t size)
ssize_t simple_transaction_read(struct file *file, char __user *buf, size_t size, loff_t *pos)
int simple_transaction_release(struct inode *inode, struct file *file)
struct simple_attr ;
int simple_attr_open(struct inode *inode, struct file *file,
int (*get)(void *, u64 *), int (*set)(void *, u64),
const char *fmt)
int simple_attr_release(struct inode *inode, struct file *file)
ssize_t simple_attr_read(struct file *file, char __user *buf,
size_t len, loff_t *ppos)
ssize_t simple_attr_write(struct file *file, const char __user *buf,
size_t len, loff_t *ppos)
struct dentry *generic_fh_to_dentry(struct super_block *sb, struct fid *fid,
int fh_len, int fh_type, struct inode *(*get_inode)
(struct super_block *sb, u64 ino, u32 gen))
EXPORT_SYMBOL_GPL(generic_fh_to_dentry);
struct dentry *generic_fh_to_parent(struct super_block *sb, struct fid *fid,
int fh_len, int fh_type, struct inode *(*get_inode)
(struct super_block *sb, u64 ino, u32 gen))
EXPORT_SYMBOL_GPL(generic_fh_to_parent);
int generic_file_fsync(struct file *file, int datasync)
EXPORT_SYMBOL(generic_file_fsync);
int generic_check_addressable(unsigned blocksize_bits, u64 num_blocks)
EXPORT_SYMBOL(generic_check_addressable);
int noop_fsync(struct file *file, int datasync)
EXPORT_SYMBOL(dcache_dir_close);
EXPORT_SYMBOL(dcache_dir_lseek);
EXPORT_SYMBOL(dcache_dir_open);
EXPORT_SYMBOL(dcache_readdir);
EXPORT_SYMBOL(generic_read_dir);
EXPORT_SYMBOL(mount_pseudo);
EXPORT_SYMBOL(simple_write_begin);
EXPORT_SYMBOL(simple_write_end);
EXPORT_SYMBOL(simple_dir_inode_operations);
EXPORT_SYMBOL(simple_dir_operations);
EXPORT_SYMBOL(simple_empty);
EXPORT_SYMBOL(simple_fill_super);
EXPORT_SYMBOL(simple_getattr);
EXPORT_SYMBOL(simple_link);
EXPORT_SYMBOL(simple_lookup);
EXPORT_SYMBOL(simple_pin_fs);
EXPORT_SYMBOL(simple_readpage);
EXPORT_SYMBOL(simple_release_fs);
EXPORT_SYMBOL(simple_rename);
EXPORT_SYMBOL(simple_rmdir);
EXPORT_SYMBOL(simple_statfs);
EXPORT_SYMBOL(noop_fsync);
EXPORT_SYMBOL(simple_unlink);
EXPORT_SYMBOL(simple_read_from_buffer);
EXPORT_SYMBOL(simple_write_to_buffer);
EXPORT_SYMBOL(memory_read_from_buffer);
EXPORT_SYMBOL(simple_transaction_set);
EXPORT_SYMBOL(simple_transaction_get);
EXPORT_SYMBOL(simple_transaction_read);
EXPORT_SYMBOL(simple_transaction_release);
EXPORT_SYMBOL_GPL(simple_attr_open);
EXPORT_SYMBOL_GPL(simple_attr_release);
EXPORT_SYMBOL_GPL(simple_attr_read);
EXPORT_SYMBOL_GPL(simple_attr_write);
