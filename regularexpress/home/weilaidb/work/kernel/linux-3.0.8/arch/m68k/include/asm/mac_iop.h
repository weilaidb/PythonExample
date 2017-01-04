#define SCC_IOP_BASE_IIFX	(0x50F04000)
#define ISM_IOP_BASE_IIFX	(0x50F12000)
#define SCC_IOP_BASE_QUADRA	(0x50F0C000)
#define ISM_IOP_BASE_QUADRA	(0x50F1E000)
#define	IOP_BYPASS	0x01
#define	IOP_AUTOINC	0x02
#define	IOP_RUN		0x04
#define	IOP_IRQ		0x08
#define	IOP_INT0	0x10
#define	IOP_INT1	0x20
#define	IOP_HWINT	0x40
#define	IOP_DMAINACTIVE	0x80
#define NUM_IOPS	2
#define NUM_IOP_CHAN	7
#define NUM_IOP_MSGS	NUM_IOP_CHAN*8
#define IOP_MSG_LEN	32
#define IOP_NUM_SCC	0
#define IOP_NUM_ISM	1
#define IOP_MSG_IDLE		0
#define IOP_MSG_NEW		1
#define IOP_MSG_RCVD		2
#define IOP_MSG_COMPLETE	3
#define IOP_MSGSTATUS_UNUSED	0
#define IOP_MSGSTATUS_WAITING	1
#define IOP_MSGSTATUS_SENT	2
#define IOP_MSGSTATUS_COMPLETE	3
#define IOP_MSGSTATUS_UNSOL	6
#define IOP_ADDR_MAX_SEND_CHAN	0x0200
#define IOP_ADDR_SEND_STATE	0x0201
#define IOP_ADDR_PATCH_CTRL	0x021F
#define IOP_ADDR_SEND_MSG	0x0220
#define IOP_ADDR_MAX_RECV_CHAN	0x0300
#define IOP_ADDR_RECV_STATE	0x0301
#define IOP_ADDR_ALIVE		0x031F
#define IOP_ADDR_RECV_MSG	0x0320
struct mac_iop ;
struct iop_msg ;
extern int iop_scc_present,iop_ism_present;
extern int iop_listen(uint, uint,
void (*handler)(struct iop_msg *),
const char *);
extern int iop_send_message(uint, uint, void *, uint, __u8 *,
void (*)(struct iop_msg *));
extern void iop_complete_message(struct iop_msg *);
extern void iop_upload_code(uint, __u8 *, uint, __u16);
extern void iop_download_code(uint, __u8 *, uint, __u16);
extern __u8 *iop_compare_code(uint, __u8 *, uint, __u16);
