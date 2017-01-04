#define OPB_NR_IRQS 32
#define OPB_MLSASIER	0x04
#define OPB_MLSIR	0x50
#define OPB_MLSIER	0x54
#define OPB_MLSIPR	0x58
#define OPB_MLSIIR	0x5c
static int opb_index = 0;
struct opb_pic ;
static u32 opb_in(struct opb_pic *opb, int offset)
static void opb_out(struct opb_pic *opb, int offset, u32 val)
static void opb_unmask_irq(struct irq_data *d)
static void opb_mask_irq(struct irq_data *d)
static void opb_ack_irq(struct irq_data *d)
static void opb_mask_ack_irq(struct irq_data *d)
static int opb_set_irq_type(struct irq_data *d, unsigned int flow)
static struct irq_chip opb_irq_chip = ;
static int opb_host_map(struct irq_host *host, unsigned int virq,
irq_hw_number_t hwirq)
static int opb_host_xlate(struct irq_host *host, struct device_node *dn,
const u32 *intspec, unsigned int intsize,
irq_hw_number_t *out_hwirq, unsigned int *out_type)
static struct irq_host_ops opb_host_ops = ;
irqreturn_t opb_irq_handler(int irq, void *private)
struct opb_pic *opb_pic_init_one(struct device_node *dn)
void __init opb_pic_init(void)
