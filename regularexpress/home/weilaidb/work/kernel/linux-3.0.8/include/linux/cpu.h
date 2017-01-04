#define _LINUX_CPU_H_
struct cpu ;
extern int register_cpu(struct cpu *cpu, int num);
extern struct sys_device *get_cpu_sysdev(unsigned cpu);
extern int cpu_add_sysdev_attr(struct sysdev_attribute *attr);
extern void cpu_remove_sysdev_attr(struct sysdev_attribute *attr);
extern int cpu_add_sysdev_attr_group(struct attribute_group *attrs);
extern void cpu_remove_sysdev_attr_group(struct attribute_group *attrs);
extern int sched_create_sysfs_power_savings_entries(struct sysdev_class *cls);
extern void unregister_cpu(struct cpu *cpu);
extern ssize_t arch_cpu_probe(const char *, size_t);
extern ssize_t arch_cpu_release(const char *, size_t);
struct notifier_block;
enum ;
#if defined(CONFIG_HOTPLUG_CPU) || !defined(MODULE)
#define cpu_notifier(fn, pri)
#define cpu_notifier(fn, pri)	do  while (0)
extern int register_cpu_notifier(struct notifier_block *nb);
extern void unregister_cpu_notifier(struct notifier_block *nb);
extern int register_cpu_notifier(struct notifier_block *nb);
static inline int register_cpu_notifier(struct notifier_block *nb)
static inline void unregister_cpu_notifier(struct notifier_block *nb)
int cpu_up(unsigned int cpu);
void notify_cpu_starting(unsigned int cpu);
extern void cpu_maps_update_begin(void);
extern void cpu_maps_update_done(void);
#define cpu_notifier(fn, pri)	do  while (0)
static inline int register_cpu_notifier(struct notifier_block *nb)
static inline void unregister_cpu_notifier(struct notifier_block *nb)
static inline void cpu_maps_update_begin(void)
static inline void cpu_maps_update_done(void)
extern struct sysdev_class cpu_sysdev_class;
extern void get_online_cpus(void);
extern void put_online_cpus(void);
#define hotcpu_notifier(fn, pri)	cpu_notifier(fn, pri)
#define register_hotcpu_notifier(nb)	register_cpu_notifier(nb)
#define unregister_hotcpu_notifier(nb)	unregister_cpu_notifier(nb)
int cpu_down(unsigned int cpu);
extern void cpu_hotplug_driver_lock(void);
extern void cpu_hotplug_driver_unlock(void);
static inline void cpu_hotplug_driver_lock(void)
static inline void cpu_hotplug_driver_unlock(void)
#define get_online_cpus()	do  while (0)
#define put_online_cpus()	do  while (0)
#define hotcpu_notifier(fn, pri)	do  while (0)
#define register_hotcpu_notifier(nb)	()
#define unregister_hotcpu_notifier(nb)	()
extern int suspend_cpu_hotplug;
extern int disable_nonboot_cpus(void);
extern void enable_nonboot_cpus(void);
#define suspend_cpu_hotplug	0
static inline int disable_nonboot_cpus(void)
static inline void enable_nonboot_cpus(void)
