static int init_first_rw_device(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_device *device);
static int btrfs_relocate_sys_chunks(struct btrfs_root *root);
static DEFINE_MUTEX(uuid_mutex);
static LIST_HEAD(fs_uuids);
static void lock_chunks(struct btrfs_root *root)
static void unlock_chunks(struct btrfs_root *root)
static void free_fs_devices(struct btrfs_fs_devices *fs_devices)
int btrfs_cleanup_fs_uuids(void)
static noinline struct btrfs_device *__find_device(struct list_head *head,
u64 devid, u8 *uuid)
static noinline struct btrfs_fs_devices *find_fsid(u8 *fsid)
static void requeue_list(struct btrfs_pending_bios *pending_bios,
struct bio *head, struct bio *tail)
static noinline int run_scheduled_bios(struct btrfs_device *device)
static void pending_bios_fn(struct btrfs_work *work)
static noinline int device_list_add(const char *path,
struct btrfs_super_block *disk_super,
u64 devid, struct btrfs_fs_devices **fs_devices_ret)
static struct btrfs_fs_devices *clone_fs_devices(struct btrfs_fs_devices *orig)
int btrfs_close_extra_devices(struct btrfs_fs_devices *fs_devices)
static void __free_device(struct work_struct *work)
static void free_device(struct rcu_head *head)
static int __btrfs_close_devices(struct btrfs_fs_devices *fs_devices)
int btrfs_close_devices(struct btrfs_fs_devices *fs_devices)
static int __btrfs_open_devices(struct btrfs_fs_devices *fs_devices,
fmode_t flags, void *holder)
int btrfs_open_devices(struct btrfs_fs_devices *fs_devices,
fmode_t flags, void *holder)
int btrfs_scan_one_device(const char *path, fmode_t flags, void *holder,
struct btrfs_fs_devices **fs_devices_ret)
int btrfs_account_dev_extents_size(struct btrfs_device *device, u64 start,
u64 end, u64 *length)
int find_free_dev_extent(struct btrfs_trans_handle *trans,
struct btrfs_device *device, u64 num_bytes,
u64 *start, u64 *len)
static int btrfs_free_dev_extent(struct btrfs_trans_handle *trans,
struct btrfs_device *device,
u64 start)
int btrfs_alloc_dev_extent(struct btrfs_trans_handle *trans,
struct btrfs_device *device,
u64 chunk_tree, u64 chunk_objectid,
u64 chunk_offset, u64 start, u64 num_bytes)
static noinline int find_next_chunk(struct btrfs_root *root,
u64 objectid, u64 *offset)
static noinline int find_next_devid(struct btrfs_root *root, u64 *objectid)
int btrfs_add_device(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_device *device)
static int btrfs_rm_dev_item(struct btrfs_root *root,
struct btrfs_device *device)
int btrfs_rm_device(struct btrfs_root *root, char *device_path)
static int btrfs_prepare_sprout(struct btrfs_trans_handle *trans,
struct btrfs_root *root)
static int btrfs_finish_sprout(struct btrfs_trans_handle *trans,
struct btrfs_root *root)
int btrfs_init_new_device(struct btrfs_root *root, char *device_path)
static noinline int btrfs_update_device(struct btrfs_trans_handle *trans,
struct btrfs_device *device)
static int __btrfs_grow_device(struct btrfs_trans_handle *trans,
struct btrfs_device *device, u64 new_size)
int btrfs_grow_device(struct btrfs_trans_handle *trans,
struct btrfs_device *device, u64 new_size)
static int btrfs_free_chunk(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
u64 chunk_tree, u64 chunk_objectid,
u64 chunk_offset)
static int btrfs_del_sys_chunk(struct btrfs_root *root, u64 chunk_objectid, u64
chunk_offset)
static int btrfs_relocate_chunk(struct btrfs_root *root,
u64 chunk_tree, u64 chunk_objectid,
u64 chunk_offset)
static int btrfs_relocate_sys_chunks(struct btrfs_root *root)
static u64 div_factor(u64 num, int factor)
int btrfs_balance(struct btrfs_root *dev_root)
int btrfs_shrink_device(struct btrfs_device *device, u64 new_size)
static int btrfs_add_system_chunk(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_key *key,
struct btrfs_chunk *chunk, int item_size)
static int btrfs_cmp_device_info(const void *a, const void *b)
static int __btrfs_alloc_chunk(struct btrfs_trans_handle *trans,
struct btrfs_root *extent_root,
struct map_lookup **map_ret,
u64 *num_bytes_out, u64 *stripe_size_out,
u64 start, u64 type)
static int __finish_chunk_alloc(struct btrfs_trans_handle *trans,
struct btrfs_root *extent_root,
struct map_lookup *map, u64 chunk_offset,
u64 chunk_size, u64 stripe_size)
int btrfs_alloc_chunk(struct btrfs_trans_handle *trans,
struct btrfs_root *extent_root, u64 type)
static noinline int init_first_rw_device(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_device *device)
int btrfs_chunk_readonly(struct btrfs_root *root, u64 chunk_offset)
void btrfs_mapping_init(struct btrfs_mapping_tree *tree)
void btrfs_mapping_tree_free(struct btrfs_mapping_tree *tree)
int btrfs_num_copies(struct btrfs_mapping_tree *map_tree, u64 logical, u64 len)
static int find_live_mirror(struct map_lookup *map, int first, int num,
int optimal)
static int __btrfs_map_block(struct btrfs_mapping_tree *map_tree, int rw,
u64 logical, u64 *length,
struct btrfs_multi_bio **multi_ret,
int mirror_num)
int btrfs_map_block(struct btrfs_mapping_tree *map_tree, int rw,
u64 logical, u64 *length,
struct btrfs_multi_bio **multi_ret, int mirror_num)
int btrfs_rmap_block(struct btrfs_mapping_tree *map_tree,
u64 chunk_start, u64 physical, u64 devid,
u64 **logical, int *naddrs, int *stripe_len)
static void end_bio_multi_stripe(struct bio *bio, int err)
struct async_sched ;
static noinline int schedule_bio(struct btrfs_root *root,
struct btrfs_device *device,
int rw, struct bio *bio)
int btrfs_map_bio(struct btrfs_root *root, int rw, struct bio *bio,
int mirror_num, int async_submit)
struct btrfs_device *btrfs_find_device(struct btrfs_root *root, u64 devid,
u8 *uuid, u8 *fsid)
static struct btrfs_device *add_missing_dev(struct btrfs_root *root,
u64 devid, u8 *dev_uuid)
static int read_one_chunk(struct btrfs_root *root, struct btrfs_key *key,
struct extent_buffer *leaf,
struct btrfs_chunk *chunk)
static int fill_device_from_item(struct extent_buffer *leaf,
struct btrfs_dev_item *dev_item,
struct btrfs_device *device)
static int open_seed_devices(struct btrfs_root *root, u8 *fsid)
static int read_one_dev(struct btrfs_root *root,
struct extent_buffer *leaf,
struct btrfs_dev_item *dev_item)
int btrfs_read_sys_array(struct btrfs_root *root)
int btrfs_read_chunk_tree(struct btrfs_root *root)
