unsigned long long sched_clock(void)
static struct resource puv3_usb_resources[] = ;
static struct musb_hdrc_config	puv3_usb_config[] = ;
static struct musb_hdrc_platform_data puv3_usb_plat = ;
static struct resource puv3_mmc_resources[] = ;
static struct resource puv3_unigfx_resources[] = ;
static struct resource puv3_rtc_resources[] = ;
static struct resource puv3_pwm_resources[] = ;
static struct resource puv3_uart0_resources[] = ;
static struct resource puv3_uart1_resources[] = ;
static struct resource puv3_umal_resources[] = ;
#define SAVE(x)		sleep_save[SLEEP_SAVE_##x] = x
#define RESTORE(x)	x = sleep_save[SLEEP_SAVE_##x]
enum ;
static void puv3_cpu_pm_save(unsigned long *sleep_save)
static void puv3_cpu_pm_restore(unsigned long *sleep_save)
static int puv3_cpu_pm_prepare(void)
static void puv3_cpu_pm_enter(suspend_state_t state)
static int puv3_cpu_pm_valid(suspend_state_t state)
static void puv3_cpu_pm_finish(void)
static struct puv3_cpu_pm_fns puv3_cpu_pm_fnss = ;
static void __init puv3_init_pm(void)
static inline void puv3_init_pm(void)
void puv3_ps2_init(void)
void __init puv3_core_init(void)
