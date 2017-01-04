static struct clk per_ck;
static struct clk hclk_ck;
static struct clk ck_1MHz;
static struct clk ck_13MHz;
static struct clk ck_pll1;
static int local_set_rate(struct clk *clk, u32 rate);
static inline void clock_lock(void)
static inline void clock_unlock(void)
static void propagate_rate(struct clk *clk)
static void clk_reg_disable(struct clk *clk)
static int clk_reg_enable(struct clk *clk)
static inline void clk_reg_disable1(struct clk *clk)
static inline void clk_reg_enable1(struct clk *clk)
static int clk_wait_for_pll_lock(struct clk *clk)
static int switch_to_dirty_13mhz(struct clk *clk)
static int switch_to_clean_13mhz(struct clk *clk)
static int set_13MHz_parent(struct clk *clk, struct clk *parent)
#define PLL160_MIN_FCCO 156000
#define PLL160_MAX_FCCO 320000
static int pll160_set_rate(struct clk *clk, u32 rate)
static int per_clk_set_rate(struct clk *clk, u32 rate)
static int hclk_set_rate(struct clk *clk, u32 rate)
static u32 hclk_round_rate(struct clk *clk, u32 rate)
static u32 per_clk_round_rate(struct clk *clk, u32 rate)
static int on_off_set_rate(struct clk *clk, u32 rate)
static int on_off_inv_set_rate(struct clk *clk, u32 rate)
static u32 on_off_round_rate(struct clk *clk, u32 rate)
static u32 pll4_round_rate(struct clk *clk, u32 rate)
static u32 pll3_round_rate(struct clk *clk, u32 rate)
static u32 pll5_round_rate(struct clk *clk, u32 rate)
static u32 ck_13MHz_round_rate(struct clk *clk, u32 rate)
static int ck_13MHz_set_rate(struct clk *clk, u32 rate)
static int pll1_set_rate(struct clk *clk, u32 rate)
static struct clk osc_13MHz = ;
static struct clk ck_13MHz = ;
static struct clk osc_32KHz = ;
static struct clk ck_1MHz = ;
static struct clk ck_pll1 = ;
static struct clk ck_pll4 = ;
static struct clk ck_pll5 = ;
static struct clk ck_pll3 = ;
static struct clk hclk_ck = ;
static struct clk per_ck = ;
static struct clk m2hclk_ck = ;
static struct clk vfp9_ck = ;
static struct clk keyscan_ck = ;
static struct clk touch_ck = ;
static struct clk pwm1_ck = ;
static struct clk pwm2_ck = ;
static struct clk jpeg_ck = ;
static struct clk ms_ck = ;
static struct clk dum_ck = ;
static struct clk flash_ck = ;
static struct clk i2c0_ck = ;
static struct clk i2c1_ck = ;
static struct clk i2c2_ck = ;
static struct clk spi0_ck = ;
static struct clk spi1_ck = ;
static struct clk dma_ck = ;
static struct clk uart3_ck = ;
static struct clk uart4_ck = ;
static struct clk uart5_ck = ;
static struct clk uart6_ck = ;
static struct clk wdt_ck = ;
static struct clk *onchip_clks[] __initdata = ;
static struct clk_lookup onchip_clkreg[] = ;
static void local_clk_disable(struct clk *clk)
static int local_clk_enable(struct clk *clk)
static int local_set_rate(struct clk *clk, u32 rate)
int clk_set_rate(struct clk *clk, unsigned long rate)
EXPORT_SYMBOL(clk_set_rate);
unsigned long clk_get_rate(struct clk *clk)
EXPORT_SYMBOL(clk_get_rate);
int clk_enable(struct clk *clk)
EXPORT_SYMBOL(clk_enable);
void clk_disable(struct clk *clk)
EXPORT_SYMBOL(clk_disable);
long clk_round_rate(struct clk *clk, unsigned long rate)
EXPORT_SYMBOL(clk_round_rate);
int clk_set_parent(struct clk *clk, struct clk *parent)
EXPORT_SYMBOL(clk_set_parent);
static int __init clk_init(void)
arch_initcall(clk_init);
