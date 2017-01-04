static int caching_kthread(void *data)
static void start_caching(struct btrfs_root *root)
int btrfs_find_free_ino(struct btrfs_root *root, u64 *objectid)
void btrfs_return_ino(struct btrfs_root *root, u64 objectid)
void btrfs_unpin_free_ino(struct btrfs_root *root)
#define INIT_THRESHOLD	(((1024 * 32) / 2) / sizeof(struct btrfs_free_space))
#define INODES_PER_BITMAP (PAGE_CACHE_SIZE * 8)
static void recalculate_thresholds(struct btrfs_free_space_ctl *ctl)
static bool use_bitmap(struct btrfs_free_space_ctl *ctl,
struct btrfs_free_space *info)
static struct btrfs_free_space_op free_ino_op = ;
static void pinned_recalc_thresholds(struct btrfs_free_space_ctl *ctl)
static bool pinned_use_bitmap(struct btrfs_free_space_ctl *ctl,
struct btrfs_free_space *info)
static struct btrfs_free_space_op pinned_free_ino_op = ;
void btrfs_init_free_ino_ctl(struct btrfs_root *root)
int btrfs_save_ino_cache(struct btrfs_root *root,
struct btrfs_trans_handle *trans)
static int btrfs_find_highest_objectid(struct btrfs_root *root, u64 *objectid)
int btrfs_find_free_objectid(struct btrfs_root *root, u64 *objectid)
