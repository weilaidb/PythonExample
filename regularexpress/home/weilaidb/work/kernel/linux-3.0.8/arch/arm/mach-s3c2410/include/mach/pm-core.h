static inline void s3c_pm_debug_init_uart(void)
static inline void s3c_pm_arch_prepare_irqs(void)
static inline void s3c_pm_arch_stop_clocks(void)
static void s3c_pm_show_resume_irqs(int start, unsigned long which,
unsigned long mask);
static inline void s3c_pm_arch_show_resume_irqs(void)
static inline void s3c_pm_arch_update_uart(void __iomem *regs,
struct pm_uart_save *save)
