static int sh_clk_mstp32_enable(struct clk *clk)
static void sh_clk_mstp32_disable(struct clk *clk)
static struct clk_ops sh_clk_mstp32_clk_ops = ;
int __init sh_clk_mstp32_register(struct clk *clks, int nr)
static long sh_clk_div_round_rate(struct clk *clk, unsigned long rate)
static int sh_clk_div6_divisors[64] = ;
static struct clk_div_mult_table sh_clk_div6_table = ;
static unsigned long sh_clk_div6_recalc(struct clk *clk)
static int sh_clk_div6_set_parent(struct clk *clk, struct clk *parent)
static int sh_clk_div6_set_rate(struct clk *clk, unsigned long rate)
static int sh_clk_div6_enable(struct clk *clk)
static void sh_clk_div6_disable(struct clk *clk)
static struct clk_ops sh_clk_div6_clk_ops = ;
static struct clk_ops sh_clk_div6_reparent_clk_ops = ;
static int __init sh_clk_div6_register_ops(struct clk *clks, int nr,
struct clk_ops *ops)
int __init sh_clk_div6_register(struct clk *clks, int nr)
int __init sh_clk_div6_reparent_register(struct clk *clks, int nr)
static unsigned long sh_clk_div4_recalc(struct clk *clk)
static int sh_clk_div4_set_parent(struct clk *clk, struct clk *parent)
static int sh_clk_div4_set_rate(struct clk *clk, unsigned long rate)
static int sh_clk_div4_enable(struct clk *clk)
static void sh_clk_div4_disable(struct clk *clk)
static struct clk_ops sh_clk_div4_clk_ops = ;
static struct clk_ops sh_clk_div4_enable_clk_ops = ;
static struct clk_ops sh_clk_div4_reparent_clk_ops = ;
static int __init sh_clk_div4_register_ops(struct clk *clks, int nr,
struct clk_div4_table *table, struct clk_ops *ops)
int __init sh_clk_div4_register(struct clk *clks, int nr,
struct clk_div4_table *table)
int __init sh_clk_div4_enable_register(struct clk *clks, int nr,
struct clk_div4_table *table)
int __init sh_clk_div4_reparent_register(struct clk *clks, int nr,
struct clk_div4_table *table)
