#define MAX8660_DCDC_MIN_UV	 725000
#define MAX8660_DCDC_MAX_UV	1800000
#define MAX8660_DCDC_STEP	  25000
#define MAX8660_DCDC_MAX_SEL	0x2b
#define MAX8660_LDO5_MIN_UV	1700000
#define MAX8660_LDO5_MAX_UV	2000000
#define MAX8660_LDO5_STEP	  25000
#define MAX8660_LDO5_MAX_SEL	0x0c
#define MAX8660_LDO67_MIN_UV	1800000
#define MAX8660_LDO67_MAX_UV	3300000
#define MAX8660_LDO67_STEP	 100000
#define MAX8660_LDO67_MAX_SEL	0x0f
enum ;
struct max8660 ;
static int max8660_write(struct max8660 *max8660, u8 reg, u8 mask, u8 val)
static int max8660_dcdc_is_enabled(struct regulator_dev *rdev)
static int max8660_dcdc_enable(struct regulator_dev *rdev)
static int max8660_dcdc_disable(struct regulator_dev *rdev)
static int max8660_dcdc_list(struct regulator_dev *rdev, unsigned selector)
static int max8660_dcdc_get(struct regulator_dev *rdev)
static int max8660_dcdc_set(struct regulator_dev *rdev, int min_uV, int max_uV,
unsigned int *s)
static struct regulator_ops max8660_dcdc_ops = ;
static int max8660_ldo5_list(struct regulator_dev *rdev, unsigned selector)
static int max8660_ldo5_get(struct regulator_dev *rdev)
static int max8660_ldo5_set(struct regulator_dev *rdev, int min_uV, int max_uV,
unsigned int *s)
static struct regulator_ops max8660_ldo5_ops = ;
static int max8660_ldo67_is_enabled(struct regulator_dev *rdev)
static int max8660_ldo67_enable(struct regulator_dev *rdev)
static int max8660_ldo67_disable(struct regulator_dev *rdev)
static int max8660_ldo67_list(struct regulator_dev *rdev, unsigned selector)
static int max8660_ldo67_get(struct regulator_dev *rdev)
static int max8660_ldo67_set(struct regulator_dev *rdev, int min_uV,
int max_uV, unsigned int *s)
static struct regulator_ops max8660_ldo67_ops = ;
static struct regulator_desc max8660_reg[] = ;
static int __devinit max8660_probe(struct i2c_client *client,
const struct i2c_device_id *i2c_id)
static int __devexit max8660_remove(struct i2c_client *client)
static const struct i2c_device_id max8660_id[] = ;
MODULE_DEVICE_TABLE(i2c, max8660_id);
static struct i2c_driver max8660_driver = ;
static int __init max8660_init(void)
subsys_initcall(max8660_init);
static void __exit max8660_exit(void)
module_exit(max8660_exit);
MODULE_DESCRIPTION("MAXIM 8660/8661 voltage regulator driver");
MODULE_AUTHOR("Wolfram Sang");
MODULE_LICENSE("GPL v2");
