static int hv_supports_soft_state;
static void do_set_sstate(unsigned long state, const char *msg)
static const char booting_msg[32] __attribute__((aligned(32))) =
"Linux booting";
static const char running_msg[32] __attribute__((aligned(32))) =
"Linux running";
static const char halting_msg[32] __attribute__((aligned(32))) =
"Linux halting";
static const char poweroff_msg[32] __attribute__((aligned(32))) =
"Linux powering off";
static const char rebooting_msg[32] __attribute__((aligned(32))) =
"Linux rebooting";
static const char panicing_msg[32] __attribute__((aligned(32))) =
"Linux panicing";
static int sstate_reboot_call(struct notifier_block *np, unsigned long type, void *_unused)
static struct notifier_block sstate_reboot_notifier = ;
static int sstate_panic_event(struct notifier_block *n, unsigned long event, void *ptr)
static struct notifier_block sstate_panic_block = ;
static int __init sstate_init(void)
core_initcall(sstate_init);
static int __init sstate_running(void)
late_initcall(sstate_running);
