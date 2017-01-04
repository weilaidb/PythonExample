int btrfs_find_last_root(struct btrfs_root *root, u64 objectid,
struct btrfs_root_item *item, struct btrfs_key *key)
int btrfs_set_root_node(struct btrfs_root_item *item,
struct extent_buffer *node)
int btrfs_update_root(struct btrfs_trans_handle *trans, struct btrfs_root
*root, struct btrfs_key *key, struct btrfs_root_item
*item)
int btrfs_insert_root(struct btrfs_trans_handle *trans, struct btrfs_root
*root, struct btrfs_key *key, struct btrfs_root_item
*item)
int btrfs_find_dead_roots(struct btrfs_root *root, u64 objectid)
int btrfs_find_orphan_roots(struct btrfs_root *tree_root)
int btrfs_del_root(struct btrfs_trans_handle *trans, struct btrfs_root *root,
struct btrfs_key *key)
int btrfs_del_root_ref(struct btrfs_trans_handle *trans,
struct btrfs_root *tree_root,
u64 root_id, u64 ref_id, u64 dirid, u64 *sequence,
const char *name, int name_len)
int btrfs_find_root_ref(struct btrfs_root *tree_root,
struct btrfs_path *path,
u64 root_id, u64 ref_id)
int btrfs_add_root_ref(struct btrfs_trans_handle *trans,
struct btrfs_root *tree_root,
u64 root_id, u64 ref_id, u64 dirid, u64 sequence,
const char *name, int name_len)
void btrfs_check_and_init_root_item(struct btrfs_root_item *root_item)
