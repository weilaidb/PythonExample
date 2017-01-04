#define DRIVER_DESC "Driver for Austria Microsystems AS5011 joystick"
#define MODULE_DEVICE_ALIAS "as5011"
MODULE_AUTHOR("Fabien Marteau <fabien.marteau@armadeus.com>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define AS5011_CTRL1		0x76
#define AS5011_CTRL2		0x75
#define AS5011_XP		0x43
#define AS5011_XN		0x44
#define AS5011_YP		0x53
#define AS5011_YN		0x54
#define AS5011_X_REG		0x41
#define AS5011_Y_REG		0x42
#define AS5011_X_RES_INT	0x51
#define AS5011_Y_RES_INT	0x52
#define AS5011_CTRL1_LP_PULSED		0x80
#define AS5011_CTRL1_LP_ACTIVE		0x40
#define AS5011_CTRL1_LP_CONTINUE	0x20
#define AS5011_CTRL1_INT_WUP_EN		0x10
#define AS5011_CTRL1_INT_ACT_EN		0x08
#define AS5011_CTRL1_EXT_CLK_EN		0x04
#define AS5011_CTRL1_SOFT_RST		0x02
#define AS5011_CTRL1_DATA_VALID		0x01
#define AS5011_CTRL2_EXT_SAMPLE_EN	0x08
#define AS5011_CTRL2_RC_BIAS_ON		0x04
#define AS5011_CTRL2_INV_SPINNING	0x02
#define AS5011_MAX_AXIS	80
#define AS5011_MIN_AXIS	(-80)
#define AS5011_FUZZ	8
#define AS5011_FLAT	40
struct as5011_device ;
static int as5011_i2c_write(struct i2c_client *client,
uint8_t aregaddr,
uint8_t avalue)
static int as5011_i2c_read(struct i2c_client *client,
uint8_t aregaddr, signed char *value)
static irqreturn_t as5011_button_interrupt(int irq, void *dev_id)
static irqreturn_t as5011_axis_interrupt(int irq, void *dev_id)
static int __devinit as5011_configure_chip(struct as5011_device *as5011,
const struct as5011_platform_data *plat_dat)
static int __devinit as5011_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit as5011_remove(struct i2c_client *client)
static const struct i2c_device_id as5011_id[] = ;
MODULE_DEVICE_TABLE(i2c, as5011_id);
static struct i2c_driver as5011_driver = ;
static int __init as5011_init(void)
module_init(as5011_init);
static void __exit as5011_exit(void)
module_exit(as5011_exit);
