#undef CLPS7111_BASE
#define CLPS7111_BASE CLPS7111_PHYS_BASE
#define __raw_readl(p)		(*(unsigned long *)(p))
#define __raw_writel(v,p)	(*(unsigned long *)(p) = (v))
#define SYSFLGx	SYSFLG2
#define UARTDRx	UARTDR2
#define SYSFLGx	SYSFLG1
#define UARTDRx	UARTDR1
static inline void putc(int c)
static inline void flush(void)
#define arch_decomp_setup()
#define arch_decomp_wdog()
