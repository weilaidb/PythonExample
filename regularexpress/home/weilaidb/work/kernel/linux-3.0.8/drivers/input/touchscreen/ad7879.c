#define AD7879_REG_ZEROS		0
#define AD7879_REG_CTRL1		1
#define AD7879_REG_CTRL2		2
#define AD7879_REG_CTRL3		3
#define AD7879_REG_AUX1HIGH		4
#define AD7879_REG_AUX1LOW		5
#define AD7879_REG_TEMP1HIGH		6
#define AD7879_REG_TEMP1LOW		7
#define AD7879_REG_XPLUS		8
#define AD7879_REG_YPLUS		9
#define AD7879_REG_Z1			10
#define AD7879_REG_Z2			11
#define AD7879_REG_AUXVBAT		12
#define AD7879_REG_TEMP			13
#define AD7879_REG_REVID		14
#define AD7879_TMR(x)			((x & 0xFF) << 0)
#define AD7879_ACQ(x)			((x & 0x3) << 8)
#define AD7879_MODE_NOC			(0 << 10)
#define AD7879_MODE_SCC			(1 << 10)
#define AD7879_MODE_SEQ0		(2 << 10)
#define AD7879_MODE_SEQ1		(3 << 10)
#define AD7879_MODE_INT			(1 << 15)
#define AD7879_FCD(x)			((x & 0x3) << 0)
#define AD7879_RESET			(1 << 4)
#define AD7879_MFS(x)			((x & 0x3) << 5)
#define AD7879_AVG(x)			((x & 0x3) << 7)
#define	AD7879_SER			(1 << 9)
#define	AD7879_DFR			(0 << 9)
#define AD7879_GPIOPOL			(1 << 10)
#define AD7879_GPIODIR			(1 << 11)
#define AD7879_GPIO_DATA		(1 << 12)
#define AD7879_GPIO_EN			(1 << 13)
#define AD7879_PM(x)			((x & 0x3) << 14)
#define AD7879_PM_SHUTDOWN		(0)
#define AD7879_PM_DYN			(1)
#define AD7879_PM_FULLON		(2)
#define AD7879_TEMPMASK_BIT		(1<<15)
#define AD7879_AUXVBATMASK_BIT		(1<<14)
#define AD7879_INTMODE_BIT		(1<<13)
#define AD7879_GPIOALERTMASK_BIT	(1<<12)
#define AD7879_AUXLOW_BIT		(1<<11)
#define AD7879_AUXHIGH_BIT		(1<<10)
#define AD7879_TEMPLOW_BIT		(1<<9)
#define AD7879_TEMPHIGH_BIT		(1<<8)
#define AD7879_YPLUS_BIT		(1<<7)
#define AD7879_XPLUS_BIT		(1<<6)
#define AD7879_Z1_BIT			(1<<5)
#define AD7879_Z2_BIT			(1<<4)
#define AD7879_AUX_BIT			(1<<3)
#define AD7879_VBAT_BIT			(1<<2)
#define AD7879_TEMP_BIT			(1<<1)
enum ;
#define	MAX_12BIT			((1<<12)-1)
#define	TS_PEN_UP_TIMEOUT		msecs_to_jiffies(50)
struct ad7879 ;
static int ad7879_read(struct ad7879 *ts, u8 reg)
static int ad7879_multi_read(struct ad7879 *ts, u8 first_reg, u8 count, u16 *buf)
static int ad7879_write(struct ad7879 *ts, u8 reg, u16 val)
static int ad7879_report(struct ad7879 *ts)
static void ad7879_ts_event_release(struct ad7879 *ts)
static void ad7879_timer(unsigned long handle)
static irqreturn_t ad7879_irq(int irq, void *handle)
static void __ad7879_enable(struct ad7879 *ts)
static void __ad7879_disable(struct ad7879 *ts)
static int ad7879_open(struct input_dev *input)
static void ad7879_close(struct input_dev* input)
void ad7879_suspend(struct ad7879 *ts)
EXPORT_SYMBOL(ad7879_suspend);
void ad7879_resume(struct ad7879 *ts)
EXPORT_SYMBOL(ad7879_resume);
static void ad7879_toggle(struct ad7879 *ts, bool disable)
static ssize_t ad7879_disable_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ad7879_disable_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(disable, 0664, ad7879_disable_show, ad7879_disable_store);
static struct attribute *ad7879_attributes[] = ;
static const struct attribute_group ad7879_attr_group = ;
static int ad7879_gpio_direction_input(struct gpio_chip *chip,
unsigned gpio)
static int ad7879_gpio_direction_output(struct gpio_chip *chip,
unsigned gpio, int level)
static int ad7879_gpio_get_value(struct gpio_chip *chip, unsigned gpio)
static void ad7879_gpio_set_value(struct gpio_chip *chip,
unsigned gpio, int value)
static int ad7879_gpio_add(struct ad7879 *ts,
const struct ad7879_platform_data *pdata)
static void ad7879_gpio_remove(struct ad7879 *ts)
static inline int ad7879_gpio_add(struct ad7879 *ts,
const struct ad7879_platform_data *pdata)
static inline void ad7879_gpio_remove(struct ad7879 *ts)
struct ad7879 *ad7879_probe(struct device *dev, u8 devid, unsigned int irq,
const struct ad7879_bus_ops *bops)
EXPORT_SYMBOL(ad7879_probe);
void ad7879_remove(struct ad7879 *ts)
EXPORT_SYMBOL(ad7879_remove);
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("AD7879(-1) touchscreen Driver");
MODULE_LICENSE("GPL");
