static void backtrace_test_normal(void)
static DECLARE_COMPLETION(backtrace_work);
static void backtrace_test_irq_callback(unsigned long data)
static DECLARE_TASKLET(backtrace_tasklet, &backtrace_test_irq_callback, 0);
static void backtrace_test_irq(void)
static void backtrace_test_saved(void)
static void backtrace_test_saved(void)
static int backtrace_regression_test(void)
static void exitf(void)
module_init(backtrace_regression_test);
module_exit(exitf);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Arjan van de Ven <arjan@linux.intel.com>");
