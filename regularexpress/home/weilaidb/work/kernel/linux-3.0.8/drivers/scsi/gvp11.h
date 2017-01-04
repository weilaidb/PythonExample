#define CMD_PER_LUN		2
#define CAN_QUEUE		16
#define GVP11_XFER_MASK		(0xff000001)
struct gvp11_scsiregs ;
#define GVP11_DMAC_BUSY		(1<<0)
#define GVP11_DMAC_INT_PENDING	(1<<1)
#define GVP11_DMAC_INT_ENABLE	(1<<3)
#define GVP11_DMAC_DIR_WRITE	(1<<4)
