#define __ASM_ARCH_MSM_CLKDEV_H
struct clk;
static inline int __clk_get(struct clk *clk)
static inline void __clk_put(struct clk *clk)
