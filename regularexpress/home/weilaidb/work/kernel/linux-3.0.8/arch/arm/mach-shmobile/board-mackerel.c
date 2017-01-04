static void __init gpio_no_direction(u32 addr)
static void __init gpio_pull_down(u32 addr)
static struct mtd_partition nor_flash_partitions[] = ;
static struct physmap_flash_data nor_flash_data = ;
static struct resource nor_flash_resources[] = ;
static struct platform_device nor_flash_device = ;
static struct resource smc911x_resources[] = ;
static struct smsc911x_platform_config smsc911x_info = ;
static struct platform_device smc911x_device = ;
static struct sh_mobile_meram_info mackerel_meram_info = ;
static struct resource meram_resources[] = ;
static struct platform_device meram_device = ;
static struct fb_videomode mackerel_lcdc_modes[] = ;
static int mackerel_set_brightness(void *board_data, int brightness)
static int mackerel_get_brightness(void *board_data)
static struct sh_mobile_meram_cfg lcd_meram_cfg = ;
static struct sh_mobile_lcdc_info lcdc_info = ;
static struct resource lcdc_resources[] = ;
static struct platform_device lcdc_device = ;
static struct sh_mobile_meram_cfg hdmi_meram_cfg = ;
static struct sh_mobile_lcdc_info hdmi_lcdc_info = ;
static struct resource hdmi_lcdc_resources[] = ;
static struct platform_device hdmi_lcdc_device = ;
static struct sh_mobile_hdmi_info hdmi_info = ;
static struct resource hdmi_resources[] = ;
static struct platform_device hdmi_device = ;
static struct platform_device fsi_hdmi_device = ;
static void __init hdmi_init_pm_clock(void)
#define USBHS0_POLL_INTERVAL (HZ * 5)
struct usbhs_private ;
#define usbhs_get_priv(pdev)				\
container_of(renesas_usbhs_get_info(pdev),	\
struct usbhs_private, info)
#define usbhs_is_connected(priv)			\
(!((1 << 7) & __raw_readw(priv->usbcrcaddr)))
static int usbhs_get_vbus(struct platform_device *pdev)
static void usbhs_phy_reset(struct platform_device *pdev)
static int usbhs0_get_id(struct platform_device *pdev)
static void usbhs0_work_function(struct work_struct *work)
static int usbhs0_hardware_init(struct platform_device *pdev)
static void usbhs0_hardware_exit(struct platform_device *pdev)
static struct usbhs_private usbhs0_private = ;
static struct resource usbhs0_resources[] = ;
static struct platform_device usbhs0_device = ;
#define IRQ8 evt2irq(0x0300)
static void usb1_host_port_power(int port, int power)
static struct r8a66597_platdata usb1_host_data = ;
static struct resource usb1_host_resources[] = ;
static struct platform_device usb1_host_device = ;
#define USB_PHY_MODE		(1 << 4)
#define USB_PHY_INT_EN		((1 << 3) | (1 << 2))
#define USB_PHY_ON		(1 << 1)
#define USB_PHY_OFF		(1 << 0)
#define USB_PHY_INT_CLR		(USB_PHY_ON | USB_PHY_OFF)
static irqreturn_t usbhs1_interrupt(int irq, void *data)
static int usbhs1_hardware_init(struct platform_device *pdev)
static void usbhs1_hardware_exit(struct platform_device *pdev)
static int usbhs1_get_id(struct platform_device *pdev)
static u32 usbhs1_pipe_cfg[] = ;
static struct usbhs_private usbhs1_private = ;
static struct resource usbhs1_resources[] = ;
static struct platform_device usbhs1_device = ;
static struct gpio_led mackerel_leds[] = ;
static struct gpio_led_platform_data mackerel_leds_pdata = ;
static struct platform_device leds_device = ;
#define IRQ_FSI evt2irq(0x1840)
static int __fsi_set_round_rate(struct clk *clk, long rate, int enable)
static int fsi_set_rate(struct device *dev, int is_porta, int rate, int enable)
static struct sh_fsi_platform_info fsi_info = ;
static struct resource fsi_resources[] = ;
static struct platform_device fsi_device = ;
static struct platform_device fsi_ak4643_device = ;
static int slot_cn7_get_cd(struct platform_device *pdev)
static irqreturn_t mackerel_sdhi0_gpio_cd(int irq, void *arg)
static struct sh_mobile_sdhi_info sdhi0_info = ;
static struct resource sdhi0_resources[] = ;
static struct platform_device sdhi0_device = ;
#if !defined(CONFIG_MMC_SH_MMCIF) && !defined(CONFIG_MMC_SH_MMCIF_MODULE)
static struct sh_mobile_sdhi_info sdhi1_info = ;
static struct resource sdhi1_resources[] = ;
static struct platform_device sdhi1_device = ;
static int slot_cn23_get_cd(struct platform_device *pdev)
static struct sh_mobile_sdhi_info sdhi2_info = ;
static struct resource sdhi2_resources[] = ;
static struct platform_device sdhi2_device = ;
static struct resource sh_mmcif_resources[] = ;
static struct sh_mmcif_dma sh_mmcif_dma = ;
static struct sh_mmcif_plat_data sh_mmcif_plat = ;
static struct platform_device sh_mmcif_device = ;
static int mackerel_camera_add(struct soc_camera_link *icl, struct device *dev);
static void mackerel_camera_del(struct soc_camera_link *icl);
static int camera_set_capture(struct soc_camera_platform_info *info,
int enable)
static struct soc_camera_platform_info camera_info = ;
static struct soc_camera_link camera_link = ;
static struct platform_device *camera_device;
static void mackerel_camera_release(struct device *dev)
static int mackerel_camera_add(struct soc_camera_link *icl,
struct device *dev)
static void mackerel_camera_del(struct soc_camera_link *icl)
static struct sh_mobile_ceu_info sh_mobile_ceu_info = ;
static struct resource ceu_resources[] = ;
static struct platform_device ceu_device = ;
static struct platform_device mackerel_camera = ;
static struct platform_device *mackerel_devices[] __initdata = ;
#define KEYPAD_BUTTON(ev_type, ev_code, act_low) \
#define KEYPAD_BUTTON_LOW(event_code) KEYPAD_BUTTON(EV_KEY, event_code, 1)
static struct tca6416_button mackerel_gpio_keys[] = ;
static struct tca6416_keys_platform_data mackerel_tca6416_keys_info = ;
#define IRQ7 evt2irq(0x02e0)
#define IRQ9 evt2irq(0x0320)
static struct i2c_board_info i2c0_devices[] = ;
#define IRQ21 evt2irq(0x32a0)
static struct i2c_board_info i2c1_devices[] = ;
static struct map_desc mackerel_io_desc[] __initdata = ;
static void __init mackerel_map_io(void)
#define GPIO_PORT9CR	0xE6051009
#define GPIO_PORT10CR	0xE605100A
#define GPIO_PORT167CR	0xE60520A7
#define GPIO_PORT168CR	0xE60520A8
#define SRCR4		0xe61580bc
#define USCCR1		0xE6058144
static void __init mackerel_init(void)
static void __init mackerel_timer_init(void)
static struct sys_timer mackerel_timer = ;
MACHINE_START(MACKEREL, "mackerel")
.map_io		= mackerel_map_io,
.init_irq	= sh7372_init_irq,
.handle_irq	= shmobile_handle_irq_intc,
.init_machine	= mackerel_init,
.timer		= &mackerel_timer,
MACHINE_END
