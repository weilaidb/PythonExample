#define __SH_CLOCK_H
struct clk;
struct clk_mapping ;
struct clk_ops ;
struct clk ;
#define CLK_ENABLE_ON_INIT	(1 << 0)
unsigned long followparent_recalc(struct clk *);
void recalculate_root_clocks(void);
void propagate_rate(struct clk *);
int clk_reparent(struct clk *child, struct clk *parent);
int clk_register(struct clk *);
void clk_unregister(struct clk *);
void clk_enable_init_clocks(void);
struct clk_div_mult_table ;
struct cpufreq_frequency_table;
void clk_rate_table_build(struct clk *clk,
struct cpufreq_frequency_table *freq_table,
int nr_freqs,
struct clk_div_mult_table *src_table,
unsigned long *bitmap);
long clk_rate_table_round(struct clk *clk,
struct cpufreq_frequency_table *freq_table,
unsigned long rate);
int clk_rate_table_find(struct clk *clk,
struct cpufreq_frequency_table *freq_table,
unsigned long rate);
long clk_rate_div_range_round(struct clk *clk, unsigned int div_min,
unsigned int div_max, unsigned long rate);
long clk_round_parent(struct clk *clk, unsigned long target,
unsigned long *best_freq, unsigned long *parent_freq,
unsigned int div_min, unsigned int div_max);
#define SH_CLK_MSTP32(_parent, _enable_reg, _enable_bit, _flags)	\
int sh_clk_mstp32_register(struct clk *clks, int nr);
#define SH_CLK_DIV4(_parent, _reg, _shift, _div_bitmap, _flags)	\
struct clk_div4_table ;
int sh_clk_div4_register(struct clk *clks, int nr,
struct clk_div4_table *table);
int sh_clk_div4_enable_register(struct clk *clks, int nr,
struct clk_div4_table *table);
int sh_clk_div4_reparent_register(struct clk *clks, int nr,
struct clk_div4_table *table);
#define SH_CLK_DIV6_EXT(_parent, _reg, _flags, _parents,	\
_num_parents, _src_shift, _src_width)	\
#define SH_CLK_DIV6(_parent, _reg, _flags)			\
SH_CLK_DIV6_EXT(_parent, _reg, _flags, NULL, 0, 0, 0)
int sh_clk_div6_register(struct clk *clks, int nr);
int sh_clk_div6_reparent_register(struct clk *clks, int nr);
