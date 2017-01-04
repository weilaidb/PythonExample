static int split_node(struct btrfs_trans_handle *trans, struct btrfs_root
*root, struct btrfs_path *path, int level);
static int split_leaf(struct btrfs_trans_handle *trans, struct btrfs_root
*root, struct btrfs_key *ins_key,
struct btrfs_path *path, int data_size, int extend);
static int push_node_left(struct btrfs_trans_handle *trans,
struct btrfs_root *root, struct extent_buffer *dst,
struct extent_buffer *src, int empty);
static int balance_node_right(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct extent_buffer *dst_buf,
struct extent_buffer *src_buf);
static int del_ptr(struct btrfs_trans_handle *trans, struct btrfs_root *root,
struct btrfs_path *path, int level, int slot);
struct btrfs_path *btrfs_alloc_path(void)
noinline void btrfs_set_path_blocking(struct btrfs_path *p)
noinline void btrfs_clear_path_blocking(struct btrfs_path *p,
struct extent_buffer *held)
void btrfs_free_path(struct btrfs_path *p)
noinline void btrfs_release_path(struct btrfs_path *p)
struct extent_buffer *btrfs_root_node(struct btrfs_root *root)
struct extent_buffer *btrfs_lock_root_node(struct btrfs_root *root)
static void add_root_to_dirty_list(struct btrfs_root *root)
int btrfs_copy_root(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct extent_buffer *buf,
struct extent_buffer **cow_ret, u64 new_root_objectid)
int btrfs_block_can_be_shared(struct btrfs_root *root,
struct extent_buffer *buf)
static noinline int update_ref_for_cow(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct extent_buffer *buf,
struct extent_buffer *cow,
int *last_ref)
static noinline int __btrfs_cow_block(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct extent_buffer *buf,
struct extent_buffer *parent, int parent_slot,
struct extent_buffer **cow_ret,
u64 search_start, u64 empty_size)
static inline int should_cow_block(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct extent_buffer *buf)
noinline int btrfs_cow_block(struct btrfs_trans_handle *trans,
struct btrfs_root *root, struct extent_buffer *buf,
struct extent_buffer *parent, int parent_slot,
struct extent_buffer **cow_ret)
static int close_blocks(u64 blocknr, u64 other, u32 blocksize)
static int comp_keys(struct btrfs_disk_key *disk, struct btrfs_key *k2)
int btrfs_comp_cpu_keys(struct btrfs_key *k1, struct btrfs_key *k2)
int btrfs_realloc_node(struct btrfs_trans_handle *trans,
struct btrfs_root *root, struct extent_buffer *parent,
int start_slot, int cache_only, u64 *last_ret,
struct btrfs_key *progress)
static inline unsigned int leaf_data_end(struct btrfs_root *root,
struct extent_buffer *leaf)
static noinline int generic_bin_search(struct extent_buffer *eb,
unsigned long p,
int item_size, struct btrfs_key *key,
int max, int *slot)
static int bin_search(struct extent_buffer *eb, struct btrfs_key *key,
int level, int *slot)
int btrfs_bin_search(struct extent_buffer *eb, struct btrfs_key *key,
int level, int *slot)
static void root_add_used(struct btrfs_root *root, u32 size)
static void root_sub_used(struct btrfs_root *root, u32 size)
static noinline struct extent_buffer *read_node_slot(struct btrfs_root *root,
struct extent_buffer *parent, int slot)
static noinline int balance_level(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path, int level)
static noinline int push_nodes_for_insert(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path, int level)
static void reada_for_search(struct btrfs_root *root,
struct btrfs_path *path,
int level, int slot, u64 objectid)
static noinline int reada_for_balance(struct btrfs_root *root,
struct btrfs_path *path, int level)
static noinline void unlock_up(struct btrfs_path *path, int level,
int lowest_unlock)
noinline void btrfs_unlock_up_safe(struct btrfs_path *path, int level)
static int
read_block_for_search(struct btrfs_trans_handle *trans,
struct btrfs_root *root, struct btrfs_path *p,
struct extent_buffer **eb_ret, int level, int slot,
struct btrfs_key *key)
static int
setup_nodes_for_search(struct btrfs_trans_handle *trans,
struct btrfs_root *root, struct btrfs_path *p,
struct extent_buffer *b, int level, int ins_len)
int btrfs_search_slot(struct btrfs_trans_handle *trans, struct btrfs_root
*root, struct btrfs_key *key, struct btrfs_path *p, int
ins_len, int cow)
static int fixup_low_keys(struct btrfs_trans_handle *trans,
struct btrfs_root *root, struct btrfs_path *path,
struct btrfs_disk_key *key, int level)
int btrfs_set_item_key_safe(struct btrfs_trans_handle *trans,
struct btrfs_root *root, struct btrfs_path *path,
struct btrfs_key *new_key)
static int push_node_left(struct btrfs_trans_handle *trans,
struct btrfs_root *root, struct extent_buffer *dst,
struct extent_buffer *src, int empty)
static int balance_node_right(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct extent_buffer *dst,
struct extent_buffer *src)
static noinline int insert_new_root(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path, int level)
static int insert_ptr(struct btrfs_trans_handle *trans, struct btrfs_root
*root, struct btrfs_path *path, struct btrfs_disk_key
*key, u64 bytenr, int slot, int level)
static noinline int split_node(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path, int level)
static int leaf_space_used(struct extent_buffer *l, int start, int nr)
noinline int btrfs_leaf_free_space(struct btrfs_root *root,
struct extent_buffer *leaf)
static noinline int __push_leaf_right(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
int data_size, int empty,
struct extent_buffer *right,
int free_space, u32 left_nritems,
u32 min_slot)
static int push_leaf_right(struct btrfs_trans_handle *trans, struct btrfs_root
*root, struct btrfs_path *path,
int min_data_size, int data_size,
int empty, u32 min_slot)
static noinline int __push_leaf_left(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path, int data_size,
int empty, struct extent_buffer *left,
int free_space, u32 right_nritems,
u32 max_slot)
static int push_leaf_left(struct btrfs_trans_handle *trans, struct btrfs_root
*root, struct btrfs_path *path, int min_data_size,
int data_size, int empty, u32 max_slot)
static noinline int copy_for_split(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
struct extent_buffer *l,
struct extent_buffer *right,
int slot, int mid, int nritems)
static noinline int push_for_double_split(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
int data_size)
static noinline int split_leaf(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_key *ins_key,
struct btrfs_path *path, int data_size,
int extend)
static noinline int setup_leaf_for_split(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path, int ins_len)
static noinline int split_item(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
struct btrfs_key *new_key,
unsigned long split_offset)
int btrfs_split_item(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
struct btrfs_key *new_key,
unsigned long split_offset)
int btrfs_duplicate_item(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
struct btrfs_key *new_key)
int btrfs_truncate_item(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
u32 new_size, int from_end)
int btrfs_extend_item(struct btrfs_trans_handle *trans,
struct btrfs_root *root, struct btrfs_path *path,
u32 data_size)
int btrfs_insert_some_items(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
struct btrfs_key *cpu_key, u32 *data_size,
int nr)
int setup_items_for_insert(struct btrfs_trans_handle *trans,
struct btrfs_root *root, struct btrfs_path *path,
struct btrfs_key *cpu_key, u32 *data_size,
u32 total_data, u32 total_size, int nr)
int btrfs_insert_empty_items(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
struct btrfs_key *cpu_key, u32 *data_size,
int nr)
int btrfs_insert_item(struct btrfs_trans_handle *trans, struct btrfs_root
*root, struct btrfs_key *cpu_key, void *data, u32
data_size)
static int del_ptr(struct btrfs_trans_handle *trans, struct btrfs_root *root,
struct btrfs_path *path, int level, int slot)
static noinline int btrfs_del_leaf(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
struct extent_buffer *leaf)
int btrfs_del_items(struct btrfs_trans_handle *trans, struct btrfs_root *root,
struct btrfs_path *path, int slot, int nr)
int btrfs_prev_leaf(struct btrfs_root *root, struct btrfs_path *path)
int btrfs_search_forward(struct btrfs_root *root, struct btrfs_key *min_key,
struct btrfs_key *max_key,
struct btrfs_path *path, int cache_only,
u64 min_trans)
int btrfs_find_next_key(struct btrfs_root *root, struct btrfs_path *path,
struct btrfs_key *key, int level,
int cache_only, u64 min_trans)
int btrfs_next_leaf(struct btrfs_root *root, struct btrfs_path *path)
int btrfs_previous_item(struct btrfs_root *root,
struct btrfs_path *path, u64 min_objectid,
int type)
