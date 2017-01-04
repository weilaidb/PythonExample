volatile u32 *uart_base;
#define TX_DONE		(UART_LSR_TEMT | UART_LSR_THRE)
static inline void putc(char c)
static inline void flush(void)
static __inline__ void __arch_decomp_setup(unsigned long arch_id)
#define arch_decomp_setup()	__arch_decomp_setup(arch_id)
#define arch_decomp_wdog()
