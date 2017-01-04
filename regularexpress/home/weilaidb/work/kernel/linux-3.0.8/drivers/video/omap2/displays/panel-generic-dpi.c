struct panel_config ;
static struct panel_config generic_dpi_panels[] = ;
struct panel_drv_data ;
static inline struct panel_generic_dpi_data
*get_panel_data(const struct omap_dss_device *dssdev)
static int generic_dpi_panel_power_on(struct omap_dss_device *dssdev)
static void generic_dpi_panel_power_off(struct omap_dss_device *dssdev)
static int generic_dpi_panel_probe(struct omap_dss_device *dssdev)
static void __exit generic_dpi_panel_remove(struct omap_dss_device *dssdev)
static int generic_dpi_panel_enable(struct omap_dss_device *dssdev)
static void generic_dpi_panel_disable(struct omap_dss_device *dssdev)
static int generic_dpi_panel_suspend(struct omap_dss_device *dssdev)
static int generic_dpi_panel_resume(struct omap_dss_device *dssdev)
static void generic_dpi_panel_set_timings(struct omap_dss_device *dssdev,
struct omap_video_timings *timings)
static void generic_dpi_panel_get_timings(struct omap_dss_device *dssdev,
struct omap_video_timings *timings)
static int generic_dpi_panel_check_timings(struct omap_dss_device *dssdev,
struct omap_video_timings *timings)
static struct omap_dss_driver dpi_driver = ;
static int __init generic_dpi_panel_drv_init(void)
static void __exit generic_dpi_panel_drv_exit(void)
module_init(generic_dpi_panel_drv_init);
module_exit(generic_dpi_panel_drv_exit);
MODULE_LICENSE("GPL");
