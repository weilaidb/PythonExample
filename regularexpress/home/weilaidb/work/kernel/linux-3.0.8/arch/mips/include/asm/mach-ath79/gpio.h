#define __ASM_MACH_ATH79_GPIO_H
#define ARCH_NR_GPIOS	64
int gpio_to_irq(unsigned gpio);
int irq_to_gpio(unsigned irq);
int gpio_get_value(unsigned gpio);
void gpio_set_value(unsigned gpio, int value);
#define gpio_cansleep	__gpio_cansleep
