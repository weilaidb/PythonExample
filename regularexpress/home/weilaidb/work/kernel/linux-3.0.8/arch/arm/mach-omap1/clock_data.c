#define IDL_CLKOUT_ARM_SHIFT			12
#define IDLTIM_ARM_SHIFT			9
#define IDLAPI_ARM_SHIFT			8
#define IDLIF_ARM_SHIFT				6
#define IDLLB_ARM_SHIFT				4
#define OMAP1510_IDLLCD_ARM_SHIFT		3
#define IDLPER_ARM_SHIFT			2
#define IDLXORP_ARM_SHIFT			1
#define IDLWDT_ARM_SHIFT			0
#define CONF_MOD_UART3_CLK_MODE_R		31
#define CONF_MOD_UART2_CLK_MODE_R		30
#define CONF_MOD_UART1_CLK_MODE_R		29
#define CONF_MOD_MMC_SD_CLK_REQ_R		23
#define CONF_MOD_MCBSP3_AUXON			20
#define CONF_MOD_SOSSI_CLK_EN_R			16
#define OTG_SYSCON_2_UHOST_EN_SHIFT		8
#define SOFT_MMC2_DPLL_REQ_SHIFT	13
#define SOFT_MMC_DPLL_REQ_SHIFT		12
#define SOFT_UART3_DPLL_REQ_SHIFT	11
#define SOFT_UART2_DPLL_REQ_SHIFT	10
#define SOFT_UART1_DPLL_REQ_SHIFT	9
#define SOFT_USB_OTG_DPLL_REQ_SHIFT	8
#define SOFT_CAM_DPLL_REQ_SHIFT		7
#define SOFT_COM_MCKO_REQ_SHIFT		6
#define SOFT_PERIPH_REQ_SHIFT		5
#define USB_REQ_EN_SHIFT		4
#define SOFT_USB_REQ_SHIFT		3
#define SOFT_SDW_REQ_SHIFT		2
#define SOFT_COM_REQ_SHIFT		1
#define SOFT_DPLL_REQ_SHIFT		0
static struct clk ck_ref = ;
static struct clk ck_dpll1 = ;
static struct arm_idlect1_clk ck_dpll1out = ;
static struct clk sossi_ck = ;
static struct clk arm_ck = ;
static struct arm_idlect1_clk armper_ck = ;
static struct clk arm_gpio_ck = ;
static struct arm_idlect1_clk armxor_ck = ;
static struct arm_idlect1_clk armtim_ck = ;
static struct arm_idlect1_clk armwdt_ck = ;
static struct clk arminth_ck16xx = ;
static struct clk dsp_ck = ;
static struct clk dspmmu_ck = ;
static struct clk dspper_ck = ;
static struct clk dspxor_ck = ;
static struct clk dsptim_ck = ;
static struct arm_idlect1_clk tc_ck = ;
static struct clk arminth_ck1510 = ;
static struct clk tipb_ck = ;
static struct clk l3_ocpi_ck = ;
static struct clk tc1_ck = ;
static struct clk tc2_ck = ;
static struct clk dma_ck = ;
static struct clk dma_lcdfree_ck = ;
static struct arm_idlect1_clk api_ck = ;
static struct arm_idlect1_clk lb_ck = ;
static struct clk rhea1_ck = ;
static struct clk rhea2_ck = ;
static struct clk lcd_ck_16xx = ;
static struct arm_idlect1_clk lcd_ck_1510 = ;
static struct clk uart1_1510 = ;
static struct uart_clk uart1_16xx = ;
static struct clk uart2_ck = ;
static struct clk uart3_1510 = ;
static struct uart_clk uart3_16xx = ;
static struct clk usb_clko = ;
static struct clk usb_hhc_ck1510 = ;
static struct clk usb_hhc_ck16xx = ;
static struct clk usb_dc_ck = ;
static struct clk usb_dc_ck7xx = ;
static struct clk uart1_7xx = ;
static struct clk uart2_7xx = ;
static struct clk mclk_1510 = ;
static struct clk mclk_16xx = ;
static struct clk bclk_1510 = ;
static struct clk bclk_16xx = ;
static struct clk mmc1_ck = ;
static struct clk mmc2_ck = ;
static struct clk mmc3_ck = ;
static struct clk virtual_ck_mpu = ;
static struct clk i2c_fck = ;
static struct clk i2c_ick = ;
static struct omap_clk omap_clks[] = ;
static struct clk_functions omap1_clk_functions = ;
int __init omap1_clk_init(void)
