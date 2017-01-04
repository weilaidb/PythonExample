u32 *uart;
static void putc(char c)
static inline void flush(void)
static inline void set_uart_info(u32 phys, void * __iomem virt)
#define _DEBUG_LL_ENTRY(machine, phys, virt)			\
if (machine_is_##machine())
#define DEBUG_LL_DAVINCI(machine, port)				\
_DEBUG_LL_ENTRY(machine, DAVINCI_UART##port##_BASE,	\
IO_ADDRESS(DAVINCI_UART##port##_BASE))
#define DEBUG_LL_DA8XX(machine, port)				\
_DEBUG_LL_ENTRY(machine, DA8XX_UART##port##_BASE,	\
IO_ADDRESS(DA8XX_UART##port##_BASE))
#define DEBUG_LL_TNETV107X(machine, port)			\
_DEBUG_LL_ENTRY(machine, TNETV107X_UART##port##_BASE,	\
TNETV107X_UART##port##_VIRT)
static inline void __arch_decomp_setup(unsigned long arch_id)
#define arch_decomp_setup()	__arch_decomp_setup(arch_id)
#define arch_decomp_wdog()
