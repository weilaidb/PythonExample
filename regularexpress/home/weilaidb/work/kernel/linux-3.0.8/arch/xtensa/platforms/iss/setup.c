void __init platform_init(bp_tag_t* bootparam)
void platform_halt(void)
void platform_power_off(void)
void platform_restart(void)
extern void iss_net_poll(void);
const char twirl[]="|/-\\|/-\\";
void platform_heartbeat(void)
static int
iss_panic_event(struct notifier_block *this, unsigned long event, void *ptr)
static struct notifier_block iss_panic_block = ;
void __init platform_setup(char **p_cmdline)
