#define __PMC_MSP71XX_GPIO_H
#define ARCH_NR_GPIOS (28 + (3 * 8))
#define gpio_get_value	__gpio_get_value
#define gpio_set_value	__gpio_set_value
#define gpio_cansleep	__gpio_cansleep
extern void msp71xx_init_gpio(void);
extern void msp71xx_init_gpio_extended(void);
extern int msp71xx_set_output_drive(unsigned gpio, int value);
static inline int gpio_set_output_drive(unsigned gpio, int value)
static inline int gpio_to_irq(unsigned gpio)
static inline int irq_to_gpio(unsigned irq)
