#define FFUART_BASE	(0x40100000)
#define BTUART_BASE	(0x40200000)
#define STUART_BASE	(0x40700000)
unsigned long uart_base;
unsigned int uart_shift;
unsigned int uart_is_pxa;
static inline unsigned char uart_read(int offset)
static inline void uart_write(unsigned char val, int offset)
static inline int uart_is_enabled(void)
static inline void putc(char c)
static inline void flush(void)
static inline void arch_decomp_setup(void)
#define arch_decomp_wdog()
