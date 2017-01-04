#define CPM2_IRQ_EXT1		19
#define CPM2_IRQ_EXT7		25
#define CPM2_IRQ_PORTC15	48
#define CPM2_IRQ_PORTC0		63
static intctl_cpm2_t __iomem *cpm2_intctl;
static struct irq_host *cpm2_pic_host;
#define NR_MASK_WORDS   ((NR_IRQS + 31) / 32)
static unsigned long ppc_cached_irq_mask[NR_MASK_WORDS];
static const u_char irq_to_siureg[] = ;
static const u_char irq_to_siubit[] = ;
static void cpm2_mask_irq(struct irq_data *d)
static void cpm2_unmask_irq(struct irq_data *d)
static void cpm2_ack(struct irq_data *d)
static void cpm2_end_irq(struct irq_data *d)
static int cpm2_set_irq_type(struct irq_data *d, unsigned int flow_type)
static struct irq_chip cpm2_pic = ;
unsigned int cpm2_get_irq(void)
static int cpm2_pic_host_map(struct irq_host *h, unsigned int virq,
irq_hw_number_t hw)
static int cpm2_pic_host_xlate(struct irq_host *h, struct device_node *ct,
const u32 *intspec, unsigned int intsize,
irq_hw_number_t *out_hwirq, unsigned int *out_flags)
static struct irq_host_ops cpm2_pic_host_ops = ;
void cpm2_pic_init(struct device_node *node)
