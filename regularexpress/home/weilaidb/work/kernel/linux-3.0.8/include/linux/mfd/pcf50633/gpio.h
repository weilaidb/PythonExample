#define __LINUX_MFD_PCF50633_GPIO_H
#define PCF50633_GPIO1		1
#define PCF50633_GPIO2		2
#define PCF50633_GPIO3		3
#define PCF50633_GPO		4
#define PCF50633_REG_GPIO1CFG	0x14
#define PCF50633_REG_GPIO2CFG	0x15
#define PCF50633_REG_GPIO3CFG	0x16
#define PCF50633_REG_GPOCFG 	0x17
#define PCF50633_GPOCFG_GPOSEL_MASK	0x07
enum pcf50633_reg_gpocfg ;
int pcf50633_gpio_set(struct pcf50633 *pcf, int gpio, u8 val);
u8 pcf50633_gpio_get(struct pcf50633 *pcf, int gpio);
int pcf50633_gpio_invert_set(struct pcf50633 *, int gpio, int invert);
int pcf50633_gpio_invert_get(struct pcf50633 *pcf, int gpio);
int pcf50633_gpio_power_supply_set(struct pcf50633 *,
int gpio, int regulator, int on);
