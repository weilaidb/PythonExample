#define _ALCHEMY_GPIO_AU1000_H_
#define ALCHEMY_GPIO1_BASE	0
#define ALCHEMY_GPIO2_BASE	200
#define ALCHEMY_GPIO1_NUM	32
#define ALCHEMY_GPIO2_NUM	16
#define ALCHEMY_GPIO1_MAX 	(ALCHEMY_GPIO1_BASE + ALCHEMY_GPIO1_NUM - 1)
#define ALCHEMY_GPIO2_MAX	(ALCHEMY_GPIO2_BASE + ALCHEMY_GPIO2_NUM - 1)
#define MAKE_IRQ(intc, off)	(AU1000_INTC##intc##_INT_BASE + (off))
#define SYS_TRIOUTRD		0x100
#define SYS_TRIOUTCLR		0x100
#define SYS_OUTPUTRD		0x108
#define SYS_OUTPUTSET		0x108
#define SYS_OUTPUTCLR		0x10C
#define SYS_PINSTATERD		0x110
#define SYS_PININPUTEN		0x110
#define GPIO2_DIR		0x00
#define GPIO2_OUTPUT		0x08
#define GPIO2_PINSTATE		0x0C
#define GPIO2_INTENABLE		0x10
#define GPIO2_ENABLE		0x14
struct gpio;
static inline int au1000_gpio1_to_irq(int gpio)
static inline int au1000_gpio2_to_irq(int gpio)
static inline int au1000_irq_to_gpio(int irq)
static inline int au1500_gpio1_to_irq(int gpio)
static inline int au1500_gpio2_to_irq(int gpio)
static inline int au1500_irq_to_gpio(int irq)
static inline int au1100_gpio1_to_irq(int gpio)
static inline int au1100_gpio2_to_irq(int gpio)
static inline int au1100_irq_to_gpio(int irq)
static inline int au1550_gpio1_to_irq(int gpio)
static inline int au1550_gpio2_to_irq(int gpio)
static inline int au1550_irq_to_gpio(int irq)
static inline int au1200_gpio1_to_irq(int gpio)
static inline int au1200_gpio2_to_irq(int gpio)
static inline int au1200_irq_to_gpio(int irq)
static inline void alchemy_gpio1_set_value(int gpio, int v)
static inline int alchemy_gpio1_get_value(int gpio)
static inline int alchemy_gpio1_direction_input(int gpio)
static inline int alchemy_gpio1_direction_output(int gpio, int v)
static inline int alchemy_gpio1_is_valid(int gpio)
static inline int alchemy_gpio1_to_irq(int gpio)
static inline void __alchemy_gpio2_mod_dir(int gpio, int to_out)
static inline void alchemy_gpio2_set_value(int gpio, int v)
static inline int alchemy_gpio2_get_value(int gpio)
static inline int alchemy_gpio2_direction_input(int gpio)
static inline int alchemy_gpio2_direction_output(int gpio, int v)
static inline int alchemy_gpio2_is_valid(int gpio)
static inline int alchemy_gpio2_to_irq(int gpio)
static inline void alchemy_gpio1_input_enable(void)
static inline void __alchemy_gpio2_mod_int(int gpio2, int en)
static inline void alchemy_gpio2_enable_int(int gpio2)
static inline void alchemy_gpio2_disable_int(int gpio2)
static inline void alchemy_gpio2_enable(void)
static inline void alchemy_gpio2_disable(void)
static inline int alchemy_gpio_direction_input(int gpio)
static inline int alchemy_gpio_direction_output(int gpio, int v)
static inline int alchemy_gpio_get_value(int gpio)
static inline void alchemy_gpio_set_value(int gpio, int v)
static inline int alchemy_gpio_is_valid(int gpio)
static inline int alchemy_gpio_cansleep(int gpio)
static inline int alchemy_gpio_to_irq(int gpio)
static inline int alchemy_irq_to_gpio(int irq)
static inline int gpio_direction_input(int gpio)
static inline int gpio_direction_output(int gpio, int v)
static inline int gpio_get_value(int gpio)
static inline void gpio_set_value(int gpio, int v)
static inline int gpio_get_value_cansleep(unsigned gpio)
static inline void gpio_set_value_cansleep(unsigned gpio, int value)
static inline int gpio_is_valid(int gpio)
static inline int gpio_cansleep(int gpio)
static inline int gpio_to_irq(int gpio)
static inline int irq_to_gpio(int irq)
static inline int gpio_request(unsigned gpio, const char *label)
static inline int gpio_request_one(unsigned gpio,
unsigned long flags, const char *label)
static inline int gpio_request_array(struct gpio *array, size_t num)
static inline void gpio_free(unsigned gpio)
static inline void gpio_free_array(struct gpio *array, size_t num)
static inline int gpio_set_debounce(unsigned gpio, unsigned debounce)
static inline int gpio_export(unsigned gpio, bool direction_may_change)
static inline int gpio_export_link(struct device *dev, const char *name,
unsigned gpio)
static inline int gpio_sysfs_set_active_low(unsigned gpio, int value)
static inline void gpio_unexport(unsigned gpio)
#define gpio_to_irq	__gpio_to_irq
#define gpio_get_value	__gpio_get_value
#define gpio_set_value	__gpio_set_value
#define gpio_cansleep	__gpio_cansleep
#define irq_to_gpio	alchemy_irq_to_gpio
