#define	_CDK_H
#define	CDK_SIGADDR	0x200
#define	CDK_FEATADDR	0x280
#define	CDK_CDKADDR	0x300
#define	CDK_RDYADDR	0x262
#define	CDK_ALIVEMARKER	13
typedef struct cdkecpsig  cdkecpsig_t;
#define	ECP_MAGIC	0x21504345
typedef struct cdkonbsig  cdkonbsig_t;
#define	ONB_MAGIC0	0xf2a7
#define	ONB_MAGIC1	0xa149
#define	ONB_MAGIC2	0x6352
#define	ONB_MAGIC3	0xf121
typedef struct cdkfeature  cdkfeature_t;
#define	ETYP_DDK	0
#define	ETYP_CDK	1
typedef struct cdkhdr  cdkhdr_t;
#define	MODE_DDK	0
#define	MODE_CDK	1
#define	IMD_INTR	0x0
#define	IMD_PPINTR	0x1
#define	IMD_POLL	0xff
typedef struct cdkmem  cdkmem_t;
#define	TYP_UNDEFINED	0x0
#define	TYP_ASYNCTRL	0x1
#define	TYP_ASYNC	0x20
#define	TYP_PARALLEL	0x40
#define	TYP_SYNCX21	0x60
#define	ASYCMD		(((unsigned long) 'a') << 8)
#define	A_NULL		(ASYCMD | 0)
#define	A_FLUSH		(ASYCMD | 1)
#define	A_BREAK		(ASYCMD | 2)
#define	A_GETPORT	(ASYCMD | 3)
#define	A_SETPORT	(ASYCMD | 4)
#define	A_SETPORTF	(ASYCMD | 5)
#define	A_SETPORTFTX	(ASYCMD | 6)
#define	A_SETPORTFRX	(ASYCMD | 7)
#define	A_GETSIGNALS	(ASYCMD | 8)
#define	A_SETSIGNALS	(ASYCMD | 9)
#define	A_SETSIGNALSF	(ASYCMD | 10)
#define	A_SETSIGNALSFTX	(ASYCMD | 11)
#define	A_SETSIGNALSFRX	(ASYCMD | 12)
#define	A_GETNOTIFY	(ASYCMD | 13)
#define	A_SETNOTIFY	(ASYCMD | 14)
#define	A_NOTIFY	(ASYCMD | 15)
#define	A_PORTCTRL	(ASYCMD | 16)
#define	A_GETSTATS	(ASYCMD | 17)
#define	A_RQSTATE	(ASYCMD | 18)
#define	A_FLOWSTATE	(ASYCMD | 19)
#define	A_CLEARSTATS	(ASYCMD | 20)
#define	FLUSHRX		0x1
#define	FLUSHTX		0x2
#define	BREAKON		-1
#define	BREAKOFF	-2
typedef struct asyport  asyport_t;
#define	PT_STOP1	0x0
#define	PT_STOP15	0x1
#define	PT_STOP2	0x2
#define	PT_NOPARITY	0x0
#define	PT_ODDPARITY	0x1
#define	PT_EVENPARITY	0x2
#define	PT_MARKPARITY	0x3
#define	PT_SPACEPARITY	0x4
#define	F_NONE		0x0
#define	F_IXON		0x1
#define	F_IXOFF		0x2
#define	F_IXANY		0x4
#define	F_IOXANY	0x8
#define	F_RTSFLOW	0x10
#define	F_CTSFLOW	0x20
#define	F_DTRFLOW	0x40
#define	F_DCDFLOW	0x80
#define	F_DSROFLOW	0x100
#define	F_DSRIFLOW	0x200
#define	FI_NORX		0x1
#define	FI_RAW		0x2
#define	FI_ISTRIP	0x4
#define	FI_UCLC		0x8
#define	FI_INLCR	0x10
#define	FI_ICRNL	0x20
#define	FI_IGNCR	0x40
#define	FI_IGNBREAK	0x80
#define	FI_DSCRDBREAK	0x100
#define	FI_1MARKBREAK	0x200
#define	FI_2MARKBREAK	0x400
#define	FI_XCHNGBREAK	0x800
#define	FI_IGNRXERRS	0x1000
#define	FI_DSCDRXERRS	0x2000
#define	FI_1MARKRXERRS	0x4000
#define	FI_2MARKRXERRS	0x8000
#define	FI_XCHNGRXERRS	0x10000
#define	FI_DSCRDNULL	0x20000
#define	FO_OLCUC	0x1
#define	FO_ONLCR	0x2
#define	FO_OOCRNL	0x4
#define	FO_ONOCR	0x8
#define	FO_ONLRET	0x10
#define	FO_ONL		0x20
#define	FO_OBS		0x40
#define	FO_OVT		0x80
#define	FO_OFF		0x100
#define	FO_OTAB1	0x200
#define	FO_OTAB2	0x400
#define	FO_OTAB3	0x800
#define	FO_OCR1		0x1000
#define	FO_OCR2		0x2000
#define	FO_OCR3		0x4000
#define	FO_OFILL	0x8000
#define	FO_ODELL	0x10000
#define	P_RTSLOCK	0x1
#define	P_CTSLOCK	0x2
#define	P_MAPRTS	0x4
#define	P_MAPCTS	0x8
#define	P_LOOPBACK	0x10
#define	P_DTRFOLLOW	0x20
#define	P_FAKEDCD	0x40
#define	P_RXIMIN	0x10000
#define	P_RXITIME	0x20000
#define	P_RXTHOLD	0x40000
typedef struct asysigs  asysigs_t;
#define	DT_TXBUSY	0x1
#define	DT_TXEMPTY	0x2
#define	DT_TXLOW	0x4
#define	DT_TXHIGH	0x8
#define	DT_TXFULL	0x10
#define	DT_TXHOG	0x20
#define	DT_TXFLOWED	0x40
#define	DT_TXBREAK	0x80
#define	DT_RXBUSY	0x100
#define	DT_RXEMPTY	0x200
#define	DT_RXLOW	0x400
#define	DT_RXHIGH	0x800
#define	DT_RXFULL	0x1000
#define	DT_RXHOG	0x2000
#define	DT_RXFLOWED	0x4000
#define	DT_RXBREAK	0x8000
#define	SG_DTR		0x1
#define	SG_DCD		0x2
#define	SG_RTS		0x4
#define	SG_CTS		0x8
#define	SG_DSR		0x10
#define	SG_RI		0x20
typedef struct asynotify  asynotify_t;
typedef struct  asyctrl_t;
#define	CT_ENABLE	0x1
#define	CT_DISABLE	0x2
#define	CT_STOP		0x4
#define	CT_START	0x8
#define	CT_STARTFLOW	0x10
#define	CT_STOPFLOW	0x20
#define	CT_SENDCHR	0x40
typedef struct asystats  asystats_t;
typedef struct cdkctrl  cdkctrl_t;
typedef struct cdkasyrq  cdkasyrq_t;
typedef struct cdkasy  cdkasy_t;
#define	STL_BINTR	_IO('s',20)
#define	STL_BSTART	_IO('s',21)
#define	STL_BSTOP	_IO('s',22)
#define	STL_BRESET	_IO('s',23)
#define	STL_GETPFLAG	_IO('s',80)
#define	STL_SETPFLAG	_IO('s',81)
