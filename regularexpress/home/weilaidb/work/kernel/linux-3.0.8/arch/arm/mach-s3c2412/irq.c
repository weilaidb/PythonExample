#define INTMSK(start, end) ((1 << ((end) + 1 - (start))) - 1)
#define INTMSK_SUB(start, end) (INTMSK(start, end) << ((start - S3C2410_IRQSUB(0))))
static void
s3c2412_irq_mask(struct irq_data *data)
static inline void
s3c2412_irq_ack(struct irq_data *data)
static inline void
s3c2412_irq_maskack(struct irq_data *data)
static void
s3c2412_irq_unmask(struct irq_data *data)
static struct irq_chip s3c2412_irq_eint0t4 = ;
#define INTBIT(x)	(1 << ((x) - S3C2410_IRQSUB(0)))
static void s3c2412_irq_demux_cfsdi(unsigned int irq, struct irq_desc *desc)
#define INTMSK_CFSDI	(1UL << (IRQ_S3C2412_CFSDI - IRQ_EINT0))
#define SUBMSK_CFSDI	INTMSK_SUB(IRQ_S3C2412_SDI, IRQ_S3C2412_CF)
static void s3c2412_irq_cfsdi_mask(struct irq_data *data)
static void s3c2412_irq_cfsdi_unmask(struct irq_data *data)
static void s3c2412_irq_cfsdi_ack(struct irq_data *data)
static struct irq_chip s3c2412_irq_cfsdi = ;
static int s3c2412_irq_rtc_wake(struct irq_data *data, unsigned int state)
static struct irq_chip s3c2412_irq_rtc_chip;
static int s3c2412_irq_add(struct sys_device *sysdev)
static struct sysdev_driver s3c2412_irq_driver = ;
static int s3c2412_irq_init(void)
arch_initcall(s3c2412_irq_init);
