#define _LINUX_INTERRUPT_H
#define IRQF_TRIGGER_NONE	0x00000000
#define IRQF_TRIGGER_RISING	0x00000001
#define IRQF_TRIGGER_FALLING	0x00000002
#define IRQF_TRIGGER_HIGH	0x00000004
#define IRQF_TRIGGER_LOW	0x00000008
#define IRQF_TRIGGER_MASK	(IRQF_TRIGGER_HIGH | IRQF_TRIGGER_LOW | \
IRQF_TRIGGER_RISING | IRQF_TRIGGER_FALLING)
#define IRQF_TRIGGER_PROBE	0x00000010
#define IRQF_DISABLED		0x00000020
#define IRQF_SAMPLE_RANDOM	0x00000040
#define IRQF_SHARED		0x00000080
#define IRQF_PROBE_SHARED	0x00000100
#define __IRQF_TIMER		0x00000200
#define IRQF_PERCPU		0x00000400
#define IRQF_NOBALANCING	0x00000800
#define IRQF_IRQPOLL		0x00001000
#define IRQF_ONESHOT		0x00002000
#define IRQF_NO_SUSPEND		0x00004000
#define IRQF_FORCE_RESUME	0x00008000
#define IRQF_NO_THREAD		0x00010000
#define IRQF_TIMER		(__IRQF_TIMER | IRQF_NO_SUSPEND | IRQF_NO_THREAD)
enum ;
typedef irqreturn_t (*irq_handler_t)(int, void *);
struct irqaction  ____cacheline_internodealigned_in_smp;
extern irqreturn_t no_action(int cpl, void *dev_id);
extern int __must_check
request_threaded_irq(unsigned int irq, irq_handler_t handler,
irq_handler_t thread_fn,
unsigned long flags, const char *name, void *dev);
static inline int __must_check
request_irq(unsigned int irq, irq_handler_t handler, unsigned long flags,
const char *name, void *dev)
extern int __must_check
request_any_context_irq(unsigned int irq, irq_handler_t handler,
unsigned long flags, const char *name, void *dev_id);
extern void exit_irq_thread(void);
extern int __must_check
request_irq(unsigned int irq, irq_handler_t handler, unsigned long flags,
const char *name, void *dev);
static inline int __must_check
request_threaded_irq(unsigned int irq, irq_handler_t handler,
irq_handler_t thread_fn,
unsigned long flags, const char *name, void *dev)
static inline int __must_check
request_any_context_irq(unsigned int irq, irq_handler_t handler,
unsigned long flags, const char *name, void *dev_id)
static inline void exit_irq_thread(void)
extern void free_irq(unsigned int, void *);
struct device;
extern int __must_check
devm_request_threaded_irq(struct device *dev, unsigned int irq,
irq_handler_t handler, irq_handler_t thread_fn,
unsigned long irqflags, const char *devname,
void *dev_id);
static inline int __must_check
devm_request_irq(struct device *dev, unsigned int irq, irq_handler_t handler,
unsigned long irqflags, const char *devname, void *dev_id)
extern void devm_free_irq(struct device *dev, unsigned int irq, void *dev_id);
# define local_irq_enable_in_hardirq()	do  while (0)
# define local_irq_enable_in_hardirq()	local_irq_enable()
extern void disable_irq_nosync(unsigned int irq);
extern void disable_irq(unsigned int irq);
extern void enable_irq(unsigned int irq);
extern void suspend_device_irqs(void);
extern void resume_device_irqs(void);
extern int check_wakeup_irqs(void);
static inline int check_wakeup_irqs(void)
static inline void suspend_device_irqs(void) ;
static inline void resume_device_irqs(void) ;
static inline int check_wakeup_irqs(void)
#if defined(CONFIG_SMP) && defined(CONFIG_GENERIC_HARDIRQS)
extern cpumask_var_t irq_default_affinity;
extern int irq_set_affinity(unsigned int irq, const struct cpumask *cpumask);
extern int irq_can_set_affinity(unsigned int irq);
extern int irq_select_affinity(unsigned int irq);
extern int irq_set_affinity_hint(unsigned int irq, const struct cpumask *m);
struct irq_affinity_notify ;
extern int
irq_set_affinity_notifier(unsigned int irq, struct irq_affinity_notify *notify);
static inline void irq_run_affinity_notifiers(void)
static inline int irq_set_affinity(unsigned int irq, const struct cpumask *m)
static inline int irq_can_set_affinity(unsigned int irq)
static inline int irq_select_affinity(unsigned int irq)
static inline int irq_set_affinity_hint(unsigned int irq,
const struct cpumask *m)
static inline void disable_irq_nosync_lockdep(unsigned int irq)
static inline void disable_irq_nosync_lockdep_irqsave(unsigned int irq, unsigned long *flags)
static inline void disable_irq_lockdep(unsigned int irq)
static inline void enable_irq_lockdep(unsigned int irq)
static inline void enable_irq_lockdep_irqrestore(unsigned int irq, unsigned long *flags)
extern int irq_set_irq_wake(unsigned int irq, unsigned int on);
static inline int enable_irq_wake(unsigned int irq)
static inline int disable_irq_wake(unsigned int irq)
#  define disable_irq_nosync_lockdep(irq)	disable_irq_nosync(irq)
#  define disable_irq_nosync_lockdep_irqsave(irq, flags) \
disable_irq_nosync(irq)
#  define disable_irq_lockdep(irq)		disable_irq(irq)
#  define enable_irq_lockdep(irq)		enable_irq(irq)
#  define enable_irq_lockdep_irqrestore(irq, flags) \
enable_irq(irq)
# endif
static inline int enable_irq_wake(unsigned int irq)
static inline int disable_irq_wake(unsigned int irq)
extern bool force_irqthreads;
#define force_irqthreads	(0)
#define set_softirq_pending(x) (local_softirq_pending() = (x))
#define or_softirq_pending(x)  (local_softirq_pending() |= (x))
#define hard_irq_disable()	do  while(0)
enum
;
extern char *softirq_to_name[NR_SOFTIRQS];
struct softirq_action
;
asmlinkage void do_softirq(void);
asmlinkage void __do_softirq(void);
extern void open_softirq(int nr, void (*action)(struct softirq_action *));
extern void softirq_init(void);
static inline void __raise_softirq_irqoff(unsigned int nr)
extern void raise_softirq_irqoff(unsigned int nr);
extern void raise_softirq(unsigned int nr);
DECLARE_PER_CPU(struct list_head [NR_SOFTIRQS], softirq_work_list);
DECLARE_PER_CPU(struct task_struct *, ksoftirqd);
static inline struct task_struct *this_cpu_ksoftirqd(void)
extern void send_remote_softirq(struct call_single_data *cp, int cpu, int softirq);
extern void __send_remote_softirq(struct call_single_data *cp, int cpu,
int this_cpu, int softirq);
struct tasklet_struct
;
#define DECLARE_TASKLET(name, func, data) \
struct tasklet_struct name =
#define DECLARE_TASKLET_DISABLED(name, func, data) \
struct tasklet_struct name =
enum
;
static inline int tasklet_trylock(struct tasklet_struct *t)
static inline void tasklet_unlock(struct tasklet_struct *t)
static inline void tasklet_unlock_wait(struct tasklet_struct *t)
#define tasklet_trylock(t) 1
#define tasklet_unlock_wait(t) do  while (0)
#define tasklet_unlock(t) do  while (0)
extern void __tasklet_schedule(struct tasklet_struct *t);
static inline void tasklet_schedule(struct tasklet_struct *t)
extern void __tasklet_hi_schedule(struct tasklet_struct *t);
static inline void tasklet_hi_schedule(struct tasklet_struct *t)
extern void __tasklet_hi_schedule_first(struct tasklet_struct *t);
static inline void tasklet_hi_schedule_first(struct tasklet_struct *t)
static inline void tasklet_disable_nosync(struct tasklet_struct *t)
static inline void tasklet_disable(struct tasklet_struct *t)
static inline void tasklet_enable(struct tasklet_struct *t)
static inline void tasklet_hi_enable(struct tasklet_struct *t)
extern void tasklet_kill(struct tasklet_struct *t);
extern void tasklet_kill_immediate(struct tasklet_struct *t, unsigned int cpu);
extern void tasklet_init(struct tasklet_struct *t,
void (*func)(unsigned long), unsigned long data);
struct tasklet_hrtimer ;
extern void
tasklet_hrtimer_init(struct tasklet_hrtimer *ttimer,
enum hrtimer_restart (*function)(struct hrtimer *),
clockid_t which_clock, enum hrtimer_mode mode);
static inline
int tasklet_hrtimer_start(struct tasklet_hrtimer *ttimer, ktime_t time,
const enum hrtimer_mode mode)
static inline
void tasklet_hrtimer_cancel(struct tasklet_hrtimer *ttimer)
#if defined(CONFIG_GENERIC_HARDIRQS) && !defined(CONFIG_GENERIC_IRQ_PROBE)
static inline unsigned long probe_irq_on(void)
static inline int probe_irq_off(unsigned long val)
static inline unsigned int probe_irq_mask(unsigned long val)
extern unsigned long probe_irq_on(void);
extern int probe_irq_off(unsigned long);
extern unsigned int probe_irq_mask(unsigned long);
extern void init_irq_proc(void);
static inline void init_irq_proc(void)
struct seq_file;
int show_interrupts(struct seq_file *p, void *v);
int arch_show_interrupts(struct seq_file *p, int prec);
extern int early_irq_init(void);
extern int arch_probe_nr_irqs(void);
extern int arch_early_irq_init(void);
