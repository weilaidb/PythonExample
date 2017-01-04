static void s3c_irq_demux_wdtac97(unsigned int irq,
struct irq_desc *desc)
#define INTMSK_WDT	 (1UL << (IRQ_WDT - IRQ_EINT0))
static void
s3c_irq_wdtac97_mask(struct irq_data *data)
static void
s3c_irq_wdtac97_unmask(struct irq_data *data)
static void
s3c_irq_wdtac97_ack(struct irq_data *data)
static struct irq_chip s3c_irq_wdtac97 = ;
static int s3c2440_irq_add(struct sys_device *sysdev)
static struct sysdev_driver s3c2440_irq_driver = ;
static int s3c2440_irq_init(void)
arch_initcall(s3c2440_irq_init);
