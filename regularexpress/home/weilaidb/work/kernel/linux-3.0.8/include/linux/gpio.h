#define __LINUX_GPIO_H
#define GPIOF_DIR_OUT	(0 << 0)
#define GPIOF_DIR_IN	(1 << 0)
#define GPIOF_INIT_LOW	(0 << 1)
#define GPIOF_INIT_HIGH	(1 << 1)
#define GPIOF_IN		(GPIOF_DIR_IN)
#define GPIOF_OUT_INIT_LOW	(GPIOF_DIR_OUT | GPIOF_INIT_LOW)
#define GPIOF_OUT_INIT_HIGH	(GPIOF_DIR_OUT | GPIOF_INIT_HIGH)
struct device;
struct gpio;
struct gpio_chip;
static inline bool gpio_is_valid(int number)
static inline int gpio_request(unsigned gpio, const char *label)
static inline int gpio_request_one(unsigned gpio,
unsigned long flags, const char *label)
static inline int gpio_request_array(const struct gpio *array, size_t num)
static inline void gpio_free(unsigned gpio)
static inline void gpio_free_array(const struct gpio *array, size_t num)
static inline int gpio_direction_input(unsigned gpio)
static inline int gpio_direction_output(unsigned gpio, int value)
static inline int gpio_set_debounce(unsigned gpio, unsigned debounce)
static inline int gpio_get_value(unsigned gpio)
static inline void gpio_set_value(unsigned gpio, int value)
static inline int gpio_cansleep(unsigned gpio)
static inline int gpio_get_value_cansleep(unsigned gpio)
static inline void gpio_set_value_cansleep(unsigned gpio, int value)
static inline int gpio_export(unsigned gpio, bool direction_may_change)
static inline int gpio_export_link(struct device *dev, const char *name,
unsigned gpio)
static inline int gpio_sysfs_set_active_low(unsigned gpio, int value)
static inline void gpio_unexport(unsigned gpio)
static inline int gpio_to_irq(unsigned gpio)
static inline int irq_to_gpio(unsigned irq)
