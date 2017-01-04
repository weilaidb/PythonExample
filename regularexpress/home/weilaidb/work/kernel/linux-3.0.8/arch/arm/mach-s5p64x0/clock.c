struct clksrc_clk clk_mout_apll = ;
struct clksrc_clk clk_mout_mpll = ;
struct clksrc_clk clk_mout_epll = ;
enum perf_level ;
static const u32 clock_table[][3] = ;
unsigned long s5p64x0_armclk_get_rate(struct clk *clk)
unsigned long s5p64x0_armclk_round_rate(struct clk *clk, unsigned long rate)
int s5p64x0_armclk_set_rate(struct clk *clk, unsigned long rate)
struct clk_ops s5p64x0_clkarm_ops = ;
struct clksrc_clk clk_armclk = ;
struct clksrc_clk clk_dout_mpll = ;
struct clk *clkset_hclk_low_list[] = ;
struct clksrc_sources clkset_hclk_low = ;
int s5p64x0_pclk_ctrl(struct clk *clk, int enable)
int s5p64x0_hclk0_ctrl(struct clk *clk, int enable)
int s5p64x0_hclk1_ctrl(struct clk *clk, int enable)
int s5p64x0_sclk_ctrl(struct clk *clk, int enable)
int s5p64x0_sclk1_ctrl(struct clk *clk, int enable)
int s5p64x0_mem_ctrl(struct clk *clk, int enable)
int s5p64x0_clk48m_ctrl(struct clk *clk, int enable)
