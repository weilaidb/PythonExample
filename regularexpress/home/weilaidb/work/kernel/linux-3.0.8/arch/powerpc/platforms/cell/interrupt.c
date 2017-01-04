struct iic ;
static DEFINE_PER_CPU(struct iic, cpu_iic);
#define IIC_NODE_COUNT	2
static struct irq_host *iic_host;
static irq_hw_number_t iic_pending_to_hwnum(struct cbe_iic_pending_bits bits)
static void iic_mask(struct irq_data *d)
static void iic_unmask(struct irq_data *d)
static void iic_eoi(struct irq_data *d)
static struct irq_chip iic_chip = ;
static void iic_ioexc_eoi(struct irq_data *d)
static void iic_ioexc_cascade(unsigned int irq, struct irq_desc *desc)
static struct irq_chip iic_ioexc_chip = ;
static unsigned int iic_get_irq(void)
void iic_setup_cpu(void)
u8 iic_get_target_id(int cpu)
EXPORT_SYMBOL_GPL(iic_get_target_id);
static inline int iic_msg_to_irq(int msg)
void iic_message_pass(int cpu, int msg)
struct irq_host *iic_get_irq_host(int node)
EXPORT_SYMBOL_GPL(iic_get_irq_host);
static void iic_request_ipi(int msg)
void iic_request_IPIs(void)
static int iic_host_match(struct irq_host *h, struct device_node *node)
static int iic_host_map(struct irq_host *h, unsigned int virq,
irq_hw_number_t hw)
static int iic_host_xlate(struct irq_host *h, struct device_node *ct,
const u32 *intspec, unsigned int intsize,
irq_hw_number_t *out_hwirq, unsigned int *out_flags)
static struct irq_host_ops iic_host_ops = ;
static void __init init_one_iic(unsigned int hw_cpu, unsigned long addr,
struct device_node *node)
static int __init setup_iic(void)
void __init iic_init_IRQ(void)
void iic_set_interrupt_routing(int cpu, int thread, int priority)
