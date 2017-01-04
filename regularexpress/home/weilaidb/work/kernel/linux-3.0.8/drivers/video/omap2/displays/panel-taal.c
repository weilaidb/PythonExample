#define TCH 0
#define DCS_READ_NUM_ERRORS	0x05
#define DCS_READ_POWER_MODE	0x0a
#define DCS_READ_MADCTL		0x0b
#define DCS_READ_PIXEL_FORMAT	0x0c
#define DCS_RDDSDR		0x0f
#define DCS_SLEEP_IN		0x10
#define DCS_SLEEP_OUT		0x11
#define DCS_DISPLAY_OFF		0x28
#define DCS_DISPLAY_ON		0x29
#define DCS_COLUMN_ADDR		0x2a
#define DCS_PAGE_ADDR		0x2b
#define DCS_MEMORY_WRITE	0x2c
#define DCS_TEAR_OFF		0x34
#define DCS_TEAR_ON		0x35
#define DCS_MEM_ACC_CTRL	0x36
#define DCS_PIXEL_FORMAT	0x3a
#define DCS_BRIGHTNESS		0x51
#define DCS_CTRL_DISPLAY	0x53
#define DCS_WRITE_CABC		0x55
#define DCS_READ_CABC		0x56
#define DCS_GET_ID1		0xda
#define DCS_GET_ID2		0xdb
#define DCS_GET_ID3		0xdc
static irqreturn_t taal_te_isr(int irq, void *data);
static void taal_te_timeout_work_callback(struct work_struct *work);
static int _taal_enable_te(struct omap_dss_device *dssdev, bool enable);
static int taal_panel_reset(struct omap_dss_device *dssdev);
struct panel_regulator ;
static void free_regulators(struct panel_regulator *regulators, int n)
static int init_regulators(struct omap_dss_device *dssdev,
struct panel_regulator *regulators, int n)
struct panel_config ;
enum ;
static struct panel_config panel_configs[] = ;
struct taal_data ;
static inline struct nokia_dsi_panel_data
*get_panel_data(const struct omap_dss_device *dssdev)
static void taal_esd_work(struct work_struct *work);
static void taal_ulps_work(struct work_struct *work);
static void hw_guard_start(struct taal_data *td, int guard_msec)
static void hw_guard_wait(struct taal_data *td)
static int taal_dcs_read_1(struct taal_data *td, u8 dcs_cmd, u8 *data)
static int taal_dcs_write_0(struct taal_data *td, u8 dcs_cmd)
static int taal_dcs_write_1(struct taal_data *td, u8 dcs_cmd, u8 param)
static int taal_sleep_in(struct taal_data *td)
static int taal_sleep_out(struct taal_data *td)
static int taal_get_id(struct taal_data *td, u8 *id1, u8 *id2, u8 *id3)
static int taal_set_addr_mode(struct taal_data *td, u8 rotate, bool mirror)
static int taal_set_update_window(struct taal_data *td,
u16 x, u16 y, u16 w, u16 h)
static void taal_queue_esd_work(struct omap_dss_device *dssdev)
static void taal_cancel_esd_work(struct omap_dss_device *dssdev)
static void taal_queue_ulps_work(struct omap_dss_device *dssdev)
static void taal_cancel_ulps_work(struct omap_dss_device *dssdev)
static int taal_enter_ulps(struct omap_dss_device *dssdev)
static int taal_exit_ulps(struct omap_dss_device *dssdev)
static int taal_wake_up(struct omap_dss_device *dssdev)
static int taal_bl_update_status(struct backlight_device *dev)
static int taal_bl_get_intensity(struct backlight_device *dev)
static const struct backlight_ops taal_bl_ops = ;
static void taal_get_timings(struct omap_dss_device *dssdev,
struct omap_video_timings *timings)
static void taal_get_resolution(struct omap_dss_device *dssdev,
u16 *xres, u16 *yres)
static ssize_t taal_num_errors_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t taal_hw_revision_show(struct device *dev,
struct device_attribute *attr, char *buf)
static const char *cabc_modes[] = ;
static ssize_t show_cabc_mode(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t store_cabc_mode(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_cabc_available_modes(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t taal_store_esd_interval(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t taal_show_esd_interval(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t taal_store_ulps(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t taal_show_ulps(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t taal_store_ulps_timeout(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t taal_show_ulps_timeout(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(num_dsi_errors, S_IRUGO, taal_num_errors_show, NULL);
static DEVICE_ATTR(hw_revision, S_IRUGO, taal_hw_revision_show, NULL);
static DEVICE_ATTR(cabc_mode, S_IRUGO | S_IWUSR,
show_cabc_mode, store_cabc_mode);
static DEVICE_ATTR(cabc_available_modes, S_IRUGO,
show_cabc_available_modes, NULL);
static DEVICE_ATTR(esd_interval, S_IRUGO | S_IWUSR,
taal_show_esd_interval, taal_store_esd_interval);
static DEVICE_ATTR(ulps, S_IRUGO | S_IWUSR,
taal_show_ulps, taal_store_ulps);
static DEVICE_ATTR(ulps_timeout, S_IRUGO | S_IWUSR,
taal_show_ulps_timeout, taal_store_ulps_timeout);
static struct attribute *taal_attrs[] = ;
static struct attribute_group taal_attr_group = ;
static void taal_hw_reset(struct omap_dss_device *dssdev)
static int taal_probe(struct omap_dss_device *dssdev)
static void __exit taal_remove(struct omap_dss_device *dssdev)
static int taal_power_on(struct omap_dss_device *dssdev)
static void taal_power_off(struct omap_dss_device *dssdev)
static int taal_panel_reset(struct omap_dss_device *dssdev)
static int taal_enable(struct omap_dss_device *dssdev)
static void taal_disable(struct omap_dss_device *dssdev)
static int taal_suspend(struct omap_dss_device *dssdev)
static int taal_resume(struct omap_dss_device *dssdev)
static void taal_framedone_cb(int err, void *data)
static irqreturn_t taal_te_isr(int irq, void *data)
static void taal_te_timeout_work_callback(struct work_struct *work)
static int taal_update(struct omap_dss_device *dssdev,
u16 x, u16 y, u16 w, u16 h)
static int taal_sync(struct omap_dss_device *dssdev)
static int _taal_enable_te(struct omap_dss_device *dssdev, bool enable)
static int taal_enable_te(struct omap_dss_device *dssdev, bool enable)
static int taal_get_te(struct omap_dss_device *dssdev)
static int taal_rotate(struct omap_dss_device *dssdev, u8 rotate)
static u8 taal_get_rotate(struct omap_dss_device *dssdev)
static int taal_mirror(struct omap_dss_device *dssdev, bool enable)
static bool taal_get_mirror(struct omap_dss_device *dssdev)
static int taal_run_test(struct omap_dss_device *dssdev, int test_num)
static int taal_memory_read(struct omap_dss_device *dssdev,
void *buf, size_t size,
u16 x, u16 y, u16 w, u16 h)
static void taal_ulps_work(struct work_struct *work)
static void taal_esd_work(struct work_struct *work)
static int taal_set_update_mode(struct omap_dss_device *dssdev,
enum omap_dss_update_mode mode)
static enum omap_dss_update_mode taal_get_update_mode(
struct omap_dss_device *dssdev)
static struct omap_dss_driver taal_driver = ;
static int __init taal_init(void)
static void __exit taal_exit(void)
module_init(taal_init);
module_exit(taal_exit);
MODULE_AUTHOR("Tomi Valkeinen <tomi.valkeinen@nokia.com>");
MODULE_DESCRIPTION("Taal Driver");
MODULE_LICENSE("GPL");
