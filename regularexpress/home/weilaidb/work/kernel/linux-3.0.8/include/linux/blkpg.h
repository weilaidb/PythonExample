#define _LINUX_BLKPG_H
#define BLKPG      _IO(0x12,105)
struct blkpg_ioctl_arg ;
#define BLKPG_ADD_PARTITION	1
#define BLKPG_DEL_PARTITION	2
#define BLKPG_DEVNAMELTH	64
#define BLKPG_VOLNAMELTH	64
struct blkpg_partition ;
