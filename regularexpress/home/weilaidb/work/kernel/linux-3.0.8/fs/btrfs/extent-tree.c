enum ;
static int update_block_group(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
u64 bytenr, u64 num_bytes, int alloc);
static int __btrfs_free_extent(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
u64 bytenr, u64 num_bytes, u64 parent,
u64 root_objectid, u64 owner_objectid,
u64 owner_offset, int refs_to_drop,
struct btrfs_delayed_extent_op *extra_op);
static void __run_delayed_extent_op(struct btrfs_delayed_extent_op *extent_op,
struct extent_buffer *leaf,
struct btrfs_extent_item *ei);
static int alloc_reserved_file_extent(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
u64 parent, u64 root_objectid,
u64 flags, u64 owner, u64 offset,
struct btrfs_key *ins, int ref_mod);
static int alloc_reserved_tree_block(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
u64 parent, u64 root_objectid,
u64 flags, struct btrfs_disk_key *key,
int level, struct btrfs_key *ins);
static int do_chunk_alloc(struct btrfs_trans_handle *trans,
struct btrfs_root *extent_root, u64 alloc_bytes,
u64 flags, int force);
static int find_next_key(struct btrfs_path *path, int level,
struct btrfs_key *key);
static void dump_space_info(struct btrfs_space_info *info, u64 bytes,
int dump_block_groups);
static noinline int
block_group_cache_done(struct btrfs_block_group_cache *cache)
static int block_group_bits(struct btrfs_block_group_cache *cache, u64 bits)
static void btrfs_get_block_group(struct btrfs_block_group_cache *cache)
void btrfs_put_block_group(struct btrfs_block_group_cache *cache)
static int btrfs_add_block_group_cache(struct btrfs_fs_info *info,
struct btrfs_block_group_cache *block_group)
static struct btrfs_block_group_cache *
block_group_cache_tree_search(struct btrfs_fs_info *info, u64 bytenr,
int contains)
static int add_excluded_extent(struct btrfs_root *root,
u64 start, u64 num_bytes)
static void free_excluded_extents(struct btrfs_root *root,
struct btrfs_block_group_cache *cache)
static int exclude_super_stripes(struct btrfs_root *root,
struct btrfs_block_group_cache *cache)
static struct btrfs_caching_control *
get_caching_control(struct btrfs_block_group_cache *cache)
static void put_caching_control(struct btrfs_caching_control *ctl)
static u64 add_new_free_space(struct btrfs_block_group_cache *block_group,
struct btrfs_fs_info *info, u64 start, u64 end)
static int caching_kthread(void *data)
static int cache_block_group(struct btrfs_block_group_cache *cache,
struct btrfs_trans_handle *trans,
struct btrfs_root *root,
int load_cache_only)
static struct btrfs_block_group_cache *
btrfs_lookup_first_block_group(struct btrfs_fs_info *info, u64 bytenr)
struct btrfs_block_group_cache *btrfs_lookup_block_group(
struct btrfs_fs_info *info,
u64 bytenr)
static struct btrfs_space_info *__find_space_info(struct btrfs_fs_info *info,
u64 flags)
void btrfs_clear_space_info_full(struct btrfs_fs_info *info)
static u64 div_factor(u64 num, int factor)
static u64 div_factor_fine(u64 num, int factor)
u64 btrfs_find_block_group(struct btrfs_root *root,
u64 search_start, u64 search_hint, int owner)
int btrfs_lookup_extent(struct btrfs_root *root, u64 start, u64 len)
int btrfs_lookup_extent_info(struct btrfs_trans_handle *trans,
struct btrfs_root *root, u64 bytenr,
u64 num_bytes, u64 *refs, u64 *flags)
static int convert_extent_item_v0(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
u64 owner, u32 extra_size)
static u64 hash_extent_data_ref(u64 root_objectid, u64 owner, u64 offset)
static u64 hash_extent_data_ref_item(struct extent_buffer *leaf,
struct btrfs_extent_data_ref *ref)
static int match_extent_data_ref(struct extent_buffer *leaf,
struct btrfs_extent_data_ref *ref,
u64 root_objectid, u64 owner, u64 offset)
static noinline int lookup_extent_data_ref(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
u64 bytenr, u64 parent,
u64 root_objectid,
u64 owner, u64 offset)
static noinline int insert_extent_data_ref(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
u64 bytenr, u64 parent,
u64 root_objectid, u64 owner,
u64 offset, int refs_to_add)
static noinline int remove_extent_data_ref(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
int refs_to_drop)
static noinline u32 extent_data_ref_count(struct btrfs_root *root,
struct btrfs_path *path,
struct btrfs_extent_inline_ref *iref)
static noinline int lookup_tree_block_ref(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
u64 bytenr, u64 parent,
u64 root_objectid)
static noinline int insert_tree_block_ref(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
u64 bytenr, u64 parent,
u64 root_objectid)
static inline int extent_ref_type(u64 parent, u64 owner)
static int find_next_key(struct btrfs_path *path, int level,
struct btrfs_key *key)
static noinline_for_stack
int lookup_inline_extent_backref(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
struct btrfs_extent_inline_ref **ref_ret,
u64 bytenr, u64 num_bytes,
u64 parent, u64 root_objectid,
u64 owner, u64 offset, int insert)
static noinline_for_stack
int setup_inline_extent_backref(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
struct btrfs_extent_inline_ref *iref,
u64 parent, u64 root_objectid,
u64 owner, u64 offset, int refs_to_add,
struct btrfs_delayed_extent_op *extent_op)
static int lookup_extent_backref(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
struct btrfs_extent_inline_ref **ref_ret,
u64 bytenr, u64 num_bytes, u64 parent,
u64 root_objectid, u64 owner, u64 offset)
static noinline_for_stack
int update_inline_extent_backref(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
struct btrfs_extent_inline_ref *iref,
int refs_to_mod,
struct btrfs_delayed_extent_op *extent_op)
static noinline_for_stack
int insert_inline_extent_backref(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
u64 bytenr, u64 num_bytes, u64 parent,
u64 root_objectid, u64 owner,
u64 offset, int refs_to_add,
struct btrfs_delayed_extent_op *extent_op)
static int insert_extent_backref(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
u64 bytenr, u64 parent, u64 root_objectid,
u64 owner, u64 offset, int refs_to_add)
static int remove_extent_backref(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
struct btrfs_extent_inline_ref *iref,
int refs_to_drop, int is_data)
static int btrfs_issue_discard(struct block_device *bdev,
u64 start, u64 len)
static int btrfs_discard_extent(struct btrfs_root *root, u64 bytenr,
u64 num_bytes, u64 *actual_bytes)
int btrfs_inc_extent_ref(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
u64 bytenr, u64 num_bytes, u64 parent,
u64 root_objectid, u64 owner, u64 offset)
static int __btrfs_inc_extent_ref(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
u64 bytenr, u64 num_bytes,
u64 parent, u64 root_objectid,
u64 owner, u64 offset, int refs_to_add,
struct btrfs_delayed_extent_op *extent_op)
static int run_delayed_data_ref(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_delayed_ref_node *node,
struct btrfs_delayed_extent_op *extent_op,
int insert_reserved)
static void __run_delayed_extent_op(struct btrfs_delayed_extent_op *extent_op,
struct extent_buffer *leaf,
struct btrfs_extent_item *ei)
static int run_delayed_extent_op(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_delayed_ref_node *node,
struct btrfs_delayed_extent_op *extent_op)
static int run_delayed_tree_ref(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_delayed_ref_node *node,
struct btrfs_delayed_extent_op *extent_op,
int insert_reserved)
static int run_one_delayed_ref(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_delayed_ref_node *node,
struct btrfs_delayed_extent_op *extent_op,
int insert_reserved)
static noinline struct btrfs_delayed_ref_node *
select_delayed_ref(struct btrfs_delayed_ref_head *head)
static noinline int run_clustered_refs(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct list_head *cluster)
int btrfs_run_delayed_refs(struct btrfs_trans_handle *trans,
struct btrfs_root *root, unsigned long count)
int btrfs_set_disk_extent_flags(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
u64 bytenr, u64 num_bytes, u64 flags,
int is_data)
static noinline int check_delayed_ref(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
u64 objectid, u64 offset, u64 bytenr)
static noinline int check_committed_ref(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
u64 objectid, u64 offset, u64 bytenr)
int btrfs_cross_ref_exist(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
u64 objectid, u64 offset, u64 bytenr)
static int __btrfs_mod_ref(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct extent_buffer *buf,
int full_backref, int inc)
int btrfs_inc_ref(struct btrfs_trans_handle *trans, struct btrfs_root *root,
struct extent_buffer *buf, int full_backref)
int btrfs_dec_ref(struct btrfs_trans_handle *trans, struct btrfs_root *root,
struct extent_buffer *buf, int full_backref)
static int write_one_cache_group(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
struct btrfs_block_group_cache *cache)
static struct btrfs_block_group_cache *
next_block_group(struct btrfs_root *root,
struct btrfs_block_group_cache *cache)
static int cache_save_setup(struct btrfs_block_group_cache *block_group,
struct btrfs_trans_handle *trans,
struct btrfs_path *path)
int btrfs_write_dirty_block_groups(struct btrfs_trans_handle *trans,
struct btrfs_root *root)
int btrfs_extent_readonly(struct btrfs_root *root, u64 bytenr)
static int update_space_info(struct btrfs_fs_info *info, u64 flags,
u64 total_bytes, u64 bytes_used,
struct btrfs_space_info **space_info)
static void set_avail_alloc_bits(struct btrfs_fs_info *fs_info, u64 flags)
u64 btrfs_reduce_alloc_profile(struct btrfs_root *root, u64 flags)
static u64 get_alloc_profile(struct btrfs_root *root, u64 flags)
u64 btrfs_get_alloc_profile(struct btrfs_root *root, int data)
void btrfs_set_inode_space_info(struct btrfs_root *root, struct inode *inode)
int btrfs_check_data_free_space(struct inode *inode, u64 bytes)
void btrfs_free_reserved_data_space(struct inode *inode, u64 bytes)
static void force_metadata_allocation(struct btrfs_fs_info *info)
static int should_alloc_chunk(struct btrfs_root *root,
struct btrfs_space_info *sinfo, u64 alloc_bytes,
int force)
static int do_chunk_alloc(struct btrfs_trans_handle *trans,
struct btrfs_root *extent_root, u64 alloc_bytes,
u64 flags, int force)
static int shrink_delalloc(struct btrfs_trans_handle *trans,
struct btrfs_root *root, u64 to_reclaim, int sync)
static int reserve_metadata_bytes(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_block_rsv *block_rsv,
u64 orig_bytes, int flush)
static struct btrfs_block_rsv *get_block_rsv(struct btrfs_trans_handle *trans,
struct btrfs_root *root)
static int block_rsv_use_bytes(struct btrfs_block_rsv *block_rsv,
u64 num_bytes)
static void block_rsv_add_bytes(struct btrfs_block_rsv *block_rsv,
u64 num_bytes, int update_size)
static void block_rsv_release_bytes(struct btrfs_block_rsv *block_rsv,
struct btrfs_block_rsv *dest, u64 num_bytes)
static int block_rsv_migrate_bytes(struct btrfs_block_rsv *src,
struct btrfs_block_rsv *dst, u64 num_bytes)
void btrfs_init_block_rsv(struct btrfs_block_rsv *rsv)
struct btrfs_block_rsv *btrfs_alloc_block_rsv(struct btrfs_root *root)
void btrfs_free_block_rsv(struct btrfs_root *root,
struct btrfs_block_rsv *rsv)
void btrfs_add_durable_block_rsv(struct btrfs_fs_info *fs_info,
struct btrfs_block_rsv *block_rsv)
int btrfs_block_rsv_add(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_block_rsv *block_rsv,
u64 num_bytes)
int btrfs_block_rsv_check(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_block_rsv *block_rsv,
u64 min_reserved, int min_factor)
int btrfs_block_rsv_migrate(struct btrfs_block_rsv *src_rsv,
struct btrfs_block_rsv *dst_rsv,
u64 num_bytes)
void btrfs_block_rsv_release(struct btrfs_root *root,
struct btrfs_block_rsv *block_rsv,
u64 num_bytes)
static u64 calc_global_metadata_size(struct btrfs_fs_info *fs_info)
static void update_global_block_rsv(struct btrfs_fs_info *fs_info)
static void init_global_block_rsv(struct btrfs_fs_info *fs_info)
static void release_global_block_rsv(struct btrfs_fs_info *fs_info)
int btrfs_truncate_reserve_metadata(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_block_rsv *rsv)
int btrfs_trans_reserve_metadata(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
int num_items)
void btrfs_trans_release_metadata(struct btrfs_trans_handle *trans,
struct btrfs_root *root)
int btrfs_orphan_reserve_metadata(struct btrfs_trans_handle *trans,
struct inode *inode)
void btrfs_orphan_release_metadata(struct inode *inode)
int btrfs_snap_reserve_metadata(struct btrfs_trans_handle *trans,
struct btrfs_pending_snapshot *pending)
static u64 calc_csum_metadata_size(struct inode *inode, u64 num_bytes)
int btrfs_delalloc_reserve_metadata(struct inode *inode, u64 num_bytes)
void btrfs_delalloc_release_metadata(struct inode *inode, u64 num_bytes)
int btrfs_delalloc_reserve_space(struct inode *inode, u64 num_bytes)
void btrfs_delalloc_release_space(struct inode *inode, u64 num_bytes)
static int update_block_group(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
u64 bytenr, u64 num_bytes, int alloc)
static u64 first_logical_byte(struct btrfs_root *root, u64 search_start)
static int pin_down_extent(struct btrfs_root *root,
struct btrfs_block_group_cache *cache,
u64 bytenr, u64 num_bytes, int reserved)
int btrfs_pin_extent(struct btrfs_root *root,
u64 bytenr, u64 num_bytes, int reserved)
int btrfs_update_reserved_bytes(struct btrfs_block_group_cache *cache,
u64 num_bytes, int reserve, int sinfo)
int btrfs_prepare_extent_commit(struct btrfs_trans_handle *trans,
struct btrfs_root *root)
static int unpin_extent_range(struct btrfs_root *root, u64 start, u64 end)
int btrfs_finish_extent_commit(struct btrfs_trans_handle *trans,
struct btrfs_root *root)
static int __btrfs_free_extent(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
u64 bytenr, u64 num_bytes, u64 parent,
u64 root_objectid, u64 owner_objectid,
u64 owner_offset, int refs_to_drop,
struct btrfs_delayed_extent_op *extent_op)
static noinline int check_ref_cleanup(struct btrfs_trans_handle *trans,
struct btrfs_root *root, u64 bytenr)
void btrfs_free_tree_block(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct extent_buffer *buf,
u64 parent, int last_ref)
int btrfs_free_extent(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
u64 bytenr, u64 num_bytes, u64 parent,
u64 root_objectid, u64 owner, u64 offset)
static u64 stripe_align(struct btrfs_root *root, u64 val)
static noinline int
wait_block_group_cache_progress(struct btrfs_block_group_cache *cache,
u64 num_bytes)
static noinline int
wait_block_group_cache_done(struct btrfs_block_group_cache *cache)
static int get_block_group_index(struct btrfs_block_group_cache *cache)
enum btrfs_loop_type ;
static noinline int find_free_extent(struct btrfs_trans_handle *trans,
struct btrfs_root *orig_root,
u64 num_bytes, u64 empty_size,
u64 search_start, u64 search_end,
u64 hint_byte, struct btrfs_key *ins,
u64 data)
static void dump_space_info(struct btrfs_space_info *info, u64 bytes,
int dump_block_groups)
int btrfs_reserve_extent(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
u64 num_bytes, u64 min_alloc_size,
u64 empty_size, u64 hint_byte,
u64 search_end, struct btrfs_key *ins,
u64 data)
int btrfs_free_reserved_extent(struct btrfs_root *root, u64 start, u64 len)
static int alloc_reserved_file_extent(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
u64 parent, u64 root_objectid,
u64 flags, u64 owner, u64 offset,
struct btrfs_key *ins, int ref_mod)
static int alloc_reserved_tree_block(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
u64 parent, u64 root_objectid,
u64 flags, struct btrfs_disk_key *key,
int level, struct btrfs_key *ins)
int btrfs_alloc_reserved_file_extent(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
u64 root_objectid, u64 owner,
u64 offset, struct btrfs_key *ins)
int btrfs_alloc_logged_file_extent(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
u64 root_objectid, u64 owner, u64 offset,
struct btrfs_key *ins)
struct extent_buffer *btrfs_init_new_buffer(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
u64 bytenr, u32 blocksize,
int level)
static struct btrfs_block_rsv *
use_block_rsv(struct btrfs_trans_handle *trans,
struct btrfs_root *root, u32 blocksize)
static void unuse_block_rsv(struct btrfs_block_rsv *block_rsv, u32 blocksize)
struct extent_buffer *btrfs_alloc_free_block(struct btrfs_trans_handle *trans,
struct btrfs_root *root, u32 blocksize,
u64 parent, u64 root_objectid,
struct btrfs_disk_key *key, int level,
u64 hint, u64 empty_size)
struct walk_control ;
#define DROP_REFERENCE	1
#define UPDATE_BACKREF	2
static noinline void reada_walk_down(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct walk_control *wc,
struct btrfs_path *path)
static noinline int walk_down_proc(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
struct walk_control *wc, int lookup_info)
static noinline int do_walk_down(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
struct walk_control *wc, int *lookup_info)
static noinline int walk_up_proc(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
struct walk_control *wc)
static noinline int walk_down_tree(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
struct walk_control *wc)
static noinline int walk_up_tree(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
struct walk_control *wc, int max_level)
int btrfs_drop_snapshot(struct btrfs_root *root,
struct btrfs_block_rsv *block_rsv, int update_ref)
int btrfs_drop_subtree(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct extent_buffer *node,
struct extent_buffer *parent)
static u64 update_block_group_flags(struct btrfs_root *root, u64 flags)
static int set_block_group_ro(struct btrfs_block_group_cache *cache)
int btrfs_set_block_group_ro(struct btrfs_root *root,
struct btrfs_block_group_cache *cache)
int btrfs_force_chunk_alloc(struct btrfs_trans_handle *trans,
struct btrfs_root *root, u64 type)
static u64 __btrfs_get_ro_block_group_free_space(struct list_head *groups_list)
u64 btrfs_account_ro_block_groups_free_space(struct btrfs_space_info *sinfo)
int btrfs_set_block_group_rw(struct btrfs_root *root,
struct btrfs_block_group_cache *cache)
int btrfs_can_relocate(struct btrfs_root *root, u64 bytenr)
static int find_first_block_group(struct btrfs_root *root,
struct btrfs_path *path, struct btrfs_key *key)
void btrfs_put_block_group_cache(struct btrfs_fs_info *info)
int btrfs_free_block_groups(struct btrfs_fs_info *info)
static void __link_block_group(struct btrfs_space_info *space_info,
struct btrfs_block_group_cache *cache)
int btrfs_read_block_groups(struct btrfs_root *root)
int btrfs_make_block_group(struct btrfs_trans_handle *trans,
struct btrfs_root *root, u64 bytes_used,
u64 type, u64 chunk_objectid, u64 chunk_offset,
u64 size)
int btrfs_remove_block_group(struct btrfs_trans_handle *trans,
struct btrfs_root *root, u64 group_start)
int btrfs_init_space_info(struct btrfs_fs_info *fs_info)
int btrfs_error_unpin_extent_range(struct btrfs_root *root, u64 start, u64 end)
int btrfs_error_discard_extent(struct btrfs_root *root, u64 bytenr,
u64 num_bytes, u64 *actual_bytes)
int btrfs_trim_fs(struct btrfs_root *root, struct fstrim_range *range)
