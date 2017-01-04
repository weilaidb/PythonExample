struct nilfs_iget_args ;
void nilfs_inode_add_blocks(struct inode *inode, int n)
void nilfs_inode_sub_blocks(struct inode *inode, int n)
int nilfs_get_block(struct inode *inode, sector_t blkoff,
struct buffer_head *bh_result, int create)
static int nilfs_readpage(struct file *file, struct page *page)
static int nilfs_readpages(struct file *file, struct address_space *mapping,
struct list_head *pages, unsigned nr_pages)
static int nilfs_writepages(struct address_space *mapping,
struct writeback_control *wbc)
static int nilfs_writepage(struct page *page, struct writeback_control *wbc)
static int nilfs_set_page_dirty(struct page *page)
static int nilfs_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
static int nilfs_write_end(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
static ssize_t
nilfs_direct_IO(int rw, struct kiocb *iocb, const struct iovec *iov,
loff_t offset, unsigned long nr_segs)
const struct address_space_operations nilfs_aops = ;
struct inode *nilfs_new_inode(struct inode *dir, int mode)
void nilfs_set_inode_flags(struct inode *inode)
int nilfs_read_inode_common(struct inode *inode,
struct nilfs_inode *raw_inode)
static int __nilfs_read_inode(struct super_block *sb,
struct nilfs_root *root, unsigned long ino,
struct inode *inode)
static int nilfs_iget_test(struct inode *inode, void *opaque)
static int nilfs_iget_set(struct inode *inode, void *opaque)
struct inode *nilfs_ilookup(struct super_block *sb, struct nilfs_root *root,
unsigned long ino)
struct inode *nilfs_iget_locked(struct super_block *sb, struct nilfs_root *root,
unsigned long ino)
struct inode *nilfs_iget(struct super_block *sb, struct nilfs_root *root,
unsigned long ino)
struct inode *nilfs_iget_for_gc(struct super_block *sb, unsigned long ino,
__u64 cno)
void nilfs_write_inode_common(struct inode *inode,
struct nilfs_inode *raw_inode, int has_bmap)
void nilfs_update_inode(struct inode *inode, struct buffer_head *ibh)
#define NILFS_MAX_TRUNCATE_BLOCKS	16384
static void nilfs_truncate_bmap(struct nilfs_inode_info *ii,
unsigned long from)
void nilfs_truncate(struct inode *inode)
static void nilfs_clear_inode(struct inode *inode)
void nilfs_evict_inode(struct inode *inode)
int nilfs_setattr(struct dentry *dentry, struct iattr *iattr)
int nilfs_permission(struct inode *inode, int mask, unsigned int flags)
int nilfs_load_inode_block(struct inode *inode, struct buffer_head **pbh)
int nilfs_inode_dirty(struct inode *inode)
int nilfs_set_file_dirty(struct inode *inode, unsigned nr_dirty)
int nilfs_mark_inode_dirty(struct inode *inode)
void nilfs_dirty_inode(struct inode *inode, int flags)
int nilfs_fiemap(struct inode *inode, struct fiemap_extent_info *fieinfo,
__u64 start, __u64 len)
