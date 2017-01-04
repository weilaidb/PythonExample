volatile __u8 *via1, *via2;
int rbv_present;
int via_alt_mapping;
EXPORT_SYMBOL(via_alt_mapping);
static __u8 rbv_clear;
static int gIER,gIFR,gBufA,gBufB;
#define TICK_SIZE		10000
#define MAC_CLOCK_TICK		(783300/HZ)
#define MAC_CLOCK_LOW		(MAC_CLOCK_TICK&0xFF)
#define MAC_CLOCK_HIGH		(MAC_CLOCK_TICK>>8)
static u8 nubus_disabled;
void via_debug_dump(void);
irqreturn_t via1_irq(int, void *);
irqreturn_t via2_irq(int, void *);
irqreturn_t via_nubus_irq(int, void *);
void via_irq_enable(int irq);
void via_irq_disable(int irq);
void via_irq_clear(int irq);
void __init via_init(void)
void __init via_init_clock(irq_handler_t func)
void __init via_register_interrupts(void)
void via_debug_dump(void)
unsigned long mac_gettimeoffset (void)
void via_flush_cache(void)
int via_get_cache_disable(void)
void __init via_nubus_init(void)
irqreturn_t via1_irq(int irq, void *dev_id)
irqreturn_t via2_irq(int irq, void *dev_id)
irqreturn_t via_nubus_irq(int irq, void *dev_id)
void via_irq_enable(int irq)
void via_irq_disable(int irq)
void via_irq_clear(int irq)
int via_irq_pending(int irq)
void via1_set_head(int head)
EXPORT_SYMBOL(via1_set_head);
