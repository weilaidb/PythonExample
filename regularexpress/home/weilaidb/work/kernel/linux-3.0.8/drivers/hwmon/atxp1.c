MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("System voltages control via Attansic ATXP1");
MODULE_VERSION("0.6.3");
MODULE_AUTHOR("Sebastian Witt <se.witt@gmx.net>");
#define ATXP1_VID	0x00
#define ATXP1_CVID	0x01
#define ATXP1_GPIO1	0x06
#define ATXP1_GPIO2	0x0a
#define ATXP1_VIDENA	0x20
#define ATXP1_VIDMASK	0x1f
#define ATXP1_GPIO1MASK	0x0f
static const unsigned short normal_i2c[] = ;
static int atxp1_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int atxp1_remove(struct i2c_client *client);
static struct atxp1_data * atxp1_update_device(struct device *dev);
static int atxp1_detect(struct i2c_client *client, struct i2c_board_info *info);
static const struct i2c_device_id atxp1_id[] = ;
MODULE_DEVICE_TABLE(i2c, atxp1_id);
static struct i2c_driver atxp1_driver = ;
struct atxp1_data ;
static struct atxp1_data * atxp1_update_device(struct device *dev)
static ssize_t atxp1_showvcore(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t atxp1_storevcore(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(cpu0_vid, S_IRUGO | S_IWUSR, atxp1_showvcore, atxp1_storevcore);
static ssize_t atxp1_showgpio1(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t atxp1_storegpio1(struct device *dev, struct device_attribute *attr, const char*buf, size_t count)
static DEVICE_ATTR(gpio1, S_IRUGO | S_IWUSR, atxp1_showgpio1, atxp1_storegpio1);
static ssize_t atxp1_showgpio2(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t atxp1_storegpio2(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(gpio2, S_IRUGO | S_IWUSR, atxp1_showgpio2, atxp1_storegpio2);
static struct attribute *atxp1_attributes[] = ;
static const struct attribute_group atxp1_group = ;
static int atxp1_detect(struct i2c_client *new_client,
struct i2c_board_info *info)
static int atxp1_probe(struct i2c_client *new_client,
const struct i2c_device_id *id)
;
static int atxp1_remove(struct i2c_client *client)
;
static int __init atxp1_init(void)
;
static void __exit atxp1_exit(void)
;
module_init(atxp1_init);
module_exit(atxp1_exit);
