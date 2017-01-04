#define ADC_FRAC_BITS		(14)
#define FRAC10K(f)		(((f) * (1L << (ADC_FRAC_BITS))) / (10000))
#define CALIB_FRAC_BITS		(10)
#define CALIB_FRAC_HALF		(1 << (CALIB_FRAC_BITS - 1))
#define CALIB_FRAC(n, b)	(((n) << CALIB_FRAC_BITS) / (b))
#define CALIB_BASE_SYSFS	(1000)
#define TSL2563_CMD		(0x80)
#define TSL2563_CLEARINT	(0x40)
#define TSL2563_REG_CTRL	(0x00)
#define TSL2563_REG_TIMING	(0x01)
#define TSL2563_REG_LOWLOW	(0x02)
#define TSL2563_REG_LOWHIGH	(0x03)
#define TSL2563_REG_HIGHLOW	(0x04)
#define TSL2563_REG_HIGHHIGH	(0x05)
#define TSL2563_REG_INT		(0x06)
#define TSL2563_REG_ID		(0x0a)
#define TSL2563_REG_DATA0LOW	(0x0c)
#define TSL2563_REG_DATA0HIGH	(0x0d)
#define TSL2563_REG_DATA1LOW	(0x0e)
#define TSL2563_REG_DATA1HIGH	(0x0f)
#define TSL2563_CMD_POWER_ON	(0x03)
#define TSL2563_CMD_POWER_OFF	(0x00)
#define TSL2563_CTRL_POWER_MASK	(0x03)
#define TSL2563_TIMING_13MS	(0x00)
#define TSL2563_TIMING_100MS	(0x01)
#define TSL2563_TIMING_400MS	(0x02)
#define TSL2563_TIMING_MASK	(0x03)
#define TSL2563_TIMING_GAIN16	(0x10)
#define TSL2563_TIMING_GAIN1	(0x00)
#define TSL2563_INT_DISBLED	(0x00)
#define TSL2563_INT_LEVEL	(0x10)
#define TSL2563_INT_PERSIST(n)	((n) & 0x0F)
struct tsl2563_gainlevel_coeff ;
static const struct tsl2563_gainlevel_coeff tsl2563_gainlevel_table[] = ;
struct tsl2563_chip ;
static int tsl2563_write(struct i2c_client *client, u8 reg, u8 value)
static int tsl2563_read(struct i2c_client *client, u8 reg, void *buf, int len)
static int tsl2563_set_power(struct tsl2563_chip *chip, int on)
static int tsl2563_get_power(struct tsl2563_chip *chip)
static int tsl2563_configure(struct tsl2563_chip *chip)
static void tsl2563_poweroff_work(struct work_struct *work)
static int tsl2563_detect(struct tsl2563_chip *chip)
static int tsl2563_read_id(struct tsl2563_chip *chip, u8 *id)
static int adc_shiftbits(u8 timing)
static u32 normalize_adc(u16 adc, u8 timing)
static void tsl2563_wait_adc(struct tsl2563_chip *chip)
static int tsl2563_adjust_gainlevel(struct tsl2563_chip *chip, u16 adc)
static int tsl2563_get_adc(struct tsl2563_chip *chip)
static inline int calib_to_sysfs(u32 calib)
static inline u32 calib_from_sysfs(int value)
struct tsl2563_lux_coeff ;
static const struct tsl2563_lux_coeff lux_table[] = ;
static unsigned int adc_to_lux(u32 adc0, u32 adc1)
static u32 calib_adc(u32 adc, u32 calib)
static int tsl2563_write_raw(struct iio_dev *indio_dev,
struct iio_chan_spec const *chan,
int val,
int val2,
long mask)
static int tsl2563_read_raw(struct iio_dev *indio_dev,
struct iio_chan_spec const *chan,
int *val,
int *val2,
long m)
static const struct iio_chan_spec tsl2563_channels[] = ;
static int tsl2563_read_thresh(struct iio_dev *indio_dev,
int event_code,
int *val)
static ssize_t tsl2563_write_thresh(struct iio_dev *indio_dev,
int event_code,
int val)
static irqreturn_t tsl2563_event_handler(int irq, void *private)
static int tsl2563_write_interrupt_config(struct iio_dev *indio_dev,
int event_code,
int state)
static int tsl2563_read_interrupt_config(struct iio_dev *indio_dev,
int event_code)
static struct i2c_driver tsl2563_i2c_driver;
static const struct iio_info tsl2563_info_no_irq = ;
static const struct iio_info tsl2563_info = ;
static int __devinit tsl2563_probe(struct i2c_client *client,
const struct i2c_device_id *device_id)
static int tsl2563_remove(struct i2c_client *client)
static int tsl2563_suspend(struct i2c_client *client, pm_message_t state)
static int tsl2563_resume(struct i2c_client *client)
static const struct i2c_device_id tsl2563_id[] = ;
MODULE_DEVICE_TABLE(i2c, tsl2563_id);
static struct i2c_driver tsl2563_i2c_driver = ;
static int __init tsl2563_init(void)
static void __exit tsl2563_exit(void)
MODULE_AUTHOR("Nokia Corporation");
MODULE_DESCRIPTION("tsl2563 light sensor driver");
MODULE_LICENSE("GPL");
module_init(tsl2563_init);
module_exit(tsl2563_exit);
