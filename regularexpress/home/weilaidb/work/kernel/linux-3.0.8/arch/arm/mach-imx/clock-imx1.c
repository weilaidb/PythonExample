#define IO_ADDR_CCM(off)	(MX1_IO_ADDRESS(MX1_CCM_BASE_ADDR + (off)))
#define CCM_CSCR	IO_ADDR_CCM(0x0)
#define CCM_MPCTL0	IO_ADDR_CCM(0x4)
#define CCM_SPCTL0	IO_ADDR_CCM(0xc)
#define CCM_PCDR	IO_ADDR_CCM(0x20)
#define CCM_CSCR_CLKO_OFFSET	29
#define CCM_CSCR_CLKO_MASK	(0x7 << 29)
#define CCM_CSCR_USB_OFFSET	26
#define CCM_CSCR_USB_MASK	(0x7 << 26)
#define CCM_CSCR_OSC_EN_SHIFT	17
#define CCM_CSCR_SYSTEM_SEL	(1 << 16)
#define CCM_CSCR_BCLK_OFFSET	10
#define CCM_CSCR_BCLK_MASK	(0xf << 10)
#define CCM_CSCR_PRESC		(1 << 15)
#define CCM_PCDR_PCLK3_OFFSET	16
#define CCM_PCDR_PCLK3_MASK	(0x7f << 16)
#define CCM_PCDR_PCLK2_OFFSET	4
#define CCM_PCDR_PCLK2_MASK	(0xf << 4)
#define CCM_PCDR_PCLK1_OFFSET	0
#define CCM_PCDR_PCLK1_MASK	0xf
#define IO_ADDR_SCM(off)	(MX1_IO_ADDRESS(MX1_SCM_BASE_ADDR + (off)))
#define SCM_GCCR	IO_ADDR_SCM(0xc)
#define SCM_GCCR_DMA_CLK_EN_OFFSET	3
#define SCM_GCCR_CSI_CLK_EN_OFFSET	2
#define SCM_GCCR_MMA_CLK_EN_OFFSET	1
#define SCM_GCCR_USBD_CLK_EN_OFFSET	0
static int _clk_enable(struct clk *clk)
static void _clk_disable(struct clk *clk)
static int _clk_can_use_parent(const struct clk *clk_arr[], unsigned int size,
struct clk *parent)
static unsigned long
_clk_simple_round_rate(struct clk *clk, unsigned long rate, unsigned int limit)
static unsigned long _clk_parent_round_rate(struct clk *clk, unsigned long rate)
static int _clk_parent_set_rate(struct clk *clk, unsigned long rate)
static unsigned long clk16m_get_rate(struct clk *clk)
static struct clk clk16m = ;
static unsigned long clk32_rate;
static unsigned long clk32_get_rate(struct clk *clk)
static struct clk clk32 = ;
static unsigned long clk32_premult_get_rate(struct clk *clk)
static struct clk clk32_premult = ;
static const struct clk *prem_clk_clocks[] = ;
static int prem_clk_set_parent(struct clk *clk, struct clk *parent)
static struct clk prem_clk = ;
static unsigned long system_clk_get_rate(struct clk *clk)
static struct clk system_clk = ;
static unsigned long mcu_clk_get_rate(struct clk *clk)
static struct clk mcu_clk = ;
static unsigned long fclk_get_rate(struct clk *clk)
static struct clk fclk = ;
static unsigned long hclk_get_rate(struct clk *clk)
static unsigned long hclk_round_rate(struct clk *clk, unsigned long rate)
static int hclk_set_rate(struct clk *clk, unsigned long rate)
static struct clk hclk = ;
static unsigned long clk48m_get_rate(struct clk *clk)
static unsigned long clk48m_round_rate(struct clk *clk, unsigned long rate)
static int clk48m_set_rate(struct clk *clk, unsigned long rate)
static struct clk clk48m = ;
static unsigned long perclk1_get_rate(struct clk *clk)
static unsigned long perclk1_round_rate(struct clk *clk, unsigned long rate)
static int perclk1_set_rate(struct clk *clk, unsigned long rate)
static unsigned long perclk2_get_rate(struct clk *clk)
static unsigned long perclk2_round_rate(struct clk *clk, unsigned long rate)
static int perclk2_set_rate(struct clk *clk, unsigned long rate)
static unsigned long perclk3_get_rate(struct clk *clk)
static unsigned long perclk3_round_rate(struct clk *clk, unsigned long rate)
static int perclk3_set_rate(struct clk *clk, unsigned long rate)
static struct clk perclk[] = ;
static const struct clk *clko_clocks[] = ;
static int clko_set_parent(struct clk *clk, struct clk *parent)
static struct clk clko_clk = ;
static struct clk dma_clk = ;
static struct clk csi_clk = ;
static struct clk mma_clk = ;
static struct clk usbd_clk = ;
static struct clk gpt_clk = ;
static struct clk uart_clk = ;
static struct clk i2c_clk = ;
static struct clk spi_clk = ;
static struct clk sdhc_clk = ;
static struct clk lcdc_clk = ;
static struct clk mshc_clk = ;
static struct clk ssi_clk = ;
static struct clk rtc_clk = ;
#define _REGISTER_CLOCK(d, n, c) \
,
static struct clk_lookup lookups[] __initdata = ;
int __init mx1_clocks_init(unsigned long fref)
