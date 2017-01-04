#define PEM_OPERATION		0x01
#define PEM_CLEAR_INFO_FLAGS	0x03
#define PEM_VOUT_COMMAND	0x21
#define PEM_VOUT_OV_FAULT_LIMIT	0x40
#define PEM_READ_DATA_STRING	0xd0
#define PEM_READ_INPUT_STRING	0xdc
#define PEM_READ_FIRMWARE_REV	0xdd
#define PEM_READ_RUN_TIMER	0xde
#define PEM_FAN_HI_SPEED	0xdf
#define PEM_FAN_NORMAL_SPEED	0xe0
#define PEM_READ_FAN_SPEED	0xe1
#define PEM_DATA_STATUS_2	0
#define PEM_DATA_STATUS_1	1
#define PEM_DATA_ALARM_2	2
#define PEM_DATA_ALARM_1	3
#define PEM_DATA_VOUT_LSB	4
#define PEM_DATA_VOUT_MSB	5
#define PEM_DATA_CURRENT	6
#define PEM_DATA_TEMP		7
#define PEM_DATA_TEMP_MAX	10
#define PEM_DATA_TEMP_CRIT	11
#define PEM_INPUT_VOLTAGE	0
#define PEM_INPUT_POWER_LSB	1
#define PEM_INPUT_POWER_MSB	2
#define PEM_FAN_ADJUSTMENT	0
#define PEM_FAN_FAN1		1
#define PEM_FAN_FAN2		2
#define PEM_FAN_FAN3		3
#define STS1_OUTPUT_ON		(1 << 0)
#define STS1_LEDS_FLASHING	(1 << 1)
#define STS1_EXT_FAULT		(1 << 2)
#define STS1_SERVICE_LED_ON	(1 << 3)
#define STS1_SHUTDOWN_OCCURRED	(1 << 4)
#define STS1_INT_FAULT		(1 << 5)
#define STS1_ISOLATION_TEST_OK	(1 << 6)
#define STS2_ENABLE_PIN_HI	(1 << 0)
#define STS2_DATA_OUT_RANGE	(1 << 1)
#define STS2_RESTARTED_OK	(1 << 1)
#define STS2_ISOLATION_TEST_FAIL (1 << 3)
#define STS2_HIGH_POWER_CAP	(1 << 4)
#define STS2_INVALID_INSTR	(1 << 5)
#define STS2_WILL_RESTART	(1 << 6)
#define STS2_PEC_ERR		(1 << 7)
#define ALRM1_VIN_OUT_LIMIT	(1 << 0)
#define ALRM1_VOUT_OUT_LIMIT	(1 << 1)
#define ALRM1_OV_VOLT_SHUTDOWN	(1 << 2)
#define ALRM1_VIN_OVERCURRENT	(1 << 3)
#define ALRM1_TEMP_WARNING	(1 << 4)
#define ALRM1_TEMP_SHUTDOWN	(1 << 5)
#define ALRM1_PRIMARY_FAULT	(1 << 6)
#define ALRM1_POWER_LIMIT	(1 << 7)
#define ALRM2_5V_OUT_LIMIT	(1 << 1)
#define ALRM2_TEMP_FAULT	(1 << 2)
#define ALRM2_OV_LOW		(1 << 3)
#define ALRM2_DCDC_TEMP_HIGH	(1 << 4)
#define ALRM2_PRI_TEMP_HIGH	(1 << 5)
#define ALRM2_NO_PRIMARY	(1 << 6)
#define ALRM2_FAN_FAULT		(1 << 7)
#define FIRMWARE_REV_LEN	4
#define DATA_STRING_LEN		9
#define INPUT_STRING_LEN	5
#define FAN_SPEED_LEN		5
struct pem_data ;
static int pem_read_block(struct i2c_client *client, u8 command, u8 *data,
int data_len)
static struct pem_data *pem_update_device(struct device *dev)
static long pem_get_data(u8 *data, int len, int index)
static long pem_get_input(u8 *data, int len, int index)
static long pem_get_fan(u8 *data, int len, int index)
static ssize_t pem_show_bool(struct device *dev,
struct device_attribute *da, char *buf)
static ssize_t pem_show_data(struct device *dev, struct device_attribute *da,
char *buf)
static ssize_t pem_show_input(struct device *dev, struct device_attribute *da,
char *buf)
static ssize_t pem_show_fan(struct device *dev, struct device_attribute *da,
char *buf)
static SENSOR_DEVICE_ATTR(in1_input, S_IRUGO, pem_show_data, NULL,
PEM_DATA_VOUT_LSB);
static SENSOR_DEVICE_ATTR_2(in1_alarm, S_IRUGO, pem_show_bool, NULL,
PEM_DATA_ALARM_1, ALRM1_VOUT_OUT_LIMIT);
static SENSOR_DEVICE_ATTR_2(in1_crit_alarm, S_IRUGO, pem_show_bool, NULL,
PEM_DATA_ALARM_1, ALRM1_OV_VOLT_SHUTDOWN);
static SENSOR_DEVICE_ATTR(in2_input, S_IRUGO, pem_show_input, NULL,
PEM_INPUT_VOLTAGE);
static SENSOR_DEVICE_ATTR_2(in2_alarm, S_IRUGO, pem_show_bool, NULL,
PEM_DATA_ALARM_1,
ALRM1_VIN_OUT_LIMIT | ALRM1_PRIMARY_FAULT);
static SENSOR_DEVICE_ATTR(curr1_input, S_IRUGO, pem_show_data, NULL,
PEM_DATA_CURRENT);
static SENSOR_DEVICE_ATTR_2(curr1_alarm, S_IRUGO, pem_show_bool, NULL,
PEM_DATA_ALARM_1, ALRM1_VIN_OVERCURRENT);
static SENSOR_DEVICE_ATTR(power1_input, S_IRUGO, pem_show_input, NULL,
PEM_INPUT_POWER_LSB);
static SENSOR_DEVICE_ATTR_2(power1_alarm, S_IRUGO, pem_show_bool, NULL,
PEM_DATA_ALARM_1, ALRM1_POWER_LIMIT);
static SENSOR_DEVICE_ATTR(fan1_input, S_IRUGO, pem_show_fan, NULL,
PEM_FAN_FAN1);
static SENSOR_DEVICE_ATTR(fan2_input, S_IRUGO, pem_show_fan, NULL,
PEM_FAN_FAN2);
static SENSOR_DEVICE_ATTR(fan3_input, S_IRUGO, pem_show_fan, NULL,
PEM_FAN_FAN3);
static SENSOR_DEVICE_ATTR_2(fan1_alarm, S_IRUGO, pem_show_bool, NULL,
PEM_DATA_ALARM_2, ALRM2_FAN_FAULT);
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO, pem_show_data, NULL,
PEM_DATA_TEMP);
static SENSOR_DEVICE_ATTR(temp1_max, S_IRUGO, pem_show_data, NULL,
PEM_DATA_TEMP_MAX);
static SENSOR_DEVICE_ATTR(temp1_crit, S_IRUGO, pem_show_data, NULL,
PEM_DATA_TEMP_CRIT);
static SENSOR_DEVICE_ATTR_2(temp1_alarm, S_IRUGO, pem_show_bool, NULL,
PEM_DATA_ALARM_1, ALRM1_TEMP_WARNING);
static SENSOR_DEVICE_ATTR_2(temp1_crit_alarm, S_IRUGO, pem_show_bool, NULL,
PEM_DATA_ALARM_1, ALRM1_TEMP_SHUTDOWN);
static SENSOR_DEVICE_ATTR_2(temp1_fault, S_IRUGO, pem_show_bool, NULL,
PEM_DATA_ALARM_2, ALRM2_TEMP_FAULT);
static struct attribute *pem_attributes[] = ;
static const struct attribute_group pem_group = ;
static struct attribute *pem_input_attributes[] = ;
static const struct attribute_group pem_input_group = ;
static struct attribute *pem_fan_attributes[] = ;
static const struct attribute_group pem_fan_group = ;
static int pem_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int pem_remove(struct i2c_client *client)
static const struct i2c_device_id pem_id[] = ;
MODULE_DEVICE_TABLE(i2c, pem_id);
static struct i2c_driver pem_driver = ;
static int __init pem_init(void)
static void __exit pem_exit(void)
MODULE_AUTHOR("Guenter Roeck <guenter.roeck@ericsson.com>");
MODULE_DESCRIPTION("Lineage CPL PEM hardware monitoring driver");
MODULE_LICENSE("GPL");
module_init(pem_init);
module_exit(pem_exit);
