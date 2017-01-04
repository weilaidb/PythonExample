#define VERSION_STR "0.9.1"
#define DEFAULT_IOFENCE_MARGIN 60
#define DEFAULT_IOFENCE_TICK 180
static int hangcheck_tick = DEFAULT_IOFENCE_TICK;
static int hangcheck_margin = DEFAULT_IOFENCE_MARGIN;
static int hangcheck_reboot;
static int hangcheck_dump_tasks;
module_param(hangcheck_tick, int, 0);
MODULE_PARM_DESC(hangcheck_tick, "Timer delay.");
module_param(hangcheck_margin, int, 0);
MODULE_PARM_DESC(hangcheck_margin, "If the hangcheck timer has been delayed more than hangcheck_margin seconds, the driver will fire.");
module_param(hangcheck_reboot, int, 0);
MODULE_PARM_DESC(hangcheck_reboot, "If nonzero, the machine will reboot when the timer margin is exceeded.");
module_param(hangcheck_dump_tasks, int, 0);
MODULE_PARM_DESC(hangcheck_dump_tasks, "If nonzero, the machine will dump the system task state when the timer margin is exceeded.");
MODULE_AUTHOR("Oracle");
MODULE_DESCRIPTION("Hangcheck-timer detects when the system has gone out to lunch past a certain margin.");
MODULE_LICENSE("GPL");
MODULE_VERSION(VERSION_STR);
static int __init hangcheck_parse_tick(char *str)
static int __init hangcheck_parse_margin(char *str)
static int __init hangcheck_parse_reboot(char *str)
static int __init hangcheck_parse_dump_tasks(char *str)
__setup("hcheck_tick", hangcheck_parse_tick);
__setup("hcheck_margin", hangcheck_parse_margin);
__setup("hcheck_reboot", hangcheck_parse_reboot);
__setup("hcheck_dump_tasks", hangcheck_parse_dump_tasks);
#if defined(CONFIG_S390)
# define HAVE_MONOTONIC
# define TIMER_FREQ 1000000000ULL
# define TIMER_FREQ 1000000000ULL
extern unsigned long long monotonic_clock(void);
static inline unsigned long long monotonic_clock(void)
static unsigned long long hangcheck_tsc, hangcheck_tsc_margin;
static void hangcheck_fire(unsigned long);
static DEFINE_TIMER(hangcheck_ticktock, hangcheck_fire, 0, 0);
static void hangcheck_fire(unsigned long data)
static int __init hangcheck_init(void)
static void __exit hangcheck_exit(void)
module_init(hangcheck_init);
module_exit(hangcheck_exit);
