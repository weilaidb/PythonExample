#define pr_fmt(fmt) "ep93xx " KBUILD_MODNAME ": " fmt
struct clk ;
static unsigned long get_uart_rate(struct clk *clk);
static int set_keytchclk_rate(struct clk *clk, unsigned long rate);
static int set_div_rate(struct clk *clk, unsigned long rate);
static int set_i2s_sclk_rate(struct clk *clk, unsigned long rate);
static int set_i2s_lrclk_rate(struct clk *clk, unsigned long rate);
static struct clk clk_xtali = ;
static struct clk clk_uart1 = ;
static struct clk clk_uart2 = ;
static struct clk clk_uart3 = ;
static struct clk clk_pll1 = ;
static struct clk clk_f = ;
static struct clk clk_h = ;
static struct clk clk_p = ;
static struct clk clk_pll2 = ;
static struct clk clk_usb_host = ;
static struct clk clk_keypad = ;
static struct clk clk_spi = ;
static struct clk clk_pwm = ;
static struct clk clk_video = ;
static struct clk clk_i2s_mclk = ;
static struct clk clk_i2s_sclk = ;
static struct clk clk_i2s_lrclk = ;
static struct clk clk_m2p0 = ;
static struct clk clk_m2p1 = ;
static struct clk clk_m2p2 = ;
static struct clk clk_m2p3 = ;
static struct clk clk_m2p4 = ;
static struct clk clk_m2p5 = ;
static struct clk clk_m2p6 = ;
static struct clk clk_m2p7 = ;
static struct clk clk_m2p8 = ;
static struct clk clk_m2p9 = ;
static struct clk clk_m2m0 = ;
static struct clk clk_m2m1 = ;
#define INIT_CK(dev,con,ck)					\
static struct clk_lookup clocks[] = ;
static DEFINE_SPINLOCK(clk_lock);
static void __clk_enable(struct clk *clk)
int clk_enable(struct clk *clk)
EXPORT_SYMBOL(clk_enable);
static void __clk_disable(struct clk *clk)
void clk_disable(struct clk *clk)
EXPORT_SYMBOL(clk_disable);
static unsigned long get_uart_rate(struct clk *clk)
unsigned long clk_get_rate(struct clk *clk)
EXPORT_SYMBOL(clk_get_rate);
static int set_keytchclk_rate(struct clk *clk, unsigned long rate)
static int calc_clk_div(struct clk *clk, unsigned long rate,
int *psel, int *esel, int *pdiv, int *div)
static int set_div_rate(struct clk *clk, unsigned long rate)
static int set_i2s_sclk_rate(struct clk *clk, unsigned long rate)
static int set_i2s_lrclk_rate(struct clk *clk, unsigned long rate)
int clk_set_rate(struct clk *clk, unsigned long rate)
EXPORT_SYMBOL(clk_set_rate);
static char fclk_divisors[] = ;
static char hclk_divisors[] = ;
static char pclk_divisors[] = ;
static unsigned long calc_pll_rate(u32 config_word)
static void __init ep93xx_dma_clock_init(void)
static int __init ep93xx_clock_init(void)
postcore_initcall(ep93xx_clock_init);
