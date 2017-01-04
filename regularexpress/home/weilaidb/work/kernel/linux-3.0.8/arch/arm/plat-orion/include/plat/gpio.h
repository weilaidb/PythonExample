#define __PLAT_GPIO_H
#define gpio_get_value  __gpio_get_value
#define gpio_set_value  __gpio_set_value
#define gpio_cansleep   __gpio_cansleep
#define gpio_to_irq     __gpio_to_irq
void orion_gpio_set_unused(unsigned pin);
void orion_gpio_set_blink(unsigned pin, int blink);
#define GPIO_INPUT_OK		(1 << 0)
#define GPIO_OUTPUT_OK		(1 << 1)
void orion_gpio_set_valid(unsigned pin, int mode);
void __init orion_gpio_init(int gpio_base, int ngpio,
u32 base, int mask_offset, int secondary_irq_base);
void orion_gpio_irq_handler(int irqoff);
