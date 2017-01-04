#define __ASM_ARCH_GPIO_H_
#define KS8695_GPIO_0		0
#define KS8695_GPIO_1		1
#define KS8695_GPIO_2		2
#define KS8695_GPIO_3		3
#define KS8695_GPIO_4		4
#define KS8695_GPIO_5		5
#define KS8695_GPIO_6		6
#define KS8695_GPIO_7		7
#define KS8695_GPIO_8		8
#define KS8695_GPIO_9		9
#define KS8695_GPIO_10		10
#define KS8695_GPIO_11		11
#define KS8695_GPIO_12		12
#define KS8695_GPIO_13		13
#define KS8695_GPIO_14		14
#define KS8695_GPIO_15		15
extern int ks8695_gpio_interrupt(unsigned int pin, unsigned int type);
extern int irq_to_gpio(unsigned int irq);
#define gpio_get_value __gpio_get_value
#define gpio_set_value __gpio_set_value
#define gpio_to_irq __gpio_to_irq
extern void ks8695_register_gpios(void);
