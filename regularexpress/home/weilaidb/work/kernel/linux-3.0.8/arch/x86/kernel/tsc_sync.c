static __cpuinitdata atomic_t start_count;
static __cpuinitdata atomic_t stop_count;
static __cpuinitdata arch_spinlock_t sync_lock = __ARCH_SPIN_LOCK_UNLOCKED;
static __cpuinitdata cycles_t last_tsc;
static __cpuinitdata cycles_t max_warp;
static __cpuinitdata int nr_warps;
static __cpuinit void check_tsc_warp(void)
void __cpuinit check_tsc_sync_source(int cpu)
void __cpuinit check_tsc_sync_target(void)
