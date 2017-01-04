#define CYCLONE_CBAR_ADDR 0xFEB00CD0
#define CYCLONE_PMCC_OFFSET 0x51A0
#define CYCLONE_MPMC_OFFSET 0x51D0
#define CYCLONE_MPCS_OFFSET 0x51A8
#define CYCLONE_TIMER_FREQ 100000000
int use_cyclone;
void __init cyclone_setup(void)
static void __iomem *cyclone_mc;
static cycle_t read_cyclone(struct clocksource *cs)
static struct clocksource clocksource_cyclone = ;
int __init init_cyclone_clock(void)
__initcall(init_cyclone_clock);
