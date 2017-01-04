#define _LINUX_NTFS_LAYOUT_H
#define magicNTFS	cpu_to_le64(0x202020205346544eULL)
typedef struct  __attribute__ ((__packed__)) BIOS_PARAMETER_BLOCK;
typedef struct  __attribute__ ((__packed__)) NTFS_BOOT_SECTOR;
enum ;
typedef le32 NTFS_RECORD_TYPE;
static inline bool __ntfs_is_magic(le32 x, NTFS_RECORD_TYPE r)
#define ntfs_is_magic(x, m)	__ntfs_is_magic(x, magic_##m)
static inline bool __ntfs_is_magicp(le32 *p, NTFS_RECORD_TYPE r)
#define ntfs_is_magicp(p, m)	__ntfs_is_magicp(p, magic_##m)
#define ntfs_is_file_record(x)		( ntfs_is_magic (x, FILE) )
#define ntfs_is_file_recordp(p)		( ntfs_is_magicp(p, FILE) )
#define ntfs_is_mft_record(x)		( ntfs_is_file_record (x) )
#define ntfs_is_mft_recordp(p)		( ntfs_is_file_recordp(p) )
#define ntfs_is_indx_record(x)		( ntfs_is_magic (x, INDX) )
#define ntfs_is_indx_recordp(p)		( ntfs_is_magicp(p, INDX) )
#define ntfs_is_hole_record(x)		( ntfs_is_magic (x, HOLE) )
#define ntfs_is_hole_recordp(p)		( ntfs_is_magicp(p, HOLE) )
#define ntfs_is_rstr_record(x)		( ntfs_is_magic (x, RSTR) )
#define ntfs_is_rstr_recordp(p)		( ntfs_is_magicp(p, RSTR) )
#define ntfs_is_rcrd_record(x)		( ntfs_is_magic (x, RCRD) )
#define ntfs_is_rcrd_recordp(p)		( ntfs_is_magicp(p, RCRD) )
#define ntfs_is_chkd_record(x)		( ntfs_is_magic (x, CHKD) )
#define ntfs_is_chkd_recordp(p)		( ntfs_is_magicp(p, CHKD) )
#define ntfs_is_baad_record(x)		( ntfs_is_magic (x, BAAD) )
#define ntfs_is_baad_recordp(p)		( ntfs_is_magicp(p, BAAD) )
#define ntfs_is_empty_record(x)		( ntfs_is_magic (x, empty) )
#define ntfs_is_empty_recordp(p)	( ntfs_is_magicp(p, empty) )
typedef struct  __attribute__ ((__packed__)) NTFS_RECORD;
typedef enum  NTFS_SYSTEM_FILES;
enum  __attribute__ ((__packed__));
typedef le16 MFT_RECORD_FLAGS;
#define MFT_REF_MASK_CPU 0x0000ffffffffffffULL
#define MFT_REF_MASK_LE cpu_to_le64(MFT_REF_MASK_CPU)
typedef u64 MFT_REF;
typedef le64 leMFT_REF;
#define MK_MREF(m, s)	((MFT_REF)(((MFT_REF)(s) << 48) |		\
((MFT_REF)(m) & MFT_REF_MASK_CPU)))
#define MK_LE_MREF(m, s) cpu_to_le64(MK_MREF(m, s))
#define MREF(x)		((unsigned long)((x) & MFT_REF_MASK_CPU))
#define MSEQNO(x)	((u16)(((x) >> 48) & 0xffff))
#define MREF_LE(x)	((unsigned long)(le64_to_cpu(x) & MFT_REF_MASK_CPU))
#define MSEQNO_LE(x)	((u16)((le64_to_cpu(x) >> 48) & 0xffff))
#define IS_ERR_MREF(x)	(((x) & 0x0000800000000000ULL) ? true : false)
#define ERR_MREF(x)	((u64)((s64)(x)))
#define MREF_ERR(x)	((int)((s64)(x)))
typedef struct  __attribute__ ((__packed__)) MFT_RECORD;
typedef struct  __attribute__ ((__packed__)) MFT_RECORD_OLD;
enum ;
typedef le32 ATTR_TYPE;
enum ;
typedef le32 COLLATION_RULE;
enum ;
typedef le32 ATTR_DEF_FLAGS;
typedef struct  __attribute__ ((__packed__)) ATTR_DEF;
enum  __attribute__ ((__packed__));
typedef le16 ATTR_FLAGS;
enum  __attribute__ ((__packed__));
typedef u8 RESIDENT_ATTR_FLAGS;
typedef struct  __attribute__ ((__packed__)) ATTR_RECORD;
typedef ATTR_RECORD ATTR_REC;
enum ;
typedef le32 FILE_ATTR_FLAGS;
typedef struct  __attribute__ ((__packed__)) STANDARD_INFORMATION;
typedef struct  __attribute__ ((__packed__)) ATTR_LIST_ENTRY;
#define MAXIMUM_FILE_NAME_LENGTH	255
enum  __attribute__ ((__packed__));
typedef u8 FILE_NAME_TYPE_FLAGS;
typedef struct  __attribute__ ((__packed__)) FILE_NAME_ATTR;
typedef struct  __attribute__ ((__packed__)) GUID;
typedef struct  __attribute__ ((__packed__)) OBJ_ID_INDEX_DATA;
typedef struct  __attribute__ ((__packed__)) OBJECT_ID_ATTR;
typedef enum  RELATIVE_IDENTIFIERS;
typedef union  __attribute__ ((__packed__)) SID_IDENTIFIER_AUTHORITY;
typedef struct  __attribute__ ((__packed__)) SID;
typedef enum  SID_CONSTANTS;
enum  __attribute__ ((__packed__));
typedef u8 ACE_TYPES;
enum  __attribute__ ((__packed__));
typedef u8 ACE_FLAGS;
typedef struct  __attribute__ ((__packed__)) ACE_HEADER;
enum ;
typedef le32 ACCESS_MASK;
typedef struct  __attribute__ ((__packed__)) GENERIC_MAPPING;
typedef struct  __attribute__ ((__packed__)) ACCESS_ALLOWED_ACE, ACCESS_DENIED_ACE,
SYSTEM_AUDIT_ACE, SYSTEM_ALARM_ACE;
enum ;
typedef le32 OBJECT_ACE_FLAGS;
typedef struct  __attribute__ ((__packed__)) ACCESS_ALLOWED_OBJECT_ACE,
ACCESS_DENIED_OBJECT_ACE,
SYSTEM_AUDIT_OBJECT_ACE,
SYSTEM_ALARM_OBJECT_ACE;
typedef struct  __attribute__ ((__packed__)) ACL;
typedef enum  ACL_CONSTANTS;
enum  __attribute__ ((__packed__));
typedef le16 SECURITY_DESCRIPTOR_CONTROL;
typedef struct  __attribute__ ((__packed__)) SECURITY_DESCRIPTOR_RELATIVE;
typedef struct  __attribute__ ((__packed__)) SECURITY_DESCRIPTOR;
typedef enum  SECURITY_DESCRIPTOR_CONSTANTS;
typedef SECURITY_DESCRIPTOR_RELATIVE SECURITY_DESCRIPTOR_ATTR;
typedef struct  __attribute__ ((__packed__)) SECURITY_DESCRIPTOR_HEADER;
typedef struct  __attribute__ ((__packed__)) SDS_ENTRY;
typedef struct  __attribute__ ((__packed__)) SII_INDEX_KEY;
typedef struct  __attribute__ ((__packed__)) SDH_INDEX_KEY;
typedef struct  __attribute__ ((__packed__)) VOLUME_NAME;
enum  __attribute__ ((__packed__));
typedef le16 VOLUME_FLAGS;
typedef struct  __attribute__ ((__packed__)) VOLUME_INFORMATION;
typedef struct  __attribute__ ((__packed__)) DATA_ATTR;
enum  __attribute__ ((__packed__));
typedef u8 INDEX_HEADER_FLAGS;
typedef struct  __attribute__ ((__packed__)) INDEX_HEADER;
typedef struct  __attribute__ ((__packed__)) INDEX_ROOT;
typedef struct  __attribute__ ((__packed__)) INDEX_BLOCK;
typedef INDEX_BLOCK INDEX_ALLOCATION;
typedef struct  __attribute__ ((__packed__)) REPARSE_INDEX_KEY;
enum ;
typedef le32 QUOTA_FLAGS;
typedef struct  __attribute__ ((__packed__)) QUOTA_CONTROL_ENTRY;
enum ;
typedef enum  QUOTA_CONTROL_ENTRY_CONSTANTS;
enum  __attribute__ ((__packed__));
typedef le16 INDEX_ENTRY_FLAGS;
typedef struct  __attribute__ ((__packed__)) INDEX_ENTRY_HEADER;
typedef struct  __attribute__ ((__packed__)) INDEX_ENTRY;
typedef struct  __attribute__ ((__packed__)) BITMAP_ATTR;
enum ;
typedef struct  __attribute__ ((__packed__)) REPARSE_POINT;
typedef struct  __attribute__ ((__packed__)) EA_INFORMATION;
enum  __attribute__ ((__packed__));
typedef u8 EA_FLAGS;
typedef struct  __attribute__ ((__packed__)) EA_ATTR;
typedef struct  __attribute__ ((__packed__)) PROPERTY_SET;
typedef struct  __attribute__ ((__packed__)) LOGGED_UTILITY_STREAM, EFS_ATTR;
