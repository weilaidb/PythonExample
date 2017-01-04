#define IMASK_PRIORITY	15
static DECLARE_BITMAP(imask_mask, IMASK_PRIORITY);
static int interrupt_priority;
static inline void set_interrupt_registers(int ip)
static void mask_imask_irq(struct irq_data *data)
static void unmask_imask_irq(struct irq_data *data)
static struct irq_chip imask_irq_chip = ;
void make_imask_irq(unsigned int irq)
