#define DISABLE_BRANCH_PROFILING
#define __vsyscall(nr) \
__attribute__ ((unused, __section__(".vsyscall_" #nr))) notrace
#define __syscall_clobber "r11","cx","memory"
DEFINE_VVAR(int, vgetcpu_mode);
DEFINE_VVAR(struct vsyscall_gtod_data, vsyscall_gtod_data) =
;
void update_vsyscall_tz(void)
void update_vsyscall(struct timespec *wall_time, struct timespec *wtm,
struct clocksource *clock, u32 mult)
static __always_inline void do_get_tz(struct timezone * tz)
static __always_inline int gettimeofday(struct timeval *tv, struct timezone *tz)
static __always_inline long time_syscall(long *t)
static __always_inline void do_vgettimeofday(struct timeval * tv)
int __vsyscall(0) vgettimeofday(struct timeval * tv, struct timezone * tz)
time_t __vsyscall(1) vtime(time_t *t)
long __vsyscall(2)
vgetcpu(unsigned *cpu, unsigned *node, struct getcpu_cache *tcache)
static long __vsyscall(3) venosys_1(void)
static ctl_table kernel_table2[] = ;
static ctl_table kernel_root_table2[] = ;
static void __cpuinit vsyscall_set_cpu(int cpu)
static void __cpuinit cpu_vsyscall_init(void *arg)
static int __cpuinit
cpu_vsyscall_notifier(struct notifier_block *n, unsigned long action, void *arg)
void __init map_vsyscall(void)
static int __init vsyscall_init(void)
__initcall(vsyscall_init);
