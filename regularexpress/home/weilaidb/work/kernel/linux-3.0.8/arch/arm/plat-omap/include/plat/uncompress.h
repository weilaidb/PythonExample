#define MDR1_MODE_MASK			0x07
volatile u8 *uart_base;
int uart_shift;
static void set_omap_uart_info(unsigned char port)
static void putc(int c)
static inline void flush(void)
#define _DEBUG_LL_ENTRY(mach, dbg_uart, dbg_shft, dbg_id)		\
if (machine_is_##mach())
#define DEBUG_LL_OMAP7XX(p, mach)					\
_DEBUG_LL_ENTRY(mach, OMAP1_UART##p##_BASE, OMAP7XX_PORT_SHIFT,	\
OMAP1UART##p)
#define DEBUG_LL_OMAP1(p, mach)						\
_DEBUG_LL_ENTRY(mach, OMAP1_UART##p##_BASE, OMAP_PORT_SHIFT,	\
OMAP1UART##p)
#define DEBUG_LL_OMAP2(p, mach)						\
_DEBUG_LL_ENTRY(mach, OMAP2_UART##p##_BASE, OMAP_PORT_SHIFT,	\
OMAP2UART##p)
#define DEBUG_LL_OMAP3(p, mach)						\
_DEBUG_LL_ENTRY(mach, OMAP3_UART##p##_BASE, OMAP_PORT_SHIFT,	\
OMAP3UART##p)
#define DEBUG_LL_OMAP4(p, mach)						\
_DEBUG_LL_ENTRY(mach, OMAP4_UART##p##_BASE, OMAP_PORT_SHIFT,	\
OMAP4UART##p)
#define DEBUG_LL_ZOOM(mach)						\
_DEBUG_LL_ENTRY(mach, ZOOM_UART_BASE, ZOOM_PORT_SHIFT, ZOOM_UART)
#define DEBUG_LL_TI816X(p, mach)					\
_DEBUG_LL_ENTRY(mach, TI816X_UART##p##_BASE, OMAP_PORT_SHIFT,	\
TI816XUART##p)
static inline void __arch_decomp_setup(unsigned long arch_id)
#define arch_decomp_setup()	__arch_decomp_setup(arch_id)
#define arch_decomp_wdog()
