void _intc_enable(struct irq_data *data, unsigned long handle)
static void intc_enable(struct irq_data *data)
static void intc_disable(struct irq_data *data)
static int intc_set_wake(struct irq_data *data, unsigned int on)
static int intc_set_affinity(struct irq_data *data,
const struct cpumask *cpumask,
bool force)
static void intc_mask_ack(struct irq_data *data)
static struct intc_handle_int *intc_find_irq(struct intc_handle_int *hp,
unsigned int nr_hp,
unsigned int irq)
int intc_set_priority(unsigned int irq, unsigned int prio)
#define SENSE_VALID_FLAG 0x80
#define VALID(x) (x | SENSE_VALID_FLAG)
static unsigned char intc_irq_sense_table[IRQ_TYPE_SENSE_MASK + 1] = ;
static int intc_set_type(struct irq_data *data, unsigned int type)
struct irq_chip intc_irq_chip	= ;
