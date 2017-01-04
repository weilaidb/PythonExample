#define __ASM_ARCH_OMAP_GPIO_SWITCH_H
#define OMAP_GPIO_SWITCH_TYPE_COVER		0x0000
#define OMAP_GPIO_SWITCH_TYPE_CONNECTION	0x0001
#define OMAP_GPIO_SWITCH_TYPE_ACTIVITY		0x0002
#define OMAP_GPIO_SWITCH_FLAG_INVERTED		0x0001
#define OMAP_GPIO_SWITCH_FLAG_OUTPUT		0x0002
struct omap_gpio_switch ;
extern void omap_register_gpio_switches(const struct omap_gpio_switch *tbl,
int count);
