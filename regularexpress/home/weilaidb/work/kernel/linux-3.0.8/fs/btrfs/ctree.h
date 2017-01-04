#define __BTRFS_CTREE__
struct btrfs_trans_handle;
struct btrfs_transaction;
struct btrfs_pending_snapshot;
extern struct kmem_cache *btrfs_trans_handle_cachep;
extern struct kmem_cache *btrfs_transaction_cachep;
extern struct kmem_cache *btrfs_bit_radix_cachep;
extern struct kmem_cache *btrfs_path_cachep;
extern struct kmem_cache *btrfs_free_space_cachep;
struct btrfs_ordered_sum;
#define BTRFS_MAGIC "_BHRfS_M"
#define BTRFS_MAX_LEVEL 8
#define BTRFS_COMPAT_EXTENT_TREE_V0
#define BTRFS_ORDERED_OPERATIONS_FLUSH_LIMIT (8 * 1024 * 1024)
#define BTRFS_ROOT_TREE_OBJECTID 1ULL
#define BTRFS_EXTENT_TREE_OBJECTID 2ULL
#define BTRFS_CHUNK_TREE_OBJECTID 3ULL
#define BTRFS_DEV_TREE_OBJECTID 4ULL
#define BTRFS_FS_TREE_OBJECTID 5ULL
#define BTRFS_ROOT_TREE_DIR_OBJECTID 6ULL
#define BTRFS_CSUM_TREE_OBJECTID 7ULL
#define BTRFS_ORPHAN_OBJECTID -5ULL
#define BTRFS_TREE_LOG_OBJECTID -6ULL
#define BTRFS_TREE_LOG_FIXUP_OBJECTID -7ULL
#define BTRFS_TREE_RELOC_OBJECTID -8ULL
#define BTRFS_DATA_RELOC_TREE_OBJECTID -9ULL
#define BTRFS_EXTENT_CSUM_OBJECTID -10ULL
#define BTRFS_FREE_SPACE_OBJECTID -11ULL
#define BTRFS_FREE_INO_OBJECTID -12ULL
#define BTRFS_MULTIPLE_OBJECTIDS -255ULL
#define BTRFS_FIRST_FREE_OBJECTID 256ULL
#define BTRFS_LAST_FREE_OBJECTID -256ULL
#define BTRFS_FIRST_CHUNK_TREE_OBJECTID 256ULL
#define BTRFS_DEV_ITEMS_OBJECTID 1ULL
#define BTRFS_BTREE_INODE_OBJECTID 1
#define BTRFS_EMPTY_SUBVOL_DIR_OBJECTID 2
#define BTRFS_NAME_LEN 255
#define BTRFS_CSUM_SIZE 32
#define BTRFS_CSUM_TYPE_CRC32	0
static int btrfs_csum_sizes[] = ;
#define BTRFS_EMPTY_DIR_SIZE 0
#define BTRFS_FT_UNKNOWN	0
#define BTRFS_FT_REG_FILE	1
#define BTRFS_FT_DIR		2
#define BTRFS_FT_CHRDEV		3
#define BTRFS_FT_BLKDEV		4
#define BTRFS_FT_FIFO		5
#define BTRFS_FT_SOCK		6
#define BTRFS_FT_SYMLINK	7
#define BTRFS_FT_XATTR		8
#define BTRFS_FT_MAX		9
struct btrfs_disk_key  __attribute__ ((__packed__));
struct btrfs_key  __attribute__ ((__packed__));
struct btrfs_mapping_tree ;
struct btrfs_dev_item  __attribute__ ((__packed__));
struct btrfs_stripe  __attribute__ ((__packed__));
struct btrfs_chunk  __attribute__ ((__packed__));
#define BTRFS_FREE_SPACE_EXTENT	1
#define BTRFS_FREE_SPACE_BITMAP	2
struct btrfs_free_space_entry  __attribute__ ((__packed__));
struct btrfs_free_space_header  __attribute__ ((__packed__));
static inline unsigned long btrfs_chunk_item_size(int num_stripes)
#define BTRFS_HEADER_FLAG_WRITTEN	(1ULL << 0)
#define BTRFS_HEADER_FLAG_RELOC		(1ULL << 1)
#define BTRFS_SUPER_FLAG_ERROR		(1ULL << 2)
#define BTRFS_SUPER_FLAG_SEEDING	(1ULL << 32)
#define BTRFS_SUPER_FLAG_METADUMP	(1ULL << 33)
#define BTRFS_BACKREF_REV_MAX		256
#define BTRFS_BACKREF_REV_SHIFT		56
#define BTRFS_BACKREF_REV_MASK		(((u64)BTRFS_BACKREF_REV_MAX - 1) << \
BTRFS_BACKREF_REV_SHIFT)
#define BTRFS_OLD_BACKREF_REV		0
#define BTRFS_MIXED_BACKREF_REV		1
struct btrfs_header  __attribute__ ((__packed__));
#define BTRFS_NODEPTRS_PER_BLOCK(r) (((r)->nodesize - \
sizeof(struct btrfs_header)) / \
sizeof(struct btrfs_key_ptr))
#define __BTRFS_LEAF_DATA_SIZE(bs) ((bs) - sizeof(struct btrfs_header))
#define BTRFS_LEAF_DATA_SIZE(r) (__BTRFS_LEAF_DATA_SIZE(r->leafsize))
#define BTRFS_MAX_INLINE_DATA_SIZE(r) (BTRFS_LEAF_DATA_SIZE(r) - \
sizeof(struct btrfs_item) - \
sizeof(struct btrfs_file_extent_item))
#define BTRFS_MAX_XATTR_SIZE(r)	(BTRFS_LEAF_DATA_SIZE(r) - \
sizeof(struct btrfs_item) -\
sizeof(struct btrfs_dir_item))
#define BTRFS_SYSTEM_CHUNK_ARRAY_SIZE 2048
#define BTRFS_LABEL_SIZE 256
struct btrfs_super_block  __attribute__ ((__packed__));
#define BTRFS_FEATURE_INCOMPAT_MIXED_BACKREF	(1ULL << 0)
#define BTRFS_FEATURE_INCOMPAT_DEFAULT_SUBVOL	(1ULL << 1)
#define BTRFS_FEATURE_INCOMPAT_MIXED_GROUPS	(1ULL << 2)
#define BTRFS_FEATURE_INCOMPAT_COMPRESS_LZO	(1ULL << 3)
#define BTRFS_FEATURE_COMPAT_SUPP		0ULL
#define BTRFS_FEATURE_COMPAT_RO_SUPP		0ULL
#define BTRFS_FEATURE_INCOMPAT_SUPP			\
(BTRFS_FEATURE_INCOMPAT_MIXED_BACKREF |		\
BTRFS_FEATURE_INCOMPAT_DEFAULT_SUBVOL |	\
BTRFS_FEATURE_INCOMPAT_MIXED_GROUPS |		\
BTRFS_FEATURE_INCOMPAT_COMPRESS_LZO)
struct btrfs_item  __attribute__ ((__packed__));
struct btrfs_leaf  __attribute__ ((__packed__));
struct btrfs_key_ptr  __attribute__ ((__packed__));
struct btrfs_node  __attribute__ ((__packed__));
struct btrfs_path ;
struct btrfs_extent_item  __attribute__ ((__packed__));
struct btrfs_extent_item_v0  __attribute__ ((__packed__));
#define BTRFS_MAX_EXTENT_ITEM_SIZE(r) ((BTRFS_LEAF_DATA_SIZE(r) >> 4) - \
sizeof(struct btrfs_item))
#define BTRFS_EXTENT_FLAG_DATA		(1ULL << 0)
#define BTRFS_EXTENT_FLAG_TREE_BLOCK	(1ULL << 1)
#define BTRFS_BLOCK_FLAG_FULL_BACKREF	(1ULL << 8)
#define BTRFS_EXTENT_FLAG_SUPER		(1ULL << 48)
struct btrfs_tree_block_info  __attribute__ ((__packed__));
struct btrfs_extent_data_ref  __attribute__ ((__packed__));
struct btrfs_shared_data_ref  __attribute__ ((__packed__));
struct btrfs_extent_inline_ref  __attribute__ ((__packed__));
struct btrfs_extent_ref_v0  __attribute__ ((__packed__));
struct btrfs_dev_extent  __attribute__ ((__packed__));
struct btrfs_inode_ref  __attribute__ ((__packed__));
struct btrfs_timespec  __attribute__ ((__packed__));
enum btrfs_compression_type ;
struct btrfs_inode_item  __attribute__ ((__packed__));
struct btrfs_dir_log_item  __attribute__ ((__packed__));
struct btrfs_dir_item  __attribute__ ((__packed__));
#define BTRFS_ROOT_SUBVOL_RDONLY	(1ULL << 0)
struct btrfs_root_item  __attribute__ ((__packed__));
struct btrfs_root_ref  __attribute__ ((__packed__));
#define BTRFS_FILE_EXTENT_INLINE 0
#define BTRFS_FILE_EXTENT_REG 1
#define BTRFS_FILE_EXTENT_PREALLOC 2
struct btrfs_file_extent_item  __attribute__ ((__packed__));
struct btrfs_csum_item  __attribute__ ((__packed__));
#define BTRFS_BLOCK_GROUP_DATA     (1 << 0)
#define BTRFS_BLOCK_GROUP_SYSTEM   (1 << 1)
#define BTRFS_BLOCK_GROUP_METADATA (1 << 2)
#define BTRFS_BLOCK_GROUP_RAID0    (1 << 3)
#define BTRFS_BLOCK_GROUP_RAID1    (1 << 4)
#define BTRFS_BLOCK_GROUP_DUP	   (1 << 5)
#define BTRFS_BLOCK_GROUP_RAID10   (1 << 6)
#define BTRFS_NR_RAID_TYPES	   5
struct btrfs_block_group_item  __attribute__ ((__packed__));
struct btrfs_space_info ;
struct btrfs_block_rsv ;
struct btrfs_free_cluster ;
enum btrfs_caching_type ;
enum btrfs_disk_cache_state ;
struct btrfs_caching_control ;
struct btrfs_block_group_cache ;
struct reloc_control;
struct btrfs_device;
struct btrfs_fs_devices;
struct btrfs_delayed_root;
struct btrfs_fs_info ;
struct btrfs_root ;
struct btrfs_ioctl_defrag_range_args ;
#define BTRFS_INODE_ITEM_KEY		1
#define BTRFS_INODE_REF_KEY		12
#define BTRFS_XATTR_ITEM_KEY		24
#define BTRFS_ORPHAN_ITEM_KEY		48
#define BTRFS_DIR_LOG_ITEM_KEY  60
#define BTRFS_DIR_LOG_INDEX_KEY 72
#define BTRFS_DIR_ITEM_KEY	84
#define BTRFS_DIR_INDEX_KEY	96
#define BTRFS_EXTENT_DATA_KEY	108
#define BTRFS_EXTENT_CSUM_KEY	128
#define BTRFS_ROOT_ITEM_KEY	132
#define BTRFS_ROOT_BACKREF_KEY	144
#define BTRFS_ROOT_REF_KEY	156
#define BTRFS_EXTENT_ITEM_KEY	168
#define BTRFS_TREE_BLOCK_REF_KEY	176
#define BTRFS_EXTENT_DATA_REF_KEY	178
#define BTRFS_EXTENT_REF_V0_KEY		180
#define BTRFS_SHARED_BLOCK_REF_KEY	182
#define BTRFS_SHARED_DATA_REF_KEY	184
#define BTRFS_BLOCK_GROUP_ITEM_KEY 192
#define BTRFS_DEV_EXTENT_KEY	204
#define BTRFS_DEV_ITEM_KEY	216
#define BTRFS_CHUNK_ITEM_KEY	228
#define BTRFS_STRING_ITEM_KEY	253
#define BTRFS_MOUNT_NODATASUM		(1 << 0)
#define BTRFS_MOUNT_NODATACOW		(1 << 1)
#define BTRFS_MOUNT_NOBARRIER		(1 << 2)
#define BTRFS_MOUNT_SSD			(1 << 3)
#define BTRFS_MOUNT_DEGRADED		(1 << 4)
#define BTRFS_MOUNT_COMPRESS		(1 << 5)
#define BTRFS_MOUNT_NOTREELOG           (1 << 6)
#define BTRFS_MOUNT_FLUSHONCOMMIT       (1 << 7)
#define BTRFS_MOUNT_SSD_SPREAD		(1 << 8)
#define BTRFS_MOUNT_NOSSD		(1 << 9)
#define BTRFS_MOUNT_DISCARD		(1 << 10)
#define BTRFS_MOUNT_FORCE_COMPRESS      (1 << 11)
#define BTRFS_MOUNT_SPACE_CACHE		(1 << 12)
#define BTRFS_MOUNT_CLEAR_CACHE		(1 << 13)
#define BTRFS_MOUNT_USER_SUBVOL_RM_ALLOWED (1 << 14)
#define BTRFS_MOUNT_ENOSPC_DEBUG	 (1 << 15)
#define BTRFS_MOUNT_AUTO_DEFRAG		(1 << 16)
#define BTRFS_MOUNT_INODE_MAP_CACHE	(1 << 17)
#define btrfs_clear_opt(o, opt)		((o) &= ~BTRFS_MOUNT_##opt)
#define btrfs_set_opt(o, opt)		((o) |= BTRFS_MOUNT_##opt)
#define btrfs_test_opt(root, opt)	((root)->fs_info->mount_opt & \
BTRFS_MOUNT_##opt)
#define BTRFS_INODE_NODATASUM		(1 << 0)
#define BTRFS_INODE_NODATACOW		(1 << 1)
#define BTRFS_INODE_READONLY		(1 << 2)
#define BTRFS_INODE_NOCOMPRESS		(1 << 3)
#define BTRFS_INODE_PREALLOC		(1 << 4)
#define BTRFS_INODE_SYNC		(1 << 5)
#define BTRFS_INODE_IMMUTABLE		(1 << 6)
#define BTRFS_INODE_APPEND		(1 << 7)
#define BTRFS_INODE_NODUMP		(1 << 8)
#define BTRFS_INODE_NOATIME		(1 << 9)
#define BTRFS_INODE_DIRSYNC		(1 << 10)
#define BTRFS_INODE_COMPRESS		(1 << 11)
#define BTRFS_INODE_ROOT_ITEM_INIT	(1 << 31)
#define le8_to_cpu(v) (v)
#define cpu_to_le8(v) (v)
#define __le8 u8
#define read_eb_member(eb, ptr, type, member, result) (			\
read_extent_buffer(eb, (char *)(result),			\
((unsigned long)(ptr)) +			\
offsetof(type, member),			\
sizeof(((type *)0)->member)))
#define write_eb_member(eb, ptr, type, member, result) (		\
write_extent_buffer(eb, (char *)(result),			\
((unsigned long)(ptr)) +			\
offsetof(type, member),			\
sizeof(((type *)0)->member)))
#define BTRFS_SETGET_FUNCS(name, type, member, bits)			\
u##bits btrfs_##name(struct extent_buffer *eb, type *s);		\
void btrfs_set_##name(struct extent_buffer *eb, type *s, u##bits val);
#define BTRFS_SETGET_HEADER_FUNCS(name, type, member, bits)		\
static inline u##bits btrfs_##name(struct extent_buffer *eb)		\
\
static inline void btrfs_set_##name(struct extent_buffer *eb,		\
u##bits val)			\
#define BTRFS_SETGET_STACK_FUNCS(name, type, member, bits)		\
static inline u##bits btrfs_##name(type *s)				\
\
static inline void btrfs_set_##name(type *s, u##bits val)		\
BTRFS_SETGET_FUNCS(device_type, struct btrfs_dev_item, type, 64);
BTRFS_SETGET_FUNCS(device_total_bytes, struct btrfs_dev_item, total_bytes, 64);
BTRFS_SETGET_FUNCS(device_bytes_used, struct btrfs_dev_item, bytes_used, 64);
BTRFS_SETGET_FUNCS(device_io_align, struct btrfs_dev_item, io_align, 32);
BTRFS_SETGET_FUNCS(device_io_width, struct btrfs_dev_item, io_width, 32);
BTRFS_SETGET_FUNCS(device_start_offset, struct btrfs_dev_item,
start_offset, 64);
BTRFS_SETGET_FUNCS(device_sector_size, struct btrfs_dev_item, sector_size, 32);
BTRFS_SETGET_FUNCS(device_id, struct btrfs_dev_item, devid, 64);
BTRFS_SETGET_FUNCS(device_group, struct btrfs_dev_item, dev_group, 32);
BTRFS_SETGET_FUNCS(device_seek_speed, struct btrfs_dev_item, seek_speed, 8);
BTRFS_SETGET_FUNCS(device_bandwidth, struct btrfs_dev_item, bandwidth, 8);
BTRFS_SETGET_FUNCS(device_generation, struct btrfs_dev_item, generation, 64);
BTRFS_SETGET_STACK_FUNCS(stack_device_type, struct btrfs_dev_item, type, 64);
BTRFS_SETGET_STACK_FUNCS(stack_device_total_bytes, struct btrfs_dev_item,
total_bytes, 64);
BTRFS_SETGET_STACK_FUNCS(stack_device_bytes_used, struct btrfs_dev_item,
bytes_used, 64);
BTRFS_SETGET_STACK_FUNCS(stack_device_io_align, struct btrfs_dev_item,
io_align, 32);
BTRFS_SETGET_STACK_FUNCS(stack_device_io_width, struct btrfs_dev_item,
io_width, 32);
BTRFS_SETGET_STACK_FUNCS(stack_device_sector_size, struct btrfs_dev_item,
sector_size, 32);
BTRFS_SETGET_STACK_FUNCS(stack_device_id, struct btrfs_dev_item, devid, 64);
BTRFS_SETGET_STACK_FUNCS(stack_device_group, struct btrfs_dev_item,
dev_group, 32);
BTRFS_SETGET_STACK_FUNCS(stack_device_seek_speed, struct btrfs_dev_item,
seek_speed, 8);
BTRFS_SETGET_STACK_FUNCS(stack_device_bandwidth, struct btrfs_dev_item,
bandwidth, 8);
BTRFS_SETGET_STACK_FUNCS(stack_device_generation, struct btrfs_dev_item,
generation, 64);
static inline char *btrfs_device_uuid(struct btrfs_dev_item *d)
static inline char *btrfs_device_fsid(struct btrfs_dev_item *d)
BTRFS_SETGET_FUNCS(chunk_length, struct btrfs_chunk, length, 64);
BTRFS_SETGET_FUNCS(chunk_owner, struct btrfs_chunk, owner, 64);
BTRFS_SETGET_FUNCS(chunk_stripe_len, struct btrfs_chunk, stripe_len, 64);
BTRFS_SETGET_FUNCS(chunk_io_align, struct btrfs_chunk, io_align, 32);
BTRFS_SETGET_FUNCS(chunk_io_width, struct btrfs_chunk, io_width, 32);
BTRFS_SETGET_FUNCS(chunk_sector_size, struct btrfs_chunk, sector_size, 32);
BTRFS_SETGET_FUNCS(chunk_type, struct btrfs_chunk, type, 64);
BTRFS_SETGET_FUNCS(chunk_num_stripes, struct btrfs_chunk, num_stripes, 16);
BTRFS_SETGET_FUNCS(chunk_sub_stripes, struct btrfs_chunk, sub_stripes, 16);
BTRFS_SETGET_FUNCS(stripe_devid, struct btrfs_stripe, devid, 64);
BTRFS_SETGET_FUNCS(stripe_offset, struct btrfs_stripe, offset, 64);
static inline char *btrfs_stripe_dev_uuid(struct btrfs_stripe *s)
BTRFS_SETGET_STACK_FUNCS(stack_chunk_length, struct btrfs_chunk, length, 64);
BTRFS_SETGET_STACK_FUNCS(stack_chunk_owner, struct btrfs_chunk, owner, 64);
BTRFS_SETGET_STACK_FUNCS(stack_chunk_stripe_len, struct btrfs_chunk,
stripe_len, 64);
BTRFS_SETGET_STACK_FUNCS(stack_chunk_io_align, struct btrfs_chunk,
io_align, 32);
BTRFS_SETGET_STACK_FUNCS(stack_chunk_io_width, struct btrfs_chunk,
io_width, 32);
BTRFS_SETGET_STACK_FUNCS(stack_chunk_sector_size, struct btrfs_chunk,
sector_size, 32);
BTRFS_SETGET_STACK_FUNCS(stack_chunk_type, struct btrfs_chunk, type, 64);
BTRFS_SETGET_STACK_FUNCS(stack_chunk_num_stripes, struct btrfs_chunk,
num_stripes, 16);
BTRFS_SETGET_STACK_FUNCS(stack_chunk_sub_stripes, struct btrfs_chunk,
sub_stripes, 16);
BTRFS_SETGET_STACK_FUNCS(stack_stripe_devid, struct btrfs_stripe, devid, 64);
BTRFS_SETGET_STACK_FUNCS(stack_stripe_offset, struct btrfs_stripe, offset, 64);
static inline struct btrfs_stripe *btrfs_stripe_nr(struct btrfs_chunk *c,
int nr)
static inline char *btrfs_stripe_dev_uuid_nr(struct btrfs_chunk *c, int nr)
static inline u64 btrfs_stripe_offset_nr(struct extent_buffer *eb,
struct btrfs_chunk *c, int nr)
static inline u64 btrfs_stripe_devid_nr(struct extent_buffer *eb,
struct btrfs_chunk *c, int nr)
BTRFS_SETGET_STACK_FUNCS(block_group_used, struct btrfs_block_group_item,
used, 64);
BTRFS_SETGET_FUNCS(disk_block_group_used, struct btrfs_block_group_item,
used, 64);
BTRFS_SETGET_STACK_FUNCS(block_group_chunk_objectid,
struct btrfs_block_group_item, chunk_objectid, 64);
BTRFS_SETGET_FUNCS(disk_block_group_chunk_objectid,
struct btrfs_block_group_item, chunk_objectid, 64);
BTRFS_SETGET_FUNCS(disk_block_group_flags,
struct btrfs_block_group_item, flags, 64);
BTRFS_SETGET_STACK_FUNCS(block_group_flags,
struct btrfs_block_group_item, flags, 64);
BTRFS_SETGET_FUNCS(inode_ref_name_len, struct btrfs_inode_ref, name_len, 16);
BTRFS_SETGET_FUNCS(inode_ref_index, struct btrfs_inode_ref, index, 64);
BTRFS_SETGET_FUNCS(inode_generation, struct btrfs_inode_item, generation, 64);
BTRFS_SETGET_FUNCS(inode_sequence, struct btrfs_inode_item, sequence, 64);
BTRFS_SETGET_FUNCS(inode_transid, struct btrfs_inode_item, transid, 64);
BTRFS_SETGET_FUNCS(inode_size, struct btrfs_inode_item, size, 64);
BTRFS_SETGET_FUNCS(inode_nbytes, struct btrfs_inode_item, nbytes, 64);
BTRFS_SETGET_FUNCS(inode_block_group, struct btrfs_inode_item, block_group, 64);
BTRFS_SETGET_FUNCS(inode_nlink, struct btrfs_inode_item, nlink, 32);
BTRFS_SETGET_FUNCS(inode_uid, struct btrfs_inode_item, uid, 32);
BTRFS_SETGET_FUNCS(inode_gid, struct btrfs_inode_item, gid, 32);
BTRFS_SETGET_FUNCS(inode_mode, struct btrfs_inode_item, mode, 32);
BTRFS_SETGET_FUNCS(inode_rdev, struct btrfs_inode_item, rdev, 64);
BTRFS_SETGET_FUNCS(inode_flags, struct btrfs_inode_item, flags, 64);
static inline struct btrfs_timespec *
btrfs_inode_atime(struct btrfs_inode_item *inode_item)
static inline struct btrfs_timespec *
btrfs_inode_mtime(struct btrfs_inode_item *inode_item)
static inline struct btrfs_timespec *
btrfs_inode_ctime(struct btrfs_inode_item *inode_item)
BTRFS_SETGET_FUNCS(timespec_sec, struct btrfs_timespec, sec, 64);
BTRFS_SETGET_FUNCS(timespec_nsec, struct btrfs_timespec, nsec, 32);
BTRFS_SETGET_FUNCS(dev_extent_chunk_tree, struct btrfs_dev_extent,
chunk_tree, 64);
BTRFS_SETGET_FUNCS(dev_extent_chunk_objectid, struct btrfs_dev_extent,
chunk_objectid, 64);
BTRFS_SETGET_FUNCS(dev_extent_chunk_offset, struct btrfs_dev_extent,
chunk_offset, 64);
BTRFS_SETGET_FUNCS(dev_extent_length, struct btrfs_dev_extent, length, 64);
static inline u8 *btrfs_dev_extent_chunk_tree_uuid(struct btrfs_dev_extent *dev)
BTRFS_SETGET_FUNCS(extent_refs, struct btrfs_extent_item, refs, 64);
BTRFS_SETGET_FUNCS(extent_generation, struct btrfs_extent_item,
generation, 64);
BTRFS_SETGET_FUNCS(extent_flags, struct btrfs_extent_item, flags, 64);
BTRFS_SETGET_FUNCS(extent_refs_v0, struct btrfs_extent_item_v0, refs, 32);
BTRFS_SETGET_FUNCS(tree_block_level, struct btrfs_tree_block_info, level, 8);
static inline void btrfs_tree_block_key(struct extent_buffer *eb,
struct btrfs_tree_block_info *item,
struct btrfs_disk_key *key)
static inline void btrfs_set_tree_block_key(struct extent_buffer *eb,
struct btrfs_tree_block_info *item,
struct btrfs_disk_key *key)
BTRFS_SETGET_FUNCS(extent_data_ref_root, struct btrfs_extent_data_ref,
root, 64);
BTRFS_SETGET_FUNCS(extent_data_ref_objectid, struct btrfs_extent_data_ref,
objectid, 64);
BTRFS_SETGET_FUNCS(extent_data_ref_offset, struct btrfs_extent_data_ref,
offset, 64);
BTRFS_SETGET_FUNCS(extent_data_ref_count, struct btrfs_extent_data_ref,
count, 32);
BTRFS_SETGET_FUNCS(shared_data_ref_count, struct btrfs_shared_data_ref,
count, 32);
BTRFS_SETGET_FUNCS(extent_inline_ref_type, struct btrfs_extent_inline_ref,
type, 8);
BTRFS_SETGET_FUNCS(extent_inline_ref_offset, struct btrfs_extent_inline_ref,
offset, 64);
static inline u32 btrfs_extent_inline_ref_size(int type)
BTRFS_SETGET_FUNCS(ref_root_v0, struct btrfs_extent_ref_v0, root, 64);
BTRFS_SETGET_FUNCS(ref_generation_v0, struct btrfs_extent_ref_v0,
generation, 64);
BTRFS_SETGET_FUNCS(ref_objectid_v0, struct btrfs_extent_ref_v0, objectid, 64);
BTRFS_SETGET_FUNCS(ref_count_v0, struct btrfs_extent_ref_v0, count, 32);
BTRFS_SETGET_FUNCS(key_blockptr, struct btrfs_key_ptr, blockptr, 64);
BTRFS_SETGET_FUNCS(key_generation, struct btrfs_key_ptr, generation, 64);
static inline u64 btrfs_node_blockptr(struct extent_buffer *eb, int nr)
static inline void btrfs_set_node_blockptr(struct extent_buffer *eb,
int nr, u64 val)
static inline u64 btrfs_node_ptr_generation(struct extent_buffer *eb, int nr)
static inline void btrfs_set_node_ptr_generation(struct extent_buffer *eb,
int nr, u64 val)
static inline unsigned long btrfs_node_key_ptr_offset(int nr)
void btrfs_node_key(struct extent_buffer *eb,
struct btrfs_disk_key *disk_key, int nr);
static inline void btrfs_set_node_key(struct extent_buffer *eb,
struct btrfs_disk_key *disk_key, int nr)
BTRFS_SETGET_FUNCS(item_offset, struct btrfs_item, offset, 32);
BTRFS_SETGET_FUNCS(item_size, struct btrfs_item, size, 32);
static inline unsigned long btrfs_item_nr_offset(int nr)
static inline struct btrfs_item *btrfs_item_nr(struct extent_buffer *eb,
int nr)
static inline u32 btrfs_item_end(struct extent_buffer *eb,
struct btrfs_item *item)
static inline u32 btrfs_item_end_nr(struct extent_buffer *eb, int nr)
static inline u32 btrfs_item_offset_nr(struct extent_buffer *eb, int nr)
static inline u32 btrfs_item_size_nr(struct extent_buffer *eb, int nr)
static inline void btrfs_item_key(struct extent_buffer *eb,
struct btrfs_disk_key *disk_key, int nr)
static inline void btrfs_set_item_key(struct extent_buffer *eb,
struct btrfs_disk_key *disk_key, int nr)
BTRFS_SETGET_FUNCS(dir_log_end, struct btrfs_dir_log_item, end, 64);
BTRFS_SETGET_FUNCS(root_ref_dirid, struct btrfs_root_ref, dirid, 64);
BTRFS_SETGET_FUNCS(root_ref_sequence, struct btrfs_root_ref, sequence, 64);
BTRFS_SETGET_FUNCS(root_ref_name_len, struct btrfs_root_ref, name_len, 16);
BTRFS_SETGET_FUNCS(dir_data_len, struct btrfs_dir_item, data_len, 16);
BTRFS_SETGET_FUNCS(dir_type, struct btrfs_dir_item, type, 8);
BTRFS_SETGET_FUNCS(dir_name_len, struct btrfs_dir_item, name_len, 16);
BTRFS_SETGET_FUNCS(dir_transid, struct btrfs_dir_item, transid, 64);
static inline void btrfs_dir_item_key(struct extent_buffer *eb,
struct btrfs_dir_item *item,
struct btrfs_disk_key *key)
static inline void btrfs_set_dir_item_key(struct extent_buffer *eb,
struct btrfs_dir_item *item,
struct btrfs_disk_key *key)
BTRFS_SETGET_FUNCS(free_space_entries, struct btrfs_free_space_header,
num_entries, 64);
BTRFS_SETGET_FUNCS(free_space_bitmaps, struct btrfs_free_space_header,
num_bitmaps, 64);
BTRFS_SETGET_FUNCS(free_space_generation, struct btrfs_free_space_header,
generation, 64);
static inline void btrfs_free_space_key(struct extent_buffer *eb,
struct btrfs_free_space_header *h,
struct btrfs_disk_key *key)
static inline void btrfs_set_free_space_key(struct extent_buffer *eb,
struct btrfs_free_space_header *h,
struct btrfs_disk_key *key)
BTRFS_SETGET_STACK_FUNCS(disk_key_objectid, struct btrfs_disk_key,
objectid, 64);
BTRFS_SETGET_STACK_FUNCS(disk_key_offset, struct btrfs_disk_key, offset, 64);
BTRFS_SETGET_STACK_FUNCS(disk_key_type, struct btrfs_disk_key, type, 8);
static inline void btrfs_disk_key_to_cpu(struct btrfs_key *cpu,
struct btrfs_disk_key *disk)
static inline void btrfs_cpu_key_to_disk(struct btrfs_disk_key *disk,
struct btrfs_key *cpu)
static inline void btrfs_node_key_to_cpu(struct extent_buffer *eb,
struct btrfs_key *key, int nr)
static inline void btrfs_item_key_to_cpu(struct extent_buffer *eb,
struct btrfs_key *key, int nr)
static inline void btrfs_dir_item_key_to_cpu(struct extent_buffer *eb,
struct btrfs_dir_item *item,
struct btrfs_key *key)
static inline u8 btrfs_key_type(struct btrfs_key *key)
static inline void btrfs_set_key_type(struct btrfs_key *key, u8 val)
BTRFS_SETGET_HEADER_FUNCS(header_bytenr, struct btrfs_header, bytenr, 64);
BTRFS_SETGET_HEADER_FUNCS(header_generation, struct btrfs_header,
generation, 64);
BTRFS_SETGET_HEADER_FUNCS(header_owner, struct btrfs_header, owner, 64);
BTRFS_SETGET_HEADER_FUNCS(header_nritems, struct btrfs_header, nritems, 32);
BTRFS_SETGET_HEADER_FUNCS(header_flags, struct btrfs_header, flags, 64);
BTRFS_SETGET_HEADER_FUNCS(header_level, struct btrfs_header, level, 8);
static inline int btrfs_header_flag(struct extent_buffer *eb, u64 flag)
static inline int btrfs_set_header_flag(struct extent_buffer *eb, u64 flag)
static inline int btrfs_clear_header_flag(struct extent_buffer *eb, u64 flag)
static inline int btrfs_header_backref_rev(struct extent_buffer *eb)
static inline void btrfs_set_header_backref_rev(struct extent_buffer *eb,
int rev)
static inline u8 *btrfs_header_fsid(struct extent_buffer *eb)
static inline u8 *btrfs_header_chunk_tree_uuid(struct extent_buffer *eb)
static inline int btrfs_is_leaf(struct extent_buffer *eb)
BTRFS_SETGET_FUNCS(disk_root_generation, struct btrfs_root_item,
generation, 64);
BTRFS_SETGET_FUNCS(disk_root_refs, struct btrfs_root_item, refs, 32);
BTRFS_SETGET_FUNCS(disk_root_bytenr, struct btrfs_root_item, bytenr, 64);
BTRFS_SETGET_FUNCS(disk_root_level, struct btrfs_root_item, level, 8);
BTRFS_SETGET_STACK_FUNCS(root_generation, struct btrfs_root_item,
generation, 64);
BTRFS_SETGET_STACK_FUNCS(root_bytenr, struct btrfs_root_item, bytenr, 64);
BTRFS_SETGET_STACK_FUNCS(root_level, struct btrfs_root_item, level, 8);
BTRFS_SETGET_STACK_FUNCS(root_dirid, struct btrfs_root_item, root_dirid, 64);
BTRFS_SETGET_STACK_FUNCS(root_refs, struct btrfs_root_item, refs, 32);
BTRFS_SETGET_STACK_FUNCS(root_flags, struct btrfs_root_item, flags, 64);
BTRFS_SETGET_STACK_FUNCS(root_used, struct btrfs_root_item, bytes_used, 64);
BTRFS_SETGET_STACK_FUNCS(root_limit, struct btrfs_root_item, byte_limit, 64);
BTRFS_SETGET_STACK_FUNCS(root_last_snapshot, struct btrfs_root_item,
last_snapshot, 64);
static inline bool btrfs_root_readonly(struct btrfs_root *root)
BTRFS_SETGET_STACK_FUNCS(super_bytenr, struct btrfs_super_block, bytenr, 64);
BTRFS_SETGET_STACK_FUNCS(super_flags, struct btrfs_super_block, flags, 64);
BTRFS_SETGET_STACK_FUNCS(super_generation, struct btrfs_super_block,
generation, 64);
BTRFS_SETGET_STACK_FUNCS(super_root, struct btrfs_super_block, root, 64);
BTRFS_SETGET_STACK_FUNCS(super_sys_array_size,
struct btrfs_super_block, sys_chunk_array_size, 32);
BTRFS_SETGET_STACK_FUNCS(super_chunk_root_generation,
struct btrfs_super_block, chunk_root_generation, 64);
BTRFS_SETGET_STACK_FUNCS(super_root_level, struct btrfs_super_block,
root_level, 8);
BTRFS_SETGET_STACK_FUNCS(super_chunk_root, struct btrfs_super_block,
chunk_root, 64);
BTRFS_SETGET_STACK_FUNCS(super_chunk_root_level, struct btrfs_super_block,
chunk_root_level, 8);
BTRFS_SETGET_STACK_FUNCS(super_log_root, struct btrfs_super_block,
log_root, 64);
BTRFS_SETGET_STACK_FUNCS(super_log_root_transid, struct btrfs_super_block,
log_root_transid, 64);
BTRFS_SETGET_STACK_FUNCS(super_log_root_level, struct btrfs_super_block,
log_root_level, 8);
BTRFS_SETGET_STACK_FUNCS(super_total_bytes, struct btrfs_super_block,
total_bytes, 64);
BTRFS_SETGET_STACK_FUNCS(super_bytes_used, struct btrfs_super_block,
bytes_used, 64);
BTRFS_SETGET_STACK_FUNCS(super_sectorsize, struct btrfs_super_block,
sectorsize, 32);
BTRFS_SETGET_STACK_FUNCS(super_nodesize, struct btrfs_super_block,
nodesize, 32);
BTRFS_SETGET_STACK_FUNCS(super_leafsize, struct btrfs_super_block,
leafsize, 32);
BTRFS_SETGET_STACK_FUNCS(super_stripesize, struct btrfs_super_block,
stripesize, 32);
BTRFS_SETGET_STACK_FUNCS(super_root_dir, struct btrfs_super_block,
root_dir_objectid, 64);
BTRFS_SETGET_STACK_FUNCS(super_num_devices, struct btrfs_super_block,
num_devices, 64);
BTRFS_SETGET_STACK_FUNCS(super_compat_flags, struct btrfs_super_block,
compat_flags, 64);
BTRFS_SETGET_STACK_FUNCS(super_compat_ro_flags, struct btrfs_super_block,
compat_ro_flags, 64);
BTRFS_SETGET_STACK_FUNCS(super_incompat_flags, struct btrfs_super_block,
incompat_flags, 64);
BTRFS_SETGET_STACK_FUNCS(super_csum_type, struct btrfs_super_block,
csum_type, 16);
BTRFS_SETGET_STACK_FUNCS(super_cache_generation, struct btrfs_super_block,
cache_generation, 64);
static inline int btrfs_super_csum_size(struct btrfs_super_block *s)
static inline unsigned long btrfs_leaf_data(struct extent_buffer *l)
BTRFS_SETGET_FUNCS(file_extent_type, struct btrfs_file_extent_item, type, 8);
static inline unsigned long
btrfs_file_extent_inline_start(struct btrfs_file_extent_item *e)
static inline u32 btrfs_file_extent_calc_inline_size(u32 datasize)
BTRFS_SETGET_FUNCS(file_extent_disk_bytenr, struct btrfs_file_extent_item,
disk_bytenr, 64);
BTRFS_SETGET_FUNCS(file_extent_generation, struct btrfs_file_extent_item,
generation, 64);
BTRFS_SETGET_FUNCS(file_extent_disk_num_bytes, struct btrfs_file_extent_item,
disk_num_bytes, 64);
BTRFS_SETGET_FUNCS(file_extent_offset, struct btrfs_file_extent_item,
offset, 64);
BTRFS_SETGET_FUNCS(file_extent_num_bytes, struct btrfs_file_extent_item,
num_bytes, 64);
BTRFS_SETGET_FUNCS(file_extent_ram_bytes, struct btrfs_file_extent_item,
ram_bytes, 64);
BTRFS_SETGET_FUNCS(file_extent_compression, struct btrfs_file_extent_item,
compression, 8);
BTRFS_SETGET_FUNCS(file_extent_encryption, struct btrfs_file_extent_item,
encryption, 8);
BTRFS_SETGET_FUNCS(file_extent_other_encoding, struct btrfs_file_extent_item,
other_encoding, 16);
static inline u32 btrfs_file_extent_inline_len(struct extent_buffer *eb,
struct btrfs_file_extent_item *e)
static inline u32 btrfs_file_extent_inline_item_len(struct extent_buffer *eb,
struct btrfs_item *e)
static inline struct btrfs_root *btrfs_sb(struct super_block *sb)
static inline u32 btrfs_level_size(struct btrfs_root *root, int level)
#define btrfs_item_ptr(leaf, slot, type) \
((type *)(btrfs_leaf_data(leaf) + \
btrfs_item_offset_nr(leaf, slot)))
#define btrfs_item_ptr_offset(leaf, slot) \
((unsigned long)(btrfs_leaf_data(leaf) + \
btrfs_item_offset_nr(leaf, slot)))
static inline struct dentry *fdentry(struct file *file)
static inline bool btrfs_mixed_space_info(struct btrfs_space_info *space_info)
static inline u64 btrfs_calc_trans_metadata_size(struct btrfs_root *root,
int num_items)
void btrfs_put_block_group(struct btrfs_block_group_cache *cache);
int btrfs_run_delayed_refs(struct btrfs_trans_handle *trans,
struct btrfs_root *root, unsigned long count);
int btrfs_lookup_extent(struct btrfs_root *root, u64 start, u64 len);
int btrfs_lookup_extent_info(struct btrfs_trans_handle *trans,
struct btrfs_root *root, u64 bytenr,
u64 num_bytes, u64 *refs, u64 *flags);
int btrfs_pin_extent(struct btrfs_root *root,
u64 bytenr, u64 num, int reserved);
int btrfs_cross_ref_exist(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
u64 objectid, u64 offset, u64 bytenr);
struct btrfs_block_group_cache *btrfs_lookup_block_group(
struct btrfs_fs_info *info,
u64 bytenr);
void btrfs_put_block_group(struct btrfs_block_group_cache *cache);
u64 btrfs_find_block_group(struct btrfs_root *root,
u64 search_start, u64 search_hint, int owner);
struct extent_buffer *btrfs_alloc_free_block(struct btrfs_trans_handle *trans,
struct btrfs_root *root, u32 blocksize,
u64 parent, u64 root_objectid,
struct btrfs_disk_key *key, int level,
u64 hint, u64 empty_size);
void btrfs_free_tree_block(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct extent_buffer *buf,
u64 parent, int last_ref);
struct extent_buffer *btrfs_init_new_buffer(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
u64 bytenr, u32 blocksize,
int level);
int btrfs_alloc_reserved_file_extent(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
u64 root_objectid, u64 owner,
u64 offset, struct btrfs_key *ins);
int btrfs_alloc_logged_file_extent(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
u64 root_objectid, u64 owner, u64 offset,
struct btrfs_key *ins);
int btrfs_reserve_extent(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
u64 num_bytes, u64 min_alloc_size,
u64 empty_size, u64 hint_byte,
u64 search_end, struct btrfs_key *ins,
u64 data);
int btrfs_inc_ref(struct btrfs_trans_handle *trans, struct btrfs_root *root,
struct extent_buffer *buf, int full_backref);
int btrfs_dec_ref(struct btrfs_trans_handle *trans, struct btrfs_root *root,
struct extent_buffer *buf, int full_backref);
int btrfs_set_disk_extent_flags(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
u64 bytenr, u64 num_bytes, u64 flags,
int is_data);
int btrfs_free_extent(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
u64 bytenr, u64 num_bytes, u64 parent,
u64 root_objectid, u64 owner, u64 offset);
int btrfs_free_reserved_extent(struct btrfs_root *root, u64 start, u64 len);
int btrfs_update_reserved_bytes(struct btrfs_block_group_cache *cache,
u64 num_bytes, int reserve, int sinfo);
int btrfs_prepare_extent_commit(struct btrfs_trans_handle *trans,
struct btrfs_root *root);
int btrfs_finish_extent_commit(struct btrfs_trans_handle *trans,
struct btrfs_root *root);
int btrfs_inc_extent_ref(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
u64 bytenr, u64 num_bytes, u64 parent,
u64 root_objectid, u64 owner, u64 offset);
int btrfs_write_dirty_block_groups(struct btrfs_trans_handle *trans,
struct btrfs_root *root);
int btrfs_extent_readonly(struct btrfs_root *root, u64 bytenr);
int btrfs_free_block_groups(struct btrfs_fs_info *info);
int btrfs_read_block_groups(struct btrfs_root *root);
int btrfs_can_relocate(struct btrfs_root *root, u64 bytenr);
int btrfs_make_block_group(struct btrfs_trans_handle *trans,
struct btrfs_root *root, u64 bytes_used,
u64 type, u64 chunk_objectid, u64 chunk_offset,
u64 size);
int btrfs_remove_block_group(struct btrfs_trans_handle *trans,
struct btrfs_root *root, u64 group_start);
u64 btrfs_reduce_alloc_profile(struct btrfs_root *root, u64 flags);
u64 btrfs_get_alloc_profile(struct btrfs_root *root, int data);
void btrfs_set_inode_space_info(struct btrfs_root *root, struct inode *ionde);
void btrfs_clear_space_info_full(struct btrfs_fs_info *info);
int btrfs_check_data_free_space(struct inode *inode, u64 bytes);
void btrfs_free_reserved_data_space(struct inode *inode, u64 bytes);
int btrfs_trans_reserve_metadata(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
int num_items);
void btrfs_trans_release_metadata(struct btrfs_trans_handle *trans,
struct btrfs_root *root);
int btrfs_orphan_reserve_metadata(struct btrfs_trans_handle *trans,
struct inode *inode);
void btrfs_orphan_release_metadata(struct inode *inode);
int btrfs_snap_reserve_metadata(struct btrfs_trans_handle *trans,
struct btrfs_pending_snapshot *pending);
int btrfs_delalloc_reserve_metadata(struct inode *inode, u64 num_bytes);
void btrfs_delalloc_release_metadata(struct inode *inode, u64 num_bytes);
int btrfs_delalloc_reserve_space(struct inode *inode, u64 num_bytes);
void btrfs_delalloc_release_space(struct inode *inode, u64 num_bytes);
void btrfs_init_block_rsv(struct btrfs_block_rsv *rsv);
struct btrfs_block_rsv *btrfs_alloc_block_rsv(struct btrfs_root *root);
void btrfs_free_block_rsv(struct btrfs_root *root,
struct btrfs_block_rsv *rsv);
void btrfs_add_durable_block_rsv(struct btrfs_fs_info *fs_info,
struct btrfs_block_rsv *rsv);
int btrfs_block_rsv_add(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_block_rsv *block_rsv,
u64 num_bytes);
int btrfs_block_rsv_check(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_block_rsv *block_rsv,
u64 min_reserved, int min_factor);
int btrfs_block_rsv_migrate(struct btrfs_block_rsv *src_rsv,
struct btrfs_block_rsv *dst_rsv,
u64 num_bytes);
void btrfs_block_rsv_release(struct btrfs_root *root,
struct btrfs_block_rsv *block_rsv,
u64 num_bytes);
int btrfs_truncate_reserve_metadata(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_block_rsv *rsv);
int btrfs_set_block_group_ro(struct btrfs_root *root,
struct btrfs_block_group_cache *cache);
int btrfs_set_block_group_rw(struct btrfs_root *root,
struct btrfs_block_group_cache *cache);
void btrfs_put_block_group_cache(struct btrfs_fs_info *info);
u64 btrfs_account_ro_block_groups_free_space(struct btrfs_space_info *sinfo);
int btrfs_error_unpin_extent_range(struct btrfs_root *root,
u64 start, u64 end);
int btrfs_error_discard_extent(struct btrfs_root *root, u64 bytenr,
u64 num_bytes, u64 *actual_bytes);
int btrfs_force_chunk_alloc(struct btrfs_trans_handle *trans,
struct btrfs_root *root, u64 type);
int btrfs_trim_fs(struct btrfs_root *root, struct fstrim_range *range);
int btrfs_init_space_info(struct btrfs_fs_info *fs_info);
int btrfs_bin_search(struct extent_buffer *eb, struct btrfs_key *key,
int level, int *slot);
int btrfs_comp_cpu_keys(struct btrfs_key *k1, struct btrfs_key *k2);
int btrfs_previous_item(struct btrfs_root *root,
struct btrfs_path *path, u64 min_objectid,
int type);
int btrfs_set_item_key_safe(struct btrfs_trans_handle *trans,
struct btrfs_root *root, struct btrfs_path *path,
struct btrfs_key *new_key);
struct extent_buffer *btrfs_root_node(struct btrfs_root *root);
struct extent_buffer *btrfs_lock_root_node(struct btrfs_root *root);
int btrfs_find_next_key(struct btrfs_root *root, struct btrfs_path *path,
struct btrfs_key *key, int lowest_level,
int cache_only, u64 min_trans);
int btrfs_search_forward(struct btrfs_root *root, struct btrfs_key *min_key,
struct btrfs_key *max_key,
struct btrfs_path *path, int cache_only,
u64 min_trans);
int btrfs_cow_block(struct btrfs_trans_handle *trans,
struct btrfs_root *root, struct extent_buffer *buf,
struct extent_buffer *parent, int parent_slot,
struct extent_buffer **cow_ret);
int btrfs_copy_root(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct extent_buffer *buf,
struct extent_buffer **cow_ret, u64 new_root_objectid);
int btrfs_block_can_be_shared(struct btrfs_root *root,
struct extent_buffer *buf);
int btrfs_extend_item(struct btrfs_trans_handle *trans, struct btrfs_root
*root, struct btrfs_path *path, u32 data_size);
int btrfs_truncate_item(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
u32 new_size, int from_end);
int btrfs_split_item(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
struct btrfs_key *new_key,
unsigned long split_offset);
int btrfs_duplicate_item(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
struct btrfs_key *new_key);
int btrfs_search_slot(struct btrfs_trans_handle *trans, struct btrfs_root
*root, struct btrfs_key *key, struct btrfs_path *p, int
ins_len, int cow);
int btrfs_realloc_node(struct btrfs_trans_handle *trans,
struct btrfs_root *root, struct extent_buffer *parent,
int start_slot, int cache_only, u64 *last_ret,
struct btrfs_key *progress);
void btrfs_release_path(struct btrfs_path *p);
struct btrfs_path *btrfs_alloc_path(void);
void btrfs_free_path(struct btrfs_path *p);
void btrfs_set_path_blocking(struct btrfs_path *p);
void btrfs_clear_path_blocking(struct btrfs_path *p,
struct extent_buffer *held);
void btrfs_unlock_up_safe(struct btrfs_path *p, int level);
int btrfs_del_items(struct btrfs_trans_handle *trans, struct btrfs_root *root,
struct btrfs_path *path, int slot, int nr);
static inline int btrfs_del_item(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path)
int setup_items_for_insert(struct btrfs_trans_handle *trans,
struct btrfs_root *root, struct btrfs_path *path,
struct btrfs_key *cpu_key, u32 *data_size,
u32 total_data, u32 total_size, int nr);
int btrfs_insert_item(struct btrfs_trans_handle *trans, struct btrfs_root
*root, struct btrfs_key *key, void *data, u32 data_size);
int btrfs_insert_empty_items(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
struct btrfs_key *cpu_key, u32 *data_size, int nr);
static inline int btrfs_insert_empty_item(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
struct btrfs_key *key,
u32 data_size)
int btrfs_next_leaf(struct btrfs_root *root, struct btrfs_path *path);
int btrfs_prev_leaf(struct btrfs_root *root, struct btrfs_path *path);
int btrfs_leaf_free_space(struct btrfs_root *root, struct extent_buffer *leaf);
int btrfs_drop_snapshot(struct btrfs_root *root,
struct btrfs_block_rsv *block_rsv, int update_ref);
int btrfs_drop_subtree(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct extent_buffer *node,
struct extent_buffer *parent);
static inline int btrfs_fs_closing(struct btrfs_fs_info *fs_info)
int btrfs_find_root_ref(struct btrfs_root *tree_root,
struct btrfs_path *path,
u64 root_id, u64 ref_id);
int btrfs_add_root_ref(struct btrfs_trans_handle *trans,
struct btrfs_root *tree_root,
u64 root_id, u64 ref_id, u64 dirid, u64 sequence,
const char *name, int name_len);
int btrfs_del_root_ref(struct btrfs_trans_handle *trans,
struct btrfs_root *tree_root,
u64 root_id, u64 ref_id, u64 dirid, u64 *sequence,
const char *name, int name_len);
int btrfs_del_root(struct btrfs_trans_handle *trans, struct btrfs_root *root,
struct btrfs_key *key);
int btrfs_insert_root(struct btrfs_trans_handle *trans, struct btrfs_root
*root, struct btrfs_key *key, struct btrfs_root_item
*item);
int btrfs_update_root(struct btrfs_trans_handle *trans, struct btrfs_root
*root, struct btrfs_key *key, struct btrfs_root_item
*item);
int btrfs_find_last_root(struct btrfs_root *root, u64 objectid, struct
btrfs_root_item *item, struct btrfs_key *key);
int btrfs_find_dead_roots(struct btrfs_root *root, u64 objectid);
int btrfs_find_orphan_roots(struct btrfs_root *tree_root);
int btrfs_set_root_node(struct btrfs_root_item *item,
struct extent_buffer *node);
void btrfs_check_and_init_root_item(struct btrfs_root_item *item);
int btrfs_insert_dir_item(struct btrfs_trans_handle *trans,
struct btrfs_root *root, const char *name,
int name_len, struct inode *dir,
struct btrfs_key *location, u8 type, u64 index);
struct btrfs_dir_item *btrfs_lookup_dir_item(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path, u64 dir,
const char *name, int name_len,
int mod);
struct btrfs_dir_item *
btrfs_lookup_dir_index_item(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path, u64 dir,
u64 objectid, const char *name, int name_len,
int mod);
struct btrfs_dir_item *
btrfs_search_dir_index_item(struct btrfs_root *root,
struct btrfs_path *path, u64 dirid,
const char *name, int name_len);
struct btrfs_dir_item *btrfs_match_dir_item_name(struct btrfs_root *root,
struct btrfs_path *path,
const char *name, int name_len);
int btrfs_delete_one_dir_name(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
struct btrfs_dir_item *di);
int btrfs_insert_xattr_item(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path, u64 objectid,
const char *name, u16 name_len,
const void *data, u16 data_len);
struct btrfs_dir_item *btrfs_lookup_xattr(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path, u64 dir,
const char *name, u16 name_len,
int mod);
int verify_dir_item(struct btrfs_root *root,
struct extent_buffer *leaf,
struct btrfs_dir_item *dir_item);
int btrfs_insert_orphan_item(struct btrfs_trans_handle *trans,
struct btrfs_root *root, u64 offset);
int btrfs_del_orphan_item(struct btrfs_trans_handle *trans,
struct btrfs_root *root, u64 offset);
int btrfs_find_orphan_item(struct btrfs_root *root, u64 offset);
int btrfs_insert_inode_ref(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
const char *name, int name_len,
u64 inode_objectid, u64 ref_objectid, u64 index);
int btrfs_del_inode_ref(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
const char *name, int name_len,
u64 inode_objectid, u64 ref_objectid, u64 *index);
struct btrfs_inode_ref *
btrfs_lookup_inode_ref(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
const char *name, int name_len,
u64 inode_objectid, u64 ref_objectid, int mod);
int btrfs_insert_empty_inode(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path, u64 objectid);
int btrfs_lookup_inode(struct btrfs_trans_handle *trans, struct btrfs_root
*root, struct btrfs_path *path,
struct btrfs_key *location, int mod);
int btrfs_del_csums(struct btrfs_trans_handle *trans,
struct btrfs_root *root, u64 bytenr, u64 len);
int btrfs_lookup_bio_sums(struct btrfs_root *root, struct inode *inode,
struct bio *bio, u32 *dst);
int btrfs_lookup_bio_sums_dio(struct btrfs_root *root, struct inode *inode,
struct bio *bio, u64 logical_offset, u32 *dst);
int btrfs_insert_file_extent(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
u64 objectid, u64 pos,
u64 disk_offset, u64 disk_num_bytes,
u64 num_bytes, u64 offset, u64 ram_bytes,
u8 compression, u8 encryption, u16 other_encoding);
int btrfs_lookup_file_extent(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path, u64 objectid,
u64 bytenr, int mod);
int btrfs_csum_file_blocks(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_ordered_sum *sums);
int btrfs_csum_one_bio(struct btrfs_root *root, struct inode *inode,
struct bio *bio, u64 file_start, int contig);
struct btrfs_csum_item *btrfs_lookup_csum(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
u64 bytenr, int cow);
int btrfs_csum_truncate(struct btrfs_trans_handle *trans,
struct btrfs_root *root, struct btrfs_path *path,
u64 isize);
int btrfs_lookup_csums_range(struct btrfs_root *root, u64 start, u64 end,
struct list_head *list, int search_commit);
#if defined(ClearPageFsMisc) && !defined(ClearPageChecked)
#define ClearPageChecked ClearPageFsMisc
#define SetPageChecked SetPageFsMisc
#define PageChecked PageFsMisc
struct inode *btrfs_lookup_dentry(struct inode *dir, struct dentry *dentry);
int btrfs_set_inode_index(struct inode *dir, u64 *index);
int btrfs_unlink_inode(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct inode *dir, struct inode *inode,
const char *name, int name_len);
int btrfs_add_link(struct btrfs_trans_handle *trans,
struct inode *parent_inode, struct inode *inode,
const char *name, int name_len, int add_backref, u64 index);
int btrfs_unlink_subvol(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct inode *dir, u64 objectid,
const char *name, int name_len);
int btrfs_truncate_inode_items(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct inode *inode, u64 new_size,
u32 min_type);
int btrfs_start_delalloc_inodes(struct btrfs_root *root, int delay_iput);
int btrfs_set_extent_delalloc(struct inode *inode, u64 start, u64 end,
struct extent_state **cached_state);
int btrfs_writepages(struct address_space *mapping,
struct writeback_control *wbc);
int btrfs_create_subvol_root(struct btrfs_trans_handle *trans,
struct btrfs_root *new_root, u64 new_dirid);
int btrfs_merge_bio_hook(struct page *page, unsigned long offset,
size_t size, struct bio *bio, unsigned long bio_flags);
unsigned long btrfs_force_ra(struct address_space *mapping,
struct file_ra_state *ra, struct file *file,
pgoff_t offset, pgoff_t last_index);
int btrfs_page_mkwrite(struct vm_area_struct *vma, struct vm_fault *vmf);
int btrfs_readpage(struct file *file, struct page *page);
void btrfs_evict_inode(struct inode *inode);
int btrfs_write_inode(struct inode *inode, struct writeback_control *wbc);
void btrfs_dirty_inode(struct inode *inode, int flags);
struct inode *btrfs_alloc_inode(struct super_block *sb);
void btrfs_destroy_inode(struct inode *inode);
int btrfs_drop_inode(struct inode *inode);
int btrfs_init_cachep(void);
void btrfs_destroy_cachep(void);
long btrfs_ioctl_trans_end(struct file *file);
struct inode *btrfs_iget(struct super_block *s, struct btrfs_key *location,
struct btrfs_root *root, int *was_new);
struct extent_map *btrfs_get_extent(struct inode *inode, struct page *page,
size_t pg_offset, u64 start, u64 end,
int create);
int btrfs_update_inode(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct inode *inode);
int btrfs_orphan_add(struct btrfs_trans_handle *trans, struct inode *inode);
int btrfs_orphan_del(struct btrfs_trans_handle *trans, struct inode *inode);
int btrfs_orphan_cleanup(struct btrfs_root *root);
void btrfs_orphan_pre_snapshot(struct btrfs_trans_handle *trans,
struct btrfs_pending_snapshot *pending,
u64 *bytes_to_reserve);
void btrfs_orphan_post_snapshot(struct btrfs_trans_handle *trans,
struct btrfs_pending_snapshot *pending);
void btrfs_orphan_commit_root(struct btrfs_trans_handle *trans,
struct btrfs_root *root);
int btrfs_cont_expand(struct inode *inode, loff_t oldsize, loff_t size);
int btrfs_invalidate_inodes(struct btrfs_root *root);
void btrfs_add_delayed_iput(struct inode *inode);
void btrfs_run_delayed_iputs(struct btrfs_root *root);
int btrfs_prealloc_file_range(struct inode *inode, int mode,
u64 start, u64 num_bytes, u64 min_size,
loff_t actual_len, u64 *alloc_hint);
int btrfs_prealloc_file_range_trans(struct inode *inode,
struct btrfs_trans_handle *trans, int mode,
u64 start, u64 num_bytes, u64 min_size,
loff_t actual_len, u64 *alloc_hint);
extern const struct dentry_operations btrfs_dentry_operations;
long btrfs_ioctl(struct file *file, unsigned int cmd, unsigned long arg);
void btrfs_update_iflags(struct inode *inode);
void btrfs_inherit_iflags(struct inode *inode, struct inode *dir);
int btrfs_defrag_file(struct inode *inode, struct file *file,
struct btrfs_ioctl_defrag_range_args *range,
u64 newer_than, unsigned long max_pages);
int btrfs_add_inode_defrag(struct btrfs_trans_handle *trans,
struct inode *inode);
int btrfs_run_defrag_inodes(struct btrfs_fs_info *fs_info);
int btrfs_sync_file(struct file *file, int datasync);
int btrfs_drop_extent_cache(struct inode *inode, u64 start, u64 end,
int skip_pinned);
extern const struct file_operations btrfs_file_operations;
int btrfs_drop_extents(struct btrfs_trans_handle *trans, struct inode *inode,
u64 start, u64 end, u64 *hint_byte, int drop_cache);
int btrfs_mark_extent_written(struct btrfs_trans_handle *trans,
struct inode *inode, u64 start, u64 end);
int btrfs_release_file(struct inode *inode, struct file *file);
void btrfs_drop_pages(struct page **pages, size_t num_pages);
int btrfs_dirty_pages(struct btrfs_root *root, struct inode *inode,
struct page **pages, size_t num_pages,
loff_t pos, size_t write_bytes,
struct extent_state **cached);
int btrfs_defrag_leaves(struct btrfs_trans_handle *trans,
struct btrfs_root *root, int cache_only);
int btrfs_init_sysfs(void);
void btrfs_exit_sysfs(void);
ssize_t btrfs_listxattr(struct dentry *dentry, char *buffer, size_t size);
int btrfs_parse_options(struct btrfs_root *root, char *options);
int btrfs_sync_fs(struct super_block *sb, int wait);
void __btrfs_std_error(struct btrfs_fs_info *fs_info, const char *function,
unsigned int line, int errno);
#define btrfs_std_error(fs_info, errno)				\
do  while (0)
int btrfs_check_acl(struct inode *inode, int mask, unsigned int flags);
#define btrfs_check_acl NULL
int btrfs_init_acl(struct btrfs_trans_handle *trans,
struct inode *inode, struct inode *dir);
int btrfs_acl_chmod(struct inode *inode);
int btrfs_relocate_block_group(struct btrfs_root *root, u64 group_start);
int btrfs_init_reloc_root(struct btrfs_trans_handle *trans,
struct btrfs_root *root);
int btrfs_update_reloc_root(struct btrfs_trans_handle *trans,
struct btrfs_root *root);
int btrfs_recover_relocation(struct btrfs_root *root);
int btrfs_reloc_clone_csums(struct inode *inode, u64 file_pos, u64 len);
void btrfs_reloc_cow_block(struct btrfs_trans_handle *trans,
struct btrfs_root *root, struct extent_buffer *buf,
struct extent_buffer *cow);
void btrfs_reloc_pre_snapshot(struct btrfs_trans_handle *trans,
struct btrfs_pending_snapshot *pending,
u64 *bytes_to_reserve);
void btrfs_reloc_post_snapshot(struct btrfs_trans_handle *trans,
struct btrfs_pending_snapshot *pending);
int btrfs_scrub_dev(struct btrfs_root *root, u64 devid, u64 start, u64 end,
struct btrfs_scrub_progress *progress, int readonly);
int btrfs_scrub_pause(struct btrfs_root *root);
int btrfs_scrub_pause_super(struct btrfs_root *root);
int btrfs_scrub_continue(struct btrfs_root *root);
int btrfs_scrub_continue_super(struct btrfs_root *root);
int btrfs_scrub_cancel(struct btrfs_root *root);
int btrfs_scrub_cancel_dev(struct btrfs_root *root, struct btrfs_device *dev);
int btrfs_scrub_cancel_devid(struct btrfs_root *root, u64 devid);
int btrfs_scrub_progress(struct btrfs_root *root, u64 devid,
struct btrfs_scrub_progress *progress);
