struct max8998_irq_data ;
static struct max8998_irq_data max8998_irqs[] = ;
static inline struct max8998_irq_data *
irq_to_max8998_irq(struct max8998_dev *max8998, int irq)
static void max8998_irq_lock(struct irq_data *data)
static void max8998_irq_sync_unlock(struct irq_data *data)
static void max8998_irq_unmask(struct irq_data *data)
static void max8998_irq_mask(struct irq_data *data)
static struct irq_chip max8998_irq_chip = ;
static irqreturn_t max8998_irq_thread(int irq, void *data)
int max8998_irq_resume(struct max8998_dev *max8998)
int max8998_irq_init(struct max8998_dev *max8998)
void max8998_irq_exit(struct max8998_dev *max8998)
