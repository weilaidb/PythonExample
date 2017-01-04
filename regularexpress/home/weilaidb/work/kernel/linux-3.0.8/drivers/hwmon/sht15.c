#define SHT15_MEASURE_TEMP		0x03
#define SHT15_MEASURE_RH		0x05
#define SHT15_WRITE_STATUS		0x06
#define SHT15_READ_STATUS		0x07
#define SHT15_SOFT_RESET		0x1E
#define SHT15_TSCKL			100
#define SHT15_TSCKH			100
#define SHT15_TSU			150
#define SHT15_TSRST			11
#define SHT15_STATUS_LOW_RESOLUTION	0x01
#define SHT15_STATUS_NO_OTP_RELOAD	0x02
#define SHT15_STATUS_HEATER		0x04
#define SHT15_STATUS_LOW_BATTERY	0x40
enum sht15_state ;
struct sht15_temppair ;
static const struct sht15_temppair temppoints[] = ;
static const u8 sht15_crc8_table[] = ;
struct sht15_data ;
static u8 sht15_reverse(u8 byte)
static u8 sht15_crc8(struct sht15_data *data,
const u8 *value,
int len)
static void sht15_connection_reset(struct sht15_data *data)
static inline void sht15_send_bit(struct sht15_data *data, int val)
static void sht15_transmission_start(struct sht15_data *data)
static void sht15_send_byte(struct sht15_data *data, u8 byte)
static int sht15_wait_for_response(struct sht15_data *data)
static int sht15_send_cmd(struct sht15_data *data, u8 cmd)
static int sht15_soft_reset(struct sht15_data *data)
static void sht15_ack(struct sht15_data *data)
static void sht15_end_transmission(struct sht15_data *data)
static u8 sht15_read_byte(struct sht15_data *data)
static int sht15_send_status(struct sht15_data *data, u8 status)
static int sht15_update_status(struct sht15_data *data)
static int sht15_measurement(struct sht15_data *data,
int command,
int timeout_msecs)
static int sht15_update_measurements(struct sht15_data *data)
static inline int sht15_calc_temp(struct sht15_data *data)
static inline int sht15_calc_humid(struct sht15_data *data)
static ssize_t sht15_show_status(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t sht15_store_heater(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t sht15_show_temp(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t sht15_show_humidity(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t show_name(struct device *dev,
struct device_attribute *attr,
char *buf)
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO,
sht15_show_temp, NULL, 0);
static SENSOR_DEVICE_ATTR(humidity1_input, S_IRUGO,
sht15_show_humidity, NULL, 0);
static SENSOR_DEVICE_ATTR(temp1_fault, S_IRUGO, sht15_show_status, NULL,
SHT15_STATUS_LOW_BATTERY);
static SENSOR_DEVICE_ATTR(humidity1_fault, S_IRUGO, sht15_show_status, NULL,
SHT15_STATUS_LOW_BATTERY);
static SENSOR_DEVICE_ATTR(heater_enable, S_IRUGO | S_IWUSR, sht15_show_status,
sht15_store_heater, SHT15_STATUS_HEATER);
static DEVICE_ATTR(name, S_IRUGO, show_name, NULL);
static struct attribute *sht15_attrs[] = ;
static const struct attribute_group sht15_attr_group = ;
static irqreturn_t sht15_interrupt_fired(int irq, void *d)
static void sht15_bh_read_data(struct work_struct *work_s)
static void sht15_update_voltage(struct work_struct *work_s)
static int sht15_invalidate_voltage(struct notifier_block *nb,
unsigned long event,
void *ignored)
static int __devinit sht15_probe(struct platform_device *pdev)
static int __devexit sht15_remove(struct platform_device *pdev)
static struct platform_driver __refdata sht_drivers[] = ;
static int __init sht15_init(void)
module_init(sht15_init);
static void __exit sht15_exit(void)
module_exit(sht15_exit);
MODULE_LICENSE("GPL");
