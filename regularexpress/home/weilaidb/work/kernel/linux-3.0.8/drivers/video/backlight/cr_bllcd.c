#define CRVML_DEVICE_LPC    0x27B8
#define CRVML_REG_GPIOBAR   0x48
#define CRVML_REG_GPIOEN    0x4C
#define CRVML_GPIOEN_BIT    (1 << 4)
#define CRVML_PANEL_PORT    0x38
#define CRVML_LVDS_ON       0x00000001
#define CRVML_PANEL_ON      0x00000002
#define CRVML_BACKLIGHT_OFF 0x00000004
#define CRVML_DEVICE_MCH   0x5001
#define CRVML_REG_MCHBAR   0x44
#define CRVML_REG_MCHEN    0x54
#define CRVML_MCHEN_BIT    (1 << 28)
#define CRVML_MCHMAP_SIZE  4096
#define CRVML_REG_CLOCK    0xc3c
#define CRVML_CLOCK_SHIFT  8
#define CRVML_CLOCK_MASK   0x00000f00
static struct pci_dev *lpc_dev;
static u32 gpio_bar;
struct cr_panel ;
static int cr_backlight_set_intensity(struct backlight_device *bd)
static int cr_backlight_get_intensity(struct backlight_device *bd)
static const struct backlight_ops cr_backlight_ops = ;
static void cr_panel_on(void)
static void cr_panel_off(void)
static int cr_lcd_set_power(struct lcd_device *ld, int power)
static struct lcd_ops cr_lcd_ops = ;
static int cr_backlight_probe(struct platform_device *pdev)
static int cr_backlight_remove(struct platform_device *pdev)
static struct platform_driver cr_backlight_driver = ;
static struct platform_device *crp;
static int __init cr_backlight_init(void)
static void __exit cr_backlight_exit(void)
module_init(cr_backlight_init);
module_exit(cr_backlight_exit);
MODULE_AUTHOR("Tungsten Graphics Inc.");
MODULE_DESCRIPTION("Carillo Ranch Backlight Driver");
MODULE_LICENSE("GPL");
