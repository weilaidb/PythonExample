static void s3c_irq_demux_cam(unsigned int irq,
struct irq_desc *desc)
#define INTMSK_CAM (1UL << (IRQ_CAM - IRQ_EINT0))
static void
s3c_irq_cam_mask(struct irq_data *data)
static void
s3c_irq_cam_unmask(struct irq_data *data)
static void
s3c_irq_cam_ack(struct irq_data *data)
static struct irq_chip s3c_irq_cam = ;
static int s3c244x_irq_add(struct sys_device *sysdev)
static struct sysdev_driver s3c2440_irq_driver = ;
static int s3c2440_irq_init(void)
arch_initcall(s3c2440_irq_init);
static struct sysdev_driver s3c2442_irq_driver = ;
static int s3c2442_irq_init(void)
arch_initcall(s3c2442_irq_init);
