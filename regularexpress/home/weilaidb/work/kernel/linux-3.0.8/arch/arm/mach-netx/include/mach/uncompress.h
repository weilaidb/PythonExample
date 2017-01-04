#define REG(x) (*(volatile unsigned long *)(x))
#define UART1_BASE 0x100a00
#define UART2_BASE 0x100a80
#define UART_DR 0x0
#define UART_CR 0x14
#define CR_UART_EN (1<<0)
#define UART_FR 0x18
#define FR_BUSY (1<<3)
#define FR_TXFF (1<<5)
static void putc(char c)
static inline void flush(void)
#define arch_decomp_setup()
#define arch_decomp_wdog()
