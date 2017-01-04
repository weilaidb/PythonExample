#define AMBA_DEVICE(name, initname, base, plat, size)       \
static struct amba_device name##_device =
AMBA_DEVICE(uartA, "uarta", UARTA, NULL, SZ_4K);
AMBA_DEVICE(uartB, "uartb", UARTB, NULL, SZ_4K);
static struct clk pll1_clk = ;
static struct clk uart_clk = ;
static struct clk dummy_apb_pclk = ;
#if defined(CONFIG_ARCH_FPGA11107)
#define TIMER0_FREQUENCY_MHZ  (tmrHw_LOW_FREQUENCY_MHZ * 30)
#define TIMER1_FREQUENCY_MHZ  (tmrHw_LOW_FREQUENCY_MHZ * 30)
#define TIMER3_FREQUENCY_MHZ  (tmrHw_HIGH_FREQUENCY_MHZ * 30)
#define TIMER3_FREQUENCY_KHZ   (tmrHw_HIGH_FREQUENCY_HZ / 1000 * 30)
#define TIMER0_FREQUENCY_MHZ  tmrHw_LOW_FREQUENCY_MHZ
#define TIMER1_FREQUENCY_MHZ  tmrHw_LOW_FREQUENCY_MHZ
#define TIMER3_FREQUENCY_MHZ  tmrHw_HIGH_FREQUENCY_MHZ
#define TIMER3_FREQUENCY_KHZ  (tmrHw_HIGH_FREQUENCY_HZ / 1000)
static struct clk sp804_timer012_clk = ;
static struct clk sp804_timer3_clk = ;
static struct clk_lookup lookups[] = ;
static struct amba_device *amba_devs[] __initdata = ;
void __init bcmring_amba_init(void)
#define TIMER0_VA_BASE		((void __iomem *)MM_IO_BASE_TMR)
#define TIMER1_VA_BASE		((void __iomem *)(MM_IO_BASE_TMR + 0x20))
#define TIMER2_VA_BASE		((void __iomem *)(MM_IO_BASE_TMR + 0x40))
#define TIMER3_VA_BASE          ((void __iomem *)(MM_IO_BASE_TMR + 0x60))
static int __init bcmring_clocksource_init(void)
void __init bcmring_init_timer(void)
struct sys_timer bcmring_timer = ;
void __init bcmring_init_early(void)
