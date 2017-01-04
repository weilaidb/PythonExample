struct wm8994_irq_data ;
static struct wm8994_irq_data wm8994_irqs[] = ;
static inline int irq_data_to_status_reg(struct wm8994_irq_data *irq_data)
static inline int irq_data_to_mask_reg(struct wm8994_irq_data *irq_data)
static inline struct wm8994_irq_data *irq_to_wm8994_irq(struct wm8994 *wm8994,
int irq)
static void wm8994_irq_lock(struct irq_data *data)
static void wm8994_irq_sync_unlock(struct irq_data *data)
static void wm8994_irq_enable(struct irq_data *data)
static void wm8994_irq_disable(struct irq_data *data)
static struct irq_chip wm8994_irq_chip = ;
static irqreturn_t wm8994_irq_thread(int irq, void *data)
int wm8994_irq_init(struct wm8994 *wm8994)
void wm8994_irq_exit(struct wm8994 *wm8994)
