#define DEVID		0x00
#define THRESH_TAP	0x1D
#define OFSX		0x1E
#define OFSY		0x1F
#define OFSZ		0x20
#define DUR		0x21
#define LATENT		0x22
#define WINDOW		0x23
#define THRESH_ACT	0x24
#define THRESH_INACT	0x25
#define TIME_INACT	0x26
#define ACT_INACT_CTL	0x27
#define THRESH_FF	0x28
#define TIME_FF		0x29
#define TAP_AXES	0x2A
#define ACT_TAP_STATUS	0x2B
#define BW_RATE		0x2C
#define POWER_CTL	0x2D
#define INT_ENABLE	0x2E
#define INT_MAP		0x2F
#define INT_SOURCE	0x30
#define DATA_FORMAT	0x31
#define DATAX0		0x32
#define DATAX1		0x33
#define DATAY0		0x34
#define DATAY1		0x35
#define DATAZ0		0x36
#define DATAZ1		0x37
#define FIFO_CTL	0x38
#define FIFO_STATUS	0x39
#define TAP_SIGN	0x3A
#define ORIENT_CONF	0x3B
#define ORIENT		0x3C
#define ID_ADXL345	0xE5
#define ID_ADXL346	0xE6
#define DATA_READY	(1 << 7)
#define SINGLE_TAP	(1 << 6)
#define DOUBLE_TAP	(1 << 5)
#define ACTIVITY	(1 << 4)
#define INACTIVITY	(1 << 3)
#define FREE_FALL	(1 << 2)
#define WATERMARK	(1 << 1)
#define OVERRUN		(1 << 0)
#define ACT_ACDC	(1 << 7)
#define ACT_X_EN	(1 << 6)
#define ACT_Y_EN	(1 << 5)
#define ACT_Z_EN	(1 << 4)
#define INACT_ACDC	(1 << 3)
#define INACT_X_EN	(1 << 2)
#define INACT_Y_EN	(1 << 1)
#define INACT_Z_EN	(1 << 0)
#define SUPPRESS	(1 << 3)
#define TAP_X_EN	(1 << 2)
#define TAP_Y_EN	(1 << 1)
#define TAP_Z_EN	(1 << 0)
#define ACT_X_SRC	(1 << 6)
#define ACT_Y_SRC	(1 << 5)
#define ACT_Z_SRC	(1 << 4)
#define ASLEEP		(1 << 3)
#define TAP_X_SRC	(1 << 2)
#define TAP_Y_SRC	(1 << 1)
#define TAP_Z_SRC	(1 << 0)
#define LOW_POWER	(1 << 4)
#define RATE(x)		((x) & 0xF)
#define PCTL_LINK	(1 << 5)
#define PCTL_AUTO_SLEEP (1 << 4)
#define PCTL_MEASURE	(1 << 3)
#define PCTL_SLEEP	(1 << 2)
#define PCTL_WAKEUP(x)	((x) & 0x3)
#define SELF_TEST	(1 << 7)
#define SPI		(1 << 6)
#define INT_INVERT	(1 << 5)
#define FULL_RES	(1 << 3)
#define JUSTIFY		(1 << 2)
#define RANGE(x)	((x) & 0x3)
#define RANGE_PM_2g	0
#define RANGE_PM_4g	1
#define RANGE_PM_8g	2
#define RANGE_PM_16g	3
#define ADXL_FULLRES_MAX_VAL 4096
#define ADXL_FIXEDRES_MAX_VAL 512
#define FIFO_MODE(x)	(((x) & 0x3) << 6)
#define FIFO_BYPASS	0
#define FIFO_FIFO	1
#define FIFO_STREAM	2
#define FIFO_TRIGGER	3
#define TRIGGER		(1 << 5)
#define SAMPLES(x)	((x) & 0x1F)
#define FIFO_TRIG	(1 << 7)
#define ENTRIES(x)	((x) & 0x3F)
#define XSIGN		(1 << 6)
#define YSIGN		(1 << 5)
#define ZSIGN		(1 << 4)
#define XTAP		(1 << 3)
#define YTAP		(1 << 2)
#define ZTAP		(1 << 1)
#define ORIENT_DEADZONE(x)	(((x) & 0x7) << 4)
#define ORIENT_DIVISOR(x)	((x) & 0x7)
#define ADXL346_2D_VALID		(1 << 6)
#define ADXL346_2D_ORIENT(x)		(((x) & 0x3) >> 4)
#define ADXL346_3D_VALID		(1 << 3)
#define ADXL346_3D_ORIENT(x)		((x) & 0x7)
#define ADXL346_2D_PORTRAIT_POS		0
#define ADXL346_2D_PORTRAIT_NEG		1
#define ADXL346_2D_LANDSCAPE_POS	2
#define ADXL346_2D_LANDSCAPE_NEG	3
#define ADXL346_3D_FRONT		3
#define ADXL346_3D_BACK			4
#define ADXL346_3D_RIGHT		2
#define ADXL346_3D_LEFT			5
#define ADXL346_3D_TOP			1
#define ADXL346_3D_BOTTOM		6
#undef ADXL_DEBUG
#define ADXL_X_AXIS			0
#define ADXL_Y_AXIS			1
#define ADXL_Z_AXIS			2
#define AC_READ(ac, reg)	((ac)->bops->read((ac)->dev, reg))
#define AC_WRITE(ac, reg, val)	((ac)->bops->write((ac)->dev, reg, val))
struct axis_triple ;
struct adxl34x ;
static const struct adxl34x_platform_data adxl34x_default_init = ;
static void adxl34x_get_triple(struct adxl34x *ac, struct axis_triple *axis)
static void adxl34x_service_ev_fifo(struct adxl34x *ac)
static void adxl34x_report_key_single(struct input_dev *input, int key)
static void adxl34x_send_key_events(struct adxl34x *ac,
struct adxl34x_platform_data *pdata, int status, int press)
static void adxl34x_do_tap(struct adxl34x *ac,
struct adxl34x_platform_data *pdata, int status)
static irqreturn_t adxl34x_irq(int irq, void *handle)
static void __adxl34x_disable(struct adxl34x *ac)
static void __adxl34x_enable(struct adxl34x *ac)
void adxl34x_suspend(struct adxl34x *ac)
EXPORT_SYMBOL_GPL(adxl34x_suspend);
void adxl34x_resume(struct adxl34x *ac)
EXPORT_SYMBOL_GPL(adxl34x_resume);
static ssize_t adxl34x_disable_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t adxl34x_disable_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(disable, 0664, adxl34x_disable_show, adxl34x_disable_store);
static ssize_t adxl34x_calibrate_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t adxl34x_calibrate_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(calibrate, 0664,
adxl34x_calibrate_show, adxl34x_calibrate_store);
static ssize_t adxl34x_rate_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t adxl34x_rate_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(rate, 0664, adxl34x_rate_show, adxl34x_rate_store);
static ssize_t adxl34x_autosleep_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t adxl34x_autosleep_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(autosleep, 0664,
adxl34x_autosleep_show, adxl34x_autosleep_store);
static ssize_t adxl34x_position_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(position, S_IRUGO, adxl34x_position_show, NULL);
static ssize_t adxl34x_write_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(write, 0664, NULL, adxl34x_write_store);
static struct attribute *adxl34x_attributes[] = ;
static const struct attribute_group adxl34x_attr_group = ;
static int adxl34x_input_open(struct input_dev *input)
static void adxl34x_input_close(struct input_dev *input)
struct adxl34x *adxl34x_probe(struct device *dev, int irq,
bool fifo_delay_default,
const struct adxl34x_bus_ops *bops)
EXPORT_SYMBOL_GPL(adxl34x_probe);
int adxl34x_remove(struct adxl34x *ac)
EXPORT_SYMBOL_GPL(adxl34x_remove);
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("ADXL345/346 Three-Axis Digital Accelerometer Driver");
MODULE_LICENSE("GPL");
