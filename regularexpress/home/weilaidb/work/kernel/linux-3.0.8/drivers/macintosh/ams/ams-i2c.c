#define AMS_COMMAND	0x00
#define AMS_STATUS	0x01
#define AMS_CTRL1	0x02
#define AMS_CTRL2	0x03
#define AMS_CTRL3	0x04
#define AMS_DATA1	0x05
#define AMS_DATA2	0x06
#define AMS_DATA3	0x07
#define AMS_DATA4	0x08
#define AMS_DATAX	0x20
#define AMS_DATAY	0x21
#define AMS_DATAZ	0x22
#define AMS_FREEFALL	0x24
#define AMS_SHOCK	0x25
#define AMS_SENSLOW	0x26
#define AMS_SENSHIGH	0x27
#define AMS_CTRLX	0x28
#define AMS_CTRLY	0x29
#define AMS_CTRLZ	0x2A
#define AMS_UNKNOWN1	0x2B
#define AMS_UNKNOWN2	0x2C
#define AMS_UNKNOWN3	0x2D
#define AMS_VENDOR	0x2E
enum ams_i2c_cmd ;
static int ams_i2c_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int ams_i2c_remove(struct i2c_client *client);
static const struct i2c_device_id ams_id[] = ;
MODULE_DEVICE_TABLE(i2c, ams_id);
static struct i2c_driver ams_i2c_driver = ;
static s32 ams_i2c_read(u8 reg)
static int ams_i2c_write(u8 reg, u8 value)
static int ams_i2c_cmd(enum ams_i2c_cmd cmd)
static void ams_i2c_set_irq(enum ams_irq reg, char enable)
static void ams_i2c_clear_irq(enum ams_irq reg)
static u8 ams_i2c_get_vendor(void)
static void ams_i2c_get_xyz(s8 *x, s8 *y, s8 *z)
static int ams_i2c_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int ams_i2c_remove(struct i2c_client *client)
static void ams_i2c_exit(void)
int __init ams_i2c_init(struct device_node *np)
