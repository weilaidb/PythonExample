#define __BTRFS_TRANSACTION__
struct btrfs_transaction ;
struct btrfs_trans_handle ;
struct btrfs_pending_snapshot ;
static inline void btrfs_set_inode_last_trans(struct btrfs_trans_handle *trans,
struct inode *inode)
int btrfs_end_transaction(struct btrfs_trans_handle *trans,
struct btrfs_root *root);
int btrfs_end_transaction_nolock(struct btrfs_trans_handle *trans,
struct btrfs_root *root);
struct btrfs_trans_handle *btrfs_start_transaction(struct btrfs_root *root,
int num_items);
struct btrfs_trans_handle *btrfs_join_transaction(struct btrfs_root *root);
struct btrfs_trans_handle *btrfs_join_transaction_nolock(struct btrfs_root *root);
struct btrfs_trans_handle *btrfs_start_ioctl_transaction(struct btrfs_root *root);
int btrfs_wait_for_commit(struct btrfs_root *root, u64 transid);
int btrfs_write_and_wait_transaction(struct btrfs_trans_handle *trans,
struct btrfs_root *root);
int btrfs_add_dead_root(struct btrfs_root *root);
int btrfs_defrag_root(struct btrfs_root *root, int cacheonly);
int btrfs_clean_old_snapshots(struct btrfs_root *root);
int btrfs_commit_transaction(struct btrfs_trans_handle *trans,
struct btrfs_root *root);
int btrfs_commit_transaction_async(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
int wait_for_unblock);
int btrfs_end_transaction_throttle(struct btrfs_trans_handle *trans,
struct btrfs_root *root);
int btrfs_end_transaction_dmeta(struct btrfs_trans_handle *trans,
struct btrfs_root *root);
int btrfs_should_end_transaction(struct btrfs_trans_handle *trans,
struct btrfs_root *root);
void btrfs_throttle(struct btrfs_root *root);
int btrfs_record_root_in_trans(struct btrfs_trans_handle *trans,
struct btrfs_root *root);
int btrfs_write_and_wait_marked_extents(struct btrfs_root *root,
struct extent_io_tree *dirty_pages, int mark);
int btrfs_write_marked_extents(struct btrfs_root *root,
struct extent_io_tree *dirty_pages, int mark);
int btrfs_wait_marked_extents(struct btrfs_root *root,
struct extent_io_tree *dirty_pages, int mark);
int btrfs_transaction_blocked(struct btrfs_fs_info *info);
int btrfs_transaction_in_commit(struct btrfs_fs_info *info);
