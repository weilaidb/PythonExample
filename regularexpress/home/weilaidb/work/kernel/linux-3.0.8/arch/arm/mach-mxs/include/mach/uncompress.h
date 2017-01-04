#define __MACH_MXS_UNCOMPRESS_H__
unsigned long mxs_duart_base;
#define MXS_DUART(x)	(*(volatile unsigned long *)(mxs_duart_base + (x)))
#define MXS_DUART_DR		0x00
#define MXS_DUART_FR		0x18
#define MXS_DUART_FR_TXFE	(1 << 7)
#define MXS_DUART_CR		0x30
#define MXS_DUART_CR_UARTEN	(1 << 0)
static void putc(int ch)
static inline void flush(void)
#define MX23_DUART_BASE_ADDR	0x80070000
#define MX28_DUART_BASE_ADDR	0x80074000
static inline void __arch_decomp_setup(unsigned long arch_id)
#define arch_decomp_setup()	__arch_decomp_setup(arch_id)
#define arch_decomp_wdog()
