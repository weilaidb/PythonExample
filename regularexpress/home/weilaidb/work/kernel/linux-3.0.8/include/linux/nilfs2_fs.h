#define _LINUX_NILFS_FS_H
#define NILFS_INODE_BMAP_SIZE	7
struct nilfs_inode ;
struct nilfs_super_root ;
#define NILFS_SR_MDT_OFFSET(inode_size, i)  \
((unsigned long)&((struct nilfs_super_root *)0)->sr_dat + \
(inode_size) * (i))
#define NILFS_SR_DAT_OFFSET(inode_size)     NILFS_SR_MDT_OFFSET(inode_size, 0)
#define NILFS_SR_CPFILE_OFFSET(inode_size)  NILFS_SR_MDT_OFFSET(inode_size, 1)
#define NILFS_SR_SUFILE_OFFSET(inode_size)  NILFS_SR_MDT_OFFSET(inode_size, 2)
#define NILFS_SR_BYTES(inode_size)	    NILFS_SR_MDT_OFFSET(inode_size, 3)
#define NILFS_DFL_MAX_MNT_COUNT		50
#define NILFS_VALID_FS			0x0001
#define NILFS_ERROR_FS			0x0002
#define NILFS_RESIZE_FS			0x0004
#define NILFS_MOUNT_ERROR_MODE		0x0070
#define NILFS_MOUNT_ERRORS_CONT		0x0010
#define NILFS_MOUNT_ERRORS_RO		0x0020
#define NILFS_MOUNT_ERRORS_PANIC	0x0040
#define NILFS_MOUNT_BARRIER		0x1000
#define NILFS_MOUNT_STRICT_ORDER	0x2000
#define NILFS_MOUNT_NORECOVERY		0x4000
#define NILFS_MOUNT_DISCARD		0x8000
struct nilfs_super_block ;
#define NILFS_OS_LINUX		0
#define NILFS_CURRENT_REV	2
#define NILFS_MINOR_REV		0
#define NILFS_MIN_SUPP_REV	2
#define NILFS_FEATURE_COMPAT_RO_BLOCK_COUNT	0x00000001ULL
#define NILFS_FEATURE_COMPAT_SUPP	0ULL
#define NILFS_FEATURE_COMPAT_RO_SUPP	NILFS_FEATURE_COMPAT_RO_BLOCK_COUNT
#define NILFS_FEATURE_INCOMPAT_SUPP	0ULL
#define NILFS_SB_BYTES  \
((long)&((struct nilfs_super_block *)0)->s_reserved)
#define NILFS_ROOT_INO		2
#define NILFS_DAT_INO		3
#define NILFS_CPFILE_INO	4
#define NILFS_SUFILE_INO	5
#define NILFS_IFILE_INO		6
#define NILFS_ATIME_INO		7
#define NILFS_XATTR_INO		8
#define NILFS_SKETCH_INO	10
#define NILFS_USER_INO		11
#define NILFS_SB_OFFSET_BYTES	1024
#define NILFS_SEG_MIN_BLOCKS	16
#define NILFS_PSEG_MIN_BLOCKS	2
#define NILFS_MIN_NRSVSEGS	8
#define NILFS_ROOT_METADATA_FILE(ino) \
((ino) >= NILFS_DAT_INO && (ino) <= NILFS_SUFILE_INO)
#define NILFS_SB2_OFFSET_BYTES(devsize)	((((devsize) >> 12) - 1) << 12)
#define NILFS_LINK_MAX		32000
#define NILFS_NAME_LEN 255
#define NILFS_MIN_BLOCK_SIZE		1024
#define NILFS_MAX_BLOCK_SIZE		65536
struct nilfs_dir_entry ;
enum ;
#define NILFS_DIR_PAD			8
#define NILFS_DIR_ROUND			(NILFS_DIR_PAD - 1)
#define NILFS_DIR_REC_LEN(name_len)	(((name_len) + 12 + NILFS_DIR_ROUND) & \
~NILFS_DIR_ROUND)
#define NILFS_MAX_REC_LEN		((1<<16)-1)
static inline unsigned nilfs_rec_len_from_disk(__le16 dlen)
static inline __le16 nilfs_rec_len_to_disk(unsigned len)
struct nilfs_finfo ;
struct nilfs_binfo_v ;
struct nilfs_binfo_dat ;
union nilfs_binfo ;
struct nilfs_segment_summary ;
#define NILFS_SEGSUM_MAGIC	0x1eaffa11
#define NILFS_SS_LOGBGN 0x0001
#define NILFS_SS_LOGEND 0x0002
#define NILFS_SS_SR     0x0004
#define NILFS_SS_SYNDT  0x0008
#define NILFS_SS_GC     0x0010
struct nilfs_btree_node ;
#define NILFS_BTREE_NODE_ROOT   0x01
#define NILFS_BTREE_LEVEL_DATA          0
#define NILFS_BTREE_LEVEL_NODE_MIN      (NILFS_BTREE_LEVEL_DATA + 1)
#define NILFS_BTREE_LEVEL_MAX           14
struct nilfs_palloc_group_desc ;
struct nilfs_dat_entry ;
struct nilfs_snapshot_list ;
struct nilfs_checkpoint ;
enum ;
#define NILFS_CHECKPOINT_FNS(flag, name)				\
static inline void							\
nilfs_checkpoint_set_##name(struct nilfs_checkpoint *cp)		\
\
static inline void							\
nilfs_checkpoint_clear_##name(struct nilfs_checkpoint *cp)		\
\
static inline int							\
nilfs_checkpoint_##name(const struct nilfs_checkpoint *cp)		\
NILFS_CHECKPOINT_FNS(SNAPSHOT, snapshot)
NILFS_CHECKPOINT_FNS(INVALID, invalid)
NILFS_CHECKPOINT_FNS(MINOR, minor)
struct nilfs_cpinfo ;
#define NILFS_CPINFO_FNS(flag, name)					\
static inline int							\
nilfs_cpinfo_##name(const struct nilfs_cpinfo *cpinfo)			\
NILFS_CPINFO_FNS(SNAPSHOT, snapshot)
NILFS_CPINFO_FNS(INVALID, invalid)
NILFS_CPINFO_FNS(MINOR, minor)
struct nilfs_cpfile_header ;
#define NILFS_CPFILE_FIRST_CHECKPOINT_OFFSET	\
((sizeof(struct nilfs_cpfile_header) +				\
sizeof(struct nilfs_checkpoint) - 1) /			\
sizeof(struct nilfs_checkpoint))
struct nilfs_segment_usage ;
enum ;
#define NILFS_SEGMENT_USAGE_FNS(flag, name)				\
static inline void							\
nilfs_segment_usage_set_##name(struct nilfs_segment_usage *su)		\
\
static inline void							\
nilfs_segment_usage_clear_##name(struct nilfs_segment_usage *su)	\
\
static inline int							\
nilfs_segment_usage_##name(const struct nilfs_segment_usage *su)	\
NILFS_SEGMENT_USAGE_FNS(ACTIVE, active)
NILFS_SEGMENT_USAGE_FNS(DIRTY, dirty)
NILFS_SEGMENT_USAGE_FNS(ERROR, error)
static inline void
nilfs_segment_usage_set_clean(struct nilfs_segment_usage *su)
static inline int
nilfs_segment_usage_clean(const struct nilfs_segment_usage *su)
struct nilfs_sufile_header ;
#define NILFS_SUFILE_FIRST_SEGMENT_USAGE_OFFSET	\
((sizeof(struct nilfs_sufile_header) +				\
sizeof(struct nilfs_segment_usage) - 1) /			\
sizeof(struct nilfs_segment_usage))
struct nilfs_suinfo ;
#define NILFS_SUINFO_FNS(flag, name)					\
static inline int							\
nilfs_suinfo_##name(const struct nilfs_suinfo *si)			\
NILFS_SUINFO_FNS(ACTIVE, active)
NILFS_SUINFO_FNS(DIRTY, dirty)
NILFS_SUINFO_FNS(ERROR, error)
static inline int nilfs_suinfo_clean(const struct nilfs_suinfo *si)
enum ;
struct nilfs_cpmode ;
struct nilfs_argv ;
struct nilfs_period ;
struct nilfs_cpstat ;
struct nilfs_sustat ;
struct nilfs_vinfo ;
struct nilfs_vdesc ;
struct nilfs_bdesc ;
#define NILFS_IOCTL_IDENT		'n'
#define NILFS_IOCTL_CHANGE_CPMODE  \
_IOW(NILFS_IOCTL_IDENT, 0x80, struct nilfs_cpmode)
#define NILFS_IOCTL_DELETE_CHECKPOINT  \
_IOW(NILFS_IOCTL_IDENT, 0x81, __u64)
#define NILFS_IOCTL_GET_CPINFO  \
_IOR(NILFS_IOCTL_IDENT, 0x82, struct nilfs_argv)
#define NILFS_IOCTL_GET_CPSTAT  \
_IOR(NILFS_IOCTL_IDENT, 0x83, struct nilfs_cpstat)
#define NILFS_IOCTL_GET_SUINFO  \
_IOR(NILFS_IOCTL_IDENT, 0x84, struct nilfs_argv)
#define NILFS_IOCTL_GET_SUSTAT  \
_IOR(NILFS_IOCTL_IDENT, 0x85, struct nilfs_sustat)
#define NILFS_IOCTL_GET_VINFO  \
_IOWR(NILFS_IOCTL_IDENT, 0x86, struct nilfs_argv)
#define NILFS_IOCTL_GET_BDESCS  \
_IOWR(NILFS_IOCTL_IDENT, 0x87, struct nilfs_argv)
#define NILFS_IOCTL_CLEAN_SEGMENTS  \
_IOW(NILFS_IOCTL_IDENT, 0x88, struct nilfs_argv[5])
#define NILFS_IOCTL_SYNC  \
_IOR(NILFS_IOCTL_IDENT, 0x8A, __u64)
#define NILFS_IOCTL_RESIZE  \
_IOW(NILFS_IOCTL_IDENT, 0x8B, __u64)
#define NILFS_IOCTL_SET_ALLOC_RANGE  \
_IOW(NILFS_IOCTL_IDENT, 0x8C, __u64[2])
