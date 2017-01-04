#define __SYSDEV_SIMPLE_GPIO_H
extern void simple_gpiochip_init(const char *compatible);
static inline void simple_gpiochip_init(const char *compatible)
