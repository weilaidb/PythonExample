#define _HFS_H
#define HFS_DD_BLK		0
#define HFS_PMAP_BLK		1
#define HFS_MDB_BLK		2
#define HFS_DRVR_DESC_MAGIC	0x4552
#define HFS_OLD_PMAP_MAGIC	0x5453
#define HFS_NEW_PMAP_MAGIC	0x504D
#define HFS_SUPER_MAGIC		0x4244
#define HFS_MFS_SUPER_MAGIC	0xD2D7
#define HFS_SECTOR_SIZE		512
#define HFS_SECTOR_SIZE_BITS	9
#define HFS_NAMELEN		31
#define HFS_MAX_NAMELEN		128
#define HFS_MAX_VALENCE		32767U
#define HFS_SB_ATTRIB_HLOCK	(1 << 7)
#define HFS_SB_ATTRIB_UNMNT	(1 << 8)
#define HFS_SB_ATTRIB_SPARED	(1 << 9)
#define HFS_SB_ATTRIB_INCNSTNT	(1 << 11)
#define HFS_SB_ATTRIB_SLOCK	(1 << 15)
#define HFS_POR_CNID		1
#define HFS_ROOT_CNID		2
#define HFS_EXT_CNID		3
#define HFS_CAT_CNID		4
#define HFS_BAD_CNID		5
#define HFS_ALLOC_CNID		6
#define HFS_START_CNID		7
#define HFS_ATTR_CNID		8
#define HFS_EXCH_CNID		15
#define HFS_FIRSTUSER_CNID	16
#define HFS_CDR_DIR    0x01
#define HFS_CDR_FIL    0x02
#define HFS_CDR_THD    0x03
#define HFS_CDR_FTH    0x04
#define HFS_FK_DATA	0x00
#define HFS_FK_RSRC	0xFF
#define HFS_FIL_LOCK	0x01
#define HFS_FIL_THD	0x02
#define HFS_FIL_DOPEN   0x04
#define HFS_FIL_ROPEN   0x08
#define HFS_FIL_DIR     0x10
#define HFS_FIL_NOCOPY  0x40
#define HFS_FIL_USED	0x80
#define HFS_DIR_LOCK        0x01
#define HFS_DIR_THD         0x02
#define HFS_DIR_INEXPFOLDER 0x04
#define HFS_DIR_MOUNTED     0x08
#define HFS_DIR_DIR         0x10
#define HFS_DIR_EXPFOLDER   0x20
#define HFS_FLG_INITED		0x0100
#define HFS_FLG_LOCKED		0x1000
#define HFS_FLG_INVISIBLE	0x4000
struct hfs_name  __packed;
struct hfs_point  __packed;
struct hfs_rect  __packed;
struct hfs_finfo  __packed;
struct hfs_fxinfo  __packed;
struct hfs_dinfo  __packed;
struct hfs_dxinfo  __packed;
union hfs_finder_info  __packed;
#define	HFS_BKEY(X)	(((void)((X)->KeyLen)), ((struct hfs_bkey *)(X)))
struct hfs_cat_key  __packed;
struct hfs_ext_key  __packed;
typedef union hfs_btree_key  hfs_btree_key;
#define HFS_MAX_CAT_KEYLEN	(sizeof(struct hfs_cat_key) - sizeof(u8))
#define HFS_MAX_EXT_KEYLEN	(sizeof(struct hfs_ext_key) - sizeof(u8))
typedef union hfs_btree_key btree_key;
struct hfs_extent ;
typedef struct hfs_extent hfs_extent_rec[3];
struct hfs_cat_file  __packed;
struct hfs_cat_dir  __packed;
struct hfs_cat_thread   __packed;
typedef union hfs_cat_rec  hfs_cat_rec;
struct hfs_mdb  __packed;
struct hfs_readdir_data ;
