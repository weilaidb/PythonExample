struct qe_gpio_chip ;
static inline struct qe_gpio_chip *
to_qe_gpio_chip(struct of_mm_gpio_chip *mm_gc)
static void qe_gpio_save_regs(struct of_mm_gpio_chip *mm_gc)
static int qe_gpio_get(struct gpio_chip *gc, unsigned int gpio)
static void qe_gpio_set(struct gpio_chip *gc, unsigned int gpio, int val)
static int qe_gpio_dir_in(struct gpio_chip *gc, unsigned int gpio)
static int qe_gpio_dir_out(struct gpio_chip *gc, unsigned int gpio, int val)
struct qe_pin ;
struct qe_pin *qe_pin_request(struct device_node *np, int index)
EXPORT_SYMBOL(qe_pin_request);
void qe_pin_free(struct qe_pin *qe_pin)
EXPORT_SYMBOL(qe_pin_free);
void qe_pin_set_dedicated(struct qe_pin *qe_pin)
EXPORT_SYMBOL(qe_pin_set_dedicated);
void qe_pin_set_gpio(struct qe_pin *qe_pin)
EXPORT_SYMBOL(qe_pin_set_gpio);
static int __init qe_add_gpiochips(void)
arch_initcall(qe_add_gpiochips);
