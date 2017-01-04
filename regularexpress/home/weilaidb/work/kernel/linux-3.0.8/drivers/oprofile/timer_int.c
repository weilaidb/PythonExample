static DEFINE_PER_CPU(struct hrtimer, oprofile_hrtimer);
static int ctr_running;
static enum hrtimer_restart oprofile_hrtimer_notify(struct hrtimer *hrtimer)
static void __oprofile_hrtimer_start(void *unused)
static int oprofile_hrtimer_start(void)
static void __oprofile_hrtimer_stop(int cpu)
static void oprofile_hrtimer_stop(void)
static int __cpuinit oprofile_cpu_notify(struct notifier_block *self,
unsigned long action, void *hcpu)
static struct notifier_block __refdata oprofile_cpu_notifier = ;
int oprofile_timer_init(struct oprofile_operations *ops)
void oprofile_timer_exit(void)
