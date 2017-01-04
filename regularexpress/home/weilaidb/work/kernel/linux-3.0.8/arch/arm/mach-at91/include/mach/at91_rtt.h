#define AT91_RTT_H
#define AT91_RTT_MR		0x00
#define		AT91_RTT_RTPRES		(0xffff << 0)
#define		AT91_RTT_ALMIEN		(1 << 16)
#define		AT91_RTT_RTTINCIEN	(1 << 17)
#define		AT91_RTT_RTTRST		(1 << 18)
#define AT91_RTT_AR		0x04
#define		AT91_RTT_ALMV		(0xffffffff)
#define AT91_RTT_VR		0x08
#define		AT91_RTT_CRTV		(0xffffffff)
#define AT91_RTT_SR		0x0c
#define		AT91_RTT_ALMS		(1 << 0)
#define		AT91_RTT_RTTINC		(1 << 1)
