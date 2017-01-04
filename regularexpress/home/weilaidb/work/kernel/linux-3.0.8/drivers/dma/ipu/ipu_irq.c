static u32 ipu_read_reg(struct ipu *ipu, unsigned long reg)
static void ipu_write_reg(struct ipu *ipu, u32 value, unsigned long reg)
#define IPU_IRQ_NR_FN_BANKS 3
#define IPU_IRQ_NR_ERR_BANKS 2
#define IPU_IRQ_NR_BANKS (IPU_IRQ_NR_FN_BANKS + IPU_IRQ_NR_ERR_BANKS)
struct ipu_irq_bank ;
static struct ipu_irq_bank irq_bank[IPU_IRQ_NR_BANKS] = ;
struct ipu_irq_map ;
static struct ipu_irq_map irq_map[CONFIG_MX3_IPU_IRQS];
static DEFINE_MUTEX(map_lock);
static DEFINE_SPINLOCK(bank_lock);
static struct ipu_irq_map *src2map(unsigned int src)
static void ipu_irq_unmask(struct irq_data *d)
static void ipu_irq_mask(struct irq_data *d)
static void ipu_irq_ack(struct irq_data *d)
bool ipu_irq_status(unsigned int irq)
int ipu_irq_map(unsigned int source)
int ipu_irq_unmap(unsigned int source)
static void ipu_irq_err(unsigned int irq, struct irq_desc *desc)
static void ipu_irq_fn(unsigned int irq, struct irq_desc *desc)
static struct irq_chip ipu_irq_chip = ;
int __init ipu_irq_attach_irq(struct ipu *ipu, struct platform_device *dev)
void ipu_irq_detach_irq(struct ipu *ipu, struct platform_device *dev)
