#define __ASM_CPU_SH4_WATCHDOG_H
#if defined(CONFIG_CPU_SUBTYPE_SH7785) || defined(CONFIG_CPU_SUBTYPE_SH7780)
#define WTBST_HIGH	0x55
#define WTCNT_R		0xffcc0010
#define WTCSR		0xffcc0004
#define WTCNT		0xffcc0000
#define WTST		WTCNT
#define WTBST		0xffcc0008
#elif	defined(CONFIG_CPU_SUBTYPE_SH7722) || \
defined(CONFIG_CPU_SUBTYPE_SH7723) || \
defined(CONFIG_CPU_SUBTYPE_SH7724)
#define WTCNT		0xa4520000
#define WTCSR		0xa4520004
#define WTCNT		0xffc00008
#define WTCSR		0xffc0000c
#define WTCSR_TME	0x80
#define WTCSR_WT	0x40
#define WTCSR_RSTS	0x20
#define WTCSR_WOVF	0x10
#define WTCSR_IOVF	0x08
