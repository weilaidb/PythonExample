#define _ARCH_UNCOMPRESS_H_
#define TX_DONE (UART_LSR_TEMT|UART_LSR_THRE)
volatile u32* uart_base;
static inline void putc(int c)
static void flush(void)
static __inline__ void __arch_decomp_setup(unsigned long arch_id)
#define arch_decomp_setup()	__arch_decomp_setup(arch_id)
#define arch_decomp_wdog()
