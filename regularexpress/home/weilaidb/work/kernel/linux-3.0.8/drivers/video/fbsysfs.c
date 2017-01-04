#define FB_SYSFS_FLAG_ATTR 1
struct fb_info *framebuffer_alloc(size_t size, struct device *dev)
EXPORT_SYMBOL(framebuffer_alloc);
void framebuffer_release(struct fb_info *info)
EXPORT_SYMBOL(framebuffer_release);
static int activate(struct fb_info *fb_info, struct fb_var_screeninfo *var)
static int mode_string(char *buf, unsigned int offset,
const struct fb_videomode *mode)
static ssize_t store_mode(struct device *device, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_mode(struct device *device, struct device_attribute *attr,
char *buf)
static ssize_t store_modes(struct device *device,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_modes(struct device *device, struct device_attribute *attr,
char *buf)
static ssize_t store_bpp(struct device *device, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_bpp(struct device *device, struct device_attribute *attr,
char *buf)
static ssize_t store_rotate(struct device *device,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_rotate(struct device *device,
struct device_attribute *attr, char *buf)
static ssize_t store_virtual(struct device *device,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_virtual(struct device *device,
struct device_attribute *attr, char *buf)
static ssize_t show_stride(struct device *device,
struct device_attribute *attr, char *buf)
static ssize_t store_blank(struct device *device,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_blank(struct device *device,
struct device_attribute *attr, char *buf)
static ssize_t store_console(struct device *device,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_console(struct device *device,
struct device_attribute *attr, char *buf)
static ssize_t store_cursor(struct device *device,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_cursor(struct device *device,
struct device_attribute *attr, char *buf)
static ssize_t store_pan(struct device *device,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_pan(struct device *device,
struct device_attribute *attr, char *buf)
static ssize_t show_name(struct device *device,
struct device_attribute *attr, char *buf)
static ssize_t store_fbstate(struct device *device,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_fbstate(struct device *device,
struct device_attribute *attr, char *buf)
static ssize_t store_bl_curve(struct device *device,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_bl_curve(struct device *device,
struct device_attribute *attr, char *buf)
static struct device_attribute device_attrs[] = ;
int fb_init_device(struct fb_info *fb_info)
void fb_cleanup_device(struct fb_info *fb_info)
void fb_bl_default_curve(struct fb_info *fb_info, u8 off, u8 min, u8 max)
EXPORT_SYMBOL_GPL(fb_bl_default_curve);
