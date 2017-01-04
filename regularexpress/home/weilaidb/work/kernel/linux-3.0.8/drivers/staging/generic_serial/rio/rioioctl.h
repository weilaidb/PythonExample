#define	__rioioctl_h__
struct portStats ;
#define	RIOC	('R'<<8)|('i'<<16)|('o'<<24)
#define	RIO_QUICK_CHECK	  	(RIOC | 105)
#define RIO_GATHER_PORT_STATS	(RIOC | 193)
#define RIO_RESET_PORT_STATS	(RIOC | 194)
#define RIO_GET_PORT_STATS	(RIOC | 195)
