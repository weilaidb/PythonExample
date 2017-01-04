#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static int input_mode;
module_param(input_mode, int, 0);
MODULE_PARM_DESC(input_mode,
"Analog input mode:\n"
" 0 = four single ended inputs\n"
" 1 = three differential inputs\n"
" 2 = single ended and differential mixed\n"
" 3 = two differential inputs\n");
#define PCF8591_CONTROL_AOEF		0x40
#define PCF8591_CONTROL_AIP_MASK	0x30
#define PCF8591_CONTROL_AINC		0x04
#define PCF8591_CONTROL_AICH_MASK	0x03
#define PCF8591_INIT_CONTROL	((input_mode << 4) | PCF8591_CONTROL_AOEF)
#define PCF8591_INIT_AOUT	0
#define REG_TO_SIGNED(reg)	(((reg) & 0x80)?((reg) - 256):(reg))
struct pcf8591_data ;
static void pcf8591_init_client(struct i2c_client *client);
static int pcf8591_read_channel(struct device *dev, int channel);
#define show_in_channel(channel)					\
static ssize_t show_in##channel##_input(struct device *dev, struct device_attribute *attr, char *buf)	\
\
static DEVICE_ATTR(in##channel##_input, S_IRUGO,			\
show_in##channel##_input, NULL);
show_in_channel(0);
show_in_channel(1);
show_in_channel(2);
show_in_channel(3);
static ssize_t show_out0_ouput(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t set_out0_output(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(out0_output, S_IWUSR | S_IRUGO,
show_out0_ouput, set_out0_output);
static ssize_t show_out0_enable(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t set_out0_enable(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(out0_enable, S_IWUSR | S_IRUGO,
show_out0_enable, set_out0_enable);
static struct attribute *pcf8591_attributes[] = ;
static const struct attribute_group pcf8591_attr_group = ;
static struct attribute *pcf8591_attributes_opt[] = ;
static const struct attribute_group pcf8591_attr_group_opt = ;
static int pcf8591_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int pcf8591_remove(struct i2c_client *client)
static void pcf8591_init_client(struct i2c_client *client)
static int pcf8591_read_channel(struct device *dev, int channel)
static const struct i2c_device_id pcf8591_id[] = ;
MODULE_DEVICE_TABLE(i2c, pcf8591_id);
static struct i2c_driver pcf8591_driver = ;
static int __init pcf8591_init(void)
static void __exit pcf8591_exit(void)
MODULE_AUTHOR("Aurelien Jarno <aurelien@aurel32.net>");
MODULE_DESCRIPTION("PCF8591 driver");
MODULE_LICENSE("GPL");
module_init(pcf8591_init);
module_exit(pcf8591_exit);
