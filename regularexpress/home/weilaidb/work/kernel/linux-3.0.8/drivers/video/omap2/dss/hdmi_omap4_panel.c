static struct  hdmi;
static int hdmi_panel_probe(struct omap_dss_device *dssdev)
static void hdmi_panel_remove(struct omap_dss_device *dssdev)
static int hdmi_panel_enable(struct omap_dss_device *dssdev)
static void hdmi_panel_disable(struct omap_dss_device *dssdev)
static int hdmi_panel_suspend(struct omap_dss_device *dssdev)
static int hdmi_panel_resume(struct omap_dss_device *dssdev)
static void hdmi_get_timings(struct omap_dss_device *dssdev,
struct omap_video_timings *timings)
static void hdmi_set_timings(struct omap_dss_device *dssdev,
struct omap_video_timings *timings)
static int hdmi_check_timings(struct omap_dss_device *dssdev,
struct omap_video_timings *timings)
static struct omap_dss_driver hdmi_driver = ;
int hdmi_panel_init(void)
void hdmi_panel_exit(void)
