#define __LINUX_UDF_SB_H
#define UDF_SUPER_MAGIC			0x15013346
#define UDF_MAX_READ_VERSION		0x0250
#define UDF_MAX_WRITE_VERSION		0x0201
#define UDF_FLAG_USE_EXTENDED_FE	0
#define UDF_VERS_USE_EXTENDED_FE	0x0200
#define UDF_FLAG_USE_STREAMS		1
#define UDF_VERS_USE_STREAMS		0x0200
#define UDF_FLAG_USE_SHORT_AD		2
#define UDF_FLAG_USE_AD_IN_ICB		3
#define UDF_FLAG_USE_FILE_CTIME_EA	4
#define UDF_FLAG_STRICT			5
#define UDF_FLAG_UNDELETE		6
#define UDF_FLAG_UNHIDE			7
#define UDF_FLAG_VARCONV		8
#define UDF_FLAG_NLS_MAP		9
#define UDF_FLAG_UTF8			10
#define UDF_FLAG_UID_FORGET     11
#define UDF_FLAG_UID_IGNORE     12
#define UDF_FLAG_GID_FORGET     13
#define UDF_FLAG_GID_IGNORE     14
#define UDF_FLAG_UID_SET	15
#define UDF_FLAG_GID_SET	16
#define UDF_FLAG_SESSION_SET	17
#define UDF_FLAG_LASTBLOCK_SET	18
#define UDF_FLAG_BLOCKSIZE_SET	19
#define UDF_PART_FLAG_UNALLOC_BITMAP	0x0001
#define UDF_PART_FLAG_UNALLOC_TABLE	0x0002
#define UDF_PART_FLAG_FREED_BITMAP	0x0004
#define UDF_PART_FLAG_FREED_TABLE	0x0008
#define UDF_PART_FLAG_READ_ONLY		0x0010
#define UDF_PART_FLAG_WRITE_ONCE	0x0020
#define UDF_PART_FLAG_REWRITABLE	0x0040
#define UDF_PART_FLAG_OVERWRITABLE	0x0080
#define UDF_MAX_BLOCK_LOADED	8
#define UDF_TYPE1_MAP15			0x1511U
#define UDF_VIRTUAL_MAP15		0x1512U
#define UDF_VIRTUAL_MAP20		0x2012U
#define UDF_SPARABLE_MAP15		0x1522U
#define UDF_METADATA_MAP25		0x2511U
#define UDF_INVALID_MODE		((mode_t)-1)
struct udf_meta_data ;
struct udf_sparing_data ;
struct udf_virtual_data ;
struct udf_bitmap ;
struct udf_part_map ;
struct udf_sb_info ;
static inline struct udf_sb_info *UDF_SB(struct super_block *sb)
struct logicalVolIntegrityDescImpUse *udf_sb_lvidiu(struct udf_sb_info *sbi);
int udf_compute_nr_groups(struct super_block *sb, u32 partition);
static inline int UDF_QUERY_FLAG(struct super_block *sb, int flag)
static inline void UDF_SET_FLAG(struct super_block *sb, int flag)
static inline void UDF_CLEAR_FLAG(struct super_block *sb, int flag)
