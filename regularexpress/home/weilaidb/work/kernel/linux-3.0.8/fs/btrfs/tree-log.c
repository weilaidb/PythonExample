#define LOG_INODE_ALL 0
#define LOG_INODE_EXISTS 1
#define LOG_WALK_PIN_ONLY 0
#define LOG_WALK_REPLAY_INODES 1
#define LOG_WALK_REPLAY_ALL 2
static int btrfs_log_inode(struct btrfs_trans_handle *trans,
struct btrfs_root *root, struct inode *inode,
int inode_only);
static int link_to_fixup_dir(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path, u64 objectid);
static noinline int replay_dir_deletes(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_root *log,
struct btrfs_path *path,
u64 dirid, int del_all);
static int start_log_trans(struct btrfs_trans_handle *trans,
struct btrfs_root *root)
static int join_running_log_trans(struct btrfs_root *root)
int btrfs_pin_log_trans(struct btrfs_root *root)
int btrfs_end_log_trans(struct btrfs_root *root)
struct walk_control ;
static int process_one_buffer(struct btrfs_root *log,
struct extent_buffer *eb,
struct walk_control *wc, u64 gen)
static noinline int overwrite_item(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
struct extent_buffer *eb, int slot,
struct btrfs_key *key)
static noinline struct inode *read_one_inode(struct btrfs_root *root,
u64 objectid)
static noinline int replay_one_extent(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
struct extent_buffer *eb, int slot,
struct btrfs_key *key)
static noinline int drop_one_dir_item(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
struct inode *dir,
struct btrfs_dir_item *di)
static noinline int inode_in_dir(struct btrfs_root *root,
struct btrfs_path *path,
u64 dirid, u64 objectid, u64 index,
const char *name, int name_len)
static noinline int backref_in_log(struct btrfs_root *log,
struct btrfs_key *key,
char *name, int namelen)
static noinline int add_inode_ref(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_root *log,
struct btrfs_path *path,
struct extent_buffer *eb, int slot,
struct btrfs_key *key)
static int insert_orphan_item(struct btrfs_trans_handle *trans,
struct btrfs_root *root, u64 offset)
static noinline int fixup_inode_link_count(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct inode *inode)
static noinline int fixup_inode_link_counts(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path)
static noinline int link_to_fixup_dir(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
u64 objectid)
static noinline int insert_one_name(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
u64 dirid, u64 index,
char *name, int name_len, u8 type,
struct btrfs_key *location)
static noinline int replay_one_name(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
struct extent_buffer *eb,
struct btrfs_dir_item *di,
struct btrfs_key *key)
static noinline int replay_one_dir_item(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
struct extent_buffer *eb, int slot,
struct btrfs_key *key)
static noinline int find_dir_range(struct btrfs_root *root,
struct btrfs_path *path,
u64 dirid, int key_type,
u64 *start_ret, u64 *end_ret)
static noinline int check_item_in_log(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_root *log,
struct btrfs_path *path,
struct btrfs_path *log_path,
struct inode *dir,
struct btrfs_key *dir_key)
static noinline int replay_dir_deletes(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_root *log,
struct btrfs_path *path,
u64 dirid, int del_all)
static int replay_one_buffer(struct btrfs_root *log, struct extent_buffer *eb,
struct walk_control *wc, u64 gen)
static noinline int walk_down_log_tree(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path, int *level,
struct walk_control *wc)
static noinline int walk_up_log_tree(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path, int *level,
struct walk_control *wc)
static int walk_log_tree(struct btrfs_trans_handle *trans,
struct btrfs_root *log, struct walk_control *wc)
static int update_log_root(struct btrfs_trans_handle *trans,
struct btrfs_root *log)
static int wait_log_commit(struct btrfs_trans_handle *trans,
struct btrfs_root *root, unsigned long transid)
static int wait_for_writer(struct btrfs_trans_handle *trans,
struct btrfs_root *root)
int btrfs_sync_log(struct btrfs_trans_handle *trans,
struct btrfs_root *root)
static void free_log_tree(struct btrfs_trans_handle *trans,
struct btrfs_root *log)
int btrfs_free_log(struct btrfs_trans_handle *trans, struct btrfs_root *root)
int btrfs_free_log_root_tree(struct btrfs_trans_handle *trans,
struct btrfs_fs_info *fs_info)
int btrfs_del_dir_entries_in_log(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
const char *name, int name_len,
struct inode *dir, u64 index)
int btrfs_del_inode_ref_in_log(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
const char *name, int name_len,
struct inode *inode, u64 dirid)
static noinline int insert_dir_log_key(struct btrfs_trans_handle *trans,
struct btrfs_root *log,
struct btrfs_path *path,
int key_type, u64 dirid,
u64 first_offset, u64 last_offset)
static noinline int log_dir_items(struct btrfs_trans_handle *trans,
struct btrfs_root *root, struct inode *inode,
struct btrfs_path *path,
struct btrfs_path *dst_path, int key_type,
u64 min_offset, u64 *last_offset_ret)
static noinline int log_directory_changes(struct btrfs_trans_handle *trans,
struct btrfs_root *root, struct inode *inode,
struct btrfs_path *path,
struct btrfs_path *dst_path)
static int drop_objectid_items(struct btrfs_trans_handle *trans,
struct btrfs_root *log,
struct btrfs_path *path,
u64 objectid, int max_key_type)
static noinline int copy_items(struct btrfs_trans_handle *trans,
struct btrfs_root *log,
struct btrfs_path *dst_path,
struct extent_buffer *src,
int start_slot, int nr, int inode_only)
static int btrfs_log_inode(struct btrfs_trans_handle *trans,
struct btrfs_root *root, struct inode *inode,
int inode_only)
static noinline int check_parent_dirs_for_sync(struct btrfs_trans_handle *trans,
struct inode *inode,
struct dentry *parent,
struct super_block *sb,
u64 last_committed)
static int inode_in_log(struct btrfs_trans_handle *trans,
struct inode *inode)
int btrfs_log_inode_parent(struct btrfs_trans_handle *trans,
struct btrfs_root *root, struct inode *inode,
struct dentry *parent, int exists_only)
int btrfs_log_dentry_safe(struct btrfs_trans_handle *trans,
struct btrfs_root *root, struct dentry *dentry)
int btrfs_recover_log_trees(struct btrfs_root *log_root_tree)
void btrfs_record_unlink_dir(struct btrfs_trans_handle *trans,
struct inode *dir, struct inode *inode,
int for_rename)
int btrfs_log_new_name(struct btrfs_trans_handle *trans,
struct inode *inode, struct inode *old_dir,
struct dentry *parent)
