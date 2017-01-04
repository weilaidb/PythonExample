#define __ARCH_ARM_MACH_MSM_CLOCK_7X30_H
enum ;
struct clk_ops;
extern struct clk_ops clk_ops_7x30;
struct clk_ops *clk_7x30_is_local(uint32_t id);
int clk_7x30_init(void);
void pll_enable(uint32_t pll);
void pll_disable(uint32_t pll);
extern int internal_pwr_rail_ctl_auto(unsigned rail_id, bool enable);
#define CLK_7X30(clk_name, clk_id, clk_dev, clk_flags)
#define CLK_7X30S(clk_name, l_id, r_id, clk_dev, clk_flags)
