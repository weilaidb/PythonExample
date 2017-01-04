#define __ASM_ARM_HARDWARE_IOP3XX_GPIO_H
#define IOP3XX_N_GPIOS	8
static inline int gpio_get_value(unsigned gpio)
static inline void gpio_set_value(unsigned gpio, int value)
static inline int gpio_cansleep(unsigned gpio)
static inline int gpio_to_irq(int gpio)
static inline int irq_to_gpio(int gpio)
