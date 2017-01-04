#define __ASM_ARCH_GPIO_H
#define LPC32XX_GPIO_P0_MAX 8
#define LPC32XX_GPIO_P1_MAX 24
#define LPC32XX_GPIO_P2_MAX 13
#define LPC32XX_GPIO_P3_MAX 6
#define LPC32XX_GPI_P3_MAX 28
#define LPC32XX_GPO_P3_MAX 24
#define LPC32XX_GPIO_P0_GRP 0
#define LPC32XX_GPIO_P1_GRP (LPC32XX_GPIO_P0_GRP + LPC32XX_GPIO_P0_MAX)
#define LPC32XX_GPIO_P2_GRP (LPC32XX_GPIO_P1_GRP + LPC32XX_GPIO_P1_MAX)
#define LPC32XX_GPIO_P3_GRP (LPC32XX_GPIO_P2_GRP + LPC32XX_GPIO_P2_MAX)
#define LPC32XX_GPI_P3_GRP (LPC32XX_GPIO_P3_GRP + LPC32XX_GPIO_P3_MAX)
#define LPC32XX_GPO_P3_GRP (LPC32XX_GPI_P3_GRP + LPC32XX_GPI_P3_MAX)
#define LPC32XX_GPIO(x, y) ((x) + (y))
static inline int gpio_get_value(unsigned gpio)
static inline void gpio_set_value(unsigned gpio, int value)
static inline int gpio_cansleep(unsigned gpio)
static inline int gpio_to_irq(unsigned gpio)
