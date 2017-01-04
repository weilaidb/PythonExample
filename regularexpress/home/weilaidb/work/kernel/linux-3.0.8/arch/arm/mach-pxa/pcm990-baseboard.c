static unsigned long pcm990_pin_config[] __initdata = ;
static void pcm990_lcd_power(int on, struct fb_var_screeninfo *var)
#if defined(CONFIG_PCM990_DISPLAY_SHARP)
static struct pxafb_mode_info fb_info_sharp_lq084v1dg21 = ;
static struct pxafb_mach_info pcm990_fbinfo __initdata = ;
#elif defined(CONFIG_PCM990_DISPLAY_NEC)
struct pxafb_mode_info fb_info_nec_nl6448bc20_18d = ;
static struct pxafb_mach_info pcm990_fbinfo __initdata = ;
static struct platform_pwm_backlight_data pcm990_backlight_data = ;
static struct platform_device pcm990_backlight_device = ;
static unsigned long pcm990_irq_enabled;
static void pcm990_mask_ack_irq(struct irq_data *d)
static void pcm990_unmask_irq(struct irq_data *d)
static struct irq_chip pcm990_irq_chip = ;
static void pcm990_irq_handler(unsigned int irq, struct irq_desc *desc)
static void __init pcm990_init_irq(void)
static int pcm990_mci_init(struct device *dev, irq_handler_t mci_detect_int,
void *data)
static void pcm990_mci_setpower(struct device *dev, unsigned int vdd)
static void pcm990_mci_exit(struct device *dev, void *data)
#define MSECS_PER_JIFFY (1000/HZ)
static struct pxamci_platform_data pcm990_mci_platform_data = ;
static struct pxaohci_platform_data pcm990_ohci_platform_data = ;
#if defined(CONFIG_VIDEO_PXA27x) || defined(CONFIG_VIDEO_PXA27x_MODULE)
static unsigned long pcm990_camera_pin_config[] = ;
struct pxacamera_platform_data pcm990_pxacamera_platform_data = ;
static struct pca953x_platform_data pca9536_data = ;
static int gpio_bus_switch = -EINVAL;
static int pcm990_camera_set_bus_param(struct soc_camera_link *link,
unsigned long flags)
static unsigned long pcm990_camera_query_bus_param(struct soc_camera_link *link)
static void pcm990_camera_free_bus(struct soc_camera_link *link)
static struct i2c_board_info __initdata pcm990_i2c_devices[] = ;
static struct i2c_board_info pcm990_camera_i2c[] = ;
static struct soc_camera_link iclink[] = ;
static struct platform_device pcm990_camera[] = ;
static struct map_desc pcm990_io_desc[] __initdata = ;
void __init pcm990_baseboard_init(void)
