#define _RAID10_H
typedef struct mirror_info mirror_info_t;
struct mirror_info ;
typedef struct r10bio_s r10bio_t;
struct r10_private_data_s ;
typedef struct r10_private_data_s conf_t;
struct r10bio_s ;
#define IO_BLOCKED ((struct bio*)1)
#define	R10BIO_Uptodate	0
#define	R10BIO_IsSync	1
#define	R10BIO_IsRecover 2
#define	R10BIO_Degraded 3
