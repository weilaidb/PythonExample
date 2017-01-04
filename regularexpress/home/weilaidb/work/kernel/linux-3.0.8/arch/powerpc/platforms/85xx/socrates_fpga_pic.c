#define SOCRATES_FPGA_NUM_IRQS	9
#define FPGA_PIC_IRQCFG		(0x0)
#define FPGA_PIC_IRQMASK(n)	(0x4 + 0x4 * (n))
#define SOCRATES_FPGA_IRQ_MASK	((1 << SOCRATES_FPGA_NUM_IRQS) - 1)
struct socrates_fpga_irq_info ;
static struct socrates_fpga_irq_info fpga_irqs[SOCRATES_FPGA_NUM_IRQS] = ;
static DEFINE_RAW_SPINLOCK(socrates_fpga_pic_lock);
static void __iomem *socrates_fpga_pic_iobase;
static struct irq_host *socrates_fpga_pic_irq_host;
static unsigned int socrates_fpga_irqs[3];
static inline uint32_t socrates_fpga_pic_read(int reg)
static inline void socrates_fpga_pic_write(int reg, uint32_t val)
static inline unsigned int socrates_fpga_pic_get_irq(unsigned int irq)
void socrates_fpga_pic_cascade(unsigned int irq, struct irq_desc *desc)
static void socrates_fpga_pic_ack(struct irq_data *d)
static void socrates_fpga_pic_mask(struct irq_data *d)
static void socrates_fpga_pic_mask_ack(struct irq_data *d)
static void socrates_fpga_pic_unmask(struct irq_data *d)
static void socrates_fpga_pic_eoi(struct irq_data *d)
static int socrates_fpga_pic_set_type(struct irq_data *d,
unsigned int flow_type)
static struct irq_chip socrates_fpga_pic_chip = ;
static int socrates_fpga_pic_host_map(struct irq_host *h, unsigned int virq,
irq_hw_number_t hwirq)
static int socrates_fpga_pic_host_xlate(struct irq_host *h,
struct device_node *ct,	const u32 *intspec, unsigned int intsize,
irq_hw_number_t *out_hwirq, unsigned int *out_flags)
static struct irq_host_ops socrates_fpga_pic_host_ops = ;
void socrates_fpga_pic_init(struct device_node *pic)
