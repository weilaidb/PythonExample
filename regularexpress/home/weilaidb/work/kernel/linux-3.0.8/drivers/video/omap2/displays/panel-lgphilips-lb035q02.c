struct lb035q02_data ;
static struct omap_video_timings lb035q02_timings = ;
static int lb035q02_panel_power_on(struct omap_dss_device *dssdev)
static void lb035q02_panel_power_off(struct omap_dss_device *dssdev)
static int lb035q02_panel_probe(struct omap_dss_device *dssdev)
static void lb035q02_panel_remove(struct omap_dss_device *dssdev)
static int lb035q02_panel_enable(struct omap_dss_device *dssdev)
static void lb035q02_panel_disable(struct omap_dss_device *dssdev)
static int lb035q02_panel_suspend(struct omap_dss_device *dssdev)
static int lb035q02_panel_resume(struct omap_dss_device *dssdev)
static struct omap_dss_driver lb035q02_driver = ;
static int lb035q02_write_reg(struct spi_device *spi, u8 reg, u16 val)
static void init_lb035q02_panel(struct spi_device *spi)
static int __devinit lb035q02_panel_spi_probe(struct spi_device *spi)
static int __devexit lb035q02_panel_spi_remove(struct spi_device *spi)
static struct spi_driver lb035q02_spi_driver = ;
static int __init lb035q02_panel_drv_init(void)
static void __exit lb035q02_panel_drv_exit(void)
module_init(lb035q02_panel_drv_init);
module_exit(lb035q02_panel_drv_exit);
MODULE_LICENSE("GPL");
