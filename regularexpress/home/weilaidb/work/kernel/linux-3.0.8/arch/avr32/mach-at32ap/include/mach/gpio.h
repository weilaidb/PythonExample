#define __ASM_AVR32_ARCH_GPIO_H
#define ARCH_NR_GPIOS	(NR_GPIO_IRQS + 2 * 32)
static inline int gpio_get_value(unsigned int gpio)
static inline void gpio_set_value(unsigned int gpio, int value)
static inline int gpio_cansleep(unsigned int gpio)
static inline int gpio_to_irq(unsigned int gpio)
static inline int irq_to_gpio(unsigned int irq)
