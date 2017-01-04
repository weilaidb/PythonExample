#define TVENC_C
static int tvenc_probe(struct platform_device *pdev);
static int tvenc_remove(struct platform_device *pdev);
static int tvenc_off(struct platform_device *pdev);
static int tvenc_on(struct platform_device *pdev);
static struct platform_device *pdev_list[MSM_FB_MAX_DEV_LIST];
static int pdev_list_cnt;
static struct clk *tvenc_clk;
static struct clk *tvdac_clk;
static struct platform_driver tvenc_driver = ;
static struct tvenc_platform_data *tvenc_pdata;
static int tvenc_off(struct platform_device *pdev)
static int tvenc_on(struct platform_device *pdev)
void tvenc_gen_test_pattern(struct msm_fb_data_type *mfd)
static int tvenc_resource_initialized;
static int tvenc_probe(struct platform_device *pdev)
static int tvenc_remove(struct platform_device *pdev)
static int tvenc_register_driver(void)
static int __init tvenc_driver_init(void)
module_init(tvenc_driver_init);
