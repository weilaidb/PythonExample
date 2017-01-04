enum pcf50633_regulator_id ;
#define PCF50633_REG_AUTOOUT	0x1a
#define PCF50633_REG_DOWN1OUT	0x1e
#define PCF50633_REG_DOWN2OUT	0x22
#define PCF50633_REG_MEMLDOOUT	0x26
#define PCF50633_REG_LDO1OUT	0x2d
#define PCF50633_REG_LDO2OUT	0x2f
#define PCF50633_REG_LDO3OUT	0x31
#define PCF50633_REG_LDO4OUT	0x33
#define PCF50633_REG_LDO5OUT	0x35
#define PCF50633_REG_LDO6OUT	0x37
#define PCF50633_REG_HCLDOOUT	0x39
static const u8 pcf50633_regulator_registers[PCF50633_NUM_REGULATORS] = ;
int pcf50633_gpio_set(struct pcf50633 *pcf, int gpio, u8 val)
EXPORT_SYMBOL_GPL(pcf50633_gpio_set);
u8 pcf50633_gpio_get(struct pcf50633 *pcf, int gpio)
EXPORT_SYMBOL_GPL(pcf50633_gpio_get);
int pcf50633_gpio_invert_set(struct pcf50633 *pcf, int gpio, int invert)
EXPORT_SYMBOL_GPL(pcf50633_gpio_invert_set);
int pcf50633_gpio_invert_get(struct pcf50633 *pcf, int gpio)
EXPORT_SYMBOL_GPL(pcf50633_gpio_invert_get);
int pcf50633_gpio_power_supply_set(struct pcf50633 *pcf,
int gpio, int regulator, int on)
EXPORT_SYMBOL_GPL(pcf50633_gpio_power_supply_set);
MODULE_LICENSE("GPL");
