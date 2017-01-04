#define _SER_A2232_H_
#define MAX_A2232_BOARDS 5
#define A2232_NORMAL_MAJOR  224
#define A2232_CALLOUT_MAJOR 225
#define A2232_MAGIC 0x000a2232
struct a2232_port;
#define	NUMLINES		7
#define	A2232_IOBUFLEN		256
#define	A2232_IOBUFLENMASK	0xff
#define	A2232_UNKNOWN	0
#define	A2232_NORMAL	1
#define	A2232_TURBO	2
struct a2232common ;
struct a2232status ;
#define	A2232_MEMPAD1	\
(0x0200 - NUMLINES * sizeof(struct a2232status)	-	\
sizeof(struct a2232common))
#define	A2232_MEMPAD2	(0x2000 - NUMLINES * A2232_IOBUFLEN - A2232_IOBUFLEN)
struct a2232memory ;
#undef A2232_MEMPAD1
#undef A2232_MEMPAD2
#define	A2232INCTL_CHAR		0
#define	A2232INCTL_EVENT	1
#define	A2232EVENT_Break	1
#define	A2232EVENT_CarrierOn	2
#define	A2232EVENT_CarrierOff	3
#define A2232EVENT_Sync		4
#define	A2232CMD_Enable		0x1
#define	A2232CMD_Close		0x2
#define	A2232CMD_Open		0xb
#define	A2232CMD_CMask		0xf
#define	A2232CMD_RTSOff		0x0
#define	A2232CMD_RTSOn		0x8
#define	A2232CMD_Break		0xd
#define	A2232CMD_RTSMask	0xc
#define	A2232CMD_NoParity	0x00
#define	A2232CMD_OddParity	0x20
#define	A2232CMD_EvenParity	0x60
#define	A2232CMD_ParityMask	0xe0
#define	A2232PARAM_B115200	0x0
#define	A2232PARAM_B50		0x1
#define	A2232PARAM_B75		0x2
#define	A2232PARAM_B110		0x3
#define	A2232PARAM_B134		0x4
#define	A2232PARAM_B150		0x5
#define	A2232PARAM_B300		0x6
#define	A2232PARAM_B600		0x7
#define	A2232PARAM_B1200	0x8
#define	A2232PARAM_B1800	0x9
#define	A2232PARAM_B2400	0xa
#define	A2232PARAM_B3600	0xb
#define	A2232PARAM_B4800	0xc
#define	A2232PARAM_B7200	0xd
#define	A2232PARAM_B9600	0xe
#define	A2232PARAM_B19200	0xf
#define	A2232PARAM_BaudMask	0xf
#define	A2232PARAM_RcvBaud	0x10
#define	A2232PARAM_8Bit		0x00
#define	A2232PARAM_7Bit		0x20
#define	A2232PARAM_6Bit		0x40
#define	A2232PARAM_5Bit		0x60
#define	A2232PARAM_BitMask	0x60
#define A2232_BAUD_TABLE_NOAVAIL -1
#define A2232_BAUD_TABLE_NUM_RATES (18)
static int a2232_baud_table[A2232_BAUD_TABLE_NUM_RATES*3] = ;
