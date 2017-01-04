#define irqdbf(x...)
#define irqdbf2(x...)
#define EXTINT_OFF (IRQ_EINT4 - 4)
extern struct irq_chip s3c_irq_level_chip;
extern struct irq_chip s3c_irq_chip;
static inline void
s3c_irqsub_mask(unsigned int irqno, unsigned int parentbit,
int subcheck)
static inline void
s3c_irqsub_unmask(unsigned int irqno, unsigned int parentbit)
static inline void
s3c_irqsub_maskack(unsigned int irqno, unsigned int parentmask, unsigned int group)
static inline void
s3c_irqsub_ack(unsigned int irqno, unsigned int parentmask, unsigned int group)
extern int s3c_irq_wake(struct irq_data *data, unsigned int state);
#define s3c_irq_wake NULL
extern int s3c_irqext_type(struct irq_data *d, unsigned int type);
