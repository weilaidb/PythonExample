struct clkops ;
struct clk ;
#define DEFINE_PRCMU_CLK(_name, _cg_off, _cg_bit, _reg)		\
struct clk clk_##_name =
#define DEFINE_PRCMU_CLK_RATE(_name, _cg_off, _cg_bit, _reg, _rate)	\
struct clk clk_##_name =
#define DEFINE_PRCC_CLK(_pclust, _name, _bus_en, _kernel_en, _kernclk)	\
struct clk clk_##_name =
#define DEFINE_PRCC_CLK_CUSTOM(_pclust, _name, _bus_en, _kernel_en, _kernclk, _callback, _data) \
struct clk clk_##_name =
#define CLK(_clk, _devname, _conname)			\
int __init clk_db8500_ed_fixup(void);
int __init clk_init(void);
