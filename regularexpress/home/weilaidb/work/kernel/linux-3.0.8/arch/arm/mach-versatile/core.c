#define VA_VIC_BASE		__io_address(VERSATILE_VIC_BASE)
#define VA_SIC_BASE		__io_address(VERSATILE_SIC_BASE)
static struct fpga_irq_data sic_irq = ;
#if 1
#define IRQ_MMCI0A	IRQ_VICSOURCE22
#define IRQ_AACI	IRQ_VICSOURCE24
#define IRQ_ETH		IRQ_VICSOURCE25
#define PIC_MASK	0xFFD00000
#define IRQ_MMCI0A	IRQ_SIC_MMCI0A
#define IRQ_AACI	IRQ_SIC_AACI
#define IRQ_ETH		IRQ_SIC_ETH
#define PIC_MASK	0
void __init versatile_init_irq(void)
static struct map_desc versatile_io_desc[] __initdata = ;
void __init versatile_map_io(void)
#define VERSATILE_FLASHCTRL    (__io_address(VERSATILE_SYS_BASE) + VERSATILE_SYS_FLASH_OFFSET)
static void versatile_flash_set_vpp(struct platform_device *pdev, int on)
static struct physmap_flash_data versatile_flash_data = ;
static struct resource versatile_flash_resource = ;
static struct platform_device versatile_flash_device = ;
static struct resource smc91x_resources[] = ;
static struct platform_device smc91x_device = ;
static struct resource versatile_i2c_resource = ;
static struct platform_device versatile_i2c_device = ;
static struct i2c_board_info versatile_i2c_board_info[] = ;
static int __init versatile_i2c_init(void)
arch_initcall(versatile_i2c_init);
#define VERSATILE_SYSMCI	(__io_address(VERSATILE_SYS_BASE) + VERSATILE_SYS_MCI_OFFSET)
unsigned int mmc_status(struct device *dev)
static struct mmci_platform_data mmc0_plat_data = ;
static struct resource char_lcd_resources[] = ;
static struct platform_device char_lcd_device = ;
static const struct icst_params versatile_oscvco_params = ;
static void versatile_oscvco_set(struct clk *clk, struct icst_vco vco)
static const struct clk_ops osc4_clk_ops = ;
static struct clk osc4_clk = ;
static struct clk ref24_clk = ;
static struct clk sp804_clk = ;
static struct clk dummy_apb_pclk;
static struct clk_lookup lookups[] = ;
#define SYS_CLCD_MODE_MASK	(3 << 0)
#define SYS_CLCD_MODE_888	(0 << 0)
#define SYS_CLCD_MODE_5551	(1 << 0)
#define SYS_CLCD_MODE_565_RLSB	(2 << 0)
#define SYS_CLCD_MODE_565_BLSB	(3 << 0)
#define SYS_CLCD_NLCDIOON	(1 << 2)
#define SYS_CLCD_VDDPOSSWITCH	(1 << 3)
#define SYS_CLCD_PWR3V5SWITCH	(1 << 4)
#define SYS_CLCD_ID_MASK	(0x1f << 8)
#define SYS_CLCD_ID_SANYO_3_8	(0x00 << 8)
#define SYS_CLCD_ID_UNKNOWN_8_4	(0x01 << 8)
#define SYS_CLCD_ID_EPSON_2_2	(0x02 << 8)
#define SYS_CLCD_ID_SANYO_2_5	(0x07 << 8)
#define SYS_CLCD_ID_VGA		(0x1f << 8)
static bool is_sanyo_2_5_lcd;
static void versatile_clcd_disable(struct clcd_fb *fb)
static void versatile_clcd_enable(struct clcd_fb *fb)
static int versatile_clcd_setup(struct clcd_fb *fb)
static void versatile_clcd_decode(struct clcd_fb *fb, struct clcd_regs *regs)
static struct clcd_board clcd_plat_data = ;
static struct pl061_platform_data gpio0_plat_data = ;
static struct pl061_platform_data gpio1_plat_data = ;
static struct pl022_ssp_controller ssp0_plat_data = ;
#define AACI_IRQ
#define MMCI0_IRQ
#define KMI0_IRQ
#define KMI1_IRQ
#define SMC_IRQ
#define MPMC_IRQ
#define CLCD_IRQ
#define DMAC_IRQ
#define SCTL_IRQ
#define WATCHDOG_IRQ
#define GPIO0_IRQ
#define GPIO1_IRQ
#define RTC_IRQ
#define SCI_IRQ
#define UART0_IRQ
#define UART1_IRQ
#define UART2_IRQ
#define SSP_IRQ
AMBA_DEVICE(aaci,  "fpga:04", AACI,     NULL);
AMBA_DEVICE(mmc0,  "fpga:05", MMCI0,    &mmc0_plat_data);
AMBA_DEVICE(kmi0,  "fpga:06", KMI0,     NULL);
AMBA_DEVICE(kmi1,  "fpga:07", KMI1,     NULL);
AMBA_DEVICE(smc,   "dev:00",  SMC,      NULL);
AMBA_DEVICE(mpmc,  "dev:10",  MPMC,     NULL);
AMBA_DEVICE(clcd,  "dev:20",  CLCD,     &clcd_plat_data);
AMBA_DEVICE(dmac,  "dev:30",  DMAC,     NULL);
AMBA_DEVICE(sctl,  "dev:e0",  SCTL,     NULL);
AMBA_DEVICE(wdog,  "dev:e1",  WATCHDOG, NULL);
AMBA_DEVICE(gpio0, "dev:e4",  GPIO0,    &gpio0_plat_data);
AMBA_DEVICE(gpio1, "dev:e5",  GPIO1,    &gpio1_plat_data);
AMBA_DEVICE(rtc,   "dev:e8",  RTC,      NULL);
AMBA_DEVICE(sci0,  "dev:f0",  SCI,      NULL);
AMBA_DEVICE(uart0, "dev:f1",  UART0,    NULL);
AMBA_DEVICE(uart1, "dev:f2",  UART1,    NULL);
AMBA_DEVICE(uart2, "dev:f3",  UART2,    NULL);
AMBA_DEVICE(ssp0,  "dev:f4",  SSP,      &ssp0_plat_data);
static struct amba_device *amba_devs[] __initdata = ;
#define VA_LEDS_BASE (__io_address(VERSATILE_SYS_BASE) + VERSATILE_SYS_LED_OFFSET)
static void versatile_leds_event(led_event_t ledevt)
void __init versatile_init_early(void)
void __init versatile_init(void)
#define TIMER0_VA_BASE		 __io_address(VERSATILE_TIMER0_1_BASE)
#define TIMER1_VA_BASE		(__io_address(VERSATILE_TIMER0_1_BASE) + 0x20)
#define TIMER2_VA_BASE		 __io_address(VERSATILE_TIMER2_3_BASE)
#define TIMER3_VA_BASE		(__io_address(VERSATILE_TIMER2_3_BASE) + 0x20)
static void __init versatile_timer_init(void)
struct sys_timer versatile_timer = ;
