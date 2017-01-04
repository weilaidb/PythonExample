#define ADS7828_NCH 8
#define ADS7828_CMD_SD_SE 0x80
#define ADS7828_CMD_SD_DIFF 0x00
#define ADS7828_CMD_PD0 0x0
#define ADS7828_CMD_PD1 0x04
#define ADS7828_CMD_PD2 0x08
#define ADS7828_CMD_PD3 0x0C
#define ADS7828_INT_VREF_MV 2500
static const unsigned short normal_i2c[] = ;
static int se_input = 1;
static int int_vref = 1;
static int vref_mv = ADS7828_INT_VREF_MV;
module_param(se_input, bool, S_IRUGO);
module_param(int_vref, bool, S_IRUGO);
module_param(vref_mv, int, S_IRUGO);
static u8 ads7828_cmd_byte;
static unsigned int ads7828_lsb_resol;
struct ads7828_data ;
static int ads7828_detect(struct i2c_client *client,
struct i2c_board_info *info);
static int ads7828_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static u16 ads7828_read_value(struct i2c_client *client, u8 reg)
static inline u8 channel_cmd_byte(int ch)
static struct ads7828_data *ads7828_update_device(struct device *dev)
static ssize_t show_in(struct device *dev, struct device_attribute *da,
char *buf)
#define in_reg(offset)\
static SENSOR_DEVICE_ATTR(in##offset##_input, S_IRUGO, show_in,\
NULL, offset)
in_reg(0);
in_reg(1);
in_reg(2);
in_reg(3);
in_reg(4);
in_reg(5);
in_reg(6);
in_reg(7);
static struct attribute *ads7828_attributes[] = ;
static const struct attribute_group ads7828_group = ;
static int ads7828_remove(struct i2c_client *client)
static const struct i2c_device_id ads7828_id[] = ;
MODULE_DEVICE_TABLE(i2c, ads7828_id);
static struct i2c_driver ads7828_driver = ;
static int ads7828_detect(struct i2c_client *client,
struct i2c_board_info *info)
static int ads7828_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __init sensors_ads7828_init(void)
static void __exit sensors_ads7828_exit(void)
MODULE_AUTHOR("Steve Hardy <shardy@redhat.com>");
MODULE_DESCRIPTION("ADS7828 driver");
MODULE_LICENSE("GPL");
module_init(sensors_ads7828_init);
module_exit(sensors_ads7828_exit);
