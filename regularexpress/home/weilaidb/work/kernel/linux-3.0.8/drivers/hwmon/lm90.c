static const unsigned short normal_i2c[] = ;
enum chips ;
#define LM90_REG_R_MAN_ID		0xFE
#define LM90_REG_R_CHIP_ID		0xFF
#define LM90_REG_R_CONFIG1		0x03
#define LM90_REG_W_CONFIG1		0x09
#define LM90_REG_R_CONFIG2		0xBF
#define LM90_REG_W_CONFIG2		0xBF
#define LM90_REG_R_CONVRATE		0x04
#define LM90_REG_W_CONVRATE		0x0A
#define LM90_REG_R_STATUS		0x02
#define LM90_REG_R_LOCAL_TEMP		0x00
#define LM90_REG_R_LOCAL_HIGH		0x05
#define LM90_REG_W_LOCAL_HIGH		0x0B
#define LM90_REG_R_LOCAL_LOW		0x06
#define LM90_REG_W_LOCAL_LOW		0x0C
#define LM90_REG_R_LOCAL_CRIT		0x20
#define LM90_REG_W_LOCAL_CRIT		0x20
#define LM90_REG_R_REMOTE_TEMPH		0x01
#define LM90_REG_R_REMOTE_TEMPL		0x10
#define LM90_REG_R_REMOTE_OFFSH		0x11
#define LM90_REG_W_REMOTE_OFFSH		0x11
#define LM90_REG_R_REMOTE_OFFSL		0x12
#define LM90_REG_W_REMOTE_OFFSL		0x12
#define LM90_REG_R_REMOTE_HIGHH		0x07
#define LM90_REG_W_REMOTE_HIGHH		0x0D
#define LM90_REG_R_REMOTE_HIGHL		0x13
#define LM90_REG_W_REMOTE_HIGHL		0x13
#define LM90_REG_R_REMOTE_LOWH		0x08
#define LM90_REG_W_REMOTE_LOWH		0x0E
#define LM90_REG_R_REMOTE_LOWL		0x14
#define LM90_REG_W_REMOTE_LOWL		0x14
#define LM90_REG_R_REMOTE_CRIT		0x19
#define LM90_REG_W_REMOTE_CRIT		0x19
#define LM90_REG_R_TCRIT_HYST		0x21
#define LM90_REG_W_TCRIT_HYST		0x21
#define MAX6657_REG_R_LOCAL_TEMPL	0x11
#define MAX6696_REG_R_STATUS2		0x12
#define MAX6659_REG_R_REMOTE_EMERG	0x16
#define MAX6659_REG_W_REMOTE_EMERG	0x16
#define MAX6659_REG_R_LOCAL_EMERG	0x17
#define MAX6659_REG_W_LOCAL_EMERG	0x17
#define LM90_DEF_CONVRATE_RVAL	6
#define LM90_MAX_CONVRATE_MS	16000
#define LM90_FLAG_ADT7461_EXT	(1 << 0)
#define LM90_HAVE_OFFSET	(1 << 1)
#define LM90_HAVE_LOCAL_EXT	(1 << 2)
#define LM90_HAVE_REM_LIMIT_EXT	(1 << 3)
#define LM90_HAVE_EMERGENCY	(1 << 4)
#define LM90_HAVE_EMERGENCY_ALARM (1 << 5)
#define LM90_HAVE_TEMP3		(1 << 6)
#define LM90_HAVE_BROKEN_ALERT	(1 << 7)
static const struct i2c_device_id lm90_id[] = ;
MODULE_DEVICE_TABLE(i2c, lm90_id);
struct lm90_params ;
static const struct lm90_params lm90_params[] = ;
struct lm90_data ;
static inline s32 adm1032_write_byte(struct i2c_client *client, u8 value)
static int lm90_read_reg(struct i2c_client *client, u8 reg, u8 *value)
static int lm90_read16(struct i2c_client *client, u8 regh, u8 regl, u16 *value)
static inline void lm90_select_remote_channel(struct i2c_client *client,
struct lm90_data *data,
int channel)
static void lm90_set_convrate(struct i2c_client *client, struct lm90_data *data,
unsigned int interval)
static struct lm90_data *lm90_update_device(struct device *dev)
static inline int temp_from_s8(s8 val)
static inline int temp_from_u8(u8 val)
static inline int temp_from_s16(s16 val)
static inline int temp_from_u16(u16 val)
static s8 temp_to_s8(long val)
static u8 temp_to_u8(long val)
static s16 temp_to_s16(long val)
static u8 hyst_to_reg(long val)
static inline int temp_from_u8_adt7461(struct lm90_data *data, u8 val)
static inline int temp_from_u16_adt7461(struct lm90_data *data, u16 val)
static u8 temp_to_u8_adt7461(struct lm90_data *data, long val)
static u16 temp_to_u16_adt7461(struct lm90_data *data, long val)
static ssize_t show_temp8(struct device *dev, struct device_attribute *devattr,
char *buf)
static ssize_t set_temp8(struct device *dev, struct device_attribute *devattr,
const char *buf, size_t count)
static ssize_t show_temp11(struct device *dev, struct device_attribute *devattr,
char *buf)
static ssize_t set_temp11(struct device *dev, struct device_attribute *devattr,
const char *buf, size_t count)
static ssize_t show_temphyst(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t set_temphyst(struct device *dev, struct device_attribute *dummy,
const char *buf, size_t count)
static ssize_t show_alarms(struct device *dev, struct device_attribute *dummy,
char *buf)
static ssize_t show_alarm(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_update_interval(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_update_interval(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR_2(temp1_input, S_IRUGO, show_temp11, NULL, 0, 4);
static SENSOR_DEVICE_ATTR_2(temp2_input, S_IRUGO, show_temp11, NULL, 0, 0);
static SENSOR_DEVICE_ATTR(temp1_min, S_IWUSR | S_IRUGO, show_temp8,
set_temp8, 0);
static SENSOR_DEVICE_ATTR_2(temp2_min, S_IWUSR | S_IRUGO, show_temp11,
set_temp11, 0, 1);
static SENSOR_DEVICE_ATTR(temp1_max, S_IWUSR | S_IRUGO, show_temp8,
set_temp8, 1);
static SENSOR_DEVICE_ATTR_2(temp2_max, S_IWUSR | S_IRUGO, show_temp11,
set_temp11, 1, 2);
static SENSOR_DEVICE_ATTR(temp1_crit, S_IWUSR | S_IRUGO, show_temp8,
set_temp8, 2);
static SENSOR_DEVICE_ATTR(temp2_crit, S_IWUSR | S_IRUGO, show_temp8,
set_temp8, 3);
static SENSOR_DEVICE_ATTR(temp1_crit_hyst, S_IWUSR | S_IRUGO, show_temphyst,
set_temphyst, 2);
static SENSOR_DEVICE_ATTR(temp2_crit_hyst, S_IRUGO, show_temphyst, NULL, 3);
static SENSOR_DEVICE_ATTR_2(temp2_offset, S_IWUSR | S_IRUGO, show_temp11,
set_temp11, 2, 3);
static SENSOR_DEVICE_ATTR(temp1_crit_alarm, S_IRUGO, show_alarm, NULL, 0);
static SENSOR_DEVICE_ATTR(temp2_crit_alarm, S_IRUGO, show_alarm, NULL, 1);
static SENSOR_DEVICE_ATTR(temp2_fault, S_IRUGO, show_alarm, NULL, 2);
static SENSOR_DEVICE_ATTR(temp2_min_alarm, S_IRUGO, show_alarm, NULL, 3);
static SENSOR_DEVICE_ATTR(temp2_max_alarm, S_IRUGO, show_alarm, NULL, 4);
static SENSOR_DEVICE_ATTR(temp1_min_alarm, S_IRUGO, show_alarm, NULL, 5);
static SENSOR_DEVICE_ATTR(temp1_max_alarm, S_IRUGO, show_alarm, NULL, 6);
static DEVICE_ATTR(alarms, S_IRUGO, show_alarms, NULL);
static DEVICE_ATTR(update_interval, S_IRUGO | S_IWUSR, show_update_interval,
set_update_interval);
static struct attribute *lm90_attributes[] = ;
static const struct attribute_group lm90_group = ;
static SENSOR_DEVICE_ATTR(temp1_emergency, S_IWUSR | S_IRUGO, show_temp8,
set_temp8, 4);
static SENSOR_DEVICE_ATTR(temp2_emergency, S_IWUSR | S_IRUGO, show_temp8,
set_temp8, 5);
static SENSOR_DEVICE_ATTR(temp1_emergency_hyst, S_IRUGO, show_temphyst,
NULL, 4);
static SENSOR_DEVICE_ATTR(temp2_emergency_hyst, S_IRUGO, show_temphyst,
NULL, 5);
static struct attribute *lm90_emergency_attributes[] = ;
static const struct attribute_group lm90_emergency_group = ;
static SENSOR_DEVICE_ATTR(temp1_emergency_alarm, S_IRUGO, show_alarm, NULL, 15);
static SENSOR_DEVICE_ATTR(temp2_emergency_alarm, S_IRUGO, show_alarm, NULL, 13);
static struct attribute *lm90_emergency_alarm_attributes[] = ;
static const struct attribute_group lm90_emergency_alarm_group = ;
static SENSOR_DEVICE_ATTR_2(temp3_input, S_IRUGO, show_temp11, NULL, 0, 5);
static SENSOR_DEVICE_ATTR_2(temp3_min, S_IWUSR | S_IRUGO, show_temp11,
set_temp11, 3, 6);
static SENSOR_DEVICE_ATTR_2(temp3_max, S_IWUSR | S_IRUGO, show_temp11,
set_temp11, 4, 7);
static SENSOR_DEVICE_ATTR(temp3_crit, S_IWUSR | S_IRUGO, show_temp8,
set_temp8, 6);
static SENSOR_DEVICE_ATTR(temp3_crit_hyst, S_IRUGO, show_temphyst, NULL, 6);
static SENSOR_DEVICE_ATTR(temp3_emergency, S_IWUSR | S_IRUGO, show_temp8,
set_temp8, 7);
static SENSOR_DEVICE_ATTR(temp3_emergency_hyst, S_IRUGO, show_temphyst,
NULL, 7);
static SENSOR_DEVICE_ATTR(temp3_crit_alarm, S_IRUGO, show_alarm, NULL, 9);
static SENSOR_DEVICE_ATTR(temp3_fault, S_IRUGO, show_alarm, NULL, 10);
static SENSOR_DEVICE_ATTR(temp3_min_alarm, S_IRUGO, show_alarm, NULL, 11);
static SENSOR_DEVICE_ATTR(temp3_max_alarm, S_IRUGO, show_alarm, NULL, 12);
static SENSOR_DEVICE_ATTR(temp3_emergency_alarm, S_IRUGO, show_alarm, NULL, 14);
static struct attribute *lm90_temp3_attributes[] = ;
static const struct attribute_group lm90_temp3_group = ;
static ssize_t show_pec(struct device *dev, struct device_attribute *dummy,
char *buf)
static ssize_t set_pec(struct device *dev, struct device_attribute *dummy,
const char *buf, size_t count)
static DEVICE_ATTR(pec, S_IWUSR | S_IRUGO, show_pec, set_pec);
static int lm90_detect(struct i2c_client *new_client,
struct i2c_board_info *info)
static void lm90_remove_files(struct i2c_client *client, struct lm90_data *data)
static void lm90_init_client(struct i2c_client *client)
static int lm90_probe(struct i2c_client *new_client,
const struct i2c_device_id *id)
static int lm90_remove(struct i2c_client *client)
static void lm90_alert(struct i2c_client *client, unsigned int flag)
static struct i2c_driver lm90_driver = ;
static int __init sensors_lm90_init(void)
static void __exit sensors_lm90_exit(void)
MODULE_AUTHOR("Jean Delvare <khali@linux-fr.org>");
MODULE_DESCRIPTION("LM90/ADM1032 driver");
MODULE_LICENSE("GPL");
module_init(sensors_lm90_init);
module_exit(sensors_lm90_exit);
