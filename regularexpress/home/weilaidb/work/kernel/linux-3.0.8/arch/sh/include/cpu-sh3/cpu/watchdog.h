#define __ASM_CPU_SH3_WATCHDOG_H
#define WTCNT		0xffffff84
#define WTCSR		0xffffff86
#define WTCSR_TME	0x80
#define WTCSR_WT	0x40
#define WTCSR_RSTS	0x20
#define WTCSR_WOVF	0x10
#define WTCSR_IOVF	0x08
