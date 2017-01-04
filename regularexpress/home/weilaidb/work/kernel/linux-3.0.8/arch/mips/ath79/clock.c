#define AR71XX_BASE_FREQ	40000000
#define AR724X_BASE_FREQ	5000000
#define AR913X_BASE_FREQ	5000000
struct clk ;
static struct clk ath79_ref_clk;
static struct clk ath79_cpu_clk;
static struct clk ath79_ddr_clk;
static struct clk ath79_ahb_clk;
static struct clk ath79_wdt_clk;
static struct clk ath79_uart_clk;
static void __init ar71xx_clocks_init(void)
static void __init ar724x_clocks_init(void)
static void __init ar913x_clocks_init(void)
void __init ath79_clocks_init(void)
struct clk *clk_get(struct device *dev, const char *id)
EXPORT_SYMBOL(clk_get);
int clk_enable(struct clk *clk)
EXPORT_SYMBOL(clk_enable);
void clk_disable(struct clk *clk)
EXPORT_SYMBOL(clk_disable);
unsigned long clk_get_rate(struct clk *clk)
EXPORT_SYMBOL(clk_get_rate);
void clk_put(struct clk *clk)
EXPORT_SYMBOL(clk_put);
