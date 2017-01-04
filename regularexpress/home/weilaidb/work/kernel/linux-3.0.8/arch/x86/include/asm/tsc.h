#define _ASM_X86_TSC_H
#define NS_SCALE	10
#define US_SCALE	32
typedef unsigned long long cycles_t;
extern unsigned int cpu_khz;
extern unsigned int tsc_khz;
extern void disable_TSC(void);
static inline cycles_t get_cycles(void)
static __always_inline cycles_t vget_cycles(void)
extern void tsc_init(void);
extern void mark_tsc_unstable(char *reason);
extern int unsynchronized_tsc(void);
extern int check_tsc_unstable(void);
extern unsigned long native_calibrate_tsc(void);
extern cycles_t vread_tsc(void);
extern void check_tsc_sync_source(int cpu);
extern void check_tsc_sync_target(void);
extern int notsc_setup(char *);
extern void save_sched_clock_state(void);
extern void restore_sched_clock_state(void);
