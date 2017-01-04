static int ebi2_lcd_probe(struct platform_device *pdev);
static int ebi2_lcd_remove(struct platform_device *pdev);
static struct platform_driver ebi2_lcd_driver = ;
static void *ebi2_base;
static void *ebi2_lcd_cfg0;
static void *ebi2_lcd_cfg1;
static void __iomem *lcd01_base;
static void __iomem *lcd02_base;
static int ebi2_lcd_resource_initialized;
static struct platform_device *pdev_list[MSM_FB_MAX_DEV_LIST];
static int pdev_list_cnt;
static int ebi2_lcd_probe(struct platform_device *pdev)
static int ebi2_lcd_remove(struct platform_device *pdev)
static int ebi2_lcd_register_driver(void)
static int __init ebi2_lcd_driver_init(void)
module_init(ebi2_lcd_driver_init);
