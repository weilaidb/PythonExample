#define _LINUX_HFSPLUS_RAW_H
#define HFSPLUS_SECTOR_SIZE        512
#define HFSPLUS_SECTOR_SHIFT         9
#define HFSPLUS_VOLHEAD_SECTOR       2
#define HFSPLUS_VOLHEAD_SIG     0x482b
#define HFSPLUS_VOLHEAD_SIGX    0x4858
#define HFSPLUS_SUPER_MAGIC     0x482b
#define HFSPLUS_MIN_VERSION          4
#define HFSPLUS_CURRENT_VERSION      5
#define HFSP_WRAP_MAGIC         0x4244
#define HFSP_WRAP_ATTRIB_SLOCK  0x8000
#define HFSP_WRAP_ATTRIB_SPARED 0x0200
#define HFSP_WRAPOFF_SIG          0x00
#define HFSP_WRAPOFF_ATTRIB       0x0A
#define HFSP_WRAPOFF_ABLKSIZE     0x14
#define HFSP_WRAPOFF_ABLKSTART    0x1C
#define HFSP_WRAPOFF_EMBEDSIG     0x7C
#define HFSP_WRAPOFF_EMBEDEXT     0x7E
#define HFSP_HIDDENDIR_NAME \
"\xe2\x90\x80\xe2\x90\x80\xe2\x90\x80\xe2\x90\x80HFS+ Private Data"
#define HFSP_HARDLINK_TYPE	0x686c6e6b
#define HFSP_HFSPLUS_CREATOR	0x6866732b
#define HFSP_SYMLINK_TYPE	0x736c6e6b
#define HFSP_SYMLINK_CREATOR	0x72686170
#define HFSP_MOUNT_VERSION	0x482b4c78
typedef __be32 hfsplus_cnid;
typedef __be16 hfsplus_unichr;
struct hfsplus_unistr  __packed;
#define HFSPLUS_MAX_STRLEN 255
struct hfsplus_perm  __packed;
#define HFSPLUS_FLG_NODUMP	0x01
#define HFSPLUS_FLG_IMMUTABLE	0x02
#define HFSPLUS_FLG_APPEND	0x04
struct hfsplus_extent  __packed;
typedef struct hfsplus_extent hfsplus_extent_rec[8];
struct hfsplus_fork_raw  __packed;
struct hfsplus_vh  __packed;
#define HFSPLUS_VOL_UNMNT		(1 << 8)
#define HFSPLUS_VOL_SPARE_BLK		(1 << 9)
#define HFSPLUS_VOL_NOCACHE		(1 << 10)
#define HFSPLUS_VOL_INCNSTNT		(1 << 11)
#define HFSPLUS_VOL_NODEID_REUSED	(1 << 12)
#define HFSPLUS_VOL_JOURNALED		(1 << 13)
#define HFSPLUS_VOL_SOFTLOCK		(1 << 15)
struct hfs_bnode_desc  __packed;
#define HFS_NODE_INDEX	0x00
#define HFS_NODE_HEADER	0x01
#define HFS_NODE_MAP	0x02
#define HFS_NODE_LEAF	0xFF
struct hfs_btree_header_rec  __packed;
#define HFS_TREE_BIGKEYS	2
#define HFS_TREE_VARIDXKEYS	4
#define HFSPLUS_TREE_HEAD 0
#define HFSPLUS_NODE_MXSZ 32768
#define HFSPLUS_POR_CNID		1
#define HFSPLUS_ROOT_CNID		2
#define HFSPLUS_EXT_CNID		3
#define HFSPLUS_CAT_CNID		4
#define HFSPLUS_BAD_CNID		5
#define HFSPLUS_ALLOC_CNID		6
#define HFSPLUS_START_CNID		7
#define HFSPLUS_ATTR_CNID		8
#define HFSPLUS_EXCH_CNID		15
#define HFSPLUS_FIRSTUSER_CNID		16
#define HFSPLUS_KEY_CASEFOLDING		0xCF
#define HFSPLUS_KEY_BINARY		0xBC
struct hfsplus_cat_key  __packed;
#define HFSPLUS_CAT_KEYLEN	(sizeof(struct hfsplus_cat_key))
struct hfsp_point  __packed;
struct hfsp_rect  __packed;
struct DInfo  __packed;
struct DXInfo  __packed;
struct hfsplus_cat_folder  __packed;
struct FInfo  __packed;
struct FXInfo  __packed;
struct hfsplus_cat_file  __packed;
#define HFSPLUS_FILE_LOCKED		0x0001
#define HFSPLUS_FILE_THREAD_EXISTS	0x0002
struct hfsplus_cat_thread  __packed;
#define HFSPLUS_MIN_THREAD_SZ 10
typedef union  __packed hfsplus_cat_entry;
#define HFSPLUS_FOLDER         0x0001
#define HFSPLUS_FILE           0x0002
#define HFSPLUS_FOLDER_THREAD  0x0003
#define HFSPLUS_FILE_THREAD    0x0004
struct hfsplus_ext_key  __packed;
#define HFSPLUS_EXT_KEYLEN	sizeof(struct hfsplus_ext_key)
typedef union  __packed hfsplus_btree_key;
