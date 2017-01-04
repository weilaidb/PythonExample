#define __ASM_ARCH_GPIO_H
#define GPIO_IN				0
#define GPIO_OUT			1
#define IXP2000_GPIO_LOW		0
#define IXP2000_GPIO_HIGH		1
extern void gpio_line_config(int line, int direction);
static inline int gpio_line_get(int line)
static inline void gpio_line_set(int line, int value)
