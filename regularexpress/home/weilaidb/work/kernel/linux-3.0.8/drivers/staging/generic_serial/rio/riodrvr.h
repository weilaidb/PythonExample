#define __riodrvr_h
#define MEMDUMP_SIZE	32
#define	MOD_DISABLE	(RIO_NOREAD|RIO_NOWRITE|RIO_NOXPRINT)
struct rio_info ;
#define debug(x)        printk x
#define debug(x)	kkprintf x
#define RIO_RESET_INT	0x7d80
