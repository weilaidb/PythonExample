#define __ASM_ARCH_MXC_UNCOMPRESS_H__
#define __MXC_BOOT_UNCOMPRESS
unsigned long uart_base;
#define UART(x) (*(volatile unsigned long *)(uart_base + (x)))
#define USR2 0x98
#define USR2_TXFE (1<<14)
#define TXR  0x40
#define UCR1 0x80
#define UCR1_UARTEN 1
static void putc(int ch)
static inline void flush(void)
#define MX1_UART1_BASE_ADDR	0x00206000
#define MX25_UART1_BASE_ADDR	0x43f90000
#define MX2X_UART1_BASE_ADDR	0x1000a000
#define MX3X_UART1_BASE_ADDR	0x43F90000
#define MX3X_UART2_BASE_ADDR	0x43F94000
#define MX3X_UART5_BASE_ADDR	0x43FB4000
#define MX51_UART1_BASE_ADDR	0x73fbc000
#define MX50_UART1_BASE_ADDR	0x53fbc000
#define MX53_UART1_BASE_ADDR	0x53fbc000
static __inline__ void __arch_decomp_setup(unsigned long arch_id)
#define arch_decomp_setup()	__arch_decomp_setup(arch_id)
#define arch_decomp_wdog()
