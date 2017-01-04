#define FS_LOGFS_LOGFS_ABI_H
#define BUILD_BUG_ON(condition)
#define SIZE_CHECK(type, size)					\
static inline void check_##type(void)				\
#define LOGFS_MAGIC		0x7a3a8e5cb9d5bf67ull
#define LOGFS_MAGIC_U32		0xc97e8168u
#define LOGFS_BLOCKSIZE		(4096ull)
#define LOGFS_BLOCK_FACTOR	(LOGFS_BLOCKSIZE / sizeof(u64))
#define LOGFS_BLOCK_BITS	(9)
#define I0_BLOCKS		(16)
#define I1_BLOCKS		LOGFS_BLOCK_FACTOR
#define I2_BLOCKS		(LOGFS_BLOCK_FACTOR * I1_BLOCKS)
#define I3_BLOCKS		(LOGFS_BLOCK_FACTOR * I2_BLOCKS)
#define I4_BLOCKS		(LOGFS_BLOCK_FACTOR * I3_BLOCKS)
#define I5_BLOCKS		(LOGFS_BLOCK_FACTOR * I4_BLOCKS)
#define INDIRECT_INDEX		I0_BLOCKS
#define LOGFS_EMBEDDED_FIELDS	(I0_BLOCKS + 1)
#define LOGFS_EMBEDDED_SIZE	(LOGFS_EMBEDDED_FIELDS * sizeof(u64))
#define LOGFS_I0_SIZE		(I0_BLOCKS * LOGFS_BLOCKSIZE)
#define LOGFS_I1_SIZE		(I1_BLOCKS * LOGFS_BLOCKSIZE)
#define LOGFS_I2_SIZE		(I2_BLOCKS * LOGFS_BLOCKSIZE)
#define LOGFS_I3_SIZE		(I3_BLOCKS * LOGFS_BLOCKSIZE)
#define LOGFS_I4_SIZE		(I4_BLOCKS * LOGFS_BLOCKSIZE)
#define LOGFS_I5_SIZE		(I5_BLOCKS * LOGFS_BLOCKSIZE)
#define LOGFS_FULLY_POPULATED (1ULL << 63)
#define pure_ofs(ofs) (ofs & ~LOGFS_FULLY_POPULATED)
#define LOGFS_MAX_INDIRECT	(5)
#define LOGFS_MAX_LEVELS	(LOGFS_MAX_INDIRECT + 1)
#define LOGFS_NO_AREAS		(2 * LOGFS_MAX_LEVELS)
#define LOGFS_MAX_NAMELEN	(255)
#define LOGFS_JOURNAL_SEGS	(16)
#define MAX_CACHED_SEGS		(64)
#define LOGFS_OBJECT_HEADERSIZE	(0x1c)
#define LOGFS_SEGMENT_HEADERSIZE (0x18)
#define LOGFS_MAX_OBJECTSIZE	(LOGFS_OBJECT_HEADERSIZE + LOGFS_BLOCKSIZE)
#define LOGFS_SEGMENT_RESERVE	\
(LOGFS_SEGMENT_HEADERSIZE + LOGFS_MAX_OBJECTSIZE - 1)
enum ;
struct logfs_segment_header ;
SIZE_CHECK(logfs_segment_header, LOGFS_SEGMENT_HEADERSIZE);
#define LOGFS_FEATURES_INCOMPAT		(0ull)
#define LOGFS_FEATURES_RO_COMPAT	(0ull)
#define LOGFS_FEATURES_COMPAT		(0ull)
struct logfs_disk_super ;
SIZE_CHECK(logfs_disk_super, 256);
enum ;
struct logfs_object_header  __attribute__((packed));
SIZE_CHECK(logfs_object_header, LOGFS_OBJECT_HEADERSIZE);
enum ;
#define LOGFS_IF_COMPRESSED	0x00000004
#define LOGFS_IF_DIRTY		0x20000000
#define LOGFS_IF_ZOMBIE		0x40000000
#define LOGFS_IF_STILLBORN	0x80000000
#define LOGFS_FL_USER_VISIBLE	(LOGFS_IF_COMPRESSED)
#define LOGFS_FL_USER_MODIFIABLE (LOGFS_IF_COMPRESSED)
#define LOGFS_FL_INHERITED	(LOGFS_IF_COMPRESSED)
struct logfs_disk_inode ;
SIZE_CHECK(logfs_disk_inode, 200);
#define INODE_POINTER_OFS \
(offsetof(struct logfs_disk_inode, di_data) / sizeof(__be64))
#define INODE_USED_OFS \
(offsetof(struct logfs_disk_inode, di_used_bytes) / sizeof(__be64))
#define INODE_SIZE_OFS \
(offsetof(struct logfs_disk_inode, di_size) / sizeof(__be64))
#define INODE_HEIGHT_OFS	(0)
struct logfs_disk_dentry  __attribute__((packed));
SIZE_CHECK(logfs_disk_dentry, 266);
#define RESERVED		0xffffffff
#define BADSEG			0xffffffff
struct logfs_segment_entry ;
SIZE_CHECK(logfs_segment_entry, 8);
struct logfs_journal_header ;
SIZE_CHECK(logfs_journal_header, 16);
enum logfs_vim ;
struct logfs_je_area  __attribute__((packed));
SIZE_CHECK(logfs_je_area, 10);
#define MAX_JOURNAL_HEADER \
(sizeof(struct logfs_journal_header) + sizeof(struct logfs_je_area))
struct logfs_je_dynsb ;
SIZE_CHECK(logfs_je_dynsb, 64);
struct logfs_je_anchor ;
SIZE_CHECK(logfs_je_anchor, 168);
struct logfs_je_spillout ;
SIZE_CHECK(logfs_je_spillout, 0);
struct logfs_je_journal_ec ;
SIZE_CHECK(logfs_je_journal_ec, 0);
struct logfs_je_free_segments ;
SIZE_CHECK(logfs_je_free_segments, 8);
struct logfs_seg_alias ;
SIZE_CHECK(logfs_seg_alias, 8);
struct logfs_obj_alias ;
SIZE_CHECK(logfs_obj_alias, 32);
enum ;
enum ;
