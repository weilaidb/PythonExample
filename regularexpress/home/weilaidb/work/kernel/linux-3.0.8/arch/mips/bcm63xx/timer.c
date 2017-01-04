static DEFINE_RAW_SPINLOCK(timer_reg_lock);
static DEFINE_RAW_SPINLOCK(timer_data_lock);
static struct clk *periph_clk;
static struct timer_data  timer_data[BCM63XX_TIMER_COUNT];
static irqreturn_t timer_interrupt(int irq, void *dev_id)
int bcm63xx_timer_enable(int id)
EXPORT_SYMBOL(bcm63xx_timer_enable);
int bcm63xx_timer_disable(int id)
EXPORT_SYMBOL(bcm63xx_timer_disable);
int bcm63xx_timer_register(int id, void (*callback)(void *data), void *data)
EXPORT_SYMBOL(bcm63xx_timer_register);
void bcm63xx_timer_unregister(int id)
EXPORT_SYMBOL(bcm63xx_timer_unregister);
unsigned int bcm63xx_timer_countdown(unsigned int countdown_us)
EXPORT_SYMBOL(bcm63xx_timer_countdown);
int bcm63xx_timer_set(int id, int monotonic, unsigned int countdown_us)
EXPORT_SYMBOL(bcm63xx_timer_set);
int bcm63xx_timer_init(void)
arch_initcall(bcm63xx_timer_init);
