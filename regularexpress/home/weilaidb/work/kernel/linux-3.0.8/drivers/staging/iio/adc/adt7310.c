#define ADT7310_STATUS			0
#define ADT7310_CONFIG			1
#define ADT7310_TEMPERATURE		2
#define ADT7310_ID			3
#define ADT7310_T_CRIT			4
#define ADT7310_T_HYST			5
#define ADT7310_T_ALARM_HIGH		6
#define ADT7310_T_ALARM_LOW		7
#define ADT7310_STAT_T_LOW		0x10
#define ADT7310_STAT_T_HIGH		0x20
#define ADT7310_STAT_T_CRIT		0x40
#define ADT7310_STAT_NOT_RDY		0x80
#define ADT7310_FAULT_QUEUE_MASK	0x3
#define ADT7310_CT_POLARITY		0x4
#define ADT7310_INT_POLARITY		0x8
#define ADT7310_EVENT_MODE		0x10
#define ADT7310_MODE_MASK		0x60
#define ADT7310_ONESHOT			0x20
#define ADT7310_SPS			0x40
#define ADT7310_PD			0x60
#define ADT7310_RESOLUTION		0x80
#define ADT7310_T16_VALUE_SIGN			0x8000
#define ADT7310_T16_VALUE_FLOAT_OFFSET		7
#define ADT7310_T16_VALUE_FLOAT_MASK		0x7F
#define ADT7310_T13_VALUE_SIGN			0x1000
#define ADT7310_T13_VALUE_OFFSET		3
#define ADT7310_T13_VALUE_FLOAT_OFFSET		4
#define ADT7310_T13_VALUE_FLOAT_MASK		0xF
#define ADT7310_T_HYST_MASK			0xF
#define ADT7310_DEVICE_ID_MASK			0x7
#define ADT7310_MANUFACTORY_ID_MASK		0xF8
#define ADT7310_MANUFACTORY_ID_OFFSET		3
#define ADT7310_CMD_REG_MASK			0x28
#define ADT7310_CMD_REG_OFFSET			3
#define ADT7310_CMD_READ			0x40
#define ADT7310_CMD_CON_READ			0x4
#define ADT7310_IRQS				2
struct adt7310_chip_info ;
static int adt7310_spi_read_word(struct adt7310_chip_info *chip, u8 reg, u16 *data)
static int adt7310_spi_write_word(struct adt7310_chip_info *chip, u8 reg, u16 data)
static int adt7310_spi_read_byte(struct adt7310_chip_info *chip, u8 reg, u8 *data)
static int adt7310_spi_write_byte(struct adt7310_chip_info *chip, u8 reg, u8 data)
static ssize_t adt7310_show_mode(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt7310_store_mode(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(mode, S_IRUGO | S_IWUSR,
adt7310_show_mode,
adt7310_store_mode,
0);
static ssize_t adt7310_show_available_modes(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(available_modes, S_IRUGO, adt7310_show_available_modes, NULL, 0);
static ssize_t adt7310_show_resolution(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt7310_store_resolution(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(resolution, S_IRUGO | S_IWUSR,
adt7310_show_resolution,
adt7310_store_resolution,
0);
static ssize_t adt7310_show_id(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(id, S_IRUGO | S_IWUSR,
adt7310_show_id,
NULL,
0);
static ssize_t adt7310_convert_temperature(struct adt7310_chip_info *chip,
u16 data, char *buf)
static ssize_t adt7310_show_value(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(value, S_IRUGO, adt7310_show_value, NULL, 0);
static struct attribute *adt7310_attributes[] = ;
static const struct attribute_group adt7310_attribute_group = ;
static irqreturn_t adt7310_event_handler(int irq, void *private)
static ssize_t adt7310_show_event_mode(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt7310_set_event_mode(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static ssize_t adt7310_show_available_event_modes(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt7310_show_fault_queue(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adt7310_set_fault_queue(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static inline ssize_t adt7310_show_t_bound(struct device *dev,
struct device_attribute *attr,
u8 bound_reg,
char *buf)
static inline ssize_t adt7310_set_t_bound(struct device *dev,
struct device_attribute *attr,
u8 bound_reg,
const char *buf,
size_t len)
static ssize_t adt7310_show_t_alarm_high(struct device *dev,
struct device_attribute *attr,
char *buf)
static inline ssize_t adt7310_set_t_alarm_high(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static ssize_t adt7310_show_t_alarm_low(struct device *dev,
struct device_attribute *attr,
char *buf)
static inline ssize_t adt7310_set_t_alarm_low(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static ssize_t adt7310_show_t_crit(struct device *dev,
struct device_attribute *attr,
char *buf)
static inline ssize_t adt7310_set_t_crit(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static ssize_t adt7310_show_t_hyst(struct device *dev,
struct device_attribute *attr,
char *buf)
static inline ssize_t adt7310_set_t_hyst(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(event_mode,
S_IRUGO | S_IWUSR,
adt7310_show_event_mode, adt7310_set_event_mode, 0);
static IIO_DEVICE_ATTR(available_event_modes,
S_IRUGO | S_IWUSR,
adt7310_show_available_event_modes, NULL, 0);
static IIO_DEVICE_ATTR(fault_queue,
S_IRUGO | S_IWUSR,
adt7310_show_fault_queue, adt7310_set_fault_queue, 0);
static IIO_DEVICE_ATTR(t_alarm_high,
S_IRUGO | S_IWUSR,
adt7310_show_t_alarm_high, adt7310_set_t_alarm_high, 0);
static IIO_DEVICE_ATTR(t_alarm_low,
S_IRUGO | S_IWUSR,
adt7310_show_t_alarm_low, adt7310_set_t_alarm_low, 0);
static IIO_DEVICE_ATTR(t_crit,
S_IRUGO | S_IWUSR,
adt7310_show_t_crit, adt7310_set_t_crit, 0);
static IIO_DEVICE_ATTR(t_hyst,
S_IRUGO | S_IWUSR,
adt7310_show_t_hyst, adt7310_set_t_hyst, 0);
static struct attribute *adt7310_event_int_attributes[] = ;
static struct attribute *adt7310_event_ct_attributes[] = ;
static struct attribute_group adt7310_event_attribute_group[ADT7310_IRQS] = ;
static const struct iio_info adt7310_info = ;
static int __devinit adt7310_probe(struct spi_device *spi_dev)
static int __devexit adt7310_remove(struct spi_device *spi_dev)
static const struct spi_device_id adt7310_id[] = ;
MODULE_DEVICE_TABLE(spi, adt7310_id);
static struct spi_driver adt7310_driver = ;
static __init int adt7310_init(void)
static __exit void adt7310_exit(void)
MODULE_AUTHOR("Sonic Zhang <sonic.zhang@analog.com>");
MODULE_DESCRIPTION("Analog Devices ADT7310 digital"
" temperature sensor driver");
MODULE_LICENSE("GPL v2");
module_init(adt7310_init);
module_exit(adt7310_exit);
