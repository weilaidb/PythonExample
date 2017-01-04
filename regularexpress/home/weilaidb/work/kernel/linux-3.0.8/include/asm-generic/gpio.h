#define _ASM_GENERIC_GPIO_H
#define ARCH_NR_GPIOS		256
static inline bool gpio_is_valid(int number)
struct device;
struct seq_file;
struct module;
struct device_node;
struct gpio_chip ;
extern const char *gpiochip_is_requested(struct gpio_chip *chip,
unsigned offset);
extern int __must_check gpiochip_reserve(int start, int ngpio);
extern int gpiochip_add(struct gpio_chip *chip);
extern int __must_check gpiochip_remove(struct gpio_chip *chip);
extern struct gpio_chip *gpiochip_find(void *data,
int (*match)(struct gpio_chip *chip,
void *data));
extern int gpio_request(unsigned gpio, const char *label);
extern void gpio_free(unsigned gpio);
extern int gpio_direction_input(unsigned gpio);
extern int gpio_direction_output(unsigned gpio, int value);
extern int gpio_set_debounce(unsigned gpio, unsigned debounce);
extern int gpio_get_value_cansleep(unsigned gpio);
extern void gpio_set_value_cansleep(unsigned gpio, int value);
extern int __gpio_get_value(unsigned gpio);
extern void __gpio_set_value(unsigned gpio, int value);
extern int __gpio_cansleep(unsigned gpio);
extern int __gpio_to_irq(unsigned gpio);
struct gpio ;
extern int gpio_request_one(unsigned gpio, unsigned long flags, const char *label);
extern int gpio_request_array(const struct gpio *array, size_t num);
extern void gpio_free_array(const struct gpio *array, size_t num);
extern int gpio_export(unsigned gpio, bool direction_may_change);
extern int gpio_export_link(struct device *dev, const char *name,
unsigned gpio);
extern int gpio_sysfs_set_active_low(unsigned gpio, int value);
extern void gpio_unexport(unsigned gpio);
static inline bool gpio_is_valid(int number)
static inline int gpio_cansleep(unsigned gpio)
static inline int gpio_get_value_cansleep(unsigned gpio)
static inline void gpio_set_value_cansleep(unsigned gpio, int value)
struct device;
static inline int gpio_export(unsigned gpio, bool direction_may_change)
static inline int gpio_export_link(struct device *dev, const char *name,
unsigned gpio)
static inline int gpio_sysfs_set_active_low(unsigned gpio, int value)
static inline void gpio_unexport(unsigned gpio)
