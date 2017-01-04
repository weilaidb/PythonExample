int oss_present;
volatile struct mac_oss *oss;
static irqreturn_t oss_irq(int, void *);
static irqreturn_t oss_nubus_irq(int, void *);
extern irqreturn_t via1_irq(int, void *);
void __init oss_init(void)
void __init oss_register_interrupts(void)
void __init oss_nubus_init(void)
static irqreturn_t oss_irq(int irq, void *dev_id)
static irqreturn_t oss_nubus_irq(int irq, void *dev_id)
void oss_irq_enable(int irq)
void oss_irq_disable(int irq)
void oss_irq_clear(int irq)
int oss_irq_pending(int irq)
