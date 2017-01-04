#define __ASM_ARCH_UNCOMPRESS_H
typedef unsigned int upf_t;
unsigned int fifo_mask;
unsigned int fifo_max;
static void arch_detect_cpu(void);
#undef S3C2410_WDOGREG
#define S3C2410_WDOGREG(x) ((S3C24XX_PA_WATCHDOG + (x)))
#define FIFO_MAX	 (14)
unsigned long uart_base;
static __inline__ void get_uart_base(void)
static __inline__ void uart_wr(unsigned int reg, unsigned int val)
static __inline__ unsigned int uart_rd(unsigned int reg)
static void putc(int ch)
static inline void flush(void)
#define __raw_writel(d, ad)			\
do  while (0)
#define WDOG_COUNT (0xff00)
static inline void arch_decomp_wdog(void)
static void arch_decomp_wdog_start(void)
#define arch_decomp_wdog_start()
#define arch_decomp_wdog()
static void arch_decomp_error(const char *x)
#define arch_error arch_decomp_error
static inline void arch_enable_uart_fifo(void)
#define arch_enable_uart_fifo() do  while(0)
static void arch_decomp_setup(void)
static void arch_detect_cpu(void)
