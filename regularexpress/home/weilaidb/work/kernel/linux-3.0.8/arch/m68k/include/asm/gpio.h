#define coldfire_gpio_h
#if defined(CONFIG_M5206) || defined(CONFIG_M5206e) || \
defined(CONFIG_M520x) || defined(CONFIG_M523x) || \
defined(CONFIG_M527x) || defined(CONFIG_M528x) || \
defined(CONFIG_M532x) || defined(CONFIG_M54xx)
#define MCFGPIO_PORTTYPE		u8
#define MCFGPIO_PORTSIZE		8
#define mcfgpio_read(port)		__raw_readb(port)
#define mcfgpio_write(data, port)	__raw_writeb(data, port)
#elif defined(CONFIG_M5307) || defined(CONFIG_M5407) || defined(CONFIG_M5272)
#define MCFGPIO_PORTTYPE		u16
#define MCFGPIO_PORTSIZE		16
#define mcfgpio_read(port)		__raw_readw(port)
#define mcfgpio_write(data, port)	__raw_writew(data, port)
#elif defined(CONFIG_M5249)
#define MCFGPIO_PORTTYPE		u32
#define MCFGPIO_PORTSIZE		32
#define mcfgpio_read(port)		__raw_readl(port)
#define mcfgpio_write(data, port)	__raw_writel(data, port)
#define mcfgpio_bit(gpio)		(1 << ((gpio) %  MCFGPIO_PORTSIZE))
#define mcfgpio_port(gpio)		((gpio) / MCFGPIO_PORTSIZE)
#if defined(CONFIG_M520x) || defined(CONFIG_M523x) || \
defined(CONFIG_M527x) || defined(CONFIG_M528x) || defined(CONFIG_M532x)
#if defined(CONFIG_M528x)
#define MCFGPIO_SCR_START		40
#define MCFGPIO_SCR_START		8
#define MCFGPIO_SETR_PORT(gpio)		(MCFGPIO_SETR + \
mcfgpio_port(gpio - MCFGPIO_SCR_START))
#define MCFGPIO_CLRR_PORT(gpio)		(MCFGPIO_CLRR + \
mcfgpio_port(gpio - MCFGPIO_SCR_START))
#define MCFGPIO_SCR_START		MCFGPIO_PIN_MAX
#define MCFGPIO_SETR_PORT(gpio)		0
#define MCFGPIO_CLRR_PORT(gpio)		0
static inline u32 __mcf_gpio_ppdr(unsigned gpio)
static inline u32 __mcf_gpio_podr(unsigned gpio)
static inline int gpio_get_value(unsigned gpio)
static inline void gpio_set_value(unsigned gpio, int value)
static inline int gpio_to_irq(unsigned gpio)
static inline int irq_to_gpio(unsigned irq)
static inline int gpio_cansleep(unsigned gpio)
