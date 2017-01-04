#define MIPID_CMD_READ_DISP_ID		0x04
#define MIPID_CMD_READ_RED		0x06
#define MIPID_CMD_READ_GREEN		0x07
#define MIPID_CMD_READ_BLUE		0x08
#define MIPID_CMD_READ_DISP_STATUS	0x09
#define MIPID_CMD_RDDSDR		0x0F
#define MIPID_CMD_SLEEP_IN		0x10
#define MIPID_CMD_SLEEP_OUT		0x11
#define MIPID_CMD_DISP_OFF		0x28
#define MIPID_CMD_DISP_ON		0x29
#define MIPID_CMD_WRITE_DISP_BRIGHTNESS	0x51
#define MIPID_CMD_READ_DISP_BRIGHTNESS	0x52
#define MIPID_CMD_WRITE_CTRL_DISP	0x53
#define CTRL_DISP_BRIGHTNESS_CTRL_ON	(1 << 5)
#define CTRL_DISP_AMBIENT_LIGHT_CTRL_ON	(1 << 4)
#define CTRL_DISP_BACKLIGHT_ON		(1 << 2)
#define CTRL_DISP_AUTO_BRIGHTNESS_ON	(1 << 1)
#define MIPID_CMD_READ_CTRL_DISP	0x54
#define MIPID_CMD_WRITE_CABC		0x55
#define MIPID_CMD_READ_CABC		0x56
#define MIPID_VER_LPH8923		3
#define MIPID_VER_LS041Y3		4
#define MIPID_VER_L4F00311		8
#define MIPID_VER_ACX565AKM		9
struct acx565akm_device ;
static struct acx565akm_device acx_dev;
static int acx565akm_bl_update_status(struct backlight_device *dev);
static void acx565akm_transfer(struct acx565akm_device *md, int cmd,
const u8 *wbuf, int wlen, u8 *rbuf, int rlen)
static inline void acx565akm_cmd(struct acx565akm_device *md, int cmd)
static inline void acx565akm_write(struct acx565akm_device *md,
int reg, const u8 *buf, int len)
static inline void acx565akm_read(struct acx565akm_device *md,
int reg, u8 *buf, int len)
static void hw_guard_start(struct acx565akm_device *md, int guard_msec)
static void hw_guard_wait(struct acx565akm_device *md)
static void set_sleep_mode(struct acx565akm_device *md, int on)
static void set_display_state(struct acx565akm_device *md, int enabled)
static int panel_enabled(struct acx565akm_device *md)
static int panel_detect(struct acx565akm_device *md)
static void enable_backlight_ctrl(struct acx565akm_device *md, int enable)
static void set_cabc_mode(struct acx565akm_device *md, unsigned mode)
static unsigned get_cabc_mode(struct acx565akm_device *md)
static unsigned get_hw_cabc_mode(struct acx565akm_device *md)
static void acx565akm_set_brightness(struct acx565akm_device *md, int level)
static int acx565akm_get_actual_brightness(struct acx565akm_device *md)
static int acx565akm_bl_update_status(struct backlight_device *dev)
static int acx565akm_bl_get_intensity(struct backlight_device *dev)
static const struct backlight_ops acx565akm_bl_ops = ;
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
static DEVICE_ATTR(cabc_mode, S_IRUGO | S_IWUSR,
show_cabc_mode, store_cabc_mode);
static DEVICE_ATTR(cabc_available_modes, S_IRUGO,
show_cabc_available_modes, NULL);
static struct attribute *bldev_attrs[] = ;
static struct attribute_group bldev_attr_group = ;
static int acx_get_recommended_bpp(struct omap_dss_device *dssdev)
static struct omap_video_timings acx_panel_timings = ;
static int acx_panel_probe(struct omap_dss_device *dssdev)
static void acx_panel_remove(struct omap_dss_device *dssdev)
static int acx_panel_power_on(struct omap_dss_device *dssdev)
static void acx_panel_power_off(struct omap_dss_device *dssdev)
static int acx_panel_enable(struct omap_dss_device *dssdev)
static void acx_panel_disable(struct omap_dss_device *dssdev)
static int acx_panel_suspend(struct omap_dss_device *dssdev)
static int acx_panel_resume(struct omap_dss_device *dssdev)
static void acx_panel_set_timings(struct omap_dss_device *dssdev,
struct omap_video_timings *timings)
static void acx_panel_get_timings(struct omap_dss_device *dssdev,
struct omap_video_timings *timings)
static int acx_panel_check_timings(struct omap_dss_device *dssdev,
struct omap_video_timings *timings)
static struct omap_dss_driver acx_panel_driver = ;
static int acx565akm_spi_probe(struct spi_device *spi)
static int acx565akm_spi_remove(struct spi_device *spi)
static struct spi_driver acx565akm_spi_driver = ;
static int __init acx565akm_init(void)
static void __exit acx565akm_exit(void)
module_init(acx565akm_init);
module_exit(acx565akm_exit);
MODULE_AUTHOR("Nokia Corporation");
MODULE_DESCRIPTION("acx565akm LCD Driver");
MODULE_LICENSE("GPL");
