static ssize_t show_rotate_type(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_rotate_type(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_mirror(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_mirror(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_overlays(struct device *dev,
struct device_attribute *attr, char *buf)
static struct omapfb_info *get_overlay_fb(struct omapfb2_device *fbdev,
struct omap_overlay *ovl)
static ssize_t store_overlays(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_overlays_rotate(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_overlays_rotate(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t show_size(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_size(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_phys(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_virt(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute omapfb_attrs[] = ;
int omapfb_create_sysfs(struct omapfb2_device *fbdev)
void omapfb_remove_sysfs(struct omapfb2_device *fbdev)
