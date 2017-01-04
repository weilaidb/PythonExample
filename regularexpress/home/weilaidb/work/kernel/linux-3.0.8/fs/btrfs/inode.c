struct btrfs_iget_args ;
static const struct inode_operations btrfs_dir_inode_operations;
static const struct inode_operations btrfs_symlink_inode_operations;
static const struct inode_operations btrfs_dir_ro_inode_operations;
static const struct inode_operations btrfs_special_inode_operations;
static const struct inode_operations btrfs_file_inode_operations;
static const struct address_space_operations btrfs_aops;
static const struct address_space_operations btrfs_symlink_aops;
static const struct file_operations btrfs_dir_file_operations;
static struct extent_io_ops btrfs_extent_io_ops;
static struct kmem_cache *btrfs_inode_cachep;
struct kmem_cache *btrfs_trans_handle_cachep;
struct kmem_cache *btrfs_transaction_cachep;
struct kmem_cache *btrfs_path_cachep;
struct kmem_cache *btrfs_free_space_cachep;
#define S_SHIFT 12
static unsigned char btrfs_type_by_mode[S_IFMT >> S_SHIFT] = ;
static int btrfs_setsize(struct inode *inode, loff_t newsize);
static int btrfs_truncate(struct inode *inode);
static int btrfs_finish_ordered_io(struct inode *inode, u64 start, u64 end);
static noinline int cow_file_range(struct inode *inode,
struct page *locked_page,
u64 start, u64 end, int *page_started,
unsigned long *nr_written, int unlock);
static int btrfs_init_inode_security(struct btrfs_trans_handle *trans,
struct inode *inode,  struct inode *dir,
const struct qstr *qstr)
static noinline int insert_inline_extent(struct btrfs_trans_handle *trans,
struct btrfs_root *root, struct inode *inode,
u64 start, size_t size, size_t compressed_size,
int compress_type,
struct page **compressed_pages)
static noinline int cow_file_range_inline(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct inode *inode, u64 start, u64 end,
size_t compressed_size, int compress_type,
struct page **compressed_pages)
struct async_extent ;
struct async_cow ;
static noinline int add_async_extent(struct async_cow *cow,
u64 start, u64 ram_size,
u64 compressed_size,
struct page **pages,
unsigned long nr_pages,
int compress_type)
static noinline int compress_file_range(struct inode *inode,
struct page *locked_page,
u64 start, u64 end,
struct async_cow *async_cow,
int *num_added)
static noinline int submit_compressed_extents(struct inode *inode,
struct async_cow *async_cow)
static u64 get_extent_allocation_hint(struct inode *inode, u64 start,
u64 num_bytes)
static inline bool is_free_space_inode(struct btrfs_root *root,
struct inode *inode)
static noinline int cow_file_range(struct inode *inode,
struct page *locked_page,
u64 start, u64 end, int *page_started,
unsigned long *nr_written,
int unlock)
static noinline void async_cow_start(struct btrfs_work *work)
static noinline void async_cow_submit(struct btrfs_work *work)
static noinline void async_cow_free(struct btrfs_work *work)
static int cow_file_range_async(struct inode *inode, struct page *locked_page,
u64 start, u64 end, int *page_started,
unsigned long *nr_written)
static noinline int csum_exist_in_range(struct btrfs_root *root,
u64 bytenr, u64 num_bytes)
static noinline int run_delalloc_nocow(struct inode *inode,
struct page *locked_page,
u64 start, u64 end, int *page_started, int force,
unsigned long *nr_written)
static int run_delalloc_range(struct inode *inode, struct page *locked_page,
u64 start, u64 end, int *page_started,
unsigned long *nr_written)
static int btrfs_split_extent_hook(struct inode *inode,
struct extent_state *orig, u64 split)
static int btrfs_merge_extent_hook(struct inode *inode,
struct extent_state *new,
struct extent_state *other)
static int btrfs_set_bit_hook(struct inode *inode,
struct extent_state *state, int *bits)
static int btrfs_clear_bit_hook(struct inode *inode,
struct extent_state *state, int *bits)
int btrfs_merge_bio_hook(struct page *page, unsigned long offset,
size_t size, struct bio *bio,
unsigned long bio_flags)
static int __btrfs_submit_bio_start(struct inode *inode, int rw,
struct bio *bio, int mirror_num,
unsigned long bio_flags,
u64 bio_offset)
static int __btrfs_submit_bio_done(struct inode *inode, int rw, struct bio *bio,
int mirror_num, unsigned long bio_flags,
u64 bio_offset)
static int btrfs_submit_bio_hook(struct inode *inode, int rw, struct bio *bio,
int mirror_num, unsigned long bio_flags,
u64 bio_offset)
static noinline int add_pending_csums(struct btrfs_trans_handle *trans,
struct inode *inode, u64 file_offset,
struct list_head *list)
int btrfs_set_extent_delalloc(struct inode *inode, u64 start, u64 end,
struct extent_state **cached_state)
struct btrfs_writepage_fixup ;
static void btrfs_writepage_fixup_worker(struct btrfs_work *work)
static int btrfs_writepage_start_hook(struct page *page, u64 start, u64 end)
static int insert_reserved_file_extent(struct btrfs_trans_handle *trans,
struct inode *inode, u64 file_pos,
u64 disk_bytenr, u64 disk_num_bytes,
u64 num_bytes, u64 ram_bytes,
u8 compression, u8 encryption,
u16 other_encoding, int extent_type)
static int btrfs_finish_ordered_io(struct inode *inode, u64 start, u64 end)
static int btrfs_writepage_end_io_hook(struct page *page, u64 start, u64 end,
struct extent_state *state, int uptodate)
struct io_failure_record ;
static int btrfs_io_failed_hook(struct bio *failed_bio,
struct page *page, u64 start, u64 end,
struct extent_state *state)
static int btrfs_clean_io_failures(struct inode *inode, u64 start)
static int btrfs_readpage_end_io_hook(struct page *page, u64 start, u64 end,
struct extent_state *state)
struct delayed_iput ;
void btrfs_add_delayed_iput(struct inode *inode)
void btrfs_run_delayed_iputs(struct btrfs_root *root)
void btrfs_orphan_pre_snapshot(struct btrfs_trans_handle *trans,
struct btrfs_pending_snapshot *pending,
u64 *bytes_to_reserve)
void btrfs_orphan_post_snapshot(struct btrfs_trans_handle *trans,
struct btrfs_pending_snapshot *pending)
enum btrfs_orphan_cleanup_state ;
void btrfs_orphan_commit_root(struct btrfs_trans_handle *trans,
struct btrfs_root *root)
int btrfs_orphan_add(struct btrfs_trans_handle *trans, struct inode *inode)
int btrfs_orphan_del(struct btrfs_trans_handle *trans, struct inode *inode)
int btrfs_orphan_cleanup(struct btrfs_root *root)
static noinline int acls_after_inode_item(struct extent_buffer *leaf,
int slot, u64 objectid)
static void btrfs_read_locked_inode(struct inode *inode)
static void fill_inode_item(struct btrfs_trans_handle *trans,
struct extent_buffer *leaf,
struct btrfs_inode_item *item,
struct inode *inode)
noinline int btrfs_update_inode(struct btrfs_trans_handle *trans,
struct btrfs_root *root, struct inode *inode)
static int __btrfs_unlink_inode(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct inode *dir, struct inode *inode,
const char *name, int name_len)
int btrfs_unlink_inode(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct inode *dir, struct inode *inode,
const char *name, int name_len)
static int check_path_shared(struct btrfs_root *root,
struct btrfs_path *path)
static struct btrfs_trans_handle *__unlink_start_trans(struct inode *dir,
struct dentry *dentry)
static void __unlink_end_trans(struct btrfs_trans_handle *trans,
struct btrfs_root *root)
static int btrfs_unlink(struct inode *dir, struct dentry *dentry)
int btrfs_unlink_subvol(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct inode *dir, u64 objectid,
const char *name, int name_len)
static int btrfs_rmdir(struct inode *dir, struct dentry *dentry)
int btrfs_truncate_inode_items(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct inode *inode,
u64 new_size, u32 min_type)
static int btrfs_truncate_page(struct address_space *mapping, loff_t from)
int btrfs_cont_expand(struct inode *inode, loff_t oldsize, loff_t size)
static int btrfs_setsize(struct inode *inode, loff_t newsize)
static int btrfs_setattr(struct dentry *dentry, struct iattr *attr)
void btrfs_evict_inode(struct inode *inode)
static int btrfs_inode_by_name(struct inode *dir, struct dentry *dentry,
struct btrfs_key *location)
static int fixup_tree_root_location(struct btrfs_root *root,
struct inode *dir,
struct dentry *dentry,
struct btrfs_key *location,
struct btrfs_root **sub_root)
static void inode_tree_add(struct inode *inode)
static void inode_tree_del(struct inode *inode)
int btrfs_invalidate_inodes(struct btrfs_root *root)
static int btrfs_init_locked_inode(struct inode *inode, void *p)
static int btrfs_find_actor(struct inode *inode, void *opaque)
static struct inode *btrfs_iget_locked(struct super_block *s,
u64 objectid,
struct btrfs_root *root)
struct inode *btrfs_iget(struct super_block *s, struct btrfs_key *location,
struct btrfs_root *root, int *new)
static struct inode *new_simple_dir(struct super_block *s,
struct btrfs_key *key,
struct btrfs_root *root)
struct inode *btrfs_lookup_dentry(struct inode *dir, struct dentry *dentry)
static int btrfs_dentry_delete(const struct dentry *dentry)
static struct dentry *btrfs_lookup(struct inode *dir, struct dentry *dentry,
struct nameidata *nd)
unsigned char btrfs_filetype_table[] = ;
static int btrfs_real_readdir(struct file *filp, void *dirent,
filldir_t filldir)
int btrfs_write_inode(struct inode *inode, struct writeback_control *wbc)
void btrfs_dirty_inode(struct inode *inode, int flags)
static int btrfs_set_inode_index_count(struct inode *inode)
int btrfs_set_inode_index(struct inode *dir, u64 *index)
static struct inode *btrfs_new_inode(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct inode *dir,
const char *name, int name_len,
u64 ref_objectid, u64 objectid, int mode,
u64 *index)
static inline u8 btrfs_inode_type(struct inode *inode)
int btrfs_add_link(struct btrfs_trans_handle *trans,
struct inode *parent_inode, struct inode *inode,
const char *name, int name_len, int add_backref, u64 index)
static int btrfs_add_nondir(struct btrfs_trans_handle *trans,
struct inode *dir, struct dentry *dentry,
struct inode *inode, int backref, u64 index)
static int btrfs_mknod(struct inode *dir, struct dentry *dentry,
int mode, dev_t rdev)
static int btrfs_create(struct inode *dir, struct dentry *dentry,
int mode, struct nameidata *nd)
static int btrfs_link(struct dentry *old_dentry, struct inode *dir,
struct dentry *dentry)
static int btrfs_mkdir(struct inode *dir, struct dentry *dentry, int mode)
static int merge_extent_mapping(struct extent_map_tree *em_tree,
struct extent_map *existing,
struct extent_map *em,
u64 map_start, u64 map_len)
static noinline int uncompress_inline(struct btrfs_path *path,
struct inode *inode, struct page *page,
size_t pg_offset, u64 extent_offset,
struct btrfs_file_extent_item *item)
struct extent_map *btrfs_get_extent(struct inode *inode, struct page *page,
size_t pg_offset, u64 start, u64 len,
int create)
struct extent_map *btrfs_get_extent_fiemap(struct inode *inode, struct page *page,
size_t pg_offset, u64 start, u64 len,
int create)
static struct extent_map *btrfs_new_extent_direct(struct inode *inode,
struct extent_map *em,
u64 start, u64 len)
static noinline int can_nocow_odirect(struct btrfs_trans_handle *trans,
struct inode *inode, u64 offset, u64 len)
static int btrfs_get_blocks_direct(struct inode *inode, sector_t iblock,
struct buffer_head *bh_result, int create)
struct btrfs_dio_private ;
static void btrfs_endio_direct_read(struct bio *bio, int err)
static void btrfs_endio_direct_write(struct bio *bio, int err)
static int __btrfs_submit_bio_start_direct_io(struct inode *inode, int rw,
struct bio *bio, int mirror_num,
unsigned long bio_flags, u64 offset)
static void btrfs_end_dio_bio(struct bio *bio, int err)
static struct bio *btrfs_dio_bio_alloc(struct block_device *bdev,
u64 first_sector, gfp_t gfp_flags)
static inline int __btrfs_submit_dio_bio(struct bio *bio, struct inode *inode,
int rw, u64 file_offset, int skip_sum,
u32 *csums, int async_submit)
static int btrfs_submit_direct_hook(int rw, struct btrfs_dio_private *dip,
int skip_sum)
static void btrfs_submit_direct(int rw, struct bio *bio, struct inode *inode,
loff_t file_offset)
static ssize_t check_direct_IO(struct btrfs_root *root, int rw, struct kiocb *iocb,
const struct iovec *iov, loff_t offset,
unsigned long nr_segs)
static ssize_t btrfs_direct_IO(int rw, struct kiocb *iocb,
const struct iovec *iov, loff_t offset,
unsigned long nr_segs)
static int btrfs_fiemap(struct inode *inode, struct fiemap_extent_info *fieinfo,
__u64 start, __u64 len)
int btrfs_readpage(struct file *file, struct page *page)
static int btrfs_writepage(struct page *page, struct writeback_control *wbc)
int btrfs_writepages(struct address_space *mapping,
struct writeback_control *wbc)
static int
btrfs_readpages(struct file *file, struct address_space *mapping,
struct list_head *pages, unsigned nr_pages)
static int __btrfs_releasepage(struct page *page, gfp_t gfp_flags)
static int btrfs_releasepage(struct page *page, gfp_t gfp_flags)
static void btrfs_invalidatepage(struct page *page, unsigned long offset)
int btrfs_page_mkwrite(struct vm_area_struct *vma, struct vm_fault *vmf)
static int btrfs_truncate(struct inode *inode)
int btrfs_create_subvol_root(struct btrfs_trans_handle *trans,
struct btrfs_root *new_root, u64 new_dirid)
unsigned long btrfs_force_ra(struct address_space *mapping,
struct file_ra_state *ra, struct file *file,
pgoff_t offset, pgoff_t last_index)
struct inode *btrfs_alloc_inode(struct super_block *sb)
static void btrfs_i_callback(struct rcu_head *head)
void btrfs_destroy_inode(struct inode *inode)
int btrfs_drop_inode(struct inode *inode)
static void init_once(void *foo)
void btrfs_destroy_cachep(void)
int btrfs_init_cachep(void)
static int btrfs_getattr(struct vfsmount *mnt,
struct dentry *dentry, struct kstat *stat)
static void fixup_inode_flags(struct inode *dir, struct inode *inode)
static int btrfs_rename(struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir, struct dentry *new_dentry)
int btrfs_start_delalloc_inodes(struct btrfs_root *root, int delay_iput)
static int btrfs_symlink(struct inode *dir, struct dentry *dentry,
const char *symname)
static int __btrfs_prealloc_file_range(struct inode *inode, int mode,
u64 start, u64 num_bytes, u64 min_size,
loff_t actual_len, u64 *alloc_hint,
struct btrfs_trans_handle *trans)
int btrfs_prealloc_file_range(struct inode *inode, int mode,
u64 start, u64 num_bytes, u64 min_size,
loff_t actual_len, u64 *alloc_hint)
int btrfs_prealloc_file_range_trans(struct inode *inode,
struct btrfs_trans_handle *trans, int mode,
u64 start, u64 num_bytes, u64 min_size,
loff_t actual_len, u64 *alloc_hint)
static int btrfs_set_page_dirty(struct page *page)
static int btrfs_permission(struct inode *inode, int mask, unsigned int flags)
static const struct inode_operations btrfs_dir_inode_operations = ;
static const struct inode_operations btrfs_dir_ro_inode_operations = ;
static const struct file_operations btrfs_dir_file_operations = ;
static struct extent_io_ops btrfs_extent_io_ops = ;
static const struct address_space_operations btrfs_aops = ;
static const struct address_space_operations btrfs_symlink_aops = ;
static const struct inode_operations btrfs_file_inode_operations = ;
static const struct inode_operations btrfs_special_inode_operations = ;
static const struct inode_operations btrfs_symlink_inode_operations = ;
const struct dentry_operations btrfs_dentry_operations = ;
