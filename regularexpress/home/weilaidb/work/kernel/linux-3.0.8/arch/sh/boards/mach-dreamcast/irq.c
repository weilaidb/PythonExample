#define ESR_BASE 0x005f6900
#define EMR_BASE 0x005f6910
#define LEVEL(event) (((event) - HW_EVENT_IRQ_BASE) / 32)
#define EVENT_BIT(event) (((event) - HW_EVENT_IRQ_BASE) & 31)
static inline void disable_systemasic_irq(struct irq_data *data)
static inline void enable_systemasic_irq(struct irq_data *data)
static void mask_ack_systemasic_irq(struct irq_data *data)
struct irq_chip systemasic_int = ;
int systemasic_irq_demux(int irq)
void systemasic_irq_init(void)
