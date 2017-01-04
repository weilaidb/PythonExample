#define __ASM_ARCH_W90P910_GPIO_H
#define gpio_get_value	__gpio_get_value
#define gpio_set_value	__gpio_set_value
#define gpio_cansleep	__gpio_cansleep
static inline int gpio_to_irq(unsigned gpio)
static inline int irq_to_gpio(unsigned irq)
