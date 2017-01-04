unsigned long s3c_pm_flags;
extern void printascii(const char *);
void s3c_pm_dbg(const char *fmt, ...)
static inline void s3c_pm_debug_init(void)
#define s3c_pm_debug_init() do  while(0)
unsigned char pm_uart_udivslot;
struct pm_uart_save uart_save[CONFIG_SERIAL_SAMSUNG_UARTS];
static void s3c_pm_save_uart(unsigned int uart, struct pm_uart_save *save)
static void s3c_pm_save_uarts(void)
static void s3c_pm_restore_uart(unsigned int uart, struct pm_uart_save *save)
static void s3c_pm_restore_uarts(void)
static void s3c_pm_save_uarts(void)
static void s3c_pm_restore_uarts(void)
unsigned long s3c_irqwake_intmask	= 0xffffffffL;
unsigned long s3c_irqwake_eintmask	= 0xffffffffL;
int s3c_irqext_wake(struct irq_data *data, unsigned int state)
void s3c_pm_do_save(struct sleep_save *ptr, int count)
void s3c_pm_do_restore(struct sleep_save *ptr, int count)
void s3c_pm_do_restore_core(struct sleep_save *ptr, int count)
static void __maybe_unused s3c_pm_show_resume_irqs(int start,
unsigned long which,
unsigned long mask)
void (*pm_cpu_prep)(void);
void (*pm_cpu_sleep)(void);
#define any_allowed(mask, allow) (((mask) & (allow)) != (allow))
static int s3c_pm_enter(suspend_state_t state)
static int s3c_pm_prepare(void)
static void s3c_pm_finish(void)
static const struct platform_suspend_ops s3c_pm_ops = ;
int __init s3c_pm_init(void)
