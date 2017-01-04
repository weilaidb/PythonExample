#undef DEBUG
#define MPC52xx_IRQ_L1_CRIT	(0)
#define MPC52xx_IRQ_L1_MAIN	(1)
#define MPC52xx_IRQ_L1_PERP	(2)
#define MPC52xx_IRQ_L1_SDMA	(3)
#define MPC52xx_IRQ_L1_OFFSET	(6)
#define MPC52xx_IRQ_L1_MASK	(0x00c0)
#define MPC52xx_IRQ_L2_MASK	(0x003f)
#define MPC52xx_IRQ_HIGHTESTHWIRQ (0xd0)
static struct of_device_id mpc52xx_pic_ids[] __initdata = ;
static struct of_device_id mpc52xx_sdma_ids[] __initdata = ;
static struct mpc52xx_intr __iomem *intr;
static struct mpc52xx_sdma __iomem *sdma;
static struct irq_host *mpc52xx_irqhost = NULL;
static unsigned char mpc52xx_map_senses[4] = ;
static inline void io_be_setbit(u32 __iomem *addr, int bitno)
static inline void io_be_clrbit(u32 __iomem *addr, int bitno)
static void mpc52xx_extirq_mask(struct irq_data *d)
static void mpc52xx_extirq_unmask(struct irq_data *d)
static void mpc52xx_extirq_ack(struct irq_data *d)
static int mpc52xx_extirq_set_type(struct irq_data *d, unsigned int flow_type)
static struct irq_chip mpc52xx_extirq_irqchip = ;
static int mpc52xx_null_set_type(struct irq_data *d, unsigned int flow_type)
static void mpc52xx_main_mask(struct irq_data *d)
static void mpc52xx_main_unmask(struct irq_data *d)
static struct irq_chip mpc52xx_main_irqchip = ;
static void mpc52xx_periph_mask(struct irq_data *d)
static void mpc52xx_periph_unmask(struct irq_data *d)
static struct irq_chip mpc52xx_periph_irqchip = ;
static void mpc52xx_sdma_mask(struct irq_data *d)
static void mpc52xx_sdma_unmask(struct irq_data *d)
static void mpc52xx_sdma_ack(struct irq_data *d)
static struct irq_chip mpc52xx_sdma_irqchip = ;
static int mpc52xx_is_extirq(int l1, int l2)
static int mpc52xx_irqhost_xlate(struct irq_host *h, struct device_node *ct,
const u32 *intspec, unsigned int intsize,
irq_hw_number_t *out_hwirq,
unsigned int *out_flags)
static int mpc52xx_irqhost_map(struct irq_host *h, unsigned int virq,
irq_hw_number_t irq)
static struct irq_host_ops mpc52xx_irqhost_ops = ;
void __init mpc52xx_init_irq(void)
unsigned int mpc52xx_get_irq(void)
