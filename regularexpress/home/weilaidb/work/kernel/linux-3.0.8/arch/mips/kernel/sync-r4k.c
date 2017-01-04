static atomic_t __cpuinitdata count_start_flag = ATOMIC_INIT(0);
static atomic_t __cpuinitdata count_count_start = ATOMIC_INIT(0);
static atomic_t __cpuinitdata count_count_stop = ATOMIC_INIT(0);
static atomic_t __cpuinitdata count_reference = ATOMIC_INIT(0);
#define COUNTON	100
#define NR_LOOPS 5
void __cpuinit synchronise_count_master(void)
void __cpuinit synchronise_count_slave(void)
#undef NR_LOOPS
