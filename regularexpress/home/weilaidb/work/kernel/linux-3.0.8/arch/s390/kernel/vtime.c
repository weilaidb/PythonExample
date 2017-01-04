static DEFINE_PER_CPU(struct vtimer_queue, virt_cpu_timer);
DEFINE_PER_CPU(struct s390_idle_data, s390_idle);
static inline __u64 get_vtimer(void)
static inline void set_vtimer(__u64 expires)
static void do_account_vtime(struct task_struct *tsk, int hardirq_offset)
void account_vtime(struct task_struct *prev, struct task_struct *next)
void account_process_tick(struct task_struct *tsk, int user_tick)
void account_system_vtime(struct task_struct *tsk)
EXPORT_SYMBOL_GPL(account_system_vtime);
void __kprobes vtime_start_cpu(__u64 int_clock, __u64 enter_timer)
void __kprobes vtime_stop_cpu(void)
cputime64_t s390_get_idle_time(int cpu)
static void list_add_sorted(struct vtimer_list *timer, struct list_head *head)
static void do_callbacks(struct list_head *cb_list)
static void do_cpu_timer_interrupt(unsigned int ext_int_code,
unsigned int param32, unsigned long param64)
void init_virt_timer(struct vtimer_list *timer)
EXPORT_SYMBOL(init_virt_timer);
static inline int vtimer_pending(struct vtimer_list *timer)
static void internal_add_vtimer(struct vtimer_list *timer)
static inline void prepare_vtimer(struct vtimer_list *timer)
void add_virt_timer(void *new)
EXPORT_SYMBOL(add_virt_timer);
void add_virt_timer_periodic(void *new)
EXPORT_SYMBOL(add_virt_timer_periodic);
int __mod_vtimer(struct vtimer_list *timer, __u64 expires, int periodic)
int mod_virt_timer(struct vtimer_list *timer, __u64 expires)
EXPORT_SYMBOL(mod_virt_timer);
int mod_virt_timer_periodic(struct vtimer_list *timer, __u64 expires)
EXPORT_SYMBOL(mod_virt_timer_periodic);
int del_virt_timer(struct vtimer_list *timer)
EXPORT_SYMBOL(del_virt_timer);
void init_cpu_vtimer(void)
static int __cpuinit s390_nohz_notify(struct notifier_block *self,
unsigned long action, void *hcpu)
void __init vtime_init(void)
