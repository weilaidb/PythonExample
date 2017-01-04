#define UART5_BASE 0x40090000
#define UART5_DR    (*(volatile unsigned char *) (UART5_BASE))
#define UART5_FR    (*(volatile unsigned char *) (UART5_BASE + 18))
static __inline__ void putc(char c)
static inline void flush(void)
#define arch_decomp_setup()
#define arch_decomp_wdog()
