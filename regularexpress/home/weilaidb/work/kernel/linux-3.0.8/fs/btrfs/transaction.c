#define BTRFS_ROOT_TRANS_TAG 0
static noinline void put_transaction(struct btrfs_transaction *transaction)
static noinline void switch_commit_root(struct btrfs_root *root)
static noinline int join_transaction(struct btrfs_root *root, int nofail)
static int record_root_in_trans(struct btrfs_trans_handle *trans,
struct btrfs_root *root)
int btrfs_record_root_in_trans(struct btrfs_trans_handle *trans,
struct btrfs_root *root)
static void wait_current_trans(struct btrfs_root *root)
enum btrfs_trans_type ;
static int may_wait_transaction(struct btrfs_root *root, int type)
static struct btrfs_trans_handle *start_transaction(struct btrfs_root *root,
u64 num_items, int type)
struct btrfs_trans_handle *btrfs_start_transaction(struct btrfs_root *root,
int num_items)
struct btrfs_trans_handle *btrfs_join_transaction(struct btrfs_root *root)
struct btrfs_trans_handle *btrfs_join_transaction_nolock(struct btrfs_root *root)
struct btrfs_trans_handle *btrfs_start_ioctl_transaction(struct btrfs_root *root)
static noinline int wait_for_commit(struct btrfs_root *root,
struct btrfs_transaction *commit)
int btrfs_wait_for_commit(struct btrfs_root *root, u64 transid)
void btrfs_throttle(struct btrfs_root *root)
static int should_end_transaction(struct btrfs_trans_handle *trans,
struct btrfs_root *root)
int btrfs_should_end_transaction(struct btrfs_trans_handle *trans,
struct btrfs_root *root)
static int __btrfs_end_transaction(struct btrfs_trans_handle *trans,
struct btrfs_root *root, int throttle, int lock)
int btrfs_end_transaction(struct btrfs_trans_handle *trans,
struct btrfs_root *root)
int btrfs_end_transaction_throttle(struct btrfs_trans_handle *trans,
struct btrfs_root *root)
int btrfs_end_transaction_nolock(struct btrfs_trans_handle *trans,
struct btrfs_root *root)
int btrfs_end_transaction_dmeta(struct btrfs_trans_handle *trans,
struct btrfs_root *root)
int btrfs_write_marked_extents(struct btrfs_root *root,
struct extent_io_tree *dirty_pages, int mark)
int btrfs_wait_marked_extents(struct btrfs_root *root,
struct extent_io_tree *dirty_pages, int mark)
int btrfs_write_and_wait_marked_extents(struct btrfs_root *root,
struct extent_io_tree *dirty_pages, int mark)
int btrfs_write_and_wait_transaction(struct btrfs_trans_handle *trans,
struct btrfs_root *root)
static int update_cowonly_root(struct btrfs_trans_handle *trans,
struct btrfs_root *root)
static noinline int commit_cowonly_roots(struct btrfs_trans_handle *trans,
struct btrfs_root *root)
int btrfs_add_dead_root(struct btrfs_root *root)
static noinline int commit_fs_roots(struct btrfs_trans_handle *trans,
struct btrfs_root *root)
int btrfs_defrag_root(struct btrfs_root *root, int cacheonly)
static noinline int create_pending_snapshot(struct btrfs_trans_handle *trans,
struct btrfs_fs_info *fs_info,
struct btrfs_pending_snapshot *pending)
static noinline int create_pending_snapshots(struct btrfs_trans_handle *trans,
struct btrfs_fs_info *fs_info)
static void update_super_roots(struct btrfs_root *root)
int btrfs_transaction_in_commit(struct btrfs_fs_info *info)
int btrfs_transaction_blocked(struct btrfs_fs_info *info)
static void wait_current_trans_commit_start(struct btrfs_root *root,
struct btrfs_transaction *trans)
static void wait_current_trans_commit_start_and_unblock(struct btrfs_root *root,
struct btrfs_transaction *trans)
struct btrfs_async_commit ;
static void do_async_commit(struct work_struct *work)
int btrfs_commit_transaction_async(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
int wait_for_unblock)
int btrfs_commit_transaction(struct btrfs_trans_handle *trans,
struct btrfs_root *root)
int btrfs_clean_old_snapshots(struct btrfs_root *root)
