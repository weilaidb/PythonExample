#define LDO_A_SETTING		0x16
#define LDO_C_SETTING		0x10
#define LDO_D_SETTING		0x10
#define LDO_E_SETTING		0x10
#define LDO_E_SLEEP_SETTING	0x00
#define LDO_F_SETTING		0xD0
#define LDO_G_SETTING		0x00
#define LDO_H_SETTING		0x18
#define LDO_K_SETTING		0x00
#define LDO_EXT_SETTING		0x00
#define BUCK_SETTING	0x7D
#define BUCK_SLEEP_SETTING	0xAC
static struct regulator_consumer_supply supply_ldo_c[] = ;
static struct regulator_consumer_supply supply_ldo_d[] = ;
static struct regulator_consumer_supply supply_ldo_g[] = ;
static struct regulator_consumer_supply supply_ldo_h[] = ;
static struct regulator_consumer_supply supply_ldo_k[] = ;
static struct regulator_consumer_supply supply_ldo_ext[] = ;
#define LDO_A_VOLTAGE 2750000
#define LDO_C_VOLTAGE 2650000
#define LDO_D_VOLTAGE 2650000
static struct ab3100_platform_data ab3100_plf_data = ;
static struct abx500_init_settings ab3550_init_settings[] = ;
static struct ab3550_platform_data ab3550_plf_data = ;
static struct i2c_board_info __initdata bus0_i2c_board_info[] = ;
static struct i2c_board_info __initdata bus1_i2c_board_info[] = ;
void __init u300_i2c_register_board_devices(void)
