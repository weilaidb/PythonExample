#define TARGETOS_H
#define PCI_VENDOR_ID_SK		0x1148
#define PCI_DEVICE_ID_SK_FP		0x4000
#define FDDI_MAC_HDR_LEN 13
#define FDDI_RII	0x01
#define FDDI_RCF_DIR_BIT 0x80
#define FDDI_RCF_LEN_MASK 0x1f
#define FDDI_RCF_BROADCAST 0x8000
#define FDDI_RCF_LIMITED_BROADCAST 0xA000
#define FDDI_RCF_FRAME2K 0x20
#define FDDI_RCF_FRAME4K 0x30
#undef ADDR
#undef ADDR
#define	ADDR(a) (smc->hw.iop+(a))
#define	ADDR(a) (((a)>>7) ? (outp(smc->hw.iop+B0_RAP,(a)>>7), (smc->hw.iop+( ((a)&0x7F) | ((a)>>7 ? 0x80:0)) )) : (smc->hw.iop+(((a)&0x7F)|((a)>>7 ? 0x80:0))))
#define TRUE  1
#define FALSE 0
#define FDDI_TRACE(string, arg1, arg2, arg3)
#define NDD_TRACE(string, arg1, arg2, arg3)
#define SMT_PAGESIZE	PAGE_SIZE
#define	TICKS_PER_SECOND	HZ
#define SMC_VERSION    		1
#define NO_ADDRESS 0xffe0
#define SKFP_MAX_NUM_BOARDS 8
#define SK_BUS_TYPE_PCI		0
#define SK_BUS_TYPE_EISA	1
#define FP_IO_LEN		256
#define u8	unsigned char
#define u16	unsigned short
#define u32	unsigned int
#define MAX_TX_QUEUE_LEN	20
#define MAX_FRAME_SIZE		4550
#define	RX_LOW_WATERMARK	NUM_RECEIVE_BUFFERS  / 2
#define TX_LOW_WATERMARK	NUM_TRANSMIT_BUFFERS - 2
#define	SKFPIOCTL	SIOCDEVPRIVATE
struct s_skfp_ioctl ;
#define SKFP_GET_STATS		0x05
#define SKFP_CLR_STATS		0x06
struct s_smt_os ;
typedef struct s_smt_os skfddi_priv;
