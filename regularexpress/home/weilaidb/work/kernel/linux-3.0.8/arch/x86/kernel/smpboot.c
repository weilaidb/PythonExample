DEFINE_PER_CPU(int, cpu_state) = ;
static DEFINE_PER_CPU(struct task_struct *, idle_thread_array);
#define get_idle_for_cpu(x)      (per_cpu(idle_thread_array, x))
#define set_idle_for_cpu(x, p)   (per_cpu(idle_thread_array, x) = (p))
static DEFINE_MUTEX(x86_cpu_hotplug_driver_mutex);
void cpu_hotplug_driver_lock(void)
void cpu_hotplug_driver_unlock(void)
ssize_t arch_cpu_probe(const char *buf, size_t count)
ssize_t arch_cpu_release(const char *buf, size_t count)
static struct task_struct *idle_thread_array[NR_CPUS] __cpuinitdata ;
#define get_idle_for_cpu(x)      (idle_thread_array[(x)])
#define set_idle_for_cpu(x, p)   (idle_thread_array[(x)] = (p))
int smp_num_siblings = 1;
EXPORT_SYMBOL(smp_num_siblings);
DEFINE_PER_CPU(u16, cpu_llc_id) = BAD_APICID;
DEFINE_PER_CPU(cpumask_var_t, cpu_sibling_map);
EXPORT_PER_CPU_SYMBOL(cpu_sibling_map);
DEFINE_PER_CPU(cpumask_var_t, cpu_core_map);
EXPORT_PER_CPU_SYMBOL(cpu_core_map);
DEFINE_PER_CPU(cpumask_var_t, cpu_llc_shared_map);
DEFINE_PER_CPU_SHARED_ALIGNED(struct cpuinfo_x86, cpu_info);
EXPORT_PER_CPU_SYMBOL(cpu_info);
atomic_t init_deasserted;
static void __cpuinit smp_callin(void)
notrace static void __cpuinit start_secondary(void *unused)
void __cpuinit smp_store_cpu_info(int id)
static void __cpuinit link_thread_siblings(int cpu1, int cpu2)
void __cpuinit set_cpu_sibling_map(int cpu)
const struct cpumask *cpu_coregroup_mask(int cpu)
static void impress_friends(void)
void __inquire_remote_apic(int apicid)
int __cpuinit
wakeup_secondary_cpu_via_nmi(int logical_apicid, unsigned long start_eip)
static int __cpuinit
wakeup_secondary_cpu_via_init(int phys_apicid, unsigned long start_eip)
struct create_idle ;
static void __cpuinit do_fork_idle(struct work_struct *work)
static void __cpuinit announce_cpu(int cpu, int apicid)
static int __cpuinit do_boot_cpu(int apicid, int cpu)
int __cpuinit native_cpu_up(unsigned int cpu)
void arch_disable_smp_support(void)
static __init void disable_smp(void)
static int __init smp_sanity_check(unsigned max_cpus)
static void __init smp_cpu_index_default(void)
void __init native_smp_prepare_cpus(unsigned int max_cpus)
void arch_disable_nonboot_cpus_begin(void)
void arch_disable_nonboot_cpus_end(void)
void arch_enable_nonboot_cpus_begin(void)
void arch_enable_nonboot_cpus_end(void)
void __init native_smp_prepare_boot_cpu(void)
void __init native_smp_cpus_done(unsigned int max_cpus)
static int __initdata setup_possible_cpus = -1;
static int __init _setup_possible_cpus(char *str)
early_param("possible_cpus", _setup_possible_cpus);
__init void prefill_possible_map(void)
static void remove_siblinginfo(int cpu)
static void __ref remove_cpu_from_maps(int cpu)
void cpu_disable_common(void)
int native_cpu_disable(void)
void native_cpu_die(unsigned int cpu)
void play_dead_common(void)
static inline void mwait_play_dead(void)
static inline void hlt_play_dead(void)
void native_play_dead(void)
int native_cpu_disable(void)
void native_cpu_die(unsigned int cpu)
void native_play_dead(void)
