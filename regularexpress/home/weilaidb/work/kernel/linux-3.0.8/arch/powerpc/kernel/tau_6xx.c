static struct tau_temp
tau[NR_CPUS];
struct timer_list tau_timer;
#undef DEBUG
#define step_size		2
#define window_expand		1
#define shrink_timer	2*HZ
#define min_window	2
void set_thresholds(unsigned long cpu)
void TAUupdate(int cpu)
void TAUException(struct pt_regs * regs)
static void tau_timeout(void * info)
static void tau_timeout_smp(unsigned long unused)
int tau_initialized = 0;
void __init TAU_init_smp(void * info)
int __init TAU_init(void)
__initcall(TAU_init);
u32 cpu_temp_both(unsigned long cpu)
int cpu_temp(unsigned long cpu)
int tau_interrupts(unsigned long cpu)
