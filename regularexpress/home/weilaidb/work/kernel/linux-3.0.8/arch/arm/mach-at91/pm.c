#if defined(AT91_SHDWC)
static void __init show_reset_status(void)
static void __init show_reset_status(void)
static int at91_pm_valid_state(suspend_state_t state)
static suspend_state_t target_state;
static int at91_pm_begin(suspend_state_t state)
static int at91_pm_verify_clocks(void)
int at91_suspend_entering_slow_clock(void)
EXPORT_SYMBOL(at91_suspend_entering_slow_clock);
static void (*slow_clock)(void);
extern void at91_slow_clock(void);
extern u32 at91_slow_clock_sz;
static int at91_pm_enter(suspend_state_t state)
static void at91_pm_end(void)
static const struct platform_suspend_ops at91_pm_ops = ;
static int __init at91_pm_init(void)
arch_initcall(at91_pm_init);
