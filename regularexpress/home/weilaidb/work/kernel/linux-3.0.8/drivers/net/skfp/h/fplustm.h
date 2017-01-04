#define _FPLUS_
#define	HW_PTR	void __iomem *
struct err_st  ;
struct s_smt_fp_txd  ;
struct s_smt_fp_rxd  ;
union s_fp_descr  ;
struct s_smt_tx_queue  ;
struct s_smt_rx_queue  ;
#define VOID_FRAME_OFF		0x00
#define CLAIM_FRAME_OFF		0x08
#define BEACON_FRAME_OFF	0x10
#define DBEACON_FRAME_OFF	0x18
#define RX_FIFO_OFF		0x21
#define RBC_MEM_SIZE		0x8000
#define SEND_ASYNC_AS_SYNC	0x1
#define	SYNC_TRAFFIC_ON		0x2
#define	RX_FIFO_SPACE		0x4000 - RX_FIFO_OFF
#define	TX_FIFO_SPACE		0x4000
#define	TX_SMALL_FIFO		0x0900
#define	TX_MEDIUM_FIFO		TX_FIFO_SPACE / 2
#define	TX_LARGE_FIFO		TX_FIFO_SPACE - TX_SMALL_FIFO
#define	RX_SMALL_FIFO		0x0900
#define	RX_LARGE_FIFO		RX_FIFO_SPACE - RX_SMALL_FIFO
struct s_smt_fifo_conf  ;
#define FM_ADDRX	(FM_ADDET|FM_EXGPA0|FM_EXGPA1)
struct s_smt_fp  ;
#define RX_ENABLE_ALLMULTI	1
#define RX_DISABLE_ALLMULTI	2
#define RX_ENABLE_PROMISC	3
#define RX_DISABLE_PROMISC	4
#define RX_ENABLE_NSA		5
#define RX_DISABLE_NSA		6
#define MDR_REV
#define	AIX_REVERSE(x)		((((x)<<24L)&0xff000000L)	+	\
(((x)<< 8L)&0x00ff0000L)	+	\
(((x)>> 8L)&0x0000ff00L)	+	\
(((x)>>24L)&0x000000ffL))
#define	AIX_REVERSE(x)	(x)
#define	MDR_REVERSE(x)		((((x)<<24L)&0xff000000L)	+	\
(((x)<< 8L)&0x00ff0000L)	+	\
(((x)>> 8L)&0x0000ff00L)	+	\
(((x)>>24L)&0x000000ffL))
#define	MDR_REVERSE(x)	(x)
