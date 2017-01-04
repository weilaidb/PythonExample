struct clk clk_ext_xtal_mux = ;
struct clk clk_xusbxti = ;
struct clk s5p_clk_27m = ;
struct clk clk_48m = ;
struct clk clk_fout_apll = ;
struct clk clk_fout_mpll = ;
struct clk clk_fout_epll = ;
struct clk clk_fout_dpll = ;
struct clk clk_fout_vpll = ;
static struct clk *clk_src_apll_list[] = ;
struct clksrc_sources clk_src_apll = ;
static struct clk *clk_src_mpll_list[] = ;
struct clksrc_sources clk_src_mpll = ;
static struct clk *clk_src_epll_list[] = ;
struct clksrc_sources clk_src_epll = ;
static struct clk *clk_src_dpll_list[] = ;
struct clksrc_sources clk_src_dpll = ;
struct clk clk_vpll = ;
int s5p_gatectrl(void __iomem *reg, struct clk *clk, int enable)
int s5p_epll_enable(struct clk *clk, int enable)
unsigned long s5p_epll_get_rate(struct clk *clk)
static struct clk *s5p_clks[] __initdata = ;
void __init s5p_register_clocks(unsigned long xtal_freq)
