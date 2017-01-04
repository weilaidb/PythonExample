#define OFFSET_IRR 0x0000
#define OFFSET_IMR 0x0004
#define OFFSET_IPR 0x0008
#define OFFSET_ICR 0x000C
#define OFFSET_IAR 0x0010
#define GSC_EIM_WIDTH 5
struct gsc_irq ;
struct gsc_asic ;
int gsc_common_setup(struct parisc_device *parent, struct gsc_asic *gsc_asic);
int gsc_alloc_irq(struct gsc_irq *dev);
int gsc_claim_irq(struct gsc_irq *dev, int irq);
int gsc_assign_irq(struct irq_chip *type, void *data);
int gsc_find_local_irq(unsigned int irq, int *global_irq, int limit);
void gsc_fixup_irqs(struct parisc_device *parent, void *ctrl,
void (*choose)(struct parisc_device *child, void *ctrl));
void gsc_asic_assign_irq(struct gsc_asic *asic, int local_irq, int *irqp);
irqreturn_t gsc_asic_intr(int irq, void *dev);
