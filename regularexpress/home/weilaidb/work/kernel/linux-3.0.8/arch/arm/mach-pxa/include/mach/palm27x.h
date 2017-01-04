#define	__INCLUDE_MACH_PALM27X__
#if defined(CONFIG_MMC_PXA) || defined(CONFIG_MMC_PXA_MODULE)
extern void __init palm27x_mmc_init(int detect, int ro, int power,
int power_inverted);
static inline void palm27x_mmc_init(int detect, int ro, int power,
int power_inverted)
#if defined(CONFIG_SUSPEND)
extern void __init palm27x_pm_init(unsigned long str_base);
static inline void palm27x_pm_init(unsigned long str_base)
#if defined(CONFIG_FB_PXA) || defined(CONFIG_FB_PXA_MODULE)
extern struct pxafb_mode_info palm_320x480_lcd_mode;
extern struct pxafb_mode_info palm_320x320_lcd_mode;
extern struct pxafb_mode_info palm_320x320_new_lcd_mode;
extern void __init palm27x_lcd_init(int power,
struct pxafb_mode_info *mode);
static inline void palm27x_lcd_init(int power, struct pxafb_mode_info *mode)
#if	defined(CONFIG_USB_GADGET_PXA27X) || \
defined(CONFIG_USB_GADGET_PXA27X_MODULE)
extern void __init palm27x_udc_init(int vbus, int pullup,
int vbus_inverted);
static inline void palm27x_udc_init(int vbus, int pullup, int vbus_inverted)
#if defined(CONFIG_IRDA) || defined(CONFIG_IRDA_MODULE)
extern void __init palm27x_irda_init(int pwdn);
static inline void palm27x_irda_init(int pwdn)
#if	defined(CONFIG_TOUCHSCREEN_WM97XX) || \
defined(CONFIG_TOUCHSCREEN_WM97XX_MODULE)
extern void __init palm27x_ac97_init(int minv, int maxv, int jack,
int reset);
static inline void palm27x_ac97_init(int minv, int maxv, int jack, int reset)
#if defined(CONFIG_BACKLIGHT_PWM) || defined(CONFIG_BACKLIGHT_PWM_MODULE)
extern void __init palm27x_pwm_init(int bl, int lcd);
static inline void palm27x_pwm_init(int bl, int lcd)
#if defined(CONFIG_PDA_POWER) || defined(CONFIG_PDA_POWER_MODULE)
extern void __init palm27x_power_init(int ac, int usb);
static inline void palm27x_power_init(int ac, int usb)
#if defined(CONFIG_REGULATOR_MAX1586) || \
defined(CONFIG_REGULATOR_MAX1586_MODULE)
extern void __init palm27x_pmic_init(void);
static inline void palm27x_pmic_init(void)
