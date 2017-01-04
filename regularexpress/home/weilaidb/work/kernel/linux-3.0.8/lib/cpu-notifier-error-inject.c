static int priority;
static int cpu_up_prepare_error;
static int cpu_down_prepare_error;
module_param(priority, int, 0);
MODULE_PARM_DESC(priority, "specify cpu notifier priority");
module_param(cpu_up_prepare_error, int, 0644);
MODULE_PARM_DESC(cpu_up_prepare_error,
"specify error code to inject CPU_UP_PREPARE action");
module_param(cpu_down_prepare_error, int, 0644);
MODULE_PARM_DESC(cpu_down_prepare_error,
"specify error code to inject CPU_DOWN_PREPARE action");
static int err_inject_cpu_callback(struct notifier_block *nfb,
unsigned long action, void *hcpu)
static struct notifier_block err_inject_cpu_notifier = ;
static int err_inject_init(void)
static void err_inject_exit(void)
module_init(err_inject_init);
module_exit(err_inject_exit);
MODULE_DESCRIPTION("CPU notifier error injection module");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Akinobu Mita <akinobu.mita@gmail.com>");
