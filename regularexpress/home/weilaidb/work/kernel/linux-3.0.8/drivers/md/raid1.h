#define _RAID1_H
typedef struct mirror_info mirror_info_t;
struct mirror_info ;
struct pool_info ;
typedef struct r1bio_s r1bio_t;
struct r1_private_data_s ;
typedef struct r1_private_data_s conf_t;
struct r1bio_s ;
#define IO_BLOCKED ((struct bio*)1)
#define	R1BIO_Uptodate	0
#define	R1BIO_IsSync	1
#define	R1BIO_Degraded	2
#define	R1BIO_BehindIO	3
#define	R1BIO_Returned 6
extern int md_raid1_congested(mddev_t *mddev, int bits);
