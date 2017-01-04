void (*pm_idle)(void) = NULL;
static int hlt_counter;
static int __init nohlt_setup(char *__unused)
__setup("nohlt", nohlt_setup);
static int __init hlt_setup(char *__unused)
__setup("hlt", hlt_setup);
static inline int hlt_works(void)
static void poll_idle(void)
void default_idle(void)
void cpu_idle(void)
void __init select_idle_routine(void)
static void do_nothing(void *unused)
void stop_this_cpu(void *unused)
void cpu_idle_wait(void)
EXPORT_SYMBOL_GPL(cpu_idle_wait);
