#define CHNLDEFS_
#define CHNL_PICKFREE       (~0UL)
#define CHNL_MODETODSP		0
#define CHNL_MODEFROMDSP	1
#define CHNL_IOCINFINITE     0xffffffff
#define CHNL_IOCNOWAIT       0x0
#define CHNL_IOCSTATCOMPLETE 0x0000
#define CHNL_IOCSTATCANCEL   0x0002
#define CHNL_IOCSTATTIMEOUT  0x0008
#define CHNL_IOCSTATEOS      0x8000
#define CHNL_IS_IO_COMPLETE(ioc)  (!(ioc.status & ~CHNL_IOCSTATEOS))
#define CHNL_IS_IO_CANCELLED(ioc) (ioc.status & CHNL_IOCSTATCANCEL)
#define CHNL_IS_TIMED_OUT(ioc)    (ioc.status & CHNL_IOCSTATTIMEOUT)
struct chnl_attr ;
struct chnl_ioc ;
