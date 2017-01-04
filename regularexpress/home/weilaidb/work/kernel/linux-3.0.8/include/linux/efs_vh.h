#define __EFS_VH_H__
#define VHMAGIC		0xbe5a941
#define NPARTAB		16
#define NVDIR		15
#define BFNAMESIZE	16
#define VDNAMESIZE	8
struct volume_directory ;
struct partition_table ;
struct volume_header ;
#define SGI_SYSV	0x05
#define SGI_EFS		0x07
#define IS_EFS(x)	(((x) == SGI_EFS) || ((x) == SGI_SYSV))
struct pt_types ;
