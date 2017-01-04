#define PLL_GET_M(x)		(((x) >> 8) & 0x000000FF)
#define PLL_GET_N(x)		(((x) >> 16) & 0x000000FF)
#define PLL_GET_P(x)		(((x) >> 24) & 0x00000007)
unsigned int __init mips_get_pll_freq(void)
static cycle_t c0_hpt_read(struct clocksource *cs)
static struct clocksource clocksource_mips = ;
static void __init powertv_c0_hpt_clocksource_init(void)
struct tim_c ;
static struct tim_c *tim_c;
static cycle_t tim_c_read(struct clocksource *cs)
#define TIM_C_SIZE		48
static struct clocksource clocksource_tim_c = ;
static void __init powertv_tim_c_clocksource_init(void)
void __init powertv_clocksource_init(void)
