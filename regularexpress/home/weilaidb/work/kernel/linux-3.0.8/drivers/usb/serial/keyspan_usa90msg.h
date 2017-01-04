#define	__USA90MSG__
struct keyspan_usa90_portControlMessage
;
#define		USA_DATABITS_5		0x00
#define		USA_DATABITS_6		0x01
#define		USA_DATABITS_7		0x02
#define		USA_DATABITS_8		0x03
#define		STOPBITS_5678_1		0x00
#define		STOPBITS_5_1p5		0x04
#define		STOPBITS_678_2		0x04
#define		USA_PARITY_NONE		0x00
#define		USA_PARITY_ODD		0x08
#define		USA_PARITY_EVEN		0x18
#define		PARITY_MARK_1  		0x28
#define		PARITY_SPACE_0 		0x38
#define		TXFLOW_CTS			0x04
#define		TXFLOW_DSR			0x08
#define		TXFLOW_XOFF			0x01
#define		TXFLOW_XOFF_ANY		0x02
#define		TXFLOW_XOFF_BITS	(TXFLOW_XOFF | TXFLOW_XOFF_ANY)
#define		RXFLOW_XOFF			0x10
#define		RXFLOW_RTS			0x20
#define		RXFLOW_DTR			0x40
#define		RXFLOW_DSR_SENSITIVITY	0x80
#define		RXMODE_BYHAND		0x00
#define		RXMODE_DMA			0x02
#define		TXMODE_BYHAND		0x00
#define		TXMODE_DMA			0x02
struct keyspan_usa90_portStatusMessage
;
#define	RXERROR_OVERRUN		0x02
#define	RXERROR_PARITY		0x04
#define	RXERROR_FRAMING		0x08
#define	RXERROR_BREAK		0x10
#define	PORTSTATE_ENABLED	0x80
#define	PORTSTATE_TXFLUSH	0x01
#define	PORTSTATE_TXBREAK	0x02
#define	PORTSTATE_LOOPBACK 	0x04
#define USA_MSR_dCTS	  		0x01
#define USA_MSR_dDSR	  		0x02
#define USA_MSR_dRI			0x04
#define USA_MSR_dDCD	  		0x08
#define USA_MSR_CTS			0x10
#define USA_MSR_DSR			0x20
#define USA_USA_MSR_RI			0x40
#define MSR_DCD				0x80
#define		MAX_DATA_LEN			64
