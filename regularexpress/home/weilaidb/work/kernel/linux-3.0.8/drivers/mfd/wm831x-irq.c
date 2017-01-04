struct wm831x_irq_data ;
static struct wm831x_irq_data wm831x_irqs[] = ;
static inline int irq_data_to_status_reg(struct wm831x_irq_data *irq_data)
static inline int irq_data_to_mask_reg(struct wm831x_irq_data *irq_data)
static inline struct wm831x_irq_data *irq_to_wm831x_irq(struct wm831x *wm831x,
int irq)
static void wm831x_irq_lock(struct irq_data *data)
static void wm831x_irq_sync_unlock(struct irq_data *data)
static void wm831x_irq_enable(struct irq_data *data)
static void wm831x_irq_disable(struct irq_data *data)
static int wm831x_irq_set_type(struct irq_data *data, unsigned int type)
static struct irq_chip wm831x_irq_chip = ;
static irqreturn_t wm831x_irq_thread(int irq, void *data)
int wm831x_irq_init(struct wm831x *wm831x, int irq)
void wm831x_irq_exit(struct wm831x *wm831x)
