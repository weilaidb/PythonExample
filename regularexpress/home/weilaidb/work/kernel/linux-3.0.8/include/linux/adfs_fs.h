#define _ADFS_FS_H
struct adfs_discrecord ;
#define ADFS_DISCRECORD		(0xc00)
#define ADFS_DR_OFFSET		(0x1c0)
#define ADFS_DR_SIZE		 60
#define ADFS_DR_SIZE_BITS	(ADFS_DR_SIZE << 3)
static inline int adfs_checkbblk(unsigned char *ptr)
