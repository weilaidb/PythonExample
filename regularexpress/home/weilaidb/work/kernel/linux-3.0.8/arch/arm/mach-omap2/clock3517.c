#undef DEBUG
#define AM35XX_IPSS_ICK_MASK			0xF
#define AM35XX_IPSS_ICK_EN_ACK_OFFSET 		0x4
#define AM35XX_IPSS_ICK_FCK_OFFSET		0x8
#define AM35XX_IPSS_CLK_IDLEST_VAL		0
static void am35xx_clk_find_idlest(struct clk *clk,
void __iomem **idlest_reg,
u8 *idlest_bit,
u8 *idlest_val)
static void am35xx_clk_find_companion(struct clk *clk, void __iomem **other_reg,
u8 *other_bit)
const struct clkops clkops_am35xx_ipss_module_wait = ;
static void am35xx_clk_ipss_find_idlest(struct clk *clk,
void __iomem **idlest_reg,
u8 *idlest_bit,
u8 *idlest_val)
const struct clkops clkops_am35xx_ipss_wait = ;
