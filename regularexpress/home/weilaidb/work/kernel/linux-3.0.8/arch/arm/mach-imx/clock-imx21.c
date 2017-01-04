#define IO_ADDR_CCM(off)	(MX21_IO_ADDRESS(MX21_CCM_BASE_ADDR + (off)))
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
#define CCM_CSCR_PRESC_OFFSET	29
#define CCM_CSCR_PRESC_MASK	(0x7 << CCM_CSCR_PRESC_OFFSET)
#define CCM_CSCR_USB_OFFSET	26
#define CCM_CSCR_USB_MASK	(0x7 << CCM_CSCR_USB_OFFSET)
#define CCM_CSCR_SD_OFFSET	24
#define CCM_CSCR_SD_MASK	(0x3 << CCM_CSCR_SD_OFFSET)
#define CCM_CSCR_SPLLRES	(1 << 22)
#define CCM_CSCR_MPLLRES	(1 << 21)
#define CCM_CSCR_SSI2_OFFSET	20
#define CCM_CSCR_SSI2		(1 << CCM_CSCR_SSI2_OFFSET)
#define CCM_CSCR_SSI1_OFFSET	19
#define CCM_CSCR_SSI1		(1 << CCM_CSCR_SSI1_OFFSET)
#define CCM_CSCR_FIR_OFFSET	18
#define CCM_CSCR_FIR		(1 << CCM_CSCR_FIR_OFFSET)
#define CCM_CSCR_SP		(1 << 17)
#define CCM_CSCR_MCU		(1 << 16)
#define CCM_CSCR_BCLK_OFFSET	10
#define CCM_CSCR_BCLK_MASK	(0xf << CCM_CSCR_BCLK_OFFSET)
#define CCM_CSCR_IPDIV_OFFSET	9
#define CCM_CSCR_IPDIV		(1 << CCM_CSCR_IPDIV_OFFSET)
#define CCM_CSCR_OSC26MDIV	(1 << 4)
#define CCM_CSCR_OSC26M		(1 << 3)
#define CCM_CSCR_FPM		(1 << 2)
#define CCM_CSCR_SPEN		(1 << 1)
#define CCM_CSCR_MPEN		1
#define CCM_MPCTL0_CPLM		(1 << 31)
#define CCM_MPCTL0_PD_OFFSET	26
#define CCM_MPCTL0_PD_MASK	(0xf << 26)
#define CCM_MPCTL0_MFD_OFFSET	16
#define CCM_MPCTL0_MFD_MASK	(0x3ff << 16)
#define CCM_MPCTL0_MFI_OFFSET	10
#define CCM_MPCTL0_MFI_MASK	(0xf << 10)
#define CCM_MPCTL0_MFN_OFFSET	0
#define CCM_MPCTL0_MFN_MASK	0x3ff
#define CCM_MPCTL1_LF		(1 << 15)
#define CCM_MPCTL1_BRMO		(1 << 6)
#define CCM_SPCTL0_CPLM		(1 << 31)
#define CCM_SPCTL0_PD_OFFSET	26
#define CCM_SPCTL0_PD_MASK	(0xf << 26)
#define CCM_SPCTL0_MFD_OFFSET	16
#define CCM_SPCTL0_MFD_MASK	(0x3ff << 16)
#define CCM_SPCTL0_MFI_OFFSET	10
#define CCM_SPCTL0_MFI_MASK	(0xf << 10)
#define CCM_SPCTL0_MFN_OFFSET	0
#define CCM_SPCTL0_MFN_MASK	0x3ff
#define CCM_SPCTL1_LF		(1 << 15)
#define CCM_SPCTL1_BRMO		(1 << 6)
#define CCM_OSC26MCTL_PEAK_OFFSET	16
#define CCM_OSC26MCTL_PEAK_MASK		(0x3 << 16)
#define CCM_OSC26MCTL_AGC_OFFSET	8
#define CCM_OSC26MCTL_AGC_MASK		(0x3f << 8)
#define CCM_OSC26MCTL_ANATEST_OFFSET	0
#define CCM_OSC26MCTL_ANATEST_MASK	0x3f
#define CCM_PCDR0_SSI2BAUDDIV_OFFSET	26
#define CCM_PCDR0_SSI2BAUDDIV_MASK	(0x3f << 26)
#define CCM_PCDR0_SSI1BAUDDIV_OFFSET	16
#define CCM_PCDR0_SSI1BAUDDIV_MASK	(0x3f << 16)
#define CCM_PCDR0_NFCDIV_OFFSET		12
#define CCM_PCDR0_NFCDIV_MASK		(0xf << 12)
#define CCM_PCDR0_48MDIV_OFFSET		5
#define CCM_PCDR0_48MDIV_MASK		(0x7 << CCM_PCDR0_48MDIV_OFFSET)
#define CCM_PCDR0_FIRIDIV_OFFSET	0
#define CCM_PCDR0_FIRIDIV_MASK		0x1f
#define CCM_PCDR1_PERDIV4_OFFSET	24
#define CCM_PCDR1_PERDIV4_MASK		(0x3f << 24)
#define CCM_PCDR1_PERDIV3_OFFSET	16
#define CCM_PCDR1_PERDIV3_MASK		(0x3f << 16)
#define CCM_PCDR1_PERDIV2_OFFSET	8
#define CCM_PCDR1_PERDIV2_MASK		(0x3f << 8)
#define CCM_PCDR1_PERDIV1_OFFSET	0
#define CCM_PCDR1_PERDIV1_MASK		0x3f
#define CCM_PCCR_HCLK_CSI_OFFSET	31
#define CCM_PCCR_HCLK_CSI_REG		CCM_PCCR0
#define CCM_PCCR_HCLK_DMA_OFFSET	30
#define CCM_PCCR_HCLK_DMA_REG		CCM_PCCR0
#define CCM_PCCR_HCLK_BROM_OFFSET	28
#define CCM_PCCR_HCLK_BROM_REG		CCM_PCCR0
#define CCM_PCCR_HCLK_EMMA_OFFSET	27
#define CCM_PCCR_HCLK_EMMA_REG		CCM_PCCR0
#define CCM_PCCR_HCLK_LCDC_OFFSET	26
#define CCM_PCCR_HCLK_LCDC_REG		CCM_PCCR0
#define CCM_PCCR_HCLK_SLCDC_OFFSET	25
#define CCM_PCCR_HCLK_SLCDC_REG		CCM_PCCR0
#define CCM_PCCR_HCLK_USBOTG_OFFSET	24
#define CCM_PCCR_HCLK_USBOTG_REG	CCM_PCCR0
#define CCM_PCCR_HCLK_BMI_OFFSET	23
#define CCM_PCCR_BMI_MASK		(1 << CCM_PCCR_BMI_MASK)
#define CCM_PCCR_HCLK_BMI_REG		CCM_PCCR0
#define CCM_PCCR_PERCLK4_OFFSET		22
#define CCM_PCCR_PERCLK4_REG		CCM_PCCR0
#define CCM_PCCR_SLCDC_OFFSET		21
#define CCM_PCCR_SLCDC_REG		CCM_PCCR0
#define CCM_PCCR_FIRI_BAUD_OFFSET	20
#define CCM_PCCR_FIRI_BAUD_MASK		(1 << CCM_PCCR_FIRI_BAUD_MASK)
#define CCM_PCCR_FIRI_BAUD_REG		CCM_PCCR0
#define CCM_PCCR_NFC_OFFSET		19
#define CCM_PCCR_NFC_REG		CCM_PCCR0
#define CCM_PCCR_LCDC_OFFSET		18
#define CCM_PCCR_LCDC_REG		CCM_PCCR0
#define CCM_PCCR_SSI1_BAUD_OFFSET	17
#define CCM_PCCR_SSI1_BAUD_REG		CCM_PCCR0
#define CCM_PCCR_SSI2_BAUD_OFFSET	16
#define CCM_PCCR_SSI2_BAUD_REG		CCM_PCCR0
#define CCM_PCCR_EMMA_OFFSET		15
#define CCM_PCCR_EMMA_REG		CCM_PCCR0
#define CCM_PCCR_USBOTG_OFFSET		14
#define CCM_PCCR_USBOTG_REG		CCM_PCCR0
#define CCM_PCCR_DMA_OFFSET		13
#define CCM_PCCR_DMA_REG		CCM_PCCR0
#define CCM_PCCR_I2C1_OFFSET		12
#define CCM_PCCR_I2C1_REG		CCM_PCCR0
#define CCM_PCCR_GPIO_OFFSET		11
#define CCM_PCCR_GPIO_REG		CCM_PCCR0
#define CCM_PCCR_SDHC2_OFFSET		10
#define CCM_PCCR_SDHC2_REG		CCM_PCCR0
#define CCM_PCCR_SDHC1_OFFSET		9
#define CCM_PCCR_SDHC1_REG		CCM_PCCR0
#define CCM_PCCR_FIRI_OFFSET		8
#define CCM_PCCR_FIRI_MASK		(1 << CCM_PCCR_BAUD_MASK)
#define CCM_PCCR_FIRI_REG		CCM_PCCR0
#define CCM_PCCR_SSI2_IPG_OFFSET	7
#define CCM_PCCR_SSI2_REG		CCM_PCCR0
#define CCM_PCCR_SSI1_IPG_OFFSET	6
#define CCM_PCCR_SSI1_REG		CCM_PCCR0
#define CCM_PCCR_CSPI2_OFFSET		5
#define	CCM_PCCR_CSPI2_REG		CCM_PCCR0
#define CCM_PCCR_CSPI1_OFFSET		4
#define	CCM_PCCR_CSPI1_REG		CCM_PCCR0
#define CCM_PCCR_UART4_OFFSET		3
#define CCM_PCCR_UART4_REG		CCM_PCCR0
#define CCM_PCCR_UART3_OFFSET		2
#define CCM_PCCR_UART3_REG		CCM_PCCR0
#define CCM_PCCR_UART2_OFFSET		1
#define CCM_PCCR_UART2_REG		CCM_PCCR0
#define CCM_PCCR_UART1_OFFSET		0
#define CCM_PCCR_UART1_REG		CCM_PCCR0
#define CCM_PCCR_OWIRE_OFFSET		31
#define CCM_PCCR_OWIRE_REG		CCM_PCCR1
#define CCM_PCCR_KPP_OFFSET		30
#define CCM_PCCR_KPP_REG		CCM_PCCR1
#define CCM_PCCR_RTC_OFFSET		29
#define CCM_PCCR_RTC_REG		CCM_PCCR1
#define CCM_PCCR_PWM_OFFSET		28
#define CCM_PCCR_PWM_REG		CCM_PCCR1
#define CCM_PCCR_GPT3_OFFSET		27
#define CCM_PCCR_GPT3_REG		CCM_PCCR1
#define CCM_PCCR_GPT2_OFFSET		26
#define CCM_PCCR_GPT2_REG		CCM_PCCR1
#define CCM_PCCR_GPT1_OFFSET		25
#define CCM_PCCR_GPT1_REG		CCM_PCCR1
#define CCM_PCCR_WDT_OFFSET		24
#define CCM_PCCR_WDT_REG		CCM_PCCR1
#define CCM_PCCR_CSPI3_OFFSET		23
#define	CCM_PCCR_CSPI3_REG		CCM_PCCR1
#define CCM_PCCR_CSPI1_MASK		(1 << CCM_PCCR_CSPI1_OFFSET)
#define CCM_PCCR_CSPI2_MASK		(1 << CCM_PCCR_CSPI2_OFFSET)
#define CCM_PCCR_CSPI3_MASK		(1 << CCM_PCCR_CSPI3_OFFSET)
#define CCM_PCCR_DMA_MASK		(1 << CCM_PCCR_DMA_OFFSET)
#define CCM_PCCR_EMMA_MASK		(1 << CCM_PCCR_EMMA_OFFSET)
#define CCM_PCCR_GPIO_MASK		(1 << CCM_PCCR_GPIO_OFFSET)
#define CCM_PCCR_GPT1_MASK		(1 << CCM_PCCR_GPT1_OFFSET)
#define CCM_PCCR_GPT2_MASK		(1 << CCM_PCCR_GPT2_OFFSET)
#define CCM_PCCR_GPT3_MASK		(1 << CCM_PCCR_GPT3_OFFSET)
#define CCM_PCCR_HCLK_BROM_MASK		(1 << CCM_PCCR_HCLK_BROM_OFFSET)
#define CCM_PCCR_HCLK_CSI_MASK		(1 << CCM_PCCR_HCLK_CSI_OFFSET)
#define CCM_PCCR_HCLK_DMA_MASK		(1 << CCM_PCCR_HCLK_DMA_OFFSET)
#define CCM_PCCR_HCLK_EMMA_MASK		(1 << CCM_PCCR_HCLK_EMMA_OFFSET)
#define CCM_PCCR_HCLK_LCDC_MASK		(1 << CCM_PCCR_HCLK_LCDC_OFFSET)
#define CCM_PCCR_HCLK_SLCDC_MASK	(1 << CCM_PCCR_HCLK_SLCDC_OFFSET)
#define CCM_PCCR_HCLK_USBOTG_MASK	(1 << CCM_PCCR_HCLK_USBOTG_OFFSET)
#define CCM_PCCR_I2C1_MASK		(1 << CCM_PCCR_I2C1_OFFSET)
#define CCM_PCCR_KPP_MASK		(1 << CCM_PCCR_KPP_OFFSET)
#define CCM_PCCR_LCDC_MASK		(1 << CCM_PCCR_LCDC_OFFSET)
#define CCM_PCCR_NFC_MASK		(1 << CCM_PCCR_NFC_OFFSET)
#define CCM_PCCR_OWIRE_MASK		(1 << CCM_PCCR_OWIRE_OFFSET)
#define CCM_PCCR_PERCLK4_MASK		(1 << CCM_PCCR_PERCLK4_OFFSET)
#define CCM_PCCR_PWM_MASK		(1 << CCM_PCCR_PWM_OFFSET)
#define CCM_PCCR_RTC_MASK		(1 << CCM_PCCR_RTC_OFFSET)
#define CCM_PCCR_SDHC1_MASK		(1 << CCM_PCCR_SDHC1_OFFSET)
#define CCM_PCCR_SDHC2_MASK		(1 << CCM_PCCR_SDHC2_OFFSET)
#define CCM_PCCR_SLCDC_MASK		(1 << CCM_PCCR_SLCDC_OFFSET)
#define CCM_PCCR_SSI1_BAUD_MASK		(1 << CCM_PCCR_SSI1_BAUD_OFFSET)
#define CCM_PCCR_SSI1_IPG_MASK		(1 << CCM_PCCR_SSI1_IPG_OFFSET)
#define CCM_PCCR_SSI2_BAUD_MASK		(1 << CCM_PCCR_SSI2_BAUD_OFFSET)
#define CCM_PCCR_SSI2_IPG_MASK		(1 << CCM_PCCR_SSI2_IPG_OFFSET)
#define CCM_PCCR_UART1_MASK		(1 << CCM_PCCR_UART1_OFFSET)
#define CCM_PCCR_UART2_MASK		(1 << CCM_PCCR_UART2_OFFSET)
#define CCM_PCCR_UART3_MASK		(1 << CCM_PCCR_UART3_OFFSET)
#define CCM_PCCR_UART4_MASK		(1 << CCM_PCCR_UART4_OFFSET)
#define CCM_PCCR_USBOTG_MASK		(1 << CCM_PCCR_USBOTG_OFFSET)
#define CCM_PCCR_WDT_MASK		(1 << CCM_PCCR_WDT_OFFSET)
#define CCM_CCSR_32KSR		(1 << 15)
#define CCM_CCSR_CLKMODE1	(1 << 9)
#define CCM_CCSR_CLKMODE0	(1 << 8)
#define CCM_CCSR_CLKOSEL_OFFSET 0
#define CCM_CCSR_CLKOSEL_MASK	0x1f
#define SYS_FMCR		0x14
#define SYS_CHIP_ID		0x00
static int _clk_enable(struct clk *clk)
static void _clk_disable(struct clk *clk)
static unsigned long _clk_generic_round_rate(struct clk *clk,
unsigned long rate,
u32 max_divisor)
static int _clk_spll_enable(struct clk *clk)
static void _clk_spll_disable(struct clk *clk)
#define CSCR() (__raw_readl(CCM_CSCR))
#define PCDR0() (__raw_readl(CCM_PCDR0))
#define PCDR1() (__raw_readl(CCM_PCDR1))
static unsigned long _clk_perclkx_round_rate(struct clk *clk,
unsigned long rate)
static int _clk_perclkx_set_rate(struct clk *clk, unsigned long rate)
static unsigned long _clk_usb_recalc(struct clk *clk)
static unsigned long _clk_usb_round_rate(struct clk *clk,
unsigned long rate)
static int _clk_usb_set_rate(struct clk *clk, unsigned long rate)
static unsigned long _clk_ssix_recalc(struct clk *clk, unsigned long pdf)
static unsigned long _clk_ssi1_recalc(struct clk *clk)
static unsigned long _clk_ssi2_recalc(struct clk *clk)
static unsigned long _clk_nfc_recalc(struct clk *clk)
static unsigned long _clk_parent_round_rate(struct clk *clk, unsigned long rate)
static int _clk_parent_set_rate(struct clk *clk, unsigned long rate)
static unsigned long external_high_reference;
static unsigned long get_high_reference_clock_rate(struct clk *clk)
static struct clk ckih_clk = ;
static unsigned long external_low_reference;
static unsigned long get_low_reference_clock_rate(struct clk *clk)
static struct clk ckil_clk = ;
static unsigned long _clk_fpm_recalc(struct clk *clk)
static struct clk fpm_clk = ;
static unsigned long get_mpll_clk(struct clk *clk)
static struct clk mpll_clk = ;
static unsigned long _clk_fclk_get_rate(struct clk *clk)
static struct clk fclk_clk = ;
static unsigned long get_spll_clk(struct clk *clk)
static struct clk spll_clk = ;
static unsigned long get_hclk_clk(struct clk *clk)
static struct clk hclk_clk = ;
static unsigned long get_ipg_clk(struct clk *clk)
static struct clk ipg_clk = ;
static unsigned long _clk_perclkx_recalc(struct clk *clk)
static struct clk per_clk[] = ;
static struct clk uart_ipg_clk[];
static struct clk uart_clk[] = ;
static struct clk uart_ipg_clk[] = ;
static struct clk gpt_ipg_clk[];
static struct clk gpt_clk[] = ;
static struct clk gpt_ipg_clk[] = ;
static struct clk pwm_clk[] = ;
static struct clk sdhc_ipg_clk[];
static struct clk sdhc_clk[] = ;
static struct clk sdhc_ipg_clk[] = ;
static struct clk cspi_ipg_clk[];
static struct clk cspi_clk[] = ;
static struct clk cspi_ipg_clk[] = ;
static struct clk lcdc_clk[] = ;
static struct clk csi_clk[] = ;
static struct clk usb_clk[] = ;
static struct clk ssi_ipg_clk[];
static struct clk ssi_clk[] = ;
static struct clk ssi_ipg_clk[] = ;
static struct clk nfc_clk = ;
static struct clk dma_clk[] = ;
static struct clk brom_clk = ;
static struct clk emma_clk[] = ;
static struct clk slcdc_clk[] = ;
static struct clk wdog_clk = ;
static struct clk gpio_clk = ;
static struct clk i2c_clk = ;
static struct clk kpp_clk = ;
static struct clk owire_clk = ;
static struct clk rtc_clk = ;
static unsigned long _clk_clko_round_rate(struct clk *clk, unsigned long rate)
static int _clk_clko_set_rate(struct clk *clk, unsigned long rate)
static unsigned long _clk_clko_recalc(struct clk *clk)
static struct clk clko_clk;
static int _clk_clko_set_parent(struct clk *clk, struct clk *parent)
static struct clk clko_clk = ;
#define _REGISTER_CLOCK(d, n, c) \
,
static struct clk_lookup lookups[] = ;
int __init mx21_clocks_init(unsigned long lref, unsigned long href)
