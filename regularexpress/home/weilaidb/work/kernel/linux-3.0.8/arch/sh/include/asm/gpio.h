#define __ASM_SH_GPIO_H
#if defined(CONFIG_CPU_SH3)
#define ARCH_NR_GPIOS 512
static inline int gpio_get_value(unsigned gpio)
static inline void gpio_set_value(unsigned gpio, int value)
static inline int gpio_cansleep(unsigned gpio)
static inline int gpio_to_irq(unsigned gpio)
static inline int irq_to_gpio(unsigned int irq)
