#define DEVNAME "lm95241"
static const unsigned short normal_i2c[] = ;
#define LM95241_REG_R_MAN_ID		0xFE
#define LM95241_REG_R_CHIP_ID		0xFF
#define LM95241_REG_R_STATUS		0x02
#define LM95241_REG_RW_CONFIG		0x03
#define LM95241_REG_RW_REM_FILTER	0x06
#define LM95241_REG_RW_TRUTHERM		0x07
#define LM95241_REG_W_ONE_SHOT		0x0F
#define LM95241_REG_R_LOCAL_TEMPH	0x10
#define LM95241_REG_R_REMOTE1_TEMPH	0x11
#define LM95241_REG_R_REMOTE2_TEMPH	0x12
#define LM95241_REG_R_LOCAL_TEMPL	0x20
#define LM95241_REG_R_REMOTE1_TEMPL	0x21
#define LM95241_REG_R_REMOTE2_TEMPL	0x22
#define LM95241_REG_RW_REMOTE_MODEL	0x30
#define CFG_STOP 0x40
#define CFG_CR0076 0x00
#define CFG_CR0182 0x10
#define CFG_CR1000 0x20
#define CFG_CR2700 0x30
#define R1MS_SHIFT 0
#define R2MS_SHIFT 2
#define R1MS_MASK (0x01 << (R1MS_SHIFT))
#define R2MS_MASK (0x01 << (R2MS_SHIFT))
#define R1DF_SHIFT 1
#define R2DF_SHIFT 2
#define R1DF_MASK (0x01 << (R1DF_SHIFT))
#define R2DF_MASK (0x01 << (R2DF_SHIFT))
#define R1FE_MASK 0x01
#define R2FE_MASK 0x05
#define TT1_SHIFT 0
#define TT2_SHIFT 4
#define TT_OFF 0
#define TT_ON 1
#define TT_MASK 7
#define MANUFACTURER_ID 0x01
#define DEFAULT_REVISION 0xA4
static const u8 lm95241_reg_address[] = ;
struct lm95241_data ;
static int temp_from_reg_signed(u8 val_h, u8 val_l)
static int temp_from_reg_unsigned(u8 val_h, u8 val_l)
static struct lm95241_data *lm95241_update_device(struct device *dev)
static ssize_t show_input(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_type(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_type(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_min(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_max(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_max(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_interval(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_interval(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO, show_input, NULL, 0);
static SENSOR_DEVICE_ATTR(temp2_input, S_IRUGO, show_input, NULL, 2);
static SENSOR_DEVICE_ATTR(temp3_input, S_IRUGO, show_input, NULL, 4);
static SENSOR_DEVICE_ATTR(temp2_type, S_IWUSR | S_IRUGO, show_type, set_type,
R1MS_MASK);
static SENSOR_DEVICE_ATTR(temp3_type, S_IWUSR | S_IRUGO, show_type, set_type,
R2MS_MASK);
static SENSOR_DEVICE_ATTR(temp2_min, S_IWUSR | S_IRUGO, show_min, set_min,
R1DF_MASK);
static SENSOR_DEVICE_ATTR(temp3_min, S_IWUSR | S_IRUGO, show_min, set_min,
R2DF_MASK);
static SENSOR_DEVICE_ATTR(temp2_max, S_IWUSR | S_IRUGO, show_max, set_max,
R1DF_MASK);
static SENSOR_DEVICE_ATTR(temp3_max, S_IWUSR | S_IRUGO, show_max, set_max,
R2DF_MASK);
static DEVICE_ATTR(update_interval, S_IWUSR | S_IRUGO, show_interval,
set_interval);
static struct attribute *lm95241_attributes[] = ;
static const struct attribute_group lm95241_group = ;
static int lm95241_detect(struct i2c_client *new_client,
struct i2c_board_info *info)
static void lm95241_init_client(struct i2c_client *client)
static int lm95241_probe(struct i2c_client *new_client,
const struct i2c_device_id *id)
static int lm95241_remove(struct i2c_client *client)
static const struct i2c_device_id lm95241_id[] = ;
MODULE_DEVICE_TABLE(i2c, lm95241_id);
static struct i2c_driver lm95241_driver = ;
static int __init sensors_lm95241_init(void)
static void __exit sensors_lm95241_exit(void)
MODULE_AUTHOR("Davide Rizzo <elpa.rizzo@gmail.com>");
MODULE_DESCRIPTION("LM95241 sensor driver");
MODULE_LICENSE("GPL");
module_init(sensors_lm95241_init);
module_exit(sensors_lm95241_exit);
