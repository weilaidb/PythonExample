DEFINE_PER_CPU(struct cpuidle_device *, cpuidle_devices);
DEFINE_MUTEX(cpuidle_lock);
LIST_HEAD(cpuidle_detected_devices);
static void (*pm_idle_old)(void);
static int enabled_devices;
#if defined(CONFIG_ARCH_HAS_CPU_IDLE_WAIT)
static void cpuidle_kick_cpus(void)
#elif defined(CONFIG_SMP)
# error "Arch needs cpu_idle_wait() equivalent here"
static void cpuidle_kick_cpus(void)
static int __cpuidle_register_device(struct cpuidle_device *dev);
static void cpuidle_idle_call(void)
void cpuidle_install_idle_handler(void)
void cpuidle_uninstall_idle_handler(void)
void cpuidle_pause_and_lock(void)
EXPORT_SYMBOL_GPL(cpuidle_pause_and_lock);
void cpuidle_resume_and_unlock(void)
EXPORT_SYMBOL_GPL(cpuidle_resume_and_unlock);
static int poll_idle(struct cpuidle_device *dev, struct cpuidle_state *st)
static void poll_idle_init(struct cpuidle_device *dev)
static void poll_idle_init(struct cpuidle_device *dev)
int cpuidle_enable_device(struct cpuidle_device *dev)
EXPORT_SYMBOL_GPL(cpuidle_enable_device);
void cpuidle_disable_device(struct cpuidle_device *dev)
EXPORT_SYMBOL_GPL(cpuidle_disable_device);
static int __cpuidle_register_device(struct cpuidle_device *dev)
int cpuidle_register_device(struct cpuidle_device *dev)
EXPORT_SYMBOL_GPL(cpuidle_register_device);
void cpuidle_unregister_device(struct cpuidle_device *dev)
EXPORT_SYMBOL_GPL(cpuidle_unregister_device);
static void smp_callback(void *v)
static int cpuidle_latency_notify(struct notifier_block *b,
unsigned long l, void *v)
static struct notifier_block cpuidle_latency_notifier = ;
static inline void latency_notifier_init(struct notifier_block *n)
#define latency_notifier_init(x) do  while (0)
static int __init cpuidle_init(void)
core_initcall(cpuidle_init);
