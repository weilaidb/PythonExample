#define	nettel_h
#if defined(CONFIG_M5307)
#define	MCFPP_DCD1	0x0001
#define	MCFPP_DCD0	0x0002
#define	MCFPP_DTR1	0x0004
#define	MCFPP_DTR0	0x0008
#define	NETtel_LEDADDR	0x30400000
extern volatile unsigned short ppdata;
static __inline__ unsigned int mcf_getppdata(void)
static __inline__ void mcf_setppdata(unsigned int mask, unsigned int bits)
#elif defined(CONFIG_M5206e)
#define	NETtel_LEDADDR	0x50000000
#elif defined(CONFIG_M5272)
#define	MCFPP_DCD0	0x0080
#define	MCFPP_DCD1	0x0000
#define	MCFPP_DTR0	0x0040
#define	MCFPP_DTR1	0x0000
static __inline__ unsigned int mcf_getppdata(void)
static __inline__ void mcf_setppdata(unsigned int mask, unsigned int bits)
