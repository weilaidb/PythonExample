enum sca3000_variant ;
static const struct sca3000_chip_info sca3000_spi_chip_info_tbl[] = ;
int sca3000_write_reg(struct sca3000_state *st, u8 address, u8 val)
int sca3000_read_data_short(struct sca3000_state *st,
uint8_t reg_address_high,
int len)
static int sca3000_reg_lock_on(struct sca3000_state *st)
static int __sca3000_unlock_reg_lock(struct sca3000_state *st)
static int sca3000_write_ctrl_reg(struct sca3000_state *st,
uint8_t sel,
uint8_t val)
static int sca3000_read_ctrl_reg(struct sca3000_state *st,
u8 ctrl_reg)
static int sca3000_check_status(struct device *dev)
static ssize_t sca3000_show_rev(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t
sca3000_show_available_measurement_modes(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t
sca3000_show_measurement_mode(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t
sca3000_store_measurement_mode(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(measurement_mode_available, S_IRUGO,
sca3000_show_available_measurement_modes,
NULL, 0);
static IIO_DEVICE_ATTR(measurement_mode, S_IRUGO | S_IWUSR,
sca3000_show_measurement_mode,
sca3000_store_measurement_mode,
0);
static IIO_DEV_ATTR_REV(sca3000_show_rev);
#define SCA3000_INFO_MASK			\
(1 << IIO_CHAN_INFO_SCALE_SHARED)
#define SCA3000_EVENT_MASK					\
(IIO_EV_BIT(IIO_EV_TYPE_MAG, IIO_EV_DIR_RISING))
static struct iio_chan_spec sca3000_channels[] = ;
static u8 sca3000_addresses[3][3] = ;
static int sca3000_read_raw(struct iio_dev *indio_dev,
struct iio_chan_spec const *chan,
int *val,
int *val2,
long mask)
static ssize_t sca3000_read_av_freq(struct device *dev,
struct device_attribute *attr,
char *buf)
static inline int __sca3000_get_base_freq(struct sca3000_state *st,
const struct sca3000_chip_info *info,
int *base_freq)
static ssize_t sca3000_read_frequency(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t sca3000_set_frequency(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEV_ATTR_SAMP_FREQ_AVAIL(sca3000_read_av_freq);
static IIO_DEV_ATTR_SAMP_FREQ(S_IWUSR | S_IRUGO,
sca3000_read_frequency,
sca3000_set_frequency);
static ssize_t sca3000_read_temp(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEV_ATTR_TEMP_RAW(sca3000_read_temp);
static IIO_CONST_ATTR_TEMP_SCALE("0.555556");
static IIO_CONST_ATTR_TEMP_OFFSET("-214.6");
static int sca3000_read_thresh(struct iio_dev *indio_dev,
int e,
int *val)
static int sca3000_write_thresh(struct iio_dev *indio_dev,
int e,
int val)
static struct attribute *sca3000_attributes[] = ;
static struct attribute *sca3000_attributes_with_temp[] = ;
static const struct attribute_group sca3000_attribute_group = ;
static const struct attribute_group sca3000_attribute_group_with_temp = ;
static irqreturn_t sca3000_event_handler(int irq, void *private)
static int sca3000_read_event_config(struct iio_dev *indio_dev,
int e)
static ssize_t sca3000_query_free_fall_mode(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t sca3000_set_free_fall_mode(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static int sca3000_write_event_config(struct iio_dev *indio_dev,
int e,
int state)
static IIO_DEVICE_ATTR_NAMED(accel_xayaz_mag_falling_en,
accel_x&y&z_mag_falling_en,
S_IRUGO | S_IWUSR,
sca3000_query_free_fall_mode,
sca3000_set_free_fall_mode,
0);
static IIO_CONST_ATTR_NAMED(accel_xayaz_mag_falling_period,
accel_x&y&z_mag_falling_period,
"0.226");
static struct attribute *sca3000_event_attributes[] = ;
static struct attribute_group sca3000_event_attribute_group = ;
static int sca3000_clean_setup(struct sca3000_state *st)
static const struct iio_info sca3000_info = ;
static const struct iio_info sca3000_info_with_temp = ;
static int __devinit sca3000_probe(struct spi_device *spi)
static int sca3000_stop_all_interrupts(struct sca3000_state *st)
static int sca3000_remove(struct spi_device *spi)
static const struct spi_device_id sca3000_id[] = ;
static struct spi_driver sca3000_driver = ;
static __init int sca3000_init(void)
module_init(sca3000_init);
static __exit void sca3000_exit(void)
module_exit(sca3000_exit);
MODULE_AUTHOR("Jonathan Cameron <jic23@cam.ac.uk>");
MODULE_DESCRIPTION("VTI SCA3000 Series Accelerometers SPI driver");
MODULE_LICENSE("GPL v2");
