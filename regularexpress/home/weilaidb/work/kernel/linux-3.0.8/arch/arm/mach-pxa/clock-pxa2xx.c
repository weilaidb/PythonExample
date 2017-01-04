void clk_pxa2xx_cken_enable(struct clk *clk)
void clk_pxa2xx_cken_disable(struct clk *clk)
const struct clkops clk_pxa2xx_cken_ops = ;
static uint32_t saved_cken;
static int pxa2xx_clock_suspend(void)
static void pxa2xx_clock_resume(void)
#define pxa2xx_clock_suspend	NULL
#define pxa2xx_clock_resume	NULL
struct syscore_ops pxa2xx_clock_syscore_ops = ;
