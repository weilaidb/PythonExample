#define __MACH_MXS_GPIO_H__
#define MXS_GPIO_NR(bank, nr)	((bank) * 32 + (nr))
#define gpio_get_value		__gpio_get_value
#define gpio_set_value		__gpio_set_value
#define gpio_cansleep		__gpio_cansleep
#define gpio_to_irq		__gpio_to_irq
#define irq_to_gpio(irq)	((irq) - MXS_GPIO_IRQ_START)
