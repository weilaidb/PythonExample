#define _LINUX_SYSV_FS_H
#define __packed2__	__attribute__((packed, aligned(2)))
typedef u16 __fs16;
typedef u32 __fs16;
typedef __fs16 sysv_ino_t;
typedef __fs32 sysv_zone_t;
#define SYSV_BADBL_INO	1
#define SYSV_ROOT_INO	2
#define XENIX_NICINOD	100
#define XENIX_NICFREE	100
struct xenix_super_block ;
#define SYSV_NICINOD	100
#define SYSV_NICFREE	50
struct sysv4_super_block ;
struct sysv2_super_block ;
#define V7_NICINOD     100
#define V7_NICFREE     50
struct v7_super_block ;
#define V7_NFILES	1024
#define V7_MAXSIZE	0x00ffffff
#define COH_NICINOD	100
#define COH_NICFREE	64
struct coh_super_block ;
struct sysv_inode ;
#define SYSV_NAMELEN	14
struct sysv_dir_entry ;
#define SYSV_DIRSIZE	sizeof(struct sysv_dir_entry)
