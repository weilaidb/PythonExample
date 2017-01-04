#define DSS_SUBSYS_NAME "DISPLAY"
static ssize_t display_enabled_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t display_enabled_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t size)
static ssize_t display_upd_mode_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t display_upd_mode_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t size)
static ssize_t display_tear_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t display_tear_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t size)
static ssize_t display_timings_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t display_timings_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t size)
static ssize_t display_rotate_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t display_rotate_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t size)
static ssize_t display_mirror_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t display_mirror_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t size)
static ssize_t display_wss_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t display_wss_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t size)
static DEVICE_ATTR(enabled, S_IRUGO|S_IWUSR,
display_enabled_show, display_enabled_store);
static DEVICE_ATTR(update_mode, S_IRUGO|S_IWUSR,
display_upd_mode_show, display_upd_mode_store);
static DEVICE_ATTR(tear_elim, S_IRUGO|S_IWUSR,
display_tear_show, display_tear_store);
static DEVICE_ATTR(timings, S_IRUGO|S_IWUSR,
display_timings_show, display_timings_store);
static DEVICE_ATTR(rotate, S_IRUGO|S_IWUSR,
display_rotate_show, display_rotate_store);
static DEVICE_ATTR(mirror, S_IRUGO|S_IWUSR,
display_mirror_show, display_mirror_store);
static DEVICE_ATTR(wss, S_IRUGO|S_IWUSR,
display_wss_show, display_wss_store);
static struct device_attribute *display_sysfs_attrs[] = ;
void omapdss_default_get_resolution(struct omap_dss_device *dssdev,
u16 *xres, u16 *yres)
EXPORT_SYMBOL(omapdss_default_get_resolution);
void default_get_overlay_fifo_thresholds(enum omap_plane plane,
u32 fifo_size, enum omap_burst_size *burst_size,
u32 *fifo_low, u32 *fifo_high)
int omapdss_default_get_recommended_bpp(struct omap_dss_device *dssdev)
EXPORT_SYMBOL(omapdss_default_get_recommended_bpp);
bool dss_use_replication(struct omap_dss_device *dssdev,
enum omap_color_mode mode)
void dss_init_device(struct platform_device *pdev,
struct omap_dss_device *dssdev)
void dss_uninit_device(struct platform_device *pdev,
struct omap_dss_device *dssdev)
static int dss_suspend_device(struct device *dev, void *data)
int dss_suspend_all_devices(void)
static int dss_resume_device(struct device *dev, void *data)
int dss_resume_all_devices(void)
static int dss_disable_device(struct device *dev, void *data)
void dss_disable_all_devices(void)
void omap_dss_get_device(struct omap_dss_device *dssdev)
EXPORT_SYMBOL(omap_dss_get_device);
void omap_dss_put_device(struct omap_dss_device *dssdev)
EXPORT_SYMBOL(omap_dss_put_device);
struct omap_dss_device *omap_dss_get_next_device(struct omap_dss_device *from)
EXPORT_SYMBOL(omap_dss_get_next_device);
struct omap_dss_device *omap_dss_find_device(void *data,
int (*match)(struct omap_dss_device *dssdev, void *data))
EXPORT_SYMBOL(omap_dss_find_device);
int omap_dss_start_device(struct omap_dss_device *dssdev)
EXPORT_SYMBOL(omap_dss_start_device);
void omap_dss_stop_device(struct omap_dss_device *dssdev)
EXPORT_SYMBOL(omap_dss_stop_device);
