#define CPQARRAY_H
#define IO_OK		0
#define IO_ERROR	1
#define NWD		16
#define NWD_SHIFT	4
#define IDA_TIMER	(5*HZ)
#define IDA_TIMEOUT	(10*HZ)
#define MISC_NONFATAL_WARN	0x01
typedef struct  drv_info_t;
struct ctlr_info;
typedef struct ctlr_info ctlr_info_t;
struct access_method ;
struct board_type ;
struct ctlr_info ;
#define IDA_LOCK(i)	(&hba[i]->lock)
