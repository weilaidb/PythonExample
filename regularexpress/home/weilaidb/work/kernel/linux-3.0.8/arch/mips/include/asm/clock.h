#define __ASM_MIPS_CLOCK_H
extern void (*cpu_wait) (void);
struct clk;
struct clk_ops ;
struct clk ;
#define CLK_ALWAYS_ENABLED	(1 << 0)
#define CLK_RATE_PROPAGATES	(1 << 1)
void arch_init_clk_ops(struct clk_ops **, int type);
int clk_init(void);
int __clk_enable(struct clk *);
void __clk_disable(struct clk *);
void clk_recalc_rate(struct clk *);
int clk_register(struct clk *);
void clk_unregister(struct clk *);
int clk_set_rate_ex(struct clk *clk, unsigned long rate, int algo_id);
