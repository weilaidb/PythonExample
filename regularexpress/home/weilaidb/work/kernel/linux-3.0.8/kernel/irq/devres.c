struct irq_devres ;
static void devm_irq_release(struct device *dev, void *res)
static int devm_irq_match(struct device *dev, void *res, void *data)
int devm_request_threaded_irq(struct device *dev, unsigned int irq,
irq_handler_t handler, irq_handler_t thread_fn,
unsigned long irqflags, const char *devname,
void *dev_id)
EXPORT_SYMBOL(devm_request_threaded_irq);
void devm_free_irq(struct device *dev, unsigned int irq, void *dev_id)
EXPORT_SYMBOL(devm_free_irq);
