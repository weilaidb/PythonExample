#define __ASM_ARCH_UNCOMPRESS_H
#define arch_decomp_wdog()
#define TX_DONE	(UART_LSR_TEMT | UART_LSR_THRE)
static volatile u32 * const uart_base = (u32 *)UART0_PA;
static void putc(int ch)
static inline void flush(void)
static void arch_decomp_setup(void)
