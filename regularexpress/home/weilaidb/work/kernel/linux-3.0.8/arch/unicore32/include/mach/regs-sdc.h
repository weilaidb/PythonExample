#define SDC_CCR		(PKUNITY_SDC_BASE + 0x0000)
#define SDC_SRR		(PKUNITY_SDC_BASE + 0x0004)
#define SDC_ARGUMENT	(PKUNITY_SDC_BASE + 0x0008)
#define SDC_COMMAND	(PKUNITY_SDC_BASE + 0x000C)
#define SDC_BLOCKSIZE	(PKUNITY_SDC_BASE + 0x0010)
#define SDC_BLOCKCOUNT	(PKUNITY_SDC_BASE + 0x0014)
#define SDC_TMR		(PKUNITY_SDC_BASE + 0x0018)
#define SDC_RES0	(PKUNITY_SDC_BASE + 0x001C)
#define SDC_RES1	(PKUNITY_SDC_BASE + 0x0020)
#define SDC_RES2	(PKUNITY_SDC_BASE + 0x0024)
#define SDC_RES3	(PKUNITY_SDC_BASE + 0x0028)
#define SDC_RTCR	(PKUNITY_SDC_BASE + 0x002C)
#define SDC_ISR		(PKUNITY_SDC_BASE + 0x0030)
#define SDC_ISMR	(PKUNITY_SDC_BASE + 0x0034)
#define SDC_RXFIFO	(PKUNITY_SDC_BASE + 0x0038)
#define SDC_TXFIFO	(PKUNITY_SDC_BASE + 0x003C)
#define SDC_CCR_CLKEN			FIELD(1, 1, 2)
#define SDC_CCR_PDIV(v)			FIELD((v), 8, 8)
#define SDC_SRR_ENABLE			FIELD(0, 1, 0)
#define SDC_SRR_DISABLE			FIELD(1, 1, 0)
#define SDC_COMMAND_RESTYPE_MASK	FMASK(2, 0)
#define SDC_COMMAND_RESTYPE_NONE	FIELD(0, 2, 0)
#define SDC_COMMAND_RESTYPE_LONG	FIELD(1, 2, 0)
#define SDC_COMMAND_RESTYPE_SHORT	FIELD(2, 2, 0)
#define SDC_COMMAND_RESTYPE_SHORTBUSY	FIELD(3, 2, 0)
#define SDC_COMMAND_DATAREADY		FIELD(1, 1, 2)
#define SDC_COMMAND_CMDEN		FIELD(1, 1, 3)
#define SDC_COMMAND_CMDINDEX(v)		FIELD((v), 6, 5)
#define SDC_BLOCKSIZE_BSMASK(v)		FIELD((v), 11, 0)
#define SDC_BLOCKCOUNT_BCMASK(v)	FIELD((v), 12, 0)
#define SDC_TMR_WTH_1BIT		FIELD(0, 1, 0)
#define SDC_TMR_WTH_4BIT		FIELD(1, 1, 0)
#define SDC_TMR_DIR_READ		FIELD(0, 1, 1)
#define SDC_TMR_DIR_WRITE		FIELD(1, 1, 1)
#define SDC_IR_MASK			FMASK(13, 0)
#define SDC_IR_RESTIMEOUT		FIELD(1, 1, 0)
#define SDC_IR_WRITECRC			FIELD(1, 1, 1)
#define SDC_IR_READCRC			FIELD(1, 1, 2)
#define SDC_IR_TXFIFOREAD		FIELD(1, 1, 3)
#define SDC_IR_RXFIFOWRITE		FIELD(1, 1, 4)
#define SDC_IR_READTIMEOUT		FIELD(1, 1, 5)
#define SDC_IR_DATACOMPLETE		FIELD(1, 1, 6)
#define SDC_IR_CMDCOMPLETE		FIELD(1, 1, 7)
#define SDC_IR_RXFIFOFULL		FIELD(1, 1, 8)
#define SDC_IR_RXFIFOEMPTY		FIELD(1, 1, 9)
#define SDC_IR_TXFIFOFULL		FIELD(1, 1, 10)
#define SDC_IR_TXFIFOEMPTY		FIELD(1, 1, 11)
#define SDC_IR_ENDCMDWITHRES		FIELD(1, 1, 12)
