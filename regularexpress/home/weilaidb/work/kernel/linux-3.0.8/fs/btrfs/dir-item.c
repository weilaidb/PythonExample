static struct btrfs_dir_item *insert_with_overflow(struct btrfs_trans_handle
*trans,
struct btrfs_root *root,
struct btrfs_path *path,
struct btrfs_key *cpu_key,
u32 data_size,
const char *name,
int name_len)
int btrfs_insert_xattr_item(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path, u64 objectid,
const char *name, u16 name_len,
const void *data, u16 data_len)
int btrfs_insert_dir_item(struct btrfs_trans_handle *trans, struct btrfs_root
*root, const char *name, int name_len,
struct inode *dir, struct btrfs_key *location,
u8 type, u64 index)
struct btrfs_dir_item *btrfs_lookup_dir_item(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path, u64 dir,
const char *name, int name_len,
int mod)
struct btrfs_dir_item *
btrfs_lookup_dir_index_item(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path, u64 dir,
u64 objectid, const char *name, int name_len,
int mod)
struct btrfs_dir_item *
btrfs_search_dir_index_item(struct btrfs_root *root,
struct btrfs_path *path, u64 dirid,
const char *name, int name_len)
struct btrfs_dir_item *btrfs_lookup_xattr(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path, u64 dir,
const char *name, u16 name_len,
int mod)
struct btrfs_dir_item *btrfs_match_dir_item_name(struct btrfs_root *root,
struct btrfs_path *path,
const char *name, int name_len)
int btrfs_delete_one_dir_name(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
struct btrfs_dir_item *di)
int verify_dir_item(struct btrfs_root *root,
struct extent_buffer *leaf,
struct btrfs_dir_item *dir_item)
