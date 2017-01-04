static int rpm_resume(struct device *dev, int rpmflags);
static int rpm_suspend(struct device *dev, int rpmflags);
void update_pm_runtime_accounting(struct device *dev)
static void __update_runtime_status(struct device *dev, enum rpm_status status)
static void pm_runtime_deactivate_timer(struct device *dev)
static void pm_runtime_cancel_pending(struct device *dev)
unsigned long pm_runtime_autosuspend_expiration(struct device *dev)
EXPORT_SYMBOL_GPL(pm_runtime_autosuspend_expiration);
static int rpm_check_suspend_allowed(struct device *dev)
static int rpm_idle(struct device *dev, int rpmflags)
static int rpm_callback(int (*cb)(struct device *), struct device *dev)
__releases(&dev->power.lock) __acquires(&dev->power.lock)
static int rpm_suspend(struct device *dev, int rpmflags)
__releases(&dev->power.lock) __acquires(&dev->power.lock)
static int rpm_resume(struct device *dev, int rpmflags)
__releases(&dev->power.lock) __acquires(&dev->power.lock)
static void pm_runtime_work(struct work_struct *work)
static void pm_suspend_timer_fn(unsigned long data)
int pm_schedule_suspend(struct device *dev, unsigned int delay)
EXPORT_SYMBOL_GPL(pm_schedule_suspend);
int __pm_runtime_idle(struct device *dev, int rpmflags)
EXPORT_SYMBOL_GPL(__pm_runtime_idle);
int __pm_runtime_suspend(struct device *dev, int rpmflags)
EXPORT_SYMBOL_GPL(__pm_runtime_suspend);
int __pm_runtime_resume(struct device *dev, int rpmflags)
EXPORT_SYMBOL_GPL(__pm_runtime_resume);
int __pm_runtime_set_status(struct device *dev, unsigned int status)
EXPORT_SYMBOL_GPL(__pm_runtime_set_status);
static void __pm_runtime_barrier(struct device *dev)
int pm_runtime_barrier(struct device *dev)
EXPORT_SYMBOL_GPL(pm_runtime_barrier);
void __pm_runtime_disable(struct device *dev, bool check_resume)
EXPORT_SYMBOL_GPL(__pm_runtime_disable);
void pm_runtime_enable(struct device *dev)
EXPORT_SYMBOL_GPL(pm_runtime_enable);
void pm_runtime_forbid(struct device *dev)
EXPORT_SYMBOL_GPL(pm_runtime_forbid);
void pm_runtime_allow(struct device *dev)
EXPORT_SYMBOL_GPL(pm_runtime_allow);
void pm_runtime_no_callbacks(struct device *dev)
EXPORT_SYMBOL_GPL(pm_runtime_no_callbacks);
void pm_runtime_irq_safe(struct device *dev)
EXPORT_SYMBOL_GPL(pm_runtime_irq_safe);
static void update_autosuspend(struct device *dev, int old_delay, int old_use)
void pm_runtime_set_autosuspend_delay(struct device *dev, int delay)
EXPORT_SYMBOL_GPL(pm_runtime_set_autosuspend_delay);
void __pm_runtime_use_autosuspend(struct device *dev, bool use)
EXPORT_SYMBOL_GPL(__pm_runtime_use_autosuspend);
void pm_runtime_init(struct device *dev)
void pm_runtime_remove(struct device *dev)
