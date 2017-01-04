#define MAX8649_DCDC_VMIN	750000
#define MAX8649_DCDC_VMAX	1380000
#define MAX8649_DCDC_STEP	10000
#define MAX8649_VOL_MASK	0x3f
#define MAX8649_MODE0		0x00
#define MAX8649_MODE1		0x01
#define MAX8649_MODE2		0x02
#define MAX8649_MODE3		0x03
#define MAX8649_CONTROL		0x04
#define MAX8649_SYNC		0x05
#define MAX8649_RAMP		0x06
#define MAX8649_CHIP_ID1	0x08
#define MAX8649_CHIP_ID2	0x09
#define MAX8649_EN_PD		(1 << 7)
#define MAX8649_VID0_PD		(1 << 6)
#define MAX8649_VID1_PD		(1 << 5)
#define MAX8649_VID_MASK	(3 << 5)
#define MAX8649_FORCE_PWM	(1 << 7)
#define MAX8649_SYNC_EXTCLK	(1 << 6)
#define MAX8649_EXT_MASK	(3 << 6)
#define MAX8649_RAMP_MASK	(7 << 5)
#define MAX8649_RAMP_DOWN	(1 << 1)
struct max8649_regulator_info ;
static inline int max8649_read_device(struct i2c_client *i2c,
int reg, int bytes, void *dest)
static inline int max8649_write_device(struct i2c_client *i2c,
int reg, int bytes, void *src)
static int max8649_reg_read(struct i2c_client *i2c, int reg)
static int max8649_set_bits(struct i2c_client *i2c, int reg,
unsigned char mask, unsigned char data)
static inline int check_range(int min_uV, int max_uV)
static int max8649_list_voltage(struct regulator_dev *rdev, unsigned index)
static int max8649_get_voltage(struct regulator_dev *rdev)
static int max8649_set_voltage(struct regulator_dev *rdev,
int min_uV, int max_uV, unsigned *selector)
static int max8649_enable(struct regulator_dev *rdev)
static int max8649_disable(struct regulator_dev *rdev)
static int max8649_is_enabled(struct regulator_dev *rdev)
static int max8649_enable_time(struct regulator_dev *rdev)
static int max8649_set_mode(struct regulator_dev *rdev, unsigned int mode)
static unsigned int max8649_get_mode(struct regulator_dev *rdev)
static struct regulator_ops max8649_dcdc_ops = ;
static struct regulator_desc dcdc_desc = ;
static int __devinit max8649_regulator_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit max8649_regulator_remove(struct i2c_client *client)
static const struct i2c_device_id max8649_id[] = ;
MODULE_DEVICE_TABLE(i2c, max8649_id);
static struct i2c_driver max8649_driver = ;
static int __init max8649_init(void)
subsys_initcall(max8649_init);
static void __exit max8649_exit(void)
module_exit(max8649_exit);
MODULE_DESCRIPTION("MAXIM 8649 voltage regulator driver");
MODULE_AUTHOR("Haojian Zhuang <haojian.zhuang@marvell.com>");
MODULE_LICENSE("GPL");
