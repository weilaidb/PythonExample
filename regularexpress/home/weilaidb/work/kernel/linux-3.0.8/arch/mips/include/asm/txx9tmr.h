#define __ASM_TXX9TMR_H
struct txx9_tmr_reg ;
#define TXx9_TMTCR_TCE		0x00000080
#define TXx9_TMTCR_CCDE		0x00000040
#define TXx9_TMTCR_CRE		0x00000020
#define TXx9_TMTCR_ECES		0x00000008
#define TXx9_TMTCR_CCS		0x00000004
#define TXx9_TMTCR_TMODE_MASK	0x00000003
#define TXx9_TMTCR_TMODE_ITVL	0x00000000
#define TXx9_TMTCR_TMODE_PGEN	0x00000001
#define TXx9_TMTCR_TMODE_WDOG	0x00000002
#define TXx9_TMTISR_TPIBS	0x00000004
#define TXx9_TMTISR_TPIAS	0x00000002
#define TXx9_TMTISR_TIIS	0x00000001
#define TXx9_TMITMR_TIIE	0x00008000
#define TXx9_TMITMR_TZCE	0x00000001
#define TXx9_TMWTMR_TWIE	0x00008000
#define TXx9_TMWTMR_WDIS	0x00000080
#define TXx9_TMWTMR_TWC		0x00000001
void txx9_clocksource_init(unsigned long baseaddr,
unsigned int imbusclk);
void txx9_clockevent_init(unsigned long baseaddr, int irq,
unsigned int imbusclk);
void txx9_tmr_init(unsigned long baseaddr);
#define TXX9_TIMER_BITS	24
#define TXX9_TIMER_BITS	32
