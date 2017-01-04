int have_rtc;;
#define TICK_SIZE tick
extern unsigned long loops_per_jiffy;
unsigned long loops_per_usec;
extern unsigned long do_slow_gettimeoffset(void);
static unsigned long (*do_gettimeoffset)(void) = do_slow_gettimeoffset;
u32 arch_gettimeoffset(void)
int set_rtc_mmss(unsigned long nowtime)
unsigned long
get_cmos_time(void)
int update_persistent_clock(struct timespec now)
void read_persistent_clock(struct timespec *ts)
extern void cris_profile_sample(struct pt_regs* regs);
void
cris_do_profile(struct pt_regs* regs)
unsigned long long sched_clock(void)
static int
__init init_udelay(void)
__initcall(init_udelay);
