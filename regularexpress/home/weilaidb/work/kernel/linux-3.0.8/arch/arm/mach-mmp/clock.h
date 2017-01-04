struct clkops ;
struct clk ;
extern struct clkops apbc_clk_ops;
extern struct clkops apmu_clk_ops;
#define APBC_CLK(_name, _reg, _fnclksel, _rate)			\
struct clk clk_##_name =
#define APBC_CLK_OPS(_name, _reg, _fnclksel, _rate, _ops)	\
struct clk clk_##_name =
#define APMU_CLK(_name, _reg, _eval, _rate)			\
struct clk clk_##_name =
#define APMU_CLK_OPS(_name, _reg, _eval, _rate, _ops)		\
struct clk clk_##_name =
#define INIT_CLKREG(_clk, _devname, _conname)			\
extern struct clk clk_pxa168_gpio;
extern struct clk clk_pxa168_timers;
