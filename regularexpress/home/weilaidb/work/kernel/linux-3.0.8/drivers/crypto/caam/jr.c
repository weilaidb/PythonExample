static irqreturn_t caam_jr_interrupt(int irq, void *st_dev)
static void caam_jr_dequeue(unsigned long devarg)
int caam_jr_register(struct device *ctrldev, struct device **rdev)
EXPORT_SYMBOL(caam_jr_register);
int caam_jr_deregister(struct device *rdev)
EXPORT_SYMBOL(caam_jr_deregister);
int caam_jr_enqueue(struct device *dev, u32 *desc,
void (*cbk)(struct device *dev, u32 *desc,
u32 status, void *areq),
void *areq)
EXPORT_SYMBOL(caam_jr_enqueue);
static int caam_reset_hw_jr(struct device *dev)
static int caam_jr_init(struct device *dev)
int caam_jr_shutdown(struct device *dev)
int caam_jr_probe(struct platform_device *pdev, struct device_node *np,
int ring)
