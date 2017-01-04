struct ocfs2_cow_context ;
static inline struct ocfs2_refcount_tree *
cache_info_to_refcount(struct ocfs2_caching_info *ci)
static int ocfs2_validate_refcount_block(struct super_block *sb,
struct buffer_head *bh)
static int ocfs2_read_refcount_block(struct ocfs2_caching_info *ci,
u64 rb_blkno,
struct buffer_head **bh)
static u64 ocfs2_refcount_cache_owner(struct ocfs2_caching_info *ci)
static struct super_block *
ocfs2_refcount_cache_get_super(struct ocfs2_caching_info *ci)
static void ocfs2_refcount_cache_lock(struct ocfs2_caching_info *ci)
static void ocfs2_refcount_cache_unlock(struct ocfs2_caching_info *ci)
static void ocfs2_refcount_cache_io_lock(struct ocfs2_caching_info *ci)
static void ocfs2_refcount_cache_io_unlock(struct ocfs2_caching_info *ci)
static const struct ocfs2_caching_operations ocfs2_refcount_caching_ops = ;
static struct ocfs2_refcount_tree *
ocfs2_find_refcount_tree(struct ocfs2_super *osb, u64 blkno)
static void ocfs2_insert_refcount_tree(struct ocfs2_super *osb,
struct ocfs2_refcount_tree *new)
static void ocfs2_free_refcount_tree(struct ocfs2_refcount_tree *tree)
static inline void
ocfs2_erase_refcount_tree_from_list_no_lock(struct ocfs2_super *osb,
struct ocfs2_refcount_tree *tree)
static void ocfs2_erase_refcount_tree_from_list(struct ocfs2_super *osb,
struct ocfs2_refcount_tree *tree)
static void ocfs2_kref_remove_refcount_tree(struct kref *kref)
static inline void
ocfs2_refcount_tree_get(struct ocfs2_refcount_tree *tree)
static inline void
ocfs2_refcount_tree_put(struct ocfs2_refcount_tree *tree)
static inline void ocfs2_init_refcount_tree_ci(struct ocfs2_refcount_tree *new,
struct super_block *sb)
static inline void ocfs2_init_refcount_tree_lock(struct ocfs2_super *osb,
struct ocfs2_refcount_tree *new,
u64 rf_blkno, u32 generation)
static struct ocfs2_refcount_tree*
ocfs2_allocate_refcount_tree(struct ocfs2_super *osb, u64 rf_blkno)
static int ocfs2_get_refcount_tree(struct ocfs2_super *osb, u64 rf_blkno,
struct ocfs2_refcount_tree **ret_tree)
static int ocfs2_get_refcount_block(struct inode *inode, u64 *ref_blkno)
static int __ocfs2_lock_refcount_tree(struct ocfs2_super *osb,
struct ocfs2_refcount_tree *tree, int rw)
int ocfs2_lock_refcount_tree(struct ocfs2_super *osb,
u64 ref_blkno, int rw,
struct ocfs2_refcount_tree **ret_tree,
struct buffer_head **ref_bh)
void ocfs2_unlock_refcount_tree(struct ocfs2_super *osb,
struct ocfs2_refcount_tree *tree, int rw)
void ocfs2_purge_refcount_trees(struct ocfs2_super *osb)
static int ocfs2_create_refcount_tree(struct inode *inode,
struct buffer_head *di_bh)
static int ocfs2_set_refcount_tree(struct inode *inode,
struct buffer_head *di_bh,
u64 refcount_loc)
int ocfs2_remove_refcount_tree(struct inode *inode, struct buffer_head *di_bh)
static void ocfs2_find_refcount_rec_in_rl(struct ocfs2_caching_info *ci,
struct buffer_head *ref_leaf_bh,
u64 cpos, unsigned int len,
struct ocfs2_refcount_rec *ret_rec,
int *index)
int ocfs2_try_remove_refcount_tree(struct inode *inode,
struct buffer_head *di_bh)
static int ocfs2_get_refcount_cpos_end(struct ocfs2_caching_info *ci,
struct buffer_head *ref_root_bh,
struct ocfs2_extent_block *eb,
struct ocfs2_extent_list *el,
int index,  u32 *cpos_end)
static int ocfs2_get_refcount_rec(struct ocfs2_caching_info *ci,
struct buffer_head *ref_root_bh,
u64 cpos, unsigned int len,
struct ocfs2_refcount_rec *ret_rec,
int *index,
struct buffer_head **ret_bh)
enum ocfs2_ref_rec_contig ;
static enum ocfs2_ref_rec_contig
ocfs2_refcount_rec_adjacent(struct ocfs2_refcount_block *rb,
int index)
static enum ocfs2_ref_rec_contig
ocfs2_refcount_rec_contig(struct ocfs2_refcount_block *rb,
int index)
static void ocfs2_rotate_refcount_rec_left(struct ocfs2_refcount_block *rb,
int index)
static void ocfs2_refcount_rec_merge(struct ocfs2_refcount_block *rb,
int index)
static int ocfs2_change_refcount_rec(handle_t *handle,
struct ocfs2_caching_info *ci,
struct buffer_head *ref_leaf_bh,
int index, int merge, int change)
static int ocfs2_expand_inline_ref_root(handle_t *handle,
struct ocfs2_caching_info *ci,
struct buffer_head *ref_root_bh,
struct buffer_head **ref_leaf_bh,
struct ocfs2_alloc_context *meta_ac)
static int ocfs2_refcount_rec_no_intersect(struct ocfs2_refcount_rec *prev,
struct ocfs2_refcount_rec *next)
static int cmp_refcount_rec_by_low_cpos(const void *a, const void *b)
static int cmp_refcount_rec_by_cpos(const void *a, const void *b)
static void swap_refcount_rec(void *a, void *b, int size)
static int ocfs2_find_refcount_split_pos(struct ocfs2_refcount_list *rl,
u32 *split_pos, int *split_index)
static int ocfs2_divide_leaf_refcount_block(struct buffer_head *ref_leaf_bh,
struct buffer_head *new_bh,
u32 *split_cpos)
static int ocfs2_new_leaf_refcount_block(handle_t *handle,
struct ocfs2_caching_info *ci,
struct buffer_head *ref_root_bh,
struct buffer_head *ref_leaf_bh,
struct ocfs2_alloc_context *meta_ac)
static int ocfs2_expand_refcount_tree(handle_t *handle,
struct ocfs2_caching_info *ci,
struct buffer_head *ref_root_bh,
struct buffer_head *ref_leaf_bh,
struct ocfs2_alloc_context *meta_ac)
static int ocfs2_adjust_refcount_rec(handle_t *handle,
struct ocfs2_caching_info *ci,
struct buffer_head *ref_root_bh,
struct buffer_head *ref_leaf_bh,
struct ocfs2_refcount_rec *rec)
static int ocfs2_insert_refcount_rec(handle_t *handle,
struct ocfs2_caching_info *ci,
struct buffer_head *ref_root_bh,
struct buffer_head *ref_leaf_bh,
struct ocfs2_refcount_rec *rec,
int index, int merge,
struct ocfs2_alloc_context *meta_ac)
static int ocfs2_split_refcount_rec(handle_t *handle,
struct ocfs2_caching_info *ci,
struct buffer_head *ref_root_bh,
struct buffer_head *ref_leaf_bh,
struct ocfs2_refcount_rec *split_rec,
int index, int merge,
struct ocfs2_alloc_context *meta_ac,
struct ocfs2_cached_dealloc_ctxt *dealloc)
static int __ocfs2_increase_refcount(handle_t *handle,
struct ocfs2_caching_info *ci,
struct buffer_head *ref_root_bh,
u64 cpos, u32 len, int merge,
struct ocfs2_alloc_context *meta_ac,
struct ocfs2_cached_dealloc_ctxt *dealloc)
static int ocfs2_remove_refcount_extent(handle_t *handle,
struct ocfs2_caching_info *ci,
struct buffer_head *ref_root_bh,
struct buffer_head *ref_leaf_bh,
struct ocfs2_alloc_context *meta_ac,
struct ocfs2_cached_dealloc_ctxt *dealloc)
int ocfs2_increase_refcount(handle_t *handle,
struct ocfs2_caching_info *ci,
struct buffer_head *ref_root_bh,
u64 cpos, u32 len,
struct ocfs2_alloc_context *meta_ac,
struct ocfs2_cached_dealloc_ctxt *dealloc)
static int ocfs2_decrease_refcount_rec(handle_t *handle,
struct ocfs2_caching_info *ci,
struct buffer_head *ref_root_bh,
struct buffer_head *ref_leaf_bh,
int index, u64 cpos, unsigned int len,
struct ocfs2_alloc_context *meta_ac,
struct ocfs2_cached_dealloc_ctxt *dealloc)
static int __ocfs2_decrease_refcount(handle_t *handle,
struct ocfs2_caching_info *ci,
struct buffer_head *ref_root_bh,
u64 cpos, u32 len,
struct ocfs2_alloc_context *meta_ac,
struct ocfs2_cached_dealloc_ctxt *dealloc,
int delete)
int ocfs2_decrease_refcount(struct inode *inode,
handle_t *handle, u32 cpos, u32 len,
struct ocfs2_alloc_context *meta_ac,
struct ocfs2_cached_dealloc_ctxt *dealloc,
int delete)
static int ocfs2_mark_extent_refcounted(struct inode *inode,
struct ocfs2_extent_tree *et,
handle_t *handle, u32 cpos,
u32 len, u32 phys,
struct ocfs2_alloc_context *meta_ac,
struct ocfs2_cached_dealloc_ctxt *dealloc)
static int ocfs2_calc_refcount_meta_credits(struct super_block *sb,
struct ocfs2_caching_info *ci,
struct buffer_head *ref_root_bh,
u64 start_cpos,
u32 clusters,
int *meta_add,
int *credits)
int ocfs2_prepare_refcount_change_for_del(struct inode *inode,
u64 refcount_loc,
u64 phys_blkno,
u32 clusters,
int *credits,
int *ref_blocks)
#define	MAX_CONTIG_BYTES	1048576
static inline unsigned int ocfs2_cow_contig_clusters(struct super_block *sb)
static inline unsigned int ocfs2_cow_contig_mask(struct super_block *sb)
static inline unsigned int ocfs2_cow_align_start(struct super_block *sb,
unsigned int start,
unsigned int cpos)
static inline unsigned int ocfs2_cow_align_length(struct super_block *sb,
unsigned int len)
static int ocfs2_refcount_cal_cow_clusters(struct inode *inode,
struct ocfs2_extent_list *el,
u32 cpos,
u32 write_len,
u32 max_cpos,
u32 *cow_start,
u32 *cow_len)
static int ocfs2_lock_refcount_allocators(struct super_block *sb,
u32 p_cluster, u32 num_clusters,
struct ocfs2_extent_tree *et,
struct ocfs2_caching_info *ref_ci,
struct buffer_head *ref_root_bh,
struct ocfs2_alloc_context **meta_ac,
struct ocfs2_alloc_context **data_ac,
int *credits)
static int ocfs2_clear_cow_buffer(handle_t *handle, struct buffer_head *bh)
int ocfs2_duplicate_clusters_by_page(handle_t *handle,
struct file *file,
u32 cpos, u32 old_cluster,
u32 new_cluster, u32 new_len)
int ocfs2_duplicate_clusters_by_jbd(handle_t *handle,
struct file *file,
u32 cpos, u32 old_cluster,
u32 new_cluster, u32 new_len)
static int ocfs2_clear_ext_refcount(handle_t *handle,
struct ocfs2_extent_tree *et,
u32 cpos, u32 p_cluster, u32 len,
unsigned int ext_flags,
struct ocfs2_alloc_context *meta_ac,
struct ocfs2_cached_dealloc_ctxt *dealloc)
static int ocfs2_replace_clusters(handle_t *handle,
struct ocfs2_cow_context *context,
u32 cpos, u32 old,
u32 new, u32 len,
unsigned int ext_flags)
int ocfs2_cow_sync_writeback(struct super_block *sb,
struct inode *inode,
u32 cpos, u32 num_clusters)
static int ocfs2_di_get_clusters(struct ocfs2_cow_context *context,
u32 v_cluster, u32 *p_cluster,
u32 *num_clusters,
unsigned int *extent_flags)
static int ocfs2_make_clusters_writable(struct super_block *sb,
struct ocfs2_cow_context *context,
u32 cpos, u32 p_cluster,
u32 num_clusters, unsigned int e_flags)
static int ocfs2_replace_cow(struct ocfs2_cow_context *context)
static void ocfs2_readahead_for_cow(struct inode *inode,
struct file *file,
u32 start, u32 len)
static int ocfs2_refcount_cow_hunk(struct inode *inode,
struct file *file,
struct buffer_head *di_bh,
u32 cpos, u32 write_len, u32 max_cpos)
int ocfs2_refcount_cow(struct inode *inode,
struct file *file,
struct buffer_head *di_bh,
u32 cpos, u32 write_len, u32 max_cpos)
static int ocfs2_xattr_value_get_clusters(struct ocfs2_cow_context *context,
u32 v_cluster, u32 *p_cluster,
u32 *num_clusters,
unsigned int *extent_flags)
int ocfs2_refcounted_xattr_delete_need(struct inode *inode,
struct ocfs2_caching_info *ref_ci,
struct buffer_head *ref_root_bh,
struct ocfs2_xattr_value_root *xv,
int *meta_add, int *credits)
int ocfs2_refcount_cow_xattr(struct inode *inode,
struct ocfs2_dinode *di,
struct ocfs2_xattr_value_buf *vb,
struct ocfs2_refcount_tree *ref_tree,
struct buffer_head *ref_root_bh,
u32 cpos, u32 write_len,
struct ocfs2_post_refcount *post)
int ocfs2_add_refcount_flag(struct inode *inode,
struct ocfs2_extent_tree *data_et,
struct ocfs2_caching_info *ref_ci,
struct buffer_head *ref_root_bh,
u32 cpos, u32 p_cluster, u32 num_clusters,
struct ocfs2_cached_dealloc_ctxt *dealloc,
struct ocfs2_post_refcount *post)
static int ocfs2_change_ctime(struct inode *inode,
struct buffer_head *di_bh)
static int ocfs2_attach_refcount_tree(struct inode *inode,
struct buffer_head *di_bh)
static int ocfs2_add_refcounted_extent(struct inode *inode,
struct ocfs2_extent_tree *et,
struct ocfs2_caching_info *ref_ci,
struct buffer_head *ref_root_bh,
u32 cpos, u32 p_cluster, u32 num_clusters,
unsigned int ext_flags,
struct ocfs2_cached_dealloc_ctxt *dealloc)
static int ocfs2_duplicate_inline_data(struct inode *s_inode,
struct buffer_head *s_bh,
struct inode *t_inode,
struct buffer_head *t_bh)
static int ocfs2_duplicate_extent_list(struct inode *s_inode,
struct inode *t_inode,
struct buffer_head *t_bh,
struct ocfs2_caching_info *ref_ci,
struct buffer_head *ref_root_bh,
struct ocfs2_cached_dealloc_ctxt *dealloc)
static int ocfs2_complete_reflink(struct inode *s_inode,
struct buffer_head *s_bh,
struct inode *t_inode,
struct buffer_head *t_bh,
bool preserve)
static int ocfs2_create_reflink_node(struct inode *s_inode,
struct buffer_head *s_bh,
struct inode *t_inode,
struct buffer_head *t_bh,
bool preserve)
static int __ocfs2_reflink(struct dentry *old_dentry,
struct buffer_head *old_bh,
struct inode *new_inode,
bool preserve)
static int ocfs2_reflink(struct dentry *old_dentry, struct inode *dir,
struct dentry *new_dentry, bool preserve)
static inline int ocfs2_may_create(struct inode *dir, struct dentry *child)
static int ocfs2_user_path_parent(const char __user *path,
struct nameidata *nd, char **name)
static int ocfs2_vfs_reflink(struct dentry *old_dentry, struct inode *dir,
struct dentry *new_dentry, bool preserve)
int ocfs2_reflink_ioctl(struct inode *inode,
const char __user *oldname,
const char __user *newname,
bool preserve)
