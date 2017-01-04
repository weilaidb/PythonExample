struct egpio_chip ;
struct egpio_info ;
static inline void egpio_writew(u16 value, struct egpio_info *ei, int reg)
static inline u16 egpio_readw(struct egpio_info *ei, int reg)
static inline void ack_irqs(struct egpio_info *ei)
static void egpio_ack(struct irq_data *data)
static void egpio_mask(struct irq_data *data)
static void egpio_unmask(struct irq_data *data)
static struct irq_chip egpio_muxed_chip = ;
static void egpio_handler(unsigned int irq, struct irq_desc *desc)
int htc_egpio_get_wakeup_irq(struct device *dev)
EXPORT_SYMBOL(htc_egpio_get_wakeup_irq);
static inline int egpio_pos(struct egpio_info *ei, int bit)
static inline int egpio_bit(struct egpio_info *ei, int bit)
static int egpio_get(struct gpio_chip *chip, unsigned offset)
static int egpio_direction_input(struct gpio_chip *chip, unsigned offset)
static void egpio_set(struct gpio_chip *chip, unsigned offset, int value)
static int egpio_direction_output(struct gpio_chip *chip,
unsigned offset, int value)
static void egpio_write_cache(struct egpio_info *ei)
static int __init egpio_probe(struct platform_device *pdev)
static int __exit egpio_remove(struct platform_device *pdev)
static int egpio_suspend(struct platform_device *pdev, pm_message_t state)
static int egpio_resume(struct platform_device *pdev)
#define egpio_suspend NULL
#define egpio_resume NULL
static struct platform_driver egpio_driver = ;
static int __init egpio_init(void)
static void __exit egpio_exit(void)
subsys_initcall(egpio_init);
module_exit(egpio_exit)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Kevin O'Connor <kevin@koconnor.net>");
