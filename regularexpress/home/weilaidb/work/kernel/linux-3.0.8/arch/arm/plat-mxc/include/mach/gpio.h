#define __ASM_ARCH_MXC_GPIO_H__
#define IMX_GPIO_NR(bank, nr)		(((bank) - 1) * 32 + (nr))
#define gpio_get_value		__gpio_get_value
#define gpio_set_value		__gpio_set_value
#define gpio_cansleep		__gpio_cansleep
#define gpio_to_irq(gpio)	(MXC_GPIO_IRQ_START + (gpio))
#define irq_to_gpio(irq)	((irq) - MXC_GPIO_IRQ_START)
struct mxc_gpio_port ;
#define DEFINE_IMX_GPIO_PORT_IRQ_HIGH(soc, _id, _hwid, _irq, _irq_high)	\
#define DEFINE_IMX_GPIO_PORT_IRQ(soc, _id, _hwid, _irq)			\
DEFINE_IMX_GPIO_PORT_IRQ_HIGH(soc, _id, _hwid, _irq, 0)
#define DEFINE_IMX_GPIO_PORT(soc, _id, _hwid)				\
DEFINE_IMX_GPIO_PORT_IRQ(soc, _id, _hwid, 0)
int mxc_gpio_init(struct mxc_gpio_port*, int);
