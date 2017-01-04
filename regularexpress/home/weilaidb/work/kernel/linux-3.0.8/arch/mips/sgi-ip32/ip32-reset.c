#define POWERDOWN_TIMEOUT	120
#define POWERDOWN_FREQ		(HZ / 4)
#define PANIC_FREQ		(HZ / 8)
static struct timer_list power_timer, blink_timer, debounce_timer;
static int has_panicked, shuting_down;
static void ip32_machine_restart(char *command) __attribute__((noreturn));
static void ip32_machine_halt(void) __attribute__((noreturn));
static void ip32_machine_power_off(void) __attribute__((noreturn));
static void ip32_machine_restart(char *cmd)
static inline void ip32_machine_halt(void)
static void ip32_machine_power_off(void)
static void power_timeout(unsigned long data)
static void blink_timeout(unsigned long data)
static void debounce(unsigned long data)
static inline void ip32_power_button(void)
static irqreturn_t ip32_rtc_int(int irq, void *dev_id)
static int panic_event(struct notifier_block *this, unsigned long event,
void *ptr)
static struct notifier_block panic_block = ;
static __init int ip32_reboot_setup(void)
subsys_initcall(ip32_reboot_setup);
