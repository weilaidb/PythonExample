#define _OCFS2_FS_H
#define OCFS2_MAJOR_REV_LEVEL		0
#define OCFS2_MINOR_REV_LEVEL          	90
#define OCFS2_SUPER_BLOCK_BLKNO		2
#define OCFS2_MIN_CLUSTERSIZE		4096
#define OCFS2_MAX_CLUSTERSIZE		1048576
#define OCFS2_MIN_BLOCKSIZE		512
#define OCFS2_MAX_BLOCKSIZE		OCFS2_MIN_CLUSTERSIZE
#define OCFS2_SUPER_MAGIC		0x7461636f
#define OCFS2_SUPER_BLOCK_SIGNATURE	"OCFSV2"
#define OCFS2_INODE_SIGNATURE		"INODE01"
#define OCFS2_EXTENT_BLOCK_SIGNATURE	"EXBLK01"
#define OCFS2_GROUP_DESC_SIGNATURE      "GROUP01"
#define OCFS2_XATTR_BLOCK_SIGNATURE	"XATTR01"
#define OCFS2_DIR_TRAILER_SIGNATURE	"DIRTRL1"
#define OCFS2_DX_ROOT_SIGNATURE		"DXDIR01"
#define OCFS2_DX_LEAF_SIGNATURE		"DXLEAF1"
#define OCFS2_REFCOUNT_BLOCK_SIGNATURE	"REFCNT1"
#define OCFS2_HAS_COMPAT_FEATURE(sb,mask)			\
( OCFS2_SB(sb)->s_feature_compat & (mask) )
#define OCFS2_HAS_RO_COMPAT_FEATURE(sb,mask)			\
( OCFS2_SB(sb)->s_feature_ro_compat & (mask) )
#define OCFS2_HAS_INCOMPAT_FEATURE(sb,mask)			\
( OCFS2_SB(sb)->s_feature_incompat & (mask) )
#define OCFS2_SET_COMPAT_FEATURE(sb,mask)			\
OCFS2_SB(sb)->s_feature_compat |= (mask)
#define OCFS2_SET_RO_COMPAT_FEATURE(sb,mask)			\
OCFS2_SB(sb)->s_feature_ro_compat |= (mask)
#define OCFS2_SET_INCOMPAT_FEATURE(sb,mask)			\
OCFS2_SB(sb)->s_feature_incompat |= (mask)
#define OCFS2_CLEAR_COMPAT_FEATURE(sb,mask)			\
OCFS2_SB(sb)->s_feature_compat &= ~(mask)
#define OCFS2_CLEAR_RO_COMPAT_FEATURE(sb,mask)			\
OCFS2_SB(sb)->s_feature_ro_compat &= ~(mask)
#define OCFS2_CLEAR_INCOMPAT_FEATURE(sb,mask)			\
OCFS2_SB(sb)->s_feature_incompat &= ~(mask)
#define OCFS2_FEATURE_COMPAT_SUPP	(OCFS2_FEATURE_COMPAT_BACKUP_SB	\
| OCFS2_FEATURE_COMPAT_JBD2_SB)
#define OCFS2_FEATURE_INCOMPAT_SUPP	(OCFS2_FEATURE_INCOMPAT_LOCAL_MOUNT \
| OCFS2_FEATURE_INCOMPAT_SPARSE_ALLOC \
| OCFS2_FEATURE_INCOMPAT_INLINE_DATA \
| OCFS2_FEATURE_INCOMPAT_EXTENDED_SLOT_MAP \
| OCFS2_FEATURE_INCOMPAT_USERSPACE_STACK \
| OCFS2_FEATURE_INCOMPAT_XATTR \
| OCFS2_FEATURE_INCOMPAT_META_ECC \
| OCFS2_FEATURE_INCOMPAT_INDEXED_DIRS \
| OCFS2_FEATURE_INCOMPAT_REFCOUNT_TREE \
| OCFS2_FEATURE_INCOMPAT_DISCONTIG_BG	\
| OCFS2_FEATURE_INCOMPAT_CLUSTERINFO)
#define OCFS2_FEATURE_RO_COMPAT_SUPP	(OCFS2_FEATURE_RO_COMPAT_UNWRITTEN \
| OCFS2_FEATURE_RO_COMPAT_USRQUOTA \
| OCFS2_FEATURE_RO_COMPAT_GRPQUOTA)
#define OCFS2_FEATURE_INCOMPAT_HEARTBEAT_DEV	0x0002
#define OCFS2_FEATURE_INCOMPAT_RESIZE_INPROG    0x0004
#define OCFS2_FEATURE_INCOMPAT_LOCAL_MOUNT	0x0008
#define OCFS2_FEATURE_INCOMPAT_SPARSE_ALLOC	0x0010
#define OCFS2_FEATURE_INCOMPAT_TUNEFS_INPROG	0x0020
#define OCFS2_FEATURE_INCOMPAT_INLINE_DATA	0x0040
#define OCFS2_FEATURE_INCOMPAT_USERSPACE_STACK	0x0080
#define OCFS2_FEATURE_INCOMPAT_EXTENDED_SLOT_MAP 0x100
#define OCFS2_FEATURE_INCOMPAT_XATTR		0x0200
#define OCFS2_FEATURE_INCOMPAT_INDEXED_DIRS	0x0400
#define OCFS2_FEATURE_INCOMPAT_META_ECC		0x0800
#define OCFS2_FEATURE_INCOMPAT_REFCOUNT_TREE	0x1000
#define OCFS2_FEATURE_INCOMPAT_DISCONTIG_BG	0x2000
#define OCFS2_FEATURE_INCOMPAT_CLUSTERINFO	0x4000
#define OCFS2_FEATURE_COMPAT_BACKUP_SB		0x0001
#define OCFS2_FEATURE_COMPAT_JBD2_SB		0x0002
#define OCFS2_FEATURE_RO_COMPAT_UNWRITTEN	0x0001
#define OCFS2_FEATURE_RO_COMPAT_USRQUOTA	0x0002
#define OCFS2_FEATURE_RO_COMPAT_GRPQUOTA	0x0004
#define OCFS2_BACKUP_SB_START			1 << 30
#define OCFS2_MAX_BACKUP_SUPERBLOCKS	6
#define OCFS2_TUNEFS_INPROG_REMOVE_SLOT		0x0001
#define OCFS2_VALID_FL		(0x00000001)
#define OCFS2_UNUSED2_FL	(0x00000002)
#define OCFS2_ORPHANED_FL	(0x00000004)
#define OCFS2_UNUSED3_FL	(0x00000008)
#define OCFS2_SYSTEM_FL		(0x00000010)
#define OCFS2_SUPER_BLOCK_FL	(0x00000020)
#define OCFS2_LOCAL_ALLOC_FL	(0x00000040)
#define OCFS2_BITMAP_FL		(0x00000080)
#define OCFS2_JOURNAL_FL	(0x00000100)
#define OCFS2_HEARTBEAT_FL	(0x00000200)
#define OCFS2_CHAIN_FL		(0x00000400)
#define OCFS2_DEALLOC_FL	(0x00000800)
#define OCFS2_QUOTA_FL		(0x00001000)
#define OCFS2_INLINE_DATA_FL	(0x0001)
#define OCFS2_HAS_XATTR_FL	(0x0002)
#define OCFS2_INLINE_XATTR_FL	(0x0004)
#define OCFS2_INDEXED_DIR_FL	(0x0008)
#define OCFS2_HAS_REFCOUNT_FL   (0x0010)
#define OCFS2_SECRM_FL			FS_SECRM_FL
#define OCFS2_UNRM_FL			FS_UNRM_FL
#define OCFS2_COMPR_FL			FS_COMPR_FL
#define OCFS2_SYNC_FL			FS_SYNC_FL
#define OCFS2_IMMUTABLE_FL		FS_IMMUTABLE_FL
#define OCFS2_APPEND_FL			FS_APPEND_FL
#define OCFS2_NODUMP_FL			FS_NODUMP_FL
#define OCFS2_NOATIME_FL		FS_NOATIME_FL
#define OCFS2_DIRTY_FL			FS_DIRTY_FL
#define OCFS2_COMPRBLK_FL		FS_COMPRBLK_FL
#define OCFS2_NOCOMP_FL			FS_NOCOMP_FL
#define OCFS2_ECOMPR_FL			FS_ECOMPR_FL
#define OCFS2_BTREE_FL			FS_BTREE_FL
#define OCFS2_INDEX_FL			FS_INDEX_FL
#define OCFS2_IMAGIC_FL			FS_IMAGIC_FL
#define OCFS2_JOURNAL_DATA_FL		FS_JOURNAL_DATA_FL
#define OCFS2_NOTAIL_FL			FS_NOTAIL_FL
#define OCFS2_DIRSYNC_FL		FS_DIRSYNC_FL
#define OCFS2_TOPDIR_FL			FS_TOPDIR_FL
#define OCFS2_RESERVED_FL		FS_RESERVED_FL
#define OCFS2_FL_VISIBLE		FS_FL_USER_VISIBLE
#define OCFS2_FL_MODIFIABLE		FS_FL_USER_MODIFIABLE
#define OCFS2_EXT_UNWRITTEN		(0x01)
#define OCFS2_EXT_REFCOUNTED		(0x02)
#define OCFS2_JOURNAL_DIRTY_FL	(0x00000001)
#define OCFS2_ERROR_FS		(0x00000001)
#define OCFS2_MAX_FILENAME_LEN		255
#define OCFS2_MAX_SLOTS			255
#define OCFS2_INVALID_SLOT		-1
#define OCFS2_VOL_UUID_LEN		16
#define OCFS2_MAX_VOL_LABEL_LEN		64
#define OCFS2_STACK_LABEL_LEN		4
#define OCFS2_CLUSTER_NAME_LEN		16
#define OCFS2_CLASSIC_CLUSTER_STACK	"o2cb"
#define OCFS2_MIN_JOURNAL_SIZE		(4 * 1024 * 1024)
#define OCFS2_MIN_XATTR_INLINE_SIZE     256
#define OCFS2_CLUSTER_O2CB_GLOBAL_HEARTBEAT	(0x01)
struct ocfs2_system_inode_info ;
enum ;
#define NUM_GLOBAL_SYSTEM_INODES OCFS2_FIRST_LOCAL_SYSTEM_INODE
#define NUM_LOCAL_SYSTEM_INODES	\
(NUM_SYSTEM_INODES - OCFS2_FIRST_LOCAL_SYSTEM_INODE)
static struct ocfs2_system_inode_info ocfs2_system_inodes[NUM_SYSTEM_INODES] = ;
#define OCFS2_HB_NONE			"heartbeat=none"
#define OCFS2_HB_LOCAL			"heartbeat=local"
#define OCFS2_HB_GLOBAL			"heartbeat=global"
#define OCFS2_FT_UNKNOWN	0
#define OCFS2_FT_REG_FILE	1
#define OCFS2_FT_DIR		2
#define OCFS2_FT_CHRDEV		3
#define OCFS2_FT_BLKDEV		4
#define OCFS2_FT_FIFO		5
#define OCFS2_FT_SOCK		6
#define OCFS2_FT_SYMLINK	7
#define OCFS2_FT_MAX		8
#define OCFS2_DIR_PAD			4
#define OCFS2_DIR_ROUND			(OCFS2_DIR_PAD - 1)
#define OCFS2_DIR_MEMBER_LEN 		offsetof(struct ocfs2_dir_entry, name)
#define OCFS2_DIR_REC_LEN(name_len)	(((name_len) + OCFS2_DIR_MEMBER_LEN + \
OCFS2_DIR_ROUND) & \
~OCFS2_DIR_ROUND)
#define OCFS2_DIR_MIN_REC_LEN	OCFS2_DIR_REC_LEN(1)
#define OCFS2_LINK_MAX		32000
#define	OCFS2_DX_LINK_MAX	((1U << 31) - 1U)
#define	OCFS2_LINKS_HI_SHIFT	16
#define	OCFS2_DX_ENTRIES_MAX	(0xffffffffU)
#define S_SHIFT			12
static unsigned char ocfs2_type_by_mode[S_IFMT >> S_SHIFT] = ;
#define OCFS2_RAW_SB(dinode)		(&((dinode)->id2.i_super))
struct ocfs2_block_check ;
struct ocfs2_extent_rec ;
struct ocfs2_chain_rec ;
struct ocfs2_truncate_rec ;
struct ocfs2_extent_list ;
struct ocfs2_chain_list ;
struct ocfs2_truncate_log ;
struct ocfs2_extent_block
;
struct ocfs2_slot_map ;
struct ocfs2_extended_slot ;
struct ocfs2_slot_map_extended ;
struct ocfs2_cluster_info ;
struct ocfs2_super_block ;
struct ocfs2_local_alloc
;
struct ocfs2_inline_data
;
struct ocfs2_dinode ;
struct ocfs2_dir_entry  __attribute__ ((packed));
struct ocfs2_dir_block_trailer ;
struct ocfs2_dx_entry ;
struct ocfs2_dx_entry_list ;
#define OCFS2_DX_FLAG_INLINE	0x01
struct ocfs2_dx_root_block ;
struct ocfs2_dx_leaf ;
#define OCFS2_MAX_BG_BITMAP_SIZE	256
struct ocfs2_group_desc
;
struct ocfs2_refcount_rec ;
#define OCFS2_32BIT_POS_MASK		(0xffffffffULL)
#define OCFS2_REFCOUNT_LEAF_FL          (0x00000001)
#define OCFS2_REFCOUNT_TREE_FL          (0x00000002)
struct ocfs2_refcount_list ;
struct ocfs2_refcount_block ;
struct ocfs2_xattr_entry ;
struct ocfs2_xattr_header ;
struct ocfs2_xattr_value_root ;
struct ocfs2_xattr_tree_root ;
#define OCFS2_XATTR_INDEXED	0x1
#define OCFS2_HASH_SHIFT	5
#define OCFS2_XATTR_ROUND	3
#define OCFS2_XATTR_SIZE(size)	(((size) + OCFS2_XATTR_ROUND) & \
~(OCFS2_XATTR_ROUND))
#define OCFS2_XATTR_BUCKET_SIZE			4096
#define OCFS2_XATTR_MAX_BLOCKS_PER_BUCKET 	(OCFS2_XATTR_BUCKET_SIZE \
/ OCFS2_MIN_BLOCKSIZE)
struct ocfs2_xattr_block ;
#define OCFS2_XATTR_ENTRY_LOCAL		0x80
#define OCFS2_XATTR_TYPE_MASK		0x7F
static inline void ocfs2_xattr_set_local(struct ocfs2_xattr_entry *xe,
int local)
static inline int ocfs2_xattr_is_local(struct ocfs2_xattr_entry *xe)
static inline void ocfs2_xattr_set_type(struct ocfs2_xattr_entry *xe, int type)
static inline int ocfs2_xattr_get_type(struct ocfs2_xattr_entry *xe)
#define OCFS2_GLOBAL_QMAGICS
#define OCFS2_GLOBAL_QVERSIONS
#define OCFS2_QBLK_RESERVED_SPACE 8
struct ocfs2_disk_dqheader ;
#define OCFS2_GLOBAL_INFO_OFF (sizeof(struct ocfs2_disk_dqheader))
struct ocfs2_global_disk_dqinfo ;
struct ocfs2_global_disk_dqblk ;
#define OCFS2_LOCAL_QMAGICS
#define OCFS2_LOCAL_QVERSIONS
#define OLQF_CLEAN	0x0001
#define OCFS2_LOCAL_INFO_OFF (sizeof(struct ocfs2_disk_dqheader))
struct ocfs2_local_disk_dqinfo ;
struct ocfs2_local_disk_chunk ;
struct ocfs2_local_disk_dqblk ;
struct ocfs2_disk_dqtrailer ;
static inline struct ocfs2_disk_dqtrailer *ocfs2_block_dqtrailer(int blocksize,
void *buf)
static inline int ocfs2_fast_symlink_chars(struct super_block *sb)
static inline int ocfs2_max_inline_data_with_xattr(struct super_block *sb,
struct ocfs2_dinode *di)
static inline int ocfs2_extent_recs_per_inode(struct super_block *sb)
static inline int ocfs2_extent_recs_per_inode_with_xattr(
struct super_block *sb,
struct ocfs2_dinode *di)
static inline int ocfs2_extent_recs_per_dx_root(struct super_block *sb)
static inline int ocfs2_chain_recs_per_inode(struct super_block *sb)
static inline u16 ocfs2_extent_recs_per_eb(struct super_block *sb)
static inline u16 ocfs2_extent_recs_per_gd(struct super_block *sb)
static inline int ocfs2_dx_entries_per_leaf(struct super_block *sb)
static inline int ocfs2_dx_entries_per_root(struct super_block *sb)
static inline u16 ocfs2_local_alloc_size(struct super_block *sb)
static inline int ocfs2_group_bitmap_size(struct super_block *sb,
int suballocator,
u32 feature_incompat)
static inline int ocfs2_truncate_recs_per_inode(struct super_block *sb)
static inline u64 ocfs2_backup_super_blkno(struct super_block *sb, int index)
static inline u16 ocfs2_xattr_recs_per_xb(struct super_block *sb)
static inline u16 ocfs2_extent_recs_per_rb(struct super_block *sb)
static inline u16 ocfs2_refcount_recs_per_rb(struct super_block *sb)
static inline u32
ocfs2_get_ref_rec_low_cpos(const struct ocfs2_refcount_rec *rec)
static inline int ocfs2_fast_symlink_chars(int blocksize)
static inline int ocfs2_max_inline_data_with_xattr(int blocksize,
struct ocfs2_dinode *di)
static inline int ocfs2_extent_recs_per_inode(int blocksize)
static inline int ocfs2_chain_recs_per_inode(int blocksize)
static inline int ocfs2_extent_recs_per_eb(int blocksize)
static inline int ocfs2_extent_recs_per_gd(int blocksize)
static inline int ocfs2_local_alloc_size(int blocksize)
static inline int ocfs2_group_bitmap_size(int blocksize,
int suballocator,
uint32_t feature_incompat)
static inline int ocfs2_truncate_recs_per_inode(int blocksize)
static inline uint64_t ocfs2_backup_super_blkno(int blocksize, int index)
static inline int ocfs2_xattr_recs_per_xb(int blocksize)
static inline int ocfs2_system_inode_is_global(int type)
static inline int ocfs2_sprintf_system_inode_name(char *buf, int len,
int type, int slot)
static inline void ocfs2_set_de_type(struct ocfs2_dir_entry *de,
umode_t mode)
static inline int ocfs2_gd_is_discontig(struct ocfs2_group_desc *gd)
