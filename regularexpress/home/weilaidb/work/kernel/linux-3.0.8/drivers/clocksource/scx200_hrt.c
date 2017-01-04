#define NAME "scx200_hrt"
static int mhz27;
module_param(mhz27, int, 0);
MODULE_PARM_DESC(mhz27, "count at 27.0 MHz (default is 1.0 MHz)");
static int ppm;
module_param(ppm, int, 0);
MODULE_PARM_DESC(ppm, "+-adjust to actual XO freq (ppm)");
#define SCx200_TMCNFG_OFFSET (SCx200_TIMER_OFFSET + 5)
#define HR_TMEN (1 << 0)
#define HR_TMCLKSEL (1 << 1)
#define HR_TM27MPD (1 << 2)
#define HRT_FREQ   1000000
static cycle_t read_hrt(struct clocksource *cs)
#define HRT_SHIFT_1	22
#define HRT_SHIFT_27	26
static struct clocksource cs_hrt = ;
static int __init init_hrt_clocksource(void)
module_init(init_hrt_clocksource);
MODULE_AUTHOR("Jim Cromie <jim.cromie@gmail.com>");
MODULE_DESCRIPTION("clocksource on SCx200 HiRes Timer");
MODULE_LICENSE("GPL");
