#define OCFS2_H
#define OCFS2_CACHE_INFO_MAX_ARRAY 2
enum ocfs2_caching_info_flags ;
struct ocfs2_caching_operations;
struct ocfs2_caching_info ;
struct super_block *ocfs2_metadata_cache_get_super(struct ocfs2_caching_info *ci);
#define OCFS2_NODE_MAP_MAX_NODES    256
struct ocfs2_node_map ;
enum ocfs2_ast_action ;
enum ocfs2_unlock_action ;
#define OCFS2_LOCK_ATTACHED      (0x00000001)
#define OCFS2_LOCK_BUSY          (0x00000002)
#define OCFS2_LOCK_BLOCKED       (0x00000004)
#define OCFS2_LOCK_LOCAL         (0x00000008)
#define OCFS2_LOCK_NEEDS_REFRESH (0x00000010)
#define OCFS2_LOCK_REFRESHING    (0x00000020)
#define OCFS2_LOCK_INITIALIZED   (0x00000040)
#define OCFS2_LOCK_FREEING       (0x00000080)
#define OCFS2_LOCK_QUEUED        (0x00000100)
#define OCFS2_LOCK_NOCACHE       (0x00000200)
#define OCFS2_LOCK_PENDING       (0x00000400)
#define OCFS2_LOCK_UPCONVERT_FINISHING (0x00000800)
struct ocfs2_lock_res_ops;
typedef void (*ocfs2_lock_callback)(int status, unsigned long data);
struct ocfs2_lock_stats ;
struct ocfs2_lock_res ;
enum ocfs2_orphan_scan_state ;
struct ocfs2_orphan_scan ;
struct ocfs2_dlm_debug ;
enum ocfs2_vol_state
;
struct ocfs2_alloc_stats
;
enum ocfs2_local_alloc_state
;
enum ocfs2_mount_options
;
#define OCFS2_OSB_SOFT_RO			0x0001
#define OCFS2_OSB_HARD_RO			0x0002
#define OCFS2_OSB_ERROR_FS			0x0004
#define OCFS2_OSB_DROP_DENTRY_LOCK_IMMED	0x0008
#define OCFS2_DEFAULT_ATIME_QUANTUM		60
struct ocfs2_journal;
struct ocfs2_slot_info;
struct ocfs2_recovery_map;
struct ocfs2_replay_map;
struct ocfs2_quota_recovery;
struct ocfs2_dentry_lock;
struct ocfs2_super
;
#define OCFS2_SB(sb)	    ((struct ocfs2_super *)(sb)->s_fs_info)
typedef int (*ocfs2_journal_access_func)(handle_t *handle,
struct ocfs2_caching_info *ci,
struct buffer_head *bh, int type);
static inline int ocfs2_should_order_data(struct inode *inode)
static inline int ocfs2_sparse_alloc(struct ocfs2_super *osb)
static inline int ocfs2_writes_unwritten_extents(struct ocfs2_super *osb)
static inline int ocfs2_supports_inline_data(struct ocfs2_super *osb)
static inline int ocfs2_supports_xattr(struct ocfs2_super *osb)
static inline int ocfs2_meta_ecc(struct ocfs2_super *osb)
static inline int ocfs2_supports_indexed_dirs(struct ocfs2_super *osb)
static inline int ocfs2_supports_discontig_bg(struct ocfs2_super *osb)
static inline unsigned int ocfs2_link_max(struct ocfs2_super *osb)
static inline unsigned int ocfs2_read_links_count(struct ocfs2_dinode *di)
static inline void ocfs2_set_links_count(struct ocfs2_dinode *di, u32 nlink)
static inline void ocfs2_add_links_count(struct ocfs2_dinode *di, int n)
static inline int ocfs2_refcount_tree(struct ocfs2_super *osb)
static inline void ocfs2_set_osb_flag(struct ocfs2_super *osb,
unsigned long flag)
static inline unsigned long  ocfs2_test_osb_flag(struct ocfs2_super *osb,
unsigned long flag)
static inline void ocfs2_set_ro_flag(struct ocfs2_super *osb,
int hard)
static inline int ocfs2_is_hard_readonly(struct ocfs2_super *osb)
static inline int ocfs2_is_soft_readonly(struct ocfs2_super *osb)
static inline int ocfs2_clusterinfo_valid(struct ocfs2_super *osb)
static inline int ocfs2_userspace_stack(struct ocfs2_super *osb)
static inline int ocfs2_o2cb_stack(struct ocfs2_super *osb)
static inline int ocfs2_cluster_o2cb_global_heartbeat(struct ocfs2_super *osb)
static inline int ocfs2_mount_local(struct ocfs2_super *osb)
static inline int ocfs2_uses_extended_slot_map(struct ocfs2_super *osb)
#define OCFS2_IS_VALID_DINODE(ptr)					\
(!strcmp((ptr)->i_signature, OCFS2_INODE_SIGNATURE))
#define OCFS2_IS_VALID_EXTENT_BLOCK(ptr)				\
(!strcmp((ptr)->h_signature, OCFS2_EXTENT_BLOCK_SIGNATURE))
#define OCFS2_IS_VALID_GROUP_DESC(ptr)					\
(!strcmp((ptr)->bg_signature, OCFS2_GROUP_DESC_SIGNATURE))
#define OCFS2_IS_VALID_XATTR_BLOCK(ptr)					\
(!strcmp((ptr)->xb_signature, OCFS2_XATTR_BLOCK_SIGNATURE))
#define OCFS2_IS_VALID_DIR_TRAILER(ptr)					\
(!strcmp((ptr)->db_signature, OCFS2_DIR_TRAILER_SIGNATURE))
#define OCFS2_IS_VALID_DX_ROOT(ptr)					\
(!strcmp((ptr)->dr_signature, OCFS2_DX_ROOT_SIGNATURE))
#define OCFS2_IS_VALID_DX_LEAF(ptr)					\
(!strcmp((ptr)->dl_signature, OCFS2_DX_LEAF_SIGNATURE))
#define OCFS2_IS_VALID_REFCOUNT_BLOCK(ptr)				\
(!strcmp((ptr)->rf_signature, OCFS2_REFCOUNT_BLOCK_SIGNATURE))
static inline unsigned long ino_from_blkno(struct super_block *sb,
u64 blkno)
static inline u64 ocfs2_clusters_to_blocks(struct super_block *sb,
u32 clusters)
static inline u32 ocfs2_blocks_to_clusters(struct super_block *sb,
u64 blocks)
static inline unsigned int ocfs2_clusters_for_bytes(struct super_block *sb,
u64 bytes)
static inline u64 ocfs2_blocks_for_bytes(struct super_block *sb,
u64 bytes)
static inline u64 ocfs2_clusters_to_bytes(struct super_block *sb,
u32 clusters)
static inline u64 ocfs2_block_to_cluster_start(struct super_block *sb,
u64 blocks)
static inline u64 ocfs2_align_bytes_to_clusters(struct super_block *sb,
u64 bytes)
static inline u64 ocfs2_align_bytes_to_blocks(struct super_block *sb,
u64 bytes)
static inline unsigned long ocfs2_align_bytes_to_sectors(u64 bytes)
static inline unsigned int ocfs2_page_index_to_clusters(struct super_block *sb,
unsigned long pg_index)
static inline pgoff_t ocfs2_align_clusters_to_page_index(struct super_block *sb,
u32 clusters)
static inline unsigned int ocfs2_pages_per_cluster(struct super_block *sb)
static inline unsigned int ocfs2_megabytes_to_clusters(struct super_block *sb,
unsigned int megs)
static inline unsigned int ocfs2_clusters_to_megabytes(struct super_block *sb,
unsigned int clusters)
static inline void _ocfs2_set_bit(unsigned int bit, unsigned long *bitmap)
#define ocfs2_set_bit(bit, addr) _ocfs2_set_bit((bit), (unsigned long *)(addr))
static inline void _ocfs2_clear_bit(unsigned int bit, unsigned long *bitmap)
#define ocfs2_clear_bit(bit, addr) _ocfs2_clear_bit((bit), (unsigned long *)(addr))
#define ocfs2_test_bit test_bit_le
#define ocfs2_find_next_zero_bit find_next_zero_bit_le
#define ocfs2_find_next_bit find_next_bit_le
