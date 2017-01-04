#define CRM_BASE	MX25_IO_ADDRESS(MX25_CRM_BASE_ADDR)
#define CCM_MPCTL	0x00
#define CCM_UPCTL	0x04
#define CCM_CCTL	0x08
#define CCM_CGCR0	0x0C
#define CCM_CGCR1	0x10
#define CCM_CGCR2	0x14
#define CCM_PCDR0	0x18
#define CCM_PCDR1	0x1C
#define CCM_PCDR2	0x20
#define CCM_PCDR3	0x24
#define CCM_RCSR	0x28
#define CCM_CRDR	0x2C
#define CCM_DCVR0	0x30
#define CCM_DCVR1	0x34
#define CCM_DCVR2	0x38
#define CCM_DCVR3	0x3c
#define CCM_LTR0	0x40
#define CCM_LTR1	0x44
#define CCM_LTR2	0x48
#define CCM_LTR3	0x4c
static unsigned long get_rate_mpll(void)
static unsigned long get_rate_upll(void)
unsigned long get_rate_arm(struct clk *clk)
static unsigned long get_rate_ahb(struct clk *clk)
static unsigned long get_rate_ipg(struct clk *clk)
static unsigned long get_rate_per(int per)
static unsigned long get_rate_uart(struct clk *clk)
static unsigned long get_rate_ssi2(struct clk *clk)
static unsigned long get_rate_ssi1(struct clk *clk)
static unsigned long get_rate_i2c(struct clk *clk)
static unsigned long get_rate_nfc(struct clk *clk)
static unsigned long get_rate_gpt(struct clk *clk)
static unsigned long get_rate_lcdc(struct clk *clk)
static unsigned long get_rate_esdhc1(struct clk *clk)
static unsigned long get_rate_esdhc2(struct clk *clk)
static unsigned long get_rate_csi(struct clk *clk)
static unsigned long get_rate_otg(struct clk *clk)
static int clk_cgcr_enable(struct clk *clk)
static void clk_cgcr_disable(struct clk *clk)
#define DEFINE_CLOCK(name, i, er, es, gr, sr, s)	\
static struct clk name =
DEFINE_CLOCK(gpt_clk,    0, CCM_CGCR0,  5, get_rate_gpt, NULL, NULL);
DEFINE_CLOCK(uart_per_clk, 0, CCM_CGCR0, 15, get_rate_uart, NULL, NULL);
DEFINE_CLOCK(ssi1_per_clk, 0, CCM_CGCR0, 13, get_rate_ipg, NULL, NULL);
DEFINE_CLOCK(ssi2_per_clk, 0, CCM_CGCR0, 14, get_rate_ipg, NULL, NULL);
DEFINE_CLOCK(cspi1_clk,  0, CCM_CGCR1,  5, get_rate_ipg, NULL, NULL);
DEFINE_CLOCK(cspi2_clk,  0, CCM_CGCR1,  6, get_rate_ipg, NULL, NULL);
DEFINE_CLOCK(cspi3_clk,  0, CCM_CGCR1,  7, get_rate_ipg, NULL, NULL);
DEFINE_CLOCK(esdhc1_ahb_clk, 0, CCM_CGCR0, 21, get_rate_esdhc1,	 NULL, NULL);
DEFINE_CLOCK(esdhc1_per_clk, 0, CCM_CGCR0,  3, get_rate_esdhc1,	 NULL,
&esdhc1_ahb_clk);
DEFINE_CLOCK(esdhc2_ahb_clk, 0, CCM_CGCR0, 22, get_rate_esdhc2,	 NULL, NULL);
DEFINE_CLOCK(esdhc2_per_clk, 0, CCM_CGCR0,  4, get_rate_esdhc2,	 NULL,
&esdhc2_ahb_clk);
DEFINE_CLOCK(sdma_ahb_clk, 0, CCM_CGCR0, 26, NULL,	 NULL, NULL);
DEFINE_CLOCK(fec_ahb_clk, 0, CCM_CGCR0, 23, NULL,	 NULL, NULL);
DEFINE_CLOCK(lcdc_ahb_clk, 0, CCM_CGCR0, 24, NULL,	 NULL, NULL);
DEFINE_CLOCK(lcdc_per_clk, 0, CCM_CGCR0,  7, NULL,	 NULL, &lcdc_ahb_clk);
DEFINE_CLOCK(csi_ahb_clk, 0, CCM_CGCR0, 18, get_rate_csi, NULL, NULL);
DEFINE_CLOCK(csi_per_clk, 0, CCM_CGCR0, 0, get_rate_csi, NULL, &csi_ahb_clk);
DEFINE_CLOCK(uart1_clk,  0, CCM_CGCR2, 14, get_rate_uart, NULL, &uart_per_clk);
DEFINE_CLOCK(uart2_clk,  0, CCM_CGCR2, 15, get_rate_uart, NULL, &uart_per_clk);
DEFINE_CLOCK(uart3_clk,  0, CCM_CGCR2, 16, get_rate_uart, NULL, &uart_per_clk);
DEFINE_CLOCK(uart4_clk,  0, CCM_CGCR2, 17, get_rate_uart, NULL, &uart_per_clk);
DEFINE_CLOCK(uart5_clk,  0, CCM_CGCR2, 18, get_rate_uart, NULL, &uart_per_clk);
DEFINE_CLOCK(nfc_clk,    0, CCM_CGCR0,  8, get_rate_nfc, NULL, NULL);
DEFINE_CLOCK(usbotg_clk, 0, CCM_CGCR0, 28, get_rate_otg, NULL, NULL);
DEFINE_CLOCK(pwm1_clk,	 0, CCM_CGCR1, 31, get_rate_ipg, NULL, NULL);
DEFINE_CLOCK(pwm2_clk,	 0, CCM_CGCR2,  0, get_rate_ipg, NULL, NULL);
DEFINE_CLOCK(pwm3_clk,	 0, CCM_CGCR2,  1, get_rate_ipg, NULL, NULL);
DEFINE_CLOCK(pwm4_clk,	 0, CCM_CGCR2,  2, get_rate_ipg, NULL, NULL);
DEFINE_CLOCK(kpp_clk,	 0, CCM_CGCR1, 28, get_rate_ipg, NULL, NULL);
DEFINE_CLOCK(tsc_clk,	 0, CCM_CGCR2, 13, get_rate_ipg, NULL, NULL);
DEFINE_CLOCK(i2c_clk,	 0, CCM_CGCR0,  6, get_rate_i2c, NULL, NULL);
DEFINE_CLOCK(fec_clk,	 0, CCM_CGCR1, 15, get_rate_ipg, NULL, &fec_ahb_clk);
DEFINE_CLOCK(dryice_clk, 0, CCM_CGCR1,  8, get_rate_ipg, NULL, NULL);
DEFINE_CLOCK(lcdc_clk,	 0, CCM_CGCR1, 29, get_rate_lcdc, NULL, &lcdc_per_clk);
DEFINE_CLOCK(wdt_clk,    0, CCM_CGCR2, 19, get_rate_ipg, NULL,  NULL);
DEFINE_CLOCK(ssi1_clk,  0, CCM_CGCR2, 11, get_rate_ssi1, NULL, &ssi1_per_clk);
DEFINE_CLOCK(ssi2_clk,  1, CCM_CGCR2, 12, get_rate_ssi2, NULL, &ssi2_per_clk);
DEFINE_CLOCK(sdma_clk, 0, CCM_CGCR2,  6, get_rate_ipg, NULL, &sdma_ahb_clk);
DEFINE_CLOCK(esdhc1_clk,  0, CCM_CGCR1, 13, get_rate_esdhc1, NULL,
&esdhc1_per_clk);
DEFINE_CLOCK(esdhc2_clk,  1, CCM_CGCR1, 14, get_rate_esdhc2, NULL,
&esdhc2_per_clk);
DEFINE_CLOCK(audmux_clk, 0, CCM_CGCR1, 0, NULL, NULL, NULL);
DEFINE_CLOCK(csi_clk,    0, CCM_CGCR1,  4, get_rate_csi, NULL,  &csi_per_clk);
DEFINE_CLOCK(can1_clk,	 0, CCM_CGCR1,  2, get_rate_ipg, NULL, NULL);
DEFINE_CLOCK(can2_clk,	 1, CCM_CGCR1,  3, get_rate_ipg, NULL, NULL);
#define _REGISTER_CLOCK(d, n, c)	\
,
static struct clk_lookup lookups[] = ;
int __init mx25_clocks_init(void)
