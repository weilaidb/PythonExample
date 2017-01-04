static struct cpuidle_driver *cpuidle_curr_driver;
DEFINE_SPINLOCK(cpuidle_driver_lock);
int cpuidle_register_driver(struct cpuidle_driver *drv)
EXPORT_SYMBOL_GPL(cpuidle_register_driver);
struct cpuidle_driver *cpuidle_get_driver(void)
EXPORT_SYMBOL_GPL(cpuidle_get_driver);
void cpuidle_unregister_driver(struct cpuidle_driver *drv)
EXPORT_SYMBOL_GPL(cpuidle_unregister_driver);
