#define CLKCTRL_BASE_ADDR	MX28_IO_ADDRESS(MX28_CLKCTRL_BASE_ADDR)
#define DIGCTRL_BASE_ADDR	MX28_IO_ADDRESS(MX28_DIGCTL_BASE_ADDR)
#define PARENT_RATE_SHIFT	8
static struct clk pll2_clk;
static struct clk cpu_clk;
static struct clk emi_clk;
static struct clk saif0_clk;
static struct clk saif1_clk;
static struct clk clk32k_clk;
static int _raw_clk_enable(struct clk *clk)
static void _raw_clk_disable(struct clk *clk)
static unsigned long ref_xtal_clk_get_rate(struct clk *clk)
static struct clk ref_xtal_clk = ;
static unsigned long pll0_clk_get_rate(struct clk *clk)
static unsigned long pll1_clk_get_rate(struct clk *clk)
static unsigned long pll2_clk_get_rate(struct clk *clk)
#define _CLK_ENABLE_PLL(name, r, g)					\
static int name##_enable(struct clk *clk)				\
_CLK_ENABLE_PLL(pll0_clk, PLL0, EN_USB_CLKS)
_CLK_ENABLE_PLL(pll1_clk, PLL1, EN_USB_CLKS)
_CLK_ENABLE_PLL(pll2_clk, PLL2, CLKGATE)
#define _CLK_DISABLE_PLL(name, r, g)					\
static void name##_disable(struct clk *clk)				\
_CLK_DISABLE_PLL(pll0_clk, PLL0, EN_USB_CLKS)
_CLK_DISABLE_PLL(pll1_clk, PLL1, EN_USB_CLKS)
_CLK_DISABLE_PLL(pll2_clk, PLL2, CLKGATE)
#define _DEFINE_CLOCK_PLL(name)						\
static struct clk name =
_DEFINE_CLOCK_PLL(pll0_clk);
_DEFINE_CLOCK_PLL(pll1_clk);
_DEFINE_CLOCK_PLL(pll2_clk);
#define _CLK_GET_RATE_REF(name, sr, ss)					\
static unsigned long name##_get_rate(struct clk *clk)			\
_CLK_GET_RATE_REF(ref_cpu_clk, FRAC0, CPU)
_CLK_GET_RATE_REF(ref_emi_clk, FRAC0, EMI)
_CLK_GET_RATE_REF(ref_io0_clk, FRAC0, IO0)
_CLK_GET_RATE_REF(ref_io1_clk, FRAC0, IO1)
_CLK_GET_RATE_REF(ref_pix_clk, FRAC1, PIX)
_CLK_GET_RATE_REF(ref_gpmi_clk, FRAC1, GPMI)
#define _DEFINE_CLOCK_REF(name, er, es)					\
static struct clk name =
_DEFINE_CLOCK_REF(ref_cpu_clk, FRAC0, CPU);
_DEFINE_CLOCK_REF(ref_emi_clk, FRAC0, EMI);
_DEFINE_CLOCK_REF(ref_io0_clk, FRAC0, IO0);
_DEFINE_CLOCK_REF(ref_io1_clk, FRAC0, IO1);
_DEFINE_CLOCK_REF(ref_pix_clk, FRAC1, PIX);
_DEFINE_CLOCK_REF(ref_gpmi_clk, FRAC1, GPMI);
static unsigned long lradc_clk_get_rate(struct clk *clk)
static unsigned long rtc_clk_get_rate(struct clk *clk)
static unsigned long clk32k_clk_get_rate(struct clk *clk)
static unsigned long spdif_clk_get_rate(struct clk *clk)
#define _CLK_GET_RATE(name, rs)						\
static unsigned long name##_get_rate(struct clk *clk)			\
_CLK_GET_RATE(cpu_clk, CPU)
_CLK_GET_RATE(emi_clk, EMI)
#define _CLK_GET_RATE1(name, rs)					\
static unsigned long name##_get_rate(struct clk *clk)			\
_CLK_GET_RATE1(hbus_clk, HBUS)
_CLK_GET_RATE1(xbus_clk, XBUS)
_CLK_GET_RATE1(ssp0_clk, SSP0)
_CLK_GET_RATE1(ssp1_clk, SSP1)
_CLK_GET_RATE1(ssp2_clk, SSP2)
_CLK_GET_RATE1(ssp3_clk, SSP3)
_CLK_GET_RATE1(gpmi_clk, GPMI)
_CLK_GET_RATE1(lcdif_clk, DIS_LCDIF)
_CLK_GET_RATE1(saif0_clk, SAIF0)
_CLK_GET_RATE1(saif1_clk, SAIF1)
#define _CLK_GET_RATE_STUB(name)					\
static unsigned long name##_get_rate(struct clk *clk)			\
_CLK_GET_RATE_STUB(uart_clk)
_CLK_GET_RATE_STUB(pwm_clk)
_CLK_GET_RATE_STUB(can0_clk)
_CLK_GET_RATE_STUB(can1_clk)
_CLK_GET_RATE_STUB(fec_clk)
#define BM_CLKCTRL_CPU_DIV	0
#define BP_CLKCTRL_CPU_DIV	0
#define BM_CLKCTRL_CPU_BUSY	0
#define _CLK_SET_RATE(name, dr, fr, fs)					\
static int name##_set_rate(struct clk *clk, unsigned long rate)		\
_CLK_SET_RATE(cpu_clk, CPU, FRAC0, CPU)
_CLK_SET_RATE(ssp0_clk, SSP0, FRAC0, IO0)
_CLK_SET_RATE(ssp1_clk, SSP1, FRAC0, IO0)
_CLK_SET_RATE(ssp2_clk, SSP2, FRAC0, IO1)
_CLK_SET_RATE(ssp3_clk, SSP3, FRAC0, IO1)
_CLK_SET_RATE(lcdif_clk, DIS_LCDIF, FRAC1, PIX)
_CLK_SET_RATE(gpmi_clk, GPMI, FRAC1, GPMI)
#define _CLK_SET_RATE1(name, dr)					\
static int name##_set_rate(struct clk *clk, unsigned long rate)		\
_CLK_SET_RATE1(xbus_clk, XBUS)
#define _CLK_SET_RATE_SAIF(name, rs)					\
static int name##_set_rate(struct clk *clk, unsigned long rate)		\
_CLK_SET_RATE_SAIF(saif0_clk, SAIF0)
_CLK_SET_RATE_SAIF(saif1_clk, SAIF1)
#define _CLK_SET_RATE_STUB(name)					\
static int name##_set_rate(struct clk *clk, unsigned long rate)		\
_CLK_SET_RATE_STUB(emi_clk)
_CLK_SET_RATE_STUB(uart_clk)
_CLK_SET_RATE_STUB(pwm_clk)
_CLK_SET_RATE_STUB(spdif_clk)
_CLK_SET_RATE_STUB(clk32k_clk)
_CLK_SET_RATE_STUB(can0_clk)
_CLK_SET_RATE_STUB(can1_clk)
_CLK_SET_RATE_STUB(fec_clk)
#define _CLK_SET_PARENT(name, bit)					\
static int name##_set_parent(struct clk *clk, struct clk *parent)	\
_CLK_SET_PARENT(cpu_clk, CPU)
_CLK_SET_PARENT(emi_clk, EMI)
_CLK_SET_PARENT(ssp0_clk, SSP0)
_CLK_SET_PARENT(ssp1_clk, SSP1)
_CLK_SET_PARENT(ssp2_clk, SSP2)
_CLK_SET_PARENT(ssp3_clk, SSP3)
_CLK_SET_PARENT(lcdif_clk, DIS_LCDIF)
_CLK_SET_PARENT(gpmi_clk, GPMI)
_CLK_SET_PARENT(saif0_clk, SAIF0)
_CLK_SET_PARENT(saif1_clk, SAIF1)
#define _CLK_SET_PARENT_STUB(name)					\
static int name##_set_parent(struct clk *clk, struct clk *parent)	\
_CLK_SET_PARENT_STUB(pwm_clk)
_CLK_SET_PARENT_STUB(uart_clk)
_CLK_SET_PARENT_STUB(clk32k_clk)
_CLK_SET_PARENT_STUB(spdif_clk)
_CLK_SET_PARENT_STUB(fec_clk)
_CLK_SET_PARENT_STUB(can0_clk)
_CLK_SET_PARENT_STUB(can1_clk)
static struct clk cpu_clk = ;
static struct clk hbus_clk = ;
static struct clk xbus_clk = ;
static struct clk lradc_clk = ;
static struct clk rtc_clk = ;
static struct clk usb0_clk = ;
static struct clk usb1_clk = ;
#define _DEFINE_CLOCK(name, er, es, p)					\
static struct clk name =
_DEFINE_CLOCK(emi_clk, EMI, CLKGATE, &ref_xtal_clk);
_DEFINE_CLOCK(ssp0_clk, SSP0, CLKGATE, &ref_xtal_clk);
_DEFINE_CLOCK(ssp1_clk, SSP1, CLKGATE, &ref_xtal_clk);
_DEFINE_CLOCK(ssp2_clk, SSP2, CLKGATE, &ref_xtal_clk);
_DEFINE_CLOCK(ssp3_clk, SSP3, CLKGATE, &ref_xtal_clk);
_DEFINE_CLOCK(lcdif_clk, DIS_LCDIF, CLKGATE, &ref_xtal_clk);
_DEFINE_CLOCK(gpmi_clk, GPMI, CLKGATE, &ref_xtal_clk);
_DEFINE_CLOCK(saif0_clk, SAIF0, CLKGATE, &ref_xtal_clk);
_DEFINE_CLOCK(saif1_clk, SAIF1, CLKGATE, &ref_xtal_clk);
_DEFINE_CLOCK(can0_clk, FLEXCAN, STOP_CAN0, &ref_xtal_clk);
_DEFINE_CLOCK(can1_clk, FLEXCAN, STOP_CAN1, &ref_xtal_clk);
_DEFINE_CLOCK(pwm_clk, XTAL, PWM_CLK24M_GATE, &ref_xtal_clk);
_DEFINE_CLOCK(uart_clk, XTAL, UART_CLK_GATE, &ref_xtal_clk);
_DEFINE_CLOCK(clk32k_clk, XTAL, TIMROT_CLK32K_GATE, &ref_xtal_clk);
_DEFINE_CLOCK(spdif_clk, SPDIF, CLKGATE, &pll0_clk);
_DEFINE_CLOCK(fec_clk, ENET, DISABLE, &hbus_clk);
#define _REGISTER_CLOCK(d, n, c) \
,
static struct clk_lookup lookups[] = ;
static int clk_misc_init(void)
int __init mx28_clocks_init(void)
