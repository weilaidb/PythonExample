static struct clk clk_armpll;
static struct clk clk_usbpll;
static DEFINE_MUTEX(clkm_lock);
static const u32 pll_postdivs[4] = ;
static unsigned long local_return_parent_rate(struct clk *clk)
static struct clk osc_32KHz = ;
static int local_pll397_enable(struct clk *clk, int enable)
static int local_oscmain_enable(struct clk *clk, int enable)
static struct clk osc_pll397 = ;
static struct clk osc_main = ;
static struct clk clk_sys;
u32 clk_get_pllrate_from_reg(u32 inputclk, u32 regval)
static u32 local_clk_pll_setup(struct clk_pll_setup *PllSetup)
static void local_update_armpll_rate(void)
static u32 local_clk_find_pll_cfg(u32 pllin_freq, u32 target_freq,
struct clk_pll_setup *pllsetup)
static struct clk clk_armpll = ;
static u32 local_clk_usbpll_setup(struct clk_pll_setup *pHCLKPllSetup)
static int local_usbpll_enable(struct clk *clk, int enable)
static unsigned long local_usbpll_round_rate(struct clk *clk,
unsigned long rate)
static int local_usbpll_set_rate(struct clk *clk, unsigned long rate)
static struct clk clk_usbpll = ;
static u32 clk_get_hclk_div(void)
static struct clk clk_hclk = ;
static struct clk clk_pclk = ;
static int local_onoff_enable(struct clk *clk, int enable)
static struct clk clk_timer0 = ;
static struct clk clk_timer1 = ;
static struct clk clk_timer2 = ;
static struct clk clk_timer3 = ;
static struct clk clk_wdt = ;
static struct clk clk_vfp9 = ;
static struct clk clk_dma = ;
static struct clk clk_uart3 = ;
static struct clk clk_uart4 = ;
static struct clk clk_uart5 = ;
static struct clk clk_uart6 = ;
static struct clk clk_i2c0 = ;
static struct clk clk_i2c1 = ;
static struct clk clk_i2c2 = ;
static struct clk clk_ssp0 = ;
static struct clk clk_ssp1 = ;
static struct clk clk_kscan = ;
static struct clk clk_nand = ;
static struct clk clk_i2s0 = ;
static struct clk clk_i2s1 = ;
static struct clk clk_net = ;
static struct clk clk_rtc = ;
static struct clk clk_usbd = ;
static int tsc_onoff_enable(struct clk *clk, int enable)
static struct clk clk_tsc = ;
static int mmc_onoff_enable(struct clk *clk, int enable)
static unsigned long mmc_get_rate(struct clk *clk)
static unsigned long mmc_round_rate(struct clk *clk, unsigned long rate)
static int mmc_set_rate(struct clk *clk, unsigned long rate)
static struct clk clk_mmc = ;
static unsigned long clcd_get_rate(struct clk *clk)
static int clcd_set_rate(struct clk *clk, unsigned long rate)
static unsigned long clcd_round_rate(struct clk *clk, unsigned long rate)
static struct clk clk_lcd = ;
static inline void clk_lock(void)
static inline void clk_unlock(void)
static void local_clk_disable(struct clk *clk)
static int local_clk_enable(struct clk *clk)
int clk_enable(struct clk *clk)
EXPORT_SYMBOL(clk_enable);
void clk_disable(struct clk *clk)
EXPORT_SYMBOL(clk_disable);
unsigned long clk_get_rate(struct clk *clk)
EXPORT_SYMBOL(clk_get_rate);
int clk_set_rate(struct clk *clk, unsigned long rate)
EXPORT_SYMBOL(clk_set_rate);
long clk_round_rate(struct clk *clk, unsigned long rate)
EXPORT_SYMBOL(clk_round_rate);
int clk_set_parent(struct clk *clk, struct clk *parent)
EXPORT_SYMBOL(clk_set_parent);
struct clk *clk_get_parent(struct clk *clk)
EXPORT_SYMBOL(clk_get_parent);
#define _REGISTER_CLOCK(d, n, c) \
,
static struct clk_lookup lookups[] = ;
static int __init clk_init(void)
core_initcall(clk_init);
