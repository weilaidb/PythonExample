#define RST_DEVICES			0x004
#define RST_DEVICES_SET			0x300
#define RST_DEVICES_CLR			0x304
#define RST_DEVICES_NUM			3
#define CLK_OUT_ENB			0x010
#define CLK_OUT_ENB_SET			0x320
#define CLK_OUT_ENB_CLR			0x324
#define CLK_OUT_ENB_NUM			3
#define CLK_MASK_ARM			0x44
#define MISC_CLK_ENB			0x48
#define OSC_CTRL			0x50
#define OSC_CTRL_OSC_FREQ_MASK		(3<<30)
#define OSC_CTRL_OSC_FREQ_13MHZ		(0<<30)
#define OSC_CTRL_OSC_FREQ_19_2MHZ	(1<<30)
#define OSC_CTRL_OSC_FREQ_12MHZ		(2<<30)
#define OSC_CTRL_OSC_FREQ_26MHZ		(3<<30)
#define OSC_CTRL_MASK			(0x3f2 | OSC_CTRL_OSC_FREQ_MASK)
#define OSC_FREQ_DET			0x58
#define OSC_FREQ_DET_TRIG		(1<<31)
#define OSC_FREQ_DET_STATUS		0x5C
#define OSC_FREQ_DET_BUSY		(1<<31)
#define OSC_FREQ_DET_CNT_MASK		0xFFFF
#define PERIPH_CLK_SOURCE_I2S1		0x100
#define PERIPH_CLK_SOURCE_EMC		0x19c
#define PERIPH_CLK_SOURCE_OSC		0x1fc
#define PERIPH_CLK_SOURCE_NUM \
((PERIPH_CLK_SOURCE_OSC - PERIPH_CLK_SOURCE_I2S1) / 4)
#define PERIPH_CLK_SOURCE_MASK		(3<<30)
#define PERIPH_CLK_SOURCE_SHIFT		30
#define PERIPH_CLK_SOURCE_ENABLE	(1<<28)
#define PERIPH_CLK_SOURCE_DIVU71_MASK	0xFF
#define PERIPH_CLK_SOURCE_DIVU16_MASK	0xFFFF
#define PERIPH_CLK_SOURCE_DIV_SHIFT	0
#define SDMMC_CLK_INT_FB_SEL		(1 << 23)
#define SDMMC_CLK_INT_FB_DLY_SHIFT	16
#define SDMMC_CLK_INT_FB_DLY_MASK	(0xF << SDMMC_CLK_INT_FB_DLY_SHIFT)
#define PLL_BASE			0x0
#define PLL_BASE_BYPASS			(1<<31)
#define PLL_BASE_ENABLE			(1<<30)
#define PLL_BASE_REF_ENABLE		(1<<29)
#define PLL_BASE_OVERRIDE		(1<<28)
#define PLL_BASE_DIVP_MASK		(0x7<<20)
#define PLL_BASE_DIVP_SHIFT		20
#define PLL_BASE_DIVN_MASK		(0x3FF<<8)
#define PLL_BASE_DIVN_SHIFT		8
#define PLL_BASE_DIVM_MASK		(0x1F)
#define PLL_BASE_DIVM_SHIFT		0
#define PLL_OUT_RATIO_MASK		(0xFF<<8)
#define PLL_OUT_RATIO_SHIFT		8
#define PLL_OUT_OVERRIDE		(1<<2)
#define PLL_OUT_CLKEN			(1<<1)
#define PLL_OUT_RESET_DISABLE		(1<<0)
#define PLL_MISC(c)			(((c)->flags & PLL_ALT_MISC_REG) ? 0x4 : 0xc)
#define PLL_MISC_DCCON_SHIFT		20
#define PLL_MISC_CPCON_SHIFT		8
#define PLL_MISC_CPCON_MASK		(0xF<<PLL_MISC_CPCON_SHIFT)
#define PLL_MISC_LFCON_SHIFT		4
#define PLL_MISC_LFCON_MASK		(0xF<<PLL_MISC_LFCON_SHIFT)
#define PLL_MISC_VCOCON_SHIFT		0
#define PLL_MISC_VCOCON_MASK		(0xF<<PLL_MISC_VCOCON_SHIFT)
#define PLLU_BASE_POST_DIV		(1<<20)
#define PLLD_MISC_CLKENABLE		(1<<30)
#define PLLD_MISC_DIV_RST		(1<<23)
#define PLLD_MISC_DCCON_SHIFT		12
#define PLLE_MISC_READY			(1 << 15)
#define PERIPH_CLK_TO_ENB_REG(c)	((c->u.periph.clk_num / 32) * 4)
#define PERIPH_CLK_TO_ENB_SET_REG(c)	((c->u.periph.clk_num / 32) * 8)
#define PERIPH_CLK_TO_ENB_BIT(c)	(1 << (c->u.periph.clk_num % 32))
#define SUPER_CLK_MUX			0x00
#define SUPER_STATE_SHIFT		28
#define SUPER_STATE_MASK		(0xF << SUPER_STATE_SHIFT)
#define SUPER_STATE_STANDBY		(0x0 << SUPER_STATE_SHIFT)
#define SUPER_STATE_IDLE		(0x1 << SUPER_STATE_SHIFT)
#define SUPER_STATE_RUN			(0x2 << SUPER_STATE_SHIFT)
#define SUPER_STATE_IRQ			(0x3 << SUPER_STATE_SHIFT)
#define SUPER_STATE_FIQ			(0x4 << SUPER_STATE_SHIFT)
#define SUPER_SOURCE_MASK		0xF
#define	SUPER_FIQ_SOURCE_SHIFT		12
#define	SUPER_IRQ_SOURCE_SHIFT		8
#define	SUPER_RUN_SOURCE_SHIFT		4
#define	SUPER_IDLE_SOURCE_SHIFT		0
#define SUPER_CLK_DIVIDER		0x04
#define BUS_CLK_DISABLE			(1<<3)
#define BUS_CLK_DIV_MASK		0x3
#define PMC_CTRL			0x0
#define PMC_CTRL_BLINK_ENB		(1 << 7)
#define PMC_DPD_PADS_ORIDE		0x1c
#define PMC_DPD_PADS_ORIDE_BLINK_ENB	(1 << 20)
#define PMC_BLINK_TIMER_DATA_ON_SHIFT	0
#define PMC_BLINK_TIMER_DATA_ON_MASK	0x7fff
#define PMC_BLINK_TIMER_ENB		(1 << 15)
#define PMC_BLINK_TIMER_DATA_OFF_SHIFT	16
#define PMC_BLINK_TIMER_DATA_OFF_MASK	0xffff
static void __iomem *reg_clk_base = IO_ADDRESS(TEGRA_CLK_RESET_BASE);
static void __iomem *reg_pmc_base = IO_ADDRESS(TEGRA_PMC_BASE);
static DEFINE_SPINLOCK(clock_register_lock);
static int tegra_periph_clk_enable_refcount[3 * 32];
#define clk_writel(value, reg) \
__raw_writel(value, (u32)reg_clk_base + (reg))
#define clk_readl(reg) \
__raw_readl((u32)reg_clk_base + (reg))
#define pmc_writel(value, reg) \
__raw_writel(value, (u32)reg_pmc_base + (reg))
#define pmc_readl(reg) \
__raw_readl((u32)reg_pmc_base + (reg))
unsigned long clk_measure_input_freq(void)
static int clk_div71_get_divider(unsigned long parent_rate, unsigned long rate)
static int clk_div16_get_divider(unsigned long parent_rate, unsigned long rate)
static unsigned long tegra2_clk_m_autodetect_rate(struct clk *c)
static void tegra2_clk_m_init(struct clk *c)
static int tegra2_clk_m_enable(struct clk *c)
static void tegra2_clk_m_disable(struct clk *c)
static struct clk_ops tegra_clk_m_ops = ;
void tegra2_periph_reset_assert(struct clk *c)
void tegra2_periph_reset_deassert(struct clk *c)
static void tegra2_super_clk_init(struct clk *c)
static int tegra2_super_clk_enable(struct clk *c)
static void tegra2_super_clk_disable(struct clk *c)
static int tegra2_super_clk_set_parent(struct clk *c, struct clk *p)
static int tegra2_super_clk_set_rate(struct clk *c, unsigned long rate)
static struct clk_ops tegra_super_ops = ;
static void tegra2_cpu_clk_init(struct clk *c)
static int tegra2_cpu_clk_enable(struct clk *c)
static void tegra2_cpu_clk_disable(struct clk *c)
static int tegra2_cpu_clk_set_rate(struct clk *c, unsigned long rate)
static struct clk_ops tegra_cpu_ops = ;
static void tegra2_cop_clk_reset(struct clk *c, bool assert)
static struct clk_ops tegra_cop_ops = ;
static void tegra2_bus_clk_init(struct clk *c)
static int tegra2_bus_clk_enable(struct clk *c)
static void tegra2_bus_clk_disable(struct clk *c)
static int tegra2_bus_clk_set_rate(struct clk *c, unsigned long rate)
static struct clk_ops tegra_bus_ops = ;
static void tegra2_blink_clk_init(struct clk *c)
static int tegra2_blink_clk_enable(struct clk *c)
static void tegra2_blink_clk_disable(struct clk *c)
static int tegra2_blink_clk_set_rate(struct clk *c, unsigned long rate)
static struct clk_ops tegra_blink_clk_ops = ;
static int tegra2_pll_clk_wait_for_lock(struct clk *c)
static void tegra2_pll_clk_init(struct clk *c)
static int tegra2_pll_clk_enable(struct clk *c)
static void tegra2_pll_clk_disable(struct clk *c)
static int tegra2_pll_clk_set_rate(struct clk *c, unsigned long rate)
static struct clk_ops tegra_pll_ops = ;
static void tegra2_pllx_clk_init(struct clk *c)
static struct clk_ops tegra_pllx_ops = ;
static int tegra2_plle_clk_enable(struct clk *c)
static struct clk_ops tegra_plle_ops = ;
static void tegra2_pll_div_clk_init(struct clk *c)
static int tegra2_pll_div_clk_enable(struct clk *c)
static void tegra2_pll_div_clk_disable(struct clk *c)
static int tegra2_pll_div_clk_set_rate(struct clk *c, unsigned long rate)
static long tegra2_pll_div_clk_round_rate(struct clk *c, unsigned long rate)
static struct clk_ops tegra_pll_div_ops = ;
static void tegra2_periph_clk_init(struct clk *c)
static int tegra2_periph_clk_enable(struct clk *c)
static void tegra2_periph_clk_disable(struct clk *c)
static void tegra2_periph_clk_reset(struct clk *c, bool assert)
static int tegra2_periph_clk_set_parent(struct clk *c, struct clk *p)
static int tegra2_periph_clk_set_rate(struct clk *c, unsigned long rate)
static long tegra2_periph_clk_round_rate(struct clk *c,
unsigned long rate)
static struct clk_ops tegra_periph_clk_ops = ;
void tegra2_sdmmc_tap_delay(struct clk *c, int delay)
static void tegra2_emc_clk_init(struct clk *c)
static long tegra2_emc_clk_round_rate(struct clk *c, unsigned long rate)
static int tegra2_emc_clk_set_rate(struct clk *c, unsigned long rate)
static struct clk_ops tegra_emc_clk_ops = ;
static void tegra2_clk_double_init(struct clk *c)
;
static int tegra2_clk_double_set_rate(struct clk *c, unsigned long rate)
static struct clk_ops tegra_clk_double_ops = ;
static void tegra2_audio_sync_clk_init(struct clk *c)
static int tegra2_audio_sync_clk_enable(struct clk *c)
static void tegra2_audio_sync_clk_disable(struct clk *c)
static int tegra2_audio_sync_clk_set_parent(struct clk *c, struct clk *p)
static struct clk_ops tegra_audio_sync_clk_ops = ;
static void tegra2_cdev_clk_init(struct clk *c)
static int tegra2_cdev_clk_enable(struct clk *c)
static void tegra2_cdev_clk_disable(struct clk *c)
static struct clk_ops tegra_cdev_clk_ops = ;
static int tegra_clk_shared_bus_update(struct clk *bus)
;
static void tegra_clk_shared_bus_init(struct clk *c)
static int tegra_clk_shared_bus_set_rate(struct clk *c, unsigned long rate)
static long tegra_clk_shared_bus_round_rate(struct clk *c, unsigned long rate)
static int tegra_clk_shared_bus_enable(struct clk *c)
static void tegra_clk_shared_bus_disable(struct clk *c)
static struct clk_ops tegra_clk_shared_bus_ops = ;
static struct clk tegra_clk_32k = ;
static struct clk_pll_freq_table tegra_pll_s_freq_table[] = ;
static struct clk tegra_pll_s = ;
static struct clk_mux_sel tegra_clk_m_sel[] = ;
static struct clk tegra_clk_m = ;
static struct clk_pll_freq_table tegra_pll_c_freq_table[] = ;
static struct clk tegra_pll_c = ;
static struct clk tegra_pll_c_out1 = ;
static struct clk_pll_freq_table tegra_pll_m_freq_table[] = ;
static struct clk tegra_pll_m = ;
static struct clk tegra_pll_m_out1 = ;
static struct clk_pll_freq_table tegra_pll_p_freq_table[] = ;
static struct clk tegra_pll_p = ;
static struct clk tegra_pll_p_out1 = ;
static struct clk tegra_pll_p_out2 = ;
static struct clk tegra_pll_p_out3 = ;
static struct clk tegra_pll_p_out4 = ;
static struct clk_pll_freq_table tegra_pll_a_freq_table[] = ;
static struct clk tegra_pll_a = ;
static struct clk tegra_pll_a_out0 = ;
static struct clk_pll_freq_table tegra_pll_d_freq_table[] = ;
static struct clk tegra_pll_d = ;
static struct clk tegra_pll_d_out0 = ;
static struct clk_pll_freq_table tegra_pll_u_freq_table[] = ;
static struct clk tegra_pll_u = ;
static struct clk_pll_freq_table tegra_pll_x_freq_table[] = ;
static struct clk tegra_pll_x = ;
static struct clk_pll_freq_table tegra_pll_e_freq_table[] = ;
static struct clk tegra_pll_e = ;
static struct clk tegra_clk_d = ;
static struct clk tegra_clk_cdev1 = ;
static struct clk tegra_clk_cdev2 = ;
static struct clk_mux_sel mux_audio_sync_clk[8+1];
static const struct audio_sources  mux_audio_sync_clk_sources[] = ;
static struct clk tegra_clk_audio = ;
static struct clk tegra_clk_audio_2x = ;
struct clk_lookup tegra_audio_clk_lookups[] = ;
static void init_audio_sync_clock_mux(void)
static struct clk_mux_sel mux_cclk[] = ;
static struct clk_mux_sel mux_sclk[] = ;
static struct clk tegra_clk_cclk = ;
static struct clk tegra_clk_sclk = ;
static struct clk tegra_clk_virtual_cpu = ;
static struct clk tegra_clk_cop = ;
static struct clk tegra_clk_hclk = ;
static struct clk tegra_clk_pclk = ;
static struct clk tegra_clk_blink = ;
static struct clk_mux_sel mux_pllm_pllc_pllp_plla[] = ;
static struct clk_mux_sel mux_pllm_pllc_pllp_clkm[] = ;
static struct clk_mux_sel mux_pllp_pllc_pllm_clkm[] = ;
static struct clk_mux_sel mux_pllaout0_audio2x_pllp_clkm[] = ;
static struct clk_mux_sel mux_pllp_plld_pllc_clkm[] = ;
static struct clk_mux_sel mux_pllp_pllc_audio_clkm_clk32[] = ;
static struct clk_mux_sel mux_pllp_pllc_pllm[] = ;
static struct clk_mux_sel mux_clk_m[] = ;
static struct clk_mux_sel mux_pllp_out3[] = ;
static struct clk_mux_sel mux_plld[] = ;
static struct clk_mux_sel mux_clk_32k[] = ;
static struct clk_mux_sel mux_pclk[] = ;
static struct clk tegra_clk_emc = ;
#define PERIPH_CLK(_name, _dev, _con, _clk_num, _reg, _max, _inputs, _flags) \
#define SHARED_CLK(_name, _dev, _con, _parent)		\
struct clk tegra_list_clks[] = ;
#define CLK_DUPLICATE(_name, _dev, _con)		\
struct clk_duplicate tegra_clk_duplicates[] = ;
#define CLK(dev, con, ck)	\
struct clk *tegra_ptr_clks[] = ;
static void tegra2_init_one_clock(struct clk *c)
void __init tegra2_init_clocks(void)
static u32 clk_rst_suspend[RST_DEVICES_NUM + CLK_OUT_ENB_NUM +
PERIPH_CLK_SOURCE_NUM + 22];
void tegra_clk_suspend(void)
void tegra_clk_resume(void)
