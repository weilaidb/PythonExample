#define _ASM_S390_TIMEX_H
#define TOD_UNIX_EPOCH 0x7d91048bca000000ULL
static inline int set_clock(__u64 time)
static inline int store_clock(__u64 *time)
static inline void set_clock_comparator(__u64 time)
static inline void store_clock_comparator(__u64 *time)
void clock_comparator_work(void);
static inline unsigned long long local_tick_disable(void)
static inline void local_tick_enable(unsigned long long comp)
#define CLOCK_TICK_RATE	1193180
typedef unsigned long long cycles_t;
static inline unsigned long long get_clock (void)
static inline void get_clock_ext(char *clk)
static inline unsigned long long get_clock_xt(void)
static inline cycles_t get_cycles(void)
int get_sync_clock(unsigned long long *clock);
void init_cpu_timer(void);
unsigned long long monotonic_clock(void);
void tod_to_timeval(__u64, struct timespec *);
static inline
void stck_to_timespec(unsigned long long stck, struct timespec *ts)
extern u64 sched_clock_base_cc;
static inline unsigned long long get_clock_monotonic(void)
