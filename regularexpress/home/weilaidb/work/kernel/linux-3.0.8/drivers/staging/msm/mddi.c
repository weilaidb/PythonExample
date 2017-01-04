static int mddi_probe(struct platform_device *pdev);
static int mddi_remove(struct platform_device *pdev);
static int mddi_off(struct platform_device *pdev);
static int mddi_on(struct platform_device *pdev);
static int mddi_suspend(struct platform_device *pdev, pm_message_t state);
static int mddi_resume(struct platform_device *pdev);
static void mddi_early_suspend(struct early_suspend *h);
static void mddi_early_resume(struct early_suspend *h);
static struct platform_device *pdev_list[MSM_FB_MAX_DEV_LIST];
static int pdev_list_cnt;
static struct clk *mddi_clk;
static struct clk *mddi_pclk;
static struct mddi_platform_data *mddi_pdata;
static struct platform_driver mddi_driver = ;
extern int int_mddi_pri_flag;
static int mddi_off(struct platform_device *pdev)
static int mddi_on(struct platform_device *pdev)
static int mddi_resource_initialized;
static int mddi_probe(struct platform_device *pdev)
static int mddi_pad_ctrl;
static int mddi_power_locked;
static int mddi_is_in_suspend;
void mddi_disable(int lock)
static int mddi_suspend(struct platform_device *pdev, pm_message_t state)
static int mddi_resume(struct platform_device *pdev)
static void mddi_early_suspend(struct early_suspend *h)
static void mddi_early_resume(struct early_suspend *h)
static int mddi_remove(struct platform_device *pdev)
static int mddi_register_driver(void)
static int __init mddi_driver_init(void)
module_init(mddi_driver_init);
