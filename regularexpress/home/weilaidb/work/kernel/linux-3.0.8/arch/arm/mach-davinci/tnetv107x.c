#define TNETV107X_INTC_BASE			0x03000000
#define TNETV107X_TIMER0_BASE			0x08086500
#define TNETV107X_TIMER1_BASE			0x08086600
#define TNETV107X_CHIP_CFG_BASE			0x08087000
#define TNETV107X_GPIO_BASE			0x08088000
#define TNETV107X_CLOCK_CONTROL_BASE		0x0808a000
#define TNETV107X_PSC_BASE			0x0808b000
#define OSC_FREQ_ONCHIP		(24000 * 1000)
#define OSC_FREQ_OFFCHIP_SYS	(25000 * 1000)
#define OSC_FREQ_OFFCHIP_ETH	(25000 * 1000)
#define OSC_FREQ_OFFCHIP_TDM	(19200 * 1000)
#define N_PLLS	3
struct clk_ctrl_regs ;
struct sspll_regs ;
struct wdt_regs ;
static struct clk_ctrl_regs __iomem *clk_ctrl_regs;
static struct sspll_regs __iomem *sspll_regs[N_PLLS];
static int sspll_regs_base[N_PLLS] = ;
static u32 bypass_mask[N_PLLS] = ;
static u32 pll_ext_freq[] = ;
static u32 psc_regs[] = ;
static u32 intc_host_map[] = ;
static unsigned long clk_sspll_recalc(struct clk *clk);
#define define_pll_clk(cname, pll, divmask, base)	\
static struct pll_data pll_##cname##_data = ;						\
static struct clk pll_##cname##_clk =
define_pll_clk(sys, 0, 0x1ff, 0x600);
define_pll_clk(tdm, 1, 0x0ff, 0x200);
define_pll_clk(eth, 2, 0x0ff, 0x400);
#define define_pll_div_clk(pll, cname, div)			\
static struct clk pll##_##cname##_clk =
define_pll_div_clk(sys, arm1176,	1);
define_pll_div_clk(sys, dsp,		2);
define_pll_div_clk(sys, ddr,		3);
define_pll_div_clk(sys, full,		4);
define_pll_div_clk(sys, lcd,		5);
define_pll_div_clk(sys, vlynq_ref,	6);
define_pll_div_clk(sys, tsc,		7);
define_pll_div_clk(sys, half,		8);
define_pll_div_clk(eth, 5mhz,		1);
define_pll_div_clk(eth, 50mhz,		2);
define_pll_div_clk(eth, 125mhz,		3);
define_pll_div_clk(eth, 250mhz,		4);
define_pll_div_clk(eth, 25mhz,		5);
define_pll_div_clk(tdm, 0,		1);
define_pll_div_clk(tdm, extra,		2);
define_pll_div_clk(tdm, 1,		3);
#define __lpsc_clk(cname, _parent, mod, flg)		\
static struct clk clk_##cname =
#define lpsc_clk_enabled(cname, parent, mod)		\
__lpsc_clk(cname, parent, mod, ALWAYS_ENABLED)
#define lpsc_clk(cname, parent, mod)			\
__lpsc_clk(cname, parent, mod, 0)
lpsc_clk_enabled(arm,		sys_arm1176_clk, ARM);
lpsc_clk_enabled(gem,		sys_dsp_clk,	GEM);
lpsc_clk_enabled(ddr2_phy,	sys_ddr_clk,	DDR2_PHY);
lpsc_clk_enabled(tpcc,		sys_full_clk,	TPCC);
lpsc_clk_enabled(tptc0,		sys_full_clk,	TPTC0);
lpsc_clk_enabled(tptc1,		sys_full_clk,	TPTC1);
lpsc_clk_enabled(ram,		sys_full_clk,	RAM);
lpsc_clk_enabled(aemif,		sys_full_clk,	AEMIF);
lpsc_clk_enabled(chipcfg,	sys_half_clk,	CHIP_CFG);
lpsc_clk_enabled(rom,		sys_half_clk,	ROM);
lpsc_clk_enabled(secctl,	sys_half_clk,	SECCTL);
lpsc_clk_enabled(keymgr,	sys_half_clk,	KEYMGR);
lpsc_clk_enabled(gpio,		sys_half_clk,	GPIO);
lpsc_clk_enabled(debugss,	sys_half_clk,	DEBUGSS);
lpsc_clk_enabled(system,	sys_half_clk,	SYSTEM);
lpsc_clk_enabled(ddr2_vrst,	sys_ddr_clk,	DDR2_EMIF1_VRST);
lpsc_clk_enabled(ddr2_vctl_rst,	sys_ddr_clk,	DDR2_EMIF2_VCTL_RST);
lpsc_clk_enabled(wdt_arm,	sys_half_clk,	WDT_ARM);
lpsc_clk_enabled(timer1,	sys_half_clk,	TIMER1);
lpsc_clk(mbx_lite,	sys_arm1176_clk,	MBX_LITE);
lpsc_clk(ethss,		eth_125mhz_clk,		ETHSS);
lpsc_clk(tsc,		sys_tsc_clk,		TSC);
lpsc_clk(uart0,		sys_half_clk,		UART0);
lpsc_clk(uart1,		sys_half_clk,		UART1);
lpsc_clk(uart2,		sys_half_clk,		UART2);
lpsc_clk(pktsec,	sys_half_clk,		PKTSEC);
lpsc_clk(keypad,	sys_half_clk,		KEYPAD);
lpsc_clk(mdio,		sys_half_clk,		MDIO);
lpsc_clk(sdio0,		sys_half_clk,		SDIO0);
lpsc_clk(sdio1,		sys_half_clk,		SDIO1);
lpsc_clk(timer0,	sys_half_clk,		TIMER0);
lpsc_clk(wdt_dsp,	sys_half_clk,		WDT_DSP);
lpsc_clk(ssp,		sys_half_clk,		SSP);
lpsc_clk(tdm0,		tdm_0_clk,		TDM0);
lpsc_clk(tdm1,		tdm_1_clk,		TDM1);
lpsc_clk(vlynq,		sys_vlynq_ref_clk,	VLYNQ);
lpsc_clk(mcdma,		sys_half_clk,		MCDMA);
lpsc_clk(usbss,		sys_half_clk,		USBSS);
lpsc_clk(usb0,		clk_usbss,		USB0);
lpsc_clk(usb1,		clk_usbss,		USB1);
lpsc_clk(ethss_rgmii,	eth_250mhz_clk,		ETHSS_RGMII);
lpsc_clk(imcop,		sys_dsp_clk,		IMCOP);
lpsc_clk(spare,		sys_half_clk,		SPARE);
__lpsc_clk(lcd, sys_lcd_clk, LCD, PSC_SWRSTDISABLE);
static struct clk clk_rng = ;
static struct clk clk_pka = ;
static struct clk_lookup clks[] = ;
static const struct mux_config pins[] = ;
static u8 irq_prios[TNETV107X_N_CP_INTC_IRQ] = ;
static struct davinci_id ids[] = ;
static struct davinci_timer_instance timer_instance[2] = ;
static struct davinci_timer_info timer_info = ;
static struct map_desc io_desc[] = ;
static unsigned long clk_sspll_recalc(struct clk *clk)
static void tnetv107x_watchdog_reset(struct platform_device *pdev)
static struct davinci_soc_info tnetv107x_soc_info = ;
void __init tnetv107x_init(void)
