volatile int __cpuinitdata pen_release = -1;
static void __cpuinit write_pen_release(int val)
static DEFINE_SPINLOCK(boot_lock);
void __cpuinit platform_secondary_init(unsigned int cpu)
int __cpuinit boot_secondary(unsigned int cpu, struct task_struct *idle)
