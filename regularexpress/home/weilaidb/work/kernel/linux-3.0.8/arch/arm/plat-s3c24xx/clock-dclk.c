static int s3c24xx_dclk_enable(struct clk *clk, int enable)
static int s3c24xx_dclk_setparent(struct clk *clk, struct clk *parent)
static unsigned long s3c24xx_calc_div(struct clk *clk, unsigned long rate)
static unsigned long s3c24xx_round_dclk_rate(struct clk *clk,
unsigned long rate)
static int s3c24xx_set_dclk_rate(struct clk *clk, unsigned long rate)
static int s3c24xx_clkout_setparent(struct clk *clk, struct clk *parent)
static struct clk_ops dclk_ops = ;
struct clk s3c24xx_dclk0 = ;
struct clk s3c24xx_dclk1 = ;
static struct clk_ops clkout_ops = ;
struct clk s3c24xx_clkout0 = ;
struct clk s3c24xx_clkout1 = ;
