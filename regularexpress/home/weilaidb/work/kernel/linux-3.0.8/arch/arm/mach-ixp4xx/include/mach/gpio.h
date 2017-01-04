#define __ASM_ARCH_IXP4XX_GPIO_H
static inline int gpio_request(unsigned gpio, const char *label)
static inline void gpio_free(unsigned gpio)
static inline int gpio_direction_input(unsigned gpio)
static inline int gpio_direction_output(unsigned gpio, int level)
static inline int gpio_get_value(unsigned gpio)
static inline void gpio_set_value(unsigned gpio, int value)
extern int gpio_to_irq(int gpio);
extern int irq_to_gpio(unsigned int irq);
