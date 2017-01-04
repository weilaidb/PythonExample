struct inode_defrag ;
static int __btrfs_add_inode_defrag(struct inode *inode,
struct inode_defrag *defrag)
int btrfs_add_inode_defrag(struct btrfs_trans_handle *trans,
struct inode *inode)
struct inode_defrag *btrfs_find_defrag_inode(struct btrfs_fs_info *info, u64 ino,
struct rb_node **next)
int btrfs_run_defrag_inodes(struct btrfs_fs_info *fs_info)
static noinline int btrfs_copy_from_user(loff_t pos, int num_pages,
size_t write_bytes,
struct page **prepared_pages,
struct iov_iter *i)
void btrfs_drop_pages(struct page **pages, size_t num_pages)
int btrfs_dirty_pages(struct btrfs_root *root, struct inode *inode,
struct page **pages, size_t num_pages,
loff_t pos, size_t write_bytes,
struct extent_state **cached)
int btrfs_drop_extent_cache(struct inode *inode, u64 start, u64 end,
int skip_pinned)
int btrfs_drop_extents(struct btrfs_trans_handle *trans, struct inode *inode,
u64 start, u64 end, u64 *hint_byte, int drop_cache)
static int extent_mergeable(struct extent_buffer *leaf, int slot,
u64 objectid, u64 bytenr, u64 orig_offset,
u64 *start, u64 *end)
int btrfs_mark_extent_written(struct btrfs_trans_handle *trans,
struct inode *inode, u64 start, u64 end)
static int prepare_uptodate_page(struct page *page, u64 pos)
static noinline int prepare_pages(struct btrfs_root *root, struct file *file,
struct page **pages, size_t num_pages,
loff_t pos, unsigned long first_index,
unsigned long last_index, size_t write_bytes)
static noinline ssize_t __btrfs_buffered_write(struct file *file,
struct iov_iter *i,
loff_t pos)
static ssize_t __btrfs_direct_write(struct kiocb *iocb,
const struct iovec *iov,
unsigned long nr_segs, loff_t pos,
loff_t *ppos, size_t count, size_t ocount)
static ssize_t btrfs_file_aio_write(struct kiocb *iocb,
const struct iovec *iov,
unsigned long nr_segs, loff_t pos)
int btrfs_release_file(struct inode *inode, struct file *filp)
int btrfs_sync_file(struct file *file, int datasync)
static const struct vm_operations_struct btrfs_file_vm_ops = ;
static int btrfs_file_mmap(struct file	*filp, struct vm_area_struct *vma)
static long btrfs_fallocate(struct file *file, int mode,
loff_t offset, loff_t len)
const struct file_operations btrfs_file_operations = ;
