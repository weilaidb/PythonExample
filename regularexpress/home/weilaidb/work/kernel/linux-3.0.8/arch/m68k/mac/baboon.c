extern void mac_enable_irq(unsigned int);
extern void mac_disable_irq(unsigned int);
int baboon_present;
static volatile struct baboon *baboon;
static unsigned char baboon_disabled;
void __init baboon_init(void)
static irqreturn_t baboon_irq(int irq, void *dev_id)
void __init baboon_register_interrupts(void)
void baboon_irq_enable(int irq)
void baboon_irq_disable(int irq)
void baboon_irq_clear(int irq)
int baboon_irq_pending(int irq)
