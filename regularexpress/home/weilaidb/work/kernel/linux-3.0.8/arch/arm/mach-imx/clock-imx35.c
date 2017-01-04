#define CCM_BASE	MX35_IO_ADDRESS(MX35_CCM_BASE_ADDR)
#define CCM_CCMR        0x00
#define CCM_PDR0        0x04
#define CCM_PDR1        0x08
#define CCM_PDR2        0x0C
#define CCM_PDR3        0x10
#define CCM_PDR4        0x14
#define CCM_RCSR        0x18
#define CCM_MPCTL       0x1C
#define CCM_PPCTL       0x20
#define CCM_ACMR        0x24
#define CCM_COSR        0x28
#define CCM_CGR0        0x2C
#define CCM_CGR1        0x30
#define CCM_CGR2        0x34
#define CCM_CGR3        0x38
static void calc_dividers(u32 div, u32 *pre, u32 *post, u32 maxpost)
static void calc_dividers_3_6(u32 div, u32 *pre, u32 *post)
static void calc_dividers_3_3(u32 div, u32 *pre, u32 *post)
static unsigned long get_rate_mpll(void)
static unsigned long get_rate_ppll(void)
struct arm_ahb_div ;
static struct arm_ahb_div clk_consumer[] = ;
static unsigned long get_rate_arm(void)
static unsigned long get_rate_ahb(struct clk *clk)
static unsigned long get_rate_ipg(struct clk *clk)
static unsigned long get_rate_uart(struct clk *clk)
static unsigned long get_rate_sdhc(struct clk *clk)
static unsigned long get_rate_mshc(struct clk *clk)
static unsigned long get_rate_ssi(struct clk *clk)
static unsigned long get_rate_csi(struct clk *clk)
static unsigned long get_rate_otg(struct clk *clk)
static unsigned long get_rate_ipg_per(struct clk *clk)
static unsigned long get_rate_hsp(struct clk *clk)
static int clk_cgr_enable(struct clk *clk)
static void clk_cgr_disable(struct clk *clk)
#define DEFINE_CLOCK(name, i, er, es, gr, sr)		\
static struct clk name =
DEFINE_CLOCK(asrc_clk,   0, CCM_CGR0,  0, NULL, NULL);
DEFINE_CLOCK(ata_clk,    0, CCM_CGR0,  2, get_rate_ipg, NULL);
DEFINE_CLOCK(can1_clk,   0, CCM_CGR0,  6, get_rate_ipg, NULL);
DEFINE_CLOCK(can2_clk,   1, CCM_CGR0,  8, get_rate_ipg, NULL);
DEFINE_CLOCK(cspi1_clk,  0, CCM_CGR0, 10, get_rate_ipg, NULL);
DEFINE_CLOCK(cspi2_clk,  1, CCM_CGR0, 12, get_rate_ipg, NULL);
DEFINE_CLOCK(ect_clk,    0, CCM_CGR0, 14, get_rate_ipg, NULL);
DEFINE_CLOCK(edio_clk,   0, CCM_CGR0, 16, NULL, NULL);
DEFINE_CLOCK(emi_clk,    0, CCM_CGR0, 18, get_rate_ipg, NULL);
DEFINE_CLOCK(epit1_clk,  0, CCM_CGR0, 20, get_rate_ipg, NULL);
DEFINE_CLOCK(epit2_clk,  1, CCM_CGR0, 22, get_rate_ipg, NULL);
DEFINE_CLOCK(esai_clk,   0, CCM_CGR0, 24, NULL, NULL);
DEFINE_CLOCK(esdhc1_clk, 0, CCM_CGR0, 26, get_rate_sdhc, NULL);
DEFINE_CLOCK(esdhc2_clk, 1, CCM_CGR0, 28, get_rate_sdhc, NULL);
DEFINE_CLOCK(esdhc3_clk, 2, CCM_CGR0, 30, get_rate_sdhc, NULL);
DEFINE_CLOCK(fec_clk,    0, CCM_CGR1,  0, get_rate_ipg, NULL);
DEFINE_CLOCK(gpio1_clk,  0, CCM_CGR1,  2, NULL, NULL);
DEFINE_CLOCK(gpio2_clk,  1, CCM_CGR1,  4, NULL, NULL);
DEFINE_CLOCK(gpio3_clk,  2, CCM_CGR1,  6, NULL, NULL);
DEFINE_CLOCK(gpt_clk,    0, CCM_CGR1,  8, get_rate_ipg, NULL);
DEFINE_CLOCK(i2c1_clk,   0, CCM_CGR1, 10, get_rate_ipg_per, NULL);
DEFINE_CLOCK(i2c2_clk,   1, CCM_CGR1, 12, get_rate_ipg_per, NULL);
DEFINE_CLOCK(i2c3_clk,   2, CCM_CGR1, 14, get_rate_ipg_per, NULL);
DEFINE_CLOCK(iomuxc_clk, 0, CCM_CGR1, 16, NULL, NULL);
DEFINE_CLOCK(ipu_clk,    0, CCM_CGR1, 18, get_rate_hsp, NULL);
DEFINE_CLOCK(kpp_clk,    0, CCM_CGR1, 20, get_rate_ipg, NULL);
DEFINE_CLOCK(mlb_clk,    0, CCM_CGR1, 22, get_rate_ahb, NULL);
DEFINE_CLOCK(mshc_clk,   0, CCM_CGR1, 24, get_rate_mshc, NULL);
DEFINE_CLOCK(owire_clk,  0, CCM_CGR1, 26, get_rate_ipg_per, NULL);
DEFINE_CLOCK(pwm_clk,    0, CCM_CGR1, 28, get_rate_ipg_per, NULL);
DEFINE_CLOCK(rngc_clk,   0, CCM_CGR1, 30, get_rate_ipg, NULL);
DEFINE_CLOCK(rtc_clk,    0, CCM_CGR2,  0, get_rate_ipg, NULL);
DEFINE_CLOCK(rtic_clk,   0, CCM_CGR2,  2, get_rate_ahb, NULL);
DEFINE_CLOCK(scc_clk,    0, CCM_CGR2,  4, get_rate_ipg, NULL);
DEFINE_CLOCK(sdma_clk,   0, CCM_CGR2,  6, NULL, NULL);
DEFINE_CLOCK(spba_clk,   0, CCM_CGR2,  8, get_rate_ipg, NULL);
DEFINE_CLOCK(spdif_clk,  0, CCM_CGR2, 10, NULL, NULL);
DEFINE_CLOCK(ssi1_clk,   0, CCM_CGR2, 12, get_rate_ssi, NULL);
DEFINE_CLOCK(ssi2_clk,   1, CCM_CGR2, 14, get_rate_ssi, NULL);
DEFINE_CLOCK(uart1_clk,  0, CCM_CGR2, 16, get_rate_uart, NULL);
DEFINE_CLOCK(uart2_clk,  1, CCM_CGR2, 18, get_rate_uart, NULL);
DEFINE_CLOCK(uart3_clk,  2, CCM_CGR2, 20, get_rate_uart, NULL);
DEFINE_CLOCK(usbotg_clk, 0, CCM_CGR2, 22, get_rate_otg, NULL);
DEFINE_CLOCK(wdog_clk,   0, CCM_CGR2, 24, NULL, NULL);
DEFINE_CLOCK(max_clk,    0, CCM_CGR2, 26, NULL, NULL);
DEFINE_CLOCK(audmux_clk, 0, CCM_CGR2, 30, NULL, NULL);
DEFINE_CLOCK(csi_clk,    0, CCM_CGR3,  0, get_rate_csi, NULL);
DEFINE_CLOCK(iim_clk,    0, CCM_CGR3,  2, NULL, NULL);
DEFINE_CLOCK(gpu2d_clk,  0, CCM_CGR3,  4, NULL, NULL);
DEFINE_CLOCK(usbahb_clk, 0, 0,         0, get_rate_ahb, NULL);
static int clk_dummy_enable(struct clk *clk)
static void clk_dummy_disable(struct clk *clk)
static unsigned long get_rate_nfc(struct clk *clk)
static struct clk nfc_clk = ;
#define _REGISTER_CLOCK(d, n, c)	\
,
static struct clk_lookup lookups[] = ;
int __init mx35_clocks_init()
