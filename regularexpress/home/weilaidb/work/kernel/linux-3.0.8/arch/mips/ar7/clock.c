#define BOOT_PLL_SOURCE_MASK	0x3
#define CPU_PLL_SOURCE_SHIFT	16
#define BUS_PLL_SOURCE_SHIFT	14
#define USB_PLL_SOURCE_SHIFT	18
#define DSP_PLL_SOURCE_SHIFT	22
#define BOOT_PLL_SOURCE_AFE	0
#define BOOT_PLL_SOURCE_BUS	0
#define BOOT_PLL_SOURCE_REF	1
#define BOOT_PLL_SOURCE_XTAL	2
#define BOOT_PLL_SOURCE_CPU	3
#define BOOT_PLL_BYPASS		0x00000020
#define BOOT_PLL_ASYNC_MODE	0x02000000
#define BOOT_PLL_2TO1_MODE	0x00008000
#define TNETD7200_CLOCK_ID_CPU	0
#define TNETD7200_CLOCK_ID_DSP	1
#define TNETD7200_CLOCK_ID_USB	2
#define TNETD7200_DEF_CPU_CLK	211000000
#define TNETD7200_DEF_DSP_CLK	125000000
#define TNETD7200_DEF_USB_CLK	48000000
struct tnetd7300_clock ;
struct tnetd7300_clocks ;
struct tnetd7200_clock ;
struct tnetd7200_clocks ;
static struct clk bus_clk = ;
static struct clk cpu_clk = ;
static struct clk dsp_clk;
static struct clk vbus_clk;
static void approximate(int base, int target, int *prediv,
int *postdiv, int *mul)
static void calculate(int base, int target, int *prediv, int *postdiv,
int *mul)
static int tnetd7300_dsp_clock(void)
static int tnetd7300_get_clock(u32 shift, struct tnetd7300_clock *clock,
u32 *bootcr, u32 bus_clock)
static void tnetd7300_set_clock(u32 shift, struct tnetd7300_clock *clock,
u32 *bootcr, u32 frequency)
static void __init tnetd7300_init_clocks(void)
static void tnetd7200_set_clock(int base, struct tnetd7200_clock *clock,
int prediv, int postdiv, int postdiv2, int mul, u32 frequency)
static int tnetd7200_get_clock_base(int clock_id, u32 *bootcr)
static void __init tnetd7200_init_clocks(void)
int clk_enable(struct clk *clk)
EXPORT_SYMBOL(clk_enable);
void clk_disable(struct clk *clk)
EXPORT_SYMBOL(clk_disable);
unsigned long clk_get_rate(struct clk *clk)
EXPORT_SYMBOL(clk_get_rate);
struct clk *clk_get(struct device *dev, const char *id)
EXPORT_SYMBOL(clk_get);
void clk_put(struct clk *clk)
EXPORT_SYMBOL(clk_put);
void __init ar7_init_clocks(void)
