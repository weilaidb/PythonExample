#define _LINUX_CLOCKSOURCE_H
typedef u64 cycle_t;
struct clocksource;
struct cyclecounter ;
struct timecounter ;
static inline u64 cyclecounter_cyc2ns(const struct cyclecounter *cc,
cycle_t cycles)
extern void timecounter_init(struct timecounter *tc,
const struct cyclecounter *cc,
u64 start_tstamp);
extern u64 timecounter_read(struct timecounter *tc);
extern u64 timecounter_cyc2time(struct timecounter *tc,
cycle_t cycle_tstamp);
struct clocksource  ____cacheline_aligned;
#define CLOCK_SOURCE_IS_CONTINUOUS		0x01
#define CLOCK_SOURCE_MUST_VERIFY		0x02
#define CLOCK_SOURCE_WATCHDOG			0x10
#define CLOCK_SOURCE_VALID_FOR_HRES		0x20
#define CLOCK_SOURCE_UNSTABLE			0x40
#define CLOCKSOURCE_MASK(bits) (cycle_t)((bits) < 64 ? ((1ULL<<(bits))-1) : -1)
static inline u32 clocksource_khz2mult(u32 khz, u32 shift_constant)
static inline u32 clocksource_hz2mult(u32 hz, u32 shift_constant)
static inline s64 clocksource_cyc2ns(cycle_t cycles, u32 mult, u32 shift)
extern int clocksource_register(struct clocksource*);
extern void clocksource_unregister(struct clocksource*);
extern void clocksource_touch_watchdog(void);
extern struct clocksource* clocksource_get_next(void);
extern void clocksource_change_rating(struct clocksource *cs, int rating);
extern void clocksource_suspend(void);
extern void clocksource_resume(void);
extern struct clocksource * __init __weak clocksource_default_clock(void);
extern void clocksource_mark_unstable(struct clocksource *cs);
extern void
clocks_calc_mult_shift(u32 *mult, u32 *shift, u32 from, u32 to, u32 minsec);
extern int
__clocksource_register_scale(struct clocksource *cs, u32 scale, u32 freq);
extern void
__clocksource_updatefreq_scale(struct clocksource *cs, u32 scale, u32 freq);
static inline int clocksource_register_hz(struct clocksource *cs, u32 hz)
static inline int clocksource_register_khz(struct clocksource *cs, u32 khz)
static inline void __clocksource_updatefreq_hz(struct clocksource *cs, u32 hz)
static inline void __clocksource_updatefreq_khz(struct clocksource *cs, u32 khz)
static inline void
clocksource_calc_mult_shift(struct clocksource *cs, u32 freq, u32 minsec)
extern void
update_vsyscall(struct timespec *ts, struct timespec *wtm,
struct clocksource *c, u32 mult);
extern void update_vsyscall_tz(void);
static inline void
update_vsyscall(struct timespec *ts, struct timespec *wtm,
struct clocksource *c, u32 mult)
static inline void update_vsyscall_tz(void)
extern void timekeeping_notify(struct clocksource *clock);
extern cycle_t clocksource_mmio_readl_up(struct clocksource *);
extern cycle_t clocksource_mmio_readl_down(struct clocksource *);
extern cycle_t clocksource_mmio_readw_up(struct clocksource *);
extern cycle_t clocksource_mmio_readw_down(struct clocksource *);
extern int clocksource_mmio_init(void __iomem *, const char *,
unsigned long, int, unsigned, cycle_t (*)(struct clocksource *));
extern int clocksource_i8253_init(void);
