#define	TS_PEN_UP_TIMEOUT	msecs_to_jiffies(100)
#define MAX_SPI_FREQ_HZ			20000000
#define	MAX_12BIT			((1<<12)-1)
#define AD7877_REG_ZEROS			0
#define AD7877_REG_CTRL1			1
#define AD7877_REG_CTRL2			2
#define AD7877_REG_ALERT			3
#define AD7877_REG_AUX1HIGH			4
#define AD7877_REG_AUX1LOW			5
#define AD7877_REG_BAT1HIGH			6
#define AD7877_REG_BAT1LOW			7
#define AD7877_REG_BAT2HIGH			8
#define AD7877_REG_BAT2LOW			9
#define AD7877_REG_TEMP1HIGH			10
#define AD7877_REG_TEMP1LOW			11
#define AD7877_REG_SEQ0				12
#define AD7877_REG_SEQ1				13
#define AD7877_REG_DAC				14
#define AD7877_REG_NONE1			15
#define AD7877_REG_EXTWRITE			15
#define AD7877_REG_XPLUS			16
#define AD7877_REG_YPLUS			17
#define AD7877_REG_Z2				18
#define AD7877_REG_aux1				19
#define AD7877_REG_aux2				20
#define AD7877_REG_aux3				21
#define AD7877_REG_bat1				22
#define AD7877_REG_bat2				23
#define AD7877_REG_temp1			24
#define AD7877_REG_temp2			25
#define AD7877_REG_Z1				26
#define AD7877_REG_GPIOCTRL1			27
#define AD7877_REG_GPIOCTRL2			28
#define AD7877_REG_GPIODATA			29
#define AD7877_REG_NONE2			30
#define AD7877_REG_NONE3			31
#define AD7877_SEQ_YPLUS_BIT			(1<<11)
#define AD7877_SEQ_XPLUS_BIT			(1<<10)
#define AD7877_SEQ_Z2_BIT			(1<<9)
#define AD7877_SEQ_AUX1_BIT			(1<<8)
#define AD7877_SEQ_AUX2_BIT			(1<<7)
#define AD7877_SEQ_AUX3_BIT			(1<<6)
#define AD7877_SEQ_BAT1_BIT			(1<<5)
#define AD7877_SEQ_BAT2_BIT			(1<<4)
#define AD7877_SEQ_TEMP1_BIT			(1<<3)
#define AD7877_SEQ_TEMP2_BIT			(1<<2)
#define AD7877_SEQ_Z1_BIT			(1<<1)
enum ;
#define AD7877_DAC_CONF			0x1
#define AD7877_EXTW_GPIO_3_CONF		0x1C4
#define AD7877_EXTW_GPIO_DATA		0x200
#define AD7877_TMR(x)			((x & 0x3) << 0)
#define AD7877_REF(x)			((x & 0x1) << 2)
#define AD7877_POL(x)			((x & 0x1) << 3)
#define AD7877_FCD(x)			((x & 0x3) << 4)
#define AD7877_PM(x)			((x & 0x3) << 6)
#define AD7877_ACQ(x)			((x & 0x3) << 8)
#define AD7877_AVG(x)			((x & 0x3) << 10)
#define	AD7877_SER			(1 << 11)
#define	AD7877_DFR			(0 << 11)
#define AD7877_MODE_NOC  (0)
#define AD7877_MODE_SCC  (1)
#define AD7877_MODE_SEQ0 (2)
#define AD7877_MODE_SEQ1 (3)
#define AD7877_CHANADD(x)		((x&0xF)<<7)
#define AD7877_READADD(x)		((x)<<2)
#define AD7877_WRITEADD(x)		((x)<<12)
#define AD7877_READ_CHAN(x) (AD7877_WRITEADD(AD7877_REG_CTRL1) | AD7877_SER | \
AD7877_MODE_SCC | AD7877_CHANADD(AD7877_REG_ ## x) | \
AD7877_READADD(AD7877_REG_ ## x))
#define AD7877_MM_SEQUENCE (AD7877_SEQ_YPLUS_BIT | AD7877_SEQ_XPLUS_BIT | \
AD7877_SEQ_Z2_BIT | AD7877_SEQ_Z1_BIT)
struct ser_req ;
struct ad7877 ;
static bool gpio3;
module_param(gpio3, bool, 0);
MODULE_PARM_DESC(gpio3, "If gpio3 is set to 1 AUX3 acts as GPIO3");
static int ad7877_read(struct spi_device *spi, u16 reg)
static int ad7877_write(struct spi_device *spi, u16 reg, u16 val)
static int ad7877_read_adc(struct spi_device *spi, unsigned command)
static int ad7877_process_data(struct ad7877 *ts)
static inline void ad7877_ts_event_release(struct ad7877 *ts)
static void ad7877_timer(unsigned long handle)
static irqreturn_t ad7877_irq(int irq, void *handle)
static void ad7877_disable(struct ad7877 *ts)
static void ad7877_enable(struct ad7877 *ts)
#define SHOW(name) static ssize_t \
name ## _show(struct device *dev, struct device_attribute *attr, char *buf) \
\
static DEVICE_ATTR(name, S_IRUGO, name ## _show, NULL);
SHOW(aux1)
SHOW(aux2)
SHOW(aux3)
SHOW(bat1)
SHOW(bat2)
SHOW(temp1)
SHOW(temp2)
static ssize_t ad7877_disable_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ad7877_disable_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(disable, 0664, ad7877_disable_show, ad7877_disable_store);
static ssize_t ad7877_dac_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ad7877_dac_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(dac, 0664, ad7877_dac_show, ad7877_dac_store);
static ssize_t ad7877_gpio3_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ad7877_gpio3_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(gpio3, 0664, ad7877_gpio3_show, ad7877_gpio3_store);
static ssize_t ad7877_gpio4_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ad7877_gpio4_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(gpio4, 0664, ad7877_gpio4_show, ad7877_gpio4_store);
static struct attribute *ad7877_attributes[] = ;
static mode_t ad7877_attr_is_visible(struct kobject *kobj,
struct attribute *attr, int n)
static const struct attribute_group ad7877_attr_group = ;
static void ad7877_setup_ts_def_msg(struct spi_device *spi, struct ad7877 *ts)
static int __devinit ad7877_probe(struct spi_device *spi)
static int __devexit ad7877_remove(struct spi_device *spi)
static int ad7877_suspend(struct device *dev)
static int ad7877_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(ad7877_pm, ad7877_suspend, ad7877_resume);
static struct spi_driver ad7877_driver = ;
static int __init ad7877_init(void)
module_init(ad7877_init);
static void __exit ad7877_exit(void)
module_exit(ad7877_exit);
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("AD7877 touchscreen Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("spi:ad7877");
