#define __ASM_ARCH_UNCOMPRESS_H
struct amba_device;
#define NOMADIK_UART_DR		0x101FB000
#define NOMADIK_UART_LCRH	0x101FB02c
#define NOMADIK_UART_CR		0x101FB030
#define NOMADIK_UART_FR		0x101FB018
static void putc(const char c)
static void flush(void)
static inline void arch_decomp_setup(void)
#define arch_decomp_wdog()
