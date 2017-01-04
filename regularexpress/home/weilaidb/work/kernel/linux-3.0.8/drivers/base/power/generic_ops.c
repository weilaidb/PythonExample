int pm_generic_runtime_idle(struct device *dev)
EXPORT_SYMBOL_GPL(pm_generic_runtime_idle);
int pm_generic_runtime_suspend(struct device *dev)
EXPORT_SYMBOL_GPL(pm_generic_runtime_suspend);
int pm_generic_runtime_resume(struct device *dev)
EXPORT_SYMBOL_GPL(pm_generic_runtime_resume);
int pm_generic_prepare(struct device *dev)
static int __pm_generic_call(struct device *dev, int event)
int pm_generic_suspend(struct device *dev)
EXPORT_SYMBOL_GPL(pm_generic_suspend);
int pm_generic_freeze(struct device *dev)
EXPORT_SYMBOL_GPL(pm_generic_freeze);
int pm_generic_poweroff(struct device *dev)
EXPORT_SYMBOL_GPL(pm_generic_poweroff);
int pm_generic_thaw(struct device *dev)
EXPORT_SYMBOL_GPL(pm_generic_thaw);
static int __pm_generic_resume(struct device *dev, int event)
int pm_generic_resume(struct device *dev)
EXPORT_SYMBOL_GPL(pm_generic_resume);
int pm_generic_restore(struct device *dev)
EXPORT_SYMBOL_GPL(pm_generic_restore);
void pm_generic_complete(struct device *dev)
struct dev_pm_ops generic_subsys_pm_ops = ;
EXPORT_SYMBOL_GPL(generic_subsys_pm_ops);
