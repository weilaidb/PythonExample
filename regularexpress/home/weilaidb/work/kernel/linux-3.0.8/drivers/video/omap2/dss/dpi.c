#define DSS_SUBSYS_NAME "DPI"
static struct  dpi;
static struct platform_device *dpi_get_dsidev(enum omap_dss_clk_source clk)
static bool dpi_use_dsi_pll(struct omap_dss_device *dssdev)
static int dpi_set_dsi_clk(struct omap_dss_device *dssdev, bool is_tft,
unsigned long pck_req, unsigned long *fck, int *lck_div,
int *pck_div)
static int dpi_set_dispc_clk(struct omap_dss_device *dssdev, bool is_tft,
unsigned long pck_req, unsigned long *fck, int *lck_div,
int *pck_div)
static int dpi_set_mode(struct omap_dss_device *dssdev)
static int dpi_basic_init(struct omap_dss_device *dssdev)
int omapdss_dpi_display_enable(struct omap_dss_device *dssdev)
EXPORT_SYMBOL(omapdss_dpi_display_enable);
void omapdss_dpi_display_disable(struct omap_dss_device *dssdev)
EXPORT_SYMBOL(omapdss_dpi_display_disable);
void dpi_set_timings(struct omap_dss_device *dssdev,
struct omap_video_timings *timings)
EXPORT_SYMBOL(dpi_set_timings);
int dpi_check_timings(struct omap_dss_device *dssdev,
struct omap_video_timings *timings)
EXPORT_SYMBOL(dpi_check_timings);
int dpi_init_display(struct omap_dss_device *dssdev)
int dpi_init(void)
void dpi_exit(void)
