#define MAX8925_OUT5VEN			0x54
#define MAX8925_OUT3VEN			0x58
#define MAX8925_CHG_CNTL1		0x7c
#define MAX8925_CHG_STAT_VSYSLOW	(1 << 0)
#define MAX8925_CHG_STAT_MODE_MASK	(3 << 2)
#define MAX8925_CHG_STAT_EN_MASK	(1 << 4)
#define MAX8925_CHG_MBDET		(1 << 1)
#define MAX8925_CHG_AC_RANGE_MASK	(3 << 6)
#define MAX8925_ADC_RES_CNFG1		0x06
#define MAX8925_ADC_AVG_CNFG1		0x07
#define MAX8925_ADC_ACQ_CNFG1		0x08
#define MAX8925_ADC_ACQ_CNFG2		0x09
#define MAX8925_ADC_AUX2		0x62
#define MAX8925_ADC_VCHG		0x64
#define MAX8925_ADC_VBBATT		0x66
#define MAX8925_ADC_VMBATT		0x68
#define MAX8925_ADC_ISNS		0x6a
#define MAX8925_ADC_THM			0x6c
#define MAX8925_ADC_TDIE		0x6e
#define MAX8925_CMD_AUX2		0xc8
#define MAX8925_CMD_VCHG		0xd0
#define MAX8925_CMD_VBBATT		0xd8
#define MAX8925_CMD_VMBATT		0xe0
#define MAX8925_CMD_ISNS		0xe8
#define MAX8925_CMD_THM			0xf0
#define MAX8925_CMD_TDIE		0xf8
enum ;
struct max8925_power_info ;
static int __set_charger(struct max8925_power_info *info, int enable)
static irqreturn_t max8925_charger_handler(int irq, void *data)
static int start_measure(struct max8925_power_info *info, int type)
static int max8925_ac_get_prop(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static enum power_supply_property max8925_ac_props[] = ;
static int max8925_usb_get_prop(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static enum power_supply_property max8925_usb_props[] = ;
static int max8925_bat_get_prop(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static enum power_supply_property max8925_battery_props[] = ;
#define REQUEST_IRQ(_irq, _name)					\
do  while (0)
static __devinit int max8925_init_charger(struct max8925_chip *chip,
struct max8925_power_info *info)
static __devexit int max8925_deinit_charger(struct max8925_power_info *info)
static __devinit int max8925_power_probe(struct platform_device *pdev)
static __devexit int max8925_power_remove(struct platform_device *pdev)
static struct platform_driver max8925_power_driver = ;
static int __init max8925_power_init(void)
module_init(max8925_power_init);
static void __exit max8925_power_exit(void)
module_exit(max8925_power_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Power supply driver for MAX8925");
MODULE_ALIAS("platform:max8925-power");
