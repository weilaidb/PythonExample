#define __LINUX_OF_GPIO_H
struct device_node;
enum of_gpio_flags ;
struct of_mm_gpio_chip ;
static inline struct of_mm_gpio_chip *to_of_mm_gpio_chip(struct gpio_chip *gc)
extern int of_get_gpio_flags(struct device_node *np, int index,
enum of_gpio_flags *flags);
extern unsigned int of_gpio_count(struct device_node *np);
extern int of_mm_gpiochip_add(struct device_node *np,
struct of_mm_gpio_chip *mm_gc);
extern void of_gpiochip_add(struct gpio_chip *gc);
extern void of_gpiochip_remove(struct gpio_chip *gc);
extern struct gpio_chip *of_node_to_gpiochip(struct device_node *np);
static inline int of_get_gpio_flags(struct device_node *np, int index,
enum of_gpio_flags *flags)
static inline unsigned int of_gpio_count(struct device_node *np)
static inline void of_gpiochip_add(struct gpio_chip *gc)
static inline void of_gpiochip_remove(struct gpio_chip *gc)
static inline int of_get_gpio(struct device_node *np, int index)
