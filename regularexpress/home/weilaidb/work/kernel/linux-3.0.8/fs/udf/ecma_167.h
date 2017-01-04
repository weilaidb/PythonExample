#define _ECMA_167_H 1
struct charspec  __attribute__ ((packed));
#define CHARSPEC_TYPE_CS0		0x00
#define CHARSPEC_TYPE_CS1		0x01
#define CHARSPEC_TYPE_CS2		0x02
#define CHARSPEC_TYPE_CS3		0x03
#define CHARSPEC_TYPE_CS4		0x04
#define CHARSPEC_TYPE_CS5		0x05
#define CHARSPEC_TYPE_CS6		0x06
#define CHARSPEC_TYPE_CS7		0x07
#define CHARSPEC_TYPE_CS8		0x08
typedef uint8_t		dstring;
struct timestamp  __attribute__ ((packed));
#define TIMESTAMP_TYPE_MASK		0xF000
#define TIMESTAMP_TYPE_CUT		0x0000
#define TIMESTAMP_TYPE_LOCAL		0x1000
#define TIMESTAMP_TYPE_AGREEMENT	0x2000
#define TIMESTAMP_TIMEZONE_MASK		0x0FFF
struct regid  __attribute__ ((packed));
#define ENTITYID_FLAGS_DIRTY		0x00
#define ENTITYID_FLAGS_PROTECTED	0x01
#define VSD_STD_ID_LEN			5
struct volStructDesc  __attribute__ ((packed));
#define VSD_STD_ID_NSR02		"NSR02"
#define VSD_STD_ID_BEA01		"BEA01"
#define VSD_STD_ID_BOOT2		"BOOT2"
#define VSD_STD_ID_CD001		"CD001"
#define VSD_STD_ID_CDW02		"CDW02"
#define VSD_STD_ID_NSR03		"NSR03"
#define VSD_STD_ID_TEA01		"TEA01"
struct beginningExtendedAreaDesc  __attribute__ ((packed));
struct terminatingExtendedAreaDesc  __attribute__ ((packed));
struct bootDesc  __attribute__ ((packed));
#define BOOT_FLAGS_ERASE		0x01
struct extent_ad  __attribute__ ((packed));
struct kernel_extent_ad ;
struct tag  __attribute__ ((packed));
#define TAG_IDENT_PVD			0x0001
#define TAG_IDENT_AVDP			0x0002
#define TAG_IDENT_VDP			0x0003
#define TAG_IDENT_IUVD			0x0004
#define TAG_IDENT_PD			0x0005
#define TAG_IDENT_LVD			0x0006
#define TAG_IDENT_USD			0x0007
#define TAG_IDENT_TD			0x0008
#define TAG_IDENT_LVID			0x0009
struct NSRDesc  __attribute__ ((packed));
struct primaryVolDesc  __attribute__ ((packed));
#define PVD_FLAGS_VSID_COMMON		0x0001
struct anchorVolDescPtr  __attribute__ ((packed));
struct volDescPtr  __attribute__ ((packed));
struct impUseVolDesc  __attribute__ ((packed));
struct partitionDesc  __attribute__ ((packed));
#define PD_PARTITION_FLAGS_ALLOC	0x0001
#define PD_PARTITION_CONTENTS_NSR02	"+NSR02"
#define PD_PARTITION_CONTENTS_FDC01	"+FDC01"
#define PD_PARTITION_CONTENTS_CD001	"+CD001"
#define PD_PARTITION_CONTENTS_CDW02	"+CDW02"
#define PD_PARTITION_CONTENTS_NSR03	"+NSR03"
#define PD_ACCESS_TYPE_NONE		0x00000000
#define PD_ACCESS_TYPE_READ_ONLY	0x00000001
#define PD_ACCESS_TYPE_WRITE_ONCE	0x00000002
#define PD_ACCESS_TYPE_REWRITABLE	0x00000003
#define PD_ACCESS_TYPE_OVERWRITABLE	0x00000004
struct logicalVolDesc  __attribute__ ((packed));
struct genericPartitionMap  __attribute__ ((packed));
#define GP_PARTITION_MAP_TYPE_UNDEF	0x00
#define GP_PARTIITON_MAP_TYPE_1		0x01
#define GP_PARTITION_MAP_TYPE_2		0x02
struct genericPartitionMap1  __attribute__ ((packed));
struct genericPartitionMap2  __attribute__ ((packed));
struct unallocSpaceDesc  __attribute__ ((packed));
struct terminatingDesc  __attribute__ ((packed));
struct logicalVolIntegrityDesc  __attribute__ ((packed));
#define LVID_INTEGRITY_TYPE_OPEN	0x00000000
#define LVID_INTEGRITY_TYPE_CLOSE	0x00000001
struct lb_addr  __attribute__ ((packed));
struct kernel_lb_addr ;
struct short_ad  __attribute__ ((packed));
struct long_ad  __attribute__ ((packed));
struct kernel_long_ad ;
struct ext_ad  __attribute__ ((packed));
struct kernel_ext_ad ;
#define TAG_IDENT_FSD			0x0100
#define TAG_IDENT_FID			0x0101
#define TAG_IDENT_AED			0x0102
#define TAG_IDENT_IE			0x0103
#define TAG_IDENT_TE			0x0104
#define TAG_IDENT_FE			0x0105
#define TAG_IDENT_EAHD			0x0106
#define TAG_IDENT_USE			0x0107
#define TAG_IDENT_SBD			0x0108
#define TAG_IDENT_PIE			0x0109
#define TAG_IDENT_EFE			0x010A
struct fileSetDesc  __attribute__ ((packed));
struct partitionHeaderDesc  __attribute__ ((packed));
struct fileIdentDesc  __attribute__ ((packed));
#define FID_FILE_CHAR_HIDDEN		0x01
#define FID_FILE_CHAR_DIRECTORY		0x02
#define FID_FILE_CHAR_DELETED		0x04
#define FID_FILE_CHAR_PARENT		0x08
#define FID_FILE_CHAR_METADATA		0x10
struct allocExtDesc  __attribute__ ((packed));
struct icbtag  __attribute__ ((packed));
#define ICBTAG_STRATEGY_TYPE_UNDEF	0x0000
#define ICBTAG_STRATEGY_TYPE_1		0x0001
#define ICBTAG_STRATEGY_TYPE_2		0x0002
#define ICBTAG_STRATEGY_TYPE_3		0x0003
#define ICBTAG_STRATEGY_TYPE_4		0x0004
#define ICBTAG_FILE_TYPE_UNDEF		0x00
#define ICBTAG_FILE_TYPE_USE		0x01
#define ICBTAG_FILE_TYPE_PIE		0x02
#define ICBTAG_FILE_TYPE_IE		0x03
#define ICBTAG_FILE_TYPE_DIRECTORY	0x04
#define ICBTAG_FILE_TYPE_REGULAR	0x05
#define ICBTAG_FILE_TYPE_BLOCK		0x06
#define ICBTAG_FILE_TYPE_CHAR		0x07
#define ICBTAG_FILE_TYPE_EA		0x08
#define ICBTAG_FILE_TYPE_FIFO		0x09
#define ICBTAG_FILE_TYPE_SOCKET		0x0A
#define ICBTAG_FILE_TYPE_TE		0x0B
#define ICBTAG_FILE_TYPE_SYMLINK	0x0C
#define ICBTAG_FILE_TYPE_STREAMDIR	0x0D
#define ICBTAG_FLAG_AD_MASK		0x0007
#define ICBTAG_FLAG_AD_SHORT		0x0000
#define ICBTAG_FLAG_AD_LONG		0x0001
#define ICBTAG_FLAG_AD_EXTENDED		0x0002
#define ICBTAG_FLAG_AD_IN_ICB		0x0003
#define ICBTAG_FLAG_SORTED		0x0008
#define ICBTAG_FLAG_NONRELOCATABLE	0x0010
#define ICBTAG_FLAG_ARCHIVE		0x0020
#define ICBTAG_FLAG_SETUID		0x0040
#define ICBTAG_FLAG_SETGID		0x0080
#define ICBTAG_FLAG_STICKY		0x0100
#define ICBTAG_FLAG_CONTIGUOUS		0x0200
#define ICBTAG_FLAG_SYSTEM		0x0400
#define ICBTAG_FLAG_TRANSFORMED		0x0800
#define ICBTAG_FLAG_MULTIVERSIONS	0x1000
#define ICBTAG_FLAG_STREAM		0x2000
struct indirectEntry  __attribute__ ((packed));
struct terminalEntry  __attribute__ ((packed));
struct fileEntry  __attribute__ ((packed));
#define FE_PERM_O_EXEC			0x00000001U
#define FE_PERM_O_WRITE			0x00000002U
#define FE_PERM_O_READ			0x00000004U
#define FE_PERM_O_CHATTR		0x00000008U
#define FE_PERM_O_DELETE		0x00000010U
#define FE_PERM_G_EXEC			0x00000020U
#define FE_PERM_G_WRITE			0x00000040U
#define FE_PERM_G_READ			0x00000080U
#define FE_PERM_G_CHATTR		0x00000100U
#define FE_PERM_G_DELETE		0x00000200U
#define FE_PERM_U_EXEC			0x00000400U
#define FE_PERM_U_WRITE			0x00000800U
#define FE_PERM_U_READ			0x00001000U
#define FE_PERM_U_CHATTR		0x00002000U
#define FE_PERM_U_DELETE		0x00004000U
#define FE_RECORD_FMT_UNDEF		0x00
#define FE_RECORD_FMT_FIXED_PAD		0x01
#define FE_RECORD_FMT_FIXED		0x02
#define FE_RECORD_FMT_VARIABLE8		0x03
#define FE_RECORD_FMT_VARIABLE16	0x04
#define FE_RECORD_FMT_VARIABLE16_MSB	0x05
#define FE_RECORD_FMT_VARIABLE32	0x06
#define FE_RECORD_FMT_PRINT		0x07
#define FE_RECORD_FMT_LF		0x08
#define FE_RECORD_FMT_CR		0x09
#define FE_RECORD_FMT_CRLF		0x0A
#define FE_RECORD_FMT_LFCR		0x0B
#define FE_RECORD_DISPLAY_ATTR_UNDEF	0x00
#define FE_RECORD_DISPLAY_ATTR_1	0x01
#define FE_RECORD_DISPLAY_ATTR_2	0x02
#define FE_RECORD_DISPLAY_ATTR_3	0x03
struct extendedAttrHeaderDesc  __attribute__ ((packed));
struct genericFormat  __attribute__ ((packed));
struct charSetInfo  __attribute__ ((packed));
struct altPerms  __attribute__ ((packed));
struct fileTimesExtAttr  __attribute__ ((packed));
#define FTE_CREATION			0x00000001
#define FTE_DELETION			0x00000004
#define FTE_EFFECTIVE			0x00000008
#define FTE_BACKUP			0x00000002
struct infoTimesExtAttr  __attribute__ ((packed));
struct deviceSpec  __attribute__ ((packed));
struct impUseExtAttr  __attribute__ ((packed));
struct appUseExtAttr  __attribute__ ((packed));
#define EXTATTR_CHAR_SET		1
#define EXTATTR_ALT_PERMS		3
#define EXTATTR_FILE_TIMES		5
#define EXTATTR_INFO_TIMES		6
#define EXTATTR_DEV_SPEC		12
#define EXTATTR_IMP_USE			2048
#define EXTATTR_APP_USE			65536
struct unallocSpaceEntry  __attribute__ ((packed));
struct spaceBitmapDesc  __attribute__ ((packed));
struct partitionIntegrityEntry  __attribute__ ((packed));
#define EXT_RECORDED_ALLOCATED		0x00000000
#define EXT_NOT_RECORDED_ALLOCATED	0x40000000
#define EXT_NOT_RECORDED_NOT_ALLOCATED	0x80000000
#define EXT_NEXT_EXTENT_ALLOCDECS	0xC0000000
struct logicalVolHeaderDesc  __attribute__ ((packed));
struct pathComponent  __attribute__ ((packed));
struct extendedFileEntry  __attribute__ ((packed));
