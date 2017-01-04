#define __BTRFS_VOLUMES_
#define BTRFS_STRIPE_LEN	(64 * 1024)
struct buffer_head;
struct btrfs_pending_bios ;
struct btrfs_device ;
struct btrfs_fs_devices ;
struct btrfs_bio_stripe ;
struct btrfs_multi_bio ;
struct btrfs_device_info ;
struct map_lookup ;
#define map_lookup_size(n) (sizeof(struct map_lookup) + \
(sizeof(struct btrfs_bio_stripe) * (n)))
int btrfs_account_dev_extents_size(struct btrfs_device *device, u64 start,
u64 end, u64 *length);
#define btrfs_multi_bio_size(n) (sizeof(struct btrfs_multi_bio) + \
(sizeof(struct btrfs_bio_stripe) * (n)))
int btrfs_alloc_dev_extent(struct btrfs_trans_handle *trans,
struct btrfs_device *device,
u64 chunk_tree, u64 chunk_objectid,
u64 chunk_offset, u64 start, u64 num_bytes);
int btrfs_map_block(struct btrfs_mapping_tree *map_tree, int rw,
u64 logical, u64 *length,
struct btrfs_multi_bio **multi_ret, int mirror_num);
int btrfs_rmap_block(struct btrfs_mapping_tree *map_tree,
u64 chunk_start, u64 physical, u64 devid,
u64 **logical, int *naddrs, int *stripe_len);
int btrfs_read_sys_array(struct btrfs_root *root);
int btrfs_read_chunk_tree(struct btrfs_root *root);
int btrfs_alloc_chunk(struct btrfs_trans_handle *trans,
struct btrfs_root *extent_root, u64 type);
void btrfs_mapping_init(struct btrfs_mapping_tree *tree);
void btrfs_mapping_tree_free(struct btrfs_mapping_tree *tree);
int btrfs_map_bio(struct btrfs_root *root, int rw, struct bio *bio,
int mirror_num, int async_submit);
int btrfs_open_devices(struct btrfs_fs_devices *fs_devices,
fmode_t flags, void *holder);
int btrfs_scan_one_device(const char *path, fmode_t flags, void *holder,
struct btrfs_fs_devices **fs_devices_ret);
int btrfs_close_devices(struct btrfs_fs_devices *fs_devices);
int btrfs_close_extra_devices(struct btrfs_fs_devices *fs_devices);
int btrfs_add_device(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_device *device);
int btrfs_rm_device(struct btrfs_root *root, char *device_path);
int btrfs_cleanup_fs_uuids(void);
int btrfs_num_copies(struct btrfs_mapping_tree *map_tree, u64 logical, u64 len);
int btrfs_grow_device(struct btrfs_trans_handle *trans,
struct btrfs_device *device, u64 new_size);
struct btrfs_device *btrfs_find_device(struct btrfs_root *root, u64 devid,
u8 *uuid, u8 *fsid);
int btrfs_shrink_device(struct btrfs_device *device, u64 new_size);
int btrfs_init_new_device(struct btrfs_root *root, char *path);
int btrfs_balance(struct btrfs_root *dev_root);
int btrfs_chunk_readonly(struct btrfs_root *root, u64 chunk_offset);
int find_free_dev_extent(struct btrfs_trans_handle *trans,
struct btrfs_device *device, u64 num_bytes,
u64 *start, u64 *max_avail);
