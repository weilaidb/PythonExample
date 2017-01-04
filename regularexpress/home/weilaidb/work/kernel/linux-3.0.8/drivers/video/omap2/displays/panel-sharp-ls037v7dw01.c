struct sharp_data ;
static struct omap_video_timings sharp_ls_timings = ;
static int sharp_ls_bl_update_status(struct backlight_device *bl)
static int sharp_ls_bl_get_brightness(struct backlight_device *bl)
static const struct backlight_ops sharp_ls_bl_ops = ;
static int sharp_ls_panel_probe(struct omap_dss_device *dssdev)
static void __exit sharp_ls_panel_remove(struct omap_dss_device *dssdev)
static int sharp_ls_power_on(struct omap_dss_device *dssdev)
static void sharp_ls_power_off(struct omap_dss_device *dssdev)
static int sharp_ls_panel_enable(struct omap_dss_device *dssdev)
static void sharp_ls_panel_disable(struct omap_dss_device *dssdev)
static int sharp_ls_panel_suspend(struct omap_dss_device *dssdev)
static int sharp_ls_panel_resume(struct omap_dss_device *dssdev)
static struct omap_dss_driver sharp_ls_driver = ;
static int __init sharp_ls_panel_drv_init(void)
static void __exit sharp_ls_panel_drv_exit(void)
module_init(sharp_ls_panel_drv_init);
module_exit(sharp_ls_panel_drv_exit);
MODULE_LICENSE("GPL");
