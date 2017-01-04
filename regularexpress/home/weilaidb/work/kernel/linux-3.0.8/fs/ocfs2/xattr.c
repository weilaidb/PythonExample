struct ocfs2_xattr_def_value_root ;
struct ocfs2_xattr_bucket ;
struct ocfs2_xattr_set_ctxt ;
#define OCFS2_XATTR_ROOT_SIZE	(sizeof(struct ocfs2_xattr_def_value_root))
#define OCFS2_XATTR_INLINE_SIZE	80
#define OCFS2_XATTR_HEADER_GAP	4
#define OCFS2_XATTR_FREE_IN_IBODY	(OCFS2_MIN_XATTR_INLINE_SIZE \
- sizeof(struct ocfs2_xattr_header) \
- OCFS2_XATTR_HEADER_GAP)
#define OCFS2_XATTR_FREE_IN_BLOCK(ptr)	((ptr)->i_sb->s_blocksize \
- sizeof(struct ocfs2_xattr_block) \
- sizeof(struct ocfs2_xattr_header) \
- OCFS2_XATTR_HEADER_GAP)
static struct ocfs2_xattr_def_value_root def_xv = ;
const struct xattr_handler *ocfs2_xattr_handlers[] = ;
static const struct xattr_handler *ocfs2_xattr_handler_map[OCFS2_XATTR_MAX] = ;
struct ocfs2_xattr_info ;
struct ocfs2_xattr_search ;
struct ocfs2_xa_loc;
struct ocfs2_xa_loc_operations ;
struct ocfs2_xa_loc ;
static int namevalue_size(int name_len, uint64_t value_len)
static int namevalue_size_xi(struct ocfs2_xattr_info *xi)
static int namevalue_size_xe(struct ocfs2_xattr_entry *xe)
static int ocfs2_xattr_bucket_get_name_value(struct super_block *sb,
struct ocfs2_xattr_header *xh,
int index,
int *block_off,
int *new_offset);
static int ocfs2_xattr_block_find(struct inode *inode,
int name_index,
const char *name,
struct ocfs2_xattr_search *xs);
static int ocfs2_xattr_index_block_find(struct inode *inode,
struct buffer_head *root_bh,
int name_index,
const char *name,
struct ocfs2_xattr_search *xs);
static int ocfs2_xattr_tree_list_index_block(struct inode *inode,
struct buffer_head *blk_bh,
char *buffer,
size_t buffer_size);
static int ocfs2_xattr_create_index_block(struct inode *inode,
struct ocfs2_xattr_search *xs,
struct ocfs2_xattr_set_ctxt *ctxt);
static int ocfs2_xattr_set_entry_index_block(struct inode *inode,
struct ocfs2_xattr_info *xi,
struct ocfs2_xattr_search *xs,
struct ocfs2_xattr_set_ctxt *ctxt);
typedef int (xattr_tree_rec_func)(struct inode *inode,
struct buffer_head *root_bh,
u64 blkno, u32 cpos, u32 len, void *para);
static int ocfs2_iterate_xattr_index_block(struct inode *inode,
struct buffer_head *root_bh,
xattr_tree_rec_func *rec_func,
void *para);
static int ocfs2_delete_xattr_in_bucket(struct inode *inode,
struct ocfs2_xattr_bucket *bucket,
void *para);
static int ocfs2_rm_xattr_cluster(struct inode *inode,
struct buffer_head *root_bh,
u64 blkno,
u32 cpos,
u32 len,
void *para);
static int ocfs2_mv_xattr_buckets(struct inode *inode, handle_t *handle,
u64 src_blk, u64 last_blk, u64 to_blk,
unsigned int start_bucket,
u32 *first_hash);
static int ocfs2_prepare_refcount_xattr(struct inode *inode,
struct ocfs2_dinode *di,
struct ocfs2_xattr_info *xi,
struct ocfs2_xattr_search *xis,
struct ocfs2_xattr_search *xbs,
struct ocfs2_refcount_tree **ref_tree,
int *meta_need,
int *credits);
static int ocfs2_get_xattr_tree_value_root(struct super_block *sb,
struct ocfs2_xattr_bucket *bucket,
int offset,
struct ocfs2_xattr_value_root **xv,
struct buffer_head **bh);
static inline u16 ocfs2_xattr_buckets_per_cluster(struct ocfs2_super *osb)
static inline u16 ocfs2_blocks_per_xattr_bucket(struct super_block *sb)
#define bucket_blkno(_b) ((_b)->bu_bhs[0]->b_blocknr)
#define bucket_block(_b, _n) ((_b)->bu_bhs[(_n)]->b_data)
#define bucket_xh(_b) ((struct ocfs2_xattr_header *)bucket_block((_b), 0))
static struct ocfs2_xattr_bucket *ocfs2_xattr_bucket_new(struct inode *inode)
static void ocfs2_xattr_bucket_relse(struct ocfs2_xattr_bucket *bucket)
static void ocfs2_xattr_bucket_free(struct ocfs2_xattr_bucket *bucket)
static int ocfs2_init_xattr_bucket(struct ocfs2_xattr_bucket *bucket,
u64 xb_blkno)
static int ocfs2_read_xattr_bucket(struct ocfs2_xattr_bucket *bucket,
u64 xb_blkno)
static int ocfs2_xattr_bucket_journal_access(handle_t *handle,
struct ocfs2_xattr_bucket *bucket,
int type)
static void ocfs2_xattr_bucket_journal_dirty(handle_t *handle,
struct ocfs2_xattr_bucket *bucket)
static void ocfs2_xattr_bucket_copy_data(struct ocfs2_xattr_bucket *dest,
struct ocfs2_xattr_bucket *src)
static int ocfs2_validate_xattr_block(struct super_block *sb,
struct buffer_head *bh)
static int ocfs2_read_xattr_block(struct inode *inode, u64 xb_blkno,
struct buffer_head **bh)
static inline const char *ocfs2_xattr_prefix(int name_index)
static u32 ocfs2_xattr_name_hash(struct inode *inode,
const char *name,
int name_len)
static int ocfs2_xattr_entry_real_size(int name_len, size_t value_len)
static int ocfs2_xi_entry_usage(struct ocfs2_xattr_info *xi)
static int ocfs2_xe_entry_usage(struct ocfs2_xattr_entry *xe)
int ocfs2_calc_security_init(struct inode *dir,
struct ocfs2_security_xattr_info *si,
int *want_clusters,
int *xattr_credits,
struct ocfs2_alloc_context **xattr_ac)
int ocfs2_calc_xattr_init(struct inode *dir,
struct buffer_head *dir_bh,
int mode,
struct ocfs2_security_xattr_info *si,
int *want_clusters,
int *xattr_credits,
int *want_meta)
static int ocfs2_xattr_extend_allocation(struct inode *inode,
u32 clusters_to_add,
struct ocfs2_xattr_value_buf *vb,
struct ocfs2_xattr_set_ctxt *ctxt)
static int __ocfs2_remove_xattr_range(struct inode *inode,
struct ocfs2_xattr_value_buf *vb,
u32 cpos, u32 phys_cpos, u32 len,
unsigned int ext_flags,
struct ocfs2_xattr_set_ctxt *ctxt)
static int ocfs2_xattr_shrink_size(struct inode *inode,
u32 old_clusters,
u32 new_clusters,
struct ocfs2_xattr_value_buf *vb,
struct ocfs2_xattr_set_ctxt *ctxt)
static int ocfs2_xattr_value_truncate(struct inode *inode,
struct ocfs2_xattr_value_buf *vb,
int len,
struct ocfs2_xattr_set_ctxt *ctxt)
static int ocfs2_xattr_list_entry(char *buffer, size_t size,
size_t *result, const char *prefix,
const char *name, int name_len)
static int ocfs2_xattr_list_entries(struct inode *inode,
struct ocfs2_xattr_header *header,
char *buffer, size_t buffer_size)
int ocfs2_has_inline_xattr_value_outside(struct inode *inode,
struct ocfs2_dinode *di)
static int ocfs2_xattr_ibody_list(struct inode *inode,
struct ocfs2_dinode *di,
char *buffer,
size_t buffer_size)
static int ocfs2_xattr_block_list(struct inode *inode,
struct ocfs2_dinode *di,
char *buffer,
size_t buffer_size)
ssize_t ocfs2_listxattr(struct dentry *dentry,
char *buffer,
size_t size)
static int ocfs2_xattr_find_entry(int name_index,
const char *name,
struct ocfs2_xattr_search *xs)
static int ocfs2_xattr_get_value_outside(struct inode *inode,
struct ocfs2_xattr_value_root *xv,
void *buffer,
size_t len)
static int ocfs2_xattr_ibody_get(struct inode *inode,
int name_index,
const char *name,
void *buffer,
size_t buffer_size,
struct ocfs2_xattr_search *xs)
static int ocfs2_xattr_block_get(struct inode *inode,
int name_index,
const char *name,
void *buffer,
size_t buffer_size,
struct ocfs2_xattr_search *xs)
int ocfs2_xattr_get_nolock(struct inode *inode,
struct buffer_head *di_bh,
int name_index,
const char *name,
void *buffer,
size_t buffer_size)
static int ocfs2_xattr_get(struct inode *inode,
int name_index,
const char *name,
void *buffer,
size_t buffer_size)
static int __ocfs2_xattr_set_value_outside(struct inode *inode,
handle_t *handle,
struct ocfs2_xattr_value_buf *vb,
const void *value,
int value_len)
static int ocfs2_xa_check_space_helper(int needed_space, int free_start,
int num_entries)
static int ocfs2_xa_journal_access(handle_t *handle, struct ocfs2_xa_loc *loc,
int type)
static void ocfs2_xa_journal_dirty(handle_t *handle, struct ocfs2_xa_loc *loc)
static void *ocfs2_xa_offset_pointer(struct ocfs2_xa_loc *loc, int offset)
static void ocfs2_xa_wipe_namevalue(struct ocfs2_xa_loc *loc)
static int ocfs2_xa_get_free_start(struct ocfs2_xa_loc *loc)
static int ocfs2_xa_can_reuse_entry(struct ocfs2_xa_loc *loc,
struct ocfs2_xattr_info *xi)
static int ocfs2_xa_check_space(struct ocfs2_xa_loc *loc,
struct ocfs2_xattr_info *xi)
static void ocfs2_xa_add_entry(struct ocfs2_xa_loc *loc, u32 name_hash)
static void ocfs2_xa_add_namevalue(struct ocfs2_xa_loc *loc,
struct ocfs2_xattr_info *xi)
static void ocfs2_xa_fill_value_buf(struct ocfs2_xa_loc *loc,
struct ocfs2_xattr_value_buf *vb)
static int ocfs2_xa_block_journal_access(handle_t *handle,
struct ocfs2_xa_loc *loc, int type)
static void ocfs2_xa_block_journal_dirty(handle_t *handle,
struct ocfs2_xa_loc *loc)
static void *ocfs2_xa_block_offset_pointer(struct ocfs2_xa_loc *loc,
int offset)
static int ocfs2_xa_block_can_reuse(struct ocfs2_xa_loc *loc,
struct ocfs2_xattr_info *xi)
static int ocfs2_xa_block_get_free_start(struct ocfs2_xa_loc *loc)
static int ocfs2_xa_block_check_space(struct ocfs2_xa_loc *loc,
struct ocfs2_xattr_info *xi)
static void ocfs2_xa_block_wipe_namevalue(struct ocfs2_xa_loc *loc)
static void ocfs2_xa_block_add_entry(struct ocfs2_xa_loc *loc, u32 name_hash)
static void ocfs2_xa_block_add_namevalue(struct ocfs2_xa_loc *loc, int size)
static void ocfs2_xa_block_fill_value_buf(struct ocfs2_xa_loc *loc,
struct ocfs2_xattr_value_buf *vb)
static const struct ocfs2_xa_loc_operations ocfs2_xa_block_loc_ops = ;
static int ocfs2_xa_bucket_journal_access(handle_t *handle,
struct ocfs2_xa_loc *loc, int type)
static void ocfs2_xa_bucket_journal_dirty(handle_t *handle,
struct ocfs2_xa_loc *loc)
static void *ocfs2_xa_bucket_offset_pointer(struct ocfs2_xa_loc *loc,
int offset)
static int ocfs2_xa_bucket_can_reuse(struct ocfs2_xa_loc *loc,
struct ocfs2_xattr_info *xi)
static int ocfs2_xa_bucket_get_free_start(struct ocfs2_xa_loc *loc)
static int ocfs2_bucket_align_free_start(struct super_block *sb,
int free_start, int size)
static int ocfs2_xa_bucket_check_space(struct ocfs2_xa_loc *loc,
struct ocfs2_xattr_info *xi)
static void ocfs2_xa_bucket_wipe_namevalue(struct ocfs2_xa_loc *loc)
static void ocfs2_xa_bucket_add_entry(struct ocfs2_xa_loc *loc, u32 name_hash)
static void ocfs2_xa_bucket_add_namevalue(struct ocfs2_xa_loc *loc, int size)
static void ocfs2_xa_bucket_fill_value_buf(struct ocfs2_xa_loc *loc,
struct ocfs2_xattr_value_buf *vb)
static const struct ocfs2_xa_loc_operations ocfs2_xa_bucket_loc_ops = ;
static unsigned int ocfs2_xa_value_clusters(struct ocfs2_xa_loc *loc)
static int ocfs2_xa_value_truncate(struct ocfs2_xa_loc *loc, u64 bytes,
struct ocfs2_xattr_set_ctxt *ctxt)
static void ocfs2_xa_remove_entry(struct ocfs2_xa_loc *loc)
static void ocfs2_xa_cleanup_value_truncate(struct ocfs2_xa_loc *loc,
const char *what,
unsigned int orig_clusters)
static int ocfs2_xa_remove(struct ocfs2_xa_loc *loc,
struct ocfs2_xattr_set_ctxt *ctxt)
static void ocfs2_xa_install_value_root(struct ocfs2_xa_loc *loc)
static int ocfs2_xa_reuse_entry(struct ocfs2_xa_loc *loc,
struct ocfs2_xattr_info *xi,
struct ocfs2_xattr_set_ctxt *ctxt)
static int ocfs2_xa_prepare_entry(struct ocfs2_xa_loc *loc,
struct ocfs2_xattr_info *xi,
u32 name_hash,
struct ocfs2_xattr_set_ctxt *ctxt)
static int ocfs2_xa_store_value(struct ocfs2_xa_loc *loc,
struct ocfs2_xattr_info *xi,
struct ocfs2_xattr_set_ctxt *ctxt)
static int ocfs2_xa_set(struct ocfs2_xa_loc *loc,
struct ocfs2_xattr_info *xi,
struct ocfs2_xattr_set_ctxt *ctxt)
static void ocfs2_init_dinode_xa_loc(struct ocfs2_xa_loc *loc,
struct inode *inode,
struct buffer_head *bh,
struct ocfs2_xattr_entry *entry)
static void ocfs2_init_xattr_block_xa_loc(struct ocfs2_xa_loc *loc,
struct inode *inode,
struct buffer_head *bh,
struct ocfs2_xattr_entry *entry)
static void ocfs2_init_xattr_bucket_xa_loc(struct ocfs2_xa_loc *loc,
struct ocfs2_xattr_bucket *bucket,
struct ocfs2_xattr_entry *entry)
static int ocfs2_lock_xattr_remove_allocators(struct inode *inode,
struct ocfs2_xattr_value_root *xv,
struct ocfs2_caching_info *ref_ci,
struct buffer_head *ref_root_bh,
struct ocfs2_alloc_context **meta_ac,
int *ref_credits)
static int ocfs2_remove_value_outside(struct inode*inode,
struct ocfs2_xattr_value_buf *vb,
struct ocfs2_xattr_header *header,
struct ocfs2_caching_info *ref_ci,
struct buffer_head *ref_root_bh)
static int ocfs2_xattr_ibody_remove(struct inode *inode,
struct buffer_head *di_bh,
struct ocfs2_caching_info *ref_ci,
struct buffer_head *ref_root_bh)
struct ocfs2_rm_xattr_bucket_para ;
static int ocfs2_xattr_block_remove(struct inode *inode,
struct buffer_head *blk_bh,
struct ocfs2_caching_info *ref_ci,
struct buffer_head *ref_root_bh)
static int ocfs2_xattr_free_block(struct inode *inode,
u64 block,
struct ocfs2_caching_info *ref_ci,
struct buffer_head *ref_root_bh)
int ocfs2_xattr_remove(struct inode *inode, struct buffer_head *di_bh)
static int ocfs2_xattr_has_space_inline(struct inode *inode,
struct ocfs2_dinode *di)
static int ocfs2_xattr_ibody_find(struct inode *inode,
int name_index,
const char *name,
struct ocfs2_xattr_search *xs)
static int ocfs2_xattr_ibody_init(struct inode *inode,
struct buffer_head *di_bh,
struct ocfs2_xattr_set_ctxt *ctxt)
static int ocfs2_xattr_ibody_set(struct inode *inode,
struct ocfs2_xattr_info *xi,
struct ocfs2_xattr_search *xs,
struct ocfs2_xattr_set_ctxt *ctxt)
static int ocfs2_xattr_block_find(struct inode *inode,
int name_index,
const char *name,
struct ocfs2_xattr_search *xs)
static int ocfs2_create_xattr_block(struct inode *inode,
struct buffer_head *inode_bh,
struct ocfs2_xattr_set_ctxt *ctxt,
int indexed,
struct buffer_head **ret_bh)
static int ocfs2_xattr_block_set(struct inode *inode,
struct ocfs2_xattr_info *xi,
struct ocfs2_xattr_search *xs,
struct ocfs2_xattr_set_ctxt *ctxt)
static int ocfs2_xattr_can_be_in_inode(struct inode *inode,
struct ocfs2_xattr_info *xi,
struct ocfs2_xattr_search *xs)
static int ocfs2_calc_xattr_set_need(struct inode *inode,
struct ocfs2_dinode *di,
struct ocfs2_xattr_info *xi,
struct ocfs2_xattr_search *xis,
struct ocfs2_xattr_search *xbs,
int *clusters_need,
int *meta_need,
int *credits_need)
static int ocfs2_init_xattr_set_ctxt(struct inode *inode,
struct ocfs2_dinode *di,
struct ocfs2_xattr_info *xi,
struct ocfs2_xattr_search *xis,
struct ocfs2_xattr_search *xbs,
struct ocfs2_xattr_set_ctxt *ctxt,
int extra_meta,
int *credits)
static int __ocfs2_xattr_set_handle(struct inode *inode,
struct ocfs2_dinode *di,
struct ocfs2_xattr_info *xi,
struct ocfs2_xattr_search *xis,
struct ocfs2_xattr_search *xbs,
struct ocfs2_xattr_set_ctxt *ctxt)
int ocfs2_xattr_set_handle(handle_t *handle,
struct inode *inode,
struct buffer_head *di_bh,
int name_index,
const char *name,
const void *value,
size_t value_len,
int flags,
struct ocfs2_alloc_context *meta_ac,
struct ocfs2_alloc_context *data_ac)
int ocfs2_xattr_set(struct inode *inode,
int name_index,
const char *name,
const void *value,
size_t value_len,
int flags)
static int ocfs2_xattr_get_rec(struct inode *inode,
u32 name_hash,
u64 *p_blkno,
u32 *e_cpos,
u32 *num_clusters,
struct ocfs2_extent_list *el)
typedef int (xattr_bucket_func)(struct inode *inode,
struct ocfs2_xattr_bucket *bucket,
void *para);
static int ocfs2_find_xe_in_bucket(struct inode *inode,
struct ocfs2_xattr_bucket *bucket,
int name_index,
const char *name,
u32 name_hash,
u16 *xe_index,
int *found)
static int ocfs2_xattr_bucket_find(struct inode *inode,
int name_index,
const char *name,
u32 name_hash,
u64 p_blkno,
u32 first_hash,
u32 num_clusters,
struct ocfs2_xattr_search *xs)
static int ocfs2_xattr_index_block_find(struct inode *inode,
struct buffer_head *root_bh,
int name_index,
const char *name,
struct ocfs2_xattr_search *xs)
static int ocfs2_iterate_xattr_buckets(struct inode *inode,
u64 blkno,
u32 clusters,
xattr_bucket_func *func,
void *para)
struct ocfs2_xattr_tree_list ;
static int ocfs2_xattr_bucket_get_name_value(struct super_block *sb,
struct ocfs2_xattr_header *xh,
int index,
int *block_off,
int *new_offset)
static int ocfs2_list_xattr_bucket(struct inode *inode,
struct ocfs2_xattr_bucket *bucket,
void *para)
static int ocfs2_iterate_xattr_index_block(struct inode *inode,
struct buffer_head *blk_bh,
xattr_tree_rec_func *rec_func,
void *para)
static int ocfs2_list_xattr_tree_rec(struct inode *inode,
struct buffer_head *root_bh,
u64 blkno, u32 cpos, u32 len, void *para)
static int ocfs2_xattr_tree_list_index_block(struct inode *inode,
struct buffer_head *blk_bh,
char *buffer,
size_t buffer_size)
static int cmp_xe(const void *a, const void *b)
static void swap_xe(void *a, void *b, int size)
static void ocfs2_cp_xattr_block_to_bucket(struct inode *inode,
struct buffer_head *xb_bh,
struct ocfs2_xattr_bucket *bucket)
static void ocfs2_xattr_update_xattr_search(struct inode *inode,
struct ocfs2_xattr_search *xs,
struct buffer_head *old_bh)
static int ocfs2_xattr_create_index_block(struct inode *inode,
struct ocfs2_xattr_search *xs,
struct ocfs2_xattr_set_ctxt *ctxt)
static int cmp_xe_offset(const void *a, const void *b)
static int ocfs2_defrag_xattr_bucket(struct inode *inode,
handle_t *handle,
struct ocfs2_xattr_bucket *bucket)
static int ocfs2_mv_xattr_bucket_cross_cluster(struct inode *inode,
handle_t *handle,
struct ocfs2_xattr_bucket *first,
struct ocfs2_xattr_bucket *target,
u64 new_blkno,
u32 num_clusters,
u32 *first_hash)
static int ocfs2_xattr_find_divide_pos(struct ocfs2_xattr_header *xh)
static int ocfs2_divide_xattr_bucket(struct inode *inode,
handle_t *handle,
u64 blk,
u64 new_blk,
u32 *first_hash,
int new_bucket_head)
static int ocfs2_cp_xattr_bucket(struct inode *inode,
handle_t *handle,
u64 s_blkno,
u64 t_blkno,
int t_is_new)
static int ocfs2_mv_xattr_buckets(struct inode *inode, handle_t *handle,
u64 src_blk, u64 last_blk, u64 to_blk,
unsigned int start_bucket,
u32 *first_hash)
static int ocfs2_divide_xattr_cluster(struct inode *inode,
handle_t *handle,
u64 prev_blk,
u64 new_blk,
u32 *first_hash)
static int ocfs2_adjust_xattr_cross_cluster(struct inode *inode,
handle_t *handle,
struct ocfs2_xattr_bucket *first,
struct ocfs2_xattr_bucket *target,
u64 new_blk,
u32 prev_clusters,
u32 *v_start,
int *extend)
static int ocfs2_add_new_xattr_cluster(struct inode *inode,
struct buffer_head *root_bh,
struct ocfs2_xattr_bucket *first,
struct ocfs2_xattr_bucket *target,
u32 *num_clusters,
u32 prev_cpos,
int *extend,
struct ocfs2_xattr_set_ctxt *ctxt)
static int ocfs2_extend_xattr_bucket(struct inode *inode,
handle_t *handle,
struct ocfs2_xattr_bucket *first,
u64 target_blk,
u32 num_clusters)
static int ocfs2_add_new_xattr_bucket(struct inode *inode,
struct buffer_head *xb_bh,
struct ocfs2_xattr_bucket *target,
struct ocfs2_xattr_set_ctxt *ctxt)
static inline char *ocfs2_xattr_bucket_get_val(struct inode *inode,
struct ocfs2_xattr_bucket *bucket,
int offs)
static int ocfs2_xattr_bucket_value_truncate(struct inode *inode,
struct ocfs2_xattr_bucket *bucket,
int xe_off,
int len,
struct ocfs2_xattr_set_ctxt *ctxt)
static int ocfs2_rm_xattr_cluster(struct inode *inode,
struct buffer_head *root_bh,
u64 blkno,
u32 cpos,
u32 len,
void *para)
static int ocfs2_check_xattr_bucket_collision(struct inode *inode,
struct ocfs2_xattr_bucket *bucket,
const char *name)
static int ocfs2_xattr_set_entry_bucket(struct inode *inode,
struct ocfs2_xattr_info *xi,
struct ocfs2_xattr_search *xs,
struct ocfs2_xattr_set_ctxt *ctxt)
static int ocfs2_xattr_set_entry_index_block(struct inode *inode,
struct ocfs2_xattr_info *xi,
struct ocfs2_xattr_search *xs,
struct ocfs2_xattr_set_ctxt *ctxt)
static int ocfs2_delete_xattr_in_bucket(struct inode *inode,
struct ocfs2_xattr_bucket *bucket,
void *para)
static int ocfs2_xattr_bucket_post_refcount(struct inode *inode,
handle_t *handle,
void *para)
static int ocfs2_prepare_refcount_xattr(struct inode *inode,
struct ocfs2_dinode *di,
struct ocfs2_xattr_info *xi,
struct ocfs2_xattr_search *xis,
struct ocfs2_xattr_search *xbs,
struct ocfs2_refcount_tree **ref_tree,
int *meta_add,
int *credits)
static int ocfs2_xattr_value_attach_refcount(struct inode *inode,
struct ocfs2_xattr_value_root *xv,
struct ocfs2_extent_tree *value_et,
struct ocfs2_caching_info *ref_ci,
struct buffer_head *ref_root_bh,
struct ocfs2_cached_dealloc_ctxt *dealloc,
struct ocfs2_post_refcount *refcount)
static int ocfs2_xattr_attach_refcount_normal(struct inode *inode,
struct ocfs2_xattr_value_buf *vb,
struct ocfs2_xattr_header *header,
struct ocfs2_caching_info *ref_ci,
struct buffer_head *ref_root_bh,
struct ocfs2_cached_dealloc_ctxt *dealloc)
static int ocfs2_xattr_inline_attach_refcount(struct inode *inode,
struct buffer_head *fe_bh,
struct ocfs2_caching_info *ref_ci,
struct buffer_head *ref_root_bh,
struct ocfs2_cached_dealloc_ctxt *dealloc)
struct ocfs2_xattr_tree_value_refcount_para ;
static int ocfs2_get_xattr_tree_value_root(struct super_block *sb,
struct ocfs2_xattr_bucket *bucket,
int offset,
struct ocfs2_xattr_value_root **xv,
struct buffer_head **bh)
static int ocfs2_xattr_bucket_value_refcount(struct inode *inode,
struct ocfs2_xattr_bucket *bucket,
void *para)
static int ocfs2_refcount_xattr_tree_rec(struct inode *inode,
struct buffer_head *root_bh,
u64 blkno, u32 cpos, u32 len, void *para)
static int ocfs2_xattr_block_attach_refcount(struct inode *inode,
struct buffer_head *blk_bh,
struct ocfs2_caching_info *ref_ci,
struct buffer_head *ref_root_bh,
struct ocfs2_cached_dealloc_ctxt *dealloc)
int ocfs2_xattr_attach_refcount_tree(struct inode *inode,
struct buffer_head *fe_bh,
struct ocfs2_caching_info *ref_ci,
struct buffer_head *ref_root_bh,
struct ocfs2_cached_dealloc_ctxt *dealloc)
typedef int (should_xattr_reflinked)(struct ocfs2_xattr_entry *xe);
struct ocfs2_xattr_reflink ;
typedef int (get_xattr_value_root)(struct super_block *sb,
struct buffer_head *bh,
struct ocfs2_xattr_header *xh,
int offset,
struct ocfs2_xattr_value_root **xv,
struct buffer_head **ret_bh,
void *para);
static int ocfs2_value_metas_in_xattr_header(struct super_block *sb,
struct buffer_head *bh,
struct ocfs2_xattr_header *xh,
int *metas, int *credits,
int *num_recs,
get_xattr_value_root *func,
void *para)
static int ocfs2_get_xattr_value_root(struct super_block *sb,
struct buffer_head *bh,
struct ocfs2_xattr_header *xh,
int offset,
struct ocfs2_xattr_value_root **xv,
struct buffer_head **ret_bh,
void *para)
static int ocfs2_reflink_lock_xattr_allocators(struct ocfs2_super *osb,
struct ocfs2_xattr_header *xh,
struct buffer_head *ref_root_bh,
int *credits,
struct ocfs2_alloc_context **meta_ac)
static int ocfs2_reflink_xattr_header(handle_t *handle,
struct ocfs2_xattr_reflink *args,
struct buffer_head *old_bh,
struct ocfs2_xattr_header *xh,
struct buffer_head *new_bh,
struct ocfs2_xattr_header *new_xh,
struct ocfs2_xattr_value_buf *vb,
struct ocfs2_alloc_context *meta_ac,
get_xattr_value_root *func,
void *para)
static int ocfs2_reflink_xattr_inline(struct ocfs2_xattr_reflink *args)
static int ocfs2_create_empty_xattr_block(struct inode *inode,
struct buffer_head *fe_bh,
struct buffer_head **ret_bh,
int indexed)
static int ocfs2_reflink_xattr_block(struct ocfs2_xattr_reflink *args,
struct buffer_head *blk_bh,
struct buffer_head *new_blk_bh)
struct ocfs2_reflink_xattr_tree_args ;
static int ocfs2_get_reflink_xattr_value_root(struct super_block *sb,
struct buffer_head *bh,
struct ocfs2_xattr_header *xh,
int offset,
struct ocfs2_xattr_value_root **xv,
struct buffer_head **ret_bh,
void *para)
struct ocfs2_value_tree_metas ;
static int ocfs2_value_tree_metas_in_bucket(struct super_block *sb,
struct buffer_head *bh,
struct ocfs2_xattr_header *xh,
int offset,
struct ocfs2_xattr_value_root **xv,
struct buffer_head **ret_bh,
void *para)
static int ocfs2_calc_value_tree_metas(struct inode *inode,
struct ocfs2_xattr_bucket *bucket,
void *para)
static int ocfs2_lock_reflink_xattr_rec_allocators(
struct ocfs2_reflink_xattr_tree_args *args,
struct ocfs2_extent_tree *xt_et,
u64 blkno, u32 len, int *credits,
struct ocfs2_alloc_context **meta_ac,
struct ocfs2_alloc_context **data_ac)
static int ocfs2_reflink_xattr_bucket(handle_t *handle,
u64 blkno, u64 new_blkno, u32 clusters,
u32 *cpos, int num_buckets,
struct ocfs2_alloc_context *meta_ac,
struct ocfs2_alloc_context *data_ac,
struct ocfs2_reflink_xattr_tree_args *args)
static int ocfs2_reflink_xattr_buckets(handle_t *handle,
struct inode *inode,
struct ocfs2_reflink_xattr_tree_args *args,
struct ocfs2_extent_tree *et,
struct ocfs2_alloc_context *meta_ac,
struct ocfs2_alloc_context *data_ac,
u64 blkno, u32 cpos, u32 len)
static int ocfs2_reflink_xattr_rec(struct inode *inode,
struct buffer_head *root_bh,
u64 blkno,
u32 cpos,
u32 len,
void *para)
static int ocfs2_reflink_xattr_tree(struct ocfs2_xattr_reflink *args,
struct buffer_head *blk_bh,
struct buffer_head *new_blk_bh)
static int ocfs2_reflink_xattr_in_block(struct ocfs2_xattr_reflink *args,
struct buffer_head *blk_bh)
static int ocfs2_reflink_xattr_no_security(struct ocfs2_xattr_entry *xe)
int ocfs2_reflink_xattrs(struct inode *old_inode,
struct buffer_head *old_bh,
struct inode *new_inode,
struct buffer_head *new_bh,
bool preserve_security)
int ocfs2_init_security_and_acl(struct inode *dir,
struct inode *inode,
const struct qstr *qstr)
static size_t ocfs2_xattr_security_list(struct dentry *dentry, char *list,
size_t list_size, const char *name,
size_t name_len, int type)
static int ocfs2_xattr_security_get(struct dentry *dentry, const char *name,
void *buffer, size_t size, int type)
static int ocfs2_xattr_security_set(struct dentry *dentry, const char *name,
const void *value, size_t size, int flags, int type)
int ocfs2_init_security_get(struct inode *inode,
struct inode *dir,
const struct qstr *qstr,
struct ocfs2_security_xattr_info *si)
int ocfs2_init_security_set(handle_t *handle,
struct inode *inode,
struct buffer_head *di_bh,
struct ocfs2_security_xattr_info *si,
struct ocfs2_alloc_context *xattr_ac,
struct ocfs2_alloc_context *data_ac)
const struct xattr_handler ocfs2_xattr_security_handler = ;
static size_t ocfs2_xattr_trusted_list(struct dentry *dentry, char *list,
size_t list_size, const char *name,
size_t name_len, int type)
static int ocfs2_xattr_trusted_get(struct dentry *dentry, const char *name,
void *buffer, size_t size, int type)
static int ocfs2_xattr_trusted_set(struct dentry *dentry, const char *name,
const void *value, size_t size, int flags, int type)
const struct xattr_handler ocfs2_xattr_trusted_handler = ;
static size_t ocfs2_xattr_user_list(struct dentry *dentry, char *list,
size_t list_size, const char *name,
size_t name_len, int type)
static int ocfs2_xattr_user_get(struct dentry *dentry, const char *name,
void *buffer, size_t size, int type)
static int ocfs2_xattr_user_set(struct dentry *dentry, const char *name,
const void *value, size_t size, int flags, int type)
const struct xattr_handler ocfs2_xattr_user_handler = ;
