#define CLKCTRL_BASE_ADDR	MX23_IO_ADDRESS(MX23_CLKCTRL_BASE_ADDR)
#define DIGCTRL_BASE_ADDR	MX23_IO_ADDRESS(MX23_DIGCTL_BASE_ADDR)
#define PARENT_RATE_SHIFT	8
static int _raw_clk_enable(struct clk *clk)
static void _raw_clk_disable(struct clk *clk)
static unsigned long ref_xtal_clk_get_rate(struct clk *clk)
static struct clk ref_xtal_clk = ;
static unsigned long pll_clk_get_rate(struct clk *clk)
static int pll_clk_enable(struct clk *clk)
static void pll_clk_disable(struct clk *clk)
static struct clk pll_clk = ;
#define _CLK_GET_RATE_REF(name, sr, ss)					\
static unsigned long name##_get_rate(struct clk *clk)			\
_CLK_GET_RATE_REF(ref_cpu_clk, FRAC, CPU)
_CLK_GET_RATE_REF(ref_emi_clk, FRAC, EMI)
_CLK_GET_RATE_REF(ref_pix_clk, FRAC, PIX)
_CLK_GET_RATE_REF(ref_io_clk, FRAC, IO)
#define _DEFINE_CLOCK_REF(name, er, es)					\
static struct clk name =
_DEFINE_CLOCK_REF(ref_cpu_clk, FRAC, CPU);
_DEFINE_CLOCK_REF(ref_emi_clk, FRAC, EMI);
_DEFINE_CLOCK_REF(ref_pix_clk, FRAC, PIX);
_DEFINE_CLOCK_REF(ref_io_clk, FRAC, IO);
static unsigned long rtc_clk_get_rate(struct clk *clk)
static unsigned long clk32k_clk_get_rate(struct clk *clk)
#define _CLK_GET_RATE(name, rs)						\
static unsigned long name##_get_rate(struct clk *clk)			\
_CLK_GET_RATE(cpu_clk, CPU)
_CLK_GET_RATE(emi_clk, EMI)
#define _CLK_GET_RATE1(name, rs)					\
static unsigned long name##_get_rate(struct clk *clk)			\
_CLK_GET_RATE1(hbus_clk, HBUS)
_CLK_GET_RATE1(xbus_clk, XBUS)
_CLK_GET_RATE1(ssp_clk, SSP)
_CLK_GET_RATE1(gpmi_clk, GPMI)
_CLK_GET_RATE1(lcdif_clk, PIX)
#define _CLK_GET_RATE_STUB(name)					\
static unsigned long name##_get_rate(struct clk *clk)			\
_CLK_GET_RATE_STUB(uart_clk)
_CLK_GET_RATE_STUB(audio_clk)
_CLK_GET_RATE_STUB(pwm_clk)
static int cpu_clk_set_rate(struct clk *clk, unsigned long rate)
#define _CLK_SET_RATE(name, dr)						\
static int name##_set_rate(struct clk *clk, unsigned long rate)		\
_CLK_SET_RATE(xbus_clk, XBUS)
_CLK_SET_RATE(ssp_clk, SSP)
_CLK_SET_RATE(gpmi_clk, GPMI)
_CLK_SET_RATE(lcdif_clk, PIX)
#define _CLK_SET_RATE_STUB(name)					\
static int name##_set_rate(struct clk *clk, unsigned long rate)		\
_CLK_SET_RATE_STUB(emi_clk)
_CLK_SET_RATE_STUB(uart_clk)
_CLK_SET_RATE_STUB(audio_clk)
_CLK_SET_RATE_STUB(pwm_clk)
_CLK_SET_RATE_STUB(clk32k_clk)
#define _CLK_SET_PARENT(name, bit)					\
static int name##_set_parent(struct clk *clk, struct clk *parent)	\
_CLK_SET_PARENT(cpu_clk, CPU)
_CLK_SET_PARENT(emi_clk, EMI)
_CLK_SET_PARENT(ssp_clk, SSP)
_CLK_SET_PARENT(gpmi_clk, GPMI)
_CLK_SET_PARENT(lcdif_clk, PIX)
#define _CLK_SET_PARENT_STUB(name)					\
static int name##_set_parent(struct clk *clk, struct clk *parent)	\
_CLK_SET_PARENT_STUB(uart_clk)
_CLK_SET_PARENT_STUB(audio_clk)
_CLK_SET_PARENT_STUB(pwm_clk)
_CLK_SET_PARENT_STUB(clk32k_clk)
static struct clk cpu_clk = ;
static struct clk hbus_clk = ;
static struct clk xbus_clk = ;
static struct clk rtc_clk = ;
static struct clk usb_clk = ;
#define _DEFINE_CLOCK(name, er, es, p)					\
static struct clk name =
_DEFINE_CLOCK(emi_clk, EMI, CLKGATE, &ref_xtal_clk);
_DEFINE_CLOCK(ssp_clk, SSP, CLKGATE, &ref_xtal_clk);
_DEFINE_CLOCK(gpmi_clk, GPMI, CLKGATE, &ref_xtal_clk);
_DEFINE_CLOCK(lcdif_clk, PIX, CLKGATE, &ref_xtal_clk);
_DEFINE_CLOCK(uart_clk, XTAL, UART_CLK_GATE, &ref_xtal_clk);
_DEFINE_CLOCK(audio_clk, XTAL, FILT_CLK24M_GATE, &ref_xtal_clk);
_DEFINE_CLOCK(pwm_clk, XTAL, PWM_CLK24M_GATE, &ref_xtal_clk);
_DEFINE_CLOCK(clk32k_clk, XTAL, TIMROT_CLK32K_GATE, &ref_xtal_clk);
#define _REGISTER_CLOCK(d, n, c) \
,
static struct clk_lookup lookups[] = ;
static int clk_misc_init(void)
int __init mx23_clocks_init(void)
