#define NTSC_TV_DIMENSION_WIDTH      720
#define NTSC_TV_DIMENSION_HEIGHT     480
static int ntsc_off(struct platform_device *pdev);
static int ntsc_on(struct platform_device *pdev);
static int ntsc_on(struct platform_device *pdev)
static int ntsc_off(struct platform_device *pdev)
static int __init ntsc_probe(struct platform_device *pdev)
static struct platform_driver this_driver = ;
static struct msm_fb_panel_data ntsc_panel_data = ;
static struct platform_device this_device = ;
static int __init ntsc_init(void)
module_init(ntsc_init);
