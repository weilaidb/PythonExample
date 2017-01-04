#define _ASM_X86_PVCLOCK_H
cycle_t pvclock_clocksource_read(struct pvclock_vcpu_time_info *src);
void pvclock_set_flags(u8 flags);
unsigned long pvclock_tsc_khz(struct pvclock_vcpu_time_info *src);
void pvclock_read_wallclock(struct pvclock_wall_clock *wall,
struct pvclock_vcpu_time_info *vcpu,
struct timespec *ts);
void pvclock_resume(void);
static inline u64 pvclock_scale_delta(u64 delta, u32 mul_frac, int shift)
