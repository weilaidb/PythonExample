#define POWERDOWN_TIMEOUT	120
#define POWERDOWN_FREQ		(HZ / 4)
#define PANIC_FREQ		(HZ / 8)
static struct timer_list power_timer, blink_timer, debounce_timer;
#define MACHINE_PANICED		1
#define MACHINE_SHUTTING_DOWN	2
static int machine_state;
static void __noreturn sgi_machine_power_off(void)
static void __noreturn sgi_machine_restart(char *command)
static void __noreturn sgi_machine_halt(void)
static void power_timeout(unsigned long data)
static void blink_timeout(unsigned long data)
static void debounce(unsigned long data)
static inline void power_button(void)
static irqreturn_t panel_int(int irq, void *dev_id)
static int panic_event(struct notifier_block *this, unsigned long event,
void *ptr)
static struct notifier_block panic_block = ;
static int __init reboot_setup(void)
subsys_initcall(reboot_setup);
