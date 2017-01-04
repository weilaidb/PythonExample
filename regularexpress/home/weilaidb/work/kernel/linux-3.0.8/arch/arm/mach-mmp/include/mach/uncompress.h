#define UART1_BASE	(APB_PHYS_BASE + 0x36000)
#define UART2_BASE	(APB_PHYS_BASE + 0x17000)
#define UART3_BASE	(APB_PHYS_BASE + 0x18000)
volatile unsigned long *UART;
static inline void putc(char c)
static inline void flush(void)
static inline void arch_decomp_setup(void)
#define arch_decomp_wdog()
