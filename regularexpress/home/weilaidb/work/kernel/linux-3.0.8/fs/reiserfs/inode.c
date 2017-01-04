int reiserfs_commit_write(struct file *f, struct page *page,
unsigned from, unsigned to);
void reiserfs_evict_inode(struct inode *inode)
static void _make_cpu_key(struct cpu_key *key, int version, __u32 dirid,
__u32 objectid, loff_t offset, int type, int length)
void make_cpu_key(struct cpu_key *key, struct inode *inode, loff_t offset,
int type, int length)
inline void make_le_item_head(struct item_head *ih, const struct cpu_key *key,
int version,
loff_t offset, int type, int length,
int entry_count )
static inline void fix_tail_page_for_writing(struct page *page)
static inline int allocation_needed(int retval, b_blocknr_t allocated,
struct item_head *ih,
__le32 * item, int pos_in_item)
static inline int indirect_item_found(int retval, struct item_head *ih)
static inline void set_block_dev_mapped(struct buffer_head *bh,
b_blocknr_t block, struct inode *inode)
static int file_capable(struct inode *inode, sector_t block)
static int restart_transaction(struct reiserfs_transaction_handle *th,
struct inode *inode, struct treepath *path)
static int _get_block_create_0(struct inode *inode, sector_t block,
struct buffer_head *bh_result, int args)
static int reiserfs_bmap(struct inode *inode, sector_t block,
struct buffer_head *bh_result, int create)
static int reiserfs_get_block_create_0(struct inode *inode, sector_t block,
struct buffer_head *bh_result,
int create)
static int reiserfs_get_blocks_direct_io(struct inode *inode,
sector_t iblock,
struct buffer_head *bh_result,
int create)
static int convert_tail_for_hole(struct inode *inode,
struct buffer_head *bh_result,
loff_t tail_offset)
static inline int _allocate_block(struct reiserfs_transaction_handle *th,
sector_t block,
struct inode *inode,
b_blocknr_t * allocated_block_nr,
struct treepath *path, int flags)
int reiserfs_get_block(struct inode *inode, sector_t block,
struct buffer_head *bh_result, int create)
static int
reiserfs_readpages(struct file *file, struct address_space *mapping,
struct list_head *pages, unsigned nr_pages)
static int real_space_diff(struct inode *inode, int sd_size)
static inline loff_t to_real_used_space(struct inode *inode, ulong blocks,
int sd_size)
static inline ulong to_fake_used_blocks(struct inode *inode, int sd_size)
static void init_inode(struct inode *inode, struct treepath *path)
static void inode2sd(void *sd, struct inode *inode, loff_t size)
static void inode2sd_v1(void *sd, struct inode *inode, loff_t size)
static void update_stat_data(struct treepath *path, struct inode *inode,
loff_t size)
void reiserfs_update_sd_size(struct reiserfs_transaction_handle *th,
struct inode *inode, loff_t size)
static void reiserfs_make_bad_inode(struct inode *inode)
int reiserfs_init_locked_inode(struct inode *inode, void *p)
void reiserfs_read_locked_inode(struct inode *inode,
struct reiserfs_iget_args *args)
int reiserfs_find_actor(struct inode *inode, void *opaque)
struct inode *reiserfs_iget(struct super_block *s, const struct cpu_key *key)
static struct dentry *reiserfs_get_dentry(struct super_block *sb,
u32 objectid, u32 dir_id, u32 generation)
struct dentry *reiserfs_fh_to_dentry(struct super_block *sb, struct fid *fid,
int fh_len, int fh_type)
struct dentry *reiserfs_fh_to_parent(struct super_block *sb, struct fid *fid,
int fh_len, int fh_type)
int reiserfs_encode_fh(struct dentry *dentry, __u32 * data, int *lenp,
int need_parent)
int reiserfs_write_inode(struct inode *inode, struct writeback_control *wbc)
static int reiserfs_new_directory(struct reiserfs_transaction_handle *th,
struct inode *inode,
struct item_head *ih, struct treepath *path,
struct inode *dir)
static int reiserfs_new_symlink(struct reiserfs_transaction_handle *th, struct inode *inode,
struct item_head *ih,
struct treepath *path, const char *symname,
int item_len)
int reiserfs_new_inode(struct reiserfs_transaction_handle *th,
struct inode *dir, int mode, const char *symname,
loff_t i_size, struct dentry *dentry,
struct inode *inode,
struct reiserfs_security_handle *security)
static int grab_tail_page(struct inode *inode,
struct page **page_result,
struct buffer_head **bh_result)
int reiserfs_truncate_file(struct inode *inode, int update_timestamps)
static int map_block_for_writepage(struct inode *inode,
struct buffer_head *bh_result,
unsigned long block)
static int reiserfs_write_full_page(struct page *page,
struct writeback_control *wbc)
static int reiserfs_readpage(struct file *f, struct page *page)
static int reiserfs_writepage(struct page *page, struct writeback_control *wbc)
static void reiserfs_truncate_failed_write(struct inode *inode)
static int reiserfs_write_begin(struct file *file,
struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata)
int __reiserfs_write_begin(struct page *page, unsigned from, unsigned len)
static sector_t reiserfs_aop_bmap(struct address_space *as, sector_t block)
static int reiserfs_write_end(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata)
int reiserfs_commit_write(struct file *f, struct page *page,
unsigned from, unsigned to)
void sd_attrs_to_i_attrs(__u16 sd_attrs, struct inode *inode)
void i_attrs_to_sd_attrs(struct inode *inode, __u16 * sd_attrs)
static int invalidatepage_can_drop(struct inode *inode, struct buffer_head *bh)
static void reiserfs_invalidatepage(struct page *page, unsigned long offset)
static int reiserfs_set_page_dirty(struct page *page)
static int reiserfs_releasepage(struct page *page, gfp_t unused_gfp_flags)
static ssize_t reiserfs_direct_IO(int rw, struct kiocb *iocb,
const struct iovec *iov, loff_t offset,
unsigned long nr_segs)
int reiserfs_setattr(struct dentry *dentry, struct iattr *attr)
const struct address_space_operations reiserfs_address_space_operations = ;
