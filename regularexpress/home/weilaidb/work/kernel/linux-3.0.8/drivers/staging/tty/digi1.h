#if !defined(TIOCMODG)
#define	TIOCMODG	(('d'<<8) | 250)
#define	TIOCMODS	(('d'<<8) | 251)
#if !defined(TIOCMSET)
#define	TIOCMSET	(('d'<<8) | 252)
#define	TIOCMGET	(('d'<<8) | 253)
#if !defined(TIOCMBIC)
#define	TIOCMBIC	(('d'<<8) | 254)
#define	TIOCMBIS	(('d'<<8) | 255)
#if !defined(TIOCSDTR)
#define	TIOCSDTR	(('e'<<8) | 0)
#define	TIOCCDTR	(('e'<<8) | 1)
#define DIGI_GETA	(('e'<<8) | 94)
#define DIGI_SETA	(('e'<<8) | 95)
#define DIGI_SETAW	(('e'<<8) | 96)
#define DIGI_SETAF	(('e'<<8) | 97)
#define	DIGI_GETFLOW	(('e'<<8) | 99)
#define	DIGI_SETFLOW	(('e'<<8) | 100)
#define	DIGI_GETAFLOW	(('e'<<8) | 101)
#define	DIGI_SETAFLOW	(('e'<<8) | 102)
#define	DIGI_GETINFO	(('e'<<8) | 103)
#define	DIGI_POLLER	(('e'<<8) | 104)
#define	DIGI_INIT	(('e'<<8) | 105)
struct	digiflow_struct
;
typedef struct digiflow_struct digiflow_t;
#define DIGI_IXON	0x0001
#define DIGI_FAST	0x0002
#define RTSPACE		0x0004
#define CTSPACE		0x0008
#define DSRPACE		0x0010
#define DCDPACE		0x0020
#define DTRPACE		0x0040
#define DIGI_FORCEDCD	0x0100
#define	DIGI_ALTPIN	0x0200
#define	DIGI_AIXON	0x0400
#define NORMAL  0
#define PCI_CTL 1
#define SIZE8  0
#define SIZE16 1
#define SIZE32 2
struct digi_struct
;
typedef struct digi_struct digi_t;
struct digi_info
;
