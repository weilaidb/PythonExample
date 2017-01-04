#define __ASM_ARM_ARCH_UNCOMPRESS_H
#define UART_FIFO_CTL_TX_RESET	(1 << 2)
#define UART_STATUS_TX_MT	(1 << 6)
#define _UARTREG(x)		(void __iomem *)(LPC32XX_UART5_BASE + (x))
#define LPC32XX_UART_DLLFIFO_O	0x00
#define LPC32XX_UART_IIRFCR_O	0x08
#define LPC32XX_UART_LSR_O	0x14
static inline void putc(int ch)
static inline void flush(void)
#define arch_decomp_setup()
#define arch_decomp_wdog()
