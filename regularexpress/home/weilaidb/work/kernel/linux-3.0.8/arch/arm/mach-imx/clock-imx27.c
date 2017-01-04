#define IO_ADDR_CCM(off)	(MX27_IO_ADDRESS(MX27_CCM_BASE_ADDR + (off)))
#define CCM_CSCR		IO_ADDR_CCM(0x0)
#define CCM_MPCTL0		IO_ADDR_CCM(0x4)
#define CCM_MPCTL1		IO_ADDR_CCM(0x8)
#define CCM_SPCTL0		IO_ADDR_CCM(0xc)
#define CCM_SPCTL1		IO_ADDR_CCM(0x10)
#define CCM_OSC26MCTL		IO_ADDR_CCM(0x14)
#define CCM_PCDR0		IO_ADDR_CCM(0x18)
#define CCM_PCDR1		IO_ADDR_CCM(0x1c)
#define CCM_PCCR0		IO_ADDR_CCM(0x20)
#define CCM_PCCR1		IO_ADDR_CCM(0x24)
#define CCM_CCSR		IO_ADDR_CCM(0x28)
#define CCM_PMCTL		IO_ADDR_CCM(0x2c)
#define CCM_PMCOUNT		IO_ADDR_CCM(0x30)
#define CCM_WKGDCTL		IO_ADDR_CCM(0x34)
#define CCM_CSCR_UPDATE_DIS	(1 << 31)
#define CCM_CSCR_SSI2		(1 << 23)
#define CCM_CSCR_SSI1		(1 << 22)
#define CCM_CSCR_VPU		(1 << 21)
#define CCM_CSCR_MSHC           (1 << 20)
#define CCM_CSCR_SPLLRES        (1 << 19)
#define CCM_CSCR_MPLLRES        (1 << 18)
#define CCM_CSCR_SP             (1 << 17)
#define CCM_CSCR_MCU            (1 << 16)
#define CCM_CSCR_OSC26MDIV      (1 << 4)
#define CCM_CSCR_OSC26M         (1 << 3)
#define CCM_CSCR_FPM            (1 << 2)
#define CCM_CSCR_SPEN           (1 << 1)
#define CCM_CSCR_MPEN           (1 << 0)
#define CCM_CSCR_ARM_SRC        (1 << 15)
#define CCM_SPCTL1_LF           (1 << 15)
#define CCM_SPCTL1_BRMO         (1 << 6)
static struct clk mpll_main1_clk, mpll_main2_clk;
static int clk_pccr_enable(struct clk *clk)
static void clk_pccr_disable(struct clk *clk)
static int clk_spll_enable(struct clk *clk)
static void clk_spll_disable(struct clk *clk)
static int clk_cpu_set_parent(struct clk *clk, struct clk *parent)
static unsigned long round_rate_cpu(struct clk *clk, unsigned long rate)
static int set_rate_cpu(struct clk *clk, unsigned long rate)
static unsigned long round_rate_per(struct clk *clk, unsigned long rate)
static int set_rate_per(struct clk *clk, unsigned long rate)
static unsigned long get_rate_usb(struct clk *clk)
static unsigned long get_rate_ssix(struct clk *clk, unsigned long pdf)
static unsigned long get_rate_ssi1(struct clk *clk)
static unsigned long get_rate_ssi2(struct clk *clk)
static unsigned long get_rate_nfc(struct clk *clk)
static unsigned long get_rate_vpu(struct clk *clk)
static unsigned long round_rate_parent(struct clk *clk, unsigned long rate)
static unsigned long get_rate_parent(struct clk *clk)
static int set_rate_parent(struct clk *clk, unsigned long rate)
static unsigned long external_high_reference = 26000000;
static unsigned long get_rate_high_reference(struct clk *clk)
static unsigned long external_low_reference = 32768;
static unsigned long get_rate_low_reference(struct clk *clk)
static unsigned long get_rate_fpm(struct clk *clk)
static unsigned long get_rate_mpll(struct clk *clk)
static unsigned long get_rate_mpll_main(struct clk *clk)
static unsigned long get_rate_spll(struct clk *clk)
static unsigned long get_rate_cpu(struct clk *clk)
static unsigned long get_rate_ahb(struct clk *clk)
static unsigned long get_rate_ipg(struct clk *clk)
static unsigned long get_rate_per(struct clk *clk)
static struct clk ckih_clk = ;
static struct clk mpll_clk = ;
static struct clk mpll_main1_clk = ;
static struct clk mpll_main2_clk = ;
static struct clk ahb_clk = ;
static struct clk ipg_clk = ;
static struct clk cpu_clk = ;
static struct clk spll_clk = ;
static struct clk ckil_clk = ;
static struct clk fpm_clk = ;
#define PCCR0 CCM_PCCR0
#define PCCR1 CCM_PCCR1
#define DEFINE_CLOCK(name, i, er, es, gr, s, p)		\
static struct clk name =
#define DEFINE_CLOCK1(name, i, er, es, getsetround, s, p)	\
static struct clk name =
static struct clk slcdc_clk1, sahara2_clk1, rtic_clk1, fec_clk1, emma_clk1,
dma_clk1, lcdc_clk2, vpu_clk1;
DEFINE_CLOCK(ssi2_clk1,    1, PCCR0,  0, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(ssi1_clk1,    0, PCCR0,  1, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(slcdc_clk,    0, PCCR0,  2, NULL, &slcdc_clk1, &ahb_clk);
DEFINE_CLOCK(sdhc3_clk1,   0, PCCR0,  3, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(sdhc2_clk1,   0, PCCR0,  4, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(sdhc1_clk1,   0, PCCR0,  5, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(scc_clk,      0, PCCR0,  6, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(sahara2_clk,  0, PCCR0,  7, NULL, &sahara2_clk1, &ahb_clk);
DEFINE_CLOCK(rtic_clk,     0, PCCR0,  8, NULL, &rtic_clk1, &ahb_clk);
DEFINE_CLOCK(rtc_clk,      0, PCCR0,  9, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(pwm_clk1,     0, PCCR0, 11, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(owire_clk,    0, PCCR0, 12, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(mstick_clk1,  0, PCCR0, 13, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(lcdc_clk1,    0, PCCR0, 14, NULL, &lcdc_clk2, &ipg_clk);
DEFINE_CLOCK(kpp_clk,      0, PCCR0, 15, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(iim_clk,      0, PCCR0, 16, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(i2c2_clk,     1, PCCR0, 17, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(i2c1_clk,     0, PCCR0, 18, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(gpt6_clk1,    0, PCCR0, 29, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(gpt5_clk1,    0, PCCR0, 20, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(gpt4_clk1,    0, PCCR0, 21, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(gpt3_clk1,    0, PCCR0, 22, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(gpt2_clk1,    0, PCCR0, 23, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(gpt1_clk1,    0, PCCR0, 24, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(gpio_clk,     0, PCCR0, 25, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(fec_clk,      0, PCCR0, 26, NULL, &fec_clk1, &ahb_clk);
DEFINE_CLOCK(emma_clk,     0, PCCR0, 27, NULL, &emma_clk1, &ahb_clk);
DEFINE_CLOCK(dma_clk,      0, PCCR0, 28, NULL, &dma_clk1, &ahb_clk);
DEFINE_CLOCK(cspi13_clk1,  0, PCCR0, 29, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(cspi2_clk1,   0, PCCR0, 30, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(cspi1_clk1,   0, PCCR0, 31, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(mstick_clk,   0, PCCR1,  2, NULL, &mstick_clk1, &ipg_clk);
DEFINE_CLOCK(nfc_clk,      0, PCCR1,  3, get_rate_nfc, NULL, &cpu_clk);
DEFINE_CLOCK(ssi2_clk,     1, PCCR1,  4, get_rate_ssi2, &ssi2_clk1, &mpll_main2_clk);
DEFINE_CLOCK(ssi1_clk,     0, PCCR1,  5, get_rate_ssi1, &ssi1_clk1, &mpll_main2_clk);
DEFINE_CLOCK(vpu_clk,      0, PCCR1,  6, get_rate_vpu, &vpu_clk1, &mpll_main2_clk);
DEFINE_CLOCK1(per4_clk,    3, PCCR1,  7, per, NULL, &mpll_main2_clk);
DEFINE_CLOCK1(per3_clk,    2, PCCR1,  8, per, NULL, &mpll_main2_clk);
DEFINE_CLOCK1(per2_clk,    1, PCCR1,  9, per, NULL, &mpll_main2_clk);
DEFINE_CLOCK1(per1_clk,    0, PCCR1, 10, per, NULL, &mpll_main2_clk);
DEFINE_CLOCK(usb_clk1,     0, PCCR1, 11, NULL, NULL, &ahb_clk);
DEFINE_CLOCK(slcdc_clk1,   0, PCCR1, 12, NULL, NULL, &ahb_clk);
DEFINE_CLOCK(sahara2_clk1, 0, PCCR1, 13, NULL, NULL, &ahb_clk);
DEFINE_CLOCK(rtic_clk1,    0, PCCR1, 14, NULL, NULL, &ahb_clk);
DEFINE_CLOCK(lcdc_clk2,    0, PCCR1, 15, NULL, NULL, &ahb_clk);
DEFINE_CLOCK(vpu_clk1,     0, PCCR1, 16, NULL, NULL, &ahb_clk);
DEFINE_CLOCK(fec_clk1,     0, PCCR1, 17, NULL, NULL, &ahb_clk);
DEFINE_CLOCK(emma_clk1,    0, PCCR1, 18, NULL, NULL, &ahb_clk);
DEFINE_CLOCK(emi_clk,      0, PCCR1, 19, NULL, NULL, &ahb_clk);
DEFINE_CLOCK(dma_clk1,     0, PCCR1, 20, NULL, NULL, &ahb_clk);
DEFINE_CLOCK(csi_clk1,     0, PCCR1, 21, NULL, NULL, &ahb_clk);
DEFINE_CLOCK(brom_clk,     0, PCCR1, 22, NULL, NULL, &ahb_clk);
DEFINE_CLOCK(ata_clk,      0, PCCR1, 23, NULL, NULL, &ahb_clk);
DEFINE_CLOCK(wdog_clk,     0, PCCR1, 24, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(usb_clk,      0, PCCR1, 25, get_rate_usb, &usb_clk1, &spll_clk);
DEFINE_CLOCK(uart6_clk1,   0, PCCR1, 26, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(uart5_clk1,   0, PCCR1, 27, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(uart4_clk1,   0, PCCR1, 28, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(uart3_clk1,   0, PCCR1, 29, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(uart2_clk1,   0, PCCR1, 30, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(uart1_clk1,   0, PCCR1, 31, NULL, NULL, &ipg_clk);
DEFINE_CLOCK(cspi1_clk,    0, NULL,   0, NULL, &cspi1_clk1, &per2_clk);
DEFINE_CLOCK(cspi2_clk,    1, NULL,   0, NULL, &cspi2_clk1, &per2_clk);
DEFINE_CLOCK(cspi3_clk,    2, NULL,   0, NULL, &cspi13_clk1, &per2_clk);
DEFINE_CLOCK(sdhc1_clk,    0, NULL,   0, NULL, &sdhc1_clk1, &per2_clk);
DEFINE_CLOCK(sdhc2_clk,    1, NULL,   0, NULL, &sdhc2_clk1, &per2_clk);
DEFINE_CLOCK(sdhc3_clk,    2, NULL,   0, NULL, &sdhc3_clk1, &per2_clk);
DEFINE_CLOCK(pwm_clk,      0, NULL,   0, NULL, &pwm_clk1, &per1_clk);
DEFINE_CLOCK(gpt1_clk,     0, NULL,   0, NULL, &gpt1_clk1, &per1_clk);
DEFINE_CLOCK(gpt2_clk,     1, NULL,   0, NULL, &gpt2_clk1, &per1_clk);
DEFINE_CLOCK(gpt3_clk,     2, NULL,   0, NULL, &gpt3_clk1, &per1_clk);
DEFINE_CLOCK(gpt4_clk,     3, NULL,   0, NULL, &gpt4_clk1, &per1_clk);
DEFINE_CLOCK(gpt5_clk,     4, NULL,   0, NULL, &gpt5_clk1, &per1_clk);
DEFINE_CLOCK(gpt6_clk,     5, NULL,   0, NULL, &gpt6_clk1, &per1_clk);
DEFINE_CLOCK(uart1_clk,    0, NULL,   0, NULL, &uart1_clk1, &per1_clk);
DEFINE_CLOCK(uart2_clk,    1, NULL,   0, NULL, &uart2_clk1, &per1_clk);
DEFINE_CLOCK(uart3_clk,    2, NULL,   0, NULL, &uart3_clk1, &per1_clk);
DEFINE_CLOCK(uart4_clk,    3, NULL,   0, NULL, &uart4_clk1, &per1_clk);
DEFINE_CLOCK(uart5_clk,    4, NULL,   0, NULL, &uart5_clk1, &per1_clk);
DEFINE_CLOCK(uart6_clk,    5, NULL,   0, NULL, &uart6_clk1, &per1_clk);
DEFINE_CLOCK1(lcdc_clk,    0, NULL,   0, parent, &lcdc_clk1, &per3_clk);
DEFINE_CLOCK1(csi_clk,     0, NULL,   0, parent, &csi_clk1, &per4_clk);
#define _REGISTER_CLOCK(d, n, c) \
,
static struct clk_lookup lookups[] = ;
static void __init to2_adjust_clocks(void)
int __init mx27_clocks_init(unsigned long fref)
