#define _LINUX_EXT2_FS_H
#undef EXT2FS_DEBUG
#define EXT2_DEFAULT_RESERVE_BLOCKS     8
#define EXT2_MAX_RESERVE_BLOCKS         1027
#define EXT2_RESERVE_WINDOW_NOT_ALLOCATED 0
#define EXT2FS_DATE		"95/08/09"
#define EXT2FS_VERSION		"0.5b"
#	define ext2_debug(f, a...)
#	define ext2_debug(f, a...)
#define	EXT2_BAD_INO		 1
#define EXT2_ROOT_INO		 2
#define EXT2_BOOT_LOADER_INO	 5
#define EXT2_UNDEL_DIR_INO	 6
#define EXT2_GOOD_OLD_FIRST_INO	11
static inline struct ext2_sb_info *EXT2_SB(struct super_block *sb)
#define EXT2_SB(sb)	(sb)
#define EXT2_LINK_MAX		32000
#define EXT2_MIN_BLOCK_SIZE		1024
#define	EXT2_MAX_BLOCK_SIZE		4096
#define EXT2_MIN_BLOCK_LOG_SIZE		  10
# define EXT2_BLOCK_SIZE(s)		((s)->s_blocksize)
# define EXT2_BLOCK_SIZE(s)		(EXT2_MIN_BLOCK_SIZE << (s)->s_log_block_size)
#define	EXT2_ADDR_PER_BLOCK(s)		(EXT2_BLOCK_SIZE(s) / sizeof (__u32))
# define EXT2_BLOCK_SIZE_BITS(s)	((s)->s_blocksize_bits)
# define EXT2_BLOCK_SIZE_BITS(s)	((s)->s_log_block_size + 10)
#define	EXT2_ADDR_PER_BLOCK_BITS(s)	(EXT2_SB(s)->s_addr_per_block_bits)
#define EXT2_INODE_SIZE(s)		(EXT2_SB(s)->s_inode_size)
#define EXT2_FIRST_INO(s)		(EXT2_SB(s)->s_first_ino)
#define EXT2_INODE_SIZE(s)	(((s)->s_rev_level == EXT2_GOOD_OLD_REV) ? \
EXT2_GOOD_OLD_INODE_SIZE : \
(s)->s_inode_size)
#define EXT2_FIRST_INO(s)	(((s)->s_rev_level == EXT2_GOOD_OLD_REV) ? \
EXT2_GOOD_OLD_FIRST_INO : \
(s)->s_first_ino)
#define EXT2_MIN_FRAG_SIZE		1024
#define	EXT2_MAX_FRAG_SIZE		4096
#define EXT2_MIN_FRAG_LOG_SIZE		  10
# define EXT2_FRAG_SIZE(s)		(EXT2_SB(s)->s_frag_size)
# define EXT2_FRAGS_PER_BLOCK(s)	(EXT2_SB(s)->s_frags_per_block)
# define EXT2_FRAG_SIZE(s)		(EXT2_MIN_FRAG_SIZE << (s)->s_log_frag_size)
# define EXT2_FRAGS_PER_BLOCK(s)	(EXT2_BLOCK_SIZE(s) / EXT2_FRAG_SIZE(s))
struct ext2_group_desc
;
# define EXT2_BLOCKS_PER_GROUP(s)	(EXT2_SB(s)->s_blocks_per_group)
# define EXT2_DESC_PER_BLOCK(s)		(EXT2_SB(s)->s_desc_per_block)
# define EXT2_INODES_PER_GROUP(s)	(EXT2_SB(s)->s_inodes_per_group)
# define EXT2_DESC_PER_BLOCK_BITS(s)	(EXT2_SB(s)->s_desc_per_block_bits)
# define EXT2_BLOCKS_PER_GROUP(s)	((s)->s_blocks_per_group)
# define EXT2_DESC_PER_BLOCK(s)		(EXT2_BLOCK_SIZE(s) / sizeof (struct ext2_group_desc))
# define EXT2_INODES_PER_GROUP(s)	((s)->s_inodes_per_group)
#define	EXT2_NDIR_BLOCKS		12
#define	EXT2_IND_BLOCK			EXT2_NDIR_BLOCKS
#define	EXT2_DIND_BLOCK			(EXT2_IND_BLOCK + 1)
#define	EXT2_TIND_BLOCK			(EXT2_DIND_BLOCK + 1)
#define	EXT2_N_BLOCKS			(EXT2_TIND_BLOCK + 1)
#define	EXT2_SECRM_FL			FS_SECRM_FL
#define	EXT2_UNRM_FL			FS_UNRM_FL
#define	EXT2_COMPR_FL			FS_COMPR_FL
#define EXT2_SYNC_FL			FS_SYNC_FL
#define EXT2_IMMUTABLE_FL		FS_IMMUTABLE_FL
#define EXT2_APPEND_FL			FS_APPEND_FL
#define EXT2_NODUMP_FL			FS_NODUMP_FL
#define EXT2_NOATIME_FL			FS_NOATIME_FL
#define EXT2_DIRTY_FL			FS_DIRTY_FL
#define EXT2_COMPRBLK_FL		FS_COMPRBLK_FL
#define EXT2_NOCOMP_FL			FS_NOCOMP_FL
#define EXT2_ECOMPR_FL			FS_ECOMPR_FL
#define EXT2_BTREE_FL			FS_BTREE_FL
#define EXT2_INDEX_FL			FS_INDEX_FL
#define EXT2_IMAGIC_FL			FS_IMAGIC_FL
#define EXT2_JOURNAL_DATA_FL		FS_JOURNAL_DATA_FL
#define EXT2_NOTAIL_FL			FS_NOTAIL_FL
#define EXT2_DIRSYNC_FL			FS_DIRSYNC_FL
#define EXT2_TOPDIR_FL			FS_TOPDIR_FL
#define EXT2_RESERVED_FL		FS_RESERVED_FL
#define EXT2_FL_USER_VISIBLE		FS_FL_USER_VISIBLE
#define EXT2_FL_USER_MODIFIABLE		FS_FL_USER_MODIFIABLE
#define EXT2_FL_INHERITED (EXT2_SECRM_FL | EXT2_UNRM_FL | EXT2_COMPR_FL |\
EXT2_SYNC_FL | EXT2_IMMUTABLE_FL | EXT2_APPEND_FL |\
EXT2_NODUMP_FL | EXT2_NOATIME_FL | EXT2_COMPRBLK_FL|\
EXT2_NOCOMP_FL | EXT2_JOURNAL_DATA_FL |\
EXT2_NOTAIL_FL | EXT2_DIRSYNC_FL)
#define EXT2_REG_FLMASK (~(EXT2_DIRSYNC_FL | EXT2_TOPDIR_FL))
#define EXT2_OTHER_FLMASK (EXT2_NODUMP_FL | EXT2_NOATIME_FL)
static inline __u32 ext2_mask_flags(umode_t mode, __u32 flags)
#define	EXT2_IOC_GETFLAGS		FS_IOC_GETFLAGS
#define	EXT2_IOC_SETFLAGS		FS_IOC_SETFLAGS
#define	EXT2_IOC_GETVERSION		FS_IOC_GETVERSION
#define	EXT2_IOC_SETVERSION		FS_IOC_SETVERSION
#define	EXT2_IOC_GETRSVSZ		_IOR('f', 5, long)
#define	EXT2_IOC_SETRSVSZ		_IOW('f', 6, long)
#define EXT2_IOC32_GETFLAGS		FS_IOC32_GETFLAGS
#define EXT2_IOC32_SETFLAGS		FS_IOC32_SETFLAGS
#define EXT2_IOC32_GETVERSION		FS_IOC32_GETVERSION
#define EXT2_IOC32_SETVERSION		FS_IOC32_SETVERSION
struct ext2_inode ;
#define i_size_high	i_dir_acl
#if defined(__KERNEL__) || defined(__linux__)
#define i_reserved1	osd1.linux1.l_i_reserved1
#define i_frag		osd2.linux2.l_i_frag
#define i_fsize		osd2.linux2.l_i_fsize
#define i_uid_low	i_uid
#define i_gid_low	i_gid
#define i_uid_high	osd2.linux2.l_i_uid_high
#define i_gid_high	osd2.linux2.l_i_gid_high
#define i_reserved2	osd2.linux2.l_i_reserved2
#define i_translator	osd1.hurd1.h_i_translator
#define i_frag		osd2.hurd2.h_i_frag
#define i_fsize		osd2.hurd2.h_i_fsize
#define i_uid_high	osd2.hurd2.h_i_uid_high
#define i_gid_high	osd2.hurd2.h_i_gid_high
#define i_author	osd2.hurd2.h_i_author
#define i_reserved1	osd1.masix1.m_i_reserved1
#define i_frag		osd2.masix2.m_i_frag
#define i_fsize		osd2.masix2.m_i_fsize
#define i_reserved2	osd2.masix2.m_i_reserved2
#define	EXT2_VALID_FS			0x0001
#define	EXT2_ERROR_FS			0x0002
#define EXT2_MOUNT_CHECK		0x000001
#define EXT2_MOUNT_OLDALLOC		0x000002
#define EXT2_MOUNT_GRPID		0x000004
#define EXT2_MOUNT_DEBUG		0x000008
#define EXT2_MOUNT_ERRORS_CONT		0x000010
#define EXT2_MOUNT_ERRORS_RO		0x000020
#define EXT2_MOUNT_ERRORS_PANIC		0x000040
#define EXT2_MOUNT_MINIX_DF		0x000080
#define EXT2_MOUNT_NOBH			0x000100
#define EXT2_MOUNT_NO_UID32		0x000200
#define EXT2_MOUNT_XATTR_USER		0x004000
#define EXT2_MOUNT_POSIX_ACL		0x008000
#define EXT2_MOUNT_XIP			0x010000
#define EXT2_MOUNT_USRQUOTA		0x020000
#define EXT2_MOUNT_GRPQUOTA		0x040000
#define EXT2_MOUNT_RESERVATION		0x080000
#define clear_opt(o, opt)		o &= ~EXT2_MOUNT_##opt
#define set_opt(o, opt)			o |= EXT2_MOUNT_##opt
#define test_opt(sb, opt)		(EXT2_SB(sb)->s_mount_opt & \
EXT2_MOUNT_##opt)
#define EXT2_DFL_MAX_MNT_COUNT		20
#define EXT2_DFL_CHECKINTERVAL		0
#define EXT2_ERRORS_CONTINUE		1
#define EXT2_ERRORS_RO			2
#define EXT2_ERRORS_PANIC		3
#define EXT2_ERRORS_DEFAULT		EXT2_ERRORS_CONTINUE
struct ext2_super_block ;
#define EXT2_OS_LINUX		0
#define EXT2_OS_HURD		1
#define EXT2_OS_MASIX		2
#define EXT2_OS_FREEBSD		3
#define EXT2_OS_LITES		4
#define EXT2_GOOD_OLD_REV	0
#define EXT2_DYNAMIC_REV	1
#define EXT2_CURRENT_REV	EXT2_GOOD_OLD_REV
#define EXT2_MAX_SUPP_REV	EXT2_DYNAMIC_REV
#define EXT2_GOOD_OLD_INODE_SIZE 128
#define EXT2_HAS_COMPAT_FEATURE(sb,mask)			\
( EXT2_SB(sb)->s_es->s_feature_compat & cpu_to_le32(mask) )
#define EXT2_HAS_RO_COMPAT_FEATURE(sb,mask)			\
( EXT2_SB(sb)->s_es->s_feature_ro_compat & cpu_to_le32(mask) )
#define EXT2_HAS_INCOMPAT_FEATURE(sb,mask)			\
( EXT2_SB(sb)->s_es->s_feature_incompat & cpu_to_le32(mask) )
#define EXT2_SET_COMPAT_FEATURE(sb,mask)			\
EXT2_SB(sb)->s_es->s_feature_compat |= cpu_to_le32(mask)
#define EXT2_SET_RO_COMPAT_FEATURE(sb,mask)			\
EXT2_SB(sb)->s_es->s_feature_ro_compat |= cpu_to_le32(mask)
#define EXT2_SET_INCOMPAT_FEATURE(sb,mask)			\
EXT2_SB(sb)->s_es->s_feature_incompat |= cpu_to_le32(mask)
#define EXT2_CLEAR_COMPAT_FEATURE(sb,mask)			\
EXT2_SB(sb)->s_es->s_feature_compat &= ~cpu_to_le32(mask)
#define EXT2_CLEAR_RO_COMPAT_FEATURE(sb,mask)			\
EXT2_SB(sb)->s_es->s_feature_ro_compat &= ~cpu_to_le32(mask)
#define EXT2_CLEAR_INCOMPAT_FEATURE(sb,mask)			\
EXT2_SB(sb)->s_es->s_feature_incompat &= ~cpu_to_le32(mask)
#define EXT2_FEATURE_COMPAT_DIR_PREALLOC	0x0001
#define EXT2_FEATURE_COMPAT_IMAGIC_INODES	0x0002
#define EXT3_FEATURE_COMPAT_HAS_JOURNAL		0x0004
#define EXT2_FEATURE_COMPAT_EXT_ATTR		0x0008
#define EXT2_FEATURE_COMPAT_RESIZE_INO		0x0010
#define EXT2_FEATURE_COMPAT_DIR_INDEX		0x0020
#define EXT2_FEATURE_COMPAT_ANY			0xffffffff
#define EXT2_FEATURE_RO_COMPAT_SPARSE_SUPER	0x0001
#define EXT2_FEATURE_RO_COMPAT_LARGE_FILE	0x0002
#define EXT2_FEATURE_RO_COMPAT_BTREE_DIR	0x0004
#define EXT2_FEATURE_RO_COMPAT_ANY		0xffffffff
#define EXT2_FEATURE_INCOMPAT_COMPRESSION	0x0001
#define EXT2_FEATURE_INCOMPAT_FILETYPE		0x0002
#define EXT3_FEATURE_INCOMPAT_RECOVER		0x0004
#define EXT3_FEATURE_INCOMPAT_JOURNAL_DEV	0x0008
#define EXT2_FEATURE_INCOMPAT_META_BG		0x0010
#define EXT2_FEATURE_INCOMPAT_ANY		0xffffffff
#define EXT2_FEATURE_COMPAT_SUPP	EXT2_FEATURE_COMPAT_EXT_ATTR
#define EXT2_FEATURE_INCOMPAT_SUPP	(EXT2_FEATURE_INCOMPAT_FILETYPE| \
EXT2_FEATURE_INCOMPAT_META_BG)
#define EXT2_FEATURE_RO_COMPAT_SUPP	(EXT2_FEATURE_RO_COMPAT_SPARSE_SUPER| \
EXT2_FEATURE_RO_COMPAT_LARGE_FILE| \
EXT2_FEATURE_RO_COMPAT_BTREE_DIR)
#define EXT2_FEATURE_RO_COMPAT_UNSUPPORTED	~EXT2_FEATURE_RO_COMPAT_SUPP
#define EXT2_FEATURE_INCOMPAT_UNSUPPORTED	~EXT2_FEATURE_INCOMPAT_SUPP
#define	EXT2_DEF_RESUID		0
#define	EXT2_DEF_RESGID		0
#define EXT2_DEFM_DEBUG		0x0001
#define EXT2_DEFM_BSDGROUPS	0x0002
#define EXT2_DEFM_XATTR_USER	0x0004
#define EXT2_DEFM_ACL		0x0008
#define EXT2_DEFM_UID16		0x0010
#define EXT3_DEFM_JMODE		0x0060
#define EXT3_DEFM_JMODE_DATA	0x0020
#define EXT3_DEFM_JMODE_ORDERED	0x0040
#define EXT3_DEFM_JMODE_WBACK	0x0060
#define EXT2_NAME_LEN 255
struct ext2_dir_entry ;
struct ext2_dir_entry_2 ;
enum ;
#define EXT2_DIR_PAD		 	4
#define EXT2_DIR_ROUND 			(EXT2_DIR_PAD - 1)
#define EXT2_DIR_REC_LEN(name_len)	(((name_len) + 8 + EXT2_DIR_ROUND) & \
~EXT2_DIR_ROUND)
#define EXT2_MAX_REC_LEN		((1<<16)-1)
