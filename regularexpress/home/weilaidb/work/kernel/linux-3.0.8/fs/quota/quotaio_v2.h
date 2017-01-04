#define _LINUX_QUOTAIO_V2_H
#define V2_INITQMAGICS
#define V2_INITQVERSIONS
struct v2_disk_dqheader ;
struct v2r0_disk_dqblk ;
struct v2r1_disk_dqblk ;
struct v2_disk_dqinfo ;
#define V2_DQINFOOFF	sizeof(struct v2_disk_dqheader)
#define V2_DQBLKSIZE_BITS 10
