#define CYCLONE_CBAR_ADDR	0xFEB00CD0
#define CYCLONE_PMCC_OFFSET	0x51A0
#define CYCLONE_MPCS_OFFSET	0x51A8
#define CYCLONE_MPMC_OFFSET	0x51D0
#define CYCLONE_TIMER_FREQ	99780000
#define CYCLONE_TIMER_MASK	CLOCKSOURCE_MASK(32)
int use_cyclone = 0;
static void __iomem *cyclone_ptr;
static cycle_t read_cyclone(struct clocksource *cs)
static struct clocksource clocksource_cyclone = ;
static int __init init_cyclone_clocksource(void)
arch_initcall(init_cyclone_clocksource);
