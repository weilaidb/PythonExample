#define CREATE_TRACE_POINTS
irq_cpustat_t irq_stat[NR_CPUS] ____cacheline_aligned;
EXPORT_SYMBOL(irq_stat);
static struct softirq_action softirq_vec[NR_SOFTIRQS] __cacheline_aligned_in_smp;
DEFINE_PER_CPU(struct task_struct *, ksoftirqd);
char *softirq_to_name[NR_SOFTIRQS] = ;
static void wakeup_softirqd(void)
static void __local_bh_disable(unsigned long ip, unsigned int cnt)
static inline void __local_bh_disable(unsigned long ip, unsigned int cnt)
void local_bh_disable(void)
EXPORT_SYMBOL(local_bh_disable);
static void __local_bh_enable(unsigned int cnt)
void _local_bh_enable(void)
EXPORT_SYMBOL(_local_bh_enable);
static inline void _local_bh_enable_ip(unsigned long ip)
void local_bh_enable(void)
EXPORT_SYMBOL(local_bh_enable);
void local_bh_enable_ip(unsigned long ip)
EXPORT_SYMBOL(local_bh_enable_ip);
#define MAX_SOFTIRQ_RESTART 10
asmlinkage void __do_softirq(void)
asmlinkage void do_softirq(void)
void irq_enter(void)
static inline void invoke_softirq(void)
static inline void invoke_softirq(void)
void irq_exit(void)
inline void raise_softirq_irqoff(unsigned int nr)
void raise_softirq(unsigned int nr)
void open_softirq(int nr, void (*action)(struct softirq_action *))
struct tasklet_head
;
static DEFINE_PER_CPU(struct tasklet_head, tasklet_vec);
static DEFINE_PER_CPU(struct tasklet_head, tasklet_hi_vec);
void __tasklet_schedule(struct tasklet_struct *t)
EXPORT_SYMBOL(__tasklet_schedule);
void __tasklet_hi_schedule(struct tasklet_struct *t)
EXPORT_SYMBOL(__tasklet_hi_schedule);
void __tasklet_hi_schedule_first(struct tasklet_struct *t)
EXPORT_SYMBOL(__tasklet_hi_schedule_first);
static void tasklet_action(struct softirq_action *a)
static void tasklet_hi_action(struct softirq_action *a)
void tasklet_init(struct tasklet_struct *t,
void (*func)(unsigned long), unsigned long data)
EXPORT_SYMBOL(tasklet_init);
void tasklet_kill(struct tasklet_struct *t)
EXPORT_SYMBOL(tasklet_kill);
static enum hrtimer_restart __hrtimer_tasklet_trampoline(struct hrtimer *timer)
static void __tasklet_hrtimer_trampoline(unsigned long data)
void tasklet_hrtimer_init(struct tasklet_hrtimer *ttimer,
enum hrtimer_restart (*function)(struct hrtimer *),
clockid_t which_clock, enum hrtimer_mode mode)
EXPORT_SYMBOL_GPL(tasklet_hrtimer_init);
DEFINE_PER_CPU(struct list_head [NR_SOFTIRQS], softirq_work_list);
EXPORT_PER_CPU_SYMBOL(softirq_work_list);
static void __local_trigger(struct call_single_data *cp, int softirq)
static void remote_softirq_receive(void *data)
static int __try_remote_softirq(struct call_single_data *cp, int cpu, int softirq)
static int __try_remote_softirq(struct call_single_data *cp, int cpu, int softirq)
void __send_remote_softirq(struct call_single_data *cp, int cpu, int this_cpu, int softirq)
EXPORT_SYMBOL(__send_remote_softirq);
void send_remote_softirq(struct call_single_data *cp, int cpu, int softirq)
EXPORT_SYMBOL(send_remote_softirq);
static int __cpuinit remote_softirq_cpu_notify(struct notifier_block *self,
unsigned long action, void *hcpu)
static struct notifier_block __cpuinitdata remote_softirq_cpu_notifier = ;
void __init softirq_init(void)
static int run_ksoftirqd(void * __bind_cpu)
void tasklet_kill_immediate(struct tasklet_struct *t, unsigned int cpu)
static void takeover_tasklets(unsigned int cpu)
static int __cpuinit cpu_callback(struct notifier_block *nfb,
unsigned long action,
void *hcpu)
static struct notifier_block __cpuinitdata cpu_nfb = ;
static __init int spawn_ksoftirqd(void)
early_initcall(spawn_ksoftirqd);
int __init __weak early_irq_init(void)
int __init __weak arch_probe_nr_irqs(void)
int __init __weak arch_early_irq_init(void)
