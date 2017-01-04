#undef DEBUG
#define EN_APLL_STOPPED			0
#define EN_APLL_LOCKED			3
#define APLLS_CLKIN_19_2MHZ		0
#define APLLS_CLKIN_13MHZ		2
#define APLLS_CLKIN_12MHZ		3
void __iomem *cm_idlest_pll;
static int omap2_clk_apll_enable(struct clk *clk, u32 status_mask)
static int omap2_clk_apll96_enable(struct clk *clk)
static int omap2_clk_apll54_enable(struct clk *clk)
static void _apll96_allow_idle(struct clk *clk)
static void _apll96_deny_idle(struct clk *clk)
static void _apll54_allow_idle(struct clk *clk)
static void _apll54_deny_idle(struct clk *clk)
static void omap2_clk_apll_disable(struct clk *clk)
const struct clkops clkops_apll96 = ;
const struct clkops clkops_apll54 = ;
u32 omap2xxx_get_apll_clkin(void)
