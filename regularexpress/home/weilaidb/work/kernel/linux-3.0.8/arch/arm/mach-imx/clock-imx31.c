#define PRE_DIV_MIN_FREQ    10000000
static void __calc_pre_post_dividers(u32 div, u32 *pre, u32 *post)
static struct clk mcu_pll_clk;
static struct clk serial_pll_clk;
static struct clk ipg_clk;
static struct clk ckih_clk;
static int cgr_enable(struct clk *clk)
static void cgr_disable(struct clk *clk)
static unsigned long pll_ref_get_rate(void)
static unsigned long usb_pll_get_rate(struct clk *clk)
static unsigned long serial_pll_get_rate(struct clk *clk)
static unsigned long mcu_pll_get_rate(struct clk *clk)
static int usb_pll_enable(struct clk *clk)
static void usb_pll_disable(struct clk *clk)
static int serial_pll_enable(struct clk *clk)
static void serial_pll_disable(struct clk *clk)
#define PDR0(mask, off) ((__raw_readl(MXC_CCM_PDR0) & mask) >> off)
#define PDR1(mask, off) ((__raw_readl(MXC_CCM_PDR1) & mask) >> off)
#define PDR2(mask, off) ((__raw_readl(MXC_CCM_PDR2) & mask) >> off)
static unsigned long mcu_main_get_rate(struct clk *clk)
static unsigned long ahb_get_rate(struct clk *clk)
static unsigned long ipg_get_rate(struct clk *clk)
static unsigned long nfc_get_rate(struct clk *clk)
static unsigned long hsp_get_rate(struct clk *clk)
static unsigned long usb_get_rate(struct clk *clk)
static unsigned long csi_get_rate(struct clk *clk)
static unsigned long csi_round_rate(struct clk *clk, unsigned long rate)
static int csi_set_rate(struct clk *clk, unsigned long rate)
static unsigned long ssi1_get_rate(struct clk *clk)
static unsigned long ssi2_get_rate(struct clk *clk)
static unsigned long firi_get_rate(struct clk *clk)
static unsigned long firi_round_rate(struct clk *clk, unsigned long rate)
static int firi_set_rate(struct clk *clk, unsigned long rate)
static unsigned long mbx_get_rate(struct clk *clk)
static unsigned long mstick1_get_rate(struct clk *clk)
static unsigned long mstick2_get_rate(struct clk *clk)
static unsigned long ckih_rate;
static unsigned long clk_ckih_get_rate(struct clk *clk)
static unsigned long clk_ckil_get_rate(struct clk *clk)
static struct clk ckih_clk = ;
static struct clk mcu_pll_clk = ;
static struct clk mcu_main_clk = ;
static struct clk serial_pll_clk = ;
static struct clk usb_pll_clk = ;
static struct clk ahb_clk = ;
#define DEFINE_CLOCK(name, i, er, es, gr, s, p)		\
static struct clk name =
#define DEFINE_CLOCK1(name, i, er, es, getsetround, s, p)	\
static struct clk name =
DEFINE_CLOCK(perclk_clk,  0, NULL,          0, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(ckil_clk,    0, NULL,          0, clk_ckil_get_rate, NULL, NULL);
DEFINE_CLOCK(sdhc1_clk,   0, MXC_CCM_CGR0,  0, NULL, NULL, &perclk_clk);
DEFINE_CLOCK(sdhc2_clk,   1, MXC_CCM_CGR0,  2, NULL, NULL, &perclk_clk);
DEFINE_CLOCK(gpt_clk,     0, MXC_CCM_CGR0,  4, NULL, NULL, &perclk_clk);
DEFINE_CLOCK(epit1_clk,   0, MXC_CCM_CGR0,  6, NULL, NULL, &perclk_clk);
DEFINE_CLOCK(epit2_clk,   1, MXC_CCM_CGR0,  8, NULL, NULL, &perclk_clk);
DEFINE_CLOCK(iim_clk,     0, MXC_CCM_CGR0, 10, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(ata_clk,     0, MXC_CCM_CGR0, 12, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(sdma_clk1,   0, MXC_CCM_CGR0, 14, NULL, NULL, &ahb_clk);
DEFINE_CLOCK(cspi3_clk,   2, MXC_CCM_CGR0, 16, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(rng_clk,     0, MXC_CCM_CGR0, 18, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(uart1_clk,   0, MXC_CCM_CGR0, 20, NULL, NULL, &perclk_clk);
DEFINE_CLOCK(uart2_clk,   1, MXC_CCM_CGR0, 22, NULL, NULL, &perclk_clk);
DEFINE_CLOCK(ssi1_clk,    0, MXC_CCM_CGR0, 24, ssi1_get_rate, NULL, &serial_pll_clk);
DEFINE_CLOCK(i2c1_clk,    0, MXC_CCM_CGR0, 26, NULL, NULL, &perclk_clk);
DEFINE_CLOCK(i2c2_clk,    1, MXC_CCM_CGR0, 28, NULL, NULL, &perclk_clk);
DEFINE_CLOCK(i2c3_clk,    2, MXC_CCM_CGR0, 30, NULL, NULL, &perclk_clk);
DEFINE_CLOCK(mpeg4_clk,   0, MXC_CCM_CGR1,  0, NULL, NULL, &ahb_clk);
DEFINE_CLOCK(mstick1_clk, 0, MXC_CCM_CGR1,  2, mstick1_get_rate, NULL, &usb_pll_clk);
DEFINE_CLOCK(mstick2_clk, 1, MXC_CCM_CGR1,  4, mstick2_get_rate, NULL, &usb_pll_clk);
DEFINE_CLOCK1(csi_clk,    0, MXC_CCM_CGR1,  6, csi, NULL, &serial_pll_clk);
DEFINE_CLOCK(rtc_clk,     0, MXC_CCM_CGR1,  8, NULL, NULL, &ckil_clk);
DEFINE_CLOCK(wdog_clk,    0, MXC_CCM_CGR1, 10, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(pwm_clk,     0, MXC_CCM_CGR1, 12, NULL, NULL, &perclk_clk);
DEFINE_CLOCK(usb_clk2,    0, MXC_CCM_CGR1, 18, usb_get_rate, NULL, &ahb_clk);
DEFINE_CLOCK(kpp_clk,     0, MXC_CCM_CGR1, 20, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(ipu_clk,     0, MXC_CCM_CGR1, 22, hsp_get_rate, NULL, &mcu_main_clk);
DEFINE_CLOCK(uart3_clk,   2, MXC_CCM_CGR1, 24, NULL, NULL, &perclk_clk);
DEFINE_CLOCK(uart4_clk,   3, MXC_CCM_CGR1, 26, NULL, NULL, &perclk_clk);
DEFINE_CLOCK(uart5_clk,   4, MXC_CCM_CGR1, 28, NULL, NULL, &perclk_clk);
DEFINE_CLOCK(owire_clk,   0, MXC_CCM_CGR1, 30, NULL, NULL, &perclk_clk);
DEFINE_CLOCK(ssi2_clk,    1, MXC_CCM_CGR2,  0, ssi2_get_rate, NULL, &serial_pll_clk);
DEFINE_CLOCK(cspi1_clk,   0, MXC_CCM_CGR2,  2, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(cspi2_clk,   1, MXC_CCM_CGR2,  4, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(mbx_clk,     0, MXC_CCM_CGR2,  6, mbx_get_rate, NULL, &ahb_clk);
DEFINE_CLOCK(emi_clk,     0, MXC_CCM_CGR2,  8, NULL, NULL, &ahb_clk);
DEFINE_CLOCK(rtic_clk,    0, MXC_CCM_CGR2, 10, NULL, NULL, &ahb_clk);
DEFINE_CLOCK1(firi_clk,   0, MXC_CCM_CGR2, 12, firi, NULL, &usb_pll_clk);
DEFINE_CLOCK(sdma_clk2,   0, NULL,          0, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(usb_clk1,    0, NULL,          0, usb_get_rate, NULL, &usb_pll_clk);
DEFINE_CLOCK(nfc_clk,     0, NULL,          0, nfc_get_rate, NULL, &ahb_clk);
DEFINE_CLOCK(scc_clk,     0, NULL,          0, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(ipg_clk,     0, NULL,          0, ipg_get_rate, NULL, &ahb_clk);
#define _REGISTER_CLOCK(d, n, c) \
,
static struct clk_lookup lookups[] = ;
int __init mx31_clocks_init(unsigned long fref)
