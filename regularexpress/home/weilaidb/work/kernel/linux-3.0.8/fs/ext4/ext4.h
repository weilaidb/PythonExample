#define _EXT4_H
#undef EXT4FS_DEBUG
#define ext4_debug(f, a...)						\
do  while (0)
#define ext4_debug(f, a...)	do  while (0)
#define EXT4_ERROR_INODE(inode, fmt, a...) \
ext4_error_inode((inode), __func__, __LINE__, 0, (fmt), ## a)
#define EXT4_ERROR_INODE_BLOCK(inode, block, fmt, a...)			\
ext4_error_inode((inode), __func__, __LINE__, (block), (fmt), ## a)
#define EXT4_ERROR_FILE(file, block, fmt, a...)				\
ext4_error_file((file), __func__, __LINE__, (block), (fmt), ## a)
typedef int ext4_grpblk_t;
typedef unsigned long long ext4_fsblk_t;
typedef __u32 ext4_lblk_t;
typedef unsigned int ext4_group_t;
#define EXT4_MB_HINT_MERGE		0x0001
#define EXT4_MB_HINT_RESERVED		0x0002
#define EXT4_MB_HINT_METADATA		0x0004
#define EXT4_MB_HINT_FIRST		0x0008
#define EXT4_MB_HINT_BEST		0x0010
#define EXT4_MB_HINT_DATA		0x0020
#define EXT4_MB_HINT_NOPREALLOC		0x0040
#define EXT4_MB_HINT_GROUP_ALLOC	0x0080
#define EXT4_MB_HINT_GOAL_ONLY		0x0100
#define EXT4_MB_HINT_TRY_GOAL		0x0200
#define EXT4_MB_DELALLOC_RESERVED	0x0400
#define EXT4_MB_STREAM_ALLOC		0x0800
#define EXT4_MB_USE_ROOT_BLOCKS		0x1000
struct ext4_allocation_request ;
#define EXT4_MAP_NEW		(1 << BH_New)
#define EXT4_MAP_MAPPED		(1 << BH_Mapped)
#define EXT4_MAP_UNWRITTEN	(1 << BH_Unwritten)
#define EXT4_MAP_BOUNDARY	(1 << BH_Boundary)
#define EXT4_MAP_UNINIT		(1 << BH_Uninit)
#define EXT4_MAP_FLAGS		(EXT4_MAP_NEW | EXT4_MAP_MAPPED |\
EXT4_MAP_UNWRITTEN | EXT4_MAP_BOUNDARY |\
EXT4_MAP_UNINIT)
struct ext4_map_blocks ;
struct mpage_da_data ;
#define	EXT4_IO_END_UNWRITTEN	0x0001
#define EXT4_IO_END_ERROR	0x0002
struct ext4_io_page ;
#define MAX_IO_PAGES 128
typedef struct ext4_io_end  ext4_io_end_t;
struct ext4_io_submit ;
#define	EXT4_BAD_INO		 1
#define EXT4_ROOT_INO		 2
#define EXT4_USR_QUOTA_INO	 3
#define EXT4_GRP_QUOTA_INO	 4
#define EXT4_BOOT_LOADER_INO	 5
#define EXT4_UNDEL_DIR_INO	 6
#define EXT4_RESIZE_INO		 7
#define EXT4_JOURNAL_INO	 8
#define EXT4_GOOD_OLD_FIRST_INO	11
#define EXT4_LINK_MAX		65000
#define EXT4_MIN_BLOCK_SIZE		1024
#define	EXT4_MAX_BLOCK_SIZE		65536
#define EXT4_MIN_BLOCK_LOG_SIZE		10
#define EXT4_MAX_BLOCK_LOG_SIZE		16
# define EXT4_BLOCK_SIZE(s)		((s)->s_blocksize)
# define EXT4_BLOCK_SIZE(s)		(EXT4_MIN_BLOCK_SIZE << (s)->s_log_block_size)
#define	EXT4_ADDR_PER_BLOCK(s)		(EXT4_BLOCK_SIZE(s) / sizeof(__u32))
# define EXT4_BLOCK_SIZE_BITS(s)	((s)->s_blocksize_bits)
# define EXT4_BLOCK_SIZE_BITS(s)	((s)->s_log_block_size + 10)
#define	EXT4_ADDR_PER_BLOCK_BITS(s)	(EXT4_SB(s)->s_addr_per_block_bits)
#define EXT4_INODE_SIZE(s)		(EXT4_SB(s)->s_inode_size)
#define EXT4_FIRST_INO(s)		(EXT4_SB(s)->s_first_ino)
#define EXT4_INODE_SIZE(s)	(((s)->s_rev_level == EXT4_GOOD_OLD_REV) ? \
EXT4_GOOD_OLD_INODE_SIZE : \
(s)->s_inode_size)
#define EXT4_FIRST_INO(s)	(((s)->s_rev_level == EXT4_GOOD_OLD_REV) ? \
EXT4_GOOD_OLD_FIRST_INO : \
(s)->s_first_ino)
#define EXT4_BLOCK_ALIGN(size, blkbits)		ALIGN((size), (1 << (blkbits)))
struct ext4_group_desc
;
struct flex_groups ;
#define EXT4_BG_INODE_UNINIT	0x0001
#define EXT4_BG_BLOCK_UNINIT	0x0002
#define EXT4_BG_INODE_ZEROED	0x0004
#define EXT4_MIN_DESC_SIZE		32
#define EXT4_MIN_DESC_SIZE_64BIT	64
#define	EXT4_MAX_DESC_SIZE		EXT4_MIN_BLOCK_SIZE
#define EXT4_DESC_SIZE(s)		(EXT4_SB(s)->s_desc_size)
# define EXT4_BLOCKS_PER_GROUP(s)	(EXT4_SB(s)->s_blocks_per_group)
# define EXT4_DESC_PER_BLOCK(s)		(EXT4_SB(s)->s_desc_per_block)
# define EXT4_INODES_PER_GROUP(s)	(EXT4_SB(s)->s_inodes_per_group)
# define EXT4_DESC_PER_BLOCK_BITS(s)	(EXT4_SB(s)->s_desc_per_block_bits)
# define EXT4_BLOCKS_PER_GROUP(s)	((s)->s_blocks_per_group)
# define EXT4_DESC_PER_BLOCK(s)		(EXT4_BLOCK_SIZE(s) / EXT4_DESC_SIZE(s))
# define EXT4_INODES_PER_GROUP(s)	((s)->s_inodes_per_group)
#define	EXT4_NDIR_BLOCKS		12
#define	EXT4_IND_BLOCK			EXT4_NDIR_BLOCKS
#define	EXT4_DIND_BLOCK			(EXT4_IND_BLOCK + 1)
#define	EXT4_TIND_BLOCK			(EXT4_DIND_BLOCK + 1)
#define	EXT4_N_BLOCKS			(EXT4_TIND_BLOCK + 1)
#define	EXT4_SECRM_FL			0x00000001
#define	EXT4_UNRM_FL			0x00000002
#define	EXT4_COMPR_FL			0x00000004
#define EXT4_SYNC_FL			0x00000008
#define EXT4_IMMUTABLE_FL		0x00000010
#define EXT4_APPEND_FL			0x00000020
#define EXT4_NODUMP_FL			0x00000040
#define EXT4_NOATIME_FL			0x00000080
#define EXT4_DIRTY_FL			0x00000100
#define EXT4_COMPRBLK_FL		0x00000200
#define EXT4_NOCOMPR_FL			0x00000400
#define EXT4_ECOMPR_FL			0x00000800
#define EXT4_INDEX_FL			0x00001000
#define EXT4_IMAGIC_FL			0x00002000
#define EXT4_JOURNAL_DATA_FL		0x00004000
#define EXT4_NOTAIL_FL			0x00008000
#define EXT4_DIRSYNC_FL			0x00010000
#define EXT4_TOPDIR_FL			0x00020000
#define EXT4_HUGE_FILE_FL               0x00040000
#define EXT4_EXTENTS_FL			0x00080000
#define EXT4_EA_INODE_FL	        0x00200000
#define EXT4_EOFBLOCKS_FL		0x00400000
#define EXT4_RESERVED_FL		0x80000000
#define EXT4_FL_USER_VISIBLE		0x004BDFFF
#define EXT4_FL_USER_MODIFIABLE		0x004B80FF
#define EXT4_FL_INHERITED (EXT4_SECRM_FL | EXT4_UNRM_FL | EXT4_COMPR_FL |\
EXT4_SYNC_FL | EXT4_IMMUTABLE_FL | EXT4_APPEND_FL |\
EXT4_NODUMP_FL | EXT4_NOATIME_FL |\
EXT4_NOCOMPR_FL | EXT4_JOURNAL_DATA_FL |\
EXT4_NOTAIL_FL | EXT4_DIRSYNC_FL)
#define EXT4_REG_FLMASK (~(EXT4_DIRSYNC_FL | EXT4_TOPDIR_FL))
#define EXT4_OTHER_FLMASK (EXT4_NODUMP_FL | EXT4_NOATIME_FL)
static inline __u32 ext4_mask_flags(umode_t mode, __u32 flags)
enum ;
#define TEST_FLAG_VALUE(FLAG) (EXT4_##FLAG##_FL == (1 << EXT4_INODE_##FLAG))
#define CHECK_FLAG_VALUE(FLAG) if (!TEST_FLAG_VALUE(FLAG))
static inline void ext4_check_flag_values(void)
struct ext4_new_group_input ;
#if defined(__KERNEL__) && defined(CONFIG_COMPAT)
struct compat_ext4_new_group_input ;
struct ext4_new_group_data ;
#define EXT4_GET_BLOCKS_CREATE			0x0001
#define EXT4_GET_BLOCKS_UNINIT_EXT		0x0002
#define EXT4_GET_BLOCKS_CREATE_UNINIT_EXT	(EXT4_GET_BLOCKS_UNINIT_EXT|\
EXT4_GET_BLOCKS_CREATE)
#define EXT4_GET_BLOCKS_DELALLOC_RESERVE	0x0004
#define EXT4_GET_BLOCKS_PRE_IO			0x0008
#define EXT4_GET_BLOCKS_CONVERT			0x0010
#define EXT4_GET_BLOCKS_IO_CREATE_EXT		(EXT4_GET_BLOCKS_PRE_IO|\
EXT4_GET_BLOCKS_CREATE_UNINIT_EXT)
#define EXT4_GET_BLOCKS_IO_CONVERT_EXT		(EXT4_GET_BLOCKS_CONVERT|\
EXT4_GET_BLOCKS_CREATE_UNINIT_EXT)
#define EXT4_GET_BLOCKS_PUNCH_OUT_EXT		0x0020
#define EXT4_GET_BLOCKS_NO_NORMALIZE		0x0040
#define EXT4_FREE_BLOCKS_METADATA	0x0001
#define EXT4_FREE_BLOCKS_FORGET		0x0002
#define EXT4_FREE_BLOCKS_VALIDATED	0x0004
#define EXT4_FREE_BLOCKS_NO_QUOT_UPDATE	0x0008
#define	EXT4_IOC_GETFLAGS		FS_IOC_GETFLAGS
#define	EXT4_IOC_SETFLAGS		FS_IOC_SETFLAGS
#define	EXT4_IOC_GETVERSION		_IOR('f', 3, long)
#define	EXT4_IOC_SETVERSION		_IOW('f', 4, long)
#define	EXT4_IOC_GETVERSION_OLD		FS_IOC_GETVERSION
#define	EXT4_IOC_SETVERSION_OLD		FS_IOC_SETVERSION
#define EXT4_IOC_WAIT_FOR_READONLY	_IOR('f', 99, long)
#define EXT4_IOC_GETRSVSZ		_IOR('f', 5, long)
#define EXT4_IOC_SETRSVSZ		_IOW('f', 6, long)
#define EXT4_IOC_GROUP_EXTEND		_IOW('f', 7, unsigned long)
#define EXT4_IOC_GROUP_ADD		_IOW('f', 8, struct ext4_new_group_input)
#define EXT4_IOC_MIGRATE		_IO('f', 9)
#define EXT4_IOC_ALLOC_DA_BLKS		_IO('f', 12)
#define EXT4_IOC_MOVE_EXT		_IOWR('f', 15, struct move_extent)
#if defined(__KERNEL__) && defined(CONFIG_COMPAT)
#define EXT4_IOC32_GETFLAGS		FS_IOC32_GETFLAGS
#define EXT4_IOC32_SETFLAGS		FS_IOC32_SETFLAGS
#define EXT4_IOC32_GETVERSION		_IOR('f', 3, int)
#define EXT4_IOC32_SETVERSION		_IOW('f', 4, int)
#define EXT4_IOC32_GETRSVSZ		_IOR('f', 5, int)
#define EXT4_IOC32_SETRSVSZ		_IOW('f', 6, int)
#define EXT4_IOC32_GROUP_EXTEND		_IOW('f', 7, unsigned int)
#define EXT4_IOC32_GROUP_ADD		_IOW('f', 8, struct compat_ext4_new_group_input)
#define EXT4_IOC32_WAIT_FOR_READONLY	_IOR('f', 99, int)
#define EXT4_IOC32_GETVERSION_OLD	FS_IOC32_GETVERSION
#define EXT4_IOC32_SETVERSION_OLD	FS_IOC32_SETVERSION
#define EXT4_MAX_BLOCK_FILE_PHYS	0xFFFFFFFF
struct ext4_inode ;
struct move_extent ;
#define EXT4_EPOCH_BITS 2
#define EXT4_EPOCH_MASK ((1 << EXT4_EPOCH_BITS) - 1)
#define EXT4_NSEC_MASK  (~0UL << EXT4_EPOCH_BITS)
#define EXT4_FITS_IN_INODE(ext4_inode, einode, field)	\
((offsetof(typeof(*ext4_inode), field) +	\
sizeof((ext4_inode)->field))			\
<= (EXT4_GOOD_OLD_INODE_SIZE +			\
(einode)->i_extra_isize))			\
static inline __le32 ext4_encode_extra_time(struct timespec *time)
static inline void ext4_decode_extra_time(struct timespec *time, __le32 extra)
#define EXT4_INODE_SET_XTIME(xtime, inode, raw_inode)			       \
do  while (0)
#define EXT4_EINODE_SET_XTIME(xtime, einode, raw_inode)			       \
do  while (0)
#define EXT4_INODE_GET_XTIME(xtime, inode, raw_inode)			       \
do  while (0)
#define EXT4_EINODE_GET_XTIME(xtime, einode, raw_inode)			       \
do  while (0)
#define i_disk_version osd1.linux1.l_i_version
#if defined(__KERNEL__) || defined(__linux__)
#define i_reserved1	osd1.linux1.l_i_reserved1
#define i_file_acl_high	osd2.linux2.l_i_file_acl_high
#define i_blocks_high	osd2.linux2.l_i_blocks_high
#define i_uid_low	i_uid
#define i_gid_low	i_gid
#define i_uid_high	osd2.linux2.l_i_uid_high
#define i_gid_high	osd2.linux2.l_i_gid_high
#define i_reserved2	osd2.linux2.l_i_reserved2
#elif defined(__GNU__)
#define i_translator	osd1.hurd1.h_i_translator
#define i_uid_high	osd2.hurd2.h_i_uid_high
#define i_gid_high	osd2.hurd2.h_i_gid_high
#define i_author	osd2.hurd2.h_i_author
#elif defined(__masix__)
#define i_reserved1	osd1.masix1.m_i_reserved1
#define i_file_acl_high	osd2.masix2.m_i_file_acl_high
#define i_reserved2	osd2.masix2.m_i_reserved2
struct ext4_ext_cache ;
struct ext4_inode_info ;
#define	EXT4_VALID_FS			0x0001
#define	EXT4_ERROR_FS			0x0002
#define	EXT4_ORPHAN_FS			0x0004
#define EXT2_FLAGS_SIGNED_HASH		0x0001
#define EXT2_FLAGS_UNSIGNED_HASH	0x0002
#define EXT2_FLAGS_TEST_FILESYS		0x0004
#define EXT4_MOUNT_OLDALLOC		0x00002
#define EXT4_MOUNT_GRPID		0x00004
#define EXT4_MOUNT_DEBUG		0x00008
#define EXT4_MOUNT_ERRORS_CONT		0x00010
#define EXT4_MOUNT_ERRORS_RO		0x00020
#define EXT4_MOUNT_ERRORS_PANIC		0x00040
#define EXT4_MOUNT_MINIX_DF		0x00080
#define EXT4_MOUNT_NOLOAD		0x00100
#define EXT4_MOUNT_DATA_FLAGS		0x00C00
#define EXT4_MOUNT_JOURNAL_DATA		0x00400
#define EXT4_MOUNT_ORDERED_DATA		0x00800
#define EXT4_MOUNT_WRITEBACK_DATA	0x00C00
#define EXT4_MOUNT_UPDATE_JOURNAL	0x01000
#define EXT4_MOUNT_NO_UID32		0x02000
#define EXT4_MOUNT_XATTR_USER		0x04000
#define EXT4_MOUNT_POSIX_ACL		0x08000
#define EXT4_MOUNT_NO_AUTO_DA_ALLOC	0x10000
#define EXT4_MOUNT_BARRIER		0x20000
#define EXT4_MOUNT_QUOTA		0x80000
#define EXT4_MOUNT_USRQUOTA		0x100000
#define EXT4_MOUNT_GRPQUOTA		0x200000
#define EXT4_MOUNT_DIOREAD_NOLOCK	0x400000
#define EXT4_MOUNT_JOURNAL_CHECKSUM	0x800000
#define EXT4_MOUNT_JOURNAL_ASYNC_COMMIT	0x1000000
#define EXT4_MOUNT_I_VERSION            0x2000000
#define EXT4_MOUNT_MBLK_IO_SUBMIT	0x4000000
#define EXT4_MOUNT_DELALLOC		0x8000000
#define EXT4_MOUNT_DATA_ERR_ABORT	0x10000000
#define EXT4_MOUNT_BLOCK_VALIDITY	0x20000000
#define EXT4_MOUNT_DISCARD		0x40000000
#define EXT4_MOUNT_INIT_INODE_TABLE	0x80000000
#define clear_opt(sb, opt)		EXT4_SB(sb)->s_mount_opt &= \
~EXT4_MOUNT_##opt
#define set_opt(sb, opt)		EXT4_SB(sb)->s_mount_opt |= \
EXT4_MOUNT_##opt
#define test_opt(sb, opt)		(EXT4_SB(sb)->s_mount_opt & \
EXT4_MOUNT_##opt)
#define clear_opt2(sb, opt)		EXT4_SB(sb)->s_mount_opt2 &= \
~EXT4_MOUNT2_##opt
#define set_opt2(sb, opt)		EXT4_SB(sb)->s_mount_opt2 |= \
EXT4_MOUNT2_##opt
#define test_opt2(sb, opt)		(EXT4_SB(sb)->s_mount_opt2 & \
EXT4_MOUNT2_##opt)
#define ext4_set_bit			__test_and_set_bit_le
#define ext4_set_bit_atomic		ext2_set_bit_atomic
#define ext4_clear_bit			__test_and_clear_bit_le
#define ext4_clear_bit_atomic		ext2_clear_bit_atomic
#define ext4_test_bit			test_bit_le
#define ext4_find_first_zero_bit	find_first_zero_bit_le
#define ext4_find_next_zero_bit		find_next_zero_bit_le
#define ext4_find_next_bit		find_next_bit_le
#define EXT4_DFL_MAX_MNT_COUNT		20
#define EXT4_DFL_CHECKINTERVAL		0
#define EXT4_ERRORS_CONTINUE		1
#define EXT4_ERRORS_RO			2
#define EXT4_ERRORS_PANIC		3
#define EXT4_ERRORS_DEFAULT		EXT4_ERRORS_CONTINUE
struct ext4_super_block ;
#define EXT4_S_ERR_LEN (EXT4_S_ERR_END - EXT4_S_ERR_START)
#define EXT4_MF_MNTDIR_SAMPLED	0x0001
#define EXT4_MF_FS_ABORTED	0x0002
struct ext4_sb_info ;
static inline struct ext4_sb_info *EXT4_SB(struct super_block *sb)
static inline struct ext4_inode_info *EXT4_I(struct inode *inode)
static inline struct timespec ext4_current_time(struct inode *inode)
static inline int ext4_valid_inum(struct super_block *sb, unsigned long ino)
enum ;
#define EXT4_INODE_BIT_FNS(name, field, offset)				\
static inline int ext4_test_inode_##name(struct inode *inode, int bit)	\
\
static inline void ext4_set_inode_##name(struct inode *inode, int bit)	\
\
static inline void ext4_clear_inode_##name(struct inode *inode, int bit) \
EXT4_INODE_BIT_FNS(flag, flags, 0)
#if (BITS_PER_LONG < 64)
EXT4_INODE_BIT_FNS(state, state_flags, 0)
static inline void ext4_clear_state_flags(struct ext4_inode_info *ei)
EXT4_INODE_BIT_FNS(state, flags, 32)
static inline void ext4_clear_state_flags(struct ext4_inode_info *ei)
#define EXT4_SB(sb)	(sb)
#define NEXT_ORPHAN(inode) EXT4_I(inode)->i_dtime
#define EXT4_OS_LINUX		0
#define EXT4_OS_HURD		1
#define EXT4_OS_MASIX		2
#define EXT4_OS_FREEBSD		3
#define EXT4_OS_LITES		4
#define EXT4_GOOD_OLD_REV	0
#define EXT4_DYNAMIC_REV	1
#define EXT4_CURRENT_REV	EXT4_GOOD_OLD_REV
#define EXT4_MAX_SUPP_REV	EXT4_DYNAMIC_REV
#define EXT4_GOOD_OLD_INODE_SIZE 128
#define EXT4_HAS_COMPAT_FEATURE(sb,mask)			\
((EXT4_SB(sb)->s_es->s_feature_compat & cpu_to_le32(mask)) != 0)
#define EXT4_HAS_RO_COMPAT_FEATURE(sb,mask)			\
((EXT4_SB(sb)->s_es->s_feature_ro_compat & cpu_to_le32(mask)) != 0)
#define EXT4_HAS_INCOMPAT_FEATURE(sb,mask)			\
((EXT4_SB(sb)->s_es->s_feature_incompat & cpu_to_le32(mask)) != 0)
#define EXT4_SET_COMPAT_FEATURE(sb,mask)			\
EXT4_SB(sb)->s_es->s_feature_compat |= cpu_to_le32(mask)
#define EXT4_SET_RO_COMPAT_FEATURE(sb,mask)			\
EXT4_SB(sb)->s_es->s_feature_ro_compat |= cpu_to_le32(mask)
#define EXT4_SET_INCOMPAT_FEATURE(sb,mask)			\
EXT4_SB(sb)->s_es->s_feature_incompat |= cpu_to_le32(mask)
#define EXT4_CLEAR_COMPAT_FEATURE(sb,mask)			\
EXT4_SB(sb)->s_es->s_feature_compat &= ~cpu_to_le32(mask)
#define EXT4_CLEAR_RO_COMPAT_FEATURE(sb,mask)			\
EXT4_SB(sb)->s_es->s_feature_ro_compat &= ~cpu_to_le32(mask)
#define EXT4_CLEAR_INCOMPAT_FEATURE(sb,mask)			\
EXT4_SB(sb)->s_es->s_feature_incompat &= ~cpu_to_le32(mask)
#define EXT4_FEATURE_COMPAT_DIR_PREALLOC	0x0001
#define EXT4_FEATURE_COMPAT_IMAGIC_INODES	0x0002
#define EXT4_FEATURE_COMPAT_HAS_JOURNAL		0x0004
#define EXT4_FEATURE_COMPAT_EXT_ATTR		0x0008
#define EXT4_FEATURE_COMPAT_RESIZE_INODE	0x0010
#define EXT4_FEATURE_COMPAT_DIR_INDEX		0x0020
#define EXT4_FEATURE_RO_COMPAT_SPARSE_SUPER	0x0001
#define EXT4_FEATURE_RO_COMPAT_LARGE_FILE	0x0002
#define EXT4_FEATURE_RO_COMPAT_BTREE_DIR	0x0004
#define EXT4_FEATURE_RO_COMPAT_HUGE_FILE        0x0008
#define EXT4_FEATURE_RO_COMPAT_GDT_CSUM		0x0010
#define EXT4_FEATURE_RO_COMPAT_DIR_NLINK	0x0020
#define EXT4_FEATURE_RO_COMPAT_EXTRA_ISIZE	0x0040
#define EXT4_FEATURE_RO_COMPAT_QUOTA		0x0100
#define EXT4_FEATURE_INCOMPAT_COMPRESSION	0x0001
#define EXT4_FEATURE_INCOMPAT_FILETYPE		0x0002
#define EXT4_FEATURE_INCOMPAT_RECOVER		0x0004
#define EXT4_FEATURE_INCOMPAT_JOURNAL_DEV	0x0008
#define EXT4_FEATURE_INCOMPAT_META_BG		0x0010
#define EXT4_FEATURE_INCOMPAT_EXTENTS		0x0040
#define EXT4_FEATURE_INCOMPAT_64BIT		0x0080
#define EXT4_FEATURE_INCOMPAT_MMP               0x0100
#define EXT4_FEATURE_INCOMPAT_FLEX_BG		0x0200
#define EXT4_FEATURE_INCOMPAT_EA_INODE		0x0400
#define EXT4_FEATURE_INCOMPAT_DIRDATA		0x1000
#define EXT2_FEATURE_COMPAT_SUPP	EXT4_FEATURE_COMPAT_EXT_ATTR
#define EXT2_FEATURE_INCOMPAT_SUPP	(EXT4_FEATURE_INCOMPAT_FILETYPE| \
EXT4_FEATURE_INCOMPAT_META_BG)
#define EXT2_FEATURE_RO_COMPAT_SUPP	(EXT4_FEATURE_RO_COMPAT_SPARSE_SUPER| \
EXT4_FEATURE_RO_COMPAT_LARGE_FILE| \
EXT4_FEATURE_RO_COMPAT_BTREE_DIR)
#define EXT3_FEATURE_COMPAT_SUPP	EXT4_FEATURE_COMPAT_EXT_ATTR
#define EXT3_FEATURE_INCOMPAT_SUPP	(EXT4_FEATURE_INCOMPAT_FILETYPE| \
EXT4_FEATURE_INCOMPAT_RECOVER| \
EXT4_FEATURE_INCOMPAT_META_BG)
#define EXT3_FEATURE_RO_COMPAT_SUPP	(EXT4_FEATURE_RO_COMPAT_SPARSE_SUPER| \
EXT4_FEATURE_RO_COMPAT_LARGE_FILE| \
EXT4_FEATURE_RO_COMPAT_BTREE_DIR)
#define EXT4_FEATURE_COMPAT_SUPP	EXT2_FEATURE_COMPAT_EXT_ATTR
#define EXT4_FEATURE_INCOMPAT_SUPP	(EXT4_FEATURE_INCOMPAT_FILETYPE| \
EXT4_FEATURE_INCOMPAT_RECOVER| \
EXT4_FEATURE_INCOMPAT_META_BG| \
EXT4_FEATURE_INCOMPAT_EXTENTS| \
EXT4_FEATURE_INCOMPAT_64BIT| \
EXT4_FEATURE_INCOMPAT_FLEX_BG| \
EXT4_FEATURE_INCOMPAT_MMP)
#define EXT4_FEATURE_RO_COMPAT_SUPP	(EXT4_FEATURE_RO_COMPAT_SPARSE_SUPER| \
EXT4_FEATURE_RO_COMPAT_LARGE_FILE| \
EXT4_FEATURE_RO_COMPAT_GDT_CSUM| \
EXT4_FEATURE_RO_COMPAT_DIR_NLINK | \
EXT4_FEATURE_RO_COMPAT_EXTRA_ISIZE | \
EXT4_FEATURE_RO_COMPAT_BTREE_DIR |\
EXT4_FEATURE_RO_COMPAT_HUGE_FILE)
#define	EXT4_DEF_RESUID		0
#define	EXT4_DEF_RESGID		0
#define EXT4_DEF_INODE_READAHEAD_BLKS	32
#define EXT4_DEFM_DEBUG		0x0001
#define EXT4_DEFM_BSDGROUPS	0x0002
#define EXT4_DEFM_XATTR_USER	0x0004
#define EXT4_DEFM_ACL		0x0008
#define EXT4_DEFM_UID16		0x0010
#define EXT4_DEFM_JMODE		0x0060
#define EXT4_DEFM_JMODE_DATA	0x0020
#define EXT4_DEFM_JMODE_ORDERED	0x0040
#define EXT4_DEFM_JMODE_WBACK	0x0060
#define EXT4_DEFM_NOBARRIER	0x0100
#define EXT4_DEFM_BLOCK_VALIDITY 0x0200
#define EXT4_DEFM_DISCARD	0x0400
#define EXT4_DEFM_NODELALLOC	0x0800
#define EXT4_DEF_MIN_BATCH_TIME	0
#define EXT4_DEF_MAX_BATCH_TIME	15000
#define EXT4_FLEX_SIZE_DIR_ALLOC_SCHEME	4
#define EXT4_NAME_LEN 255
struct ext4_dir_entry ;
struct ext4_dir_entry_2 ;
#define EXT4_FT_UNKNOWN		0
#define EXT4_FT_REG_FILE	1
#define EXT4_FT_DIR		2
#define EXT4_FT_CHRDEV		3
#define EXT4_FT_BLKDEV		4
#define EXT4_FT_FIFO		5
#define EXT4_FT_SOCK		6
#define EXT4_FT_SYMLINK		7
#define EXT4_FT_MAX		8
#define EXT4_DIR_PAD			4
#define EXT4_DIR_ROUND			(EXT4_DIR_PAD - 1)
#define EXT4_DIR_REC_LEN(name_len)	(((name_len) + 8 + EXT4_DIR_ROUND) & \
~EXT4_DIR_ROUND)
#define EXT4_MAX_REC_LEN		((1<<16)-1)
static inline unsigned int
ext4_rec_len_from_disk(__le16 dlen, unsigned blocksize)
static inline __le16 ext4_rec_len_to_disk(unsigned len, unsigned blocksize)
#define is_dx(dir) (EXT4_HAS_COMPAT_FEATURE(dir->i_sb, \
EXT4_FEATURE_COMPAT_DIR_INDEX) && \
ext4_test_inode_flag((dir), EXT4_INODE_INDEX))
#define EXT4_DIR_LINK_MAX(dir) (!is_dx(dir) && (dir)->i_nlink >= EXT4_LINK_MAX)
#define EXT4_DIR_LINK_EMPTY(dir) ((dir)->i_nlink == 2 || (dir)->i_nlink == 1)
#define DX_HASH_LEGACY		0
#define DX_HASH_HALF_MD4	1
#define DX_HASH_TEA		2
#define DX_HASH_LEGACY_UNSIGNED	3
#define DX_HASH_HALF_MD4_UNSIGNED	4
#define DX_HASH_TEA_UNSIGNED		5
struct dx_hash_info
;
#define EXT4_HTREE_EOF	0x7fffffff
#define HASH_NB_ALWAYS		1
struct ext4_iloc
;
static inline struct ext4_inode *ext4_raw_inode(struct ext4_iloc *iloc)
struct dir_private_info ;
static inline ext4_fsblk_t
ext4_group_first_block_no(struct super_block *sb, ext4_group_t group_no)
#define ERR_BAD_DX_DIR	-75000
void ext4_get_group_no_and_offset(struct super_block *sb, ext4_fsblk_t blocknr,
ext4_group_t *blockgrpp, ext4_grpblk_t *offsetp);
#define EXT4_DEF_LI_WAIT_MULT			10
#define EXT4_DEF_LI_MAX_START_DELAY		5
#define EXT4_LAZYINIT_QUIT			0x0001
#define EXT4_LAZYINIT_RUNNING			0x0002
struct ext4_lazy_init ;
struct ext4_li_request ;
struct ext4_features ;
#define EXT4_MMP_MAGIC     0x004D4D50U
#define EXT4_MMP_SEQ_CLEAN 0xFF4D4D50U
#define EXT4_MMP_SEQ_FSCK  0xE24D4D50U
#define EXT4_MMP_SEQ_MAX   0xE24D4D4FU
struct mmp_struct ;
struct mmpd_data ;
#define EXT4_MMP_CHECK_MULT		2UL
#define EXT4_MMP_MIN_CHECK_INTERVAL	5UL
#define EXT4_MMP_MAX_CHECK_INTERVAL	300UL
# define NORET_TYPE
# define ATTRIB_NORET	__attribute__((noreturn))
# define NORET_AND	noreturn,
extern unsigned int ext4_count_free(struct buffer_head *, unsigned);
extern unsigned int ext4_block_group(struct super_block *sb,
ext4_fsblk_t blocknr);
extern ext4_grpblk_t ext4_block_group_offset(struct super_block *sb,
ext4_fsblk_t blocknr);
extern int ext4_bg_has_super(struct super_block *sb, ext4_group_t group);
extern unsigned long ext4_bg_num_gdb(struct super_block *sb,
ext4_group_t group);
extern ext4_fsblk_t ext4_new_meta_blocks(handle_t *handle, struct inode *inode,
ext4_fsblk_t goal,
unsigned int flags,
unsigned long *count,
int *errp);
extern int ext4_claim_free_blocks(struct ext4_sb_info *sbi,
s64 nblocks, unsigned int flags);
extern ext4_fsblk_t ext4_count_free_blocks(struct super_block *);
extern void ext4_check_blocks_bitmap(struct super_block *);
extern struct ext4_group_desc * ext4_get_group_desc(struct super_block * sb,
ext4_group_t block_group,
struct buffer_head ** bh);
extern int ext4_should_retry_alloc(struct super_block *sb, int *retries);
struct buffer_head *ext4_read_block_bitmap(struct super_block *sb,
ext4_group_t block_group);
extern unsigned ext4_init_block_bitmap(struct super_block *sb,
struct buffer_head *bh,
ext4_group_t group,
struct ext4_group_desc *desc);
#define ext4_free_blocks_after_init(sb, group, desc)			\
ext4_init_block_bitmap(sb, NULL, group, desc)
extern int __ext4_check_dir_entry(const char *, unsigned int, struct inode *,
struct file *,
struct ext4_dir_entry_2 *,
struct buffer_head *, unsigned int);
#define ext4_check_dir_entry(dir, filp, de, bh, offset)			\
unlikely(__ext4_check_dir_entry(__func__, __LINE__, (dir), (filp), \
(de), (bh), (offset)))
extern int ext4_htree_store_dirent(struct file *dir_file, __u32 hash,
__u32 minor_hash,
struct ext4_dir_entry_2 *dirent);
extern void ext4_htree_free_dir_info(struct dir_private_info *p);
extern int ext4_sync_file(struct file *, int);
extern int ext4_flush_completed_IO(struct inode *);
extern int ext4fs_dirhash(const char *name, int len, struct
dx_hash_info *hinfo);
extern struct inode *ext4_new_inode(handle_t *, struct inode *, int,
const struct qstr *qstr, __u32 goal);
extern void ext4_free_inode(handle_t *, struct inode *);
extern struct inode * ext4_orphan_get(struct super_block *, unsigned long);
extern unsigned long ext4_count_free_inodes(struct super_block *);
extern unsigned long ext4_count_dirs(struct super_block *);
extern void ext4_check_inodes_bitmap(struct super_block *);
extern void ext4_mark_bitmap_end(int start_bit, int end_bit, char *bitmap);
extern int ext4_init_inode_table(struct super_block *sb,
ext4_group_t group, int barrier);
extern long ext4_mb_stats;
extern long ext4_mb_max_to_scan;
extern int ext4_mb_init(struct super_block *, int);
extern int ext4_mb_release(struct super_block *);
extern ext4_fsblk_t ext4_mb_new_blocks(handle_t *,
struct ext4_allocation_request *, int *);
extern int ext4_mb_reserve_blocks(struct super_block *, int);
extern void ext4_discard_preallocations(struct inode *);
extern int __init ext4_init_mballoc(void);
extern void ext4_exit_mballoc(void);
extern void ext4_free_blocks(handle_t *handle, struct inode *inode,
struct buffer_head *bh, ext4_fsblk_t block,
unsigned long count, int flags);
extern int ext4_mb_add_groupinfo(struct super_block *sb,
ext4_group_t i, struct ext4_group_desc *desc);
extern void ext4_add_groupblocks(handle_t *handle, struct super_block *sb,
ext4_fsblk_t block, unsigned long count);
extern int ext4_trim_fs(struct super_block *, struct fstrim_range *);
struct buffer_head *ext4_getblk(handle_t *, struct inode *,
ext4_lblk_t, int, int *);
struct buffer_head *ext4_bread(handle_t *, struct inode *,
ext4_lblk_t, int, int *);
int ext4_get_block(struct inode *inode, sector_t iblock,
struct buffer_head *bh_result, int create);
extern struct inode *ext4_iget(struct super_block *, unsigned long);
extern int  ext4_write_inode(struct inode *, struct writeback_control *);
extern int  ext4_setattr(struct dentry *, struct iattr *);
extern int  ext4_getattr(struct vfsmount *mnt, struct dentry *dentry,
struct kstat *stat);
extern void ext4_evict_inode(struct inode *);
extern void ext4_clear_inode(struct inode *);
extern int  ext4_sync_inode(handle_t *, struct inode *);
extern void ext4_dirty_inode(struct inode *, int);
extern int ext4_change_inode_journal_flag(struct inode *, int);
extern int ext4_get_inode_loc(struct inode *, struct ext4_iloc *);
extern int ext4_can_truncate(struct inode *inode);
extern void ext4_truncate(struct inode *);
extern int ext4_punch_hole(struct file *file, loff_t offset, loff_t length);
extern int ext4_truncate_restart_trans(handle_t *, struct inode *, int nblocks);
extern void ext4_set_inode_flags(struct inode *);
extern void ext4_get_inode_flags(struct ext4_inode_info *);
extern int ext4_alloc_da_blocks(struct inode *inode);
extern void ext4_set_aops(struct inode *inode);
extern int ext4_writepage_trans_blocks(struct inode *);
extern int ext4_chunk_trans_blocks(struct inode *, int nrblocks);
extern int ext4_block_truncate_page(handle_t *handle,
struct address_space *mapping, loff_t from);
extern int ext4_block_zero_page_range(handle_t *handle,
struct address_space *mapping, loff_t from, loff_t length);
extern int ext4_page_mkwrite(struct vm_area_struct *vma, struct vm_fault *vmf);
extern qsize_t *ext4_get_reserved_space(struct inode *inode);
extern void ext4_da_update_reserve_space(struct inode *inode,
int used, int quota_claim);
extern long ext4_ioctl(struct file *, unsigned int, unsigned long);
extern long ext4_compat_ioctl(struct file *, unsigned int, unsigned long);
extern int ext4_ext_migrate(struct inode *);
extern int ext4_orphan_add(handle_t *, struct inode *);
extern int ext4_orphan_del(handle_t *, struct inode *);
extern int ext4_htree_fill_tree(struct file *dir_file, __u32 start_hash,
__u32 start_minor_hash, __u32 *next_hash);
extern int ext4_group_add(struct super_block *sb,
struct ext4_new_group_data *input);
extern int ext4_group_extend(struct super_block *sb,
struct ext4_super_block *es,
ext4_fsblk_t n_blocks_count);
extern void __ext4_error(struct super_block *, const char *, unsigned int,
const char *, ...)
__attribute__ ((format (printf, 4, 5)));
#define ext4_error(sb, message...)	__ext4_error(sb, __func__,	\
__LINE__, ## message)
extern void ext4_error_inode(struct inode *, const char *, unsigned int,
ext4_fsblk_t, const char *, ...)
__attribute__ ((format (printf, 5, 6)));
extern void ext4_error_file(struct file *, const char *, unsigned int,
ext4_fsblk_t, const char *, ...)
__attribute__ ((format (printf, 5, 6)));
extern void __ext4_std_error(struct super_block *, const char *,
unsigned int, int);
extern void __ext4_abort(struct super_block *, const char *, unsigned int,
const char *, ...)
__attribute__ ((format (printf, 4, 5)));
#define ext4_abort(sb, message...)	__ext4_abort(sb, __func__, \
__LINE__, ## message)
extern void __ext4_warning(struct super_block *, const char *, unsigned int,
const char *, ...)
__attribute__ ((format (printf, 4, 5)));
#define ext4_warning(sb, message...)	__ext4_warning(sb, __func__, \
__LINE__, ## message)
extern void ext4_msg(struct super_block *, const char *, const char *, ...)
__attribute__ ((format (printf, 3, 4)));
extern void __dump_mmp_msg(struct super_block *, struct mmp_struct *mmp,
const char *, unsigned int, const char *);
#define dump_mmp_msg(sb, mmp, msg)	__dump_mmp_msg(sb, mmp, __func__, \
__LINE__, msg)
extern void __ext4_grp_locked_error(const char *, unsigned int, \
struct super_block *, ext4_group_t, \
unsigned long, ext4_fsblk_t, \
const char *, ...)
__attribute__ ((format (printf, 7, 8)));
#define ext4_grp_locked_error(sb, grp, message...) \
__ext4_grp_locked_error(__func__, __LINE__, (sb), (grp), ## message)
extern void ext4_update_dynamic_rev(struct super_block *sb);
extern int ext4_update_compat_feature(handle_t *handle, struct super_block *sb,
__u32 compat);
extern int ext4_update_rocompat_feature(handle_t *handle,
struct super_block *sb,	__u32 rocompat);
extern int ext4_update_incompat_feature(handle_t *handle,
struct super_block *sb,	__u32 incompat);
extern ext4_fsblk_t ext4_block_bitmap(struct super_block *sb,
struct ext4_group_desc *bg);
extern ext4_fsblk_t ext4_inode_bitmap(struct super_block *sb,
struct ext4_group_desc *bg);
extern ext4_fsblk_t ext4_inode_table(struct super_block *sb,
struct ext4_group_desc *bg);
extern __u32 ext4_free_blks_count(struct super_block *sb,
struct ext4_group_desc *bg);
extern __u32 ext4_free_inodes_count(struct super_block *sb,
struct ext4_group_desc *bg);
extern __u32 ext4_used_dirs_count(struct super_block *sb,
struct ext4_group_desc *bg);
extern __u32 ext4_itable_unused_count(struct super_block *sb,
struct ext4_group_desc *bg);
extern void ext4_block_bitmap_set(struct super_block *sb,
struct ext4_group_desc *bg, ext4_fsblk_t blk);
extern void ext4_inode_bitmap_set(struct super_block *sb,
struct ext4_group_desc *bg, ext4_fsblk_t blk);
extern void ext4_inode_table_set(struct super_block *sb,
struct ext4_group_desc *bg, ext4_fsblk_t blk);
extern void ext4_free_blks_set(struct super_block *sb,
struct ext4_group_desc *bg, __u32 count);
extern void ext4_free_inodes_set(struct super_block *sb,
struct ext4_group_desc *bg, __u32 count);
extern void ext4_used_dirs_set(struct super_block *sb,
struct ext4_group_desc *bg, __u32 count);
extern void ext4_itable_unused_set(struct super_block *sb,
struct ext4_group_desc *bg, __u32 count);
extern __le16 ext4_group_desc_csum(struct ext4_sb_info *sbi, __u32 group,
struct ext4_group_desc *gdp);
extern int ext4_group_desc_csum_verify(struct ext4_sb_info *sbi, __u32 group,
struct ext4_group_desc *gdp);
static inline ext4_fsblk_t ext4_blocks_count(struct ext4_super_block *es)
static inline ext4_fsblk_t ext4_r_blocks_count(struct ext4_super_block *es)
static inline ext4_fsblk_t ext4_free_blocks_count(struct ext4_super_block *es)
static inline void ext4_blocks_count_set(struct ext4_super_block *es,
ext4_fsblk_t blk)
static inline void ext4_free_blocks_count_set(struct ext4_super_block *es,
ext4_fsblk_t blk)
static inline void ext4_r_blocks_count_set(struct ext4_super_block *es,
ext4_fsblk_t blk)
static inline loff_t ext4_isize(struct ext4_inode *raw_inode)
static inline void ext4_isize_set(struct ext4_inode *raw_inode, loff_t i_size)
static inline
struct ext4_group_info *ext4_get_group_info(struct super_block *sb,
ext4_group_t group)
static inline ext4_group_t ext4_get_groups_count(struct super_block *sb)
static inline ext4_group_t ext4_flex_group(struct ext4_sb_info *sbi,
ext4_group_t block_group)
static inline unsigned int ext4_flex_bg_size(struct ext4_sb_info *sbi)
#define ext4_std_error(sb, errno)				\
do  while (0)
#define EXT4_FREEBLOCKS_WATERMARK (4 * (percpu_counter_batch * nr_cpu_ids))
#define EXT4_FREEBLOCKS_WATERMARK 0
static inline void ext4_update_i_disksize(struct inode *inode, loff_t newsize)
struct ext4_group_info ;
#define EXT4_GROUP_INFO_NEED_INIT_BIT	0
#define EXT4_MB_GRP_NEED_INIT(grp)	\
(test_bit(EXT4_GROUP_INFO_NEED_INIT_BIT, &((grp)->bb_state)))
#define EXT4_MAX_CONTENTION		8
#define EXT4_CONTENTION_THRESHOLD	2
static inline spinlock_t *ext4_group_lock_ptr(struct super_block *sb,
ext4_group_t group)
static inline int ext4_fs_is_busy(struct ext4_sb_info *sbi)
static inline void ext4_lock_group(struct super_block *sb, ext4_group_t group)
static inline void ext4_unlock_group(struct super_block *sb,
ext4_group_t group)
static inline void ext4_mark_super_dirty(struct super_block *sb)
extern const struct file_operations ext4_dir_operations;
extern const struct inode_operations ext4_file_inode_operations;
extern const struct file_operations ext4_file_operations;
extern loff_t ext4_llseek(struct file *file, loff_t offset, int origin);
extern const struct inode_operations ext4_dir_inode_operations;
extern const struct inode_operations ext4_special_inode_operations;
extern struct dentry *ext4_get_parent(struct dentry *child);
extern const struct inode_operations ext4_symlink_inode_operations;
extern const struct inode_operations ext4_fast_symlink_inode_operations;
extern void ext4_release_system_zone(struct super_block *sb);
extern int ext4_setup_system_zone(struct super_block *sb);
extern int __init ext4_init_system_zone(void);
extern void ext4_exit_system_zone(void);
extern int ext4_data_block_valid(struct ext4_sb_info *sbi,
ext4_fsblk_t start_blk,
unsigned int count);
extern int ext4_ext_tree_init(handle_t *handle, struct inode *);
extern int ext4_ext_writepage_trans_blocks(struct inode *, int);
extern int ext4_ext_index_trans_blocks(struct inode *inode, int nrblocks,
int chunk);
extern int ext4_ext_map_blocks(handle_t *handle, struct inode *inode,
struct ext4_map_blocks *map, int flags);
extern void ext4_ext_truncate(struct inode *);
extern int ext4_ext_punch_hole(struct file *file, loff_t offset,
loff_t length);
extern void ext4_ext_init(struct super_block *);
extern void ext4_ext_release(struct super_block *);
extern long ext4_fallocate(struct file *file, int mode, loff_t offset,
loff_t len);
extern int ext4_convert_unwritten_extents(struct inode *inode, loff_t offset,
ssize_t len);
extern int ext4_map_blocks(handle_t *handle, struct inode *inode,
struct ext4_map_blocks *map, int flags);
extern int ext4_fiemap(struct inode *inode, struct fiemap_extent_info *fieinfo,
__u64 start, __u64 len);
extern int ext4_move_extents(struct file *o_filp, struct file *d_filp,
__u64 start_orig, __u64 start_donor,
__u64 len, __u64 *moved_len);
extern int __init ext4_init_pageio(void);
extern void ext4_exit_pageio(void);
extern void ext4_ioend_wait(struct inode *);
extern void ext4_free_io_end(ext4_io_end_t *io);
extern ext4_io_end_t *ext4_init_io_end(struct inode *inode, gfp_t flags);
extern int ext4_end_io_nolock(ext4_io_end_t *io);
extern void ext4_io_submit(struct ext4_io_submit *io);
extern int ext4_bio_write_page(struct ext4_io_submit *io,
struct page *page,
int len,
struct writeback_control *wbc);
extern int ext4_multi_mount_protect(struct super_block *, ext4_fsblk_t);
enum ext4_state_bits ;
BUFFER_FNS(Uninit, uninit)
TAS_BUFFER_FNS(Uninit, uninit)
#define BH_BITMAP_UPTODATE BH_JBDPrivateStart
static inline int bitmap_uptodate(struct buffer_head *bh)
static inline void set_bitmap_uptodate(struct buffer_head *bh)
#define in_range(b, first, len)	((b) >= (first) && (b) <= (first) + (len) - 1)
#define EXT4_WQ_HASH_SZ		37
#define ext4_ioend_wq(v)   (&ext4__ioend_wq[((unsigned long)(v)) %\
EXT4_WQ_HASH_SZ])
#define ext4_aio_mutex(v)  (&ext4__aio_mutex[((unsigned long)(v)) %\
EXT4_WQ_HASH_SZ])
extern wait_queue_head_t ext4__ioend_wq[EXT4_WQ_HASH_SZ];
extern struct mutex ext4__aio_mutex[EXT4_WQ_HASH_SZ];
