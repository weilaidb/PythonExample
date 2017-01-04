#define __BCM47XX_GPIO_H
#define BCM47XX_EXTIF_GPIO_LINES	5
#define BCM47XX_CHIPCO_GPIO_LINES	16
extern int gpio_request(unsigned gpio, const char *label);
extern void gpio_free(unsigned gpio);
extern int gpio_to_irq(unsigned gpio);
static inline int gpio_get_value(unsigned gpio)
static inline void gpio_set_value(unsigned gpio, int value)
static inline int gpio_direction_input(unsigned gpio)
static inline int gpio_direction_output(unsigned gpio, int value)
static inline int gpio_intmask(unsigned gpio, int value)
static inline int gpio_polarity(unsigned gpio, int value)
