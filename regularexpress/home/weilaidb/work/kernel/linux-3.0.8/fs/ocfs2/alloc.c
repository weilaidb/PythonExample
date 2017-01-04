enum ocfs2_contig_type ;
static enum ocfs2_contig_type
ocfs2_extent_rec_contig(struct super_block *sb,
struct ocfs2_extent_rec *ext,
struct ocfs2_extent_rec *insert_rec);
struct ocfs2_extent_tree_operations ;
static u64 ocfs2_dinode_get_last_eb_blk(struct ocfs2_extent_tree *et);
static void ocfs2_dinode_set_last_eb_blk(struct ocfs2_extent_tree *et,
u64 blkno);
static void ocfs2_dinode_update_clusters(struct ocfs2_extent_tree *et,
u32 clusters);
static void ocfs2_dinode_extent_map_insert(struct ocfs2_extent_tree *et,
struct ocfs2_extent_rec *rec);
static void ocfs2_dinode_extent_map_truncate(struct ocfs2_extent_tree *et,
u32 clusters);
static int ocfs2_dinode_insert_check(struct ocfs2_extent_tree *et,
struct ocfs2_extent_rec *rec);
static int ocfs2_dinode_sanity_check(struct ocfs2_extent_tree *et);
static void ocfs2_dinode_fill_root_el(struct ocfs2_extent_tree *et);
static struct ocfs2_extent_tree_operations ocfs2_dinode_et_ops = ;
static void ocfs2_dinode_set_last_eb_blk(struct ocfs2_extent_tree *et,
u64 blkno)
static u64 ocfs2_dinode_get_last_eb_blk(struct ocfs2_extent_tree *et)
static void ocfs2_dinode_update_clusters(struct ocfs2_extent_tree *et,
u32 clusters)
static void ocfs2_dinode_extent_map_insert(struct ocfs2_extent_tree *et,
struct ocfs2_extent_rec *rec)
static void ocfs2_dinode_extent_map_truncate(struct ocfs2_extent_tree *et,
u32 clusters)
static int ocfs2_dinode_insert_check(struct ocfs2_extent_tree *et,
struct ocfs2_extent_rec *rec)
static int ocfs2_dinode_sanity_check(struct ocfs2_extent_tree *et)
static void ocfs2_dinode_fill_root_el(struct ocfs2_extent_tree *et)
static void ocfs2_xattr_value_fill_root_el(struct ocfs2_extent_tree *et)
static void ocfs2_xattr_value_set_last_eb_blk(struct ocfs2_extent_tree *et,
u64 blkno)
static u64 ocfs2_xattr_value_get_last_eb_blk(struct ocfs2_extent_tree *et)
static void ocfs2_xattr_value_update_clusters(struct ocfs2_extent_tree *et,
u32 clusters)
static struct ocfs2_extent_tree_operations ocfs2_xattr_value_et_ops = ;
static void ocfs2_xattr_tree_fill_root_el(struct ocfs2_extent_tree *et)
static void ocfs2_xattr_tree_fill_max_leaf_clusters(struct ocfs2_extent_tree *et)
static void ocfs2_xattr_tree_set_last_eb_blk(struct ocfs2_extent_tree *et,
u64 blkno)
static u64 ocfs2_xattr_tree_get_last_eb_blk(struct ocfs2_extent_tree *et)
static void ocfs2_xattr_tree_update_clusters(struct ocfs2_extent_tree *et,
u32 clusters)
static struct ocfs2_extent_tree_operations ocfs2_xattr_tree_et_ops = ;
static void ocfs2_dx_root_set_last_eb_blk(struct ocfs2_extent_tree *et,
u64 blkno)
static u64 ocfs2_dx_root_get_last_eb_blk(struct ocfs2_extent_tree *et)
static void ocfs2_dx_root_update_clusters(struct ocfs2_extent_tree *et,
u32 clusters)
static int ocfs2_dx_root_sanity_check(struct ocfs2_extent_tree *et)
static void ocfs2_dx_root_fill_root_el(struct ocfs2_extent_tree *et)
static struct ocfs2_extent_tree_operations ocfs2_dx_root_et_ops = ;
static void ocfs2_refcount_tree_fill_root_el(struct ocfs2_extent_tree *et)
static void ocfs2_refcount_tree_set_last_eb_blk(struct ocfs2_extent_tree *et,
u64 blkno)
static u64 ocfs2_refcount_tree_get_last_eb_blk(struct ocfs2_extent_tree *et)
static void ocfs2_refcount_tree_update_clusters(struct ocfs2_extent_tree *et,
u32 clusters)
static enum ocfs2_contig_type
ocfs2_refcount_tree_extent_contig(struct ocfs2_extent_tree *et,
struct ocfs2_extent_rec *ext,
struct ocfs2_extent_rec *insert_rec)
static struct ocfs2_extent_tree_operations ocfs2_refcount_tree_et_ops = ;
static void __ocfs2_init_extent_tree(struct ocfs2_extent_tree *et,
struct ocfs2_caching_info *ci,
struct buffer_head *bh,
ocfs2_journal_access_func access,
void *obj,
struct ocfs2_extent_tree_operations *ops)
void ocfs2_init_dinode_extent_tree(struct ocfs2_extent_tree *et,
struct ocfs2_caching_info *ci,
struct buffer_head *bh)
void ocfs2_init_xattr_tree_extent_tree(struct ocfs2_extent_tree *et,
struct ocfs2_caching_info *ci,
struct buffer_head *bh)
void ocfs2_init_xattr_value_extent_tree(struct ocfs2_extent_tree *et,
struct ocfs2_caching_info *ci,
struct ocfs2_xattr_value_buf *vb)
void ocfs2_init_dx_root_extent_tree(struct ocfs2_extent_tree *et,
struct ocfs2_caching_info *ci,
struct buffer_head *bh)
void ocfs2_init_refcount_extent_tree(struct ocfs2_extent_tree *et,
struct ocfs2_caching_info *ci,
struct buffer_head *bh)
static inline void ocfs2_et_set_last_eb_blk(struct ocfs2_extent_tree *et,
u64 new_last_eb_blk)
static inline u64 ocfs2_et_get_last_eb_blk(struct ocfs2_extent_tree *et)
static inline void ocfs2_et_update_clusters(struct ocfs2_extent_tree *et,
u32 clusters)
static inline void ocfs2_et_extent_map_insert(struct ocfs2_extent_tree *et,
struct ocfs2_extent_rec *rec)
static inline void ocfs2_et_extent_map_truncate(struct ocfs2_extent_tree *et,
u32 clusters)
static inline int ocfs2_et_root_journal_access(handle_t *handle,
struct ocfs2_extent_tree *et,
int type)
static inline enum ocfs2_contig_type
ocfs2_et_extent_contig(struct ocfs2_extent_tree *et,
struct ocfs2_extent_rec *rec,
struct ocfs2_extent_rec *insert_rec)
static inline int ocfs2_et_insert_check(struct ocfs2_extent_tree *et,
struct ocfs2_extent_rec *rec)
static inline int ocfs2_et_sanity_check(struct ocfs2_extent_tree *et)
static int ocfs2_cache_extent_block_free(struct ocfs2_cached_dealloc_ctxt *ctxt,
struct ocfs2_extent_block *eb);
static void ocfs2_adjust_rightmost_records(handle_t *handle,
struct ocfs2_extent_tree *et,
struct ocfs2_path *path,
struct ocfs2_extent_rec *insert_rec);
void ocfs2_reinit_path(struct ocfs2_path *path, int keep_root)
void ocfs2_free_path(struct ocfs2_path *path)
static void ocfs2_cp_path(struct ocfs2_path *dest, struct ocfs2_path *src)
static void ocfs2_mv_path(struct ocfs2_path *dest, struct ocfs2_path *src)
static inline void ocfs2_path_insert_eb(struct ocfs2_path *path, int index,
struct buffer_head *eb_bh)
static struct ocfs2_path *ocfs2_new_path(struct buffer_head *root_bh,
struct ocfs2_extent_list *root_el,
ocfs2_journal_access_func access)
struct ocfs2_path *ocfs2_new_path_from_path(struct ocfs2_path *path)
struct ocfs2_path *ocfs2_new_path_from_et(struct ocfs2_extent_tree *et)
int ocfs2_path_bh_journal_access(handle_t *handle,
struct ocfs2_caching_info *ci,
struct ocfs2_path *path,
int idx)
int ocfs2_journal_access_path(struct ocfs2_caching_info *ci,
handle_t *handle,
struct ocfs2_path *path)
int ocfs2_search_extent_list(struct ocfs2_extent_list *el, u32 v_cluster)
static int ocfs2_block_extent_contig(struct super_block *sb,
struct ocfs2_extent_rec *ext,
u64 blkno)
static int ocfs2_extents_adjacent(struct ocfs2_extent_rec *left,
struct ocfs2_extent_rec *right)
static enum ocfs2_contig_type
ocfs2_extent_rec_contig(struct super_block *sb,
struct ocfs2_extent_rec *ext,
struct ocfs2_extent_rec *insert_rec)
enum ocfs2_append_type ;
enum ocfs2_split_type ;
struct ocfs2_insert_type ;
struct ocfs2_merge_ctxt ;
static int ocfs2_validate_extent_block(struct super_block *sb,
struct buffer_head *bh)
int ocfs2_read_extent_block(struct ocfs2_caching_info *ci, u64 eb_blkno,
struct buffer_head **bh)
int ocfs2_num_free_extents(struct ocfs2_super *osb,
struct ocfs2_extent_tree *et)
static int ocfs2_create_new_meta_bhs(handle_t *handle,
struct ocfs2_extent_tree *et,
int wanted,
struct ocfs2_alloc_context *meta_ac,
struct buffer_head *bhs[])
static inline u32 ocfs2_sum_rightmost_rec(struct ocfs2_extent_list  *el)
static int ocfs2_adjust_rightmost_branch(handle_t *handle,
struct ocfs2_extent_tree *et)
static int ocfs2_add_branch(handle_t *handle,
struct ocfs2_extent_tree *et,
struct buffer_head *eb_bh,
struct buffer_head **last_eb_bh,
struct ocfs2_alloc_context *meta_ac)
static int ocfs2_shift_tree_depth(handle_t *handle,
struct ocfs2_extent_tree *et,
struct ocfs2_alloc_context *meta_ac,
struct buffer_head **ret_new_eb_bh)
static int ocfs2_find_branch_target(struct ocfs2_extent_tree *et,
struct buffer_head **target_bh)
static int ocfs2_grow_tree(handle_t *handle, struct ocfs2_extent_tree *et,
int *final_depth, struct buffer_head **last_eb_bh,
struct ocfs2_alloc_context *meta_ac)
static void ocfs2_shift_records_right(struct ocfs2_extent_list *el)
static void ocfs2_rotate_leaf(struct ocfs2_extent_list *el,
struct ocfs2_extent_rec *insert_rec)
static void ocfs2_remove_empty_extent(struct ocfs2_extent_list *el)
static void ocfs2_create_empty_extent(struct ocfs2_extent_list *el)
int ocfs2_find_subtree_root(struct ocfs2_extent_tree *et,
struct ocfs2_path *left,
struct ocfs2_path *right)
typedef void (path_insert_t)(void *, struct buffer_head *);
static int __ocfs2_find_path(struct ocfs2_caching_info *ci,
struct ocfs2_extent_list *root_el, u32 cpos,
path_insert_t *func, void *data)
struct find_path_data ;
static void find_path_ins(void *data, struct buffer_head *bh)
int ocfs2_find_path(struct ocfs2_caching_info *ci,
struct ocfs2_path *path, u32 cpos)
static void find_leaf_ins(void *data, struct buffer_head *bh)
int ocfs2_find_leaf(struct ocfs2_caching_info *ci,
struct ocfs2_extent_list *root_el, u32 cpos,
struct buffer_head **leaf_bh)
static void ocfs2_adjust_adjacent_records(struct ocfs2_extent_rec *left_rec,
struct ocfs2_extent_list *left_child_el,
struct ocfs2_extent_rec *right_rec,
struct ocfs2_extent_list *right_child_el)
static void ocfs2_adjust_root_records(struct ocfs2_extent_list *root_el,
struct ocfs2_extent_list *left_el,
struct ocfs2_extent_list *right_el,
u64 left_el_blkno)
static void ocfs2_complete_edge_insert(handle_t *handle,
struct ocfs2_path *left_path,
struct ocfs2_path *right_path,
int subtree_index)
static int ocfs2_rotate_subtree_right(handle_t *handle,
struct ocfs2_extent_tree *et,
struct ocfs2_path *left_path,
struct ocfs2_path *right_path,
int subtree_index)
int ocfs2_find_cpos_for_left_leaf(struct super_block *sb,
struct ocfs2_path *path, u32 *cpos)
static int ocfs2_extend_rotate_transaction(handle_t *handle, int subtree_depth,
int op_credits,
struct ocfs2_path *path)
static int ocfs2_rotate_requires_path_adjustment(struct ocfs2_path *left_path,
u32 insert_cpos)
static int ocfs2_leftmost_rec_contains(struct ocfs2_extent_list *el, u32 cpos)
static int ocfs2_rotate_tree_right(handle_t *handle,
struct ocfs2_extent_tree *et,
enum ocfs2_split_type split,
u32 insert_cpos,
struct ocfs2_path *right_path,
struct ocfs2_path **ret_left_path)
static int ocfs2_update_edge_lengths(handle_t *handle,
struct ocfs2_extent_tree *et,
int subtree_index, struct ocfs2_path *path)
static void ocfs2_unlink_path(handle_t *handle,
struct ocfs2_extent_tree *et,
struct ocfs2_cached_dealloc_ctxt *dealloc,
struct ocfs2_path *path, int unlink_start)
static void ocfs2_unlink_subtree(handle_t *handle,
struct ocfs2_extent_tree *et,
struct ocfs2_path *left_path,
struct ocfs2_path *right_path,
int subtree_index,
struct ocfs2_cached_dealloc_ctxt *dealloc)
static int ocfs2_rotate_subtree_left(handle_t *handle,
struct ocfs2_extent_tree *et,
struct ocfs2_path *left_path,
struct ocfs2_path *right_path,
int subtree_index,
struct ocfs2_cached_dealloc_ctxt *dealloc,
int *deleted)
int ocfs2_find_cpos_for_right_leaf(struct super_block *sb,
struct ocfs2_path *path, u32 *cpos)
static int ocfs2_rotate_rightmost_leaf_left(handle_t *handle,
struct ocfs2_extent_tree *et,
struct ocfs2_path *path)
static int __ocfs2_rotate_tree_left(handle_t *handle,
struct ocfs2_extent_tree *et,
int orig_credits,
struct ocfs2_path *path,
struct ocfs2_cached_dealloc_ctxt *dealloc,
struct ocfs2_path **empty_extent_path)
static int ocfs2_remove_rightmost_path(handle_t *handle,
struct ocfs2_extent_tree *et,
struct ocfs2_path *path,
struct ocfs2_cached_dealloc_ctxt *dealloc)
static int ocfs2_rotate_tree_left(handle_t *handle,
struct ocfs2_extent_tree *et,
struct ocfs2_path *path,
struct ocfs2_cached_dealloc_ctxt *dealloc)
static void ocfs2_cleanup_merge(struct ocfs2_extent_list *el,
int index)
static int ocfs2_get_right_path(struct ocfs2_extent_tree *et,
struct ocfs2_path *left_path,
struct ocfs2_path **ret_right_path)
static int ocfs2_merge_rec_right(struct ocfs2_path *left_path,
handle_t *handle,
struct ocfs2_extent_tree *et,
struct ocfs2_extent_rec *split_rec,
int index)
static int ocfs2_get_left_path(struct ocfs2_extent_tree *et,
struct ocfs2_path *right_path,
struct ocfs2_path **ret_left_path)
static int ocfs2_merge_rec_left(struct ocfs2_path *right_path,
handle_t *handle,
struct ocfs2_extent_tree *et,
struct ocfs2_extent_rec *split_rec,
struct ocfs2_cached_dealloc_ctxt *dealloc,
int index)
static int ocfs2_try_to_merge_extent(handle_t *handle,
struct ocfs2_extent_tree *et,
struct ocfs2_path *path,
int split_index,
struct ocfs2_extent_rec *split_rec,
struct ocfs2_cached_dealloc_ctxt *dealloc,
struct ocfs2_merge_ctxt *ctxt)
static void ocfs2_subtract_from_rec(struct super_block *sb,
enum ocfs2_split_type split,
struct ocfs2_extent_rec *rec,
struct ocfs2_extent_rec *split_rec)
static void ocfs2_insert_at_leaf(struct ocfs2_extent_tree *et,
struct ocfs2_extent_rec *insert_rec,
struct ocfs2_extent_list *el,
struct ocfs2_insert_type *insert)
static void ocfs2_adjust_rightmost_records(handle_t *handle,
struct ocfs2_extent_tree *et,
struct ocfs2_path *path,
struct ocfs2_extent_rec *insert_rec)
static int ocfs2_append_rec_to_path(handle_t *handle,
struct ocfs2_extent_tree *et,
struct ocfs2_extent_rec *insert_rec,
struct ocfs2_path *right_path,
struct ocfs2_path **ret_left_path)
static void ocfs2_split_record(struct ocfs2_extent_tree *et,
struct ocfs2_path *left_path,
struct ocfs2_path *right_path,
struct ocfs2_extent_rec *split_rec,
enum ocfs2_split_type split)
static int ocfs2_insert_path(handle_t *handle,
struct ocfs2_extent_tree *et,
struct ocfs2_path *left_path,
struct ocfs2_path *right_path,
struct ocfs2_extent_rec *insert_rec,
struct ocfs2_insert_type *insert)
static int ocfs2_do_insert_extent(handle_t *handle,
struct ocfs2_extent_tree *et,
struct ocfs2_extent_rec *insert_rec,
struct ocfs2_insert_type *type)
static enum ocfs2_contig_type
ocfs2_figure_merge_contig_type(struct ocfs2_extent_tree *et,
struct ocfs2_path *path,
struct ocfs2_extent_list *el, int index,
struct ocfs2_extent_rec *split_rec)
static void ocfs2_figure_contig_type(struct ocfs2_extent_tree *et,
struct ocfs2_insert_type *insert,
struct ocfs2_extent_list *el,
struct ocfs2_extent_rec *insert_rec)
static void ocfs2_figure_appending_type(struct ocfs2_insert_type *insert,
struct ocfs2_extent_list *el,
struct ocfs2_extent_rec *insert_rec)
static int ocfs2_figure_insert_type(struct ocfs2_extent_tree *et,
struct buffer_head **last_eb_bh,
struct ocfs2_extent_rec *insert_rec,
int *free_records,
struct ocfs2_insert_type *insert)
int ocfs2_insert_extent(handle_t *handle,
struct ocfs2_extent_tree *et,
u32 cpos,
u64 start_blk,
u32 new_clusters,
u8 flags,
struct ocfs2_alloc_context *meta_ac)
int ocfs2_add_clusters_in_btree(handle_t *handle,
struct ocfs2_extent_tree *et,
u32 *logical_offset,
u32 clusters_to_add,
int mark_unwritten,
struct ocfs2_alloc_context *data_ac,
struct ocfs2_alloc_context *meta_ac,
enum ocfs2_alloc_restarted *reason_ret)
static void ocfs2_make_right_split_rec(struct super_block *sb,
struct ocfs2_extent_rec *split_rec,
u32 cpos,
struct ocfs2_extent_rec *rec)
static int ocfs2_split_and_insert(handle_t *handle,
struct ocfs2_extent_tree *et,
struct ocfs2_path *path,
struct buffer_head **last_eb_bh,
int split_index,
struct ocfs2_extent_rec *orig_split_rec,
struct ocfs2_alloc_context *meta_ac)
static int ocfs2_replace_extent_rec(handle_t *handle,
struct ocfs2_extent_tree *et,
struct ocfs2_path *path,
struct ocfs2_extent_list *el,
int split_index,
struct ocfs2_extent_rec *split_rec)
int ocfs2_split_extent(handle_t *handle,
struct ocfs2_extent_tree *et,
struct ocfs2_path *path,
int split_index,
struct ocfs2_extent_rec *split_rec,
struct ocfs2_alloc_context *meta_ac,
struct ocfs2_cached_dealloc_ctxt *dealloc)
int ocfs2_change_extent_flag(handle_t *handle,
struct ocfs2_extent_tree *et,
u32 cpos, u32 len, u32 phys,
struct ocfs2_alloc_context *meta_ac,
struct ocfs2_cached_dealloc_ctxt *dealloc,
int new_flags, int clear_flags)
int ocfs2_mark_extent_written(struct inode *inode,
struct ocfs2_extent_tree *et,
handle_t *handle, u32 cpos, u32 len, u32 phys,
struct ocfs2_alloc_context *meta_ac,
struct ocfs2_cached_dealloc_ctxt *dealloc)
static int ocfs2_split_tree(handle_t *handle, struct ocfs2_extent_tree *et,
struct ocfs2_path *path,
int index, u32 new_range,
struct ocfs2_alloc_context *meta_ac)
static int ocfs2_truncate_rec(handle_t *handle,
struct ocfs2_extent_tree *et,
struct ocfs2_path *path, int index,
struct ocfs2_cached_dealloc_ctxt *dealloc,
u32 cpos, u32 len)
int ocfs2_remove_extent(handle_t *handle,
struct ocfs2_extent_tree *et,
u32 cpos, u32 len,
struct ocfs2_alloc_context *meta_ac,
struct ocfs2_cached_dealloc_ctxt *dealloc)
static int ocfs2_reserve_blocks_for_rec_trunc(struct inode *inode,
struct ocfs2_extent_tree *et,
u32 extents_to_split,
struct ocfs2_alloc_context **ac,
int extra_blocks)
int ocfs2_remove_btree_range(struct inode *inode,
struct ocfs2_extent_tree *et,
u32 cpos, u32 phys_cpos, u32 len, int flags,
struct ocfs2_cached_dealloc_ctxt *dealloc,
u64 refcount_loc)
int ocfs2_truncate_log_needs_flush(struct ocfs2_super *osb)
static int ocfs2_truncate_log_can_coalesce(struct ocfs2_truncate_log *tl,
unsigned int new_start)
int ocfs2_truncate_log_append(struct ocfs2_super *osb,
handle_t *handle,
u64 start_blk,
unsigned int num_clusters)
static int ocfs2_replay_truncate_records(struct ocfs2_super *osb,
handle_t *handle,
struct inode *data_alloc_inode,
struct buffer_head *data_alloc_bh)
int __ocfs2_flush_truncate_log(struct ocfs2_super *osb)
int ocfs2_flush_truncate_log(struct ocfs2_super *osb)
static void ocfs2_truncate_log_worker(struct work_struct *work)
#define OCFS2_TRUNCATE_LOG_FLUSH_INTERVAL (2 * HZ)
void ocfs2_schedule_truncate_log_flush(struct ocfs2_super *osb,
int cancel)
static int ocfs2_get_truncate_log_info(struct ocfs2_super *osb,
int slot_num,
struct inode **tl_inode,
struct buffer_head **tl_bh)
int ocfs2_begin_truncate_log_recovery(struct ocfs2_super *osb,
int slot_num,
struct ocfs2_dinode **tl_copy)
int ocfs2_complete_truncate_log_recovery(struct ocfs2_super *osb,
struct ocfs2_dinode *tl_copy)
void ocfs2_truncate_log_shutdown(struct ocfs2_super *osb)
int ocfs2_truncate_log_init(struct ocfs2_super *osb)
struct ocfs2_cached_block_free ;
struct ocfs2_per_slot_free_list ;
static int ocfs2_free_cached_blocks(struct ocfs2_super *osb,
int sysfile_type,
int slot,
struct ocfs2_cached_block_free *head)
int ocfs2_cache_cluster_dealloc(struct ocfs2_cached_dealloc_ctxt *ctxt,
u64 blkno, unsigned int bit)
static int ocfs2_free_cached_clusters(struct ocfs2_super *osb,
struct ocfs2_cached_block_free *head)
int ocfs2_run_deallocs(struct ocfs2_super *osb,
struct ocfs2_cached_dealloc_ctxt *ctxt)
static struct ocfs2_per_slot_free_list *
ocfs2_find_per_slot_free_list(int type,
int slot,
struct ocfs2_cached_dealloc_ctxt *ctxt)
int ocfs2_cache_block_dealloc(struct ocfs2_cached_dealloc_ctxt *ctxt,
int type, int slot, u64 suballoc,
u64 blkno, unsigned int bit)
static int ocfs2_cache_extent_block_free(struct ocfs2_cached_dealloc_ctxt *ctxt,
struct ocfs2_extent_block *eb)
static int ocfs2_zero_func(handle_t *handle, struct buffer_head *bh)
void ocfs2_map_and_dirty_page(struct inode *inode, handle_t *handle,
unsigned int from, unsigned int to,
struct page *page, int zero, u64 *phys)
static void ocfs2_zero_cluster_pages(struct inode *inode, loff_t start,
loff_t end, struct page **pages,
int numpages, u64 phys, handle_t *handle)
int ocfs2_grab_pages(struct inode *inode, loff_t start, loff_t end,
struct page **pages, int *num)
static int ocfs2_grab_eof_pages(struct inode *inode, loff_t start, loff_t end,
struct page **pages, int *num)
int ocfs2_zero_range_for_truncate(struct inode *inode, handle_t *handle,
u64 range_start, u64 range_end)
static void ocfs2_zero_dinode_id2_with_xattr(struct inode *inode,
struct ocfs2_dinode *di)
void ocfs2_dinode_new_extent_list(struct inode *inode,
struct ocfs2_dinode *di)
void ocfs2_set_inode_data_inline(struct inode *inode, struct ocfs2_dinode *di)
int ocfs2_convert_inline_data_to_extents(struct inode *inode,
struct buffer_head *di_bh)
int ocfs2_commit_truncate(struct ocfs2_super *osb,
struct inode *inode,
struct buffer_head *di_bh)
int ocfs2_truncate_inline(struct inode *inode, struct buffer_head *di_bh,
unsigned int start, unsigned int end, int trunc)
static int ocfs2_trim_extent(struct super_block *sb,
struct ocfs2_group_desc *gd,
u32 start, u32 count)
static int ocfs2_trim_group(struct super_block *sb,
struct ocfs2_group_desc *gd,
u32 start, u32 max, u32 minbits)
int ocfs2_trim_fs(struct super_block *sb, struct fstrim_range *range)
