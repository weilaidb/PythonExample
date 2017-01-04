static int mddi_ext_probe(struct platform_device *pdev);
static int mddi_ext_remove(struct platform_device *pdev);
static int mddi_ext_off(struct platform_device *pdev);
static int mddi_ext_on(struct platform_device *pdev);
static struct platform_device *pdev_list[MSM_FB_MAX_DEV_LIST];
static int pdev_list_cnt;
static int mddi_ext_suspend(struct platform_device *pdev, pm_message_t state);
static int mddi_ext_resume(struct platform_device *pdev);
static void mddi_ext_early_suspend(struct early_suspend *h);
static void mddi_ext_early_resume(struct early_suspend *h);
static struct platform_driver mddi_ext_driver = ;
static struct clk *mddi_ext_clk;
static struct mddi_platform_data *mddi_ext_pdata;
extern int int_mddi_ext_flag;
static int mddi_ext_off(struct platform_device *pdev)
static int mddi_ext_on(struct platform_device *pdev)
static int mddi_ext_resource_initialized;
static int mddi_ext_probe(struct platform_device *pdev)
static int mddi_ext_is_in_suspend;
static int mddi_ext_suspend(struct platform_device *pdev, pm_message_t state)
static int mddi_ext_resume(struct platform_device *pdev)
static void mddi_ext_early_suspend(struct early_suspend *h)
static void mddi_ext_early_resume(struct early_suspend *h)
static int mddi_ext_remove(struct platform_device *pdev)
static int mddi_ext_register_driver(void)
static int __init mddi_ext_driver_init(void)
module_init(mddi_ext_driver_init);
