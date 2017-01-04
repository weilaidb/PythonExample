#define PIC_VEC_SPURRIOUS      15
extern int cpm_get_irq(struct pt_regs *regs);
static struct irq_host *mpc8xx_pic_host;
#define NR_MASK_WORDS   ((NR_IRQS + 31) / 32)
static unsigned long ppc_cached_irq_mask[NR_MASK_WORDS];
static sysconf8xx_t __iomem *siu_reg;
int cpm_get_irq(struct pt_regs *regs);
static void mpc8xx_unmask_irq(struct irq_data *d)
static void mpc8xx_mask_irq(struct irq_data *d)
static void mpc8xx_ack(struct irq_data *d)
static void mpc8xx_end_irq(struct irq_data *d)
static int mpc8xx_set_irq_type(struct irq_data *d, unsigned int flow_type)
static struct irq_chip mpc8xx_pic = ;
unsigned int mpc8xx_get_irq(void)
static int mpc8xx_pic_host_map(struct irq_host *h, unsigned int virq,
irq_hw_number_t hw)
static int mpc8xx_pic_host_xlate(struct irq_host *h, struct device_node *ct,
const u32 *intspec, unsigned int intsize,
irq_hw_number_t *out_hwirq, unsigned int *out_flags)
static struct irq_host_ops mpc8xx_pic_host_ops = ;
int mpc8xx_pic_init(void)
