#define GPIO_LCDPWR	IMX_GPIO_NR(1, 2)
#define GPIO_PMIC_INT	IMX_GPIO_NR(2, 0)
#define GPIO_BUTTON1	IMX_GPIO_NR(1, 4)
#define GPIO_BUTTON2	IMX_GPIO_NR(1, 5)
#define GPIO_BUTTON3	IMX_GPIO_NR(1, 7)
#define GPIO_BUTTON4	IMX_GPIO_NR(1, 8)
#define GPIO_BUTTON5	IMX_GPIO_NR(1, 9)
#define GPIO_BUTTON6	IMX_GPIO_NR(1, 10)
#define GPIO_BUTTON7	IMX_GPIO_NR(1, 11)
#define GPIO_BUTTON8	IMX_GPIO_NR(1, 12)
static const struct fb_videomode fb_modedb[] = ;
static const struct ipu_platform_data mx3_ipu_data __initconst = ;
static struct mx3fb_platform_data mx3fb_pdata __initdata = ;
static struct physmap_flash_data vpr200_flash_data = ;
static struct resource vpr200_flash_resource = ;
static struct platform_device vpr200_flash = ;
static const struct mxc_nand_platform_data
vpr200_nand_board_info __initconst = ;
#define VPR_KEY_DEBOUNCE	500
static struct gpio_keys_button vpr200_gpio_keys_table[] = ;
static const struct gpio_keys_platform_data
vpr200_gpio_keys_data __initconst = ;
static struct mc13xxx_platform_data vpr200_pmic = ;
static const struct imxi2c_platform_data vpr200_i2c0_data __initconst = ;
static struct at24_platform_data vpr200_eeprom = ;
static struct i2c_board_info vpr200_i2c_devices[] = ;
static iomux_v3_cfg_t vpr200_pads[] = ;
static const struct fsl_usb2_platform_data otg_device_pdata __initconst = ;
static int vpr200_usbh_init(struct platform_device *pdev)
static const struct mxc_usbh_platform_data usb_host_pdata __initconst = ;
static struct platform_device *devices[] __initdata = ;
static void __init vpr200_board_init(void)
static void __init vpr200_timer_init(void)
struct sys_timer vpr200_timer = ;
MACHINE_START(VPR200, "VPR200")
.map_io = mx35_map_io,
.init_early = imx35_init_early,
.init_irq = mx35_init_irq,
.timer = &vpr200_timer,
.init_machine = vpr200_board_init,
MACHINE_END
