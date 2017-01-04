struct pvclock_shadow_time ;
static u8 valid_flags __read_mostly = 0;
void pvclock_set_flags(u8 flags)
static u64 pvclock_get_nsec_offset(struct pvclock_shadow_time *shadow)
static unsigned pvclock_get_time_values(struct pvclock_shadow_time *dst,
struct pvclock_vcpu_time_info *src)
unsigned long pvclock_tsc_khz(struct pvclock_vcpu_time_info *src)
static atomic64_t last_value = ATOMIC64_INIT(0);
void pvclock_resume(void)
cycle_t pvclock_clocksource_read(struct pvclock_vcpu_time_info *src)
void pvclock_read_wallclock(struct pvclock_wall_clock *wall_clock,
struct pvclock_vcpu_time_info *vcpu_time,
struct timespec *ts)
