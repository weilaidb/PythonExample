#define WM8350_INT_OFFSET_1                     0
#define WM8350_INT_OFFSET_2                     1
#define WM8350_POWER_UP_INT_OFFSET              2
#define WM8350_UNDER_VOLTAGE_INT_OFFSET         3
#define WM8350_OVER_CURRENT_INT_OFFSET          4
#define WM8350_GPIO_INT_OFFSET                  5
#define WM8350_COMPARATOR_INT_OFFSET            6
struct wm8350_irq_data ;
static struct wm8350_irq_data wm8350_irqs[] = ;
static inline struct wm8350_irq_data *irq_to_wm8350_irq(struct wm8350 *wm8350,
int irq)
static irqreturn_t wm8350_irq(int irq, void *irq_data)
static void wm8350_irq_lock(struct irq_data *data)
static void wm8350_irq_sync_unlock(struct irq_data *data)
static void wm8350_irq_enable(struct irq_data *data)
static void wm8350_irq_disable(struct irq_data *data)
static struct irq_chip wm8350_irq_chip = ;
int wm8350_irq_init(struct wm8350 *wm8350, int irq,
struct wm8350_platform_data *pdata)
int wm8350_irq_exit(struct wm8350 *wm8350)
