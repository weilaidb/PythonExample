#define _LINUX_REISER_FS_H
#define REISERFS_IOC_UNPACK		_IOW(0xCD,1,long)
#define REISERFS_IOC_GETFLAGS		FS_IOC_GETFLAGS
#define REISERFS_IOC_SETFLAGS		FS_IOC_SETFLAGS
#define REISERFS_IOC_GETVERSION		FS_IOC_GETVERSION
#define REISERFS_IOC_SETVERSION		FS_IOC_SETVERSION
#define REISERFS_IOC32_UNPACK		_IOW(0xCD, 1, int)
#define REISERFS_IOC32_GETFLAGS		FS_IOC32_GETFLAGS
#define REISERFS_IOC32_SETFLAGS		FS_IOC32_SETFLAGS
#define REISERFS_IOC32_GETVERSION	FS_IOC32_GETVERSION
#define REISERFS_IOC32_SETVERSION	FS_IOC32_SETVERSION
void reiserfs_write_lock(struct super_block *s);
void reiserfs_write_unlock(struct super_block *s);
int reiserfs_write_lock_once(struct super_block *s);
void reiserfs_write_unlock_once(struct super_block *s, int lock_depth);
void reiserfs_lock_check_recursive(struct super_block *s);
static inline void reiserfs_lock_check_recursive(struct super_block *s)
static inline void reiserfs_mutex_lock_safe(struct mutex *m,
struct super_block *s)
static inline void
reiserfs_mutex_lock_nested_safe(struct mutex *m, unsigned int subclass,
struct super_block *s)
static inline void
reiserfs_down_read_safe(struct rw_semaphore *sem, struct super_block *s)
static inline void reiserfs_cond_resched(struct super_block *s)
struct fid;
#define USE_INODE_GENERATION_COUNTER
#define REISERFS_PREALLOCATE
#define DISPLACE_NEW_PACKING_LOCALITIES
#define PREALLOCATION_SIZE 9
#define _ROUND_UP(x,n) (((x)+(n)-1u) & ~((n)-1u))
#define ROUND_UP(x) _ROUND_UP(x,8LL)
#define REISERFS_DEBUG_CODE 5
void __reiserfs_warning(struct super_block *s, const char *id,
const char *func, const char *fmt, ...);
#define reiserfs_warning(s, id, fmt, args...) \
__reiserfs_warning(s, id, __func__, fmt, ##args)
#define __RASSERT(cond, scond, format, args...)			\
do  while (0)
#define RASSERT(cond, format, args...) __RASSERT(cond, #cond, format, ##args)
#if defined( CONFIG_REISERFS_CHECK )
#define RFALSE(cond, format, args...) __RASSERT(!(cond), "!(" #cond ")", format, ##args)
#define RFALSE( cond, format, args... ) do  while( 0 )
#define CONSTF __attribute_const__
#define UNSET_HASH 0
#define TEA_HASH  1
#define YURA_HASH 2
#define R5_HASH   3
#define DEFAULT_HASH R5_HASH
struct journal_params ;
struct reiserfs_super_block_v1  __attribute__ ((__packed__));
#define SB_SIZE_V1 (sizeof(struct reiserfs_super_block_v1))
struct reiserfs_super_block  __attribute__ ((__packed__));
#define SB_SIZE (sizeof(struct reiserfs_super_block))
#define REISERFS_VERSION_1 0
#define REISERFS_VERSION_2 2
#define SB_DISK_SUPER_BLOCK(s) (REISERFS_SB(s)->s_rs)
#define SB_V1_DISK_SUPER_BLOCK(s) (&(SB_DISK_SUPER_BLOCK(s)->s_v1))
#define SB_BLOCKSIZE(s) \
le32_to_cpu ((SB_V1_DISK_SUPER_BLOCK(s)->s_blocksize))
#define SB_BLOCK_COUNT(s) \
le32_to_cpu ((SB_V1_DISK_SUPER_BLOCK(s)->s_block_count))
#define SB_FREE_BLOCKS(s) \
le32_to_cpu ((SB_V1_DISK_SUPER_BLOCK(s)->s_free_blocks))
#define SB_REISERFS_MAGIC(s) \
(SB_V1_DISK_SUPER_BLOCK(s)->s_magic)
#define SB_ROOT_BLOCK(s) \
le32_to_cpu ((SB_V1_DISK_SUPER_BLOCK(s)->s_root_block))
#define SB_TREE_HEIGHT(s) \
le16_to_cpu ((SB_V1_DISK_SUPER_BLOCK(s)->s_tree_height))
#define SB_REISERFS_STATE(s) \
le16_to_cpu ((SB_V1_DISK_SUPER_BLOCK(s)->s_umount_state))
#define SB_VERSION(s) le16_to_cpu ((SB_V1_DISK_SUPER_BLOCK(s)->s_version))
#define SB_BMAP_NR(s) le16_to_cpu ((SB_V1_DISK_SUPER_BLOCK(s)->s_bmap_nr))
#define PUT_SB_BLOCK_COUNT(s, val) \
do  while (0)
#define PUT_SB_FREE_BLOCKS(s, val) \
do  while (0)
#define PUT_SB_ROOT_BLOCK(s, val) \
do  while (0)
#define PUT_SB_TREE_HEIGHT(s, val) \
do  while (0)
#define PUT_SB_REISERFS_STATE(s, val) \
do  while (0)
#define PUT_SB_VERSION(s, val) \
do  while (0)
#define PUT_SB_BMAP_NR(s, val) \
do  while (0)
#define SB_ONDISK_JP(s) (&SB_V1_DISK_SUPER_BLOCK(s)->s_journal)
#define SB_ONDISK_JOURNAL_SIZE(s) \
le32_to_cpu ((SB_ONDISK_JP(s)->jp_journal_size))
#define SB_ONDISK_JOURNAL_1st_BLOCK(s) \
le32_to_cpu ((SB_ONDISK_JP(s)->jp_journal_1st_block))
#define SB_ONDISK_JOURNAL_DEVICE(s) \
le32_to_cpu ((SB_ONDISK_JP(s)->jp_journal_dev))
#define SB_ONDISK_RESERVED_FOR_JOURNAL(s) \
le16_to_cpu ((SB_V1_DISK_SUPER_BLOCK(s)->s_reserved_for_journal))
#define is_block_in_log_or_reserved_area(s, block) \
block >= SB_JOURNAL_1st_RESERVED_BLOCK(s) \
&& block < SB_JOURNAL_1st_RESERVED_BLOCK(s) +  \
((!is_reiserfs_jr(SB_DISK_SUPER_BLOCK(s)) ? \
SB_ONDISK_JOURNAL_SIZE(s) + 1 : SB_ONDISK_RESERVED_FOR_JOURNAL(s)))
int is_reiserfs_3_5(struct reiserfs_super_block *rs);
int is_reiserfs_3_6(struct reiserfs_super_block *rs);
int is_reiserfs_jr(struct reiserfs_super_block *rs);
#define REISERFS_DISK_OFFSET_IN_BYTES (64 * 1024)
#define REISERFS_FIRST_BLOCK unused_define
#define REISERFS_JOURNAL_OFFSET_IN_BYTES REISERFS_DISK_OFFSET_IN_BYTES
#define REISERFS_OLD_DISK_OFFSET_IN_BYTES (8 * 1024)
#define CARRY_ON      0
#define REPEAT_SEARCH -1
#define IO_ERROR      -2
#define NO_DISK_SPACE -3
#define NO_BALANCING_NEEDED  (-4)
#define NO_MORE_UNUSED_CONTIGUOUS_BLOCKS (-5)
#define QUOTA_EXCEEDED -6
typedef __u32 b_blocknr_t;
typedef __le32 unp_t;
struct unfm_nodeinfo ;
#define KEY_FORMAT_3_5 0
#define KEY_FORMAT_3_6 1
#define STAT_DATA_V1 0
#define STAT_DATA_V2 1
static inline struct reiserfs_inode_info *REISERFS_I(const struct inode *inode)
static inline struct reiserfs_sb_info *REISERFS_SB(const struct super_block *sb)
static inline __u32 reiserfs_bmap_count(struct super_block *sb)
static inline int bmap_would_wrap(unsigned bmap_nr)
#define get_inode_item_key_version( inode )                                    \
((REISERFS_I(inode)->i_flags & i_item_key_version_mask) ? KEY_FORMAT_3_6 : KEY_FORMAT_3_5)
#define set_inode_item_key_version( inode, version )                           \
()
#define get_inode_sd_version(inode)                                            \
((REISERFS_I(inode)->i_flags & i_stat_data_version_mask) ? STAT_DATA_V2 : STAT_DATA_V1)
#define set_inode_sd_version(inode, version)                                   \
()
#define STORE_TAIL_IN_UNFM_S1(n_file_size,n_tail_size,n_block_size) \
(\
(!(n_tail_size)) || \
(((n_tail_size) > MAX_DIRECT_ITEM_LEN(n_block_size)) || \
( (n_file_size) >= (n_block_size) * 4 ) || \
( ( (n_file_size) >= (n_block_size) * 3 ) && \
( (n_tail_size) >=   (MAX_DIRECT_ITEM_LEN(n_block_size))/4) ) || \
( ( (n_file_size) >= (n_block_size) * 2 ) && \
( (n_tail_size) >=   (MAX_DIRECT_ITEM_LEN(n_block_size))/2) ) || \
( ( (n_file_size) >= (n_block_size) ) && \
( (n_tail_size) >=   (MAX_DIRECT_ITEM_LEN(n_block_size) * 3)/4) ) ) \
)
#define STORE_TAIL_IN_UNFM_S2(n_file_size,n_tail_size,n_block_size) \
(\
(!(n_tail_size)) || \
(((n_file_size) > MAX_DIRECT_ITEM_LEN(n_block_size)) ) \
)
#define REISERFS_VALID_FS    1
#define REISERFS_ERROR_FS    2
#define TYPE_STAT_DATA 0
#define TYPE_INDIRECT 1
#define TYPE_DIRECT 2
#define TYPE_DIRENTRY 3
#define TYPE_MAXTYPE 3
#define TYPE_ANY 15
struct offset_v1  __attribute__ ((__packed__));
struct offset_v2  __attribute__ ((__packed__));
static inline __u16 offset_v2_k_type(const struct offset_v2 *v2)
static inline void set_offset_v2_k_type(struct offset_v2 *v2, int type)
static inline loff_t offset_v2_k_offset(const struct offset_v2 *v2)
static inline void set_offset_v2_k_offset(struct offset_v2 *v2, loff_t offset)
struct reiserfs_key  __attribute__ ((__packed__));
struct in_core_key ;
struct cpu_key ;
#define REISERFS_FULL_KEY_LEN     4
#define REISERFS_SHORT_KEY_LEN    2
#define FIRST_GREATER 1
#define SECOND_GREATER -1
#define KEYS_IDENTICAL 0
#define KEY_FOUND 1
#define KEY_NOT_FOUND 0
#define KEY_SIZE (sizeof(struct reiserfs_key))
#define SHORT_KEY_SIZE (sizeof (__u32) + sizeof (__u32))
#define ITEM_FOUND 1
#define ITEM_NOT_FOUND 0
#define ENTRY_FOUND 1
#define ENTRY_NOT_FOUND 0
#define DIRECTORY_NOT_FOUND -1
#define REGULAR_FILE_FOUND -2
#define DIRECTORY_FOUND -3
#define BYTE_FOUND 1
#define BYTE_NOT_FOUND 0
#define FILE_NOT_FOUND -1
#define POSITION_FOUND 1
#define POSITION_NOT_FOUND 0
#define NAME_FOUND 1
#define NAME_NOT_FOUND 0
#define GOTO_PREVIOUS_ITEM 2
#define NAME_FOUND_INVISIBLE 3
struct item_head  __attribute__ ((__packed__));
#define IH_SIZE (sizeof(struct item_head))
#define ih_free_space(ih)            le16_to_cpu((ih)->u.ih_free_space_reserved)
#define ih_version(ih)               le16_to_cpu((ih)->ih_version)
#define ih_entry_count(ih)           le16_to_cpu((ih)->u.ih_entry_count)
#define ih_location(ih)              le16_to_cpu((ih)->ih_item_location)
#define ih_item_len(ih)              le16_to_cpu((ih)->ih_item_len)
#define put_ih_free_space(ih, val)   do  while(0)
#define put_ih_version(ih, val)      do  while (0)
#define put_ih_entry_count(ih, val)  do  while (0)
#define put_ih_location(ih, val)     do  while (0)
#define put_ih_item_len(ih, val)     do  while (0)
#define unreachable_item(ih) (ih_version(ih) & (1 << 15))
#define get_ih_free_space(ih) (ih_version (ih) == KEY_FORMAT_3_6 ? 0 : ih_free_space (ih))
#define set_ih_free_space(ih,val) put_ih_free_space((ih), ((ih_version(ih) == KEY_FORMAT_3_6) ? 0 : (val)))
#define get_block_num(p, i) get_unaligned_le32((p) + (i))
#define put_block_num(p, i, v) put_unaligned_le32((v), (p) + (i))
#define V1_SD_UNIQUENESS 0
#define V1_INDIRECT_UNIQUENESS 0xfffffffe
#define V1_DIRECT_UNIQUENESS 0xffffffff
#define V1_DIRENTRY_UNIQUENESS 500
#define V1_ANY_UNIQUENESS 555
static inline int uniqueness2type(__u32 uniqueness) CONSTF;
static inline int uniqueness2type(__u32 uniqueness)
static inline __u32 type2uniqueness(int type) CONSTF;
static inline __u32 type2uniqueness(int type)
static inline loff_t le_key_k_offset(int version,
const struct reiserfs_key *key)
static inline loff_t le_ih_k_offset(const struct item_head *ih)
static inline loff_t le_key_k_type(int version, const struct reiserfs_key *key)
static inline loff_t le_ih_k_type(const struct item_head *ih)
static inline void set_le_key_k_offset(int version, struct reiserfs_key *key,
loff_t offset)
static inline void set_le_ih_k_offset(struct item_head *ih, loff_t offset)
static inline void set_le_key_k_type(int version, struct reiserfs_key *key,
int type)
static inline void set_le_ih_k_type(struct item_head *ih, int type)
static inline int is_direntry_le_key(int version, struct reiserfs_key *key)
static inline int is_direct_le_key(int version, struct reiserfs_key *key)
static inline int is_indirect_le_key(int version, struct reiserfs_key *key)
static inline int is_statdata_le_key(int version, struct reiserfs_key *key)
static inline int is_direntry_le_ih(struct item_head *ih)
static inline int is_direct_le_ih(struct item_head *ih)
static inline int is_indirect_le_ih(struct item_head *ih)
static inline int is_statdata_le_ih(struct item_head *ih)
static inline loff_t cpu_key_k_offset(const struct cpu_key *key)
static inline loff_t cpu_key_k_type(const struct cpu_key *key)
static inline void set_cpu_key_k_offset(struct cpu_key *key, loff_t offset)
static inline void set_cpu_key_k_type(struct cpu_key *key, int type)
static inline void cpu_key_k_offset_dec(struct cpu_key *key)
#define is_direntry_cpu_key(key) (cpu_key_k_type (key) == TYPE_DIRENTRY)
#define is_direct_cpu_key(key) (cpu_key_k_type (key) == TYPE_DIRECT)
#define is_indirect_cpu_key(key) (cpu_key_k_type (key) == TYPE_INDIRECT)
#define is_statdata_cpu_key(key) (cpu_key_k_type (key) == TYPE_STAT_DATA)
#define is_direntry_cpu_ih(ih) (is_direntry_cpu_key (&((ih)->ih_key)))
#define is_direct_cpu_ih(ih) (is_direct_cpu_key (&((ih)->ih_key)))
#define is_indirect_cpu_ih(ih) (is_indirect_cpu_key (&((ih)->ih_key)))
#define is_statdata_cpu_ih(ih) (is_statdata_cpu_key (&((ih)->ih_key)))
#define I_K_KEY_IN_ITEM(ih, key, n_blocksize) \
(!COMP_SHORT_KEYS(ih, key) && \
I_OFF_BYTE_IN_ITEM(ih, k_offset(key), n_blocksize))
#define MAX_ITEM_LEN(block_size) (block_size - BLKH_SIZE - IH_SIZE)
#define MIN_ITEM_LEN 1
#define REISERFS_ROOT_OBJECTID 2
#define REISERFS_ROOT_PARENT_OBJECTID 1
extern struct reiserfs_key root_key;
struct block_head ;
#define BLKH_SIZE                     (sizeof(struct block_head))
#define blkh_level(p_blkh)            (le16_to_cpu((p_blkh)->blk_level))
#define blkh_nr_item(p_blkh)          (le16_to_cpu((p_blkh)->blk_nr_item))
#define blkh_free_space(p_blkh)       (le16_to_cpu((p_blkh)->blk_free_space))
#define blkh_reserved(p_blkh)         (le16_to_cpu((p_blkh)->blk_reserved))
#define set_blkh_level(p_blkh,val)    ((p_blkh)->blk_level = cpu_to_le16(val))
#define set_blkh_nr_item(p_blkh,val)  ((p_blkh)->blk_nr_item = cpu_to_le16(val))
#define set_blkh_free_space(p_blkh,val) ((p_blkh)->blk_free_space = cpu_to_le16(val))
#define set_blkh_reserved(p_blkh,val) ((p_blkh)->blk_reserved = cpu_to_le16(val))
#define blkh_right_delim_key(p_blkh)  ((p_blkh)->blk_right_delim_key)
#define set_blkh_right_delim_key(p_blkh,val)  ((p_blkh)->blk_right_delim_key = val)
#define FREE_LEVEL 0
#define DISK_LEAF_NODE_LEVEL  1
#define B_BLK_HEAD(bh)			((struct block_head *)((bh)->b_data))
#define B_NR_ITEMS(bh)			(blkh_nr_item(B_BLK_HEAD(bh)))
#define B_LEVEL(bh)			(blkh_level(B_BLK_HEAD(bh)))
#define B_FREE_SPACE(bh)		(blkh_free_space(B_BLK_HEAD(bh)))
#define PUT_B_NR_ITEMS(bh, val)		do  while (0)
#define PUT_B_LEVEL(bh, val)		do  while (0)
#define PUT_B_FREE_SPACE(bh, val)	do  while (0)
#define B_PRIGHT_DELIM_KEY(bh)		(&(blk_right_delim_key(B_BLK_HEAD(bh))))
#define B_IS_ITEMS_LEVEL(bh)		(B_LEVEL(bh) == DISK_LEAF_NODE_LEVEL)
#define B_IS_KEYS_LEVEL(bh)      (B_LEVEL(bh) > DISK_LEAF_NODE_LEVEL \
&& B_LEVEL(bh) <= MAX_HEIGHT)
struct stat_data_v1  __attribute__ ((__packed__));
#define SD_V1_SIZE              (sizeof(struct stat_data_v1))
#define stat_data_v1(ih)        (ih_version (ih) == KEY_FORMAT_3_5)
#define sd_v1_mode(sdp)         (le16_to_cpu((sdp)->sd_mode))
#define set_sd_v1_mode(sdp,v)   ((sdp)->sd_mode = cpu_to_le16(v))
#define sd_v1_nlink(sdp)        (le16_to_cpu((sdp)->sd_nlink))
#define set_sd_v1_nlink(sdp,v)  ((sdp)->sd_nlink = cpu_to_le16(v))
#define sd_v1_uid(sdp)          (le16_to_cpu((sdp)->sd_uid))
#define set_sd_v1_uid(sdp,v)    ((sdp)->sd_uid = cpu_to_le16(v))
#define sd_v1_gid(sdp)          (le16_to_cpu((sdp)->sd_gid))
#define set_sd_v1_gid(sdp,v)    ((sdp)->sd_gid = cpu_to_le16(v))
#define sd_v1_size(sdp)         (le32_to_cpu((sdp)->sd_size))
#define set_sd_v1_size(sdp,v)   ((sdp)->sd_size = cpu_to_le32(v))
#define sd_v1_atime(sdp)        (le32_to_cpu((sdp)->sd_atime))
#define set_sd_v1_atime(sdp,v)  ((sdp)->sd_atime = cpu_to_le32(v))
#define sd_v1_mtime(sdp)        (le32_to_cpu((sdp)->sd_mtime))
#define set_sd_v1_mtime(sdp,v)  ((sdp)->sd_mtime = cpu_to_le32(v))
#define sd_v1_ctime(sdp)        (le32_to_cpu((sdp)->sd_ctime))
#define set_sd_v1_ctime(sdp,v)  ((sdp)->sd_ctime = cpu_to_le32(v))
#define sd_v1_rdev(sdp)         (le32_to_cpu((sdp)->u.sd_rdev))
#define set_sd_v1_rdev(sdp,v)   ((sdp)->u.sd_rdev = cpu_to_le32(v))
#define sd_v1_blocks(sdp)       (le32_to_cpu((sdp)->u.sd_blocks))
#define set_sd_v1_blocks(sdp,v) ((sdp)->u.sd_blocks = cpu_to_le32(v))
#define sd_v1_first_direct_byte(sdp) \
(le32_to_cpu((sdp)->sd_first_direct_byte))
#define set_sd_v1_first_direct_byte(sdp,v) \
((sdp)->sd_first_direct_byte = cpu_to_le32(v))
#define REISERFS_IMMUTABLE_FL FS_IMMUTABLE_FL
#define REISERFS_APPEND_FL    FS_APPEND_FL
#define REISERFS_SYNC_FL      FS_SYNC_FL
#define REISERFS_NOATIME_FL   FS_NOATIME_FL
#define REISERFS_NODUMP_FL    FS_NODUMP_FL
#define REISERFS_SECRM_FL     FS_SECRM_FL
#define REISERFS_UNRM_FL      FS_UNRM_FL
#define REISERFS_COMPR_FL     FS_COMPR_FL
#define REISERFS_NOTAIL_FL    FS_NOTAIL_FL
#define REISERFS_INHERIT_MASK ( REISERFS_IMMUTABLE_FL |	\
REISERFS_SYNC_FL |	\
REISERFS_NOATIME_FL |	\
REISERFS_NODUMP_FL |	\
REISERFS_SECRM_FL |	\
REISERFS_COMPR_FL |	\
REISERFS_NOTAIL_FL )
struct stat_data  __attribute__ ((__packed__));
#define SD_SIZE (sizeof(struct stat_data))
#define SD_V2_SIZE              SD_SIZE
#define stat_data_v2(ih)        (ih_version (ih) == KEY_FORMAT_3_6)
#define sd_v2_mode(sdp)         (le16_to_cpu((sdp)->sd_mode))
#define set_sd_v2_mode(sdp,v)   ((sdp)->sd_mode = cpu_to_le16(v))
#define sd_v2_nlink(sdp)        (le32_to_cpu((sdp)->sd_nlink))
#define set_sd_v2_nlink(sdp,v)  ((sdp)->sd_nlink = cpu_to_le32(v))
#define sd_v2_size(sdp)         (le64_to_cpu((sdp)->sd_size))
#define set_sd_v2_size(sdp,v)   ((sdp)->sd_size = cpu_to_le64(v))
#define sd_v2_uid(sdp)          (le32_to_cpu((sdp)->sd_uid))
#define set_sd_v2_uid(sdp,v)    ((sdp)->sd_uid = cpu_to_le32(v))
#define sd_v2_gid(sdp)          (le32_to_cpu((sdp)->sd_gid))
#define set_sd_v2_gid(sdp,v)    ((sdp)->sd_gid = cpu_to_le32(v))
#define sd_v2_atime(sdp)        (le32_to_cpu((sdp)->sd_atime))
#define set_sd_v2_atime(sdp,v)  ((sdp)->sd_atime = cpu_to_le32(v))
#define sd_v2_mtime(sdp)        (le32_to_cpu((sdp)->sd_mtime))
#define set_sd_v2_mtime(sdp,v)  ((sdp)->sd_mtime = cpu_to_le32(v))
#define sd_v2_ctime(sdp)        (le32_to_cpu((sdp)->sd_ctime))
#define set_sd_v2_ctime(sdp,v)  ((sdp)->sd_ctime = cpu_to_le32(v))
#define sd_v2_blocks(sdp)       (le32_to_cpu((sdp)->sd_blocks))
#define set_sd_v2_blocks(sdp,v) ((sdp)->sd_blocks = cpu_to_le32(v))
#define sd_v2_rdev(sdp)         (le32_to_cpu((sdp)->u.sd_rdev))
#define set_sd_v2_rdev(sdp,v)   ((sdp)->u.sd_rdev = cpu_to_le32(v))
#define sd_v2_generation(sdp)   (le32_to_cpu((sdp)->u.sd_generation))
#define set_sd_v2_generation(sdp,v) ((sdp)->u.sd_generation = cpu_to_le32(v))
#define sd_v2_attrs(sdp)         (le16_to_cpu((sdp)->sd_attrs))
#define set_sd_v2_attrs(sdp,v)   ((sdp)->sd_attrs = cpu_to_le16(v))
#define SD_OFFSET  0
#define SD_UNIQUENESS 0
#define DOT_OFFSET 1
#define DOT_DOT_OFFSET 2
#define DIRENTRY_UNIQUENESS 500
#define FIRST_ITEM_OFFSET 1
struct reiserfs_de_head  __attribute__ ((__packed__));
#define DEH_SIZE                  sizeof(struct reiserfs_de_head)
#define deh_offset(p_deh)         (le32_to_cpu((p_deh)->deh_offset))
#define deh_dir_id(p_deh)         (le32_to_cpu((p_deh)->deh_dir_id))
#define deh_objectid(p_deh)       (le32_to_cpu((p_deh)->deh_objectid))
#define deh_location(p_deh)       (le16_to_cpu((p_deh)->deh_location))
#define deh_state(p_deh)          (le16_to_cpu((p_deh)->deh_state))
#define put_deh_offset(p_deh,v)   ((p_deh)->deh_offset = cpu_to_le32((v)))
#define put_deh_dir_id(p_deh,v)   ((p_deh)->deh_dir_id = cpu_to_le32((v)))
#define put_deh_objectid(p_deh,v) ((p_deh)->deh_objectid = cpu_to_le32((v)))
#define put_deh_location(p_deh,v) ((p_deh)->deh_location = cpu_to_le16((v)))
#define put_deh_state(p_deh,v)    ((p_deh)->deh_state = cpu_to_le16((v)))
#define EMPTY_DIR_SIZE \
(DEH_SIZE * 2 + ROUND_UP (strlen (".")) + ROUND_UP (strlen ("..")))
#define EMPTY_DIR_SIZE_V1 (DEH_SIZE * 2 + 3)
#define DEH_Statdata 0
#define DEH_Visible 2
#if BITS_PER_LONG == 64 || defined(__s390__) || defined(__hppa__)
#   define ADDR_UNALIGNED_BITS  (3)
#   define aligned_address(addr)           ((void *)((long)(addr) & ~((1UL << ADDR_UNALIGNED_BITS) - 1)))
#   define unaligned_offset(addr)          (((int)((long)(addr) & ((1 << ADDR_UNALIGNED_BITS) - 1))) << 3)
#   define set_bit_unaligned(nr, addr)	\
__test_and_set_bit_le((nr) + unaligned_offset(addr), aligned_address(addr))
#   define clear_bit_unaligned(nr, addr)	\
__test_and_clear_bit_le((nr) + unaligned_offset(addr), aligned_address(addr))
#   define test_bit_unaligned(nr, addr)	\
test_bit_le((nr) + unaligned_offset(addr), aligned_address(addr))
#   define set_bit_unaligned(nr, addr)	__test_and_set_bit_le(nr, addr)
#   define clear_bit_unaligned(nr, addr)	__test_and_clear_bit_le(nr, addr)
#   define test_bit_unaligned(nr, addr)	test_bit_le(nr, addr)
#define mark_de_with_sd(deh)        set_bit_unaligned (DEH_Statdata, &((deh)->deh_state))
#define mark_de_without_sd(deh)     clear_bit_unaligned (DEH_Statdata, &((deh)->deh_state))
#define mark_de_visible(deh)	    set_bit_unaligned (DEH_Visible, &((deh)->deh_state))
#define mark_de_hidden(deh)	    clear_bit_unaligned (DEH_Visible, &((deh)->deh_state))
#define de_with_sd(deh)		    test_bit_unaligned (DEH_Statdata, &((deh)->deh_state))
#define de_visible(deh)	    	    test_bit_unaligned (DEH_Visible, &((deh)->deh_state))
#define de_hidden(deh)	    	    !test_bit_unaligned (DEH_Visible, &((deh)->deh_state))
extern void make_empty_dir_item_v1(char *body, __le32 dirid, __le32 objid,
__le32 par_dirid, __le32 par_objid);
extern void make_empty_dir_item(char *body, __le32 dirid, __le32 objid,
__le32 par_dirid, __le32 par_objid);
#define B_I_PITEM(bh,ih) ( (bh)->b_data + ih_location(ih) )
#define B_I_DEH(bh,ih) ((struct reiserfs_de_head *)(B_I_PITEM(bh,ih)))
static inline int entry_length(const struct buffer_head *bh,
const struct item_head *ih, int pos_in_item)
#define I_ENTRY_COUNT(ih) (ih_entry_count((ih)))
#define B_I_E_NAME(bh,ih,entry_num) ((char *)(bh->b_data + ih_location(ih) + deh_location(B_I_DEH(bh,ih)+(entry_num))))
#define REISERFS_MAX_NAME(block_size) 255
struct reiserfs_dir_entry ;
#define B_I_DEH_ENTRY_FILE_NAME(bh,ih,deh) (B_I_PITEM (bh, ih) + deh_location(deh))
#define I_DEH_N_ENTRY_FILE_NAME_LENGTH(ih,deh,entry_num) \
(I_DEH_N_ENTRY_LENGTH (ih, deh, entry_num) - (de_with_sd (deh) ? SD_SIZE : 0))
#define GET_HASH_VALUE(offset) ((offset) & 0x7fffff80LL)
#define GET_GENERATION_NUMBER(offset) ((offset) & 0x7fLL)
#define MAX_GENERATION_NUMBER  127
#define SET_GENERATION_NUMBER(offset,gen_number) (GET_HASH_VALUE(offset)|(gen_number))
struct disk_child ;
#define DC_SIZE (sizeof(struct disk_child))
#define dc_block_number(dc_p)	(le32_to_cpu((dc_p)->dc_block_number))
#define dc_size(dc_p)		(le16_to_cpu((dc_p)->dc_size))
#define put_dc_block_number(dc_p, val)   do  while(0)
#define put_dc_size(dc_p, val)   do  while(0)
#define B_N_CHILD(bh, n_pos)  ((struct disk_child *)\
((bh)->b_data + BLKH_SIZE + B_NR_ITEMS(bh) * KEY_SIZE + DC_SIZE * (n_pos)))
#define B_N_CHILD_NUM(bh, n_pos) (dc_block_number(B_N_CHILD(bh, n_pos)))
#define PUT_B_N_CHILD_NUM(bh, n_pos, val) \
(put_dc_block_number(B_N_CHILD(bh, n_pos), val))
#define MAX_CHILD_SIZE(bh) ((int)( (bh)->b_size - BLKH_SIZE ))
#define B_CHILD_SIZE(cur) (MAX_CHILD_SIZE(cur)-(B_FREE_SPACE(cur)))
#define MAX_NR_KEY(bh) ( (MAX_CHILD_SIZE(bh)-DC_SIZE)/(KEY_SIZE+DC_SIZE) )
#define MIN_NR_KEY(bh)    (MAX_NR_KEY(bh)/2)
struct path_element ;
#define MAX_HEIGHT 5
#define EXTENDED_MAX_HEIGHT         7
#define FIRST_PATH_ELEMENT_OFFSET   2
#define ILLEGAL_PATH_ELEMENT_OFFSET 1
#define MAX_FEB_SIZE 6
#define PATH_READA	0x1
#define PATH_READA_BACK 0x2
struct treepath ;
#define pos_in_item(path) ((path)->pos_in_item)
#define INITIALIZE_PATH(var) \
struct treepath var =
#define PATH_OFFSET_PELEMENT(path, n_offset)  ((path)->path_elements + (n_offset))
#define PATH_OFFSET_PBUFFER(path, n_offset)   (PATH_OFFSET_PELEMENT(path, n_offset)->pe_buffer)
#define PATH_OFFSET_POSITION(path, n_offset) (PATH_OFFSET_PELEMENT(path, n_offset)->pe_position)
#define PATH_PLAST_BUFFER(path) (PATH_OFFSET_PBUFFER((path), (path)->path_length))
#define PATH_LAST_POSITION(path) (PATH_OFFSET_POSITION((path), (path)->path_length))
#define PATH_PITEM_HEAD(path)    B_N_PITEM_HEAD(PATH_PLAST_BUFFER(path), PATH_LAST_POSITION(path))
#define PATH_H_PBUFFER(path, h) PATH_OFFSET_PBUFFER (path, path->path_length - (h))
#define PATH_H_PPARENT(path, h) PATH_H_PBUFFER (path, (h) + 1)
#define PATH_H_POSITION(path, h) PATH_OFFSET_POSITION (path, path->path_length - (h))
#define PATH_H_B_ITEM_ORDER(path, h) PATH_H_POSITION(path, h + 1)
#define PATH_H_PATH_OFFSET(path, n_h) ((path)->path_length - (n_h))
#define get_last_bh(path) PATH_PLAST_BUFFER(path)
#define get_ih(path) PATH_PITEM_HEAD(path)
#define get_item_pos(path) PATH_LAST_POSITION(path)
#define get_item(path) ((void *)B_N_PITEM(PATH_PLAST_BUFFER(path), PATH_LAST_POSITION (path)))
#define item_moved(ih,path) comp_items(ih, path)
#define path_changed(ih,path) comp_items (ih, path)
#define UNFM_P_SIZE (sizeof(unp_t))
#define UNFM_P_SHIFT 2
#define INODE_PKEY(inode) ((struct reiserfs_key *)(REISERFS_I(inode)->i_key))
#define MAX_UL_INT 0xffffffff
#define MAX_INT    0x7ffffff
#define MAX_US_INT 0xffff
#define U32_MAX (~(__u32)0)
static inline loff_t max_reiserfs_offset(struct inode *inode)
#define MAX_KEY_OBJECTID	MAX_UL_INT
#define MAX_B_NUM  MAX_UL_INT
#define MAX_FC_NUM MAX_US_INT
#define REISERFS_LINK_MAX (MAX_US_INT - 1000)
#define REISERFS_KERNEL_MEM		0
#define REISERFS_USER_MEM		1
#define fs_generation(s) (REISERFS_SB(s)->s_generation_counter)
#define get_generation(s) atomic_read (&fs_generation(s))
#define FILESYSTEM_CHANGED_TB(tb)  (get_generation((tb)->tb_sb) != (tb)->fs_gen)
#define __fs_changed(gen,s) (gen != get_generation (s))
#define fs_changed(gen,s)		\
()
#define VI_TYPE_LEFT_MERGEABLE 1
#define VI_TYPE_RIGHT_MERGEABLE 2
struct virtual_item ;
struct virtual_node ;
struct direntry_uarea  __attribute__ ((__packed__));
#define MAX_FREE_BLOCK 7
#define MAX_AMOUNT_NEEDED 2
struct tree_balance ;
#define M_INSERT	'i'
#define M_PASTE		'p'
#define M_DELETE	'd'
#define M_CUT 		'c'
#define M_INTERNAL	'n'
#define M_SKIP_BALANCING 		's'
#define M_CONVERT	'v'
#define LEAF_FROM_S_TO_L 0
#define LEAF_FROM_S_TO_R 1
#define LEAF_FROM_R_TO_L 2
#define LEAF_FROM_L_TO_R 3
#define LEAF_FROM_S_TO_SNEW 4
#define FIRST_TO_LAST 0
#define LAST_TO_FIRST 1
struct buffer_info ;
static inline struct super_block *sb_from_tb(struct tree_balance *tb)
static inline struct super_block *sb_from_bi(struct buffer_info *bi)
struct item_operations ;
extern struct item_operations *item_ops[TYPE_ANY + 1];
#define op_bytes_number(ih,bsize)                    item_ops[le_ih_k_type (ih)]->bytes_number (ih, bsize)
#define op_is_left_mergeable(key,bsize)              item_ops[le_key_k_type (le_key_version (key), key)]->is_left_mergeable (key, bsize)
#define op_print_item(ih,item)                       item_ops[le_ih_k_type (ih)]->print_item (ih, item)
#define op_check_item(ih,item)                       item_ops[le_ih_k_type (ih)]->check_item (ih, item)
#define op_create_vi(vn,vi,is_affected,insert_size)  item_ops[le_ih_k_type ((vi)->vi_ih)]->create_vi (vn,vi,is_affected,insert_size)
#define op_check_left(vi,free,start_skip,end_skip) item_ops[(vi)->vi_index]->check_left (vi, free, start_skip, end_skip)
#define op_check_right(vi,free)                      item_ops[(vi)->vi_index]->check_right (vi, free)
#define op_part_size(vi,from,to)                     item_ops[(vi)->vi_index]->part_size (vi, from, to)
#define op_unit_num(vi)				     item_ops[(vi)->vi_index]->unit_num (vi)
#define op_print_vi(vi)                              item_ops[(vi)->vi_index]->print_vi (vi)
#define COMP_SHORT_KEYS comp_short_keys
#define I_UNFM_NUM(ih)	(ih_item_len(ih) / UNFM_P_SIZE)
#define I_POS_UNFM_SIZE(ih,pos,size) (((pos) == I_UNFM_NUM(ih) - 1 ) ? (size) - ih_free_space(ih) : (size))
#define B_N_PITEM_HEAD(bh,item_num) ( (struct item_head * )((bh)->b_data + BLKH_SIZE) + (item_num) )
#define B_N_PDELIM_KEY(bh,item_num) ( (struct reiserfs_key * )((bh)->b_data + BLKH_SIZE) + (item_num) )
#define B_N_PKEY(bh,item_num) ( &(B_N_PITEM_HEAD(bh,item_num)->ih_key) )
#define B_N_PITEM(bh,item_num) ( (bh)->b_data + ih_location(B_N_PITEM_HEAD((bh),(item_num))))
#define B_N_STAT_DATA(bh,nr) \
( (struct stat_data *)((bh)->b_data + ih_location(B_N_PITEM_HEAD((bh),(nr))) ) )
#define B_I_STAT_DATA(bh, ih) ( (struct stat_data * )((bh)->b_data + ih_location(ih)) )
#define MAX_DIRECT_ITEM_LEN(size) ((size) - BLKH_SIZE - 2*IH_SIZE - SD_SIZE - UNFM_P_SIZE)
#define B_I_POS_UNFM_POINTER(bh,ih,pos) le32_to_cpu(*(((unp_t *)B_I_PITEM(bh,ih)) + (pos)))
#define PUT_B_I_POS_UNFM_POINTER(bh,ih,pos, val) do  while (0)
struct reiserfs_iget_args ;
#define get_journal_desc_magic(bh) (bh->b_data + bh->b_size - 12)
#define journal_trans_half(blocksize) \
((blocksize - sizeof (struct reiserfs_journal_desc) + sizeof (__u32) - 12) / sizeof (__u32))
struct reiserfs_journal_desc ;
#define get_desc_trans_id(d)   le32_to_cpu((d)->j_trans_id)
#define get_desc_trans_len(d)  le32_to_cpu((d)->j_len)
#define get_desc_mount_id(d)   le32_to_cpu((d)->j_mount_id)
#define set_desc_trans_id(d,val)       do  while (0)
#define set_desc_trans_len(d,val)      do  while (0)
#define set_desc_mount_id(d,val)       do  while (0)
struct reiserfs_journal_commit ;
#define get_commit_trans_id(c) le32_to_cpu((c)->j_trans_id)
#define get_commit_trans_len(c)        le32_to_cpu((c)->j_len)
#define get_commit_mount_id(c) le32_to_cpu((c)->j_mount_id)
#define set_commit_trans_id(c,val)     do  while (0)
#define set_commit_trans_len(c,val)    do  while (0)
struct reiserfs_journal_header ;
#define JOURNAL_BLOCK_COUNT 8192
#define JOURNAL_TRANS_MAX_DEFAULT 1024
#define JOURNAL_TRANS_MIN_DEFAULT 256
#define JOURNAL_MAX_BATCH_DEFAULT   900
#define JOURNAL_MIN_RATIO 2
#define JOURNAL_MAX_COMMIT_AGE 30
#define JOURNAL_MAX_TRANS_AGE 30
#define JOURNAL_PER_BALANCE_CNT (3 * (MAX_HEIGHT-2) + 9)
#define JOURNAL_BLOCKS_PER_OBJECT(sb)  (JOURNAL_PER_BALANCE_CNT * 3 + \
2 * (REISERFS_QUOTA_INIT_BLOCKS(sb) + \
REISERFS_QUOTA_TRANS_BLOCKS(sb)))
#define REISERFS_QUOTA_TRANS_BLOCKS(s) (REISERFS_SB(s)->s_mount_opt & (1<<REISERFS_QUOTA) ? 2 : 0)
#define REISERFS_QUOTA_INIT_BLOCKS(s) (REISERFS_SB(s)->s_mount_opt & (1<<REISERFS_QUOTA) ? \
(DQUOT_INIT_ALLOC*(JOURNAL_PER_BALANCE_CNT+2)+DQUOT_INIT_REWRITE+1) : 0)
#define REISERFS_QUOTA_DEL_BLOCKS(s) (REISERFS_SB(s)->s_mount_opt & (1<<REISERFS_QUOTA) ? \
(DQUOT_DEL_ALLOC*(JOURNAL_PER_BALANCE_CNT+2)+DQUOT_DEL_REWRITE+1) : 0)
#define REISERFS_QUOTA_TRANS_BLOCKS(s) 0
#define REISERFS_QUOTA_INIT_BLOCKS(s) 0
#define REISERFS_QUOTA_DEL_BLOCKS(s) 0
#define REISERFS_MIN_BITMAP_NODES 10
#define REISERFS_MAX_BITMAP_NODES 100
#define JBH_HASH_SHIFT 13
#define JBH_HASH_MASK 8191
#define _jhashfn(sb,block)	\
(((unsigned long)sb>>L1_CACHE_SHIFT) ^ \
(((block)<<(JBH_HASH_SHIFT - 6)) ^ ((block) >> 13) ^ ((block) << (JBH_HASH_SHIFT - 12))))
#define journal_hash(t,sb,block) ((t)[_jhashfn((sb),(block)) & JBH_HASH_MASK])
#define journal_find_get_block(s, block) __find_get_block(SB_JOURNAL(s)->j_dev_bd, block, s->s_blocksize)
#define journal_getblk(s, block) __getblk(SB_JOURNAL(s)->j_dev_bd, block, s->s_blocksize)
#define journal_bread(s, block) __bread(SB_JOURNAL(s)->j_dev_bd, block, s->s_blocksize)
enum reiserfs_bh_state_bits ;
BUFFER_FNS(JDirty, journaled);
TAS_BUFFER_FNS(JDirty, journaled);
BUFFER_FNS(JDirty_wait, journal_dirty);
TAS_BUFFER_FNS(JDirty_wait, journal_dirty);
BUFFER_FNS(JNew, journal_new);
TAS_BUFFER_FNS(JNew, journal_new);
BUFFER_FNS(JPrepared, journal_prepared);
TAS_BUFFER_FNS(JPrepared, journal_prepared);
BUFFER_FNS(JRestore_dirty, journal_restore_dirty);
TAS_BUFFER_FNS(JRestore_dirty, journal_restore_dirty);
BUFFER_FNS(JTest, journal_test);
TAS_BUFFER_FNS(JTest, journal_test);
struct reiserfs_transaction_handle ;
struct reiserfs_jh ;
void reiserfs_free_jh(struct buffer_head *bh);
int reiserfs_add_tail_list(struct inode *inode, struct buffer_head *bh);
int reiserfs_add_ordered_list(struct inode *inode, struct buffer_head *bh);
int journal_mark_dirty(struct reiserfs_transaction_handle *,
struct super_block *, struct buffer_head *bh);
static inline int reiserfs_file_data_log(struct inode *inode)
static inline int reiserfs_transaction_running(struct super_block *s)
static inline int reiserfs_transaction_free_space(struct reiserfs_transaction_handle *th)
struct reiserfs_transaction_handle *reiserfs_persistent_transaction(struct
super_block
*,
int count);
int reiserfs_end_persistent_transaction(struct reiserfs_transaction_handle *);
int reiserfs_commit_page(struct inode *inode, struct page *page,
unsigned from, unsigned to);
int reiserfs_flush_old_commits(struct super_block *);
int reiserfs_commit_for_inode(struct inode *);
int reiserfs_inode_needs_commit(struct inode *);
void reiserfs_update_inode_transaction(struct inode *);
void reiserfs_wait_on_write_block(struct super_block *s);
void reiserfs_block_writes(struct reiserfs_transaction_handle *th);
void reiserfs_allow_writes(struct super_block *s);
void reiserfs_check_lock_depth(struct super_block *s, char *caller);
int reiserfs_prepare_for_journal(struct super_block *, struct buffer_head *bh,
int wait);
void reiserfs_restore_prepared_buffer(struct super_block *,
struct buffer_head *bh);
int journal_init(struct super_block *, const char *j_dev_name, int old_format,
unsigned int);
int journal_release(struct reiserfs_transaction_handle *, struct super_block *);
int journal_release_error(struct reiserfs_transaction_handle *,
struct super_block *);
int journal_end(struct reiserfs_transaction_handle *, struct super_block *,
unsigned long);
int journal_end_sync(struct reiserfs_transaction_handle *, struct super_block *,
unsigned long);
int journal_mark_freed(struct reiserfs_transaction_handle *,
struct super_block *, b_blocknr_t blocknr);
int journal_transaction_should_end(struct reiserfs_transaction_handle *, int);
int reiserfs_in_journal(struct super_block *sb, unsigned int bmap_nr,
int bit_nr, int searchall, b_blocknr_t *next);
int journal_begin(struct reiserfs_transaction_handle *,
struct super_block *sb, unsigned long);
int journal_join_abort(struct reiserfs_transaction_handle *,
struct super_block *sb, unsigned long);
void reiserfs_abort_journal(struct super_block *sb, int errno);
void reiserfs_abort(struct super_block *sb, int errno, const char *fmt, ...);
int reiserfs_allocate_list_bitmaps(struct super_block *s,
struct reiserfs_list_bitmap *, unsigned int);
void add_save_link(struct reiserfs_transaction_handle *th,
struct inode *inode, int truncate);
int remove_save_link(struct inode *inode, int truncate);
__u32 reiserfs_get_unused_objectid(struct reiserfs_transaction_handle *th);
void reiserfs_release_objectid(struct reiserfs_transaction_handle *th,
__u32 objectid_to_release);
int reiserfs_convert_objectid_map_v1(struct super_block *);
int B_IS_IN_TREE(const struct buffer_head *);
extern void copy_item_head(struct item_head *to,
const struct item_head *from);
extern int comp_short_keys(const struct reiserfs_key *le_key,
const struct cpu_key *cpu_key);
extern void le_key2cpu_key(struct cpu_key *to, const struct reiserfs_key *from);
extern int comp_le_keys(const struct reiserfs_key *,
const struct reiserfs_key *);
extern int comp_short_le_keys(const struct reiserfs_key *,
const struct reiserfs_key *);
static inline int le_key_version(const struct reiserfs_key *key)
static inline void copy_key(struct reiserfs_key *to,
const struct reiserfs_key *from)
int comp_items(const struct item_head *stored_ih, const struct treepath *path);
const struct reiserfs_key *get_rkey(const struct treepath *chk_path,
const struct super_block *sb);
int search_by_key(struct super_block *, const struct cpu_key *,
struct treepath *, int);
#define search_item(s,key,path) search_by_key (s, key, path, DISK_LEAF_NODE_LEVEL)
int search_for_position_by_key(struct super_block *sb,
const struct cpu_key *cpu_key,
struct treepath *search_path);
extern void decrement_bcount(struct buffer_head *bh);
void decrement_counters_in_path(struct treepath *search_path);
void pathrelse(struct treepath *search_path);
int reiserfs_check_path(struct treepath *p);
void pathrelse_and_restore(struct super_block *s, struct treepath *search_path);
int reiserfs_insert_item(struct reiserfs_transaction_handle *th,
struct treepath *path,
const struct cpu_key *key,
struct item_head *ih,
struct inode *inode, const char *body);
int reiserfs_paste_into_item(struct reiserfs_transaction_handle *th,
struct treepath *path,
const struct cpu_key *key,
struct inode *inode,
const char *body, int paste_size);
int reiserfs_cut_from_item(struct reiserfs_transaction_handle *th,
struct treepath *path,
struct cpu_key *key,
struct inode *inode,
struct page *page, loff_t new_file_size);
int reiserfs_delete_item(struct reiserfs_transaction_handle *th,
struct treepath *path,
const struct cpu_key *key,
struct inode *inode, struct buffer_head *un_bh);
void reiserfs_delete_solid_item(struct reiserfs_transaction_handle *th,
struct inode *inode, struct reiserfs_key *key);
int reiserfs_delete_object(struct reiserfs_transaction_handle *th,
struct inode *inode);
int reiserfs_do_truncate(struct reiserfs_transaction_handle *th,
struct inode *inode, struct page *,
int update_timestamps);
#define i_block_size(inode) ((inode)->i_sb->s_blocksize)
#define file_size(inode) ((inode)->i_size)
#define tail_size(inode) (file_size (inode) & (i_block_size (inode) - 1))
#define tail_has_to_be_packed(inode) (have_large_tails ((inode)->i_sb)?\
!STORE_TAIL_IN_UNFM_S1(file_size (inode), tail_size(inode), inode->i_sb->s_blocksize):have_small_tails ((inode)->i_sb)?!STORE_TAIL_IN_UNFM_S2(file_size (inode), tail_size(inode), inode->i_sb->s_blocksize):0 )
void padd_item(char *item, int total_length, int length);
#define GET_BLOCK_NO_CREATE 0
#define GET_BLOCK_CREATE 1
#define GET_BLOCK_NO_HOLE 2
#define GET_BLOCK_READ_DIRECT 4
#define GET_BLOCK_NO_IMUX     8
#define GET_BLOCK_NO_DANGLE   16
void reiserfs_read_locked_inode(struct inode *inode,
struct reiserfs_iget_args *args);
int reiserfs_find_actor(struct inode *inode, void *p);
int reiserfs_init_locked_inode(struct inode *inode, void *p);
void reiserfs_evict_inode(struct inode *inode);
int reiserfs_write_inode(struct inode *inode, struct writeback_control *wbc);
int reiserfs_get_block(struct inode *inode, sector_t block,
struct buffer_head *bh_result, int create);
struct dentry *reiserfs_fh_to_dentry(struct super_block *sb, struct fid *fid,
int fh_len, int fh_type);
struct dentry *reiserfs_fh_to_parent(struct super_block *sb, struct fid *fid,
int fh_len, int fh_type);
int reiserfs_encode_fh(struct dentry *dentry, __u32 * data, int *lenp,
int connectable);
int reiserfs_truncate_file(struct inode *, int update_timestamps);
void make_cpu_key(struct cpu_key *cpu_key, struct inode *inode, loff_t offset,
int type, int key_length);
void make_le_item_head(struct item_head *ih, const struct cpu_key *key,
int version,
loff_t offset, int type, int length, int entry_count);
struct inode *reiserfs_iget(struct super_block *s, const struct cpu_key *key);
struct reiserfs_security_handle;
int reiserfs_new_inode(struct reiserfs_transaction_handle *th,
struct inode *dir, int mode,
const char *symname, loff_t i_size,
struct dentry *dentry, struct inode *inode,
struct reiserfs_security_handle *security);
void reiserfs_update_sd_size(struct reiserfs_transaction_handle *th,
struct inode *inode, loff_t size);
static inline void reiserfs_update_sd(struct reiserfs_transaction_handle *th,
struct inode *inode)
void sd_attrs_to_i_attrs(__u16 sd_attrs, struct inode *inode);
void i_attrs_to_sd_attrs(struct inode *inode, __u16 * sd_attrs);
int reiserfs_setattr(struct dentry *dentry, struct iattr *attr);
int __reiserfs_write_begin(struct page *page, unsigned from, unsigned len);
void set_de_name_and_namelen(struct reiserfs_dir_entry *de);
int search_by_entry_key(struct super_block *sb, const struct cpu_key *key,
struct treepath *path, struct reiserfs_dir_entry *de);
struct dentry *reiserfs_get_parent(struct dentry *);
int reiserfs_proc_info_init(struct super_block *sb);
int reiserfs_proc_info_done(struct super_block *sb);
int reiserfs_proc_info_global_init(void);
int reiserfs_proc_info_global_done(void);
#define PROC_EXP( e )   e
#define __PINFO( sb ) REISERFS_SB(sb) -> s_proc_info_data
#define PROC_INFO_MAX( sb, field, value )								\
__PINFO( sb ).field =												\
max( REISERFS_SB( sb ) -> s_proc_info_data.field, value )
#define PROC_INFO_INC( sb, field ) ( ++ ( __PINFO( sb ).field ) )
#define PROC_INFO_ADD( sb, field, val ) ( __PINFO( sb ).field += ( val ) )
#define PROC_INFO_BH_STAT( sb, bh, level )							\
PROC_INFO_INC( sb, sbk_read_at[ ( level ) ] );						\
PROC_INFO_ADD( sb, free_at[ ( level ) ], B_FREE_SPACE( bh ) );	\
PROC_INFO_ADD( sb, items_at[ ( level ) ], B_NR_ITEMS( bh ) )
static inline int reiserfs_proc_info_init(struct super_block *sb)
static inline int reiserfs_proc_info_done(struct super_block *sb)
static inline int reiserfs_proc_info_global_init(void)
static inline int reiserfs_proc_info_global_done(void)
#define PROC_EXP( e )
#define VOID_V ( ( void ) 0 )
#define PROC_INFO_MAX( sb, field, value ) VOID_V
#define PROC_INFO_INC( sb, field ) VOID_V
#define PROC_INFO_ADD( sb, field, val ) VOID_V
#define PROC_INFO_BH_STAT(sb, bh, n_node_level) VOID_V
extern const struct inode_operations reiserfs_dir_inode_operations;
extern const struct inode_operations reiserfs_symlink_inode_operations;
extern const struct inode_operations reiserfs_special_inode_operations;
extern const struct file_operations reiserfs_dir_operations;
int reiserfs_readdir_dentry(struct dentry *, void *, filldir_t, loff_t *);
int direct2indirect(struct reiserfs_transaction_handle *, struct inode *,
struct treepath *, struct buffer_head *, loff_t);
int indirect2direct(struct reiserfs_transaction_handle *, struct inode *,
struct page *, struct treepath *, const struct cpu_key *,
loff_t, char *);
void reiserfs_unmap_buffer(struct buffer_head *);
extern const struct inode_operations reiserfs_file_inode_operations;
extern const struct file_operations reiserfs_file_operations;
extern const struct address_space_operations reiserfs_address_space_operations;
int fix_nodes(int n_op_mode, struct tree_balance *tb,
struct item_head *ins_ih, const void *);
void unfix_nodes(struct tree_balance *);
void __reiserfs_panic(struct super_block *s, const char *id,
const char *function, const char *fmt, ...)
__attribute__ ((noreturn));
#define reiserfs_panic(s, id, fmt, args...) \
__reiserfs_panic(s, id, __func__, fmt, ##args)
void __reiserfs_error(struct super_block *s, const char *id,
const char *function, const char *fmt, ...);
#define reiserfs_error(s, id, fmt, args...) \
__reiserfs_error(s, id, __func__, fmt, ##args)
void reiserfs_info(struct super_block *s, const char *fmt, ...);
void reiserfs_debug(struct super_block *s, int level, const char *fmt, ...);
void print_indirect_item(struct buffer_head *bh, int item_num);
void store_print_tb(struct tree_balance *tb);
void print_cur_tb(char *mes);
void print_de(struct reiserfs_dir_entry *de);
void print_bi(struct buffer_info *bi, char *mes);
#define PRINT_LEAF_ITEMS 1
#define PRINT_DIRECTORY_ITEMS 2
#define PRINT_DIRECT_ITEMS 4
void print_block(struct buffer_head *bh, ...);
void print_bmap(struct super_block *s, int silent);
void print_bmap_block(int i, char *data, int size, int silent);
void print_objectid_map(struct super_block *s);
void print_block_head(struct buffer_head *bh, char *mes);
void check_leaf(struct buffer_head *bh);
void check_internal(struct buffer_head *bh);
void print_statistics(struct super_block *s);
char *reiserfs_hashname(int code);
int leaf_move_items(int shift_mode, struct tree_balance *tb, int mov_num,
int mov_bytes, struct buffer_head *Snew);
int leaf_shift_left(struct tree_balance *tb, int shift_num, int shift_bytes);
int leaf_shift_right(struct tree_balance *tb, int shift_num, int shift_bytes);
void leaf_delete_items(struct buffer_info *cur_bi, int last_first, int first,
int del_num, int del_bytes);
void leaf_insert_into_buf(struct buffer_info *bi, int before,
struct item_head *inserted_item_ih,
const char *inserted_item_body, int zeros_number);
void leaf_paste_in_buffer(struct buffer_info *bi, int pasted_item_num,
int pos_in_item, int paste_size, const char *body,
int zeros_number);
void leaf_cut_from_buffer(struct buffer_info *bi, int cut_item_num,
int pos_in_item, int cut_size);
void leaf_paste_entries(struct buffer_info *bi, int item_num, int before,
int new_entry_count, struct reiserfs_de_head *new_dehs,
const char *records, int paste_size);
int balance_internal(struct tree_balance *, int, int, struct item_head *,
struct buffer_head **);
void do_balance_mark_leaf_dirty(struct tree_balance *tb,
struct buffer_head *bh, int flag);
#define do_balance_mark_internal_dirty do_balance_mark_leaf_dirty
#define do_balance_mark_sb_dirty do_balance_mark_leaf_dirty
void do_balance(struct tree_balance *tb, struct item_head *ih,
const char *body, int flag);
void reiserfs_invalidate_buffer(struct tree_balance *tb,
struct buffer_head *bh);
int get_left_neighbor_position(struct tree_balance *tb, int h);
int get_right_neighbor_position(struct tree_balance *tb, int h);
void replace_key(struct tree_balance *tb, struct buffer_head *, int,
struct buffer_head *, int);
void make_empty_node(struct buffer_info *);
struct buffer_head *get_FEB(struct tree_balance *);
struct __reiserfs_blocknr_hint ;
typedef struct __reiserfs_blocknr_hint reiserfs_blocknr_hint_t;
int reiserfs_parse_alloc_options(struct super_block *, char *);
void reiserfs_init_alloc_options(struct super_block *s);
__le32 reiserfs_choose_packing(struct inode *dir);
int reiserfs_init_bitmap_cache(struct super_block *sb);
void reiserfs_free_bitmap_cache(struct super_block *sb);
void reiserfs_cache_bitmap_metadata(struct super_block *sb, struct buffer_head *bh, struct reiserfs_bitmap_info *info);
struct buffer_head *reiserfs_read_bitmap_block(struct super_block *sb, unsigned int bitmap);
int is_reusable(struct super_block *s, b_blocknr_t block, int bit_value);
void reiserfs_free_block(struct reiserfs_transaction_handle *th, struct inode *,
b_blocknr_t, int for_unformatted);
int reiserfs_allocate_blocknrs(reiserfs_blocknr_hint_t *, b_blocknr_t *, int,
int);
static inline int reiserfs_new_form_blocknrs(struct tree_balance *tb,
b_blocknr_t * new_blocknrs,
int amount_needed)
static inline int reiserfs_new_unf_blocknrs(struct reiserfs_transaction_handle
*th, struct inode *inode,
b_blocknr_t * new_blocknrs,
struct treepath *path,
sector_t block)
static inline int reiserfs_new_unf_blocknrs2(struct reiserfs_transaction_handle
*th, struct inode *inode,
b_blocknr_t * new_blocknrs,
struct treepath *path,
sector_t block)
void reiserfs_discard_prealloc(struct reiserfs_transaction_handle *th,
struct inode *inode);
void reiserfs_discard_all_prealloc(struct reiserfs_transaction_handle *th);
__u32 keyed_hash(const signed char *msg, int len);
__u32 yura_hash(const signed char *msg, int len);
__u32 r5_hash(const signed char *msg, int len);
#define reiserfs_test_and_set_le_bit	__test_and_set_bit_le
#define reiserfs_test_and_clear_le_bit	__test_and_clear_bit_le
#define reiserfs_test_le_bit		test_bit_le
#define reiserfs_find_next_zero_le_bit	find_next_zero_bit_le
#define SPARE_SPACE 500
long reiserfs_ioctl(struct file *filp, unsigned int cmd, unsigned long arg);
long reiserfs_compat_ioctl(struct file *filp,
unsigned int cmd, unsigned long arg);
int reiserfs_unpack(struct inode *inode, struct file *filp);
