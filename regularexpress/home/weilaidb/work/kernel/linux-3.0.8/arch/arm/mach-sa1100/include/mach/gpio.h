#define __ASM_ARCH_SA1100_GPIO_H
static inline int gpio_get_value(unsigned gpio)
static inline void gpio_set_value(unsigned gpio, int value)
#define gpio_cansleep	__gpio_cansleep
#define gpio_to_irq(gpio)	((gpio < 11) ? (IRQ_GPIO0 + gpio) : \
(IRQ_GPIO11 - 11 + gpio))
#define irq_to_gpio(irq)	((irq < IRQ_GPIO11_27) ? (irq - IRQ_GPIO0) : \
(irq - IRQ_GPIO11 + 11))
