static int twl6030_interrupt_mapping[24] = ;
static unsigned twl6030_irq_base;
static struct completion irq_event;
static int twl6030_irq_thread(void *data)
static irqreturn_t handle_twl6030_pih(int irq, void *devid)
static inline void activate_irq(int irq)
static unsigned twl6030_irq_next;
int twl6030_interrupt_unmask(u8 bit_mask, u8 offset)
EXPORT_SYMBOL(twl6030_interrupt_unmask);
int twl6030_interrupt_mask(u8 bit_mask, u8 offset)
EXPORT_SYMBOL(twl6030_interrupt_mask);
int twl6030_mmc_card_detect_config(void)
EXPORT_SYMBOL(twl6030_mmc_card_detect_config);
int twl6030_mmc_card_detect(struct device *dev, int slot)
EXPORT_SYMBOL(twl6030_mmc_card_detect);
int twl6030_init_irq(int irq_num, unsigned irq_base, unsigned irq_end)
int twl6030_exit_irq(void)
