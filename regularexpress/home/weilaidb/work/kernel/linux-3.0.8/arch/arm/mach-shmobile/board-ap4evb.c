static struct mtd_partition nor_flash_partitions[] = ;
static struct physmap_flash_data nor_flash_data = ;
static struct resource nor_flash_resources[] = ;
static struct platform_device nor_flash_device = ;
static struct resource smc911x_resources[] = ;
static struct smsc911x_platform_config smsc911x_info = ;
static struct platform_device smc911x_device = ;
static int slot_cn7_get_cd(struct platform_device *pdev)
static struct sh_mobile_meram_info meram_info = ;
static struct resource meram_resources[] = ;
static struct platform_device meram_device = ;
static struct resource sh_mmcif_resources[] = ;
static struct sh_mmcif_dma sh_mmcif_dma = ;
static struct sh_mmcif_plat_data sh_mmcif_plat = ;
static struct platform_device sh_mmcif_device = ;
static struct sh_mobile_sdhi_info sdhi0_info = ;
static struct resource sdhi0_resources[] = ;
static struct platform_device sdhi0_device = ;
static struct sh_mobile_sdhi_info sdhi1_info = ;
static struct resource sdhi1_resources[] = ;
static struct platform_device sdhi1_device = ;
static void usb1_host_port_power(int port, int power)
static struct r8a66597_platdata usb1_host_data = ;
static struct resource usb1_host_resources[] = ;
static struct platform_device usb1_host_device = ;
const static struct fb_videomode ap4evb_lcdc_modes[] = ;
static struct sh_mobile_meram_cfg lcd_meram_cfg = ;
static struct sh_mobile_lcdc_info lcdc_info = ;
static struct resource lcdc_resources[] = ;
static struct platform_device lcdc_device = ;
static struct sh_keysc_info keysc_info = ;
static struct resource keysc_resources[] = ;
static struct platform_device keysc_device = ;
static struct resource mipidsi0_resources[] = ;
static struct sh_mipi_dsi_info mipidsi0_info = ;
static struct platform_device mipidsi0_device = ;
static struct platform_device *qhd_devices[] __initdata = ;
#define IRQ_FSI		evt2irq(0x1840)
static int __fsi_set_rate(struct clk *clk, long rate, int enable)
static int __fsi_set_round_rate(struct clk *clk, long rate, int enable)
static int fsi_ak4642_set_rate(struct device *dev, int rate, int enable)
static int fsi_hdmi_set_rate(struct device *dev, int rate, int enable)
static int fsi_set_rate(struct device *dev, int is_porta, int rate, int enable)
static struct sh_fsi_platform_info fsi_info = ;
static struct resource fsi_resources[] = ;
static struct platform_device fsi_device = ;
static struct platform_device fsi_ak4643_device = ;
static struct sh_mobile_meram_cfg hdmi_meram_cfg = ;
static struct sh_mobile_lcdc_info sh_mobile_lcdc1_info = ;
static struct resource lcdc1_resources[] = ;
static struct platform_device lcdc1_device = ;
static long ap4evb_clk_optimize(unsigned long target, unsigned long *best_freq,
unsigned long *parent_freq);
static struct sh_mobile_hdmi_info hdmi_info = ;
static struct resource hdmi_resources[] = ;
static struct platform_device hdmi_device = ;
static struct platform_device fsi_hdmi_device = ;
static long ap4evb_clk_optimize(unsigned long target, unsigned long *best_freq,
unsigned long *parent_freq)
static struct gpio_led ap4evb_leds[] = ;
static struct gpio_led_platform_data ap4evb_leds_pdata = ;
static struct platform_device leds_device = ;
static struct i2c_board_info imx074_info = ;
static struct soc_camera_link imx074_link = ;
static struct platform_device ap4evb_camera = ;
static struct sh_csi2_client_config csi2_clients[] = ;
static struct sh_csi2_pdata csi2_info = ;
static struct resource csi2_resources[] = ;
static struct platform_device csi2_device = ;
static struct sh_mobile_ceu_info sh_mobile_ceu_info = ;
static struct resource ceu_resources[] = ;
static struct platform_device ceu_device = ;
static struct platform_device *ap4evb_devices[] __initdata = ;
static void __init hdmi_init_pm_clock(void)
static void __init fsi_init_pm_clock(void)
static void __init gpio_no_direction(u32 addr)
# define GPIO_TSC_IRQ	GPIO_FN_IRQ28_123
# define GPIO_TSC_PORT	GPIO_PORT123
# define GPIO_TSC_IRQ	GPIO_FN_IRQ7_40
# define GPIO_TSC_PORT	GPIO_PORT40
#define IRQ28	evt2irq(0x3380)
#define IRQ7	evt2irq(0x02e0)
static int ts_get_pendown_state(void)
static int ts_init(void)
static struct tsc2007_platform_data tsc2007_info = ;
static struct i2c_board_info tsc_device = ;
static struct i2c_board_info i2c0_devices[] = ;
static struct i2c_board_info i2c1_devices[] = ;
static struct map_desc ap4evb_io_desc[] __initdata = ;
static void __init ap4evb_map_io(void)
#define GPIO_PORT9CR	0xE6051009
#define GPIO_PORT10CR	0xE605100A
#define USCCR1		0xE6058144
static void __init ap4evb_init(void)
static void __init ap4evb_timer_init(void)
static struct sys_timer ap4evb_timer = ;
MACHINE_START(AP4EVB, "ap4evb")
.map_io		= ap4evb_map_io,
.init_irq	= sh7372_init_irq,
.handle_irq	= shmobile_handle_irq_intc,
.init_machine	= ap4evb_init,
.timer		= &ap4evb_timer,
MACHINE_END
