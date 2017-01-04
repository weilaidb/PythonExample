#define	__DAVINCI_GPIO_H
#define DAVINCI_GPIO_BASE 0x01C67000
enum davinci_gpio_type ;
#define	GPIO(X)		(X)
#define GPIO_TO_PIN(bank, gpio)	(16 * (bank) + (gpio))
struct davinci_gpio_controller ;
static inline struct davinci_gpio_controller *
__gpio_to_controller(unsigned gpio)
static inline u32 __gpio_mask(unsigned gpio)
static inline void gpio_set_value(unsigned gpio, int value)
static inline int gpio_get_value(unsigned gpio)
static inline int gpio_cansleep(unsigned gpio)
static inline int gpio_to_irq(unsigned gpio)
static inline int irq_to_gpio(unsigned irq)
