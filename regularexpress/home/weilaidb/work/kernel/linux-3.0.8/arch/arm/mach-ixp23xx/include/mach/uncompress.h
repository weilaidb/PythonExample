#define __ASM_ARCH_UNCOMPRESS_H
#define UART_BASE	((volatile u32 *)IXP23XX_UART1_PHYS)
static inline void putc(char c)
static inline void flush(void)
#define arch_decomp_setup()
#define arch_decomp_wdog()
