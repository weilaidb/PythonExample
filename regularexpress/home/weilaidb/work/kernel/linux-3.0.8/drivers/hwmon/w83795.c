static const unsigned short normal_i2c[] = ;
static int reset;
module_param(reset, bool, 0);
MODULE_PARM_DESC(reset, "Set to 1 to reset chip, not recommended");
#define W83795_REG_BANKSEL		0x00
#define W83795_REG_VENDORID		0xfd
#define W83795_REG_CHIPID		0xfe
#define W83795_REG_DEVICEID		0xfb
#define W83795_REG_DEVICEID_A		0xff
#define W83795_REG_I2C_ADDR		0xfc
#define W83795_REG_CONFIG		0x01
#define W83795_REG_CONFIG_CONFIG48	0x04
#define W83795_REG_CONFIG_START	0x01
#define W83795_REG_VOLT_CTRL1		0x02
#define W83795_REG_VOLT_CTRL2		0x03
#define W83795_REG_TEMP_CTRL1		0x04
#define W83795_REG_TEMP_CTRL2		0x05
#define W83795_REG_FANIN_CTRL1		0x06
#define W83795_REG_FANIN_CTRL2		0x07
#define W83795_REG_VMIGB_CTRL		0x08
#define TEMP_READ			0
#define TEMP_CRIT			1
#define TEMP_CRIT_HYST			2
#define TEMP_WARN			3
#define TEMP_WARN_HYST			4
static const u16 W83795_REG_TEMP[][5] = ;
#define IN_READ				0
#define IN_MAX				1
#define IN_LOW				2
static const u16 W83795_REG_IN[][3] = ;
#define W83795_REG_VRLSB		0x3C
static const u8 W83795_REG_IN_HL_LSB[] = ;
#define IN_LSB_REG(index, type) \
(((type) == 1) ? W83795_REG_IN_HL_LSB[(index)] \
: (W83795_REG_IN_HL_LSB[(index)] + 1))
#define IN_LSB_SHIFT			0
#define IN_LSB_IDX			1
static const u8 IN_LSB_SHIFT_IDX[][2] = ;
#define W83795_REG_FAN(index)		(0x2E + (index))
#define W83795_REG_FAN_MIN_HL(index)	(0xB6 + (index))
#define W83795_REG_FAN_MIN_LSB(index)	(0xC4 + (index) / 2)
#define W83795_REG_FAN_MIN_LSB_SHIFT(index) \
(((index) & 1) ? 4 : 0)
#define W83795_REG_VID_CTRL		0x6A
#define W83795_REG_ALARM_CTRL		0x40
#define ALARM_CTRL_RTSACS		(1 << 7)
#define W83795_REG_ALARM(index)		(0x41 + (index))
#define W83795_REG_CLR_CHASSIS		0x4D
#define W83795_REG_BEEP(index)		(0x50 + (index))
#define W83795_REG_OVT_CFG		0x58
#define OVT_CFG_SEL			(1 << 7)
#define W83795_REG_FCMS1		0x201
#define W83795_REG_FCMS2		0x208
#define W83795_REG_TFMR(index)		(0x202 + (index))
#define W83795_REG_FOMC			0x20F
#define W83795_REG_TSS(index)		(0x209 + (index))
#define TSS_MAP_RESERVED		0xff
static const u8 tss_map[4][6] = ;
#define PWM_OUTPUT			0
#define PWM_FREQ			1
#define PWM_START			2
#define PWM_NONSTOP			3
#define PWM_STOP_TIME			4
#define W83795_REG_PWM(index, nr)	(0x210 + (nr) * 8 + (index))
#define W83795_REG_FTSH(index)		(0x240 + (index) * 2)
#define W83795_REG_FTSL(index)		(0x241 + (index) * 2)
#define W83795_REG_TFTS			0x250
#define TEMP_PWM_TTTI			0
#define TEMP_PWM_CTFS			1
#define TEMP_PWM_HCT			2
#define TEMP_PWM_HOT			3
#define W83795_REG_TTTI(index)		(0x260 + (index))
#define W83795_REG_CTFS(index)		(0x268 + (index))
#define W83795_REG_HT(index)		(0x270 + (index))
#define SF4_TEMP			0
#define SF4_PWM				1
#define W83795_REG_SF4_TEMP(temp_num, index) \
(0x280 + 0x10 * (temp_num) + (index))
#define W83795_REG_SF4_PWM(temp_num, index) \
(0x288 + 0x10 * (temp_num) + (index))
#define W83795_REG_DTSC			0x301
#define W83795_REG_DTSE			0x302
#define W83795_REG_DTS(index)		(0x26 + (index))
#define W83795_REG_PECI_TBASE(index)	(0x320 + (index))
#define DTS_CRIT			0
#define DTS_CRIT_HYST			1
#define DTS_WARN			2
#define DTS_WARN_HYST			3
#define W83795_REG_DTS_EXT(index)	(0xB2 + (index))
#define SETUP_PWM_DEFAULT		0
#define SETUP_PWM_UPTIME		1
#define SETUP_PWM_DOWNTIME		2
#define W83795_REG_SETUP_PWM(index)    (0x20C + (index))
static inline u16 in_from_reg(u8 index, u16 val)
static inline u16 in_to_reg(u8 index, u16 val)
static inline unsigned long fan_from_reg(u16 val)
static inline u16 fan_to_reg(long rpm)
static inline unsigned long time_from_reg(u8 reg)
static inline u8 time_to_reg(unsigned long val)
static inline long temp_from_reg(s8 reg)
static inline s8 temp_to_reg(long val, s8 min, s8 max)
static const u16 pwm_freq_cksel0[16] = ;
static unsigned int pwm_freq_from_reg(u8 reg, u16 clkin)
static u8 pwm_freq_to_reg(unsigned long val, u16 clkin)
enum chip_types ;
struct w83795_data ;
static int w83795_set_bank(struct i2c_client *client, u8 bank)
static u8 w83795_read(struct i2c_client *client, u16 reg)
static int w83795_write(struct i2c_client *client, u16 reg, u8 value)
static void w83795_update_limits(struct i2c_client *client)
static struct w83795_data *w83795_update_pwm_config(struct device *dev)
static struct w83795_data *w83795_update_device(struct device *dev)
#define ALARM_STATUS      0
#define BEEP_ENABLE       1
static ssize_t
show_alarm_beep(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_beep(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
store_chassis_clear(struct device *dev,
struct device_attribute *attr, const char *buf,
size_t count)
#define FAN_INPUT     0
#define FAN_MIN       1
static ssize_t
show_fan(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_fan_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
show_pwm(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_pwm(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
show_pwm_enable(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_pwm_enable(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
show_pwm_mode(struct device *dev, struct device_attribute *attr, char *buf)
static int w83795_tss_useful(const struct w83795_data *data, int tsrc)
static ssize_t
show_temp_src(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_temp_src(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define TEMP_PWM_ENABLE   0
#define TEMP_PWM_FAN_MAP  1
static ssize_t
show_temp_pwm_enable(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
store_temp_pwm_enable(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define FANIN_TARGET   0
#define FANIN_TOL      1
static ssize_t
show_fanin(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_fanin(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
show_temp_pwm(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_temp_pwm(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
show_sf4_pwm(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_sf4_pwm(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
show_sf4_temp(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_sf4_temp(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
show_temp(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_temp(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
show_dts_mode(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
show_dts(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
show_dts_ext(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_dts_ext(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
show_temp_mode(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_temp_mode(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
show_in(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_in(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
show_sf_setup(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_sf_setup(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define NOT_USED			-1
#define SENSOR_ATTR_IN(index)
#define SENSOR_ATTR_FAN(index)
#define SENSOR_ATTR_PWM(index)
#define SENSOR_ATTR_DTS(index)
#define SENSOR_ATTR_TEMP(index)
static struct sensor_device_attribute_2 w83795_in[][5] = ;
static const struct sensor_device_attribute_2 w83795_fan[][4] = ;
static const struct sensor_device_attribute_2 w83795_temp[][28] = ;
static const struct sensor_device_attribute_2 w83795_dts[][8] = ;
static const struct sensor_device_attribute_2 w83795_pwm[][8] = ;
static const struct sensor_device_attribute_2 w83795_tss[6] = ;
static const struct sensor_device_attribute_2 sda_single_files[] = ;
static const struct sensor_device_attribute_2 sda_beep_files[] = ;
static void w83795_init_client(struct i2c_client *client)
static int w83795_get_device_id(struct i2c_client *client)
static int w83795_detect(struct i2c_client *client,
struct i2c_board_info *info)
static int w83795_handle_files(struct device *dev, int (*fn)(struct device *,
const struct device_attribute *))
{
struct w83795_data *data = dev_get_drvdata(dev);
int err, i, j;
for (i = 0; i < ARRAY_SIZE(w83795_in); i++)
for (i = 0; i < ARRAY_SIZE(w83795_fan); i++)
for (i = 0; i < ARRAY_SIZE(w83795_tss); i++)
for (i = 0; i < ARRAY_SIZE(sda_single_files); i++)
if (data->enable_beep)
for (i = 0; i < data->has_pwm; i++)
for (i = 0; i < ARRAY_SIZE(w83795_temp); i++)
static int device_remove_file_wrapper(struct device *dev,
const struct device_attribute *attr)
static void w83795_check_dynamic_in_limits(struct i2c_client *client)
static void w83795_apply_temp_config(struct w83795_data *data, u8 config,
int temp_chan, int in_chan)
static int w83795_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int w83795_remove(struct i2c_client *client)
static const struct i2c_device_id w83795_id[] = ;
MODULE_DEVICE_TABLE(i2c, w83795_id);
static struct i2c_driver w83795_driver = ;
static int __init sensors_w83795_init(void)
static void __exit sensors_w83795_exit(void)
MODULE_AUTHOR("Wei Song, Jean Delvare <khali@linux-fr.org>");
MODULE_DESCRIPTION("W83795G/ADG hardware monitoring driver");
MODULE_LICENSE("GPL");
module_init(sensors_w83795_init);
module_exit(sensors_w83795_exit);
