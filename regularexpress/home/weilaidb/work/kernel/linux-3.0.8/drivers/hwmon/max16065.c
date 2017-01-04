enum chips ;
#define MAX16065_ADC(x)		((x) * 2)
#define MAX16065_CURR_SENSE	0x18
#define MAX16065_CSP_ADC	0x19
#define MAX16065_FAULT(x)	(0x1b + (x))
#define MAX16065_SCALE(x)	(0x43 + (x))
#define MAX16065_CURR_CONTROL	0x47
#define MAX16065_LIMIT(l, x)	(0x48 + (l) + (x) * 3)
#define MAX16065_SW_ENABLE	0x73
#define MAX16065_WARNING_OV	(1 << 3)
#define MAX16065_CURR_ENABLE	(1 << 0)
#define MAX16065_NUM_LIMIT	3
#define MAX16065_NUM_ADC	12
static const int max16065_num_adc[] = ;
static const bool max16065_have_secondary[] = ;
static const bool max16065_have_current[] = ;
struct max16065_data ;
static const int max16065_adc_range[] = ;
static const int max16065_csp_adc_range[] = ;
static inline int ADC_TO_MV(int adc, int range)
static inline int LIMIT_TO_MV(int limit, int range)
static inline int MV_TO_LIMIT(int mv, int range)
static inline int ADC_TO_CURR(int adc, int gain)
static int max16065_read_adc(struct i2c_client *client, int reg)
static struct max16065_data *max16065_update_device(struct device *dev)
static ssize_t max16065_show_alarm(struct device *dev,
struct device_attribute *da, char *buf)
static ssize_t max16065_show_input(struct device *dev,
struct device_attribute *da, char *buf)
static ssize_t max16065_show_current(struct device *dev,
struct device_attribute *da, char *buf)
static ssize_t max16065_set_limit(struct device *dev,
struct device_attribute *da,
const char *buf, size_t count)
static ssize_t max16065_show_limit(struct device *dev,
struct device_attribute *da, char *buf)
static SENSOR_DEVICE_ATTR(in0_input, S_IRUGO, max16065_show_input, NULL, 0);
static SENSOR_DEVICE_ATTR(in1_input, S_IRUGO, max16065_show_input, NULL, 1);
static SENSOR_DEVICE_ATTR(in2_input, S_IRUGO, max16065_show_input, NULL, 2);
static SENSOR_DEVICE_ATTR(in3_input, S_IRUGO, max16065_show_input, NULL, 3);
static SENSOR_DEVICE_ATTR(in4_input, S_IRUGO, max16065_show_input, NULL, 4);
static SENSOR_DEVICE_ATTR(in5_input, S_IRUGO, max16065_show_input, NULL, 5);
static SENSOR_DEVICE_ATTR(in6_input, S_IRUGO, max16065_show_input, NULL, 6);
static SENSOR_DEVICE_ATTR(in7_input, S_IRUGO, max16065_show_input, NULL, 7);
static SENSOR_DEVICE_ATTR(in8_input, S_IRUGO, max16065_show_input, NULL, 8);
static SENSOR_DEVICE_ATTR(in9_input, S_IRUGO, max16065_show_input, NULL, 9);
static SENSOR_DEVICE_ATTR(in10_input, S_IRUGO, max16065_show_input, NULL, 10);
static SENSOR_DEVICE_ATTR(in11_input, S_IRUGO, max16065_show_input, NULL, 11);
static SENSOR_DEVICE_ATTR(in12_input, S_IRUGO, max16065_show_input, NULL, 12);
static SENSOR_DEVICE_ATTR_2(in0_lcrit, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 2, 0);
static SENSOR_DEVICE_ATTR_2(in1_lcrit, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 2, 1);
static SENSOR_DEVICE_ATTR_2(in2_lcrit, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 2, 2);
static SENSOR_DEVICE_ATTR_2(in3_lcrit, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 2, 3);
static SENSOR_DEVICE_ATTR_2(in4_lcrit, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 2, 4);
static SENSOR_DEVICE_ATTR_2(in5_lcrit, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 2, 5);
static SENSOR_DEVICE_ATTR_2(in6_lcrit, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 2, 6);
static SENSOR_DEVICE_ATTR_2(in7_lcrit, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 2, 7);
static SENSOR_DEVICE_ATTR_2(in8_lcrit, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 2, 8);
static SENSOR_DEVICE_ATTR_2(in9_lcrit, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 2, 9);
static SENSOR_DEVICE_ATTR_2(in10_lcrit, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 2, 10);
static SENSOR_DEVICE_ATTR_2(in11_lcrit, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 2, 11);
static SENSOR_DEVICE_ATTR_2(in0_crit, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 1, 0);
static SENSOR_DEVICE_ATTR_2(in1_crit, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 1, 1);
static SENSOR_DEVICE_ATTR_2(in2_crit, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 1, 2);
static SENSOR_DEVICE_ATTR_2(in3_crit, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 1, 3);
static SENSOR_DEVICE_ATTR_2(in4_crit, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 1, 4);
static SENSOR_DEVICE_ATTR_2(in5_crit, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 1, 5);
static SENSOR_DEVICE_ATTR_2(in6_crit, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 1, 6);
static SENSOR_DEVICE_ATTR_2(in7_crit, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 1, 7);
static SENSOR_DEVICE_ATTR_2(in8_crit, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 1, 8);
static SENSOR_DEVICE_ATTR_2(in9_crit, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 1, 9);
static SENSOR_DEVICE_ATTR_2(in10_crit, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 1, 10);
static SENSOR_DEVICE_ATTR_2(in11_crit, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 1, 11);
static SENSOR_DEVICE_ATTR_2(in0_min, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 0, 0);
static SENSOR_DEVICE_ATTR_2(in1_min, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 0, 1);
static SENSOR_DEVICE_ATTR_2(in2_min, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 0, 2);
static SENSOR_DEVICE_ATTR_2(in3_min, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 0, 3);
static SENSOR_DEVICE_ATTR_2(in4_min, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 0, 4);
static SENSOR_DEVICE_ATTR_2(in5_min, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 0, 5);
static SENSOR_DEVICE_ATTR_2(in6_min, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 0, 6);
static SENSOR_DEVICE_ATTR_2(in7_min, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 0, 7);
static SENSOR_DEVICE_ATTR_2(in8_min, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 0, 8);
static SENSOR_DEVICE_ATTR_2(in9_min, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 0, 9);
static SENSOR_DEVICE_ATTR_2(in10_min, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 0, 10);
static SENSOR_DEVICE_ATTR_2(in11_min, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 0, 11);
static SENSOR_DEVICE_ATTR_2(in0_max, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 0, 0);
static SENSOR_DEVICE_ATTR_2(in1_max, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 0, 1);
static SENSOR_DEVICE_ATTR_2(in2_max, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 0, 2);
static SENSOR_DEVICE_ATTR_2(in3_max, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 0, 3);
static SENSOR_DEVICE_ATTR_2(in4_max, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 0, 4);
static SENSOR_DEVICE_ATTR_2(in5_max, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 0, 5);
static SENSOR_DEVICE_ATTR_2(in6_max, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 0, 6);
static SENSOR_DEVICE_ATTR_2(in7_max, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 0, 7);
static SENSOR_DEVICE_ATTR_2(in8_max, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 0, 8);
static SENSOR_DEVICE_ATTR_2(in9_max, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 0, 9);
static SENSOR_DEVICE_ATTR_2(in10_max, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 0, 10);
static SENSOR_DEVICE_ATTR_2(in11_max, S_IWUSR | S_IRUGO, max16065_show_limit,
max16065_set_limit, 0, 11);
static SENSOR_DEVICE_ATTR_2(in0_alarm, S_IRUGO, max16065_show_alarm, NULL,
0, 0);
static SENSOR_DEVICE_ATTR_2(in1_alarm, S_IRUGO, max16065_show_alarm, NULL,
0, 1);
static SENSOR_DEVICE_ATTR_2(in2_alarm, S_IRUGO, max16065_show_alarm, NULL,
0, 2);
static SENSOR_DEVICE_ATTR_2(in3_alarm, S_IRUGO, max16065_show_alarm, NULL,
0, 3);
static SENSOR_DEVICE_ATTR_2(in4_alarm, S_IRUGO, max16065_show_alarm, NULL,
0, 4);
static SENSOR_DEVICE_ATTR_2(in5_alarm, S_IRUGO, max16065_show_alarm, NULL,
0, 5);
static SENSOR_DEVICE_ATTR_2(in6_alarm, S_IRUGO, max16065_show_alarm, NULL,
0, 6);
static SENSOR_DEVICE_ATTR_2(in7_alarm, S_IRUGO, max16065_show_alarm, NULL,
0, 7);
static SENSOR_DEVICE_ATTR_2(in8_alarm, S_IRUGO, max16065_show_alarm, NULL,
1, 0);
static SENSOR_DEVICE_ATTR_2(in9_alarm, S_IRUGO, max16065_show_alarm, NULL,
1, 1);
static SENSOR_DEVICE_ATTR_2(in10_alarm, S_IRUGO, max16065_show_alarm, NULL,
1, 2);
static SENSOR_DEVICE_ATTR_2(in11_alarm, S_IRUGO, max16065_show_alarm, NULL,
1, 3);
static SENSOR_DEVICE_ATTR(curr1_input, S_IRUGO, max16065_show_current, NULL, 0);
static SENSOR_DEVICE_ATTR_2(curr1_alarm, S_IRUGO, max16065_show_alarm, NULL,
1, 4);
static struct attribute *max16065_basic_attributes[] = ;
static struct attribute *max16065_current_attributes[] = ;
static struct attribute *max16065_min_attributes[] = ;
static struct attribute *max16065_max_attributes[] = ;
static const struct attribute_group max16065_basic_group = ;
static const struct attribute_group max16065_current_group = ;
static const struct attribute_group max16065_min_group = ;
static const struct attribute_group max16065_max_group = ;
static void max16065_cleanup(struct i2c_client *client)
static int max16065_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int max16065_remove(struct i2c_client *client)
static const struct i2c_device_id max16065_id[] = ;
MODULE_DEVICE_TABLE(i2c, max16065_id);
static struct i2c_driver max16065_driver = ;
static int __init max16065_init(void)
static void __exit max16065_exit(void)
MODULE_AUTHOR("Guenter Roeck <guenter.roeck@ericsson.com>");
MODULE_DESCRIPTION("MAX16065 driver");
MODULE_LICENSE("GPL");
module_init(max16065_init);
module_exit(max16065_exit);
