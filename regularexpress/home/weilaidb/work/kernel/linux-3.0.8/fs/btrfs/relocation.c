struct tree_entry ;
struct backref_node ;
struct backref_edge ;
#define LOWER	0
#define UPPER	1
struct backref_cache ;
struct mapping_node ;
struct mapping_tree ;
struct tree_block ;
#define MAX_EXTENTS 128
struct file_extent_cluster ;
struct reloc_control ;
#define MOVE_DATA_EXTENTS	0
#define UPDATE_DATA_PTRS	1
static void remove_backref_node(struct backref_cache *cache,
struct backref_node *node);
static void __mark_block_processed(struct reloc_control *rc,
struct backref_node *node);
static void mapping_tree_init(struct mapping_tree *tree)
static void backref_cache_init(struct backref_cache *cache)
static void backref_cache_cleanup(struct backref_cache *cache)
static struct backref_node *alloc_backref_node(struct backref_cache *cache)
static void free_backref_node(struct backref_cache *cache,
struct backref_node *node)
static struct backref_edge *alloc_backref_edge(struct backref_cache *cache)
static void free_backref_edge(struct backref_cache *cache,
struct backref_edge *edge)
static struct rb_node *tree_insert(struct rb_root *root, u64 bytenr,
struct rb_node *node)
static struct rb_node *tree_search(struct rb_root *root, u64 bytenr)
static struct backref_node *walk_up_backref(struct backref_node *node,
struct backref_edge *edges[],
int *index)
static struct backref_node *walk_down_backref(struct backref_edge *edges[],
int *index)
static void unlock_node_buffer(struct backref_node *node)
static void drop_node_buffer(struct backref_node *node)
static void drop_backref_node(struct backref_cache *tree,
struct backref_node *node)
static void remove_backref_node(struct backref_cache *cache,
struct backref_node *node)
static void update_backref_node(struct backref_cache *cache,
struct backref_node *node, u64 bytenr)
static int update_backref_cache(struct btrfs_trans_handle *trans,
struct backref_cache *cache)
static int should_ignore_root(struct btrfs_root *root)
static struct btrfs_root *find_reloc_root(struct reloc_control *rc,
u64 bytenr)
static int is_cowonly_root(u64 root_objectid)
static struct btrfs_root *read_fs_root(struct btrfs_fs_info *fs_info,
u64 root_objectid)
static noinline_for_stack
struct btrfs_root *find_tree_root(struct reloc_control *rc,
struct extent_buffer *leaf,
struct btrfs_extent_ref_v0 *ref0)
static noinline_for_stack
int find_inline_backref(struct extent_buffer *leaf, int slot,
unsigned long *ptr, unsigned long *end)
static noinline_for_stack
struct backref_node *build_backref_tree(struct reloc_control *rc,
struct btrfs_key *node_key,
int level, u64 bytenr)
{
struct backref_cache *cache = &rc->backref_cache;
struct btrfs_path *path1;
struct btrfs_path *path2;
struct extent_buffer *eb;
struct btrfs_root *root;
struct backref_node *cur;
struct backref_node *upper;
struct backref_node *lower;
struct backref_node *node = NULL;
struct backref_node *exist = NULL;
struct backref_edge *edge;
struct rb_node *rb_node;
struct btrfs_key key;
unsigned long end;
unsigned long ptr;
LIST_HEAD(list);
LIST_HEAD(useless);
int cowonly;
int ret;
int err = 0;
path1 = btrfs_alloc_path();
path2 = btrfs_alloc_path();
if (!path1 || !path2)
path1->reada = 1;
path2->reada = 2;
node = alloc_backref_node(cache);
if (!node)
node->bytenr = bytenr;
node->level = level;
node->lowest = 1;
cur = node;
again:
end = 0;
ptr = 0;
key.objectid = cur->bytenr;
key.type = BTRFS_EXTENT_ITEM_KEY;
key.offset = (u64)-1;
path1->search_commit_root = 1;
path1->skip_locking = 1;
ret = btrfs_search_slot(NULL, rc->extent_root, &key, path1,
0, 0);
if (ret < 0)
BUG_ON(!ret || !path1->slots[0]);
path1->slots[0]--;
WARN_ON(cur->checked);
if (!list_empty(&cur->upper))  else
while (1)
static int clone_backref_node(struct btrfs_trans_handle *trans,
struct reloc_control *rc,
struct btrfs_root *src,
struct btrfs_root *dest)
static int __add_reloc_root(struct btrfs_root *root)
static int __update_reloc_root(struct btrfs_root *root, int del)
static struct btrfs_root *create_reloc_root(struct btrfs_trans_handle *trans,
struct btrfs_root *root, u64 objectid)
int btrfs_init_reloc_root(struct btrfs_trans_handle *trans,
struct btrfs_root *root)
int btrfs_update_reloc_root(struct btrfs_trans_handle *trans,
struct btrfs_root *root)
static struct inode *find_next_inode(struct btrfs_root *root, u64 objectid)
static int in_block_group(u64 bytenr,
struct btrfs_block_group_cache *block_group)
static int get_new_location(struct inode *reloc_inode, u64 *new_bytenr,
u64 bytenr, u64 num_bytes)
static noinline_for_stack
int replace_file_extents(struct btrfs_trans_handle *trans,
struct reloc_control *rc,
struct btrfs_root *root,
struct extent_buffer *leaf)
static noinline_for_stack
int memcmp_node_keys(struct extent_buffer *eb, int slot,
struct btrfs_path *path, int level)
static noinline_for_stack
int replace_path(struct btrfs_trans_handle *trans,
struct btrfs_root *dest, struct btrfs_root *src,
struct btrfs_path *path, struct btrfs_key *next_key,
int lowest_level, int max_level)
static noinline_for_stack
int walk_up_reloc_tree(struct btrfs_root *root, struct btrfs_path *path,
int *level)
static noinline_for_stack
int walk_down_reloc_tree(struct btrfs_root *root, struct btrfs_path *path,
int *level)
static int invalidate_extent_cache(struct btrfs_root *root,
struct btrfs_key *min_key,
struct btrfs_key *max_key)
static int find_next_key(struct btrfs_path *path, int level,
struct btrfs_key *key)
static noinline_for_stack int merge_reloc_root(struct reloc_control *rc,
struct btrfs_root *root)
static noinline_for_stack
int prepare_to_merge(struct reloc_control *rc, int err)
static noinline_for_stack
int merge_reloc_roots(struct reloc_control *rc)
static void free_block_list(struct rb_root *blocks)
static int record_reloc_root_in_trans(struct btrfs_trans_handle *trans,
struct btrfs_root *reloc_root)
static noinline_for_stack
struct btrfs_root *select_reloc_root(struct btrfs_trans_handle *trans,
struct reloc_control *rc,
struct backref_node *node,
struct backref_edge *edges[], int *nr)
static noinline_for_stack
struct btrfs_root *select_one_root(struct btrfs_trans_handle *trans,
struct backref_node *node)
static noinline_for_stack
u64 calcu_metadata_size(struct reloc_control *rc,
struct backref_node *node, int reserve)
static int reserve_metadata_space(struct btrfs_trans_handle *trans,
struct reloc_control *rc,
struct backref_node *node)
static void release_metadata_space(struct reloc_control *rc,
struct backref_node *node)
static int do_relocation(struct btrfs_trans_handle *trans,
struct reloc_control *rc,
struct backref_node *node,
struct btrfs_key *key,
struct btrfs_path *path, int lowest)
static int link_to_upper(struct btrfs_trans_handle *trans,
struct reloc_control *rc,
struct backref_node *node,
struct btrfs_path *path)
static int finish_pending_nodes(struct btrfs_trans_handle *trans,
struct reloc_control *rc,
struct btrfs_path *path, int err)
static void mark_block_processed(struct reloc_control *rc,
u64 bytenr, u32 blocksize)
static void __mark_block_processed(struct reloc_control *rc,
struct backref_node *node)
static void update_processed_blocks(struct reloc_control *rc,
struct backref_node *node)
static int tree_block_processed(u64 bytenr, u32 blocksize,
struct reloc_control *rc)
static int get_tree_block_key(struct reloc_control *rc,
struct tree_block *block)
static int reada_tree_block(struct reloc_control *rc,
struct tree_block *block)
static int relocate_tree_block(struct btrfs_trans_handle *trans,
struct reloc_control *rc,
struct backref_node *node,
struct btrfs_key *key,
struct btrfs_path *path)
static noinline_for_stack
int relocate_tree_blocks(struct btrfs_trans_handle *trans,
struct reloc_control *rc, struct rb_root *blocks)
static noinline_for_stack
int prealloc_file_extent_cluster(struct inode *inode,
struct file_extent_cluster *cluster)
static noinline_for_stack
int setup_extent_mapping(struct inode *inode, u64 start, u64 end,
u64 block_start)
static int relocate_file_extent_cluster(struct inode *inode,
struct file_extent_cluster *cluster)
static noinline_for_stack
int relocate_data_extent(struct inode *inode, struct btrfs_key *extent_key,
struct file_extent_cluster *cluster)
static int get_ref_objectid_v0(struct reloc_control *rc,
struct btrfs_path *path,
struct btrfs_key *extent_key,
u64 *ref_objectid, int *path_change)
static int add_tree_block(struct reloc_control *rc,
struct btrfs_key *extent_key,
struct btrfs_path *path,
struct rb_root *blocks)
static int __add_tree_block(struct reloc_control *rc,
u64 bytenr, u32 blocksize,
struct rb_root *blocks)
static int block_use_full_backref(struct reloc_control *rc,
struct extent_buffer *eb)
static int delete_block_group_cache(struct btrfs_fs_info *fs_info,
struct inode *inode, u64 ino)
static int find_data_references(struct reloc_control *rc,
struct btrfs_key *extent_key,
struct extent_buffer *leaf,
struct btrfs_extent_data_ref *ref,
struct rb_root *blocks)
static noinline_for_stack
int add_data_references(struct reloc_control *rc,
struct btrfs_key *extent_key,
struct btrfs_path *path,
struct rb_root *blocks)
{
struct btrfs_key key;
struct extent_buffer *eb;
struct btrfs_extent_data_ref *dref;
struct btrfs_extent_inline_ref *iref;
unsigned long ptr;
unsigned long end;
u32 blocksize = btrfs_level_size(rc->extent_root, 0);
int ret;
int err = 0;
eb = path->nodes[0];
ptr = btrfs_item_ptr_offset(eb, path->slots[0]);
end = ptr + btrfs_item_size_nr(eb, path->slots[0]);
if (ptr + sizeof(struct btrfs_extent_item_v0) == end)
ptr = end;
else
ptr += sizeof(struct btrfs_extent_item);
while (ptr < end)
WARN_ON(ptr > end);
while (1)
static noinline_for_stack
int find_next_extent(struct btrfs_trans_handle *trans,
struct reloc_control *rc, struct btrfs_path *path,
struct btrfs_key *extent_key)
static void set_reloc_control(struct reloc_control *rc)
static void unset_reloc_control(struct reloc_control *rc)
static int check_extent_flags(u64 flags)
static noinline_for_stack
int prepare_to_relocate(struct reloc_control *rc)
static noinline_for_stack int relocate_block_group(struct reloc_control *rc)
static int __insert_orphan_inode(struct btrfs_trans_handle *trans,
struct btrfs_root *root, u64 objectid)
static noinline_for_stack
struct inode *create_reloc_inode(struct btrfs_fs_info *fs_info,
struct btrfs_block_group_cache *group)
static struct reloc_control *alloc_reloc_control(void)
int btrfs_relocate_block_group(struct btrfs_root *extent_root, u64 group_start)
static noinline_for_stack int mark_garbage_root(struct btrfs_root *root)
int btrfs_recover_relocation(struct btrfs_root *root)
int btrfs_reloc_clone_csums(struct inode *inode, u64 file_pos, u64 len)
void btrfs_reloc_cow_block(struct btrfs_trans_handle *trans,
struct btrfs_root *root, struct extent_buffer *buf,
struct extent_buffer *cow)
void btrfs_reloc_pre_snapshot(struct btrfs_trans_handle *trans,
struct btrfs_pending_snapshot *pending,
u64 *bytes_to_reserve)
void btrfs_reloc_post_snapshot(struct btrfs_trans_handle *trans,
struct btrfs_pending_snapshot *pending)
