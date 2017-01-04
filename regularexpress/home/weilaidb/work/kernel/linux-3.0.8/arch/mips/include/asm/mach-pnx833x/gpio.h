#define __ASM_MIPS_MACH_PNX833X_GPIO_H
#define SET_REG_BIT(reg, bit)		do  while (0)
#define CLEAR_REG_BIT(reg, bit)		do  while (0)
static inline void pnx833x_gpio_init(void)
static inline void pnx833x_gpio_select_input(unsigned int pin)
static inline void pnx833x_gpio_select_output(unsigned int pin)
static inline void pnx833x_gpio_select_function_io(unsigned int pin)
static inline void pnx833x_gpio_select_function_alt(unsigned int pin)
static inline int pnx833x_gpio_read(unsigned int pin)
static inline void pnx833x_gpio_write(unsigned int val, unsigned int pin)
#define GPIO_INT_NONE		0
#define GPIO_INT_LEVEL_LOW	1
#define GPIO_INT_LEVEL_HIGH	2
#define GPIO_INT_EDGE_RISING	3
#define GPIO_INT_EDGE_FALLING	4
#define GPIO_INT_EDGE_BOTH	5
static inline void pnx833x_gpio_setup_irq(int when, unsigned int pin)
static inline void pnx833x_gpio_enable_irq(unsigned int pin)
static inline void pnx833x_gpio_disable_irq(unsigned int pin)
static inline void pnx833x_gpio_clear_irq(unsigned int pin)
