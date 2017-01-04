#define _LINUX_NTFS_TYPES_H
typedef __le16 le16;
typedef __le32 le32;
typedef __le64 le64;
typedef __u16 __bitwise sle16;
typedef __u32 __bitwise sle32;
typedef __u64 __bitwise sle64;
typedef le16 ntfschar;
#define UCHAR_T_SIZE_BITS 1
typedef s64 VCN;
typedef sle64 leVCN;
typedef s64 LCN;
typedef sle64 leLCN;
typedef s64 LSN;
typedef sle64 leLSN;
typedef s64 USN;
typedef sle64 leUSN;
typedef enum  IGNORE_CASE_BOOL;
