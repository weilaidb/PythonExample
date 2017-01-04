#define JZ_REG_CLOCK_CTRL	0x00
#define JZ_REG_CLOCK_LOW_POWER	0x04
#define JZ_REG_CLOCK_PLL	0x10
#define JZ_REG_CLOCK_GATE	0x20
#define JZ_REG_CLOCK_SLEEP_CTRL	0x24
#define JZ_REG_CLOCK_I2S	0x60
#define JZ_REG_CLOCK_LCD	0x64
#define JZ_REG_CLOCK_MMC	0x68
#define JZ_REG_CLOCK_UHC	0x6C
#define JZ_REG_CLOCK_SPI	0x74
#define JZ_CLOCK_CTRL_I2S_SRC_PLL	BIT(31)
#define JZ_CLOCK_CTRL_KO_ENABLE		BIT(30)
#define JZ_CLOCK_CTRL_UDC_SRC_PLL	BIT(29)
#define JZ_CLOCK_CTRL_UDIV_MASK		0x1f800000
#define JZ_CLOCK_CTRL_CHANGE_ENABLE	BIT(22)
#define JZ_CLOCK_CTRL_PLL_HALF		BIT(21)
#define JZ_CLOCK_CTRL_LDIV_MASK		0x001f0000
#define JZ_CLOCK_CTRL_UDIV_OFFSET	23
#define JZ_CLOCK_CTRL_LDIV_OFFSET	16
#define JZ_CLOCK_CTRL_MDIV_OFFSET	12
#define JZ_CLOCK_CTRL_PDIV_OFFSET	 8
#define JZ_CLOCK_CTRL_HDIV_OFFSET	 4
#define JZ_CLOCK_CTRL_CDIV_OFFSET	 0
#define JZ_CLOCK_GATE_UART0	BIT(0)
#define JZ_CLOCK_GATE_TCU	BIT(1)
#define JZ_CLOCK_GATE_RTC	BIT(2)
#define JZ_CLOCK_GATE_I2C	BIT(3)
#define JZ_CLOCK_GATE_SPI	BIT(4)
#define JZ_CLOCK_GATE_AIC	BIT(5)
#define JZ_CLOCK_GATE_I2S	BIT(6)
#define JZ_CLOCK_GATE_MMC	BIT(7)
#define JZ_CLOCK_GATE_ADC	BIT(8)
#define JZ_CLOCK_GATE_CIM	BIT(9)
#define JZ_CLOCK_GATE_LCD	BIT(10)
#define JZ_CLOCK_GATE_UDC	BIT(11)
#define JZ_CLOCK_GATE_DMAC	BIT(12)
#define JZ_CLOCK_GATE_IPU	BIT(13)
#define JZ_CLOCK_GATE_UHC	BIT(14)
#define JZ_CLOCK_GATE_UART1	BIT(15)
#define JZ_CLOCK_I2S_DIV_MASK		0x01ff
#define JZ_CLOCK_LCD_DIV_MASK		0x01ff
#define JZ_CLOCK_MMC_DIV_MASK		0x001f
#define JZ_CLOCK_UHC_DIV_MASK		0x000f
#define JZ_CLOCK_SPI_SRC_PLL		BIT(31)
#define JZ_CLOCK_SPI_DIV_MASK		0x000f
#define JZ_CLOCK_PLL_M_MASK		0x01ff
#define JZ_CLOCK_PLL_N_MASK		0x001f
#define JZ_CLOCK_PLL_OD_MASK		0x0003
#define JZ_CLOCK_PLL_STABLE		BIT(10)
#define JZ_CLOCK_PLL_BYPASS		BIT(9)
#define JZ_CLOCK_PLL_ENABLED		BIT(8)
#define JZ_CLOCK_PLL_STABLIZE_MASK	0x000f
#define JZ_CLOCK_PLL_M_OFFSET		23
#define JZ_CLOCK_PLL_N_OFFSET		18
#define JZ_CLOCK_PLL_OD_OFFSET		16
#define JZ_CLOCK_LOW_POWER_MODE_DOZE BIT(2)
#define JZ_CLOCK_LOW_POWER_MODE_SLEEP BIT(0)
#define JZ_CLOCK_SLEEP_CTRL_SUSPEND_UHC BIT(7)
#define JZ_CLOCK_SLEEP_CTRL_ENABLE_UDC BIT(6)
static void __iomem *jz_clock_base;
static spinlock_t jz_clock_lock;
static LIST_HEAD(jz_clocks);
struct main_clk ;
struct divided_clk ;
struct static_clk ;
static uint32_t jz_clk_reg_read(int reg)
static void jz_clk_reg_write_mask(int reg, uint32_t val, uint32_t mask)
static void jz_clk_reg_set_bits(int reg, uint32_t mask)
static void jz_clk_reg_clear_bits(int reg, uint32_t mask)
static int jz_clk_enable_gating(struct clk *clk)
static int jz_clk_disable_gating(struct clk *clk)
static int jz_clk_is_enabled_gating(struct clk *clk)
static unsigned long jz_clk_static_get_rate(struct clk *clk)
static int jz_clk_ko_enable(struct clk *clk)
static int jz_clk_ko_disable(struct clk *clk)
static int jz_clk_ko_is_enabled(struct clk *clk)
static const int pllno[] = ;
static unsigned long jz_clk_pll_get_rate(struct clk *clk)
static unsigned long jz_clk_pll_half_get_rate(struct clk *clk)
static const int jz_clk_main_divs[] = ;
static unsigned long jz_clk_main_round_rate(struct clk *clk, unsigned long rate)
static unsigned long jz_clk_main_get_rate(struct clk *clk)
static int jz_clk_main_set_rate(struct clk *clk, unsigned long rate)
static struct clk_ops jz_clk_static_ops = ;
static struct static_clk jz_clk_ext = ;
static struct clk_ops jz_clk_pll_ops = ;
static struct clk jz_clk_pll = ;
static struct clk_ops jz_clk_pll_half_ops = ;
static struct clk jz_clk_pll_half = ;
static const struct clk_ops jz_clk_main_ops = ;
static struct main_clk jz_clk_cpu = ;
static struct main_clk jz_clk_memory = ;
static struct main_clk jz_clk_high_speed_peripheral = ;
static struct main_clk jz_clk_low_speed_peripheral = ;
static const struct clk_ops jz_clk_ko_ops = ;
static struct clk jz_clk_ko = ;
static int jz_clk_spi_set_parent(struct clk *clk, struct clk *parent)
static int jz_clk_i2s_set_parent(struct clk *clk, struct clk *parent)
static int jz_clk_udc_enable(struct clk *clk)
static int jz_clk_udc_disable(struct clk *clk)
static int jz_clk_udc_is_enabled(struct clk *clk)
static int jz_clk_udc_set_parent(struct clk *clk, struct clk *parent)
static int jz_clk_udc_set_rate(struct clk *clk, unsigned long rate)
static unsigned long jz_clk_udc_get_rate(struct clk *clk)
static unsigned long jz_clk_divided_get_rate(struct clk *clk)
static int jz_clk_divided_set_rate(struct clk *clk, unsigned long rate)
static unsigned long jz_clk_ldclk_round_rate(struct clk *clk, unsigned long rate)
static int jz_clk_ldclk_set_rate(struct clk *clk, unsigned long rate)
static unsigned long jz_clk_ldclk_get_rate(struct clk *clk)
static const struct clk_ops jz_clk_ops_ld = ;
static struct clk jz_clk_ld = ;
static const struct clk_ops jz_clk_i2s_ops = ;
static const struct clk_ops jz_clk_spi_ops = ;
static const struct clk_ops jz_clk_divided_ops = ;
static struct divided_clk jz4740_clock_divided_clks[] = ;
static const struct clk_ops jz_clk_udc_ops = ;
static const struct clk_ops jz_clk_simple_ops = ;
static struct clk jz4740_clock_simple_clks[] = ;
static struct static_clk jz_clk_rtc = ;
int clk_enable(struct clk *clk)
EXPORT_SYMBOL_GPL(clk_enable);
void clk_disable(struct clk *clk)
EXPORT_SYMBOL_GPL(clk_disable);
int clk_is_enabled(struct clk *clk)
unsigned long clk_get_rate(struct clk *clk)
EXPORT_SYMBOL_GPL(clk_get_rate);
int clk_set_rate(struct clk *clk, unsigned long rate)
EXPORT_SYMBOL_GPL(clk_set_rate);
long clk_round_rate(struct clk *clk, unsigned long rate)
EXPORT_SYMBOL_GPL(clk_round_rate);
int clk_set_parent(struct clk *clk, struct clk *parent)
EXPORT_SYMBOL_GPL(clk_set_parent);
struct clk *clk_get(struct device *dev, const char *name)
EXPORT_SYMBOL_GPL(clk_get);
void clk_put(struct clk *clk)
EXPORT_SYMBOL_GPL(clk_put);
static inline void clk_add(struct clk *clk)
static void clk_register_clks(void)
void jz4740_clock_set_wait_mode(enum jz4740_wait_mode mode)
void jz4740_clock_udc_disable_auto_suspend(void)
EXPORT_SYMBOL_GPL(jz4740_clock_udc_disable_auto_suspend);
void jz4740_clock_udc_enable_auto_suspend(void)
EXPORT_SYMBOL_GPL(jz4740_clock_udc_enable_auto_suspend);
void jz4740_clock_suspend(void)
void jz4740_clock_resume(void)
static int jz4740_clock_init(void)
arch_initcall(jz4740_clock_init);
