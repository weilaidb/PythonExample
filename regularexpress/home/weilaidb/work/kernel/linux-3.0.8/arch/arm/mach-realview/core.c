#define REALVIEW_FLASHCTRL    (__io_address(REALVIEW_SYS_BASE) + REALVIEW_SYS_FLASH_OFFSET)
static void realview_flash_set_vpp(struct platform_device *pdev, int on)
static struct physmap_flash_data realview_flash_data = ;
struct platform_device realview_flash_device = ;
int realview_flash_register(struct resource *res, u32 num)
static struct smsc911x_platform_config smsc911x_config = ;
static struct platform_device realview_eth_device = ;
int realview_eth_register(const char *name, struct resource *res)
struct platform_device realview_usb_device = ;
int realview_usb_register(struct resource *res)
static struct pata_platform_info pata_platform_data = ;
static struct resource pata_resources[] = ;
struct platform_device realview_cf_device = ;
static struct resource realview_i2c_resource = ;
struct platform_device realview_i2c_device = ;
static struct i2c_board_info realview_i2c_board_info[] = ;
static int __init realview_i2c_init(void)
arch_initcall(realview_i2c_init);
#define REALVIEW_SYSMCI	(__io_address(REALVIEW_SYS_BASE) + REALVIEW_SYS_MCI_OFFSET)
static unsigned int realview_mmc_status(struct device *dev)
struct mmci_platform_data realview_mmc0_plat_data = ;
struct mmci_platform_data realview_mmc1_plat_data = ;
static const struct icst_params realview_oscvco_params = ;
static void realview_oscvco_set(struct clk *clk, struct icst_vco vco)
static const struct clk_ops oscvco_clk_ops = ;
static struct clk oscvco_clk = ;
static struct clk ref24_clk = ;
static struct clk sp804_clk = ;
static struct clk dummy_apb_pclk;
static struct clk_lookup lookups[] = ;
void __init realview_init_early(void)
#define SYS_CLCD_NLCDIOON	(1 << 2)
#define SYS_CLCD_VDDPOSSWITCH	(1 << 3)
#define SYS_CLCD_PWR3V5SWITCH	(1 << 4)
#define SYS_CLCD_ID_MASK	(0x1f << 8)
#define SYS_CLCD_ID_SANYO_3_8	(0x00 << 8)
#define SYS_CLCD_ID_UNKNOWN_8_4	(0x01 << 8)
#define SYS_CLCD_ID_EPSON_2_2	(0x02 << 8)
#define SYS_CLCD_ID_SANYO_2_5	(0x07 << 8)
#define SYS_CLCD_ID_VGA		(0x1f << 8)
static void realview_clcd_disable(struct clcd_fb *fb)
static void realview_clcd_enable(struct clcd_fb *fb)
static int realview_clcd_setup(struct clcd_fb *fb)
struct clcd_board clcd_plat_data = ;
#define VA_LEDS_BASE (__io_address(REALVIEW_SYS_BASE) + REALVIEW_SYS_LED_OFFSET)
void realview_leds_event(led_event_t ledevt)
void __iomem *timer0_va_base;
void __iomem *timer1_va_base;
void __iomem *timer2_va_base;
void __iomem *timer3_va_base;
void __init realview_timer_init(unsigned int timer_irq)
void realview_fixup(struct machine_desc *mdesc, struct tag *tags, char **from,
struct meminfo *meminfo)
