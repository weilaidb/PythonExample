#define SHT21_TRIG_T_MEASUREMENT_HM  0xe3
#define SHT21_TRIG_RH_MEASUREMENT_HM 0xe5
struct sht21 ;
static inline int sht21_temp_ticks_to_millicelsius(int ticks)
static inline int sht21_rh_ticks_to_per_cent_mille(int ticks)
static inline int sht21_read_word_data(struct i2c_client *client, u8 reg)
static int sht21_update_measurements(struct i2c_client *client)
static ssize_t sht21_show_temperature(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t sht21_show_humidity(struct device *dev,
struct device_attribute *attr,
char *buf)
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO, sht21_show_temperature,
NULL, 0);
static SENSOR_DEVICE_ATTR(humidity1_input, S_IRUGO, sht21_show_humidity,
NULL, 0);
static struct attribute *sht21_attributes[] = ;
static const struct attribute_group sht21_attr_group = ;
static int __devinit sht21_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit sht21_remove(struct i2c_client *client)
static const struct i2c_device_id sht21_id[] = ;
MODULE_DEVICE_TABLE(i2c, sht21_id);
static struct i2c_driver sht21_driver = ;
static int __init sht21_init(void)
module_init(sht21_init);
static void __exit sht21_exit(void)
module_exit(sht21_exit);
MODULE_AUTHOR("Urs Fleisch <urs.fleisch@sensirion.com>");
MODULE_DESCRIPTION("Sensirion SHT21 humidity and temperature sensor driver");
MODULE_LICENSE("GPL");
