static unsigned long external_high_reference, external_low_reference;
static unsigned long oscillator_reference, ckih2_reference;
static struct clk osc_clk;
static struct clk pll1_main_clk;
static struct clk pll1_sw_clk;
static struct clk pll2_sw_clk;
static struct clk pll3_sw_clk;
static struct clk mx53_pll4_sw_clk;
static struct clk lp_apm_clk;
static struct clk periph_apm_clk;
static struct clk ahb_clk;
static struct clk ipg_clk;
static struct clk usboh3_clk;
static struct clk emi_fast_clk;
static struct clk ipu_clk;
static struct clk mipi_hsc1_clk;
static struct clk esdhc1_clk;
static struct clk esdhc2_clk;
static struct clk esdhc3_mx53_clk;
#define MAX_DPLL_WAIT_TRIES	1000
static void __calc_pre_post_dividers(u32 div, u32 *pre, u32 *post,
u32 max_pre, u32 max_post)
static void _clk_ccgr_setclk(struct clk *clk, unsigned mode)
static int _clk_ccgr_enable(struct clk *clk)
static void _clk_ccgr_disable(struct clk *clk)
static int _clk_ccgr_enable_inrun(struct clk *clk)
static void _clk_ccgr_disable_inwait(struct clk *clk)
static inline u32 _get_mux(struct clk *parent, struct clk *m0,
struct clk *m1, struct clk *m2, struct clk *m3)
static inline void __iomem *_mx51_get_pll_base(struct clk *pll)
static inline void __iomem *_mx53_get_pll_base(struct clk *pll)
static inline void __iomem *_get_pll_base(struct clk *pll)
static unsigned long clk_pll_get_rate(struct clk *clk)
static int _clk_pll_set_rate(struct clk *clk, unsigned long rate)
static int _clk_pll_enable(struct clk *clk)
static void _clk_pll_disable(struct clk *clk)
static int _clk_pll1_sw_set_parent(struct clk *clk, struct clk *parent)
static unsigned long clk_pll1_sw_get_rate(struct clk *clk)
static int _clk_pll2_sw_set_parent(struct clk *clk, struct clk *parent)
static int _clk_lp_apm_set_parent(struct clk *clk, struct clk *parent)
static unsigned long clk_cpu_get_rate(struct clk *clk)
static int clk_cpu_set_rate(struct clk *clk, unsigned long rate)
static int _clk_periph_apm_set_parent(struct clk *clk, struct clk *parent)
static int _clk_main_bus_set_parent(struct clk *clk, struct clk *parent)
static struct clk main_bus_clk = ;
static unsigned long clk_ahb_get_rate(struct clk *clk)
static int _clk_ahb_set_rate(struct clk *clk, unsigned long rate)
static unsigned long _clk_ahb_round_rate(struct clk *clk,
unsigned long rate)
static int _clk_max_enable(struct clk *clk)
static void _clk_max_disable(struct clk *clk)
static unsigned long clk_ipg_get_rate(struct clk *clk)
static unsigned long clk_ipg_per_get_rate(struct clk *clk)
static int _clk_ipg_per_set_parent(struct clk *clk, struct clk *parent)
#define clk_nfc_set_parent	NULL
static unsigned long clk_nfc_get_rate(struct clk *clk)
static unsigned long clk_nfc_round_rate(struct clk *clk,
unsigned long rate)
static int clk_nfc_set_rate(struct clk *clk, unsigned long rate)
static unsigned long get_high_reference_clock_rate(struct clk *clk)
static unsigned long get_low_reference_clock_rate(struct clk *clk)
static unsigned long get_oscillator_reference_clock_rate(struct clk *clk)
static unsigned long get_ckih2_reference_clock_rate(struct clk *clk)
static unsigned long clk_emi_slow_get_rate(struct clk *clk)
static unsigned long _clk_ddr_hf_get_rate(struct clk *clk)
static struct clk ckih_clk = ;
static struct clk ckih2_clk = ;
static struct clk osc_clk = ;
static struct clk ckil_clk = ;
static struct clk pll1_main_clk = ;
static struct clk pll1_sw_clk = ;
static struct clk pll2_sw_clk = ;
static struct clk pll3_sw_clk = ;
static struct clk mx53_pll4_sw_clk = ;
static struct clk lp_apm_clk = ;
static struct clk periph_apm_clk = ;
static struct clk cpu_clk = ;
static struct clk ahb_clk = ;
static struct clk iim_clk = ;
static struct clk ipg_clk = ;
static struct clk ipg_perclk = ;
static struct clk ahb_max_clk = ;
static struct clk aips_tz1_clk = ;
static struct clk aips_tz2_clk = ;
static struct clk gpc_dvfs_clk = ;
static struct clk gpt_32k_clk = ;
static struct clk dummy_clk = ;
static struct clk emi_slow_clk = ;
static int clk_ipu_enable(struct clk *clk)
static void clk_ipu_disable(struct clk *clk)
static struct clk ahbmux1_clk = ;
static struct clk ipu_sec_clk = ;
static struct clk ddr_hf_clk = ;
static struct clk ddr_clk = ;
static int _clk_hsc_enable(struct clk *clk)
static void _clk_hsc_disable(struct clk *clk)
static struct clk mipi_hsp_clk = ;
#define DEFINE_CLOCK_CCGR(name, i, er, es, pfx, p, s)	\
static struct clk name =
#define DEFINE_CLOCK_MAX(name, i, er, es, pfx, p, s)	\
static struct clk name =
#define CLK_GET_RATE(name, nr, bitsname)				\
static unsigned long clk_##name##_get_rate(struct clk *clk)		\
#define CLK_SET_PARENT(name, nr, bitsname)				\
static int clk_##name##_set_parent(struct clk *clk, struct clk *parent)	\
#define CLK_SET_RATE(name, nr, bitsname)				\
static int clk_##name##_set_rate(struct clk *clk, unsigned long rate)	\
CLK_GET_RATE(uart, 1, UART)
CLK_SET_PARENT(uart, 1, UART)
static struct clk uart_root_clk = ;
CLK_GET_RATE(usboh3, 1, USBOH3)
CLK_SET_PARENT(usboh3, 1, USBOH3)
static struct clk usboh3_clk = ;
static struct clk usb_ahb_clk = ;
static int clk_usb_phy1_set_parent(struct clk *clk, struct clk *parent)
static struct clk usb_phy1_clk = ;
CLK_GET_RATE(ecspi, 2, CSPI)
CLK_SET_PARENT(ecspi, 1, CSPI)
static struct clk ecspi_main_clk = ;
CLK_GET_RATE(esdhc1, 1, ESDHC1_MSHC1)
CLK_SET_PARENT(esdhc1, 1, ESDHC1_MSHC1)
CLK_SET_RATE(esdhc1, 1, ESDHC1_MSHC1)
CLK_GET_RATE(esdhc2, 1, ESDHC2_MSHC2)
CLK_SET_PARENT(esdhc2, 1, ESDHC2_MSHC2)
CLK_SET_RATE(esdhc2, 1, ESDHC2_MSHC2)
static int clk_esdhc3_set_parent(struct clk *clk, struct clk *parent)
static int clk_esdhc4_set_parent(struct clk *clk, struct clk *parent)
static int clk_esdhc2_mx53_set_parent(struct clk *clk, struct clk *parent)
CLK_GET_RATE(esdhc3_mx53, 1, ESDHC3_MX53)
CLK_SET_PARENT(esdhc3_mx53, 1, ESDHC3_MX53)
CLK_SET_RATE(esdhc3_mx53, 1, ESDHC3_MX53)
static int clk_esdhc4_mx53_set_parent(struct clk *clk, struct clk *parent)
#define DEFINE_CLOCK_FULL(name, i, er, es, gr, sr, e, d, p, s)		\
static struct clk name =
#define DEFINE_CLOCK(name, i, er, es, gr, sr, p, s)			\
DEFINE_CLOCK_FULL(name, i, er, es, gr, sr, _clk_ccgr_enable, _clk_ccgr_disable, p, s)
DEFINE_CLOCK(spba_clk, 0, MXC_CCM_CCGR5, MXC_CCM_CCGRx_CG0_OFFSET,
NULL,  NULL, &ipg_clk, NULL);
DEFINE_CLOCK(uart1_ipg_clk, 0, MXC_CCM_CCGR1, MXC_CCM_CCGRx_CG3_OFFSET,
NULL,  NULL, &ipg_clk, &aips_tz1_clk);
DEFINE_CLOCK(uart2_ipg_clk, 1, MXC_CCM_CCGR1, MXC_CCM_CCGRx_CG5_OFFSET,
NULL,  NULL, &ipg_clk, &aips_tz1_clk);
DEFINE_CLOCK(uart3_ipg_clk, 2, MXC_CCM_CCGR1, MXC_CCM_CCGRx_CG7_OFFSET,
NULL,  NULL, &ipg_clk, &spba_clk);
DEFINE_CLOCK(uart1_clk, 0, MXC_CCM_CCGR1, MXC_CCM_CCGRx_CG4_OFFSET,
NULL,  NULL, &uart_root_clk, &uart1_ipg_clk);
DEFINE_CLOCK(uart2_clk, 1, MXC_CCM_CCGR1, MXC_CCM_CCGRx_CG6_OFFSET,
NULL,  NULL, &uart_root_clk, &uart2_ipg_clk);
DEFINE_CLOCK(uart3_clk, 2, MXC_CCM_CCGR1, MXC_CCM_CCGRx_CG8_OFFSET,
NULL,  NULL, &uart_root_clk, &uart3_ipg_clk);
DEFINE_CLOCK(gpt_ipg_clk, 0, MXC_CCM_CCGR2, MXC_CCM_CCGRx_CG10_OFFSET,
NULL,  NULL, &ipg_clk, NULL);
DEFINE_CLOCK(gpt_clk, 0, MXC_CCM_CCGR2, MXC_CCM_CCGRx_CG9_OFFSET,
NULL,  NULL, &ipg_clk, &gpt_ipg_clk);
DEFINE_CLOCK(pwm1_clk, 0, MXC_CCM_CCGR2, MXC_CCM_CCGRx_CG6_OFFSET,
NULL, NULL, &ipg_clk, NULL);
DEFINE_CLOCK(pwm2_clk, 0, MXC_CCM_CCGR2, MXC_CCM_CCGRx_CG8_OFFSET,
NULL, NULL, &ipg_clk, NULL);
DEFINE_CLOCK(i2c1_clk, 0, MXC_CCM_CCGR1, MXC_CCM_CCGRx_CG9_OFFSET,
NULL, NULL, &ipg_clk, NULL);
DEFINE_CLOCK(i2c2_clk, 1, MXC_CCM_CCGR1, MXC_CCM_CCGRx_CG10_OFFSET,
NULL, NULL, &ipg_clk, NULL);
DEFINE_CLOCK(hsi2c_clk, 0, MXC_CCM_CCGR1, MXC_CCM_CCGRx_CG11_OFFSET,
NULL, NULL, &ipg_clk, NULL);
DEFINE_CLOCK(fec_clk, 0, MXC_CCM_CCGR2, MXC_CCM_CCGRx_CG12_OFFSET,
NULL,  NULL, &ipg_clk, NULL);
DEFINE_CLOCK_CCGR(nfc_clk, 0, MXC_CCM_CCGR5, MXC_CCM_CCGRx_CG10_OFFSET,
clk_nfc, &emi_slow_clk, NULL);
DEFINE_CLOCK(ssi1_ipg_clk, 0, MXC_CCM_CCGR3, MXC_CCM_CCGRx_CG8_OFFSET,
NULL, NULL, &ipg_clk, NULL);
DEFINE_CLOCK(ssi1_clk, 0, MXC_CCM_CCGR3, MXC_CCM_CCGRx_CG9_OFFSET,
NULL, NULL, &pll3_sw_clk, &ssi1_ipg_clk);
DEFINE_CLOCK(ssi2_ipg_clk, 1, MXC_CCM_CCGR3, MXC_CCM_CCGRx_CG10_OFFSET,
NULL, NULL, &ipg_clk, NULL);
DEFINE_CLOCK(ssi2_clk, 1, MXC_CCM_CCGR3, MXC_CCM_CCGRx_CG11_OFFSET,
NULL, NULL, &pll3_sw_clk, &ssi2_ipg_clk);
DEFINE_CLOCK(ssi3_ipg_clk, 2, MXC_CCM_CCGR3, MXC_CCM_CCGRx_CG12_OFFSET,
NULL, NULL, &ipg_clk, NULL);
DEFINE_CLOCK(ssi3_clk, 2, MXC_CCM_CCGR3, MXC_CCM_CCGRx_CG13_OFFSET,
NULL, NULL, &pll3_sw_clk, &ssi3_ipg_clk);
DEFINE_CLOCK_FULL(ecspi1_ipg_clk, 0, MXC_CCM_CCGR4, MXC_CCM_CCGRx_CG9_OFFSET,
NULL, NULL, _clk_ccgr_enable_inrun, _clk_ccgr_disable,
&ipg_clk, &spba_clk);
DEFINE_CLOCK(ecspi1_clk, 0, MXC_CCM_CCGR4, MXC_CCM_CCGRx_CG10_OFFSET,
NULL, NULL, &ecspi_main_clk, &ecspi1_ipg_clk);
DEFINE_CLOCK_FULL(ecspi2_ipg_clk, 0, MXC_CCM_CCGR4, MXC_CCM_CCGRx_CG11_OFFSET,
NULL, NULL, _clk_ccgr_enable_inrun, _clk_ccgr_disable,
&ipg_clk, &aips_tz2_clk);
DEFINE_CLOCK(ecspi2_clk, 0, MXC_CCM_CCGR4, MXC_CCM_CCGRx_CG12_OFFSET,
NULL, NULL, &ecspi_main_clk, &ecspi2_ipg_clk);
DEFINE_CLOCK(cspi_ipg_clk, 0, MXC_CCM_CCGR4, MXC_CCM_CCGRx_CG9_OFFSET,
NULL, NULL, &ipg_clk, &aips_tz2_clk);
DEFINE_CLOCK(cspi_clk, 0, MXC_CCM_CCGR4, MXC_CCM_CCGRx_CG13_OFFSET,
NULL, NULL, &ipg_clk, &cspi_ipg_clk);
DEFINE_CLOCK(sdma_clk, 1, MXC_CCM_CCGR4, MXC_CCM_CCGRx_CG15_OFFSET,
NULL, NULL, &ahb_clk, NULL);
DEFINE_CLOCK_FULL(esdhc1_ipg_clk, 0, MXC_CCM_CCGR3, MXC_CCM_CCGRx_CG0_OFFSET,
NULL,  NULL, _clk_max_enable, _clk_max_disable, &ipg_clk, NULL);
DEFINE_CLOCK_MAX(esdhc1_clk, 0, MXC_CCM_CCGR3, MXC_CCM_CCGRx_CG1_OFFSET,
clk_esdhc1, &pll2_sw_clk, &esdhc1_ipg_clk);
DEFINE_CLOCK_FULL(esdhc2_ipg_clk, 1, MXC_CCM_CCGR3, MXC_CCM_CCGRx_CG2_OFFSET,
NULL,  NULL, _clk_max_enable, _clk_max_disable, &ipg_clk, NULL);
DEFINE_CLOCK_FULL(esdhc3_ipg_clk, 2, MXC_CCM_CCGR3, MXC_CCM_CCGRx_CG4_OFFSET,
NULL,  NULL, _clk_max_enable, _clk_max_disable, &ipg_clk, NULL);
DEFINE_CLOCK_FULL(esdhc4_ipg_clk, 3, MXC_CCM_CCGR3, MXC_CCM_CCGRx_CG6_OFFSET,
NULL,  NULL, _clk_max_enable, _clk_max_disable, &ipg_clk, NULL);
DEFINE_CLOCK_MAX(esdhc2_clk, 1, MXC_CCM_CCGR3, MXC_CCM_CCGRx_CG3_OFFSET,
clk_esdhc2, &pll2_sw_clk, &esdhc2_ipg_clk);
static struct clk esdhc3_clk = ;
static struct clk esdhc4_clk = ;
static struct clk esdhc2_mx53_clk = ;
DEFINE_CLOCK_MAX(esdhc3_mx53_clk, 2, MXC_CCM_CCGR3, MXC_CCM_CCGRx_CG5_OFFSET,
clk_esdhc3_mx53, &pll2_sw_clk, &esdhc2_ipg_clk);
static struct clk esdhc4_mx53_clk = ;
DEFINE_CLOCK(mipi_esc_clk, 0, MXC_CCM_CCGR4, MXC_CCM_CCGRx_CG5_OFFSET, NULL, NULL, NULL, &pll2_sw_clk);
DEFINE_CLOCK(mipi_hsc2_clk, 0, MXC_CCM_CCGR4, MXC_CCM_CCGRx_CG4_OFFSET, NULL, NULL, &mipi_esc_clk, &pll2_sw_clk);
DEFINE_CLOCK(mipi_hsc1_clk, 0, MXC_CCM_CCGR4, MXC_CCM_CCGRx_CG3_OFFSET, NULL, NULL, &mipi_hsc2_clk, &pll2_sw_clk);
DEFINE_CLOCK_FULL(ipu_clk, 0, MXC_CCM_CCGR5, MXC_CCM_CCGRx_CG5_OFFSET,
NULL,  NULL, clk_ipu_enable, clk_ipu_disable, &ahb_clk, &ipu_sec_clk);
DEFINE_CLOCK_FULL(emi_fast_clk, 0, MXC_CCM_CCGR5, MXC_CCM_CCGRx_CG7_OFFSET,
NULL, NULL, _clk_ccgr_enable, _clk_ccgr_disable_inwait,
&ddr_clk, NULL);
DEFINE_CLOCK(ipu_di0_clk, 0, MXC_CCM_CCGR6, MXC_CCM_CCGRx_CG5_OFFSET,
NULL, NULL, &pll3_sw_clk, NULL);
DEFINE_CLOCK(ipu_di1_clk, 0, MXC_CCM_CCGR6, MXC_CCM_CCGRx_CG6_OFFSET,
NULL, NULL, &pll3_sw_clk, NULL);
#define _REGISTER_CLOCK(d, n, c) \
,
static struct clk_lookup mx51_lookups[] = ;
static struct clk_lookup mx53_lookups[] = ;
static void clk_tree_init(void)
int __init mx51_clocks_init(unsigned long ckil, unsigned long osc,
unsigned long ckih1, unsigned long ckih2)
int __init mx53_clocks_init(unsigned long ckil, unsigned long osc,
unsigned long ckih1, unsigned long ckih2)
