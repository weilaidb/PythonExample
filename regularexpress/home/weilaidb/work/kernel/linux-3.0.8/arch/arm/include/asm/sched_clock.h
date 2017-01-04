#define ASM_SCHED_CLOCK
struct clock_data ;
#define DEFINE_CLOCK_DATA(name)	struct clock_data name
static inline u64 cyc_to_ns(u64 cyc, u32 mult, u32 shift)
static inline void update_sched_clock(struct clock_data *cd, u32 cyc, u32 mask)
static inline unsigned long long cyc_to_fixed_sched_clock(struct clock_data *cd,
u32 cyc, u32 mask, u32 mult, u32 shift)
static inline unsigned long long cyc_to_sched_clock(struct clock_data *cd,
u32 cyc, u32 mask)
void init_sched_clock(struct clock_data *, void (*)(void),
unsigned int, unsigned long);
static inline void init_fixed_sched_clock(struct clock_data *cd,
void (*update)(void), unsigned int bits, unsigned long rate,
u32 mult, u32 shift)
extern void sched_clock_postinit(void);
