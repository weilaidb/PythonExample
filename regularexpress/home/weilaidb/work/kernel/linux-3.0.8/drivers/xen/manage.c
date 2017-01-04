enum shutdown_state ;
static enum shutdown_state shutting_down = SHUTDOWN_INVALID;
struct suspend_info ;
static void xen_hvm_post_suspend(int cancelled)
static void xen_pre_suspend(void)
static void xen_post_suspend(int cancelled)
static int xen_suspend(void *data)
static void do_suspend(void)
struct shutdown_handler ;
static void do_poweroff(void)
static void do_reboot(void)
static void shutdown_handler(struct xenbus_watch *watch,
const char **vec, unsigned int len)
static void sysrq_handler(struct xenbus_watch *watch, const char **vec,
unsigned int len)
static struct xenbus_watch sysrq_watch = ;
static struct xenbus_watch shutdown_watch = ;
static int setup_shutdown_watcher(void)
static int shutdown_event(struct notifier_block *notifier,
unsigned long event,
void *data)
int xen_setup_shutdown_event(void)
EXPORT_SYMBOL_GPL(xen_setup_shutdown_event);
subsys_initcall(xen_setup_shutdown_event);
