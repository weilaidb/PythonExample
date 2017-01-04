static int find_name_in_backref(struct btrfs_path *path, const char *name,
int name_len, struct btrfs_inode_ref **ref_ret)
struct btrfs_inode_ref *
btrfs_lookup_inode_ref(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
const char *name, int name_len,
u64 inode_objectid, u64 ref_objectid, int mod)
int btrfs_del_inode_ref(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
const char *name, int name_len,
u64 inode_objectid, u64 ref_objectid, u64 *index)
int btrfs_insert_inode_ref(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
const char *name, int name_len,
u64 inode_objectid, u64 ref_objectid, u64 index)
int btrfs_insert_empty_inode(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path, u64 objectid)
int btrfs_lookup_inode(struct btrfs_trans_handle *trans, struct btrfs_root
*root, struct btrfs_path *path,
struct btrfs_key *location, int mod)
