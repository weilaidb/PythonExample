static void enable_hotplug_cpu(int cpu)
static void disable_hotplug_cpu(int cpu)
static int vcpu_online(unsigned int cpu)
static void vcpu_hotplug(unsigned int cpu)
static void handle_vcpu_hotplug_event(struct xenbus_watch *watch,
const char **vec, unsigned int len)
static int setup_cpu_watcher(struct notifier_block *notifier,
unsigned long event, void *data)
static int __init setup_vcpu_hotplug_event(void)
arch_initcall(setup_vcpu_hotplug_event);
