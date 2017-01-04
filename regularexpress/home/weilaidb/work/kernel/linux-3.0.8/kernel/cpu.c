static DEFINE_MUTEX(cpu_add_remove_lock);
void cpu_maps_update_begin(void)
void cpu_maps_update_done(void)
static RAW_NOTIFIER_HEAD(cpu_chain);
static int cpu_hotplug_disabled;
static struct  cpu_hotplug = ;
void get_online_cpus(void)
EXPORT_SYMBOL_GPL(get_online_cpus);
void put_online_cpus(void)
EXPORT_SYMBOL_GPL(put_online_cpus);
static void cpu_hotplug_begin(void)
static void cpu_hotplug_done(void)
static void cpu_hotplug_begin(void)
static void cpu_hotplug_done(void)
int __ref register_cpu_notifier(struct notifier_block *nb)
static int __cpu_notify(unsigned long val, void *v, int nr_to_call,
int *nr_calls)
static int cpu_notify(unsigned long val, void *v)
static void cpu_notify_nofail(unsigned long val, void *v)
EXPORT_SYMBOL(register_cpu_notifier);
void __ref unregister_cpu_notifier(struct notifier_block *nb)
EXPORT_SYMBOL(unregister_cpu_notifier);
static inline void check_for_tasks(int cpu)
struct take_cpu_down_param ;
static int __ref take_cpu_down(void *_param)
static int __ref _cpu_down(unsigned int cpu, int tasks_frozen)
int __ref cpu_down(unsigned int cpu)
EXPORT_SYMBOL(cpu_down);
static int __cpuinit _cpu_up(unsigned int cpu, int tasks_frozen)
int __cpuinit cpu_up(unsigned int cpu)
static cpumask_var_t frozen_cpus;
void __weak arch_disable_nonboot_cpus_begin(void)
void __weak arch_disable_nonboot_cpus_end(void)
int disable_nonboot_cpus(void)
void __weak arch_enable_nonboot_cpus_begin(void)
void __weak arch_enable_nonboot_cpus_end(void)
void __ref enable_nonboot_cpus(void)
static int alloc_frozen_cpus(void)
core_initcall(alloc_frozen_cpus);
void __cpuinit notify_cpu_starting(unsigned int cpu)
#define MASK_DECLARE_1(x)	[x+1][0] = (1UL << (x))
#define MASK_DECLARE_2(x)	MASK_DECLARE_1(x), MASK_DECLARE_1(x+1)
#define MASK_DECLARE_4(x)	MASK_DECLARE_2(x), MASK_DECLARE_2(x+2)
#define MASK_DECLARE_8(x)	MASK_DECLARE_4(x), MASK_DECLARE_4(x+4)
const unsigned long cpu_bit_bitmap[BITS_PER_LONG+1][BITS_TO_LONGS(NR_CPUS)] = ;
EXPORT_SYMBOL_GPL(cpu_bit_bitmap);
const DECLARE_BITMAP(cpu_all_bits, NR_CPUS) = CPU_BITS_ALL;
EXPORT_SYMBOL(cpu_all_bits);
static DECLARE_BITMAP(cpu_possible_bits, CONFIG_NR_CPUS) __read_mostly
= CPU_BITS_ALL;
static DECLARE_BITMAP(cpu_possible_bits, CONFIG_NR_CPUS) __read_mostly;
const struct cpumask *const cpu_possible_mask = to_cpumask(cpu_possible_bits);
EXPORT_SYMBOL(cpu_possible_mask);
static DECLARE_BITMAP(cpu_online_bits, CONFIG_NR_CPUS) __read_mostly;
const struct cpumask *const cpu_online_mask = to_cpumask(cpu_online_bits);
EXPORT_SYMBOL(cpu_online_mask);
static DECLARE_BITMAP(cpu_present_bits, CONFIG_NR_CPUS) __read_mostly;
const struct cpumask *const cpu_present_mask = to_cpumask(cpu_present_bits);
EXPORT_SYMBOL(cpu_present_mask);
static DECLARE_BITMAP(cpu_active_bits, CONFIG_NR_CPUS) __read_mostly;
const struct cpumask *const cpu_active_mask = to_cpumask(cpu_active_bits);
EXPORT_SYMBOL(cpu_active_mask);
void set_cpu_possible(unsigned int cpu, bool possible)
void set_cpu_present(unsigned int cpu, bool present)
void set_cpu_online(unsigned int cpu, bool online)
void set_cpu_active(unsigned int cpu, bool active)
void init_cpu_present(const struct cpumask *src)
void init_cpu_possible(const struct cpumask *src)
void init_cpu_online(const struct cpumask *src)
