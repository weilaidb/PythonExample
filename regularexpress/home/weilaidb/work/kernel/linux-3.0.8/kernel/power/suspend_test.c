#define TEST_SUSPEND_SECONDS	10
static unsigned long suspend_test_start_time;
void suspend_test_start(void)
void suspend_test_finish(const char *label)
static void __init test_wakealarm(struct rtc_device *rtc, suspend_state_t state)
static int __init has_wakealarm(struct device *dev, void *name_ptr)
static suspend_state_t test_state __initdata = PM_SUSPEND_ON;
static char warn_bad_state[] __initdata =
KERN_WARNING "PM: can't test '%s' suspend state\n";
static int __init setup_test_suspend(char *value)
__setup("test_suspend", setup_test_suspend);
static int __init test_suspend(void)
late_initcall(test_suspend);
