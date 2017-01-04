#define __MSCAN_H__
#define MSCAN_RXFRM		0x80
#define MSCAN_RXACT		0x40
#define MSCAN_CSWAI		0x20
#define MSCAN_SYNCH		0x10
#define MSCAN_TIME		0x08
#define MSCAN_WUPE		0x04
#define MSCAN_SLPRQ		0x02
#define MSCAN_INITRQ		0x01
#define MSCAN_CANE		0x80
#define MSCAN_CLKSRC		0x40
#define MSCAN_LOOPB		0x20
#define MSCAN_LISTEN		0x10
#define MSCAN_BORM		0x08
#define MSCAN_WUPM		0x04
#define MSCAN_SLPAK		0x02
#define MSCAN_INITAK		0x01
#define MSCAN_FOR_MPC5XXX
#define MSCAN_CLKSRC_BUS	0
#define MSCAN_CLKSRC_XTAL	MSCAN_CLKSRC
#define MSCAN_CLKSRC_IPS	MSCAN_CLKSRC
#define MSCAN_CLKSRC_BUS	MSCAN_CLKSRC
#define MSCAN_CLKSRC_XTAL	0
#define MSCAN_WUPIF		0x80
#define MSCAN_CSCIF		0x40
#define MSCAN_RSTAT1		0x20
#define MSCAN_RSTAT0		0x10
#define MSCAN_TSTAT1		0x08
#define MSCAN_TSTAT0		0x04
#define MSCAN_OVRIF		0x02
#define MSCAN_RXF		0x01
#define MSCAN_ERR_IF 		(MSCAN_OVRIF | MSCAN_CSCIF)
#define MSCAN_RSTAT_MSK		(MSCAN_RSTAT1 | MSCAN_RSTAT0)
#define MSCAN_TSTAT_MSK		(MSCAN_TSTAT1 | MSCAN_TSTAT0)
#define MSCAN_STAT_MSK		(MSCAN_RSTAT_MSK | MSCAN_TSTAT_MSK)
#define MSCAN_STATE_BUS_OFF	(MSCAN_RSTAT1 | MSCAN_RSTAT0 | \
MSCAN_TSTAT1 | MSCAN_TSTAT0)
#define MSCAN_STATE_TX(canrflg)	(((canrflg)&MSCAN_TSTAT_MSK)>>2)
#define MSCAN_STATE_RX(canrflg)	(((canrflg)&MSCAN_RSTAT_MSK)>>4)
#define MSCAN_STATE_ACTIVE	0
#define MSCAN_STATE_WARNING	1
#define MSCAN_STATE_PASSIVE	2
#define MSCAN_STATE_BUSOFF	3
#define MSCAN_WUPIE		0x80
#define MSCAN_CSCIE		0x40
#define MSCAN_RSTATE1		0x20
#define MSCAN_RSTATE0		0x10
#define MSCAN_TSTATE1		0x08
#define MSCAN_TSTATE0		0x04
#define MSCAN_OVRIE		0x02
#define MSCAN_RXFIE		0x01
#define MSCAN_TXE2		0x04
#define MSCAN_TXE1		0x02
#define MSCAN_TXE0		0x01
#define MSCAN_TXE		(MSCAN_TXE2 | MSCAN_TXE1 | MSCAN_TXE0)
#define MSCAN_TXIE2		0x04
#define MSCAN_TXIE1		0x02
#define MSCAN_TXIE0		0x01
#define MSCAN_TXIE		(MSCAN_TXIE2 | MSCAN_TXIE1 | MSCAN_TXIE0)
#define MSCAN_ABTRQ2		0x04
#define MSCAN_ABTRQ1		0x02
#define MSCAN_ABTRQ0		0x01
#define MSCAN_ABTAK2		0x04
#define MSCAN_ABTAK1		0x02
#define MSCAN_ABTAK0		0x01
#define MSCAN_TX2		0x04
#define MSCAN_TX1		0x02
#define MSCAN_TX0		0x01
#define MSCAN_IDAM1		0x20
#define MSCAN_IDAM0		0x10
#define MSCAN_IDHIT2		0x04
#define MSCAN_IDHIT1		0x02
#define MSCAN_IDHIT0		0x01
#define MSCAN_AF_32BIT		0x00
#define MSCAN_AF_16BIT		MSCAN_IDAM0
#define MSCAN_AF_8BIT		MSCAN_IDAM1
#define MSCAN_AF_CLOSED		(MSCAN_IDAM0|MSCAN_IDAM1)
#define MSCAN_AF_MASK		(~(MSCAN_IDAM0|MSCAN_IDAM1))
#define MSCAN_BOHOLD		0x01
#define MSCAN_SFF_RTR_SHIFT	4
#define MSCAN_EFF_RTR_SHIFT	0
#define MSCAN_EFF_FLAGS		0x18
#define _MSCAN_RESERVED_(n, num) u8 _res##n[num]
#define _MSCAN_RESERVED_DSR_SIZE	2
#define _MSCAN_RESERVED_(n, num)
#define _MSCAN_RESERVED_DSR_SIZE	0
struct mscan_regs  __packed;
#undef _MSCAN_RESERVED_
#define MSCAN_REGION 	sizeof(struct mscan)
#define MSCAN_NORMAL_MODE	0
#define MSCAN_SLEEP_MODE	MSCAN_SLPRQ
#define MSCAN_INIT_MODE		(MSCAN_INITRQ | MSCAN_SLPRQ)
#define MSCAN_POWEROFF_MODE	(MSCAN_CSWAI | MSCAN_SLPRQ)
#define MSCAN_SET_MODE_RETRIES	255
#define MSCAN_ECHO_SKB_MAX	3
#define MSCAN_RX_INTS_ENABLE	(MSCAN_OVRIE | MSCAN_RXFIE | MSCAN_CSCIE | \
MSCAN_RSTATE1 | MSCAN_RSTATE0 | \
MSCAN_TSTATE1 | MSCAN_TSTATE0)
enum ;
#define BTR0_BRP_MASK		0x3f
#define BTR0_SJW_SHIFT		6
#define BTR0_SJW_MASK		(0x3 << BTR0_SJW_SHIFT)
#define BTR1_TSEG1_MASK 	0xf
#define BTR1_TSEG2_SHIFT	4
#define BTR1_TSEG2_MASK 	(0x7 << BTR1_TSEG2_SHIFT)
#define BTR1_SAM_SHIFT  	7
#define BTR0_SET_BRP(brp)	(((brp) - 1) & BTR0_BRP_MASK)
#define BTR0_SET_SJW(sjw)	((((sjw) - 1) << BTR0_SJW_SHIFT) & \
BTR0_SJW_MASK)
#define BTR1_SET_TSEG1(tseg1)	(((tseg1) - 1) &  BTR1_TSEG1_MASK)
#define BTR1_SET_TSEG2(tseg2)	((((tseg2) - 1) << BTR1_TSEG2_SHIFT) & \
BTR1_TSEG2_MASK)
#define BTR1_SET_SAM(sam)	((sam) ? 1 << BTR1_SAM_SHIFT : 0)
#define F_RX_PROGRESS	0
#define F_TX_PROGRESS	1
#define F_TX_WAIT_ALL	2
#define TX_QUEUE_SIZE	3
struct tx_queue_entry ;
struct mscan_priv ;
extern struct net_device *alloc_mscandev(void);
extern int register_mscandev(struct net_device *dev, int mscan_clksrc);
extern void unregister_mscandev(struct net_device *dev);
