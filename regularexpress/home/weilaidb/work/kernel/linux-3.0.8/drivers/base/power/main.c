LIST_HEAD(dpm_list);
LIST_HEAD(dpm_prepared_list);
LIST_HEAD(dpm_suspended_list);
LIST_HEAD(dpm_noirq_list);
static DEFINE_MUTEX(dpm_list_mtx);
static pm_message_t pm_transition;
static int async_error;
void device_pm_init(struct device *dev)
void device_pm_lock(void)
void device_pm_unlock(void)
void device_pm_add(struct device *dev)
void device_pm_remove(struct device *dev)
void device_pm_move_before(struct device *deva, struct device *devb)
void device_pm_move_after(struct device *deva, struct device *devb)
void device_pm_move_last(struct device *dev)
static ktime_t initcall_debug_start(struct device *dev)
static void initcall_debug_report(struct device *dev, ktime_t calltime,
int error)
static void dpm_wait(struct device *dev, bool async)
static int dpm_wait_fn(struct device *dev, void *async_ptr)
static void dpm_wait_for_children(struct device *dev, bool async)
static int pm_op(struct device *dev,
const struct dev_pm_ops *ops,
pm_message_t state)
static int pm_noirq_op(struct device *dev,
const struct dev_pm_ops *ops,
pm_message_t state)
static char *pm_verb(int event)
static void pm_dev_dbg(struct device *dev, pm_message_t state, char *info)
static void pm_dev_err(struct device *dev, pm_message_t state, char *info,
int error)
static void dpm_show_time(ktime_t starttime, pm_message_t state, char *info)
static int device_resume_noirq(struct device *dev, pm_message_t state)
void dpm_resume_noirq(pm_message_t state)
EXPORT_SYMBOL_GPL(dpm_resume_noirq);
static int legacy_resume(struct device *dev, int (*cb)(struct device *dev))
static int device_resume(struct device *dev, pm_message_t state, bool async)
static void async_resume(void *data, async_cookie_t cookie)
static bool is_async(struct device *dev)
void dpm_resume(pm_message_t state)
static void device_complete(struct device *dev, pm_message_t state)
void dpm_complete(pm_message_t state)
void dpm_resume_end(pm_message_t state)
EXPORT_SYMBOL_GPL(dpm_resume_end);
static pm_message_t resume_event(pm_message_t sleep_state)
static int device_suspend_noirq(struct device *dev, pm_message_t state)
int dpm_suspend_noirq(pm_message_t state)
EXPORT_SYMBOL_GPL(dpm_suspend_noirq);
static int legacy_suspend(struct device *dev, pm_message_t state,
int (*cb)(struct device *dev, pm_message_t state))
static int __device_suspend(struct device *dev, pm_message_t state, bool async)
static void async_suspend(void *data, async_cookie_t cookie)
static int device_suspend(struct device *dev)
int dpm_suspend(pm_message_t state)
static int device_prepare(struct device *dev, pm_message_t state)
int dpm_prepare(pm_message_t state)
int dpm_suspend_start(pm_message_t state)
EXPORT_SYMBOL_GPL(dpm_suspend_start);
void __suspend_report_result(const char *function, void *fn, int ret)
EXPORT_SYMBOL_GPL(__suspend_report_result);
int device_pm_wait_for_dev(struct device *subordinate, struct device *dev)
EXPORT_SYMBOL_GPL(device_pm_wait_for_dev);
