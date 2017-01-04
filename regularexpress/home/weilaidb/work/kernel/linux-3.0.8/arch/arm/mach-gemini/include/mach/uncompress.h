#define __MACH_UNCOMPRESS_H
static volatile unsigned long * const UART = (unsigned long *)GEMINI_UART_BASE;
static inline void putc(char c)
static inline void flush(void)
#define arch_decomp_setup()
#define arch_decomp_wdog()
