#define _LINUX_QUOTAIO_V1_H
#define MAX_IQ_TIME  604800
#define MAX_DQ_TIME  604800
struct v1_disk_dqblk ;
#define v1_dqoff(UID)      ((loff_t)((UID) * sizeof (struct v1_disk_dqblk)))
