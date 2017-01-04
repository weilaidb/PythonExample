#define AMIGAFFS_H
#define FS_OFS		0x444F5300
#define FS_FFS		0x444F5301
#define FS_INTLOFS	0x444F5302
#define FS_INTLFFS	0x444F5303
#define FS_DCOFS	0x444F5304
#define FS_DCFFS	0x444F5305
#define MUFS_FS		0x6d754653
#define MUFS_OFS	0x6d754600
#define MUFS_FFS	0x6d754601
#define MUFS_INTLOFS	0x6d754602
#define MUFS_INTLFFS	0x6d754603
#define MUFS_DCOFS	0x6d754604
#define MUFS_DCFFS	0x6d754605
#define T_SHORT		2
#define T_LIST		16
#define T_DATA		8
#define ST_LINKFILE	-4
#define ST_FILE		-3
#define ST_ROOT		1
#define ST_USERDIR	2
#define ST_SOFTLINK	3
#define ST_LINKDIR	4
#define AFFS_ROOT_BMAPS		25
struct affs_date ;
struct affs_short_date ;
struct affs_root_head ;
struct affs_root_tail ;
struct affs_head ;
struct affs_tail ;
struct slink_front
;
struct affs_data_head
;
#define FIBF_OTR_READ		0x8000
#define FIBF_OTR_WRITE		0x4000
#define FIBF_OTR_EXECUTE	0x2000
#define FIBF_OTR_DELETE		0x1000
#define FIBF_GRP_READ		0x0800
#define FIBF_GRP_WRITE		0x0400
#define FIBF_GRP_EXECUTE	0x0200
#define FIBF_GRP_DELETE		0x0100
#define FIBF_HIDDEN		0x0080
#define FIBF_SCRIPT		0x0040
#define FIBF_PURE		0x0020
#define FIBF_ARCHIVED		0x0010
#define FIBF_NOREAD		0x0008
#define FIBF_NOWRITE		0x0004
#define FIBF_NOEXECUTE		0x0002
#define FIBF_NODELETE		0x0001
#define FIBF_OWNER		0x000F
#define FIBF_MASK		0xEE0E
