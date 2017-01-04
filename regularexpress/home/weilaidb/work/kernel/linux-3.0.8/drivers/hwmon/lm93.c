#define LM93_REG_MFR_ID			0x3e
#define LM93_REG_VER			0x3f
#define LM93_REG_STATUS_CONTROL		0xe2
#define LM93_REG_CONFIG			0xe3
#define LM93_REG_SLEEP_CONTROL		0xe4
#define LM93_REG_HOST_ERROR_1		0x48
#define LM93_REG_IN(nr)			(0x56 + (nr))
#define LM93_REG_IN_MIN(nr)		(0x90 + (nr) * 2)
#define LM93_REG_IN_MAX(nr)		(0x91 + (nr) * 2)
#define LM93_REG_TEMP(nr)		(0x50 + (nr))
#define LM93_REG_TEMP_MIN(nr)		(0x78 + (nr) * 2)
#define LM93_REG_TEMP_MAX(nr)		(0x79 + (nr) * 2)
#define LM93_REG_BOOST(nr)		(0x80 + (nr))
#define LM93_REG_PROCHOT_CUR(nr)	(0x67 + (nr) * 2)
#define LM93_REG_PROCHOT_AVG(nr)	(0x68 + (nr) * 2)
#define LM93_REG_PROCHOT_MAX(nr)	(0xb0 + (nr))
#define LM93_REG_FAN(nr)		(0x6e + (nr) * 2)
#define LM93_REG_FAN_MIN(nr)		(0xb4 + (nr) * 2)
#define LM93_REG_PWM_CTL(nr,reg)	(0xc8 + (reg) + (nr) * 4)
#define LM93_PWM_CTL1	0x0
#define LM93_PWM_CTL2	0x1
#define LM93_PWM_CTL3	0x2
#define LM93_PWM_CTL4	0x3
#define LM93_REG_GPI			0x6b
#define LM93_REG_VID(nr)		(0x6c + (nr))
#define LM93_REG_VCCP_LIMIT_OFF(nr)	(0xb2 + (nr))
#define LM93_REG_BOOST_HYST_12		0xc0
#define LM93_REG_BOOST_HYST_34		0xc1
#define LM93_REG_BOOST_HYST(nr)		(0xc0 + (nr)/2)
#define LM93_REG_PWM_MIN_HYST_12	0xc3
#define LM93_REG_PWM_MIN_HYST_34	0xc4
#define LM93_REG_PWM_MIN_HYST(nr)	(0xc3 + (nr)/2)
#define LM93_REG_PROCHOT_OVERRIDE	0xc6
#define LM93_REG_PROCHOT_INTERVAL	0xc7
#define LM93_REG_TEMP_BASE(nr)		(0xd0 + (nr))
#define LM93_REG_TEMP_OFFSET(step)	(0xd4 + (step))
#define LM93_REG_PWM_RAMP_CTL		0xbf
#define LM93_REG_SFC1		0xbc
#define LM93_REG_SFC2		0xbd
#define LM93_REG_GPI_VID_CTL	0xbe
#define LM93_REG_SF_TACH_TO_PWM	0xe0
#define LM93_REG_GPI_ERR_MASK	0xec
#define LM93_REG_MISC_ERR_MASK	0xed
#define LM93_MFR_ID		0x73
#define LM93_MFR_ID_PROTOTYPE	0x72
#define LM94_MFR_ID_2		0x7a
#define LM94_MFR_ID		0x79
#define LM94_MFR_ID_PROTOTYPE	0x78
#define LM93_SMBUS_FUNC_FULL (I2C_FUNC_SMBUS_BYTE_DATA | \
I2C_FUNC_SMBUS_WORD_DATA | I2C_FUNC_SMBUS_BLOCK_DATA)
#define LM93_SMBUS_FUNC_MIN  (I2C_FUNC_SMBUS_BYTE_DATA | \
I2C_FUNC_SMBUS_WORD_DATA)
static const unsigned short normal_i2c[] = ;
static int disable_block;
module_param(disable_block, bool, 0);
MODULE_PARM_DESC(disable_block,
"Set to non-zero to disable SMBus block data transactions.");
static int init;
module_param(init, bool, 0);
MODULE_PARM_DESC(init, "Set to non-zero to force chip initialization.");
static int vccp_limit_type[2] = ;
module_param_array(vccp_limit_type, int, NULL, 0);
MODULE_PARM_DESC(vccp_limit_type, "Configures in7 and in8 limit modes.");
static int vid_agtl;
module_param(vid_agtl, int, 0);
MODULE_PARM_DESC(vid_agtl, "Configures VID pin input thresholds.");
static struct i2c_driver lm93_driver;
static const struct  lm93_block_read_cmds[12] = ;
struct block1_t ;
struct lm93_data ;
static int LM93_VID_FROM_REG(u8 reg)
static const u8 lm93_vin_reg_min[16] = ;
static const u8 lm93_vin_reg_max[16] = ;
static const unsigned long lm93_vin_val_min[16] = ;
static const unsigned long lm93_vin_val_max[16] = ;
static unsigned LM93_IN_FROM_REG(int nr, u8 reg)
static u8 LM93_IN_TO_REG(int nr, unsigned val)
static unsigned LM93_IN_REL_FROM_REG(u8 reg, int upper, int vid)
#define LM93_IN_MIN_FROM_REG(reg,vid)	LM93_IN_REL_FROM_REG(reg,0,vid)
#define LM93_IN_MAX_FROM_REG(reg,vid)	LM93_IN_REL_FROM_REG(reg,1,vid)
static u8 LM93_IN_REL_TO_REG(unsigned val, int upper, int vid)
static int LM93_TEMP_FROM_REG(u8 reg)
#define LM93_TEMP_MIN (-128000)
#define LM93_TEMP_MAX ( 127000)
static u8 LM93_TEMP_TO_REG(long temp)
static int LM93_TEMP_OFFSET_MODE_FROM_REG(u8 sfc2, int nr)
static int LM93_TEMP_OFFSET_FROM_REG(u8 reg, int mode)
#define LM93_TEMP_OFFSET_MIN  (  0)
#define LM93_TEMP_OFFSET_MAX0 (150)
#define LM93_TEMP_OFFSET_MAX1 ( 75)
static u8 LM93_TEMP_OFFSET_TO_REG(int off, int mode)
static int LM93_TEMP_AUTO_OFFSET_FROM_REG(u8 reg, int nr, int mode)
static u8 LM93_TEMP_AUTO_OFFSET_TO_REG(u8 old, int off, int nr, int mode)
static int LM93_AUTO_BOOST_HYST_FROM_REGS(struct lm93_data *data, int nr,
int mode)
static u8 LM93_AUTO_BOOST_HYST_TO_REG(struct lm93_data *data, long hyst,
int nr, int mode)
typedef enum  pwm_freq_t;
static int lm93_pwm_map[2][16] = ;
static int LM93_PWM_FROM_REG(u8 reg, pwm_freq_t freq)
static u8 LM93_PWM_TO_REG(int pwm, pwm_freq_t freq)
static int LM93_FAN_FROM_REG(u16 regs)
static u16 LM93_FAN_TO_REG(long rpm)
static int lm93_pwm_freq_map[8] = ;
static int LM93_PWM_FREQ_FROM_REG(u8 reg)
static u8 LM93_PWM_FREQ_TO_REG(int freq)
static int lm93_spinup_time_map[8] = ;
static int LM93_SPINUP_TIME_FROM_REG(u8 reg)
static u8 LM93_SPINUP_TIME_TO_REG(int time)
#define LM93_RAMP_MIN 0
#define LM93_RAMP_MAX 75
static int LM93_RAMP_FROM_REG(u8 reg)
static u8 LM93_RAMP_TO_REG(int ramp)
static u8 LM93_PROCHOT_TO_REG(long prochot)
static int lm93_interval_map[10] = ;
static int LM93_INTERVAL_FROM_REG(u8 reg)
static u8 LM93_INTERVAL_TO_REG(long interval)
static unsigned LM93_GPI_FROM_REG(u8 reg)
#define LM93_ALARM_IN1		0x00000001
#define LM93_ALARM_IN2		0x00000002
#define LM93_ALARM_IN3		0x00000004
#define LM93_ALARM_IN4		0x00000008
#define LM93_ALARM_IN5		0x00000010
#define LM93_ALARM_IN6		0x00000020
#define LM93_ALARM_IN7		0x00000040
#define LM93_ALARM_IN8		0x00000080
#define LM93_ALARM_IN9		0x00000100
#define LM93_ALARM_IN10		0x00000200
#define LM93_ALARM_IN11		0x00000400
#define LM93_ALARM_IN12		0x00000800
#define LM93_ALARM_IN13		0x00001000
#define LM93_ALARM_IN14		0x00002000
#define LM93_ALARM_IN15		0x00004000
#define LM93_ALARM_IN16		0x00008000
#define LM93_ALARM_FAN1		0x00010000
#define LM93_ALARM_FAN2		0x00020000
#define LM93_ALARM_FAN3		0x00040000
#define LM93_ALARM_FAN4		0x00080000
#define LM93_ALARM_PH1_ERR	0x00100000
#define LM93_ALARM_PH2_ERR	0x00200000
#define LM93_ALARM_SCSI1_ERR	0x00400000
#define LM93_ALARM_SCSI2_ERR	0x00800000
#define LM93_ALARM_DVDDP1_ERR	0x01000000
#define LM93_ALARM_DVDDP2_ERR	0x02000000
#define LM93_ALARM_D1_ERR	0x04000000
#define LM93_ALARM_D2_ERR	0x08000000
#define LM93_ALARM_TEMP1	0x10000000
#define LM93_ALARM_TEMP2	0x20000000
#define LM93_ALARM_TEMP3	0x40000000
static unsigned LM93_ALARMS_FROM_REG(struct block1_t b1)
#define MAX_RETRIES 5
static u8 lm93_read_byte(struct i2c_client *client, u8 reg)
static int lm93_write_byte(struct i2c_client *client, u8 reg, u8 value)
static u16 lm93_read_word(struct i2c_client *client, u8 reg)
static int lm93_write_word(struct i2c_client *client, u8 reg, u16 value)
static u8 lm93_block_buffer[I2C_SMBUS_BLOCK_MAX];
static void lm93_read_block(struct i2c_client *client, u8 fbn, u8 *values)
static struct lm93_data *lm93_update_device(struct device *dev)
static void lm93_update_client_common(struct lm93_data *data,
struct i2c_client *client)
static void lm93_update_client_full(struct lm93_data *data,
struct i2c_client *client)
static void lm93_update_client_min(struct lm93_data *data,
struct i2c_client *client)
static ssize_t show_in(struct device *dev, struct device_attribute *attr,
char *buf)
static SENSOR_DEVICE_ATTR(in1_input, S_IRUGO, show_in, NULL, 0);
static SENSOR_DEVICE_ATTR(in2_input, S_IRUGO, show_in, NULL, 1);
static SENSOR_DEVICE_ATTR(in3_input, S_IRUGO, show_in, NULL, 2);
static SENSOR_DEVICE_ATTR(in4_input, S_IRUGO, show_in, NULL, 3);
static SENSOR_DEVICE_ATTR(in5_input, S_IRUGO, show_in, NULL, 4);
static SENSOR_DEVICE_ATTR(in6_input, S_IRUGO, show_in, NULL, 5);
static SENSOR_DEVICE_ATTR(in7_input, S_IRUGO, show_in, NULL, 6);
static SENSOR_DEVICE_ATTR(in8_input, S_IRUGO, show_in, NULL, 7);
static SENSOR_DEVICE_ATTR(in9_input, S_IRUGO, show_in, NULL, 8);
static SENSOR_DEVICE_ATTR(in10_input, S_IRUGO, show_in, NULL, 9);
static SENSOR_DEVICE_ATTR(in11_input, S_IRUGO, show_in, NULL, 10);
static SENSOR_DEVICE_ATTR(in12_input, S_IRUGO, show_in, NULL, 11);
static SENSOR_DEVICE_ATTR(in13_input, S_IRUGO, show_in, NULL, 12);
static SENSOR_DEVICE_ATTR(in14_input, S_IRUGO, show_in, NULL, 13);
static SENSOR_DEVICE_ATTR(in15_input, S_IRUGO, show_in, NULL, 14);
static SENSOR_DEVICE_ATTR(in16_input, S_IRUGO, show_in, NULL, 15);
static ssize_t show_in_min(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_in_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(in1_min, S_IWUSR | S_IRUGO,
show_in_min, store_in_min, 0);
static SENSOR_DEVICE_ATTR(in2_min, S_IWUSR | S_IRUGO,
show_in_min, store_in_min, 1);
static SENSOR_DEVICE_ATTR(in3_min, S_IWUSR | S_IRUGO,
show_in_min, store_in_min, 2);
static SENSOR_DEVICE_ATTR(in4_min, S_IWUSR | S_IRUGO,
show_in_min, store_in_min, 3);
static SENSOR_DEVICE_ATTR(in5_min, S_IWUSR | S_IRUGO,
show_in_min, store_in_min, 4);
static SENSOR_DEVICE_ATTR(in6_min, S_IWUSR | S_IRUGO,
show_in_min, store_in_min, 5);
static SENSOR_DEVICE_ATTR(in7_min, S_IWUSR | S_IRUGO,
show_in_min, store_in_min, 6);
static SENSOR_DEVICE_ATTR(in8_min, S_IWUSR | S_IRUGO,
show_in_min, store_in_min, 7);
static SENSOR_DEVICE_ATTR(in9_min, S_IWUSR | S_IRUGO,
show_in_min, store_in_min, 8);
static SENSOR_DEVICE_ATTR(in10_min, S_IWUSR | S_IRUGO,
show_in_min, store_in_min, 9);
static SENSOR_DEVICE_ATTR(in11_min, S_IWUSR | S_IRUGO,
show_in_min, store_in_min, 10);
static SENSOR_DEVICE_ATTR(in12_min, S_IWUSR | S_IRUGO,
show_in_min, store_in_min, 11);
static SENSOR_DEVICE_ATTR(in13_min, S_IWUSR | S_IRUGO,
show_in_min, store_in_min, 12);
static SENSOR_DEVICE_ATTR(in14_min, S_IWUSR | S_IRUGO,
show_in_min, store_in_min, 13);
static SENSOR_DEVICE_ATTR(in15_min, S_IWUSR | S_IRUGO,
show_in_min, store_in_min, 14);
static SENSOR_DEVICE_ATTR(in16_min, S_IWUSR | S_IRUGO,
show_in_min, store_in_min, 15);
static ssize_t show_in_max(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_in_max(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(in1_max, S_IWUSR | S_IRUGO,
show_in_max, store_in_max, 0);
static SENSOR_DEVICE_ATTR(in2_max, S_IWUSR | S_IRUGO,
show_in_max, store_in_max, 1);
static SENSOR_DEVICE_ATTR(in3_max, S_IWUSR | S_IRUGO,
show_in_max, store_in_max, 2);
static SENSOR_DEVICE_ATTR(in4_max, S_IWUSR | S_IRUGO,
show_in_max, store_in_max, 3);
static SENSOR_DEVICE_ATTR(in5_max, S_IWUSR | S_IRUGO,
show_in_max, store_in_max, 4);
static SENSOR_DEVICE_ATTR(in6_max, S_IWUSR | S_IRUGO,
show_in_max, store_in_max, 5);
static SENSOR_DEVICE_ATTR(in7_max, S_IWUSR | S_IRUGO,
show_in_max, store_in_max, 6);
static SENSOR_DEVICE_ATTR(in8_max, S_IWUSR | S_IRUGO,
show_in_max, store_in_max, 7);
static SENSOR_DEVICE_ATTR(in9_max, S_IWUSR | S_IRUGO,
show_in_max, store_in_max, 8);
static SENSOR_DEVICE_ATTR(in10_max, S_IWUSR | S_IRUGO,
show_in_max, store_in_max, 9);
static SENSOR_DEVICE_ATTR(in11_max, S_IWUSR | S_IRUGO,
show_in_max, store_in_max, 10);
static SENSOR_DEVICE_ATTR(in12_max, S_IWUSR | S_IRUGO,
show_in_max, store_in_max, 11);
static SENSOR_DEVICE_ATTR(in13_max, S_IWUSR | S_IRUGO,
show_in_max, store_in_max, 12);
static SENSOR_DEVICE_ATTR(in14_max, S_IWUSR | S_IRUGO,
show_in_max, store_in_max, 13);
static SENSOR_DEVICE_ATTR(in15_max, S_IWUSR | S_IRUGO,
show_in_max, store_in_max, 14);
static SENSOR_DEVICE_ATTR(in16_max, S_IWUSR | S_IRUGO,
show_in_max, store_in_max, 15);
static ssize_t show_temp(struct device *dev,
struct device_attribute *attr, char *buf)
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO, show_temp, NULL, 0);
static SENSOR_DEVICE_ATTR(temp2_input, S_IRUGO, show_temp, NULL, 1);
static SENSOR_DEVICE_ATTR(temp3_input, S_IRUGO, show_temp, NULL, 2);
static ssize_t show_temp_min(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_temp_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(temp1_min, S_IWUSR | S_IRUGO,
show_temp_min, store_temp_min, 0);
static SENSOR_DEVICE_ATTR(temp2_min, S_IWUSR | S_IRUGO,
show_temp_min, store_temp_min, 1);
static SENSOR_DEVICE_ATTR(temp3_min, S_IWUSR | S_IRUGO,
show_temp_min, store_temp_min, 2);
static ssize_t show_temp_max(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_temp_max(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(temp1_max, S_IWUSR | S_IRUGO,
show_temp_max, store_temp_max, 0);
static SENSOR_DEVICE_ATTR(temp2_max, S_IWUSR | S_IRUGO,
show_temp_max, store_temp_max, 1);
static SENSOR_DEVICE_ATTR(temp3_max, S_IWUSR | S_IRUGO,
show_temp_max, store_temp_max, 2);
static ssize_t show_temp_auto_base(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_temp_auto_base(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(temp1_auto_base, S_IWUSR | S_IRUGO,
show_temp_auto_base, store_temp_auto_base, 0);
static SENSOR_DEVICE_ATTR(temp2_auto_base, S_IWUSR | S_IRUGO,
show_temp_auto_base, store_temp_auto_base, 1);
static SENSOR_DEVICE_ATTR(temp3_auto_base, S_IWUSR | S_IRUGO,
show_temp_auto_base, store_temp_auto_base, 2);
static ssize_t show_temp_auto_boost(struct device *dev,
struct device_attribute *attr,char *buf)
static ssize_t store_temp_auto_boost(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(temp1_auto_boost, S_IWUSR | S_IRUGO,
show_temp_auto_boost, store_temp_auto_boost, 0);
static SENSOR_DEVICE_ATTR(temp2_auto_boost, S_IWUSR | S_IRUGO,
show_temp_auto_boost, store_temp_auto_boost, 1);
static SENSOR_DEVICE_ATTR(temp3_auto_boost, S_IWUSR | S_IRUGO,
show_temp_auto_boost, store_temp_auto_boost, 2);
static ssize_t show_temp_auto_boost_hyst(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t store_temp_auto_boost_hyst(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(temp1_auto_boost_hyst, S_IWUSR | S_IRUGO,
show_temp_auto_boost_hyst,
store_temp_auto_boost_hyst, 0);
static SENSOR_DEVICE_ATTR(temp2_auto_boost_hyst, S_IWUSR | S_IRUGO,
show_temp_auto_boost_hyst,
store_temp_auto_boost_hyst, 1);
static SENSOR_DEVICE_ATTR(temp3_auto_boost_hyst, S_IWUSR | S_IRUGO,
show_temp_auto_boost_hyst,
store_temp_auto_boost_hyst, 2);
static ssize_t show_temp_auto_offset(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_temp_auto_offset(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR_2(temp1_auto_offset1, S_IWUSR | S_IRUGO,
show_temp_auto_offset, store_temp_auto_offset, 0, 0);
static SENSOR_DEVICE_ATTR_2(temp1_auto_offset2, S_IWUSR | S_IRUGO,
show_temp_auto_offset, store_temp_auto_offset, 1, 0);
static SENSOR_DEVICE_ATTR_2(temp1_auto_offset3, S_IWUSR | S_IRUGO,
show_temp_auto_offset, store_temp_auto_offset, 2, 0);
static SENSOR_DEVICE_ATTR_2(temp1_auto_offset4, S_IWUSR | S_IRUGO,
show_temp_auto_offset, store_temp_auto_offset, 3, 0);
static SENSOR_DEVICE_ATTR_2(temp1_auto_offset5, S_IWUSR | S_IRUGO,
show_temp_auto_offset, store_temp_auto_offset, 4, 0);
static SENSOR_DEVICE_ATTR_2(temp1_auto_offset6, S_IWUSR | S_IRUGO,
show_temp_auto_offset, store_temp_auto_offset, 5, 0);
static SENSOR_DEVICE_ATTR_2(temp1_auto_offset7, S_IWUSR | S_IRUGO,
show_temp_auto_offset, store_temp_auto_offset, 6, 0);
static SENSOR_DEVICE_ATTR_2(temp1_auto_offset8, S_IWUSR | S_IRUGO,
show_temp_auto_offset, store_temp_auto_offset, 7, 0);
static SENSOR_DEVICE_ATTR_2(temp1_auto_offset9, S_IWUSR | S_IRUGO,
show_temp_auto_offset, store_temp_auto_offset, 8, 0);
static SENSOR_DEVICE_ATTR_2(temp1_auto_offset10, S_IWUSR | S_IRUGO,
show_temp_auto_offset, store_temp_auto_offset, 9, 0);
static SENSOR_DEVICE_ATTR_2(temp1_auto_offset11, S_IWUSR | S_IRUGO,
show_temp_auto_offset, store_temp_auto_offset, 10, 0);
static SENSOR_DEVICE_ATTR_2(temp1_auto_offset12, S_IWUSR | S_IRUGO,
show_temp_auto_offset, store_temp_auto_offset, 11, 0);
static SENSOR_DEVICE_ATTR_2(temp2_auto_offset1, S_IWUSR | S_IRUGO,
show_temp_auto_offset, store_temp_auto_offset, 0, 1);
static SENSOR_DEVICE_ATTR_2(temp2_auto_offset2, S_IWUSR | S_IRUGO,
show_temp_auto_offset, store_temp_auto_offset, 1, 1);
static SENSOR_DEVICE_ATTR_2(temp2_auto_offset3, S_IWUSR | S_IRUGO,
show_temp_auto_offset, store_temp_auto_offset, 2, 1);
static SENSOR_DEVICE_ATTR_2(temp2_auto_offset4, S_IWUSR | S_IRUGO,
show_temp_auto_offset, store_temp_auto_offset, 3, 1);
static SENSOR_DEVICE_ATTR_2(temp2_auto_offset5, S_IWUSR | S_IRUGO,
show_temp_auto_offset, store_temp_auto_offset, 4, 1);
static SENSOR_DEVICE_ATTR_2(temp2_auto_offset6, S_IWUSR | S_IRUGO,
show_temp_auto_offset, store_temp_auto_offset, 5, 1);
static SENSOR_DEVICE_ATTR_2(temp2_auto_offset7, S_IWUSR | S_IRUGO,
show_temp_auto_offset, store_temp_auto_offset, 6, 1);
static SENSOR_DEVICE_ATTR_2(temp2_auto_offset8, S_IWUSR | S_IRUGO,
show_temp_auto_offset, store_temp_auto_offset, 7, 1);
static SENSOR_DEVICE_ATTR_2(temp2_auto_offset9, S_IWUSR | S_IRUGO,
show_temp_auto_offset, store_temp_auto_offset, 8, 1);
static SENSOR_DEVICE_ATTR_2(temp2_auto_offset10, S_IWUSR | S_IRUGO,
show_temp_auto_offset, store_temp_auto_offset, 9, 1);
static SENSOR_DEVICE_ATTR_2(temp2_auto_offset11, S_IWUSR | S_IRUGO,
show_temp_auto_offset, store_temp_auto_offset, 10, 1);
static SENSOR_DEVICE_ATTR_2(temp2_auto_offset12, S_IWUSR | S_IRUGO,
show_temp_auto_offset, store_temp_auto_offset, 11, 1);
static SENSOR_DEVICE_ATTR_2(temp3_auto_offset1, S_IWUSR | S_IRUGO,
show_temp_auto_offset, store_temp_auto_offset, 0, 2);
static SENSOR_DEVICE_ATTR_2(temp3_auto_offset2, S_IWUSR | S_IRUGO,
show_temp_auto_offset, store_temp_auto_offset, 1, 2);
static SENSOR_DEVICE_ATTR_2(temp3_auto_offset3, S_IWUSR | S_IRUGO,
show_temp_auto_offset, store_temp_auto_offset, 2, 2);
static SENSOR_DEVICE_ATTR_2(temp3_auto_offset4, S_IWUSR | S_IRUGO,
show_temp_auto_offset, store_temp_auto_offset, 3, 2);
static SENSOR_DEVICE_ATTR_2(temp3_auto_offset5, S_IWUSR | S_IRUGO,
show_temp_auto_offset, store_temp_auto_offset, 4, 2);
static SENSOR_DEVICE_ATTR_2(temp3_auto_offset6, S_IWUSR | S_IRUGO,
show_temp_auto_offset, store_temp_auto_offset, 5, 2);
static SENSOR_DEVICE_ATTR_2(temp3_auto_offset7, S_IWUSR | S_IRUGO,
show_temp_auto_offset, store_temp_auto_offset, 6, 2);
static SENSOR_DEVICE_ATTR_2(temp3_auto_offset8, S_IWUSR | S_IRUGO,
show_temp_auto_offset, store_temp_auto_offset, 7, 2);
static SENSOR_DEVICE_ATTR_2(temp3_auto_offset9, S_IWUSR | S_IRUGO,
show_temp_auto_offset, store_temp_auto_offset, 8, 2);
static SENSOR_DEVICE_ATTR_2(temp3_auto_offset10, S_IWUSR | S_IRUGO,
show_temp_auto_offset, store_temp_auto_offset, 9, 2);
static SENSOR_DEVICE_ATTR_2(temp3_auto_offset11, S_IWUSR | S_IRUGO,
show_temp_auto_offset, store_temp_auto_offset, 10, 2);
static SENSOR_DEVICE_ATTR_2(temp3_auto_offset12, S_IWUSR | S_IRUGO,
show_temp_auto_offset, store_temp_auto_offset, 11, 2);
static ssize_t show_temp_auto_pwm_min(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_temp_auto_pwm_min(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(temp1_auto_pwm_min, S_IWUSR | S_IRUGO,
show_temp_auto_pwm_min,
store_temp_auto_pwm_min, 0);
static SENSOR_DEVICE_ATTR(temp2_auto_pwm_min, S_IWUSR | S_IRUGO,
show_temp_auto_pwm_min,
store_temp_auto_pwm_min, 1);
static SENSOR_DEVICE_ATTR(temp3_auto_pwm_min, S_IWUSR | S_IRUGO,
show_temp_auto_pwm_min,
store_temp_auto_pwm_min, 2);
static ssize_t show_temp_auto_offset_hyst(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_temp_auto_offset_hyst(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(temp1_auto_offset_hyst, S_IWUSR | S_IRUGO,
show_temp_auto_offset_hyst,
store_temp_auto_offset_hyst, 0);
static SENSOR_DEVICE_ATTR(temp2_auto_offset_hyst, S_IWUSR | S_IRUGO,
show_temp_auto_offset_hyst,
store_temp_auto_offset_hyst, 1);
static SENSOR_DEVICE_ATTR(temp3_auto_offset_hyst, S_IWUSR | S_IRUGO,
show_temp_auto_offset_hyst,
store_temp_auto_offset_hyst, 2);
static ssize_t show_fan_input(struct device *dev,
struct device_attribute *attr, char *buf)
static SENSOR_DEVICE_ATTR(fan1_input, S_IRUGO, show_fan_input, NULL, 0);
static SENSOR_DEVICE_ATTR(fan2_input, S_IRUGO, show_fan_input, NULL, 1);
static SENSOR_DEVICE_ATTR(fan3_input, S_IRUGO, show_fan_input, NULL, 2);
static SENSOR_DEVICE_ATTR(fan4_input, S_IRUGO, show_fan_input, NULL, 3);
static ssize_t show_fan_min(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_fan_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(fan1_min, S_IWUSR | S_IRUGO,
show_fan_min, store_fan_min, 0);
static SENSOR_DEVICE_ATTR(fan2_min, S_IWUSR | S_IRUGO,
show_fan_min, store_fan_min, 1);
static SENSOR_DEVICE_ATTR(fan3_min, S_IWUSR | S_IRUGO,
show_fan_min, store_fan_min, 2);
static SENSOR_DEVICE_ATTR(fan4_min, S_IWUSR | S_IRUGO,
show_fan_min, store_fan_min, 3);
static ssize_t show_fan_smart_tach(struct device *dev,
struct device_attribute *attr, char *buf)
static void lm93_write_fan_smart_tach(struct i2c_client *client,
struct lm93_data *data, int fan, long value)
static ssize_t store_fan_smart_tach(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(fan1_smart_tach, S_IWUSR | S_IRUGO,
show_fan_smart_tach, store_fan_smart_tach, 0);
static SENSOR_DEVICE_ATTR(fan2_smart_tach, S_IWUSR | S_IRUGO,
show_fan_smart_tach, store_fan_smart_tach, 1);
static SENSOR_DEVICE_ATTR(fan3_smart_tach, S_IWUSR | S_IRUGO,
show_fan_smart_tach, store_fan_smart_tach, 2);
static SENSOR_DEVICE_ATTR(fan4_smart_tach, S_IWUSR | S_IRUGO,
show_fan_smart_tach, store_fan_smart_tach, 3);
static ssize_t show_pwm(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t store_pwm(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(pwm1, S_IWUSR | S_IRUGO, show_pwm, store_pwm, 0);
static SENSOR_DEVICE_ATTR(pwm2, S_IWUSR | S_IRUGO, show_pwm, store_pwm, 1);
static ssize_t show_pwm_enable(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_pwm_enable(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(pwm1_enable, S_IWUSR | S_IRUGO,
show_pwm_enable, store_pwm_enable, 0);
static SENSOR_DEVICE_ATTR(pwm2_enable, S_IWUSR | S_IRUGO,
show_pwm_enable, store_pwm_enable, 1);
static ssize_t show_pwm_freq(struct device *dev, struct device_attribute *attr,
char *buf)
static void lm93_disable_fan_smart_tach(struct i2c_client *client,
struct lm93_data *data, int pwm)
static ssize_t store_pwm_freq(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(pwm1_freq, S_IWUSR | S_IRUGO,
show_pwm_freq, store_pwm_freq, 0);
static SENSOR_DEVICE_ATTR(pwm2_freq, S_IWUSR | S_IRUGO,
show_pwm_freq, store_pwm_freq, 1);
static ssize_t show_pwm_auto_channels(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_pwm_auto_channels(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(pwm1_auto_channels, S_IWUSR | S_IRUGO,
show_pwm_auto_channels, store_pwm_auto_channels, 0);
static SENSOR_DEVICE_ATTR(pwm2_auto_channels, S_IWUSR | S_IRUGO,
show_pwm_auto_channels, store_pwm_auto_channels, 1);
static ssize_t show_pwm_auto_spinup_min(struct device *dev,
struct device_attribute *attr,char *buf)
static ssize_t store_pwm_auto_spinup_min(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(pwm1_auto_spinup_min, S_IWUSR | S_IRUGO,
show_pwm_auto_spinup_min,
store_pwm_auto_spinup_min, 0);
static SENSOR_DEVICE_ATTR(pwm2_auto_spinup_min, S_IWUSR | S_IRUGO,
show_pwm_auto_spinup_min,
store_pwm_auto_spinup_min, 1);
static ssize_t show_pwm_auto_spinup_time(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_pwm_auto_spinup_time(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(pwm1_auto_spinup_time, S_IWUSR | S_IRUGO,
show_pwm_auto_spinup_time,
store_pwm_auto_spinup_time, 0);
static SENSOR_DEVICE_ATTR(pwm2_auto_spinup_time, S_IWUSR | S_IRUGO,
show_pwm_auto_spinup_time,
store_pwm_auto_spinup_time, 1);
static ssize_t show_pwm_auto_prochot_ramp(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_pwm_auto_prochot_ramp(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(pwm_auto_prochot_ramp, S_IRUGO | S_IWUSR,
show_pwm_auto_prochot_ramp,
store_pwm_auto_prochot_ramp);
static ssize_t show_pwm_auto_vrdhot_ramp(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_pwm_auto_vrdhot_ramp(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(pwm_auto_vrdhot_ramp, S_IRUGO | S_IWUSR,
show_pwm_auto_vrdhot_ramp,
store_pwm_auto_vrdhot_ramp);
static ssize_t show_vid(struct device *dev, struct device_attribute *attr,
char *buf)
static SENSOR_DEVICE_ATTR(cpu0_vid, S_IRUGO, show_vid, NULL, 0);
static SENSOR_DEVICE_ATTR(cpu1_vid, S_IRUGO, show_vid, NULL, 1);
static ssize_t show_prochot(struct device *dev, struct device_attribute *attr,
char *buf)
static SENSOR_DEVICE_ATTR(prochot1, S_IRUGO, show_prochot, NULL, 0);
static SENSOR_DEVICE_ATTR(prochot2, S_IRUGO, show_prochot, NULL, 1);
static ssize_t show_prochot_avg(struct device *dev,
struct device_attribute *attr, char *buf)
static SENSOR_DEVICE_ATTR(prochot1_avg, S_IRUGO, show_prochot_avg, NULL, 0);
static SENSOR_DEVICE_ATTR(prochot2_avg, S_IRUGO, show_prochot_avg, NULL, 1);
static ssize_t show_prochot_max(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_prochot_max(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(prochot1_max, S_IWUSR | S_IRUGO,
show_prochot_max, store_prochot_max, 0);
static SENSOR_DEVICE_ATTR(prochot2_max, S_IWUSR | S_IRUGO,
show_prochot_max, store_prochot_max, 1);
static const u8 prochot_override_mask[] = ;
static ssize_t show_prochot_override(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_prochot_override(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(prochot1_override, S_IWUSR | S_IRUGO,
show_prochot_override, store_prochot_override, 0);
static SENSOR_DEVICE_ATTR(prochot2_override, S_IWUSR | S_IRUGO,
show_prochot_override, store_prochot_override, 1);
static ssize_t show_prochot_interval(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_prochot_interval(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(prochot1_interval, S_IWUSR | S_IRUGO,
show_prochot_interval, store_prochot_interval, 0);
static SENSOR_DEVICE_ATTR(prochot2_interval, S_IWUSR | S_IRUGO,
show_prochot_interval, store_prochot_interval, 1);
static ssize_t show_prochot_override_duty_cycle(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t store_prochot_override_duty_cycle(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(prochot_override_duty_cycle, S_IRUGO | S_IWUSR,
show_prochot_override_duty_cycle,
store_prochot_override_duty_cycle);
static ssize_t show_prochot_short(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_prochot_short(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(prochot_short, S_IRUGO | S_IWUSR,
show_prochot_short, store_prochot_short);
static ssize_t show_vrdhot(struct device *dev, struct device_attribute *attr,
char *buf)
static SENSOR_DEVICE_ATTR(vrdhot1, S_IRUGO, show_vrdhot, NULL, 0);
static SENSOR_DEVICE_ATTR(vrdhot2, S_IRUGO, show_vrdhot, NULL, 1);
static ssize_t show_gpio(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(gpio, S_IRUGO, show_gpio, NULL);
static ssize_t show_alarms(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(alarms, S_IRUGO, show_alarms, NULL);
static struct attribute *lm93_attrs[] = ;
static struct attribute_group lm93_attr_grp = ;
static void lm93_init_client(struct i2c_client *client)
static int lm93_detect(struct i2c_client *client, struct i2c_board_info *info)
static int lm93_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int lm93_remove(struct i2c_client *client)
static const struct i2c_device_id lm93_id[] = ;
MODULE_DEVICE_TABLE(i2c, lm93_id);
static struct i2c_driver lm93_driver = ;
static int __init lm93_init(void)
static void __exit lm93_exit(void)
MODULE_AUTHOR("Mark M. Hoffman <mhoffman@lightlink.com>, "
"Hans J. Koch <hjk@hansjkoch.de>");
MODULE_DESCRIPTION("LM93 driver");
MODULE_LICENSE("GPL");
module_init(lm93_init);
module_exit(lm93_exit);
