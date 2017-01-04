#define _LINUX_NTFS_USNJRNL_H
#define UsnJrnlMajorVer		2
#define UsnJrnlMinorVer		0
typedef struct  __attribute__ ((__packed__)) USN_HEADER;
enum ;
typedef le32 USN_REASON_FLAGS;
enum ;
typedef le32 USN_SOURCE_INFO_FLAGS;
typedef struct  __attribute__ ((__packed__)) USN_RECORD;
extern bool ntfs_stamp_usnjrnl(ntfs_volume *vol);
