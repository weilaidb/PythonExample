#define PMC_CTRL		0x0
#define PMC_CTRL_INTR_LOW	(1 << 17)
static struct regulator_consumer_supply tps658621_ldo0_supply[] = ;
static struct regulator_init_data ldo0_data = ;
#define HARMONY_REGULATOR_INIT(_id, _minmv, _maxmv)			\
static struct regulator_init_data _id##_data =
HARMONY_REGULATOR_INIT(sm0, 725, 1500);
HARMONY_REGULATOR_INIT(sm1, 725, 1500);
HARMONY_REGULATOR_INIT(sm2, 3000, 4550);
HARMONY_REGULATOR_INIT(ldo1, 725, 1500);
HARMONY_REGULATOR_INIT(ldo2, 725, 1500);
HARMONY_REGULATOR_INIT(ldo3, 1250, 3300);
HARMONY_REGULATOR_INIT(ldo4, 1700, 2475);
HARMONY_REGULATOR_INIT(ldo5, 1250, 3300);
HARMONY_REGULATOR_INIT(ldo6, 1250, 3300);
HARMONY_REGULATOR_INIT(ldo7, 1250, 3300);
HARMONY_REGULATOR_INIT(ldo8, 1250, 3300);
HARMONY_REGULATOR_INIT(ldo9, 1250, 3300);
#define TPS_REG(_id, _data)			\
static struct tps6586x_subdev_info tps_devs[] = ;
static struct tps6586x_platform_data tps_platform = ;
static struct i2c_board_info __initdata harmony_regulators[] = ;
int __init harmony_regulator_init(void)
