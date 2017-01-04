#define KMSG_COMPONENT	"appldata"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define APPLDATA_CPU_INTERVAL	10000
#define TOD_MICRO	0x01000
static struct platform_device *appldata_pdev;
static const char appldata_proc_name[APPLDATA_PROC_NAME_LENGTH] = "appldata";
static int appldata_timer_handler(ctl_table *ctl, int write,
void __user *buffer, size_t *lenp, loff_t *ppos);
static int appldata_interval_handler(ctl_table *ctl, int write,
void __user *buffer,
size_t *lenp, loff_t *ppos);
static struct ctl_table_header *appldata_sysctl_header;
static struct ctl_table appldata_table[] = ;
static struct ctl_table appldata_dir_table[] = ;
static DEFINE_PER_CPU(struct vtimer_list, appldata_timer);
static atomic_t appldata_expire_count = ATOMIC_INIT(0);
static DEFINE_SPINLOCK(appldata_timer_lock);
static int appldata_interval = APPLDATA_CPU_INTERVAL;
static int appldata_timer_active;
static int appldata_timer_suspended = 0;
static struct workqueue_struct *appldata_wq;
static void appldata_work_fn(struct work_struct *work);
static DECLARE_WORK(appldata_work, appldata_work_fn);
static DEFINE_MUTEX(appldata_ops_mutex);
static LIST_HEAD(appldata_ops_list);
static void appldata_timer_function(unsigned long data)
static void appldata_work_fn(struct work_struct *work)
int appldata_diag(char record_nr, u16 function, unsigned long buffer,
u16 length, char *mod_lvl)
static void __appldata_mod_vtimer_wrap(void *p)
#define APPLDATA_ADD_TIMER	0
#define APPLDATA_DEL_TIMER	1
#define APPLDATA_MOD_TIMER	2
static void
__appldata_vtimer_setup(int cmd)
static int
appldata_timer_handler(ctl_table *ctl, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
static int
appldata_interval_handler(ctl_table *ctl, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
static int
appldata_generic_handler(ctl_table *ctl, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
int appldata_register_ops(struct appldata_ops *ops)
void appldata_unregister_ops(struct appldata_ops *ops)
static int appldata_freeze(struct device *dev)
static int appldata_restore(struct device *dev)
static int appldata_thaw(struct device *dev)
static const struct dev_pm_ops appldata_pm_ops = ;
static struct platform_driver appldata_pdrv = ;
static void __cpuinit appldata_online_cpu(int cpu)
static void __cpuinit appldata_offline_cpu(int cpu)
static int __cpuinit appldata_cpu_notify(struct notifier_block *self,
unsigned long action,
void *hcpu)
static struct notifier_block __cpuinitdata appldata_nb = ;
static int __init appldata_init(void)
__initcall(appldata_init);
EXPORT_SYMBOL_GPL(appldata_register_ops);
EXPORT_SYMBOL_GPL(appldata_unregister_ops);
EXPORT_SYMBOL_GPL(appldata_diag);
EXPORT_SYMBOL_GPL(si_swapinfo);
EXPORT_SYMBOL_GPL(nr_threads);
EXPORT_SYMBOL_GPL(nr_running);
EXPORT_SYMBOL_GPL(nr_iowait);
