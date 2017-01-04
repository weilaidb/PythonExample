static inline int irq_to_tps65910_irq(struct tps65910 *tps65910,
int irq)
static irqreturn_t tps65910_irq(int irq, void *irq_data)
static void tps65910_irq_lock(struct irq_data *data)
static void tps65910_irq_sync_unlock(struct irq_data *data)
static void tps65910_irq_enable(struct irq_data *data)
static void tps65910_irq_disable(struct irq_data *data)
static struct irq_chip tps65910_irq_chip = ;
int tps65910_irq_init(struct tps65910 *tps65910, int irq,
struct tps65910_platform_data *pdata)
int tps65910_irq_exit(struct tps65910 *tps65910)
