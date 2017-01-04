static ssize_t gfar_show_bd_stash(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t gfar_set_bd_stash(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(bd_stash, 0644, gfar_show_bd_stash, gfar_set_bd_stash);
static ssize_t gfar_show_rx_stash_size(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t gfar_set_rx_stash_size(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(rx_stash_size, 0644, gfar_show_rx_stash_size,
gfar_set_rx_stash_size);
static ssize_t gfar_show_rx_stash_index(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t gfar_set_rx_stash_index(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(rx_stash_index, 0644, gfar_show_rx_stash_index,
gfar_set_rx_stash_index);
static ssize_t gfar_show_fifo_threshold(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t gfar_set_fifo_threshold(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(fifo_threshold, 0644, gfar_show_fifo_threshold,
gfar_set_fifo_threshold);
static ssize_t gfar_show_fifo_starve(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t gfar_set_fifo_starve(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(fifo_starve, 0644, gfar_show_fifo_starve,
gfar_set_fifo_starve);
static ssize_t gfar_show_fifo_starve_off(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t gfar_set_fifo_starve_off(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(fifo_starve_off, 0644, gfar_show_fifo_starve_off,
gfar_set_fifo_starve_off);
void gfar_init_sysfs(struct net_device *dev)
