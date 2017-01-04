#define __UNICORE_TIMEX_H__
#define	CLOCK_TICK_RATE		(32*1024)
#if defined(CONFIG_PUV3_DB0913)		\
|| defined(CONFIG_PUV3_NB0916)	\
|| defined(CONFIG_PUV3_SMW0919)
#define  CLOCK_TICK_RATE         (14318000)
