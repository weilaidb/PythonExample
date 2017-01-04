#undef DEBUG
#define XINTC_ISR	0
#define XINTC_IPR	4
#define XINTC_IER	8
#define XINTC_IAR	12
#define XINTC_SIE	16
#define XINTC_CIE	20
#define XINTC_IVR	24
#define XINTC_MER	28
static struct irq_host *master_irqhost;
#define XILINX_INTC_MAXIRQS	(32)
static int xilinx_intc_typetable[XILINX_INTC_MAXIRQS];
static unsigned char xilinx_intc_map_senses[] = ;
static void xilinx_intc_mask(struct irq_data *d)
static int xilinx_intc_set_type(struct irq_data *d, unsigned int flow_type)
static void xilinx_intc_level_unmask(struct irq_data *d)
static struct irq_chip xilinx_intc_level_irqchip = ;
static void xilinx_intc_edge_unmask(struct irq_data *d)
static void xilinx_intc_edge_ack(struct irq_data *d)
static struct irq_chip xilinx_intc_edge_irqchip = ;
static int xilinx_intc_xlate(struct irq_host *h, struct device_node *ct,
const u32 *intspec, unsigned int intsize,
irq_hw_number_t *out_hwirq,
unsigned int *out_flags)
static int xilinx_intc_map(struct irq_host *h, unsigned int virq,
irq_hw_number_t irq)
static struct irq_host_ops xilinx_intc_ops = ;
struct irq_host * __init
xilinx_intc_init(struct device_node *np)
int xilinx_intc_get_irq(void)
#if defined(CONFIG_PPC_I8259)
static void xilinx_i8259_cascade(unsigned int irq, struct irq_desc *desc)
static void __init xilinx_i8259_setup_cascade(void)
static inline void xilinx_i8259_setup_cascade(void)
static struct of_device_id xilinx_intc_match[] __initconst = ;
void __init xilinx_intc_init_tree(void)
