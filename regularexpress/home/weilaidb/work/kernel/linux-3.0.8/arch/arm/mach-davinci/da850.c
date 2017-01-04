#define DA850_CLK_ASYNC3	BIT(16)
#define DA850_PLL1_BASE		0x01e1a000
#define DA850_TIMER64P2_BASE	0x01f0c000
#define DA850_TIMER64P3_BASE	0x01f0d000
#define DA850_REF_FREQ		24000000
#define CFGCHIP3_ASYNC3_CLKSRC	BIT(4)
#define CFGCHIP3_PLL1_MASTER_LOCK	BIT(5)
#define CFGCHIP0_PLL_MASTER_LOCK	BIT(4)
static int da850_set_armrate(struct clk *clk, unsigned long rate);
static int da850_round_armrate(struct clk *clk, unsigned long rate);
static int da850_set_pll0rate(struct clk *clk, unsigned long armrate);
static struct pll_data pll0_data = ;
static struct clk ref_clk = ;
static struct clk pll0_clk = ;
static struct clk pll0_aux_clk = ;
static struct clk pll0_sysclk2 = ;
static struct clk pll0_sysclk3 = ;
static struct clk pll0_sysclk4 = ;
static struct clk pll0_sysclk5 = ;
static struct clk pll0_sysclk6 = ;
static struct clk pll0_sysclk7 = ;
static struct pll_data pll1_data = ;
static struct clk pll1_clk = ;
static struct clk pll1_aux_clk = ;
static struct clk pll1_sysclk2 = ;
static struct clk pll1_sysclk3 = ;
static struct clk pll1_sysclk4 = ;
static struct clk pll1_sysclk5 = ;
static struct clk pll1_sysclk6 = ;
static struct clk pll1_sysclk7 = ;
static struct clk i2c0_clk = ;
static struct clk timerp64_0_clk = ;
static struct clk timerp64_1_clk = ;
static struct clk arm_rom_clk = ;
static struct clk tpcc0_clk = ;
static struct clk tptc0_clk = ;
static struct clk tptc1_clk = ;
static struct clk tpcc1_clk = ;
static struct clk tptc2_clk = ;
static struct clk uart0_clk = ;
static struct clk uart1_clk = ;
static struct clk uart2_clk = ;
static struct clk aintc_clk = ;
static struct clk gpio_clk = ;
static struct clk i2c1_clk = ;
static struct clk emif3_clk = ;
static struct clk arm_clk = ;
static struct clk rmii_clk = ;
static struct clk emac_clk = ;
static struct clk mcasp_clk = ;
static struct clk lcdc_clk = ;
static struct clk mmcsd0_clk = ;
static struct clk mmcsd1_clk = ;
static struct clk aemif_clk = ;
static struct clk usb11_clk = ;
static struct clk usb20_clk = ;
static struct clk spi0_clk = ;
static struct clk spi1_clk = ;
static struct clk_lookup da850_clks[] = ;
static const struct mux_config da850_pins[] = ;
const short da850_i2c0_pins[] __initdata = ;
const short da850_i2c1_pins[] __initdata = ;
const short da850_lcdcntl_pins[] __initdata = ;
static u8 da850_default_priorities[DA850_N_CP_INTC_IRQ] = ;
static struct map_desc da850_io_desc[] = ;
static u32 da850_psc_bases[] = ;
static struct davinci_id da850_ids[] = ;
static struct davinci_timer_instance da850_timer_instance[4] = ;
static struct davinci_timer_info da850_timer_info = ;
static void da850_set_async3_src(int pllnum)
struct da850_opp ;
static const struct da850_opp da850_opp_456 = ;
static const struct da850_opp da850_opp_408 = ;
static const struct da850_opp da850_opp_372 = ;
static const struct da850_opp da850_opp_300 = ;
static const struct da850_opp da850_opp_200 = ;
static const struct da850_opp da850_opp_96 = ;
#define OPP(freq) 		\
static struct cpufreq_frequency_table da850_freq_table[] = ;
static int da850_set_voltage(unsigned int index);
static int da850_regulator_init(void);
static struct davinci_cpufreq_config cpufreq_info = ;
static struct regulator *cvdd;
static int da850_set_voltage(unsigned int index)
static int da850_regulator_init(void)
static struct platform_device da850_cpufreq_device = ;
unsigned int da850_max_speed = 300000;
int __init da850_register_cpufreq(char *async_clk)
static int da850_round_armrate(struct clk *clk, unsigned long rate)
static int da850_set_armrate(struct clk *clk, unsigned long index)
static int da850_set_pll0rate(struct clk *clk, unsigned long index)
int __init da850_register_cpufreq(char *async_clk)
static int da850_set_armrate(struct clk *clk, unsigned long rate)
static int da850_set_pll0rate(struct clk *clk, unsigned long armrate)
static int da850_round_armrate(struct clk *clk, unsigned long rate)
int da850_register_pm(struct platform_device *pdev)
static struct davinci_soc_info davinci_soc_info_da850 = ;
void __init da850_init(void)
