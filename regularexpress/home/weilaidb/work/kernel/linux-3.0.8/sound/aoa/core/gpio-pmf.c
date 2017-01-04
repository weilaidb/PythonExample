#define PMF_GPIO(name, bit)					\
static void pmf_gpio_set_##name(struct gpio_runtime *rt, int on)\
\
static int pmf_gpio_get_##name(struct gpio_runtime *rt)		\
PMF_GPIO(headphone, 0);
PMF_GPIO(amp, 1);
PMF_GPIO(lineout, 2);
static void pmf_gpio_set_hw_reset(struct gpio_runtime *rt, int on)
static void pmf_gpio_all_amps_off(struct gpio_runtime *rt)
static void pmf_gpio_all_amps_restore(struct gpio_runtime *rt)
static void pmf_handle_notify(struct work_struct *work)
static void pmf_gpio_init(struct gpio_runtime *rt)
static void pmf_gpio_exit(struct gpio_runtime *rt)
static void pmf_handle_notify_irq(void *data)
static int pmf_set_notify(struct gpio_runtime *rt,
enum notify_type type,
notify_func_t notify,
void *data)
static int pmf_get_detect(struct gpio_runtime *rt,
enum notify_type type)
static struct gpio_methods methods = ;
struct gpio_methods *pmf_gpio_methods = &methods;
EXPORT_SYMBOL_GPL(pmf_gpio_methods);
