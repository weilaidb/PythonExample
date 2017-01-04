#define __ASM_ARCH_UNCOMPRESS_H
#if defined(CONFIG_AT91_EARLY_DBGU)
#define UART_OFFSET (AT91_DBGU + AT91_BASE_SYS)
#elif defined(CONFIG_AT91_EARLY_USART0)
#define UART_OFFSET AT91_USART0
#elif defined(CONFIG_AT91_EARLY_USART1)
#define UART_OFFSET AT91_USART1
#elif defined(CONFIG_AT91_EARLY_USART2)
#define UART_OFFSET AT91_USART2
#elif defined(CONFIG_AT91_EARLY_USART3)
#define UART_OFFSET AT91_USART3
#elif defined(CONFIG_AT91_EARLY_USART4)
#define UART_OFFSET AT91_USART4
#elif defined(CONFIG_AT91_EARLY_USART5)
#define UART_OFFSET AT91_USART5
static void putc(int c)
static inline void flush(void)
#define arch_decomp_setup()
#define arch_decomp_wdog()
