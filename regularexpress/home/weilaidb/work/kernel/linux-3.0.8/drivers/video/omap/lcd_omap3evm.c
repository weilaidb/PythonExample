#define LCD_PANEL_ENABLE_GPIO       153
#define LCD_PANEL_LR                2
#define LCD_PANEL_UD                3
#define LCD_PANEL_INI               152
#define LCD_PANEL_QVGA              154
#define LCD_PANEL_RESB              155
#define ENABLE_VDAC_DEDICATED	0x03
#define ENABLE_VDAC_DEV_GRP	0x20
#define ENABLE_VPLL2_DEDICATED	0x05
#define ENABLE_VPLL2_DEV_GRP	0xE0
#define TWL_LED_LEDEN		0x00
#define TWL_PWMA_PWMAON		0x00
#define TWL_PWMA_PWMAOFF	0x01
static unsigned int bklight_level;
static int omap3evm_panel_init(struct lcd_panel *panel,
struct omapfb_device *fbdev)
static void omap3evm_panel_cleanup(struct lcd_panel *panel)
static int omap3evm_panel_enable(struct lcd_panel *panel)
static void omap3evm_panel_disable(struct lcd_panel *panel)
static unsigned long omap3evm_panel_get_caps(struct lcd_panel *panel)
static int omap3evm_bklight_setlevel(struct lcd_panel *panel,
unsigned int level)
static unsigned int omap3evm_bklight_getlevel(struct lcd_panel *panel)
static unsigned int omap3evm_bklight_getmaxlevel(struct lcd_panel *panel)
struct lcd_panel omap3evm_panel = ;
static int omap3evm_panel_probe(struct platform_device *pdev)
static int omap3evm_panel_remove(struct platform_device *pdev)
static int omap3evm_panel_suspend(struct platform_device *pdev,
pm_message_t mesg)
static int omap3evm_panel_resume(struct platform_device *pdev)
struct platform_driver omap3evm_panel_driver = ;
static int __init omap3evm_panel_drv_init(void)
static void __exit omap3evm_panel_drv_exit(void)
module_init(omap3evm_panel_drv_init);
module_exit(omap3evm_panel_drv_exit);
