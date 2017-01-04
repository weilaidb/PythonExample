static int headphone_mute_gpio;
static int master_mute_gpio;
static int amp_mute_gpio;
static int lineout_mute_gpio;
static int hw_reset_gpio;
static int lineout_detect_gpio;
static int headphone_detect_gpio;
static int linein_detect_gpio;
static int headphone_mute_gpio_activestate;
static int master_mute_gpio_activestate;
static int amp_mute_gpio_activestate;
static int lineout_mute_gpio_activestate;
static int hw_reset_gpio_activestate;
static int lineout_detect_gpio_activestate;
static int headphone_detect_gpio_activestate;
static int linein_detect_gpio_activestate;
static struct device_node *lineout_detect_node;
static struct device_node *linein_detect_node;
static struct device_node *headphone_detect_node;
static int lineout_detect_irq;
static int linein_detect_irq;
static int headphone_detect_irq;
static struct device_node *get_gpio(char *name,
char *altname,
int *gpioptr,
int *gpioactiveptr)
static void get_irq(struct device_node * np, int *irqptr)
#define SWITCH_GPIO(name, v, on)				\
(((v)&~1) | ((on)?					\
(name##_gpio_activestate==0?4:5):	\
(name##_gpio_activestate==0?5:4)))
#define FTR_GPIO(name, bit)					\
static void ftr_gpio_set_##name(struct gpio_runtime *rt, int on)\
\
static int ftr_gpio_get_##name(struct gpio_runtime *rt)		\
FTR_GPIO(headphone, 0);
FTR_GPIO(amp, 1);
FTR_GPIO(lineout, 2);
FTR_GPIO(master, 3);
static void ftr_gpio_set_hw_reset(struct gpio_runtime *rt, int on)
static struct gpio_methods methods;
static void ftr_gpio_all_amps_off(struct gpio_runtime *rt)
static void ftr_gpio_all_amps_restore(struct gpio_runtime *rt)
static void ftr_handle_notify(struct work_struct *work)
static void gpio_enable_dual_edge(int gpio)
static void ftr_gpio_init(struct gpio_runtime *rt)
static void ftr_gpio_exit(struct gpio_runtime *rt)
static irqreturn_t ftr_handle_notify_irq(int xx, void *data)
static int ftr_set_notify(struct gpio_runtime *rt,
enum notify_type type,
notify_func_t notify,
void *data)
static int ftr_get_detect(struct gpio_runtime *rt,
enum notify_type type)
static struct gpio_methods methods = ;
struct gpio_methods *ftr_gpio_methods = &methods;
EXPORT_SYMBOL_GPL(ftr_gpio_methods);
