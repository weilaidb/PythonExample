#undef DEBUG
static const struct clksel *_get_clksel_by_parent(struct clk *clk,
struct clk *src_clk)
static u8 _get_div_and_fieldval(struct clk *src_clk, struct clk *clk,
u32 *field_val)
static void _write_clksel_reg(struct clk *clk, u32 field_val)
static u32 _clksel_to_divisor(struct clk *clk, u32 field_val)
static u32 _divisor_to_clksel(struct clk *clk, u32 div)
static u32 _read_divisor(struct clk *clk)
u32 omap2_clksel_round_rate_div(struct clk *clk, unsigned long target_rate,
u32 *new_div)
void omap2_init_clksel_parent(struct clk *clk)
unsigned long omap2_clksel_recalc(struct clk *clk)
long omap2_clksel_round_rate(struct clk *clk, unsigned long target_rate)
int omap2_clksel_set_rate(struct clk *clk, unsigned long rate)
int omap2_clksel_set_parent(struct clk *clk, struct clk *new_parent)
