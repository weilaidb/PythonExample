#define TS_POLL_DELAY	1
#define TS_POLL_PERIOD	5
#define	SAMPLE_BITS	(8 + 16 + 2)
struct ts_event ;
struct ads7846_packet ;
struct ads7846 ;
#if	0
#define	CS_CHANGE(xfer)	((xfer).cs_change = 1)
#define	CS_CHANGE(xfer)	((xfer).cs_change = 0)
#define	ADS_START		(1 << 7)
#define	ADS_A2A1A0_d_y		(1 << 4)
#define	ADS_A2A1A0_d_z1		(3 << 4)
#define	ADS_A2A1A0_d_z2		(4 << 4)
#define	ADS_A2A1A0_d_x		(5 << 4)
#define	ADS_A2A1A0_temp0	(0 << 4)
#define	ADS_A2A1A0_vbatt	(2 << 4)
#define	ADS_A2A1A0_vaux		(6 << 4)
#define	ADS_A2A1A0_temp1	(7 << 4)
#define	ADS_8_BIT		(1 << 3)
#define	ADS_12_BIT		(0 << 3)
#define	ADS_SER			(1 << 2)
#define	ADS_DFR			(0 << 2)
#define	ADS_PD10_PDOWN		(0 << 0)
#define	ADS_PD10_ADC_ON		(1 << 0)
#define	ADS_PD10_REF_ON		(2 << 0)
#define	ADS_PD10_ALL_ON		(3 << 0)
#define	MAX_12BIT	((1<<12)-1)
#define	READ_12BIT_DFR(x, adc, vref) (ADS_START | ADS_A2A1A0_d_ ## x \
| ADS_12_BIT | ADS_DFR | \
(adc ? ADS_PD10_ADC_ON : 0) | (vref ? ADS_PD10_REF_ON : 0))
#define	READ_Y(vref)	(READ_12BIT_DFR(y,  1, vref))
#define	READ_Z1(vref)	(READ_12BIT_DFR(z1, 1, vref))
#define	READ_Z2(vref)	(READ_12BIT_DFR(z2, 1, vref))
#define	READ_X(vref)	(READ_12BIT_DFR(x,  1, vref))
#define	PWRDOWN		(READ_12BIT_DFR(y,  0, 0))
#define	READ_12BIT_SER(x) (ADS_START | ADS_A2A1A0_ ## x \
| ADS_12_BIT | ADS_SER)
#define	REF_ON	(READ_12BIT_DFR(x, 1, 1))
#define	REF_OFF	(READ_12BIT_DFR(y, 0, 0))
static void ads7846_stop(struct ads7846 *ts)
static void ads7846_restart(struct ads7846 *ts)
static void __ads7846_disable(struct ads7846 *ts)
static void __ads7846_enable(struct ads7846 *ts)
static void ads7846_disable(struct ads7846 *ts)
static void ads7846_enable(struct ads7846 *ts)
struct ser_req ;
struct ads7845_ser_req ;
static int ads7846_read12_ser(struct device *dev, unsigned command)
static int ads7845_read12_ser(struct device *dev, unsigned command)
#if defined(CONFIG_HWMON) || defined(CONFIG_HWMON_MODULE)
#define SHOW(name, var, adjust) static ssize_t \
name ## _show(struct device *dev, struct device_attribute *attr, char *buf) \
\
static DEVICE_ATTR(name, S_IRUGO, name ## _show, NULL);
static inline unsigned null_adjust(struct ads7846 *ts, ssize_t v)
SHOW(temp0, temp0, null_adjust)
SHOW(temp1, temp1, null_adjust)
static inline unsigned vaux_adjust(struct ads7846 *ts, ssize_t v)
static inline unsigned vbatt_adjust(struct ads7846 *ts, ssize_t v)
SHOW(in0_input, vaux, vaux_adjust)
SHOW(in1_input, vbatt, vbatt_adjust)
static struct attribute *ads7846_attributes[] = ;
static struct attribute_group ads7846_attr_group = ;
static struct attribute *ads7843_attributes[] = ;
static struct attribute_group ads7843_attr_group = ;
static struct attribute *ads7845_attributes[] = ;
static struct attribute_group ads7845_attr_group = ;
static int ads784x_hwmon_register(struct spi_device *spi, struct ads7846 *ts)
static void ads784x_hwmon_unregister(struct spi_device *spi,
struct ads7846 *ts)
static inline int ads784x_hwmon_register(struct spi_device *spi,
struct ads7846 *ts)
static inline void ads784x_hwmon_unregister(struct spi_device *spi,
struct ads7846 *ts)
static ssize_t ads7846_pen_down_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(pen_down, S_IRUGO, ads7846_pen_down_show, NULL);
static ssize_t ads7846_disable_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ads7846_disable_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(disable, 0664, ads7846_disable_show, ads7846_disable_store);
static struct attribute *ads784x_attributes[] = ;
static struct attribute_group ads784x_attr_group = ;
static int get_pendown_state(struct ads7846 *ts)
static void null_wait_for_sync(void)
static int ads7846_debounce_filter(void *ads, int data_idx, int *val)
static int ads7846_no_filter(void *ads, int data_idx, int *val)
static int ads7846_get_value(struct ads7846 *ts, struct spi_message *m)
static void ads7846_update_value(struct spi_message *m, int val)
static void ads7846_read_state(struct ads7846 *ts)
static void ads7846_report_state(struct ads7846 *ts)
static irqreturn_t ads7846_hard_irq(int irq, void *handle)
static irqreturn_t ads7846_irq(int irq, void *handle)
static int ads7846_suspend(struct device *dev)
static int ads7846_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(ads7846_pm, ads7846_suspend, ads7846_resume);
static int __devinit ads7846_setup_pendown(struct spi_device *spi, struct ads7846 *ts)
static void __devinit ads7846_setup_spi_msg(struct ads7846 *ts,
const struct ads7846_platform_data *pdata)
static int __devinit ads7846_probe(struct spi_device *spi)
static int __devexit ads7846_remove(struct spi_device *spi)
static struct spi_driver ads7846_driver = ;
static int __init ads7846_init(void)
module_init(ads7846_init);
static void __exit ads7846_exit(void)
module_exit(ads7846_exit);
MODULE_DESCRIPTION("ADS7846 TouchScreen Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("spi:ads7846");
