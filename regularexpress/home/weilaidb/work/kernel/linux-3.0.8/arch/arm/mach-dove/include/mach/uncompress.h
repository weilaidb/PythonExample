#define UART_THR ((volatile unsigned char *)(DOVE_UART0_PHYS_BASE + 0x0))
#define UART_LSR ((volatile unsigned char *)(DOVE_UART0_PHYS_BASE + 0x14))
#define LSR_THRE	0x20
static void putc(const char c)
static void flush(void)
#define arch_decomp_setup()
#define arch_decomp_wdog()
