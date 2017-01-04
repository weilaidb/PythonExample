#define AT91_SHDWC_H
#define AT91_SHDW_CR		(AT91_SHDWC + 0x00)
#define		AT91_SHDW_SHDW		(1    << 0)
#define		AT91_SHDW_KEY		(0xa5 << 24)
#define AT91_SHDW_MR		(AT91_SHDWC + 0x04)
#define		AT91_SHDW_WKMODE0	(3 << 0)
#define			AT91_SHDW_WKMODE0_NONE		0
#define			AT91_SHDW_WKMODE0_HIGH		1
#define			AT91_SHDW_WKMODE0_LOW		2
#define			AT91_SHDW_WKMODE0_ANYLEVEL	3
#define		AT91_SHDW_CPTWK0	(0xf << 4)
#define			AT91_SHDW_CPTWK0_(x)	((x) << 4)
#define		AT91_SHDW_RTTWKEN	(1   << 16)
#define AT91_SHDW_SR		(AT91_SHDWC + 0x08)
#define		AT91_SHDW_WAKEUP0	(1 <<  0)
#define		AT91_SHDW_RTTWK		(1 << 16)
#define		AT91_SHDW_RTCWK		(1 << 17)
