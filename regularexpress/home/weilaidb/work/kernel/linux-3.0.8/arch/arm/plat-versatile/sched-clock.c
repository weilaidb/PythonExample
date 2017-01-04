static DEFINE_CLOCK_DATA(cd);
static void __iomem *ctr;
#define SC_MULT		2796202667u
#define SC_SHIFT	26
unsigned long long notrace sched_clock(void)
static void notrace versatile_update_sched_clock(void)
void __init versatile_sched_clock_init(void __iomem *reg, unsigned long rate)
