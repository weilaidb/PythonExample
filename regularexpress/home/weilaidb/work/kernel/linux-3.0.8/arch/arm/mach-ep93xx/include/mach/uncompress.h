static unsigned char __raw_readb(unsigned int ptr)
static unsigned int __raw_readl(unsigned int ptr)
static void __raw_writeb(unsigned char value, unsigned int ptr)
static void __raw_writel(unsigned int value, unsigned int ptr)
#if defined(CONFIG_EP93XX_EARLY_UART1)
#define UART_BASE		EP93XX_UART1_PHYS_BASE
#elif defined(CONFIG_EP93XX_EARLY_UART2)
#define UART_BASE		EP93XX_UART2_PHYS_BASE
#elif defined(CONFIG_EP93XX_EARLY_UART3)
#define UART_BASE		EP93XX_UART3_PHYS_BASE
#define UART_BASE		EP93XX_UART1_PHYS_BASE
#define PHYS_UART_DATA		(UART_BASE + 0x00)
#define PHYS_UART_FLAG		(UART_BASE + 0x18)
#define UART_FLAG_TXFF		0x20
static inline void putc(int c)
static inline void flush(void)
#define PHYS_ETH_SELF_CTL		0x80010020
#define ETH_SELF_CTL_RESET		0x00000001
static void ethernet_reset(void)
static void arch_decomp_setup(void)
#define arch_decomp_wdog()
