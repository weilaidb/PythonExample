#define __MACH_GPIO_H__
#define gpio_get_value	__gpio_get_value
#define gpio_set_value	__gpio_set_value
#define gpio_cansleep	__gpio_cansleep
#define gpio_to_irq(x)	((x) + GPIO_IRQ_BASE)
#define irq_to_gpio(x)	((x) - GPIO_IRQ_BASE)
